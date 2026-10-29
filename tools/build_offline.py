"""Build a version-specific offline copy; do not execute it on the host."""
from pathlib import Path
import hashlib,json
p=Path(__file__).resolve().parent
original=(p/'pengutunnel.unpacked.elf').read_bytes()
expected='3638b68f377a65d5a65f10b5d38744157067ecd175377094b6cd48c923b2bd18'
assert hashlib.sha256(original).hexdigest()==expected
b=bytearray(original);edits=[]
def patch(address,old,new,purpose):
 offset=address-0x400000
 assert b[offset:offset+len(bytes.fromhex(old))]==bytes.fromhex(old),hex(address)
 data=bytes.fromhex(new);before=bytes(b[offset:offset+len(data)])
 b[offset:offset+len(data)]=data
 edits.append({'address':hex(address),'offset':offset,'before':before.hex(),'after':data.hex(),'purpose':purpose})
# Go ABIInternal: empty token (AX/BX), nil error (CX/DI), no allocated frame.
patch(0x136d460,'4c8da42458fdffff','31c031db31c931ffc3','return empty token and no licensing error; do not make HTTP request')
patch(0x1eb20c0,'4c8da42460fdffff','31c031db31c931ffc3','skip reverse-L4 public IP preflight used only to select the license IP')
# No origin controller, background network lookup, or hourly deadline.
patch(0x1dc7440,'493b6610','c3','do not initialize origin check background worker')
(p/'pengutunnel.offline.elf').write_bytes(b)
meta={'input_sha256':expected,'output_sha256':hashlib.sha256(b).hexdigest(),'output_bytes':len(b),'edits':edits,'status':'pending offline tests','preserved':['original ELF layout','PSK authentication and transport encryption code','Ed25519 implementation and TLS verification code'],'scope':'specific v5.1.3 binary; both peers must use the same tested copy'}
(p/'offline-build-final.json').write_text(json.dumps(meta,indent=2));print(json.dumps(meta,indent=2))

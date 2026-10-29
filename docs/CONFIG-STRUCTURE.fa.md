# ساختار تنظیمات بازیابی‌شده

این نام‌ها و نوع‌ها از فرادادهٔ Go در باینری اصلی استخراج شده‌اند؛ پیش‌فرض و معنای همهٔ گزینه‌ها تأیید نشده است.

## [transport]

| گزینه | نوع |
|---|---|
| `type` | string |
| `mode` | string |
| `listen` | string |
| `remote` | string |
| `mux` | int |
| `pool_connection` | int |
| `icmp_type` | int |
| `icmp_code` | int |
| `dns_domain` | string |
| `source_ip` | string |
| `bind_interface` | string |
| `spoof_source` | string |
| `spoof_peer` | string |
| `rekey_interval` | int |
| `l4_header` | string |
| `l4_direction` | string |
| `sni` | string |
| `tls_fingerprint` | string |
| `ws_path` | string |
| `ws_host` | string |
| `xhttp_path` | string |
| `xhttp_host` | string |
| `xhttp_cdn` | bool |
| `sni_spoof` | bool |
| `sni_spoof_names` | string |
| `sni_spoof_ttl` | int |
| `sni_spoof_strict` | bool |
| `l4_tls` | bool |
| `reorder_ms` | int |
| `fec` | int |

## [tun]

| گزینه | نوع |
|---|---|
| `name` | string |
| `address` | string |
| `mtu` | int |
| `health_port` | int |

## [security]

| گزینه | نوع |
|---|---|
| `enable_encryption` | bool |
| `algorithm` | string |
| `psk` | string |

## [license]

| گزینه | نوع |
|---|---|
| `key` | string |
| `self` | bool |

## [health]

| گزینه | نوع |
|---|---|
| `heartbeat_interval` | int |
| `heartbeat_timeout` | int |

## [license_server]

| گزینه | نوع |
|---|---|
| `listen` | string |
| `db` | string |
| `signing_key` | string |
| `trust_proxy` | bool |
| `hmac_compat` | pointer |
| `min_core_version` | string |
| `token_secret` | string |

## [tuning]

| گزینه | نوع |
|---|---|
| `auto_tuning` | bool |
| `profile` | string |
| `workers` | int |
| `channel_size` | int |
| `so_sndbuf` | int |
| `batch_size` | int |
| `batch_bytes` | int |
| `stream_window` | int |

## [logging]

| گزینه | نوع |
|---|---|
| `level` | string |

## [forward]

| گزینه | نوع |
|---|---|
| `proxy_protocol` | pointer |
| `ports` | slice |

## [xui_iplimit]

| گزینه | نوع |
|---|---|
| `enabled` | bool |
| `mode` | string |
| `jail` | string |
| `poll_interval` | int |
| `control_port` | int |
| `server_addr` | string |
| `peer_ip` | string |
| `max_ban_minutes` | int |

## [ipx]

| گزینه | نوع |
|---|---|
| `mode` | string |
| `profile` | string |
| `listen_ip` | string |
| `dst_ip` | string |
| `interface` | string |
| `icmp_type` | int |
| `icmp_code` | int |
| `spoof_source` | string |
| `spoof_peer` | string |

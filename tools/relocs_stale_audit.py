#!/usr/bin/env python3
"""relocs_stale_audit.py - count relocs.c name references that resolved to
auto-stubs (stale Ghidra dedup names vs TU definitional names)."""
import re

rel = open('src/cde_relocs.c').read()
rel_names = re.findall(r'\{\s*0x[0-9a-fA-F]+u,\s*"([^"]+)"\s*\}', rel)

au = open('pe_obj/cde_autostubs.c').read()
au_names = set(re.findall(r'\b(?:void|double|int|float|char|long|unsigned|bool|short)\s+(\w+)\s*\(', au))

pe = open('pe_obj/cde_pe_stubs.c').read()
pe_names = set(re.findall(r'^\w[\w ]*?\**\s*\**(\w+)\s*\(', '\n'.join(
    l for l in pe.split('\n') if re.match(r'^(?:void|int|double|float|char|long|unsigned|bool|short|struct)\b', l)), re.M))

au_only = {n for n in au_names if n not in pe_names}
rel_set = set(rel_names)
broken = rel_set & au_only
print(f'relocs entries={len(rel_names)} unique={len(rel_set)}')
print(f'autostub fn names={len(au_names)} (excl pe-stubs: {len(au_only)})')
print(f'relocs names bound to autostubs={len(broken)}')
for n in sorted(broken)[:20]:
    print('  ', n)
# save full list for the fix
with open('/tmp/relocs_stale_names.txt', 'w') as f:
    for n in sorted(broken):
        f.write(n + '\n')
print('-> /tmp/relocs_stale_names.txt')

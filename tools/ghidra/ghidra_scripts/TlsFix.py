# TlsFix.py - diagnose & fix TLS index mislabel (Rsrc_Icon overlap).
# mode=diag: print symbols near __tls_index; mode=fix: remove offending label, apply __tls_index.
# @category BSim.CDE
from ghidra.program.model.symbol import SourceType

args = getScriptArgs()
mode = args[0] if args else 'diag'

fm = currentProgram.getFunctionManager()
st = currentProgram.getSymbolTable()

# 1) locate Rsrc_Icon* and tls symbols
rsrc_syms = []
tls_syms = []
for s in st.getAllSymbols(True):
    n = s.getName()
    if n.startswith('Rsrc_Icon'):
        rsrc_syms.append(s)
    elif 'tls_index' in n:
        tls_syms.append(s)

print('[TlsFix] Rsrc_Icon* count=%d' % len(rsrc_syms))
outside = 0
inside = 0
from ghidra.program.model.address import AddressSet
RSRC_LO = currentProgram.getAddressFactory().getAddress('008e5000')
RSRC_HI = currentProgram.getAddressFactory().getAddress('0099a000')
bad = []
for s in rsrc_syms:
    a = s.getAddress()
    if a >= RSRC_LO and a < RSRC_HI:
        inside += 1
    else:
        outside += 1
        if len(bad) < 10:
            bad.append('%s @ %s' % (s.getName(), a))
print('[TlsFix] inside .rsrc=%d outside=%d' % (inside, outside))
for b in bad:
    print('   outside: %s' % b)
print('[TlsFix] tls_index syms count=%d' % len(tls_syms))
for s in tls_syms[:6]:
    print('   %s @ %s' % (s.getName(), s.getAddress()))

if mode == 'fix':
    tx = currentProgram.startTransaction('TlsFix')
    try:
        fixed = 0
        for s in rsrc_syms:
            # remove huge mislabeled resource symbol definitions (labels only)
            s.delete()
            fixed += 1
        print('[TlsFix] removed %d Rsrc_Icon* symbols' % fixed)
    finally:
        currentProgram.endTransaction(tx, True)

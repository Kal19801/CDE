# DumpData.py - dump ALL defined data items + ALL symbol labels to TSVs.
# Truth sources for the r19 sweep data closure:
#   sweep_data.tsv    : defined data (addr/size/type/label)
#   sweep_symbols.tsv : every symbol label (addr/name) - covers labels on
#                       undefined bytes that the decompiler still references
# @category BSim.CDE
args = getScriptArgs()
outp = args[0] if args else '/tmp/sweep_data.tsv'
outs = args[1] if len(args) > 1 else '/tmp/sweep_symbols.tsv'
listing = currentProgram.getListing()
n = 0
w = open(outp, 'w')
w.write('addr\tsize\ttype\tname\n')
it = listing.getDefinedData(True)
while it.hasNext():
    d = it.next()
    try:
        a = d.getAddress()
        sz = d.getLength()
        tn = d.getDataType().getName()
        nm = d.getLabel() or ('DAT_%08x' % a.getOffset())
        w.write('%08x\t%d\t%s\t%s\n' % (a.getOffset(), sz, tn.replace('\t', ' '), nm))
        n += 1
    except Exception:
        pass
w.close()
print('[DumpData] wrote %d data items -> %s' % (n, outp))

st = currentProgram.getSymbolTable()
m = 0
w2 = open(outs, 'w')
w2.write('addr\tname\n')
for s in st.getAllSymbols(True):
    try:
        a = s.getAddress()
        if a is None:
            continue
        nm = s.getName()
        if not nm:
            continue
        w2.write('%08x\t%s\n' % (a.getOffset(), nm))
        m += 1
    except Exception:
        pass
w2.close()
print('[DumpData] wrote %d symbols -> %s' % (m, outs))

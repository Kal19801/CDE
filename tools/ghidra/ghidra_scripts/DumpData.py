# DumpData.py - dump ALL defined data items (addr/size/type/label) to TSV.
# One-shot truth source for the r19 sweep data closure.
# @category BSim.CDE
args = getScriptArgs()
outp = args[0] if args else '/tmp/sweep_data.tsv'
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

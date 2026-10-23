# DataScan.py - find DATA items typed with <needle>; optionally intersect with
# references from functions listed in a TSV (va per line).
# args: <needle> [tsv]   @category BSim.CDE
from ghidra.program.model.address import AddressSet

args = getScriptArgs()
needle = args[0]
tsv = args[1] if len(args) > 1 else None

fm = currentProgram.getFunctionManager()
listing = currentProgram.getListing()

from_set = AddressSet()
if tsv:
    for ln in open(tsv):
        va = ln.split('\t')[0].strip()
        if not va or va.startswith('#'):
            continue
        f = getFunctionAt(currentProgram.getAddressFactory().getAddress(va))
        if f is not None:
            b = f.getBody()
            from_set.addRange(b.getMinAddress(), b.getMaxAddress())

print('[DataScan] functions under test: %d addr ranges' % from_set.getNumAddressRanges())

n_all = 0
n_hit = 0
hits = []
di = listing.getDefinedData(True)
for d in di:
    n_all += 1
    try:
        nm = d.getDataType().getName()
    except Exception:
        continue
    if needle in nm:
        n_hit += 1
        addr = d.getAddress()
        # who references this data?
        refs = d.getReferenceIteratorTo() if hasattr(d, 'getReferenceIteratorTo') else None
        owners = []
        it = currentProgram.getReferenceManager().getReferencesTo(addr)
        for r in it:
            fa = fm.getFunctionAt(r.getFromAddress())
            if fa is not None:
                owners.append('%s@%s' % (fa.getName(), fa.getEntryPoint()))
            if len(owners) >= 4:
                break
        in_test = from_set.contains(addr)
        hits.append((addr, nm, in_test, owners))

print('[DataScan] data items=%d, typed-with-needle=%d' % (n_all, n_hit))
for addr, nm, in_test, owners in hits[:40]:
    mark = ' <<< IN-TEST-FN' if in_test else ''
    print('[DataScan] %s %s refs:%s%s' % (addr, nm[:70], ','.join(owners[:4]), mark))

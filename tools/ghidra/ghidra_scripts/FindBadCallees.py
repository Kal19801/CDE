# FindBadCallees.py - crawl call targets of functions listed in a TSV (va per
# line); report callees whose signature has parameters that look un-assignable
# (struct-by-value types, e.g. ActorDropdownAction). @category BSim.CDE
from ghidra.program.model.listing import Function
from ghidra.program.model.symbol import RefType

args = getScriptArgs()
targets = {}
for ln in open(args[0]):
    va = ln.strip()
    if not va or va.startswith('#'):
        continue
    addr = currentProgram.getAddressFactory().getAddress(va)
    f = getFunctionAt(addr)
    if f is None:
        continue
    af = f.getBody()
    it = currentProgram.getListing().getInstructions(af, True)
    for ins in it:
        if ins.getMnemonicString() not in ('CALL', 'CALLf'):
            continue
        objs = ins.getOpObjects(0)
        if not objs:
            continue
        ta = objs[-1]
        if not isinstance(ta, ghidra.program.model.address.Address):
            continue
        cf = getFunctionAt(ta)
        if cf is None:
            continue
        key = str(ta)
        if key not in targets:
            targets[key] = [cf.getName(), 0, []]
        targets[key][1] += 1

print("[FindBadCallees] distinct callees: %d" % len(targets))
# rank by reference count
for key, (nm, cnt, extra) in sorted(targets.items(), key=lambda kv: -kv[1][1]):
    cf = getFunctionAt(currentProgram.getAddressFactory().getAddress(key))
    params = cf.getParameters()
    ptypes = []
    bad = False
    for p in params:
        dt = p.getDataType()
        n = dt.getName()
        ptypes.append(n)
        if 'ActorDropdownAction' in n:
            bad = True
    sig = ",".join(ptypes[:6])
    mark = ' <<< ACTORDDA' if bad else ''
    print("[FindBadCallees] %s x%d %s conv=%s params[%d]=%s%s" % (
        key, cnt, nm, cf.getCallingConventionName(), len(params), sig, mark))

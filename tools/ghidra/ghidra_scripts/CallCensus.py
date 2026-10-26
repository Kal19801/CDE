# CallCensus.py - decompile all callees of a function to find which callee is
# the poison host (same Low-level Error "Cannot assign parameter address").
# args: <va> [tsv_out]   @category BSim.CDE
from ghidra.app.decompiler import DecompInterface

args = getScriptArgs()
va = args[0]
tsv_out = args[1] if len(args) > 1 else None

f = getFunctionAt(currentProgram.getAddressFactory().getAddress(va))
if f is None:
    print('[CallCensus] NO FUNCTION at ' + va)
else:
    di = DecompInterface()
    di.openProgram(currentProgram)
    callees = f.getCalledFunctions(monitor)
    print('[CallCensus] %s @%s -> %d callees' % (f.getName(), va, callees.size()))
    hosts = []
    rows = []
    for cf in callees:
        ep = str(cf.getEntryPoint())
        try:
            body = cf.getBody().getNumAddresses()
        except Exception:
            body = -1
        try:
            res = di.decompileFunction(cf, 60, monitor)
            ok = res.decompileCompleted()
            msg = (res.getErrorMessage() or '').replace('\n', ' ').strip() if res else 'null-res'
        except Exception as e:
            ok = False
            msg = 'EXC:%s' % e
        # param census
        try:
            pt = '|'.join(p.getDataType().getName() for p in cf.getParameters())
        except Exception:
            pt = 'ERR'
        poison = (not ok) and ('Cannot assign' in msg)
        rows.append((ep, cf.getName(), cf.getCallingConventionName(), str(body), str(ok), msg[:150], pt))
        if poison:
            hosts.append(rows[-1])
        print('[CallCallee] %s %s conv=%s body=%s ok=%s %s' % (ep, cf.getName(), cf.getCallingConventionName(), body, ok, msg[:100]))
        if 'ActorDropdown' in pt:
            print('[CallCallee]   ^^ PARAMS MENTION POISON TYPE: ' + pt)
    print('[CallCensus] SUMMARY callees=%d poison_hosts=%d' % (len(rows), len(hosts)))
    for ep, nm, conv, body, ok, msg, pt in hosts:
        print('[CallCensus] HOST %s %s conv=%s body=%s : %s' % (ep, nm, conv, body, msg))
        print('[CallCensus] HOST-PARAMS %s' % pt)
    if tsv_out:
        with open(tsv_out, 'w') as fh:
            for r in rows:
                fh.write('\t'.join(r) + '\n')
    di.dispose()

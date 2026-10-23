# SigCheck.py - print signatures for TSV addresses (restore verification).
# args: <tsv>  @category BSim.CDE
args = getScriptArgs()
for ln in open(args[0]):
    va = ln.split('\t')[0].strip()
    if not va or va.startswith('#'):
        continue
    f = getFunctionAt(currentProgram.getAddressFactory().getAddress(va))
    if f is None:
        print('[SigCheck] %s NO FUNCTION' % va)
        continue
    ps = f.getParameters()
    pstr = ','.join(p.getDataType().getName() for p in ps[:5])
    print('[SigCheck] %s %s conv=%s ret=%s params[%d]=%s src=%s' % (
        va, f.getName(), f.getCallingConventionName(),
        f.getReturnType().getName(), len(ps), pstr,
        f.getSignatureSource()))

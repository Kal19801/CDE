# ThunkProbe.py - report thunk-ness and resolved targets for TSV addresses.
# args: <tsv>  @category BSim.CDE
args = getScriptArgs()
for ln in open(args[0]):
    va = ln.split('\t')[0].strip()
    if not va or va.startswith('#'):
        continue
    a = currentProgram.getAddressFactory().getAddress(va)
    f = getFunctionAt(a)
    if f is None:
        print('[ThunkProbe] %s NO FUNCTION' % va)
        continue
    is_t = f.isThunk()
    tgt = ''
    if is_t:
        tf = f.getThunkedFunction(True)
        if tf is not None:
            tgt = '%s@%s ret=%s params=%d' % (
                tf.getName(), tf.getEntryPoint(),
                tf.getReturnType().getName(),
                tf.getParameterCount())
    print('[ThunkProbe] %s %s thunk=%s body=%d %s' % (
        va, f.getName(), is_t, f.getBody().getNumAddresses(), tgt))

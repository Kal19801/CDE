# BisectCallee.py - find which callee poisons decompilation of target fns.
# For each direct callee: reset sig (in-memory), re-decompile target with a
# FRESH DecompInterface, record ok/fail. Leaves callee resets in place only
# for callees that unblock decompilation (logged).
# args: <target_tsv>  @category BSim.CDE
from ghidra.app.decompiler import DecompInterface

args = getScriptArgs()
targets = []
for ln in open(args[0]):
    va = ln.split('\t')[0].strip()
    if not va or va.startswith('#'):
        continue
    f = getFunctionAt(currentProgram.getAddressFactory().getAddress(va))
    if f is not None:
        targets.append(f)

def callees_of(f):
    out = []
    it = currentProgram.getListing().getInstructions(f.getBody(), True)
    for ins in it:
        if ins.getMnemonicString() != 'CALL':
            continue
        objs = ins.getOpObjects(0)
        if not objs:
            continue
        ta = objs[-1]
        if not isinstance(ta, ghidra.program.model.address.Address):
            continue
        cf = getFunctionAt(ta)
        if cf is not None:
            out.append(cf)
    return out

def try_decompile(f):
    di = DecompInterface()
    di.openProgram(currentProgram)
    res = di.decompileFunction(f, 120, monitor)
    ok = res is not None and res.decompileCompleted()
    err = '' if ok else (res.getErrorMessage() if res else 'null')
    di.dispose()
    return ok, err

def reset_sig(f):
    from ghidra.program.model.data import VoidDataType
    from ghidra.program.model.symbol import SourceType
    from ghidra.program.model.listing import Function
    f.setCustomVariableStorage(False)
    f.setReturnType(VoidDataType(), SourceType.USER_DEFINED)
    f.updateFunction('__cdecl', None,
                     Function.FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS,
                     True, SourceType.USER_DEFINED)

# pick the first failing target
tf = None
for f in targets:
    ok, err = try_decompile(f)
    print('[Bisect] %s %s ok=%s %s' % (f.getEntryPoint(), f.getName(), ok,
          ('' if ok else err.strip()[:60])))
    if not ok:
        tf = f
        break

if tf is None:
    print('[Bisect] all targets decompile; nothing to bisect')
else:
    cbs = callees_of(tf)
    print('[Bisect] target %s has %d direct callees' % (tf.getName(), len(cbs)))
    for cf in cbs:
        reset_sig(cf)
        ok, err = try_decompile(tf)
        if ok:
            print('[Bisect] UNBLOCKED by resetting callee %s %s' % (
                cf.getEntryPoint(), cf.getName()))
            break
        else:
            print('[Bisect] callee %s %s: still fails' % (
                cf.getEntryPoint(), cf.getName()))
    else:
        print('[Bisect] no direct callee reset unblocked -> poison deeper')

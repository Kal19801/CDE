# PoisonFixProbe.py - locate poisoned _func_ FunctionDefinitionDataTypes
# (params with locked-but-empty storage), rebuild them storage-free, then
# immediately re-decompile the Laser 15 targets to verify the unlock.
# args: <tsv of va> <outdir>   @category BSim.CDE
from ghidra.program.model.data import FunctionDefinitionDataType, FunctionDefinition, ParameterDefinitionImpl
from ghidra.program.model.data import TypeDef
from ghidra.app.decompiler import DecompInterface

args = getScriptArgs()
laser_tsv = args[0]
outdir = args[1]

dtm = currentProgram.getDataTypeManager()
fm = currentProgram.getFunctionManager()

# ---- 1. locate poisoned defs ----
poison_defs = []
n_funcdefs = 0
it = dtm.getAllDataTypes()
while it.hasNext():
    dt = it.next()
    try:
        if not isinstance(dt, FunctionDefinition):
            continue
        n_funcdefs += 1
        try:
            dargs = dt.getArguments()
        except Exception as e:
            print('[Probe] getArguments FAILED for %s: %s' % (dt.getPathName(), e))
            continue
        hit = False
        for i in range(len(dargs)):
            a = dargs[i]
            try:
                adt = a.getDataType()
            except Exception:
                adt = None
            if adt is None:
                hit = True  # null arg type = poison too
                break
            if 'ActorDropdownAction' in adt.getName():
                hit = True
                break
        if hit:
            poison_defs.append(dt)
    except Exception:
        pass

print('[Probe] FunctionDefinitionDataTypes in DTM: %d, poisoned: %d' % (n_funcdefs, len(poison_defs)))
for d in poison_defs[:20]:
    try:
        dd = d.getArguments()
        argstr = ';'.join('%s:%s' % (dd[i].getName(),
                                     dd[i].getDataType().getName() if dd[i].getDataType() else 'NULL')
                          for i in range(len(dd)))
    except Exception as e:
        argstr = 'ERR:%s' % e
    print('[Probe] POISON def %s path=%s' % (d.getName(), d.getPathName()))
    print('[Probe]   args: %s' % argstr)

# ---- 2. rebuild storage-free (transaction) ----
tx = currentProgram.startTransaction('poison-fix')
fixed = 0
try:
    for d in poison_defs:
        try:
            oldargs = d.getArguments()
            newparams = []
            for i in range(len(oldargs)):
                a = oldargs[i]
                adt = a.getDataType()
                if adt is None:
                    from ghidra.program.model.data import Undefined1DataType
                    adt = Undefined1DataType()
                newparams.append(ParameterDefinitionImpl(a.getName(), adt, None))
            d.setArguments(newparams)  # in-place: storage-free params
            fixed += 1
            print('[Probe] FIXED %s' % d.getName())
        except Exception as e:
            print('[Probe] def %s ERROR: %s' % (d.getName(), e))
    currentProgram.endTransaction(tx, True)
except Exception as e:
    currentProgram.endTransaction(tx, False)
    print('[Probe] TRANSACTION ABORTED: %s' % e)
    raise
print('[Probe] fixed %d/%d defs' % (fixed, len(poison_defs)))

# ---- 3. re-decompile Laser targets ----
di = DecompInterface()
di.openProgram(currentProgram)
ok = 0
fail = 0
import os
for ln in open(laser_tsv):
    ln = ln.strip()
    if not ln or ln.startswith('#'):
        continue
    va, nm = ln.split('\t')[0], ln.split('\t')[1]
    f = getFunctionAt(currentProgram.getAddressFactory().getAddress(va))
    if f is None:
        print('[Probe] %s NO FUNCTION' % va)
        fail += 1
        continue
    res = di.decompileFunction(f, 120, monitor)
    okflag = res is not None and res.decompileCompleted()
    msg = (res.getErrorMessage() or '').replace('\n', ' ').strip() if res else 'null'
    print('[Probe] %s %s ok=%s %s' % (va, f.getName(), okflag, msg[:120]))
    if okflag:
        ok += 1
        safe = nm.replaceAll('[^A-Za-z0-9_]', '_')
        w = open(os.path.join(outdir, va + '_' + safe + '.c'), 'w')
        w.print(res.getDecompiledFunction().getC())
        w.close()
    else:
        fail += 1
print('[Probe] SUMMARY ok=%d fail=%d' % (ok, fail))
di.dispose()

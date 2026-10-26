# PoisonFix2.py - replace by-value LARGE struct params (the ones the native
# decompiler cannot assign storage for when locked-empty) with 4-byte pointers
# in the poisoned _func_ defs, then re-decompile Laser targets.
# args: <laser tsv> [needle]   @category BSim.CDE
from ghidra.program.model.data import FunctionDefinition, ParameterDefinitionImpl, Undefined1DataType, PointerDataType
from ghidra.app.decompiler import DecompInterface
import os, re

args = getScriptArgs()
laser_tsv = args[0]
needle = args[1] if len(args) > 1 else 'ActorDropdownAction'
dtm = currentProgram.getDataTypeManager()
af = currentProgram.getAddressFactory()

ptr4 = PointerDataType(Undefined1DataType(), 4)

fixed = 0
def fix_one(d):
    global fixed
    dargs = d.getArguments()
    newp = []
    changed = False
    for i in range(len(dargs)):
        a = dargs[i]
        try:
            adt = a.getDataType()
        except Exception:
            adt = None
        if adt is None:
            newp.append(ParameterDefinitionImpl(a.getName() or ('p%d' % i), ptr4, None))
            changed = True
            continue
        nm = adt.getName()
        # poison condition: by-value struct/union larger than 8 bytes
        big = False
        try:
            big = (adt.getLength() or 0) > 8 and nm != 'undefined'
            # pointer/array/typedef-to-pointer: getLength() reflects pointer size 4
            desc = adt.toString().lower()
        except Exception:
            big = True
        if big and (needle == 'ALL' or needle in nm):
            newp.append(ParameterDefinitionImpl((a.getName() or 'p%d' % i) + '_asptr', ptr4, None))
            changed = True
        elif adt is None or (adt.getLength() or 0) == 0:
            newp.append(ParameterDefinitionImpl(a.getName() or ('p%d' % i), ptr4, None))
            changed = True
        else:
            newp.append(ParameterDefinitionImpl(a.getName() or ('p%d' % i), adt, None))
    if changed:
        d.setArguments(newp)
        fixed += 1
        return True
    return False

poison_defs = []
it = dtm.getAllDataTypes()
while it.hasNext():
    dt = it.next()
    try:
        if not isinstance(dt, FunctionDefinition):
            continue
        dargs = dt.getArguments()
        for i in range(len(dargs)):
            try:
                adt = dargs[i].getDataType()
            except Exception:
                adt = None
            if adt is None or (needle == 'ALL' or needle in adt.getName()):
                poison_defs.append(dt)
                break
    except Exception:
        pass
print('[Fix2] poisoned defs found: %d' % len(poison_defs))

tx = currentProgram.startTransaction('poison-fix2')
try:
    for d in poison_defs:
        try:
            fix_one(d)
        except Exception as e:
            print('[Fix2] ERR %s: %s' % (d.getName(), e))
    currentProgram.endTransaction(tx, True)
except Exception as e:
    currentProgram.endTransaction(tx, False)
    print('[Fix2] TX ABORT: %s' % e)
    raise
print('[Fix2] fixed %d defs' % fixed)

# retest
di = DecompInterface()
di.openProgram(currentProgram)
ok = 0
fail = 0
outdir = '/tmp/laser17_fixed'
if not os.path.isdir(outdir):
    os.makedirs(outdir)
for ln in open(laser_tsv):
    ln = ln.strip()
    if not ln or ln.startswith('#'):
        continue
    va, nm = ln.split('\t')[0], ln.split('\t')[1]
    f = getFunctionAt(af.getAddress(va))
    if f is None:
        print('[Fix2] %s NO FUNCTION' % va)
        fail += 1
        continue
    res = di.decompileFunction(f, 120, monitor)
    okflag = res is not None and res.decompileCompleted()
    msg = (res.getErrorMessage() or '').replace('\n', ' ').strip() if res else 'null'
    print('[Fix2] %s %s ok=%s %s' % (va, f.getName(), okflag, msg[:100]))
    if okflag:
        ok += 1
        safe = re.sub(r'[^A-Za-z0-9_]', '_', nm)
        w = open(os.path.join(outdir, va + '_' + safe + '.c'), 'w')
        w.write(res.getDecompiledFunction().getC())
        w.close()
    else:
        fail += 1
print('[Fix2] SUMMARY ok=%d fail=%d' % (ok, fail))
di.dispose()

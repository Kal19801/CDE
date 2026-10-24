# TypeBisect.py - staged bisect of the poison type vector for LaserModule::GetGeneratedName.
# Stage1: census of data refs from 63b920 with their types.
# Stage2: untype Delegate<void,ActorDropdownAction>.CallbackFunction -> retest
# Stage3: untype ALL composite fields typed ptr->_func_*ActorDropdown*  -> retest
# args: <test va>   @category BSim.CDE
from ghidra.program.model.data import FunctionDefinition, Pointer, TypeDef, Composite, Undefined1DataType
from ghidra.program.model.data import PointerDataType
from ghidra.app.decompiler import DecompInterface
from ghidra.program.model.address import AddressSet

args = getScriptArgs()
test_va = args[0]
dtm = currentProgram.getDataTypeManager()
listing = currentProgram.getListing()
af = currentProgram.getAddressFactory()

tf = getFunctionAt(af.getAddress(test_va))

def retest(tag):
    di = DecompInterface()
    di.openProgram(currentProgram)
    f = getFunctionAt(af.getAddress(test_va))
    res = di.decompileFunction(f, 120, monitor)
    ok = res is not None and res.decompileCompleted()
    msg = (res.getErrorMessage() or '').replace('\n', ' ').strip() if res else 'null'
    print('[Bisect] %s -> ok=%s %s' % (tag, ok, msg[:110]))
    di.dispose()
    return ok

# ---- Stage 1: data reference census ----
body = tf.getBody()
ref_types = {}
it = listing.getInstructions(tf.getBody(), True)
nrefs = 0
for ins in it:
    for r in ins.getReferencesFrom():
        nrefs += 1
        d = listing.getDataAt(r.getToAddress())
        if d is not None:
            tnm = d.getDataType().getName()
            ref_types[tnm] = ref_types.get(tnm, 0) + 1
print('[Bisect] Stage1: %d refs, distinct data types at refs: %d' % (nrefs, len(ref_types)))
for k in sorted(ref_types, key=lambda x: -ref_types[x])[:20]:
    print('[Bisect]   %d x %s' % (ref_types[k], k))

# find structs containing a field named like memo/table/global-ish? just proceed.

# ---- helper: find all composite fields whose datatype (pointer) targets a
# FunctionDefinition whose arg types mention needle ----
def find_ptr_fields(needle):
    hits = []
    itd = dtm.getAllDataTypes()
    while itd.hasNext():
        dt = itd.next()
        try:
            if not isinstance(dt, Composite):
                continue
            for i in range(dt.getNumComponents()):
                c = dt.getComponent(i)
                ft = c.getDataType()
                if ft is None or not isinstance(ft, Pointer):
                    continue
                tgt = ft.getDataType()
                if tgt is None or not isinstance(tgt, FunctionDefinition):
                    continue
                poison = False
                try:
                    targs = tgt.getArguments()
                    for k in range(len(targs)):
                        at = targs[k].getDataType()
                        if at is not None and needle in at.getName():
                            poison = True
                            break
                except Exception:
                    poison = True  # DB access issue = treat as suspect
                if poison:
                    hits.append((dt, c, tgt))
        except Exception:
            pass
    return hits

# ---- Stage 2: untype Delegate<void,ActorDropdownAction>.CallbackFunction only ----
tx = currentProgram.startTransaction('bisect-stage2')
stage2 = 0
try:
    itd = dtm.getAllDataTypes()
    while itd.hasNext():
        dt = itd.next()
        try:
            if isinstance(dt, Composite) and dt.getLength() == 8 and 'Delegate<' in dt.getName() and 'ActorDropdownAction' in dt.getName():
                for i in range(dt.getNumComponents()):
                    c = dt.getComponent(i)
                    if c.getFieldName() == 'CallbackFunction' and isinstance(c.getDataType(), Pointer):
                        c.setDataType(PointerDataType(Undefined1DataType(), 4), 4, None)
                        stage2 += 1
                        print('[Bisect] stage2 untyped %s.%s' % (dt.getName(), c.getFieldName()))
        except Exception as e:
            print('[Bisect] stage2 err %s: %s' % (dt.getName(), e))
    currentProgram.endTransaction(tx, True)
except Exception as e:
    currentProgram.endTransaction(tx, False)
    print('[Bisect] stage2 TX ABORT: %s' % e)
print('[Bisect] stage2 untyped %d fields' % stage2)
ok2 = retest('STAGE2 after untyping Delegate fields')

# ---- Stage 3: untype ALL composite fields ptr->_func_*ActorDropdown* ----
if not ok2:
    tx = currentProgram.startTransaction('bisect-stage3')
    stage3 = 0
    try:
        hits = find_ptr_fields('ActorDropdownAction')
        seen = set()
        for owner, c, tgt in hits:
            key = '%s|%s|%s' % (owner.getPathName(), c.getFieldName(), c.getOffset())
            if key in seen:
                continue
            seen.add(key)
            try:
                c.setDataType(PointerDataType(Undefined1DataType(), 4), 4, None)
                stage3 += 1
                if stage3 <= 12:
                    print('[Bisect] stage3 untyped %s.%s@%s (was -> %s)' % (owner.getPathName(), c.getFieldName(), c.getOffset(), tgt.getName()))
            except Exception as e:
                print('[Bisect] stage3 err %s.%s: %s' % (owner.getPathName(), c.getFieldName(), e))
        currentProgram.endTransaction(tx, True)
    except Exception as e:
        currentProgram.endTransaction(tx, False)
        print('[Bisect] stage3 TX ABORT: %s' % e)
    print('[Bisect] stage3 untyped %d fields' % stage3)
    retest('STAGE3 after untyping all ptr->_func_*Dropdown* fields')

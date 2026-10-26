# StructAudit.py - audit a struct's components for invalid (size<0) types.
# args: <StructName>...  @category BSim.CDE
from ghidra.program.model.data import Structure, TypeDef, Pointer, Array

args = getScriptArgs()
dtm = currentProgram.getDataTypeManager()

def find_struct(name):
    out = []
    for dt in dtm.getAllDataTypes():
        if dt.getName() == name:
            out.append(dt)
    return out

for name in args:
    cands = []
    for dt in dtm.getAllDataTypes():
        nm = dt.getName()
        if name in nm and not nm.startswith('_func_'):
            cands.append(dt)
    print('[StructAudit] %s: %d candidates (contains, excl _func_)' % (name, len(cands)))
    for st in cands[:6]:
        print('[StructAudit]   %s len=%s class=%s' % (
            st.getName()[:100], st.getLength(), st.getClass().getSimpleName()))
        if isinstance(st, Structure):
            bad = 0
            for i in range(st.getNumComponents()):
                c = st.getComponent(i)
                dt = c.getDataType()
                nm = dt.getName()
                ln = dt.getLength()
                if ln is None or ln < 0 or nm.startswith('_func_') or 'ActorDropdownAction' in nm:
                    bad += 1
                    if bad <= 12:
                        print('[StructAudit]     BAD@%d off=0x%x %s size=%s (%s)' % (
                            i, c.getOffset(), nm[:90], ln, dt.getClass().getSimpleName()))
            print('[StructAudit]   bad components: %d' % bad)

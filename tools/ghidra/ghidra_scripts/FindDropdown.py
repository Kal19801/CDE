# FindDropdown.py - dissect the Delegate<void,ActorDropdownAction> struct and
# print the REAL class/args of its CallbackFunction pointer target in DTM.
# Also dump all defs with 'Dropdown' in name.   @category BSim.CDE
from ghidra.program.model.data import FunctionDefinition, Pointer, TypeDef, Composite

dtm = currentProgram.getDataTypeManager()

# ---- 1. find the Delegate struct ----
target = None
it = dtm.getAllDataTypes()
while it.hasNext():
    dt = it.next()
    nm = dt.getName()
    if nm.startswith('Delegate<') and 'ActorDropdownAction' in nm:
        target = dt
        print('[FindDropdown] Delegate candidate: %s class=%s path=%s size=%s' % (
            nm, str(dt.getClass()), dt.getPathName(), dt.getLength()))
        if isinstance(dt, Composite) and dt.getLength() == 8:
            break

if target is not None and isinstance(target, Composite):
    for i in range(target.getNumComponents()):
        c = target.getComponent(i)
        ct = c.getDataType()
        print('[FindDropdown] field %s offset=%s class=%s' % (
            c.getFieldName(), c.getOffset(), str(ct.getClass()) if ct else 'NULL'))
        if isinstance(ct, Pointer):
            inner = ct.getDataType()
            if inner is not None:
                print('[FindDropdown]   ptr-> class=%s name=%s path=%s' % (
                    str(inner.getClass()), inner.getName(), inner.getPathName()))
                if isinstance(inner, FunctionDefinition):
                    print('[FindDropdown]   IS FunctionDefinition: cconv=%s varargs=%s' % (
                        inner.getCallingConventionName(), inner.hasVarArgs()))
                    iargs = inner.getArguments()
                    for j in range(len(iargs)):
                        a = iargs[j]
                        adt = a.getDataType()
                        st = a.getVariableStorage()
                        print('[FindDropdown]   arg[%d] name=%s dtclass=%s dtname=%s storage=%s' % (
                            j, a.getName(),
                            str(adt.getClass()) if adt else 'NULL',
                            adt.getName() if adt else 'NULL', st))
                    rt = inner.getReturnType()
                    print('[FindDropdown]   ret dtclass=%s dtname=%s' % (
                        str(rt.getClass()) if rt else 'NULL', rt.getName() if rt else 'NULL'))
                else:
                    # maybe typedef wrapper
                    if isinstance(inner, TypeDef):
                        base = inner.getBaseDataType()
                        print('[FindDropdown]   typedef-> class=%s name=%s' % (
                            str(base.getClass()) if base else 'NULL',
                            base.getName() if base else 'NULL'))
                        if isinstance(base, FunctionDefinition):
                            bargs = base.getArguments()
                            for j in range(len(bargs)):
                                a = bargs[j]
                                adt = a.getDataType()
                                print('[FindDropdown]   arg[%d] name=%s dtclass=%s dtname=%s storage=%s' % (
                                    j, a.getName(),
                                    str(adt.getClass()) if adt else 'NULL',
                                    adt.getName() if adt else 'NULL', a.getVariableStorage()))
else:
    print('[FindDropdown] Delegate<...,ActorDropdownAction> NOT FOUND in DTM')

# ---- 2. defs with Dropdown in NAME ----
print('[FindDropdown] === defs with Dropdown in name ===')
it2 = dtm.getAllDataTypes()
n = 0
while it2.hasNext():
    dt = it2.next()
    if 'Dropdown' in dt.getName():
        n += 1
        if n <= 15:
            extra = ''
            if isinstance(dt, FunctionDefinition):
                try:
                    extra = ' cconv=%s args=%s' % (dt.getCallingConventionName(),
                        ';'.join('%s:%s' % (dt.getArgument(k).getName(),
                                            dt.getArgument(k).getDataType().getName() if dt.getArgument(k).getDataType() else 'NULL')
                                 for k in range(dt.getArgumentCount())))
                except Exception as e:
                    extra = ' ERR:%s' % e
            print('[FindDropdown] %s class=%s%s' % (dt.getPathName(), str(dt.getClass()), extra))
print('[FindDropdown] total named-*Dropdown*: %d' % n)

# FindByVal.py - list functions with an EXACT by-value param/return of <Type>
# (name match, no pointer). args: <Type>  @category BSim.CDE
args = getScriptArgs()
needle = args[0]
fm = currentProgram.getFunctionManager()
rows = []
for f in fm.getFunctions(True):
    try:
        for p in f.getParameters():
            nm = p.getDataType().getName().strip()
            if nm == needle:
                rows.append('PARAM %s %s conv=%s rank=%d' % (
                    f.getEntryPoint(), f.getName(),
                    f.getCallingConventionName(), p.getRank()))
                break
    except Exception:
        pass
    try:
        rn = f.getReturnType().getName().strip()
        if rn == needle:
            rows.append('RETURN %s %s conv=%s' % (
                f.getEntryPoint(), f.getName(), f.getCallingConventionName()))
    except Exception:
        pass
print('[FindByVal] exact by-value matches: %d' % len(rows))
for r in rows[:40]:
    print('[FindByVal] ' + r)

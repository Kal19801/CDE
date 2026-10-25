# ProbeSym.py - find where a label lives: symbol tables, namespaces, or none.
# Also disasm-probe data refs of one function.
# @category BSim.CDE
from ghidra.program.model.symbol import SymbolType

pat = 'TbufferMask3DFX'
n = 0
st = currentProgram.getSymbolTable()
it = st.getAllSymbols(True)
while it.hasNext():
    s = it.next()
    nm = s.getName() or ''
    if pat.lower() in nm.lower():
        print('[ProbeSym] %s @ %s (%s) primary=%s source=%s' %
              (nm, s.getAddress(), s.getSymbolType(), s.isPrimary, s.getSource()))
        n += 1
print('[ProbeSym] matched %d symbols for %s' % (n, pat))

# check function 00846e90 listing: data store addresses
af = currentProgram.getAddressFactory()
f = getFunctionAt(af.getAddress('00846e90'))
if f is not None:
    li = currentProgram.getListing()
    ins = li.getInstructions(f.getBody(), True)
    while ins.hasNext():
        i = ins.next()
        s = str(i)
        if 'PTR' in s and '[' in s and ('mov' in s.lower()):
            print('[ProbeSym] INS %s %s' % (i.getAddress(), s[:80]))

// DumpFuncNames.java - 全量函数符号 dump：va \t qualified_name
// r20: qualified-name 解析的权威表。沿命名空间链重建 decompiler 所印全名。
// @category CDE.Sweep
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;

public class DumpFuncNames extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String out = args.length > 0 ? args[0] : "/tmp/func_names.tsv";
        PrintWriter w = new PrintWriter(new BufferedWriter(new FileWriter(out)));
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        long n = 0;
        while (it.hasNext()) {
            Function f = it.next();
            StringBuilder sb = new StringBuilder();
            Symbol s = f.getSymbol();
            Namespace ns = (s != null) ? s.getParentNamespace() : null;
            int depth = 0;
            while (ns != null && ns.getID() != Namespace.GLOBAL_NAMESPACE_ID && depth < 12) {
                String pnm = ns.getName();
                if (!pnm.isEmpty()) {
                    sb.insert(0, pnm + "::");
                }
                ns = ns.getParentNamespace();
                depth++;
            }
            String nm = f.getName();
            String full = sb.toString() + nm;
            w.println(f.getEntryPoint().toString() + "\t" +
                      full.replace('\t', ' ').replace('\n', ' '));
            n++;
        }
        w.close();
        println("DumpFuncNames: wrote " + n + " functions -> " + out);
    }
}

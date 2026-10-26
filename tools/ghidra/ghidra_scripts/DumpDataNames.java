// DumpDataNames.java - 全量数据符号 dump：va \t qualified_name \t typename
// r20: 限定名静态数据访问（Graphics::GlobalState.ViewMatrix...）的解析源。
// @category CDE.Sweep
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.address.*;
import java.io.*;

public class DumpDataNames extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String out = args.length > 0 ? args[0] : "/tmp/data_names.tsv";
        PrintWriter w = new PrintWriter(new BufferedWriter(new FileWriter(out)));
        SymbolTable st = currentProgram.getSymbolTable();
        // r20: 全符号遍历——有标签但未定义的数据（thread-static 守卫等）
        // getDefinedData 会漏，与 glew 指针同坑
        SymbolIterator it = st.getAllSymbols(true);
        long n = 0;
        while (it.hasNext()) {
            Symbol s = it.next();
            SymbolType ty = s.getSymbolType();
            if (ty == SymbolType.FUNCTION || ty == SymbolType.PARAMETER ||
                ty == SymbolType.LOCAL_VAR || ty == SymbolType.NAMESPACE ||
                ty == SymbolType.CLASS || ty == SymbolType.LIBRARY) continue;
            Address a = s.getAddress();
            if (a == null || !a.isMemoryAddress()) continue;
            StringBuilder sb = new StringBuilder();
            Namespace ns = s.getParentNamespace();
            int depth = 0;
            while (ns != null && ns.getID() != Namespace.GLOBAL_NAMESPACE_ID && depth < 12) {
                String pnm = ns.getName();
                if (!pnm.isEmpty()) sb.insert(0, pnm + "::");
                ns = ns.getParentNamespace();
                depth++;
            }
            String full = sb.toString() + s.getName();
            String tn = "";
            Data d = getDataAt(a);
            if (d != null && d.getDataType() != null) {
                tn = d.getDataType().getName().replace('\t', ' ').replace('\n', ' ');
            }
            w.println(a.toString() + "\t" + full.replace('\t', ' ').replace('\n', ' ') + "\t" + tn);
            n++;
        }
        w.close();
        println("DumpDataNames: wrote " + n + " data symbols -> " + out);
    }
}

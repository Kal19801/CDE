import ghidra.app.script.GhidraScript;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.SymbolTable;

import java.io.FileWriter;
import java.io.PrintWriter;

public class DumpVftables extends GhidraScript {

	@Override
	public void run() throws Exception {
		String[] args = getScriptArgs();
		PrintWriter w = new PrintWriter(new FileWriter(args[0]));
		int n = 0;
		SymbolTable st = currentProgram.getSymbolTable();
		SymbolIterator it = st.getAllSymbols(true);
		while (it.hasNext()) {
			Symbol s = it.next();
			String nm = s.getName();
			if (nm.contains("vftable") || nm.contains("::vtbl") || nm.startsWith("??_7")) {
				String clean = nm.replace('\t', ' ').replace('\n', ' ');
				w.println(s.getAddress().toString() + "\t" + clean);
				n++;
			}
		}
		w.close();
		println("[DumpVftables] wrote " + n + " symbols -> " + args[0]);
	}
}

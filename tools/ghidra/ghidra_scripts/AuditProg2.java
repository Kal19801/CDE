/* AuditProg2.java - like AuditProg but exports FULL names (namespace-qualified,
 * e.g. Class::method) via f.getName(true). Headless args: <output_tsv> <label> */
//@category BSim.CDE
import java.io.*;
import java.util.*;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.Address;

public class AuditProg2 extends GhidraScript {

	@Override
	public void run() throws Exception {
		String[] args = getScriptArgs();
		if (args.length < 2) {
			println("usage: AuditProg2.java <out.tsv> <label>");
			return;
		}
		String outPath = args[0];
		String label = args[1];

		FunctionManager fm = currentProgram.getFunctionManager();
		int total = 0, named = 0, thunk = 0;
		PrintWriter w = new PrintWriter(new BufferedWriter(new FileWriter(outPath)));
		w.println("label\tfullname\tname\tentry\tsize\tthunk");
		for (Function f : fm.getFunctions(true)) {
			total++;
			String full = f.getName(true);
			String nm = f.getName();
			if (!nm.startsWith("FUN_") && !nm.startsWith("func_")) {
				named++;
			}
			if (f.isThunk()) thunk++;
			long size = f.getBody().getNumAddresses();
			Address e = f.getEntryPoint();
			w.println(label + "\t" + full + "\t" + nm + "\t" + e.toString() + "\t" +
				size + "\t" + (f.isThunk() ? 1 : 0));
		}
		w.close();
		println("[AuditProg2 " + label + "] total=" + total + " named=" + named +
			" thunk=" + thunk + " -> " + outPath);
	}
}

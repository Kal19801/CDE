/* BatchDecomp.java - batch decompile functions listed in a TSV to files.
 * Usage: <tsv> <outdir>   (TSV rows: va_hex<TAB>name; lines starting with '#' skipped)
 * Writes <outdir>/<va>_<name>.c per function; prints one summary line each.
 * @category BSim.CDE */
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import java.io.*;
import java.util.regex.*;

public class BatchDecomp extends GhidraScript {

	@Override
	public void run() throws Exception {
		String[] args = getScriptArgs();
		String tsvPath = args[0];
		File outDir = new File(args[1]);
		outDir.mkdirs();

		DecompInterface di = new DecompInterface();
		di.openProgram(currentProgram);

		BufferedReader r = new BufferedReader(new FileReader(tsvPath));
		String line;
		int ok = 0, fail = 0, skip = 0;
		while ((line = r.readLine()) != null) {
			line = line.trim();
			if (line.isEmpty() || line.startsWith("#")) continue;
			String[] p = line.split("\t");
			if (p.length < 1 || p[0].isEmpty()) continue;
			String va = p[0];
			String rawName = (p.length > 1) ? p[1] : "func";
			Address addr = currentProgram.getAddressFactory().getAddress(va);
			Function f = getFunctionAt(addr);
			if (f == null) {
				println("[BatchDecomp] " + va + ": NO FUNCTION");
				fail++;
				continue;
			}
			DecompileResults res = di.decompileFunction(f, 120, monitor);
			if (res == null || !res.decompileCompleted()) {
				println("[BatchDecomp] " + va + " " + f.getName() + ": DECOMPILE FAILED: " +
					(res == null ? "null" : res.getErrorMessage()));
				fail++;
				continue;
			}
			String safe = rawName.replaceAll("[^A-Za-z0-9_]", "_");
			File out = new File(outDir, va + "_" + safe + ".c");
			PrintWriter w = new PrintWriter(new FileWriter(out));
			w.println("// decompiled by BatchDecomp @ " + va +
				" name=" + f.getName() +
				" conv=" + f.getCallingConventionName() +
				" body=" + f.getBody().getNumAddresses());
			w.print(res.getDecompiledFunction().getC());
			w.close();
			println("[BatchDecomp] " + va + " " + f.getName() +
				" conv=" + f.getCallingConventionName() +
				" body=" + f.getBody().getNumAddresses() + " -> " + out.getName());
			ok++;
		}
		r.close();
		di.dispose();
		println("[BatchDecomp] SUMMARY ok=" + ok + " fail=" + fail + " skip=" + skip);
	}
}

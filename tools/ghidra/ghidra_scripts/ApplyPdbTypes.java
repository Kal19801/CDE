/* ApplyPdbTypes.java - p81: apply OUR PDB (data types + function signatures +
 * calling conventions + internals) to the REC program POST-analysis, in a
 * controlled pass that bypasses import-time PDB Universal.
 * Modes (arg 2): parseprobe | types (DATA_TYPES_ONLY) | pubs (PUBLIC_SYMBOLS_ONLY)
 *                | all (ALL) -- all = full application via applyNoAnalysisState()
 * Usage args: <pdbFile> [mode]
 * @category BSim.CDE */
import java.io.File;
import java.io.IOException;

import ghidra.app.script.GhidraScript;
import ghidra.app.util.bin.format.pdb2.pdbreader.AbstractPdb;
import ghidra.app.util.bin.format.pdb2.pdbreader.PdbException;
import ghidra.app.util.bin.format.pdb2.pdbreader.PdbParser;
import ghidra.app.util.bin.format.pdb2.pdbreader.PdbReaderOptions;
import ghidra.app.util.importer.MessageLog;
import ghidra.app.util.pdb.pdbapplicator.DefaultPdbApplicator;
import ghidra.app.util.pdb.pdbapplicator.PdbApplicatorControl;
import ghidra.app.util.pdb.pdbapplicator.PdbApplicatorOptions;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Program;

public class ApplyPdbTypes extends GhidraScript {

	private int countFunctions() {
		FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
		int n = 0;
		while (it.hasNext()) {
			it.next();
			n++;
		}
		return n;
	}

	@Override
	public void run() throws Exception {
		String[] args = getScriptArgs();
		if (args.length < 1) {
			println("usage: ApplyPdbTypes.java <pdbFile> [parseprobe|types|pubs|all]");
			return;
		}
		File pdbFile = new File(args[0]);
		if (!pdbFile.isFile()) {
			println("[ApplyPdbTypes] PDB not found: " + pdbFile);
			return;
		}
		String phase = args.length > 1 ? args[1] : "all";
		Program p = currentProgram;
		int fnBefore = countFunctions();
		println("[ApplyPdbTypes] program=" + p.getName() + " functions=" + fnBefore +
			" pdb=" + pdbFile + " mode=" + phase);

		PdbReaderOptions readerOpts = new PdbReaderOptions();
		PdbApplicatorOptions appOpts = new PdbApplicatorOptions();
		PdbApplicatorControl ctl;
		if (phase.equals("parseprobe")) {
			ctl = PdbApplicatorControl.DATA_TYPES_ONLY;
		}
		else if (phase.equals("pubs")) {
			ctl = PdbApplicatorControl.PUBLIC_SYMBOLS_ONLY;
		}
		else if (phase.equals("types")) {
			ctl = PdbApplicatorControl.DATA_TYPES_ONLY;
		}
		else {
			ctl = PdbApplicatorControl.ALL;
		}
		appOpts.setProcessingControl(ctl);
		appOpts.setApplySourceLineNumbers(false);
		appOpts.setApplyCodeScopeBlockComments(false);
		appOpts.setApplyInstructionLabels(false);

		long t0 = System.currentTimeMillis();
		MessageLog log1 = new MessageLog();
		try (AbstractPdb pdb = PdbParser.parse(pdbFile, readerOpts, monitor)) {
			pdb.deserialize();
			long t1 = System.currentTimeMillis();
			println("[ApplyPdbTypes] parse+deserialize " + (t1 - t0) / 1000 + "s");
			if (phase.equals("parseprobe")) {
				println("[ApplyPdbTypes] parseprobe done");
				return;
			}
			DefaultPdbApplicator app = new DefaultPdbApplicator(pdb, p,
				p.getDataTypeManager(), p.getImageBase(), appOpts, monitor, log1);
			app.applyNoAnalysisState();
		}
		catch (PdbException | IOException e) {
			println("[ApplyPdbTypes] APPLY FAILED (" + phase + "): " + e);
			e.printStackTrace();
			return;
		}
		long t2 = System.currentTimeMillis();
		int fnAfter = countFunctions();
		println("[ApplyPdbTypes] apply(" + phase + ") done in " + (t2 - t0) / 1000 +
			"s functions=" + fnAfter + " (before=" + fnBefore + ", delta=" +
			(fnAfter - fnBefore) + ")");
		String s1 = log1.toString();
		println("[ApplyPdbTypes] log lines=" + s1.split("\n").length + " ERROR=" +
			countMatches(s1, "ERROR") + " doesnotfit=" + countMatches(s1, "does not fit"));
	}

	private static int countMatches(String s, String pat) {
		if (s == null || s.isEmpty()) {
			return 0;
		}
		int n = 0;
		int i = 0;
		while ((i = s.indexOf(pat, i)) >= 0) {
			n++;
			i += pat.length();
		}
		return n;
	}
}

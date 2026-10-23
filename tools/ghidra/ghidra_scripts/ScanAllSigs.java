/* ScanAllSigs.java - generate BSim signatures for ALL functions (no filter:
 * includes thunks and functions the CLI defaults skip) and insert into an H2
 * database. Based on Ghidra's AddProgramToH2BSimDatabaseScript.
 * Headless args: <h2db-path>  (e.g. /tmp/bsim3/cde2) */
//@category BSim.CDE
import java.io.*;
import java.util.*;

import ghidra.app.script.GhidraScript;
import java.net.URL;
import java.util.Iterator;
import generic.lsh.vector.LSHVectorFactory;
import ghidra.app.script.GhidraScript;
import ghidra.features.bsim.query.*;
import ghidra.features.bsim.query.BSimServerInfo;
import ghidra.features.bsim.query.description.DatabaseInformation;
import ghidra.features.bsim.query.description.DescriptionManager;
import ghidra.features.bsim.query.file.BSimH2FileDBConnectionManager;
import ghidra.features.bsim.query.protocol.*;
import ghidra.framework.model.DomainFile;
import ghidra.framework.protocol.ghidra.GhidraURL;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.features.bsim.query.GenSignatures;

public class ScanAllSigs extends GhidraScript {

	@Override
	public void run() throws Exception {
		String[] args = getScriptArgs();
		if (args.length < 1) {
			println("usage: ScanAllSigs.java <h2db-path>");
			return;
		}
		BSimServerInfo serverInfo = new BSimServerInfo(args[0]);

		try (FunctionDatabase h2Database = BSimClientFactory.buildClient(serverInfo, false)) {
			h2Database.initialize();
			DatabaseInformation dbInfo = h2Database.getInfo();

			LSHVectorFactory vectorFactory = h2Database.getLSHVectorFactory();
			GenSignatures gensig = new GenSignatures(dbInfo.trackcallgraph);
			gensig.setVectorFactory(vectorFactory);
			gensig.addExecutableCategories(dbInfo.execats);
			gensig.addFunctionTags(dbInfo.functionTags);
			gensig.addDateColumnName(dbInfo.dateColumnName);

			DomainFile dFile = currentProgram.getDomainFile();
			URL fileURL = dFile.getSharedProjectURL(null);
			if (fileURL == null) {
				fileURL = dFile.getLocalProjectURL(null);
			}
			String path = GhidraURL.getProjectPathname(fileURL);
			int lastSlash = path.lastIndexOf('/');
			path = lastSlash == 0 ? "/" : path.substring(0, lastSlash);
			URL normalizedProjectURL = GhidraURL.getProjectURL(fileURL);
			String repo = normalizedProjectURL.toExternalForm();

			gensig.openProgram(this.currentProgram, null, null, null, repo, path);
			FunctionManager fman = currentProgram.getFunctionManager();
			Iterator<Function> iter = fman.getFunctions(true);
			gensig.scanFunctions(iter, fman.getFunctionCount(), monitor);
			DescriptionManager manager = gensig.getDescriptionManager();
			manager.listAllFunctions().forEachRemaining(fd -> fd.sortCallgraph());

			InsertRequest insertreq = new InsertRequest();
			insertreq.manage = manager;
			if (insertreq.execute(h2Database) == null) {
				println("[ScanAllSigs] insert FAILED: " + h2Database.getLastError());
				return;
			}
			println("[ScanAllSigs] inserted functions=" + manager.numFunctions() +
				" for " + currentProgram.getName());
		}
	}
}

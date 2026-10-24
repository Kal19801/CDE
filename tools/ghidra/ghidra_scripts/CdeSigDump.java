/* CdeSigDump.java - headless-friendly clone of BSim GenerateSignatures:
 * no ask* prompts; args: <output_xml> <template>.  Writes the full LSH
 * signature XML (fdesc/hash) for every function of the current program.
 */
//@category BSim.CDE
import java.io.FileWriter;
import java.util.Iterator;

import generic.lsh.vector.LSHVectorFactory;
import ghidra.app.script.GhidraScript;
import ghidra.features.bsim.query.FunctionDatabase;
import ghidra.features.bsim.query.GenSignatures;
import ghidra.features.bsim.query.client.Configuration;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;

public class CdeSigDump extends GhidraScript {

        @Override
        public void run() throws Exception {
                String[] args = getScriptArgs();
                if (args.length < 2) {
                        println("usage: CdeSigDump.java <output_xml> <template>");
                        return;
                }
                String outPath = args[0];
                String templatename = args[1];

                LSHVectorFactory vectorFactory = FunctionDatabase.generateLSHVectorFactory();
                GenSignatures gensig = new GenSignatures(true);
                try {
                        Configuration config = FunctionDatabase.loadConfigurationTemplate(templatename);
                        vectorFactory.set(config.weightfactory, config.idflookup, config.info.settings);
                        gensig.setVectorFactory(vectorFactory);
                        gensig.addExecutableCategories(config.info.execats);
                        gensig.addFunctionTags(config.info.functionTags);
                        gensig.addDateColumnName(config.info.dateColumnName);
                        String repo = "ghidra://localhost/" + state.getProject().getName();
                        String path = GenSignatures.getPathFromDomainFile(currentProgram);
                        gensig.openProgram(currentProgram, null, null, null, repo, path);
                        FunctionManager fman = currentProgram.getFunctionManager();
                        Iterator<Function> iter = fman.getFunctions(true);
                        int n = fman.getFunctionCount();
                        println("[CdeSigDump] scanning " + n + " functions template=" + templatename);
                        gensig.scanFunctions(iter, n, monitor);
                        FileWriter fwrite = new FileWriter(outPath);
                        gensig.getDescriptionManager().saveXml(fwrite);
                        fwrite.close();
                        println("[CdeSigDump] wrote " + outPath);
                }
                finally {
                        gensig.dispose();
                }
        }
}

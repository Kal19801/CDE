/* PoisonTrace.java - decompile one function with native decompiler DEBUG enabled,
 * dump result + function signature forensics.
 * Usage: <va> <outPath>
 * Debug stream goes to stdout (headless log). Result C + signature info -> outPath.
 * @category BSim.CDE */
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Parameter;
import java.io.*;

public class PoisonTrace extends GhidraScript {

        @Override
        public void run() throws Exception {
                String[] args = getScriptArgs();
                String va = args[0];
                String outPath = args[1];
                Function f = getFunctionAt(currentProgram.getAddressFactory().getAddress(va));
                if (f == null) {
                        println("[PoisonTrace] NO FUNCTION at " + va);
                        return;
                }

                println("[PoisonTrace] === target " + va + " name=" + f.getName());
                println("[PoisonTrace] conv=" + f.getCallingConventionName()
                        + " body=" + f.getBody().getNumAddresses()
                        + " sigSource=" + f.getSignatureSource()
                        + " customVarStorage=" + f.hasCustomVariableStorage());
                Parameter[] ps = f.getParameters();
                println("[PoisonTrace] nParams=" + ps.length);
                for (int i = 0; i < ps.length; i++) {
                        Parameter p = ps[i];
                        println("[PoisonTrace] param[" + i + "] name=" + p.getName()
                                + " type=" + p.getDataType().getName()
                                + " dtLen=" + p.getDataType().getLength()
                                + " storage=" + p.getVariableStorage()
                                + " size=" + p.getLength());
                }
                println("[PoisonTrace] return=" + f.getReturnType().getName()
                        + " size=" + f.getReturnType().getLength());

                DecompInterface di = new DecompInterface();
                File dbgFile = new File(outPath + ".debug");
                di.enableDebug(dbgFile);
                di.setOptions(new DecompileOptions());
                di.openProgram(currentProgram);

                DecompileResults res = di.decompileFunction(f, 240, monitor);
                boolean ok = (res != null && res.decompileCompleted());
                println("[PoisonTrace] decompileCompleted=" + ok
                        + " msg=[" + (res == null ? "null" : res.getErrorMessage()) + "]");

                PrintWriter w = new PrintWriter(new FileWriter(outPath));
                w.println("=== va=" + va + " name=" + f.getName() + " completed=" + ok
                        + " msg=[" + (res == null ? "null" : res.getErrorMessage()) + "]");
                if (ok) {
                        w.print(res.getDecompiledFunction().getC());
                }
                w.close();
                di.dispose();
                println("[PoisonTrace] result -> " + outPath);
        }
}

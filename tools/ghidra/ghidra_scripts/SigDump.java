/* SigDump.java - dump name|addr|conv|paramcount|returntype for ALL functions (no decompile, fast).
 * @category BSim.CDE */
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.data.DataType;

public class SigDump extends GhidraScript {

	@Override
	public void run() throws Exception {
		for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
			if (f.isThunk()) continue;
			StringBuilder sb = new StringBuilder();
			Parameter[] ps = f.getParameters();
			for (int i = 0; i < ps.length; i++) {
				if (i > 0) sb.append(',');
				DataType dt = ps[i].getDataType();
				sb.append(dt != null ? dt.getName() : "?");
			}
			DataType rt = f.getReturnType();
			println("SIG| " + f.getEntryPoint().toString() + " | " + f.getName() + " | " + f.getBody().getNumAddresses() + " | " +
				f.getCallingConventionName() + " | " + ps.length + " | " +
				(rt != null ? rt.getName() : "?") + " | " + sb.toString());
		}
	}
}

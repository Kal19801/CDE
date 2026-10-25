/* CheckType.java - dump one /CDE datatype's members.
 * @category BSim.CDE */
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.*;
import ghidra.program.model.data.Enum;

public class CheckType extends GhidraScript {
	@Override
	public void run() throws Exception {
		String[] args = getScriptArgs();
		DataTypeManager dtm = currentProgram.getDataTypeManager();
		CategoryPath cp = new CategoryPath("/CDE");
		for (String n : args) {
			DataType dt = dtm.getDataType(cp, n);
			if (dt == null) { println("[CheckType] " + n + " NOT FOUND"); continue; }
			StringBuilder sb = new StringBuilder("[CheckType] " + n + " (" + dt.getClass().getSimpleName() + " len=" + dt.getLength() + "): ");
			if (dt instanceof Structure) {
				Structure st = (Structure) dt;
				int cnt = 0;
				for (DataTypeComponent c : st.getComponents()) {
					if (cnt++ < 40) sb.append(c.getFieldName() + "@" + c.getOffset() + " ");
				}
				sb.append("... total=" + st.getNumComponents());
			}
			println(sb.toString());
		}
	}
}

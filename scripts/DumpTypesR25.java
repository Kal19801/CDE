/* DumpTypesR25.java - DB 全量 Composite 类型导出（r25 重建版）
 * 输出 members_r25c_all.tsv（UDT/MEMB 格式，与 r23_udt.tsv 同构）
 * 遍历所有 datatype（Iterator 口径，r24 教训），struct/union 全成员。
 */
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.*;
import java.io.*;
import java.util.*;

public class DumpTypesR25 extends GhidraScript {
    @Override
    public void run() throws Exception {
        String outp = "/tmp/my-project/work/members_r25c_all.tsv";
        PrintWriter out = new PrintWriter(new BufferedWriter(new FileWriter(outp)));
        DataTypeManager dtm = currentProgram.getDataTypeManager();
        Iterator<DataType> it = dtm.getAllDataTypes();
        int n = 0, nm = 0;
        while (it.hasNext()) {
            DataType dt = it.next();
            if (!(dt instanceof Composite)) continue;
            Composite c = (Composite) dt;
            String disp = dt.getDisplayName() != null ? dt.getDisplayName() : dt.getName();
            if (disp == null || disp.length() == 0 || disp.indexOf('\t') >= 0) continue;
            String kind = (dt instanceof UnionDataType) ? "union" : "struct";
            out.println("UDT\t" + disp + "\t" + c.getLength() + "\t" + kind);
            n++;
            DataTypeComponent[] comps = c.getComponents();
            if (comps == null) continue;
            for (int i = 0; i < comps.length; i++) {
                DataTypeComponent dc = comps[i];
                if (dc.isBitFieldComponent()) continue;
                String fn = dc.getFieldName();
                if (fn == null || fn.length() == 0) fn = "f" + dc.getOffset();
                if (fn.indexOf('\t') >= 0) fn = fn.replace("\t", "_");
                DataType mdt = dc.getDataType();
                String tn = (mdt != null && mdt.getDisplayName() != null)
                    ? mdt.getDisplayName() : "undefined1";
                tn = tn.replace("\t", " ").trim();
                int ln2 = dc.getLength();
                if (ln2 < 0) ln2 = 0;
                out.println("MEMB\t" + disp + "\t" + fn + "\t" + dc.getOffset() + "\t" + tn + "\t" + ln2);
                nm++;
            }
        }
        out.close();
        println("DumpTypesR25: udts=" + n + " membs=" + nm + " -> " + outp);
    }
}

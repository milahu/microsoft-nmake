// tmplhscy29t_0800_0000.c
// Generated by decompiling tmplhscy29t
// using Reko decompiler version 0.11.2.0.

#include "tmplhscy29t.h"

// 07F0:0100: void fn07F0_0100(Register Eq_4 bx, Register (memptr (ptr16 Eq_9) word16) bp, Register (ptr16 Eq_6) es, Register (ptr16 Eq_7) ds)
void fn07F0_0100(Eq_4 bx, word16 Eq_9::* bp, struct Eq_6 * es, struct Eq_7 * ds)
{
	word16 Eq_9::* fp;
	struct Eq_9 * ss;
	word16 Eq_9::* sp_11 = fp;
	Eq_11 ax_113 = 15770;
	cui16 ax_119 = 0x1849;
	bool C_103 = ds->w0002 > 0x1849;
	do
	{
		if (!C_103)
		{
			msdos_display_string(&ds->w0002 + 0x008B);
			msdos_terminate_program20();
		}
		mp16 di_13 = sp_11 - 0x034A;
		struct Eq_23 Eq_9::* sp_15 = sp_11 - 2;
		(ss->*sp_15).w0000 = di_13;
		(ss->*sp_15).wFFFFFFFE = di_13;
		(ss->*sp_15).tFFFFFFFC = ax_113;
		word16 cx_23 = 0xAD;
		Eq_37 si_114 = 668;
		word16 Eq_6::* di_123 = &Eq_6::w029C;
		while (true)
		{
			byte dl_65 = (byte) ax_113;
			byte dh_53 = SLICE(ax_113, byte, 8);
			--cx_23;
			if (cx_23 == 0x00)
				break;
			ax_113 = ds->*si_114;
			ax_119 = ax_113 + ax_113;
			es->*di_123 = ax_119;
			si_114 -= 2;
			di_123 -= 2;
		}
		Eq_4 v19_34 = ds->*((word16) bx - 45);
		ds->*((word16) bx - 45) = bx;
		++ds->*((word16) si_114 + 8633);
		Eq_11 SCZDOP_44 = (ss->*sp_15).tFFFFFFFC;
		ds->*((word16) v19_34 + 55604) = (ss->*sp_15).wFFFFFFFE;
		bp = ss->*bp;
		--ds->*si_114;
		cui16 ax_47 = ax_119 | ~0x119B;
		Eq_89 di_41 = (char *) di_123 + 1;
		bx = SEQ(dh_53, (byte) v19_34);
		cu8 ah_63 = SLICE(ax_47, byte, 8) + ds->*((word16) di_41 + ((word16) bx + 0x0000AE3E));
		byte v29_67 = Mem59[ds:bx + si_114:byte] + dl_65 + CONVERT(ah_63 <u 0x00, bool, byte);
		Mem68[ds:bx + si_114:byte] = v29_67;
		bool P_105 = SLICE(SCZDOP_44, bool, 5);
		P_105 = SLICE(SCZDOP_44, bool, 5);
		struct Eq_116 Eq_9::* sp_52 = bp + 1;
		word16 ax_74 = SEQ(ah_63, (byte) ax_47);
		ds = (ss->*sp_52).w0000;
		Mem93[ss:bp + si_114:word16] = Mem68[ss:bp + si_114:word16] + si_114;
		byte ah_101 = SLICE(ax_74 + ~0x4335 + CONVERT(v29_67 <u 0x00, bool, word16), byte, 8) & Mem93[ds:(bx - 18) + di_41:byte];
		ax_113 = (word16) si_114 + 116;
		sp_11 = (word16 Eq_9::*) (sp_52 + 2);
		C_103 = false;
		ax_119 = SEQ(cond(ah_101) | SLICE(P_105, bool, 5), ds->*si_114);
	} while (ah_101 != 0x00 && sp_52[1] != 0x01);
}

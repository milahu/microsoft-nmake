#include "out.h"



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0001002a) overlaps instruction at (ram,0x00010029)
// 
// WARNING: Stack frame is not setup normally: Input value of stackpointer is not used
// WARNING: This function may have set the stack pointer

void entry(void)

{
  undefined2 *puVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int in_CX;
  int iVar5;
  undefined2 *in_BX;
  undefined *puVar6;
  undefined *puVar7;
  int unaff_BP;
  int unaff_SI;
  undefined2 *puVar8;
  int *piVar9;
  int *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  undefined2 in_GS;
  undefined uVar10;
  byte bVar11;
  undefined4 uVar12;
  
  bVar11 = 0;
  puVar6 = (undefined *)0x6120;
  iVar5 = 0x3d9a;
  uVar10 = 0x2049 < *(uint *)0x2;
  if ((bool)uVar10) {
    piVar9 = (int *)0x6120;
    puVar7 = puVar6;
  }
  else {
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x20);
    uVar12 = (*pcVar4)();
    iVar5 = (int)((ulong)uVar12 >> 0x10);
    puVar8 = (undefined2 *)(unaff_SI + -1);
    piVar9 = (int *)(unaff_SI + 1);
    out(*puVar8,iVar5);
    if (puVar8 == (undefined2 *)0x0) goto LAB_1000_003c;
    out(*(undefined *)piVar9,iVar5);
    out(*(undefined2 *)(unaff_SI + 2),iVar5);
    if (puVar8 != (undefined2 *)0x0) {
      *(undefined **)(puVar6 + -2) = puVar6;
      *(undefined2 *)(unaff_BP + -0x1a) = 0xcc4e;
      puVar1 = in_BX;
      *puVar1 = *puVar1;
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    puVar7 = puVar6 + -2;
    *(undefined2 *)(puVar6 + -2) = 0x6d20;
    piVar9 = unaff_DI + 1;
    iVar3 = in(iVar5);
    *unaff_DI = iVar3;
    out(*(undefined2 *)(unaff_SI + 4),iVar5);
    if ((bool)uVar10) {
      *(int *)(puVar6 + -4) = iVar5;
      *(int **)(puVar6 + -6) = piVar9;
      if (in_CX == 0) {
        *(undefined2 *)((int)uVar12 + (uint)(byte)uVar10 + -0x7fa7) = unaff_DS;
        pcVar4 = (code *)swi(1);
        (*pcVar4)();
        return;
      }
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
  *(int **)(puVar7 + -2) = piVar9 + -0x1a5;
  *(int **)(puVar7 + -4) = piVar9 + -0x1a5;
  *(int *)(puVar7 + -6) = iVar5;
  in_CX = 0xad;
  piVar9 = (int *)0x29c;
  unaff_DI = (int *)0x29c;
  bVar11 = 1;
LAB_1000_003c:
  while (in_CX = in_CX + -1, in_CX != 0) {
    piVar2 = piVar9;
    piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
    iVar3 = *piVar2;
    piVar2 = unaff_DI;
    unaff_DI = unaff_DI + (uint)bVar11 * -2 + 1;
    *piVar2 = iVar5 + iVar3;
    iVar5 = iVar3;
  }
  LOCK();
  *(undefined2 **)((int)in_BX + -0x2d) = in_BX;
  UNLOCK();
  piVar2 = (int *)((int)piVar9 + 0x21b9);
  *piVar2 = *piVar2 + 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}




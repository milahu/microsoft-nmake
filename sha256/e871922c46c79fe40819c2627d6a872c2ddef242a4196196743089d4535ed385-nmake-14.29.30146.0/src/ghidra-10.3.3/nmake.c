#include "out.h"



void FUN_00402910(void)

{
  FUN_0040e549(&DAT_004216c0,(int **)&DAT_004216bc,(int **)0x0,(ushort *)0x0,0,0,0);
  DAT_004216b8 = FUN_0040e267(&DAT_004216c0);
  return;
}



void __fastcall FUN_00402937(undefined4 *param_1)

{
  int **ppiVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  byte bVar5;
  int **ppiVar6;
  undefined4 *local_8;
  
  local_8 = param_1;
  if (DAT_004216b8 != 0) {
    DAT_004216b4 = DAT_004216b4 | 0x20;
    FUN_00402a59();
    DAT_004216b8 = 0;
  }
  if (((DAT_004216b4 & 0x20) != 0) && (uVar2 = FUN_0040f912(&DAT_004216c0), (char)uVar2 != '\0')) {
    if ((DAT_004216b4 & 0x10) != 0) {
      FUN_004053f6(DAT_004216b0,0x444);
    }
    FUN_004053f6(DAT_004216b0,0x43d);
  }
  puVar3 = FUN_0040e215();
  bVar5 = DAT_004216b4;
  if ((DAT_004216b4 & 0x40) == 0) {
    pvVar4 = FUN_0040e267(&DAT_004216c0);
    bVar5 = DAT_004216b4;
    puVar3[1] = pvVar4;
  }
  else {
    puVar3[1] = DAT_004216ac;
    DAT_004216ac = 0;
  }
  local_8 = puVar3;
  if ((bVar5 & 0x30) != 0x10) {
    FUN_0040e549((wchar_t *)puVar3[1],(int **)&DAT_004216bc,(int **)0x0,(ushort *)0x0,0,0,0);
    bVar5 = DAT_004216b4;
  }
  ppiVar1 = DAT_004216bc;
  DAT_004216bc = ppiVar1;
  if ((bVar5 & 0x20) != 0) {
    FUN_00402cd0(L"$",&local_8,(int **)&DAT_004216bc);
    FUN_00402cd0(L"*?",&local_8,(int **)0x0);
    DAT_004216bc = ppiVar1;
    if (ppiVar1 != (int **)0x0) {
      do {
        ppiVar6 = ppiVar1;
        ppiVar1 = (int **)*ppiVar6;
        *ppiVar6 = (int *)DAT_00432618;
        DAT_00432618 = ppiVar6;
      } while (ppiVar1 != (int **)0x0);
      DAT_004216bc = (int **)0x0;
    }
  }
  FUN_0040e36c(&DAT_004216a8,local_8);
  return;
}



void FUN_00402a59(void)

{
  int **ppiVar1;
  undefined4 uVar2;
  int **ppiVar3;
  
  DAT_0041148f = DAT_0041148e;
  DAT_004216a8 = FUN_0040e215();
  DAT_004216a8[1] = DAT_004216b8;
  ppiVar1 = DAT_004216bc;
  FUN_00402cd0(L"$",&DAT_004216a8,(int **)&DAT_004216bc);
  FUN_00402cd0(L"*?",&DAT_004216a8,(int **)0x0);
  DAT_004216bc = ppiVar1;
  if (ppiVar1 != (int **)0x0) {
    do {
      ppiVar3 = ppiVar1;
      ppiVar1 = (int **)*ppiVar3;
      *ppiVar3 = (int *)DAT_00432618;
      DAT_00432618 = ppiVar3;
    } while (ppiVar1 != (int **)0x0);
    DAT_004216bc = (int **)0x0;
  }
  if (((DAT_004216a8 != (undefined4 *)0x0) ||
      (((DAT_004216b4 & 0x20) == 0 &&
       (FUN_004053f6(DAT_004216a4,0x43b), DAT_004216a8 != (undefined4 *)0x0)))) &&
     (uVar2 = FUN_0040f912((short *)DAT_004216a8[1]), (char)uVar2 != '\0')) {
    DAT_004216b4 = DAT_004216b4 | 0x10;
  }
  return;
}



void FUN_00402b16(void)

{
  byte bVar1;
  int **ppiVar2;
  bool bVar3;
  int **ppiVar4;
  
  if (DAT_004216b8 == 0) {
    DAT_004216b4 = DAT_004216b4 & 0xdf;
  }
  else {
    FUN_00402a59();
    DAT_004216b8 = 0;
  }
  ppiVar2 = DAT_004216a8;
  if (DAT_004216c2 != 0) {
    DAT_0041148f = DAT_0041148f | 0x20;
  }
  bVar1 = DAT_0041148f;
  if (DAT_004216a8 == (int **)0x0) {
    FUN_004053f6(DAT_004216b0,0x40d);
  }
  if ((DAT_004216b4 & 0x10) == 0) {
    if ((*ppiVar2 != (int *)0x0) ||
       (bVar3 = FUN_00402bf5((wchar_t *)ppiVar2[1]), ppiVar2 = DAT_004216a8, !bVar3))
    goto LAB_00402be4;
    free(DAT_004216a8[1]);
  }
  else {
    ppiVar4 = (int **)FUN_0040ac61(0x18);
    ppiVar4[2] = ppiVar2[1];
    *(byte *)(ppiVar4 + 5) = bVar1 >> 5 & 1;
    *ppiVar4 = (int *)DAT_00421694;
    DAT_00421694 = ppiVar4;
    if (*ppiVar4 != (int *)0x0) {
      (*ppiVar4)[1] = (int)ppiVar4;
    }
  }
  ppiVar2 = DAT_00432618;
  DAT_00432618 = DAT_004216a8;
  *DAT_004216a8 = (int *)ppiVar2;
  ppiVar2 = DAT_00411480;
LAB_00402be4:
  DAT_00411480 = ppiVar2;
  DAT_004216a8 = (int **)0x0;
  DAT_004216b4 = DAT_004216b4 | 0x80;
  return;
}



bool __fastcall FUN_00402bf5(wchar_t *param_1)

{
  wchar_t wVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  uint uVar7;
  bool bVar8;
  
  uVar7 = 0;
  iVar2 = _wcsicmp(param_1,L".SILENT");
  if (iVar2 == 0) {
    DAT_004216b4 = DAT_004216b4 | 2;
    FUN_0040c1cd(0x73,'\x01');
  }
  iVar3 = _wcsicmp(param_1,L".IGNORE");
  if (iVar3 == 0) {
    DAT_004216b4 = DAT_004216b4 | 4;
    FUN_0040c1cd(0x69,'\x01');
  }
  else {
    pwVar6 = L".SUFFIXES";
    pwVar5 = param_1;
    do {
      wVar1 = *pwVar5;
      bVar8 = (ushort)wVar1 < (ushort)*pwVar6;
      if (wVar1 != *pwVar6) {
LAB_00402c7b:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_00402c80;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar5[1];
      bVar8 = (ushort)wVar1 < (ushort)pwVar6[1];
      if (wVar1 != pwVar6[1]) goto LAB_00402c7b;
      pwVar5 = pwVar5 + 2;
      pwVar6 = pwVar6 + 2;
    } while (wVar1 != L'\0');
    uVar4 = 0;
LAB_00402c80:
    if (uVar4 == 0) {
      DAT_004216b4 = DAT_004216b4 | 1;
    }
    else {
      pwVar5 = L".PRECIOUS";
      do {
        wVar1 = *param_1;
        bVar8 = (ushort)wVar1 < (ushort)*pwVar5;
        if (wVar1 != *pwVar5) {
LAB_00402cb6:
          uVar7 = -(uint)bVar8 | 1;
          break;
        }
        if (wVar1 == L'\0') break;
        wVar1 = param_1[1];
        bVar8 = (ushort)wVar1 < (ushort)pwVar5[1];
        if (wVar1 != pwVar5[1]) goto LAB_00402cb6;
        param_1 = param_1 + 2;
        pwVar5 = pwVar5 + 2;
      } while (wVar1 != L'\0');
      if (uVar7 != 0) {
        return iVar2 == 0;
      }
      DAT_004216b4 = DAT_004216b4 | 8;
    }
  }
  return true;
}



void __fastcall FUN_00402cd0(wchar_t *param_1,undefined4 *param_2,int **param_3)

{
  wchar_t *pwVar1;
  undefined4 uVar2;
  void *pvVar3;
  short *psVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  short *_Memory;
  undefined4 *local_24;
  undefined4 *local_20;
  short *local_1c;
  wchar_t *local_18;
  short *psStack_14;
  short *local_10;
  undefined4 *puStack_c;
  
  puVar7 = (undefined4 *)0x0;
  local_1c = (short *)0x0;
  local_24 = (undefined4 *)0x0;
  local_10 = (short *)0x0;
  puVar5 = (undefined4 *)0x0;
  puVar6 = (undefined4 *)*param_2;
  local_20 = param_2;
  local_18 = param_1;
  do {
    while( true ) {
      if (puVar6 == (undefined4 *)0x0) {
        return;
      }
      pwVar1 = wcspbrk((wchar_t *)puVar6[1],local_18);
      if (pwVar1 != (wchar_t *)0x0) break;
LAB_00402e23:
      puVar5 = puVar6;
      puVar6 = (undefined4 *)*puVar6;
    }
    if (*local_18 == L'$') {
      local_1c = (short *)FUN_0040ec83((wchar_t *)puVar6[1],-1,param_3);
      free((void *)puVar6[1]);
    }
    else {
      uVar2 = FUN_0040f912((wchar_t *)puVar6[1]);
      if (((char)uVar2 != '\0') ||
         (puVar7 = (undefined4 *)FUN_00410088((wchar_t *)puVar6[1]), local_24 = puVar7,
         puVar7 == (undefined4 *)0x0)) goto LAB_00402e23;
      local_10 = (short *)puVar6[1];
    }
    if (puVar5 == (undefined4 *)0x0) {
      *local_20 = *puVar6;
      *puVar6 = DAT_00432618;
      puStack_c = local_20;
    }
    else {
      *puVar5 = *puVar6;
      *puVar6 = DAT_00432618;
      puStack_c = puVar5;
    }
    puStack_c = (undefined4 *)*puStack_c;
    DAT_00432618 = puVar6;
    if (*local_18 == L'$') {
      psStack_14 = local_1c;
      while (psVar4 = FUN_00402e3c(&psStack_14), _Memory = local_1c, psVar4 != (short *)0x0) {
        puVar7 = FUN_0040e215();
        local_24 = puVar7;
        pvVar3 = FUN_0040e267(psVar4);
        puVar7[1] = pvVar3;
        *puVar7 = *local_20;
        *local_20 = puVar7;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = puVar7;
        }
      }
    }
    else {
      _Memory = local_10;
      if (puVar7 != (undefined4 *)0x0) {
        if (puVar5 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)*puVar7;
          puVar5 = puVar7;
          while (puVar7 = puVar6, puVar7 != (undefined4 *)0x0) {
            puVar5 = puVar7;
            puVar6 = (undefined4 *)*puVar7;
          }
        }
        FUN_0040e36c(&local_24,*local_20);
        *local_20 = local_24;
        puVar7 = local_24;
        _Memory = local_10;
      }
    }
    free(_Memory);
    puVar6 = puStack_c;
  } while( true );
}



short * __fastcall FUN_00402e3c(short **param_1)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short sVar4;
  
  for (psVar2 = *param_1; (sVar4 = *psVar2, sVar4 == 0x20 || (sVar4 == 9)); psVar2 = psVar2 + 1) {
  }
  if (sVar4 == 0) {
    return (short *)0x0;
  }
  psVar3 = psVar2;
  if (sVar4 == 0x22) {
    do {
      psVar3 = psVar3 + 1;
      sVar4 = *psVar3;
      if (sVar4 == 0) break;
    } while (sVar4 != 0x22);
  }
  else {
    do {
      if ((sVar4 == 0x20) || (sVar4 == 9)) break;
      psVar3 = psVar3 + 1;
      sVar4 = *psVar3;
    } while (sVar4 != 0);
  }
  psVar1 = psVar3;
  if ((sVar4 != 0x20) && (sVar4 != 9)) {
    if (sVar4 != 0x22) {
      if (sVar4 == 0) {
        psVar3 = psVar3 + -1;
      }
      goto LAB_00402ef6;
    }
    psVar1 = psVar3 + 1;
    if (psVar3[1] == 0) goto LAB_00402ef6;
  }
  psVar3 = psVar1;
  *psVar3 = 0;
LAB_00402ef6:
  *param_1 = psVar3 + 1;
  return psVar2;
}



void FUN_00402f02(void)

{
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  
  if ((char)DAT_004216b4 < '\0') {
    DAT_004216b4 = DAT_004216b4 & 0x7f;
  }
  if ((DAT_004216b4 & 0x10) == 0) {
    if ((DAT_004216b4 & 6) == 0) {
      if ((DAT_004216b4 & 1) == 0) {
        if ((DAT_004216b4 & 8) == 0) {
          DAT_00421698 = (int *)FUN_0040ac61(0x20);
          *DAT_00421698 = DAT_004216a8;
          DAT_00421698[1] = DAT_004216bc;
          goto LAB_00403005;
        }
        if (DAT_004216a8 == 0) goto LAB_00403005;
        ppuVar2 = (undefined4 **)&DAT_0042169c;
      }
      else {
        if (DAT_004216a8 == 0) {
          if (DAT_004216a0 != (undefined4 *)0x0) {
            do {
              puVar1 = DAT_004216a0;
              DAT_004216a0 = (undefined4 *)*puVar1;
              free((void *)puVar1[1]);
              *puVar1 = DAT_00432618;
              DAT_00432618 = puVar1;
            } while (DAT_004216a0 != (undefined4 *)0x0);
          }
          goto LAB_00403005;
        }
        ppuVar2 = &DAT_004216a0;
      }
      FUN_00403596(ppuVar2);
    }
    else if (DAT_004216a8 != 0) {
      FUN_004053f6(DAT_004216b0,0x442);
    }
  }
  else if (DAT_004216a8 != 0) {
    FUN_004053f6(DAT_004216b0,0x43e);
  }
LAB_00403005:
  DAT_004216a8 = 0;
  DAT_004216bc = 0;
  DAT_004216b4 = DAT_004216b4 | 0x40;
  return;
}



void FUN_0040301c(void)

{
  int **ppiVar1;
  bool bVar2;
  bool bVar3;
  int **ppiVar4;
  char local_5;
  
  ppiVar4 = DAT_00411480;
  bVar2 = true;
  local_5 = '\x01';
  if ((DAT_004216b4 & 0x10) == 0) {
    if ((DAT_004216b4 & 0xf) == 0) {
      *(int *)(DAT_00421698 + 8) = DAT_004216a8;
      *(undefined4 *)(DAT_00421698 + 0xc) = DAT_004216bc;
      *(undefined *)(DAT_00421698 + 0x10) = DAT_0041148f;
      if (ppiVar4 != (int **)0x0) {
        do {
          bVar3 = FUN_00402bf5((wchar_t *)ppiVar4[1]);
          if (bVar3) {
            FUN_004053f6(DAT_004216b0,0x445);
          }
          FUN_004034d5((wchar_t *)ppiVar4[1],local_5);
          if (DAT_00421690 == (int **)0x0) {
            bVar2 = false;
            DAT_00421690 = ppiVar4;
          }
          ppiVar1 = (int **)*ppiVar4;
          DAT_00411480 = ppiVar1;
          if (bVar2) {
            *ppiVar4 = (int *)DAT_00432618;
            DAT_00432618 = ppiVar4;
          }
          local_5 = '\0';
          ppiVar4 = ppiVar1;
        } while (ppiVar1 != (int **)0x0);
      }
    }
    else if (DAT_004216a8 != 0) {
      FUN_004053f6(DAT_004216b0,0x441);
    }
  }
  else {
    *(int *)(DAT_00421694 + 0xc) = DAT_004216a8;
  }
  DAT_00411480 = (int **)0x0;
  DAT_004216a8 = 0;
  DAT_004216bc = 0;
  DAT_00421698 = 0;
  DAT_004216b4 = 0;
  return;
}



void FUN_00403153(void)

{
  int **ppiVar1;
  wchar_t *pwVar2;
  uint uVar3;
  undefined4 uVar4;
  wchar_t wVar5;
  int **ppiVar6;
  
  pwVar2 = wcschr(DAT_004216b8,L'$');
  ppiVar1 = DAT_004216bc;
  if (pwVar2 != (wchar_t *)0x0) {
    pwVar2 = (wchar_t *)FUN_0040ec83(DAT_004216b8,-1,(int **)&DAT_004216bc);
    if (*pwVar2 == L'\0') {
      FUN_004053f6(DAT_004216b0,0x3ec);
    }
    DAT_004216bc = ppiVar1;
    if (ppiVar1 != (int **)0x0) {
      do {
        ppiVar6 = ppiVar1;
        ppiVar1 = (int **)*ppiVar6;
        *ppiVar6 = (int *)DAT_00432618;
        DAT_00432618 = ppiVar6;
      } while (ppiVar1 != (int **)0x0);
      DAT_004216bc = (int **)0x0;
    }
    free(DAT_004216b8);
    DAT_004216b8 = pwVar2;
  }
  wVar5 = *DAT_004216b8;
  pwVar2 = DAT_004216b8;
  if (wVar5 != L'\0') {
    do {
      uVar3 = FUN_00403702(wVar5);
      if ((char)uVar3 == '\0') break;
      pwVar2 = pwVar2 + 1;
      wVar5 = *pwVar2;
    } while (wVar5 != L'\0');
    if (*pwVar2 != L'\0') {
      FUN_004053f6(DAT_004216b0,0x3e9);
    }
  }
  DAT_0041148d = 1;
  uVar4 = FUN_00403382(DAT_004216b8,DAT_004216ac,0);
  if ((char)uVar4 == '\0') {
    free(DAT_004216b8);
    free(DAT_004216ac);
  }
  DAT_004216ac = (wchar_t *)0x0;
  DAT_004216b8 = (wchar_t *)0x0;
  return;
}



int __fastcall FUN_00403260(wchar_t *param_1,wchar_t *param_2,uint param_3)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  uint uVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  int iVar8;
  int iVar9;
  
  wVar1 = *param_1;
  pwVar6 = param_1;
  while ((wVar1 != L'\0' && (uVar4 = FUN_00403702(wVar1), (char)uVar4 != '\0'))) {
    pwVar6 = pwVar6 + 1;
    wVar1 = *pwVar6;
  }
  if (*pwVar6 != L'\0') {
    if ((param_3 & 4) != 0) {
      return (uint)(byte)((ushort)*pwVar6 >> 8) << 8;
    }
    FUN_004053f6(DAT_004216b0,0x3e9);
  }
  pwVar6 = param_2;
  if ((param_3 & 0x40) != 0) {
    pwVar5 = wcschr(param_2,L'$');
    iVar9 = 0;
    if (pwVar5 != (wchar_t *)0x0) {
      do {
        iVar8 = iVar9;
        iVar9 = iVar8 + 1;
        pwVar5 = wcschr(pwVar5 + 1,L'$');
      } while (pwVar5 != (wchar_t *)0x0);
      if (iVar9 != 0) {
        do {
          wVar1 = *pwVar6;
          pwVar6 = pwVar6 + 1;
        } while (wVar1 != L'\0');
        lVar2 = (ulonglong)(uint)(iVar8 + 2 + ((int)pwVar6 - (int)(param_2 + 1) >> 1)) * 2;
        pwVar6 = (wchar_t *)
                 FUN_0040ac3c(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
        wVar1 = *param_2;
        pwVar5 = param_2;
        pwVar3 = pwVar6;
        while (wVar1 != L'\0') {
          *pwVar3 = wVar1;
          pwVar5 = pwVar5 + 1;
          pwVar7 = pwVar3 + 1;
          if (wVar1 == L'$') {
            *pwVar7 = L'$';
            pwVar7 = pwVar3 + 2;
          }
          pwVar3 = pwVar7;
          wVar1 = *pwVar5;
        }
        *pwVar3 = L'\0';
        free(param_2);
      }
    }
  }
  iVar9 = FUN_00403382(param_1,pwVar6,param_3);
  return iVar9;
}



int __fastcall FUN_00403382(wchar_t *param_1,wchar_t *param_2,uint param_3)

{
  uint uVar1;
  uint3 uVar7;
  wchar_t *_Value;
  errno_t eVar2;
  int **ppiVar3;
  int iVar4;
  int **ppiVar5;
  int *piVar6;
  size_t local_c;
  char local_5;
  
  local_5 = '\0';
  local_c = 0;
  if ((param_3 & 2) == 0) {
    if ((((DAT_0041148d == '\0') || ((DAT_0041148c & 4) != 0)) ||
        (eVar2 = _wgetenv_s(&local_c,(wchar_t *)0x0,0,param_1), eVar2 != 0)) || (local_c == 0))
    goto LAB_00403413;
    uVar1 = FUN_0040ab97((ushort *)param_1);
    if (uVar1 == 0) {
LAB_004033ea:
      _Value = FUN_0040ec1b(param_2);
      eVar2 = _wputenv_s(param_1,_Value);
      if (eVar2 != 0) {
        FUN_004053f6(DAT_004216b0,0x41f);
      }
      goto LAB_00403413;
    }
    uVar7 = (uint3)(uVar1 >> 8);
    if (((*(byte *)(uVar1 + 0xc) & 2) == 0) && ((*(byte *)(uVar1 + 0xc) & DAT_0041148c & 4) == 0))
    goto LAB_004033ea;
LAB_00403436:
    iVar4 = (uint)uVar7 << 8;
  }
  else {
    if (*param_2 != L'\0') goto LAB_004033ea;
LAB_00403413:
    DAT_0041148d = '\0';
    ppiVar3 = (int **)FUN_0040ab97((ushort *)param_1);
    if (ppiVar3 != (int **)0x0) {
      uVar7 = (uint3)((uint)ppiVar3 >> 8);
      if (((*(byte *)(ppiVar3 + 3) & 2) != 0) || ((*(byte *)(ppiVar3 + 3) & DAT_0041148c & 4) != 0))
      goto LAB_00403436;
    }
    ppiVar5 = (int **)FUN_0040e215();
    ppiVar5[1] = (int *)param_2;
    if (ppiVar3 == (int **)0x0) {
      ppiVar3 = (int **)FUN_0040ac61(0x10);
      ppiVar3[1] = (int *)param_1;
    }
    else {
      local_5 = '\x01';
    }
    *(byte *)(ppiVar3 + 3) = *(byte *)(ppiVar3 + 3) & 0xef | (byte)param_3;
    piVar6 = ppiVar3[2];
    *ppiVar5 = piVar6;
    ppiVar3[2] = (int *)ppiVar5;
    ppiVar5 = DAT_00435628;
    if (local_5 == '\0') {
      DAT_00435628 = (int **)0x0;
      piVar6 = *ppiVar5;
      *ppiVar3 = piVar6;
      *ppiVar5 = (int *)ppiVar3;
    }
    if (((param_3 & 0x40) == 0) && (piVar6 = (int *)wcschr(param_2,L'$'), piVar6 != (int *)0x0)) {
      *(byte *)(ppiVar3 + 3) = *(byte *)(ppiVar3 + 3) | 1;
      piVar6 = (int *)FUN_0040e549(param_2,(int **)0x0,(int **)0x0,(ushort *)param_1,1,0,param_3);
      *(byte *)(ppiVar3 + 3) = *(byte *)(ppiVar3 + 3) & 0xfe;
      if ((char)piVar6 == '\0') {
        ppiVar3[2] = (int *)0x0;
        *(byte *)(ppiVar3 + 3) = *(byte *)(ppiVar3 + 3) | 0x10;
      }
    }
    iVar4 = CONCAT31((int3)((uint)piVar6 >> 8),1);
  }
  return iVar4;
}



void __fastcall FUN_004034d5(wchar_t *param_1,char param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 extraout_var;
  
  if (DAT_00421698 == (undefined4 *)0x0) {
    DAT_00421698 = (undefined4 *)FUN_0040ac61(0x20);
  }
  if (param_2 == '\0') {
    puVar2 = (undefined4 *)FUN_004036b0(DAT_00421698);
  }
  else {
    puVar2 = (undefined4 *)FUN_0040ac61(8);
    puVar2[1] = DAT_00421698;
  }
  puVar3 = FUN_0040e3b9(param_1);
  if (puVar3 == (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar3 = (undefined4 *)FUN_0040ac61(0x20);
    *(byte *)(puVar3 + 2) = DAT_0041148f;
    puVar3[1] = param_1;
    puVar3[6] = puVar2;
    uVar1 = FUN_0040e381((wint_t *)param_1);
    *puVar3 = (&DAT_00421490)[CONCAT22(extraout_var,uVar1)];
    (&DAT_00421490)[CONCAT22(extraout_var,uVar1)] = puVar3;
  }
  else {
    if (((*(byte *)(puVar3 + 2) ^ DAT_0041148f) & 0x20) != 0) {
      FUN_004053f6(DAT_004216b0,0x43f);
    }
    FUN_0040e36c(puVar3 + 6,puVar2);
    free(param_1);
  }
  return;
}



void __fastcall FUN_00403596(undefined4 *param_1)

{
  int **ppiVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int **ppiVar6;
  undefined4 *local_14;
  wchar_t *local_c;
  undefined4 *local_8;
  
  local_8 = DAT_004216a8;
  local_14 = DAT_004216a8;
  while (local_14 != (undefined4 *)0x0) {
    pwVar2 = wcschr((wchar_t *)local_14[1],L'$');
    ppiVar1 = (int **)DAT_004216bc;
    if (pwVar2 == (wchar_t *)0x0) {
      puVar4 = (undefined4 *)*local_14;
      *local_14 = 0;
      local_8 = puVar4;
      FUN_0040e36c(param_1,local_14);
      local_14 = puVar4;
    }
    else {
      pwVar2 = (wchar_t *)FUN_0040ec83((wchar_t *)local_14[1],-1,&DAT_004216bc);
      if (ppiVar1 != (int **)DAT_004216bc) {
        do {
          ppiVar6 = ppiVar1;
          ppiVar1 = (int **)*ppiVar6;
          *ppiVar6 = DAT_00432618;
          DAT_00432618 = ppiVar6;
        } while (ppiVar1 != (int **)DAT_004216bc);
      }
      local_c = (wchar_t *)0x0;
      pwVar3 = wcstok_s(pwVar2,L" \t",&local_c);
      puVar4 = local_14;
      while (pwVar3 != (wchar_t *)0x0) {
        puVar4 = FUN_0040e215();
        pvVar5 = FUN_0040e267(pwVar3);
        puVar4[1] = pvVar5;
        FUN_0040e36c(param_1,puVar4);
        pwVar3 = wcstok_s((wchar_t *)0x0,L" \t",&local_c);
        puVar4 = local_8;
      }
      free(pwVar2);
      free((void *)puVar4[1]);
      local_8 = (undefined4 *)*puVar4;
      *local_14 = DAT_00432618;
      DAT_00432618 = local_14;
      local_14 = local_8;
    }
  }
  return;
}



void * __fastcall FUN_004036b0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  pvVar2 = FUN_0040ac61(8);
  puVar3 = (undefined4 *)FUN_0040ac61(0x20);
  uVar1 = *param_1;
  *(undefined4 **)((int)pvVar2 + 4) = puVar3;
  *puVar3 = uVar1;
  puVar3[1] = param_1[1];
  puVar3[2] = param_1[2];
  puVar3[3] = param_1[3];
  *(undefined *)(puVar3 + 4) = *(undefined *)(param_1 + 4);
  uVar1 = param_1[7];
  puVar3[6] = param_1[6];
  puVar3[7] = uVar1;
  return pvVar2;
}



void __fastcall FUN_004036fa(size_t param_1)

{
  FUN_0040ac3c(param_1);
  return;
}



uint __fastcall FUN_00403702(ushort param_1)

{
  int iVar1;
  
  if (param_1 < 0x80) {
    return CONCAT11((char)(param_1 >> 8),(&DAT_00401060)[param_1]) & 0xffffff01;
  }
  iVar1 = iswspace(param_1);
  return CONCAT31((int3)((uint)-iVar1 >> 8),'\x01' - (iVar1 != 0));
}



void __fastcall FUN_00403727(wchar_t *param_1,wchar_t param_2)

{
  wcschr(param_1,param_2);
  return;
}



void FUN_00403732(void)

{
  undefined4 *puVar1;
  wchar_t *pwVar2;
  int iVar3;
  ulonglong uVar4;
  undefined auStack_274 [4];
  undefined8 uStack_270;
  HANDLE pvStack_264;
  _WIN32_FIND_DATAW _Stack_260;
  uint local_c;
  
  local_c = DAT_00411014 ^ (uint)auStack_274;
  do {
    puVar1 = DAT_00421690;
    if (DAT_00421690 == (undefined4 *)0x0) {
LAB_00403858:
      FUN_00410365(local_c ^ (uint)auStack_274);
      return;
    }
    pwVar2 = wcspbrk((wchar_t *)DAT_00421690[1],L"*?");
    if (pwVar2 == (wchar_t *)0x0) {
      uStack_270._0_4_ = 0;
      uStack_270._4_4_ = 0;
      iVar3 = FUN_00403882((wchar_t *)DAT_00421690[1],DAT_0041148e,&uStack_270);
      if ((iVar3 < 0) && ((DAT_0041148c & 8) != 0)) {
LAB_00403877:
        FUN_00404be9(puVar1);
        goto LAB_00403858;
      }
    }
    else {
      pwVar2 = (wchar_t *)FUN_004079fa((wchar_t *)DAT_00421690[1],&_Stack_260,&pvStack_264);
      if (pwVar2 == (wchar_t *)0x0) {
        FUN_004053f6(0,0x42d);
      }
      else {
        do {
          pwVar2 = (wchar_t *)FUN_0040f89e((wchar_t *)DAT_00421690[1],pwVar2);
          uVar4 = FUN_004079e0((byte *)&_Stack_260);
          uStack_270 = uVar4;
          iVar3 = FUN_00403882(pwVar2,DAT_0041148e,&uStack_270);
          free(pwVar2);
          if ((iVar3 < 0) && ((DAT_0041148c & 8) != 0)) goto LAB_00403877;
          pwVar2 = FUN_00407b86(&_Stack_260,pvStack_264);
        } while (pwVar2 != (WCHAR *)0x0);
      }
    }
    DAT_00421690 = (undefined4 *)*puVar1;
    *puVar1 = DAT_00432618;
    DAT_00432618 = puVar1;
  } while( true );
}



int __fastcall FUN_00403882(wchar_t *param_1,byte param_2,ulonglong *param_3)

{
  int **ppiVar1;
  int iVar2;
  uint uVar3;
  int **ppiVar4;
  int iVar5;
  int **local_c [2];
  
  iVar5 = 0;
  local_c[0] = (int **)0x0;
  iVar2 = FUN_004038ee(param_1,param_2,param_3,(int *************)0x0,(int **)local_c);
  ppiVar4 = local_c[0];
  if (local_c[0] != (int **)0x0) {
    do {
      uVar3 = FUN_00404d06((int)ppiVar4);
      ppiVar4 = (int **)*ppiVar4;
      iVar5 = iVar5 + uVar3;
    } while (ppiVar4 != (int **)0x0);
    iVar2 = iVar2 + iVar5;
    ppiVar4 = local_c[0];
    while (ppiVar4 != (int **)0x0) {
      ppiVar1 = (int **)ppiVar4[3];
      *ppiVar1 = DAT_00432618;
      DAT_00432618 = ppiVar4[4];
      *DAT_00432618 = (int)ppiVar1;
      ppiVar1 = (int **)*ppiVar4;
      free(ppiVar4);
      ppiVar4 = ppiVar1;
    }
  }
  return iVar2;
}



void __fastcall
FUN_004038ee(wchar_t *param_1,byte param_2,ulonglong *param_3,int *************param_4,int **param_5
            )

{
  undefined4 *puVar1;
  bool bVar2;
  
  DAT_00411484 = DAT_00411484 + 1;
  puVar1 = FUN_0040e3b9(param_1);
  bVar2 = puVar1 == (undefined4 *)0x0;
  if (bVar2) {
    puVar1 = FUN_00404c13((wint_t *)param_1,param_2);
  }
  FUN_00403944((int)puVar1,param_2,param_3,!bVar2,param_4,param_5);
  DAT_00411484 = DAT_00411484 + -1;
  return;
}



// WARNING: Removing unreachable block (ram,0x00403cdd)
// WARNING: Removing unreachable block (ram,0x004041e2)

void __fastcall
FUN_00403944(int param_1,byte param_2,ulonglong *param_3,char param_4,int *************param_5,
            int **param_6)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  int *******pppppppiVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int **************ppppppppppppppiVar6;
  int **************ppppppppppppppiVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  int **ppiVar11;
  undefined4 *puVar12;
  int ************ppppppppppppiVar13;
  uint uVar14;
  int *************pppppppppppppiVar15;
  int **ppiVar16;
  wchar_t *pwVar17;
  wchar_t *extraout_ECX;
  wchar_t *extraout_ECX_00;
  wchar_t *extraout_ECX_01;
  int **ppiVar18;
  int *piVar19;
  int *piVar20;
  bool bVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  _FILETIME local_4e8;
  ulonglong *local_4e0;
  int **local_4dc;
  int *local_4d8;
  int **local_4d4;
  int **local_4d0;
  ulonglong *local_4cc;
  HANDLE local_4c8;
  int *************local_4c4;
  int **local_4c0;
  int **local_4bc;
  int **local_4b8;
  int **************local_4b0;
  int **local_4ac;
  int **local_4a8;
  int **local_4a4;
  int *************local_4a0;
  int **************local_49c;
  int **local_498;
  int **************local_494;
  int **local_490;
  int **local_48c;
  int **************local_488;
  int **local_484;
  int **local_480;
  int **local_47c;
  int **local_478;
  int **local_474;
  int **local_470;
  int **local_46c;
  byte local_465;
  _WIN32_FIND_DATAW local_464;
  wchar_t local_214 [262];
  uint local_8;
  
  uVar23 = CONCAT44(local_48c,local_480);
  local_8 = DAT_00411014 ^ (uint)&stack0xfffffffc;
  local_4c4 = param_5;
  local_4a0 = param_5;
  local_4cc = param_3;
  local_474 = (int **)0x0;
  local_478 = (int **)0x0;
  local_465 = param_2;
  if (param_1 == 0) {
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)((int)param_3 + 4) = 0;
    goto LAB_004046fe;
  }
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    FUN_004053f6(0,0x42f);
  }
  puVar12 = *(undefined4 **)(param_1 + 0x1c);
  if (puVar12 != (undefined4 *)0x0) {
    FUN_00404e5b((undefined4 *)*puVar12);
    FUN_00404e79(puVar12);
    uVar23 = CONCAT44(local_48c,local_480);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    piVar19 = *(int **)(param_1 + 0x14);
    *(int **)local_4cc = *(int **)(param_1 + 0x10);
    *(int **)((int)local_4cc + 4) = piVar19;
    goto LAB_004046fe;
  }
  if ((*(byte *)(param_1 + 9) & 2) != 0) {
    if ((local_465 & 1) != 0) {
      FUN_0040ca65(*(uint *)(param_1 + 0x10),*(uint *)(param_1 + 0x14));
    }
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((int)param_3 + 4) = uVar2;
    if (((((DAT_0041148c & 8) == 0) && (DAT_00411484 == 1)) && ((*(byte *)(param_1 + 9) & 4) == 0))
       && (iVar10 = FUN_004079fa(*(wchar_t **)(param_1 + 4),&local_464,&local_4c8), iVar10 != 0)) {
      FUN_004054d0(2);
    }
    uVar23 = CONCAT44(local_48c,local_480);
    goto LAB_004046fe;
  }
  local_4c0 = (int **)0x0;
  uVar22 = 0;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
  local_484 = *(int ***)(param_1 + 0x18);
  local_494 = (int **************)0x0;
  local_4b0 = (int **************)0x0;
  local_488 = (int **************)0x0;
  local_49c = (int **************)0x0;
  local_4d8 = (int *)0x0;
  local_4a4 = (int **)0x0;
  local_47c = (int **)0x0;
  local_480 = (int **)0x0;
  local_48c = (int **)0x0;
  uVar23 = 0;
  local_4bc = (int **)0x0;
  local_4b8 = (int **)0x0;
  local_4d0 = (int **)0x0;
  local_4ac = (int **)0x0;
  local_4d4 = (int **)0x0;
  local_4a8 = (int **)0x0;
  local_4e0 = (ulonglong *)0x0;
  pwVar17 = *(wchar_t **)(param_1 + 4);
  local_46c = (int **)0x0;
  local_470 = (int **)0x0;
  DAT_00421ed4 = pwVar17;
  DAT_00421ed8 = pwVar17;
  if (local_484 != (int **)0x0) {
    uVar4 = 0;
    if ((*(byte *)(local_484[1] + 4) & 0x20) != 0) {
      iVar10 = FUN_004079fa(pwVar17,&local_464,&local_4c8);
      uVar4 = CONCAT44(local_470,local_46c);
      if (iVar10 == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = FUN_004079e0((byte *)&local_464);
        uVar4 = uVar22;
      }
    }
    uVar23 = CONCAT44(local_48c,local_480);
    do {
      local_48c = (int **)(uVar23 >> 0x20);
      local_480 = (int **)uVar23;
      local_470 = (int **)(uVar4 >> 0x20);
      local_46c = (int **)uVar4;
      piVar19 = (int *)(uVar22 >> 0x20);
      local_47c = (int **)local_484[1];
      local_498 = (int **)0x0;
      local_490 = (int **)0x0;
      puVar1 = (ulonglong *)(local_47c + 6);
      if (((uint)*(int **)puVar1 | (uint)local_47c[7]) == 0) {
        local_4e0 = puVar1;
        ppiVar11 = (int **)FUN_0040470f(local_47c,*(undefined4 *)(param_1 + 4));
        ppiVar18 = (int **)0x0;
        local_4dc = ppiVar11;
        ppiVar16 = local_4c0;
        for (; local_4c0 = ppiVar16, ppiVar11 != (int **)0x0; ppiVar11 = (int **)*ppiVar11) {
          local_4bc = (int **)ppiVar11[2];
          local_4b8 = (int **)ppiVar11[3];
          iVar10 = FUN_004038ee((wchar_t *)ppiVar11[1],*(byte *)(local_47c + 4),
                                (ulonglong *)&local_4bc,(int *************)0x0,(int **)&local_4c0);
          local_478 = (int **)((int)local_474 + iVar10);
          local_474 = local_478;
          if ((DAT_004216b7 != '\0') && (iVar10 != 0)) {
            puVar12 = FUN_0040e3b9((wchar_t *)ppiVar11[1]);
            if ((*(byte *)((int)puVar12 + 9) & 8) == 0) {
              DAT_00411020 = 0;
              FUN_004053f6(0,0xfaa);
            }
            *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 8;
          }
          ppiVar16 = local_470;
          if ((local_498 <= local_4b8) && ((local_498 < local_4b8 || (ppiVar18 <= local_4bc)))) {
            local_490 = local_4bc;
            local_498 = local_4b8;
          }
          if (((((uint)local_46c | (uint)local_470) == 0) &&
              ((*(byte *)(local_47c + 4) & 0x20) == 0)) &&
             (iVar10 = FUN_004079fa(*(wchar_t **)(param_1 + 4),&local_464,&local_4c8), iVar10 != 0))
          {
            uVar23 = FUN_004079e0((byte *)&local_464);
            *(ulonglong *)(param_1 + 0x10) = uVar23;
            uVar22 = uVar23;
          }
          else {
            uVar22 = CONCAT44(local_470,local_46c);
            uVar23 = CONCAT44(ppiVar16,local_46c);
          }
          local_470 = (int **)(uVar22 >> 0x20);
          local_46c = (int **)uVar22;
          if ((((*(byte *)(param_1 + 8) & 0x10) != 0) || (uVar23 < CONCAT44(local_4b8,local_4bc)))
             || ((DAT_004216b6 != '\0' && (uVar23 == CONCAT44(local_4b8,local_4bc))))) {
            pppppppppppppiVar15 = (int *************)FUN_0040e215();
            ppppppppppppiVar13 = (int ************)FUN_0040e267((short *)ppiVar11[1]);
            pppppppppppppiVar15[1] = ppppppppppppiVar13;
            ppppppppppppppiVar6 = (int **************)&local_4b0;
            for (; local_494 != (int **************)0x0; local_494 = (int **************)*local_494)
            {
              ppppppppppppppiVar6 = local_494;
            }
            *ppppppppppppppiVar6 = pppppppppppppiVar15;
            uVar22 = CONCAT44(local_470,local_46c);
            local_494 = local_4b0;
          }
          local_470 = (int **)(uVar22 >> 0x20);
          local_46c = (int **)uVar22;
          pppppppppppppiVar15 = (int *************)FUN_0040e215();
          ppppppppppppiVar13 = (int ************)FUN_0040e267((short *)ppiVar11[1]);
          pppppppppppppiVar15[1] = ppppppppppppiVar13;
          ppppppppppppppiVar6 = (int **************)&local_49c;
          for (; local_488 != (int **************)0x0; local_488 = (int **************)*local_488) {
            ppppppppppppppiVar6 = local_488;
          }
          *ppppppppppppppiVar6 = pppppppppppppiVar15;
          ppiVar18 = local_490;
          ppiVar16 = local_4c0;
          local_488 = local_49c;
        }
        ppiVar11 = local_4dc;
        if (ppiVar16 != (int **)0x0) {
          iVar10 = 0;
          do {
            uVar14 = FUN_00404d06((int)ppiVar16);
            ppiVar16 = (int **)*ppiVar16;
            iVar10 = iVar10 + uVar14;
          } while (ppiVar16 != (int **)0x0);
          local_478 = (int **)((int)local_474 + iVar10);
          ppiVar11 = local_4c0;
          local_474 = local_478;
          while (ppiVar11 != (int **)0x0) {
            pppppppiVar3 = (int *******)ppiVar11[3];
            *pppppppiVar3 = (int ******)DAT_00432618;
            DAT_00432618 = (int ********)ppiVar11[4];
            *DAT_00432618 = pppppppiVar3;
            ppiVar16 = (int **)*ppiVar11;
            free(ppiVar11);
            ppiVar11 = ppiVar16;
          }
          local_4c0 = (int **)0x0;
          ppiVar11 = local_4dc;
        }
        while (ppiVar16 = local_47c, uVar23 = CONCAT44(local_48c,local_480), ppiVar11 != (int **)0x0
              ) {
          free(ppiVar11[1]);
          ppiVar16 = (int **)*ppiVar11;
          free(ppiVar11);
          ppiVar11 = ppiVar16;
        }
        piVar19 = local_47c[2];
        if ((*(byte *)(local_47c + 4) & 0x20) == 0) {
          if (piVar19 != (int *)0x0) {
            if (local_4a4 == (int **)0x0) {
              local_4a4 = local_47c;
            }
            else {
              FUN_004053f6(0,0xfa4);
            }
          }
          ppiVar11 = local_474;
          uVar23 = CONCAT44(local_48c,local_480);
          if ((local_4d4 <= local_498) &&
             ((local_4d4 < local_498 ||
              (uVar23 = CONCAT44(local_48c,local_480), local_4d0 <= local_490)))) {
            local_4d0 = local_490;
            local_4d4 = local_498;
            local_4ac = local_490;
            local_4a8 = local_498;
            uVar23 = CONCAT44(local_48c,local_480);
          }
        }
        else {
          ppiVar11 = local_474;
          if (piVar19 != (int *)0x0) {
            DAT_00421ed4 = *(wchar_t **)(param_1 + 4);
            DAT_00421ec8 = 0;
            DAT_00421ecc = (wchar_t *)0x0;
            DAT_00421ed0 = (int ********)local_494;
            DAT_00421ec4 = (int ********)local_488;
            DAT_00421ed8 = DAT_00421ed4;
            if ((((((DAT_004216b7 != '\0') && ((*(byte *)(param_1 + 9) & 8) == 0)) ||
                  (pwVar17 = DAT_00421ed4, local_474 == (int **)0x0)) &&
                 ((pwVar17 = *(wchar_t **)(param_1 + 4), local_470 < local_498 ||
                  ((local_470 <= local_498 &&
                   (pwVar17 = *(wchar_t **)(param_1 + 4), local_46c < local_490)))))) ||
                ((DAT_004216b6 != '\0' &&
                 ((pwVar17 = *(wchar_t **)(param_1 + 4), local_46c == local_490 &&
                  (pwVar17 = *(wchar_t **)(param_1 + 4), local_470 == local_498)))))) ||
               (((((uint)local_46c | (uint)local_470) == 0 &&
                 (((uint)local_490 | (uint)local_498) == 0)) || (*local_47c == (int *)0x0)))) {
              local_465 = DAT_004323f8;
              DAT_004323f8 = 1;
              if (local_4c4 == (int *************)0x0) {
                if (local_488 == (int **************)0x0) {
                  local_4c4 = (int *************)0x0;
                  local_4a0 = local_4c4;
                }
                else {
                  local_4c4 = local_488[1];
                  local_4a0 = local_4c4;
                }
              }
              iVar10 = FUN_0040573e(pwVar17,piVar19,local_47c[3],(uint)*(byte *)(local_47c + 4),
                                    (wchar_t *)local_4c4);
              local_478 = (int **)((int)local_474 + iVar10);
              local_474 = local_478;
              if (((*(byte *)(param_1 + 8) & 4) == 0) &&
                 (iVar10 = FUN_004079fa(*(wchar_t **)(param_1 + 4),&local_464,&local_4c8),
                 iVar10 != 0)) {
                uVar23 = FUN_004079e0((byte *)&local_464);
              }
              else if (((uint)local_4d0 | (uint)local_4d4) == 0) {
                GetSystemTimeAsFileTime(&local_4e8);
                uVar23 = CONCAT44(local_4e8.dwHighDateTime,local_4e8.dwLowDateTime);
              }
              else {
                uVar23 = CONCAT44(local_4d4,local_4d0);
              }
              *(ulonglong *)(ppiVar16 + 6) = uVar23;
              ppppppppppppppiVar6 = local_488;
              if (local_488 == local_494) {
                while (ppppppppppppppiVar6 != (int **************)0x0) {
                  local_48c = (int **)(uVar23 >> 0x20);
                  local_480 = (int **)uVar23;
                  pppppppppppppiVar15 = *ppppppppppppppiVar6;
                  free(ppppppppppppppiVar6[1]);
                  uVar23 = CONCAT44(local_48c,local_480);
                  *ppppppppppppppiVar6 = (int *************)DAT_00432618;
                  DAT_00432618 = (int ********)ppppppppppppppiVar6;
                  ppppppppppppppiVar6 = (int **************)pppppppppppppiVar15;
                }
              }
              else {
                while (ppppppppppppppiVar7 = local_494,
                      ppppppppppppppiVar6 != (int **************)0x0) {
                  local_48c = (int **)(uVar23 >> 0x20);
                  local_480 = (int **)uVar23;
                  pppppppppppppiVar15 = *ppppppppppppppiVar6;
                  free(ppppppppppppppiVar6[1]);
                  uVar23 = CONCAT44(local_48c,local_480);
                  *ppppppppppppppiVar6 = (int *************)DAT_00432618;
                  DAT_00432618 = (int ********)ppppppppppppppiVar6;
                  ppppppppppppppiVar6 = (int **************)pppppppppppppiVar15;
                }
                while (ppppppppppppppiVar7 != (int **************)0x0) {
                  local_48c = (int **)(uVar23 >> 0x20);
                  local_480 = (int **)uVar23;
                  pppppppppppppiVar15 = *ppppppppppppppiVar7;
                  free(ppppppppppppppiVar7[1]);
                  uVar23 = CONCAT44(local_48c,local_480);
                  *ppppppppppppppiVar7 = (int *************)DAT_00432618;
                  DAT_00432618 = (int ********)ppppppppppppppiVar7;
                  ppppppppppppppiVar7 = (int **************)pppppppppppppiVar15;
                }
              }
              local_494 = (int **************)0x0;
              local_4b0 = (int **************)0x0;
              local_488 = (int **************)0x0;
              local_49c = (int **************)0x0;
              DAT_004323f8 = local_465;
            }
            local_48c = (int **)(uVar23 >> 0x20);
            local_480 = (int **)uVar23;
            ppiVar11 = local_474;
            if (DAT_004216b7 != '\0') {
              if ((*(byte *)(param_1 + 9) & 8) != 0) {
                FUN_004053f6(0,0xfab);
                uVar23 = CONCAT44(local_48c,local_480);
                *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xf7;
              }
              local_48c = (int **)(uVar23 >> 0x20);
              local_480 = (int **)uVar23;
              ppiVar11 = local_474;
              if (local_474 != (int **)0x0) {
                DAT_00411020 = 0;
                local_474 = (int **)0x0;
                local_478 = (int **)0x0;
                FUN_004053f6(0,0xfaa);
                ppiVar11 = (int **)0x0;
                uVar23 = CONCAT44(local_48c,local_480);
              }
            }
          }
        }
        uVar4 = CONCAT44(local_470,local_46c);
        if (((*(byte *)(local_47c + 4) & 0x20) != 0) && (*local_484 == (int *)0x0)) {
          if ((int)ppiVar11 < 1) {
            bVar8 = *(byte *)(param_1 + 9) & 0xfa | 2;
          }
          else {
            bVar8 = *(byte *)(param_1 + 9) & 0xfe | 6;
          }
          *(byte *)(param_1 + 9) = bVar8;
          if (uVar4 < uVar23) {
            uVar4 = uVar23;
          }
          *(ulonglong *)(param_1 + 0x10) = uVar4;
          *local_4cc = uVar4;
          goto LAB_004046fe;
        }
        uVar22 = CONCAT44(local_470,local_46c);
      }
      else {
        bVar21 = piVar19 < local_47c[7];
        if ((bVar21 || piVar19 == local_47c[7]) &&
           ((bVar21 || ((int *)uVar22 < *(int **)puVar1 || (int *)uVar22 == *(int **)puVar1)))) {
          uVar4 = *puVar1;
          uVar22 = *puVar1;
        }
      }
      local_46c = (int **)uVar4;
      local_484 = (int **)*local_484;
    } while (local_484 != (int **)0x0);
    pwVar17 = *(wchar_t **)(param_1 + 4);
    param_3 = local_4cc;
  }
  local_48c = (int **)(uVar23 >> 0x20);
  local_480 = (int **)uVar23;
  local_470 = *(int ***)param_3;
  local_484 = *(int ***)((int)param_3 + 4);
  uVar4 = *param_3;
  DAT_00421ec8 = 0;
  DAT_00421ecc = (wchar_t *)0x0;
  uVar22 = *param_3;
  uVar5 = *param_3;
  if (((uint)local_470 | (uint)local_484) == 0) {
    if ((*(uint *)(param_1 + 0x10) | *(uint *)(param_1 + 0x14)) == 0) {
      iVar10 = FUN_004079fa(pwVar17,&local_464,&local_4c8);
      uVar23 = CONCAT44(local_48c,local_480);
      pwVar17 = extraout_ECX;
      uVar22 = uVar4;
      uVar5 = CONCAT44(local_484,local_470);
      if (iVar10 != 0) {
        uVar22 = FUN_004079e0((byte *)&local_464);
        uVar23 = CONCAT44(local_48c,local_480);
        pwVar17 = extraout_ECX_00;
        uVar5 = uVar22;
      }
    }
    else {
      uVar22 = *(ulonglong *)(param_1 + 0x10);
      uVar5 = *(ulonglong *)(param_1 + 0x10);
    }
  }
  local_484 = (int **)(uVar5 >> 0x20);
  local_470 = (int **)uVar5;
  local_48c = (int **)(uVar23 >> 0x20);
  local_480 = (int **)uVar23;
  uVar14 = (uint)(uVar22 >> 0x20);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_0040ca65((uint)uVar22,uVar14);
    uVar5 = CONCAT44(local_484,local_470);
    uVar23 = CONCAT44(local_48c,local_480);
    pwVar17 = extraout_ECX_01;
  }
  local_484 = (int **)(uVar5 >> 0x20);
  local_470 = (int **)uVar5;
  local_48c = (int **)(uVar23 >> 0x20);
  local_480 = (int **)uVar23;
  local_4dc = (int **)FUN_0040e069(param_1,local_214,pwVar17,(uint)uVar22,uVar14,(int *)&local_4b0,
                                   (int *)&local_49c,(int *)&local_478,(uint *)&local_4ac,
                                   (wchar_t **)&local_4a0);
  ppppppppppppppiVar6 = local_49c;
  ppppppppppppppiVar7 = local_4b0;
  if ((local_4dc != (int **)0x0) && (local_4a4 == (int **)0x0)) {
    local_4d8 = local_4dc[3];
    DAT_00421ecc = local_214;
  }
  DAT_00421ed4 = *(wchar_t **)(param_1 + 4);
  DAT_00421ed0 = (int ********)local_4b0;
  DAT_00421ec4 = (int ********)local_49c;
  local_46c = local_478;
  DAT_00421ed8 = DAT_00421ed4;
  if ((((DAT_004216b7 == '\0') || ((*(byte *)(param_1 + 9) & 8) != 0)) && (local_478 != (int **)0x0)
      ) || ((((local_4a8 <= local_484 && ((local_4a8 < local_484 || (local_4ac <= local_470)))) &&
             ((DAT_004216b6 == '\0' || ((local_470 != local_4ac || (local_484 != local_4a8)))))) &&
            (((((uint)local_470 | (uint)local_484) != 0 ||
              (((uint)local_4ac | (uint)local_4a8) != 0)) && ((*(byte *)(param_1 + 8) & 0x10) == 0))
            )))) {
    ppiVar11 = local_478;
    if ((((DAT_0041148c & 8) == 0) && (DAT_00411484 == 1)) && ((*(byte *)(param_1 + 9) & 8) == 0)) {
      FUN_004054d0(2);
      ppiVar11 = local_478;
    }
  }
  else {
    local_465 = DAT_004323f8;
    DAT_004323f8 = 1;
    pppppppppppppiVar15 = local_4a0;
    if (local_4a4 == (int **)0x0) {
      if (local_4d8 != (int *)0x0) {
        if ((*(char *)(local_4dc + 5) == '\0') || ((DAT_0041148c & 0x40) != 0)) {
          bVar8 = *(byte *)(param_1 + 8);
          piVar19 = local_4dc[4];
          piVar20 = local_4d8;
          goto LAB_0040446f;
        }
        FUN_00404c5a(param_6,(int *)local_4dc,param_1);
        goto LAB_004043df;
      }
      if ((DAT_0041148c & 0x10) == 0) {
        if ((param_4 == '\0') && (((uint)local_470 | (uint)local_484) == 0)) {
          if (DAT_004216b7 == '\0') {
            FUN_004053f6(0,0x431);
          }
          else {
            local_46c = (int **)0x1;
          }
        }
      }
      else if (local_47c != (int **)0x0) {
        iVar10 = FUN_0040573e(*(short **)(param_1 + 4),local_47c[2],local_47c[3],
                              (uint)*(byte *)(local_47c + 4),(wchar_t *)local_4a0);
        local_46c = (int **)((int)local_478 + iVar10);
      }
      ppiVar16 = local_4ac;
      ppiVar18 = local_4a8;
      DAT_004323f8 = local_465;
      if (DAT_00421ec4 == (int ********)0x0) goto LAB_004043df;
    }
    else {
      if (local_4a0 == (int *************)0x0) {
        if (local_49c == (int **************)0x0) {
          pppppppppppppiVar15 = (int *************)0x0;
        }
        else {
          pppppppppppppiVar15 = local_49c[1];
        }
      }
      bVar8 = *(byte *)(local_4a4 + 4);
      piVar19 = local_4a4[3];
      piVar20 = local_4a4[2];
LAB_0040446f:
      iVar10 = FUN_0040573e(*(short **)(param_1 + 4),piVar20,piVar19,(uint)bVar8,
                            (wchar_t *)pppppppppppppiVar15);
      local_46c = (int **)((int)local_478 + iVar10);
LAB_004043df:
      DAT_004323f8 = local_465;
      GetSystemTimeAsFileTime(&local_4e8);
      ppiVar16 = (int **)(local_4e8.dwLowDateTime + 2);
      ppiVar18 = (int **)(local_4e8.dwHighDateTime + (0xfffffffd < local_4e8.dwLowDateTime));
    }
    ppiVar11 = local_46c;
    local_48c = ppiVar18;
    local_480 = ppiVar16;
    if ((local_4e0 != (ulonglong *)0x0) && (local_4a4 != (int **)0x0)) {
      *(int ***)local_4e0 = ppiVar16;
      *(int ***)((int)local_4e0 + 4) = ppiVar18;
    }
  }
  if ((DAT_004216b7 != '\0') && (ppiVar11 != (int **)0x0)) {
    DAT_00411020 = 0;
    if ((*(byte *)(param_1 + 9) & 8) == 0) {
      if (DAT_00411484 != 1) goto LAB_00404582;
      uVar14 = 0xfaa;
    }
    else {
      uVar14 = 0xfab;
    }
    FUN_004053f6(0,uVar14);
  }
LAB_00404582:
  if (((DAT_0041148c & 8) == 0) || (DAT_00411484 != 1)) {
    bVar8 = *(byte *)(param_1 + 9);
    bVar9 = bVar8 & 0xfe;
    *(byte *)(param_1 + 9) = bVar9;
    if (*(int *)(param_1 + 0x1c) == 0) {
      if ((int)local_46c < 1) {
        bVar9 = bVar8 & 0xfa | 2;
      }
      else {
        bVar9 = bVar9 | 6;
      }
      *(byte *)(param_1 + 9) = bVar9;
    }
    ppiVar11 = local_470;
    ppiVar16 = local_484;
    if ((local_484 <= local_48c) && ((local_484 < local_48c || (local_470 < local_480)))) {
      ppiVar11 = local_480;
      ppiVar16 = local_48c;
    }
    *(int ***)(param_1 + 0x10) = ppiVar11;
    *(int ***)(param_1 + 0x14) = ppiVar16;
    *(int ***)local_4cc = ppiVar11;
    *(int ***)((int)local_4cc + 4) = ppiVar16;
    if (ppppppppppppppiVar6 == ppppppppppppppiVar7) {
      while (ppppppppppppppiVar6 != (int **************)0x0) {
        pppppppppppppiVar15 = *ppppppppppppppiVar6;
        free(ppppppppppppppiVar6[1]);
        *ppppppppppppppiVar6 = (int *************)DAT_00432618;
        DAT_00432618 = (int ********)ppppppppppppppiVar6;
        ppppppppppppppiVar6 = (int **************)pppppppppppppiVar15;
      }
    }
    else {
      while (ppppppppppppppiVar6 != (int **************)0x0) {
        pppppppppppppiVar15 = *ppppppppppppppiVar6;
        free(ppppppppppppppiVar6[1]);
        *ppppppppppppppiVar6 = (int *************)DAT_00432618;
        DAT_00432618 = (int ********)ppppppppppppppiVar6;
        ppppppppppppppiVar6 = (int **************)pppppppppppppiVar15;
      }
      while (ppppppppppppppiVar7 != (int **************)0x0) {
        pppppppppppppiVar15 = *ppppppppppppppiVar7;
        free(ppppppppppppppiVar7[1]);
        *ppppppppppppppiVar7 = (int *************)DAT_00432618;
        DAT_00432618 = (int ********)ppppppppppppppiVar7;
        ppppppppppppppiVar7 = (int **************)pppppppppppppiVar15;
      }
    }
    uVar23 = CONCAT44(local_48c,local_480);
  }
  else {
    if (ppppppppppppppiVar6 == ppppppppppppppiVar7) {
      while (ppppppppppppppiVar6 != (int **************)0x0) {
        pppppppppppppiVar15 = *ppppppppppppppiVar6;
        free(ppppppppppppppiVar6[1]);
        *ppppppppppppppiVar6 = (int *************)DAT_00432618;
        DAT_00432618 = (int ********)ppppppppppppppiVar6;
        ppppppppppppppiVar6 = (int **************)pppppppppppppiVar15;
      }
    }
    else {
      while (ppppppppppppppiVar6 != (int **************)0x0) {
        pppppppppppppiVar15 = *ppppppppppppppiVar6;
        free(ppppppppppppppiVar6[1]);
        *ppppppppppppppiVar6 = (int *************)DAT_00432618;
        DAT_00432618 = (int ********)ppppppppppppppiVar6;
        ppppppppppppppiVar6 = (int **************)pppppppppppppiVar15;
      }
      while (ppppppppppppppiVar7 != (int **************)0x0) {
        pppppppppppppiVar15 = *ppppppppppppppiVar7;
        free(ppppppppppppppiVar7[1]);
        *ppppppppppppppiVar7 = (int *************)DAT_00432618;
        DAT_00432618 = (int ********)ppppppppppppppiVar7;
        ppppppppppppppiVar7 = (int **************)pppppppppppppiVar15;
      }
    }
    uVar23 = CONCAT44(local_48c,local_480);
  }
LAB_004046fe:
  local_48c = (int **)(uVar23 >> 0x20);
  local_480 = (int **)uVar23;
  FUN_00410365(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __fastcall FUN_0040470f(int **param_1,undefined4 param_2)

{
  char cVar1;
  wchar_t wVar2;
  short *_Memory;
  undefined4 uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  int **ppiVar7;
  int *piVar8;
  int iVar9;
  int **ppiVar10;
  int **ppiVar11;
  WCHAR *pWVar12;
  wchar_t *pwVar13;
  int **ppiVar14;
  uint _SizeInWords;
  bool bVar15;
  undefined8 uVar16;
  int *local_284;
  int *local_280;
  wchar_t *local_27c;
  short *local_278;
  int *local_274;
  HANDLE local_270;
  int **local_26c;
  wchar_t *local_268;
  wchar_t *local_264;
  char local_25d;
  _WIN32_FIND_DATAW local_25c;
  uint local_8;
  
  local_8 = DAT_00411014 ^ (uint)&stack0xfffffffc;
  piVar8 = *param_1;
  local_270 = (HANDLE)0x0;
  local_284 = param_1[1];
  local_26c = (int **)0x0;
  local_280 = piVar8;
  if (piVar8 != (int *)0x0) {
    do {
      local_27c = (wchar_t *)piVar8[1];
      wVar2 = *local_27c;
      pwVar13 = local_27c;
      while (local_280 = piVar8, wVar2 != L'\0') {
        if (wVar2 == L'$') {
          DAT_00421ec8 = param_2;
          local_27c = (wchar_t *)FUN_0040ec83(local_27c,'\x01',&local_284);
          break;
        }
        if (wVar2 == L'^') {
          pwVar13 = pwVar13 + 1;
        }
        pwVar13 = pwVar13 + 1;
        wVar2 = *pwVar13;
      }
      pwVar13 = local_27c;
      _Memory = (short *)FUN_0040e267(local_27c);
      local_278 = _Memory;
      uVar3 = FUN_00404ab4(&local_278,&local_268);
      cVar1 = (char)uVar3;
      while (cVar1 != '\0') {
        wVar2 = L'{';
        pwVar13 = local_268;
        if (*local_268 == L'{') {
          do {
            if (wVar2 == L'}') {
              *pwVar13 = L'\0';
              pwVar13 = pwVar13 + 1;
              local_268 = local_268 + 1;
              break;
            }
            if (wVar2 == L'^') {
              pwVar13 = pwVar13 + 1;
            }
            pwVar13 = pwVar13 + 1;
            wVar2 = *pwVar13;
          } while (wVar2 != L'\0');
        }
        else {
          local_268 = (wchar_t *)0x0;
        }
        pwVar6 = local_268;
        local_25d = '\0';
        local_25c.ftCreationTime.dwLowDateTime = 0;
        local_25c.ftCreationTime.dwHighDateTime = 0;
        local_25c.ftLastWriteTime.dwLowDateTime = 0;
        local_25c.ftLastWriteTime.dwHighDateTime = 0;
        pwVar4 = (wchar_t *)FUN_0040e267(pwVar13);
        local_264 = pwVar4;
        pwVar5 = wcspbrk(pwVar13,L"*?");
        if (((pwVar5 != (wchar_t *)0x0) || (pwVar6 != (wchar_t *)0x0)) &&
           (pwVar6 = (wchar_t *)FUN_00407ba9(pwVar6,pwVar13,&local_25c,&local_270),
           pwVar6 != (wchar_t *)0x0)) {
          local_25d = '\x01';
          free(pwVar4);
          local_264 = (wchar_t *)FUN_0040f89e(pwVar6,local_25c.cFileName);
          pwVar13 = pwVar6;
        }
        do {
          pwVar6 = local_264;
          ppiVar7 = (int **)FUN_0040ac61(0x10);
          pwVar4 = wcschr(pwVar6,L' ');
          if ((pwVar4 == (wchar_t *)0x0) ||
             (pwVar4 = wcschr(pwVar6,L'\"'), pwVar4 != (wchar_t *)0x0)) {
            piVar8 = (int *)FUN_0040e267(pwVar6);
            ppiVar7[1] = piVar8;
          }
          else {
            pwVar4 = pwVar6 + 1;
            do {
              wVar2 = *pwVar6;
              pwVar6 = pwVar6 + 1;
            } while (wVar2 != L'\0');
            _SizeInWords = ((int)pwVar6 - (int)pwVar4 >> 1) + 3;
            piVar8 = (int *)FUN_0040ac3c(-(uint)((int)((ulonglong)_SizeInWords * 2 >> 0x20) != 0) |
                                         (uint)((ulonglong)_SizeInWords * 2));
            ppiVar7[1] = piVar8;
            wcscpy_s((wchar_t *)piVar8,_SizeInWords,L"\"");
            wcscat_s((wchar_t *)ppiVar7[1],_SizeInWords,local_264);
            wcscat_s((wchar_t *)ppiVar7[1],_SizeInWords,L"\"");
            pwVar6 = local_264;
          }
          if (DAT_004216b5 == '\0') {
LAB_0040497d:
            uVar16 = FUN_004079e0((byte *)&local_25c);
            ppiVar7[3] = (int *)((ulonglong)uVar16 >> 0x20);
          }
          else {
            iVar9 = FUN_004079fa(pwVar6,&local_25c,&local_270);
            uVar16 = CONCAT44(iVar9,iVar9);
            if (iVar9 != 0) goto LAB_0040497d;
            ppiVar7[3] = (int *)0x0;
          }
          local_274 = (int *)((ulonglong)uVar16 >> 0x20);
          piVar8 = (int *)uVar16;
          bVar15 = DAT_004216b5 == '\0';
          ppiVar7[2] = piVar8;
          if (bVar15) {
            FUN_0040e36c(&local_26c,ppiVar7);
            ppiVar7 = local_26c;
          }
          else {
            ppiVar11 = local_26c;
            ppiVar14 = local_26c;
            if (local_26c != (int **)0x0) {
              do {
                ppiVar10 = ppiVar11;
                bVar15 = ppiVar10[3] <= local_274;
                ppiVar11 = ppiVar10;
                if ((bVar15 && local_274 != ppiVar10[3]) ||
                   ((bVar15 && (ppiVar10[2] <= piVar8 && piVar8 != ppiVar10[2])))) break;
                ppiVar11 = (int **)*ppiVar10;
                ppiVar14 = ppiVar10;
              } while (ppiVar11 != (int **)0x0);
              pwVar6 = local_264;
              if (ppiVar14 != ppiVar11) {
                *ppiVar14 = (int *)ppiVar7;
                *ppiVar7 = (int *)ppiVar11;
                ppiVar7 = local_26c;
              }
            }
          }
          local_26c = ppiVar7;
          free(pwVar6);
        } while ((((local_25d != '\0') &&
                  (pwVar6 = wcspbrk(pwVar13,L"*?"), pwVar6 != (wchar_t *)0x0)) &&
                 (pWVar12 = FUN_00407b86(&local_25c,local_270), pWVar12 != (WCHAR *)0x0)) &&
                (local_264 = (wchar_t *)FUN_0040f89e(pwVar13,local_25c.cFileName),
                local_264 != (wchar_t *)0x0));
        uVar3 = FUN_00404ab4(&local_278,&local_268);
        piVar8 = local_280;
        pwVar13 = local_27c;
        cVar1 = (char)uVar3;
      }
      if (pwVar13 != (wchar_t *)piVar8[1]) {
        free(pwVar13);
      }
      free(_Memory);
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)0x0);
    local_280 = (int *)0x0;
  }
  FUN_00410365(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



undefined4 __fastcall FUN_00404ab4(short **param_1,short **param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  puVar5 = (ushort *)*param_1;
  uVar2 = *puVar5;
  while ((uVar1 = (uint)uVar2, uVar2 != 0 && ((uVar2 == 0x20 || (uVar2 == 9))))) {
    puVar5 = puVar5 + 1;
    uVar2 = *puVar5;
  }
  *param_2 = (short *)puVar5;
  if (uVar2 == 0) {
    return uVar1 & 0xffffff00;
  }
  uVar3 = 0x22;
  if (uVar2 == 0x22) {
    do {
      if ((short)uVar3 == 0) goto LAB_00404b29;
      puVar5 = puVar5 + 1;
      uVar1 = (uint)*puVar5;
      uVar3 = uVar1;
    } while (*puVar5 != 0x22);
    goto LAB_00404b36;
  }
  if (uVar2 == 0x7b) {
    do {
      puVar4 = puVar5 + 1;
      if (*puVar4 == 0x22) {
        puVar4 = puVar5 + 2;
        do {
          uVar2 = *puVar4;
          if (uVar2 == 0) break;
          puVar4 = puVar4 + 1;
        } while (uVar2 != 0x22);
      }
      if (*puVar4 == 0x7d) goto LAB_00404b84;
      puVar5 = puVar4;
    } while (*puVar4 != 0);
    FUN_004053f6(0,0x423);
LAB_00404b84:
    uVar3 = 0x22;
    puVar5 = puVar4 + 1;
    uVar2 = *puVar5;
    uVar1 = (uint)uVar2;
    if (uVar2 == 0x22) {
      do {
        if ((short)uVar3 == 0) goto LAB_00404b29;
        puVar5 = puVar5 + 1;
        uVar1 = (uint)*puVar5;
        uVar3 = uVar1;
      } while (*puVar5 != 0x22);
      goto LAB_00404b36;
    }
    if (uVar2 == 0) goto LAB_00404be0;
  }
  do {
    uVar2 = (ushort)uVar1;
    if (uVar2 == 0x20) goto LAB_00404bd8;
    uVar1 = 0;
    if (uVar2 == 9) break;
    puVar5 = puVar5 + 1;
    uVar2 = *puVar5;
    uVar1 = (uint)uVar2;
  } while (uVar2 != 0);
LAB_00404bd6:
  if (uVar2 != 0) {
LAB_00404bd8:
    uVar1 = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
LAB_00404be0:
  *param_1 = (short *)puVar5;
  return CONCAT31((int3)(uVar1 >> 8),1);
LAB_00404b29:
  uVar1 = FUN_004053f6(0,0x40e);
LAB_00404b36:
  puVar5 = puVar5 + 1;
  uVar2 = *puVar5;
  goto LAB_00404bd6;
}



void __fastcall FUN_00404be9(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  while (puVar1 = param_1, puVar1 != (undefined4 *)0x0) {
    param_1 = (undefined4 *)*puVar1;
    free((void *)puVar1[1]);
    *puVar1 = DAT_00432618;
    DAT_00432618 = puVar1;
  }
  return;
}



undefined4 * __fastcall FUN_00404c13(wint_t *param_1,undefined param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined2 extraout_var;
  
  puVar2 = (undefined4 *)FUN_0040ac61(0x20);
  pvVar3 = FUN_0040e267((short *)param_1);
  puVar2[1] = pvVar3;
  *(undefined *)(puVar2 + 2) = param_2;
  *(undefined *)((int)puVar2 + 9) = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  uVar1 = FUN_0040e381(param_1);
  *puVar2 = (&DAT_00421490)[CONCAT22(extraout_var,uVar1)];
  (&DAT_00421490)[CONCAT22(extraout_var,uVar1)] = puVar2;
  return puVar2;
}



void __fastcall FUN_00404c5a(int **param_1,int *param_2,int param_3)

{
  int **ppiVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar4 = (int **)0x0;
  ppiVar5 = (int **)*param_1;
  if (ppiVar5 != (int **)0x0) {
    do {
      if ((ppiVar5[1] == param_2) &&
         (ppiVar1 = ppiVar5, *(char *)(ppiVar5 + 2) == *(char *)(param_3 + 8))) break;
      ppiVar1 = (int **)*ppiVar5;
      ppiVar4 = ppiVar5;
      ppiVar5 = ppiVar1;
    } while (ppiVar1 != (int **)0x0);
    if (ppiVar1 != (int **)0x0) goto LAB_00404cbb;
  }
  ppiVar1 = (int **)FUN_0040ac61(0x14);
  ppiVar1[1] = param_2;
  *(undefined *)(ppiVar1 + 2) = *(undefined *)(param_3 + 8);
  if (ppiVar4 == (int **)0x0) {
    if ((int **)*param_1 == (int **)0x0) {
      *param_1 = (int *)ppiVar1;
    }
    else {
      **param_1 = (int)ppiVar1;
    }
  }
  else {
    *ppiVar4 = (int *)ppiVar1;
  }
LAB_00404cbb:
  puVar2 = FUN_0040e215();
  pvVar3 = FUN_0040e267(*(short **)(param_3 + 4));
  puVar2[1] = pvVar3;
  FUN_0040e36c(ppiVar1 + 3,puVar2);
  puVar2 = FUN_0040e215();
  pvVar3 = FUN_0040e267(DAT_00421ecc);
  puVar2[1] = pvVar3;
  FUN_0040e36c(ppiVar1 + 4,puVar2);
  *(int ***)(param_3 + 0x1c) = param_1;
  return;
}



uint __fastcall FUN_00404d06(int param_1)

{
  wchar_t wVar1;
  undefined4 *puVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar8 = 0;
  for (puVar2 = *(undefined4 **)(param_1 + 0x10); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    pwVar4 = (wchar_t *)puVar2[1];
    pwVar5 = pwVar4;
    do {
      wVar1 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (wVar1 != L'\0');
    iVar8 = iVar8 + 1 + ((int)pwVar5 - (int)(pwVar4 + 1) >> 1);
    if ((*pwVar4 != L'\"') && (pwVar4 = wcschr(pwVar4,L' '), pwVar4 != (wchar_t *)0x0)) {
      iVar8 = iVar8 + 2;
    }
  }
  uVar6 = iVar8 + 1;
  pwVar4 = (wchar_t *)
           FUN_0040ac3c(-(uint)((int)((ulonglong)uVar6 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar6 * 2));
  *pwVar4 = L'\0';
  for (puVar2 = *(undefined4 **)(param_1 + 0x10); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    if ((*(wchar_t *)puVar2[1] == L'\"') ||
       (pwVar5 = wcschr((wchar_t *)puVar2[1],L' '), pwVar5 == (wchar_t *)0x0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
      wcscat_s(pwVar4,uVar6,L"\"");
    }
    wcscat_s(pwVar4,uVar6,(wchar_t *)puVar2[1]);
    pwVar5 = L"\" ";
    if (!bVar3) {
      pwVar5 = L" ";
    }
    wcscat_s(pwVar4,uVar6,pwVar5);
  }
  DAT_00421ecc = pwVar4;
  uVar6 = FUN_00405780(*(int **)(param_1 + 0xc),*(int **)(*(int *)(param_1 + 4) + 0xc),
                       *(int **)(*(int *)(param_1 + 4) + 0x10),(uint)*(byte *)(param_1 + 8),
                       (wchar_t *)0x0);
  if (uVar6 == 0) {
    for (puVar2 = *(undefined4 **)(param_1 + 0xc); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      puVar7 = FUN_0040e3b9((wchar_t *)puVar2[1]);
      puVar7[7] = 0;
      *(byte *)((int)puVar7 + 9) = *(byte *)((int)puVar7 + 9) & 0xfb | 2;
    }
  }
  free(pwVar4);
  return uVar6;
}



int __fastcall FUN_00404e5b(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; param_1 != (undefined4 *)0x0; param_1 = (undefined4 *)*param_1) {
    uVar1 = FUN_00404d06((int)param_1);
    iVar2 = iVar2 + uVar1;
  }
  return iVar2;
}



void __fastcall FUN_00404e79(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  while (_Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[3];
    *puVar1 = DAT_00432618;
    DAT_00432618 = (undefined4 *)_Memory[4];
    *DAT_00432618 = puVar1;
    puVar1 = (undefined4 *)*_Memory;
    free(_Memory);
    _Memory = puVar1;
  }
  *param_1 = 0;
  return;
}



void __fastcall FUN_00404ea8(void **param_1,int *param_2)

{
  int iVar1;
  short sVar2;
  short *psVar3;
  wchar_t *pwVar4;
  void *pvVar5;
  int iVar6;
  short *psVar7;
  
  sVar2 = *(short *)((int)*param_1 + *param_2 * 2 + -2);
  while ((sVar2 != 10 &&
         (pwVar4 = fgetws(&DAT_004216c0,0x400,DAT_00421edc), pwVar4 != (wchar_t *)0x0))) {
    psVar3 = &DAT_004216c0;
    do {
      psVar7 = psVar3;
      psVar3 = psVar7 + 1;
    } while (*psVar7 != 0);
    iVar6 = (int)(psVar7 + -0x210b60) >> 1;
    if ((*(short *)((int)&DAT_004216bc + iVar6 * 2) == 0x5c) &&
       (*(short *)((int)&DAT_004216bc + iVar6 * 2 + 2) == 10)) {
      *(undefined2 *)((int)&DAT_004216bc + iVar6 * 2 + 2) = 0;
      *(undefined2 *)((int)&DAT_004216bc + iVar6 * 2) = 0x20;
    }
    iVar6 = *param_2;
    psVar3 = &DAT_004216c0;
    do {
      psVar7 = psVar3;
      psVar3 = psVar7 + 1;
    } while (*psVar7 != 0);
    iVar1 = ((int)(psVar7 + -0x210b60) >> 1) + iVar6;
    pvVar5 = *param_1;
    *param_2 = iVar1;
    pvVar5 = FUN_0040ac7f(pvVar5,iVar1 * 2 + 2);
    if (pvVar5 == (void *)0x0) {
      FUN_004053f6(DAT_004216a4,0x419);
    }
    iVar1 = *param_2;
    *param_1 = pvVar5;
    wcscpy_s((wchar_t *)((int)pvVar5 + iVar6 * 2),(iVar1 - iVar6) + 1,&DAT_004216c0);
    sVar2 = *(short *)((int)*param_1 + *param_2 * 2 + -2);
  }
  return;
}



void __fastcall FUN_00404fb3(short *param_1,uint param_2,void **param_3)

{
  void *pvVar1;
  
  if (*param_3 == (void *)0x0) {
    pvVar1 = FUN_0040ac3c(0x20);
    *param_3 = pvVar1;
    goto LAB_0040500d;
  }
  if ((param_2 & 7) != 0) goto LAB_0040500d;
  pvVar1 = (void *)0x0;
  if (param_2 + 8 < 0x3fffffff) {
    pvVar1 = realloc(*param_3,(param_2 + 8) * 4);
    if (pvVar1 == (void *)0x0) goto LAB_00404ff9;
  }
  else {
LAB_00404ff9:
    FUN_004053f6(DAT_004216b0,0x41b);
  }
  *param_3 = pvVar1;
LAB_0040500d:
  pvVar1 = FUN_0040e267(param_1);
  *(void **)((int)*param_3 + param_2 * 4) = pvVar1;
  return;
}



void __fastcall FUN_00405021(wchar_t *param_1,uint *param_2,void **param_3)

{
  wchar_t *pwVar1;
  wchar_t *local_8;
  
  local_8 = param_1;
  pwVar1 = wcschr(param_1,L'\\');
  if ((pwVar1 != (wchar_t *)0x0) &&
     (((pwVar1[-1] == L' ' || (pwVar1[-1] == L'\t')) && (pwVar1[1] == L'\n')))) {
    *pwVar1 = L'\0';
  }
  local_8 = (wchar_t *)0x0;
  while( true ) {
    pwVar1 = wcstok_s(param_1,L" \t\n",&local_8);
    if (pwVar1 == (wchar_t *)0x0) {
      return;
    }
    if (*pwVar1 == L'@') break;
    FUN_00404fb3(pwVar1,*param_2,param_3);
    *param_2 = *param_2 + 1;
    param_1 = (wchar_t *)0x0;
  }
  FUN_004053f6(0,0xfa1);
  return;
}



void __fastcall FUN_004050ad(wchar_t *param_1,uint *param_2,void **param_3)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int iVar5;
  wchar_t *pwVar6;
  int local_14;
  wchar_t *local_10;
  uint *local_c;
  char local_5;
  
  local_5 = '\0';
  local_c = param_2;
  pwVar3 = wcschr(param_1,L'\"');
  if (pwVar3 == (wchar_t *)0x0) {
    FUN_00405021(param_1,param_2,param_3);
  }
  else {
    if ((pwVar3 == param_1) || (pwVar6 = pwVar3 + -1, param_2 = local_c, *pwVar6 != L'=')) {
      *pwVar3 = L'\0';
      FUN_00405021(param_1,param_2,param_3);
      pwVar6 = pwVar3 + 1;
    }
    else {
      *pwVar3 = L' ';
      for (; param_1 < pwVar6; pwVar6 = pwVar6 + -1) {
        wVar2 = *pwVar6;
        if (wVar2 == L' ') goto LAB_00405120;
        if ((wVar2 == L'\t') || (wVar2 == L'\n')) break;
      }
      if (pwVar6 != param_1) {
LAB_00405120:
        *pwVar6 = L'\0';
        pwVar6 = pwVar6 + 1;
        FUN_00405021(param_1,local_c,param_3);
      }
    }
    pwVar3 = pwVar6;
    do {
      wVar2 = *pwVar3;
      pwVar3 = pwVar3 + 1;
    } while (wVar2 != L'\0');
    iVar5 = (int)pwVar3 - (int)(pwVar6 + 1) >> 1;
    wVar2 = *pwVar6;
    pwVar3 = pwVar6;
    local_10 = pwVar6;
    while (pwVar4 = pwVar6, wVar2 != L'\0') {
      if (wVar2 == L'\"') {
        if (pwVar6[1] != L'\"') {
          *pwVar6 = L'\0';
          pwVar4 = pwVar6 + 1;
          FUN_00404fb3(pwVar3,*local_c,param_3);
          *local_c = *local_c + 1;
          FUN_004050ad(pwVar6 + 2,local_c,param_3);
          break;
        }
        *pwVar6 = L'\"';
        do {
          pwVar1 = pwVar4 + 2;
          pwVar4[1] = *pwVar1;
          pwVar4 = pwVar4 + 1;
        } while (*pwVar1 != L'\0');
      }
      else if ((wVar2 == L'\\') &&
              (((pwVar6[-1] == L' ' || (pwVar6[-1] == L'\t')) && (pwVar6[1] == L'\n')))) {
        iVar5 = iVar5 + -2;
        *pwVar6 = L'\0';
        local_14 = iVar5;
        if (local_5 == '\0') {
          local_5 = '\x01';
          local_10 = (wchar_t *)FUN_0040e267(pwVar3);
        }
        FUN_00404ea8(&local_10,&local_14);
        pwVar6 = local_10 + iVar5;
        iVar5 = local_14;
        pwVar3 = local_10;
      }
      pwVar6 = pwVar6 + 1;
      wVar2 = *pwVar6;
    }
    if (pwVar4 == pwVar3 + iVar5) {
      FUN_004053f6(0,0x3ee);
    }
    if (local_5 != '\0') {
      free(pwVar3);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_0040525e(wchar_t *param_1)

{
  code *pcVar1;
  void *pvVar2;
  FILE *_File;
  wchar_t *pwVar3;
  int iVar4;
  wchar_t *pwVar5;
  uint uVar6;
  void *local_14;
  uint local_10;
  wchar_t *local_c;
  int local_8;
  
  local_10 = 0;
  _File = _wfsopen(param_1,L"rt,ccs=unicode",0x20);
  DAT_00421edc = (int)_File;
  if (_File == (FILE *)0x0) {
    _File = (FILE *)FUN_004053f6(0,0x41c);
  }
  local_14 = (void *)0x0;
  pwVar3 = fgetws(&DAT_004216c0,0x400,_File);
  pvVar2 = (void *)0x0;
  uVar6 = 0;
  do {
    if (pwVar3 == (wchar_t *)0x0) {
      iVar4 = fclose((FILE *)DAT_00421edc);
      if (iVar4 == -1) {
        FUN_004053f6(0,0x424);
      }
      FUN_0040bdf3(uVar6,(int)pvVar2);
      while (uVar6 != 0) {
        uVar6 = uVar6 - 1;
        if (*(int *)((int)pvVar2 + uVar6 * 4) != 0) {
          free(*(void **)((int)pvVar2 + uVar6 * 4));
        }
      }
      return;
    }
    pwVar3 = &DAT_004216c0;
    do {
      pwVar5 = pwVar3;
      pwVar3 = pwVar5 + 1;
    } while (*pwVar5 != L'\0');
    local_8 = (int)(pwVar5 + -0x210b60) >> 1;
    if (((local_8 == 0x3ff) && (_DAT_00421ebc != 10)) ||
       ((pwVar3 = &DAT_004216c0, *(short *)((int)&DAT_004216bc + local_8 * 2 + 2) == 10 &&
        (*(short *)((int)&DAT_004216bc + local_8 * 2) == 0x5c)))) {
      if ((*(short *)((int)&DAT_004216bc + local_8 * 2 + 2) == 10) &&
         (*(short *)((int)&DAT_004216bc + local_8 * 2) == 0x5c)) {
        iVar4 = local_8 + -1;
        if (0x7ff < (uint)(iVar4 * 2)) {
          FUN_00410495();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (&DAT_004216c0)[iVar4] = 0;
        *(undefined2 *)((int)&DAT_004216bc + local_8 * 2) = 0x20;
        local_8 = iVar4;
      }
      local_c = (wchar_t *)FUN_0040e267(&DAT_004216c0);
      FUN_00404ea8(&local_c,&local_8);
      pwVar3 = local_c;
    }
    FUN_004050ad(pwVar3,&local_10,&local_14);
    if (pwVar3 != &DAT_004216c0) {
      free(pwVar3);
    }
    pwVar3 = fgetws(&DAT_004216c0,0x400,(FILE *)DAT_00421edc);
    pvVar2 = local_14;
    uVar6 = local_10;
  } while( true );
}



void __cdecl FUN_004053f6(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int _Code;
  undefined unaff_DI;
  uint uVar3;
  
  _Code = 2;
  if (((DAT_0041148c & 0x20) != 0) && (param_2 - 4000 < 1000)) {
    return;
  }
  FUN_0040556c();
  if (param_1 == 0) {
    FUN_0040c6e7(L"NMAKE : ",unaff_DI);
  }
  else {
    FUN_0040c6e7(L"%s(%u) : ",(char)DAT_00421ee4);
  }
  uVar1 = param_2 / 1000;
  if (uVar1 == 1) {
    FUN_004054d0(0x14);
    if (param_2 == 0x41b) {
      _Code = 4;
    }
  }
  else {
    if (uVar1 == 2) {
      uVar3 = 0x15;
    }
    else {
      if (uVar1 != 4) goto LAB_00405485;
      uVar3 = 0x16;
    }
    FUN_004054d0(uVar3);
  }
LAB_00405485:
  FUN_0040c6e7(L" U%04d: ",(char)param_2);
  uVar2 = FUN_0040c50d(param_2);
  FUN_0040c75f(uVar2,&stack0x0000000c);
  FUN_0040c6f6();
  FUN_0040c6c9();
  if (uVar1 != 1) {
    return;
  }
  FUN_0040c6e7(L"Stop.\n",(undefined)param_1);
  FUN_0040c479();
                    // WARNING: Subroutine does not return
  exit(_Code);
}



void __cdecl FUN_004054d0(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0xd) && ((DAT_0041148c & 0x20) != 0)) {
    return;
  }
  FUN_0040556c();
  uVar1 = param_1 - 0x14;
  if (param_1 == 0x18) {
    if (uVar1 < 6) {
      FUN_0040c6f6();
      goto LAB_0040550e;
    }
    FUN_0040c7d6();
LAB_00405540:
    uVar2 = FUN_0040c50d(param_1);
    FUN_0040c802(uVar2,&stack0x00000008);
  }
  else {
    if (5 < uVar1) goto LAB_00405540;
LAB_0040550e:
    uVar2 = FUN_0040c50d(param_1);
    FUN_0040c75f(uVar2,&stack0x00000008);
  }
  if (((param_1 < 10) || (0x17 < param_1)) && (param_1 != 0x7c)) {
    if (uVar1 < 6) {
      FUN_0040c6f6();
LAB_00405556:
      FUN_0040c6c9();
      return;
    }
    FUN_0040c7d6();
  }
  else if (uVar1 < 6) goto LAB_00405556;
  FUN_0040c7a9();
  return;
}



void FUN_0040556c(void)

{
  if (DAT_00421ee0 == '\0') {
    DAT_00421ee0 = 1;
    FUN_004054d0(0x18);
    FUN_004054d0(0x19);
    FUN_0040c6c9();
    return;
  }
  return;
}



void FUN_00405598(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 100;
  uVar1 = 0x67;
  do {
    FUN_004054d0(uVar2);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x67);
  do {
    if (uVar1 == 0x71) {
      uVar1 = 0x72;
    }
    else if (uVar1 == 0x79) {
      uVar1 = 0x7a;
    }
    FUN_004054d0(uVar1);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x7d);
  return;
}



void __fastcall FUN_004055d7(int *param_1,wchar_t **param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  bool bVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  bVar2 = true;
  wVar1 = *param_3;
  pwVar5 = param_3;
  while (wVar1 != L'\0') {
    pwVar5 = pwVar5 + 1;
    wVar1 = *pwVar5;
  }
  *param_1 = 0;
  if (param_3 < pwVar5) {
    do {
      sVar3 = wcsspn(param_3,L" \t");
      pwVar4 = param_3 + sVar3;
      if (pwVar5 <= pwVar4) break;
      if (param_2 != (wchar_t **)0x0) {
        *param_2 = pwVar4;
        param_2 = param_2 + 1;
      }
      if (*pwVar4 == L'\"') {
        param_3 = pwVar4 + 1;
        if (param_3 < pwVar5) {
          do {
            if (*param_3 == L'\\') {
              param_3 = param_3 + 1;
            }
            else if (*param_3 == L'\"') break;
            param_3 = param_3 + 1;
          } while (param_3 < pwVar5);
          if (param_3 < pwVar5) {
            param_3 = wcspbrk(param_3 + 1,L" \t");
            goto LAB_00405710;
          }
        }
      }
      else {
        param_3 = wcspbrk(pwVar4,L" \t\"/");
        if (param_3 != (wchar_t *)0x0) {
          do {
            if (pwVar5 <= param_3) goto LAB_004056b7;
            if (*param_3 != L'/') break;
            if (bVar2) goto LAB_004056b7;
            param_3 = wcspbrk(param_3 + 1,L" \t\"/");
          } while (param_3 != (wchar_t *)0x0);
          if (param_3 != (wchar_t *)0x0) {
LAB_004056b7:
            if (*param_3 == L'\"') {
              do {
                param_3 = param_3 + 1;
                if (pwVar5 <= param_3) break;
              } while (*param_3 != L'\"');
              param_3 = wcspbrk(param_3,L" \t");
            }
          }
        }
        if (bVar2) {
          bVar2 = false;
          if (param_3 == (wchar_t *)0x0) goto LAB_00405714;
          if (*param_3 == L'/') {
            if (param_2 == (wchar_t **)0x0) goto LAB_00405722;
            *param_3 = L'\0';
            pwVar4 = (wchar_t *)FUN_0040e267(param_2[-1]);
            param_2[-1] = pwVar4;
            *param_3 = L'/';
            param_3 = param_3 + -1;
            goto LAB_00405710;
          }
        }
        else {
LAB_00405710:
          if (param_3 == (wchar_t *)0x0) {
LAB_00405714:
            param_3 = pwVar5;
          }
        }
        if (param_2 != (wchar_t **)0x0) {
          *param_3 = L'\0';
          param_3 = param_3 + 1;
        }
      }
LAB_00405722:
      *param_1 = *param_1 + 1;
    } while (param_3 < pwVar5);
  }
  if (param_2 != (wchar_t **)0x0) {
    *param_2 = (wchar_t *)0x0;
  }
  return;
}



void __fastcall FUN_0040573e(short *param_1,int *param_2,int *param_3,uint param_4,wchar_t *param_5)

{
  int *piVar1;
  void *pvVar2;
  
  piVar1 = FUN_0040e215();
  pvVar2 = FUN_0040e267(param_1);
  piVar1[1] = (int)pvVar2;
  FUN_00405780(piVar1,param_2,param_3,param_4,param_5);
  *piVar1 = (int)DAT_00432618;
  DAT_00432618 = piVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint __fastcall FUN_00405780(int *param_1,int *param_2,int *param_3,uint param_4,wchar_t *param_5)

{
  uint uVar1;
  uint uVar2;
  wchar_t *pwVar3;
  byte bVar4;
  char cVar5;
  wchar_t wVar6;
  wchar_t *pwVar7;
  int iVar8;
  int *piVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  int *local_38;
  wchar_t *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  wchar_t *local_c;
  byte local_5;
  
  DAT_00421ec0 = DAT_00421ec0 + 1;
  uVar12 = 0;
  local_18 = 0;
  local_10 = 0;
  if ((DAT_0041148c & 8) == 0) {
    if ((DAT_0041148c & 0x10) == 0) {
      if (param_2 != (int *)0x0) {
        bVar10 = (byte)param_4 >> 6;
        local_20 = 0x21;
        local_24 = 0x2d;
        local_28 = 0x40;
        local_2c = 0x20;
        local_30 = 9;
        local_38 = param_2;
        do {
          bVar4 = FUN_004093b0((wchar_t *)local_38[1],&local_34,&param_3,bVar10 & 1);
          uVar11 = (uint)bVar4;
          _DAT_00431ef0 = 0;
          local_14 = local_14 & 0xffffff00;
          wVar6 = *local_34;
          local_c = local_34;
LAB_00405841:
          if (wVar6 == (wchar_t)local_20) {
LAB_004059c5:
            uVar11 = uVar11 | 0x400;
LAB_004059c8:
            local_14 = CONCAT31(local_14._1_3_,(char)(uVar11 >> 8));
LAB_004059cb:
            local_c = local_c + 1;
            wVar6 = *local_c;
            goto LAB_00405841;
          }
          if (wVar6 == (wchar_t)local_24) {
LAB_0040587a:
            if (wVar6 == (wchar_t)local_24) {
              local_c = local_c + 1;
              uVar11 = uVar11 | 0x200;
              local_14 = CONCAT31(local_14._1_3_,(char)(uVar11 >> 8));
              iVar8 = iswdigit(*local_c);
              if (iVar8 == 0) {
                _DAT_00431ef0 = 0xffffffff;
              }
              else {
                _DAT_00431ef0 = wcstoul(local_c,&local_c,10);
                piVar9 = _errno();
                iVar8 = DAT_004216a4;
                if (*piVar9 == 0x22) {
                  *local_c = L'\0';
                  FUN_004053f6(iVar8,0x436);
                }
                iVar8 = iswspace(*local_c);
                while (iVar8 != 0) {
                  local_c = local_c + 1;
                  iVar8 = iswspace(*local_c);
                }
              }
              local_c = local_c + -1;
            }
            else {
LAB_00405884:
              if (wVar6 != (wchar_t)local_28) goto LAB_0040588e;
              if ((DAT_0041148e & 4) == 0) {
                uVar11 = uVar11 | 0x100;
                goto LAB_004059c8;
              }
            }
            goto LAB_004059cb;
          }
          if (wVar6 == (wchar_t)local_28) goto LAB_00405884;
          if (wVar6 == L'^') {
LAB_0040588e:
            if (wVar6 == L'^') {
              local_c = local_c + 1;
              if ((*local_c == (wchar_t)local_2c) || (*local_c == (wchar_t)local_30)) {
                bVar4 = 1;
              }
              else {
                bVar4 = 0;
              }
              if ((-(ushort)bVar4 & 0xffc2) == 0) goto LAB_004058ca;
            }
            goto LAB_004059cb;
          }
          if (wVar6 == (wchar_t)local_2c) goto LAB_004059cb;
          if (wVar6 == (wchar_t)local_30) {
            if (wVar6 == (wchar_t)local_20) goto LAB_004059c5;
            goto LAB_0040587a;
          }
LAB_004058ca:
          if (((uVar11 & 0x400) == 0) ||
             (uVar12 = FUN_00407663(local_c,param_3,(byte)param_4,(byte)local_14,param_5,&local_10),
             pwVar3 = local_c, (char)uVar12 == '\0')) {
            pwVar3 = local_c;
            if (((char)uVar11 == '\0') && (pwVar7 = wcschr(local_c,L'$'), pwVar7 != (wchar_t *)0x0))
            {
              local_c = (wchar_t *)FUN_0040ec83(local_c,-1,&param_3);
            }
            pwVar7 = local_c;
            do {
              wVar6 = *pwVar7;
              pwVar7 = pwVar7 + 1;
            } while (wVar6 != L'\0');
            uVar12 = ((int)pwVar7 - (int)(local_c + 1) >> 1) + 1;
            if (uVar12 < 0x8001) {
              uVar12 = 0x8000;
            }
            pwVar7 = (wchar_t *)
                     FUN_0040ac3c(-(uint)((int)((ulonglong)uVar12 * 2 >> 0x20) != 0) |
                                  (uint)((ulonglong)uVar12 * 2));
            wcscpy_s(pwVar7,uVar12,local_c);
            cVar5 = FUN_0040fa87(pwVar7,uVar12,local_c,param_5);
            if (cVar5 != '\0') {
              FUN_004053f6(0,0x447);
            }
            uVar1 = param_4 & 4;
            uVar2 = param_4 & 4;
            local_5 = (byte)param_4 & 2;
LAB_00405af4:
            if (uVar1 == 0) {
              cVar5 = '\x01';
              if ((uVar2 != 0) || (((param_4 & 8) == 0 && ((uVar11 & 0x100) == 0))))
              goto LAB_00405aff;
              bVar4 = 0;
              cVar5 = '\x01';
            }
            else {
              cVar5 = '\0';
LAB_00405aff:
              bVar4 = 1;
            }
            local_10 = FUN_00406e33(pwVar7,bVar4,cVar5,(byte)(uVar11 >> 9) & 1,&local_1c);
            uVar12 = local_10;
            if (local_5 != 0) goto LAB_00405ba8;
            if (local_10 == 0x103) {
              if (DAT_004323f9 == '\0') {
                FUN_004053f6(0,0xfac);
                local_10 = 0;
                goto LAB_00405b7f;
              }
              if (9 < local_18) goto LAB_00405b83;
              FUN_004053f6(0,0xfad);
              local_18 = local_18 + 1;
              goto LAB_00405af4;
            }
LAB_00405b7f:
            uVar12 = local_10;
            if (local_10 == 0) goto LAB_00405ba8;
LAB_00405b83:
            uVar12 = local_10;
            if ((_DAT_00431ef0 < local_10) && (DAT_004216b7 == '\0')) {
              FUN_004053f6(0,0x435);
            }
LAB_00405ba8:
            if (pwVar3 != local_c) {
              free(local_c);
            }
            free(local_34);
            free(pwVar7);
            bVar4 = local_5;
          }
          else {
            pwVar7 = wcschr(local_c,L'$');
            if (pwVar7 != (wchar_t *)0x0) {
              local_c = (wchar_t *)FUN_0040ec83(local_c,-1,&param_3);
            }
            if (pwVar3 != local_c) {
              free(local_c);
            }
            uVar12 = local_10;
            bVar4 = (byte)param_4 & 2;
          }
          if ((((bVar4 == 0) && (DAT_004216b7 != '\0')) && (uVar12 != 0)) &&
             (_DAT_00431ef0 < uVar12)) goto LAB_00405a22;
          local_38 = (int *)*local_38;
        } while (local_38 != (int *)0x0);
      }
      if ((param_4 & 2) == 0) {
LAB_00405a22:
        if ((DAT_004216b7 != '\0') && (_DAT_00431ef0 < uVar12)) {
          return uVar12;
        }
      }
    }
    else if (param_1 != (int *)0x0) {
      bVar10 = (byte)param_4 >> 2;
      do {
        FUN_00407951((wchar_t *)param_1[1],bVar10 & 1);
        param_1 = (int *)*param_1;
      } while (param_1 != (int *)0x0);
    }
  }
  return 0;
}



wchar_t ** __fastcall FUN_00405bd5(wchar_t *param_1,int param_2,wchar_t **param_3)

{
  wchar_t wVar1;
  bool bVar2;
  wchar_t **_ArgList;
  int iVar3;
  wchar_t *pwVar4;
  int *piVar5;
  HANDLE hHandle;
  wchar_t *pwVar6;
  uint uVar7;
  
  _ArgList = param_3;
  uVar7 = 0;
  if (param_1 == (wchar_t *)0x0) {
    pwVar4 = *param_3;
    if (*pwVar4 != L'\"') {
LAB_00405c63:
      bVar2 = false;
      goto LAB_00405c65;
    }
    param_3 = (wchar_t **)(pwVar4 + 1);
    pwVar6 = pwVar4;
    do {
      wVar1 = *pwVar6;
      pwVar6 = pwVar6 + 1;
    } while (wVar1 != L'\0');
    if (pwVar4[((int)pwVar6 - (int)param_3 >> 1) + -1] != L'\"') goto LAB_00405c63;
    iVar3 = param_2 + -1;
    if (iVar3 < 1) goto LAB_00405c63;
    do {
      pwVar4 = wcspbrk(_ArgList[iVar3],L"\"");
      if (pwVar4 != (wchar_t *)0x0) goto LAB_00405bf9;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
    bVar2 = false;
  }
  else {
    param_3[param_2] = L">";
    param_3[param_2 + 1] = param_1;
    param_2 = param_2 + 2;
    param_3[param_2] = (wchar_t *)0x0;
LAB_00405bf9:
    _ArgList[param_2] = L"\"";
    bVar2 = true;
    param_2 = param_2 + 1;
    _ArgList[param_2] = (wchar_t *)0x0;
LAB_00405c65:
    if (param_2 < 0) goto LAB_00405c75;
  }
  do {
    _ArgList[param_2 + 2] = _ArgList[param_2];
    param_2 = param_2 + -1;
  } while (-1 < param_2);
LAB_00405c75:
  *_ArgList = DAT_00421eec;
  pwVar4 = L"/c \"";
  if (!bVar2) {
    pwVar4 = L"/c";
  }
  _ArgList[1] = pwVar4;
  piVar5 = _errno();
  *piVar5 = 0;
  hHandle = (HANDLE)_wspawnvp(1,*_ArgList,_ArgList);
  if (hHandle == (HANDLE)0xffffffff) {
    param_3 = (wchar_t **)0xffffffff;
  }
  else {
    WaitForSingleObject(hHandle,0xffffffff);
    param_3 = (wchar_t **)0x0;
    do {
      GetExitCodeProcess(hHandle,(LPDWORD)&param_3);
      if (param_3 != (wchar_t **)0x103) break;
      Sleep(1000);
      uVar7 = uVar7 + 1;
    } while (uVar7 < 10);
    CloseHandle(hHandle);
  }
  return param_3;
}



// WARNING: Function: __alloca_probe replaced with injection: alloca_probe

void __fastcall FUN_00405cf0(int param_1,wchar_t **param_2)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  errno_t eVar5;
  UINT UVar6;
  wchar_t **ppwVar7;
  FILE *_File;
  wchar_t *pwVar8;
  int iVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *pwStack_106bc;
  size_t sStack_106b4;
  wchar_t *pwStack_106b0;
  wchar_t awStack_106ac [32768];
  wchar_t local_6ac [260];
  wchar_t local_4a4;
  undefined local_4a2 [512];
  wchar_t local_2a2 [3];
  wchar_t local_29c;
  undefined local_29a [126];
  wchar_t local_21c [266];
  uint local_8;
  
  local_8 = DAT_00411014 ^ (uint)&stack0xfffffffc;
  bVar3 = false;
  sStack_106b4 = 0;
  pwStack_106b0 = (wchar_t *)0x0;
  wcscpy_s(awStack_106ac,0x8000,L"set ");
  pwVar8 = awStack_106ac + 4;
  for (pwVar10 = &DAT_00411498; (wVar1 = *pwVar10, wVar1 == L' ' || (wVar1 == L'\t'));
      pwVar10 = pwVar10 + 1) {
  }
  if (((wVar1 == L'/') && (pwVar10[1] == L'A')) && ((pwVar10[2] == L' ' || (pwVar10[2] == L'\t'))))
  {
    bVar3 = true;
    pwVar10 = pwVar10 + 3;
  }
  pwVar4 = wcschr(pwVar10,L'=');
  if (pwVar4 != (wchar_t *)0x0) {
    pwStack_106bc = awStack_106ac + 4;
    wVar1 = *pwVar10;
    while (wVar1 != L'=') {
      *pwVar8 = wVar1;
      pwVar8 = pwVar8 + 1;
      if (local_6ac <= pwVar8) goto LAB_00406299;
      pwVar10 = pwVar10 + 1;
      wVar1 = *pwVar10;
    }
    if (!bVar3) {
      wVar1 = *pwVar10;
      do {
        if (wVar1 == L'\0') goto LAB_00406250;
        pwVar4 = pwVar10 + 1;
        if (wVar1 == L'^') {
          pwVar11 = pwVar8;
          if (*pwVar4 != L'\0') {
            *pwVar8 = *pwVar4;
            pwVar4 = pwVar10 + 2;
LAB_0040622f:
            pwVar11 = pwVar8 + 1;
            if (pwVar11 < local_6ac) goto LAB_00406240;
            goto LAB_00406299;
          }
        }
        else {
          if (wVar1 != L'%') {
            *pwVar8 = wVar1;
            goto LAB_0040622f;
          }
          pwVar10 = &local_4a4;
          wVar1 = *pwVar4;
          while ((wVar1 != L'%' && (wVar1 != L'\0'))) {
            *pwVar10 = wVar1;
            pwVar10 = pwVar10 + 1;
            if (pwVar10 == local_2a2) goto LAB_00406299;
            pwVar4 = pwVar4 + 1;
            wVar1 = *pwVar4;
          }
          pwVar4 = pwVar4 + 1;
          *pwVar10 = L'\0';
          if (wVar1 == L'\0') {
            pwVar10 = &local_4a4;
            do {
              wVar1 = *pwVar10;
              pwVar10 = pwVar10 + 1;
            } while (wVar1 != L'\0');
            if (local_6ac <= pwVar8 + ((int)pwVar10 - (int)local_4a2 >> 1) + 1) goto LAB_00406299;
            *pwVar8 = L'%';
            wcscpy_s(pwVar8 + 1,(int)local_6ac - (int)(pwVar8 + 1) >> 1,&local_4a4);
            pwVar8 = pwVar8 + ((int)pwVar10 - (int)local_4a2 >> 1) + 1;
LAB_00406250:
            *pwVar8 = L'\0';
            goto LAB_00406255;
          }
          _wdupenv_s(&pwStack_106b0,(size_t *)0x0,&local_4a4);
          if (pwStack_106b0 != (wchar_t *)0x0) {
            pwVar10 = pwStack_106b0;
            do {
              wVar1 = *pwVar10;
              pwVar10 = pwVar10 + 1;
            } while (wVar1 != (wchar_t)sStack_106b4);
            pwVar11 = pwVar8 + ((int)pwVar10 - (int)(pwStack_106b0 + 1) >> 1);
            if (pwVar11 < local_6ac) {
              wcscpy_s(pwVar8,(int)local_6ac - (int)pwVar8 >> 1,pwStack_106b0);
              free(pwStack_106b0);
              pwStack_106b0 = (wchar_t *)0x0;
              goto LAB_00406240;
            }
            goto LAB_00406299;
          }
          pwVar10 = &local_4a4;
          do {
            wVar1 = *pwVar10;
            pwVar10 = pwVar10 + 1;
          } while (wVar1 != L'\0');
          pwVar11 = pwVar8 + ((int)pwVar10 - (int)local_4a2 >> 1) + 2;
          if (local_6ac <= pwVar11) goto LAB_00406299;
          *pwVar8 = L'%';
          wcscpy_s(pwVar8 + 1,(int)local_6ac - (int)(pwVar8 + 1) >> 1,&local_4a4);
          pwVar11[-1] = L'%';
        }
LAB_00406240:
        wVar1 = *pwVar4;
        pwVar10 = pwVar4;
        pwVar8 = pwVar11;
      } while( true );
    }
    wVar1 = pwVar8[-1];
    if (((((wVar1 == L'*') || (wVar1 == L'/')) || (wVar1 == L'%')) ||
        ((wVar1 == L'+' || (wVar1 == L'-')))) ||
       ((wVar1 == L'&' || ((wVar1 == L'^' || (wVar1 == L'|')))))) {
      pwVar8 = pwVar8 + -1;
    }
    else {
      pwVar10 = pwVar8 + -2;
      if (((wVar1 == L'>') && (*pwVar10 == L'>')) || ((wVar1 == L'<' && (*pwVar10 == L'<')))) {
        pwVar8 = pwVar10;
      }
    }
    if (awStack_106ac[4] == 0x22) {
      pwStack_106bc = awStack_106ac + 5;
    }
    *pwVar8 = L'=';
    pwVar8 = pwVar8 + 1;
    if (pwVar8 < local_6ac) {
      sStack_106b4 = 0;
      eVar5 = _wgetenv_s(&sStack_106b4,local_21c,0x106,L"TMP");
      if ((eVar5 != 0) || (sStack_106b4 == 0)) {
        wcscpy_s(local_21c,0x106,L".");
      }
      UVar6 = GetTempFileNameW(local_21c,L"nm",0,local_6ac);
      if (UVar6 == 0) {
        FUN_004053f6(DAT_004216a4,0x43c);
      }
      wcscpy_s(local_21c,0x106,local_6ac);
      pwVar10 = wcschr(local_21c,L' ');
      if ((pwVar10 != (wchar_t *)0x0) &&
         (pwVar10 = wcschr(local_21c,L'\"'), pwVar10 == (wchar_t *)0x0)) {
        pwVar10 = local_21c;
        do {
          wVar1 = *pwVar10;
          pwVar10 = pwVar10 + 1;
        } while (wVar1 != L'\0');
        iVar9 = (int)pwVar10 - (int)(local_21c + 1) >> 1;
        memmove(local_21c + 1,local_21c,iVar9 * 2);
        local_21c[0] = L'\"';
        local_21c[iVar9 + 1] = L'\"';
        if (0x20b < iVar9 * 2 + 4U) {
          FUN_00410495();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_21c[iVar9 + 2] = L'\0';
      }
      ppwVar7 = FUN_00405bd5(local_21c,param_1,param_2);
      if (ppwVar7 == (wchar_t **)0x0) {
        _File = _wfsopen(local_21c,L"rt",0x20);
        if (_File == (FILE *)0x0) {
          FUN_004053f6(0,0x41c);
        }
        pwVar10 = fgetws(&local_29c,0x40,_File);
        if (pwVar10 == (wchar_t *)0x0) {
          FUN_004053f6(0,0x41d);
        }
        iVar9 = fclose(_File);
        if (iVar9 == -1) {
          FUN_004053f6(0,0x424);
        }
        iVar9 = _wremove(local_21c);
        if (iVar9 == -1) {
          FUN_004053f6(0,0x421);
        }
        pwVar10 = &local_29c;
        do {
          wVar1 = *pwVar10;
          pwVar10 = pwVar10 + 1;
        } while (wVar1 != L'\0');
        if (pwVar8 + ((int)pwVar10 - (int)local_29a >> 1) + 1 <= local_6ac) {
          wcscpy_s(pwVar8,(int)local_6ac - (int)pwVar8 >> 1,&local_29c);
LAB_00406255:
          wcscpy_s((wchar_t *)&DAT_00411490,0x8000,awStack_106ac);
          *pwStack_106bc = L'\0';
          pwVar8 = awStack_106ac;
          do {
            wVar1 = *pwVar8;
            pwVar8 = pwVar8 + 1;
          } while (wVar1 != L'\0');
        }
      }
    }
  }
LAB_00406299:
  FUN_00410365(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



wchar_t * __fastcall FUN_00406308(wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *local_8;
  
  pwVar2 = (wchar_t *)FUN_0040e267((short *)&DAT_00401690);
  wVar1 = *param_1;
  while (wVar1 != L'\0') {
    pwVar3 = wcschr(param_1,L'%');
    if ((pwVar3 == (wchar_t *)0x0) || (pwVar4 = wcschr(pwVar3 + 1,L'%'), pwVar4 == (wchar_t *)0x0))
    {
      pwVar2 = FUN_0040e311(pwVar2,param_1);
      pwVar3 = param_1;
      do {
        wVar1 = *pwVar3;
        pwVar3 = pwVar3 + 1;
      } while (wVar1 != L'\0');
      param_1 = param_1 + ((int)pwVar3 - (int)(param_1 + 1) >> 1);
    }
    else {
      *pwVar3 = L'\0';
      local_8 = (wchar_t *)0x0;
      *pwVar4 = L'\0';
      pwVar2 = FUN_0040e311(pwVar2,param_1);
      _wdupenv_s(&local_8,(size_t *)0x0,pwVar3 + 1);
      if (local_8 == (wchar_t *)0x0) {
        *pwVar3 = L'%';
        pwVar2 = FUN_0040e311(pwVar2,pwVar3);
        pwVar2 = FUN_0040e311(pwVar2,L"%");
      }
      else {
        pwVar2 = FUN_0040e311(pwVar2,local_8);
        free(local_8);
        local_8 = (wchar_t *)0x0;
      }
      *pwVar3 = L'%';
      *pwVar4 = L'%';
      param_1 = pwVar4 + 1;
    }
    wVar1 = *param_1;
  }
  return pwVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint __fastcall FUN_00406406(int param_1,wchar_t **param_2,int *param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wint_t wVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  wchar_t *pwVar7;
  int *piVar8;
  
  pwVar7 = *param_2;
  pwVar2 = param_2[1];
  iVar4 = iswalpha(*pwVar7);
  if (((iVar4 == 0) || (pwVar7[1] != L':')) || (pwVar7[2] != L'\0')) {
    iVar4 = _wcsicmp(pwVar7,L"set");
    if (iVar4 == 0) {
      psVar6 = (short *)0x0;
      if ((((param_1 != 1) && (_DAT_00411490 != 0)) &&
          (psVar6 = (short *)FUN_00405cf0(param_1,param_2), psVar6 != (short *)0x0)) &&
         (*psVar6 != 0)) {
        pwVar7 = (wchar_t *)FUN_0040e267(psVar6);
        piVar8 = (int *)_wputenv(pwVar7);
        *param_3 = (int)piVar8;
        if (piVar8 == (int *)0xffffffff) {
          piVar8 = (int *)FUN_004053f6(DAT_004216b0,0x41f);
        }
        goto LAB_004065a1;
      }
    }
    else {
      iVar4 = _wcsnicmp(pwVar7,L"cd",2);
      if (iVar4 == 0) {
        psVar6 = (short *)0x4;
      }
      else {
        psVar6 = (short *)_wcsnicmp(pwVar7,L"chdir",5);
        if (psVar6 != (short *)0x0) goto LAB_004065b4;
        psVar6 = (short *)0xa;
      }
      pwVar7 = (wchar_t *)((int)pwVar7 + (int)psVar6);
      if (param_1 < 3) {
        FUN_004078c7(param_1,param_2);
        wVar1 = *pwVar7;
        psVar6 = (short *)(uint)(ushort)wVar1;
        if (wVar1 == L'\0') {
          if ((pwVar2 != (wchar_t *)0x0) &&
             (((iVar4 = iswalpha(*pwVar2), iVar4 == 0 || (psVar6 = (short *)0x0, pwVar2[1] != L':'))
              || (pwVar2[2] != L'\0')))) {
            pwVar7 = FUN_00406308(pwVar2);
            piVar8 = (int *)_wchdir(pwVar7);
            *param_3 = (int)piVar8;
            free(pwVar7);
LAB_004065a1:
            if (*param_3 != 0) {
              *param_3 = 1;
            }
            goto LAB_0040645a;
          }
        }
        else if (((psVar6 == (short *)0x2e) || (psVar6 == (short *)0x5c)) ||
                (psVar6 == (short *)0x2f)) {
          pwVar7 = FUN_00406308(pwVar7);
          piVar8 = (int *)_wchdir(pwVar7);
          *param_3 = (int)piVar8;
          free(pwVar7);
          goto LAB_004065a1;
        }
      }
    }
LAB_004065b4:
    uVar5 = (uint)psVar6 & 0xffffff00;
  }
  else {
    wVar3 = towupper(*pwVar7);
    _chdrive(wVar3 - 0x40);
    *param_3 = 0;
    piVar8 = param_3;
LAB_0040645a:
    uVar5 = CONCAT31((int3)((uint)piVar8 >> 8),1);
  }
  return uVar5;
}



char __fastcall FUN_004065bd(wchar_t *param_1,int param_2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  FILE *_File;
  errno_t eVar4;
  int iVar5;
  long _Offset;
  int _Origin;
  int local_c;
  char local_5;
  
  for (; (*param_1 == L' ' || (*param_1 == L'\t')); param_1 = param_1 + 1) {
  }
  wVar2 = L'\0';
  pwVar3 = wcspbrk(param_1,L" \t<>\r");
  if (pwVar3 != (wchar_t *)0x0) {
    wVar2 = *pwVar3;
    *pwVar3 = L'\0';
  }
  if (param_2 == 4) {
    _File = (FILE *)__acrt_iob_func(0);
    iVar5 = 0;
  }
  else {
    _File = (FILE *)__acrt_iob_func(1);
    iVar5 = ((param_2 != 2) - 1 & 0x1f8) + 0x109;
  }
  local_c = 0;
  eVar4 = _wsopen_s(&local_c,param_1,iVar5,0x40,0x180);
  local_5 = eVar4 == 0;
  if (eVar4 == 0) {
    iVar5 = _fileno(_File);
    iVar5 = _dup2(local_c,iVar5);
    if (iVar5 == -1) {
      FUN_004053f6(0,0x411);
    }
    _close(local_c);
  }
  if ((local_5 != '\0') && (param_2 == 3)) {
    _Origin = 2;
    _Offset = 0;
    iVar5 = _fileno(_File);
    _lseek(iVar5,_Offset,_Origin);
  }
  wVar1 = *param_1;
  while (wVar1 != L'\0') {
    *param_1 = L' ';
    param_1 = param_1 + 1;
    wVar1 = *param_1;
  }
  if (pwVar3 != (wchar_t *)0x0) {
    *pwVar3 = wVar2;
  }
  return local_5;
}



undefined __fastcall FUN_004066dc(wchar_t *param_1,rsize_t param_2,int *param_3,int *param_4)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  wchar_t *pwVar5;
  FILE *pFVar6;
  int iVar7;
  wchar_t *pwVar8;
  wchar_t *_Src;
  int local_10;
  wchar_t *local_c;
  
  bVar2 = false;
  bVar3 = false;
  _Src = (wchar_t *)0x0;
  pwVar5 = wcspbrk(param_1,L"<>|");
  local_c = param_1;
  do {
    if (pwVar5 == (wchar_t *)0x0) {
      return 0;
    }
    wVar1 = *pwVar5;
    if (wVar1 == L'<') {
      if (bVar3) goto LAB_00406828;
      if (_Src == (wchar_t *)0x0) {
        _Src = (wchar_t *)FUN_0040e267(local_c);
      }
      *pwVar5 = L' ';
      bVar3 = true;
      pwVar8 = pwVar5 + 1;
      pFVar6 = (FILE *)__acrt_iob_func(0);
      iVar7 = _fileno(pFVar6);
      iVar7 = _dup(iVar7);
      *param_3 = iVar7;
      if (iVar7 == -1) goto LAB_00406828;
      local_10 = 4;
LAB_004067f8:
      local_c = pwVar5 + 1;
      cVar4 = FUN_004065bd(pwVar8,local_10);
      if (cVar4 == '\0') {
LAB_00406828:
        if (_Src != (wchar_t *)0x0) {
          wcscpy_s(param_1,param_2,_Src);
          free(_Src);
        }
        if ((bVar3) && (*param_3 != -1)) {
          pFVar6 = (FILE *)__acrt_iob_func(0);
          iVar7 = _fileno(pFVar6);
          iVar7 = _dup2(*param_3,iVar7);
          if (iVar7 == -1) {
            FUN_004053f6(0,0x411);
          }
          _close(*param_3);
          *param_3 = -1;
        }
        if (!bVar2) {
          return 1;
        }
        if (*param_4 == -1) {
          return 1;
        }
        pFVar6 = (FILE *)__acrt_iob_func(1);
        iVar7 = _fileno(pFVar6);
        iVar7 = _dup2(*param_4,iVar7);
        if (iVar7 == -1) {
          FUN_004053f6(0,0x411);
        }
        _close(*param_4);
        *param_4 = -1;
        return 1;
      }
    }
    else {
      if (wVar1 == L'>') {
        if (bVar2) goto LAB_00406828;
        if (_Src == (wchar_t *)0x0) {
          _Src = (wchar_t *)FUN_0040e267(local_c);
        }
        *pwVar5 = L' ';
        pwVar8 = pwVar5 + 1;
        bVar2 = true;
        if (*pwVar8 == L'>') {
          *pwVar8 = L' ';
          pwVar8 = pwVar5 + 2;
          local_10 = 3;
        }
        else {
          local_10 = 2;
        }
        pFVar6 = (FILE *)__acrt_iob_func(1);
        iVar7 = _fileno(pFVar6);
        iVar7 = _dup(iVar7);
        *param_4 = iVar7;
        if (iVar7 == -1) goto LAB_00406828;
        goto LAB_004067f8;
      }
      if (wVar1 == L'|') goto LAB_00406828;
      FUN_004053f6(0,0x411);
    }
    pwVar5 = wcspbrk(local_c,L"<>|");
  } while( true );
}



undefined4 FUN_004068e0(void)

{
  return 1;
}



uint __fastcall FUN_004068e6(short *param_1,uint *param_2)

{
  short sVar1;
  uint in_EAX;
  uint uVar2;
  short *psVar3;
  short *psVar4;
  
  if (param_1 == (short *)0x0) {
    uVar2 = in_EAX & 0xffffff00;
  }
  else {
    sVar1 = *param_1;
    psVar3 = param_1;
    while (psVar4 = param_1, sVar1 == 0x3b) {
      psVar3 = psVar3 + 1;
      sVar1 = *psVar3;
    }
    while ((sVar1 != 0 && (sVar1 != 0x3b))) {
      psVar3 = psVar3 + 1;
      if (sVar1 == 0x22) {
        sVar1 = *psVar3;
        while ((sVar1 != 0 && (psVar3 = psVar3 + 1, sVar1 != 0x22))) {
          *psVar4 = sVar1;
          psVar4 = psVar4 + 1;
          sVar1 = *psVar3;
        }
      }
      else {
        *psVar4 = sVar1;
        psVar4 = psVar4 + 1;
      }
      sVar1 = *psVar3;
    }
    *param_2 = -(uint)(sVar1 != 0) & (uint)(psVar3 + 1);
    *psVar4 = 0;
    uVar2 = (uint)(psVar4 != param_1);
  }
  return uVar2;
}



void __fastcall FUN_0040699d(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  errno_t eVar4;
  HMODULE hModule;
  wchar_t *pwVar5;
  wchar_t *_Dst;
  uint uVar6;
  wchar_t *pwVar7;
  wchar_t *_Dir;
  int iVar8;
  wchar_t *local_63c;
  wchar_t *local_638;
  wchar_t *local_634;
  wchar_t *local_630;
  wchar_t *local_62c;
  wchar_t *local_628;
  size_t local_624;
  size_t local_620;
  char local_619;
  wchar_t local_618 [256];
  wchar_t local_418;
  undefined local_416 [510];
  wchar_t local_218;
  undefined local_216 [514];
  wchar_t local_14;
  undefined local_12 [6];
  uint local_c;
  
  local_c = DAT_00411014 ^ (uint)&stack0xfffffffc;
  local_630 = (wchar_t *)0x0;
  local_619 = '\0';
  if (*param_1 == L'\"') {
    pwVar3 = param_1;
    do {
      wVar1 = *pwVar3;
      pwVar3 = pwVar3 + 1;
    } while (wVar1 != L'\0');
    local_630 = param_1 + ((int)pwVar3 - (int)(param_1 + 1) >> 1) + -1;
    if (*local_630 == L'\"') {
      local_619 = '\x01';
      do {
        param_1 = param_1 + 1;
        pwVar3 = local_630;
      } while (*param_1 == L'\"');
      do {
        local_630 = pwVar3;
        if (local_630 <= param_1) break;
        pwVar3 = local_630 + -1;
      } while (local_630[-1] == L'\"');
      *local_630 = L'\0';
    }
  }
  local_628 = param_2;
  _wsplitpath_s(param_1,&local_14,3,&local_418,0x100,local_618,0x100,&local_218,0x100);
  if (local_218 == L'\0') {
    eVar4 = _wgetenv_s(&local_624,(wchar_t *)0x0,0,L"PATHEXT");
    if ((eVar4 == 0) && (local_624 != 0)) {
      pwVar3 = (wchar_t *)
               FUN_0040ac3c(-(uint)((int)((ulonglong)local_624 * 2 >> 0x20) != 0) |
                            (uint)((ulonglong)local_624 * 2));
      eVar4 = _wgetenv_s(&local_624,pwVar3,local_624,L"PATHEXT");
      if (eVar4 == 0) {
        if (pwVar3 != (wchar_t *)0x0) goto LAB_00406b12;
      }
      else {
        free(pwVar3);
      }
    }
    local_624 = 0x21;
    pwVar3 = (wchar_t *)FUN_0040ac3c(0x42);
    wcscpy_s(pwVar3,local_624,L".COM;.EXE;.BAT;.CMD;.VBS;.JS;.WS");
  }
  else {
    pwVar5 = &local_218;
    do {
      wVar1 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (wVar1 != L'\0');
    pwVar3 = &local_218;
    local_624 = ((int)pwVar5 - (int)local_216 >> 1) + 1;
  }
LAB_00406b12:
  if ((local_14 == L'\0') && (local_418 == L'\0')) {
    eVar4 = _wgetenv_s(&local_620,(wchar_t *)0x0,0,L"PATH");
    if ((eVar4 != 0) || (local_620 == 0)) {
      local_620 = 1;
    }
    if (DAT_00435654 == (code *)0x0) {
      hModule = GetModuleHandleW(L"KERNEL32.DLL");
      DAT_00435654 = GetProcAddress(hModule,"NeedCurrentDirectoryForExePathW");
      if (DAT_00435654 == (FARPROC)0x0) {
        DAT_00435654 = FUN_004068e0;
      }
    }
    local_62c = (wchar_t *)(*DAT_00435654)(local_618);
    if (local_62c != (wchar_t *)0x0) {
      local_620 = local_620 + 2;
    }
    pwVar5 = (wchar_t *)
             FUN_0040ac3c(-(uint)((int)((ulonglong)local_620 * 2 >> 0x20) != 0) |
                          (uint)((ulonglong)local_620 * 2));
    pwVar7 = pwVar5;
    local_634 = pwVar5;
    if (local_62c != (wchar_t *)0x0) {
      wcscpy_s(pwVar5,local_620,L".;");
      local_620 = local_620 - 2;
      pwVar7 = pwVar5 + 2;
    }
    eVar4 = _wgetenv_s(&local_620,pwVar7,local_620,L"PATH");
    if ((eVar4 != 0) || (local_620 == 0)) {
      *pwVar7 = L'\0';
    }
  }
  else {
    pwVar5 = &local_14;
    do {
      wVar1 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (wVar1 != L'\0');
    pwVar7 = &local_418;
    do {
      wVar1 = *pwVar7;
      pwVar7 = pwVar7 + 1;
    } while (wVar1 != L'\0');
    uVar6 = ((int)pwVar5 - (int)local_12 >> 1) + 1 + ((int)pwVar7 - (int)local_416 >> 1);
    lVar2 = (ulonglong)uVar6 * 2;
    pwVar5 = (wchar_t *)FUN_0040ac3c(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
    local_634 = pwVar5;
    eVar4 = _wmakepath_s(pwVar5,uVar6,&local_14,&local_418,(wchar_t *)0x0,(wchar_t *)0x0);
    if (eVar4 != 0) {
      free(pwVar5);
      pwVar5 = (wchar_t *)0x0;
      local_634 = (wchar_t *)0x0;
    }
  }
  _Dst = (wchar_t *)0x0;
  pwVar7 = pwVar5;
  do {
    _Dir = pwVar7;
    uVar6 = FUN_004068e6(_Dir,(uint *)&local_62c);
    if ((char)uVar6 == '\0') {
      free(_Dst);
      free(pwVar5);
      if (pwVar3 != &local_218) {
        free(pwVar3);
      }
LAB_00406d9c:
      FUN_00410365(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
    _Dst = (wchar_t *)
           FUN_0040ac3c(-(uint)((int)((ulonglong)local_624 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)local_624 * 2));
    wcscpy_s(_Dst,local_624,pwVar3);
    pwVar7 = _Dst;
    while (local_638 = pwVar7, uVar6 = FUN_004068e6(pwVar7,(uint *)&local_63c), pwVar7 = local_62c,
          (char)uVar6 != '\0') {
      eVar4 = _wmakepath_s(local_628,0x104,(wchar_t *)0x0,_Dir,local_618,local_638);
      pwVar7 = local_63c;
      if ((eVar4 == 0) && (eVar4 = _waccess_s(local_628,0), pwVar7 = local_63c, eVar4 == 0)) {
        if (local_619 != '\0') {
          pwVar5 = local_628;
          do {
            wVar1 = *pwVar5;
            pwVar5 = pwVar5 + 1;
          } while (wVar1 != L'\0');
          iVar8 = (int)pwVar5 - (int)(local_628 + 1) >> 1;
          memmove(local_628 + 1,local_628,iVar8 * 2);
          *local_628 = L'\"';
          local_628[iVar8 + 1] = L'\"';
          local_628[iVar8 + 2] = L'\0';
          *local_630 = L'\"';
          pwVar5 = local_634;
        }
        free(_Dst);
        free(pwVar5);
        if (pwVar3 != &local_218) {
          free(pwVar3);
        }
        goto LAB_00406d9c;
      }
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_00406e33(wchar_t *param_1,byte param_2,char param_3,char param_4,void **param_5)

{
  wchar_t wVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  wchar_t **ppwVar8;
  wchar_t *pwVar9;
  undefined4 uVar10;
  void *pvVar11;
  wchar_t *pwVar12;
  FILE *pFVar13;
  int iVar14;
  ulong *puVar15;
  int *piVar16;
  uint uVar17;
  wchar_t **_ArgList;
  wchar_t *local_43c;
  int local_438;
  wchar_t **local_434;
  int local_430;
  int local_42c;
  char local_426;
  char local_425;
  wchar_t *local_424;
  wchar_t local_420;
  wchar_t local_41e [59];
  wchar_t local_3a8 [198];
  short asStack_21c [2];
  wchar_t local_218;
  undefined local_216 [522];
  uint local_c;
  
  local_c = DAT_00411014 ^ (uint)&stack0xfffffffc;
  local_424 = param_1;
  if (DAT_00421eec == 0) {
    DAT_00421eec = FUN_004075c7();
  }
  if (*local_424 == L'-') {
    local_424 = local_424 + 1;
    local_426 = '\x01';
    iVar14 = iswdigit(*local_424);
    if (iVar14 == 0) {
      _DAT_00431ef0 = 0xffffffff;
    }
    else {
      _DAT_00431ef0 = wcstoul(local_424,&local_424,10);
      piVar16 = _errno();
      if (*piVar16 == 0x22) {
        *local_424 = L'\0';
        FUN_004053f6(0,0x436);
      }
      while (iVar14 = iswspace(*local_424), iVar14 != 0) {
        local_424 = local_424 + 1;
      }
    }
  }
  else {
    if (*local_424 == L'@') {
      local_424 = local_424 + 1;
      param_2 = (param_3 != '\0') - 1U & param_2;
    }
    local_426 = param_4;
  }
  if (*local_424 == L'\0') goto LAB_004075b0;
  _ArgList = (wchar_t **)0x0;
  pwVar12 = local_424;
  do {
    wVar1 = *pwVar12;
    pwVar12 = pwVar12 + 1;
  } while (wVar1 != L'\0');
  if ((uint)((int)pwVar12 - (int)(local_424 + 1) >> 1) < 0x8000) {
    wcscpy_s((wchar_t *)&DAT_00411490,0x8000,local_424);
  }
  else {
    _DAT_00411490 = 0;
  }
  local_43c = (wchar_t *)FUN_0040e267(local_424);
  if (param_2 != 0) {
    FUN_0040c7c7(L"\t%s\n",(char)local_43c);
    FUN_0040c7a9();
  }
  FUN_004055d7(&local_430,(wchar_t **)0x0,local_43c);
  iVar14 = local_430;
  if (local_430 != 0) {
    local_42c = local_430;
    lVar3 = (ulonglong)(local_430 + 8) * 4;
    _ArgList = (wchar_t **)FUN_0040ac3c(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3)
    ;
    FUN_004055d7(&local_430,_ArgList,local_43c);
    if (((*_ArgList != (wchar_t *)0x0) && (DAT_00421ee8 != 0)) &&
       (iVar7 = _wcsicmp(*_ArgList,(wchar_t *)DAT_00421ee8), iVar7 == 0)) {
      if (DAT_00411488 == (wchar_t *)0x0) {
        ppwVar8 = (wchar_t **)__p__wpgmptr();
        pwVar12 = *ppwVar8;
        DAT_00411488 = pwVar12;
        pwVar9 = wcspbrk(pwVar12,L" ");
        if (pwVar9 != (wchar_t *)0x0) {
          pwVar9 = DAT_00411488;
          do {
            wVar1 = *pwVar9;
            pwVar9 = pwVar9 + 1;
          } while (wVar1 != L'\0');
          uVar17 = ((int)pwVar9 - (int)(DAT_00411488 + 1) >> 1) + 3;
          DAT_00411488 = (wchar_t *)
                         FUN_0040ac3c(-(uint)((int)((ulonglong)uVar17 * 2 >> 0x20) != 0) |
                                      (uint)((ulonglong)uVar17 * 2));
          wcscpy_s(DAT_00411488,uVar17,L"\"");
          wcscat_s(DAT_00411488,uVar17,pwVar12);
          wcscat_s(DAT_00411488,uVar17,L"\"");
          iVar14 = local_42c;
        }
      }
      *_ArgList = DAT_00411488;
    }
    if (param_3 == '\0') {
      uVar10 = FUN_00406406(iVar14,_ArgList,(int *)&local_434);
      if ((((char)uVar10 != '\0') && (local_434 != (wchar_t **)0x0)) && (param_5 != (void **)0x0)) {
        pvVar11 = FUN_0040e267(*_ArgList);
        *param_5 = pvVar11;
      }
    }
    else {
      pwVar12 = wcspbrk(local_424,L"<>|&%");
      uVar10 = FUN_00406406(iVar14,_ArgList,(int *)&local_434);
      if ((char)uVar10 == '\0') {
        pwVar9 = local_424;
        do {
          wVar1 = *pwVar9;
          pwVar9 = pwVar9 + 1;
        } while (wVar1 != L'\0');
        if (((uint)((int)pwVar9 - (int)(local_424 + 1) >> 1) < 0x1000) &&
           (pwVar12 != (wchar_t *)0x0)) {
          cVar6 = '\x01';
        }
        else {
          local_438 = -1;
          local_42c = -1;
          pwVar12 = local_424;
          do {
            wVar1 = *pwVar12;
            pwVar12 = pwVar12 + 1;
          } while (wVar1 != L'\0');
          local_425 = FUN_004066dc(local_424,((int)pwVar12 - (int)(local_424 + 1) >> 1) + 1,
                                   &local_438,&local_42c);
          if (local_425 == '\0') {
            pwVar12 = local_424;
            do {
              wVar1 = *pwVar12;
              pwVar12 = pwVar12 + 1;
            } while (wVar1 != L'\0');
            if (0x7fff < (uint)((int)pwVar12 - (int)(local_424 + 1) >> 1)) {
              FUN_004053f6(0,0x447);
            }
            if ((local_438 != -1) || (local_42c != -1)) {
              free(local_43c);
              local_43c = (wchar_t *)FUN_0040e267(local_424);
              FUN_004055d7(&local_430,_ArgList,local_43c);
            }
            cVar6 = FUN_0040699d(*_ArgList,&local_218);
            if (cVar6 == '\0') {
              local_425 = '\x01';
            }
            else {
              if (local_218 == L'\"') {
                pwVar12 = &local_218;
                do {
                  wVar1 = *pwVar12;
                  pwVar12 = pwVar12 + 1;
                } while (wVar1 != L'\0');
                iVar14 = (int)pwVar12 - (int)local_216 >> 1;
                if (asStack_21c[iVar14 + 1] == 0x22) {
                  memmove(&local_218,local_216,iVar14 * 2);
                  if (0x207 < iVar14 * 2 - 4U) {
                    FUN_00410495();
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  asStack_21c[iVar14] = 0;
                }
              }
              *_ArgList = &local_218;
              pwVar12 = wcschr(&local_218,L' ');
              if (pwVar12 != (wchar_t *)0x0) {
                local_420 = L'\"';
                wcscpy_s(local_41e,0x103,&local_218);
                wcscat_s(&local_420,0x104,L"\"");
                *_ArgList = &local_420;
              }
              piVar16 = _errno();
              *piVar16 = 0;
              local_434 = (wchar_t **)_wspawnvp(0,&local_218,_ArgList);
              if (((local_434 == (wchar_t **)0xffffffff) && (piVar16 = _errno(), *piVar16 != 0xc))
                 && (puVar15 = __doserrno(), *puVar15 == 0xc1)) {
                local_425 = '\x01';
              }
            }
          }
          if (local_438 != -1) {
            pFVar13 = (FILE *)__acrt_iob_func(0);
            iVar14 = _fileno(pFVar13);
            iVar14 = _dup2(local_438,iVar14);
            if (iVar14 == -1) {
              FUN_004053f6(0,0x411);
            }
            _close(local_438);
          }
          if (local_42c != -1) {
            pFVar13 = (FILE *)__acrt_iob_func(1);
            iVar14 = _fileno(pFVar13);
            iVar14 = _dup2(local_42c,iVar14);
            if (iVar14 == -1) {
              FUN_004053f6(0,0x411);
            }
            _close(local_42c);
          }
          cVar6 = local_425;
          if (local_425 == '\0') goto LAB_00407494;
        }
        pwVar12 = local_424;
        do {
          wVar1 = *pwVar12;
          pwVar12 = pwVar12 + 1;
        } while (wVar1 != L'\0');
        if ((uint)((int)pwVar12 - (int)(local_424 + 1) >> 1) < 0x1000) {
          wcscpy_s((wchar_t *)&DAT_00411490,0x8000,local_424);
        }
        else {
          FUN_004053f6(0,0x447);
        }
        local_434 = FUN_00405bd5((wchar_t *)0x0,local_430,_ArgList);
      }
      else {
        cVar6 = '\0';
      }
LAB_00407494:
      if (local_434 == (wchar_t **)0xffffffff) {
        if (local_426 == '\0') {
          piVar16 = _errno();
          iVar14 = *piVar16;
          if (iVar14 != 0) {
            if (iVar14 == 2) {
              FUN_004053f6(0,0x439);
              goto LAB_0040751e;
            }
            if (iVar14 == 0xc) {
              uVar17 = 0x43a;
            }
            else {
              piVar16 = _errno();
              _wcserror_s(local_3a8,200,*piVar16);
              uVar17 = 0x415;
            }
            FUN_004053f6(0,uVar17);
          }
          goto LAB_00407522;
        }
      }
      else {
LAB_0040751e:
        if (local_434 != (wchar_t **)0x0) {
LAB_00407522:
          if (param_5 != (void **)0x0) {
            ppwVar8 = _ArgList + 2;
            if (cVar6 == '\0') {
              ppwVar8 = _ArgList;
            }
            pvVar11 = FUN_0040e267(*ppwVar8);
            *param_5 = pvVar11;
          }
        }
      }
    }
  }
  uVar17 = 0;
  if (local_430 == -8) {
    bVar4 = true;
    bVar5 = true;
    if (_ArgList != (wchar_t **)0x0) goto LAB_00407585;
  }
  else {
    do {
      if (_ArgList == (wchar_t **)0x0) {
        bVar4 = true;
        goto LAB_00407598;
      }
      bVar5 = true;
      if (_ArgList[uVar17] == (wchar_t *)0x0) break;
      if (_ArgList[uVar17] == local_43c) {
        bVar5 = false;
        break;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < local_430 + 8U);
LAB_00407585:
    bVar4 = bVar5;
    free(_ArgList);
  }
LAB_00407598:
  if ((local_43c != (wchar_t *)0x0) && (bVar4)) {
    free(local_43c);
  }
LAB_004075b0:
  FUN_00410365(local_c ^ (uint)&stack0xfffffffc);
  return;
}



void FUN_004075c7(void)

{
  wchar_t *local_218;
  wchar_t local_214 [262];
  uint local_8;
  
  local_8 = DAT_00411014 ^ (uint)&stack0xfffffffc;
  local_218 = (wchar_t *)0x0;
  _wdupenv_s(&local_218,(size_t *)0x0,L"COMSPEC");
  if (local_218 == (wchar_t *)0x0) {
    _wsearchenv(L"CMD.EXE",L"PATH",local_214);
    if (local_214[0] == L'\0') {
      FUN_004053f6(0,0x420);
    }
    FUN_0040e267(local_214);
  }
  else {
    FUN_0040e267(local_218);
    free(local_218);
  }
  FUN_00410365(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint __fastcall
FUN_00407663(wchar_t *param_1,undefined4 param_2,byte param_3,byte param_4,wchar_t *param_5,
            uint *param_6)

{
  wchar_t wVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  char cVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  int *piVar8;
  byte bVar9;
  ushort uVar10;
  short sVar11;
  uint uVar12;
  void *local_20;
  uint local_1c;
  wchar_t *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  wchar_t *local_c;
  undefined local_5;
  
  uVar12 = (uint)(ushort)*param_1;
  local_c = (wchar_t *)0x0;
  local_14 = (undefined4 *)0x0;
  local_18 = param_1;
  local_10 = param_2;
  if (*param_1 == L'\0') {
LAB_004076f4:
    sVar11 = (short)local_c;
LAB_004076f7:
    if ((short)uVar12 != 0) {
      if (local_14 != (undefined4 *)0x0) {
        uVar12 = CONCAT31((int3)(uVar12 >> 8),param_3) & 0xffffff04;
        local_5 = (undefined)uVar12;
        local_1c = CONCAT31((int3)(uVar12 >> 8),param_4 >> 1) & 0xffffff01;
        uVar10 = CONCAT11(param_3,local_5) & 0x2ff;
        do {
          piVar8 = DAT_00421ec4;
          if (sVar11 != 0x2a) {
            piVar8 = DAT_00421ed0;
          }
          puVar2 = (undefined4 *)*piVar8;
          DAT_004216bc = local_10;
          *piVar8 = 0;
          local_c = (wchar_t *)FUN_0040ec83(local_18,-1,(int **)&DAT_004216bc);
          cVar4 = FUN_0040fa87((wchar_t *)&DAT_00421ef0,0x8000,local_c,param_5);
          if (cVar4 != '\0') {
            FUN_004053f6(0,0x447);
          }
          cVar4 = (char)uVar10;
          if ((cVar4 == '\0') || ((param_4 & 8) != 0)) {
            cVar5 = '\x01';
            if ((cVar4 != '\0') || (((param_3 & 8) == 0 && ((param_4 & 1) == 0))))
            goto LAB_004077f7;
            bVar9 = 0;
            cVar5 = '\x01';
          }
          else {
            cVar5 = '\0';
LAB_004077f7:
            bVar9 = 1;
          }
          uVar12 = FUN_00406e33((wchar_t *)&DAT_00421ef0,bVar9,cVar5,(char)local_1c,&local_20);
          *param_6 = uVar12;
          cVar4 = (char)(uVar10 >> 8);
          if ((((cVar4 == '\0') && (uVar12 != 0)) && (_DAT_00431ef0 < uVar12)) &&
             (DAT_004216b7 == '\0')) {
            FUN_004053f6(0,0x435);
          }
          piVar8 = DAT_00421ed0;
          puVar3 = puVar2;
          if (sVar11 == 0x2a) {
            piVar8 = DAT_00421ec4;
            DAT_00421ec4 = puVar2;
            puVar3 = DAT_00421ed0;
          }
          DAT_00421ed0 = puVar3;
          *piVar8 = (int)puVar2;
          free(local_c);
        } while ((((cVar4 != '\0') || (DAT_004216b7 == '\0')) ||
                 ((*param_6 == 0 || (*param_6 <= _DAT_00431ef0)))) && (puVar2 != (undefined4 *)0x0))
        ;
      }
      puVar2 = local_14;
      if (sVar11 == 0x2a) {
        DAT_00421ec4 = local_14;
        puVar2 = DAT_00421ed0;
      }
      DAT_00421ed0 = puVar2;
      return 1;
    }
  }
  else {
    local_c = (wchar_t *)0x3f;
    do {
      pwVar6 = param_1;
      if ((short)uVar12 == 0x24) {
        wVar1 = param_1[1];
        if (wVar1 == L'(') {
          param_1 = param_1 + 1;
        }
        pwVar6 = param_1 + 1;
        if (*pwVar6 == L'?') {
          if ((wVar1 != L'(') ||
             (((pwVar6 = wcschr(L"DFBR",param_1[2]), pwVar6 != (wchar_t *)0x0 &&
               (param_1[3] == L')')) || (pwVar6 = param_1, param_1[2] == L')')))) {
            uVar12 = (uint)(ushort)*param_1;
            local_14 = DAT_00421ed0;
            goto LAB_004076f4;
          }
        }
        else if (((*pwVar6 == L'*') && (param_1[2] == L'*')) &&
                (((wVar1 != L'(' ||
                  ((pwVar7 = wcschr(L"DFBR",param_1[3]), pwVar7 != (wchar_t *)0x0 &&
                   (param_1[4] == L')')))) || (param_1[3] == L')')))) {
          local_14 = DAT_00421ec4;
          uVar12 = (uint)(ushort)*pwVar6;
          sVar11 = 0x2a;
          goto LAB_004076f7;
        }
      }
      param_1 = pwVar6 + 1;
      uVar12 = (uint)(ushort)*param_1;
    } while (*param_1 != L'\0');
  }
  return uVar12 & 0xffffff00;
}



void __fastcall FUN_004078c7(int param_1,short **param_2)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  short **local_8;
  
  local_8 = param_2;
  if (param_1 != 0) {
    do {
      psVar4 = *local_8;
      param_1 = param_1 + -1;
      sVar2 = *psVar4;
      psVar3 = psVar4;
      while (sVar2 != 0) {
        if ((sVar2 == 0x5c) || (sVar2 == 0x5e)) {
          psVar1 = psVar4 + 1;
          if (*psVar1 == 0x22) {
            *psVar3 = sVar2;
            sVar2 = *psVar1;
            psVar3 = psVar3 + 1;
            psVar4 = psVar1;
          }
          *psVar3 = sVar2;
LAB_00407927:
          psVar3 = psVar3 + 1;
        }
        else if (sVar2 != 0x22) {
          *psVar3 = sVar2;
          goto LAB_00407927;
        }
        psVar4 = psVar4 + 1;
        sVar2 = *psVar4;
      }
      local_8 = local_8 + 1;
      *psVar3 = 0;
    } while (param_1 != 0);
  }
  return;
}



void __fastcall FUN_00407951(wchar_t *param_1,char param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  HANDLE hFile;
  _FILETIME local_c;
  
  if (*param_1 == L'\"') {
    pwVar2 = wcsrchr(param_1,L'\"');
    *pwVar2 = L'\0';
    wVar1 = param_1[1];
    *param_1 = wVar1;
    pwVar2 = param_1 + 1;
    while (wVar1 != L'\0') {
      wVar1 = pwVar2[1];
      *pwVar2 = wVar1;
      pwVar2 = pwVar2 + 1;
    }
  }
  FUN_004054d0(5);
  if (param_2 == '\0') {
    GetSystemTimeAsFileTime(&local_c);
    hFile = CreateFileW(param_1,0x100,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      SetFileTime(hFile,(FILETIME *)0x0,(FILETIME *)0x0,&local_c);
      CloseHandle(hFile);
    }
  }
  return;
}



undefined8 __fastcall FUN_004079e0(byte *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*param_1 & 0x10) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(param_1 + 8);
    if ((iVar1 != 0) || (iVar2 != 0)) goto LAB_004079f9;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x14);
LAB_004079f9:
  return CONCAT44(iVar2,iVar1);
}



void __fastcall FUN_004079fa(wchar_t *param_1,LPWIN32_FIND_DATAW param_2,HANDLE *param_3)

{
  uint uVar1;
  wchar_t wVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  HANDLE pvVar6;
  undefined4 uVar7;
  wchar_t *pwVar8;
  wchar_t local_218 [262];
  uint local_c;
  
  local_c = DAT_00411014 ^ (uint)&stack0xfffffffc;
  pwVar4 = wcspbrk(param_1,L"\"^*?");
  pwVar5 = param_1;
  pwVar8 = local_218;
  if (pwVar4 != (wchar_t *)0x0) {
    do {
      wVar2 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (wVar2 != L'\0');
    uVar1 = ((int)pwVar5 - (int)(param_1 + 1) >> 1) + 1;
    pwVar5 = local_218;
    if ((0x104 < uVar1) &&
       (lVar3 = (ulonglong)uVar1 * 2,
       pwVar5 = (wchar_t *)FUN_0040ac3c(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3)
       , pwVar5 == (wchar_t *)0x0)) {
      FUN_004053f6(DAT_004216b0,0x41b);
    }
    wVar2 = *param_1;
    pwVar8 = pwVar5;
    while (wVar2 != L'\0') {
      if ((wVar2 != L'^') && (wVar2 != L'\"')) {
        *pwVar8 = wVar2;
        pwVar8 = pwVar8 + 1;
      }
      param_1 = param_1 + 1;
      wVar2 = *param_1;
    }
    *pwVar8 = L'\0';
    pwVar8 = pwVar5;
  }
  pvVar6 = FindFirstFileW(pwVar5,param_2);
  *param_3 = pvVar6;
  if ((pvVar6 == (HANDLE)0xffffffff) ||
     (uVar7 = FUN_00407d27(pwVar5,&param_2->dwFileAttributes), (char)uVar7 == '\0')) {
    if (pwVar8 != local_218) {
      free(pwVar8);
    }
  }
  else {
    if ((pwVar4 == (wchar_t *)0x0) ||
       ((pwVar4 = wcschr(pwVar5,L'*'), pwVar4 == (wchar_t *)0x0 &&
        (pwVar5 = wcschr(pwVar5,L'?'), pwVar5 == (wchar_t *)0x0)))) {
      FindClose(*param_3);
      *param_3 = (HANDLE)0xffffffff;
    }
    if (pwVar8 != local_218) {
      free(pwVar8);
    }
    if ((((*(byte *)&param_2->dwFileAttributes & 0x10) == 0) &&
        ((param_2->ftLastWriteTime).dwLowDateTime == 0)) &&
       ((param_2->ftLastWriteTime).dwHighDateTime == 0)) {
      (param_2->ftLastWriteTime).dwLowDateTime = 0xffffffff;
      (param_2->ftLastWriteTime).dwHighDateTime = 0xffffffff;
    }
  }
  FUN_00410365(local_c ^ (uint)&stack0xfffffffc);
  return;
}



WCHAR * __fastcall FUN_00407b86(LPWIN32_FIND_DATAW param_1,HANDLE param_2)

{
  BOOL BVar1;
  WCHAR *pWVar2;
  
  BVar1 = FindNextFileW(param_2,param_1);
  if (BVar1 == 0) {
    FindClose(param_2);
    pWVar2 = (WCHAR *)0x0;
  }
  else {
    pWVar2 = param_1->cFileName;
  }
  return pWVar2;
}



void * __fastcall
FUN_00407ba9(wchar_t *param_1,wchar_t *param_2,LPWIN32_FIND_DATAW param_3,HANDLE *param_4)

{
  wchar_t wVar1;
  int iVar2;
  void *pvVar3;
  wchar_t *pwVar4;
  wchar_t *_Dst;
  
  iVar2 = FUN_004079fa(param_2,param_3,param_4);
  if (iVar2 == 0) {
    if (param_1 != (wchar_t *)0x0) {
      do {
        _Dst = &DAT_004216c0;
LAB_00407bd7:
        wVar1 = *param_1;
joined_r0x00407be0:
        while (wVar1 != L'\0') {
          param_1 = param_1 + 1;
          if (wVar1 != L'\"') {
            *_Dst = wVar1;
            if (wVar1 == L';') break;
            _Dst = _Dst + 1;
            goto LAB_00407bd7;
          }
          wVar1 = *param_1;
        }
        if (_Dst == &DAT_004216c0) {
          wVar1 = *param_1;
          if (wVar1 == L'\0') goto LAB_00407c10;
          goto joined_r0x00407be0;
        }
        if ((_Dst[-1] != L'\\') && (_Dst[-1] != L'/')) {
          *_Dst = L'\\';
          _Dst = _Dst + 1;
        }
        *_Dst = L'\0';
        pwVar4 = wcspbrk(&DAT_004216c0,L"*?");
      } while (pwVar4 != (wchar_t *)0x0);
      wcscpy_s(_Dst,0x400 - ((int)(_Dst + -0x210b60) >> 1),param_2);
      _Dst = &DAT_004216c0;
      iVar2 = FUN_004079fa(&DAT_004216c0,param_3,param_4);
      if (iVar2 != 0) {
        param_2 = &DAT_004216c0;
        goto LAB_00407bc7;
      }
      goto LAB_00407bd7;
    }
LAB_00407c10:
    pvVar3 = (void *)0x0;
  }
  else {
LAB_00407bc7:
    pvVar3 = FUN_0040e267(param_2);
  }
  return pvVar3;
}



uint __fastcall FUN_00407c98(wchar_t *param_1,LPWIN32_FIND_DATAW param_2)

{
  wchar_t wVar1;
  bool bVar2;
  HANDLE hFindFile;
  HANDLE pvVar3;
  BOOL BVar4;
  wchar_t *pwVar5;
  
  bVar2 = false;
  pwVar5 = param_1;
  do {
    wVar1 = *pwVar5;
    pwVar5 = pwVar5 + 1;
  } while (wVar1 != L'\0');
  if ((*param_1 == L'\"') && (param_1[((int)pwVar5 - (int)(param_1 + 1) >> 1) + -1] == L'\"')) {
    param_1 = FUN_0040ff51(param_1);
    bVar2 = true;
  }
  hFindFile = FindFirstFileW(param_1,param_2);
  pvVar3 = hFindFile;
  if ((hFindFile != (HANDLE)0xffffffff) &&
     (pvVar3 = (HANDLE)FUN_00407d27(param_1,&param_2->dwFileAttributes), (char)pvVar3 != '\0')) {
    BVar4 = FindClose(hFindFile);
    if (((*(byte *)&param_2->dwFileAttributes & 0x10) == 0) &&
       (((param_2->ftLastWriteTime).dwLowDateTime == 0 &&
        ((param_2->ftLastWriteTime).dwHighDateTime == 0)))) {
      (param_2->ftLastWriteTime).dwLowDateTime = 0xffffffff;
      (param_2->ftLastWriteTime).dwHighDateTime = 0xffffffff;
    }
    return CONCAT31((int3)((uint)BVar4 >> 8),1);
  }
  if (bVar2) {
    free(param_1);
  }
  return (uint)pvVar3 & 0xffffff00;
}



uint __fastcall FUN_00407d27(wchar_t *param_1,uint *param_2)

{
  wchar_t wVar1;
  longlong lVar2;
  BOOL in_EAX;
  wchar_t *pwVar3;
  HANDLE hFile;
  uint uVar4;
  BOOL BVar5;
  HANDLE pvVar6;
  uint *puVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  uint *puVar10;
  uint *puVar11;
  
  if (((*param_2 & 0x400) == 0) || (param_2[9] != 0xa000000c)) {
LAB_00407e96:
    uVar4 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  else {
    puVar11 = param_2 + 0xb;
    pwVar3 = wcsrchr(param_1,L'\\');
    puVar10 = puVar11;
    if (pwVar3 != (wchar_t *)0x0) {
      pwVar8 = param_1;
      do {
        wVar1 = *pwVar8;
        pwVar8 = pwVar8 + 1;
      } while (wVar1 != L'\0');
      pwVar9 = pwVar3;
      do {
        wVar1 = *pwVar9;
        pwVar9 = pwVar9 + 1;
      } while (wVar1 != L'\0');
      do {
        wVar1 = *(wchar_t *)puVar10;
        puVar10 = (uint *)((int)puVar10 + 2);
      } while (wVar1 != L'\0');
      lVar2 = (ulonglong)
              (uint)((((int)puVar10 - ((int)param_2 + 0x2e) >> 1) -
                     ((int)pwVar9 - (int)(pwVar3 + 1) >> 1)) +
                    ((int)pwVar8 - (int)(param_1 + 1) >> 1) + 2) * 2;
      puVar10 = (uint *)FUN_0040ac3c(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
      if (puVar10 == (uint *)0x0) {
        FUN_004053f6(DAT_004216b0,0x41b);
      }
      puVar7 = puVar10;
      if (param_1 != pwVar3) {
        do {
          wVar1 = *param_1;
          param_1 = param_1 + 1;
          *(wchar_t *)puVar7 = wVar1;
          puVar7 = (uint *)((int)puVar7 + 2);
        } while (param_1 != pwVar3);
      }
      *(wchar_t *)puVar7 = L'\\';
      pwVar8 = (wchar_t *)((int)puVar7 + 2);
      wVar1 = *(wchar_t *)puVar11;
      while (wVar1 != L'\0') {
        puVar11 = (uint *)((int)puVar11 + 2);
        *pwVar8 = wVar1;
        pwVar8 = pwVar8 + 1;
        wVar1 = *(wchar_t *)puVar11;
      }
      *pwVar8 = L'\0';
    }
    hFile = CreateFileW((LPCWSTR)puVar10,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    pvVar6 = hFile;
    if (pwVar3 != (wchar_t *)0x0) {
      free(puVar10);
    }
    if (hFile != (HANDLE)0xffffffff) {
      BVar5 = GetFileTime(hFile,(LPFILETIME)(param_2 + 1),(LPFILETIME)(param_2 + 3),
                          (LPFILETIME)(param_2 + 5));
      if (BVar5 != 0) {
        in_EAX = CloseHandle(hFile);
        goto LAB_00407e96;
      }
      pvVar6 = (HANDLE)CloseHandle(hFile);
    }
    uVar4 = (uint)pvVar6 & 0xffffff00;
  }
  return uVar4;
}



wint_t __fastcall FUN_00407e9d(wchar_t *param_1)

{
  char cVar1;
  wint_t _Ch;
  wchar_t *_Memory;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *pwVar4;
  uint uVar5;
  undefined4 unaff_EDI;
  undefined4 uStack_10;
  wchar_t *apwStack_c [2];
  
  uStack_10 = param_1;
  apwStack_c[0] = param_1;
  do {
    _Ch = getwc(DAT_00421edc);
    if (DAT_00431ef8 == (wchar_t *)0x0) {
      if (DAT_00411021 == '\0') {
        return _Ch;
      }
      if (_Ch != 0x21) {
        return _Ch;
      }
    }
    DAT_00411021 = '\0';
    if (DAT_00431ef8 == (wchar_t *)0x0) {
      _Memory = (wchar_t *)FUN_00408046();
    }
    else {
      ungetwc(_Ch,DAT_00421edc);
      _Memory = DAT_00431ef8;
      DAT_00431ef8 = (wchar_t *)0x0;
    }
    uStack_10 = (wchar_t *)CONCAT13(_Memory != DAT_00431efc,(undefined3)uStack_10);
    pwVar2 = FUN_00408182(_Memory,(char *)((int)&uStack_10 + 2));
    if (uStack_10._2_1_ == '\t') {
      if (DAT_00421ee1 != '\0') {
        FUN_004053f6(DAT_004216a4,0x409);
      }
      cVar1 = FUN_0040a618(pwVar2);
      if (cVar1 == '\x12') {
        return 0x20;
      }
    }
    else if (uStack_10._2_1_ == '\n') {
      FUN_004082f1((wint_t *)pwVar2);
    }
    else if (uStack_10._2_1_ == '\v') {
      FUN_004053f6(DAT_004216a4,0x41a);
    }
    else if (uStack_10._2_1_ == '\f') {
      iVar3 = _wcsnicmp(pwVar2,L"\\t",2);
      if (iVar3 == 0) {
        FUN_0040c7c7(&DAT_0040179c,(char)unaff_EDI);
      }
      FUN_004054d0(0xd);
    }
    else if (uStack_10._2_1_ == '\r') {
      apwStack_c[0] = (wchar_t *)0x0;
      pwVar2 = wcstok_s(pwVar2,L" \t",apwStack_c);
      pwVar4 = wcstok_s((wchar_t *)0x0,L" \t",apwStack_c);
      if (pwVar4 != (wchar_t *)0x0) {
        FUN_004053f6(DAT_004216a4,0x409);
      }
      uVar5 = FUN_0040ab97((ushort *)pwVar2);
      if (uVar5 != 0) {
        *(byte *)(uVar5 + 0xc) = *(byte *)(uVar5 + 0xc) | 0x10;
      }
    }
    else {
      FUN_00408646(pwVar2,uStack_10._2_1_);
    }
    DAT_00411021 = '\x01';
    if (uStack_10._3_1_ != '\0') {
      free(_Memory);
    }
    DAT_004216a4 = DAT_004216a4 + 1;
  } while( true );
}



void FUN_00408046(void)

{
  uint uVar1;
  longlong lVar2;
  FILE *_File;
  short sVar3;
  wint_t wVar4;
  wchar_t _Ch;
  undefined4 uVar5;
  uint uVar6;
  
  sVar3 = FUN_00409c3c('\x01');
  if ((sVar3 == 10) || (sVar3 == -1)) {
    FUN_004053f6(DAT_004216a4,0x3fa);
  }
  uVar6 = 0;
  uVar5 = FUN_00409d15(sVar3,'\x01');
  while (((_Ch = (wchar_t)uVar5, _Ch != L'#' && (_Ch != L'\n')) && (_Ch != L'\xffff'))) {
    if ((DAT_00431ef4 < 2) || (DAT_00431ef4 - 2 < uVar6)) {
      uVar1 = DAT_00431ef4 + 0x400;
      if (DAT_00431efc == (wchar_t *)0x0) {
        lVar2 = (ulonglong)(DAT_00431ef4 + 0x401) * 2;
        DAT_00431ef4 = uVar1;
        DAT_00431efc = (wchar_t *)
                       FUN_0040ac3c(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
      }
      else {
        DAT_00431ef4 = uVar1;
        DAT_00431efc = (wchar_t *)FUN_0040ac7f(DAT_00431efc,uVar1 * 2 + 2);
      }
    }
    _File = DAT_00421edc;
    DAT_00431efc[uVar6] = _Ch;
    uVar6 = uVar6 + 1;
    wVar4 = getwc(_File);
    uVar5 = FUN_00409d15(wVar4,'\x01');
  }
  DAT_00431efc[uVar6] = L'\0';
  if (_Ch == L'#') {
    _Ch = getwc(DAT_00421edc);
    while (_Ch != L'\n') {
      if (_Ch == L'\xffff') goto LAB_00408165;
      _Ch = getwc(DAT_00421edc);
    }
  }
  if (_Ch == L'\xffff') {
LAB_00408165:
    ungetwc(_Ch,DAT_00421edc);
  }
  FUN_0040ec1b(DAT_00431efc);
  return;
}



wchar_t * __fastcall FUN_00408182(wchar_t *param_1,char *param_2)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  wchar_t *local_c;
  wchar_t *local_8;
  
  wVar2 = *param_1;
  *param_2 = '\0';
  pwVar1 = param_1;
  while (((wVar2 != L'\0' && (wVar2 != L' ')) && (wVar2 != L'\t'))) {
    pwVar1 = pwVar1 + 1;
    wVar2 = *pwVar1;
  }
  iVar5 = (int)pwVar1 - (int)param_1 >> 1;
  wVar2 = *pwVar1;
  while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
    pwVar1 = pwVar1 + 1;
    wVar2 = *pwVar1;
  }
  local_c = pwVar1;
  local_8 = param_1;
  iVar4 = _wcsnicmp(param_1,L"INCLUDE",7);
  if ((iVar4 == 0) && (iVar5 == 7)) {
    *param_2 = '\t';
    local_c = pwVar1;
  }
  else {
    iVar4 = _wcsnicmp(local_8,L"CMDSWITCHES",0xb);
    if ((iVar4 == 0) && (iVar5 == 0xb)) {
      *param_2 = '\n';
      local_c = pwVar1;
    }
    else {
      iVar4 = _wcsnicmp(local_8,L"ERROR",5);
      if ((iVar4 == 0) && (iVar5 == 5)) {
        *param_2 = '\v';
        local_c = pwVar1;
      }
      else {
        iVar4 = _wcsnicmp(local_8,L"MESSAGE",7);
        if ((iVar4 == 0) && (iVar5 == 7)) {
          *param_2 = '\f';
          local_c = pwVar1;
        }
        else {
          iVar4 = _wcsnicmp(local_8,L"UNDEF",5);
          if ((iVar4 == 0) && (iVar5 == 5)) {
            *param_2 = '\r';
            local_c = pwVar1;
          }
          else {
            cVar3 = FUN_0040846a(local_8,iVar5,&local_c);
            *param_2 = cVar3;
            if (cVar3 == '\0') {
              FUN_004053f6(DAT_004216a4,0x3f9);
            }
          }
        }
      }
    }
  }
  return local_c;
}



void __fastcall FUN_004082f1(wint_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wint_t wVar3;
  
  wVar3 = *param_1;
  do {
    if (wVar3 == 0) {
      return;
    }
    if (wVar3 == 0x2b) {
      param_1 = param_1 + 1;
      wVar3 = *param_1;
      while( true ) {
        if (wVar3 == 0) {
          return;
        }
        if (wVar3 == 0x2d) break;
        wVar1 = towupper(wVar3);
        pwVar2 = wcschr(L"DINSU",wVar1);
        if (pwVar2 == (wchar_t *)0x0) {
          if (DAT_00421ee1 != '\0') {
            wVar1 = towupper(*param_1);
            pwVar2 = wcschr(L"ABCEKLPQRTY",wVar1);
            if (pwVar2 != (wchar_t *)0x0) goto LAB_004083a4;
          }
          FUN_004053f6(DAT_004216a4,0x400);
        }
        else {
LAB_004083a4:
          FUN_0040c1cd(*param_1,'\x01');
        }
        param_1 = param_1 + 1;
        wVar3 = *param_1;
      }
LAB_004083d4:
      param_1 = param_1 + 1;
      wVar3 = *param_1;
      while (wVar3 != 0) {
        if (wVar3 == 0x2b) goto LAB_00408455;
        wVar1 = towupper(wVar3);
        pwVar2 = wcschr(L"DINSU",wVar1);
        if (pwVar2 == (wchar_t *)0x0) {
          if (DAT_00421ee1 != '\0') {
            wVar1 = towupper(*param_1);
            pwVar2 = wcschr(L"ABCEKLMPQRTV",wVar1);
            if (pwVar2 != (wchar_t *)0x0) goto LAB_00408420;
          }
          FUN_004053f6(DAT_004216a4,0x400);
        }
        else {
LAB_00408420:
          FUN_0040c1cd(*param_1,'\0');
        }
        param_1 = param_1 + 1;
        wVar3 = *param_1;
      }
    }
    else {
      if (wVar3 == 0x2d) goto LAB_004083d4;
      if ((wVar3 != 0x20) && (wVar3 != 9)) {
        FUN_004053f6(DAT_004216a4,0x400);
        wVar3 = *param_1;
      }
    }
    if (wVar3 == 0) {
      return;
    }
LAB_00408455:
    param_1 = param_1 + 1;
    wVar3 = *param_1;
  } while( true );
}



undefined __fastcall FUN_0040846a(wchar_t *param_1,int param_2,wchar_t **param_3)

{
  wchar_t *_Str1;
  wchar_t wVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar2 = _wcsnicmp(param_1,L"IF",2);
  if ((iVar2 == 0) && (param_2 == 2)) {
    return 1;
  }
  iVar2 = _wcsnicmp(param_1,L"IFDEF",5);
  if ((iVar2 == 0) && (param_2 == 5)) {
    return 6;
  }
  iVar2 = _wcsnicmp(param_1,L"IFNDEF",6);
  if ((iVar2 == 0) && (param_2 == 6)) {
    return 7;
  }
  iVar2 = _wcsnicmp(param_1,L"ELSE",4);
  if ((iVar2 == 0) && (param_2 == 4)) {
    _Str1 = *param_3;
    wVar1 = *_Str1;
    pwVar4 = _Str1;
    if (wVar1 == L'\0') {
      return 2;
    }
    do {
      if ((wVar1 == L' ') || (wVar1 == L'\t')) break;
      pwVar4 = pwVar4 + 1;
      wVar1 = *pwVar4;
    } while (wVar1 != L'\0');
    iVar2 = (int)pwVar4 - (int)_Str1 >> 1;
    while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
      pwVar4 = pwVar4 + 1;
      wVar1 = *pwVar4;
    }
    *param_3 = pwVar4;
    iVar3 = _wcsnicmp(_Str1,L"IF",2);
    if ((iVar3 == 0) && (iVar2 == 2)) {
      return 3;
    }
    iVar3 = _wcsnicmp(_Str1,L"IFDEF",5);
    if ((iVar3 == 0) && (iVar2 == 5)) {
      return 4;
    }
    iVar3 = _wcsnicmp(_Str1,L"IFNDEF",6);
    if (iVar3 != 0) {
      return 0;
    }
    if (iVar2 != 6) {
      return 0;
    }
  }
  else {
    iVar2 = _wcsnicmp(param_1,L"ELSEIF",6);
    if ((iVar2 == 0) && (param_2 == 6)) {
      return 3;
    }
    iVar2 = _wcsnicmp(param_1,L"ELSEIFDEF",9);
    if ((iVar2 == 0) && (param_2 == 9)) {
      return 4;
    }
    iVar2 = _wcsnicmp(param_1,L"ELSEIFNDEF",10);
    if ((iVar2 != 0) || (param_2 != 10)) {
      iVar2 = _wcsnicmp(param_1,L"ENDIF",5);
      if (iVar2 != 0) {
        return 0;
      }
      if (param_2 == 5) {
        return 8;
      }
      return 0;
    }
  }
  return 5;
}



void __fastcall FUN_00408646(wchar_t *param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  wint_t wVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  wchar_t *extraout_ECX;
  char extraout_DL;
  bool bVar7;
  
  pwVar4 = DAT_00411024;
  switch(param_2) {
  case '\x01':
  case '\x06':
  case '\a':
    if (DAT_00411024 == (wchar_t *)0xf) {
      param_1 = (wchar_t *)0x3fb;
      break;
    }
    goto LAB_00408675;
  case '\x02':
    if ((-1 < (int)DAT_00411024) && (bVar2 = *(byte *)(DAT_00411024 + 0x218f80), (bVar2 & 9) != 0))
    {
      *(byte *)(DAT_00411024 + 0x218f80) = bVar2 & 0xf6;
      if ((bVar2 & 4) != 0) goto LAB_0040878f;
      if ((bVar2 & 2) == 0) {
        bVar2 = bVar2 & 0xf6 | 2;
      }
      else {
        bVar2 = bVar2 & 0xf4;
      }
      *(byte *)(pwVar4 + 0x218f80) = bVar2;
LAB_004086e5:
      if ((bVar2 & 2) != 0) {
        return;
      }
      goto LAB_0040878f;
    }
LAB_004086e9:
    param_1 = (wchar_t *)0x3fd;
    break;
  case '\x03':
  case '\x04':
  case '\x05':
    if (((int)DAT_00411024 < 0) || (bVar2 = *(byte *)(DAT_00411024 + 0x218f80), (bVar2 & 9) == 0))
    goto LAB_004086e9;
    *(byte *)(DAT_00411024 + 0x218f80) = bVar2 & 0xfe | 8;
    if ((bVar2 & 4) != 0) goto LAB_0040878f;
    if ((bVar2 & 2) != 0) {
      *(byte *)(pwVar4 + 0x218f80) = bVar2 & 0xfc | 0xc;
      goto LAB_0040878f;
    }
    goto LAB_0040869c;
  case '\b':
    if (-1 < (int)DAT_00411024) {
      pwVar5 = (wchar_t *)((int)DAT_00411024 + -1);
      if ((int)pwVar5 < 0) {
        DAT_00411024 = pwVar5;
        return;
      }
      bVar2 = *(byte *)((int)DAT_00411024 + 0x431eff);
      pwVar4 = param_1;
      DAT_00411024 = pwVar5;
      goto LAB_004086e5;
    }
    param_1 = (wchar_t *)0x401;
    break;
  default:
    goto switchD_00408652_caseD_8;
  }
  pwVar4 = (wchar_t *)FUN_004053f6(DAT_004216a4,(uint)param_1);
  param_2 = extraout_DL;
LAB_00408675:
  DAT_00411024 = (wchar_t *)((int)pwVar4 + 1);
  bVar7 = DAT_00411024 == (wchar_t *)0x0;
  *(undefined *)((int)pwVar4 + 0x431f01) = 1;
  if ((bVar7) || ((*(byte *)(pwVar4 + 0x218f80) & 2) != 0)) {
LAB_0040869c:
    cVar1 = FUN_0040d9a7(param_1,param_2);
    pwVar4 = extraout_ECX;
    if (cVar1 != '\0') {
      *(byte *)(DAT_00411024 + 0x218f80) = *(byte *)(DAT_00411024 + 0x218f80) | 2;
switchD_00408652_caseD_8:
      return;
    }
  }
  else {
    *(undefined *)((int)pwVar4 + 0x431f01) = 5;
    pwVar4 = param_1;
  }
LAB_0040878f:
  do {
    wVar3 = getwc(DAT_00421edc);
    if (wVar3 != 0x21) {
      do {
        if (wVar3 == 0xffff) goto LAB_00408871;
        DAT_004216a4 = DAT_004216a4 + 1;
        while( true ) {
          if (wVar3 == 0x5c) {
            uVar6 = FUN_00409d15(0x5c,'\x01');
            wVar3 = (wint_t)uVar6;
            if ((wVar3 == 0x21) && (DAT_00411021 != '\0')) goto LAB_0040882e;
            DAT_00411021 = '\0';
          }
          if (wVar3 == 0x23) goto LAB_00408800;
          if (wVar3 == 10) break;
          if (wVar3 == 0xffff) goto LAB_00408829;
          wVar3 = getwc(DAT_00421edc);
        }
LAB_00408814:
        wVar3 = getwc(DAT_00421edc);
      } while (wVar3 != 0x21);
LAB_00408829:
      if (wVar3 != 0x21) {
        if (wVar3 == 0xffff) {
LAB_00408871:
          FUN_004053f6(DAT_004216a4,0x3fc);
        }
        return;
      }
    }
LAB_0040882e:
    if ((DAT_00431ef8 != (wchar_t *)0x0) && (DAT_00431ef8 != DAT_00431efc)) {
      free(DAT_00431ef8);
    }
    DAT_00431ef8 = (wchar_t *)FUN_00408046();
    FUN_00408182(DAT_00431ef8,&stack0xfffffffb);
    if ((byte)((uint)pwVar4 >> 0x18) < 9) {
      return;
    }
    DAT_004216a4 = DAT_004216a4 + 1;
  } while( true );
LAB_00408800:
  wVar3 = getwc(DAT_00421edc);
  if (wVar3 == 10) goto LAB_00408814;
  if (wVar3 == 0xffff) goto LAB_00408829;
  goto LAB_00408800;
}



uint FUN_00408888(void)

{
  wchar_t wVar1;
  bool bVar2;
  wchar_t *pwVar3;
  uint uVar4;
  wchar_t *pwVar5;
  int iVar6;
  wchar_t *local_8;
  
  DAT_004216a4 = 0;
  do {
    bVar2 = false;
    pwVar3 = fgetws(&DAT_004216c0,0x400,DAT_00421edc);
    if (pwVar3 == (wchar_t *)0x0) {
      uVar4 = feof(DAT_00421edc);
      if (uVar4 == 0) {
        DAT_004216b0 = DAT_004216a4;
        uVar4 = FUN_004053f6(0,0x41d);
      }
      return uVar4 & 0xffffff00;
    }
    if (DAT_004216c0 == 0x5b) {
      local_8 = (wchar_t *)0x0;
      pwVar3 = &DAT_004216c2;
      while ((pwVar3 = wcstok_s(pwVar3,L" \t\n",&local_8), pwVar3 != (wchar_t *)0x0 && (!bVar2))) {
        pwVar5 = pwVar3;
        do {
          wVar1 = *pwVar5;
          pwVar5 = pwVar5 + 1;
        } while (wVar1 != L'\0');
        iVar6 = (int)pwVar5 - (int)(pwVar3 + 1) >> 1;
        if (pwVar3[iVar6 + -1] == L']') {
          bVar2 = true;
          pwVar3[iVar6 + -1] = L'\0';
        }
        iVar6 = _wcsicmp(pwVar3,L"nmake");
        if (iVar6 == 0) {
          return 1;
        }
        pwVar3 = (wchar_t *)0x0;
      }
    }
    DAT_004216a4 = DAT_004216a4 + 1;
  } while( true );
}



void FUN_00408971(void)

{
  undefined4 uVar1;
  int iVar2;
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_00411014 ^ (uint)&stack0xfffffffc;
  _wsearchenv(L"tools.ini",L"INIT",local_210);
  if (local_210[0] != L'\0') {
    DAT_00421edc = (int)_wfsopen(local_210,L"rt,ccs=unicode",0x20);
    if ((FILE *)DAT_00421edc == (FILE *)0x0) {
      FUN_004053f6(0,0x41d);
    }
    uVar1 = FUN_00408888();
    if (((char)uVar1 == '\0') && (iVar2 = fclose((FILE *)DAT_00421edc), iVar2 == -1)) {
      FUN_004053f6(0,0x424);
    }
  }
  FUN_00410365(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



wchar_t * __fastcall FUN_00408a23(wchar_t *param_1,int param_2)

{
  wchar_t *pwVar1;
  FILE *_File;
  wchar_t _Ch;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar1 = param_1 + param_2;
  pwVar3 = param_1;
  while( true ) {
    _Ch = FUN_00407e9d(param_1);
    if (_Ch == L'\0') {
      return pwVar3;
    }
    param_1 = (wchar_t *)0xffff;
    if (_Ch == L'\xffff') {
      *pwVar3 = L'\0';
      return (wchar_t *)0x0;
    }
    *pwVar3 = _Ch;
    _File = DAT_00421edc;
    pwVar2 = pwVar3 + 1;
    if (pwVar2 == pwVar1) {
      *pwVar3 = L'\0';
      ungetwc(_Ch,_File);
      return pwVar2;
    }
    if (_Ch == L'\n') break;
    DAT_00411021 = 0;
    pwVar3 = pwVar2;
  }
  DAT_004216a4 = DAT_004216a4 + 1;
  DAT_00411021 = 1;
  *pwVar2 = L'\0';
  return pwVar2;
}



void __fastcall FUN_00408a91(wchar_t *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  pwVar3 = param_1;
  while( true ) {
    pwVar3 = wcschr(pwVar3,L'\n');
    if ((pwVar3 == (wchar_t *)0x0) || ((param_1 < pwVar3 && (pwVar3[-1] != L'^')))) break;
    pwVar3 = pwVar3 + 1;
    pwVar1 = fgetws(pwVar3,0x400 - ((int)pwVar3 - (int)param_1 >> 1),DAT_00421edc);
    if (pwVar1 == (wchar_t *)0x0) {
      iVar2 = feof(DAT_00421edc);
      if (iVar2 != 0) {
        FUN_004053f6(DAT_004216a4,0x409);
      }
      FUN_004053f6(DAT_004216a4,0x41d);
    }
    DAT_004216a4 = DAT_004216a4 + 1;
  }
  return;
}



undefined2 * __fastcall FUN_00408b25(wchar_t **param_1)

{
  wchar_t wVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *_Str;
  wchar_t *pwVar4;
  
  pwVar4 = &DAT_00432400;
  bVar2 = false;
  _Str = *param_1;
  do {
    pwVar3 = wcschr(_Str,L'<');
    if (pwVar3 == (wchar_t *)0x0) {
      return (undefined2 *)0x0;
    }
    _Str = pwVar3 + 1;
  } while (*_Str != L'<');
  pwVar3 = pwVar3 + 2;
  wVar1 = *pwVar3;
  while (((((wVar1 != L'\0' && (wVar1 != L'>')) && (wVar1 != L'<')) &&
          ((wVar1 != L'^' && (wVar1 != L',')))) && ((wVar1 != L'\t' && (wVar1 != L'\n'))))) {
    if (wVar1 == L'\"') {
      bVar2 = !bVar2;
LAB_00408b9e:
      *pwVar4 = wVar1;
      pwVar4 = pwVar4 + 1;
      pwVar3 = pwVar3 + 1;
      wVar1 = *pwVar3;
    }
    else {
      if ((wVar1 == L' ') && (!bVar2)) break;
      if ((wVar1 != L'$') || (pwVar3[1] != L'(')) goto LAB_00408b9e;
      *pwVar4 = L'$';
      pwVar3 = pwVar3 + 1;
      pwVar4 = pwVar4 + 1;
      *pwVar4 = L'(';
      wVar1 = *pwVar3;
      while( true ) {
        if (wVar1 == L'\n') goto LAB_00408bb5;
        if (wVar1 == L')') break;
        pwVar3 = pwVar3 + 1;
        *pwVar4 = wVar1;
        pwVar4 = pwVar4 + 1;
        wVar1 = *pwVar3;
      }
      wVar1 = L')';
    }
  }
LAB_00408bb5:
  *pwVar4 = L'\0';
  *param_1 = pwVar3;
  return &DAT_00432400;
}



void __fastcall FUN_00408c27(wchar_t *param_1,void **param_2,wchar_t **param_3)

{
  uint uVar1;
  int ***pppiVar2;
  int ***pppiVar3;
  wchar_t *pwVar4;
  int iVar5;
  int **ppiVar6;
  int *piVar7;
  short *psVar8;
  void *pvVar9;
  wchar_t *pwVar10;
  wchar_t wVar11;
  void *local_824;
  uint local_820;
  wchar_t *local_81c;
  void *local_818;
  char local_811;
  wchar_t local_810;
  wchar_t local_80e [1025];
  uint local_c;
  
  local_c = DAT_00411014 ^ (uint)&stack0xfffffffc;
  local_824 = (void *)0x0;
  local_820 = 0;
  local_811 = '\0';
  local_818 = (void *)0x0;
  wcscpy_s(&local_810,0x400,L"<<");
  pwVar4 = FUN_00408a23(local_80e + 1,0x3fe);
  if (pwVar4 == (wchar_t *)0x0) {
    iVar5 = feof(DAT_00421edc);
    if (iVar5 != 0) {
      FUN_004053f6(DAT_004216a4,0x409);
    }
    FUN_004053f6(DAT_004216a4,0x41d);
  }
  local_81c = &local_810;
  FUN_00408a91(local_81c);
  while (psVar8 = FUN_00408b25(&local_81c), psVar8 != (short *)0x0) {
    ppiVar6 = (int **)FUN_0040ac61(0xc);
    piVar7 = (int *)FUN_0040e267(psVar8);
    ppiVar6[1] = piVar7;
    pppiVar2 = &DAT_00432320;
    for (pppiVar3 = (int ***)DAT_00432320; pppiVar3 != (int ***)0x0; pppiVar3 = (int ***)*pppiVar3)
    {
      pppiVar2 = pppiVar3;
    }
    *pppiVar2 = ppiVar6;
  }
  if (DAT_00432320 != (int **)0x0) {
    local_81c = (wchar_t *)wcsncpy_s_exref;
    do {
      while( true ) {
        pwVar4 = &local_810;
        wVar11 = local_810;
        do {
          pwVar4 = pwVar4 + 1;
          *param_1 = wVar11;
          param_1 = param_1 + 1;
          if (param_1 == *param_3) {
            if (local_818 == (void *)0x0) {
              pvVar9 = FUN_0040ac3c(0x1000);
              local_818 = pvVar9;
              (*(code *)local_81c)(pvVar9,0x800,*param_2,0x400);
              param_1 = (wchar_t *)((int)pvVar9 + 0x800);
              local_820 = 0x800;
              pwVar10 = (wchar_t *)((int)pvVar9 + 0x1000);
            }
            else {
              uVar1 = local_820 + 0x400;
              if ((uVar1 < local_820) ||
                 (local_824 = FUN_0040ac7f(local_818,local_820 * 2 + 0x800),
                 local_824 == (void *)0x0)) {
                FUN_004053f6(DAT_004216a4,0x419);
              }
              param_1 = (wchar_t *)((int)local_824 + local_820 * 2);
              pwVar10 = (wchar_t *)((int)local_824 + uVar1 * 2);
              pvVar9 = local_824;
              local_820 = uVar1;
              local_818 = local_824;
            }
            *param_3 = pwVar10;
            *param_2 = pvVar9;
          }
          wVar11 = *pwVar4;
        } while (wVar11 != L'\0');
        if (((local_811 != '\0') && (local_810 == L'<')) && (local_80e[0] == L'<')) break;
        local_811 = '\x01';
        pwVar4 = FUN_00408a23(&local_810,0x400);
        if (pwVar4 == (wchar_t *)0x0) {
          iVar5 = feof(DAT_00421edc);
          if (iVar5 != 0) {
            FUN_004053f6(DAT_004216a4,0x409);
          }
          FUN_004053f6(DAT_004216a4,0x41d);
        }
      }
      if ((*DAT_00432320 != (int *)0x0) &&
         (pwVar4 = FUN_00408a23(&local_810,0x400), pwVar4 == (wchar_t *)0x0)) {
        iVar5 = feof(DAT_00421edc);
        if (iVar5 != 0) {
          FUN_004053f6(DAT_004216a4,0x409);
        }
        FUN_004053f6(DAT_004216a4,0x41d);
      }
      DAT_00432320 = (int **)*DAT_00432320;
    } while (DAT_00432320 != (int **)0x0);
  }
  *param_1 = L'\0';
  FUN_00410365(local_c ^ (uint)&stack0xfffffffc);
  return;
}



// WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe
// WARNING: Unable to track spacebase fully for stack

void __fastcall FUN_00408f3e(short **param_1,short *param_2)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  short sVar4;
  short *psVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uStack_34;
  wchar_t *pwStack_30;
  rsize_t rStack_2c;
  wchar_t *pwStack_28;
  short **local_14;
  int local_10;
  short *local_c;
  uint local_8;
  
  local_8 = DAT_00411014 ^ (uint)&stack0xfffffffc;
  psVar3 = *param_1;
  psVar2 = psVar3;
  do {
    sVar4 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar4 != 0);
  psVar5 = param_2;
  do {
    sVar4 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar4 != 0);
  iVar8 = ((int)psVar2 - (int)(psVar3 + 1) >> 1) + ((int)psVar5 - (int)(param_2 + 1) >> 1) + -1;
  pwStack_28 = (wchar_t *)0x408f93;
  iVar1 = iVar8 * -2;
  psVar2 = (short *)(&stack0xffffffdc + iVar1);
  psVar5 = (short *)(&stack0xffffffdc + iVar1);
  local_14 = param_1;
  local_10 = iVar8;
  local_c = param_2;
  *(undefined4 *)((int)&pwStack_28 + iVar1) = 0x3c;
  uVar7 = *(undefined4 *)((int)&pwStack_28 + iVar1);
  while( true ) {
    sVar6 = (short)uVar7;
    sVar4 = *psVar3;
    if ((*psVar3 == sVar6) && (sVar4 = sVar6, psVar3[1] == sVar6)) break;
    *psVar2 = sVar4;
    psVar3 = psVar3 + 1;
    psVar2 = psVar2 + 1;
  }
  *(short **)((int)&pwStack_28 + iVar1) = local_c;
  *(int *)((int)&rStack_2c + iVar1) = iVar8;
  *(undefined **)((int)&pwStack_30 + iVar1) = &stack0xffffffdc + iVar1;
  *psVar2 = 0;
  *(undefined4 *)((int)&uStack_34 + iVar1) = 0x408fc7;
  wcscat_s(*(wchar_t **)((int)&pwStack_30 + iVar1),*(rsize_t *)((int)&rStack_2c + iVar1),
           *(wchar_t **)((int)&pwStack_28 + iVar1));
  *(short **)((int)&pwStack_28 + iVar1) = psVar3 + 2;
  *(int *)((int)&rStack_2c + iVar1) = local_10;
  *(undefined **)((int)&pwStack_30 + iVar1) = &stack0xffffffdc + iVar1;
  *(undefined4 *)((int)&uStack_34 + iVar1) = 0x408fd4;
  wcscat_s(*(wchar_t **)((int)&pwStack_30 + iVar1),*(rsize_t *)((int)&rStack_2c + iVar1),
           *(wchar_t **)((int)&pwStack_28 + iVar1));
  do {
    sVar4 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar4 != 0);
  iVar8 = ((int)psVar5 - (int)(&stack0xffffffde + iVar1) >> 1) + 1;
  psVar3 = *local_14;
  *(undefined4 *)((int)&pwStack_28 + iVar1) = 0x408ffb;
  psVar3 = (short *)FUN_0040ac7f(psVar3,iVar8 * 2);
  *(undefined **)((int)&pwStack_28 + iVar1) = &stack0xffffffdc + iVar1;
  *(int *)((int)&rStack_2c + iVar1) = iVar8;
  *(short **)((int)&pwStack_30 + iVar1) = psVar3;
  *local_14 = psVar3;
  *(undefined4 *)((int)&uStack_34 + iVar1) = 0x409006;
  wcscpy_s(*(wchar_t **)((int)&pwStack_30 + iVar1),*(rsize_t *)((int)&rStack_2c + iVar1),
           *(wchar_t **)((int)&pwStack_28 + iVar1));
  FUN_00410365(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __fastcall
FUN_0040901b(wchar_t *param_1,short *param_2,char param_3,undefined param_4,undefined param_5,
            undefined param_6,undefined param_7,undefined param_8,undefined param_9,
            undefined param_10,undefined1 param_11)

{
  short sVar1;
  wchar_t wVar2;
  wint_t _C;
  code *pcVar3;
  short *psVar4;
  undefined uVar5;
  int iVar6;
  uint _MaxCount;
  int iVar7;
  wchar_t *pwVar8;
  short *psVar9;
  int iVar10;
  short *local_c;
  
  wVar2 = *param_1;
  pwVar8 = param_1;
  while( true ) {
    if (wVar2 == L'\0') {
      uVar5 = 0xc0;
      if (param_3 == '\0') {
        uVar5 = 0x6c;
      }
      FUN_0040c7c7(L"\techo. %s %s\n",uVar5);
      return;
    }
    iVar6 = iswspace(wVar2);
    if (iVar6 == 0) break;
    pwVar8 = pwVar8 + 1;
    wVar2 = *pwVar8;
  }
  psVar4 = param_2 + 1;
  do {
    sVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (sVar1 != 0);
  _MaxCount = 0x3f4 - ((int)param_2 - (int)psVar4 >> 1);
  wVar2 = *param_1;
  while( true ) {
    if (wVar2 == L'\0') {
      return;
    }
    wcsncpy_s(&DAT_00435660,0x400,param_1,_MaxCount);
    psVar4 = &DAT_00435660;
    do {
      psVar9 = psVar4;
      psVar4 = psVar9 + 1;
    } while (*psVar9 != 0);
    iVar6 = (int)(psVar9 + -0x21ab30) >> 1;
    pwVar8 = param_1;
    do {
      wVar2 = *pwVar8;
      pwVar8 = pwVar8 + 1;
    } while (wVar2 != L'\0');
    if ((_MaxCount < (uint)((int)pwVar8 - (int)(param_1 + 1) >> 1)) &&
       (local_c = &DAT_00435660, DAT_00435660 != 0)) {
      iVar10 = 0;
      _C = DAT_00435660;
      do {
        iVar7 = iswspace(_C);
        if (iVar7 != 0) {
          iVar6 = (iVar10 >> 1) + 1;
        }
        iVar10 = iVar10 + 2;
        local_c = local_c + 1;
        _C = *local_c;
      } while (_C != 0);
    }
    if (0x7ff < (uint)(iVar6 * 2)) break;
    (&DAT_00435660)[iVar6] = 0;
    FUN_0040c7c7(L"\techo %s %s %s\n",0x60);
    param_1 = param_1 + iVar6;
    wVar2 = *param_1;
  }
  FUN_00410495();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



void __fastcall
FUN_0040918c(FILE *param_1,short *param_2,wchar_t **param_3,char param_4,undefined *param_5)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  int iVar4;
  size_t _Size;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  LPCWSTR lpWideCharStr;
  undefined4 unaff_EDI;
  undefined in_stack_ffffffe4;
  wchar_t *in_stack_ffffffe8;
  wchar_t *in_stack_ffffffec;
  short *psVar5;
  
  psVar5 = param_2;
  pwVar2 = wcsstr(*param_3,L"<<");
  bVar1 = false;
  if ((pwVar2 != (wchar_t *)0x0) && ((pwVar2 == *param_3 || (pwVar2[-1] == L'\n')))) {
    pwVar3 = wcschr(pwVar2 + 2,L'\n');
    if (pwVar3 != (wchar_t *)0x0) {
      *pwVar3 = L'\0';
    }
    in_stack_ffffffe8 = (wchar_t *)FUN_0040e267(pwVar2 + 2);
    if (pwVar3 != (wchar_t *)0x0) {
      *pwVar3 = L'\n';
    }
    in_stack_ffffffec = (wchar_t *)0x0;
    pwVar2 = wcstok_s(in_stack_ffffffe8,L", \t",(wchar_t **)&stack0xffffffec);
    param_2 = psVar5;
    while (pwVar2 != (wchar_t *)0x0) {
      iVar4 = _wcsicmp(pwVar2,L"keep");
      if (iVar4 == 0) {
        *param_5 = 1;
      }
      else {
        iVar4 = _wcsicmp(pwVar2,L"nokeep");
        if (iVar4 == 0) {
          *param_5 = 0;
        }
        else {
          iVar4 = _wcsicmp(pwVar2,L"unicode");
          if (iVar4 == 0) {
            bVar1 = true;
          }
          else {
            FUN_004053f6(DAT_004216a4,0x446);
          }
        }
      }
      pwVar2 = wcstok_s((wchar_t *)0x0,L", \t",(wchar_t **)&stack0xffffffec);
    }
    free(in_stack_ffffffe8);
    psVar5 = param_2;
    if (bVar1) {
      fwrite(&DAT_00401938,2,1,param_1);
      psVar5 = param_2;
    }
  }
  iVar4 = wcsncmp(*param_3,L"<<",2);
  if (iVar4 != 0) {
    param_5 = (undefined *)((uint)param_5 & 0xffffff00);
    do {
      pwVar2 = wcschr(*param_3,L'\n');
      if (pwVar2 == (wchar_t *)0x0) {
        return;
      }
      if (param_4 != '\0') {
        pwVar3 = *param_3;
        *pwVar2 = L'\0';
        FUN_0040901b(pwVar3,param_2,(char)param_5,(char)unaff_EDI,(char)unaff_ESI,(char)unaff_EBX,
                     in_stack_ffffffe4,(CHAR)in_stack_ffffffe8,(char)in_stack_ffffffec,(char)psVar5,
                     (char)((uint)param_5 >> 0x18));
        *pwVar2 = L'\n';
      }
      param_2 = psVar5;
      lpWideCharStr = *param_3;
      if (bVar1) {
        fwrite(lpWideCharStr,(int)pwVar2 - (int)lpWideCharStr >> 1,2,param_1);
        fwrite(&DAT_00401934,4,1,param_1);
      }
      else {
        for (; lpWideCharStr < pwVar2; lpWideCharStr = lpWideCharStr + 1) {
          _Size = WideCharToMultiByte(0,0,lpWideCharStr,1,&stack0xffffffe8,4,(LPCSTR)0x0,(LPBOOL)0x0
                                     );
          if (_Size != 0) {
            fwrite(&stack0xffffffe8,_Size,1,param_1);
          }
        }
        fwrite(&DAT_00401930,2,1,param_1);
      }
      param_5 = (undefined *)CONCAT31(param_5._1_3_,1);
      *param_3 = pwVar2 + 1;
      iVar4 = wcsncmp(pwVar2 + 1,L"<<",2);
      psVar5 = param_2;
    } while (iVar4 != 0);
  }
  *param_3 = *param_3 + 2;
  return;
}



void __fastcall FUN_004093b0(wchar_t *param_1,wchar_t **param_2,int **param_3,char param_4)

{
  wchar_t wVar1;
  short sVar2;
  code *pcVar3;
  int **ppiVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  int **_Memory;
  short *psVar7;
  errno_t eVar8;
  UINT UVar9;
  wchar_t *pwVar10;
  undefined4 *puVar11;
  void *pvVar12;
  int **ppiVar13;
  int iVar14;
  size_t local_434;
  wchar_t *local_430;
  wchar_t *local_42c;
  FILE *local_428;
  int **local_424;
  char local_41d;
  WCHAR local_41c [260];
  wchar_t local_214 [262];
  uint local_8;
  
  local_8 = DAT_00411014 ^ (uint)&stack0xfffffffc;
  local_424 = param_3;
  pwVar5 = wcschr(param_1,L'\n');
  if (pwVar5 == (wchar_t *)0x0) {
    pwVar5 = (wchar_t *)FUN_0040e267(param_1);
    *param_2 = pwVar5;
  }
  else {
    *pwVar5 = L'\0';
    pwVar6 = (wchar_t *)FUN_0040ec83(param_1,-1,local_424);
    *param_2 = pwVar6;
    *pwVar5 = L'\n';
    local_430 = *param_2;
    if (local_430 == param_1) {
      local_430 = (wchar_t *)FUN_0040e267(param_1);
      *param_2 = local_430;
    }
    _Memory = (int **)FUN_0040ec83(pwVar5 + 1,-1,local_424);
    local_424 = _Memory;
    psVar7 = FUN_00408b25(&local_430);
    while (psVar7 != (short *)0x0) {
      local_41d = '\0';
      pwVar6 = (wchar_t *)FUN_0040e267(psVar7);
      local_42c = pwVar6;
      if (*pwVar6 == L'\0') {
        local_434 = 0;
        eVar8 = _wgetenv_s(&local_434,local_214,0x103,L"TMP");
        if ((eVar8 != 0) || (local_434 == 0)) {
          wcscpy_s(local_214,0x103,L".");
        }
        local_428 = (FILE *)0x0;
        UVar9 = GetTempFileNameW(local_214,L"nm",0,local_41c);
        if (UVar9 != 0) {
          wcscpy_s(local_214,0x103,local_41c);
          local_428 = _wfsopen(local_214,L"wb",0x20);
        }
        if (local_428 == (FILE *)0x0) {
          FUN_004053f6(DAT_004216a4,0x41e);
        }
        pwVar10 = wcschr(local_214,L' ');
        if ((pwVar10 != (wchar_t *)0x0) &&
           (pwVar10 = wcschr(local_214,L'\"'), pwVar10 == (wchar_t *)0x0)) {
          pwVar6 = local_214;
          do {
            wVar1 = *pwVar6;
            pwVar6 = pwVar6 + 1;
          } while (wVar1 != L'\0');
          iVar14 = (int)pwVar6 - (int)(local_214 + 1) >> 1;
          memmove(local_214 + 1,local_214,iVar14 * 2);
          local_214[0] = L'\"';
          local_214[iVar14 + 1] = L'\"';
          if (0x205 < iVar14 * 2 + 4U) {
            FUN_00410495();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_214[iVar14 + 2] = L'\0';
          pwVar6 = local_42c;
        }
        FUN_00408f3e(param_2,local_214);
        free(pwVar6);
        local_42c = (wchar_t *)FUN_0040e267(local_214);
        pwVar6 = local_42c;
      }
      else {
        local_428 = (FILE *)FUN_0040ffc6(pwVar6,L"wb");
        if (local_428 == (FILE *)0x0) {
          FUN_004053f6(DAT_004216a4,0x41e);
        }
        else {
          pwVar10 = wcschr(*param_2,L'<');
          pwVar6 = pwVar10 + 1;
          wVar1 = *pwVar6;
          while (wVar1 != L'<') {
            pwVar10 = wcschr(pwVar6,L'<');
            pwVar6 = pwVar10 + 1;
            wVar1 = *pwVar6;
          }
          local_430 = pwVar10 + 3;
          pwVar6 = pwVar10 + 2;
          do {
            wVar1 = *pwVar6;
            pwVar6 = pwVar6 + 1;
          } while (wVar1 != L'\0');
          memmove(pwVar10,pwVar10 + 2,((int)pwVar6 - (int)local_430 >> 1) * 2 + 2);
          pwVar6 = local_42c;
        }
      }
      local_430 = *param_2;
      FUN_0040918c(local_428,pwVar6,(wchar_t **)&local_424,param_4,&local_41d);
      ppiVar4 = local_424;
      pwVar6 = wcschr((wchar_t *)local_424,L'\n');
      if (pwVar6 == (wchar_t *)0x0) {
        ppiVar13 = ppiVar4;
        do {
          sVar2 = *(short *)ppiVar13;
          ppiVar13 = (int **)((int)ppiVar13 + 2);
        } while (sVar2 != 0);
        local_424 = (int **)((int)ppiVar4 + ((int)ppiVar13 - ((int)ppiVar4 + 2) >> 1) * 2);
      }
      else {
        local_424 = (int **)(pwVar6 + 1);
      }
      fclose(local_428);
      if (local_41d == '\0') {
        puVar11 = FUN_0040e215();
        pvVar12 = FUN_0040e267(local_42c);
        puVar11[1] = pvVar12;
        FUN_0040e36c(&DAT_004323f4,puVar11);
      }
      free(local_42c);
      psVar7 = FUN_00408b25(&local_430);
    }
    if (_Memory != (int **)(pwVar5 + 1)) {
      free(_Memory);
    }
  }
  FUN_00410365(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void FUN_004097a9(void)

{
  int iVar1;
  
  iVar1 = fclose(DAT_00421edc);
  if (iVar1 == 0xffff) {
    FUN_004053f6(0,0x424);
  }
  free(DAT_00421ee4);
  DAT_00432324 = DAT_00432324 + -1;
  DAT_00421edc = (FILE *)*(undefined4 *)(&DAT_00432338 + DAT_00432324 * 0xc);
  DAT_00421ee4 = (void *)(&DAT_00432334)[DAT_00432324 * 3];
  DAT_004216a4 = *(undefined4 *)(&DAT_00432330 + DAT_00432324 * 0xc);
  return;
}



void __fastcall FUN_00409811(char param_1)

{
  wint_t wVar1;
  undefined3 in_register_00000005;
  wchar_t *pwVar2;
  wchar_t *extraout_ECX;
  
  pwVar2 = (wchar_t *)CONCAT31(in_register_00000005,param_1);
  while( true ) {
    DAT_00411021 = 0;
    do {
      if (param_1 == '\0') {
        wVar1 = FUN_00407e9d(pwVar2);
      }
      else {
        wVar1 = getwc((FILE *)DAT_00421edc);
      }
      pwVar2 = (wchar_t *)0xffff;
      if (wVar1 == 0xffff) {
        return;
      }
    } while (wVar1 != 10);
    DAT_00411021 = 1;
    if (param_1 == '\0') {
      wVar1 = FUN_00407e9d((wchar_t *)0xffff);
      pwVar2 = extraout_ECX;
    }
    else {
      pwVar2 = DAT_00421edc;
      wVar1 = getwc((FILE *)DAT_00421edc);
    }
    if (((wVar1 != 0x3b) || (DAT_00421ee1 == '\0')) && (wVar1 != 0x23)) break;
    DAT_004216a4 = DAT_004216a4 + 1;
  }
  ungetwc(wVar1,(FILE *)DAT_00421edc);
  return;
}



void __fastcall FUN_00409896(short param_1)

{
  code *pcVar1;
  short *psVar2;
  wchar_t *pwVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  
  if ((param_1 == 10) || (param_1 == -1)) {
    FUN_004053f6(DAT_004216a4,0x407);
  }
  DAT_004216c0 = param_1;
  pwVar3 = fgetws(&DAT_004216c2,0x3ff,DAT_00421edc);
  if (pwVar3 == (wchar_t *)0x0) {
    iVar4 = feof(DAT_00421edc);
    if (iVar4 != 0) {
      FUN_004053f6(DAT_004216a4,0x409);
    }
    FUN_004053f6(DAT_004216a4,0x41d);
  }
  psVar5 = &DAT_004216c0;
  psVar2 = &DAT_004216c0;
  do {
    psVar6 = psVar2;
    psVar2 = psVar6 + 1;
  } while (*psVar6 != 0);
  iVar4 = ((int)(psVar6 + -0x210b60) >> 1) * 2;
  if (*(short *)((int)&DAT_004216bc + iVar4 + 2) == 10) {
    if (0x7ff < iVar4 - 2U) {
      FUN_00410495();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined2 *)((int)&DAT_004216bc + iVar4 + 2) = 0;
  }
  for (; (*psVar5 == L' ' || (*psVar5 == L'\t')); psVar5 = psVar5 + 1) {
  }
  FUN_0040a618(psVar5);
  return;
}



undefined __fastcall FUN_0040997a(wchar_t *param_1,undefined2 *param_2,wchar_t *param_3)

{
  undefined uVar1;
  wint_t wVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  wchar_t *extraout_ECX;
  wchar_t *extraout_ECX_00;
  
  do {
    uVar3 = (uint)param_1 & 0xffff;
    if (uVar3 != 10) {
      if (uVar3 != 0x3a) {
        if (uVar3 == 0x3b) {
          DAT_00411021 = '\0';
          return 0x13;
        }
        if (uVar3 == 0x3d) {
          DAT_00411021 = '\0';
          return 0x16;
        }
        if (uVar3 == 0x5b) {
          if ((DAT_00421ee1 != '\0') && (DAT_00411021 != '\0')) {
            return 0x17;
          }
        }
        else if (uVar3 != 0x5e) {
          if (uVar3 != 0xffff) goto LAB_00409ad1;
          iVar4 = feof(DAT_00421edc);
          if (iVar4 == 0) {
            FUN_004053f6(DAT_004216a4,0x40e);
          }
          if (DAT_00432324 == 0) {
            if (DAT_00411024 < 0) {
              return 0x17;
            }
            param_1 = (wchar_t *)0x3fc;
            FUN_004053f6(DAT_004216a4,0x3fc);
          }
          else {
            FUN_004097a9();
            param_1 = extraout_ECX;
          }
          goto LAB_00409a29;
        }
        ungetwc((wint_t)param_1,DAT_00421edc);
        param_2 = param_2 + -1;
LAB_00409ad1:
        FUN_0040a375(param_2 + -1,param_3);
        if ((DAT_00411021 == '\0') || (iVar4 = _wcsicmp(&DAT_004216c0,L"include"), iVar4 != 0)) {
          DAT_00411021 = '\0';
        }
        else {
          DAT_00411021 = '\0';
          wVar2 = FUN_00409c3c('\0');
          if ((wVar2 != 0x3a) && (wVar2 != 0x3d)) {
            if (DAT_00421ee1 != '\0') {
              FUN_004053f6(DAT_004216a4,0x409);
            }
            uVar1 = FUN_00409896(wVar2);
            return uVar1;
          }
          ungetwc(wVar2,DAT_00421edc);
        }
        return 0x10;
      }
      DAT_00411021 = '\0';
      wVar2 = FUN_00407e9d(param_1);
      param_1 = (wchar_t *)(uint)wVar2;
      if (wVar2 == 0x3a) {
        *param_2 = 0x3a;
        param_2[1] = 0;
        return 0x15;
      }
      uVar1 = 0x14;
      goto LAB_00409a99;
    }
LAB_00409a29:
    DAT_004216a4 = DAT_004216a4 + 1;
    DAT_00411021 = '\x01';
    wVar2 = FUN_00407e9d(param_1);
    param_1 = (wchar_t *)(uint)wVar2;
    if (((param_1 == (wchar_t *)0x3b) && (DAT_00421ee1 != '\0')) || (param_1 == (wchar_t *)0x23)) {
      FUN_00409811('\0');
      DAT_004216a4 = DAT_004216a4 + 1;
      DAT_00411021 = '\x01';
      wVar2 = FUN_00407e9d(extraout_ECX_00);
      param_1 = (wchar_t *)(uint)wVar2;
    }
    sVar5 = (short)param_1;
    if ((sVar5 == 0x20) || (sVar5 == 9)) {
      DAT_00411021 = '\0';
      return 0x12;
    }
    DAT_00411021 = '\x01';
  } while (sVar5 == -1);
  uVar1 = 0x11;
LAB_00409a99:
  ungetwc((wint_t)param_1,DAT_00421edc);
  return uVar1;
}



char __fastcall FUN_00409b97(wchar_t *param_1,char param_2)

{
  char cVar1;
  wint_t _Ch;
  wchar_t *pwVar2;
  ushort *puVar3;
  
  if (DAT_00421ee2 == '\0') {
    if ((param_2 == '\x18') || (param_2 == '\x19')) {
      FUN_00409dc6((void *)CONCAT31((int3)((uint)param_1 >> 8),param_2),(wchar_t *)&DAT_00421ec0);
      return param_2;
    }
    DAT_004216c0 = FUN_00409c3c('\0');
    pwVar2 = (wchar_t *)(uint)DAT_004216c0;
    puVar3 = &DAT_004216c2;
    DAT_004216c2 = 0;
  }
  else {
    DAT_004216a4 = DAT_004216a4 + 1;
    DAT_00421ee2 = '\0';
    _Ch = FUN_00407e9d(param_1);
    if ((_Ch == 0x20) || (_Ch == 9)) {
      DAT_00411021 = 0;
      return '\x12';
    }
    pwVar2 = (wchar_t *)0xffff;
    DAT_00411021 = 1;
    if (_Ch != 0xffff) {
      ungetwc(_Ch,DAT_00421edc);
      return '\x11';
    }
    puVar3 = &DAT_004216c0;
  }
  cVar1 = FUN_0040997a(pwVar2,puVar3,(wchar_t *)&DAT_00421ec0);
  return cVar1;
}



short __fastcall FUN_00409c3c(char param_1)

{
  ushort uVar1;
  short sVar2;
  wchar_t *pwVar3;
  uint uVar4;
  undefined3 in_register_00000005;
  
  pwVar3 = (wchar_t *)CONCAT31(in_register_00000005,param_1);
  do {
    if (param_1 == '\0') {
      uVar1 = FUN_00407e9d(pwVar3);
    }
    else {
      uVar1 = getwc(DAT_00421edc);
    }
    pwVar3 = (wchar_t *)(uint)uVar1;
    if ((uVar1 == 0x20) || (uVar1 == 9)) {
LAB_00409c9e:
      DAT_00411021 = '\0';
    }
    else if (uVar1 == 0x5e) {
      if (param_1 == '\0') {
        uVar1 = FUN_00407e9d((wchar_t *)0x9);
      }
      else {
        uVar1 = getwc(DAT_00421edc);
      }
      pwVar3 = (wchar_t *)(uint)uVar1;
      if ((uVar1 != 0x20) && (uVar1 != 9)) {
        ungetwc(uVar1,DAT_00421edc);
        return 0x5e;
      }
      goto LAB_00409c9e;
    }
    if ((short)pwVar3 == 0x5c) {
      uVar4 = FUN_00409d15(0x5c,param_1);
      pwVar3 = (wchar_t *)(uVar4 & 0xffff);
    }
    sVar2 = (short)pwVar3;
  } while ((sVar2 == 0x20) || (sVar2 == 9));
  if (pwVar3 == (wchar_t *)0x3b) {
    if (DAT_00411021 == '\0') {
      return sVar2;
    }
    if (DAT_00421ee1 != '\0') goto LAB_00409ced;
  }
  if (sVar2 != 0x23) {
    return sVar2;
  }
LAB_00409ced:
  FUN_00409811(param_1);
  DAT_00411021 = '\x01';
  return 10;
}



undefined4 __fastcall FUN_00409d15(short param_1,char param_2)

{
  wint_t wVar1;
  undefined4 in_EAX;
  undefined2 uVar3;
  uint uVar2;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 in_register_00000006;
  wchar_t *extraout_ECX;
  wchar_t *pwVar4;
  wchar_t *extraout_ECX_00;
  undefined2 extraout_var;
  
  uVar3 = (undefined2)((uint)in_EAX >> 0x10);
  pwVar4 = (wchar_t *)CONCAT22(in_register_00000006,param_1);
  if (param_1 == 0x5c) {
    do {
      if (param_2 == '\0') {
        wVar1 = FUN_00407e9d(pwVar4);
        pwVar4 = extraout_ECX;
      }
      else {
        pwVar4 = DAT_00421edc;
        wVar1 = getwc((FILE *)DAT_00421edc);
      }
      if (wVar1 != 10) {
        ungetwc(wVar1,(FILE *)DAT_00421edc);
        return CONCAT22(extraout_var_03,0x5c);
      }
      DAT_004216a4 = DAT_004216a4 + 1;
      DAT_00411021 = 1;
      if (param_2 == '\0') {
        wVar1 = FUN_00407e9d(pwVar4);
        uVar2 = CONCAT22(extraout_var_00,wVar1);
      }
      else {
        wVar1 = getwc((FILE *)DAT_00421edc);
        uVar2 = CONCAT22(extraout_var,wVar1);
      }
      pwVar4 = (wchar_t *)(uVar2 & 0xffff);
      if ((((short)pwVar4 == 0x3b) && (DAT_00421ee1 != '\0')) || ((short)pwVar4 == 0x23)) {
        FUN_00409811(param_2);
        DAT_004216a4 = DAT_004216a4 + 1;
        if (param_2 == '\0') {
          wVar1 = FUN_00407e9d(extraout_ECX_00);
          uVar2 = CONCAT22(extraout_var_02,wVar1);
        }
        else {
          wVar1 = getwc((FILE *)DAT_00421edc);
          uVar2 = CONCAT22(extraout_var_01,wVar1);
        }
        pwVar4 = (wchar_t *)(uVar2 & 0xffff);
      }
      uVar3 = (undefined2)(uVar2 >> 0x10);
    } while ((short)pwVar4 == 0x5c);
  }
  return CONCAT22(uVar3,(short)pwVar4);
}



void __thiscall FUN_00409dc6(void *this,wchar_t *param_1)

{
  short sVar1;
  wint_t wVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  wchar_t *extraout_ECX;
  wchar_t *extraout_ECX_00;
  wchar_t *extraout_ECX_01;
  wchar_t *extraout_ECX_02;
  char cVar6;
  byte bVar8;
  uint3 uVar9;
  uint uVar7;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  wchar_t *local_20;
  wchar_t *local_1c;
  wchar_t *local_18;
  wchar_t *local_14;
  wchar_t *local_10;
  wchar_t *local_c;
  char local_6;
  char local_5;
  
  local_20 = (wchar_t *)0x0;
  pwVar10 = &DAT_004216c0;
  local_18 = (wchar_t *)0x0;
  pwVar12 = &DAT_004216c0;
  local_5 = '\0';
  local_c = &DAT_004216c0;
  local_1c = &DAT_004216c0;
  local_6 = (char)this;
  wVar2 = FUN_00407e9d((wchar_t *)this);
  local_10 = (wchar_t *)(uint)wVar2;
  local_14 = (wchar_t *)0x20;
  if ((char)this == '\x18') {
    uVar7 = 0x200;
    goto LAB_00409e67;
  }
  if ((wVar2 == 0x20) || (wVar2 == 9)) {
LAB_00409e55:
    sVar1 = 2;
    uVar3 = FUN_00409c3c('\0');
    local_10 = (wchar_t *)(uint)uVar3;
  }
  else {
    if (wVar2 != 0x5e) {
      uVar7 = 0x100;
      goto LAB_00409e67;
    }
    wVar2 = FUN_00407e9d(local_10);
    if ((wVar2 == 0x20) || (wVar2 == 9)) goto LAB_00409e55;
    ungetwc(wVar2,(FILE *)DAT_00421edc);
    local_10 = (wchar_t *)0x5e;
    sVar1 = 1;
  }
  uVar7 = (uint)(ushort)(sVar1 << 8);
LAB_00409e67:
  local_14 = param_1;
  do {
    cVar6 = (char)uVar7;
    if ((short)local_10 == 0x22) {
      local_5 = local_5 == '\0';
LAB_00409fea:
      uVar9 = (uint3)(uVar7 >> 8);
      if ((wchar_t *)0x3c < local_10) {
        if (local_10 < (wchar_t *)0x45) {
          if (local_10 != (wchar_t *)0x44) {
            if (local_10 == (wchar_t *)0x3d) {
              uVar4 = 2;
              goto LAB_0040a0e6;
            }
            if ((local_10 == (wchar_t *)0x3f) || (local_10 == (wchar_t *)0x40)) goto LAB_0040a19f;
            if (local_10 != (wchar_t *)0x42) goto LAB_0040a235;
          }
        }
        else if ((local_10 != (wchar_t *)0x46) && (local_10 != (wchar_t *)0x52)) {
          if (local_10 == (wchar_t *)0x5c) {
            uVar4 = 3;
          }
          else if (local_10 == (wchar_t *)0xffff) {
LAB_0040a248:
            uVar4 = 6;
          }
          else {
LAB_0040a235:
            uVar4 = FUN_00403702((ushort)local_10);
            uVar4 = (uint)(-((char)uVar4 != '\0') & 10);
          }
          goto LAB_0040a0e6;
        }
        uVar4 = 0xd;
        goto LAB_0040a0e6;
      }
      if (local_10 == (wchar_t *)0x3c) {
LAB_0040a19f:
        uVar7 = CONCAT31(uVar9,0xc);
        uVar4 = 0xc;
        if ((local_6 == '\x18') && ((ushort)local_10 == 0x3c)) {
          wVar2 = FUN_00407e9d(local_10);
          if (wVar2 == 0x3c) {
            pwVar10 = (wchar_t *)FUN_00408c27(pwVar10,&local_1c,&param_1);
            uVar7 = CONCAT31(uVar9,6);
            DAT_004216a4 = DAT_004216a4 + -1;
            local_10 = (wchar_t *)0xa;
            local_14 = param_1;
            local_c = local_1c;
            uVar4 = uVar7;
          }
          else {
            ungetwc(wVar2,(FILE *)DAT_00421edc);
            uVar4 = uVar7;
          }
        }
        goto LAB_0040a0e6;
      }
      bVar8 = (byte)(uVar7 >> 8);
      if (local_10 < (wchar_t *)0x29) {
        if (local_10 == (wchar_t *)0x28) {
          uVar4 = 8;
          goto LAB_0040a0e6;
        }
        if (local_10 == (wchar_t *)0x9) {
LAB_0040a04e:
          uVar4 = 5;
          goto LAB_0040a0e6;
        }
        if (local_10 == (wchar_t *)0xa) goto LAB_0040a248;
        if (local_10 == (wchar_t *)0x20) goto LAB_0040a04e;
        if (local_10 != (wchar_t *)0x23) {
          if (local_10 != (wchar_t *)0x24) goto LAB_0040a235;
          uVar4 = 7;
          goto LAB_0040a0e6;
        }
        if (bVar8 == 0) goto LAB_0040a080;
        pwVar13 = local_10;
        pwVar11 = pwVar10;
        if (local_6 != '\x19') {
          bVar8 = (&DAT_004013a1)[(uint)bVar8 * 0xe];
          goto LAB_0040a0f0;
        }
        goto LAB_0040a312;
      }
      if (local_10 == (wchar_t *)0x29) {
        uVar4 = 9;
        goto LAB_0040a0e6;
      }
      if (local_10 == (wchar_t *)0x2a) {
        uVar4 = 0xb;
        goto LAB_0040a0e6;
      }
      if (local_10 == (wchar_t *)0x3a) {
        uVar4 = 4;
        goto LAB_0040a0e6;
      }
      if (local_10 != (wchar_t *)0x3b) goto LAB_0040a235;
      if ((bVar8 != 0) || (DAT_00421ee1 == '\0')) {
        uVar4 = 0;
        goto LAB_0040a0e6;
      }
LAB_0040a080:
      uVar7 = (uint)uVar9 << 8;
      local_5 = '\0';
      FUN_00409811('\0');
      DAT_004216a4 = DAT_004216a4 + 1;
      pwVar13 = extraout_ECX;
    }
    else {
      local_5 = cVar6;
      if ((short)local_10 != 0x5e) goto LAB_00409fea;
      if ((cVar6 != '\0') || (local_6 != '\x19')) {
        wVar2 = FUN_00407e9d(local_10);
        ungetwc(wVar2,(FILE *)DAT_00421edc);
        local_10 = (wchar_t *)0x5e;
        local_5 = cVar6;
        goto LAB_00409fea;
      }
      wVar2 = FUN_00407e9d(local_10);
      pwVar11 = local_18;
      local_10 = (wchar_t *)(uint)wVar2;
      if (local_10 < (wchar_t *)0x2a) {
        if (local_10 == (wchar_t *)0x29) goto LAB_00409f12;
        if (local_10 != (wchar_t *)0xa) {
          local_5 = cVar6;
          if (local_10 != (wchar_t *)0x21) {
            if ((local_10 == (wchar_t *)0x22) || (local_10 == (wchar_t *)0x23)) goto LAB_00409fbc;
            if ((local_10 != (wchar_t *)0x24) && (local_10 != (wchar_t *)0x28)) goto LAB_00409fea;
          }
          goto LAB_00409f12;
        }
      }
      else {
        local_5 = cVar6;
        if ((local_10 != (wchar_t *)0x2d) && (local_10 != (wchar_t *)0x40)) {
          if (local_10 == (wchar_t *)0x5c) goto LAB_00409fbc;
          if (((local_10 != (wchar_t *)0x5e) && (local_10 != (wchar_t *)0x7b)) &&
             (local_10 != (wchar_t *)0x7d)) goto LAB_00409fea;
        }
LAB_00409f12:
        *pwVar10 = L'^';
        pwVar10 = pwVar10 + 1;
        if (pwVar10 == local_14) {
          if (DAT_004216ac == (wchar_t *)0x0) {
            DAT_004216ac = (wchar_t *)FUN_0040ac3c(0x1000);
            wcsncpy_s(DAT_004216ac,0x800,pwVar12,0x400);
            local_18 = (wchar_t *)0x800;
            pwVar10 = DAT_004216ac + 0x400;
            param_1 = DAT_004216ac + 0x800;
          }
          else {
            pwVar12 = local_18 + 0x200;
            if ((pwVar12 < local_18) ||
               (local_20 = (wchar_t *)FUN_0040ac7f(DAT_004216ac,(int)pwVar12 * 2),
               local_20 == (wchar_t *)0x0)) {
              FUN_004053f6(DAT_004216a4,0x419);
            }
            pwVar10 = local_20 + (int)pwVar11;
            param_1 = local_20 + (int)pwVar12;
            DAT_004216ac = local_20;
            local_18 = pwVar12;
          }
          local_c = DAT_004216ac;
          local_1c = DAT_004216ac;
          local_14 = param_1;
        }
      }
LAB_00409fbc:
      uVar4 = 0;
      local_5 = cVar6;
LAB_0040a0e6:
      bVar8 = (&DAT_004013a0)[(uVar4 & 0xff) + (uVar7 >> 8) * 0xe];
LAB_0040a0f0:
      iVar5 = (uint)bVar8 << 8;
      pwVar13 = local_10;
      pwVar11 = pwVar10;
      pwVar12 = local_c;
      if (bVar8 == 0x40) goto LAB_0040a312;
      if ((bVar8 & 0x20) != 0) {
        FUN_004053f6(DAT_004216a4,(bVar8 & 0xdf) + 1000);
        pwVar13 = extraout_ECX_00;
      }
      pwVar11 = local_18;
      if (bVar8 == 0) {
        DAT_004216a4 = DAT_004216a4 + 1;
        pwVar10[-1] = L' ';
        DAT_00411021 = 1;
        local_10 = pwVar10;
        wVar2 = FUN_00407e9d(pwVar13);
        pwVar12 = (wchar_t *)0x20;
        DAT_00411021 = 0;
        if ((wVar2 == 0x20) || (wVar2 == 9)) {
          iVar5 = 0x200;
          do {
            do {
              wVar2 = FUN_00407e9d(pwVar12);
              pwVar12 = extraout_ECX_01;
            } while (wVar2 == 0x20);
            pwVar10 = local_10;
          } while (wVar2 == 9);
        }
        pwVar13 = DAT_00421edc;
        ungetwc(wVar2,(FILE *)DAT_00421edc);
      }
      else {
        *pwVar10 = (wchar_t)local_10;
        pwVar10 = pwVar10 + 1;
        if (pwVar10 == local_14) {
          if (DAT_004216ac == (wchar_t *)0x0) {
            DAT_004216ac = (wchar_t *)FUN_0040ac3c(0x1000);
            wcsncpy_s(DAT_004216ac,0x800,local_c,0x400);
            local_18 = (wchar_t *)0x800;
            pwVar10 = DAT_004216ac + 0x400;
            param_1 = DAT_004216ac + 0x800;
            pwVar13 = extraout_ECX_02;
            local_1c = DAT_004216ac;
            local_14 = param_1;
            local_c = DAT_004216ac;
          }
          else {
            pwVar13 = local_18 + 0x200;
            if ((pwVar13 < local_18) ||
               (local_20 = (wchar_t *)FUN_0040ac7f(DAT_004216ac,(int)pwVar13 * 2),
               local_20 == (wchar_t *)0x0)) {
              pwVar13 = (wchar_t *)0x419;
              FUN_004053f6(DAT_004216a4,0x419);
              pwVar12 = local_c;
LAB_0040a312:
              ungetwc((wint_t)pwVar13,(FILE *)DAT_00421edc);
              while ((pwVar12 < pwVar11 &&
                     (iVar5 = iswspace(pwVar11[-1]), pwVar12 = local_c, iVar5 != 0))) {
                pwVar11 = pwVar11 + -1;
              }
              pwVar10 = DAT_004216ac;
              *pwVar11 = L'\0';
              if (pwVar10 == (wchar_t *)0x0) {
                pwVar10 = (wchar_t *)FUN_0040e267(pwVar12);
              }
              else {
                pwVar10 = (wchar_t *)
                          FUN_0040ac7f(pwVar10,((int)pwVar11 - (int)pwVar10 >> 1) * 2 + 2);
                if (pwVar10 == (wchar_t *)0x0) {
                  return;
                }
              }
              DAT_004216ac = pwVar10;
              return;
            }
            pwVar10 = local_20 + (int)pwVar11;
            param_1 = local_20 + (int)pwVar13;
            DAT_004216ac = local_20;
            local_1c = local_20;
            local_18 = pwVar13;
            local_14 = param_1;
            local_c = local_20;
          }
        }
      }
      uVar7 = CONCAT31((int3)((uint)iVar5 >> 8),local_5);
      pwVar12 = local_c;
    }
    wVar2 = FUN_00407e9d(pwVar13);
    local_10 = (wchar_t *)(uint)wVar2;
  } while( true );
}



void __fastcall FUN_0040a375(wchar_t *param_1,wchar_t *param_2)

{
  bool bVar1;
  bool bVar2;
  wchar_t wVar3;
  uint uVar4;
  wchar_t *extraout_ECX;
  wchar_t *pwVar5;
  wchar_t *extraout_ECX_00;
  wchar_t *extraout_ECX_01;
  wchar_t *extraout_ECX_02;
  byte bVar6;
  uint uVar7;
  wchar_t *pwVar8;
  wchar_t *local_c;
  
  pwVar8 = param_1 + 1;
  bVar2 = false;
  wVar3 = *param_1;
  pwVar5 = param_1;
  local_c = pwVar8;
  if (wVar3 == L'\"') {
    bVar2 = true;
    uVar7 = 0x10;
    bVar1 = false;
  }
  else if (wVar3 == L'$') {
    uVar7 = 2;
    bVar1 = false;
  }
  else if (wVar3 == L'{') {
    uVar7 = 8;
    bVar1 = false;
  }
  else {
    uVar7 = 0;
    bVar1 = false;
  }
  do {
    wVar3 = FUN_00407e9d(pwVar5);
    if (wVar3 == L'^') {
      wVar3 = FUN_00407e9d(extraout_ECX);
      if ((ushort)wVar3 < 0x2a) {
        if (wVar3 != L')') {
          if ((wVar3 == L'\n') || (wVar3 == L'#')) goto LAB_0040a456;
          if ((wVar3 != L'$') && (wVar3 != L'(')) goto LAB_0040a3eb;
        }
LAB_0040a44a:
        *pwVar8 = L'^';
        pwVar8 = pwVar8 + 1;
        local_c = pwVar8;
      }
      else if (wVar3 != L'\\') {
        if (((wVar3 != L'^') && (wVar3 != L'{')) && (wVar3 != L'}')) goto LAB_0040a3eb;
        goto LAB_0040a44a;
      }
LAB_0040a456:
      bVar6 = 0;
    }
    else {
LAB_0040a3eb:
      if ((ushort)wVar3 < 0x2a) {
        if (wVar3 == L')') {
          bVar6 = 9;
        }
        else if (wVar3 == L'\t') {
LAB_0040a47f:
          bVar6 = bVar2 - 1U & 5;
        }
        else if (wVar3 == L'\n') {
LAB_0040a4f6:
          bVar6 = 6;
        }
        else {
          if (wVar3 == L' ') goto LAB_0040a47f;
          if (wVar3 == L'\"') {
            bVar6 = 0xe;
            if ((char)uVar7 == '\x12') {
              bVar2 = true;
            }
          }
          else if (wVar3 == L'#') {
            bVar6 = 1;
          }
          else if (wVar3 == L'$') {
            bVar6 = 7;
          }
          else {
            if (wVar3 != L'(') goto LAB_0040a4bc;
            bVar6 = 8;
          }
        }
      }
      else if (wVar3 == L':') {
        bVar6 = 4;
      }
      else if (wVar3 == L';') {
        bVar6 = 3;
      }
      else if (wVar3 == L'=') {
        bVar6 = 2;
      }
      else if (wVar3 == L'\\') {
        bVar6 = 0xd;
      }
      else if (wVar3 == L'{') {
        bVar6 = 0xb;
      }
      else if (wVar3 == L'}') {
        bVar6 = 0xc;
      }
      else {
        if (wVar3 == L'\xffff') goto LAB_0040a4f6;
LAB_0040a4bc:
        if ((DAT_004216b4 & 0x80) == 0) {
          uVar4 = FUN_00403702(wVar3);
          bVar6 = -((char)uVar4 != '\0') & 10;
        }
        else {
          uVar4 = FUN_00403702(wVar3);
          if ((((char)uVar4 == '\0') && (wVar3 != L'*')) && (wVar3 != L'@')) goto LAB_0040a456;
          bVar6 = 10;
        }
      }
    }
    pwVar5 = (wchar_t *)((uVar7 & 0xff) * 0xf);
    uVar7 = (uint)*(byte *)((int)pwVar5 + (int)(&DAT_00401280 + bVar6));
    if ((bVar2) && (*(byte *)((int)pwVar5 + (int)(&DAT_00401280 + bVar6)) == 1)) {
      uVar7 = 0x10;
    }
    if (bVar1) {
      if (bVar6 == 6) {
        DAT_004216a4 = DAT_004216a4 + 1;
        DAT_00411021 = 1;
        wVar3 = FUN_00407e9d(pwVar5);
        DAT_00411021 = 0;
        if ((wVar3 == L' ') || (wVar3 == L'\t')) {
          uVar7 = 0x40;
          pwVar5 = extraout_ECX_00;
          do {
            do {
              wVar3 = FUN_00407e9d(pwVar5);
              pwVar5 = extraout_ECX_01;
            } while (wVar3 == L' ');
            pwVar8 = local_c;
          } while (wVar3 == L'\t');
        }
        else {
          uVar7 = (uint)(pwVar8 != &DAT_004216c2);
          pwVar5 = extraout_ECX_00;
        }
      }
      else {
        *pwVar8 = L'\\';
        local_c = pwVar8 + 1;
        pwVar8 = local_c;
      }
    }
    bVar1 = false;
    if (param_2 <= pwVar8) {
      pwVar5 = (wchar_t *)0x434;
      FUN_004053f6(DAT_004216a4,0x434);
    }
    if ((char)uVar7 == '@') {
      ungetwc(wVar3,DAT_00421edc);
      *pwVar8 = L'\0';
      FUN_0040c4b7(param_1);
      return;
    }
    if ((uVar7 & 0x20) != 0) {
      FUN_004053f6(DAT_004216a4,(uVar7 & 0xdf) + 1000);
      pwVar5 = extraout_ECX_02;
    }
    if ((char)uVar7 == '\x0f') {
      uVar7 = 0x10f;
      bVar1 = true;
    }
    else {
      *pwVar8 = wVar3;
      pwVar8 = pwVar8 + 1;
      local_c = pwVar8;
    }
  } while( true );
}



void __fastcall FUN_0040a618(wchar_t *param_1)

{
  short sVar1;
  wchar_t wVar2;
  short *psVar3;
  longlong lVar4;
  wint_t _Ch;
  wchar_t *pwVar5;
  uint uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  wchar_t *extraout_ECX;
  undefined4 *puVar10;
  wchar_t **ppwVar11;
  int iVar12;
  uint _SIZE;
  wchar_t *pwVar13;
  bool bVar14;
  wchar_t wStack_498;
  undefined auStack_496 [514];
  undefined4 uStack_294;
  HANDLE local_270;
  wchar_t *local_26c;
  wchar_t **local_268;
  int local_264;
  wchar_t *local_260;
  _WIN32_FIND_DATAW local_25c;
  uint local_8;
  
  local_8 = DAT_00411014 ^ (uint)&stack0xfffffffc;
  if ((*param_1 == L'\0') || (*param_1 == L'#')) {
    pwVar5 = (wchar_t *)0x407;
    FUN_004053f6(DAT_004216a4,0x407);
    uVar6 = DAT_00411014 ^ (uint)&stack0xfffffd78;
    _wsplitpath_s(pwVar5,(wchar_t *)&uStack_294,3,&wStack_498,0x100,(wchar_t *)0x0,0,(wchar_t *)0x0,
                  0);
    puVar10 = &uStack_294;
    do {
      sVar1 = *(short *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 2);
    } while (sVar1 != 0);
    pwVar5 = &wStack_498;
    do {
      wVar2 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (wVar2 != L'\0');
    _SIZE = ((int)puVar10 - ((int)&uStack_294 + 2) >> 1) + 1 + ((int)pwVar5 - (int)auStack_496 >> 1)
    ;
    lVar4 = (ulonglong)_SIZE * 2;
    pwVar8 = (wchar_t *)FUN_0040ac3c(-(uint)((int)((ulonglong)lVar4 >> 0x20) != 0) | (uint)lVar4);
    _wmakepath_s(pwVar8,_SIZE,(wchar_t *)&uStack_294,&wStack_498,(wchar_t *)0x0,(wchar_t *)0x0);
    pwVar5 = pwVar8;
    do {
      wVar2 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (wVar2 != L'\0');
    iVar9 = (int)pwVar5 - (int)(pwVar8 + 1) >> 1;
    if ((pwVar8[iVar9 + -1] == L'\\') || (pwVar8[iVar9 + -1] == L'/')) {
      pwVar8[iVar9 + -1] = L'\0';
    }
    FUN_00410365(uVar6 ^ (uint)&stack0xfffffd78);
    return;
  }
  local_268 = (wchar_t **)wcspbrk_exref;
  pwVar5 = wcspbrk(param_1,L"\t#");
  local_264 = 0x20;
  local_260 = (wchar_t *)0x9;
  if (pwVar5 == (wchar_t *)0x0) goto LAB_0040a79e;
  wVar2 = *pwVar5;
  *pwVar5 = L'\0';
  if (wVar2 != L'#') {
    pwVar8 = pwVar5 + 1;
    wVar2 = *pwVar8;
    while ((wVar2 != L'\0' && (wVar2 != L'#'))) {
      if ((wVar2 != (wchar_t)local_264) && (wVar2 != (wchar_t)local_260)) {
        uStack_294 = 0x40a6c8;
        FUN_004053f6(DAT_004216a4,0x409);
      }
      pwVar8 = pwVar8 + 1;
      wVar2 = *pwVar8;
    }
  }
  do {
    pwVar8 = (wchar_t *)0x0;
    do {
      pwVar7 = pwVar5;
      if (pwVar7 <= param_1) break;
      pwVar5 = pwVar7 + -1;
    } while ((*pwVar5 == (wchar_t)local_264) || (*pwVar5 == (wchar_t)local_260));
    *pwVar7 = L'\0';
    if (*param_1 != L'<') {
      if ((*param_1 == L'\"') && (pwVar7[-1] == L'\"')) {
        param_1 = param_1 + 1;
        pwVar7[-1] = L'\0';
      }
LAB_0040a7ee:
      pwVar5 = FUN_0040ec1b(param_1);
      if (pwVar5 == param_1) {
        pwVar5 = (wchar_t *)FUN_0040e267(param_1);
      }
      iVar9 = FUN_004079fa(pwVar5,&local_25c,&local_270);
      pwVar8 = param_1;
      if (iVar9 != 0) goto LAB_0040a98b;
      iVar9 = (*(code *)local_268)();
      if (iVar9 != 0) goto LAB_0040a978;
      local_264 = DAT_00432324;
      if (DAT_00432324 < 0) goto LAB_0040a963;
      local_268 = (wchar_t **)(&DAT_00432334 + DAT_00432324 * 3);
      goto LAB_0040a85b;
    }
    if (pwVar7[-1] != L'>') goto LAB_0040a7ee;
    pwVar13 = param_1 + 1;
    pwVar7[-1] = L'\0';
    pwVar5 = FUN_0040ec1b(pwVar13);
    if (pwVar5 == pwVar13) {
      pwVar5 = (wchar_t *)FUN_0040e267(pwVar13);
    }
    uVar6 = FUN_0040ab97((ushort *)L"INCLUDE");
    if ((uVar6 != 0) && (psVar3 = *(short **)(*(int *)(uVar6 + 8) + 4), psVar3 != (short *)0x0)) {
      pwVar7 = (wchar_t *)FUN_0040e267(psVar3);
      pwVar8 = FUN_0040ec1b(pwVar7);
      if (pwVar8 != pwVar7) {
        free(pwVar7);
      }
    }
    param_1 = (wchar_t *)FUN_00407ba9(pwVar8,pwVar5,&local_25c,&local_270);
    if (param_1 != (wchar_t *)0x0) break;
    uStack_294 = 0x40a79b;
    FUN_004053f6(DAT_004216a4,0x41c);
LAB_0040a79e:
    pwVar5 = param_1;
    do {
      wVar2 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (wVar2 != L'\0');
    pwVar5 = param_1 + ((int)pwVar5 - (int)(param_1 + 1) >> 1);
  } while( true );
  if (pwVar8 != (wchar_t *)0x0) {
    free(pwVar8);
  }
  free(pwVar5);
  pwVar8 = param_1;
  goto LAB_0040a98b;
LAB_0040a85b:
  do {
    pwVar8 = DAT_00421ee4;
    if (local_264 != DAT_00432324) {
      pwVar8 = *local_268;
    }
    local_260 = (wchar_t *)FUN_0040aabf(pwVar8);
    if (local_260 != (wchar_t *)0x0) {
      pwVar8 = local_260;
      do {
        wVar2 = *pwVar8;
        pwVar8 = pwVar8 + 1;
      } while (wVar2 != L'\0');
      pwVar7 = pwVar5;
      do {
        wVar2 = *pwVar7;
        pwVar7 = pwVar7 + 1;
      } while (wVar2 != L'\0');
      uVar6 = ((int)pwVar8 - (int)(local_260 + 1) >> 1) + 2 + ((int)pwVar7 - (int)(pwVar5 + 1) >> 1)
      ;
      local_26c = (wchar_t *)
                  FUN_0040ac3c(-(uint)((int)((ulonglong)uVar6 * 2 >> 0x20) != 0) |
                               (uint)((ulonglong)uVar6 * 2));
      uStack_294 = 0x40a8d8;
      wcscpy_s(local_26c,uVar6,local_260);
      uStack_294 = 0x40a8ed;
      wcscat_s(local_26c,uVar6,L"\\");
      pwVar8 = local_26c;
      uStack_294 = 0x40a8ff;
      wcscat_s(local_26c,uVar6,pwVar5);
      iVar9 = FUN_004079fa(pwVar8,&local_25c,&local_270);
      if (iVar9 != 0) {
        free(local_260);
        break;
      }
      free(local_260);
      free(pwVar8);
    }
    local_264 = local_264 + -1;
    local_268 = local_268 + -3;
    pwVar8 = param_1;
  } while (-1 < local_264);
LAB_0040a963:
  free(pwVar5);
  if (local_264 < 0) {
LAB_0040a978:
    uStack_294 = 0x40a988;
    FUN_004053f6(DAT_004216a4,0x41c);
  }
LAB_0040a98b:
  iVar12 = 0;
  iVar9 = DAT_00432324;
  if (0 < DAT_00432324) {
    ppwVar11 = (wchar_t **)&DAT_00432334;
    do {
      iVar9 = _wcsicmp(pwVar8,*ppwVar11);
      if (iVar9 == 0) {
        uStack_294 = 0x40a9be;
        FUN_004053f6(DAT_004216a4,0x430);
      }
      iVar12 = iVar12 + 1;
      ppwVar11 = ppwVar11 + 3;
      iVar9 = DAT_00432324;
    } while (iVar12 < DAT_00432324);
  }
  DAT_00432324 = iVar9 + 1;
  bVar14 = DAT_00421ee3 != '\0';
  DAT_004216b0 = 0;
  *(int *)(&DAT_00432338 + iVar9 * 0xc) = DAT_00421edc;
  *(int *)(&DAT_00432330 + iVar9 * 0xc) = DAT_004216a4;
  (&DAT_00432334)[iVar9 * 3] = DAT_00421ee4;
  if (bVar14) {
    FUN_0040c7c7(L"Included: %s\n",(char)pwVar8);
  }
  DAT_00421edc = FUN_0040ffc6(pwVar8,L"rt,ccs=unicode");
  if (DAT_00421edc == 0) {
    uStack_294 = 0x40aa3e;
    FUN_004053f6(DAT_004216a4,0x41c);
  }
  DAT_00421ee4 = (wchar_t *)FUN_0040e267(pwVar8);
  DAT_004216a4 = 1;
  DAT_00411021 = 1;
  _Ch = FUN_00407e9d(extraout_ECX);
  if ((_Ch == 0x20) || (_Ch == 9)) {
    DAT_00411021 = 0;
  }
  else {
    DAT_00411021 = 1;
    ungetwc(_Ch,(FILE *)DAT_00421edc);
    DAT_004216a4 = DAT_004216a4 + -1;
  }
  FUN_00410365(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __fastcall FUN_0040aabf(wchar_t *param_1)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int iVar5;
  uint _SIZE;
  wchar_t local_214;
  undefined local_212 [514];
  wchar_t local_10;
  undefined local_e [6];
  uint local_8;
  
  local_8 = DAT_00411014 ^ (uint)&stack0xfffffffc;
  _wsplitpath_s(param_1,&local_10,3,&local_214,0x100,(wchar_t *)0x0,0,(wchar_t *)0x0,0);
  pwVar4 = &local_10;
  do {
    wVar1 = *pwVar4;
    pwVar4 = pwVar4 + 1;
  } while (wVar1 != L'\0');
  pwVar3 = &local_214;
  do {
    wVar1 = *pwVar3;
    pwVar3 = pwVar3 + 1;
  } while (wVar1 != L'\0');
  _SIZE = ((int)pwVar4 - (int)local_e >> 1) + 1 + ((int)pwVar3 - (int)local_212 >> 1);
  lVar2 = (ulonglong)_SIZE * 2;
  pwVar3 = (wchar_t *)FUN_0040ac3c(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  _wmakepath_s(pwVar3,_SIZE,&local_10,&local_214,(wchar_t *)0x0,(wchar_t *)0x0);
  pwVar4 = pwVar3;
  do {
    wVar1 = *pwVar4;
    pwVar4 = pwVar4 + 1;
  } while (wVar1 != L'\0');
  iVar5 = (int)pwVar4 - (int)(pwVar3 + 1) >> 1;
  if ((pwVar3[iVar5 + -1] == L'\\') || (pwVar3[iVar5 + -1] == L'/')) {
    pwVar3[iVar5 + -1] = L'\0';
  }
  FUN_00410365(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



uint __fastcall FUN_0040ab97(ushort *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  bool bVar6;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    DAT_00435628 = &DAT_00431f10;
  }
  else {
    uVar3 = 0;
    puVar2 = param_1;
    do {
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 + uVar1;
      uVar1 = *puVar2;
    } while (uVar1 != 0);
    DAT_00435628 = &DAT_00431f10 + (uVar3 & 0xff);
    for (puVar4 = (undefined4 *)*DAT_00435628; puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      puVar2 = (ushort *)puVar4[1];
      puVar5 = param_1;
      do {
        uVar1 = *puVar2;
        bVar6 = uVar1 < *puVar5;
        if (uVar1 != *puVar5) {
LAB_0040abf9:
          uVar3 = -(uint)bVar6 | 1;
          goto LAB_0040abfe;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar2[1];
        bVar6 = uVar1 < puVar5[1];
        if (uVar1 != puVar5[1]) goto LAB_0040abf9;
        puVar2 = puVar2 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar1 != 0);
      uVar3 = 0;
LAB_0040abfe:
      if (uVar3 == 0) {
        return ~-(uint)((*(byte *)(puVar4 + 3) & 0x10) != 0) & (uint)puVar4;
      }
    }
  }
  return 0;
}



void FUN_0040ac2b(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00431f10;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



void * __fastcall FUN_0040ac3c(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if (pvVar1 == (void *)0x0) {
    FUN_004053f6(DAT_004216b0,0x41b);
  }
  return pvVar1;
}



void * __fastcall FUN_0040ac61(size_t param_1)

{
  void *_Dst;
  
  _Dst = FUN_0040ac3c(param_1);
  memset(_Dst,0,param_1);
  return _Dst;
}



void * __fastcall FUN_0040ac7f(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    pvVar1 = FUN_0040ac3c(param_2);
  }
  else {
    pvVar1 = realloc(param_1,param_2);
    if (pvVar1 == (void *)0x0) {
      FUN_004053f6(DAT_004216b0,0x41b);
    }
  }
  return pvVar1;
}



void __fastcall FUN_0040acb5(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  code *pcVar2;
  errno_t eVar3;
  DWORD DVar4;
  HMODULE pHVar5;
  FARPROC pFVar6;
  int iVar7;
  HANDLE pvVar8;
  wchar_t *pwVar9;
  uint uVar10;
  int iVar11;
  BOOL BVar12;
  wchar_t *pwVar13;
  bool bVar14;
  DWORD dwFlags;
  SIZE_T dwBytes;
  undefined auStack_6dc [4];
  DWORD DStack_6d8;
  undefined2 auStack_6d4 [2];
  int iStack_6d0;
  wchar_t *local_6cc;
  undefined4 uStack_6c8;
  wchar_t *local_6c4;
  DWORD local_6c0;
  HMODULE *local_6bc;
  undefined2 *local_6b8;
  rsize_t local_6b4 [2];
  wchar_t *pwStack_6ac;
  wchar_t **ppwStack_6a8;
  DWORD *pDStack_6a4;
  HMODULE **pppHStack_6a0;
  undefined2 **ppuStack_69c;
  wchar_t **ppwStack_698;
  rsize_t *prStack_694;
  byte bStack_690;
  wchar_t awStack_664 [274];
  ushort auStack_440 [4];
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  wchar_t awStack_42c [6];
  wchar_t awStack_420 [259];
  short sStack_21a;
  wchar_t local_218;
  undefined auStack_216 [522];
  uint local_c;
  
  local_c = DAT_00411014 ^ (uint)auStack_6dc;
  local_6b8 = &DAT_00435e68;
  local_6b4[0] = 0;
  local_6cc = (wchar_t *)0x0;
  local_6bc = (HMODULE *)&DAT_00435e64;
  local_6c0 = 0x60;
  local_6c4 = param_2;
  if ((((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) || (param_2 == (wchar_t *)0x0)) ||
     (*param_2 == L'\0')) goto LAB_0040b281;
  DAT_00435e64 = 0;
  eVar3 = wcsncpy_s(&local_218,0x104,param_1,0xffffffff);
  if (eVar3 != 0) goto LAB_0040b281;
  pwVar9 = &local_218;
  do {
    wVar1 = *pwVar9;
    pwVar9 = pwVar9 + 1;
  } while (wVar1 != L'\0');
  if (((&sStack_21a)[(int)pwVar9 - (int)auStack_216 >> 1] != 0x5c) &&
     (eVar3 = wcsncat_s(&local_218,0x104,L"\\",0xffffffff), eVar3 != 0)) goto LAB_0040b281;
  pwStack_6ac = &local_218;
  DStack_6d8 = 0x80070002;
  ppwStack_6a8 = &local_6c4;
  pDStack_6a4 = &local_6c0;
  pppHStack_6a0 = &local_6bc;
  ppuStack_69c = &local_6b8;
  ppwStack_698 = &local_6cc;
  prStack_694 = local_6b4;
  uStack_438 = 0;
  uStack_434 = 0;
  uStack_430 = 0;
  DVar4 = GetEnvironmentVariableW(L"VSLANG",(LPWSTR)&uStack_438,6);
  if ((DVar4 != 0) &&
     ((DVar4 < 6 &&
      (FID_conflict_operator__(&pwStack_6ac,(wchar_t *)&uStack_438,10,&DStack_6d8), DStack_6d8 == 0)
      ))) goto LAB_0040b281;
  if (DAT_00435644 == (PVOID)0x0) {
    pHVar5 = GetModuleHandleW(L"kernel32.dll");
    if (pHVar5 != (HMODULE)0x0) {
      pFVar6 = GetProcAddress(pHVar5,"SetThreadPreferredUILanguages");
      DAT_00435644 = EncodePointer(pFVar6);
      goto LAB_0040ae5b;
    }
LAB_0040af79:
    uVar10 = 0;
    auStack_440[0] = GetUserDefaultUILanguage();
    if (((auStack_440[0] & 0x3ff) == 1) || ((auStack_440[0] & 0x3ff) == 0xd)) {
      auStack_440[0] = 0x409;
    }
    auStack_440[2] = 0x409;
    auStack_440[1] = auStack_440[0] & 0x3ff | 0x400;
    do {
      _itow_s((uint)auStack_440[uVar10],awStack_42c,6,10);
      FID_conflict_operator__(&pwStack_6ac,awStack_42c,10,&DStack_6d8);
      if (DStack_6d8 == 0) goto LAB_0040b281;
      uVar10 = uVar10 + 1;
    } while (uVar10 < 3);
  }
  else {
    pFVar6 = (FARPROC)DecodePointer(DAT_00435644);
LAB_0040ae5b:
    if (pFVar6 == (FARPROC)0x0) goto LAB_0040af79;
    DVar4 = GetEnvironmentVariableW(L"VS_UNICODE_OUTPUT",(LPWSTR)0x0,0);
    if ((DVar4 == 0) && (iVar7 = (*pFVar6)(0x100,0,0), iVar7 == 0)) goto LAB_0040b281;
    iStack_6d0 = 0;
    uStack_6c8 = 0;
    if (DAT_00435640 == (PVOID)0x0) {
      pHVar5 = GetModuleHandleW(L"kernel32.dll");
      if (pHVar5 != (HMODULE)0x0) {
        pFVar6 = GetProcAddress(pHVar5,"GetThreadPreferredUILanguages");
        DAT_00435640 = EncodePointer(pFVar6);
        goto LAB_0040aeca;
      }
    }
    else {
      pFVar6 = (FARPROC)DecodePointer(DAT_00435640);
LAB_0040aeca:
      if (pFVar6 != (FARPROC)0x0) {
        iVar7 = (*pFVar6)(0x34,&uStack_6c8,0,&iStack_6d0);
        if (iVar7 == 0) goto LAB_0040b281;
        dwBytes = iStack_6d0 * 2;
        DVar4 = 0;
        pvVar8 = GetProcessHeap();
        pwVar9 = (wchar_t *)HeapAlloc(pvVar8,DVar4,dwBytes);
        if ((pwVar9 == (wchar_t *)0x0) ||
           (iVar7 = (*pFVar6)(0x34,&uStack_6c8,pwVar9,&iStack_6d0), iVar7 == 0)) goto LAB_0040b281;
        wVar1 = *pwVar9;
        pwVar13 = pwVar9;
        while ((wVar1 != L'\0' &&
               (FID_conflict_operator__(&pwStack_6ac,pwVar13,0x10,&DStack_6d8), DStack_6d8 != 0))) {
          pwVar13 = pwVar13 + 5;
          wVar1 = *pwVar13;
        }
        DVar4 = DStack_6d8;
        dwFlags = 0;
        pvVar8 = GetProcessHeap();
        HeapFree(pvVar8,dwFlags,pwVar9);
        if (DVar4 == 0) goto LAB_0040b281;
      }
    }
  }
  FID_conflict_operator__(&pwStack_6ac,L"1033",10,&DStack_6d8);
  if (((DStack_6d8 != 0) && (eVar3 = wcsncpy_s(awStack_420,0x104,&local_218,0xffffffff), eVar3 == 0)
      ) && (eVar3 = wcsncat_s(awStack_420,0x104,L"*",0xffffffff), eVar3 == 0)) {
    pvVar8 = FindFirstFileW(awStack_420,(LPWIN32_FIND_DATAW)&bStack_690);
    if (pvVar8 == (HANDLE)0xffffffff) {
      GetLastError();
    }
    else {
      pwVar9 = &local_218;
      do {
        wVar1 = *pwVar9;
        pwVar9 = pwVar9 + 1;
      } while (wVar1 != L'\0');
      iVar7 = (int)pwVar9 - (int)auStack_216 >> 1;
      do {
        do {
          do {
            do {
              BVar12 = FindNextFileW(pvVar8,(LPWIN32_FIND_DATAW)&bStack_690);
              if (BVar12 == 0) goto LAB_0040b227;
            } while ((bStack_690 & 0x10) == 0);
            pwVar13 = L".";
            pwVar9 = awStack_664;
            do {
              wVar1 = *pwVar9;
              bVar14 = (ushort)wVar1 < (ushort)*pwVar13;
              if (wVar1 != *pwVar13) {
LAB_0040b101:
                uVar10 = -(uint)bVar14 | 1;
                goto LAB_0040b108;
              }
              if (wVar1 == L'\0') break;
              wVar1 = pwVar9[1];
              bVar14 = (ushort)wVar1 < (ushort)pwVar13[1];
              if (wVar1 != pwVar13[1]) goto LAB_0040b101;
              pwVar9 = pwVar9 + 2;
              pwVar13 = pwVar13 + 2;
            } while (wVar1 != L'\0');
            uVar10 = 0;
LAB_0040b108:
          } while (uVar10 == 0);
          pwVar13 = L"..";
          pwVar9 = awStack_664;
          do {
            wVar1 = *pwVar9;
            bVar14 = (ushort)wVar1 < (ushort)*pwVar13;
            if (wVar1 != *pwVar13) {
LAB_0040b145:
              uVar10 = -(uint)bVar14 | 1;
              goto LAB_0040b14c;
            }
            if (wVar1 == L'\0') break;
            wVar1 = pwVar9[1];
            bVar14 = (ushort)wVar1 < (ushort)pwVar13[1];
            if (wVar1 != pwVar13[1]) goto LAB_0040b145;
            pwVar9 = pwVar9 + 2;
            pwVar13 = pwVar13 + 2;
          } while (wVar1 != L'\0');
          uVar10 = 0;
LAB_0040b14c:
        } while ((uVar10 == 0) ||
                (iVar11 = FUN_0040c634(awStack_664,L"%hu%c",(char)auStack_6d4), iVar11 == -1));
        if (0x207 < (uint)(iVar7 * 2)) {
          FUN_00410495();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        awStack_420[iVar7] = L'\0';
        eVar3 = wcsncat_s(awStack_420,0x104,awStack_664,0xffffffff);
      } while (((eVar3 != 0) || (eVar3 = wcsncat_s(awStack_420,0x104,L"\\",0xffffffff), eVar3 != 0))
              || ((eVar3 = wcsncat_s(awStack_420,0x104,local_6c4,0xffffffff), eVar3 != 0 ||
                  (pHVar5 = LoadLibraryExW(awStack_420,(HANDLE)0x0,local_6c0),
                  pHVar5 == (HMODULE)0x0))));
      *local_6bc = pHVar5;
      if (local_6b8 != (undefined2 *)0x0) {
        *local_6b8 = auStack_6d4[0];
      }
      if (local_6cc != (wchar_t *)0x0) {
        wcscpy_s(local_6cc,local_6b4[0],awStack_420);
      }
LAB_0040b227:
      FindClose(pvVar8);
    }
  }
LAB_0040b281:
  FUN_00410365(local_c ^ (uint)auStack_6dc);
  return;
}



// Library Function - Multiple Matches With Different Base Names
//  public: void __thiscall <lambda_1c5f2f604cc1903336e60e6dafa03c8f>::operator()(unsigned short
// const *,int,long &)const 
//  public: void __thiscall <lambda_8a3be6d0309dc3c8972644d881f5a7c5>::operator()(unsigned short
// const *,int,long &)const 
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __thiscall FID_conflict_operator__(void *this,wchar_t *param_1,int param_2,DWORD *param_3)

{
  ulong uVar1;
  errno_t eVar2;
  HMODULE pHVar3;
  DWORD DVar4;
  wchar_t *local_220;
  wchar_t local_21c [260];
  wchar_t local_14 [6];
  uint local_8;
  
  local_8 = DAT_00411014 ^ (uint)&stack0xfffffffc;
  if (*param_1 != L'\0') {
    uVar1 = wcstoul(param_1,&local_220,param_2);
    if (*local_220 == L'\0') {
      _itow_s(uVar1 & 0xffff,local_14,6,10);
                    // WARNING: Load size is inaccurate
      eVar2 = wcsncpy_s(local_21c,0x104,*this,0xffffffff);
      if (eVar2 == 0) {
        eVar2 = wcsncat_s(local_21c,0x104,local_14,0xffffffff);
        if (eVar2 == 0) {
          eVar2 = wcsncat_s(local_21c,0x104,L"\\",0xffffffff);
          if (eVar2 == 0) {
            eVar2 = wcsncat_s(local_21c,0x104,**(wchar_t ***)((int)this + 4),0xffffffff);
            if (eVar2 == 0) {
              pHVar3 = LoadLibraryExW(local_21c,(HANDLE)0x0,**(DWORD **)((int)this + 8));
              if (pHVar3 == (HMODULE)0x0) {
                if (*param_3 == 0x80070002) {
                  DVar4 = GetLastError();
                  if (0 < (int)DVar4) {
                    DVar4 = DVar4 & 0xffff | 0x80070000;
                  }
                  *param_3 = DVar4;
                }
              }
              else {
                *(HMODULE *)**(undefined4 **)((int)this + 0xc) = pHVar3;
                if ((undefined2 *)**(int **)((int)this + 0x10) != (undefined2 *)0x0) {
                  *(undefined2 *)**(int **)((int)this + 0x10) = (short)uVar1;
                }
                if (**(wchar_t ***)((int)this + 0x14) != (wchar_t *)0x0) {
                  wcscpy_s(**(wchar_t ***)((int)this + 0x14),**(rsize_t **)((int)this + 0x18),
                           local_21c);
                }
                *param_3 = 0;
              }
            }
          }
        }
      }
    }
  }
  FUN_00410365(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void _guard_check_icall(void)

{
  return;
}



void __fastcall FUN_0040b409(undefined4 param_1)

{
  DAT_00411068 = param_1;
  return;
}



undefined4 __fastcall FUN_0040b410(int **param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined unaff_DI;
  
  if (DAT_00421ee0 == '\0') {
    FUN_0040556c();
  }
  FUN_0040c7c7(L"\nNMAKE : fatal error U1038: Internal error\n",unaff_DI);
  FUN_0040c7a9();
  piVar3 = *param_1;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *piVar3;
    piVar3 = piVar3 + 1;
    param_2 = param_2 + 1;
  }
  if (param_3 != (int *)0x0) {
    piVar3 = param_1[1];
    for (iVar1 = 0xb3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_3 = *piVar3;
      piVar3 = piVar3 + 1;
      param_3 = param_3 + 1;
    }
  }
  uVar2 = 0;
  if ((**param_1 != -0x7ffffffd) && (DAT_00411068 == 0)) {
    uVar2 = 1;
  }
  return uVar2;
}



// WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_0040b47b(int param_1,int param_2)

{
  int *_Dst;
  wchar_t wVar1;
  short sVar2;
  short *psVar3;
  wchar_t *_Src;
  int iVar4;
  wchar_t **ppwVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  int *_Dst_00;
  int iVar8;
  uint _SizeInWords;
  int iVar9;
  undefined local_568 [744];
  int local_280;
  int local_27c;
  undefined local_278 [620];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00410f48;
  uStack_c = 0x40b48a;
  local_27c = param_2;
  SetErrorMode(1);
  memset(local_278,0,0x50);
  memset(local_568,0,0x2cc);
  local_8 = (undefined *)0x0;
  setlocale(2,".ACP");
  FUN_0040c69e();
  _set_invalid_parameter_handler(_guard_check_icall);
  iVar9 = 1;
  iVar8 = param_1;
  do {
    local_280 = iVar9;
    if (iVar8 <= iVar9) {
      if (DAT_004323fb != '\0') {
        _DAT_00000000 = 0;
      }
      FUN_0040ac2b();
      if (DAT_00421ee8 == (void *)0x0) {
        ppwVar5 = (wchar_t **)__p__wpgmptr();
        _Src = *ppwVar5;
        iVar9 = FUN_00403727(_Src,L' ');
        pwVar6 = _Src;
        if (iVar9 != 0) {
          do {
            wVar1 = *pwVar6;
            pwVar6 = pwVar6 + 1;
          } while (wVar1 != L'\0');
          _SizeInWords = ((int)pwVar6 - (int)(_Src + 1) >> 1) + 3;
          pwVar6 = (wchar_t *)
                   FUN_004036fa(-(uint)((int)((ulonglong)_SizeInWords * 2 >> 0x20) != 0) |
                                (uint)((ulonglong)_SizeInWords * 2));
          wcscpy_s(pwVar6,_SizeInWords,L"\"");
          wcscat_s(pwVar6,_SizeInWords,_Src);
          wcscat_s(pwVar6,_SizeInWords,L"\"");
          iVar8 = param_1;
          param_2 = local_27c;
        }
        DAT_00421ee8 = FUN_0040e267(pwVar6);
      }
      signal(2);
      signal(0xf);
      iVar8 = FUN_0040b9e8(iVar8,param_2);
      FUN_0040c479();
      if (DAT_00411020 == '\0') {
        iVar8 = 1;
      }
                    // WARNING: Subroutine does not return
      exit(iVar8);
    }
    psVar3 = *(short **)(param_2 + iVar9 * 4);
    sVar2 = *psVar3;
    if ((sVar2 == 0x2d) || (sVar2 == 0x2f)) {
      _Dst = (int *)(param_2 + iVar9 * 4);
      iVar4 = _wcsicmp(psVar3 + 1,L"errorreport:none");
      if (iVar4 == 0) {
        uVar7 = 0;
      }
      else {
        iVar4 = _wcsicmp((wchar_t *)(*_Dst + 2),L"errorreport:prompt");
        if (iVar4 == 0) {
          uVar7 = 1;
        }
        else {
          iVar4 = _wcsicmp((wchar_t *)(*_Dst + 2),L"errorreport:queue");
          if (iVar4 == 0) {
            uVar7 = 2;
          }
          else {
            iVar4 = _wcsicmp((wchar_t *)(*_Dst + 2),L"errorreport:send");
            if (iVar4 != 0) {
              iVar4 = _wcsicmp((wchar_t *)(*_Dst + 2),L"errorreport:test");
              if (iVar4 == 0) {
                DAT_004323fb = '\x01';
                _Dst_00 = (int *)(local_27c + iVar9 * 4);
              }
              else {
                iVar4 = _wcsicmp((wchar_t *)(*_Dst + 2),L"errorreport:internal");
                param_2 = local_27c;
                if (iVar4 != 0) goto LAB_0040b555;
                DAT_004323fa = 1;
                _Dst_00 = (int *)(local_27c + iVar9 * 4);
                _Dst = _Dst_00;
              }
              param_2 = local_27c;
              memmove(_Dst_00,_Dst + 1,(iVar8 - iVar9) * 4 - 4);
              iVar8 = iVar8 + -1;
              iVar9 = iVar9 + -1;
              param_1 = iVar8;
              goto LAB_0040b555;
            }
            uVar7 = 3;
          }
        }
      }
      FUN_0040b409(uVar7);
      memmove(_Dst,_Dst + 1,(iVar8 - iVar9) * 4 - 4);
      iVar8 = iVar8 + -1;
      iVar9 = iVar9 + -1;
      param_2 = local_27c;
      param_1 = iVar8;
    }
LAB_0040b555:
    iVar9 = iVar9 + 1;
  } while( true );
}



void FUN_0040b886(void)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  undefined4 *extraout_ECX;
  int iVar3;
  wchar_t **ppwVar4;
  int iVar5;
  
  pwVar1 = (wchar_t *)FUN_0040e267((short *)&DAT_00402278);
  pwVar2 = (wchar_t *)FUN_0040e267((short *)&DAT_00402280);
  iVar5 = 0;
  FUN_00403260(pwVar1,pwVar2,0);
  pwVar1 = (wchar_t *)FUN_0040e267((short *)&DAT_00402288);
  pwVar2 = (wchar_t *)FUN_0040e267((short *)&DAT_00402280);
  FUN_00403260(pwVar1,pwVar2,0);
  pwVar1 = (wchar_t *)FUN_0040e267((short *)&DAT_00402290);
  pwVar2 = (wchar_t *)FUN_0040e267((short *)&DAT_00402280);
  FUN_00403260(pwVar1,pwVar2,0);
  pwVar1 = (wchar_t *)FUN_0040e267((short *)&DAT_00402298);
  pwVar2 = (wchar_t *)FUN_0040e267((short *)&DAT_004022a0);
  FUN_00403260(pwVar1,pwVar2,0);
  pwVar1 = (wchar_t *)FUN_0040e267((short *)&DAT_004022a8);
  pwVar2 = (wchar_t *)FUN_0040e267((short *)&DAT_004022b0);
  FUN_00403260(pwVar1,pwVar2,0);
  pwVar1 = (wchar_t *)FUN_0040e267(L"_NMAKE_VER");
  pwVar2 = (wchar_t *)FUN_0040e267(L"14.29.30146.0");
  FUN_00403260(pwVar1,pwVar2,2);
  pwVar1 = (wchar_t *)FUN_0040e267(L"MAKE");
  pwVar2 = (wchar_t *)FUN_0040e267(DAT_00421ee8);
  FUN_00403260(pwVar1,pwVar2,0x4c);
  pwVar1 = L".SUFFIXES";
  iVar3 = 0;
  do {
    DAT_004216b8 = FUN_0040e267(pwVar1);
    ppwVar4 = *(wchar_t ***)((int)&PTR_PTR_DAT_00401170 + iVar3);
    wcscpy_s(&DAT_004216c0,0x400,*ppwVar4);
    FUN_00402b16();
    while( true ) {
      ppwVar4 = ppwVar4 + 1;
      if (*ppwVar4 == (wchar_t *)0x0) break;
      wcscpy_s(&DAT_004216c0,0x400,*ppwVar4);
      FUN_00402937(extraout_ECX);
    }
    if (iVar5 == 0) {
      FUN_00402f02();
    }
    FUN_0040301c();
    iVar5 = iVar5 + 1;
    iVar3 = iVar5 * 4;
    pwVar1 = (wchar_t *)(&PTR_u__SUFFIXES_00401240)[iVar5];
  } while (pwVar1 != (wchar_t *)0x0);
  return;
}



undefined4 __fastcall FUN_0040b9e8(int param_1,int param_2)

{
  char cVar1;
  wchar_t *pwVar2;
  wchar_t *_Path;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  errno_t eVar5;
  int iVar6;
  undefined4 uVar7;
  wchar_t *extraout_ECX;
  uint extraout_ECX_00;
  uint uVar8;
  size_t local_c;
  wchar_t *local_8;
  
  local_8 = (wchar_t *)0x0;
  pwVar2 = (wchar_t *)FUN_0040e267(L"MAKEDIR");
  _Path = _wgetcwd((wchar_t *)0x0,0);
  FUN_00403260(pwVar2,_Path,0x42);
  _wdupenv_s(&local_8,(size_t *)0x0,L"MAKEFLAGS");
  pwVar2 = local_8;
  if (local_8 != (wchar_t *)0x0) {
    pwVar3 = u_MAKEFLAGS__0041102c;
    do {
      pwVar4 = pwVar3;
      pwVar3 = pwVar4 + 1;
    } while (*pwVar4 != L'\0');
    wcsncpy_s(u_MAKEFLAGS__0041102c + 10,((int)(pwVar4 + -0x208816) >> 1) - 9,local_8,0xffffffff);
  }
  uVar8 = 6;
  DAT_0041148d = 1;
  pwVar3 = (wchar_t *)FUN_0040e267(u_MAKEFLAGS__0041102c + 10);
  pwVar4 = (wchar_t *)FUN_0040e267(L"MAKEFLAGS");
  FUN_00403260(pwVar4,pwVar3,uVar8);
  for (; (pwVar2 != (wchar_t *)0x0 && (*pwVar2 != L'\0')); pwVar2 = pwVar2 + 1) {
    FUN_0040c1cd(*pwVar2,'\x01');
  }
  free(local_8);
  local_8 = (wchar_t *)0x0;
  eVar5 = _wgetenv_s(&local_c,(wchar_t *)0x0,0,L"NTMAKEENV");
  if ((eVar5 == 0) && (local_c != 0)) {
    DAT_004323f9 = 1;
  }
  FUN_0040bdf3(param_1 - 1,param_2 + 4);
  if (DAT_00421ee0 == '\0') {
    FUN_0040556c();
  }
  if ((DAT_0041148c & 2) == 0) {
    FUN_0040b886();
    DAT_00421ee4 = L"tools.ini";
    cVar1 = FUN_00408971();
    if (cVar1 != '\0') {
      DAT_004216a4 = DAT_004216a4 + 1;
      DAT_00421ee1 = 1;
      FUN_0040c852(extraout_ECX);
      iVar6 = fclose(DAT_00421edc);
      if (iVar6 == -1) {
        FUN_004053f6(0,0x424);
      }
    }
  }
  pwVar2 = (wchar_t *)FUN_0040e267(u_MAKEFLAGS__0041102c + 10);
  eVar5 = _wputenv_s(L"MAKEFLAGS",pwVar2);
  if (eVar5 != 0) {
    FUN_004053f6(0,0x41f);
  }
  if (DAT_004323f0 == 0) {
    FUN_0040c0fd();
  }
  FUN_0040bd27();
  FUN_0040bbdd(extraout_ECX_00);
  DAT_004216b0 = 0;
  FUN_0040de73();
  if ((DAT_0041148c & 1) != 0) {
    FUN_0040cd28();
    FUN_0040cd99();
    FUN_0040ce39();
  }
  if (DAT_00431efc != 0) {
    free((void *)DAT_00431efc);
  }
  uVar7 = FUN_00403732();
  _wchdir(_Path);
  return uVar7;
}



void __fastcall FUN_0040bbdd(uint param_1)

{
  short *psVar1;
  HANDLE hFile;
  BOOL BVar2;
  int iVar3;
  wchar_t *extraout_ECX;
  wchar_t *extraout_ECX_00;
  int *piVar4;
  wchar_t *_Size;
  LARGE_INTEGER LStack_10;
  
  piVar4 = DAT_004323f0;
  LStack_10.s.LowPart = param_1;
  LStack_10.s.HighPart = param_1;
  if (DAT_004323f0 != (int *)0x0) {
    do {
      psVar1 = (short *)piVar4[1];
      if ((*psVar1 == 0x2d) && (psVar1[1] == 0)) {
        DAT_00421ee4 = FUN_0040e267(L"STDIN");
        _Size = (wchar_t *)0x0;
        DAT_00421edc = __acrt_iob_func();
      }
      else {
        DAT_00421ee4 = FUN_0040e267(psVar1);
        DAT_00421edc = (int)_wfsopen((wchar_t *)DAT_00421ee4,L"rt,ccs=unicode",0x20);
        if ((FILE *)DAT_00421edc == (FILE *)0x0) {
          FUN_004053f6(0,0x41c);
        }
        LStack_10.s.LowPart = 0;
        LStack_10.s.HighPart = 0;
        _Size = (wchar_t *)_fileno((FILE *)DAT_00421edc);
        hFile = (HANDLE)_get_osfhandle((int)_Size);
        if ((hFile != (HANDLE)0xffffffff) &&
           (BVar2 = GetFileSizeEx(hFile,&LStack_10), _Size = extraout_ECX, BVar2 != 0)) {
          _Size = (wchar_t *)(LStack_10.s.LowPart + 1);
          if ((LStack_10.s.HighPart + (uint)(0xfffffffe < LStack_10.s.LowPart) + -1 +
               (uint)((wchar_t *)0x1 < _Size) == 0) && (LStack_10.s.LowPart - 1 < 0x7ffffffe)) {
            setvbuf((FILE *)DAT_00421edc,(char *)0x0,0,(size_t)_Size);
            _Size = extraout_ECX_00;
          }
        }
      }
      DAT_004216a4 = 0;
      DAT_00421ee1 = 0;
      FUN_0040c852(_Size);
      iVar3 = __acrt_iob_func(0);
      if ((DAT_00421edc != iVar3) && (iVar3 = fclose((FILE *)DAT_00421edc), iVar3 == -1)) {
        FUN_004053f6(0,0x424);
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)0x0);
  }
  FUN_00404be9(DAT_004323f0);
  return;
}



void FUN_0040bd27(void)

{
  wchar_t wVar1;
  undefined4 *puVar2;
  wchar_t *pwVar3;
  int iVar4;
  wchar_t *_Str;
  wchar_t *pwVar5;
  wchar_t **ppwVar6;
  
  puVar2 = (undefined4 *)__p__wenviron();
  ppwVar6 = (wchar_t **)*puVar2;
  pwVar3 = *ppwVar6;
  while (pwVar3 != (wchar_t *)0x0) {
    pwVar3 = wcschr(pwVar3,L'=');
    if ((pwVar3 != (wchar_t *)0x0) && (iVar4 = _wcsnicmp(*ppwVar6,L"MAKEFLAGS",8), iVar4 != 0)) {
      *pwVar3 = L'\0';
      if (**ppwVar6 != L'\0') {
        _Str = (wchar_t *)FUN_0040e267(*ppwVar6);
        pwVar5 = _Str;
        do {
          wVar1 = *pwVar5;
          pwVar5 = pwVar5 + 1;
        } while (wVar1 != L'\0');
        _wcsupr_s(_Str,((int)pwVar5 - (int)(_Str + 1) >> 1) + 1);
        pwVar5 = (wchar_t *)FUN_0040e267(pwVar3 + 1);
        *pwVar3 = L'=';
        DAT_0041148d = 0;
        iVar4 = FUN_00403260(_Str,pwVar5,4);
        if ((char)iVar4 == '\0') {
          free(_Str);
          free(pwVar5);
        }
      }
    }
    ppwVar6 = ppwVar6 + 1;
    pwVar3 = *ppwVar6;
  }
  return;
}



void __fastcall FUN_0040bdf3(uint param_1,int param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  FILE *pFVar10;
  void *pvVar11;
  wchar_t wVar12;
  uint uVar13;
  uint uVar14;
  FILE *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  
  bVar1 = false;
  uVar13 = 0;
  if (param_1 != 0) {
    local_14 = __acrt_iob_func_exref;
    local_10 = _wfopen_s_exref;
    local_c = fclose_exref;
    do {
      pwVar6 = *(wchar_t **)(param_2 + uVar13 * 4);
      wVar12 = *pwVar6;
      if (wVar12 == L'@') {
        FUN_0040525e(pwVar6 + 1);
      }
      else if ((wVar12 == L'-') || (wVar12 == L'/')) {
        pwVar6 = pwVar6 + 1;
        iVar9 = _wcsicmp(pwVar6,L"help");
        if (iVar9 == 0) goto LAB_0040c0e8;
        wVar12 = *pwVar6;
        while (wVar12 != L'\0') {
          iVar9 = _wcsicmp(pwVar6,L"nologo");
          if (iVar9 == 0) {
            FUN_0040c1cd(pwVar6[2],'\x01');
            break;
          }
          wVar12 = *pwVar6;
          if (wVar12 == L'?') {
            bVar1 = true;
            break;
          }
          if ((wVar12 == L'f') || (wVar12 == L'F')) {
            pwVar6 = pwVar6 + 1;
            if ((*pwVar6 == L'\0') &&
               ((uVar13 = uVar13 + 1, param_1 <= uVar13 ||
                (pwVar6 = *(wchar_t **)(param_2 + uVar13 * 4), *pwVar6 == L'\0')))) {
              FUN_004053f6(0,0x425);
            }
            puVar7 = FUN_0040e215();
            pvVar11 = FUN_0040e267(pwVar6);
            puVar7[1] = pvVar11;
            FUN_0040e36c(&DAT_004323f0,puVar7);
            break;
          }
          if ((wVar12 == L'x') || (wVar12 == L'X')) {
            pwVar6 = pwVar6 + 1;
            wVar12 = *pwVar6;
            if (wVar12 == L'\0') {
              uVar13 = uVar13 + 1;
              if (uVar13 < param_1) {
                pwVar6 = *(wchar_t **)(param_2 + uVar13 * 4);
                wVar12 = *pwVar6;
                if (wVar12 != L'\0') goto LAB_0040c00f;
              }
              FUN_004053f6(0,0x426);
              wVar12 = *pwVar6;
            }
LAB_0040c00f:
            if ((wVar12 == L'-') && (pwVar6[1] == L'\0')) {
              pFVar10 = (FILE *)(*local_14)(1);
              FUN_0040c722(pFVar10);
            }
            else {
              iVar9 = (*local_10)(&local_18,pwVar6,&DAT_00402368);
              if (iVar9 != 0) {
                FUN_004053f6(0,0x418);
              }
              FUN_0040c722(local_18);
              (*local_c)(local_18);
            }
            break;
          }
          FUN_0040c1cd(wVar12,'\x01');
          pwVar6 = pwVar6 + 1;
          wVar12 = *pwVar6;
        }
      }
      else {
        pwVar2 = wcschr(pwVar6,L'=');
        if (pwVar2 == (wchar_t *)0x0) {
          FUN_0040c4b7(pwVar6);
          if (*pwVar6 != L'\0') {
            puVar7 = FUN_0040e215();
            pwVar2 = wcschr(pwVar6,L' ');
            if (pwVar2 == (wchar_t *)0x0) {
              puVar8 = (undefined2 *)FUN_0040e267(pwVar6);
            }
            else {
              puVar8 = FUN_0040e2ab(pwVar6);
            }
            puVar7[1] = puVar8;
            FUN_0040e36c(&DAT_00421690,puVar7);
          }
        }
        else {
          if (pwVar2 == pwVar6) {
            FUN_004053f6(0,0x427);
          }
          *pwVar2 = L'\0';
          pwVar3 = pwVar2;
          do {
            do {
              pwVar4 = pwVar3;
              pwVar3 = pwVar4 + -1;
            } while (*pwVar3 == L' ');
          } while (*pwVar3 == L'\t');
          uVar14 = 2;
          DAT_0041148d = 1;
          *pwVar4 = L'\0';
          sVar5 = wcsspn(pwVar2 + 1,L" \t");
          pwVar2 = (wchar_t *)FUN_0040e267(pwVar2 + 1 + sVar5);
          sVar5 = wcsspn(pwVar6,L" \t");
          pwVar6 = (wchar_t *)FUN_0040e267(pwVar6 + sVar5);
          FUN_00403260(pwVar6,pwVar2,uVar14);
        }
        *(undefined4 *)(param_2 + uVar13 * 4) = 0;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < param_1);
    if (bVar1) {
LAB_0040c0e8:
      FUN_00405598();
                    // WARNING: Subroutine does not return
      exit(0);
    }
  }
  return;
}



void FUN_0040c0fd(void)

{
  wchar_t *_Filename;
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  wchar_t *pwVar4;
  int *piVar5;
  _WIN32_FIND_DATAW _Stack_468;
  wchar_t awStack_218 [262];
  uint local_c;
  
  local_c = DAT_00411014 ^ (uint)&_Stack_468;
  iVar1 = _waccess(L"makefile",4);
  if (iVar1 == 0) {
    puVar2 = FUN_0040e215();
    pvVar3 = FUN_0040e267(L"makefile");
    puVar2[1] = pvVar3;
    DAT_004323f0 = puVar2;
  }
  else if (DAT_00421690 == (undefined4 *)0x0) {
    if ((DAT_0041148c & 1) == 0) {
      FUN_004053f6(0,0x428);
    }
  }
  else {
    _Filename = (wchar_t *)DAT_00421690[1];
    iVar1 = _waccess(_Filename,4);
    if (iVar1 == 0) {
      pwVar4 = wcsrchr(_Filename,L'.');
      if (pwVar4 != (wchar_t *)0x0) {
        piVar5 = FUN_0040da04(awStack_218,0x101,_Filename,pwVar4,&_Stack_468);
        if (piVar5 != (int *)0x0) goto LAB_0040c1b9;
      }
      DAT_004323f0 = DAT_00421690;
      DAT_00421690 = (undefined4 *)*DAT_00421690;
    }
  }
LAB_0040c1b9:
  FUN_00410365(local_c ^ (uint)&_Stack_468);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_0040c1cd(wint_t param_1,char param_2)

{
  wchar_t *pwVar1;
  byte bVar2;
  int iVar3;
  wchar_t _Ch;
  wchar_t *pwVar4;
  errno_t eVar5;
  byte bVar6;
  byte *pbVar7;
  
  bVar6 = 0;
  pbVar7 = &DAT_0041148e;
  _Ch = towupper(param_1);
  if ((ushort)_Ch < 0x4d) {
    if (_Ch == L'L') {
      bVar6 = 0x80;
LAB_0040c227:
      pbVar7 = &DAT_0041148c;
      DAT_00421ee0 = 1;
    }
    else {
      if ((ushort)_Ch < 0x45) {
        if (_Ch == L'D') {
          bVar6 = 1;
          goto LAB_0040c2af;
        }
        if (_Ch == L' ') {
          return;
        }
        if (_Ch == L'A') {
          bVar6 = 0x10;
          goto LAB_0040c2af;
        }
        if (_Ch == L'B') {
          DAT_004216b6 = 1;
          return;
        }
        if (_Ch == L'C') {
          bVar6 = 0x20;
          goto LAB_0040c227;
        }
      }
      else {
        if (_Ch == L'E') {
          bVar6 = 4;
          goto LAB_0040c282;
        }
        if (_Ch == L'G') {
          DAT_00421ee3 = 1;
          return;
        }
        if (_Ch == L'I') {
          bVar6 = 2;
          goto LAB_0040c2af;
        }
        if (_Ch == L'K') {
          DAT_004216b7 = 1;
          return;
        }
      }
LAB_0040c2fe:
      FUN_004053f6(0,0x429);
    }
    goto LAB_0040c2af;
  }
  if ((ushort)_Ch < 0x53) {
    if (_Ch == L'R') {
      bVar6 = 2;
    }
    else {
      if (_Ch == L'N') {
        bVar6 = 4;
        goto LAB_0040c2af;
      }
      if (_Ch == L'O') {
        DAT_004216b5 = 1;
        return;
      }
      if (_Ch != L'P') {
        if (_Ch != L'Q') goto LAB_0040c2fe;
        pbVar7 = &DAT_0041148c;
        goto LAB_0040c2ad;
      }
      bVar6 = 1;
    }
  }
  else {
    if (_Ch == L'S') {
LAB_0040c2ad:
      bVar6 = 8;
      goto LAB_0040c2af;
    }
    if (_Ch == L'T') {
      bVar6 = 0x10;
    }
    else {
      if (_Ch == L'U') {
        bVar6 = 0x40;
        goto LAB_0040c2af;
      }
      if (_Ch != L'Y') goto LAB_0040c2fe;
      bVar6 = 0x40;
    }
  }
LAB_0040c282:
  pbVar7 = &DAT_0041148c;
LAB_0040c2af:
  if (_DAT_0043232c == 0) {
    _DAT_0043232c = FUN_0040ab97((ushort *)L"MAKEFLAGS");
    DAT_00432328 = *(int *)(_DAT_0043232c + 8);
  }
  iVar3 = DAT_00432328;
  if (param_2 == '\0') {
    if (pbVar7 != &DAT_0041148e) {
      return;
    }
    DAT_0041148e = DAT_0041148e & ~bVar6;
    pwVar4 = wcschr(*(wchar_t **)(DAT_00432328 + 4),_Ch);
    if (pwVar4 != (wchar_t *)0x0) {
      do {
        pwVar1 = pwVar4 + 1;
        *pwVar4 = *pwVar1;
        pwVar4 = pwVar4 + 1;
      } while (*pwVar1 != L'\0');
    }
  }
  else {
    bVar2 = *pbVar7;
    *pbVar7 = bVar2 | bVar6;
    if (_Ch == L'Q') {
      *pbVar7 = bVar2 | bVar6 | 0x20;
    }
    pwVar4 = wcschr(*(wchar_t **)(iVar3 + 4),_Ch);
    if ((pwVar4 == (wchar_t *)0x0) &&
       (pwVar4 = wcschr(*(wchar_t **)(DAT_00432328 + 4),L' '), pwVar4 != (wchar_t *)0x0)) {
      *pwVar4 = _Ch;
    }
  }
  pwVar4 = (wchar_t *)FUN_0040e267(u_MAKEFLAGS__0041102c + 10);
  eVar5 = _wputenv_s(L"MAKEFLAGS",pwVar4);
  if (eVar5 != 0) {
    FUN_004053f6(DAT_004216a4,0x41f);
  }
  return;
}



void FUN_0040c479(void)

{
  undefined4 *puVar1;
  
  _fcloseall();
  for (puVar1 = DAT_004323f4; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    _wunlink((wchar_t *)puVar1[1]);
    if ((DAT_0041148e & 4) != 0) {
      FUN_0040c7c7(L"\tdel %s\n",(char)puVar1[1]);
      FUN_0040c7a9();
    }
  }
  return;
}



void __fastcall FUN_0040c4b7(short *param_1)

{
  short sVar1;
  bool bVar2;
  short *psVar3;
  
  bVar2 = false;
  psVar3 = param_1;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  psVar3 = param_1 + ((int)psVar3 - (int)(param_1 + 1) >> 1) + -1;
  if (*param_1 != 0x22) goto LAB_0040c4f6;
  if (*psVar3 != 0x22) goto LAB_0040c4f6;
  bVar2 = true;
  do {
    psVar3 = psVar3 + -1;
LAB_0040c4f6:
  } while ((param_1 < psVar3) && ((*psVar3 == 0x20 || (*psVar3 == 0x2e))));
  if (bVar2) {
    psVar3 = psVar3 + 1;
    *psVar3 = 0x22;
  }
  psVar3[1] = 0;
  return;
}



void __fastcall FUN_0040c50d(uint param_1)

{
  HMODULE hModule;
  wchar_t **ppwVar1;
  errno_t eVar2;
  int iVar3;
  HRSRC hResInfo;
  HGLOBAL pvVar4;
  uint uVar5;
  wchar_t local_61c [260];
  wchar_t local_414 [256];
  wchar_t local_214 [258];
  wchar_t local_10 [4];
  uint local_8;
  
  local_8 = DAT_00411014 ^ (uint)&stack0xfffffffc;
  if (DAT_00435e60 == '\0') {
    ppwVar1 = (wchar_t **)__p__wpgmptr();
    _wsplitpath_s(*ppwVar1,local_10,3,local_414,0x100,local_214,0x100,(wchar_t *)0x0,0);
    _wmakepath_s(local_61c,0x104,local_10,local_414,(wchar_t *)0x0,(wchar_t *)0x0);
    eVar2 = wcsncat_s(local_214,0x100,L"UI.DLL",0xffffffff);
    if ((eVar2 != 0) || (iVar3 = FUN_0040acb5(local_61c,local_214), iVar3 < 0)) {
      DAT_00435e64 = (HMODULE)0x0;
    }
    DAT_00435e60 = '\x01';
  }
  hModule = DAT_00435e64;
  hResInfo = FindResourceExW(DAT_00435e64,(LPCWSTR)0x6,(LPCWSTR)((param_1 >> 4) + 1 & 0xffff),
                             DAT_00435e68);
  if ((hResInfo != (HRSRC)0x0) && (pvVar4 = LoadResource(hModule,hResInfo), pvVar4 != (HGLOBAL)0x0))
  {
    for (uVar5 = param_1 & 0xf; uVar5 != 0; uVar5 = uVar5 - 1) {
    }
  }
  FUN_00410365(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



undefined * FUN_0040c62e(void)

{
  return &DAT_00435638;
}



void __cdecl FUN_0040c634(undefined4 param_1,undefined4 param_2,undefined param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  puVar4 = &param_3;
  uVar3 = 0;
  uVar2 = 0xffffffff;
  puVar1 = (uint *)FUN_0040c62e();
  __stdio_common_vswscanf(*puVar1 | 1,puVar1[1],param_1,uVar2,param_2,uVar3,puVar4);
  return;
}



uint __fastcall FUN_0040c65e(FILE *param_1)

{
  int _FileHandle;
  HANDLE hFile;
  DWORD DVar1;
  uint uVar2;
  FILE *local_8;
  
  local_8 = param_1;
  _FileHandle = _fileno(param_1);
  hFile = (HANDLE)_get_osfhandle(_FileHandle);
  DVar1 = GetFileType(hFile);
  uVar2 = DVar1 & 0xffff7fff;
  if ((uVar2 == 2) && (uVar2 = GetConsoleMode(hFile,(LPDWORD)&local_8), uVar2 != 0)) {
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  return uVar2 & 0xffffff00;
}



void FUN_0040c69e(void)

{
  FILE *pFVar1;
  undefined4 uVar2;
  
  pFVar1 = (FILE *)__acrt_iob_func(1);
  uVar2 = FUN_0040c65e(pFVar1);
  DAT_004323fd = (undefined)uVar2;
  pFVar1 = (FILE *)__acrt_iob_func(2);
  uVar2 = FUN_0040c65e(pFVar1);
  DAT_004323fc = (char)uVar2;
  return;
}



int FUN_0040c6c9(void)

{
  FILE *_File;
  int iVar1;
  
  if (DAT_004323fc != '\0') {
    return 0;
  }
  _File = (FILE *)__acrt_iob_func(2);
  iVar1 = fflush(_File);
  return iVar1;
}



void FUN_0040c6e7(undefined4 param_1,undefined param_2)

{
  FUN_0040c75f(param_1,&param_2);
  return;
}



wint_t FUN_0040c6f6(void)

{
  wint_t wVar1;
  FILE *_File;
  
  if (DAT_004323fc == '\0') {
    _File = (FILE *)__acrt_iob_func(2);
    wVar1 = fputwc(L'\n',_File);
  }
  else {
    wVar1 = _putwch(L'\n');
  }
  return wVar1;
}



void __fastcall FUN_0040c722(FILE *param_1)

{
  FILE *pFVar1;
  int _FileHandleDst;
  int _FileHandleSrc;
  undefined4 uVar2;
  
  pFVar1 = (FILE *)__acrt_iob_func(2);
  _FileHandleDst = _fileno(pFVar1);
  _FileHandleSrc = _fileno(param_1);
  _dup2(_FileHandleSrc,_FileHandleDst);
  pFVar1 = (FILE *)__acrt_iob_func(2);
  uVar2 = FUN_0040c65e(pFVar1);
  DAT_004323fc = (char)uVar2;
  return;
}



void __fastcall FUN_0040c75f(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_0040c84c();
  if (DAT_004323fc == '\0') {
    uVar2 = __acrt_iob_func(2);
    __stdio_common_vfwprintf(*puVar1,puVar1[1],uVar2,param_1,0,param_2);
  }
  else {
    __conio_common_vcwprintf(*puVar1,puVar1[1],param_1,0,param_2);
  }
  return;
}



int FUN_0040c7a9(void)

{
  FILE *_File;
  int iVar1;
  
  if (DAT_004323fd != '\0') {
    return 0;
  }
  _File = (FILE *)__acrt_iob_func(1);
  iVar1 = fflush(_File);
  return iVar1;
}



void FUN_0040c7c7(undefined4 param_1,undefined param_2)

{
  FUN_0040c802(param_1,&param_2);
  return;
}



wint_t FUN_0040c7d6(void)

{
  wint_t wVar1;
  FILE *_File;
  
  if (DAT_004323fd == '\0') {
    _File = (FILE *)__acrt_iob_func(1);
    wVar1 = fputwc(L'\n',_File);
  }
  else {
    wVar1 = _putwch(L'\n');
  }
  return wVar1;
}



void __fastcall FUN_0040c802(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_0040c84c();
  if (DAT_004323fd == '\0') {
    uVar2 = __acrt_iob_func(1);
    __stdio_common_vfwprintf(*puVar1,puVar1[1],uVar2,param_1,0,param_2);
  }
  else {
    __conio_common_vcwprintf(*puVar1,puVar1[1],param_1,0,param_2);
  }
  return;
}



undefined * FUN_0040c84c(void)

{
  return &DAT_00435648;
}



void __fastcall FUN_0040c852(wchar_t *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined2 extraout_var;
  wchar_t *pwVar8;
  uint extraout_ECX;
  uint extraout_ECX_00;
  wchar_t *extraout_ECX_01;
  undefined2 extraout_var_00;
  wchar_t *extraout_ECX_02;
  undefined3 uVar9;
  uint uVar10;
  char local_5;
  
  DAT_00421ee2 = 1;
  (&DAT_00432311)[DAT_00411028] = 0x17;
  uVar6 = DAT_00411028 + 2;
  if (0xf < uVar6) {
    DAT_00411028 = uVar6;
    FUN_00410495();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar1 = &DAT_00432312 + DAT_00411028;
  DAT_00411028 = uVar6;
  *puVar1 = 0;
  DAT_004216b0 = DAT_004216a4;
  cVar4 = FUN_00409b97(param_1,'\0');
  bVar5 = (&DAT_00432310)[DAT_00411028];
  pwVar8 = (wchar_t *)CONCAT31(CONCAT21(extraout_var,cVar4),bVar5);
  uVar6 = (uint)bVar5;
  do {
    if (bVar5 == 0x17) {
      DAT_00411028 = DAT_00411028 - 1;
      return;
    }
    if ((uVar6 & 0x40) == 0) {
      bVar5 = (byte)((uint)pwVar8 >> 8);
      local_5 = (char)(uVar6 >> 8);
      if ((uVar6 & 0x10) == 0) {
        uVar10 = uVar6 & 0xff;
        bVar5 = (&DAT_004014a0)[uVar10 * 8 + (bVar5 & 0xf)];
        uVar7 = (uint)bVar5;
        if ((bVar5 & 0x20) != 0) {
          FUN_004053f6(DAT_004216b0,uVar7 + 1000);
          pwVar8 = extraout_ECX_02;
        }
        DAT_00411028 = DAT_00411028 - 1;
        if ((char)bVar5 < '\0') {
          if (local_5 == '\0') {
            bVar5 = FUN_00409b97(pwVar8,(byte)uVar6);
            uVar6 = (uint)bVar5 << 8;
          }
          uVar7 = (uVar7 & 0xf) + (uint)(byte)(&DAT_00401480)[uVar10 * 8 + (uVar6 >> 8 & 0xf)];
        }
        pbVar2 = (&PTR_DAT_004014e0)[uVar7];
        uVar7 = (uint)*pbVar2;
        uVar10 = DAT_00411028;
        if (uVar7 != 0) {
          do {
            DAT_00411028 = uVar10 + 1;
            (&DAT_00432311)[uVar10] = pbVar2[uVar7];
            uVar7 = uVar7 - 1;
            uVar10 = DAT_00411028;
          } while (uVar7 != 0);
          uVar7 = 0;
        }
        goto LAB_0040ca10;
      }
      if ((byte)uVar6 != bVar5) {
        FUN_004053f6(DAT_004216b0,0x409);
        uVar7 = extraout_ECX_00;
        goto LAB_0040ca10;
      }
      bVar5 = (&DAT_0043230f)[DAT_00411028];
      pwVar8 = (wchar_t *)CONCAT31((int3)((uint)pwVar8 >> 8),bVar5);
      uVar7 = DAT_00411028 - 1;
      if ((bVar5 & 0x40) != 0) {
        DAT_00411028 = DAT_00411028 - 2;
        (*(code *)(&PTR_FUN_00401460)[bVar5 & 0xf])();
        pwVar8 = extraout_ECX_01;
        uVar7 = DAT_00411028;
      }
      DAT_00411028 = uVar7;
      DAT_004216b0 = DAT_004216a4;
      if (local_5 == '\0') {
        local_5 = FUN_00409b97(pwVar8,(&DAT_00432310)[DAT_00411028]);
        uVar9 = CONCAT21(extraout_var_00,local_5);
        DAT_004216b0 = DAT_004216a4;
      }
      else {
        if (DAT_004216c0 == 10) {
          DAT_004216b0 = DAT_004216a4 + -1;
        }
        uVar9 = CONCAT21((short)((uint)pwVar8 >> 0x10),local_5);
        uVar6 = 0;
      }
    }
    else {
      DAT_00411028 = DAT_00411028 - 1;
      (*(code *)(&PTR_FUN_00401460)[(uint)pwVar8 & 0xf])();
      uVar7 = extraout_ECX;
LAB_0040ca10:
      uVar9 = CONCAT21((short)(uVar7 >> 0x10),cVar4);
      local_5 = cVar4;
    }
    bVar5 = (&DAT_00432310)[DAT_00411028];
    pwVar8 = (wchar_t *)CONCAT31(uVar9,bVar5);
    uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar5);
    cVar4 = local_5;
  } while( true );
}



uint __fastcall FUN_0040ca36(int param_1,short *param_2)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  undefined1 unaff_DI;
  
  psVar1 = param_2 + 1;
  do {
    sVar2 = *param_2;
    param_2 = param_2 + 1;
  } while (sVar2 != 0);
  uVar3 = param_1 + ((int)param_2 - (int)psVar1 >> 1);
  if (0x28 < uVar3) {
    FUN_0040c7c7(L"\n\t\t\t",unaff_DI);
    uVar3 = 0;
  }
  return uVar3;
}



void FUN_0040ca65(uint param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  _FILETIME local_60;
  _SYSTEMTIME local_58;
  WCHAR local_48 [20];
  WCHAR local_20 [12];
  uint local_8;
  
  local_8 = DAT_00411014 ^ (uint)&stack0xfffffffc;
  if ((param_1 | param_2) == 0) {
    FUN_004054d0(6);
  }
  else {
    BVar1 = FileTimeToLocalFileTime((FILETIME *)&param_1,&local_60);
    if (BVar1 != 0) {
      BVar1 = FileTimeToSystemTime(&local_60,&local_58);
      if (BVar1 != 0) {
        iVar2 = GetDateFormatW(0x400,0,&local_58,L"ddd, MMM dd yyyy",local_48,0x14);
        if (iVar2 != 0) {
          iVar2 = GetTimeFormatW(0x400,0,&local_58,L"HH:mm:ss",local_20,0xc);
          if (iVar2 != 0) {
            FUN_004054d0(4);
          }
        }
      }
    }
  }
  FUN_00410365(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __fastcall FUN_0040cb1f(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  wchar_t *pwVar2;
  wchar_t *_Str;
  wchar_t *pwVar3;
  short *psVar4;
  uint uVar5;
  int *local_270;
  undefined4 *local_26c;
  wchar_t *local_268;
  HANDLE local_264;
  uint local_260;
  _WIN32_FIND_DATAW local_25c;
  uint local_8;
  
  local_8 = DAT_00411014 ^ (uint)&stack0xfffffffc;
  local_270 = param_2;
  local_26c = param_1;
  FUN_004054d0(0xc);
  uVar5 = 0;
  local_260 = 0;
  while (param_1 != (undefined4 *)0x0) {
    pwVar2 = wcschr((wchar_t *)param_1[1],L'$');
    if (pwVar2 == (wchar_t *)0x0) {
      pwVar2 = wcspbrk((wchar_t *)param_1[1],L"*?");
      if (pwVar2 == (wchar_t *)0x0) {
        FUN_0040c7c7(&DAT_004023ec,(char)param_1[1]);
        uVar5 = FUN_0040ca36(uVar5,(short *)param_1[1]);
        uVar1 = uVar5;
      }
      else {
        pwVar2 = (wchar_t *)FUN_004079fa((wchar_t *)param_1[1],&local_25c,&local_264);
        uVar1 = local_260;
        while (pwVar2 != (wchar_t *)0x0) {
          psVar4 = (short *)FUN_0040f89e((wchar_t *)param_1[1],pwVar2);
          FUN_0040c7c7(&DAT_004023ec,(char)psVar4);
          uVar5 = FUN_0040ca36(uVar5,psVar4);
          free(psVar4);
          pwVar2 = FUN_00407b86(&local_25c,local_264);
          uVar1 = uVar5;
        }
      }
    }
    else {
      local_268 = (wchar_t *)0x0;
      _Str = (wchar_t *)FUN_0040ec83((wchar_t *)param_1[1],'\x01',&local_270);
      pwVar2 = wcstok_s(_Str,L" \t",&local_268);
      uVar5 = local_260;
      while (pwVar2 != (wchar_t *)0x0) {
        pwVar3 = wcspbrk(pwVar2,L"*?");
        if (pwVar3 == (wchar_t *)0x0) {
          FUN_0040c7c7(&DAT_004023ec,(char)pwVar2);
          uVar5 = FUN_0040ca36(uVar5,pwVar2);
        }
        else {
          pwVar3 = (wchar_t *)FUN_004079fa(pwVar2,&local_25c,&local_264);
          while (pwVar3 != (wchar_t *)0x0) {
            psVar4 = (short *)FUN_0040f89e(pwVar2,pwVar3);
            FUN_0040c7c7(&DAT_004023ec,(char)psVar4);
            uVar5 = FUN_0040ca36(uVar5,psVar4);
            free(psVar4);
            pwVar3 = FUN_00407b86(&local_25c,local_264);
          }
        }
        pwVar2 = wcstok_s((wchar_t *)0x0,L" \t",&local_268);
        param_1 = local_26c;
      }
      local_260 = uVar5;
      free(_Str);
      uVar5 = local_260;
      uVar1 = local_260;
    }
    local_260 = uVar1;
    param_1 = (undefined4 *)*param_1;
    local_26c = param_1;
  }
  FUN_00410365(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void FUN_0040cd28(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_004054d0(8);
  puVar3 = &DAT_00431f10;
  do {
    for (puVar2 = (undefined4 *)*puVar3; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2
        ) {
      if ((puVar2[2] != 0) && (*(int *)(puVar2[2] + 4) != 0)) {
        FUN_004054d0(0xe);
        for (puVar1 = *(undefined4 **)puVar2[2]; puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)*puVar1) {
          if (puVar1[1] != 0) {
            FUN_0040c7c7(L"\t\t%s\n",(char)puVar1[1]);
          }
        }
      }
    }
    puVar3 = puVar3 + 1;
  } while ((int)puVar3 < 0x432310);
  FUN_0040c7d6();
  FUN_0040c7a9();
  return;
}



void FUN_0040cd99(void)

{
  wchar_t *pwVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  FUN_004054d0(7);
  for (puVar2 = DAT_00421694; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    pwVar1 = L"%s::";
    if (*(char *)(puVar2 + 5) == '\0') {
      pwVar1 = L"%s:";
    }
    FUN_0040c7c7(pwVar1,(char)puVar2[2]);
    FUN_004054d0(10);
    piVar3 = (int *)puVar2[3];
    if (piVar3 != (int *)0x0) {
      iVar4 = piVar3[1];
      pwVar1 = L"%s\n";
      while( true ) {
        FUN_0040c7c7(pwVar1,(char)iVar4);
        piVar3 = (int *)*piVar3;
        if (piVar3 == (int *)0x0) break;
        pwVar1 = L"\t\t\t%s\n";
      }
    }
    FUN_0040c7d6();
  }
  FUN_0040c7c7(L"%s: ",0x38);
  for (puVar2 = DAT_004216a0; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    FUN_0040c7c7(&DAT_004023ec,(char)puVar2[1]);
  }
  FUN_0040c7d6();
  FUN_0040c7a9();
  return;
}



void FUN_0040ce39(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint unaff_EBP;
  wchar_t *pwVar3;
  int *piVar4;
  int iVar5;
  uint local_c;
  undefined4 *puStack_8;
  
  FUN_004054d0(9);
  local_c = 0;
  do {
    puVar1 = *(undefined4 **)((int)&DAT_00421490 + local_c);
    while (puVar1 != (undefined4 *)0x0) {
      FUN_0040c7c7(L"%s:%c",(char)puVar1[1]);
      DAT_00421ec8 = puVar1[1];
      puVar2 = (undefined4 *)puVar1[6];
      DAT_00421ed4 = DAT_00421ec8;
      DAT_00421ed8 = DAT_00421ec8;
      for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
        puVar1 = (undefined4 *)puVar2[1];
        FUN_004054d0(0xb);
        pwVar3 = L"dinsb";
        local_c = 1;
        do {
          if ((*(byte *)(puVar1 + 4) & (byte)local_c) != 0) {
            FUN_0040c7c7(L"-%c ",(char)*pwVar3);
            local_c = unaff_EBP;
          }
          local_c = local_c * 2;
          pwVar3 = pwVar3 + 1;
        } while (local_c < 0x10);
        FUN_0040cb1f((undefined4 *)*puVar1,(int *)puVar1[1]);
        FUN_004054d0(10);
        piVar4 = (int *)puVar1[2];
        if (piVar4 != (int *)0x0) {
          if (piVar4[1] == 0) goto LAB_0040cf27;
          iVar5 = piVar4[1];
          pwVar3 = L"%s\n";
          do {
            FUN_0040c7c7(pwVar3,(char)iVar5);
LAB_0040cf27:
            do {
              piVar4 = (int *)*piVar4;
              if (piVar4 == (int *)0x0) goto LAB_0040cf34;
            } while (piVar4[1] == 0);
            iVar5 = piVar4[1];
            pwVar3 = L"\t\t\t%s\n";
          } while( true );
        }
        FUN_0040c7d6();
LAB_0040cf34:
        puVar1 = puStack_8;
      }
      puVar1 = (undefined4 *)*puVar1;
      FUN_0040c7d6();
    }
    local_c = local_c + 4;
    if (0x1ff < local_c) {
      FUN_0040c7d6();
      FUN_0040c7a9();
      DAT_00421ec8 = 0;
      DAT_00421ed4 = 0;
      DAT_00421ed8 = 0;
      return;
    }
  } while( true );
}



uint FUN_0040cf8e(byte param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint *puVar4;
  char cVar5;
  ushort uVar6;
  char *pcVar7;
  undefined4 in_EAX;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  bool bVar13;
  
  pcVar7 = DAT_00432610;
  cVar5 = *DAT_00432610;
  uVar8 = CONCAT31((int3)((uint)in_EAX >> 8),cVar5);
  pcVar1 = DAT_00432610 + -8;
  if (cVar5 != '\x16') {
    if ((cVar5 != '\x17') || (*pcVar1 != '\x17')) goto LAB_0040d18a;
    puVar11 = *(ushort **)(DAT_00432610 + 4);
    puVar9 = *(ushort **)(DAT_00432610 + -4);
    do {
      uVar6 = *puVar9;
      bVar13 = uVar6 < *puVar11;
      if (uVar6 != *puVar11) {
LAB_0040d12c:
        uVar12 = -(uint)bVar13 | 1;
        goto LAB_0040d131;
      }
      if (uVar6 == 0) break;
      uVar6 = puVar9[1];
      bVar13 = uVar6 < puVar11[1];
      if (uVar6 != puVar11[1]) goto LAB_0040d12c;
      puVar9 = puVar9 + 2;
      puVar11 = puVar11 + 2;
    } while (uVar6 != 0);
    uVar12 = 0;
LAB_0040d131:
    uVar8 = (uint)param_1;
    if (uVar8 == 6) {
      uVar8 = (uint)(uVar12 != 0);
    }
    else if (uVar8 == 7) {
      uVar8 = (uint)(uVar12 == 0);
    }
    else if (uVar8 == 8) {
      uVar8 = (uint)(0 < (int)uVar12);
    }
    else {
      if (uVar8 != 9) {
        if (uVar8 != 10) {
          uVar8 = uVar8 - 0xb;
          if (uVar8 != 0) goto LAB_0040d18a;
          uVar8 = (uint)((int)uVar12 < 1);
          goto LAB_0040d180;
        }
        uVar12 = ~uVar12;
      }
      uVar8 = uVar12 >> 0x1f;
    }
LAB_0040d180:
    puVar4 = (uint *)(DAT_00432610 + -4);
    DAT_00432610 = pcVar1;
    *puVar4 = uVar8;
    *pcVar1 = '\x16';
    goto code_r0x0040d186;
  }
  if (*pcVar1 != '\x16') {
LAB_0040d18a:
    DAT_00432610 = pcVar1;
    return uVar8 & 0xffffff00;
  }
  uVar8 = param_1 - 1;
  switch(uVar8) {
  case 0:
    if (*(int *)(DAT_00432610 + -4) == 0) {
code_r0x0040cfd1:
      uVar8 = 0;
      if (*(int *)(DAT_00432610 + 4) == 0) goto code_r0x0040d0e8;
    }
    uVar8 = 1;
    goto code_r0x0040d0e8;
  case 1:
    uVar8 = 0;
    if (*(int *)(DAT_00432610 + -4) != 0) goto code_r0x0040cfd1;
    goto code_r0x0040d0e8;
  case 2:
    uVar8 = *(uint *)(DAT_00432610 + 4);
    puVar4 = (uint *)(DAT_00432610 + -4);
    DAT_00432610 = pcVar1;
    *puVar4 = *puVar4 | uVar8;
    break;
  case 3:
    uVar8 = *(uint *)(DAT_00432610 + 4);
    puVar4 = (uint *)(DAT_00432610 + -4);
    DAT_00432610 = pcVar1;
    *puVar4 = *puVar4 ^ uVar8;
    break;
  case 4:
    uVar8 = *(uint *)(DAT_00432610 + 4);
    puVar4 = (uint *)(DAT_00432610 + -4);
    DAT_00432610 = pcVar1;
    *puVar4 = *puVar4 & uVar8;
    break;
  case 5:
    uVar8 = *(uint *)(DAT_00432610 + 4);
    uVar12 = (uint)(uVar8 != *(uint *)(DAT_00432610 + -4));
    goto code_r0x0040d01b;
  case 6:
    uVar8 = (uint)(*(int *)(DAT_00432610 + 4) == *(int *)(DAT_00432610 + -4));
    goto code_r0x0040d0e8;
  case 7:
    uVar8 = *(uint *)(DAT_00432610 + -4);
    uVar12 = (uint)(*(int *)(DAT_00432610 + 4) < (int)uVar8);
    goto code_r0x0040d01b;
  case 8:
    uVar8 = *(uint *)(DAT_00432610 + -4);
    uVar12 = (uint)((int)uVar8 < *(int *)(DAT_00432610 + 4));
    goto code_r0x0040d01b;
  case 9:
    uVar8 = *(uint *)(DAT_00432610 + -4);
    uVar12 = (uint)(*(int *)(DAT_00432610 + 4) <= (int)uVar8);
    goto code_r0x0040d01b;
  case 10:
    uVar8 = *(uint *)(DAT_00432610 + -4);
    uVar12 = (uint)((int)uVar8 <= *(int *)(DAT_00432610 + 4));
code_r0x0040d01b:
    puVar4 = (uint *)(DAT_00432610 + -4);
    DAT_00432610 = pcVar1;
    *puVar4 = uVar12;
    break;
  case 0xb:
    puVar2 = (undefined4 *)(DAT_00432610 + 4);
    piVar3 = (int *)(DAT_00432610 + -4);
    DAT_00432610 = pcVar1;
    *piVar3 = *piVar3 >> ((byte)*puVar2 & 0x1f);
    break;
  case 0xc:
    puVar2 = (undefined4 *)(DAT_00432610 + 4);
    piVar3 = (int *)(DAT_00432610 + -4);
    DAT_00432610 = pcVar1;
    *piVar3 = *piVar3 << ((byte)*puVar2 & 0x1f);
    break;
  case 0xd:
    uVar8 = *(uint *)(DAT_00432610 + 4);
    piVar3 = (int *)(DAT_00432610 + -4);
    DAT_00432610 = pcVar1;
    *piVar3 = *piVar3 - uVar8;
    break;
  case 0xe:
    uVar8 = *(uint *)(DAT_00432610 + 4);
    piVar3 = (int *)(DAT_00432610 + -4);
    DAT_00432610 = pcVar1;
    *piVar3 = *piVar3 + uVar8;
    break;
  case 0xf:
    iVar10 = *(int *)(DAT_00432610 + 4);
    DAT_00432610 = pcVar1;
    if (iVar10 == 0) {
      FUN_004053f6(DAT_004216a4,0x437);
      iVar10 = *(int *)(pcVar7 + 4);
    }
    uVar8 = *(int *)(pcVar7 + -4) / iVar10;
    *(int *)(pcVar7 + -4) = *(int *)(pcVar7 + -4) % iVar10;
    break;
  case 0x10:
    iVar10 = *(int *)(DAT_00432610 + 4);
    DAT_00432610 = pcVar1;
    if (iVar10 == 0) {
      FUN_004053f6(DAT_004216a4,0x437);
      iVar10 = *(int *)(pcVar7 + 4);
    }
    uVar8 = *(int *)(pcVar7 + -4) / iVar10;
    pcVar1 = DAT_00432610;
    goto code_r0x0040d0e8;
  case 0x11:
    uVar8 = *(int *)(DAT_00432610 + -4) * *(int *)(DAT_00432610 + 4);
code_r0x0040d0e8:
    DAT_00432610 = pcVar1;
    *(uint *)(pcVar7 + -4) = uVar8;
    break;
  default:
    goto LAB_0040d18a;
  }
code_r0x0040d186:
  return CONCAT31((int3)(uVar8 >> 8),1);
}



uint FUN_0040d1de(byte param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*DAT_00432610 == '\x16') {
    uVar1 = (uint)param_1;
    if (uVar1 == 0x13) {
      *(int *)(DAT_00432610 + 4) = -*(int *)(DAT_00432610 + 4);
    }
    else if (uVar1 == 0x14) {
      *(uint *)(DAT_00432610 + 4) = ~*(uint *)(DAT_00432610 + 4);
    }
    else {
      in_EAX = uVar1 - 0x15;
      if (in_EAX != 0) goto LAB_0040d216;
      *(uint *)(DAT_00432610 + 4) = (uint)(*(int *)(DAT_00432610 + 4) == 0);
    }
    uVar1 = 1;
  }
  else {
LAB_0040d216:
    uVar1 = in_EAX & 0xffffff00;
  }
  return uVar1;
}



short * FUN_0040d21c(void)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  psVar3 = (short *)((int)DAT_00432614 + 2);
  sVar1 = *psVar3;
  DAT_00432614 = psVar3;
  if (sVar1 != 0) {
    do {
      psVar2 = DAT_00432614;
      if ((sVar1 == 0x22) && (psVar2 = DAT_00432614 + 1, *psVar2 != 0x22)) break;
      DAT_00432614 = psVar2 + 1;
      sVar1 = *DAT_00432614;
    } while (sVar1 != 0);
    if (*DAT_00432614 != 0) goto LAB_0040d281;
  }
  FUN_004053f6(DAT_004216a4,0x3fe);
LAB_0040d281:
  *DAT_00432614 = 0;
  DAT_00432614 = DAT_00432614 + 1;
  return psVar3;
}



short * FUN_0040d293(void)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  psVar3 = (short *)((int)DAT_00432614 + 2);
  sVar1 = *psVar3;
  DAT_00432614 = psVar3;
  if (sVar1 != 0) {
    do {
      if (sVar1 == 0x5e) {
        psVar2 = DAT_00432614 + 1;
        if (*psVar2 == 0x5d) {
          do {
            sVar1 = *psVar2;
            psVar2 = psVar2 + 1;
          } while (sVar1 != 0);
          memmove(DAT_00432614,DAT_00432614 + 1,((int)psVar2 - (int)(DAT_00432614 + 2) >> 1) * 2 + 2
                 );
        }
      }
      else if (sVar1 == 0x5d) break;
      DAT_00432614 = DAT_00432614 + 1;
      sVar1 = *DAT_00432614;
    } while (sVar1 != 0);
    if (*DAT_00432614 != 0) goto LAB_0040d337;
  }
  FUN_004053f6(DAT_004216a4,0x3fe);
LAB_0040d337:
  *DAT_00432614 = 0;
  DAT_00432614 = DAT_00432614 + 1;
  return psVar3;
}



void __fastcall FUN_0040d34a(byte param_1,undefined4 param_2)

{
  uint3 uVar2;
  uint uVar1;
  
  uVar2 = (uint3)param_1;
  if (param_1 == 0x19) {
    uVar1 = CONCAT31(uVar2,3);
  }
  else if (param_1 == 0) {
    uVar1 = CONCAT31(uVar2,4);
  }
  else if (param_1 < 0x16) {
    uVar1 = (uint)CONCAT11(param_1,(0x12 < param_1) + '\x01');
  }
  else {
    uVar1 = (uint)uVar2 << 8;
  }
  if ((&DAT_00401570)[(uVar1 & 0xff) + (uint)DAT_004323fe * 5] == '\0') {
    FUN_004053f6(DAT_004216a4,0x3ff);
  }
  DAT_00432608 = param_2;
  DAT_004323fe = (char)uVar1;
  DAT_00432602 = (undefined)(uVar1 >> 8);
  DAT_00432604._0_1_ = DAT_00432602;
  return;
}



short * FUN_0040d3b8(void)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  for (; (sVar1 = *DAT_00432614, sVar1 == 0x20 || (sVar1 == 9)); DAT_00432614 = DAT_00432614 + 1) {
  }
  psVar2 = DAT_00432614;
  if (sVar1 != 0x28) {
    FUN_004053f6(DAT_004216a4,0x3ff);
    psVar2 = DAT_00432614;
  }
  do {
    do {
      psVar2 = psVar2 + 1;
      sVar1 = *psVar2;
    } while (sVar1 == 0x20);
  } while (sVar1 == 9);
  DAT_00432614 = psVar2;
  psVar3 = psVar2;
  if (sVar1 == 0x22) {
    psVar2 = FUN_0040d21c();
    for (; (sVar1 = *DAT_00432614, sVar1 == 0x20 || (sVar1 == 9)); DAT_00432614 = DAT_00432614 + 1)
    {
    }
    if (sVar1 != 0x29) {
      FUN_004053f6(DAT_004216a4,0x3ff);
    }
    DAT_00432614 = DAT_00432614 + 1;
  }
  else {
LAB_0040d480:
    sVar1 = *DAT_00432614;
    DAT_00432614 = DAT_00432614 + 1;
    if (sVar1 == 0) {
      FUN_004053f6(DAT_004216a4,0x3ff);
      goto LAB_0040d4b9;
    }
    if (sVar1 != 0x29) goto code_r0x0040d4ae;
    *psVar3 = 0;
  }
  return psVar2;
code_r0x0040d4ae:
  if ((sVar1 != 0x20) && (sVar1 != 9)) {
LAB_0040d4b9:
    psVar3 = DAT_00432614;
  }
  goto LAB_0040d480;
}



void FUN_0040d4c9(void)

{
  ushort _C;
  ushort uVar1;
  bool bVar2;
  wint_t wVar3;
  int iVar4;
  int *piVar5;
  wchar_t *pwVar6;
  byte bVar7;
  ushort *puVar8;
  short *psVar9;
  ushort *puVar10;
  undefined **ppuVar11;
  
  for (; (_C = *DAT_00432614, _C == 0x20 || (_C == 9)); DAT_00432614 = DAT_00432614 + 1) {
  }
  puVar10 = DAT_00432614;
  if ((_C < 0x80) && (((&DAT_00401060)[_C] & 2) != 0)) {
    ppuVar11 = &PTR_DAT_00411070;
    puVar8 = (ushort *)PTR_DAT_00411070;
    if (PTR_DAT_00411070 == (undefined *)0x0) goto LAB_0040d586;
    do {
      uVar1 = *puVar8;
      for (puVar10 = DAT_00432614; (uVar1 != 0 && (*puVar10 == uVar1)); puVar10 = puVar10 + 1) {
        puVar8 = puVar8 + 1;
        uVar1 = *puVar8;
      }
      if (*puVar8 == 0) goto LAB_0040d586;
      ppuVar11 = (undefined **)((ushort **)ppuVar11 + 2);
      puVar8 = (ushort *)*ppuVar11;
    } while (puVar8 != (ushort *)0x0);
  }
  else {
    ppuVar11 = (undefined **)&DAT_00411118;
LAB_0040d586:
    DAT_00432614 = puVar10;
    if ((ushort *)*ppuVar11 != (ushort *)0x0) {
      bVar7 = *(byte *)((ushort **)ppuVar11 + 1);
      psVar9 = (short *)0x0;
      goto LAB_0040d58f;
    }
  }
  if (_C == 0x2d) {
    DAT_00432614 = DAT_00432614 + 1;
    bVar7 = ((DAT_00432602 != '\x16') - 1U & 0xfb) + 0x13;
    psVar9 = (short *)0x0;
  }
  else if (_C == 0x22) {
    psVar9 = FUN_0040d21c();
    bVar7 = 0x17;
  }
  else if (_C == 0x5b) {
    psVar9 = FUN_0040d293();
    bVar7 = 0x18;
  }
  else {
    iVar4 = iswdigit(_C);
    if (iVar4 == 0) {
      if (_C == 0) {
        psVar9 = (short *)0x0;
        DAT_004323ff = 1;
        bVar7 = 0;
        goto LAB_0040d58f;
      }
      iVar4 = _wcsnicmp((wchar_t *)DAT_00432614,L"DEFINED",7);
      if (iVar4 == 0) {
        DAT_00432614 = DAT_00432614 + 7;
        pwVar6 = FUN_0040d3b8();
        bVar2 = FUN_0040d938(pwVar6);
        psVar9 = (short *)(uint)bVar2;
      }
      else {
        iVar4 = _wcsnicmp((wchar_t *)DAT_00432614,L"EXISTS",6);
        if (iVar4 == 0) {
          DAT_00432614 = DAT_00432614 + 6;
        }
        else {
          iVar4 = _wcsnicmp((wchar_t *)DAT_00432614,L"EXIST",5);
          if (iVar4 != 0) {
            FUN_004053f6(DAT_004216a4,0x3ff);
            return;
          }
          DAT_00432614 = DAT_00432614 + 5;
        }
        pwVar6 = FUN_0040d3b8();
        iVar4 = _waccess(pwVar6,0);
        psVar9 = (short *)(uint)(iVar4 == 0);
      }
    }
    else {
      piVar5 = _errno();
      *piVar5 = 0;
      psVar9 = (short *)wcstol((wchar_t *)DAT_00432614,(wchar_t **)&DAT_00432614,0);
      piVar5 = _errno();
      iVar4 = DAT_004216a4;
      if (*piVar5 == 0x22) {
        *DAT_00432614 = 0;
        FUN_004053f6(iVar4,0x436);
      }
      wVar3 = towupper(*DAT_00432614);
      if (wVar3 == 0x4c) {
        DAT_00432614 = DAT_00432614 + 1;
      }
    }
    bVar7 = 0x16;
  }
LAB_0040d58f:
  FUN_0040d34a(bVar7,psVar9);
  return;
}



void FUN_0040d7a4(void)

{
  undefined4 uVar1;
  
  if (DAT_00432610 < &DAT_00434620) {
    FUN_004053f6(DAT_004216a4,0x3ff);
  }
  if (&DAT_00434618 < DAT_0043260c) {
    FUN_004053f6(DAT_004216a4,0x412);
  }
  uVar1 = DAT_00432610[1];
  *DAT_0043260c = *DAT_00432610;
  DAT_0043260c[1] = uVar1;
  DAT_0043260c = DAT_0043260c + 2;
  DAT_00432610 = DAT_00432610 + -2;
  return;
}



bool FUN_0040d815(void)

{
  byte bVar1;
  wchar_t *pwVar2;
  char cVar3;
  uint uVar4;
  code *pcVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 unaff_ESI;
  
  DAT_0043260c = &DAT_00432620;
  DAT_00432610 = (uint *)&DAT_00434620;
  DAT_004323ff = '\0';
  DAT_004323fe = 3;
  DAT_00432602 = 0x19;
  FUN_0040d34a(0x19,0);
  puVar7 = DAT_00432610;
  uVar4 = DAT_00432608;
  *DAT_00432610 = DAT_00432604;
  puVar7[1] = uVar4;
LAB_0040d90e:
  do {
    if (DAT_004323ff != '\0') {
      if (puVar7 != (uint *)&DAT_00434618) {
        FUN_004053f6(DAT_004216a4,0x3ff);
      }
      puVar8 = &DAT_00432620;
      puVar7 = DAT_00432610;
      if (&DAT_00432620 < DAT_0043260c) {
        do {
          bVar1 = *(byte *)puVar8;
          if (bVar1 < 0x16) {
            pcVar5 = FUN_0040d1de;
            if (bVar1 < 0x13) {
              pcVar5 = FUN_0040cf8e;
            }
            cVar3 = (*pcVar5)(bVar1,unaff_ESI);
            puVar7 = DAT_00432610;
            if (cVar3 == '\0') {
              FUN_004053f6(DAT_004216a4,0x438);
              puVar7 = DAT_00432610;
            }
          }
          else {
            pwVar2 = (wchar_t *)puVar8[1];
            puVar6 = puVar7 + 2;
            DAT_00432610 = puVar6;
            if (bVar1 == 0x18) {
              uVar4 = FUN_00406e33(pwVar2,0,'\x01','\0',(void **)0x0);
              puVar7 = DAT_00432610;
              DAT_00432610[1] = uVar4;
              *(byte *)puVar7 = 0x16;
            }
            else {
              *puVar6 = *puVar8;
              puVar7[3] = (uint)pwVar2;
              puVar7 = puVar6;
            }
          }
          puVar8 = puVar8 + 2;
        } while (puVar8 < DAT_0043260c);
      }
      if ((puVar7 == (uint *)&DAT_00434620) && (DAT_00434620 == '\x16')) {
        return DAT_00434624 != 0;
      }
      FUN_004053f6(DAT_004216a4,0x3ff);
      return false;
    }
    FUN_0040d4c9();
    if ((char)DAT_00432604 != '\x19') {
      while( true ) {
        bVar1 = (&DAT_00401590)[DAT_00432604 & 0xff];
        if ((byte)(&DAT_00401590)[*(byte *)DAT_00432610] <= bVar1 &&
            bVar1 != (&DAT_00401590)[*(byte *)DAT_00432610]) break;
        if (bVar1 == 0) goto LAB_0040d8d9;
        FUN_0040d7a4();
      }
    }
    uVar4 = DAT_00432608;
    if (DAT_00432610 == (uint *)&DAT_00435618) {
      FUN_004053f6(DAT_004216a4,0x412);
      puVar7 = DAT_00432610;
    }
    else {
      puVar7 = DAT_00432610 + 2;
      *puVar7 = DAT_00432604;
      DAT_00432610[3] = uVar4;
      DAT_00432610 = puVar7;
    }
  } while( true );
LAB_0040d8d9:
  while (*(byte *)DAT_00432610 != 0x19) {
    FUN_0040d7a4();
  }
  if (DAT_00432610 < &DAT_00434620) {
    FUN_004053f6(DAT_004216a4,0x3ff);
  }
  puVar7 = DAT_00432610 + -2;
  DAT_00432610 = puVar7;
  goto LAB_0040d90e;
}



bool __fastcall FUN_0040d938(wchar_t *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  uint uVar3;
  wchar_t *local_8;
  
  local_8 = (wchar_t *)0x0;
  pwVar1 = wcstok_s(param_1,L" \t",&local_8);
  pwVar2 = wcstok_s((wchar_t *)0x0,L" \t",&local_8);
  if (pwVar2 != (wchar_t *)0x0) {
    FUN_004053f6(DAT_004216a4,0x409);
  }
  if (pwVar1 == (wchar_t *)0x0) {
    FUN_004053f6(DAT_004216a4,0x417);
  }
  uVar3 = FUN_0040ab97((ushort *)pwVar1);
  return uVar3 != 0;
}



char __fastcall FUN_0040d9a7(wchar_t *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  
  if (*param_1 == L'\0') {
    FUN_004053f6(DAT_004216a4,0x3fa);
  }
  if (param_2 == '\x04') {
LAB_0040d9f9:
    cVar2 = FUN_0040d938(param_1);
  }
  else {
    if (param_2 != '\x05') {
      if (param_2 == '\x06') goto LAB_0040d9f9;
      if (param_2 != '\a') {
        DAT_00432614 = param_1;
        bVar1 = FUN_0040d815();
        return bVar1;
      }
    }
    bVar1 = FUN_0040d938(param_1);
    cVar2 = '\x01' - bVar1;
  }
  return cVar2;
}



int * __fastcall
FUN_0040da04(wchar_t *param_1,rsize_t param_2,wchar_t *param_3,short *param_4,
            LPWIN32_FIND_DATAW param_5)

{
  wchar_t wVar1;
  short sVar2;
  DWORD DVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  wchar_t *pwVar12;
  int iVar13;
  wchar_t *pwVar14;
  int iVar15;
  rsize_t rVar16;
  rsize_t _MaxCount;
  wchar_t *local_20;
  int *local_14;
  wchar_t *local_10;
  
  local_14 = DAT_00421694;
  if (DAT_00421694 == (int *)0x0) {
    return (int *)0x0;
  }
LAB_0040da41:
  local_10 = (wchar_t *)local_14[2];
  local_20 = wcsrchr(local_10,L'.');
  iVar5 = FUN_0040fe3d(local_20,param_4);
  if (iVar5 == 0) {
    pwVar8 = local_10 + 1;
    *param_1 = L'\0';
    wVar1 = *pwVar8;
    pwVar9 = pwVar8;
    while (wVar1 != L'\0') {
      if (wVar1 == L'{') {
        wVar1 = L'{';
        pwVar14 = pwVar9;
        goto LAB_0040dac5;
      }
      if (wVar1 == L'^') {
        pwVar9 = pwVar9 + 1;
      }
      else if (wVar1 == L'\"') {
        do {
          pwVar9 = pwVar9 + 1;
        } while (*pwVar9 != L'\"');
      }
      pwVar9 = pwVar9 + 1;
      wVar1 = *pwVar9;
    }
    goto LAB_0040dbbe;
  }
  goto LAB_0040de40;
  while( true ) {
    if (wVar1 == L'^') {
      pwVar14 = pwVar14 + 1;
    }
    pwVar14 = pwVar14 + 1;
    wVar1 = *pwVar14;
    if (wVar1 == L'\0') break;
LAB_0040dac5:
    if (wVar1 == L'}') break;
  }
  iVar5 = (int)pwVar14 + (-2 - (int)pwVar9) >> 1;
  pwVar12 = param_3;
  if (*param_3 == L'\"') {
    pwVar12 = param_3 + 1;
  }
  pwVar7 = pwVar9 + 1;
  if (iVar5 != 0) {
    iVar13 = (int)pwVar12 - (int)pwVar7;
    iVar15 = iVar5;
    do {
      if ((*pwVar7 == L'\\') || (*pwVar7 == L'/')) {
        sVar2 = *(short *)(iVar13 + (int)pwVar7);
        if ((sVar2 != 0x5c) && (sVar2 != 0x2f)) goto LAB_0040de40;
      }
      else {
        iVar6 = _wcsnicmp(pwVar7,(wchar_t *)(iVar13 + (int)pwVar7),1);
        if (iVar6 != 0) goto LAB_0040de40;
      }
      iVar15 = iVar15 + -1;
      pwVar7 = pwVar7 + 1;
    } while (iVar15 != 0);
  }
  pwVar12 = param_3 + iVar5 + 1;
  pwVar7 = wcschr(pwVar12,L'\\');
  local_20 = pwVar9;
  if (((pwVar7 != (wchar_t *)0x0) || (pwVar7 = wcschr(pwVar12,L'/'), pwVar7 != (wchar_t *)0x0)) &&
     ((pwVar7 != pwVar12 || ((pwVar14[-1] == L'\\' || (pwVar14[-1] == L'/')))))) goto LAB_0040de40;
LAB_0040dbbe:
  if (*local_10 == L'{') {
    wVar1 = *pwVar8;
    pwVar9 = pwVar8;
    while ((wVar1 != L'\0' && (wVar1 != L'}'))) {
      if (wVar1 == L'^') {
        pwVar9 = pwVar9 + 1;
      }
      pwVar9 = pwVar9 + 1;
      wVar1 = *pwVar9;
    }
    rVar16 = (int)pwVar9 - (int)pwVar8 >> 1;
    if (rVar16 == 0) {
      if (*param_3 == L'\"') {
        rVar16 = 3;
        _MaxCount = 3;
        pwVar9 = L"\".\\";
      }
      else {
        rVar16 = 2;
        _MaxCount = 2;
        pwVar9 = L".\\";
      }
      wcsncpy_s(param_1,param_2,pwVar9,_MaxCount);
    }
    else {
      wcsncpy_s(param_1,param_2,pwVar8,rVar16);
      pwVar8 = pwVar8 + rVar16;
      if (pwVar8[-1] != L'\\') {
        param_1[rVar16] = L'\\';
        rVar16 = rVar16 + 1;
      }
    }
    local_10 = pwVar8 + 1;
    pwVar8 = wcsrchr(param_3,L'\\');
    pwVar9 = wcsrchr(param_3,L'/');
    if (pwVar8 < pwVar9) {
      pwVar8 = pwVar9;
    }
    if (pwVar8 == (wchar_t *)0x0) {
      pwVar8 = param_3 + 1;
      if (*param_3 != L'\"') {
        pwVar8 = param_3;
      }
      wcscpy_s(param_1 + rVar16,param_2 - rVar16,pwVar8);
      iVar5 = -(int)pwVar8;
    }
    else {
      wcscpy_s(param_1 + rVar16,param_2 - rVar16,pwVar8 + 1);
      iVar5 = -2 - (int)pwVar8;
    }
    iVar5 = rVar16 + ((int)param_4 + iVar5 >> 1);
  }
  else {
    pwVar8 = param_3;
    if (*pwVar9 != L'\0') {
      pwVar8 = wcsrchr(param_3,L'.');
      wVar1 = *pwVar8;
      while (wVar1 != L':') {
        if (wVar1 == L'\\') goto LAB_0040dd3b;
        if ((wVar1 == L'/') || (pwVar8 <= param_3)) break;
        pwVar8 = pwVar8 + -1;
        wVar1 = *pwVar8;
      }
      if (wVar1 != L':') {
LAB_0040dd3b:
        if ((wVar1 != L'\\') && (wVar1 != L'/')) goto LAB_0040dd4b;
      }
      pwVar8 = pwVar8 + 1;
    }
LAB_0040dd4b:
    iVar5 = 0;
    rVar16 = (int)param_4 - (int)pwVar8 >> 1;
    if ((pwVar8 != param_3) && (*param_3 == L'\"')) {
      iVar5 = 1;
      *param_1 = L'\"';
    }
    if ((int)(param_2 - iVar5) <= (int)rVar16) {
      FUN_004053f6(0,0x434);
    }
    wcsncpy_s(param_1 + iVar5,param_2 - iVar5,pwVar8,rVar16);
    iVar5 = rVar16 + iVar5;
  }
  rVar16 = (int)local_20 - (int)local_10 >> 1;
  if ((int)(param_2 - iVar5) <= (int)rVar16) {
    FUN_004053f6(0,0x434);
  }
  wcsncpy_s(param_1 + iVar5,param_2 - iVar5,local_10,rVar16);
  if ((*param_1 == L'\"') && (iVar15 = rVar16 + iVar5, param_1[iVar15 + -1] != L'\"')) {
    if ((int)((param_2 - rVar16) - iVar5) < 2) {
      FUN_004053f6(0,0x434);
    }
    rVar16 = rVar16 + 1;
    param_1[iVar15] = L'\"';
  }
  param_1[rVar16 + iVar5] = L'\0';
  puVar10 = FUN_0040e3b9(param_1);
  if (puVar10 != (undefined4 *)0x0) {
    DVar3 = puVar10[4];
    DVar4 = puVar10[5];
    (param_5->ftCreationTime).dwLowDateTime = DVar3;
    (param_5->ftCreationTime).dwHighDateTime = DVar4;
    (param_5->ftLastWriteTime).dwLowDateTime = DVar3;
    (param_5->ftLastWriteTime).dwHighDateTime = DVar4;
    return local_14;
  }
  uVar11 = FUN_00407c98(param_1,param_5);
  if ((char)uVar11 != '\0') {
    return local_14;
  }
LAB_0040de40:
  local_14 = (int *)*local_14;
  if (local_14 == (int *)0x0) {
    return (int *)0x0;
  }
  goto LAB_0040da41;
}



void FUN_0040de73(void)

{
  wchar_t *_Str1;
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  undefined4 **ppuVar3;
  int iVar4;
  wchar_t wVar5;
  undefined4 *puVar6;
  wchar_t *pwVar7;
  size_t _MaxCount;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  wchar_t *pwVar11;
  int *local_14;
  int *local_8;
  
  puVar10 = DAT_00421694;
  local_14 = DAT_004216a0;
  local_8 = (int *)0x0;
  DAT_00421694 = (undefined4 *)0x0;
  if (DAT_004216a0 != (int *)0x0) {
    do {
      _Str1 = (wchar_t *)local_14[1];
      pwVar7 = _Str1;
      do {
        wVar5 = *pwVar7;
        pwVar7 = pwVar7 + 1;
      } while (wVar5 != L'\0');
      _MaxCount = (int)pwVar7 - (int)(_Str1 + 1) >> 1;
      puVar1 = puVar10;
      while (puVar1 != (undefined4 *)0x0) {
        pwVar7 = (wchar_t *)puVar1[2];
        wVar5 = L'{';
        if (*pwVar7 == L'{') {
          do {
            pwVar11 = pwVar7;
            if (wVar5 == L'^') {
              pwVar11 = pwVar7 + 1;
            }
            pwVar7 = pwVar11 + 1;
            wVar5 = *pwVar7;
          } while (wVar5 != L'}');
          pwVar7 = pwVar11 + 2;
        }
        iVar4 = _wcsnicmp(_Str1,pwVar7,_MaxCount);
        if ((iVar4 == 0) && ((pwVar7[_MaxCount] == L'.' || (pwVar7[_MaxCount] == L'{')))) {
          puVar6 = (undefined4 *)*puVar1;
          puVar9 = puVar6;
          if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
            *(undefined4 *)puVar1[1] = puVar6;
            puVar6 = (undefined4 *)*puVar1;
            puVar9 = puVar10;
          }
          if (puVar6 != (undefined4 *)0x0) {
            puVar6[1] = puVar1[1];
            puVar6 = (undefined4 *)*puVar1;
          }
          *puVar1 = 0;
          piVar8 = DAT_00421694;
          puVar10 = puVar9;
          if (DAT_00421694 == (undefined4 *)0x0) {
LAB_0040df62:
            puVar9 = (undefined4 *)puVar1[3];
            while (puVar9 != (undefined4 *)0x0) {
              DAT_0043562c = *(char *)(puVar1 + 5);
              if (DAT_0043562c != '\0') {
                DAT_00435630 = puVar1[2];
              }
              FUN_0040e549((wchar_t *)puVar9[1],&local_8,(int **)0x0,(ushort *)0x0,0,0,0);
              puVar9 = (undefined4 *)*puVar9;
              DAT_0043562c = '\0';
            }
            puVar1[4] = local_8;
            local_8 = (int *)0x0;
            ppuVar2 = &DAT_00421694;
            for (ppuVar3 = (undefined4 **)DAT_00421694; ppuVar3 != (undefined4 **)0x0;
                ppuVar3 = (undefined4 **)*ppuVar3) {
              ppuVar2 = ppuVar3;
            }
            *ppuVar2 = puVar1;
            puVar1 = puVar6;
          }
          else {
            while (iVar4 = _wcsicmp((wchar_t *)piVar8[2],(wchar_t *)puVar1[2]), iVar4 != 0) {
              piVar8 = (int *)*piVar8;
              if (piVar8 == (int *)0x0) goto LAB_0040df62;
            }
            free((void *)puVar1[2]);
            while (puVar9 = (undefined4 *)puVar1[3], puVar9 != (undefined4 *)0x0) {
              puVar1[3] = *puVar9;
              free((void *)puVar9[1]);
              *puVar9 = DAT_00432618;
              DAT_00432618 = puVar9;
            }
            free(puVar1);
            puVar1 = puVar6;
          }
        }
        else {
          puVar1 = (undefined4 *)*puVar1;
        }
      }
      local_14 = (int *)*local_14;
    } while (local_14 != (int *)0x0);
  }
  while (puVar10 != (undefined4 *)0x0) {
    if ((DAT_0041148c & 1) != 0) {
      FUN_004053f6(0,0xfa5);
    }
    free((void *)puVar10[2]);
    FUN_00404be9((undefined4 *)puVar10[3]);
    FUN_00404be9((undefined4 *)puVar10[4]);
    puVar1 = (undefined4 *)*puVar10;
    free(puVar10);
    puVar10 = puVar1;
  }
  return;
}



void __fastcall
FUN_0040e069(int param_1,wchar_t *param_2,undefined4 param_3,uint param_4,uint param_5,int *param_6,
            int *param_7,int *param_8,uint *param_9,wchar_t **param_10)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined auStack_28c [4];
  undefined8 uStack_288;
  int *piStack_27c;
  int iStack_278;
  int *local_274;
  int *local_270;
  int *local_26c;
  uint *local_268;
  int *piStack_264;
  _WIN32_FIND_DATAW _Stack_260;
  uint local_c;
  
  local_c = DAT_00411014 ^ (uint)auStack_28c;
  local_26c = param_6;
  local_274 = param_7;
  local_270 = param_8;
  local_268 = param_9;
  pwVar1 = wcsrchr(*(wchar_t **)(param_1 + 4),L'.');
  if ((pwVar1 != (wchar_t *)0x0) &&
     (piStack_264 = FUN_0040da04(param_2,0x101,*(wchar_t **)(param_1 + 4),pwVar1,&_Stack_260),
     piStack_264 != (int *)0x0)) {
    uStack_288 = FUN_004079e0((byte *)&_Stack_260);
    *param_10 = param_2;
    piVar8 = local_274;
    do {
      piVar8 = (int *)*piVar8;
      if (piVar8 == (int *)0x0) goto LAB_0040e114;
      iVar2 = _wcsicmp((wchar_t *)piVar8[1],param_2);
    } while (iVar2 != 0);
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
LAB_0040e114:
    piStack_27c = (int *)0x0;
    iStack_278 = FUN_004038ee(param_2,*(byte *)(param_1 + 8),&uStack_288,(int *************)0x0,
                              &piStack_27c);
    if (piStack_27c != (int *)0x0) {
      iVar2 = FUN_00404e5b(piStack_27c);
      iStack_278 = iStack_278 + iVar2;
      FUN_00404e79(&piStack_27c);
    }
    *local_270 = *local_270 + iStack_278;
    if (((((*(byte *)(param_1 + 8) & 0x10) != 0) || (param_5 < uStack_288._4_4_)) ||
        ((param_5 <= uStack_288._4_4_ && (param_4 < (uint)uStack_288)))) ||
       (((uVar6 = uStack_288._4_4_, uVar7 = (uint)uStack_288, DAT_004216b6 != '\0' &&
         (param_4 == (uint)uStack_288)) && (param_5 == uStack_288._4_4_)))) {
      if (piVar8 == (int *)0x0) {
        puVar3 = FUN_0040e215();
        pvVar4 = FUN_0040e267(param_2);
        piVar8 = local_26c;
        puVar3[1] = pvVar4;
        FUN_0040e36c(local_26c,puVar3);
        if (*local_274 == 0) {
          *local_274 = *piVar8;
        }
      }
      uVar6 = uStack_288._4_4_;
      uVar7 = (uint)uStack_288;
      if ((*(byte *)(param_1 + 8) & 0x11) == 1) {
        FUN_004054d0(3);
        uVar6 = uStack_288._4_4_;
        uVar7 = (uint)uStack_288;
      }
    }
    uVar9 = local_268[1];
    uVar5 = *local_268;
    if ((uVar9 < uVar6) || ((uVar9 <= uVar6 && (uVar5 <= uVar7)))) {
      uVar5 = uVar7;
      uVar9 = uVar6;
    }
    *local_268 = uVar5;
    local_268[1] = uVar9;
  }
  FUN_00410365(local_c ^ (uint)auStack_28c);
  return;
}



undefined4 * FUN_0040e215(void)

{
  undefined4 *puVar1;
  
  if (DAT_00432618 == (undefined4 *)0x0) {
    if (DAT_00435624 < 8) {
      DAT_00435620 = (undefined4 *)FUN_0040ac3c(0x8000);
      DAT_00435624 = 0x8000;
    }
    DAT_00435624 = DAT_00435624 - 8;
    puVar1 = DAT_00435620;
    DAT_00435620 = DAT_00435620 + 2;
  }
  else {
    puVar1 = DAT_00432618;
    DAT_00432618 = (undefined4 *)*DAT_00432618;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  return puVar1;
}



void * __fastcall FUN_0040e267(short *param_1)

{
  short sVar1;
  longlong lVar2;
  void *_Dst;
  short *psVar3;
  uint uVar4;
  
  psVar3 = param_1;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  uVar4 = ((int)psVar3 - (int)(param_1 + 1) >> 1) + 1;
  lVar2 = (ulonglong)uVar4 * 2;
  _Dst = FUN_0040ac3c(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  memcpy(_Dst,param_1,uVar4 * 2);
  return _Dst;
}



undefined2 * __fastcall FUN_0040e2ab(short *param_1)

{
  short sVar1;
  longlong lVar2;
  undefined2 *puVar3;
  short *psVar4;
  int iVar5;
  
  psVar4 = param_1;
  do {
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar1 != 0);
  iVar5 = (int)psVar4 - (int)(param_1 + 1) >> 1;
  lVar2 = (ulonglong)(iVar5 + 3) * 2;
  puVar3 = (undefined2 *)FUN_0040ac3c(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  *puVar3 = 0x22;
  memcpy(puVar3 + 1,param_1,iVar5 * 2);
  puVar3[iVar5 + 1] = 0x22;
  puVar3[iVar5 + 2] = 0;
  return puVar3;
}



wchar_t * __fastcall FUN_0040e311(short *param_1,wchar_t *param_2)

{
  short sVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  short *psVar4;
  uint _SizeInWords;
  
  psVar4 = param_1;
  do {
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar1 != 0);
  pwVar3 = param_2;
  do {
    wVar2 = *pwVar3;
    pwVar3 = pwVar3 + 1;
  } while (wVar2 != L'\0');
  _SizeInWords = ((int)psVar4 - (int)(param_1 + 1) >> 1) + 1 +
                 ((int)pwVar3 - (int)(param_2 + 1) >> 1);
  pwVar3 = (wchar_t *)FUN_0041000e(param_1,_SizeInWords);
  wcscat_s(pwVar3,_SizeInWords,param_2);
  return pwVar3;
}



void __fastcall FUN_0040e36c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
    param_1 = puVar1;
    puVar2 = (undefined4 *)*puVar1;
  }
  *param_1 = param_2;
  return;
}



ushort __fastcall FUN_0040e381(wint_t *param_1)

{
  wint_t wVar1;
  ushort uVar2;
  
  uVar2 = 0;
  while( true ) {
    wVar1 = *param_1;
    if (wVar1 == 0) break;
    if (wVar1 == 0x2f) {
      wVar1 = 0x5c;
    }
    else {
      wVar1 = towupper(wVar1);
    }
    uVar2 = uVar2 + wVar1;
    param_1 = param_1 + 1;
  }
  return uVar2 & 0x7f;
}



undefined4 * __fastcall FUN_0040e3b9(wchar_t *param_1)

{
  wchar_t wVar1;
  bool bVar2;
  ushort uVar3;
  undefined2 extraout_var;
  undefined4 *puVar4;
  int iVar5;
  wchar_t *pwVar6;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  uint uVar7;
  
  bVar2 = false;
  if (*param_1 == L'\0') {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar3 = FUN_0040e381((wint_t *)param_1);
    puVar4 = FUN_0040fd85(param_1,CONCAT22(extraout_var,uVar3));
    if (puVar4 == (undefined4 *)0x0) {
      iVar5 = wcsncmp(param_1,L".\\",2);
      if ((iVar5 == 0) || (iVar5 = wcsncmp(param_1,L"./",2), iVar5 == 0)) {
        pwVar6 = param_1 + 2;
      }
      else {
        pwVar6 = param_1;
        do {
          wVar1 = *pwVar6;
          pwVar6 = pwVar6 + 1;
        } while (wVar1 != L'\0');
        uVar7 = ((int)pwVar6 - (int)(param_1 + 1) >> 1) + 3;
        pwVar6 = (wchar_t *)
                 FUN_0040ac3c(-(uint)((int)((ulonglong)uVar7 * 2 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar7 * 2));
        wcscpy_s(pwVar6,uVar7,L".\\");
        wcscat_s(pwVar6,uVar7,param_1);
        bVar2 = true;
      }
      uVar3 = FUN_0040e381((wint_t *)pwVar6);
      puVar4 = FUN_0040fd85(pwVar6,CONCAT22(extraout_var_00,uVar3));
      if (puVar4 == (undefined4 *)0x0) {
        if (pwVar6 != param_1 + 2) {
          pwVar6[1] = L'/';
        }
        uVar3 = FUN_0040e381((wint_t *)pwVar6);
        puVar4 = FUN_0040fd85(pwVar6,CONCAT22(extraout_var_01,uVar3));
        if (bVar2) {
          free(pwVar6);
        }
        if (puVar4 != (undefined4 *)0x0) {
          return puVar4;
        }
        if (*param_1 == L'\"') {
          pwVar6 = FUN_0040ff51(param_1);
        }
        else {
          pwVar6 = param_1;
          do {
            wVar1 = *pwVar6;
            pwVar6 = pwVar6 + 1;
          } while (wVar1 != L'\0');
          uVar7 = ((int)pwVar6 - (int)(param_1 + 1) >> 1) + 3;
          pwVar6 = (wchar_t *)
                   FUN_0040ac3c(-(uint)((int)((ulonglong)uVar7 * 2 >> 0x20) != 0) |
                                (uint)((ulonglong)uVar7 * 2));
          wcscpy_s(pwVar6,uVar7,L"\"");
          wcscat_s(pwVar6,uVar7,param_1);
          wcscat_s(pwVar6,uVar7,L"\"");
        }
        uVar3 = FUN_0040e381((wint_t *)pwVar6);
        puVar4 = FUN_0040fd85(pwVar6,CONCAT22(extraout_var_02,uVar3));
      }
      else if (!bVar2) {
        return puVar4;
      }
      free(pwVar6);
    }
  }
  return puVar4;
}



// WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe

void __fastcall
FUN_0040e549(wchar_t *param_1,int **param_2,int **param_3,ushort *param_4,int param_5,int param_6,
            uint param_7)

{
  short sVar1;
  ushort uVar2;
  wchar_t wVar3;
  uint uVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  int **ppiVar7;
  int *piVar8;
  ushort *puVar9;
  int **ppiVar10;
  int iVar11;
  undefined4 *puVar12;
  bool bVar13;
  char cVar14;
  int *local_234;
  void *local_230;
  int **local_22c;
  undefined4 local_228;
  int **local_224;
  wchar_t *local_220;
  int **local_21c;
  byte local_217;
  char local_216;
  char local_215;
  undefined4 local_214;
  undefined2 local_10;
  wchar_t local_e;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_00411014 ^ (uint)&stack0xfffffffc;
  local_22c = param_3;
  if (param_2 == (int **)0x0) {
    local_21c = (int **)0x0;
  }
  else if (param_3 == (int **)0x0) {
    local_21c = (int **)*param_2;
    if (local_21c != (int **)0x0) {
      for (; *local_21c != (int *)0x0; local_21c = (int **)*local_21c) {
      }
    }
  }
  else {
    local_21c = (int **)*param_3;
  }
  wVar3 = *param_1;
  local_224 = param_2;
  if (wVar3 != L'\0') {
    local_228 = 0x5e;
    cVar14 = '\0';
    do {
      while (local_215 = cVar14, wVar3 == L'$') {
        pwVar5 = param_1 + 1;
        local_217 = (byte)param_7 & 4;
        if (*pwVar5 == L'\0') {
          if ((param_7 & 4) == 0) {
            FUN_004053f6(DAT_004216b0,0x3ea);
            local_217 = 0;
            goto LAB_0040e66b;
          }
LAB_0040ea6f:
          if (param_3 != (int **)0x0) {
            *param_3 = (int *)local_21c;
          }
          goto LAB_0040e616;
        }
LAB_0040e66b:
        if ((local_215 == '\0') && (*pwVar5 == L'^')) {
          pwVar5 = param_1 + 2;
          uVar4 = FUN_00403702(*pwVar5);
          if (((char)uVar4 == '\0') && (local_217 != 0)) goto LAB_0040ea6f;
          FUN_004053f6(DAT_004216b0,0x3e9);
        }
        wVar3 = *pwVar5;
        if (wVar3 == L'$') {
          pwVar5 = FUN_0040eb81(pwVar5);
          cVar14 = local_215;
        }
        else {
          if (wVar3 == L'(') {
            pwVar5 = (wchar_t *)FUN_0040ea82((ushort *)(pwVar5 + 1),(ushort *)&local_214);
            local_220 = pwVar5;
            pwVar6 = wcschr(L"*@<?",(wchar_t)local_214);
            if (pwVar6 != (wchar_t *)0x0) {
              cVar14 = local_215;
              if ((DAT_0043562c == '\0') || ((DAT_0041148c & 0x40) != 0)) goto LAB_0040ea59;
              puVar12 = &local_214;
              do {
                sVar1 = *(short *)puVar12;
                puVar12 = (undefined4 *)((int)puVar12 + 2);
              } while (sVar1 != 0);
              FUN_0041005a(&stack0xfffffdc0,((int)puVar12 - ((int)&local_214 + 2) >> 1) + 4,L"$(%s)"
                           ,(char)&local_214);
              FUN_004053f6(0,0x44c);
              pwVar5 = local_220;
            }
          }
          else {
            pwVar6 = wcschr(L"*@<?",wVar3);
            if (pwVar6 != (wchar_t *)0x0) {
              cVar14 = local_215;
              if (((DAT_0043562c == '\0') || ((DAT_0041148c & 0x40) != 0)) || (*pwVar5 == L'<'))
              goto LAB_0040ea59;
              local_c = 0;
              local_10 = 0x24;
              local_e = *pwVar5;
              FUN_004053f6(0,0x44c);
            }
            uVar4 = FUN_00403702(*pwVar5);
            if ((char)uVar4 == '\0') {
              if (local_217 != 0) goto LAB_0040ea6f;
              FUN_004053f6(DAT_004216b0,0x3ea);
            }
            local_214 = (uint)(ushort)*pwVar5;
          }
          if (local_224 == (int **)0x0) {
            local_234 = (int *)0x0;
            local_230 = FUN_0040e267((short *)&DAT_00401058);
            ppiVar7 = &local_234;
          }
          else {
            ppiVar7 = (int **)FUN_0040e215();
          }
          local_220 = (wchar_t *)FUN_0040ab97((ushort *)&local_214);
          ppiVar10 = local_22c;
          local_216 = local_215;
          pwVar6 = local_220;
          if (local_220 != (wchar_t *)0x0) {
            if (param_4 == (ushort *)0x0) {
LAB_0040e905:
              if ((*(byte *)(local_220 + 6) & 1) != 0) {
                if (local_217 != 0) goto LAB_0040ea6f;
                FUN_004053f6(DAT_004216b0,0x42e);
                local_216 = local_215;
                pwVar6 = local_220;
                goto LAB_0040e974;
              }
              if ((*(byte *)(local_220 + 6) & 0x10) == 0) {
                piVar8 = *(int **)(*(int *)(local_220 + 4) + 4);
              }
              else {
                piVar8 = (int *)FUN_0040e267((short *)&DAT_00401690);
              }
              local_216 = local_215;
              ppiVar10 = param_3;
            }
            else {
              puVar12 = &local_214;
              puVar9 = param_4;
              do {
                uVar2 = *puVar9;
                bVar13 = uVar2 < *(ushort *)puVar12;
                if (uVar2 != *(ushort *)puVar12) {
LAB_0040e8a0:
                  uVar4 = -(uint)bVar13 | 1;
                  goto LAB_0040e8a5;
                }
                if (uVar2 == 0) break;
                uVar2 = puVar9[1];
                bVar13 = uVar2 < *(ushort *)((int)puVar12 + 2);
                if (uVar2 != *(ushort *)((int)puVar12 + 2)) goto LAB_0040e8a0;
                puVar9 = puVar9 + 2;
                puVar12 = puVar12 + 1;
              } while (uVar2 != 0);
              uVar4 = 0;
LAB_0040e8a5:
              if (uVar4 != 0) goto LAB_0040e905;
              puVar12 = *(undefined4 **)(local_220 + 4);
              if (param_5 != param_6) {
                iVar11 = param_5;
                do {
                  if (puVar12 == (undefined4 *)0x0) goto LAB_0040e8ed;
                  puVar12 = (undefined4 *)*puVar12;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != param_6);
              }
              if (puVar12 == (undefined4 *)0x0) {
LAB_0040e8ed:
                piVar8 = (int *)FUN_0040e267((short *)&DAT_00401690);
              }
              else {
                piVar8 = (int *)puVar12[1];
              }
            }
            pwVar6 = local_220;
            ppiVar7[1] = piVar8;
            param_3 = ppiVar10;
          }
LAB_0040e974:
          if (local_224 != (int **)0x0) {
            if ((pwVar6 == (wchar_t *)0x0) ||
               (ppiVar10 = local_224, (*(byte *)(pwVar6 + 6) & 0x10) != 0)) {
              piVar8 = (int *)FUN_0040e267((short *)&DAT_00401690);
              pwVar6 = local_220;
              ppiVar10 = local_224;
              ppiVar7[1] = piVar8;
            }
            *ppiVar7 = (int *)0x0;
            if (local_21c == (int **)0x0) {
              *ppiVar10 = (int *)ppiVar7;
            }
            else {
              *local_21c = (int *)ppiVar7;
            }
            local_21c = ppiVar7;
          }
          cVar14 = local_216;
          if ((pwVar6 != (wchar_t *)0x0) &&
             (pwVar6 = wcschr((wchar_t *)ppiVar7[1],L'$'), cVar14 = local_216,
             pwVar6 != (wchar_t *)0x0)) {
            *(byte *)(local_220 + 6) = *(byte *)(local_220 + 6) | 1;
            if (param_4 == (ushort *)0x0) {
LAB_0040ea21:
              iVar11 = param_6;
            }
            else {
              puVar12 = &local_214;
              puVar9 = param_4;
              do {
                uVar2 = *puVar9;
                bVar13 = uVar2 < *(ushort *)puVar12;
                if (uVar2 != *(ushort *)puVar12) {
LAB_0040ea15:
                  uVar4 = -(uint)bVar13 | 1;
                  goto LAB_0040ea1a;
                }
                if (uVar2 == 0) break;
                uVar2 = puVar9[1];
                bVar13 = uVar2 < *(ushort *)((int)puVar12 + 2);
                if (uVar2 != *(ushort *)((int)puVar12 + 2)) goto LAB_0040ea15;
                puVar9 = puVar9 + 2;
                puVar12 = puVar12 + 1;
              } while (uVar2 != 0);
              uVar4 = 0;
LAB_0040ea1a:
              iVar11 = param_5;
              if (uVar4 == 0) goto LAB_0040ea21;
            }
            FUN_0040e549((wchar_t *)ppiVar7[1],local_224,(int **)&local_21c,(ushort *)&local_214,
                         param_5 + 1,iVar11,param_7);
            *(byte *)(local_220 + 6) = *(byte *)(local_220 + 6) & 0xfe;
            cVar14 = local_216;
          }
        }
LAB_0040ea59:
        param_1 = pwVar5 + 1;
        wVar3 = *param_1;
        if (wVar3 == L'\0') goto LAB_0040e608;
      }
      cVar14 = local_215;
      if (wVar3 == L'\"') {
        cVar14 = local_215 == '\0';
      }
      if (((cVar14 == '\0') && (wVar3 == (wchar_t)local_228)) &&
         (param_1 = param_1 + 1, *param_1 == L'\"')) {
        cVar14 = '\x01';
      }
      param_1 = param_1 + 1;
      wVar3 = *param_1;
    } while (wVar3 != L'\0');
  }
LAB_0040e608:
  if (param_3 != (int **)0x0) {
    *param_3 = (int *)local_21c;
  }
LAB_0040e616:
  FUN_00410365(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



ushort * __fastcall FUN_0040ea82(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort *puVar3;
  
  uVar2 = *param_1;
  puVar3 = param_2;
  while ((uVar2 != 0 && (uVar2 != 0x29))) {
    if (uVar2 == 0x3a) goto LAB_0040eb13;
    if (uVar2 == 0x5e) {
      param_1 = param_1 + 1;
      uVar1 = FUN_00403702(*param_1);
      if ((char)uVar1 == '\0') {
        FUN_004053f6(DAT_004216b0,0x3e9);
      }
    }
    uVar2 = *param_1;
    param_1 = param_1 + 1;
    *puVar3 = uVar2;
    puVar3 = puVar3 + 1;
    uVar2 = *param_1;
  }
  if (uVar2 != 0x29) {
LAB_0040eb13:
    do {
      if (uVar2 == 0x5e) {
        param_1 = param_1 + 1;
        uVar2 = *param_1;
      }
      if (uVar2 == 0) break;
      param_1 = param_1 + 1;
      uVar2 = *param_1;
    } while (uVar2 != 0x29);
    if (uVar2 != 0x29) {
      FUN_004053f6(DAT_004216b0,1000);
    }
  }
  *puVar3 = 0;
  if (0x202 < (int)((int)puVar3 - (int)param_2 & 0xfffffffeU)) {
    FUN_004053f6(DAT_004216b0,0x434);
  }
  return param_1;
}



short * __fastcall FUN_0040eb81(short *param_1)

{
  wchar_t _Ch;
  wchar_t *pwVar1;
  
  if (*param_1 != 0) {
    if (param_1[1] == 0x5e) {
      return param_1 + 1;
    }
    if (param_1[1] == 0x28) {
      if ((param_1[2] == 0x5e) || (param_1[2] != 0x40)) {
        return param_1 + 2;
      }
      _Ch = param_1[3];
      if (_Ch != L'^') {
        if (_Ch == L')') {
          return param_1 + 3;
        }
        pwVar1 = wcschr(L"DFBR",_Ch);
        if (pwVar1 == (wchar_t *)0x0) {
          return param_1;
        }
        if (param_1[4] != 0x5e) {
          if (param_1[4] != 0x29) {
            return param_1;
          }
          return param_1 + 4;
        }
      }
      FUN_004053f6(DAT_004216b0,0x3e9);
    }
  }
  return param_1;
}



wchar_t * __fastcall FUN_0040ec1b(wchar_t *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  wchar_t *pwVar3;
  int **local_8;
  
  local_8 = (int **)0x0;
  pwVar3 = wcschr(param_1,L'$');
  if (pwVar3 != (wchar_t *)0x0) {
    FUN_0040e549(param_1,(int **)&local_8,(int **)0x0,(ushort *)0x0,0,0,0);
    ppiVar2 = local_8;
    param_1 = (wchar_t *)FUN_0040ec83(param_1,-1,(int **)&local_8);
    while (ppiVar2 != (int **)0x0) {
      ppiVar1 = (int **)*ppiVar2;
      *ppiVar2 = (int *)DAT_00432618;
      DAT_00432618 = ppiVar2;
      ppiVar2 = ppiVar1;
    }
  }
  return param_1;
}



void __fastcall FUN_0040ec83(wchar_t *param_1,char param_2,int **param_3)

{
  int **ppiVar1;
  longlong lVar2;
  wchar_t wVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  int *piVar6;
  void *_Dst;
  wchar_t *pwVar7;
  uint uVar8;
  char cVar9;
  int **ppiVar10;
  undefined auStack_83c [7];
  char local_835;
  wchar_t *local_834;
  char local_82d;
  wchar_t *local_82c;
  char local_825;
  wchar_t *local_824;
  uint local_820;
  wchar_t *local_81c;
  undefined4 local_818;
  int **local_814;
  wchar_t local_810 [1024];
  wchar_t local_10 [2];
  uint local_c;
  
  local_c = DAT_00411014 ^ (uint)auStack_83c;
  local_814 = param_3;
  local_82d = '\0';
  local_82c = local_10;
  local_834 = local_810;
  wVar3 = *param_1;
  local_835 = '\0';
  local_820 = 0x400;
  local_825 = param_2;
  local_824 = local_834;
  local_81c = param_1;
  if (wVar3 != L'\0') {
    local_818 = 0x22;
    cVar9 = '\0';
LAB_0040ecfa:
    do {
      pwVar5 = local_81c;
      if (wVar3 != L'$') {
        if (local_834 == local_82c) {
          FUN_0040efd8(&local_824,&local_834,&local_82c,&local_820,local_810);
          cVar9 = local_835;
        }
        wVar3 = *pwVar5;
        if (wVar3 == L'\"') {
          cVar9 = cVar9 == '\0';
          local_835 = cVar9;
        }
        if ((cVar9 == '\0') && (wVar3 == L'^')) {
          *local_834 = L'^';
          local_834 = local_834 + 1;
          if (local_834 == local_82c) {
            FUN_0040efd8(&local_824,&local_834,&local_82c,&local_820,local_810);
            cVar9 = local_835;
          }
          pwVar5 = pwVar5 + 1;
          wVar3 = *pwVar5;
          if (wVar3 == (wchar_t)local_818) {
            cVar9 = '\x01';
            local_835 = '\x01';
          }
        }
        *local_834 = wVar3;
        local_81c = pwVar5 + 1;
        local_834 = local_834 + 1;
        wVar3 = *local_81c;
        if (wVar3 != L'\0') goto LAB_0040ecfa;
      }
      pwVar5 = local_81c;
      if (local_834 == local_82c) {
        FUN_0040efd8(&local_824,&local_834,&local_82c,&local_820,local_810);
      }
      if (*pwVar5 == L'\0') break;
      pwVar7 = pwVar5 + 2;
      if ((pwVar5[1] == L'(') && (pwVar4 = wcschr(L"*@<?",*pwVar7), pwVar4 != (wchar_t *)0x0)) {
        ppiVar10 = (int **)0x3;
LAB_0040ee0e:
        FUN_0040f04c(&local_824,&local_81c,&local_834,&local_82c,&local_820,ppiVar10,local_810);
      }
      else {
        if (pwVar5[1] == L'$') {
          wVar3 = *pwVar7;
          if ((wVar3 == L'^') || (local_825 != '\x01')) {
LAB_0040ee89:
            ppiVar10 = (int **)0x5;
          }
          else if (wVar3 == L'@') {
            ppiVar10 = (int **)0x2;
          }
          else {
            if (wVar3 == L'(') {
              pwVar7 = pwVar5 + 3;
            }
            wVar3 = pwVar7[1];
            if (((((wVar3 != L'F') && (wVar3 != L'D')) && (wVar3 != L'B')) && (wVar3 != L'R')) ||
               (pwVar7[2] != L')')) goto LAB_0040ee89;
            ppiVar10 = (int **)0x4;
          }
          goto LAB_0040ee0e;
        }
        pwVar5 = wcschr(L"*@<?",pwVar5[1]);
        ppiVar10 = local_814;
        if (pwVar5 != (wchar_t *)0x0) {
          ppiVar10 = (int **)0x1;
          goto LAB_0040ee0e;
        }
        piVar6 = *local_814;
        if (piVar6 == (int *)0x0) {
          FUN_004053f6(DAT_004216b0,0x410);
          piVar6 = *ppiVar10;
        }
        pwVar5 = wcschr((wchar_t *)piVar6[1],L'$');
        ppiVar1 = (int **)*ppiVar10;
        if (pwVar5 == (wchar_t *)0x0) {
          piVar6 = ppiVar1[1];
          *ppiVar10 = *ppiVar1;
        }
        else {
          *ppiVar10 = *ppiVar1;
          piVar6 = (int *)FUN_0040ec83((wchar_t *)ppiVar1[1],local_825,ppiVar10);
          local_82d = '\x01';
        }
        FUN_0040f516(&local_824,&local_81c,&local_834,&local_82c,(wchar_t *)piVar6,&local_820,
                     local_810);
        if (local_82d != '\0') {
          free(piVar6);
          local_82d = '\0';
        }
      }
      wVar3 = *local_81c;
      cVar9 = local_835;
    } while (wVar3 != L'\0');
    if (local_834 == local_82c) {
      FUN_0040efd8(&local_824,&local_834,&local_82c,&local_820,local_810);
    }
  }
  pwVar5 = local_824;
  *local_834 = L'\0';
  uVar8 = (int)local_834 + (2 - (int)local_824) >> 1;
  lVar2 = (ulonglong)uVar8 * 2;
  _Dst = FUN_0040ac3c(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  if (_Dst == (void *)0x0) {
    FUN_004053f6(DAT_004216b0,0x419);
  }
  memcpy(_Dst,pwVar5,uVar8 * 2);
  FUN_00410365(local_c ^ (uint)auStack_83c);
  return;
}



void __fastcall
FUN_0040efd8(void **param_1,void **param_2,void **param_3,uint *param_4,void *param_5)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  
  pvVar2 = *param_1;
  if (pvVar2 == param_5) {
    pvVar2 = FUN_0040ac3c(-(uint)((int)((ulonglong)*param_4 * 2 >> 0x20) != 0) |
                          (uint)((ulonglong)*param_4 * 2));
    memcpy(pvVar2,*param_1,*param_4 * 2);
    *param_1 = pvVar2;
  }
  uVar3 = *param_4 + 0x400;
  pvVar2 = FUN_0041000e(pvVar2,uVar3);
  *param_1 = pvVar2;
  uVar1 = *param_4;
  *param_4 = uVar3;
  *param_2 = (void *)((int)pvVar2 + uVar1 * 2);
  *param_3 = (void *)((int)pvVar2 + uVar3 * 2);
  return;
}



void __fastcall
FUN_0040f04c(void **param_1,wchar_t **param_2,wchar_t **param_3,wchar_t **param_4,uint *param_5,
            int **param_6,void *param_7)

{
  short sVar1;
  wchar_t wVar2;
  int **ppiVar3;
  wchar_t *pwVar4;
  int **_Memory;
  int **ppiVar5;
  int *piVar6;
  int iVar7;
  int **ppiVar8;
  int *piVar9;
  int **ppiVar10;
  uint uVar11;
  bool bVar12;
  uint local_28;
  uint local_24;
  wchar_t **local_20;
  int local_1c;
  int **local_18;
  wchar_t *local_14;
  uint local_10;
  int **local_c;
  char local_7;
  char local_6;
  undefined local_5;
  
  local_10 = 2;
  bVar12 = false;
  local_6 = '\0';
  local_7 = '\0';
  local_14 = (wchar_t *)0x0;
  local_24 = 0;
  iVar7 = 1;
  local_5 = 0;
  local_1c = 1;
  local_20 = param_2;
  if (param_6 == (int **)0x1) {
LAB_0040f0ea:
    wVar2 = (*param_2)[iVar7];
    if (wVar2 == L'*') {
      if ((*param_2)[iVar7 + 1] != L'*') {
        local_7 = '\x01';
        ppiVar5 = DAT_00421ed8;
        goto LAB_0040f11f;
      }
      iVar7 = iVar7 + 1;
      ppiVar5 = DAT_00421ec4;
LAB_0040f13e:
      bVar12 = true;
    }
    else {
      ppiVar5 = DAT_00421ecc;
      if (wVar2 == L'<') {
LAB_0040f11f:
        bVar12 = false;
      }
      else {
        ppiVar5 = DAT_00421ed0;
        if (wVar2 == L'?') goto LAB_0040f13e;
        bVar12 = false;
        ppiVar5 = (int **)0x0;
        if (wVar2 == L'@') {
          ppiVar5 = DAT_00421ed4;
        }
      }
    }
    local_1c = iVar7 + 1;
  }
  else {
    ppiVar5 = DAT_00421ec8;
    if (param_6 != (int **)0x2) {
      if (param_6 == (int **)0x3) {
        iVar7 = 2;
        local_6 = '\x01';
        goto LAB_0040f0ea;
      }
      if (param_6 != (int **)0x4) {
        if (param_6 != (int **)0x5) {
          return;
        }
        pwVar4 = *param_3;
        if (pwVar4 == *param_4) {
          FUN_0040efd8(param_1,param_3,param_4,param_5,param_7);
          pwVar4 = *param_3;
        }
        *pwVar4 = L'$';
        *param_2 = *param_2 + 2;
        *param_3 = pwVar4 + 1;
        return;
      }
      local_1c = 4;
      local_6 = '\x01';
    }
  }
  if (ppiVar5 == (int **)0x0) {
    pwVar4 = *param_2;
    wVar2 = *pwVar4;
    while (((wVar2 != L'\0' && (wVar2 != L' ')) && (wVar2 != L'\t'))) {
      pwVar4 = pwVar4 + 1;
      wVar2 = *pwVar4;
    }
    *pwVar4 = L'\0';
    FUN_004053f6(DAT_004216b0,0xfa6);
    *pwVar4 = wVar2;
    _Memory = (int **)FUN_0040e267((short *)&DAT_00401690);
    ppiVar5 = _Memory;
  }
  else {
    _Memory = (int **)0x0;
    if (bVar12) {
      local_28 = 0x400;
      param_6 = (int **)FUN_0040ac3c(0x800);
      ppiVar8 = param_6 + 0x200;
      local_c = ppiVar8;
      ppiVar10 = param_6;
      _Memory = param_6;
      while (ppiVar3 = ppiVar5, ppiVar5 = _Memory, local_18 = _Memory, ppiVar3 != (int **)0x0) {
        piVar6 = ppiVar3[1];
        if (local_6 != '\0') {
          piVar9 = piVar6;
          do {
            wVar2 = *(wchar_t *)piVar9;
            piVar9 = (int *)((int)piVar9 + 2);
          } while (wVar2 != L'\0');
          uVar11 = ((int)piVar9 - (int)((int)piVar6 + 2) >> 1) + 1;
          if (local_24 < uVar11) {
            if (local_14 != (wchar_t *)0x0) {
              free(local_14);
            }
            local_24 = uVar11;
            local_14 = (wchar_t *)
                       FUN_0040ac3c(-(uint)((int)((ulonglong)uVar11 * (ulonglong)local_10 >> 0x20)
                                           != 0) | (uint)((ulonglong)uVar11 * (ulonglong)local_10));
          }
          piVar6 = (int *)FUN_0040f3be((*local_20)[local_1c],local_14,local_24,(wchar_t *)piVar6);
          ppiVar8 = local_c;
        }
        wVar2 = *(wchar_t *)piVar6;
        ppiVar5 = param_6;
        while (param_6 = ppiVar10, wVar2 != L'\0') {
          if (param_6 == ppiVar8) {
            param_6 = ppiVar5;
            FUN_0040efd8(&local_18,&param_6,&local_c,&local_28,(void *)0x0);
            ppiVar8 = local_c;
          }
          wVar2 = *(wchar_t *)piVar6;
          piVar6 = (int *)((int)piVar6 + local_10);
          *(wchar_t *)param_6 = wVar2;
          ppiVar5 = (int **)((int)param_6 + local_10);
          ppiVar10 = ppiVar5;
          wVar2 = *(wchar_t *)piVar6;
        }
        bVar12 = param_6 == ppiVar8;
        ppiVar10 = param_6;
        param_6 = ppiVar5;
        if (bVar12) {
          FUN_0040efd8(&local_18,&param_6,&local_c,&local_28,(void *)0x0);
          ppiVar8 = local_c;
          ppiVar10 = param_6;
        }
        *(wchar_t *)ppiVar10 = L'\0';
        _Memory = local_18;
        ppiVar5 = (int **)*ppiVar3;
        if ((int **)*ppiVar3 != (int **)0x0) {
          *(wchar_t *)ppiVar10 = L' ';
          param_6 = (int **)((int)ppiVar10 + local_10);
          if (param_6 == ppiVar8) {
            FUN_0040efd8(&local_18,&param_6,&local_c,&local_28,(void *)0x0);
            ppiVar8 = local_c;
          }
          *(undefined2 *)param_6 = 0;
          ppiVar10 = param_6;
          _Memory = local_18;
          ppiVar5 = (int **)*ppiVar3;
        }
      }
      goto LAB_0040f21d;
    }
  }
  ppiVar8 = ppiVar5;
  do {
    sVar1 = *(short *)ppiVar8;
    ppiVar8 = (int **)((int)ppiVar8 + 2);
  } while (sVar1 != 0);
  uVar11 = ((int)ppiVar8 - ((int)ppiVar5 + 2) >> 1) + 1;
  if (uVar11 == 1) {
    uVar11 = local_10;
  }
  local_14 = (wchar_t *)
             FUN_0040ac3c(-(uint)((int)((ulonglong)uVar11 * (ulonglong)local_10 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar11 * (ulonglong)local_10));
  if (local_7 != '\0') {
    ppiVar5 = (int **)FUN_0040f3be(0x52,local_14,uVar11,(wchar_t *)ppiVar5);
  }
  if (local_6 != '\0') {
    ppiVar5 = (int **)FUN_0040f3be((*local_20)[local_1c],local_14,uVar11,(wchar_t *)ppiVar5);
  }
LAB_0040f21d:
  FUN_0040f516(param_1,local_20,param_3,param_4,(wchar_t *)ppiVar5,param_5,param_7);
  if (_Memory != (int **)0x0) {
    free(_Memory);
  }
  if (local_14 != (wchar_t *)0x0) {
    free(local_14);
  }
  return;
}



wchar_t * __fastcall FUN_0040f3be(short param_1,wchar_t *param_2,rsize_t param_3,wchar_t *param_4)

{
  wchar_t wVar1;
  wchar_t wVar2;
  errno_t eVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  
  pwVar5 = (wchar_t *)0x0;
  eVar3 = wcscpy_s(param_2,param_3,param_4);
  if (eVar3 != 0) {
    FUN_004053f6(DAT_004216b0,0x410);
  }
  wVar2 = *param_2;
  pwVar4 = param_2;
  do {
    wVar1 = *pwVar4;
    pwVar4 = pwVar4 + 1;
  } while (wVar1 != L'\0');
  for (pwVar4 = param_2 + ((int)pwVar4 - (int)(param_2 + 1) >> 1) + -1;
      ((pwVar6 = (wchar_t *)0x0, param_2 <= pwVar4 &&
       (wVar1 = *pwVar4, pwVar6 = pwVar4, wVar1 != L'\\')) && (wVar1 != L'/')); pwVar4 = pwVar4 + -1
      ) {
    if ((wVar1 == L'.') && (pwVar5 == (wchar_t *)0x0)) {
      pwVar5 = pwVar4;
    }
  }
  pwVar4 = param_2;
  if (param_1 == 0x42) {
    if (pwVar5 != (wchar_t *)0x0) {
      *pwVar5 = L'\0';
    }
  }
  else {
    if (param_1 == 0x44) {
      if (pwVar6 == (wchar_t *)0x0) {
        if (param_2[1] == L':') {
          param_2[2] = L'\0';
        }
        else {
          eVar3 = wcscpy_s(param_2,param_3,L".");
          if (eVar3 != 0) {
            FUN_004053f6(DAT_004216b0,0x410);
          }
        }
      }
      else {
        if ((param_2[1] == L':') && (pwVar6 == param_2 + 2)) {
          pwVar6 = pwVar6 + 1;
        }
        *pwVar6 = L'\0';
      }
      goto LAB_0040f4d9;
    }
    if (param_1 != 0x46) {
      if ((param_1 == 0x52) && (pwVar5 != (wchar_t *)0x0)) {
        *pwVar5 = L'\0';
      }
      goto LAB_0040f4d9;
    }
  }
  if (pwVar6 == (wchar_t *)0x0) {
    if (param_2[1] == L':') {
      pwVar4 = param_2 + 2;
    }
  }
  else {
    pwVar4 = pwVar6 + 1;
  }
LAB_0040f4d9:
  if (wVar2 == L'\"') {
    if ((*pwVar4 != L'\"') && (param_2 < pwVar4)) {
      pwVar4 = pwVar4 + -1;
      *pwVar4 = L'\"';
    }
    pwVar5 = wcschr(pwVar4,L'\0');
    if (pwVar5[-1] != L'\"') {
      *pwVar5 = L'\"';
      pwVar5[1] = L'\0';
    }
  }
  return pwVar4;
}



void __fastcall
FUN_0040f516(void **param_1,wchar_t **param_2,wchar_t **param_3,wchar_t **param_4,wchar_t *param_5,
            uint *param_6,void *param_7)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *local_8;
  
  *param_2 = *param_2 + 1;
  pwVar2 = *param_2;
  if (*pwVar2 == L'^') {
    pwVar2 = pwVar2 + 1;
    *param_2 = pwVar2;
  }
  local_8 = wcschr(pwVar2,L':');
  pwVar2 = *param_2;
  wVar1 = *pwVar2;
  pwVar3 = pwVar2;
  while ((wVar1 != L'\0' && (wVar1 != L')'))) {
    if (wVar1 == L'^') {
      pwVar3 = pwVar3 + 1;
    }
    pwVar3 = pwVar3 + 1;
    wVar1 = *pwVar3;
  }
  wVar1 = *pwVar2;
  if (((wVar1 == L'(') && (local_8 != (wchar_t *)0x0)) && (local_8 < pwVar3)) {
    FUN_0040f646(param_1,&local_8,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    if (*param_5 != L'\0') {
      pwVar2 = *param_3;
      do {
        if (pwVar2 == *param_4) {
          FUN_0040efd8(param_1,param_3,param_4,param_6,param_7);
          pwVar2 = *param_3;
        }
        wVar1 = *param_5;
        param_5 = param_5 + 1;
        *pwVar2 = wVar1;
        pwVar2 = pwVar2 + 1;
        *param_3 = pwVar2;
      } while (*param_5 != L'\0');
      pwVar2 = *param_2;
      wVar1 = *pwVar2;
    }
    if (wVar1 == L'$') {
      pwVar2 = pwVar2 + 1;
      *param_2 = pwVar2;
      wVar1 = *pwVar2;
    }
    if (wVar1 == L'(') {
      do {
        *param_2 = *param_2 + 1;
        pwVar2 = *param_2;
      } while (*pwVar2 != L')');
    }
    else if ((wVar1 == L'*') && (pwVar2[1] == L'*')) {
      pwVar2 = pwVar2 + 1;
    }
    local_8 = pwVar2 + 1;
  }
  *param_2 = local_8;
  return;
}



void __fastcall
FUN_0040f646(void **param_1,wchar_t **param_2,wchar_t **param_3,wchar_t **param_4,wchar_t *param_5,
            uint *param_6,void *param_7)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *_Str2;
  wchar_t *pwVar3;
  int iVar4;
  size_t _MaxCount;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  
  *param_2 = *param_2 + 1;
  for (pwVar5 = *param_2; wVar1 = *pwVar5, wVar1 != L'\0'; pwVar5 = pwVar5 + 1) {
    if (wVar1 == L'=') goto LAB_0040f69d;
    if (wVar1 == L'^') {
      pwVar5 = pwVar5 + 1;
    }
  }
  FUN_004053f6(DAT_004216a4,0x3eb);
LAB_0040f69d:
  if (pwVar5 == *param_2) {
    FUN_004053f6(DAT_004216a4,0x3ed);
  }
  wVar1 = *pwVar5;
  pwVar6 = pwVar5;
  while (wVar1 != L'\0') {
    if (wVar1 == L')') goto LAB_0040f70b;
    if (wVar1 == L'^') {
      pwVar6 = pwVar6 + 1;
    }
    pwVar6 = pwVar6 + 1;
    wVar1 = *pwVar6;
  }
  FUN_004053f6(DAT_004216a4,1000);
LAB_0040f70b:
  lVar2 = (ulonglong)(((int)pwVar5 - (int)*param_2 >> 1) + 1) * 2;
  _Str2 = (wchar_t *)FUN_0040ac3c(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  pwVar7 = *param_2;
  wVar1 = *pwVar7;
  pwVar3 = _Str2;
  while (wVar1 != L'=') {
    if (wVar1 == L'^') {
      pwVar7 = pwVar7 + 1;
    }
    *pwVar3 = *pwVar7;
    pwVar7 = pwVar7 + 1;
    pwVar3 = pwVar3 + 1;
    wVar1 = *pwVar7;
  }
  *pwVar3 = L'\0';
  pwVar3 = _Str2;
  do {
    wVar1 = *pwVar3;
    pwVar3 = pwVar3 + 1;
  } while (wVar1 != L'\0');
  _MaxCount = (int)pwVar3 - (int)(_Str2 + 1) >> 1;
  lVar2 = (ulonglong)(uint)((int)pwVar6 - (int)pwVar5 >> 1) * 2;
  pwVar3 = (wchar_t *)FUN_0040ac3c(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  pwVar7 = pwVar7 + 1;
  wVar1 = *pwVar7;
  pwVar5 = pwVar3;
  while (wVar1 != L')') {
    if (wVar1 == L'^') {
      pwVar7 = pwVar7 + 1;
    }
    wVar1 = *pwVar7;
    pwVar7 = pwVar7 + 1;
    *pwVar5 = wVar1;
    pwVar5 = pwVar5 + 1;
    wVar1 = *pwVar7;
  }
  *pwVar5 = L'\0';
  *param_2 = pwVar6 + 1;
  wVar1 = *param_5;
  while (wVar1 != L'\0') {
    if ((wVar1 == *_Str2) && (iVar4 = wcsncmp(param_5,_Str2,_MaxCount), iVar4 == 0)) {
      if (*pwVar3 != L'\0') {
        pwVar5 = *param_3;
        pwVar6 = pwVar3;
        do {
          if (pwVar5 == *param_4) {
            FUN_0040efd8(param_1,param_3,param_4,param_6,param_7);
            pwVar5 = *param_3;
          }
          *pwVar5 = *pwVar6;
          pwVar5 = pwVar5 + 1;
          pwVar6 = pwVar6 + 1;
          *param_3 = pwVar5;
        } while (*pwVar6 != L'\0');
      }
      iVar4 = _MaxCount * 2;
    }
    else {
      pwVar5 = *param_3;
      if (pwVar5 == *param_4) {
        FUN_0040efd8(param_1,param_3,param_4,param_6,param_7);
        pwVar5 = *param_3;
      }
      *pwVar5 = *param_5;
      *param_3 = pwVar5 + 1;
      iVar4 = 2;
    }
    param_5 = (wchar_t *)((int)param_5 + iVar4);
    wVar1 = *param_5;
  }
  free(_Str2);
  free(pwVar3);
  return;
}



void __fastcall FUN_0040f89e(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t local_41c [260];
  wchar_t local_214 [258];
  wchar_t local_10 [4];
  uint local_8;
  
  local_8 = DAT_00411014 ^ (uint)&stack0xfffffffc;
  _wsplitpath_s(param_1,local_10,3,local_214,0x100,(wchar_t *)0x0,0,(wchar_t *)0x0,0);
  _wmakepath_s(local_41c,0x104,local_10,local_214,param_2,(wchar_t *)0x0);
  FUN_0040e267(local_41c);
  FUN_00410365(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



undefined4 __fastcall FUN_0040f912(short *param_1)

{
  wchar_t *pwVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined uVar5;
  wchar_t *_Str;
  ushort *local_8;
  
  uVar2 = *param_1;
  local_8 = (ushort *)param_1;
  if (uVar2 == 0x7b) {
    local_8 = (ushort *)(param_1 + 1);
    uVar2 = *local_8;
    while ((uVar2 != 0 && (uVar2 != 0x7d))) {
      if (uVar2 == 0x5e) {
        local_8 = local_8 + 1;
      }
      local_8 = local_8 + 1;
      uVar2 = *local_8;
    }
    if (uVar2 != 0) {
      local_8 = local_8 + 1;
      uVar2 = *local_8;
    }
  }
  uVar5 = 0;
  pwVar1 = (wchar_t *)0x2e;
  puVar3 = local_8;
  if (uVar2 == 0x2e) {
    do {
      if ((short)pwVar1 == 0x7b) break;
      if ((short)pwVar1 == 0x5e) {
        puVar3 = puVar3 + 1;
      }
      puVar3 = puVar3 + 1;
      pwVar1 = (wchar_t *)(uint)*puVar3;
    } while (*puVar3 != 0);
    uVar5 = 0;
    for (puVar4 = local_8; ((puVar4 < puVar3 && (*puVar4 != 0x5c)) && (*puVar4 != 0x2f));
        puVar4 = puVar4 + 1) {
    }
    if ((*puVar3 == 0) || (puVar4 != puVar3)) {
      pwVar1 = wcspbrk((wchar_t *)(local_8 + 1),L"./\\");
      if ((pwVar1 != (wchar_t *)0x0) && (*pwVar1 == L'.')) {
        _Str = pwVar1 + 1;
LAB_0040fa3d:
        pwVar1 = wcschr(_Str,L'/');
        if ((pwVar1 == (wchar_t *)0x0) && (pwVar1 = wcschr(_Str,L'\\'), pwVar1 == (wchar_t *)0x0)) {
          pwVar1 = wcschr(_Str,L'.');
          if (pwVar1 == (wchar_t *)0x0) {
            uVar5 = 1;
            pwVar1 = (wchar_t *)0x0;
          }
          else {
            pwVar1 = (wchar_t *)FUN_004053f6(DAT_004216b0,0x444);
          }
        }
      }
    }
    else {
      puVar3 = puVar3 + 1;
      uVar2 = *puVar3;
      while (pwVar1 = (wchar_t *)(uint)uVar2, uVar2 != 0) {
        pwVar1 = (wchar_t *)0x0;
        if (uVar2 == 0x7d) {
          if (puVar3[1] == 0x2e) {
            _Str = (wchar_t *)(puVar3 + 2);
            goto LAB_0040fa3d;
          }
          break;
        }
        if (uVar2 == 0x5e) {
          puVar3 = puVar3 + 1;
        }
        puVar3 = puVar3 + 1;
        uVar2 = *puVar3;
      }
    }
  }
  return CONCAT31((int3)((uint)pwVar1 >> 8),uVar5);
}



void __fastcall FUN_0040fa87(wchar_t *param_1,int param_2,wchar_t *param_3,wchar_t *param_4)

{
  wchar_t *pwVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  wchar_t wVar6;
  wchar_t *pwVar7;
  int iVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  wchar_t local_214;
  undefined local_212 [522];
  uint local_8;
  
  local_8 = DAT_00411014 ^ (uint)&stack0xfffffffc;
  wVar6 = *param_3;
  pwVar1 = param_1 + param_2;
joined_r0x0040faba:
  if (wVar6 == L'\0') {
    if (param_1 < pwVar1) {
      *param_1 = L'\0';
    }
LAB_0040fd74:
    FUN_00410365(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (pwVar1 <= param_1) goto LAB_0040fd74;
  pwVar9 = param_3;
  if (wVar6 == L'%') {
    pwVar9 = param_3 + 1;
    wVar6 = *pwVar9;
    pwVar10 = param_3;
    if (wVar6 == L'\0') goto LAB_0040fd56;
    if (wVar6 == L'%') {
      *param_1 = L'%';
      goto LAB_0040fb25;
    }
    if (wVar6 == L's') {
      pwVar7 = param_4;
      pwVar10 = pwVar9;
      if (param_4 != (wchar_t *)0x0) {
        do {
          if ((*pwVar7 == L'\0') || (pwVar1 <= param_1)) break;
          *param_1 = *pwVar7;
          param_1 = param_1 + 1;
          pwVar7 = pwVar7 + 1;
        } while (pwVar7 != (wchar_t *)0x0);
      }
    }
    else {
      if (wVar6 != L'|') {
        *param_1 = L'%';
        param_1 = param_1 + 1;
        if (param_1 != pwVar1) {
          wVar6 = *pwVar9;
          goto LAB_0040fb22;
        }
        goto LAB_0040fd74;
      }
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      bVar2 = false;
      local_214 = L'\0';
      do {
        pwVar10 = pwVar9 + 1;
        wVar6 = *pwVar10;
        if (wVar6 == L'\0') goto LAB_0040fd1c;
        if (wVar6 == L'F') {
          if (*pwVar9 == L'|') {
            bVar3 = true;
            bVar2 = true;
            bVar4 = true;
            bVar5 = true;
          }
        }
        else if (wVar6 == L'd') {
          bVar2 = true;
        }
        else if (wVar6 == L'e') {
          bVar5 = true;
        }
        else if (wVar6 == L'f') {
          bVar4 = true;
        }
        else {
          pwVar9 = pwVar10;
          if (wVar6 != L'p') goto LAB_0040fd1c;
          bVar3 = true;
        }
        pwVar9 = pwVar10;
      } while (*pwVar10 != L'F');
      if (param_4 == (wchar_t *)0x0) {
        FUN_004053f6(0,0x449);
      }
      if (bVar2) {
        _wsplitpath_s(param_4,&local_214,0x104,(wchar_t *)0x0,0,(wchar_t *)0x0,0,(wchar_t *)0x0,0);
      }
      if (bVar3) {
        pwVar9 = &local_214;
        do {
          wVar6 = *pwVar9;
          pwVar9 = pwVar9 + 1;
        } while (wVar6 != L'\0');
        iVar8 = (int)pwVar9 - (int)local_212 >> 1;
        _wsplitpath_s(param_4,(wchar_t *)0x0,0,(wchar_t *)(local_212 + iVar8 * 2 + -2),0x104 - iVar8
                      ,(wchar_t *)0x0,0,(wchar_t *)0x0,0);
      }
      if (bVar4) {
        pwVar9 = &local_214;
        do {
          wVar6 = *pwVar9;
          pwVar9 = pwVar9 + 1;
        } while (wVar6 != L'\0');
        iVar8 = (int)pwVar9 - (int)local_212 >> 1;
        _wsplitpath_s(param_4,(wchar_t *)0x0,0,(wchar_t *)0x0,0,
                      (wchar_t *)(local_212 + iVar8 * 2 + -2),0x104 - iVar8,(wchar_t *)0x0,0);
      }
      if (bVar5) {
        pwVar9 = &local_214;
        do {
          wVar6 = *pwVar9;
          pwVar9 = pwVar9 + 1;
        } while (wVar6 != L'\0');
        iVar8 = (int)pwVar9 - (int)local_212 >> 1;
        _wsplitpath_s(param_4,(wchar_t *)0x0,0,(wchar_t *)0x0,0,(wchar_t *)0x0,0,
                      (wchar_t *)(local_212 + iVar8 * 2 + -2),0x104 - iVar8);
      }
      if (local_214 != L'\0') {
        iVar8 = -2 - (int)param_1;
        do {
          if (pwVar1 <= param_1) break;
          *param_1 = *(wchar_t *)(local_212 + iVar8 + (int)param_1);
          param_1 = param_1 + 1;
        } while (*(short *)(local_212 + iVar8 + (int)param_1) != 0);
      }
    }
  }
  else {
LAB_0040fb22:
    *param_1 = wVar6;
LAB_0040fb25:
    param_1 = param_1 + 1;
    pwVar10 = pwVar9;
  }
LAB_0040fd56:
  param_3 = pwVar10 + 1;
  wVar6 = *param_3;
  goto joined_r0x0040faba;
LAB_0040fd1c:
  for (; (pwVar10 = pwVar9, param_3 <= pwVar9 && (param_1 < pwVar1)); param_1 = param_1 + 1) {
    *param_1 = *param_3;
    param_3 = param_3 + 1;
  }
  goto LAB_0040fd56;
}



undefined4 * __thiscall FUN_0040fd85(void *this,int param_1)

{
  undefined4 *puVar1;
  wint_t wVar2;
  wint_t wVar3;
  wint_t *pwVar4;
  wint_t *pwVar5;
  
  puVar1 = (undefined4 *)(&DAT_00421490)[param_1];
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
                    // WARNING: Load size is inaccurate
    wVar2 = *this;
    pwVar5 = (wint_t *)this;
    for (pwVar4 = (wint_t *)puVar1[1]; (wVar2 != 0 && (wVar2 = *pwVar4, wVar2 != 0));
        pwVar4 = pwVar4 + 1) {
      if ((*pwVar5 == 0x5c) || (*pwVar5 == 0x2f)) {
        if ((wVar2 != 0x5c) && (wVar2 != 0x2f)) break;
      }
      else {
        wVar2 = towupper(wVar2);
        wVar3 = towupper(*pwVar5);
        if (wVar3 != wVar2) break;
      }
      pwVar5 = pwVar5 + 1;
      wVar2 = *pwVar5;
    }
    if ((*pwVar5 == 0) && (*pwVar4 == 0)) {
      return puVar1;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}



// WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe
// WARNING: Unable to track spacebase fully for stack

void __fastcall FUN_0040fe3d(short *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  short sVar4;
  short sVar5;
  short *psVar6;
  undefined4 uStack_2c;
  wchar_t *pwStack_28;
  wchar_t *local_24;
  short *local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00411014 ^ (uint)&stack0xfffffffc;
  psVar3 = param_1;
  do {
    sVar4 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar4 != 0);
  local_24 = (wchar_t *)0x40fe7a;
  iVar1 = -(((int)psVar3 - (int)(param_1 + 1) >> 1) * 2 + 2);
  psVar3 = (short *)(&stack0xffffffe0 + iVar1);
  psVar6 = param_2;
  do {
    sVar4 = *psVar6;
    psVar6 = psVar6 + 1;
  } while (sVar4 != 0);
  local_10 = param_2;
  *(undefined4 *)((int)&local_24 + iVar1) = 0x40fe9d;
  iVar2 = -(((int)psVar6 - (int)(param_2 + 1) >> 1) * 2 + 2);
  sVar4 = *param_1;
  local_c = 0x22;
  if (sVar4 == 0x22) {
    param_1 = param_1 + 1;
    sVar4 = *param_1;
  }
  if (sVar4 == 0) {
    sVar4 = 0x22;
    local_10 = param_2;
  }
  else {
    psVar3 = (short *)(&stack0xffffffe0 + iVar1);
    do {
      sVar5 = sVar4;
      psVar6 = psVar3;
      *psVar6 = sVar5;
      psVar3 = psVar6 + 1;
      sVar4 = *(short *)(((int)param_1 - (int)(&stack0xffffffe0 + iVar1)) + (int)psVar3);
    } while (sVar4 != 0);
    sVar4 = (short)local_c;
    if ((psVar3 != (short *)(&stack0xffffffe0 + iVar1)) && (sVar5 == sVar4)) {
      psVar3 = psVar6;
    }
  }
  *psVar3 = 0;
  sVar5 = *local_10;
  if (sVar5 == sVar4) {
    local_10 = local_10 + 1;
    sVar5 = *local_10;
  }
  psVar3 = (short *)(&stack0xffffffe0 + iVar2 + iVar1);
  if (sVar5 != 0) {
    psVar3 = (short *)(&stack0xffffffe0 + iVar2 + iVar1);
    do {
      sVar4 = sVar5;
      psVar6 = psVar3;
      *psVar6 = sVar4;
      psVar3 = psVar6 + 1;
      sVar5 = *(short *)(((int)local_10 - (int)(&stack0xffffffe0 + iVar2 + iVar1)) + (int)psVar3);
    } while (sVar5 != 0);
    if ((psVar3 != (short *)(&stack0xffffffe0 + iVar2 + iVar1)) && (sVar4 == (short)local_c)) {
      psVar3 = psVar6;
    }
  }
  *(undefined **)((int)&local_24 + iVar2 + iVar1) = &stack0xffffffe0 + iVar2 + iVar1;
  *(undefined **)((int)&pwStack_28 + iVar2 + iVar1) = &stack0xffffffe0 + iVar1;
  *psVar3 = 0;
  *(undefined4 *)((int)&uStack_2c + iVar2 + iVar1) = 0x40ff3d;
  _wcsicmp(*(wchar_t **)((int)&pwStack_28 + iVar2 + iVar1),
           *(wchar_t **)((int)&local_24 + iVar2 + iVar1));
  FUN_00410365(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



short * __fastcall FUN_0040ff51(short *param_1)

{
  longlong lVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  
  psVar3 = param_1;
  do {
    sVar2 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar2 != 0);
  lVar1 = (ulonglong)(((int)psVar3 - (int)(param_1 + 1) >> 1) + 1) * 2;
  psVar3 = (short *)FUN_0040ac3c(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  sVar2 = *param_1;
  if (sVar2 == 0x22) {
    param_1 = param_1 + 1;
    sVar2 = *param_1;
  }
  psVar4 = psVar3;
  if (sVar2 != 0) {
    do {
      *psVar4 = sVar2;
      psVar4 = psVar4 + 1;
      sVar2 = *(short *)(((int)param_1 - (int)psVar3) + (int)psVar4);
    } while (sVar2 != 0);
  }
  if (psVar4[-1] == 0x22) {
    psVar4 = psVar4 + -1;
  }
  *psVar4 = 0;
  return psVar3;
}



void __fastcall FUN_0040ffc6(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  if (*param_1 == L'\"') {
    pwVar2 = wcsrchr(param_1,L'\"');
    *pwVar2 = L'\0';
    wVar1 = param_1[1];
    *param_1 = wVar1;
    pwVar2 = param_1 + 1;
    while (wVar1 != L'\0') {
      wVar1 = pwVar2[1];
      *pwVar2 = wVar1;
      pwVar2 = pwVar2 + 1;
    }
  }
  _wfsopen(param_1,param_2,0x20);
  return;
}



void * __fastcall FUN_0041000e(void *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if (param_1 == (void *)0x0) {
    if (0x7ffffffc < param_2) goto LAB_00410044;
    pvVar1 = malloc(param_2 * 2);
  }
  else {
    if (0x7ffffffc < param_2) goto LAB_00410044;
    pvVar1 = realloc(param_1,param_2 * 2);
  }
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
LAB_00410044:
  FUN_004053f6(DAT_004216b0,0x41b);
  return pvVar1;
}



int __cdecl FUN_0041005a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  puVar4 = &param_4;
  uVar3 = 0;
  puVar1 = (undefined4 *)FUN_0040c84c();
  iVar2 = __stdio_common_vswprintf_s(*puVar1,puVar1[1],param_1,param_2,param_3,uVar3,puVar4);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



void __fastcall FUN_00410088(wchar_t *param_1)

{
  wchar_t *pwVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  WCHAR *pWVar5;
  HANDLE local_260;
  _WIN32_FIND_DATAW local_25c;
  uint local_8;
  
  local_8 = DAT_00411014 ^ (uint)&stack0xfffffffc;
  pwVar1 = (wchar_t *)FUN_004079fa(param_1,&local_25c,&local_260);
  if (pwVar1 != (wchar_t *)0x0) {
    puVar2 = FUN_0040e215();
    uVar3 = FUN_0040f89e(param_1,pwVar1);
    puVar2[1] = uVar3;
    while (pWVar5 = FUN_00407b86(&local_25c,local_260), pWVar5 != (WCHAR *)0x0) {
      puVar4 = FUN_0040e215();
      uVar3 = FUN_0040f89e(param_1,pWVar5);
      *puVar4 = puVar2;
      puVar4[1] = uVar3;
      puVar2 = puVar4;
    }
  }
  FUN_00410365(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4

int FUN_004101d9(void)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  code **ppcVar5;
  int *piVar6;
  uint uVar7;
  int unaff_ESI;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_14;
  
  uVar3 = ___scrt_initialize_crt(1);
  if ((char)uVar3 != '\0') {
    bVar2 = false;
    uVar3 = ___scrt_acquire_startup_lock();
    if (DAT_0041143c != 1) {
      if (DAT_0041143c == 0) {
        DAT_0041143c = 1;
        iVar4 = _initterm_e(&DAT_0040100c,&DAT_0040101c);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        _initterm(&DAT_00401000,&DAT_00401008);
        DAT_0041143c = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      ppcVar5 = (code **)FUN_004108ee();
      if ((*ppcVar5 != (code *)0x0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)ppcVar5), (char)uVar3 != '\0')) {
        pcVar1 = *ppcVar5;
        uVar9 = 0;
        uVar8 = 2;
        uVar3 = 0;
        _guard_check_icall();
        (*pcVar1)(uVar3,uVar8,uVar9);
      }
      piVar6 = (int *)FUN_004108f4();
      if ((*piVar6 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar6), (char)uVar3 != '\0')) {
        _register_thread_local_exe_atexit_callback(*piVar6);
      }
      _get_initial_wide_environment();
      piVar6 = (int *)__p___wargv();
      iVar4 = *piVar6;
      piVar6 = (int *)__p___argc();
      unaff_ESI = FUN_0040b47b(*piVar6,iVar4);
      uVar7 = FUN_00410a1a();
      if ((char)uVar7 != '\0') {
        if (!bVar2) {
          _cexit();
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_0041034c;
    }
  }
  FUN_004108fa(7);
LAB_0041034c:
                    // WARNING: Subroutine does not return
  exit(unaff_ESI);
}



void entry(void)

{
  ___security_init_cookie();
  FUN_004101d9();
  return;
}



void __fastcall FUN_00410365(int param_1)

{
  undefined1 in_stack_00000004;
  
  if (param_1 == DAT_00411014) {
    return;
  }
  FUN_0041039b(in_stack_00000004);
  return;
}



void __cdecl FUN_00410373(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041039b(undefined param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte bVar4;
  byte bVar5;
  byte in_AF;
  byte bVar6;
  byte bVar7;
  byte in_TF;
  byte in_IF;
  byte bVar8;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar9;
  undefined4 unaff_retaddr;
  
  uVar2 = IsProcessorFeaturePresent(0x17);
  uVar9 = CONCAT44(extraout_EDX,uVar2);
  bVar4 = 0;
  bVar8 = 0;
  bVar7 = (int)uVar2 < 0;
  bVar6 = uVar2 == 0;
  bVar5 = (POPCOUNT(uVar2 & 0xff) & 1U) == 0;
  uVar3 = extraout_ECX;
  if (!(bool)bVar6) {
    pcVar1 = (code *)swi(0x29);
    uVar9 = (*pcVar1)();
    uVar3 = extraout_ECX_00;
  }
  _DAT_00411218 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_00411220 = (undefined4)uVar9;
  _DAT_00411230 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_00411234 = &param_1;
  _DAT_00411170 = 0x10001;
  _DAT_00411120 = 0xc0000409;
  _DAT_00411124 = 1;
  _DAT_00411130 = 1;
  DAT_00411134 = 2;
  _DAT_0041112c = unaff_retaddr;
  _DAT_004111fc = in_GS;
  _DAT_00411200 = in_FS;
  _DAT_00411204 = in_ES;
  _DAT_00411208 = in_DS;
  _DAT_0041120c = unaff_EDI;
  _DAT_00411210 = unaff_ESI;
  _DAT_00411214 = unaff_EBX;
  _DAT_0041121c = uVar3;
  _DAT_00411224 = unaff_EBP;
  DAT_00411228 = unaff_retaddr;
  _DAT_0041122c = in_CS;
  _DAT_00411238 = in_SS;
  FUN_00410373((_EXCEPTION_POINTERS *)&PTR_DAT_00401030);
  return;
}



void FUN_00410495(void)

{
  FUN_004104a1(8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_004104a1(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte bVar4;
  byte bVar5;
  byte in_AF;
  byte bVar6;
  byte bVar7;
  byte in_TF;
  byte in_IF;
  byte bVar8;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar9;
  undefined4 unaff_retaddr;
  
  uVar2 = IsProcessorFeaturePresent(0x17);
  uVar9 = CONCAT44(extraout_EDX,uVar2);
  bVar4 = 0;
  bVar8 = 0;
  bVar7 = (int)uVar2 < 0;
  bVar6 = uVar2 == 0;
  bVar5 = (POPCOUNT(uVar2 & 0xff) & 1U) == 0;
  uVar3 = extraout_ECX;
  if (!(bool)bVar6) {
    pcVar1 = (code *)swi(0x29);
    uVar9 = (*pcVar1)();
    uVar3 = extraout_ECX_00;
  }
  _DAT_00411218 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_00411220 = (undefined4)uVar9;
  _DAT_00411230 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_00411234 = &param_1;
  _DAT_00411120 = 0xc0000409;
  _DAT_00411124 = 1;
  _DAT_00411130 = 1;
  DAT_00411134 = param_1;
  _DAT_0041112c = unaff_retaddr;
  _DAT_004111fc = in_GS;
  _DAT_00411200 = in_FS;
  _DAT_00411204 = in_ES;
  _DAT_00411208 = in_DS;
  _DAT_0041120c = unaff_EDI;
  _DAT_00411210 = unaff_ESI;
  _DAT_00411214 = unaff_EBX;
  _DAT_0041121c = uVar3;
  _DAT_00411224 = unaff_EBP;
  DAT_00411228 = unaff_retaddr;
  _DAT_0041122c = in_CS;
  _DAT_00411238 = in_SS;
  FUN_00410373((_EXCEPTION_POINTERS *)&PTR_DAT_00401030);
  return;
}



// Library Function - Single Match
//  __except_handler4
// 
// Library: Visual Studio 2019 Release

void __cdecl
__except_handler4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = __filter_x86_sse2_floating_point_exception_default(*param_1);
  *param_1 = iVar1;
  _except_handler4_common(&DAT_00411014,FUN_00410365,param_1,param_2,param_3,param_4);
  return;
}



// Library Function - Single Match
//  struct _IMAGE_SECTION_HEADER * __cdecl find_pe_section(unsigned char * const,unsigned int)
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

_IMAGE_SECTION_HEADER * __cdecl find_pe_section(uchar *param_1,uint param_2)

{
  int iVar1;
  _IMAGE_SECTION_HEADER *p_Var2;
  _IMAGE_SECTION_HEADER *p_Var3;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  p_Var2 = (_IMAGE_SECTION_HEADER *)
           (param_1 + (uint)*(ushort *)(param_1 + iVar1 + 0x14) + iVar1 + 0x18);
  p_Var3 = p_Var2 + (uint)*(ushort *)(param_1 + iVar1 + 6) * 0x28;
  while( true ) {
    if (p_Var2 == p_Var3) {
      return (_IMAGE_SECTION_HEADER *)0x0;
    }
    if ((*(uint *)(p_Var2 + 0xc) <= param_2) &&
       (param_2 < (uint)(*(int *)(p_Var2 + 8) + *(int *)(p_Var2 + 0xc)))) break;
    p_Var2 = p_Var2 + 0x28;
  }
  return p_Var2;
}



// Library Function - Single Match
//  ___scrt_acquire_startup_lock
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

uint ___scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  bool bVar2;
  undefined3 extraout_var;
  void *pvVar3;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  pvVar3 = (void *)CONCAT31(extraout_var,bVar2);
  if (pvVar3 != (void *)0x0) {
    while( true ) {
      pvVar3 = (void *)0x0;
      LOCK();
      pvVar1 = StackBase;
      if (DAT_00411440 != (void *)0x0) {
        pvVar3 = DAT_00411440;
        pvVar1 = DAT_00411440;
      }
      DAT_00411440 = pvVar1;
      UNLOCK();
      if (pvVar3 == (void *)0x0) break;
      if (StackBase == pvVar3) {
        return CONCAT31((int3)((uint)pvVar3 >> 8),1);
      }
    }
  }
  return (uint)pvVar3 & 0xffffff00;
}



// Library Function - Single Match
//  ___scrt_initialize_crt
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

uint __cdecl ___scrt_initialize_crt(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    DAT_00411444 = 1;
  }
  FUN_00410b65();
  uVar1 = FUN_004108a1();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_004108a1();
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    uVar1 = FUN_004108a1();
  }
  return uVar1 & 0xffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___scrt_initialize_onexit_tables
// 
// Library: Visual Studio 2019 Release

undefined4 __cdecl ___scrt_initialize_onexit_tables(int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 in_EAX;
  undefined3 extraout_var;
  uint uVar3;
  undefined4 uVar4;
  
  if (DAT_00411445 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_004108fa(5);
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((uVar3 == 0) || (param_1 != 0)) {
    _DAT_00411448 = 0xffffffff;
    _DAT_0041144c = 0xffffffff;
    _DAT_00411450 = 0xffffffff;
    _DAT_00411454 = 0xffffffff;
    _DAT_00411458 = 0xffffffff;
    _DAT_0041145c = 0xffffffff;
LAB_004106c1:
    DAT_00411445 = '\x01';
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    uVar3 = _initialize_onexit_table(&DAT_00411448);
    if (uVar3 == 0) {
      uVar3 = _initialize_onexit_table(&DAT_00411454);
      if (uVar3 == 0) goto LAB_004106c1;
    }
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// Library Function - Single Match
//  ___scrt_is_nonwritable_in_current_image
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

uint __cdecl ___scrt_is_nonwritable_in_current_image(int param_1)

{
  _IMAGE_SECTION_HEADER *p_Var1;
  uint uVar2;
  void *local_14;
  
  p_Var1 = find_pe_section((uchar *)&IMAGE_DOS_HEADER_00400000,param_1 - 0x400000);
  if ((p_Var1 == (_IMAGE_SECTION_HEADER *)0x0) || (*(int *)(p_Var1 + 0x24) < 0)) {
    uVar2 = (uint)p_Var1 & 0xffffff00;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)p_Var1 >> 8),1);
  }
  ExceptionList = local_14;
  return uVar2;
}



// Library Function - Single Match
//  ___scrt_release_startup_lock
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

int __cdecl ___scrt_release_startup_lock(char param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  iVar1 = DAT_00411440;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_00411440 = 0;
    UNLOCK();
    iVar3 = iVar1;
  }
  return iVar3;
}



// Library Function - Single Match
//  ___scrt_uninitialize_crt
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

undefined __cdecl ___scrt_uninitialize_crt(undefined4 param_1,char param_2)

{
  if ((DAT_00411444 == '\0') || (param_2 == '\0')) {
    FUN_004108a1();
    FUN_004108a1();
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __onexit
// 
// Library: Visual Studio 2019 Release

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  int iVar1;
  
  if (_DAT_00411448 == -1) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_00411448,_Func);
  }
  return (_onexit_t)(~-(uint)(iVar1 != 0) & (uint)_Func);
}



// Library Function - Single Match
//  _atexit
// 
// Library: Visual Studio 2019 Release

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



// Library Function - Single Match
//  ___get_entropy
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

uint ___get_entropy(void)

{
  DWORD DVar1;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_10);
  local_8 = local_10.dwHighDateTime ^ local_10.dwLowDateTime;
  DVar1 = GetCurrentThreadId();
  local_8 = local_8 ^ DVar1;
  DVar1 = GetCurrentProcessId();
  local_8 = local_8 ^ DVar1;
  QueryPerformanceCounter(&local_18);
  return local_18.s.HighPart ^ local_18.s.LowPart ^ local_8 ^ (uint)&local_8;
}



// Library Function - Single Match
//  ___security_init_cookie
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl ___security_init_cookie(void)

{
  if ((DAT_00411014 == 0xbb40e64e) || ((DAT_00411014 & 0xffff0000) == 0)) {
    DAT_00411014 = ___get_entropy();
    if (DAT_00411014 == 0xbb40e64e) {
      DAT_00411014 = 0xbb40e64f;
    }
    else if ((DAT_00411014 & 0xffff0000) == 0) {
      DAT_00411014 = DAT_00411014 | (DAT_00411014 | 0x4711) << 0x10;
    }
  }
  DAT_00411010 = ~DAT_00411014;
  return;
}



undefined4 FUN_00410888(void)

{
  return 0;
}



undefined4 FUN_0041088b(void)

{
  return 1;
}



undefined4 FUN_0041088f(void)

{
  return 0x4000;
}



void FUN_00410895(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_00411460);
  return;
}



undefined FUN_004108a1(void)

{
  return 1;
}



void FUN_004108a4(void)

{
  code *pcVar1;
  errno_t eVar2;
  
  eVar2 = _controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar2 == 0) {
    return;
  }
  FUN_004108fa(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_004108c5(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0040c84c();
  *puVar1 = *puVar1 | 0x24;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_0040c62e();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_004108e2(void)

{
  return _DAT_00411004 == 0;
}



undefined * FUN_004108ee(void)

{
  return &DAT_00435e70;
}



undefined * FUN_004108f4(void)

{
  return &DAT_00435e6c;
}



void FUN_004108fa(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  undefined4 local_328 [39];
  EXCEPTION_RECORD local_5c;
  _EXCEPTION_POINTERS local_c;
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  FUN_00410abf();
  memset(local_328,0,0x2cc);
  local_328[0] = 0x10001;
  memset(&local_5c,0,0x50);
  local_5c.ExceptionCode = 0x40000015;
  local_5c.ExceptionFlags = 1;
  BVar2 = IsDebuggerPresent();
  local_c.ExceptionRecord = &local_5c;
  local_c.ContextRecord = (PCONTEXT)local_328;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_c);
  if ((LVar3 == 0) && (BVar2 != 1)) {
    FUN_00410abf();
  }
  return;
}



undefined4 thunk_FUN_00410888(void)

{
  return 0;
}



uint FUN_00410a1a(void)

{
  HMODULE pHVar1;
  int *piVar2;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 != (HMODULE)0x0) && (*(short *)&pHVar1->unused == 0x5a4d)) &&
      (piVar2 = (int *)((int)&pHVar1->unused + pHVar1[0xf].unused), *piVar2 == 0x4550)) &&
     (((pHVar1 = (HMODULE)0x10b, *(short *)(piVar2 + 6) == 0x10b && (0xe < (uint)piVar2[0x1d])) &&
      (piVar2[0x3a] != 0)))) {
    return 0x101;
  }
  return (uint)pHVar1 & 0xffffff00;
}



undefined4 FUN_00410a69(int **param_1)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  
  piVar1 = *param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
     ((iVar2 = piVar1[5], iVar2 == 0x19930520 ||
      (((iVar2 == 0x19930521 || (iVar2 == 0x19930522)) || (iVar2 == 0x1994000)))))) {
    ppiVar3 = (int **)__current_exception();
    *ppiVar3 = piVar1;
    piVar1 = param_1[1];
    ppiVar3 = (int **)__current_exception_context();
    *ppiVar3 = piVar1;
                    // WARNING: Subroutine does not return
    terminate();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00410abf(void)

{
  _DAT_00411468 = 0;
  return;
}



// WARNING: Removing unreachable block (ram,0x00410ad7)
// WARNING: Removing unreachable block (ram,0x00410ad8)
// WARNING: Removing unreachable block (ram,0x00410ade)
// WARNING: Removing unreachable block (ram,0x00410ae8)
// WARNING: Removing unreachable block (ram,0x00410aef)

void FUN_00410ac7(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00410b03)
// WARNING: Removing unreachable block (ram,0x00410b04)
// WARNING: Removing unreachable block (ram,0x00410b0a)
// WARNING: Removing unreachable block (ram,0x00410b14)
// WARNING: Removing unreachable block (ram,0x00410b1b)

void FUN_00410af3(void)

{
  return;
}



// WARNING: This is an inlined function
// WARNING: Unable to track spacebase fully for stack
// WARNING: Variable defined which should be unmapped: param_2
// Library Function - Single Match
//  __SEH_prolog4
// 
// Library: Visual Studio

void __cdecl __SEH_prolog4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00411014 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



// WARNING: Removing unreachable block (ram,0x00410bd3)
// WARNING: Removing unreachable block (ram,0x00410b98)
// WARNING: Removing unreachable block (ram,0x00410c4a)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00410b65(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  
  _DAT_00411470 = 0;
  DAT_00411018 = DAT_00411018 | 1;
  BVar4 = IsProcessorFeaturePresent(10);
  uVar5 = DAT_00411018;
  if (BVar4 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar6 = puVar2[3];
    if (((piVar1[1] ^ 0x756e6547U | piVar1[3] ^ 0x6c65746eU | piVar1[2] ^ 0x49656e69U) == 0) &&
       (((((uVar5 = *puVar2 & 0xfff3ff0, uVar5 == 0x106c0 || (uVar5 == 0x20660)) ||
          (uVar5 == 0x20670)) || ((uVar5 == 0x30650 || (uVar5 == 0x30660)))) || (uVar5 == 0x30670)))
       ) {
      DAT_00411474 = DAT_00411474 | 1;
    }
    if (*piVar1 < 7) {
      uVar7 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar7 = *(uint *)(iVar3 + 4);
      if ((uVar7 & 0x200) != 0) {
        DAT_00411474 = DAT_00411474 | 2;
      }
    }
    _DAT_00411470 = 1;
    uVar5 = DAT_00411018 | 2;
    if ((uVar6 & 0x100000) != 0) {
      uVar5 = DAT_00411018 | 6;
      _DAT_00411470 = 2;
      if ((((uVar6 & 0x8000000) != 0) && ((uVar6 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        _DAT_00411470 = 3;
        uVar5 = DAT_00411018 | 0xe;
        if ((uVar7 & 0x20) != 0) {
          _DAT_00411470 = 5;
          uVar5 = DAT_00411018 | 0x2e;
          if (((uVar7 & 0xd0030000) == 0xd0030000) && ((in_XCR0 & 0xe0) == 0xe0)) {
            DAT_00411018 = DAT_00411018 | 0x6e;
            _DAT_00411470 = 6;
            uVar5 = DAT_00411018;
          }
        }
      }
    }
  }
  DAT_00411018 = uVar5;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___scrt_is_ucrt_dll_in_use
// 
// Library: Visual Studio 2019 Release

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return _DAT_0041101c != 0;
}



void _except_handler4_common(void)

{
                    // WARNING: Could not recover jumptable at 0x00410d42. Too many branches
                    // WARNING: Treating indirect jump as call
  _except_handler4_common();
  return;
}



void __current_exception(void)

{
                    // WARNING: Could not recover jumptable at 0x00410d48. Too many branches
                    // WARNING: Treating indirect jump as call
  __current_exception();
  return;
}



void __current_exception_context(void)

{
                    // WARNING: Could not recover jumptable at 0x00410d4e. Too many branches
                    // WARNING: Treating indirect jump as call
  __current_exception_context();
  return;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00410d54. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



void __cdecl exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x00410d5a. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  exit(_Code);
  return;
}



void _set_app_type(void)

{
                    // WARNING: Could not recover jumptable at 0x00410d66. Too many branches
                    // WARNING: Treating indirect jump as call
  _set_app_type();
  return;
}



void __setusermatherr(void)

{
                    // WARNING: Could not recover jumptable at 0x00410d6c. Too many branches
                    // WARNING: Treating indirect jump as call
  __setusermatherr();
  return;
}



void _configure_wide_argv(void)

{
                    // WARNING: Could not recover jumptable at 0x00410d72. Too many branches
                    // WARNING: Treating indirect jump as call
  _configure_wide_argv();
  return;
}



void _initialize_wide_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x00410d78. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_wide_environment();
  return;
}



void _get_initial_wide_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x00410d7e. Too many branches
                    // WARNING: Treating indirect jump as call
  _get_initial_wide_environment();
  return;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x00410d84. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x00410d8a. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



void __cdecl _exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x00410d90. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _exit(_Code);
  return;
}



errno_t __cdecl _set_fmode(int _Mode)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x00410d96. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _set_fmode(_Mode);
  return eVar1;
}



void __p___argc(void)

{
                    // WARNING: Could not recover jumptable at 0x00410d9c. Too many branches
                    // WARNING: Treating indirect jump as call
  __p___argc();
  return;
}



void __p___wargv(void)

{
                    // WARNING: Could not recover jumptable at 0x00410da2. Too many branches
                    // WARNING: Treating indirect jump as call
  __p___wargv();
  return;
}



void __cdecl _cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00410da8. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}



void _register_thread_local_exe_atexit_callback(void)

{
                    // WARNING: Could not recover jumptable at 0x00410db4. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_thread_local_exe_atexit_callback();
  return;
}



int __cdecl _configthreadlocale(int _Flag)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00410dba. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _configthreadlocale(_Flag);
  return iVar1;
}



void __p__commode(void)

{
                    // WARNING: Could not recover jumptable at 0x00410dc6. Too many branches
                    // WARNING: Treating indirect jump as call
  __p__commode();
  return;
}



void _initialize_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x00410dcc. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_onexit_table();
  return;
}



void _register_onexit_function(void)

{
                    // WARNING: Could not recover jumptable at 0x00410dd2. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_onexit_function();
  return;
}



void _crt_atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00410dd8. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_atexit();
  return;
}



errno_t __cdecl _controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x00410dde. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _controlfp_s(_CurrentState,_NewValue,_Mask);
  return eVar1;
}



void terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x00410de4. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __filter_x86_sse2_floating_point_exception_default
// 
// Library: Visual Studio 2019 Release

int __cdecl __filter_x86_sse2_floating_point_exception_default(int param_1)

{
  uint uVar1;
  uint in_MXCSR;
  
  if ((_DAT_00411470 < 1) || ((param_1 != -0x3ffffd4c && (param_1 != -0x3ffffd4b)))) {
    return param_1;
  }
  uVar1 = in_MXCSR ^ 0x3f;
  if ((uVar1 & 0x81) != 0) {
    if ((uVar1 & 0x204) == 0) {
      return -0x3fffff72;
    }
    if ((uVar1 & 0x102) != 0) {
      if ((uVar1 & 0x408) == 0) {
        return -0x3fffff6f;
      }
      if ((uVar1 & 0x810) != 0) {
        if ((uVar1 & 0x1020) != 0) {
          return param_1;
        }
        return -0x3fffff71;
      }
      return -0x3fffff6d;
    }
  }
  return -0x3fffff70;
}



// WARNING: This is an inlined function
// WARNING: Unable to track spacebase fully for stack
// WARNING: Variable defined which should be unmapped: param_2
// Library Function - Single Match
//  __SEH_prolog4_GS
// 
// Library: Visual Studio

void __cdecl __SEH_prolog4_GS(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00411014 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



// WARNING: This is an inlined function
// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// Library Function - Single Match
//  __alloca_probe_16
// 
// Library: Visual Studio

uint __alloca_probe_16(undefined1 param_1)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 0xf;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}



// WARNING: This is an inlined function
// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// Library Function - Single Match
//  __alloca_probe_8
// 
// Library: Visual Studio

uint __alloca_probe_8(undefined1 param_1)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 7;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}



// WARNING: This is an inlined function
// Library Function - Single Match
//  __chkstk
// 
// Library: Visual Studio

void __alloca_probe(void)

{
  undefined *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  undefined auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&stack0x00000000 - (int)in_EAX & ~-(uint)(&stack0x00000000 < in_EAX))
  ;
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = unaff_retaddr;
  return;
}



void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00410f3b. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00410f41. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}




#include "out.h"



void FUN_00402c90(void)

{
  wchar_t *local_8;
  
  local_8 = &DAT_00424740;
  FUN_0040ef9c(&local_8,&DAT_0042473c,(int *)0x0,(ushort *)0x0,0,0,0,'\0');
  DAT_00424738 = FUN_0040ec65(&DAT_00424740);
  return;
}



void __fastcall FUN_00402cc1(undefined4 *param_1)

{
  int **ppiVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  byte bVar5;
  int **ppiVar6;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = param_1;
  local_8 = param_1;
  if (DAT_00424738 != 0) {
    DAT_00424734 = DAT_00424734 | 0x20;
    FUN_00402ded();
    DAT_00424738 = 0;
  }
  if (((DAT_00424734 & 0x20) != 0) && (uVar2 = FUN_0041159d(&DAT_00424740), (char)uVar2 != '\0')) {
    if ((DAT_00424734 & 0x10) != 0) {
      FUN_00405ad3(DAT_00424730,0x444);
    }
    FUN_00405ad3(DAT_00424730,0x43d);
  }
  puVar3 = FUN_0040ec13();
  bVar5 = DAT_00424734;
  if ((DAT_00424734 & 0x40) == 0) {
    pvVar4 = FUN_0040ec65(&DAT_00424740);
    bVar5 = DAT_00424734;
    puVar3[1] = pvVar4;
  }
  else {
    puVar3[1] = DAT_0042472c;
    DAT_0042472c = 0;
  }
  local_8 = puVar3;
  if ((bVar5 & 0x30) != 0x10) {
    local_c = (undefined4 *)puVar3[1];
    FUN_0040ef9c((wchar_t **)&local_c,(int *)&DAT_0042473c,(int *)0x0,(ushort *)0x0,0,0,0,'\0');
    bVar5 = DAT_00424734;
  }
  ppiVar1 = DAT_0042473c;
  DAT_0042473c = ppiVar1;
  if ((bVar5 & 0x20) != 0) {
    FUN_00403066(L"$",&local_8,(int **)&DAT_0042473c);
    FUN_00403066(L"*?",&local_8,(int **)0x0);
    DAT_0042473c = ppiVar1;
    if (ppiVar1 != (int **)0x0) {
      do {
        ppiVar6 = ppiVar1;
        ppiVar1 = (int **)*ppiVar6;
        *ppiVar6 = (int *)DAT_00435698;
        DAT_00435698 = ppiVar6;
      } while (ppiVar1 != (int **)0x0);
      DAT_0042473c = (int **)0x0;
    }
  }
  FUN_0040ed6a(&DAT_00424728,local_8);
  return;
}



void FUN_00402ded(void)

{
  int **ppiVar1;
  undefined4 uVar2;
  int **ppiVar3;
  
  DAT_0041450f = DAT_0041450e;
  DAT_00424728 = FUN_0040ec13();
  DAT_00424728[1] = DAT_00424738;
  ppiVar1 = DAT_0042473c;
  FUN_00403066(L"$",&DAT_00424728,(int **)&DAT_0042473c);
  FUN_00403066(L"*?",&DAT_00424728,(int **)0x0);
  DAT_0042473c = ppiVar1;
  if (ppiVar1 != (int **)0x0) {
    do {
      ppiVar3 = ppiVar1;
      ppiVar1 = (int **)*ppiVar3;
      *ppiVar3 = (int *)DAT_00435698;
      DAT_00435698 = ppiVar3;
    } while (ppiVar1 != (int **)0x0);
    DAT_0042473c = (int **)0x0;
  }
  if (((DAT_00424728 != (undefined4 *)0x0) ||
      (((DAT_00424734 & 0x20) == 0 &&
       (FUN_00405ad3(DAT_00424724,0x43b), DAT_00424728 != (undefined4 *)0x0)))) &&
     (uVar2 = FUN_0041159d((short *)DAT_00424728[1]), (char)uVar2 != '\0')) {
    DAT_00424734 = DAT_00424734 | 0x10;
  }
  return;
}



void FUN_00402eac(void)

{
  byte bVar1;
  int **ppiVar2;
  bool bVar3;
  int **ppiVar4;
  
  if (DAT_00424738 == 0) {
    DAT_00424734 = DAT_00424734 & 0xdf;
  }
  else {
    FUN_00402ded();
    DAT_00424738 = 0;
  }
  ppiVar2 = DAT_00424728;
  if (DAT_00424742 != 0) {
    DAT_0041450f = DAT_0041450f | 0x20;
  }
  bVar1 = DAT_0041450f;
  if (DAT_00424728 == (int **)0x0) {
    FUN_00405ad3(DAT_00424730,0x40d);
  }
  if ((DAT_00424734 & 0x10) == 0) {
    if ((*ppiVar2 != (int *)0x0) ||
       (bVar3 = FUN_00402f8b((wchar_t *)ppiVar2[1]), ppiVar2 = DAT_00424728, !bVar3))
    goto LAB_00402f7a;
    free(DAT_00424728[1]);
  }
  else {
    ppiVar4 = (int **)FUN_0040b5a3(0x18);
    ppiVar4[2] = ppiVar2[1];
    *(byte *)(ppiVar4 + 5) = bVar1 >> 5 & 1;
    *ppiVar4 = (int *)DAT_00424714;
    DAT_00424714 = ppiVar4;
    if (*ppiVar4 != (int *)0x0) {
      (*ppiVar4)[1] = (int)ppiVar4;
    }
  }
  ppiVar2 = DAT_00435698;
  DAT_00435698 = DAT_00424728;
  *DAT_00424728 = (int *)ppiVar2;
  ppiVar2 = DAT_00414500;
LAB_00402f7a:
  DAT_00414500 = ppiVar2;
  DAT_00424728 = (int **)0x0;
  DAT_00424734 = DAT_00424734 | 0x80;
  return;
}



bool __fastcall FUN_00402f8b(wchar_t *param_1)

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
    DAT_00424734 = DAT_00424734 | 2;
    FUN_0040cb10(0x73,'\x01');
  }
  iVar3 = _wcsicmp(param_1,L".IGNORE");
  if (iVar3 == 0) {
    DAT_00424734 = DAT_00424734 | 4;
    FUN_0040cb10(0x69,'\x01');
  }
  else {
    pwVar6 = L".SUFFIXES";
    pwVar5 = param_1;
    do {
      wVar1 = *pwVar5;
      bVar8 = (ushort)wVar1 < (ushort)*pwVar6;
      if (wVar1 != *pwVar6) {
LAB_00403011:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_00403016;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar5[1];
      bVar8 = (ushort)wVar1 < (ushort)pwVar6[1];
      if (wVar1 != pwVar6[1]) goto LAB_00403011;
      pwVar5 = pwVar5 + 2;
      pwVar6 = pwVar6 + 2;
    } while (wVar1 != L'\0');
    uVar4 = 0;
LAB_00403016:
    if (uVar4 == 0) {
      DAT_00424734 = DAT_00424734 | 1;
    }
    else {
      pwVar5 = L".PRECIOUS";
      do {
        wVar1 = *param_1;
        bVar8 = (ushort)wVar1 < (ushort)*pwVar5;
        if (wVar1 != *pwVar5) {
LAB_0040304c:
          uVar7 = -(uint)bVar8 | 1;
          break;
        }
        if (wVar1 == L'\0') break;
        wVar1 = param_1[1];
        bVar8 = (ushort)wVar1 < (ushort)pwVar5[1];
        if (wVar1 != pwVar5[1]) goto LAB_0040304c;
        param_1 = param_1 + 2;
        pwVar5 = pwVar5 + 2;
      } while (wVar1 != L'\0');
      if (uVar7 != 0) {
        return iVar2 == 0;
      }
      DAT_00424734 = DAT_00424734 | 8;
    }
  }
  return true;
}



void __fastcall FUN_00403066(wchar_t *param_1,undefined4 *param_2,int **param_3)

{
  wchar_t *pwVar1;
  undefined4 uVar2;
  void *pvVar3;
  short *psVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  short *_Memory;
  undefined4 *local_30;
  undefined4 *local_2c;
  short *local_28;
  wchar_t *local_24;
  short *psStack_20;
  short *local_1c;
  undefined4 *puStack_18;
  int *piStack_14;
  void *apvStack_10 [3];
  
  local_28 = (short *)0x0;
  puVar7 = (undefined4 *)0x0;
  local_1c = (short *)0x0;
  local_30 = (undefined4 *)0x0;
  puVar5 = (undefined4 *)0x0;
  puVar6 = (undefined4 *)*param_2;
  local_2c = param_2;
  local_24 = param_1;
  do {
    while( true ) {
      if (puVar6 == (undefined4 *)0x0) {
        return;
      }
      pwVar1 = wcspbrk((wchar_t *)puVar6[1],local_24);
      if (pwVar1 != (wchar_t *)0x0) break;
LAB_004031d8:
      puVar5 = puVar6;
      puVar6 = (undefined4 *)*puVar6;
    }
    if (*local_24 == L'$') {
      local_28 = (short *)0x0;
      piStack_14 = (int *)puVar6[1];
      FUN_0040f95a(apvStack_10,&piStack_14,-1,param_3,'\0',&local_28);
      free((void *)puVar6[1]);
    }
    else {
      uVar2 = FUN_0041159d((short *)(int *)puVar6[1]);
      if (((char)uVar2 != '\0') ||
         (puVar7 = (undefined4 *)FUN_0041225f((wchar_t *)puVar6[1]), local_30 = puVar7,
         puVar7 == (undefined4 *)0x0)) goto LAB_004031d8;
      local_1c = (short *)puVar6[1];
    }
    if (puVar5 == (undefined4 *)0x0) {
      *local_2c = *puVar6;
      *puVar6 = DAT_00435698;
      puStack_18 = local_2c;
    }
    else {
      *puVar5 = *puVar6;
      *puVar6 = DAT_00435698;
      puStack_18 = puVar5;
    }
    puStack_18 = (undefined4 *)*puStack_18;
    DAT_00435698 = puVar6;
    if (*local_24 == L'$') {
      psStack_20 = local_28;
      while (psVar4 = FUN_004031f1(&psStack_20), _Memory = local_28, psVar4 != (short *)0x0) {
        puVar7 = FUN_0040ec13();
        local_30 = puVar7;
        pvVar3 = FUN_0040ec65(psVar4);
        puVar7[1] = pvVar3;
        *puVar7 = *local_2c;
        *local_2c = puVar7;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = puVar7;
        }
      }
    }
    else {
      _Memory = local_1c;
      if (puVar7 != (undefined4 *)0x0) {
        if (puVar5 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)*puVar7;
          puVar5 = puVar7;
          while (puVar7 = puVar6, puVar7 != (undefined4 *)0x0) {
            puVar5 = puVar7;
            puVar6 = (undefined4 *)*puVar7;
          }
        }
        FUN_0040ed6a(&local_30,*local_2c);
        *local_2c = local_30;
        puVar7 = local_30;
        _Memory = local_1c;
      }
    }
    free(_Memory);
    puVar6 = puStack_18;
  } while( true );
}



short * __fastcall FUN_004031f1(short **param_1)

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
      goto LAB_004032ab;
    }
    psVar1 = psVar3 + 1;
    if (psVar3[1] == 0) goto LAB_004032ab;
  }
  psVar3 = psVar1;
  *psVar3 = 0;
LAB_004032ab:
  *param_1 = psVar3 + 1;
  return psVar2;
}



void FUN_004032b7(void)

{
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  
  if ((char)DAT_00424734 < '\0') {
    DAT_00424734 = DAT_00424734 & 0x7f;
  }
  if ((DAT_00424734 & 0x10) == 0) {
    if ((DAT_00424734 & 6) == 0) {
      if ((DAT_00424734 & 1) == 0) {
        if ((DAT_00424734 & 8) == 0) {
          DAT_00424718 = (int *)FUN_0040b5a3(0x20);
          *DAT_00424718 = DAT_00424728;
          DAT_00424718[1] = DAT_0042473c;
          goto LAB_004033ba;
        }
        if (DAT_00424728 == 0) goto LAB_004033ba;
        ppuVar2 = (undefined4 **)&DAT_0042471c;
      }
      else {
        if (DAT_00424728 == 0) {
          if (DAT_00424720 != (undefined4 *)0x0) {
            do {
              puVar1 = DAT_00424720;
              DAT_00424720 = (undefined4 *)*puVar1;
              free((void *)puVar1[1]);
              *puVar1 = DAT_00435698;
              DAT_00435698 = puVar1;
            } while (DAT_00424720 != (undefined4 *)0x0);
          }
          goto LAB_004033ba;
        }
        ppuVar2 = &DAT_00424720;
      }
      FUN_00403980(ppuVar2);
    }
    else if (DAT_00424728 != 0) {
      FUN_00405ad3(DAT_00424730,0x442);
    }
  }
  else if (DAT_00424728 != 0) {
    FUN_00405ad3(DAT_00424730,0x43e);
  }
LAB_004033ba:
  DAT_00424728 = 0;
  DAT_0042473c = 0;
  DAT_00424734 = DAT_00424734 | 0x40;
  return;
}



void FUN_004033d1(void)

{
  int **ppiVar1;
  bool bVar2;
  bool bVar3;
  int **ppiVar4;
  char local_5;
  
  ppiVar4 = DAT_00414500;
  bVar2 = true;
  local_5 = '\x01';
  if ((DAT_00424734 & 0x10) == 0) {
    if ((DAT_00424734 & 0xf) == 0) {
      *(int *)(DAT_00424718 + 8) = DAT_00424728;
      *(undefined4 *)(DAT_00424718 + 0xc) = DAT_0042473c;
      *(undefined *)(DAT_00424718 + 0x10) = DAT_0041450f;
      if (ppiVar4 != (int **)0x0) {
        do {
          bVar3 = FUN_00402f8b((wchar_t *)ppiVar4[1]);
          if (bVar3) {
            FUN_00405ad3(DAT_00424730,0x445);
          }
          FUN_004038bf((wchar_t *)ppiVar4[1],local_5);
          if (DAT_00424710 == (int **)0x0) {
            bVar2 = false;
            DAT_00424710 = ppiVar4;
          }
          ppiVar1 = (int **)*ppiVar4;
          DAT_00414500 = ppiVar1;
          if (bVar2) {
            *ppiVar4 = (int *)DAT_00435698;
            DAT_00435698 = ppiVar4;
          }
          local_5 = '\0';
          ppiVar4 = ppiVar1;
        } while (ppiVar1 != (int **)0x0);
      }
    }
    else if (DAT_00424728 != 0) {
      FUN_00405ad3(DAT_00424730,0x441);
    }
  }
  else {
    *(int *)(DAT_00424714 + 0xc) = DAT_00424728;
  }
  DAT_00414500 = (int **)0x0;
  DAT_00424728 = 0;
  DAT_0042473c = 0;
  DAT_00424718 = 0;
  DAT_00424734 = 0;
  return;
}



void FUN_00403508(void)

{
  ushort uVar1;
  int **ppiVar2;
  wchar_t *pwVar3;
  uint uVar4;
  undefined4 uVar5;
  int **ppiVar6;
  int *piVar7;
  void *local_14 [2];
  int *local_c;
  int *local_8;
  
  pwVar3 = wcschr((wchar_t *)DAT_00424738,L'$');
  ppiVar2 = DAT_0042473c;
  if (pwVar3 != (wchar_t *)0x0) {
    local_c = DAT_00424738;
    local_8 = (int *)0x0;
    FUN_0040f95a(local_14,&local_c,-1,(int **)&DAT_0042473c,'\0',&local_8);
    piVar7 = local_8;
    if (*(short *)local_8 == 0) {
      FUN_00405ad3(DAT_00424730,0x3ec);
    }
    DAT_0042473c = ppiVar2;
    if (ppiVar2 != (int **)0x0) {
      do {
        ppiVar6 = ppiVar2;
        ppiVar2 = (int **)*ppiVar6;
        *ppiVar6 = (int *)DAT_00435698;
        DAT_00435698 = ppiVar6;
      } while (ppiVar2 != (int **)0x0);
      DAT_0042473c = (int **)0x0;
    }
    free(DAT_00424738);
    DAT_00424738 = piVar7;
  }
  uVar1 = *(ushort *)DAT_00424738;
  piVar7 = DAT_00424738;
  while ((uVar1 != 0 && (uVar4 = FUN_00403b00(uVar1), (char)uVar4 != '\0'))) {
    piVar7 = (int *)((int)piVar7 + 2);
    uVar1 = *(ushort *)piVar7;
  }
  if (*(ushort *)piVar7 != 0) {
    FUN_00405ad3(DAT_00424730,0x3e9);
  }
  DAT_0041450d = 1;
  uVar5 = FUN_0040375c((wchar_t *)DAT_00424738,DAT_0042472c,0);
  if ((char)uVar5 == '\0') {
    free(DAT_00424738);
    free(DAT_0042472c);
  }
  DAT_0042472c = (int *)0x0;
  DAT_00424738 = (int *)0x0;
  return;
}



int __fastcall FUN_00403635(wchar_t *param_1,int *param_2,uint param_3)

{
  short sVar1;
  wchar_t wVar2;
  longlong lVar3;
  short *psVar4;
  int *piVar5;
  uint uVar6;
  wchar_t *pwVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  
  wVar2 = *param_1;
  pwVar7 = param_1;
  while ((wVar2 != L'\0' && (uVar6 = FUN_00403b00(wVar2), (char)uVar6 != '\0'))) {
    pwVar7 = pwVar7 + 1;
    wVar2 = *pwVar7;
  }
  if (*pwVar7 != L'\0') {
    if ((param_3 & 4) != 0) {
      return (uint)(byte)((ushort)*pwVar7 >> 8) << 8;
    }
    FUN_00405ad3(DAT_00424730,0x3e9);
  }
  piVar8 = param_2;
  if ((param_3 & 0x40) != 0) {
    pwVar7 = wcschr((wchar_t *)param_2,L'$');
    iVar11 = 0;
    if (pwVar7 != (wchar_t *)0x0) {
      do {
        iVar10 = iVar11;
        iVar11 = iVar10 + 1;
        pwVar7 = wcschr(pwVar7 + 1,L'$');
      } while (pwVar7 != (wchar_t *)0x0);
      if (iVar11 != 0) {
        do {
          sVar1 = *(short *)piVar8;
          piVar8 = (int *)((int)piVar8 + 2);
        } while (sVar1 != 0);
        lVar3 = (ulonglong)(uint)(iVar10 + 2 + ((int)piVar8 - ((int)param_2 + 2) >> 1)) * 2;
        piVar8 = (int *)FUN_0040b57e(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3);
        sVar1 = *(short *)param_2;
        psVar4 = (short *)((int)param_2 + 2);
        piVar5 = piVar8;
        while (sVar1 != 0) {
          *(short *)piVar5 = sVar1;
          piVar9 = (int *)((int)piVar5 + 2);
          if (sVar1 == 0x24) {
            *(short *)piVar9 = 0x24;
            piVar9 = piVar5 + 1;
          }
          sVar1 = *psVar4;
          psVar4 = psVar4 + 1;
          piVar5 = piVar9;
        }
        *(short *)piVar5 = 0;
        free(param_2);
      }
    }
  }
  iVar11 = FUN_0040375c(param_1,piVar8,param_3);
  return iVar11;
}



int __fastcall FUN_0040375c(wchar_t *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint3 uVar7;
  int *_Value;
  errno_t eVar2;
  undefined4 *puVar3;
  int iVar4;
  wchar_t **ppwVar5;
  wchar_t *pwVar6;
  size_t local_10;
  int *local_c;
  char local_5;
  
  local_5 = '\0';
  local_10 = 0;
  local_c = param_2;
  if ((param_3 & 2) == 0) {
    if ((((DAT_0041450d == '\0') || ((DAT_0041450c & 4) != 0)) ||
        (eVar2 = _wgetenv_s(&local_10,(wchar_t *)0x0,0,param_1), eVar2 != 0)) || (local_10 == 0))
    goto LAB_004037f6;
    uVar1 = FUN_0040b4d9((ushort *)param_1);
    if (uVar1 == 0) {
LAB_004037d1:
      _Value = FUN_0040f8d7(local_c);
      eVar2 = _wputenv_s(param_1,(wchar_t *)_Value);
      if (eVar2 != 0) {
        FUN_00405ad3(DAT_00424730,0x41f);
      }
      goto LAB_004037f6;
    }
    uVar7 = (uint3)(uVar1 >> 8);
    if (((*(byte *)(uVar1 + 0xc) & 2) == 0) && ((*(byte *)(uVar1 + 0xc) & DAT_0041450c & 4) == 0))
    goto LAB_004037d1;
LAB_0040381c:
    iVar4 = (uint)uVar7 << 8;
  }
  else {
    if (*(short *)param_2 != 0) goto LAB_004037d1;
LAB_004037f6:
    DAT_0041450d = '\0';
    puVar3 = (undefined4 *)FUN_0040b4d9((ushort *)param_1);
    if (puVar3 != (undefined4 *)0x0) {
      uVar7 = (uint3)((uint)puVar3 >> 8);
      if (((*(byte *)(puVar3 + 3) & 2) != 0) || ((*(byte *)(puVar3 + 3) & DAT_0041450c & 4) != 0))
      goto LAB_0040381c;
    }
    ppwVar5 = (wchar_t **)FUN_0040ec13();
    ppwVar5[1] = (wchar_t *)local_c;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_0040b5a3(0x10);
      puVar3[1] = param_1;
    }
    else {
      local_5 = '\x01';
    }
    *(byte *)(puVar3 + 3) = *(byte *)(puVar3 + 3) & 0xef | (byte)param_3;
    pwVar6 = (wchar_t *)puVar3[2];
    *ppwVar5 = pwVar6;
    puVar3[2] = ppwVar5;
    if (local_5 == '\0') {
      *puVar3 = *DAT_004386a8;
      pwVar6 = (wchar_t *)0x0;
      *DAT_004386a8 = puVar3;
      DAT_004386a8 = (undefined4 *)0x0;
    }
    if (((param_3 & 0x40) == 0) &&
       (pwVar6 = wcschr((wchar_t *)local_c,L'$'), pwVar6 != (wchar_t *)0x0)) {
      *(byte *)(puVar3 + 3) = *(byte *)(puVar3 + 3) | 1;
      pwVar6 = (wchar_t *)
               FUN_0040ef9c((wchar_t **)&local_c,(int *)0x0,(int *)0x0,(ushort *)param_1,1,0,param_3
                            ,'\0');
      *(byte *)(puVar3 + 3) = *(byte *)(puVar3 + 3) & 0xfe;
      if ((char)pwVar6 == '\0') {
        pwVar6 = (wchar_t *)0x0;
        *(byte *)(puVar3 + 3) = *(byte *)(puVar3 + 3) | 0x10;
        puVar3[2] = 0;
      }
    }
    iVar4 = CONCAT31((int3)((uint)pwVar6 >> 8),1);
  }
  return iVar4;
}



void __fastcall FUN_004038bf(wchar_t *param_1,char param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 extraout_var;
  
  if (DAT_00424718 == (undefined4 *)0x0) {
    DAT_00424718 = (undefined4 *)FUN_0040b5a3(0x20);
  }
  if (param_2 == '\0') {
    puVar2 = (undefined4 *)FUN_00403aae(DAT_00424718);
  }
  else {
    puVar2 = (undefined4 *)FUN_0040b5a3(8);
    puVar2[1] = DAT_00424718;
  }
  puVar3 = FUN_0040edb7(param_1);
  if (puVar3 == (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar3 = (undefined4 *)FUN_0040b5a3(0x20);
    *(byte *)(puVar3 + 2) = DAT_0041450f;
    puVar3[1] = param_1;
    puVar3[6] = puVar2;
    uVar1 = FUN_0040ed7f((wint_t *)param_1);
    *puVar3 = (&DAT_00424510)[CONCAT22(extraout_var,uVar1)];
    (&DAT_00424510)[CONCAT22(extraout_var,uVar1)] = puVar3;
  }
  else {
    if (((*(byte *)(puVar3 + 2) ^ DAT_0041450f) & 0x20) != 0) {
      FUN_00405ad3(DAT_00424730,0x43f);
    }
    FUN_0040ed6a(puVar3 + 6,puVar2);
    free(param_1);
  }
  return;
}



void __fastcall FUN_00403980(undefined4 *param_1)

{
  undefined4 *puVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  wchar_t *pwVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int **ppiVar7;
  void *local_28 [2];
  wchar_t *local_20;
  int *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  wchar_t *local_10;
  undefined4 *local_c;
  wchar_t *local_8;
  
  local_c = DAT_00424728;
  local_18 = DAT_00424728;
  local_14 = param_1;
  while (puVar5 = local_18, local_18 != (undefined4 *)0x0) {
    pwVar4 = wcschr((wchar_t *)local_18[1],L'$');
    ppiVar2 = (int **)DAT_0042473c;
    if (pwVar4 == (wchar_t *)0x0) {
      puVar1 = (undefined4 *)*puVar5;
      *puVar5 = 0;
      local_c = puVar1;
      FUN_0040ed6a(param_1,puVar5);
      local_18 = puVar1;
    }
    else {
      local_1c = (int *)puVar5[1];
      local_8 = (wchar_t *)0x0;
      FUN_0040f95a(local_28,&local_1c,-1,&DAT_0042473c,'\0',&local_8);
      if (ppiVar2 != (int **)DAT_0042473c) {
        do {
          ppiVar7 = ppiVar2;
          ppiVar2 = (int **)*ppiVar7;
          *ppiVar7 = DAT_00435698;
          DAT_00435698 = ppiVar7;
        } while (ppiVar2 != (int **)DAT_0042473c);
      }
      local_10 = (wchar_t *)0x0;
      pwVar4 = wcstok_s(local_8,L" \t",&local_10);
      puVar3 = local_14;
      local_20 = pwVar4;
      puVar1 = puVar5;
      while (pwVar4 != (wchar_t *)0x0) {
        puVar5 = FUN_0040ec13();
        pvVar6 = FUN_0040ec65(pwVar4);
        puVar5[1] = pvVar6;
        FUN_0040ed6a(puVar3,puVar5);
        pwVar4 = wcstok_s((wchar_t *)0x0,L" \t",&local_10);
        puVar5 = local_18;
        puVar1 = local_c;
      }
      free(local_8);
      free((void *)puVar1[1]);
      local_18 = (undefined4 *)*puVar1;
      *puVar5 = DAT_00435698;
      param_1 = local_14;
      DAT_00435698 = puVar5;
      local_c = local_18;
    }
  }
  return;
}



void * __fastcall FUN_00403aae(undefined4 *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  pvVar2 = FUN_0040b5a3(8);
  puVar3 = (undefined4 *)FUN_0040b5a3(0x20);
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



void __fastcall FUN_00403af8(size_t param_1)

{
  FUN_0040b57e(param_1);
  return;
}



uint __fastcall FUN_00403b00(ushort param_1)

{
  int iVar1;
  
  if (param_1 < 0x80) {
    return CONCAT11((char)(param_1 >> 8),(&DAT_00401090)[param_1]) & 0xffffff01;
  }
  iVar1 = iswspace(param_1);
  return CONCAT31((int3)((uint)-iVar1 >> 8),'\x01' - (iVar1 != 0));
}



void __fastcall FUN_00403b25(wchar_t *param_1,wchar_t param_2)

{
  wcschr(param_1,param_2);
  return;
}



void __thiscall FUN_00403b30(void *this,undefined2 param_1)

{
  FUN_00403c5c(this,1);
  *(undefined2 *)(*(int *)((int)this + 0x800) + *(int *)((int)this + 0x808) * 2) = param_1;
  *(int *)((int)this + 0x808) = *(int *)((int)this + 0x808) + 1;
  return;
}



void __thiscall FUN_00403b60(void *this,short *param_1)

{
  short sVar1;
  
  sVar1 = *param_1;
  while (sVar1 != 0) {
    FUN_00403b30(this,sVar1);
    param_1 = param_1 + 1;
    sVar1 = *param_1;
  }
  return;
}



void __thiscall FUN_00403b91(void *this,void *param_1,int param_2)

{
  FUN_00403c5c(this,param_2);
  memcpy((void *)(*(int *)((int)this + 0x800) + *(int *)((int)this + 0x808) * 2),param_1,param_2 * 2
        );
  *(int *)((int)this + 0x808) = *(int *)((int)this + 0x808) + param_2;
  return;
}



void __thiscall FUN_00403bd0(void *this,void **param_1,void **param_2)

{
  uint uVar1;
  void *pvVar2;
  void *_Dst;
  void *local_8;
  
  _Dst = *(void **)((int)this + 0x800);
  *(undefined4 *)((int)this + 0x800) = 0;
  uVar1 = *(uint *)((int)this + 0x808);
  local_8 = this;
  if (_Dst == this) {
    _Dst = FUN_00403cd7(uVar1);
    memcpy(_Dst,this,*(int *)((int)this + 0x808) * 2);
  }
  else if (uVar1 != *(uint *)((int)this + 0x804)) {
    _Dst = FUN_00403d09(_Dst,uVar1);
  }
  if (param_2 != &local_8) {
    pvVar2 = *param_2;
    *param_2 = _Dst;
    _Dst = pvVar2;
  }
  if (_Dst != (void *)0x0) {
    FUN_00412550(_Dst);
  }
  *param_1 = *param_2;
  param_1[1] = (void *)(*(int *)((int)this + 0x808) + -1);
  return;
}



void __thiscall FUN_00403c5c(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  
  uVar2 = param_1 + *(int *)((int)this + 0x808);
  uVar1 = *(uint *)((int)this + 0x804);
  if ((uVar1 < uVar2) &&
     (uVar2 = uVar1 + 0x400 + ((uVar2 - uVar1) - 1 & 0xfffffc00), uVar2 != uVar1)) {
    *(uint *)((int)this + 0x804) = uVar2;
    if (*(void **)((int)this + 0x800) == this) {
      pvVar3 = FUN_00403cd7(uVar2);
      *(void **)((int)this + 0x800) = pvVar3;
      memcpy(pvVar3,this,*(int *)((int)this + 0x808) * 2);
    }
    else {
      pvVar3 = FUN_00403d09(*(void **)((int)this + 0x800),uVar2);
      *(void **)((int)this + 0x800) = pvVar3;
    }
  }
  return;
}



void FUN_00403ccb(void)

{
  code *pcVar1;
  
  std::_Xout_of_range("invalid string_view position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void * __fastcall FUN_00403cd7(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if ((param_1 < 0x7ffffffd) && (pvVar1 = malloc(param_1 * 2), pvVar1 != (void *)0x0)) {
    return pvVar1;
  }
  FUN_00405ad3(DAT_00424730,0x41b);
  return pvVar1;
}



void * __fastcall FUN_00403d09(void *param_1,uint param_2)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    pvVar1 = FUN_00403cd7(param_2);
    return pvVar1;
  }
  pvVar1 = (void *)0x0;
  if ((param_2 < 0x7ffffffd) && (pvVar1 = realloc(param_1,param_2 * 2), pvVar1 != (void *)0x0)) {
    return pvVar1;
  }
  FUN_00405ad3(DAT_00424730,0x41b);
  return pvVar1;
}



void FUN_00403d49(void)

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
  
  local_c = DAT_00414014 ^ (uint)auStack_274;
  if (DAT_00424710 != (undefined4 *)0x0) {
    do {
      puVar1 = DAT_00424710;
      pwVar2 = wcspbrk((wchar_t *)DAT_00424710[1],L"*?");
      if (pwVar2 == (wchar_t *)0x0) {
        uStack_270._0_4_ = 0;
        uStack_270._4_4_ = 0;
        iVar3 = FUN_00403ea7((wchar_t *)DAT_00424710[1],DAT_0041450e,&uStack_270);
        if ((iVar3 < 0) && ((DAT_0041450c & 8) != 0)) {
LAB_00403e9c:
          FUN_004052c9(puVar1);
          break;
        }
      }
      else {
        pwVar2 = (wchar_t *)FUN_004081f8((wchar_t *)DAT_00424710[1],&_Stack_260,&pvStack_264);
        if (pwVar2 == (wchar_t *)0x0) {
          FUN_00405ad3(0,0x42d);
        }
        else {
          do {
            pwVar2 = (wchar_t *)FUN_00411529((wchar_t *)DAT_00424710[1],pwVar2);
            uVar4 = FUN_004081de((byte *)&_Stack_260);
            uStack_270 = uVar4;
            iVar3 = FUN_00403ea7(pwVar2,DAT_0041450e,&uStack_270);
            free(pwVar2);
            if ((iVar3 < 0) && ((DAT_0041450c & 8) != 0)) goto LAB_00403e9c;
            pwVar2 = FUN_00408383(&_Stack_260,pvStack_264);
          } while (pwVar2 != (WCHAR *)0x0);
        }
      }
      DAT_00424710 = (undefined4 *)*puVar1;
      *puVar1 = DAT_00435698;
      DAT_00435698 = puVar1;
    } while (DAT_00424710 != (undefined4 *)0x0);
  }
  FUN_00412542(local_c ^ (uint)auStack_274);
  return;
}



int __fastcall FUN_00403ea7(wchar_t *param_1,byte param_2,ulonglong *param_3)

{
  int **ppiVar1;
  int iVar2;
  uint uVar3;
  int **ppiVar4;
  int iVar5;
  int **local_c [2];
  
  iVar5 = 0;
  local_c[0] = (int **)0x0;
  iVar2 = FUN_00403f13(param_1,param_2,param_3,(int ************)0x0,(int **)local_c);
  ppiVar4 = local_c[0];
  if (local_c[0] != (int **)0x0) {
    do {
      uVar3 = FUN_004053e6((int)ppiVar4);
      ppiVar4 = (int **)*ppiVar4;
      iVar5 = iVar5 + uVar3;
    } while (ppiVar4 != (int **)0x0);
    iVar2 = iVar2 + iVar5;
    ppiVar4 = local_c[0];
    while (ppiVar4 != (int **)0x0) {
      ppiVar1 = (int **)ppiVar4[3];
      *ppiVar1 = DAT_00435698;
      DAT_00435698 = ppiVar4[4];
      *DAT_00435698 = (int)ppiVar1;
      ppiVar1 = (int **)*ppiVar4;
      free(ppiVar4);
      ppiVar4 = ppiVar1;
    }
  }
  return iVar2;
}



void __fastcall
FUN_00403f13(wchar_t *param_1,byte param_2,ulonglong *param_3,int ************param_4,int **param_5)

{
  undefined4 *puVar1;
  bool bVar2;
  
  DAT_00414504 = DAT_00414504 + 1;
  puVar1 = FUN_0040edb7(param_1);
  bVar2 = puVar1 == (undefined4 *)0x0;
  if (bVar2) {
    puVar1 = FUN_004052f3((wint_t *)param_1,param_2);
  }
  FUN_00403f69((int)puVar1,param_2,param_3,!bVar2,param_4,param_5);
  DAT_00414504 = DAT_00414504 + -1;
  return;
}



// WARNING: Removing unreachable block (ram,0x0040433c)
// WARNING: Removing unreachable block (ram,0x00404854)

void __fastcall
FUN_00403f69(int param_1,byte param_2,ulonglong *param_3,char param_4,int ************param_5,
            int **param_6)

{
  int *******pppppppiVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  int **************ppppppppppppppiVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  undefined4 *puVar9;
  int ************ppppppppppppiVar10;
  uint uVar11;
  int *************pppppppppppppiVar12;
  wchar_t **extraout_ECX;
  wchar_t **extraout_ECX_00;
  wchar_t **extraout_ECX_01;
  wchar_t **ppwVar13;
  int *piVar14;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar15;
  undefined4 extraout_EDX_02;
  int *piVar16;
  int **************ppppppppppppppiVar17;
  int **ppiVar18;
  bool bVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  _FILETIME local_4ec;
  int **local_4e4;
  int *local_4e0;
  int *local_4dc;
  int *local_4d8;
  int *************local_4d4;
  HANDLE local_4d0;
  int **local_4cc;
  int *local_4c8;
  int *local_4c4;
  wchar_t **local_4c0;
  ulonglong *local_4bc;
  int **************local_4b8;
  wchar_t **local_4b4;
  int **************local_4b0;
  int *local_4ac;
  wchar_t **local_4a8;
  int **local_4a4;
  int *************local_4a0;
  int **************local_49c;
  wchar_t **local_498;
  int **************local_494;
  int *local_490;
  wchar_t **local_48c;
  wchar_t **local_488;
  int *local_484;
  int local_480;
  int **local_47c;
  int **local_478;
  undefined8 local_474;
  int local_46c;
  byte local_465;
  _WIN32_FIND_DATAW local_464;
  wchar_t local_214 [262];
  uint local_8;
  
  uVar21 = CONCAT44(local_48c,local_484);
  local_8 = DAT_00414014 ^ (uint)&stack0xfffffffc;
  local_4d4 = (int *************)param_5;
  local_4a0 = (int *************)param_5;
  local_4bc = param_3;
  local_46c = 0;
  local_480 = 0;
  local_465 = param_2;
  if (param_1 == 0) {
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)((int)param_3 + 4) = 0;
    goto LAB_00404d8f;
  }
  ppiVar18 = (int **)(param_1 + 4);
  local_478 = ppiVar18;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    FUN_00405ad3(0,0x42f);
  }
  puVar9 = *(undefined4 **)(param_1 + 0x1c);
  if (puVar9 != (undefined4 *)0x0) {
    FUN_0040553b((undefined4 *)*puVar9);
    FUN_00405559(puVar9);
    uVar21 = CONCAT44(local_48c,local_484);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uVar22 = *(ulonglong *)(param_1 + 0x10);
LAB_00404014:
    *local_4bc = uVar22;
    goto LAB_00404d8f;
  }
  if ((*(byte *)(param_1 + 9) & 2) != 0) {
    if ((local_465 & 1) != 0) {
      FUN_0040d3e7(*(uint *)(param_1 + 0x10),*(uint *)(param_1 + 0x14));
    }
    piVar14 = *(int **)(param_1 + 0x14);
    *(int **)local_4bc = *(int **)(param_1 + 0x10);
    *(int **)((int)local_4bc + 4) = piVar14;
    if (((((DAT_0041450c & 8) == 0) && (DAT_00414504 == 1)) && ((*(byte *)(param_1 + 9) & 4) == 0))
       && (iVar8 = FUN_004081f8((wchar_t *)*ppiVar18,&local_464,&local_4d0), iVar8 != 0)) {
      FUN_00405bad(2);
    }
    uVar21 = CONCAT44(local_48c,local_484);
    goto LAB_00404d8f;
  }
  local_4e4 = (int **)0x0;
  ppppppppppppppiVar17 = (int **************)0x0;
  local_4cc = (int **)0x0;
  piVar14 = (int *)0x0;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
  local_488 = *(wchar_t ***)(param_1 + 0x18);
  local_494 = (int **************)0x0;
  local_4b8 = (int **************)0x0;
  local_4dc = (int *)0x0;
  local_4a4 = (int **)0x0;
  local_47c = (int **)0x0;
  local_484 = (int *)0x0;
  local_48c = (wchar_t **)0x0;
  uVar21 = 0;
  local_4c4 = (int *)0x0;
  local_4c0 = (wchar_t **)0x0;
  local_4d8 = (int *)0x0;
  local_4ac = (int *)0x0;
  local_4b4 = (wchar_t **)0x0;
  local_4a8 = (wchar_t **)0x0;
  ppwVar13 = (wchar_t **)*ppiVar18;
  local_4b0 = (int **************)0x0;
  local_49c = (int **************)0x0;
  local_474 = 0;
  DAT_00424f54 = ppwVar13;
  DAT_00424f58 = ppwVar13;
  if (local_488 != (wchar_t **)0x0) {
    if ((*(byte *)(local_488[1] + 8) & 0x20) != 0) {
      iVar8 = FUN_004081f8((wchar_t *)ppwVar13,&local_464,&local_4d0);
      if (iVar8 == 0) {
        piVar14 = (int *)0x0;
      }
      else {
        local_474 = FUN_004081de((byte *)&local_464);
        piVar14 = (int *)(local_474 >> 0x20);
      }
    }
    uVar21 = CONCAT44(local_48c,local_484);
    do {
      local_48c = (wchar_t **)(uVar21 >> 0x20);
      local_484 = (int *)uVar21;
      local_47c = (int **)local_488[1];
      local_490 = (int *)0x0;
      local_498 = (wchar_t **)0x0;
      if (((uint)local_47c[6] | (uint)local_47c[7]) == 0) {
        local_4e4 = local_47c + 6;
        uVar20 = FUN_00404da0(local_47c,*local_478);
        piVar14 = (int *)uVar20;
        local_4e0 = piVar14;
        local_4c8 = piVar14;
        if (piVar14 != (int *)0x0) {
          do {
            local_4c4 = (int *)piVar14[2];
            local_4c0 = (wchar_t **)piVar14[3];
            local_4c8 = piVar14;
            iVar8 = FUN_00403f13((wchar_t *)piVar14[1],*(byte *)(local_47c + 4),
                                 (ulonglong *)&local_4c4,(int ************)0x0,(int **)&local_4cc);
            local_480 = local_46c + iVar8;
            local_46c = local_480;
            if ((DAT_00424737 != '\0') && (iVar8 != 0)) {
              puVar9 = FUN_0040edb7((wchar_t *)piVar14[1]);
              if ((*(byte *)((int)puVar9 + 9) & 8) == 0) {
                DAT_00414020 = 0;
                FUN_00405ad3(0,0xfaa);
              }
              *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 8;
            }
            if ((local_498 <= local_4c0) && ((local_498 < local_4c0 || (local_490 <= local_4c4)))) {
              local_490 = local_4c4;
              local_498 = local_4c0;
            }
            uVar11 = (uint)local_474._4_4_;
            if (((((uint)(int *)local_474 | (uint)local_474._4_4_) == 0) &&
                ((*(byte *)(local_47c + 4) & 0x20) == 0)) &&
               (iVar8 = FUN_004081f8((wchar_t *)*local_478,&local_464,&local_4d0), iVar8 != 0)) {
              uVar21 = FUN_004081de((byte *)&local_464);
              *(ulonglong *)(param_1 + 0x10) = uVar21;
              local_474 = uVar21;
            }
            else {
              uVar21 = CONCAT44(uVar11,(int *)local_474);
            }
            if ((((*(byte *)(param_1 + 8) & 0x10) != 0) || (uVar21 < CONCAT44(local_4c0,local_4c4)))
               || ((DAT_00424736 != '\0' && (uVar21 == CONCAT44(local_4c0,local_4c4))))) {
              pppppppppppppiVar12 = (int *************)FUN_0040ec13();
              ppppppppppppiVar10 = (int ************)FUN_0040ec65((short *)local_4c8[1]);
              pppppppppppppiVar12[1] = ppppppppppppiVar10;
              ppppppppppppppiVar5 = (int **************)&local_4b8;
              for (; local_494 != (int **************)0x0;
                  local_494 = (int **************)*local_494) {
                ppppppppppppppiVar5 = local_494;
              }
              *ppppppppppppppiVar5 = pppppppppppppiVar12;
              local_494 = local_4b8;
            }
            pppppppppppppiVar12 = (int *************)FUN_0040ec13();
            ppppppppppppiVar10 = (int ************)FUN_0040ec65((short *)local_4c8[1]);
            uVar20 = CONCAT44(extraout_EDX,local_4e0);
            pppppppppppppiVar12[1] = ppppppppppppiVar10;
            ppppppppppppppiVar5 = (int **************)&local_49c;
            for (; ppppppppppppppiVar17 != (int **************)0x0;
                ppppppppppppppiVar17 = (int **************)*ppppppppppppppiVar17) {
              ppppppppppppppiVar5 = ppppppppppppppiVar17;
            }
            *ppppppppppppppiVar5 = pppppppppppppiVar12;
            piVar14 = (int *)*local_4c8;
            ppppppppppppppiVar17 = local_49c;
          } while (piVar14 != (int *)0x0);
          local_4b0 = local_49c;
          local_4c8 = (int *)0x0;
        }
        local_4e0 = (int *)uVar20;
        puVar9 = local_4e0;
        if (local_4cc != (int **)0x0) {
          iVar8 = 0;
          ppiVar18 = local_4cc;
          do {
            uVar11 = FUN_004053e6((int)ppiVar18);
            ppiVar18 = (int **)*ppiVar18;
            iVar8 = iVar8 + uVar11;
          } while (ppiVar18 != (int **)0x0);
          local_480 = local_46c + iVar8;
          uVar15 = extraout_EDX_00;
          ppiVar18 = local_4cc;
          local_46c = local_480;
          while (uVar20 = CONCAT44(uVar15,local_4e0), ppiVar18 != (int **)0x0) {
            pppppppiVar1 = (int *******)ppiVar18[3];
            *pppppppiVar1 = (int ******)DAT_00435698;
            DAT_00435698 = (int ********)ppiVar18[4];
            *DAT_00435698 = pppppppiVar1;
            ppiVar2 = (int **)*ppiVar18;
            free(ppiVar18);
            uVar15 = extraout_EDX_01;
            ppiVar18 = ppiVar2;
          }
          local_4cc = (int **)0x0;
          puVar9 = local_4e0;
        }
        while( true ) {
          ppppppppppppppiVar17 = local_4b0;
          local_4e0 = (int *)uVar20;
          uVar21 = CONCAT44(local_48c,local_484);
          if (puVar9 == (undefined4 *)0x0) break;
          free((void *)puVar9[1]);
          puVar3 = (undefined4 *)*puVar9;
          free(puVar9);
          uVar20 = CONCAT44(extraout_EDX_02,local_4e0);
          puVar9 = puVar3;
        }
        if ((*(byte *)(local_47c + 4) & 0x20) == 0) {
          if (local_47c[2] != (int *)0x0) {
            if (local_4a4 == (int **)0x0) {
              local_4a4 = local_47c;
            }
            else {
              FUN_00405ad3(0,0xfa4);
            }
          }
          iVar8 = local_46c;
          uVar21 = CONCAT44(local_48c,local_484);
          if ((local_4b4 <= local_498) &&
             ((local_4b4 < local_498 ||
              (uVar21 = CONCAT44(local_48c,local_484), local_4d8 <= local_490)))) {
            local_4d8 = local_490;
            local_4b4 = local_498;
            local_4ac = local_490;
            local_4a8 = local_498;
            uVar21 = CONCAT44(local_48c,local_484);
          }
        }
        else {
          iVar8 = local_46c;
          if (local_47c[2] != (int *)0x0) {
            DAT_00424f48 = 0;
            DAT_00424f4c = (wchar_t *)0x0;
            DAT_00424f50 = (int ********)local_494;
            DAT_00424f44 = (int ********)local_4b0;
            DAT_00424f54 = (wchar_t **)*local_478;
            DAT_00424f58 = DAT_00424f54;
            if ((((((DAT_00424737 != '\0') && ((*(byte *)(param_1 + 9) & 8) == 0)) ||
                  (local_46c == 0)) &&
                 ((local_474._4_4_ < local_498 ||
                  ((local_474._4_4_ <= local_498 && ((int *)local_474 < local_490)))))) ||
                ((DAT_00424736 != '\0' &&
                 (((int *)local_474 == local_490 && (local_474._4_4_ == local_498)))))) ||
               (((((uint)(int *)local_474 | (uint)local_474._4_4_) == 0 &&
                 (((uint)local_490 | (uint)local_498) == 0)) || (*local_47c == (int *)0x0)))) {
              local_465 = DAT_00435478;
              DAT_00435478 = 1;
              if (local_4d4 == (int *************)0x0) {
                if (local_4b0 == (int **************)0x0) {
                  local_4d4 = (int *************)0x0;
                  local_4a0 = local_4d4;
                }
                else {
                  local_4d4 = local_4b0[1];
                  local_4a0 = local_4d4;
                }
              }
              local_480 = FUN_00405e1b((short *)DAT_00424f54,local_47c[2],local_47c[3],
                                       CONCAT31((int3)((ulonglong)uVar20 >> 0x28),
                                                *(byte *)(local_47c + 4)),(wchar_t *)local_4d4);
              local_480 = local_46c + local_480;
              local_46c = local_480;
              if (((*(byte *)(param_1 + 8) & 4) == 0) &&
                 (iVar8 = FUN_004081f8((wchar_t *)*local_478,&local_464,&local_4d0), iVar8 != 0)) {
                uVar21 = FUN_004081de((byte *)&local_464);
              }
              else if (((uint)local_4d8 | (uint)local_4b4) == 0) {
                GetSystemTimeAsFileTime(&local_4ec);
                uVar21 = CONCAT44(local_4ec.dwHighDateTime,local_4ec.dwLowDateTime);
              }
              else {
                uVar21 = CONCAT44(local_4b4,local_4d8);
              }
              *(ulonglong *)(local_47c + 6) = uVar21;
              if (ppppppppppppppiVar17 == local_494) {
                while (ppppppppppppppiVar17 != (int **************)0x0) {
                  local_48c = (wchar_t **)(uVar21 >> 0x20);
                  local_484 = (int *)uVar21;
                  pppppppppppppiVar12 = *ppppppppppppppiVar17;
                  free(ppppppppppppppiVar17[1]);
                  uVar21 = CONCAT44(local_48c,local_484);
                  *ppppppppppppppiVar17 = (int *************)DAT_00435698;
                  DAT_00435698 = (int ********)ppppppppppppppiVar17;
                  ppppppppppppppiVar17 = (int **************)pppppppppppppiVar12;
                }
              }
              else {
                while (ppppppppppppppiVar5 = local_494,
                      ppppppppppppppiVar17 != (int **************)0x0) {
                  local_48c = (wchar_t **)(uVar21 >> 0x20);
                  local_484 = (int *)uVar21;
                  pppppppppppppiVar12 = *ppppppppppppppiVar17;
                  free(ppppppppppppppiVar17[1]);
                  uVar21 = CONCAT44(local_48c,local_484);
                  *ppppppppppppppiVar17 = (int *************)DAT_00435698;
                  DAT_00435698 = (int ********)ppppppppppppppiVar17;
                  ppppppppppppppiVar17 = (int **************)pppppppppppppiVar12;
                }
                while (ppppppppppppppiVar5 != (int **************)0x0) {
                  local_48c = (wchar_t **)(uVar21 >> 0x20);
                  local_484 = (int *)uVar21;
                  pppppppppppppiVar12 = *ppppppppppppppiVar5;
                  free(ppppppppppppppiVar5[1]);
                  uVar21 = CONCAT44(local_48c,local_484);
                  *ppppppppppppppiVar5 = (int *************)DAT_00435698;
                  DAT_00435698 = (int ********)ppppppppppppppiVar5;
                  ppppppppppppppiVar5 = (int **************)pppppppppppppiVar12;
                }
              }
              local_494 = (int **************)0x0;
              local_4b8 = (int **************)0x0;
              local_4b0 = (int **************)0x0;
              local_49c = (int **************)0x0;
              DAT_00435478 = local_465;
            }
            local_48c = (wchar_t **)(uVar21 >> 0x20);
            local_484 = (int *)uVar21;
            iVar8 = local_46c;
            if (DAT_00424737 != '\0') {
              if ((*(byte *)(param_1 + 9) & 8) != 0) {
                FUN_00405ad3(0,0xfab);
                uVar21 = CONCAT44(local_48c,local_484);
                *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xf7;
              }
              local_48c = (wchar_t **)(uVar21 >> 0x20);
              local_484 = (int *)uVar21;
              iVar8 = local_46c;
              if (local_46c != 0) {
                DAT_00414020 = 0;
                local_46c = 0;
                local_480 = 0;
                FUN_00405ad3(0,0xfaa);
                iVar8 = 0;
                uVar21 = CONCAT44(local_48c,local_484);
              }
            }
          }
        }
        piVar14 = (int *)local_474._4_4_;
        ppppppppppppppiVar17 = local_4b0;
        if (((*(byte *)(local_47c + 4) & 0x20) != 0) && (*local_488 == (wchar_t *)0x0)) {
          if (iVar8 < 1) {
            bVar6 = *(byte *)(param_1 + 9) & 0xfa | 2;
          }
          else {
            bVar6 = *(byte *)(param_1 + 9) & 0xfe | 6;
          }
          *(byte *)(param_1 + 9) = bVar6;
          uVar22 = local_474;
          if (local_474 < uVar21) {
            uVar22 = uVar21;
          }
          *(ulonglong *)(param_1 + 0x10) = uVar22;
          goto LAB_00404014;
        }
      }
      else {
        bVar19 = piVar14 < local_47c[7];
        if ((bVar19 || piVar14 == local_47c[7]) &&
           ((bVar19 || ((int *)local_474 < local_47c[6] || (int *)local_474 == local_47c[6])))) {
          local_474 = *(ulonglong *)(local_47c + 6);
          piVar14 = local_47c[7];
        }
      }
      local_488 = (wchar_t **)*local_488;
    } while (local_488 != (wchar_t **)0x0);
    ppwVar13 = (wchar_t **)*local_478;
  }
  local_48c = (wchar_t **)(uVar21 >> 0x20);
  local_484 = (int *)uVar21;
  DAT_00424f48 = 0;
  DAT_00424f4c = (wchar_t *)0x0;
  local_488 = *(wchar_t ***)((int)local_4bc + 4);
  uVar4 = *local_4bc;
  local_474 = CONCAT44(*(int **)local_4bc,(int *)local_474);
  uVar22 = *local_4bc;
  if (((uint)*(int **)local_4bc | (uint)local_488) == 0) {
    if ((*(uint *)(param_1 + 0x10) | *(uint *)(param_1 + 0x14)) == 0) {
      iVar8 = FUN_004081f8((wchar_t *)ppwVar13,&local_464,&local_4d0);
      uVar21 = CONCAT44(local_48c,local_484);
      ppwVar13 = extraout_ECX;
      uVar22 = uVar4;
      if (iVar8 != 0) {
        uVar22 = FUN_004081de((byte *)&local_464);
        uVar21 = CONCAT44(local_48c,local_484);
        local_488 = (wchar_t **)(uVar22 >> 0x20);
        local_474 = CONCAT44((int)uVar22,(int *)local_474);
        ppwVar13 = extraout_ECX_00;
      }
    }
    else {
      local_488 = *(wchar_t ***)(param_1 + 0x14);
      local_474 = CONCAT44(*(undefined4 *)(ulonglong *)(param_1 + 0x10),(int *)local_474);
      uVar22 = *(ulonglong *)(param_1 + 0x10);
    }
  }
  local_48c = (wchar_t **)(uVar21 >> 0x20);
  local_484 = (int *)uVar21;
  uVar11 = (uint)(uVar22 >> 0x20);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_0040d3e7((uint)uVar22,uVar11);
    uVar21 = CONCAT44(local_48c,local_484);
    ppwVar13 = extraout_ECX_01;
  }
  local_48c = (wchar_t **)(uVar21 >> 0x20);
  local_484 = (int *)uVar21;
  local_4e0 = (int *)FUN_0040ea67(param_1,local_214,ppwVar13,(uint)uVar22,uVar11,(int *)&local_4b8,
                                  (int *)&local_49c,&local_480,(uint *)&local_4ac,
                                  (wchar_t **)&local_4a0);
  ppppppppppppppiVar17 = local_49c;
  ppppppppppppppiVar5 = local_4b8;
  if ((local_4e0 != (int *)0x0) && (local_4a4 == (int **)0x0)) {
    local_4dc = (int *)local_4e0[3];
    DAT_00424f4c = local_214;
  }
  DAT_00424f54 = (wchar_t **)*local_478;
  DAT_00424f50 = (int ********)local_4b8;
  DAT_00424f44 = (int ********)local_49c;
  local_46c = local_480;
  DAT_00424f58 = DAT_00424f54;
  local_4b4 = DAT_00424f54;
  if ((((DAT_00424737 == '\0') || ((*(byte *)(param_1 + 9) & 8) != 0)) && (local_480 != 0)) ||
     ((((local_4a8 <= local_488 && ((local_4a8 < local_488 || (local_4ac <= local_474._4_4_)))) &&
       ((DAT_00424736 == '\0' ||
        ((local_474._4_4_ != (wchar_t **)local_4ac || (local_488 != local_4a8)))))) &&
      (((((uint)local_474._4_4_ | (uint)local_488) != 0 ||
        (((uint)local_4ac | (uint)local_4a8) != 0)) && ((*(byte *)(param_1 + 8) & 0x10) == 0)))))) {
    iVar8 = local_480;
    if ((((DAT_0041450c & 8) == 0) && (DAT_00414504 == 1)) && ((*(byte *)(param_1 + 9) & 8) == 0)) {
      FUN_00405bad(2);
      iVar8 = local_480;
    }
  }
  else {
    local_465 = DAT_00435478;
    DAT_00435478 = 1;
    pppppppppppppiVar12 = local_4a0;
    if (local_4a4 == (int **)0x0) {
      if (local_4dc != (int *)0x0) {
        if ((*(char *)(local_4e0 + 5) == '\0') || ((DAT_0041450c & 0x40) != 0)) {
          bVar6 = *(byte *)(param_1 + 8);
          piVar14 = (int *)local_4e0[4];
          piVar16 = local_4dc;
          goto LAB_00404ae9;
        }
        FUN_0040533a(param_6,local_4e0,param_1);
        goto LAB_00404a54;
      }
      if ((DAT_0041450c & 0x10) == 0) {
        if ((param_4 == '\0') && (((uint)local_474._4_4_ | (uint)local_488) == 0)) {
          if (DAT_00424737 == '\0') {
            FUN_00405ad3(0,0x431);
          }
          else {
            local_46c = 1;
          }
        }
      }
      else if (local_47c != (int **)0x0) {
        local_46c = FUN_00405e1b((short *)*local_478,local_47c[2],local_47c[3],
                                 (uint)*(byte *)(local_47c + 4),(wchar_t *)local_4a0);
        local_46c = local_480 + local_46c;
      }
      piVar14 = local_4ac;
      ppwVar13 = local_4a8;
      DAT_00435478 = local_465;
      if (DAT_00424f44 == (int ********)0x0) goto LAB_00404a54;
    }
    else {
      if (local_4a0 == (int *************)0x0) {
        if (local_49c == (int **************)0x0) {
          pppppppppppppiVar12 = (int *************)0x0;
        }
        else {
          pppppppppppppiVar12 = local_49c[1];
        }
      }
      bVar6 = *(byte *)(local_4a4 + 4);
      piVar14 = local_4a4[3];
      piVar16 = local_4a4[2];
LAB_00404ae9:
      local_46c = FUN_00405e1b((short *)*local_478,piVar16,piVar14,(uint)bVar6,
                               (wchar_t *)pppppppppppppiVar12);
      local_46c = local_480 + local_46c;
LAB_00404a54:
      DAT_00435478 = local_465;
      GetSystemTimeAsFileTime(&local_4ec);
      piVar14 = (int *)(local_4ec.dwLowDateTime + 2);
      ppwVar13 = (wchar_t **)(local_4ec.dwHighDateTime + (0xfffffffd < local_4ec.dwLowDateTime));
    }
    iVar8 = local_46c;
    local_48c = ppwVar13;
    local_484 = piVar14;
    if ((local_4e4 != (int **)0x0) && (local_4a4 != (int **)0x0)) {
      *local_4e4 = piVar14;
      local_4e4[1] = (int *)ppwVar13;
    }
  }
  if ((DAT_00424737 != '\0') && (iVar8 != 0)) {
    DAT_00414020 = 0;
    if ((*(byte *)(param_1 + 9) & 8) == 0) {
      if (DAT_00414504 != 1) goto LAB_00404c13;
      uVar11 = 0xfaa;
    }
    else {
      uVar11 = 0xfab;
    }
    FUN_00405ad3(0,uVar11);
  }
LAB_00404c13:
  if (((DAT_0041450c & 8) == 0) || (DAT_00414504 != 1)) {
    bVar6 = *(byte *)(param_1 + 9);
    bVar7 = bVar6 & 0xfe;
    *(byte *)(param_1 + 9) = bVar7;
    if (*(int *)(param_1 + 0x1c) == 0) {
      if (local_46c < 1) {
        bVar7 = bVar6 & 0xfa | 2;
      }
      else {
        bVar7 = bVar7 | 6;
      }
      *(byte *)(param_1 + 9) = bVar7;
    }
    piVar14 = (int *)local_474._4_4_;
    ppwVar13 = local_488;
    if ((local_488 <= local_48c) && ((local_488 < local_48c || (local_474._4_4_ < local_484)))) {
      piVar14 = local_484;
      ppwVar13 = local_48c;
    }
    *(int **)(param_1 + 0x10) = piVar14;
    *(wchar_t ***)(param_1 + 0x14) = ppwVar13;
    *(int **)local_4bc = piVar14;
    *(wchar_t ***)((int)local_4bc + 4) = ppwVar13;
    if (ppppppppppppppiVar17 == ppppppppppppppiVar5) {
      while (ppppppppppppppiVar17 != (int **************)0x0) {
        pppppppppppppiVar12 = *ppppppppppppppiVar17;
        free(ppppppppppppppiVar17[1]);
        *ppppppppppppppiVar17 = (int *************)DAT_00435698;
        DAT_00435698 = (int ********)ppppppppppppppiVar17;
        ppppppppppppppiVar17 = (int **************)pppppppppppppiVar12;
      }
    }
    else {
      while (ppppppppppppppiVar17 != (int **************)0x0) {
        pppppppppppppiVar12 = *ppppppppppppppiVar17;
        free(ppppppppppppppiVar17[1]);
        *ppppppppppppppiVar17 = (int *************)DAT_00435698;
        DAT_00435698 = (int ********)ppppppppppppppiVar17;
        ppppppppppppppiVar17 = (int **************)pppppppppppppiVar12;
      }
      while (ppppppppppppppiVar5 != (int **************)0x0) {
        pppppppppppppiVar12 = *ppppppppppppppiVar5;
        free(ppppppppppppppiVar5[1]);
        *ppppppppppppppiVar5 = (int *************)DAT_00435698;
        DAT_00435698 = (int ********)ppppppppppppppiVar5;
        ppppppppppppppiVar5 = (int **************)pppppppppppppiVar12;
      }
    }
    uVar21 = CONCAT44(local_48c,local_484);
  }
  else {
    if (ppppppppppppppiVar17 == ppppppppppppppiVar5) {
      while (ppppppppppppppiVar17 != (int **************)0x0) {
        pppppppppppppiVar12 = *ppppppppppppppiVar17;
        free(ppppppppppppppiVar17[1]);
        *ppppppppppppppiVar17 = (int *************)DAT_00435698;
        DAT_00435698 = (int ********)ppppppppppppppiVar17;
        ppppppppppppppiVar17 = (int **************)pppppppppppppiVar12;
      }
    }
    else {
      while (ppppppppppppppiVar17 != (int **************)0x0) {
        pppppppppppppiVar12 = *ppppppppppppppiVar17;
        free(ppppppppppppppiVar17[1]);
        *ppppppppppppppiVar17 = (int *************)DAT_00435698;
        DAT_00435698 = (int ********)ppppppppppppppiVar17;
        ppppppppppppppiVar17 = (int **************)pppppppppppppiVar12;
      }
      while (ppppppppppppppiVar5 != (int **************)0x0) {
        pppppppppppppiVar12 = *ppppppppppppppiVar5;
        free(ppppppppppppppiVar5[1]);
        *ppppppppppppppiVar5 = (int *************)DAT_00435698;
        DAT_00435698 = (int ********)ppppppppppppppiVar5;
        ppppppppppppppiVar5 = (int **************)pppppppppppppiVar12;
      }
    }
    uVar21 = CONCAT44(local_48c,local_484);
  }
LAB_00404d8f:
  local_48c = (wchar_t **)(uVar21 >> 0x20);
  local_484 = (int *)uVar21;
  FUN_00412542(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __fastcall FUN_00404da0(int **param_1,undefined4 param_2)

{
  short sVar1;
  char cVar2;
  wchar_t wVar3;
  short *psVar4;
  undefined4 uVar5;
  int *piVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int **ppiVar9;
  int *piVar10;
  int iVar11;
  int **ppiVar12;
  int **ppiVar13;
  WCHAR *pWVar14;
  int **ppiVar15;
  uint _SizeInWords;
  wchar_t *pwVar16;
  bool bVar17;
  undefined8 uVar18;
  void *local_29c [2];
  short *local_294;
  undefined4 local_290;
  int *local_28c;
  int *local_288;
  undefined4 local_284;
  int *local_280;
  short *local_27c;
  int *local_278;
  int *local_274;
  HANDLE local_270;
  int **local_26c;
  wchar_t *local_268;
  int *local_264;
  char local_25d;
  _WIN32_FIND_DATAW local_25c;
  uint local_8;
  
  local_8 = DAT_00414014 ^ (uint)&stack0xfffffffc;
  piVar6 = *param_1;
  local_270 = (HANDLE)0x0;
  local_288 = param_1[1];
  local_26c = (int **)0x0;
  local_284 = param_2;
  local_274 = piVar6;
  if (piVar6 != (int *)0x0) {
    do {
      psVar4 = (short *)piVar6[1];
      sVar1 = *psVar4;
      while ((sVar1 != 0 && (sVar1 != 0x24))) {
        if (sVar1 == 0x5e) {
          psVar4 = psVar4 + 1;
        }
        psVar4 = psVar4 + 1;
        sVar1 = *psVar4;
      }
      local_280 = (int *)piVar6[1];
      piVar10 = local_280;
      local_274 = piVar6;
      if (sVar1 != 0) {
        local_264 = (int *)0x0;
        DAT_00424f48 = local_284;
        local_28c = local_280;
        FUN_0040f95a(local_29c,&local_28c,'\x01',&local_288,'\0',&local_264);
        piVar10 = local_264;
      }
      local_280 = piVar10;
      psVar4 = (short *)FUN_0040ec65((short *)piVar10);
      local_294 = psVar4;
      local_27c = psVar4;
      uVar5 = FUN_00405181(&local_27c,&local_268);
      cVar2 = (char)uVar5;
      while (cVar2 != '\0') {
        pwVar16 = local_268;
        if (*local_268 == L'{') {
          wVar3 = L'{';
          do {
            if (wVar3 == L'}') {
              *pwVar16 = L'\0';
              pwVar16 = pwVar16 + 1;
              local_268 = local_268 + 1;
              break;
            }
            if (wVar3 == L'^') {
              pwVar16 = pwVar16 + 1;
            }
            pwVar16 = pwVar16 + 1;
            wVar3 = *pwVar16;
          } while (wVar3 != L'\0');
        }
        else {
          local_268 = (wchar_t *)0x0;
        }
        pwVar8 = local_268;
        local_25d = '\0';
        local_25c.ftCreationTime.dwLowDateTime = 0;
        local_25c.ftCreationTime.dwHighDateTime = 0;
        local_25c.ftLastWriteTime.dwLowDateTime = 0;
        local_25c.ftLastWriteTime.dwHighDateTime = 0;
        piVar6 = (int *)FUN_0040ec65(pwVar16);
        local_264 = piVar6;
        pwVar7 = wcspbrk(pwVar16,L"*?");
        if (((pwVar7 != (wchar_t *)0x0) || (pwVar8 != (wchar_t *)0x0)) &&
           (pwVar8 = (wchar_t *)FUN_004083a6(pwVar8,pwVar16,&local_25c,&local_270),
           pwVar8 != (wchar_t *)0x0)) {
          local_25d = '\x01';
          free(piVar6);
          local_264 = (int *)FUN_00411529(pwVar8,local_25c.cFileName);
          pwVar16 = pwVar8;
        }
        do {
          piVar6 = local_264;
          ppiVar9 = (int **)FUN_0040b5a3(0x10);
          pwVar8 = wcschr((wchar_t *)piVar6,L' ');
          if ((pwVar8 == (wchar_t *)0x0) ||
             (pwVar8 = wcschr((wchar_t *)piVar6,L'\"'), pwVar8 != (wchar_t *)0x0)) {
            piVar10 = (int *)FUN_0040ec65((short *)piVar6);
            ppiVar9[1] = piVar10;
          }
          else {
            pwVar8 = (wchar_t *)((int)piVar6 + 2);
            do {
              wVar3 = *(wchar_t *)piVar6;
              piVar6 = (int *)((int)piVar6 + 2);
            } while (wVar3 != L'\0');
            _SizeInWords = ((int)piVar6 - (int)pwVar8 >> 1) + 3;
            piVar6 = (int *)FUN_0040b57e(-(uint)((int)((ulonglong)_SizeInWords * 2 >> 0x20) != 0) |
                                         (uint)((ulonglong)_SizeInWords * 2));
            ppiVar9[1] = piVar6;
            wcscpy_s((wchar_t *)piVar6,_SizeInWords,L"\"");
            wcscat_s((wchar_t *)ppiVar9[1],_SizeInWords,(wchar_t *)local_264);
            wcscat_s((wchar_t *)ppiVar9[1],_SizeInWords,L"\"");
            piVar6 = local_264;
          }
          if (DAT_00424735 == '\0') {
LAB_00405047:
            uVar18 = FUN_004081de((byte *)&local_25c);
            local_290 = (undefined4)uVar18;
            ppiVar9[3] = (int *)((ulonglong)uVar18 >> 0x20);
          }
          else {
            iVar11 = FUN_004081f8((wchar_t *)piVar6,&local_25c,&local_270);
            uVar18 = CONCAT44(iVar11,iVar11);
            if (iVar11 != 0) goto LAB_00405047;
            ppiVar9[3] = (int *)0x0;
          }
          local_278 = (int *)((ulonglong)uVar18 >> 0x20);
          piVar10 = (int *)uVar18;
          bVar17 = DAT_00424735 == '\0';
          ppiVar9[2] = piVar10;
          if (bVar17) {
            FUN_0040ed6a(&local_26c,ppiVar9);
            ppiVar9 = local_26c;
          }
          else {
            ppiVar13 = local_26c;
            ppiVar15 = local_26c;
            if (local_26c != (int **)0x0) {
              do {
                ppiVar12 = ppiVar13;
                bVar17 = ppiVar12[3] <= local_278;
                ppiVar13 = ppiVar12;
                if ((bVar17 && local_278 != ppiVar12[3]) ||
                   ((bVar17 && (ppiVar12[2] <= piVar10 && piVar10 != ppiVar12[2])))) break;
                ppiVar13 = (int **)*ppiVar12;
                ppiVar15 = ppiVar12;
              } while (ppiVar13 != (int **)0x0);
              piVar6 = local_264;
              if (ppiVar15 != ppiVar13) {
                *ppiVar15 = (int *)ppiVar9;
                *ppiVar9 = (int *)ppiVar13;
                ppiVar9 = local_26c;
              }
            }
          }
          local_26c = ppiVar9;
          free(piVar6);
        } while ((((local_25d != '\0') &&
                  (pwVar8 = wcspbrk(pwVar16,L"*?"), pwVar8 != (wchar_t *)0x0)) &&
                 (pWVar14 = FUN_00408383(&local_25c,local_270), pWVar14 != (WCHAR *)0x0)) &&
                (local_264 = (int *)FUN_00411529(pwVar16,local_25c.cFileName),
                local_264 != (int *)0x0));
        uVar5 = FUN_00405181(&local_27c,&local_268);
        psVar4 = local_294;
        piVar6 = local_274;
        piVar10 = local_280;
        cVar2 = (char)uVar5;
      }
      if (piVar10 != (int *)piVar6[1]) {
        free(piVar10);
      }
      free(psVar4);
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)0x0);
    local_274 = (int *)0x0;
  }
  FUN_00412542(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



undefined4 __fastcall FUN_00405181(short **param_1,short **param_2)

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
      uVar2 = (ushort)uVar3;
      if (uVar2 == 0) break;
      puVar5 = puVar5 + 1;
      uVar2 = *puVar5;
      uVar1 = (uint)uVar2;
      uVar3 = uVar1;
    } while (uVar2 != 0x22);
LAB_004051fc:
    if (uVar2 == 0) {
      uVar1 = FUN_00405ad3(0,0x40e);
    }
    puVar5 = puVar5 + 1;
    uVar2 = *puVar5;
  }
  else {
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
        if (*puVar4 == 0x7d) goto LAB_00405259;
        puVar5 = puVar4;
      } while (*puVar4 != 0);
      FUN_00405ad3(0,0x423);
LAB_00405259:
      puVar5 = puVar4 + 1;
      uVar1 = (uint)*puVar5;
      if (*puVar5 == 0x22) {
        do {
          uVar2 = (ushort)uVar1;
          if (uVar2 == 0) goto LAB_004051fc;
          puVar5 = puVar5 + 1;
          uVar1 = (uint)*puVar5;
        } while (*puVar5 != 0x22);
        uVar2 = 0x22;
        goto LAB_004051fc;
      }
    }
    uVar2 = (ushort)uVar1;
    while (uVar2 != 0) {
      uVar2 = (ushort)uVar1;
      if (uVar2 == 0x20) goto LAB_004052b8;
      uVar1 = 0;
      if (uVar2 == 9) break;
      puVar5 = puVar5 + 1;
      uVar2 = *puVar5;
      uVar1 = (uint)uVar2;
    }
  }
  if (uVar2 != 0) {
LAB_004052b8:
    uVar1 = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *param_1 = (short *)puVar5;
  return CONCAT31((int3)(uVar1 >> 8),1);
}



void __fastcall FUN_004052c9(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  while (puVar1 = param_1, puVar1 != (undefined4 *)0x0) {
    param_1 = (undefined4 *)*puVar1;
    free((void *)puVar1[1]);
    *puVar1 = DAT_00435698;
    DAT_00435698 = puVar1;
  }
  return;
}



undefined4 * __fastcall FUN_004052f3(wint_t *param_1,undefined param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined2 extraout_var;
  
  puVar2 = (undefined4 *)FUN_0040b5a3(0x20);
  pvVar3 = FUN_0040ec65((short *)param_1);
  puVar2[1] = pvVar3;
  *(undefined *)(puVar2 + 2) = param_2;
  *(undefined *)((int)puVar2 + 9) = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  uVar1 = FUN_0040ed7f(param_1);
  *puVar2 = (&DAT_00424510)[CONCAT22(extraout_var,uVar1)];
  (&DAT_00424510)[CONCAT22(extraout_var,uVar1)] = puVar2;
  return puVar2;
}



void __fastcall FUN_0040533a(int **param_1,int *param_2,int param_3)

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
    if (ppiVar1 != (int **)0x0) goto LAB_0040539b;
  }
  ppiVar1 = (int **)FUN_0040b5a3(0x14);
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
LAB_0040539b:
  puVar2 = FUN_0040ec13();
  pvVar3 = FUN_0040ec65(*(short **)(param_3 + 4));
  puVar2[1] = pvVar3;
  FUN_0040ed6a(ppiVar1 + 3,puVar2);
  puVar2 = FUN_0040ec13();
  pvVar3 = FUN_0040ec65(DAT_00424f4c);
  puVar2[1] = pvVar3;
  FUN_0040ed6a(ppiVar1 + 4,puVar2);
  *(int ***)(param_3 + 0x1c) = param_1;
  return;
}



uint __fastcall FUN_004053e6(int param_1)

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
           FUN_0040b57e(-(uint)((int)((ulonglong)uVar6 * 2 >> 0x20) != 0) |
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
  DAT_00424f4c = pwVar4;
  uVar6 = FUN_00405e5d(*(int **)(param_1 + 0xc),*(int **)(*(int *)(param_1 + 4) + 0xc),
                       *(int **)(*(int *)(param_1 + 4) + 0x10),(uint)*(byte *)(param_1 + 8),
                       (wchar_t *)0x0);
  if (uVar6 == 0) {
    for (puVar2 = *(undefined4 **)(param_1 + 0xc); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      puVar7 = FUN_0040edb7((wchar_t *)puVar2[1]);
      puVar7[7] = 0;
      *(byte *)((int)puVar7 + 9) = *(byte *)((int)puVar7 + 9) & 0xfb | 2;
    }
  }
  free(pwVar4);
  return uVar6;
}



int __fastcall FUN_0040553b(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; param_1 != (undefined4 *)0x0; param_1 = (undefined4 *)*param_1) {
    uVar1 = FUN_004053e6((int)param_1);
    iVar2 = iVar2 + uVar1;
  }
  return iVar2;
}



void __fastcall FUN_00405559(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  while (_Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[3];
    *puVar1 = DAT_00435698;
    DAT_00435698 = (undefined4 *)_Memory[4];
    *DAT_00435698 = puVar1;
    puVar1 = (undefined4 *)*_Memory;
    free(_Memory);
    _Memory = puVar1;
  }
  *param_1 = 0;
  return;
}



void __fastcall FUN_00405588(void **param_1,int *param_2)

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
         (pwVar4 = fgetws(&DAT_00424740,0x400,DAT_00424f5c), pwVar4 != (wchar_t *)0x0))) {
    psVar3 = &DAT_00424740;
    do {
      psVar7 = psVar3;
      psVar3 = psVar7 + 1;
    } while (*psVar7 != 0);
    iVar6 = (int)(psVar7 + -0x2123a0) >> 1;
    if ((*(short *)((int)&DAT_0042473c + iVar6 * 2) == 0x5c) &&
       (*(short *)((int)&DAT_0042473c + iVar6 * 2 + 2) == 10)) {
      *(undefined2 *)((int)&DAT_0042473c + iVar6 * 2 + 2) = 0;
      *(undefined2 *)((int)&DAT_0042473c + iVar6 * 2) = 0x20;
    }
    iVar6 = *param_2;
    psVar3 = &DAT_00424740;
    do {
      psVar7 = psVar3;
      psVar3 = psVar7 + 1;
    } while (*psVar7 != 0);
    iVar1 = ((int)(psVar7 + -0x2123a0) >> 1) + iVar6;
    pvVar5 = *param_1;
    *param_2 = iVar1;
    pvVar5 = FUN_0040b5c1(pvVar5,iVar1 * 2 + 2);
    if (pvVar5 == (void *)0x0) {
      FUN_00405ad3(DAT_00424724,0x419);
    }
    iVar1 = *param_2;
    *param_1 = pvVar5;
    wcscpy_s((wchar_t *)((int)pvVar5 + iVar6 * 2),(iVar1 - iVar6) + 1,&DAT_00424740);
    sVar2 = *(short *)((int)*param_1 + *param_2 * 2 + -2);
  }
  return;
}



void __fastcall FUN_00405690(short *param_1,uint param_2,void **param_3)

{
  void *pvVar1;
  
  if (*param_3 == (void *)0x0) {
    pvVar1 = FUN_0040b57e(0x20);
    *param_3 = pvVar1;
    goto LAB_004056ea;
  }
  if ((param_2 & 7) != 0) goto LAB_004056ea;
  pvVar1 = (void *)0x0;
  if (param_2 + 8 < 0x3fffffff) {
    pvVar1 = realloc(*param_3,(param_2 + 8) * 4);
    if (pvVar1 == (void *)0x0) goto LAB_004056d6;
  }
  else {
LAB_004056d6:
    FUN_00405ad3(DAT_00424730,0x41b);
  }
  *param_3 = pvVar1;
LAB_004056ea:
  pvVar1 = FUN_0040ec65(param_1);
  *(void **)((int)*param_3 + param_2 * 4) = pvVar1;
  return;
}



void __fastcall FUN_004056fe(wchar_t *param_1,uint *param_2,void **param_3)

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
    FUN_00405690(pwVar1,*param_2,param_3);
    *param_2 = *param_2 + 1;
    param_1 = (wchar_t *)0x0;
  }
  FUN_00405ad3(0,0xfa1);
  return;
}



void __fastcall FUN_0040578a(wchar_t *param_1,uint *param_2,void **param_3)

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
    FUN_004056fe(param_1,param_2,param_3);
  }
  else {
    if ((pwVar3 == param_1) || (pwVar6 = pwVar3 + -1, param_2 = local_c, *pwVar6 != L'=')) {
      *pwVar3 = L'\0';
      FUN_004056fe(param_1,param_2,param_3);
      pwVar6 = pwVar3 + 1;
    }
    else {
      *pwVar3 = L' ';
      for (; param_1 < pwVar6; pwVar6 = pwVar6 + -1) {
        wVar2 = *pwVar6;
        if (wVar2 == L' ') goto LAB_004057fd;
        if ((wVar2 == L'\t') || (wVar2 == L'\n')) break;
      }
      if (pwVar6 != param_1) {
LAB_004057fd:
        *pwVar6 = L'\0';
        pwVar6 = pwVar6 + 1;
        FUN_004056fe(param_1,local_c,param_3);
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
          FUN_00405690(pwVar3,*local_c,param_3);
          *local_c = *local_c + 1;
          FUN_0040578a(pwVar6 + 2,local_c,param_3);
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
          local_10 = (wchar_t *)FUN_0040ec65(pwVar3);
        }
        FUN_00405588(&local_10,&local_14);
        pwVar6 = local_10 + iVar5;
        iVar5 = local_14;
        pwVar3 = local_10;
      }
      pwVar6 = pwVar6 + 1;
      wVar2 = *pwVar6;
    }
    if (pwVar4 == pwVar3 + iVar5) {
      FUN_00405ad3(0,0x3ee);
    }
    if (local_5 != '\0') {
      free(pwVar3);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_0040593b(wchar_t *param_1)

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
  DAT_00424f5c = (int)_File;
  if (_File == (FILE *)0x0) {
    _File = (FILE *)FUN_00405ad3(0,0x41c);
  }
  local_14 = (void *)0x0;
  pwVar3 = fgetws(&DAT_00424740,0x400,_File);
  pvVar2 = (void *)0x0;
  uVar6 = 0;
  do {
    if (pwVar3 == (wchar_t *)0x0) {
      iVar4 = fclose((FILE *)DAT_00424f5c);
      if (iVar4 == -1) {
        FUN_00405ad3(0,0x424);
      }
      FUN_0040c73b(uVar6,(int)pvVar2);
      while (uVar6 != 0) {
        uVar6 = uVar6 - 1;
        if (*(int *)((int)pvVar2 + uVar6 * 4) != 0) {
          free(*(void **)((int)pvVar2 + uVar6 * 4));
        }
      }
      return;
    }
    pwVar3 = &DAT_00424740;
    do {
      pwVar5 = pwVar3;
      pwVar3 = pwVar5 + 1;
    } while (*pwVar5 != L'\0');
    local_8 = (int)(pwVar5 + -0x2123a0) >> 1;
    if (((local_8 == 0x3ff) && (_DAT_00424f3c != 10)) ||
       ((pwVar3 = &DAT_00424740, *(short *)((int)&DAT_0042473c + local_8 * 2 + 2) == 10 &&
        (*(short *)((int)&DAT_0042473c + local_8 * 2) == 0x5c)))) {
      if ((*(short *)((int)&DAT_0042473c + local_8 * 2 + 2) == 10) &&
         (*(short *)((int)&DAT_0042473c + local_8 * 2) == 0x5c)) {
        iVar4 = local_8 + -1;
        if (0x7ff < (uint)(iVar4 * 2)) {
          FUN_00412680();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (&DAT_00424740)[iVar4] = 0;
        *(undefined2 *)((int)&DAT_0042473c + local_8 * 2) = 0x20;
        local_8 = iVar4;
      }
      local_c = (wchar_t *)FUN_0040ec65(&DAT_00424740);
      FUN_00405588(&local_c,&local_8);
      pwVar3 = local_c;
    }
    FUN_0040578a(pwVar3,&local_10,&local_14);
    if (pwVar3 != &DAT_00424740) {
      free(pwVar3);
    }
    pwVar3 = fgetws(&DAT_00424740,0x400,(FILE *)DAT_00424f5c);
    pvVar2 = local_14;
    uVar6 = local_10;
  } while( true );
}



void __cdecl FUN_00405ad3(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int _Code;
  undefined unaff_DI;
  uint uVar3;
  
  _Code = 2;
  if (((DAT_0041450c & 0x20) != 0) && (param_2 - 4000 < 1000)) {
    return;
  }
  FUN_00405c49();
  if (param_1 == 0) {
    FUN_0040d068(L"NMAKE : ",unaff_DI);
  }
  else {
    FUN_0040d068(L"%s(%u) : ",(char)DAT_00424f64);
  }
  uVar1 = param_2 / 1000;
  if (uVar1 == 1) {
    FUN_00405bad(0x14);
    if (param_2 == 0x41b) {
      _Code = 4;
    }
  }
  else {
    if (uVar1 == 2) {
      uVar3 = 0x15;
    }
    else {
      if (uVar1 != 4) goto LAB_00405b62;
      uVar3 = 0x16;
    }
    FUN_00405bad(uVar3);
  }
LAB_00405b62:
  FUN_0040d068(L" U%04d: ",(char)param_2);
  uVar2 = FUN_0040ce8f(param_2);
  FUN_0040d0e1(uVar2,&stack0x0000000c);
  FUN_0040d077();
  FUN_0040d04a();
  if (uVar1 != 1) {
    return;
  }
  FUN_0040d068(L"Stop.\n",(undefined)param_1);
  FUN_0040cdfb();
                    // WARNING: Subroutine does not return
  exit(_Code);
}



void __cdecl FUN_00405bad(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0xd) && ((DAT_0041450c & 0x20) != 0)) {
    return;
  }
  FUN_00405c49();
  uVar1 = param_1 - 0x14;
  if (param_1 == 0x18) {
    if (uVar1 < 6) {
      FUN_0040d077();
      goto LAB_00405beb;
    }
    FUN_0040d158();
LAB_00405c1d:
    uVar2 = FUN_0040ce8f(param_1);
    FUN_0040d184(uVar2,&stack0x00000008);
  }
  else {
    if (5 < uVar1) goto LAB_00405c1d;
LAB_00405beb:
    uVar2 = FUN_0040ce8f(param_1);
    FUN_0040d0e1(uVar2,&stack0x00000008);
  }
  if (((param_1 < 10) || (0x17 < param_1)) && (param_1 != 0x7c)) {
    if (uVar1 < 6) {
      FUN_0040d077();
LAB_00405c33:
      FUN_0040d04a();
      return;
    }
    FUN_0040d158();
  }
  else if (uVar1 < 6) goto LAB_00405c33;
  FUN_0040d12b();
  return;
}



void FUN_00405c49(void)

{
  if (DAT_00424f60 == '\0') {
    DAT_00424f60 = 1;
    FUN_00405bad(0x18);
    FUN_00405bad(0x19);
    FUN_0040d04a();
    return;
  }
  return;
}



void FUN_00405c75(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 100;
  uVar1 = 0x67;
  do {
    FUN_00405bad(uVar2);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x67);
  do {
    if (uVar1 == 0x71) {
      uVar1 = 0x72;
    }
    else if (uVar1 == 0x79) {
      uVar1 = 0x7a;
    }
    FUN_00405bad(uVar1);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x7d);
  return;
}



void __fastcall FUN_00405cb4(int *param_1,wchar_t **param_2,wchar_t *param_3)

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
            goto LAB_00405ded;
          }
        }
      }
      else {
        param_3 = wcspbrk(pwVar4,L" \t\"/");
        if (param_3 != (wchar_t *)0x0) {
          do {
            if (pwVar5 <= param_3) goto LAB_00405d94;
            if (*param_3 != L'/') break;
            if (bVar2) goto LAB_00405d94;
            param_3 = wcspbrk(param_3 + 1,L" \t\"/");
          } while (param_3 != (wchar_t *)0x0);
          if (param_3 != (wchar_t *)0x0) {
LAB_00405d94:
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
          if (param_3 == (wchar_t *)0x0) goto LAB_00405df1;
          if (*param_3 == L'/') {
            if (param_2 == (wchar_t **)0x0) goto LAB_00405dff;
            *param_3 = L'\0';
            pwVar4 = (wchar_t *)FUN_0040ec65(param_2[-1]);
            param_2[-1] = pwVar4;
            *param_3 = L'/';
            param_3 = param_3 + -1;
            goto LAB_00405ded;
          }
        }
        else {
LAB_00405ded:
          if (param_3 == (wchar_t *)0x0) {
LAB_00405df1:
            param_3 = pwVar5;
          }
        }
        if (param_2 != (wchar_t **)0x0) {
          *param_3 = L'\0';
          param_3 = param_3 + 1;
        }
      }
LAB_00405dff:
      *param_1 = *param_1 + 1;
    } while (param_3 < pwVar5);
  }
  if (param_2 != (wchar_t **)0x0) {
    *param_2 = (wchar_t *)0x0;
  }
  return;
}



void __fastcall FUN_00405e1b(short *param_1,int *param_2,int *param_3,uint param_4,wchar_t *param_5)

{
  int *piVar1;
  void *pvVar2;
  
  piVar1 = FUN_0040ec13();
  pvVar2 = FUN_0040ec65(param_1);
  piVar1[1] = (int)pvVar2;
  FUN_00405e5d(piVar1,param_2,param_3,param_4,param_5);
  *piVar1 = (int)DAT_00435698;
  DAT_00435698 = piVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint __fastcall FUN_00405e5d(int *param_1,int *param_2,int *param_3,uint param_4,wchar_t *param_5)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  wint_t wVar5;
  ushort uVar6;
  wchar_t *pwVar7;
  int iVar8;
  int *piVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  void *local_5c [2];
  void *local_54 [2];
  uint local_4c;
  int *local_48;
  int *local_44;
  undefined4 local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  int *local_10;
  byte local_9;
  
  DAT_00424f40 = DAT_00424f40 + 1;
  uVar13 = 0;
  local_1c = 0;
  local_14 = 0;
  if ((DAT_0041450c & 8) == 0) {
    local_3c = param_2;
    if ((DAT_0041450c & 0x10) == 0) {
      if (param_2 != (int *)0x0) {
        local_4c = (byte)param_4 >> 6 & 0xffffff01;
        local_24 = 0x2d;
        local_28 = 0x40;
        local_40 = 0x5e;
        local_2c = 0x20;
        local_30 = 9;
LAB_00405ee9:
        bVar11 = FUN_00409c23((int *)local_3c[1],&local_38,&param_3,(char)local_4c);
        uVar12 = (uint)bVar11;
        _DAT_00434f70 = 0;
        local_18 = local_18 & 0xffffff00;
        wVar5 = *(wint_t *)local_38;
        local_10 = local_38;
        do {
          if (wVar5 == 0x21) {
            uVar12 = uVar12 | 0x400;
LAB_00406117:
            local_18 = CONCAT31(local_18._1_3_,(char)(uVar12 >> 8));
          }
          else if (wVar5 == (wint_t)local_24) {
LAB_00406081:
            local_10 = (int *)((int)local_10 + 2);
            uVar12 = uVar12 | 0x200;
            local_18 = CONCAT31(local_18._1_3_,(char)(uVar12 >> 8));
            iVar8 = iswdigit(*(wchar_t *)local_10);
            if (iVar8 == 0) {
              _DAT_00434f70 = 0xffffffff;
            }
            else {
              _DAT_00434f70 = wcstoul((wchar_t *)local_10,(wchar_t **)&local_10,10);
              piVar9 = _errno();
              iVar8 = DAT_00424724;
              if (*piVar9 == 0x22) {
                *(wchar_t *)local_10 = L'\0';
                FUN_00405ad3(iVar8,0x436);
              }
              iVar8 = iswspace(*(wchar_t *)local_10);
              while (iVar8 != 0) {
                local_10 = (int *)((int)local_10 + 2);
                iVar8 = iswspace(*(wchar_t *)local_10);
              }
            }
            local_10 = (int *)((int)local_10 + -2);
          }
          else if (wVar5 == (wint_t)local_28) {
LAB_0040606c:
            if ((DAT_0041450e & 4) == 0) {
              uVar12 = uVar12 | 0x100;
              goto LAB_00406117;
            }
          }
          else if (wVar5 == (wint_t)local_40) {
LAB_00405f73:
            local_10 = (int *)((int)local_10 + 2);
            if ((*(wint_t *)local_10 == (wint_t)local_2c) ||
               (*(wint_t *)local_10 == (wint_t)local_30)) {
              bVar11 = 1;
            }
            else {
              bVar11 = 0;
            }
            if ((-(ushort)bVar11 & 0xffc2) == 0) goto LAB_00405fa3;
          }
          else if (wVar5 != (wint_t)local_2c) {
            if (wVar5 != (wint_t)local_30) goto LAB_00405fa3;
            if (wVar5 == (wint_t)local_24) goto LAB_00406081;
            if (wVar5 == (wint_t)local_28) goto LAB_0040606c;
            if (wVar5 == 0x5e) goto LAB_00405f73;
          }
          local_10 = (int *)((int)local_10 + 2);
          wVar5 = *(wint_t *)local_10;
        } while( true );
      }
LAB_00406042:
      if ((param_4 & 2) == 0) {
LAB_0040604c:
        if ((DAT_00424737 != '\0') && (_DAT_00434f70 < uVar13)) {
          return uVar13;
        }
      }
    }
    else if (param_1 != (int *)0x0) {
      bVar11 = (byte)param_4 >> 2;
      do {
        FUN_00408150((wchar_t *)param_1[1],bVar11 & 1);
        param_1 = (int *)*param_1;
      } while (param_1 != (int *)0x0);
    }
  }
  return 0;
LAB_00405fa3:
  if (((uVar12 & 0x400) == 0) ||
     (uVar6 = FUN_00407e4f(local_10,param_3,(byte)param_4,(byte)local_18,param_5,&local_14),
     piVar9 = local_10, (char)uVar6 == '\0')) {
    local_48 = local_10;
    if (((char)uVar12 == '\0') &&
       (pwVar7 = wcschr((wchar_t *)local_10,L'$'), pwVar7 != (wchar_t *)0x0)) {
      local_44 = local_10;
      local_34 = (int *)0x0;
      FUN_0040f95a(local_5c,&local_44,-1,&param_3,'\0',&local_34);
      local_10 = local_34;
    }
    piVar9 = local_10;
    do {
      sVar1 = *(short *)piVar9;
      piVar9 = (int *)((int)piVar9 + 2);
    } while (sVar1 != 0);
    uVar13 = ((int)piVar9 - (int)((int)local_10 + 2) >> 1) + 1;
    if (uVar13 < 0x8001) {
      uVar13 = 0x8000;
    }
    pwVar7 = (wchar_t *)
             FUN_0040b57e(-(uint)((int)((ulonglong)uVar13 * 2 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar13 * 2));
    wcscpy_s(pwVar7,uVar13,(wchar_t *)local_10);
    cVar4 = FUN_00411712(pwVar7,uVar13,(wchar_t *)local_10,param_5);
    uVar10 = extraout_ECX;
    if (cVar4 != '\0') {
      FUN_00405ad3(0,0x447);
      uVar10 = extraout_ECX_00;
    }
    uVar2 = param_4 & 4;
    uVar3 = param_4 & 4;
    local_44 = (int *)(CONCAT31((int3)((uint)uVar10 >> 8),(byte)(uVar12 >> 8) >> 1) & 0xffffff01);
    local_9 = (byte)param_4 & 2;
LAB_004061fa:
    if (uVar2 == 0) {
      cVar4 = '\x01';
      if ((uVar3 != 0) || (((param_4 & 8) == 0 && ((uVar12 & 0x100) == 0)))) goto LAB_00406205;
      bVar11 = 0;
      cVar4 = '\x01';
    }
    else {
      cVar4 = '\0';
LAB_00406205:
      bVar11 = 1;
    }
    local_14 = FUN_00407513(pwVar7,bVar11,cVar4,(char)local_44,&local_20);
    uVar13 = local_14;
    if (local_9 != 0) goto LAB_004062ae;
    if (local_14 == 0x103) {
      if (DAT_00435479 == '\0') {
        FUN_00405ad3(0,0xfac);
        local_14 = 0;
        goto LAB_00406285;
      }
      if (9 < local_1c) goto LAB_00406289;
      FUN_00405ad3(0,0xfad);
      local_1c = local_1c + 1;
      goto LAB_004061fa;
    }
LAB_00406285:
    uVar13 = local_14;
    if (local_14 == 0) goto LAB_004062ae;
LAB_00406289:
    uVar13 = local_14;
    if ((_DAT_00434f70 < local_14) && (DAT_00424737 == '\0')) {
      FUN_00405ad3(0,0x435);
    }
LAB_004062ae:
    if (local_48 != local_10) {
      free(local_10);
    }
    free(local_38);
    free(pwVar7);
    bVar11 = local_9;
  }
  else {
    pwVar7 = wcschr((wchar_t *)local_10,L'$');
    if (pwVar7 != (wchar_t *)0x0) {
      local_44 = local_10;
      local_34 = (int *)0x0;
      FUN_0040f95a(local_54,&local_44,-1,&param_3,'\0',&local_34);
      local_10 = local_34;
    }
    if (piVar9 != local_10) {
      free(local_10);
    }
    uVar13 = local_14;
    bVar11 = (byte)param_4 & 2;
  }
  if ((((bVar11 == 0) && (DAT_00424737 != '\0')) && (uVar13 != 0)) && (_DAT_00434f70 < uVar13))
  goto LAB_0040604c;
  local_3c = (int *)*local_3c;
  if (local_3c == (int *)0x0) goto LAB_00406042;
  goto LAB_00405ee9;
}



wchar_t ** __fastcall FUN_004062db(wchar_t *param_1,int param_2,wchar_t **param_3)

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
LAB_00406369:
      bVar2 = false;
      goto LAB_0040636b;
    }
    param_3 = (wchar_t **)(pwVar4 + 1);
    pwVar6 = pwVar4;
    do {
      wVar1 = *pwVar6;
      pwVar6 = pwVar6 + 1;
    } while (wVar1 != L'\0');
    if (pwVar4[((int)pwVar6 - (int)param_3 >> 1) + -1] != L'\"') goto LAB_00406369;
    iVar3 = param_2 + -1;
    if (iVar3 < 1) goto LAB_00406369;
    do {
      pwVar4 = wcspbrk(_ArgList[iVar3],L"\"");
      if (pwVar4 != (wchar_t *)0x0) goto LAB_004062ff;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
    bVar2 = false;
  }
  else {
    param_3[param_2] = L">";
    param_3[param_2 + 1] = param_1;
    param_2 = param_2 + 2;
    param_3[param_2] = (wchar_t *)0x0;
LAB_004062ff:
    _ArgList[param_2] = L"\"";
    bVar2 = true;
    param_2 = param_2 + 1;
    _ArgList[param_2] = (wchar_t *)0x0;
LAB_0040636b:
    if (param_2 < 0) goto LAB_0040637b;
  }
  do {
    _ArgList[param_2 + 2] = _ArgList[param_2];
    param_2 = param_2 + -1;
  } while (-1 < param_2);
LAB_0040637b:
  *_ArgList = DAT_00424f6c;
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

void __fastcall FUN_004063f6(int param_1,wchar_t **param_2)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  errno_t eVar4;
  UINT UVar5;
  wchar_t **ppwVar6;
  FILE *_File;
  wchar_t wVar7;
  wchar_t *pwVar8;
  wchar_t wVar9;
  int iVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
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
  
  local_8 = DAT_00414014 ^ (uint)&stack0xfffffffc;
  bVar2 = false;
  sStack_106b4 = 0;
  pwStack_106b0 = (wchar_t *)0x0;
  wcscpy_s(awStack_106ac,0x8000,L"set ");
  pwVar8 = awStack_106ac + 4;
  for (pwVar11 = &DAT_00414518; (wVar7 = *pwVar11, wVar7 == L' ' || (wVar7 == L'\t'));
      pwVar11 = pwVar11 + 1) {
  }
  if (((wVar7 == L'/') && (pwVar11[1] == L'A')) && ((pwVar11[2] == L' ' || (pwVar11[2] == L'\t'))))
  {
    bVar2 = true;
    pwVar11 = pwVar11 + 3;
  }
  pwVar3 = wcschr(pwVar11,L'=');
  if (pwVar3 != (wchar_t *)0x0) {
    pwStack_106bc = awStack_106ac + 4;
    wVar7 = *pwVar11;
    while (wVar7 != L'=') {
      *pwVar8 = wVar7;
      pwVar8 = pwVar8 + 1;
      if (local_6ac <= pwVar8) goto LAB_0040686f;
      pwVar11 = pwVar11 + 1;
      wVar7 = *pwVar11;
    }
    if (!bVar2) {
      wVar7 = *pwVar11;
      do {
        if (wVar7 == L'\0') goto LAB_00406826;
        pwVar3 = pwVar11 + 1;
        if (wVar7 == L'^') {
          wVar7 = *pwVar3;
          pwVar12 = pwVar8;
          if (wVar7 != L'\0') {
            pwVar3 = pwVar11 + 2;
LAB_00406806:
            *pwVar8 = wVar7;
            pwVar12 = pwVar8 + 1;
            if (pwVar12 < local_6ac) goto LAB_0040681a;
            goto LAB_0040686f;
          }
        }
        else {
          if (wVar7 != L'%') goto LAB_00406806;
          pwVar11 = &local_4a4;
          wVar7 = *pwVar3;
          while ((wVar7 != L'%' && (wVar7 != L'\0'))) {
            *pwVar11 = wVar7;
            pwVar11 = pwVar11 + 1;
            if (pwVar11 == local_2a2) goto LAB_0040686f;
            pwVar3 = pwVar3 + 1;
            wVar7 = *pwVar3;
          }
          pwVar3 = pwVar3 + 1;
          *pwVar11 = L'\0';
          if (wVar7 == L'\0') {
            pwVar11 = &local_4a4;
            do {
              wVar7 = *pwVar11;
              pwVar11 = pwVar11 + 1;
            } while (wVar7 != L'\0');
            if (local_6ac <= pwVar8 + ((int)pwVar11 - (int)local_4a2 >> 1) + 1) goto LAB_0040686f;
            *pwVar8 = L'%';
            wcscpy_s(pwVar8 + 1,(int)local_6ac - (int)(pwVar8 + 1) >> 1,&local_4a4);
            pwVar8 = pwVar8 + ((int)pwVar11 - (int)local_4a2 >> 1) + 1;
LAB_00406826:
            *pwVar8 = L'\0';
            goto LAB_0040682b;
          }
          _wdupenv_s(&pwStack_106b0,(size_t *)0x0,&local_4a4);
          if (pwStack_106b0 != (wchar_t *)0x0) {
            pwVar11 = pwStack_106b0;
            do {
              wVar7 = *pwVar11;
              pwVar11 = pwVar11 + 1;
            } while (wVar7 != (wchar_t)sStack_106b4);
            pwVar12 = pwVar8 + ((int)pwVar11 - (int)(pwStack_106b0 + 1) >> 1);
            if (pwVar12 < local_6ac) {
              wcscpy_s(pwVar8,(int)local_6ac - (int)pwVar8 >> 1,pwStack_106b0);
              free(pwStack_106b0);
              pwStack_106b0 = (wchar_t *)0x0;
              goto LAB_0040681a;
            }
            goto LAB_0040686f;
          }
          pwVar11 = &local_4a4;
          do {
            wVar7 = *pwVar11;
            pwVar11 = pwVar11 + 1;
          } while (wVar7 != L'\0');
          pwVar12 = pwVar8 + ((int)pwVar11 - (int)local_4a2 >> 1) + 2;
          if (local_6ac <= pwVar12) goto LAB_0040686f;
          *pwVar8 = L'%';
          wcscpy_s(pwVar8 + 1,(int)local_6ac - (int)(pwVar8 + 1) >> 1,&local_4a4);
          pwVar12[-1] = L'%';
        }
LAB_0040681a:
        wVar7 = *pwVar3;
        pwVar11 = pwVar3;
        pwVar8 = pwVar12;
      } while( true );
    }
    wVar7 = pwVar8[-1];
    if (((((wVar7 == L'*') || (wVar7 == L'/')) || (wVar7 == L'%')) ||
        ((wVar7 == L'+' || (wVar7 == L'-')))) ||
       ((wVar7 == L'&' || ((wVar7 == L'^' || (wVar7 == L'|')))))) {
      pwVar8 = pwVar8 + -1;
    }
    else {
      wVar9 = L'>';
      if (((wVar7 == L'>') || (wVar9 = L'<', wVar7 == L'<')) && (pwVar8[-2] == wVar9)) {
        pwVar8 = pwVar8 + -2;
      }
    }
    if (awStack_106ac[4] == 0x22) {
      pwStack_106bc = awStack_106ac + 5;
    }
    *pwVar8 = L'=';
    pwVar8 = pwVar8 + 1;
    if (pwVar8 < local_6ac) {
      sStack_106b4 = 0;
      eVar4 = _wgetenv_s(&sStack_106b4,local_21c,0x106,L"TMP");
      if ((eVar4 != 0) || (sStack_106b4 == 0)) {
        wcscpy_s(local_21c,0x106,L".");
      }
      UVar5 = GetTempFileNameW(local_21c,L"nm",0,local_6ac);
      if (UVar5 == 0) {
        FUN_00405ad3(DAT_00424724,0x43c);
      }
      wcscpy_s(local_21c,0x106,local_6ac);
      pwVar11 = wcschr(local_21c,L' ');
      if ((pwVar11 != (wchar_t *)0x0) &&
         (pwVar11 = wcschr(local_21c,L'\"'), pwVar11 == (wchar_t *)0x0)) {
        pwVar11 = local_21c;
        do {
          wVar7 = *pwVar11;
          pwVar11 = pwVar11 + 1;
        } while (wVar7 != L'\0');
        iVar10 = (int)pwVar11 - (int)(local_21c + 1) >> 1;
        memmove(local_21c + 1,local_21c,iVar10 * 2);
        local_21c[0] = L'\"';
        local_21c[iVar10 + 1] = L'\"';
        if (0x20b < iVar10 * 2 + 4U) {
          FUN_00412680();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_21c[iVar10 + 2] = L'\0';
      }
      ppwVar6 = FUN_004062db(local_21c,param_1,param_2);
      if (ppwVar6 == (wchar_t **)0x0) {
        _File = _wfsopen(local_21c,L"rt",0x20);
        if (_File == (FILE *)0x0) {
          FUN_00405ad3(0,0x41c);
        }
        pwVar11 = fgetws(&local_29c,0x40,_File);
        if (pwVar11 == (wchar_t *)0x0) {
          FUN_00405ad3(0,0x41d);
        }
        iVar10 = fclose(_File);
        if (iVar10 == -1) {
          FUN_00405ad3(0,0x424);
        }
        iVar10 = _wremove(local_21c);
        if (iVar10 == -1) {
          FUN_00405ad3(0,0x421);
        }
        pwVar11 = &local_29c;
        do {
          wVar7 = *pwVar11;
          pwVar11 = pwVar11 + 1;
        } while (wVar7 != L'\0');
        if (pwVar8 + ((int)pwVar11 - (int)local_29a >> 1) + 1 <= local_6ac) {
          wcscpy_s(pwVar8,(int)local_6ac - (int)pwVar8 >> 1,&local_29c);
LAB_0040682b:
          wcscpy_s((wchar_t *)&DAT_00414510,0x8000,awStack_106ac);
          *pwStack_106bc = L'\0';
          pwVar8 = awStack_106ac;
          do {
            wVar7 = *pwVar8;
            pwVar8 = pwVar8 + 1;
          } while (wVar7 != L'\0');
        }
      }
    }
  }
LAB_0040686f:
  FUN_00412542(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



wchar_t * __fastcall FUN_00406a13(wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *local_8;
  
  pwVar2 = (wchar_t *)FUN_0040ec65((short *)&DAT_004017bc);
  wVar1 = *param_1;
  while (wVar1 != L'\0') {
    pwVar3 = wcschr(param_1,L'%');
    if ((pwVar3 == (wchar_t *)0x0) || (pwVar4 = wcschr(pwVar3 + 1,L'%'), pwVar4 == (wchar_t *)0x0))
    {
      pwVar2 = FUN_0040ed0f(pwVar2,param_1);
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
      pwVar2 = FUN_0040ed0f(pwVar2,param_1);
      _wdupenv_s(&local_8,(size_t *)0x0,pwVar3 + 1);
      if (local_8 == (wchar_t *)0x0) {
        *pwVar3 = L'%';
        pwVar2 = FUN_0040ed0f(pwVar2,pwVar3);
        pwVar2 = FUN_0040ed0f(pwVar2,L"%");
      }
      else {
        pwVar2 = FUN_0040ed0f(pwVar2,local_8);
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

uint __fastcall FUN_00406b11(int param_1,wchar_t **param_2,int *param_3)

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
      if ((((param_1 != 1) && (_DAT_00414510 != 0)) &&
          (psVar6 = (short *)FUN_004063f6(param_1,param_2), psVar6 != (short *)0x0)) &&
         (*psVar6 != 0)) {
        pwVar7 = (wchar_t *)FUN_0040ec65(psVar6);
        piVar8 = (int *)_wputenv(pwVar7);
        *param_3 = (int)piVar8;
        if (piVar8 == (int *)0xffffffff) {
          piVar8 = (int *)FUN_00405ad3(DAT_00424730,0x41f);
        }
        goto LAB_00406cac;
      }
    }
    else {
      iVar4 = _wcsnicmp(pwVar7,L"cd",2);
      if (iVar4 == 0) {
        psVar6 = (short *)0x4;
      }
      else {
        psVar6 = (short *)_wcsnicmp(pwVar7,L"chdir",5);
        if (psVar6 != (short *)0x0) goto LAB_00406cbf;
        psVar6 = (short *)0xa;
      }
      pwVar7 = (wchar_t *)((int)pwVar7 + (int)psVar6);
      if (param_1 < 3) {
        FUN_004080c6(param_1,param_2);
        wVar1 = *pwVar7;
        psVar6 = (short *)(uint)(ushort)wVar1;
        if (wVar1 == L'\0') {
          if ((pwVar2 != (wchar_t *)0x0) &&
             (((iVar4 = iswalpha(*pwVar2), iVar4 == 0 || (psVar6 = (short *)0x0, pwVar2[1] != L':'))
              || (pwVar2[2] != L'\0')))) {
            pwVar7 = FUN_00406a13(pwVar2);
            piVar8 = (int *)_wchdir(pwVar7);
            *param_3 = (int)piVar8;
            free(pwVar7);
LAB_00406cac:
            if (*param_3 != 0) {
              *param_3 = 1;
            }
            goto LAB_00406b65;
          }
        }
        else if (((psVar6 == (short *)0x2e) || (psVar6 == (short *)0x5c)) ||
                (psVar6 == (short *)0x2f)) {
          pwVar7 = FUN_00406a13(pwVar7);
          piVar8 = (int *)_wchdir(pwVar7);
          *param_3 = (int)piVar8;
          free(pwVar7);
          goto LAB_00406cac;
        }
      }
    }
LAB_00406cbf:
    uVar5 = (uint)psVar6 & 0xffffff00;
  }
  else {
    wVar3 = towupper(*pwVar7);
    _chdrive(wVar3 - 0x40);
    *param_3 = 0;
    piVar8 = param_3;
LAB_00406b65:
    uVar5 = CONCAT31((int3)((uint)piVar8 >> 8),1);
  }
  return uVar5;
}



char __fastcall FUN_00406cc8(wchar_t *param_1,int param_2)

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
      FUN_00405ad3(0,0x411);
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



undefined __fastcall FUN_00406de7(wchar_t *param_1,rsize_t param_2,int *param_3,int *param_4)

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
      if (bVar3) goto LAB_00406f33;
      if (_Src == (wchar_t *)0x0) {
        _Src = (wchar_t *)FUN_0040ec65(local_c);
      }
      *pwVar5 = L' ';
      bVar3 = true;
      pwVar8 = pwVar5 + 1;
      pFVar6 = (FILE *)__acrt_iob_func(0);
      iVar7 = _fileno(pFVar6);
      iVar7 = _dup(iVar7);
      *param_3 = iVar7;
      if (iVar7 == -1) goto LAB_00406f33;
      local_10 = 4;
LAB_00406f03:
      local_c = pwVar5 + 1;
      cVar4 = FUN_00406cc8(pwVar8,local_10);
      if (cVar4 == '\0') {
LAB_00406f33:
        if (_Src != (wchar_t *)0x0) {
          wcscpy_s(param_1,param_2,_Src);
          free(_Src);
        }
        if ((bVar3) && (*param_3 != -1)) {
          pFVar6 = (FILE *)__acrt_iob_func(0);
          iVar7 = _fileno(pFVar6);
          iVar7 = _dup2(*param_3,iVar7);
          if (iVar7 == -1) {
            FUN_00405ad3(0,0x411);
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
          FUN_00405ad3(0,0x411);
        }
        _close(*param_4);
        *param_4 = -1;
        return 1;
      }
    }
    else {
      if (wVar1 == L'>') {
        if (bVar2) goto LAB_00406f33;
        if (_Src == (wchar_t *)0x0) {
          _Src = (wchar_t *)FUN_0040ec65(local_c);
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
        if (iVar7 == -1) goto LAB_00406f33;
        goto LAB_00406f03;
      }
      if (wVar1 == L'|') goto LAB_00406f33;
      FUN_00405ad3(0,0x411);
    }
    pwVar5 = wcspbrk(local_c,L"<>|");
  } while( true );
}



uint __fastcall FUN_00406ff5(short *param_1,uint *param_2)

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



void __fastcall FUN_004070ac(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  errno_t eVar4;
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
  
  local_c = DAT_00414014 ^ (uint)&stack0xfffffffc;
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
               FUN_0040b57e(-(uint)((int)((ulonglong)local_624 * 2 >> 0x20) != 0) |
                            (uint)((ulonglong)local_624 * 2));
      eVar4 = _wgetenv_s(&local_624,pwVar3,local_624,L"PATHEXT");
      if (eVar4 == 0) {
        if (pwVar3 != (wchar_t *)0x0) goto LAB_00407221;
      }
      else {
        free(pwVar3);
      }
    }
    local_624 = 0x21;
    pwVar3 = (wchar_t *)FUN_0040b57e(0x42);
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
LAB_00407221:
  if ((local_14 == L'\0') && (local_418 == L'\0')) {
    eVar4 = _wgetenv_s(&local_620,(wchar_t *)0x0,0,L"PATH");
    if ((eVar4 != 0) || (local_620 == 0)) {
      local_620 = 1;
    }
    local_62c = (wchar_t *)NeedCurrentDirectoryForExePathW(local_618);
    if (local_62c != (wchar_t *)0x0) {
      local_620 = local_620 + 2;
    }
    pwVar5 = (wchar_t *)
             FUN_0040b57e(-(uint)((int)((ulonglong)local_620 * 2 >> 0x20) != 0) |
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
    pwVar5 = (wchar_t *)FUN_0040b57e(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
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
    uVar6 = FUN_00406ff5(_Dir,(uint *)&local_62c);
    if ((char)uVar6 == '\0') {
      free(_Dst);
      free(pwVar5);
      if (pwVar3 != &local_218) {
        free(pwVar3);
      }
LAB_0040747c:
      FUN_00412542(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
    _Dst = (wchar_t *)
           FUN_0040b57e(-(uint)((int)((ulonglong)local_624 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)local_624 * 2));
    wcscpy_s(_Dst,local_624,pwVar3);
    pwVar7 = _Dst;
    while (local_638 = pwVar7, uVar6 = FUN_00406ff5(pwVar7,(uint *)&local_63c), pwVar7 = local_62c,
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
        goto LAB_0040747c;
      }
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_00407513(wchar_t *param_1,byte param_2,char param_3,char param_4,void **param_5)

{
  wchar_t wVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  wchar_t *pwVar7;
  int iVar8;
  wchar_t **ppwVar9;
  wchar_t *pwVar10;
  undefined4 uVar11;
  wchar_t *pwVar12;
  FILE *pFVar13;
  int *piVar14;
  ulong *puVar15;
  void *pvVar16;
  uint uVar17;
  wchar_t **_ArgList;
  int local_448;
  wchar_t **local_444;
  undefined4 local_440;
  wchar_t *local_43c;
  uint local_438;
  uint local_434;
  wchar_t *local_430;
  char local_429;
  wchar_t *local_428;
  char local_421;
  wchar_t local_420;
  wchar_t local_41e [59];
  wchar_t local_3a8 [198];
  short asStack_21c [2];
  wchar_t local_218;
  undefined local_216 [522];
  uint local_c;
  
  local_c = DAT_00414014 ^ (uint)&stack0xfffffffc;
  local_428 = param_1;
  if (DAT_00424f6c == 0) {
    DAT_00424f6c = FUN_00407db0();
  }
  local_440 = 0;
  if (*local_428 == L'-') {
    local_428 = local_428 + 1;
    local_429 = '\x01';
    iVar8 = iswdigit(*local_428);
    if (iVar8 == 0) {
      _DAT_00434f70 = 0xffffffff;
    }
    else {
      _DAT_00434f70 = wcstoul(local_428,&local_428,10);
      piVar14 = _errno();
      if (*piVar14 == 0x22) {
        *local_428 = L'\0';
        FUN_00405ad3(0,0x436);
      }
      iVar8 = iswspace(*local_428);
      while (iVar8 != 0) {
        local_428 = local_428 + 1;
        iVar8 = iswspace(*local_428);
      }
    }
  }
  else {
    if (*local_428 == L'@') {
      local_428 = local_428 + 1;
      param_2 = (param_3 != '\0') - 1U & param_2;
    }
    local_429 = param_4;
  }
  if (*local_428 == L'\0') goto LAB_00407d99;
  pwVar7 = local_428;
  do {
    wVar1 = *pwVar7;
    pwVar7 = pwVar7 + 1;
  } while (wVar1 != L'\0');
  if ((uint)((int)pwVar7 - (int)(local_428 + 1) >> 1) < 0x8000) {
    wcscpy_s((wchar_t *)&DAT_00414510,0x8000,local_428);
  }
  else {
    _DAT_00414510 = 0;
  }
  pwVar7 = (wchar_t *)FUN_0040ec65(local_428);
  local_43c = pwVar7;
  if (param_2 != 0) {
    FUN_0040d149(L"\t%s\n",(char)pwVar7);
    FUN_0040d12b();
  }
  _ArgList = (wchar_t **)0x0;
  FUN_00405cb4((int *)&local_438,(wchar_t **)0x0,pwVar7);
  if (local_438 == 0) {
LAB_004076c9:
    local_444 = (wchar_t **)0x0;
  }
  else {
    lVar3 = (ulonglong)(local_438 + 8) * 4;
    local_434 = -(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3;
    _ArgList = (wchar_t **)FUN_0040b57e(local_434);
    if (_ArgList == (wchar_t **)0x0) {
      _ArgList = (wchar_t **)0x0;
    }
    else {
      memset(_ArgList,0,local_434);
    }
    uVar17 = local_438;
    local_434 = local_438;
    FUN_00405cb4((int *)&local_438,_ArgList,pwVar7);
    if (((*_ArgList != (wchar_t *)0x0) && (DAT_00424f68 != 0)) &&
       (iVar8 = _wcsicmp(*_ArgList,(wchar_t *)DAT_00424f68), iVar8 == 0)) {
      if (DAT_00414508 == (wchar_t *)0x0) {
        ppwVar9 = (wchar_t **)__p__wpgmptr();
        pwVar12 = *ppwVar9;
        DAT_00414508 = pwVar12;
        pwVar10 = wcspbrk(pwVar12,L" ");
        pwVar7 = local_43c;
        if (pwVar10 != (wchar_t *)0x0) {
          pwVar7 = DAT_00414508;
          do {
            wVar1 = *pwVar7;
            pwVar7 = pwVar7 + 1;
          } while (wVar1 != L'\0');
          uVar17 = ((int)pwVar7 - (int)(DAT_00414508 + 1) >> 1) + 3;
          DAT_00414508 = (wchar_t *)
                         FUN_0040b57e(-(uint)((int)((ulonglong)uVar17 * 2 >> 0x20) != 0) |
                                      (uint)((ulonglong)uVar17 * 2));
          wcscpy_s(DAT_00414508,uVar17,L"\"");
          wcscat_s(DAT_00414508,uVar17,pwVar12);
          wcscat_s(DAT_00414508,uVar17,L"\"");
          uVar17 = local_434;
          pwVar7 = local_43c;
        }
      }
      *_ArgList = DAT_00414508;
    }
    if (param_3 == '\0') {
      uVar11 = FUN_00406b11(uVar17,_ArgList,(int *)&local_444);
      if ((char)uVar11 == '\0') goto LAB_004076c9;
      if ((local_444 != (wchar_t **)0x0) && (param_5 != (void **)0x0)) {
        pwVar7 = *_ArgList;
        goto LAB_00407d1b;
      }
    }
    else {
      pwVar12 = wcspbrk(local_428,L"<>|&%");
      local_430 = (wchar_t *)
                  CONCAT31((int3)((uint)-(int)pwVar12 >> 8),'\x01' - (pwVar12 != (wchar_t *)0x0));
      local_434 = 0;
      uVar11 = FUN_00406b11(uVar17,_ArgList,(int *)&local_444);
      if ((char)uVar11 == '\0') {
        pwVar12 = local_428;
        do {
          wVar1 = *pwVar12;
          pwVar12 = pwVar12 + 1;
        } while (wVar1 != (wchar_t)local_440);
        if (((uint)((int)pwVar12 - (int)(local_428 + 1) >> 1) < 0x1000) && ((char)local_430 == '\0')
           ) {
          local_430 = *_ArgList;
          local_421 = '\x01';
          uVar17 = 0x10;
        }
        else {
          local_448 = -1;
          local_430 = (wchar_t *)0xffffffff;
          pwVar12 = local_428;
          do {
            wVar1 = *pwVar12;
            pwVar12 = pwVar12 + 1;
          } while (wVar1 != (wchar_t)local_440);
          local_421 = FUN_00406de7(local_428,((int)pwVar12 - (int)(local_428 + 1) >> 1) + 1,
                                   &local_448,(int *)&local_430);
          if (local_421 == '\0') {
            pwVar12 = local_428;
            do {
              wVar1 = *pwVar12;
              pwVar12 = pwVar12 + 1;
            } while (wVar1 != L'\0');
            if (0x7fff < (uint)((int)pwVar12 - (int)(local_428 + 1) >> 1)) {
              FUN_00405ad3(0,0x447);
            }
            if ((local_448 != -1) || (local_430 != (wchar_t *)0xffffffff)) {
              free(pwVar7);
              local_43c = (wchar_t *)FUN_0040ec65(local_428);
              FUN_00405cb4((int *)&local_438,_ArgList,local_43c);
            }
            cVar6 = FUN_004070ac(*_ArgList,&local_218);
            if (cVar6 == '\0') {
              local_434 = 0x12;
            }
            else {
              if (local_218 == L'\"') {
                pwVar7 = &local_218;
                do {
                  wVar1 = *pwVar7;
                  pwVar7 = pwVar7 + 1;
                } while (wVar1 != L'\0');
                iVar8 = (int)pwVar7 - (int)local_216 >> 1;
                if (asStack_21c[iVar8 + 1] == 0x22) {
                  memmove(&local_218,local_216,iVar8 * 2);
                  if (0x207 < iVar8 * 2 - 4U) {
                    FUN_00412680();
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  asStack_21c[iVar8] = 0;
                }
              }
              *_ArgList = &local_218;
              pwVar7 = wcschr(&local_218,L' ');
              if (pwVar7 != (wchar_t *)0x0) {
                local_420 = L'\"';
                wcscpy_s(local_41e,0x103,&local_218);
                wcscat_s(&local_420,0x104,L"\"");
                *_ArgList = &local_420;
              }
              piVar14 = _errno();
              *piVar14 = 0;
              puVar15 = __doserrno();
              *puVar15 = 0;
              local_444 = (wchar_t **)_wspawnvp(0,&local_218,_ArgList);
              if (((local_444 != (wchar_t **)0xffffffff) || (piVar14 = _errno(), *piVar14 == 0xc))
                 || (puVar15 = __doserrno(), *puVar15 != 0xc1)) goto LAB_00407aeb;
              local_434 = 0x13;
            }
            local_421 = '\x01';
          }
          else {
            local_434 = 0x11;
          }
LAB_00407aeb:
          if (local_448 != -1) {
            pFVar13 = (FILE *)__acrt_iob_func(0);
            iVar8 = _fileno(pFVar13);
            iVar8 = _dup2(local_448,iVar8);
            if (iVar8 == -1) {
              FUN_00405ad3(0,0x411);
            }
            _close(local_448);
          }
          if (local_430 != (wchar_t *)0xffffffff) {
            pFVar13 = (FILE *)__acrt_iob_func(1);
            iVar8 = _fileno(pFVar13);
            iVar8 = _dup2((int)local_430,iVar8);
            if (iVar8 == -1) {
              FUN_00405ad3(0,0x411);
            }
            _close((int)local_430);
          }
          local_430 = *_ArgList;
          uVar17 = local_434;
          if (local_421 == '\0') goto LAB_00407c16;
        }
        pwVar7 = local_428;
        do {
          wVar1 = *pwVar7;
          pwVar7 = pwVar7 + 1;
        } while (wVar1 != (wchar_t)local_440);
        if ((uint)((int)pwVar7 - (int)(local_428 + 1) >> 1) < 0x1000) {
          wcscpy_s((wchar_t *)&DAT_00414510,0x8000,local_428);
        }
        else {
          FUN_0040ce8f(uVar17);
          FUN_0040ce8f(0xf);
          FUN_00405ad3(0,0x447);
        }
        local_444 = FUN_004062db((wchar_t *)0x0,local_438,_ArgList);
      }
      else {
        local_430 = *_ArgList;
        local_421 = '\0';
      }
LAB_00407c16:
      if (local_444 == (wchar_t **)0xffffffff) {
        if (local_429 != '\0') goto LAB_004076c9;
        piVar14 = _errno();
        iVar8 = *piVar14;
        if (iVar8 != 0) {
          if (iVar8 == 2) {
            FUN_00405ad3(0,0x439);
            goto LAB_00407cfb;
          }
          if (iVar8 == 0xc) {
            FUN_00405ad3(0,0x43a);
          }
          else {
            puVar15 = __doserrno();
            if (*puVar15 == 0) {
              piVar14 = _errno();
              _wcserror_s(local_3a8,200,*piVar14);
            }
            else {
              local_440 = 0;
              puVar15 = __doserrno();
              FormatMessageW(0x1300,(LPCVOID)0x0,*puVar15,0x400,(LPWSTR)&local_440,0,(va_list *)0x0)
              ;
            }
            FUN_00405ad3(0,0x415);
          }
        }
      }
      else {
LAB_00407cfb:
        if (local_444 == (wchar_t **)0x0) goto LAB_00407d24;
      }
      if (param_5 != (void **)0x0) {
        ppwVar9 = _ArgList + 2;
        if (local_421 == '\0') {
          ppwVar9 = _ArgList;
        }
        pwVar7 = *ppwVar9;
LAB_00407d1b:
        pvVar16 = FUN_0040ec65(pwVar7);
        *param_5 = pvVar16;
      }
    }
  }
LAB_00407d24:
  pwVar7 = local_43c;
  if (local_438 == 0xfffffff8) {
    bVar4 = true;
    bVar5 = true;
    if (_ArgList != (wchar_t **)0x0) goto LAB_00407d62;
  }
  else {
    uVar17 = 0;
    if (_ArgList == (wchar_t **)0x0) {
      bVar4 = true;
    }
    else {
      do {
        bVar5 = true;
        if (_ArgList[uVar17] == (wchar_t *)0x0) break;
        if (_ArgList[uVar17] == local_43c) {
          bVar5 = false;
          break;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < local_438 + 8);
LAB_00407d62:
      bVar4 = bVar5;
      free(_ArgList);
    }
  }
  if ((pwVar7 != (wchar_t *)0x0) && (bVar4)) {
    free(pwVar7);
  }
  if ((local_444 == (wchar_t **)0x0) && (param_5 != (void **)0x0)) {
    *param_5 = (void *)0x0;
  }
LAB_00407d99:
  FUN_00412542(local_c ^ (uint)&stack0xfffffffc);
  return;
}



void FUN_00407db0(void)

{
  wchar_t *local_218;
  wchar_t local_214 [262];
  uint local_8;
  
  local_8 = DAT_00414014 ^ (uint)&stack0xfffffffc;
  local_218 = (wchar_t *)0x0;
  _wdupenv_s(&local_218,(size_t *)0x0,L"COMSPEC");
  if (local_218 == (wchar_t *)0x0) {
    _wsearchenv(L"CMD.EXE",L"PATH",local_214);
    if (local_214[0] == L'\0') {
      FUN_00405ad3(0,0x420);
    }
    FUN_0040ec65(local_214);
  }
  else {
    FUN_0040ec65(local_218);
    free(local_218);
  }
  FUN_00412542(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ushort __fastcall
FUN_00407e4f(int *param_1,undefined4 param_2,byte param_3,byte param_4,wchar_t *param_5,
            uint *param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  ushort uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  int *piVar7;
  byte bVar8;
  short sVar9;
  void *local_2c [2];
  void *local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  int *local_10;
  wchar_t *local_c [2];
  
  local_c[0]._0_2_ = 0;
  uVar4 = *(ushort *)param_1;
  local_14 = (undefined4 *)0x0;
  sVar9 = (short)local_c[0];
  local_18 = param_2;
  local_10 = param_1;
  if (uVar4 == 0) {
LAB_00407ee3:
    if (uVar4 != 0) {
      if (local_14 != (undefined4 *)0x0) {
        local_20 = CONCAT31(local_20._1_3_,param_4 >> 1) & 0xffffff01;
        do {
          DAT_0042473c = local_18;
          piVar7 = DAT_00424f44;
          if (sVar9 != 0x2a) {
            piVar7 = DAT_00424f50;
          }
          puVar1 = (undefined4 *)*piVar7;
          *piVar7 = 0;
          local_c[0] = (wchar_t *)0x0;
          local_1c = local_10;
          FUN_0040f95a(local_2c,&local_1c,-1,(int **)&DAT_0042473c,'\0',local_c);
          cVar3 = FUN_00411712((wchar_t *)&DAT_00424f70,0x8000,local_c[0],param_5);
          if (cVar3 != '\0') {
            FUN_00405ad3(0,0x447);
          }
          if (((param_3 & 4) == 0) || ((param_4 & 8) != 0)) {
            cVar3 = '\x01';
            if (((param_3 & 4) != 0) || (((param_3 & 8) == 0 && ((param_4 & 1) == 0))))
            goto LAB_00407ff6;
            bVar8 = 0;
            cVar3 = '\x01';
          }
          else {
            cVar3 = '\0';
LAB_00407ff6:
            bVar8 = 1;
          }
          uVar6 = FUN_00407513((wchar_t *)&DAT_00424f70,bVar8,cVar3,(char)local_20,&local_24);
          *param_6 = uVar6;
          if (((((param_3 & 2) == 0) && (uVar6 != 0)) && (_DAT_00434f70 < uVar6)) &&
             (DAT_00424737 == '\0')) {
            FUN_00405ad3(0,0x435);
          }
          piVar7 = DAT_00424f50;
          puVar2 = puVar1;
          if (sVar9 == 0x2a) {
            piVar7 = DAT_00424f44;
            DAT_00424f44 = puVar1;
            puVar2 = DAT_00424f50;
          }
          DAT_00424f50 = puVar2;
          *piVar7 = (int)puVar1;
          free(local_c[0]);
        } while (((((param_3 & 2) != 0) || (DAT_00424737 == '\0')) ||
                 ((*param_6 == 0 || (*param_6 <= _DAT_00434f70)))) && (puVar1 != (undefined4 *)0x0))
        ;
      }
      puVar1 = local_14;
      if (sVar9 == 0x2a) {
        DAT_00424f44 = local_14;
        puVar1 = DAT_00424f50;
      }
      DAT_00424f50 = puVar1;
      return 1;
    }
  }
  else {
    local_c[0] = (wchar_t *)0x3f;
    do {
      piVar7 = param_1;
      if (uVar4 == 0x24) {
        uVar4 = *(ushort *)((int)param_1 + 2);
        if (uVar4 == 0x28) {
          param_1 = (int *)((int)param_1 + 2);
        }
        piVar7 = (int *)((int)param_1 + 2);
        if (*(ushort *)piVar7 == 0x3f) {
          if ((uVar4 != 0x28) ||
             (((pwVar5 = wcschr(L"DFBR",*(wchar_t *)(param_1 + 1)), pwVar5 != (wchar_t *)0x0 &&
               (*(ushort *)((int)param_1 + 6) == 0x29)) ||
              (piVar7 = param_1, *(ushort *)(param_1 + 1) == 0x29)))) {
            uVar4 = *(ushort *)param_1;
            local_14 = DAT_00424f50;
            sVar9 = (short)local_c[0];
            goto LAB_00407ee3;
          }
        }
        else if (((*(ushort *)piVar7 == 0x2a) && (*(ushort *)(param_1 + 1) == 0x2a)) &&
                (((uVar4 != 0x28 ||
                  ((pwVar5 = wcschr(L"DFBR",*(wchar_t *)((int)param_1 + 6)),
                   pwVar5 != (wchar_t *)0x0 && (*(ushort *)(param_1 + 2) == 0x29)))) ||
                 (*(ushort *)((int)param_1 + 6) == 0x29)))) {
          local_14 = DAT_00424f44;
          uVar4 = *(ushort *)piVar7;
          sVar9 = 0x2a;
          goto LAB_00407ee3;
        }
      }
      param_1 = (int *)((int)piVar7 + 2);
      uVar4 = *(ushort *)param_1;
    } while (uVar4 != 0);
    uVar4 = 0;
  }
  return uVar4 & 0xff00;
}



void __fastcall FUN_004080c6(int param_1,short **param_2)

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
LAB_00408126:
          psVar3 = psVar3 + 1;
        }
        else if (sVar2 != 0x22) {
          *psVar3 = sVar2;
          goto LAB_00408126;
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



void __fastcall FUN_00408150(wchar_t *param_1,char param_2)

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
    pwVar2 = param_1;
    while (wVar1 != L'\0') {
      wVar1 = pwVar2[2];
      pwVar2[1] = wVar1;
      pwVar2 = pwVar2 + 1;
    }
  }
  FUN_00405bad(5);
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



undefined8 __fastcall FUN_004081de(byte *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*param_1 & 0x10) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(param_1 + 8);
    if ((iVar1 != 0) || (iVar2 != 0)) goto LAB_004081f7;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x14);
LAB_004081f7:
  return CONCAT44(iVar2,iVar1);
}



void __fastcall FUN_004081f8(wchar_t *param_1,LPWIN32_FIND_DATAW param_2,HANDLE *param_3)

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
  
  local_c = DAT_00414014 ^ (uint)&stack0xfffffffc;
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
       pwVar5 = (wchar_t *)FUN_0040b57e(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3)
       , pwVar5 == (wchar_t *)0x0)) {
      FUN_00405ad3(DAT_00424730,0x41b);
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
     (uVar7 = FUN_00408524(pwVar5,&param_2->dwFileAttributes), (char)uVar7 == '\0')) {
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
  FUN_00412542(local_c ^ (uint)&stack0xfffffffc);
  return;
}



WCHAR * __fastcall FUN_00408383(LPWIN32_FIND_DATAW param_1,HANDLE param_2)

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
FUN_004083a6(wchar_t *param_1,wchar_t *param_2,LPWIN32_FIND_DATAW param_3,HANDLE *param_4)

{
  wchar_t wVar1;
  int iVar2;
  void *pvVar3;
  wchar_t *pwVar4;
  wchar_t *_Dst;
  
  iVar2 = FUN_004081f8(param_2,param_3,param_4);
  if (iVar2 == 0) {
    if (param_1 != (wchar_t *)0x0) {
      do {
        _Dst = &DAT_00424740;
LAB_004083d4:
        wVar1 = *param_1;
joined_r0x004083dd:
        while (wVar1 != L'\0') {
          param_1 = param_1 + 1;
          if (wVar1 != L'\"') {
            *_Dst = wVar1;
            if (wVar1 == L';') break;
            _Dst = _Dst + 1;
            goto LAB_004083d4;
          }
          wVar1 = *param_1;
        }
        if (_Dst == &DAT_00424740) {
          wVar1 = *param_1;
          if (wVar1 == L'\0') goto LAB_0040840d;
          goto joined_r0x004083dd;
        }
        if ((_Dst[-1] != L'\\') && (_Dst[-1] != L'/')) {
          *_Dst = L'\\';
          _Dst = _Dst + 1;
        }
        *_Dst = L'\0';
        pwVar4 = wcspbrk(&DAT_00424740,L"*?");
      } while (pwVar4 != (wchar_t *)0x0);
      wcscpy_s(_Dst,0x400 - ((int)(_Dst + -0x2123a0) >> 1),param_2);
      _Dst = &DAT_00424740;
      iVar2 = FUN_004081f8(&DAT_00424740,param_3,param_4);
      if (iVar2 != 0) {
        param_2 = &DAT_00424740;
        goto LAB_004083c4;
      }
      goto LAB_004083d4;
    }
LAB_0040840d:
    pvVar3 = (void *)0x0;
  }
  else {
LAB_004083c4:
    pvVar3 = FUN_0040ec65(param_2);
  }
  return pvVar3;
}



uint __fastcall FUN_00408495(wchar_t *param_1,LPWIN32_FIND_DATAW param_2)

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
    param_1 = FUN_00411c42(param_1);
    bVar2 = true;
  }
  hFindFile = FindFirstFileW(param_1,param_2);
  pvVar3 = hFindFile;
  if ((hFindFile != (HANDLE)0xffffffff) &&
     (pvVar3 = (HANDLE)FUN_00408524(param_1,&param_2->dwFileAttributes), (char)pvVar3 != '\0')) {
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



uint __fastcall FUN_00408524(wchar_t *param_1,uint *param_2)

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
LAB_00408693:
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
      puVar10 = (uint *)FUN_0040b57e(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
      if (puVar10 == (uint *)0x0) {
        FUN_00405ad3(DAT_00424730,0x41b);
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
        goto LAB_00408693;
      }
      pvVar6 = (HANDLE)CloseHandle(hFile);
    }
    uVar4 = (uint)pvVar6 & 0xffffff00;
  }
  return uVar4;
}



wint_t __fastcall FUN_0040869a(wchar_t *param_1)

{
  char cVar1;
  wint_t _Ch;
  wchar_t *_Memory;
  int *_Str;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  uint uVar5;
  undefined4 unaff_EDI;
  undefined4 uStack_10;
  wchar_t *apwStack_c [2];
  
  uStack_10 = param_1;
  apwStack_c[0] = param_1;
  do {
    _Ch = getwc(DAT_00424f5c);
    if (DAT_00434f78 == (wchar_t *)0x0) {
      if (DAT_00414021 == '\0') {
        return _Ch;
      }
      if (_Ch != 0x21) {
        return _Ch;
      }
    }
    DAT_00414021 = '\0';
    if (DAT_00434f78 == (wchar_t *)0x0) {
      _Memory = (wchar_t *)FUN_00408843();
    }
    else {
      ungetwc(_Ch,DAT_00424f5c);
      _Memory = DAT_00434f78;
      DAT_00434f78 = (wchar_t *)0x0;
    }
    uStack_10 = (wchar_t *)CONCAT13(_Memory != DAT_00434f7c,(undefined3)uStack_10);
    _Str = (int *)FUN_0040897f(_Memory,(char *)((int)&uStack_10 + 2));
    if (uStack_10._2_1_ == '\t') {
      if (DAT_00424f61 != '\0') {
        FUN_00405ad3(DAT_00424724,0x409);
      }
      cVar1 = FUN_0040af58(_Str);
      if (cVar1 == '\x12') {
        return 0x20;
      }
    }
    else if (uStack_10._2_1_ == '\n') {
      FUN_00408b16((wint_t *)_Str);
    }
    else if (uStack_10._2_1_ == '\v') {
      FUN_00405ad3(DAT_00424724,0x41a);
    }
    else if (uStack_10._2_1_ == '\f') {
      iVar2 = _wcsnicmp((wchar_t *)_Str,L"\\t",2);
      if (iVar2 == 0) {
        FUN_0040d149(&DAT_004018b0,(char)unaff_EDI);
      }
      FUN_00405bad(0xd);
    }
    else if (uStack_10._2_1_ == '\r') {
      apwStack_c[0] = (wchar_t *)0x0;
      pwVar3 = wcstok_s((wchar_t *)_Str,L" \t",apwStack_c);
      pwVar4 = wcstok_s((wchar_t *)0x0,L" \t",apwStack_c);
      if (pwVar4 != (wchar_t *)0x0) {
        FUN_00405ad3(DAT_00424724,0x409);
      }
      uVar5 = FUN_0040b4d9((ushort *)pwVar3);
      if (uVar5 != 0) {
        *(byte *)(uVar5 + 0xc) = *(byte *)(uVar5 + 0xc) | 0x10;
      }
    }
    else {
      FUN_00408e71((wchar_t *)_Str,uStack_10._2_1_);
    }
    DAT_00414021 = '\x01';
    if (uStack_10._3_1_ != '\0') {
      free(_Memory);
    }
    DAT_00424724 = DAT_00424724 + 1;
  } while( true );
}



void FUN_00408843(void)

{
  uint uVar1;
  longlong lVar2;
  FILE *_File;
  short sVar3;
  wint_t wVar4;
  undefined4 uVar5;
  uint uVar6;
  
  sVar3 = FUN_0040a4f7('\x01');
  if ((sVar3 == 10) || (sVar3 == -1)) {
    FUN_00405ad3(DAT_00424724,0x3fa);
  }
  uVar6 = 0;
  uVar5 = FUN_0040a5d0(sVar3,'\x01');
  while (((wVar4 = (wint_t)uVar5, wVar4 != 0x23 && (wVar4 != 10)) && (wVar4 != 0xffff))) {
    if ((DAT_00434f74 < 2) || (DAT_00434f74 - 2 < uVar6)) {
      uVar1 = DAT_00434f74 + 0x400;
      if (DAT_00434f7c == (int *)0x0) {
        lVar2 = (ulonglong)(DAT_00434f74 + 0x401) * 2;
        DAT_00434f74 = uVar1;
        DAT_00434f7c = (int *)FUN_0040b57e(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) |
                                           (uint)lVar2);
      }
      else {
        DAT_00434f74 = uVar1;
        DAT_00434f7c = (int *)FUN_0040b5c1(DAT_00434f7c,uVar1 * 2 + 2);
      }
    }
    _File = DAT_00424f5c;
    *(wint_t *)((int)DAT_00434f7c + uVar6 * 2) = wVar4;
    uVar6 = uVar6 + 1;
    wVar4 = getwc(_File);
    uVar5 = FUN_0040a5d0(wVar4,'\x01');
  }
  *(undefined2 *)((int)DAT_00434f7c + uVar6 * 2) = 0;
  if (wVar4 == 0x23) {
    wVar4 = getwc(DAT_00424f5c);
    while (wVar4 != 10) {
      if (wVar4 == 0xffff) goto LAB_00408962;
      wVar4 = getwc(DAT_00424f5c);
    }
  }
  if (wVar4 == 0xffff) {
LAB_00408962:
    ungetwc(wVar4,DAT_00424f5c);
  }
  FUN_0040f8d7(DAT_00434f7c);
  return;
}



wchar_t * __fastcall FUN_0040897f(wchar_t *param_1,char *param_2)

{
  wchar_t wVar1;
  char cVar2;
  int iVar3;
  wchar_t *pwVar4;
  int iVar5;
  wchar_t *local_c;
  char *local_8;
  
  *param_2 = '\0';
  wVar1 = *param_1;
  pwVar4 = param_1;
  while (((wVar1 != L'\0' && (wVar1 != L' ')) && (wVar1 != L'\t'))) {
    pwVar4 = pwVar4 + 1;
    wVar1 = *pwVar4;
  }
  iVar5 = (int)pwVar4 - (int)param_1 >> 1;
  while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
    pwVar4 = pwVar4 + 1;
    wVar1 = *pwVar4;
  }
  local_c = pwVar4;
  local_8 = param_2;
  iVar3 = _wcsnicmp(param_1,L"INCLUDE",7);
  if ((iVar3 == 0) && (iVar5 == 7)) {
    *local_8 = '\t';
    local_c = pwVar4;
  }
  else {
    iVar3 = _wcsnicmp(param_1,L"CMDSWITCHES",0xb);
    if ((iVar3 == 0) && (iVar5 == 0xb)) {
      *local_8 = '\n';
      local_c = pwVar4;
    }
    else {
      iVar3 = _wcsnicmp(param_1,L"ERROR",5);
      if ((iVar3 == 0) && (iVar5 == 5)) {
        *local_8 = '\v';
        local_c = pwVar4;
      }
      else {
        iVar3 = _wcsnicmp(param_1,L"MESSAGE",7);
        if ((iVar3 == 0) && (iVar5 == 7)) {
          *local_8 = '\f';
          local_c = pwVar4;
        }
        else {
          iVar3 = _wcsnicmp(param_1,L"UNDEF",5);
          if ((iVar3 == 0) && (iVar5 == 5)) {
            *local_8 = '\r';
            local_c = pwVar4;
          }
          else {
            cVar2 = FUN_00408c95(param_1,iVar5,&local_c);
            *local_8 = cVar2;
            if (cVar2 == '\0') {
              FUN_00405ad3(DAT_00424724,0x3f9);
            }
          }
        }
      }
    }
  }
  return local_c;
}



void __fastcall FUN_00408b16(wint_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wint_t _C;
  
  _C = *param_1;
  do {
    if (_C == 0) {
      return;
    }
    if (_C == 0x2b) {
      param_1 = param_1 + 1;
      _C = *param_1;
      while ((_C != 0 && (_C != 0x2d))) {
        wVar1 = towupper(_C);
        pwVar2 = wcschr(L"DINSU",wVar1);
        if (pwVar2 == (wchar_t *)0x0) {
          if (DAT_00424f61 != '\0') {
            wVar1 = towupper(*param_1);
            pwVar2 = wcschr(L"ABCEKLPQRTY",wVar1);
            if (pwVar2 != (wchar_t *)0x0) goto LAB_00408bca;
          }
          FUN_00405ad3(DAT_00424724,0x400);
        }
        else {
LAB_00408bca:
          FUN_0040cb10(*param_1,'\x01');
        }
        param_1 = param_1 + 1;
        _C = *param_1;
      }
      if (_C != 0) goto LAB_00408bff;
    }
    else if (_C == 0x2d) {
LAB_00408bff:
      param_1 = param_1 + 1;
      _C = *param_1;
      while (_C != 0) {
        if (_C == 0x2b) goto LAB_00408c80;
        wVar1 = towupper(_C);
        pwVar2 = wcschr(L"DINSU",wVar1);
        if (pwVar2 == (wchar_t *)0x0) {
          if (DAT_00424f61 != '\0') {
            wVar1 = towupper(*param_1);
            pwVar2 = wcschr(L"ABCEKLMPQRTV",wVar1);
            if (pwVar2 != (wchar_t *)0x0) goto LAB_00408c4b;
          }
          FUN_00405ad3(DAT_00424724,0x400);
        }
        else {
LAB_00408c4b:
          FUN_0040cb10(*param_1,'\0');
        }
        param_1 = param_1 + 1;
        _C = *param_1;
      }
    }
    else if ((_C != 0x20) && (_C != 9)) {
      FUN_00405ad3(DAT_00424724,0x400);
      _C = *param_1;
    }
    if (_C == 0) {
      return;
    }
LAB_00408c80:
    param_1 = param_1 + 1;
    _C = *param_1;
  } while( true );
}



undefined __fastcall FUN_00408c95(wchar_t *param_1,int param_2,wchar_t **param_3)

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



void __fastcall FUN_00408e71(wchar_t *param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  wint_t wVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  wchar_t *extraout_ECX;
  char extraout_DL;
  bool bVar6;
  
  pwVar4 = DAT_00414024;
  switch(param_2) {
  case '\x01':
  case '\x06':
  case '\a':
    if (DAT_00414024 == (wchar_t *)0xf) {
      param_1 = (wchar_t *)0x3fb;
      break;
    }
    goto LAB_00408ea0;
  case '\x02':
    if (-1 < (int)DAT_00414024) {
      param_1 = DAT_00414024 + 0x21a7c0;
      bVar2 = *(byte *)param_1;
      if ((bVar2 & 9) != 0) {
        *(byte *)param_1 = bVar2 & 0xf6;
        pwVar4 = param_1;
        if ((bVar2 & 4) != 0) goto LAB_00408fb6;
        if ((bVar2 & 2) == 0) {
          bVar2 = bVar2 & 0xf6 | 2;
        }
        else {
          bVar2 = bVar2 & 0xf4;
        }
        *(byte *)param_1 = bVar2;
        goto LAB_00408f0b;
      }
    }
LAB_00408f0f:
    param_1 = (wchar_t *)0x3fd;
    break;
  case '\x03':
  case '\x04':
  case '\x05':
    if (((int)DAT_00414024 < 0) || (bVar2 = *(byte *)(DAT_00414024 + 0x21a7c0), (bVar2 & 9) == 0))
    goto LAB_00408f0f;
    *(byte *)(DAT_00414024 + 0x21a7c0) = bVar2 & 0xfe | 8;
    if ((bVar2 & 4) != 0) goto LAB_00408fb6;
    if ((bVar2 & 2) != 0) {
      *(byte *)(pwVar4 + 0x21a7c0) = bVar2 & 0xfc | 0xc;
      goto LAB_00408fb6;
    }
    goto LAB_00408ec7;
  case '\b':
    if (-1 < (int)DAT_00414024) {
      pwVar4 = (wchar_t *)((int)DAT_00414024 + -1);
      if ((int)pwVar4 < 0) {
        DAT_00414024 = pwVar4;
        return;
      }
      bVar2 = *(byte *)((int)DAT_00414024 + 0x434f7f);
      DAT_00414024 = pwVar4;
LAB_00408f0b:
      pwVar4 = param_1;
      if ((bVar2 & 2) != 0) {
        return;
      }
      goto LAB_00408fb6;
    }
    param_1 = (wchar_t *)0x401;
    break;
  default:
    goto switchD_00408e7d_caseD_8;
  }
  pwVar4 = (wchar_t *)FUN_00405ad3(DAT_00424724,(uint)param_1);
  param_2 = extraout_DL;
LAB_00408ea0:
  DAT_00414024 = (wchar_t *)((int)pwVar4 + 1);
  bVar6 = DAT_00414024 == (wchar_t *)0x0;
  *(undefined *)((int)pwVar4 + 0x434f81) = 1;
  if ((bVar6) || ((*(byte *)(pwVar4 + 0x21a7c0) & 2) != 0)) {
LAB_00408ec7:
    cVar1 = FUN_0040e383(param_1,param_2);
    pwVar4 = extraout_ECX;
    if (cVar1 != '\0') {
      *(byte *)(DAT_00414024 + 0x21a7c0) = *(byte *)(DAT_00414024 + 0x21a7c0) | 2;
switchD_00408e7d_caseD_8:
      return;
    }
  }
  else {
    *(undefined *)((int)pwVar4 + 0x434f81) = 5;
    pwVar4 = param_1;
  }
LAB_00408fb6:
  do {
    wVar3 = getwc(DAT_00424f5c);
    if (wVar3 != 0x21) {
      do {
        if (wVar3 == 0xffff) goto LAB_004090a2;
        DAT_00424724 = DAT_00424724 + 1;
        while( true ) {
          if (wVar3 == 0x5c) {
            uVar5 = FUN_0040a5d0(0x5c,'\x01');
            wVar3 = (wint_t)uVar5;
            if ((wVar3 == 0x21) && (DAT_00414021 != '\0')) goto LAB_0040905f;
            DAT_00414021 = '\0';
          }
          if (wVar3 == 0x23) goto LAB_00409027;
          if (wVar3 == 10) break;
          if (wVar3 == 0xffff) goto LAB_0040905a;
          wVar3 = getwc(DAT_00424f5c);
        }
LAB_0040903b:
        if (wVar3 == 0xffff) break;
        if (wVar3 == 0x21) goto LAB_0040905f;
        wVar3 = getwc(DAT_00424f5c);
      } while (wVar3 != 0x21);
LAB_0040905a:
      if (wVar3 != 0x21) {
        if (wVar3 == 0xffff) {
LAB_004090a2:
          FUN_00405ad3(DAT_00424724,0x3fc);
        }
        return;
      }
    }
LAB_0040905f:
    if ((DAT_00434f78 != (wchar_t *)0x0) && (DAT_00434f78 != DAT_00434f7c)) {
      free(DAT_00434f78);
    }
    DAT_00434f78 = (wchar_t *)FUN_00408843();
    FUN_0040897f(DAT_00434f78,&stack0xfffffffb);
    if ((byte)((uint)pwVar4 >> 0x18) < 9) {
      return;
    }
    DAT_00424724 = DAT_00424724 + 1;
  } while( true );
LAB_00409027:
  wVar3 = getwc(DAT_00424f5c);
  if (wVar3 == 10) goto LAB_0040903b;
  if (wVar3 == 0xffff) goto LAB_0040905a;
  goto LAB_00409027;
}



uint FUN_004090b9(void)

{
  wchar_t wVar1;
  bool bVar2;
  wchar_t *pwVar3;
  uint uVar4;
  wchar_t *pwVar5;
  int iVar6;
  wchar_t *local_8;
  
  DAT_00424724 = 0;
  do {
    bVar2 = false;
    pwVar3 = fgetws(&DAT_00424740,0x400,DAT_00424f5c);
    if (pwVar3 == (wchar_t *)0x0) {
      uVar4 = feof(DAT_00424f5c);
      if (uVar4 == 0) {
        DAT_00424730 = DAT_00424724;
        uVar4 = FUN_00405ad3(0,0x41d);
      }
      return uVar4 & 0xffffff00;
    }
    if (DAT_00424740 == 0x5b) {
      local_8 = (wchar_t *)0x0;
      pwVar3 = &DAT_00424742;
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
    DAT_00424724 = DAT_00424724 + 1;
  } while( true );
}



void FUN_004091a2(void)

{
  undefined4 uVar1;
  int iVar2;
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_00414014 ^ (uint)&stack0xfffffffc;
  _wsearchenv(L"tools.ini",L"INIT",local_210);
  if (local_210[0] != L'\0') {
    DAT_00424f5c = (int)_wfsopen(local_210,L"rt,ccs=unicode",0x20);
    if ((FILE *)DAT_00424f5c == (FILE *)0x0) {
      FUN_00405ad3(0,0x41d);
    }
    uVar1 = FUN_004090b9();
    if (((char)uVar1 == '\0') && (iVar2 = fclose((FILE *)DAT_00424f5c), iVar2 == -1)) {
      FUN_00405ad3(0,0x424);
    }
  }
  FUN_00412542(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



wchar_t * __fastcall FUN_00409254(wchar_t *param_1,int param_2)

{
  FILE *_File;
  wchar_t _Ch;
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar1 = param_1;
  pwVar3 = param_1;
  while( true ) {
    _Ch = FUN_0040869a(pwVar1);
    if (_Ch == L'\0') {
      return pwVar3;
    }
    if (_Ch == L'\xffff') {
      *pwVar3 = L'\0';
      return (wchar_t *)0x0;
    }
    *pwVar3 = _Ch;
    _File = DAT_00424f5c;
    pwVar2 = pwVar3 + 1;
    if (pwVar2 == param_1 + param_2) {
      *pwVar3 = L'\0';
      ungetwc(_Ch,_File);
      return pwVar2;
    }
    if (_Ch == L'\n') break;
    DAT_00414021 = 0;
    pwVar1 = pwVar3;
    pwVar3 = pwVar2;
  }
  DAT_00424724 = DAT_00424724 + 1;
  DAT_00414021 = 1;
  *pwVar2 = L'\0';
  return pwVar2;
}



void __fastcall FUN_004092c3(wchar_t *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  pwVar3 = param_1;
  while( true ) {
    pwVar3 = wcschr(pwVar3,L'\n');
    if ((pwVar3 == (wchar_t *)0x0) || ((param_1 < pwVar3 && (pwVar3[-1] != L'^')))) break;
    pwVar3 = pwVar3 + 1;
    pwVar1 = fgetws(pwVar3,0x400 - ((int)pwVar3 - (int)param_1 >> 1),DAT_00424f5c);
    if (pwVar1 == (wchar_t *)0x0) {
      iVar2 = feof(DAT_00424f5c);
      if (iVar2 != 0) {
        FUN_00405ad3(DAT_00424724,0x409);
      }
      FUN_00405ad3(DAT_00424724,0x41d);
    }
    DAT_00424724 = DAT_00424724 + 1;
  }
  return;
}



undefined2 * __fastcall FUN_00409357(wchar_t **param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t wVar4;
  wchar_t *pwVar5;
  
  pwVar5 = &DAT_00435480;
  pwVar3 = *param_1;
  do {
    pwVar2 = wcschr(pwVar3,L'<');
    if (pwVar2 == (wchar_t *)0x0) {
      return (undefined2 *)0x0;
    }
    pwVar3 = pwVar2 + 1;
  } while (*pwVar3 != L'<');
  pwVar2 = pwVar2 + 2;
  wVar4 = *pwVar2;
  if (wVar4 != L'\0') {
    bVar1 = false;
    do {
      while( true ) {
        if (((((wVar4 == L'>') || (wVar4 == L'<')) || (wVar4 == L'^')) ||
            ((wVar4 == L',' || (wVar4 == L'\t')))) || (wVar4 == L'\n')) goto LAB_00409471;
        if (wVar4 == L'\"') {
          bVar1 = !bVar1;
        }
        if ((wVar4 == L' ') && (!bVar1)) goto LAB_00409471;
        if ((wVar4 != L'$') || (pwVar3 = pwVar2 + 1, *pwVar3 != L'(')) break;
        *pwVar5 = L'$';
        pwVar5 = pwVar5 + 1;
        *pwVar5 = L'(';
        wVar4 = *pwVar3;
        pwVar2 = pwVar3;
        while( true ) {
          if (wVar4 == L'\n') goto LAB_00409471;
          if (wVar4 == L')') break;
          pwVar2 = pwVar2 + 1;
          *pwVar5 = wVar4;
          pwVar5 = pwVar5 + 1;
          wVar4 = *pwVar2;
        }
        wVar4 = L')';
      }
      pwVar2 = pwVar2 + 1;
      *pwVar5 = wVar4;
      pwVar5 = pwVar5 + 1;
      wVar4 = *pwVar2;
    } while (wVar4 != L'\0');
  }
LAB_00409471:
  *pwVar5 = L'\0';
  *param_1 = pwVar2;
  return &DAT_00435480;
}



void __fastcall FUN_00409485(wchar_t *param_1,void **param_2,wchar_t **param_3)

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
  short local_80e;
  wchar_t local_80c [1024];
  uint local_c;
  
  local_c = DAT_00414014 ^ (uint)&stack0xfffffffc;
  local_824 = (void *)0x0;
  local_820 = 0;
  local_811 = '\0';
  local_818 = (void *)0x0;
  wcscpy_s(&local_810,0x400,L"<<");
  pwVar4 = FUN_00409254(local_80c,0x3fe);
  if (pwVar4 == (wchar_t *)0x0) {
    iVar5 = feof(DAT_00424f5c);
    if (iVar5 != 0) {
      FUN_00405ad3(DAT_00424724,0x409);
    }
    FUN_00405ad3(DAT_00424724,0x41d);
  }
  local_81c = &local_810;
  FUN_004092c3(local_81c);
  while (psVar8 = FUN_00409357(&local_81c), psVar8 != (short *)0x0) {
    ppiVar6 = (int **)FUN_0040b5a3(0xc);
    piVar7 = (int *)FUN_0040ec65(psVar8);
    ppiVar6[1] = piVar7;
    pppiVar2 = &DAT_004353a0;
    for (pppiVar3 = (int ***)DAT_004353a0; pppiVar3 != (int ***)0x0; pppiVar3 = (int ***)*pppiVar3)
    {
      pppiVar2 = pppiVar3;
    }
    *pppiVar2 = ppiVar6;
  }
  if (DAT_004353a0 != (int **)0x0) {
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
              pvVar9 = FUN_0040b57e(0x1000);
              local_818 = pvVar9;
              (*(code *)local_81c)(pvVar9,0x800,*param_2,0x400);
              param_1 = (wchar_t *)((int)pvVar9 + 0x800);
              local_820 = 0x800;
              pwVar10 = (wchar_t *)((int)pvVar9 + 0x1000);
            }
            else {
              uVar1 = local_820 + 0x400;
              if ((uVar1 < local_820) ||
                 (local_824 = FUN_0040b5c1(local_818,local_820 * 2 + 0x800),
                 local_824 == (void *)0x0)) {
                FUN_00405ad3(DAT_00424724,0x419);
              }
              param_1 = (wchar_t *)(local_820 * 2 + (int)local_824);
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
        if (((local_811 != '\0') && (local_810 == L'<')) && (local_80e == 0x3c)) break;
        local_811 = '\x01';
        pwVar4 = FUN_00409254(&local_810,0x400);
        if (pwVar4 == (wchar_t *)0x0) {
          iVar5 = feof(DAT_00424f5c);
          if (iVar5 != 0) {
            FUN_00405ad3(DAT_00424724,0x409);
          }
          FUN_00405ad3(DAT_00424724,0x41d);
        }
      }
      if ((*DAT_004353a0 != (int *)0x0) &&
         (pwVar4 = FUN_00409254(&local_810,0x400), pwVar4 == (wchar_t *)0x0)) {
        iVar5 = feof(DAT_00424f5c);
        if (iVar5 != 0) {
          FUN_00405ad3(DAT_00424724,0x409);
        }
        FUN_00405ad3(DAT_00424724,0x41d);
      }
      DAT_004353a0 = (int **)*DAT_004353a0;
    } while (DAT_004353a0 != (int **)0x0);
  }
  *param_1 = L'\0';
  FUN_00412542(local_c ^ (uint)&stack0xfffffffc);
  return;
}



// WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe
// WARNING: Unable to track spacebase fully for stack

void __fastcall FUN_004097aa(short **param_1,short *param_2)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uStack_34;
  wchar_t *pwStack_30;
  rsize_t rStack_2c;
  wchar_t *pwStack_28;
  short **local_14;
  short *local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00414014 ^ (uint)&stack0xfffffffc;
  psVar3 = *param_1;
  psVar2 = psVar3;
  do {
    sVar5 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar5 != 0);
  psVar4 = param_2;
  do {
    sVar5 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar5 != 0);
  local_c = ((int)psVar2 - (int)(psVar3 + 1) >> 1) + ((int)psVar4 - (int)(param_2 + 1) >> 1) + -1;
  pwStack_28 = (wchar_t *)0x4097ff;
  iVar1 = local_c * -2;
  psVar2 = (short *)(&stack0xffffffdc + iVar1);
  psVar4 = (short *)(&stack0xffffffdc + iVar1);
  local_14 = param_1;
  local_10 = param_2;
  *(undefined4 *)((int)&pwStack_28 + iVar1) = 0x3c;
  uVar7 = *(undefined4 *)((int)&pwStack_28 + iVar1);
  while( true ) {
    sVar5 = *psVar3;
    sVar6 = (short)uVar7;
    if ((sVar5 == sVar6) && (sVar5 = sVar6, psVar3[1] == sVar6)) break;
    psVar3 = psVar3 + 1;
    *psVar2 = sVar5;
    psVar2 = psVar2 + 1;
  }
  *(short **)((int)&pwStack_28 + iVar1) = local_10;
  *(int *)((int)&rStack_2c + iVar1) = local_c;
  *(undefined **)((int)&pwStack_30 + iVar1) = &stack0xffffffdc + iVar1;
  *psVar2 = 0;
  *(undefined4 *)((int)&uStack_34 + iVar1) = 0x40983a;
  wcscat_s(*(wchar_t **)((int)&pwStack_30 + iVar1),*(rsize_t *)((int)&rStack_2c + iVar1),
           *(wchar_t **)((int)&pwStack_28 + iVar1));
  *(short **)((int)&pwStack_28 + iVar1) = psVar3 + 2;
  *(int *)((int)&rStack_2c + iVar1) = local_c;
  *(undefined **)((int)&pwStack_30 + iVar1) = &stack0xffffffdc + iVar1;
  *(undefined4 *)((int)&uStack_34 + iVar1) = 0x409847;
  wcscat_s(*(wchar_t **)((int)&pwStack_30 + iVar1),*(rsize_t *)((int)&rStack_2c + iVar1),
           *(wchar_t **)((int)&pwStack_28 + iVar1));
  do {
    sVar5 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar5 != 0);
  iVar8 = ((int)psVar4 - (int)(&stack0xffffffde + iVar1) >> 1) + 1;
  psVar3 = *local_14;
  *(undefined4 *)((int)&pwStack_28 + iVar1) = 0x40986e;
  psVar3 = (short *)FUN_0040b5c1(psVar3,iVar8 * 2);
  *(undefined **)((int)&pwStack_28 + iVar1) = &stack0xffffffdc + iVar1;
  *(int *)((int)&rStack_2c + iVar1) = iVar8;
  *(short **)((int)&pwStack_30 + iVar1) = psVar3;
  *local_14 = psVar3;
  *(undefined4 *)((int)&uStack_34 + iVar1) = 0x409879;
  wcscpy_s(*(wchar_t **)((int)&pwStack_30 + iVar1),*(rsize_t *)((int)&rStack_2c + iVar1),
           *(wchar_t **)((int)&pwStack_28 + iVar1));
  FUN_00412542(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __fastcall
FUN_0040988e(wchar_t *param_1,short *param_2,char param_3,undefined param_4,undefined param_5,
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
      uVar5 = 0xd4;
      if (param_3 == '\0') {
        uVar5 = 0xc0;
      }
      FUN_0040d149(L"\techo. %s %s\n",uVar5);
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
    wcsncpy_s(&DAT_004386e0,0x400,param_1,_MaxCount);
    psVar4 = &DAT_004386e0;
    do {
      psVar9 = psVar4;
      psVar4 = psVar9 + 1;
    } while (*psVar9 != 0);
    iVar6 = (int)(psVar9 + -0x21c370) >> 1;
    pwVar8 = param_1;
    do {
      wVar2 = *pwVar8;
      pwVar8 = pwVar8 + 1;
    } while (wVar2 != L'\0');
    if ((_MaxCount < (uint)((int)pwVar8 - (int)(param_1 + 1) >> 1)) &&
       (local_c = &DAT_004386e0, DAT_004386e0 != 0)) {
      iVar10 = 0;
      _C = DAT_004386e0;
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
    (&DAT_004386e0)[iVar6] = 0;
    FUN_0040d149(L"\techo %s %s %s\n",0xe0);
    param_1 = param_1 + iVar6;
    wVar2 = *param_1;
  }
  FUN_00412680();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



void __fastcall
FUN_004099ff(FILE *param_1,short *param_2,wchar_t **param_3,char param_4,undefined *param_5)

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
    in_stack_ffffffe8 = (wchar_t *)FUN_0040ec65(pwVar2 + 2);
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
            FUN_00405ad3(DAT_00424724,0x446);
          }
        }
      }
      pwVar2 = wcstok_s((wchar_t *)0x0,L", \t",(wchar_t **)&stack0xffffffec);
    }
    free(in_stack_ffffffe8);
    psVar5 = param_2;
    if (bVar1) {
      fwrite(&DAT_00401a4c,2,1,param_1);
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
        FUN_0040988e(pwVar3,param_2,(char)param_5,(char)unaff_EDI,(char)unaff_ESI,(char)unaff_EBX,
                     in_stack_ffffffe4,(CHAR)in_stack_ffffffe8,(char)in_stack_ffffffec,(char)psVar5,
                     (char)((uint)param_5 >> 0x18));
        *pwVar2 = L'\n';
      }
      param_2 = psVar5;
      lpWideCharStr = *param_3;
      if (bVar1) {
        fwrite(lpWideCharStr,(int)pwVar2 - (int)lpWideCharStr >> 1,2,param_1);
        fwrite(&DAT_00401a48,4,1,param_1);
      }
      else {
        for (; lpWideCharStr < pwVar2; lpWideCharStr = lpWideCharStr + 1) {
          _Size = WideCharToMultiByte(0,0,lpWideCharStr,1,&stack0xffffffe8,4,(LPCSTR)0x0,(LPBOOL)0x0
                                     );
          if (_Size != 0) {
            fwrite(&stack0xffffffe8,_Size,1,param_1);
          }
        }
        fwrite(&DAT_00401a44,2,1,param_1);
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



void __fastcall FUN_00409c23(int *param_1,int **param_2,int **param_3,char param_4)

{
  wchar_t wVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  int *piVar4;
  wchar_t *pwVar5;
  errno_t eVar6;
  UINT UVar7;
  wchar_t *pwVar8;
  undefined4 *puVar9;
  void *pvVar10;
  short *psVar11;
  int *piVar12;
  int **ppiVar13;
  int iVar14;
  void *local_44c;
  int *local_448;
  undefined4 local_444;
  void *local_440;
  int *local_43c;
  int *local_438;
  int *local_434;
  wchar_t *local_430;
  FILE *local_42c;
  int *local_428;
  int **local_424;
  char local_41d;
  WCHAR local_41c [260];
  wchar_t local_214 [262];
  uint local_8;
  
  local_8 = DAT_00414014 ^ (uint)&stack0xfffffffc;
  local_424 = param_2;
  pwVar3 = wcschr((wchar_t *)param_1,L'\n');
  if (pwVar3 == (wchar_t *)0x0) {
    piVar4 = (int *)FUN_0040ec65((short *)param_1);
    *local_424 = piVar4;
  }
  else {
    *pwVar3 = L'\0';
    local_444 = 0;
    local_428 = (int *)0x0;
    local_43c = param_1;
    FUN_0040f95a(&local_44c,&local_43c,-1,param_3,'\0',&local_428);
    *local_424 = local_428;
    *pwVar3 = L'\n';
    if (*local_424 == param_1) {
      piVar4 = (int *)FUN_0040ec65((short *)param_1);
      *local_424 = piVar4;
    }
    ppiVar13 = local_424;
    local_434 = *local_424;
    local_428 = (int *)0x0;
    local_448 = (int *)(pwVar3 + 1);
    FUN_0040f95a(&local_440,&local_448,-1,param_3,'\0',&local_428);
    local_438 = local_428;
    while (psVar11 = FUN_00409357((wchar_t **)&local_434), psVar11 != (short *)0x0) {
      local_41d = '\0';
      pwVar5 = (wchar_t *)FUN_0040ec65(psVar11);
      local_430 = pwVar5;
      if (*pwVar5 == L'\0') {
        local_43c = (int *)0x0;
        eVar6 = _wgetenv_s((size_t *)&local_43c,local_214,0x103,L"TMP");
        if ((eVar6 != 0) || (local_43c == (int *)0x0)) {
          wcscpy_s(local_214,0x103,L".");
        }
        local_42c = (FILE *)0x0;
        UVar7 = GetTempFileNameW(local_214,L"nm",0,local_41c);
        if (UVar7 != 0) {
          wcscpy_s(local_214,0x103,local_41c);
          local_42c = _wfsopen(local_214,L"wb",0x20);
        }
        if (local_42c == (FILE *)0x0) {
          FUN_00405ad3(DAT_00424724,0x41e);
        }
        pwVar8 = wcschr(local_214,L' ');
        if ((pwVar8 != (wchar_t *)0x0) &&
           (pwVar8 = wcschr(local_214,L'\"'), pwVar8 == (wchar_t *)0x0)) {
          pwVar5 = local_214;
          do {
            wVar1 = *pwVar5;
            pwVar5 = pwVar5 + 1;
          } while (wVar1 != L'\0');
          iVar14 = (int)pwVar5 - (int)(local_214 + 1) >> 1;
          memmove(local_214 + 1,local_214,iVar14 * 2);
          local_214[0] = L'\"';
          local_214[iVar14 + 1] = L'\"';
          if (0x205 < iVar14 * 2 + 4U) {
            FUN_00412680();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_214[iVar14 + 2] = L'\0';
          ppiVar13 = local_424;
          pwVar5 = local_430;
        }
        FUN_004097aa((short **)ppiVar13,local_214);
        free(pwVar5);
        local_430 = (wchar_t *)FUN_0040ec65(local_214);
        pwVar5 = local_430;
      }
      else {
        local_42c = (FILE *)FUN_00411cb7(pwVar5,L"wb");
        if (local_42c == (FILE *)0x0) {
          FUN_00405ad3(DAT_00424724,0x41e);
        }
        else {
          pwVar8 = wcschr((wchar_t *)*ppiVar13,L'<');
          pwVar5 = pwVar8 + 1;
          wVar1 = *pwVar5;
          while (wVar1 != L'<') {
            pwVar8 = wcschr(pwVar5,L'<');
            pwVar5 = pwVar8 + 1;
            ppiVar13 = local_424;
            wVar1 = *pwVar5;
          }
          local_434 = (int *)(pwVar8 + 3);
          pwVar5 = pwVar8 + 2;
          do {
            wVar1 = *pwVar5;
            pwVar5 = pwVar5 + 1;
          } while (wVar1 != (wchar_t)local_444);
          memmove(pwVar8,pwVar8 + 2,((int)pwVar5 - (int)local_434 >> 1) * 2 + 2);
          pwVar5 = local_430;
        }
      }
      local_434 = *ppiVar13;
      FUN_004099ff(local_42c,pwVar5,(wchar_t **)&local_438,param_4,&local_41d);
      piVar4 = local_438;
      pwVar5 = wcschr((wchar_t *)local_438,L'\n');
      if (pwVar5 == (wchar_t *)0x0) {
        piVar12 = piVar4;
        do {
          wVar1 = *(wchar_t *)piVar12;
          piVar12 = (int *)((int)piVar12 + 2);
        } while (wVar1 != (wchar_t)local_444);
        local_438 = (int *)((int)piVar4 + ((int)piVar12 - (int)((int)piVar4 + 2) >> 1) * 2);
      }
      else {
        local_438 = (int *)(pwVar5 + 1);
      }
      fclose(local_42c);
      pwVar5 = local_430;
      if (local_41d == '\0') {
        puVar9 = FUN_0040ec13();
        pwVar5 = local_430;
        pvVar10 = FUN_0040ec65(local_430);
        puVar9[1] = pvVar10;
        FUN_0040ed6a(&DAT_00435474,puVar9);
        ppiVar13 = local_424;
      }
      free(pwVar5);
    }
    if (local_428 != (int *)(pwVar3 + 1)) {
      free(local_428);
    }
  }
  FUN_00412542(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void FUN_0040a064(void)

{
  int iVar1;
  
  iVar1 = fclose(DAT_00424f5c);
  if (iVar1 == 0xffff) {
    FUN_00405ad3(0,0x424);
  }
  free(DAT_00424f64);
  DAT_004353a4 = DAT_004353a4 + -1;
  DAT_00424f5c = (FILE *)*(undefined4 *)(&DAT_004353b8 + DAT_004353a4 * 0xc);
  DAT_00424f64 = (void *)(&DAT_004353b4)[DAT_004353a4 * 3];
  DAT_00424724 = *(undefined4 *)(&DAT_004353b0 + DAT_004353a4 * 0xc);
  return;
}



void __fastcall FUN_0040a0cc(char param_1)

{
  wint_t wVar1;
  undefined3 in_register_00000005;
  wchar_t *pwVar2;
  wchar_t *extraout_ECX;
  
  pwVar2 = (wchar_t *)CONCAT31(in_register_00000005,param_1);
  while( true ) {
    DAT_00414021 = 0;
    do {
      if (param_1 == '\0') {
        wVar1 = FUN_0040869a(pwVar2);
      }
      else {
        wVar1 = getwc((FILE *)DAT_00424f5c);
      }
      pwVar2 = (wchar_t *)0xffff;
      if (wVar1 == 0xffff) {
        return;
      }
    } while (wVar1 != 10);
    DAT_00414021 = 1;
    if (param_1 == '\0') {
      wVar1 = FUN_0040869a((wchar_t *)0xffff);
      pwVar2 = extraout_ECX;
    }
    else {
      pwVar2 = DAT_00424f5c;
      wVar1 = getwc((FILE *)DAT_00424f5c);
    }
    if (((wVar1 != 0x3b) || (DAT_00424f61 == '\0')) && (wVar1 != 0x23)) break;
    DAT_00424724 = DAT_00424724 + 1;
  }
  ungetwc(wVar1,(FILE *)DAT_00424f5c);
  return;
}



void __fastcall FUN_0040a151(short param_1)

{
  code *pcVar1;
  short *psVar2;
  wchar_t *pwVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  
  if ((param_1 == 10) || (param_1 == -1)) {
    FUN_00405ad3(DAT_00424724,0x407);
  }
  DAT_00424740 = param_1;
  pwVar3 = fgetws(&DAT_00424742,0x3ff,DAT_00424f5c);
  if (pwVar3 == (wchar_t *)0x0) {
    iVar4 = feof(DAT_00424f5c);
    if (iVar4 != 0) {
      FUN_00405ad3(DAT_00424724,0x409);
    }
    FUN_00405ad3(DAT_00424724,0x41d);
  }
  psVar5 = &DAT_00424740;
  psVar2 = &DAT_00424740;
  do {
    psVar6 = psVar2;
    psVar2 = psVar6 + 1;
  } while (*psVar6 != 0);
  iVar4 = ((int)(psVar6 + -0x2123a0) >> 1) * 2;
  if (*(short *)((int)&DAT_0042473c + iVar4 + 2) == 10) {
    if (0x7ff < iVar4 - 2U) {
      FUN_00412680();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined2 *)((int)&DAT_0042473c + iVar4 + 2) = 0;
  }
  for (; (*psVar5 == 0x20 || (*psVar5 == 9)); psVar5 = (short *)((int)psVar5 + 2)) {
  }
  FUN_0040af58((int *)psVar5);
  return;
}



undefined __fastcall FUN_0040a235(wchar_t *param_1,undefined2 *param_2,wchar_t *param_3)

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
          DAT_00414021 = '\0';
          return 0x13;
        }
        if (uVar3 == 0x3d) {
          DAT_00414021 = '\0';
          return 0x16;
        }
        if (uVar3 == 0x5b) {
          if ((DAT_00424f61 != '\0') && (DAT_00414021 != '\0')) {
            return 0x17;
          }
        }
        else if (uVar3 != 0x5e) {
          if (uVar3 != 0xffff) goto LAB_0040a38c;
          iVar4 = feof(DAT_00424f5c);
          if (iVar4 == 0) {
            FUN_00405ad3(DAT_00424724,0x40e);
          }
          if (DAT_004353a4 == 0) {
            if (DAT_00414024 < 0) {
              return 0x17;
            }
            param_1 = (wchar_t *)0x3fc;
            FUN_00405ad3(DAT_00424724,0x3fc);
          }
          else {
            FUN_0040a064();
            param_1 = extraout_ECX;
          }
          goto LAB_0040a2e4;
        }
        ungetwc((wint_t)param_1,DAT_00424f5c);
        param_2 = param_2 + -1;
LAB_0040a38c:
        FUN_0040acb5(param_2 + -1,param_3);
        if ((DAT_00414021 == '\0') || (iVar4 = _wcsicmp(&DAT_00424740,L"include"), iVar4 != 0)) {
          DAT_00414021 = '\0';
        }
        else {
          DAT_00414021 = '\0';
          wVar2 = FUN_0040a4f7('\0');
          if ((wVar2 != 0x3a) && (wVar2 != 0x3d)) {
            if (DAT_00424f61 != '\0') {
              FUN_00405ad3(DAT_00424724,0x409);
            }
            uVar1 = FUN_0040a151(wVar2);
            return uVar1;
          }
          ungetwc(wVar2,DAT_00424f5c);
        }
        return 0x10;
      }
      DAT_00414021 = '\0';
      wVar2 = FUN_0040869a(param_1);
      param_1 = (wchar_t *)(uint)wVar2;
      if (wVar2 == 0x3a) {
        *param_2 = 0x3a;
        param_2[1] = 0;
        return 0x15;
      }
      uVar1 = 0x14;
      goto LAB_0040a354;
    }
LAB_0040a2e4:
    DAT_00424724 = DAT_00424724 + 1;
    DAT_00414021 = '\x01';
    wVar2 = FUN_0040869a(param_1);
    param_1 = (wchar_t *)(uint)wVar2;
    if (((param_1 == (wchar_t *)0x3b) && (DAT_00424f61 != '\0')) || (param_1 == (wchar_t *)0x23)) {
      FUN_0040a0cc('\0');
      DAT_00424724 = DAT_00424724 + 1;
      DAT_00414021 = '\x01';
      wVar2 = FUN_0040869a(extraout_ECX_00);
      param_1 = (wchar_t *)(uint)wVar2;
    }
    sVar5 = (short)param_1;
    if ((sVar5 == 0x20) || (sVar5 == 9)) {
      DAT_00414021 = '\0';
      return 0x12;
    }
    DAT_00414021 = '\x01';
  } while (sVar5 == -1);
  uVar1 = 0x11;
LAB_0040a354:
  ungetwc((wint_t)param_1,DAT_00424f5c);
  return uVar1;
}



char __fastcall FUN_0040a452(wchar_t *param_1,char param_2)

{
  char cVar1;
  wint_t _Ch;
  wchar_t *pwVar2;
  ushort *puVar3;
  
  if (DAT_00424f62 == '\0') {
    if ((param_2 == '\x18') || (param_2 == '\x19')) {
      FUN_0040a681((void *)CONCAT31((int3)((uint)param_1 >> 8),param_2),(wchar_t *)&DAT_00424f40);
      return param_2;
    }
    DAT_00424740 = FUN_0040a4f7('\0');
    pwVar2 = (wchar_t *)(uint)DAT_00424740;
    puVar3 = &DAT_00424742;
    DAT_00424742 = 0;
  }
  else {
    DAT_00424724 = DAT_00424724 + 1;
    DAT_00424f62 = '\0';
    _Ch = FUN_0040869a(param_1);
    if ((_Ch == 0x20) || (_Ch == 9)) {
      DAT_00414021 = 0;
      return '\x12';
    }
    pwVar2 = (wchar_t *)0xffff;
    DAT_00414021 = 1;
    if (_Ch != 0xffff) {
      ungetwc(_Ch,DAT_00424f5c);
      return '\x11';
    }
    puVar3 = &DAT_00424740;
  }
  cVar1 = FUN_0040a235(pwVar2,puVar3,(wchar_t *)&DAT_00424f40);
  return cVar1;
}



short __fastcall FUN_0040a4f7(char param_1)

{
  ushort uVar1;
  short sVar2;
  wchar_t *pwVar3;
  uint uVar4;
  undefined3 in_register_00000005;
  
  pwVar3 = (wchar_t *)CONCAT31(in_register_00000005,param_1);
  do {
    if (param_1 == '\0') {
      uVar1 = FUN_0040869a(pwVar3);
    }
    else {
      uVar1 = getwc(DAT_00424f5c);
    }
    pwVar3 = (wchar_t *)(uint)uVar1;
    if ((uVar1 == 0x20) || (uVar1 == 9)) {
LAB_0040a559:
      DAT_00414021 = '\0';
    }
    else if (uVar1 == 0x5e) {
      if (param_1 == '\0') {
        uVar1 = FUN_0040869a((wchar_t *)0x9);
      }
      else {
        uVar1 = getwc(DAT_00424f5c);
      }
      pwVar3 = (wchar_t *)(uint)uVar1;
      if ((uVar1 != 0x20) && (uVar1 != 9)) {
        ungetwc(uVar1,DAT_00424f5c);
        return 0x5e;
      }
      goto LAB_0040a559;
    }
    if ((short)pwVar3 == 0x5c) {
      uVar4 = FUN_0040a5d0(0x5c,param_1);
      pwVar3 = (wchar_t *)(uVar4 & 0xffff);
    }
    sVar2 = (short)pwVar3;
  } while ((sVar2 == 0x20) || (sVar2 == 9));
  if (pwVar3 == (wchar_t *)0x3b) {
    if (DAT_00414021 == '\0') {
      return sVar2;
    }
    if (DAT_00424f61 != '\0') goto LAB_0040a5a8;
  }
  if (sVar2 != 0x23) {
    return sVar2;
  }
LAB_0040a5a8:
  FUN_0040a0cc(param_1);
  DAT_00414021 = '\x01';
  return 10;
}



undefined4 __fastcall FUN_0040a5d0(short param_1,char param_2)

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
        wVar1 = FUN_0040869a(pwVar4);
        pwVar4 = extraout_ECX;
      }
      else {
        pwVar4 = DAT_00424f5c;
        wVar1 = getwc((FILE *)DAT_00424f5c);
      }
      if (wVar1 != 10) {
        ungetwc(wVar1,(FILE *)DAT_00424f5c);
        return CONCAT22(extraout_var_03,0x5c);
      }
      DAT_00424724 = DAT_00424724 + 1;
      DAT_00414021 = 1;
      if (param_2 == '\0') {
        wVar1 = FUN_0040869a(pwVar4);
        uVar2 = CONCAT22(extraout_var_00,wVar1);
      }
      else {
        wVar1 = getwc((FILE *)DAT_00424f5c);
        uVar2 = CONCAT22(extraout_var,wVar1);
      }
      pwVar4 = (wchar_t *)(uVar2 & 0xffff);
      if ((((short)pwVar4 == 0x3b) && (DAT_00424f61 != '\0')) || ((short)pwVar4 == 0x23)) {
        FUN_0040a0cc(param_2);
        DAT_00424724 = DAT_00424724 + 1;
        if (param_2 == '\0') {
          wVar1 = FUN_0040869a(extraout_ECX_00);
          uVar2 = CONCAT22(extraout_var_02,wVar1);
        }
        else {
          wVar1 = getwc((FILE *)DAT_00424f5c);
          uVar2 = CONCAT22(extraout_var_01,wVar1);
        }
        pwVar4 = (wchar_t *)(uVar2 & 0xffff);
      }
      uVar3 = (undefined2)(uVar2 >> 0x10);
    } while ((short)pwVar4 == 0x5c);
  }
  return CONCAT22(uVar3,(short)pwVar4);
}



void __thiscall FUN_0040a681(void *this,wchar_t *param_1)

{
  uint uVar1;
  short sVar2;
  bool bVar3;
  wint_t wVar4;
  ushort uVar5;
  wchar_t wVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  wchar_t *extraout_ECX;
  wchar_t *extraout_ECX_00;
  wchar_t *extraout_ECX_01;
  wchar_t *extraout_ECX_02;
  wchar_t *extraout_ECX_03;
  wchar_t *extraout_ECX_04;
  wchar_t *pwVar10;
  wchar_t *extraout_ECX_05;
  wchar_t *extraout_ECX_06;
  wchar_t *extraout_ECX_07;
  byte bVar11;
  byte bVar12;
  wchar_t *extraout_EDX;
  char cVar13;
  uint3 uVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  undefined4 uVar18;
  wchar_t *pwVar19;
  wchar_t *local_24;
  wchar_t *local_20;
  uint local_1c;
  wchar_t *local_18;
  wchar_t *local_14;
  wchar_t *local_10;
  wchar_t *local_c;
  byte local_7;
  char local_6;
  byte local_5;
  
  local_24 = (wchar_t *)0x0;
  pwVar15 = &DAT_00424740;
  local_10 = (wchar_t *)0x0;
  local_1c = 0;
  local_5 = 0;
  local_18 = &DAT_00424740;
  local_20 = &DAT_00424740;
  local_6 = (char)this;
  wVar4 = FUN_0040869a((wchar_t *)this);
  local_c = (wchar_t *)(uint)wVar4;
  if ((char)this == '\x18') {
    uVar7 = 0x200;
    goto LAB_0040a722;
  }
  if ((wVar4 == 0x20) || (wVar4 == 9)) {
LAB_0040a710:
    sVar2 = 2;
    uVar5 = FUN_0040a4f7('\0');
    local_c = (wchar_t *)(uint)uVar5;
  }
  else {
    if (wVar4 != 0x5e) {
      uVar7 = 0x100;
      goto LAB_0040a722;
    }
    wVar4 = FUN_0040869a((wchar_t *)0x5e);
    if ((wVar4 == 0x20) || (wVar4 == 9)) goto LAB_0040a710;
    ungetwc(wVar4,(FILE *)DAT_00424f5c);
    local_c = (wchar_t *)0x5e;
    sVar2 = 1;
  }
  uVar7 = (uint)(ushort)(sVar2 << 8);
LAB_0040a722:
  local_14 = param_1;
  do {
    pwVar10 = (wchar_t *)0x5e;
    bVar12 = (byte)uVar7;
    if ((short)local_c != 0x22) {
      local_5 = bVar12;
      if ((short)local_c != 0x5e) goto LAB_0040a8aa;
      if ((bVar12 != 0) || (local_6 != '\x19')) {
        wVar4 = FUN_0040869a((wchar_t *)0x5e);
        pwVar10 = DAT_00424f5c;
        ungetwc(wVar4,(FILE *)DAT_00424f5c);
        pwVar10 = (wchar_t *)CONCAT31((int3)((uint)pwVar10 >> 8),bVar12);
        local_c = (wchar_t *)0x5e;
        local_5 = bVar12;
        goto LAB_0040a8aa;
      }
      wVar4 = FUN_0040869a((wchar_t *)0x5e);
      uVar9 = local_1c;
      local_c = (wchar_t *)(uint)wVar4;
      if (local_c < (wchar_t *)0x2a) {
        if (local_c == (wchar_t *)0x29) goto LAB_0040a7d1;
        if (local_c != (wchar_t *)0xa) {
          local_5 = bVar12;
          if (local_c != (wchar_t *)0x21) {
            if ((local_c == (wchar_t *)0x22) || (local_c == (wchar_t *)0x23)) goto LAB_0040a87b;
            if ((local_c != (wchar_t *)0x24) && (pwVar10 = extraout_ECX, local_c != (wchar_t *)0x28)
               ) goto LAB_0040a8aa;
          }
          goto LAB_0040a7d1;
        }
      }
      else {
        pwVar10 = (wchar_t *)((uint)extraout_ECX & 0xffffff00);
        local_5 = bVar12;
        if ((local_c != (wchar_t *)0x2d) && (local_c != (wchar_t *)0x40)) {
          if (local_c == (wchar_t *)0x5c) goto LAB_0040a87b;
          if (((local_c != (wchar_t *)0x5e) && (local_c != (wchar_t *)0x7b)) &&
             (local_c != (wchar_t *)0x7d)) goto LAB_0040a8aa;
        }
LAB_0040a7d1:
        *pwVar15 = L'^';
        pwVar15 = pwVar15 + 1;
        if (pwVar15 == local_14) {
          if (DAT_0042472c == (wchar_t *)0x0) {
            DAT_0042472c = (wchar_t *)FUN_0040b57e(0x1000);
            wcsncpy_s(DAT_0042472c,0x800,local_18,0x400);
            local_1c = 0x800;
            pwVar15 = DAT_0042472c + 0x400;
            param_1 = DAT_0042472c + 0x800;
          }
          else {
            uVar1 = local_1c + 0x400;
            if ((uVar1 < local_1c) ||
               (local_24 = (wchar_t *)FUN_0040b5c1(DAT_0042472c,uVar1 * 2),
               local_24 == (wchar_t *)0x0)) {
              FUN_00405ad3(DAT_00424724,0x419);
            }
            pwVar15 = local_24 + uVar9;
            param_1 = local_24 + uVar1;
            DAT_0042472c = local_24;
            local_1c = uVar1;
          }
          local_18 = DAT_0042472c;
          local_20 = DAT_0042472c;
          local_14 = param_1;
        }
      }
LAB_0040a87b:
      bVar11 = 0;
      local_5 = bVar12;
      goto LAB_0040a995;
    }
    pwVar10 = (wchar_t *)(uint)local_5;
    local_5 = local_5 == 0;
LAB_0040a8aa:
    uVar14 = (uint3)(uVar7 >> 8);
    if (local_c < (wchar_t *)0x3c) {
      bVar12 = (byte)(uVar7 >> 8);
      if (local_c != (wchar_t *)0x3b) {
        if ((wchar_t *)0x28 < local_c) {
          if (local_c == (wchar_t *)0x29) {
            bVar11 = 9;
          }
          else if (local_c == (wchar_t *)0x2a) {
            bVar11 = 0xb;
          }
          else if (local_c == (wchar_t *)0x2c) {
            bVar11 = 0xe;
          }
          else {
            if (local_c != (wchar_t *)0x3a) goto LAB_0040aa79;
            bVar11 = 4;
          }
          goto LAB_0040a995;
        }
        if (local_c == (wchar_t *)0x28) {
          bVar11 = 8;
          goto LAB_0040a995;
        }
        if (local_c == (wchar_t *)0x9) {
LAB_0040a90c:
          bVar11 = 5;
          goto LAB_0040a995;
        }
        if (local_c == (wchar_t *)0xa) goto LAB_0040aa8e;
        if (local_c == (wchar_t *)0x20) goto LAB_0040a90c;
        if (local_c != (wchar_t *)0x23) {
          if (local_c != (wchar_t *)0x24) goto LAB_0040aa79;
          bVar11 = 7;
          goto LAB_0040a995;
        }
        if (bVar12 == 0) goto LAB_0040a94f;
        if (local_6 != '\x19') {
          bVar12 = (&DAT_004012c1)[(uint)bVar12 * 0xf];
LAB_0040aaca:
          uVar7 = (uint)bVar12 << 8;
LAB_0040aacd:
          cVar13 = (char)(uVar7 >> 8);
          uVar7 = CONCAT31((int3)(uVar7 >> 8),cVar13);
          if (cVar13 != '\0') goto LAB_0040aadb;
          DAT_00424724 = DAT_00424724 + 1;
          pwVar15[-1] = L' ';
          DAT_00414021 = 1;
          local_c = pwVar15;
          wVar4 = FUN_0040869a(local_10);
          DAT_00414021 = 0;
          if ((wVar4 == 0x20) || (wVar4 == 9)) {
            uVar7 = 0x200;
            pwVar10 = extraout_ECX_02;
            do {
              do {
                wVar4 = FUN_0040869a(pwVar10);
                pwVar10 = extraout_ECX_03;
              } while (wVar4 == 0x20);
              pwVar15 = local_c;
            } while (wVar4 == 9);
          }
          pwVar10 = DAT_00424f5c;
          ungetwc(wVar4,(FILE *)DAT_00424f5c);
          goto LAB_0040ac27;
        }
LAB_0040ac40:
        ungetwc((wint_t)local_c,(FILE *)DAT_00424f5c);
        pwVar10 = local_18;
        while ((pwVar10 < pwVar15 && (iVar8 = iswspace(pwVar15[-1]), iVar8 != 0))) {
          pwVar15 = pwVar15 + -1;
        }
        pwVar17 = DAT_0042472c;
        *pwVar15 = L'\0';
        if (pwVar17 == (wchar_t *)0x0) {
          pwVar15 = (wchar_t *)FUN_0040ec65(pwVar10);
        }
        else {
          pwVar15 = (wchar_t *)FUN_0040b5c1(pwVar17,((int)pwVar15 - (int)pwVar17 >> 1) * 2 + 2);
          if (pwVar15 == (wchar_t *)0x0) {
            return;
          }
        }
        DAT_0042472c = pwVar15;
        return;
      }
      if ((bVar12 != 0) || (DAT_00424f61 == '\0')) {
        bVar11 = 0;
        goto LAB_0040a995;
      }
LAB_0040a94f:
      uVar7 = (uint)uVar14 << 8;
      local_5 = 0;
      FUN_0040a0cc('\0');
      DAT_00424724 = DAT_00424724 + 1;
      pwVar10 = extraout_ECX_00;
    }
    else {
      if (local_c < (wchar_t *)0x45) {
        if (local_c == (wchar_t *)0x44) goto LAB_0040a993;
        if (local_c != (wchar_t *)0x3c) {
          if (local_c == (wchar_t *)0x3d) {
            bVar11 = 2;
            goto LAB_0040a995;
          }
          if ((local_c != (wchar_t *)0x3f) && (local_c != (wchar_t *)0x40)) {
            if (local_c != (wchar_t *)0x42) goto LAB_0040aa79;
            goto LAB_0040a993;
          }
        }
        uVar7 = CONCAT31(uVar14,0xc);
        bVar11 = 0xc;
        if ((local_6 != '\x18') || ((ushort)local_c != 0x3c)) goto LAB_0040a995;
        wVar4 = FUN_0040869a(pwVar10);
        if (wVar4 == 0x3c) {
          pwVar15 = (wchar_t *)FUN_00409485(pwVar15,&local_20,&param_1);
          local_c = (wchar_t *)0xa;
          uVar7 = CONCAT31(uVar14,6);
          DAT_00424724 = DAT_00424724 + -1;
          local_14 = param_1;
          local_18 = local_20;
        }
        else {
          ungetwc(wVar4,(FILE *)DAT_00424f5c);
        }
        uVar9 = uVar7 >> 8;
        uVar7 = uVar7 & 0xff;
LAB_0040aac3:
        bVar12 = (&UNK_004012c0)[uVar7 + uVar9 * 0xf];
        goto LAB_0040aaca;
      }
      if ((local_c != (wchar_t *)0x46) && (local_c != (wchar_t *)0x52)) {
        if (local_c == (wchar_t *)0x5c) {
          bVar11 = 3;
        }
        else if (local_c == (wchar_t *)0xffff) {
LAB_0040aa8e:
          bVar11 = 6;
        }
        else {
LAB_0040aa79:
          uVar9 = FUN_00403b00((ushort)local_c);
          bVar11 = -((char)uVar9 != '\0') & 10;
        }
        goto LAB_0040a995;
      }
LAB_0040a993:
      bVar11 = 0xd;
LAB_0040a995:
      bVar12 = (byte)(uVar7 >> 8);
      if ((int)local_10 < 1) {
LAB_0040aaba:
        uVar9 = (uint)bVar12;
        uVar7 = (uint)bVar11;
        goto LAB_0040aac3;
      }
      if (bVar11 != 0xe) {
        if (bVar11 != 9) goto LAB_0040aaba;
        uVar7 = (uint)(byte)(&DAT_004012c9)[(uint)bVar12 * 0xf] << 8;
        if ((&DAT_004012c9)[(uint)bVar12 * 0xf] == 1) {
          local_10 = (wchar_t *)((int)local_10 + -1);
          goto LAB_0040aab6;
        }
        goto LAB_0040aacd;
      }
      bVar12 = (&DAT_004012c6)[(uVar7 >> 8) * 0xf];
      uVar7 = (uint)bVar12 << 8;
      if ((uVar7 & 0x2000) != 0) goto LAB_0040aacd;
      if ((bVar12 == 0) || (bVar12 == 0x40)) {
LAB_0040aab6:
        uVar7 = 0x200;
        goto LAB_0040aacd;
      }
      FUN_00405ad3(DAT_00424724,0x40e);
      uVar7 = (uint)CONCAT11(bVar12,bVar12);
LAB_0040aadb:
      pwVar17 = local_10;
      cVar13 = (char)(uVar7 >> 8);
      bVar12 = (byte)uVar7;
      if (cVar13 == '\r') {
        pwVar10 = (wchar_t *)((int)local_10 + 1);
        uVar9 = (uint)CONCAT11(2,bVar12);
        local_10 = pwVar10;
LAB_0040ab22:
        local_7 = (byte)(uVar9 >> 8);
      }
      else {
        if (cVar13 == '@') goto LAB_0040ac40;
        uVar9 = (uint)CONCAT11(bVar12,bVar12);
        pwVar10 = local_10;
        local_7 = bVar12;
        if ((uVar7 & 0x20) != 0) {
          FUN_00405ad3(DAT_00424724,(uVar7 & 0xdf) + 1000);
          pwVar10 = extraout_ECX_01;
          local_10 = pwVar17;
          goto LAB_0040ab22;
        }
      }
      uVar7 = uVar9;
      uVar9 = local_1c;
      *pwVar15 = (wchar_t)local_c;
      pwVar15 = pwVar15 + 1;
      if (pwVar15 == local_14) {
        if (DAT_0042472c == (wchar_t *)0x0) {
          DAT_0042472c = (wchar_t *)FUN_0040b57e(0x1000);
          wcsncpy_s(DAT_0042472c,0x800,local_18,0x400);
          local_1c = 0x800;
          pwVar15 = DAT_0042472c + 0x400;
          pwVar10 = DAT_0042472c + 0x800;
        }
        else {
          uVar7 = local_1c + 0x400;
          if ((uVar7 < local_1c) ||
             (local_24 = (wchar_t *)FUN_0040b5c1(DAT_0042472c,uVar7 * 2), local_24 == (wchar_t *)0x0
             )) {
            pwVar19 = (wchar_t *)0x419;
            FUN_00405ad3(DAT_00424724,0x419);
            pwVar15 = pwVar19 + 1;
            uVar18 = 0;
            wVar6 = *pwVar19;
            pwVar10 = pwVar19;
            pwVar16 = extraout_EDX;
            pwVar17 = pwVar15;
            if (wVar6 == L'\"') {
              uVar18 = 0x1000000;
              uVar7 = 0x10;
              bVar3 = false;
            }
            else if (wVar6 == L'$') {
              uVar7 = 2;
              bVar3 = false;
            }
            else if (wVar6 == L'{') {
              uVar7 = 8;
              bVar3 = false;
            }
            else {
              uVar7 = 0;
              bVar3 = false;
            }
            break;
          }
          pwVar15 = local_24 + uVar9;
          pwVar10 = local_24 + uVar7;
          DAT_0042472c = local_24;
          local_1c = uVar7;
        }
        uVar7 = (uint)local_7 << 8;
        param_1 = pwVar10;
        local_20 = DAT_0042472c;
        local_18 = DAT_0042472c;
        local_14 = pwVar10;
      }
LAB_0040ac27:
      uVar7 = CONCAT31((int3)(uVar7 >> 8),local_5);
    }
    wVar4 = FUN_0040869a(pwVar10);
    local_c = (wchar_t *)(uint)wVar4;
  } while( true );
LAB_0040acf6:
  wVar6 = FUN_0040869a(pwVar10);
  if (wVar6 == L'^') {
    wVar6 = FUN_0040869a(extraout_ECX_04);
    if ((ushort)wVar6 < 0x2a) {
      if (wVar6 != L')') {
        if ((wVar6 == L'\n') || (wVar6 == L'#')) goto LAB_0040ad96;
        if ((wVar6 != L'$') && (wVar6 != L'(')) goto LAB_0040ad2b;
      }
LAB_0040ad8a:
      *pwVar15 = L'^';
      pwVar15 = pwVar15 + 1;
      pwVar17 = pwVar15;
    }
    else if (wVar6 != L'\\') {
      if (((wVar6 != L'^') && (wVar6 != L'{')) && (wVar6 != L'}')) goto LAB_0040ad2b;
      goto LAB_0040ad8a;
    }
LAB_0040ad96:
    bVar12 = 0;
  }
  else {
LAB_0040ad2b:
    if ((ushort)wVar6 < 0x2a) {
      if (wVar6 == L')') {
        bVar12 = 9;
      }
      else if (wVar6 == L'\t') {
LAB_0040adbf:
        bVar12 = ((char)((uint)uVar18 >> 0x18) != '\0') - 1U & 5;
      }
      else if (wVar6 == L'\n') {
LAB_0040ae36:
        bVar12 = 6;
      }
      else {
        if (wVar6 == L' ') goto LAB_0040adbf;
        if (wVar6 == L'\"') {
          bVar12 = 0xe;
          if ((char)uVar7 == '\x12') {
            uVar18 = 0x1000000;
          }
        }
        else if (wVar6 == L'#') {
          bVar12 = 1;
        }
        else if (wVar6 == L'$') {
          bVar12 = 7;
        }
        else {
          if (wVar6 != L'(') goto LAB_0040adfc;
          bVar12 = 8;
        }
      }
    }
    else if (wVar6 == L':') {
      bVar12 = 4;
    }
    else if (wVar6 == L';') {
      bVar12 = 3;
    }
    else if (wVar6 == L'=') {
      bVar12 = 2;
    }
    else if (wVar6 == L'\\') {
      bVar12 = 0xd;
    }
    else if (wVar6 == L'{') {
      bVar12 = 0xb;
    }
    else if (wVar6 == L'}') {
      bVar12 = 0xc;
    }
    else {
      if (wVar6 == L'\xffff') goto LAB_0040ae36;
LAB_0040adfc:
      if ((DAT_00424734 & 0x80) == 0) {
        uVar9 = FUN_00403b00(wVar6);
        bVar12 = -((char)uVar9 != '\0') & 10;
      }
      else {
        uVar9 = FUN_00403b00(wVar6);
        if ((((char)uVar9 == '\0') && (wVar6 != L'*')) && (wVar6 != L'@')) goto LAB_0040ad96;
        bVar12 = 10;
      }
    }
  }
  pwVar10 = (wchar_t *)((uVar7 & 0xff) * 0xf);
  uVar7 = (uint)*(byte *)((int)pwVar10 + (int)(&DAT_004011a0 + bVar12));
  if (((char)((uint)uVar18 >> 0x18) != '\0') &&
     (*(byte *)((int)pwVar10 + (int)(&DAT_004011a0 + bVar12)) == 1)) {
    uVar7 = 0x10;
  }
  if (bVar3) {
    if (bVar12 == 6) {
      DAT_00424724 = DAT_00424724 + 1;
      DAT_00414021 = 1;
      wVar6 = FUN_0040869a(pwVar10);
      DAT_00414021 = 0;
      if ((wVar6 == L' ') || (wVar6 == L'\t')) {
        uVar7 = 0x40;
        pwVar10 = extraout_ECX_05;
        pwVar15 = pwVar17;
        do {
          do {
            wVar6 = FUN_0040869a(pwVar10);
            pwVar10 = extraout_ECX_06;
          } while (wVar6 == L' ');
          pwVar17 = pwVar15;
        } while (wVar6 == L'\t');
      }
      else {
        uVar7 = (uint)(pwVar15 != &DAT_00424742);
        pwVar10 = extraout_ECX_05;
      }
    }
    else {
      *pwVar15 = L'\\';
      pwVar15 = pwVar15 + 1;
      pwVar17 = pwVar15;
    }
  }
  bVar3 = false;
  if (pwVar16 <= pwVar15) {
    pwVar10 = (wchar_t *)0x434;
    FUN_00405ad3(DAT_00424724,0x434);
  }
  if ((char)uVar7 == '@') {
    ungetwc(wVar6,(FILE *)DAT_00424f5c);
    *pwVar15 = L'\0';
    FUN_0040ce39(pwVar19);
    return;
  }
  if ((uVar7 & 0x20) != 0) {
    FUN_00405ad3(DAT_00424724,(uVar7 & 0xdf) + 1000);
    pwVar10 = extraout_ECX_07;
  }
  if ((char)uVar7 == '\x0f') {
    uVar7 = 0x10f;
    bVar3 = true;
  }
  else {
    *pwVar15 = wVar6;
    pwVar15 = pwVar15 + 1;
    pwVar17 = pwVar15;
  }
  goto LAB_0040acf6;
}



void __fastcall FUN_0040acb5(wchar_t *param_1,wchar_t *param_2)

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
    wVar3 = FUN_0040869a(pwVar5);
    if (wVar3 == L'^') {
      wVar3 = FUN_0040869a(extraout_ECX);
      if ((ushort)wVar3 < 0x2a) {
        if (wVar3 != L')') {
          if ((wVar3 == L'\n') || (wVar3 == L'#')) goto LAB_0040ad96;
          if ((wVar3 != L'$') && (wVar3 != L'(')) goto LAB_0040ad2b;
        }
LAB_0040ad8a:
        *pwVar8 = L'^';
        pwVar8 = pwVar8 + 1;
        local_c = pwVar8;
      }
      else if (wVar3 != L'\\') {
        if (((wVar3 != L'^') && (wVar3 != L'{')) && (wVar3 != L'}')) goto LAB_0040ad2b;
        goto LAB_0040ad8a;
      }
LAB_0040ad96:
      bVar6 = 0;
    }
    else {
LAB_0040ad2b:
      if ((ushort)wVar3 < 0x2a) {
        if (wVar3 == L')') {
          bVar6 = 9;
        }
        else if (wVar3 == L'\t') {
LAB_0040adbf:
          bVar6 = bVar2 - 1U & 5;
        }
        else if (wVar3 == L'\n') {
LAB_0040ae36:
          bVar6 = 6;
        }
        else {
          if (wVar3 == L' ') goto LAB_0040adbf;
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
            if (wVar3 != L'(') goto LAB_0040adfc;
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
        if (wVar3 == L'\xffff') goto LAB_0040ae36;
LAB_0040adfc:
        if ((DAT_00424734 & 0x80) == 0) {
          uVar4 = FUN_00403b00(wVar3);
          bVar6 = -((char)uVar4 != '\0') & 10;
        }
        else {
          uVar4 = FUN_00403b00(wVar3);
          if ((((char)uVar4 == '\0') && (wVar3 != L'*')) && (wVar3 != L'@')) goto LAB_0040ad96;
          bVar6 = 10;
        }
      }
    }
    pwVar5 = (wchar_t *)((uVar7 & 0xff) * 0xf);
    uVar7 = (uint)*(byte *)((int)pwVar5 + (int)(&DAT_004011a0 + bVar6));
    if ((bVar2) && (*(byte *)((int)pwVar5 + (int)(&DAT_004011a0 + bVar6)) == 1)) {
      uVar7 = 0x10;
    }
    if (bVar1) {
      if (bVar6 == 6) {
        DAT_00424724 = DAT_00424724 + 1;
        DAT_00414021 = 1;
        wVar3 = FUN_0040869a(pwVar5);
        DAT_00414021 = 0;
        if ((wVar3 == L' ') || (wVar3 == L'\t')) {
          uVar7 = 0x40;
          pwVar5 = extraout_ECX_00;
          do {
            do {
              wVar3 = FUN_0040869a(pwVar5);
              pwVar5 = extraout_ECX_01;
            } while (wVar3 == L' ');
            pwVar8 = local_c;
          } while (wVar3 == L'\t');
        }
        else {
          uVar7 = (uint)(pwVar8 != &DAT_00424742);
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
      FUN_00405ad3(DAT_00424724,0x434);
    }
    if ((char)uVar7 == '@') {
      ungetwc(wVar3,DAT_00424f5c);
      *pwVar8 = L'\0';
      FUN_0040ce39(param_1);
      return;
    }
    if ((uVar7 & 0x20) != 0) {
      FUN_00405ad3(DAT_00424724,(uVar7 & 0xdf) + 1000);
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



void __fastcall FUN_0040af58(int *param_1)

{
  short sVar1;
  wchar_t wVar2;
  short *psVar3;
  longlong lVar4;
  wint_t _Ch;
  int *piVar5;
  uint uVar6;
  int iVar7;
  wchar_t *_PathResult;
  wchar_t *extraout_ECX;
  undefined4 *puVar8;
  int *piVar9;
  wchar_t **ppwVar10;
  int iVar11;
  uint _SIZE;
  int *piVar12;
  bool bVar13;
  wchar_t wStack_498;
  undefined auStack_496 [514];
  undefined4 uStack_294;
  wchar_t *pwVar14;
  HANDLE local_274;
  int *local_270;
  int local_26c;
  wchar_t *local_268;
  wchar_t **local_264;
  int *local_260;
  _WIN32_FIND_DATAW local_25c;
  uint local_8;
  
  local_8 = DAT_00414014 ^ (uint)&stack0xfffffffc;
  if ((*(short *)param_1 == 0) || (*(short *)param_1 == 0x23)) {
    pwVar14 = (wchar_t *)0x407;
    FUN_00405ad3(DAT_00424724,0x407);
    uVar6 = DAT_00414014 ^ (uint)&stack0xfffffd78;
    _wsplitpath_s(pwVar14,(wchar_t *)&uStack_294,3,&wStack_498,0x100,(wchar_t *)0x0,0,(wchar_t *)0x0
                  ,0);
    puVar8 = &uStack_294;
    do {
      sVar1 = *(short *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 2);
    } while (sVar1 != 0);
    pwVar14 = &wStack_498;
    do {
      wVar2 = *pwVar14;
      pwVar14 = pwVar14 + 1;
    } while (wVar2 != L'\0');
    _SIZE = ((int)puVar8 - ((int)&uStack_294 + 2) >> 1) + 1 + ((int)pwVar14 - (int)auStack_496 >> 1)
    ;
    lVar4 = (ulonglong)_SIZE * 2;
    _PathResult = (wchar_t *)
                  FUN_0040b57e(-(uint)((int)((ulonglong)lVar4 >> 0x20) != 0) | (uint)lVar4);
    _wmakepath_s(_PathResult,_SIZE,(wchar_t *)&uStack_294,&wStack_498,(wchar_t *)0x0,(wchar_t *)0x0)
    ;
    pwVar14 = _PathResult;
    do {
      wVar2 = *pwVar14;
      pwVar14 = pwVar14 + 1;
    } while (wVar2 != L'\0');
    iVar7 = (int)pwVar14 - (int)(_PathResult + 1) >> 1;
    if ((_PathResult[iVar7 + -1] == L'\\') || (_PathResult[iVar7 + -1] == L'/')) {
      _PathResult[iVar7 + -1] = L'\0';
    }
    FUN_00412542(uVar6 ^ (uint)&stack0xfffffd78);
    return;
  }
  local_260 = (int *)wcspbrk_exref;
  piVar5 = (int *)wcspbrk((wchar_t *)param_1,L"\t#");
  local_270 = (int *)0x0;
  local_264 = (wchar_t **)0x20;
  if (piVar5 == (int *)0x0) goto LAB_0040b0dc;
  wVar2 = *(wchar_t *)piVar5;
  *(wchar_t *)piVar5 = L'\0';
  piVar9 = piVar5;
  if (wVar2 != L'#') {
    while( true ) {
      piVar9 = (int *)((int)piVar9 + 2);
      wVar2 = *(wchar_t *)piVar9;
      if ((wVar2 == L'\0') || (wVar2 == L'#')) break;
      if ((wVar2 != L' ') && (wVar2 != L'\t')) {
        uStack_294 = 0x40aff8;
        FUN_00405ad3(DAT_00424724,0x409);
      }
    }
  }
  do {
    piVar9 = (int *)0x0;
    do {
      piVar12 = piVar5;
      if (piVar12 <= param_1) break;
      piVar5 = (int *)((int)piVar12 + -2);
      piVar9 = local_270;
    } while ((*(wchar_t *)piVar5 == (wchar_t)local_264) || (*(wchar_t *)piVar5 == L'\t'));
    *(wchar_t *)piVar12 = L'\0';
    if ((*(wchar_t *)param_1 != L'<') || (*(wchar_t *)((int)piVar12 + -2) != L'>')) {
      if ((*(wchar_t *)param_1 == L'\"') && (*(wchar_t *)((int)piVar12 + -2) == L'\"')) {
        *(wchar_t *)((int)piVar12 + -2) = L'\0';
        param_1 = (int *)((int)param_1 + 2);
      }
      piVar5 = FUN_0040f8d7(param_1);
      if (piVar5 == param_1) {
        piVar5 = (int *)FUN_0040ec65((short *)param_1);
      }
      iVar7 = FUN_004081f8((wchar_t *)piVar5,&local_25c,&local_274);
      piVar9 = param_1;
      if (iVar7 != 0) goto LAB_0040b2cb;
      iVar7 = (*(code *)local_260)();
      if (iVar7 != 0) goto LAB_0040b2b8;
      local_26c = DAT_004353a4;
      if (DAT_004353a4 < 0) goto LAB_0040b2a3;
      local_264 = (wchar_t **)(&DAT_004353b4 + DAT_004353a4 * 3);
      goto LAB_0040b19b;
    }
    *(wchar_t *)((int)piVar12 + -2) = L'\0';
    piVar12 = (int *)((int)param_1 + 2);
    piVar5 = FUN_0040f8d7(piVar12);
    if (piVar5 == piVar12) {
      piVar5 = (int *)FUN_0040ec65((short *)piVar12);
    }
    uVar6 = FUN_0040b4d9((ushort *)L"INCLUDE");
    if ((uVar6 != 0) && (psVar3 = *(short **)(*(int *)(uVar6 + 8) + 4), psVar3 != (short *)0x0)) {
      piVar12 = (int *)FUN_0040ec65(psVar3);
      piVar9 = FUN_0040f8d7(piVar12);
      if (piVar9 != piVar12) {
        free(piVar12);
      }
    }
    param_1 = (int *)FUN_004083a6((wchar_t *)piVar9,(wchar_t *)piVar5,&local_25c,&local_274);
    if (param_1 != (int *)0x0) break;
    uStack_294 = 0x40b0d9;
    FUN_00405ad3(DAT_00424724,0x41c);
LAB_0040b0dc:
    piVar5 = param_1;
    do {
      wVar2 = *(wchar_t *)piVar5;
      piVar5 = (int *)((int)piVar5 + 2);
    } while (wVar2 != L'\0');
    piVar5 = (int *)((int)param_1 + ((int)piVar5 - (int)((int)param_1 + 2) >> 1) * 2);
  } while( true );
  if (piVar9 != (int *)0x0) {
    free(piVar9);
  }
  free(piVar5);
  piVar9 = param_1;
  goto LAB_0040b2cb;
LAB_0040b19b:
  do {
    pwVar14 = DAT_00424f64;
    if (local_26c != DAT_004353a4) {
      pwVar14 = *local_264;
    }
    local_268 = (wchar_t *)FUN_0040b3ff(pwVar14);
    if (local_268 != (wchar_t *)0x0) {
      pwVar14 = local_268;
      do {
        wVar2 = *pwVar14;
        pwVar14 = pwVar14 + 1;
      } while (wVar2 != L'\0');
      piVar9 = piVar5;
      do {
        sVar1 = *(short *)piVar9;
        piVar9 = (int *)((int)piVar9 + 2);
      } while (sVar1 != (short)local_270);
      uVar6 = ((int)pwVar14 - (int)(local_268 + 1) >> 1) + 2 +
              ((int)piVar9 - ((int)piVar5 + 2) >> 1);
      local_260 = (int *)FUN_0040b57e(-(uint)((int)((ulonglong)uVar6 * 2 >> 0x20) != 0) |
                                      (uint)((ulonglong)uVar6 * 2));
      uStack_294 = 0x40b218;
      wcscpy_s((wchar_t *)local_260,uVar6,local_268);
      uStack_294 = 0x40b22d;
      wcscat_s((wchar_t *)local_260,uVar6,L"\\");
      piVar9 = local_260;
      uStack_294 = 0x40b23f;
      wcscat_s((wchar_t *)local_260,uVar6,(wchar_t *)piVar5);
      iVar7 = FUN_004081f8((wchar_t *)piVar9,&local_25c,&local_274);
      if (iVar7 != 0) {
        free(local_268);
        break;
      }
      free(local_268);
      free(piVar9);
    }
    local_26c = local_26c + -1;
    local_264 = local_264 + -3;
    piVar9 = param_1;
  } while (-1 < local_26c);
LAB_0040b2a3:
  free(piVar5);
  if (local_26c < 0) {
LAB_0040b2b8:
    uStack_294 = 0x40b2c8;
    FUN_00405ad3(DAT_00424724,0x41c);
  }
LAB_0040b2cb:
  iVar11 = 0;
  iVar7 = DAT_004353a4;
  if (0 < DAT_004353a4) {
    ppwVar10 = (wchar_t **)&DAT_004353b4;
    do {
      iVar7 = _wcsicmp((wchar_t *)piVar9,*ppwVar10);
      if (iVar7 == 0) {
        uStack_294 = 0x40b2fe;
        FUN_00405ad3(DAT_00424724,0x430);
      }
      iVar11 = iVar11 + 1;
      ppwVar10 = ppwVar10 + 3;
      iVar7 = DAT_004353a4;
    } while (iVar11 < DAT_004353a4);
  }
  DAT_004353a4 = iVar7 + 1;
  bVar13 = DAT_00424f63 != '\0';
  DAT_00424730 = 0;
  *(int *)(&DAT_004353b8 + iVar7 * 0xc) = DAT_00424f5c;
  *(int *)(&DAT_004353b0 + iVar7 * 0xc) = DAT_00424724;
  (&DAT_004353b4)[iVar7 * 3] = DAT_00424f64;
  if (bVar13) {
    FUN_0040d149(L"Included: %s\n",(char)piVar9);
  }
  DAT_00424f5c = FUN_00411cb7((wchar_t *)piVar9,L"rt,ccs=unicode");
  if (DAT_00424f5c == 0) {
    uStack_294 = 0x40b37e;
    FUN_00405ad3(DAT_00424724,0x41c);
  }
  DAT_00424f64 = (wchar_t *)FUN_0040ec65((short *)piVar9);
  DAT_00424724 = 1;
  DAT_00414021 = 1;
  _Ch = FUN_0040869a(extraout_ECX);
  if ((_Ch == 0x20) || (_Ch == 9)) {
    DAT_00414021 = 0;
  }
  else {
    DAT_00414021 = 1;
    ungetwc(_Ch,(FILE *)DAT_00424f5c);
    DAT_00424724 = DAT_00424724 + -1;
  }
  FUN_00412542(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __fastcall FUN_0040b3ff(wchar_t *param_1)

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
  
  local_8 = DAT_00414014 ^ (uint)&stack0xfffffffc;
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
  pwVar3 = (wchar_t *)FUN_0040b57e(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
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
  FUN_00412542(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



uint __fastcall FUN_0040b4d9(ushort *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  bool bVar6;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    DAT_004386a8 = &DAT_00434f90;
  }
  else {
    uVar3 = 0;
    puVar2 = param_1;
    do {
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 + uVar1;
      uVar1 = *puVar2;
    } while (uVar1 != 0);
    DAT_004386a8 = &DAT_00434f90 + (uVar3 & 0xff);
    for (puVar4 = (undefined4 *)*DAT_004386a8; puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      puVar2 = (ushort *)puVar4[1];
      puVar5 = param_1;
      do {
        uVar1 = *puVar2;
        bVar6 = uVar1 < *puVar5;
        if (uVar1 != *puVar5) {
LAB_0040b53b:
          uVar3 = -(uint)bVar6 | 1;
          goto LAB_0040b540;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar2[1];
        bVar6 = uVar1 < puVar5[1];
        if (uVar1 != puVar5[1]) goto LAB_0040b53b;
        puVar2 = puVar2 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar1 != 0);
      uVar3 = 0;
LAB_0040b540:
      if (uVar3 == 0) {
        return ~-(uint)((*(byte *)(puVar4 + 3) & 0x10) != 0) & (uint)puVar4;
      }
    }
  }
  return 0;
}



void FUN_0040b56d(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00434f90;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



void * __fastcall FUN_0040b57e(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if (pvVar1 == (void *)0x0) {
    FUN_00405ad3(DAT_00424730,0x41b);
  }
  return pvVar1;
}



void * __fastcall FUN_0040b5a3(size_t param_1)

{
  void *_Dst;
  
  _Dst = FUN_0040b57e(param_1);
  memset(_Dst,0,param_1);
  return _Dst;
}



void * __fastcall FUN_0040b5c1(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    pvVar1 = FUN_0040b57e(param_2);
  }
  else {
    pvVar1 = realloc(param_1,param_2);
    if (pvVar1 == (void *)0x0) {
      FUN_00405ad3(DAT_00424730,0x41b);
    }
  }
  return pvVar1;
}



void __fastcall FUN_0040b5f7(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  code *pcVar2;
  SIZE_T dwBytes;
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
  
  local_c = DAT_00414014 ^ (uint)auStack_6dc;
  local_6b8 = &DAT_00438ee8;
  local_6b4[0] = 0;
  local_6cc = (wchar_t *)0x0;
  local_6bc = (HMODULE *)&DAT_00438ee4;
  local_6c0 = 0x60;
  local_6c4 = param_2;
  if ((((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) || (param_2 == (wchar_t *)0x0)) ||
     (*param_2 == L'\0')) goto LAB_0040bbc6;
  DAT_00438ee4 = 0;
  eVar3 = wcsncpy_s(&local_218,0x104,param_1,0xffffffff);
  if (eVar3 != 0) goto LAB_0040bbc6;
  pwVar9 = &local_218;
  do {
    wVar1 = *pwVar9;
    pwVar9 = pwVar9 + 1;
  } while (wVar1 != L'\0');
  if (((&sStack_21a)[(int)pwVar9 - (int)auStack_216 >> 1] != 0x5c) &&
     (eVar3 = wcsncat_s(&local_218,0x104,L"\\",0xffffffff), eVar3 != 0)) goto LAB_0040bbc6;
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
      ))) goto LAB_0040bbc6;
  if (DAT_004386c4 == (PVOID)0x0) {
    pHVar5 = GetModuleHandleW(L"kernel32.dll");
    if (pHVar5 != (HMODULE)0x0) {
      pFVar6 = GetProcAddress(pHVar5,"SetThreadPreferredUILanguages");
      DAT_004386c4 = EncodePointer(pFVar6);
      goto LAB_0040b79d;
    }
LAB_0040b8be:
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
      if (DStack_6d8 == 0) goto LAB_0040bbc6;
      uVar10 = uVar10 + 1;
    } while (uVar10 < 3);
  }
  else {
    pFVar6 = (FARPROC)DecodePointer(DAT_004386c4);
LAB_0040b79d:
    if (pFVar6 == (FARPROC)0x0) goto LAB_0040b8be;
    DVar4 = GetEnvironmentVariableW(L"VS_UNICODE_OUTPUT",(LPWSTR)0x0,0);
    if ((DVar4 == 0) && (iVar7 = (*pFVar6)(0x100,0,0), iVar7 == 0)) goto LAB_0040bbc6;
    iStack_6d0 = 0;
    uStack_6c8 = 0;
    if (DAT_004386c0 == (PVOID)0x0) {
      pHVar5 = GetModuleHandleW(L"kernel32.dll");
      if (pHVar5 != (HMODULE)0x0) {
        pFVar6 = GetProcAddress(pHVar5,"GetThreadPreferredUILanguages");
        DAT_004386c0 = EncodePointer(pFVar6);
        goto LAB_0040b80c;
      }
    }
    else {
      pFVar6 = (FARPROC)DecodePointer(DAT_004386c0);
LAB_0040b80c:
      if (pFVar6 != (FARPROC)0x0) {
        iVar7 = (*pFVar6)(0x34,&uStack_6c8,0,&iStack_6d0);
        if (iVar7 == 0) goto LAB_0040bbc6;
        dwBytes = iStack_6d0 * 2;
        pvVar8 = GetProcessHeap();
        pwVar9 = (wchar_t *)HeapAlloc(pvVar8,0,dwBytes);
        if ((pwVar9 == (wchar_t *)0x0) ||
           (iVar7 = (*pFVar6)(0x34,&uStack_6c8,pwVar9,&iStack_6d0), iVar7 == 0)) goto LAB_0040bbc6;
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
        if (DVar4 == 0) goto LAB_0040bbc6;
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
              if (BVar12 == 0) goto LAB_0040bb6c;
            } while ((bStack_690 & 0x10) == 0);
            pwVar13 = L".";
            pwVar9 = awStack_664;
            do {
              wVar1 = *pwVar9;
              bVar14 = (ushort)wVar1 < (ushort)*pwVar13;
              if (wVar1 != *pwVar13) {
LAB_0040ba46:
                uVar10 = -(uint)bVar14 | 1;
                goto LAB_0040ba4d;
              }
              if (wVar1 == L'\0') break;
              wVar1 = pwVar9[1];
              bVar14 = (ushort)wVar1 < (ushort)pwVar13[1];
              if (wVar1 != pwVar13[1]) goto LAB_0040ba46;
              pwVar9 = pwVar9 + 2;
              pwVar13 = pwVar13 + 2;
            } while (wVar1 != L'\0');
            uVar10 = 0;
LAB_0040ba4d:
          } while (uVar10 == 0);
          pwVar13 = L"..";
          pwVar9 = awStack_664;
          do {
            wVar1 = *pwVar9;
            bVar14 = (ushort)wVar1 < (ushort)*pwVar13;
            if (wVar1 != *pwVar13) {
LAB_0040ba8a:
              uVar10 = -(uint)bVar14 | 1;
              goto LAB_0040ba91;
            }
            if (wVar1 == L'\0') break;
            wVar1 = pwVar9[1];
            bVar14 = (ushort)wVar1 < (ushort)pwVar13[1];
            if (wVar1 != pwVar13[1]) goto LAB_0040ba8a;
            pwVar9 = pwVar9 + 2;
            pwVar13 = pwVar13 + 2;
          } while (wVar1 != L'\0');
          uVar10 = 0;
LAB_0040ba91:
        } while ((uVar10 == 0) ||
                (iVar11 = FUN_0040cfb6(awStack_664,L"%hu%c",(char)auStack_6d4), iVar11 == -1));
        if (0x207 < (uint)(iVar7 * 2)) {
          FUN_00412680();
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
LAB_0040bb6c:
      FindClose(pvVar8);
    }
  }
LAB_0040bbc6:
  FUN_00412542(local_c ^ (uint)auStack_6dc);
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
  
  local_8 = DAT_00414014 ^ (uint)&stack0xfffffffc;
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
  FUN_00412542(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void _guard_check_icall(void)

{
  return;
}



void __fastcall FUN_0040bd4e(undefined4 param_1)

{
  DAT_00414068 = param_1;
  return;
}



undefined4 __fastcall FUN_0040bd55(int **param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined unaff_DI;
  
  if (DAT_00424f60 == '\0') {
    FUN_00405c49();
  }
  FUN_0040d149(L"\nNMAKE : fatal error U1038: Internal error\n",unaff_DI);
  FUN_0040d12b();
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
  if ((**param_1 != -0x7ffffffd) && (DAT_00414068 == 0)) {
    uVar2 = 1;
  }
  return uVar2;
}



// WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_0040bdc3(int param_1,int param_2)

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
  
  local_8 = &DAT_00413160;
  uStack_c = 0x40bdd2;
  local_27c = param_2;
  SetErrorMode(1);
  memset(local_278,0,0x50);
  memset(local_568,0,0x2cc);
  local_8 = (undefined *)0x0;
  setlocale(2,".ACP");
  FUN_0040d01f();
  _set_invalid_parameter_handler(_guard_check_icall);
  iVar9 = 1;
  iVar8 = param_1;
  do {
    local_280 = iVar9;
    if (iVar8 <= iVar9) {
      if (DAT_0043547b != '\0') {
        _DAT_00000000 = 0;
      }
      FUN_0040b56d();
      if (DAT_00424f68 == (void *)0x0) {
        ppwVar5 = (wchar_t **)__p__wpgmptr();
        _Src = *ppwVar5;
        iVar9 = FUN_00403b25(_Src,L' ');
        pwVar6 = _Src;
        if (iVar9 != 0) {
          do {
            wVar1 = *pwVar6;
            pwVar6 = pwVar6 + 1;
          } while (wVar1 != L'\0');
          _SizeInWords = ((int)pwVar6 - (int)(_Src + 1) >> 1) + 3;
          pwVar6 = (wchar_t *)
                   FUN_00403af8(-(uint)((int)((ulonglong)_SizeInWords * 2 >> 0x20) != 0) |
                                (uint)((ulonglong)_SizeInWords * 2));
          wcscpy_s(pwVar6,_SizeInWords,L"\"");
          wcscat_s(pwVar6,_SizeInWords,_Src);
          wcscat_s(pwVar6,_SizeInWords,L"\"");
          iVar8 = param_1;
          param_2 = local_27c;
        }
        DAT_00424f68 = FUN_0040ec65(pwVar6);
      }
      signal(2);
      signal(0xf);
      iVar8 = FUN_0040c330(iVar8,param_2);
      FUN_0040cdfb();
      if (DAT_00414020 == '\0') {
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
                DAT_0043547b = '\x01';
                _Dst_00 = (int *)(local_27c + iVar9 * 4);
              }
              else {
                iVar4 = _wcsicmp((wchar_t *)(*_Dst + 2),L"errorreport:internal");
                param_2 = local_27c;
                if (iVar4 != 0) goto LAB_0040be9d;
                DAT_0043547a = 1;
                _Dst_00 = (int *)(local_27c + iVar9 * 4);
                _Dst = _Dst_00;
              }
              param_2 = local_27c;
              memmove(_Dst_00,_Dst + 1,(iVar8 - iVar9) * 4 - 4);
              iVar8 = iVar8 + -1;
              iVar9 = iVar9 + -1;
              param_1 = iVar8;
              goto LAB_0040be9d;
            }
            uVar7 = 3;
          }
        }
      }
      FUN_0040bd4e(uVar7);
      memmove(_Dst,_Dst + 1,(iVar8 - iVar9) * 4 - 4);
      iVar8 = iVar8 + -1;
      iVar9 = iVar9 + -1;
      param_2 = local_27c;
      param_1 = iVar8;
    }
LAB_0040be9d:
    iVar9 = iVar9 + 1;
  } while( true );
}



void FUN_0040c1ce(void)

{
  wchar_t *pwVar1;
  int *piVar2;
  undefined4 *extraout_ECX;
  int iVar3;
  wchar_t **ppwVar4;
  int iVar5;
  
  pwVar1 = (wchar_t *)FUN_0040ec65((short *)&DAT_00402388);
  piVar2 = (int *)FUN_0040ec65((short *)&DAT_00402390);
  iVar5 = 0;
  FUN_00403635(pwVar1,piVar2,0);
  pwVar1 = (wchar_t *)FUN_0040ec65((short *)&DAT_00402398);
  piVar2 = (int *)FUN_0040ec65((short *)&DAT_00402390);
  FUN_00403635(pwVar1,piVar2,0);
  pwVar1 = (wchar_t *)FUN_0040ec65((short *)&DAT_004023a0);
  piVar2 = (int *)FUN_0040ec65((short *)&DAT_00402390);
  FUN_00403635(pwVar1,piVar2,0);
  pwVar1 = (wchar_t *)FUN_0040ec65((short *)&DAT_004023a8);
  piVar2 = (int *)FUN_0040ec65((short *)&DAT_004023b0);
  FUN_00403635(pwVar1,piVar2,0);
  pwVar1 = (wchar_t *)FUN_0040ec65((short *)&DAT_004023b8);
  piVar2 = (int *)FUN_0040ec65((short *)&DAT_004023c0);
  FUN_00403635(pwVar1,piVar2,0);
  pwVar1 = (wchar_t *)FUN_0040ec65(L"_NMAKE_VER");
  piVar2 = (int *)FUN_0040ec65(L"14.31.31107.0");
  FUN_00403635(pwVar1,piVar2,2);
  pwVar1 = (wchar_t *)FUN_0040ec65(L"MAKE");
  piVar2 = (int *)FUN_0040ec65(DAT_00424f68);
  FUN_00403635(pwVar1,piVar2,0x4c);
  pwVar1 = L".SUFFIXES";
  iVar3 = 0;
  do {
    DAT_00424738 = FUN_0040ec65(pwVar1);
    ppwVar4 = *(wchar_t ***)((int)&PTR_PTR_DAT_00401390 + iVar3);
    wcscpy_s(&DAT_00424740,0x400,*ppwVar4);
    FUN_00402eac();
    while( true ) {
      ppwVar4 = ppwVar4 + 1;
      if (*ppwVar4 == (wchar_t *)0x0) break;
      wcscpy_s(&DAT_00424740,0x400,*ppwVar4);
      FUN_00402cc1(extraout_ECX);
    }
    if (iVar5 == 0) {
      FUN_004032b7();
    }
    FUN_004033d1();
    iVar5 = iVar5 + 1;
    iVar3 = iVar5 * 4;
    pwVar1 = (wchar_t *)(&PTR_u__SUFFIXES_00401460)[iVar5];
  } while (pwVar1 != (wchar_t *)0x0);
  return;
}



undefined4 __fastcall FUN_0040c330(int param_1,int param_2)

{
  char cVar1;
  wchar_t *pwVar2;
  int *_Path;
  int *piVar3;
  wchar_t *pwVar4;
  errno_t eVar5;
  int iVar6;
  undefined4 uVar7;
  wchar_t *pwVar8;
  wchar_t *extraout_ECX;
  uint extraout_ECX_00;
  size_t local_c;
  wchar_t *local_8;
  
  local_8 = (wchar_t *)0x0;
  pwVar2 = (wchar_t *)FUN_0040ec65(L"MAKEDIR");
  _Path = (int *)_wgetcwd((wchar_t *)0x0,0);
  FUN_00403635(pwVar2,_Path,0x42);
  _wdupenv_s(&local_8,(size_t *)0x0,L"MAKEFLAGS");
  pwVar2 = local_8;
  if (local_8 != (wchar_t *)0x0) {
    pwVar4 = u_MAKEFLAGS__0041402c;
    do {
      pwVar8 = pwVar4;
      pwVar4 = pwVar8 + 1;
    } while (*pwVar8 != L'\0');
    wcsncpy_s(u_MAKEFLAGS__0041402c + 10,((int)(pwVar8 + -0x20a016) >> 1) - 9,local_8,0xffffffff);
  }
  DAT_0041450d = 1;
  piVar3 = (int *)FUN_0040ec65(u_MAKEFLAGS__0041402c + 10);
  pwVar4 = (wchar_t *)FUN_0040ec65(L"MAKEFLAGS");
  FUN_00403635(pwVar4,piVar3,6);
  for (; (pwVar2 != (wchar_t *)0x0 && (*pwVar2 != L'\0')); pwVar2 = pwVar2 + 1) {
    FUN_0040cb10(*pwVar2,'\x01');
  }
  free(local_8);
  local_8 = (wchar_t *)0x0;
  eVar5 = _wgetenv_s(&local_c,(wchar_t *)0x0,0,L"NTMAKEENV");
  if ((eVar5 == 0) && (local_c != 0)) {
    DAT_00435479 = 1;
  }
  FUN_0040c73b(param_1 - 1,param_2 + 4);
  if (DAT_00424f60 == '\0') {
    FUN_00405c49();
  }
  if ((DAT_0041450c & 2) == 0) {
    FUN_0040c1ce();
    DAT_00424f64 = L"tools.ini";
    cVar1 = FUN_004091a2();
    if (cVar1 != '\0') {
      DAT_00424724 = DAT_00424724 + 1;
      DAT_00424f61 = 1;
      FUN_0040d1d4(extraout_ECX);
      iVar6 = fclose(DAT_00424f5c);
      if (iVar6 == -1) {
        FUN_00405ad3(0,0x424);
      }
    }
  }
  pwVar2 = (wchar_t *)FUN_0040ec65(u_MAKEFLAGS__0041402c + 10);
  eVar5 = _wputenv_s(L"MAKEFLAGS",pwVar2);
  if (eVar5 != 0) {
    FUN_00405ad3(0,0x41f);
  }
  if (DAT_00435470 == 0) {
    FUN_0040ca40();
  }
  FUN_0040c66f();
  FUN_0040c525(extraout_ECX_00);
  DAT_00424730 = 0;
  FUN_0040e847();
  if ((DAT_0041450c & 1) != 0) {
    FUN_0040d6c9();
    FUN_0040d73a();
    FUN_0040d7da();
  }
  if (DAT_00434f7c != 0) {
    free((void *)DAT_00434f7c);
  }
  uVar7 = FUN_00403d49();
  _wchdir((wchar_t *)_Path);
  return uVar7;
}



void __fastcall FUN_0040c525(uint param_1)

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
  
  piVar4 = DAT_00435470;
  LStack_10.s.LowPart = param_1;
  LStack_10.s.HighPart = param_1;
  if (DAT_00435470 != (int *)0x0) {
    do {
      psVar1 = (short *)piVar4[1];
      if ((*psVar1 == 0x2d) && (psVar1[1] == 0)) {
        DAT_00424f64 = FUN_0040ec65(L"STDIN");
        _Size = (wchar_t *)0x0;
        DAT_00424f5c = __acrt_iob_func();
      }
      else {
        DAT_00424f64 = FUN_0040ec65(psVar1);
        DAT_00424f5c = (int)_wfsopen((wchar_t *)DAT_00424f64,L"rt,ccs=unicode",0x20);
        if ((FILE *)DAT_00424f5c == (FILE *)0x0) {
          FUN_00405ad3(0,0x41c);
        }
        LStack_10.s.LowPart = 0;
        LStack_10.s.HighPart = 0;
        _Size = (wchar_t *)_fileno((FILE *)DAT_00424f5c);
        hFile = (HANDLE)_get_osfhandle((int)_Size);
        if ((hFile != (HANDLE)0xffffffff) &&
           (BVar2 = GetFileSizeEx(hFile,&LStack_10), _Size = extraout_ECX, BVar2 != 0)) {
          _Size = (wchar_t *)(LStack_10.s.LowPart + 1);
          if ((LStack_10.s.HighPart + (uint)(0xfffffffe < LStack_10.s.LowPart) + -1 +
               (uint)((wchar_t *)0x1 < _Size) == 0) && (LStack_10.s.LowPart - 1 < 0x7ffffffe)) {
            setvbuf((FILE *)DAT_00424f5c,(char *)0x0,0,(size_t)_Size);
            _Size = extraout_ECX_00;
          }
        }
      }
      DAT_00424724 = 0;
      DAT_00424f61 = 0;
      FUN_0040d1d4(_Size);
      iVar3 = __acrt_iob_func(0);
      if ((DAT_00424f5c != iVar3) && (iVar3 = fclose((FILE *)DAT_00424f5c), iVar3 == -1)) {
        FUN_00405ad3(0,0x424);
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)0x0);
  }
  FUN_004052c9(DAT_00435470);
  return;
}



void FUN_0040c66f(void)

{
  wchar_t wVar1;
  undefined4 *puVar2;
  wchar_t *pwVar3;
  int iVar4;
  wchar_t *_Str;
  wchar_t *pwVar5;
  int *_Memory;
  wchar_t **ppwVar6;
  
  puVar2 = (undefined4 *)__p__wenviron();
  ppwVar6 = (wchar_t **)*puVar2;
  pwVar3 = *ppwVar6;
  while (pwVar3 != (wchar_t *)0x0) {
    pwVar3 = wcschr(pwVar3,L'=');
    if ((pwVar3 != (wchar_t *)0x0) && (iVar4 = _wcsnicmp(*ppwVar6,L"MAKEFLAGS",8), iVar4 != 0)) {
      *pwVar3 = L'\0';
      if (**ppwVar6 != L'\0') {
        _Str = (wchar_t *)FUN_0040ec65(*ppwVar6);
        pwVar5 = _Str;
        do {
          wVar1 = *pwVar5;
          pwVar5 = pwVar5 + 1;
        } while (wVar1 != L'\0');
        _wcsupr_s(_Str,((int)pwVar5 - (int)(_Str + 1) >> 1) + 1);
        _Memory = (int *)FUN_0040ec65(pwVar3 + 1);
        *pwVar3 = L'=';
        DAT_0041450d = 0;
        iVar4 = FUN_00403635(_Str,_Memory,4);
        if ((char)iVar4 == '\0') {
          free(_Str);
          free(_Memory);
        }
      }
    }
    ppwVar6 = ppwVar6 + 1;
    pwVar3 = *ppwVar6;
  }
  return;
}



void __fastcall FUN_0040c73b(uint param_1,int param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  size_t sVar5;
  int *piVar6;
  wchar_t *pwVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  FILE *pFVar11;
  void *pvVar12;
  wchar_t wVar13;
  uint uVar14;
  FILE *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  
  bVar1 = false;
  uVar14 = 0;
  if (param_1 != 0) {
    local_14 = __acrt_iob_func_exref;
    local_10 = _wfopen_s_exref;
    local_c = fclose_exref;
    do {
      pwVar7 = *(wchar_t **)(param_2 + uVar14 * 4);
      wVar13 = *pwVar7;
      if (wVar13 == L'@') {
        FUN_0040593b(pwVar7 + 1);
      }
      else if ((wVar13 == L'-') || (wVar13 == L'/')) {
        pwVar7 = pwVar7 + 1;
        iVar10 = _wcsicmp(pwVar7,L"help");
        if (iVar10 == 0) goto LAB_0040ca2b;
        wVar13 = *pwVar7;
        while (wVar13 != L'\0') {
          iVar10 = _wcsicmp(pwVar7,L"nologo");
          if (iVar10 == 0) {
            FUN_0040cb10(pwVar7[2],'\x01');
            break;
          }
          wVar13 = *pwVar7;
          if (wVar13 == L'?') {
            bVar1 = true;
            break;
          }
          if ((wVar13 == L'f') || (wVar13 == L'F')) {
            pwVar7 = pwVar7 + 1;
            if ((*pwVar7 == L'\0') &&
               ((uVar14 = uVar14 + 1, param_1 <= uVar14 ||
                (pwVar7 = *(wchar_t **)(param_2 + uVar14 * 4), *pwVar7 == L'\0')))) {
              FUN_00405ad3(0,0x425);
            }
            puVar8 = FUN_0040ec13();
            pvVar12 = FUN_0040ec65(pwVar7);
            puVar8[1] = pvVar12;
            FUN_0040ed6a(&DAT_00435470,puVar8);
            break;
          }
          if ((wVar13 == L'x') || (wVar13 == L'X')) {
            pwVar7 = pwVar7 + 1;
            wVar13 = *pwVar7;
            if (wVar13 == L'\0') {
              uVar14 = uVar14 + 1;
              if (uVar14 < param_1) {
                pwVar7 = *(wchar_t **)(param_2 + uVar14 * 4);
                wVar13 = *pwVar7;
                if (wVar13 != L'\0') goto LAB_0040c952;
              }
              FUN_00405ad3(0,0x426);
              wVar13 = *pwVar7;
            }
LAB_0040c952:
            if ((wVar13 == L'-') && (pwVar7[1] == L'\0')) {
              pFVar11 = (FILE *)(*local_14)(1);
              FUN_0040d0a3(pFVar11);
            }
            else {
              iVar10 = (*local_10)(&local_18,pwVar7,&DAT_00402478);
              if (iVar10 != 0) {
                FUN_00405ad3(0,0x418);
              }
              FUN_0040d0a3(local_18);
              (*local_c)(local_18);
            }
            break;
          }
          FUN_0040cb10(wVar13,'\x01');
          pwVar7 = pwVar7 + 1;
          wVar13 = *pwVar7;
        }
      }
      else {
        pwVar2 = wcschr(pwVar7,L'=');
        if (pwVar2 == (wchar_t *)0x0) {
          FUN_0040ce39(pwVar7);
          if (*pwVar7 != L'\0') {
            puVar8 = FUN_0040ec13();
            pwVar2 = wcschr(pwVar7,L' ');
            if (pwVar2 == (wchar_t *)0x0) {
              puVar9 = (undefined2 *)FUN_0040ec65(pwVar7);
            }
            else {
              puVar9 = FUN_0040eca9(pwVar7);
            }
            puVar8[1] = puVar9;
            FUN_0040ed6a(&DAT_00424710,puVar8);
          }
        }
        else {
          if (pwVar2 == pwVar7) {
            FUN_00405ad3(0,0x427);
          }
          *pwVar2 = L'\0';
          pwVar3 = pwVar2;
          do {
            do {
              pwVar4 = pwVar3;
              pwVar3 = pwVar4 + -1;
            } while (*pwVar3 == L' ');
          } while (*pwVar3 == L'\t');
          DAT_0041450d = 1;
          *pwVar4 = L'\0';
          sVar5 = wcsspn(pwVar2 + 1,L" \t");
          piVar6 = (int *)FUN_0040ec65(pwVar2 + 1 + sVar5);
          sVar5 = wcsspn(pwVar7,L" \t");
          pwVar7 = (wchar_t *)FUN_0040ec65(pwVar7 + sVar5);
          FUN_00403635(pwVar7,piVar6,2);
        }
        *(undefined4 *)(param_2 + uVar14 * 4) = 0;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < param_1);
    if (bVar1) {
LAB_0040ca2b:
      FUN_00405c75();
                    // WARNING: Subroutine does not return
      exit(0);
    }
  }
  return;
}



void FUN_0040ca40(void)

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
  
  local_c = DAT_00414014 ^ (uint)&_Stack_468;
  iVar1 = _waccess(L"makefile",4);
  if (iVar1 == 0) {
    puVar2 = FUN_0040ec13();
    pvVar3 = FUN_0040ec65(L"makefile");
    puVar2[1] = pvVar3;
    DAT_00435470 = puVar2;
  }
  else if (DAT_00424710 == (undefined4 *)0x0) {
    if ((DAT_0041450c & 1) == 0) {
      FUN_00405ad3(0,0x428);
    }
  }
  else {
    _Filename = (wchar_t *)DAT_00424710[1];
    iVar1 = _waccess(_Filename,4);
    if (iVar1 == 0) {
      pwVar4 = wcsrchr(_Filename,L'.');
      if (pwVar4 != (wchar_t *)0x0) {
        piVar5 = FUN_0040e3e0(awStack_218,0x101,_Filename,pwVar4,&_Stack_468);
        if (piVar5 != (int *)0x0) goto LAB_0040cafc;
      }
      DAT_00435470 = DAT_00424710;
      DAT_00424710 = (undefined4 *)*DAT_00424710;
    }
  }
LAB_0040cafc:
  FUN_00412542(local_c ^ (uint)&_Stack_468);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_0040cb10(wint_t param_1,char param_2)

{
  wchar_t *pwVar1;
  byte bVar2;
  int iVar3;
  wchar_t _Ch;
  wchar_t *pwVar4;
  errno_t eVar5;
  byte bVar6;
  byte *pbVar7;
  
  pbVar7 = &DAT_0041450e;
  bVar2 = 0;
  _Ch = towupper(param_1);
  bVar6 = DAT_0041450e;
  if ((ushort)_Ch < 0x4d) {
    if (_Ch == L'L') {
      bVar2 = 0x80;
    }
    else {
      if (0x44 < (ushort)_Ch) {
        if (_Ch != L'E') {
          if (_Ch == L'G') {
            DAT_00424f63 = 1;
            return;
          }
          if (_Ch == L'I') {
            bVar2 = 2;
            goto LAB_0040cc81;
          }
          if (_Ch == L'K') {
            DAT_00424737 = 1;
            return;
          }
LAB_0040cc48:
          FUN_00405ad3(0,0x429);
          bVar6 = DAT_0041450e;
          goto LAB_0040cc81;
        }
        bVar2 = 4;
        goto LAB_0040cb76;
      }
      if (_Ch == L'D') {
        bVar2 = 1;
        goto LAB_0040cc81;
      }
      if (_Ch == L' ') {
        return;
      }
      if (_Ch == L'A') {
        bVar2 = 0x10;
        goto LAB_0040cc81;
      }
      if (_Ch == L'B') {
        DAT_00424736 = 1;
        return;
      }
      if (_Ch != L'C') goto LAB_0040cc48;
      bVar2 = 0x20;
    }
    DAT_00424f60 = 1;
  }
  else if ((ushort)_Ch < 0x53) {
    if (_Ch == L'R') {
      bVar2 = 2;
    }
    else {
      if (_Ch == L'N') {
        bVar2 = 4;
        goto LAB_0040cc81;
      }
      if (_Ch == L'O') {
        DAT_00424735 = 1;
        return;
      }
      if (_Ch == L'P') {
        bVar2 = 1;
      }
      else {
        if (_Ch != L'Q') goto LAB_0040cc48;
        bVar2 = 8;
      }
    }
  }
  else {
    if (_Ch == L'S') {
      bVar2 = 8;
      goto LAB_0040cc81;
    }
    if (_Ch == L'T') {
      bVar2 = 0x10;
    }
    else {
      if (_Ch == L'U') {
        bVar2 = 0x40;
        goto LAB_0040cc81;
      }
      if (_Ch != L'Y') goto LAB_0040cc48;
      bVar2 = 0x40;
    }
  }
LAB_0040cb76:
  pbVar7 = &DAT_0041450c;
  bVar6 = DAT_0041450c;
LAB_0040cc81:
  if (_DAT_004353ac == 0) {
    _DAT_004353ac = FUN_0040b4d9((ushort *)L"MAKEFLAGS");
    DAT_004353a8 = *(int *)(_DAT_004353ac + 8);
  }
  iVar3 = DAT_004353a8;
  if (param_2 == '\0') {
    if (pbVar7 != &DAT_0041450e) {
      return;
    }
    DAT_0041450e = ~bVar2 & bVar6;
    pwVar4 = wcschr(*(wchar_t **)(DAT_004353a8 + 4),_Ch);
    if (pwVar4 != (wchar_t *)0x0) {
      do {
        pwVar1 = pwVar4 + 1;
        *pwVar4 = *pwVar1;
        pwVar4 = pwVar4 + 1;
      } while (*pwVar1 != L'\0');
    }
  }
  else {
    *pbVar7 = bVar6 | bVar2;
    if (_Ch == L'Q') {
      *pbVar7 = bVar6 | bVar2 | 0x20;
    }
    pwVar4 = wcschr(*(wchar_t **)(iVar3 + 4),_Ch);
    if ((pwVar4 == (wchar_t *)0x0) &&
       (pwVar4 = wcschr(*(wchar_t **)(DAT_004353a8 + 4),L' '), pwVar4 != (wchar_t *)0x0)) {
      *pwVar4 = _Ch;
    }
  }
  pwVar4 = (wchar_t *)FUN_0040ec65(u_MAKEFLAGS__0041402c + 10);
  eVar5 = _wputenv_s(L"MAKEFLAGS",pwVar4);
  if (eVar5 != 0) {
    FUN_00405ad3(DAT_00424724,0x41f);
  }
  return;
}



void FUN_0040cdfb(void)

{
  undefined4 *puVar1;
  
  _fcloseall();
  for (puVar1 = DAT_00435474; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    _wunlink((wchar_t *)puVar1[1]);
    if ((DAT_0041450e & 4) != 0) {
      FUN_0040d149(L"\tdel %s\n",(char)puVar1[1]);
      FUN_0040d12b();
    }
  }
  return;
}



void __fastcall FUN_0040ce39(short *param_1)

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
  if (*param_1 != 0x22) goto LAB_0040ce78;
  if (*psVar3 != 0x22) goto LAB_0040ce78;
  bVar2 = true;
  do {
    psVar3 = psVar3 + -1;
LAB_0040ce78:
  } while ((param_1 < psVar3) && ((*psVar3 == 0x20 || (*psVar3 == 0x2e))));
  if (bVar2) {
    psVar3 = psVar3 + 1;
    *psVar3 = 0x22;
  }
  psVar3[1] = 0;
  return;
}



void __fastcall FUN_0040ce8f(uint param_1)

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
  
  local_8 = DAT_00414014 ^ (uint)&stack0xfffffffc;
  if (DAT_00438ee0 == '\0') {
    ppwVar1 = (wchar_t **)__p__wpgmptr();
    _wsplitpath_s(*ppwVar1,local_10,3,local_414,0x100,local_214,0x100,(wchar_t *)0x0,0);
    _wmakepath_s(local_61c,0x104,local_10,local_414,(wchar_t *)0x0,(wchar_t *)0x0);
    eVar2 = wcsncat_s(local_214,0x100,L"UI.DLL",0xffffffff);
    if ((eVar2 != 0) || (iVar3 = FUN_0040b5f7(local_61c,local_214), iVar3 < 0)) {
      DAT_00438ee4 = (HMODULE)0x0;
    }
    DAT_00438ee0 = '\x01';
  }
  hModule = DAT_00438ee4;
  hResInfo = FindResourceExW(DAT_00438ee4,(LPCWSTR)0x6,(LPCWSTR)((param_1 >> 4) + 1 & 0xffff),
                             DAT_00438ee8);
  if ((hResInfo != (HRSRC)0x0) && (pvVar4 = LoadResource(hModule,hResInfo), pvVar4 != (HGLOBAL)0x0))
  {
    for (uVar5 = param_1 & 0xf; uVar5 != 0; uVar5 = uVar5 - 1) {
    }
  }
  FUN_00412542(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



undefined * FUN_0040cfb0(void)

{
  return &DAT_004386b8;
}



void __cdecl FUN_0040cfb6(undefined4 param_1,undefined4 param_2,undefined param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  puVar4 = &param_3;
  uVar3 = 0;
  uVar2 = 0xffffffff;
  puVar1 = (uint *)FUN_0040cfb0();
  __stdio_common_vswscanf(*puVar1 | 1,puVar1[1],param_1,uVar2,param_2,uVar3,puVar4);
  return;
}



bool __fastcall FUN_0040cfe0(FILE *param_1)

{
  int _FileHandle;
  HANDLE hFile;
  DWORD DVar1;
  BOOL BVar2;
  bool bVar3;
  FILE *local_8;
  
  local_8 = param_1;
  _FileHandle = _fileno(param_1);
  hFile = (HANDLE)_get_osfhandle(_FileHandle);
  DVar1 = GetFileType(hFile);
  if ((DVar1 & 0xffff7fff) == 2) {
    BVar2 = GetConsoleMode(hFile,(LPDWORD)&local_8);
    bVar3 = BVar2 != 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



void FUN_0040d01f(void)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)__acrt_iob_func(1);
  DAT_0043547d = FUN_0040cfe0(pFVar1);
  pFVar1 = (FILE *)__acrt_iob_func(2);
  DAT_0043547c = FUN_0040cfe0(pFVar1);
  return;
}



int FUN_0040d04a(void)

{
  FILE *_File;
  int iVar1;
  
  if (DAT_0043547c != '\0') {
    return 0;
  }
  _File = (FILE *)__acrt_iob_func(2);
  iVar1 = fflush(_File);
  return iVar1;
}



void FUN_0040d068(undefined4 param_1,undefined param_2)

{
  FUN_0040d0e1(param_1,&param_2);
  return;
}



wint_t FUN_0040d077(void)

{
  wint_t wVar1;
  FILE *_File;
  
  if (DAT_0043547c == '\0') {
    _File = (FILE *)__acrt_iob_func(2);
    wVar1 = fputwc(L'\n',_File);
  }
  else {
    wVar1 = _putwch(L'\n');
  }
  return wVar1;
}



void __fastcall FUN_0040d0a3(FILE *param_1)

{
  FILE *pFVar1;
  int _FileHandleDst;
  int _FileHandleSrc;
  
  pFVar1 = (FILE *)__acrt_iob_func(2);
  _FileHandleDst = _fileno(pFVar1);
  _FileHandleSrc = _fileno(param_1);
  _dup2(_FileHandleSrc,_FileHandleDst);
  pFVar1 = (FILE *)__acrt_iob_func(2);
  DAT_0043547c = FUN_0040cfe0(pFVar1);
  return;
}



void __fastcall FUN_0040d0e1(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_0040d1ce();
  if (DAT_0043547c == '\0') {
    uVar2 = __acrt_iob_func(2);
    __stdio_common_vfwprintf(*puVar1,puVar1[1],uVar2,param_1,0,param_2);
  }
  else {
    __conio_common_vcwprintf(*puVar1,puVar1[1],param_1,0,param_2);
  }
  return;
}



int FUN_0040d12b(void)

{
  FILE *_File;
  int iVar1;
  
  if (DAT_0043547d != '\0') {
    return 0;
  }
  _File = (FILE *)__acrt_iob_func(1);
  iVar1 = fflush(_File);
  return iVar1;
}



void FUN_0040d149(undefined4 param_1,undefined param_2)

{
  FUN_0040d184(param_1,&param_2);
  return;
}



wint_t FUN_0040d158(void)

{
  wint_t wVar1;
  FILE *_File;
  
  if (DAT_0043547d == '\0') {
    _File = (FILE *)__acrt_iob_func(1);
    wVar1 = fputwc(L'\n',_File);
  }
  else {
    wVar1 = _putwch(L'\n');
  }
  return wVar1;
}



void __fastcall FUN_0040d184(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_0040d1ce();
  if (DAT_0043547d == '\0') {
    uVar2 = __acrt_iob_func(1);
    __stdio_common_vfwprintf(*puVar1,puVar1[1],uVar2,param_1,0,param_2);
  }
  else {
    __conio_common_vcwprintf(*puVar1,puVar1[1],param_1,0,param_2);
  }
  return;
}



undefined * FUN_0040d1ce(void)

{
  return &DAT_004386c8;
}



void __fastcall FUN_0040d1d4(wchar_t *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined4 extraout_ECX;
  wchar_t *pwVar8;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  wchar_t *extraout_ECX_02;
  undefined4 extraout_ECX_03;
  wchar_t *extraout_ECX_04;
  uint uVar9;
  char local_5;
  
  DAT_00424f62 = 1;
  (&DAT_00435391)[DAT_00414028] = 0x17;
  uVar6 = DAT_00414028 + 2;
  if (0xf < uVar6) {
    DAT_00414028 = uVar6;
    FUN_00412680();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar1 = &DAT_00435392 + DAT_00414028;
  DAT_00414028 = uVar6;
  *puVar1 = 0;
  DAT_00424730 = DAT_00424724;
  cVar4 = FUN_0040a452(param_1,'\0');
  pwVar8 = (wchar_t *)CONCAT31((int3)((uint)extraout_ECX >> 8),cVar4);
  bVar5 = (&DAT_00435390)[DAT_00414028];
  uVar6 = (uint)bVar5;
  do {
    if (bVar5 == 0x17) {
      DAT_00414028 = DAT_00414028 - 1;
      return;
    }
    if ((uVar6 & 0x40) == 0) {
      local_5 = (char)(uVar6 >> 8);
      if ((uVar6 & 0x10) == 0) {
        uVar9 = uVar6 & 0xff;
        bVar5 = (&DAT_00401540)[uVar9 * 8 + ((uint)pwVar8 & 0xf)];
        uVar7 = (uint)bVar5;
        if ((bVar5 & 0x20) != 0) {
          FUN_00405ad3(DAT_00424730,uVar7 + 1000);
          pwVar8 = extraout_ECX_04;
        }
        DAT_00414028 = DAT_00414028 - 1;
        if ((char)bVar5 < '\0') {
          if (local_5 == '\0') {
            bVar5 = FUN_0040a452(pwVar8,(char)uVar6);
            uVar6 = (uint)bVar5 << 8;
          }
          uVar7 = (uVar7 & 0xf) + (uint)(byte)(&DAT_00401520)[uVar9 * 8 + (uVar6 >> 8 & 0xf)];
        }
        pbVar2 = (&PTR_DAT_004014d0)[uVar7];
        uVar7 = (uint)*pbVar2;
        uVar9 = DAT_00414028;
        if (uVar7 != 0) {
          do {
            DAT_00414028 = uVar9 + 1;
            (&DAT_00435391)[uVar9] = pbVar2[uVar7];
            uVar7 = uVar7 - 1;
            uVar9 = DAT_00414028;
          } while (uVar7 != 0);
          uVar7 = 0;
        }
        goto LAB_0040d394;
      }
      if ((char)uVar6 != (char)pwVar8) {
        FUN_00405ad3(DAT_00424730,0x409);
        uVar7 = extraout_ECX_01;
        goto LAB_0040d394;
      }
      bVar5 = (&DAT_0043538f)[DAT_00414028];
      pwVar8 = (wchar_t *)CONCAT31((int3)((uint)pwVar8 >> 8),bVar5);
      uVar7 = DAT_00414028 - 1;
      if ((bVar5 & 0x40) != 0) {
        DAT_00414028 = DAT_00414028 - 2;
        (*(code *)(&PTR_FUN_00401580)[bVar5 & 0xf])();
        pwVar8 = extraout_ECX_02;
        uVar7 = DAT_00414028;
      }
      DAT_00414028 = uVar7;
      DAT_00424730 = DAT_00424724;
      if (local_5 == '\0') {
        local_5 = FUN_0040a452(pwVar8,(&DAT_00435390)[DAT_00414028]);
        pwVar8 = (wchar_t *)CONCAT31((int3)((uint)extraout_ECX_03 >> 8),local_5);
        DAT_00424730 = DAT_00424724;
      }
      else {
        if (DAT_00424740 == 10) {
          DAT_00424730 = DAT_00424724 + -1;
        }
        pwVar8 = (wchar_t *)CONCAT31((int3)((uint)pwVar8 >> 8),local_5);
        uVar6 = 0;
      }
    }
    else {
      pbVar2 = &DAT_00435390 + DAT_00414028;
      DAT_00414028 = DAT_00414028 - 1;
      (*(code *)(&PTR_FUN_00401580)[*pbVar2 & 0xf])();
      uVar7 = extraout_ECX_00;
LAB_0040d394:
      pwVar8 = (wchar_t *)CONCAT31((int3)(uVar7 >> 8),cVar4);
      local_5 = cVar4;
    }
    bVar5 = (&DAT_00435390)[DAT_00414028];
    uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar5);
    cVar4 = local_5;
  } while( true );
}



uint __fastcall FUN_0040d3b8(int param_1,short *param_2)

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
    FUN_0040d149(L"\n\t\t\t",unaff_DI);
    uVar3 = 0;
  }
  return uVar3;
}



void FUN_0040d3e7(uint param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  _FILETIME local_60;
  _SYSTEMTIME local_58;
  WCHAR local_48 [20];
  WCHAR local_20 [12];
  uint local_8;
  
  local_8 = DAT_00414014 ^ (uint)&stack0xfffffffc;
  if ((param_1 | param_2) == 0) {
    FUN_00405bad(6);
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
            FUN_00405bad(4);
          }
        }
      }
    }
  }
  FUN_00412542(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __fastcall FUN_0040d4a1(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  short *psVar4;
  uint uVar5;
  void *local_280 [2];
  int *local_278;
  int *local_274;
  undefined4 *local_270;
  wchar_t *local_26c;
  HANDLE local_268;
  wchar_t *local_264;
  uint local_260;
  _WIN32_FIND_DATAW local_25c;
  uint local_8;
  
  local_8 = DAT_00414014 ^ (uint)&stack0xfffffffc;
  local_274 = param_2;
  local_270 = param_1;
  FUN_00405bad(0xc);
  uVar5 = 0;
  local_260 = 0;
  while (param_1 != (undefined4 *)0x0) {
    pwVar2 = wcschr((wchar_t *)param_1[1],L'$');
    if (pwVar2 == (wchar_t *)0x0) {
      pwVar2 = wcspbrk((wchar_t *)(int *)param_1[1],L"*?");
      if (pwVar2 == (wchar_t *)0x0) {
        FUN_0040d149(&DAT_004024fc,(char)param_1[1]);
        uVar5 = FUN_0040d3b8(uVar5,(short *)param_1[1]);
        uVar1 = uVar5;
      }
      else {
        pwVar2 = (wchar_t *)FUN_004081f8((wchar_t *)param_1[1],&local_25c,&local_268);
        uVar1 = local_260;
        while (pwVar2 != (wchar_t *)0x0) {
          psVar4 = (short *)FUN_00411529((wchar_t *)param_1[1],pwVar2);
          FUN_0040d149(&DAT_004024fc,(char)psVar4);
          uVar5 = FUN_0040d3b8(uVar5,psVar4);
          free(psVar4);
          pwVar2 = FUN_00408383(&local_25c,local_268);
          uVar1 = uVar5;
        }
      }
    }
    else {
      local_26c = (wchar_t *)0x0;
      local_264 = (wchar_t *)0x0;
      local_278 = (int *)param_1[1];
      FUN_0040f95a(local_280,&local_278,'\x01',&local_274,'\0',&local_264);
      pwVar2 = wcstok_s(local_264,L" \t",&local_26c);
      uVar5 = local_260;
      while (pwVar2 != (wchar_t *)0x0) {
        pwVar3 = wcspbrk(pwVar2,L"*?");
        if (pwVar3 == (wchar_t *)0x0) {
          FUN_0040d149(&DAT_004024fc,(char)pwVar2);
          uVar5 = FUN_0040d3b8(uVar5,pwVar2);
        }
        else {
          pwVar3 = (wchar_t *)FUN_004081f8(pwVar2,&local_25c,&local_268);
          while (pwVar3 != (wchar_t *)0x0) {
            psVar4 = (short *)FUN_00411529(pwVar2,pwVar3);
            FUN_0040d149(&DAT_004024fc,(char)psVar4);
            uVar5 = FUN_0040d3b8(uVar5,psVar4);
            free(psVar4);
            pwVar3 = FUN_00408383(&local_25c,local_268);
          }
        }
        pwVar2 = wcstok_s((wchar_t *)0x0,L" \t",&local_26c);
        param_1 = local_270;
      }
      local_260 = uVar5;
      free(local_264);
      uVar5 = local_260;
      uVar1 = local_260;
    }
    local_260 = uVar1;
    param_1 = (undefined4 *)*param_1;
    local_270 = param_1;
  }
  FUN_00412542(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void FUN_0040d6c9(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_00405bad(8);
  puVar3 = &DAT_00434f90;
  do {
    for (puVar2 = (undefined4 *)*puVar3; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2
        ) {
      if ((puVar2[2] != 0) && (*(int *)(puVar2[2] + 4) != 0)) {
        FUN_00405bad(0xe);
        for (puVar1 = *(undefined4 **)puVar2[2]; puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)*puVar1) {
          if (puVar1[1] != 0) {
            FUN_0040d149(L"\t\t%s\n",(char)puVar1[1]);
          }
        }
      }
    }
    puVar3 = puVar3 + 1;
  } while ((int)puVar3 < 0x435390);
  FUN_0040d158();
  FUN_0040d12b();
  return;
}



void FUN_0040d73a(void)

{
  wchar_t *pwVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  FUN_00405bad(7);
  for (puVar2 = DAT_00424714; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    pwVar1 = L"%s::";
    if (*(char *)(puVar2 + 5) == '\0') {
      pwVar1 = L"%s:";
    }
    FUN_0040d149(pwVar1,(char)puVar2[2]);
    FUN_00405bad(10);
    piVar3 = (int *)puVar2[3];
    if (piVar3 != (int *)0x0) {
      iVar4 = piVar3[1];
      pwVar1 = L"%s\n";
      while( true ) {
        FUN_0040d149(pwVar1,(char)iVar4);
        piVar3 = (int *)*piVar3;
        if (piVar3 == (int *)0x0) break;
        pwVar1 = L"\t\t\t%s\n";
      }
    }
    FUN_0040d158();
  }
  FUN_0040d149(L"%s: ",0x68);
  for (puVar2 = DAT_00424720; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    FUN_0040d149(&DAT_004024fc,(char)puVar2[1]);
  }
  FUN_0040d158();
  FUN_0040d12b();
  return;
}



void FUN_0040d7da(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint unaff_EBP;
  wchar_t *pwVar3;
  int *piVar4;
  int iVar5;
  uint local_c;
  undefined4 *puStack_8;
  
  FUN_00405bad(9);
  local_c = 0;
  do {
    puVar1 = *(undefined4 **)((int)&DAT_00424510 + local_c);
    while (puVar1 != (undefined4 *)0x0) {
      FUN_0040d149(L"%s:%c",(char)puVar1[1]);
      DAT_00424f48 = puVar1[1];
      puVar2 = (undefined4 *)puVar1[6];
      DAT_00424f54 = DAT_00424f48;
      DAT_00424f58 = DAT_00424f48;
      for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
        puVar1 = (undefined4 *)puVar2[1];
        FUN_00405bad(0xb);
        pwVar3 = L"dinsb";
        local_c = 1;
        do {
          if ((*(byte *)(puVar1 + 4) & (byte)local_c) != 0) {
            FUN_0040d149(L"-%c ",(char)*pwVar3);
            local_c = unaff_EBP;
          }
          local_c = local_c * 2;
          pwVar3 = pwVar3 + 1;
        } while (local_c < 0x10);
        FUN_0040d4a1((undefined4 *)*puVar1,(int *)puVar1[1]);
        FUN_00405bad(10);
        piVar4 = (int *)puVar1[2];
        if (piVar4 != (int *)0x0) {
          if (piVar4[1] == 0) goto LAB_0040d8c8;
          iVar5 = piVar4[1];
          pwVar3 = L"%s\n";
          do {
            FUN_0040d149(pwVar3,(char)iVar5);
LAB_0040d8c8:
            do {
              piVar4 = (int *)*piVar4;
              if (piVar4 == (int *)0x0) goto LAB_0040d8d5;
            } while (piVar4[1] == 0);
            iVar5 = piVar4[1];
            pwVar3 = L"\t\t\t%s\n";
          } while( true );
        }
        FUN_0040d158();
LAB_0040d8d5:
        puVar1 = puStack_8;
      }
      puVar1 = (undefined4 *)*puVar1;
      FUN_0040d158();
    }
    local_c = local_c + 4;
    if (0x1ff < local_c) {
      FUN_0040d158();
      FUN_0040d12b();
      DAT_00424f48 = 0;
      DAT_00424f54 = 0;
      DAT_00424f58 = 0;
      return;
    }
  } while( true );
}



uint FUN_0040d92f(byte param_1)

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
  ushort *puVar10;
  uint uVar11;
  bool bVar12;
  
  pcVar7 = DAT_00435690;
  cVar5 = *DAT_00435690;
  uVar8 = CONCAT31((int3)((uint)in_EAX >> 8),cVar5);
  pcVar1 = DAT_00435690 + -8;
  if (cVar5 != '\x16') {
    if ((cVar5 != '\x17') || (*pcVar1 != '\x17')) goto LAB_0040db25;
    puVar10 = *(ushort **)(DAT_00435690 + 4);
    puVar9 = *(ushort **)(DAT_00435690 + -4);
    do {
      uVar6 = *puVar9;
      bVar12 = uVar6 < *puVar10;
      if (uVar6 != *puVar10) {
LAB_0040dac7:
        uVar11 = -(uint)bVar12 | 1;
        goto LAB_0040dacc;
      }
      if (uVar6 == 0) break;
      uVar6 = puVar9[1];
      bVar12 = uVar6 < puVar10[1];
      if (uVar6 != puVar10[1]) goto LAB_0040dac7;
      puVar9 = puVar9 + 2;
      puVar10 = puVar10 + 2;
    } while (uVar6 != 0);
    uVar11 = 0;
LAB_0040dacc:
    uVar8 = (uint)param_1;
    if (uVar8 == 6) {
      uVar8 = (uint)(uVar11 != 0);
    }
    else if (uVar8 == 7) {
      uVar8 = (uint)(uVar11 == 0);
    }
    else if (uVar8 == 8) {
      uVar8 = (uint)(0 < (int)uVar11);
    }
    else {
      if (uVar8 != 9) {
        if (uVar8 != 10) {
          uVar8 = uVar8 - 0xb;
          if (uVar8 != 0) goto LAB_0040db25;
          uVar8 = (uint)((int)uVar11 < 1);
          goto LAB_0040db1b;
        }
        uVar11 = ~uVar11;
      }
      uVar8 = uVar11 >> 0x1f;
    }
LAB_0040db1b:
    puVar4 = (uint *)(DAT_00435690 + -4);
    DAT_00435690 = pcVar1;
    *puVar4 = uVar8;
    *pcVar1 = '\x16';
    goto code_r0x0040db21;
  }
  if (*pcVar1 != '\x16') {
LAB_0040db25:
    DAT_00435690 = pcVar1;
    return uVar8 & 0xffffff00;
  }
  uVar8 = param_1 - 1;
  switch(uVar8) {
  case 0:
    if (*(int *)(DAT_00435690 + -4) == 0) {
code_r0x0040d972:
      uVar8 = 0;
      if (*(int *)(DAT_00435690 + 4) == 0) goto code_r0x0040da83;
    }
    uVar8 = 1;
    goto code_r0x0040da83;
  case 1:
    uVar8 = 0;
    if (*(int *)(DAT_00435690 + -4) != 0) goto code_r0x0040d972;
    goto code_r0x0040da83;
  case 2:
    uVar8 = *(uint *)(DAT_00435690 + 4);
    puVar4 = (uint *)(DAT_00435690 + -4);
    DAT_00435690 = pcVar1;
    *puVar4 = *puVar4 | uVar8;
    break;
  case 3:
    uVar8 = *(uint *)(DAT_00435690 + 4);
    puVar4 = (uint *)(DAT_00435690 + -4);
    DAT_00435690 = pcVar1;
    *puVar4 = *puVar4 ^ uVar8;
    break;
  case 4:
    uVar8 = *(uint *)(DAT_00435690 + 4);
    puVar4 = (uint *)(DAT_00435690 + -4);
    DAT_00435690 = pcVar1;
    *puVar4 = *puVar4 & uVar8;
    break;
  case 5:
    uVar8 = *(uint *)(DAT_00435690 + 4);
    uVar11 = (uint)(uVar8 != *(uint *)(DAT_00435690 + -4));
    goto code_r0x0040d9bc;
  case 6:
    uVar8 = (uint)(*(int *)(DAT_00435690 + 4) == *(int *)(DAT_00435690 + -4));
    goto code_r0x0040da83;
  case 7:
    uVar8 = *(uint *)(DAT_00435690 + -4);
    uVar11 = (uint)(*(int *)(DAT_00435690 + 4) < (int)uVar8);
    goto code_r0x0040d9bc;
  case 8:
    uVar8 = *(uint *)(DAT_00435690 + -4);
    uVar11 = (uint)((int)uVar8 < *(int *)(DAT_00435690 + 4));
    goto code_r0x0040d9bc;
  case 9:
    uVar8 = *(uint *)(DAT_00435690 + -4);
    uVar11 = (uint)(*(int *)(DAT_00435690 + 4) <= (int)uVar8);
    goto code_r0x0040d9bc;
  case 10:
    uVar8 = *(uint *)(DAT_00435690 + -4);
    uVar11 = (uint)((int)uVar8 <= *(int *)(DAT_00435690 + 4));
code_r0x0040d9bc:
    puVar4 = (uint *)(DAT_00435690 + -4);
    DAT_00435690 = pcVar1;
    *puVar4 = uVar11;
    break;
  case 0xb:
    puVar2 = (undefined4 *)(DAT_00435690 + 4);
    piVar3 = (int *)(DAT_00435690 + -4);
    DAT_00435690 = pcVar1;
    *piVar3 = *piVar3 >> ((byte)*puVar2 & 0x1f);
    break;
  case 0xc:
    puVar2 = (undefined4 *)(DAT_00435690 + 4);
    piVar3 = (int *)(DAT_00435690 + -4);
    DAT_00435690 = pcVar1;
    *piVar3 = *piVar3 << ((byte)*puVar2 & 0x1f);
    break;
  case 0xd:
    uVar8 = *(uint *)(DAT_00435690 + 4);
    piVar3 = (int *)(DAT_00435690 + -4);
    DAT_00435690 = pcVar1;
    *piVar3 = *piVar3 - uVar8;
    break;
  case 0xe:
    uVar8 = *(uint *)(DAT_00435690 + 4);
    piVar3 = (int *)(DAT_00435690 + -4);
    DAT_00435690 = pcVar1;
    *piVar3 = *piVar3 + uVar8;
    break;
  case 0xf:
    piVar3 = (int *)(DAT_00435690 + 4);
    DAT_00435690 = pcVar1;
    if (*piVar3 == 0) {
      FUN_00405ad3(DAT_00424724,0x437);
    }
    uVar8 = *(int *)(pcVar7 + -4) / *(int *)(pcVar7 + 4);
    *(int *)(pcVar7 + -4) = *(int *)(pcVar7 + -4) % *(int *)(pcVar7 + 4);
    break;
  case 0x10:
    piVar3 = (int *)(DAT_00435690 + 4);
    DAT_00435690 = pcVar1;
    if (*piVar3 == 0) {
      FUN_00405ad3(DAT_00424724,0x437);
    }
    uVar8 = *(int *)(pcVar7 + -4) / *(int *)(pcVar7 + 4);
    pcVar1 = DAT_00435690;
    goto code_r0x0040da83;
  case 0x11:
    uVar8 = *(int *)(DAT_00435690 + -4) * *(int *)(DAT_00435690 + 4);
code_r0x0040da83:
    DAT_00435690 = pcVar1;
    *(uint *)(pcVar7 + -4) = uVar8;
    break;
  default:
    goto LAB_0040db25;
  }
code_r0x0040db21:
  return CONCAT31((int3)(uVar8 >> 8),1);
}



uint FUN_0040db77(byte param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*DAT_00435690 == '\x16') {
    uVar1 = (uint)param_1;
    if (uVar1 == 0x13) {
      *(int *)(DAT_00435690 + 4) = -*(int *)(DAT_00435690 + 4);
    }
    else if (uVar1 == 0x14) {
      *(uint *)(DAT_00435690 + 4) = ~*(uint *)(DAT_00435690 + 4);
    }
    else {
      in_EAX = uVar1 - 0x15;
      if (in_EAX != 0) goto LAB_0040dbaf;
      *(uint *)(DAT_00435690 + 4) = (uint)(*(int *)(DAT_00435690 + 4) == 0);
    }
    uVar1 = 1;
  }
  else {
LAB_0040dbaf:
    uVar1 = in_EAX & 0xffffff00;
  }
  return uVar1;
}



short * FUN_0040dbb5(void)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  psVar3 = (short *)((int)DAT_00435694 + 2);
  sVar1 = *psVar3;
  DAT_00435694 = psVar3;
  while (sVar1 != 0) {
    psVar2 = DAT_00435694;
    if ((sVar1 == 0x22) && (psVar2 = DAT_00435694 + 1, *psVar2 != 0x22)) goto LAB_0040dc1e;
    DAT_00435694 = psVar2 + 1;
    sVar1 = *DAT_00435694;
  }
  FUN_00405ad3(DAT_00424724,0x3fe);
LAB_0040dc1e:
  *DAT_00435694 = 0;
  DAT_00435694 = DAT_00435694 + 1;
  return psVar3;
}



short * FUN_0040dc30(void)

{
  short sVar1;
  short *psVar2;
  short *_Src;
  short *psVar3;
  
  psVar3 = (short *)((int)DAT_00435694 + 2);
  sVar1 = *psVar3;
  DAT_00435694 = psVar3;
  while (sVar1 != 0) {
    if ((sVar1 == 0x5e) && (_Src = DAT_00435694 + 1, *_Src == 0x5d)) {
      psVar2 = _Src;
      do {
        sVar1 = *psVar2;
        psVar2 = psVar2 + 1;
      } while (sVar1 != 0);
      memmove(DAT_00435694,_Src,((int)psVar2 - (int)(DAT_00435694 + 2) >> 1) * 2 + 2);
    }
    else if (sVar1 == 0x5d) break;
    DAT_00435694 = DAT_00435694 + 1;
    sVar1 = *DAT_00435694;
  }
  if (sVar1 == 0) {
    FUN_00405ad3(DAT_00424724,0x3fe);
  }
  *DAT_00435694 = 0;
  DAT_00435694 = DAT_00435694 + 1;
  return psVar3;
}



void __fastcall FUN_0040dcf9(byte param_1,undefined4 param_2)

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
  if (*(char *)((int)&DAT_0040159c + (uVar1 & 0xff) + (uint)DAT_0043547e * 5) == '\0') {
    FUN_00405ad3(DAT_00424724,0x3ff);
  }
  DAT_00435688 = param_2;
  DAT_0043547e = (char)uVar1;
  DAT_00435682 = (undefined)(uVar1 >> 8);
  DAT_00435684._0_1_ = DAT_00435682;
  return;
}



short * FUN_0040dd67(void)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  for (; (sVar1 = *DAT_00435694, sVar1 == 0x20 || (sVar1 == 9)); DAT_00435694 = DAT_00435694 + 1) {
  }
  psVar2 = DAT_00435694;
  if (sVar1 != 0x28) {
    FUN_00405ad3(DAT_00424724,0x3ff);
    psVar2 = DAT_00435694;
  }
  do {
    do {
      psVar2 = psVar2 + 1;
      sVar1 = *psVar2;
    } while (sVar1 == 0x20);
  } while (sVar1 == 9);
  DAT_00435694 = psVar2;
  psVar3 = psVar2;
  if (sVar1 == 0x22) {
    psVar2 = FUN_0040dbb5();
    for (; (sVar1 = *DAT_00435694, sVar1 == 0x20 || (sVar1 == 9)); DAT_00435694 = DAT_00435694 + 1)
    {
    }
    if (sVar1 != 0x29) {
      FUN_00405ad3(DAT_00424724,0x3ff);
    }
    DAT_00435694 = DAT_00435694 + 1;
  }
  else {
LAB_0040de3f:
    sVar1 = *DAT_00435694;
    DAT_00435694 = DAT_00435694 + 1;
    if (sVar1 == 0) {
      FUN_00405ad3(DAT_00424724,0x3ff);
      goto LAB_0040de78;
    }
    if (sVar1 != 0x29) goto code_r0x0040de6d;
    *psVar3 = 0;
  }
  return psVar2;
code_r0x0040de6d:
  if ((sVar1 != 0x20) && (sVar1 != 9)) {
LAB_0040de78:
    psVar3 = DAT_00435694;
  }
  goto LAB_0040de3f;
}



void FUN_0040de89(void)

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
  
  for (; (_C = *DAT_00435694, _C == 0x20 || (_C == 9)); DAT_00435694 = DAT_00435694 + 1) {
  }
  puVar10 = DAT_00435694;
  if ((_C < 0x80) && (((&DAT_00401090)[_C] & 2) != 0)) {
    ppuVar11 = &PTR_DAT_00414070;
    puVar8 = (ushort *)PTR_DAT_00414070;
    if (PTR_DAT_00414070 != (undefined *)0x0) {
      do {
        uVar1 = *puVar8;
        for (puVar10 = DAT_00435694; (uVar1 != 0 && (*puVar10 == uVar1)); puVar10 = puVar10 + 1) {
          puVar8 = puVar8 + 1;
          uVar1 = *puVar8;
        }
        if (*puVar8 == 0) break;
        ppuVar11 = (undefined **)((ushort **)ppuVar11 + 2);
        puVar8 = (ushort *)*ppuVar11;
        puVar10 = DAT_00435694;
      } while (puVar8 != (ushort *)0x0);
    }
  }
  else {
    ppuVar11 = (undefined **)&DAT_00414118;
  }
  DAT_00435694 = puVar10;
  if ((ushort *)*ppuVar11 == (ushort *)0x0) {
    if (_C == 0x2d) {
      DAT_00435694 = DAT_00435694 + 1;
      bVar7 = ((DAT_00435682 != '\x16') - 1U & 0xfb) + 0x13;
      psVar9 = (short *)0x0;
    }
    else if (_C == 0x22) {
      psVar9 = FUN_0040dbb5();
      bVar7 = 0x17;
    }
    else if (_C == 0x5b) {
      psVar9 = FUN_0040dc30();
      bVar7 = 0x18;
    }
    else {
      iVar4 = iswdigit(_C);
      if (iVar4 == 0) {
        if (_C == 0) {
          psVar9 = (short *)0x0;
          DAT_0043547f = 1;
          bVar7 = 0;
          goto LAB_0040e0a9;
        }
        iVar4 = _wcsnicmp((wchar_t *)DAT_00435694,L"DEFINED",7);
        if (iVar4 == 0) {
          DAT_00435694 = DAT_00435694 + 7;
          pwVar6 = FUN_0040dd67();
          bVar2 = FUN_0040e314(pwVar6);
          psVar9 = (short *)(uint)bVar2;
        }
        else {
          iVar4 = _wcsnicmp((wchar_t *)DAT_00435694,L"EXISTS",6);
          if (iVar4 == 0) {
            DAT_00435694 = DAT_00435694 + 6;
          }
          else {
            iVar4 = _wcsnicmp((wchar_t *)DAT_00435694,L"EXIST",5);
            if (iVar4 != 0) {
              FUN_00405ad3(DAT_00424724,0x3ff);
              return;
            }
            DAT_00435694 = DAT_00435694 + 5;
          }
          pwVar6 = FUN_0040dd67();
          iVar4 = _waccess(pwVar6,0);
          psVar9 = (short *)(uint)(iVar4 == 0);
        }
      }
      else {
        piVar5 = _errno();
        *piVar5 = 0;
        psVar9 = (short *)wcstol((wchar_t *)DAT_00435694,(wchar_t **)&DAT_00435694,0);
        piVar5 = _errno();
        iVar4 = DAT_00424724;
        if (*piVar5 == 0x22) {
          *DAT_00435694 = 0;
          FUN_00405ad3(iVar4,0x436);
        }
        wVar3 = towupper(*DAT_00435694);
        if (wVar3 == 0x4c) {
          DAT_00435694 = DAT_00435694 + 1;
        }
      }
      bVar7 = 0x16;
    }
  }
  else {
    bVar7 = *(byte *)((ushort **)ppuVar11 + 1);
    psVar9 = (short *)0x0;
  }
LAB_0040e0a9:
  FUN_0040dcf9(bVar7,psVar9);
  return;
}



void FUN_0040e179(void)

{
  undefined4 uVar1;
  
  if (DAT_00435690 < &DAT_004376a0) {
    FUN_00405ad3(DAT_00424724,0x3ff);
  }
  if (&DAT_00437698 < DAT_0043568c) {
    FUN_00405ad3(DAT_00424724,0x412);
  }
  uVar1 = DAT_00435690[1];
  *DAT_0043568c = *DAT_00435690;
  DAT_0043568c[1] = uVar1;
  DAT_0043568c = DAT_0043568c + 2;
  DAT_00435690 = DAT_00435690 + -2;
  return;
}



bool FUN_0040e1ea(void)

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
  
  DAT_0043568c = &DAT_004356a0;
  DAT_00435690 = (uint *)&DAT_004376a0;
  DAT_0043547f = '\0';
  DAT_0043547e = 3;
  DAT_00435682 = 0x19;
  FUN_0040dcf9(0x19,0);
  puVar7 = DAT_00435690;
  uVar4 = DAT_00435688;
  *DAT_00435690 = DAT_00435684;
  puVar7[1] = uVar4;
LAB_0040e2ea:
  do {
    if (DAT_0043547f != '\0') {
      if (puVar7 != (uint *)&DAT_00437698) {
        FUN_00405ad3(DAT_00424724,0x3ff);
      }
      puVar8 = &DAT_004356a0;
      puVar7 = DAT_00435690;
      if (&DAT_004356a0 < DAT_0043568c) {
        do {
          bVar1 = *(byte *)puVar8;
          if (bVar1 < 0x16) {
            pcVar5 = FUN_0040db77;
            if (bVar1 < 0x13) {
              pcVar5 = FUN_0040d92f;
            }
            cVar3 = (*pcVar5)(bVar1,unaff_ESI);
            puVar7 = DAT_00435690;
            if (cVar3 == '\0') {
              FUN_00405ad3(DAT_00424724,0x438);
              puVar7 = DAT_00435690;
            }
          }
          else {
            pwVar2 = (wchar_t *)puVar8[1];
            puVar6 = puVar7 + 2;
            DAT_00435690 = puVar6;
            if (bVar1 == 0x18) {
              uVar4 = FUN_00407513(pwVar2,0,'\x01','\0',(void **)0x0);
              puVar7 = DAT_00435690;
              DAT_00435690[1] = uVar4;
              *(undefined *)puVar7 = 0x16;
            }
            else {
              *puVar6 = *puVar8;
              puVar7[3] = (uint)pwVar2;
              puVar7 = puVar6;
            }
          }
          puVar8 = puVar8 + 2;
        } while (puVar8 < DAT_0043568c);
      }
      if ((puVar7 == (uint *)&DAT_004376a0) && (DAT_004376a0 == '\x16')) {
        return DAT_004376a4 != 0;
      }
      FUN_00405ad3(DAT_00424724,0x3ff);
      return false;
    }
    FUN_0040de89();
    if ((char)DAT_00435684 != '\x19') {
      while( true ) {
        cVar3 = *(char *)DAT_00435690;
        bVar1 = (&DAT_004015c0)[DAT_00435684 & 0xff];
        if ((byte)(&DAT_004015c0)[CONCAT11(bVar1,cVar3) & 0xff] <= bVar1 &&
            bVar1 != (&DAT_004015c0)[CONCAT11(bVar1,cVar3) & 0xff]) break;
        if (bVar1 == 0) goto joined_r0x0040e2a8;
        FUN_0040e179();
      }
    }
    uVar4 = DAT_00435688;
    if (DAT_00435690 == (uint *)&DAT_00438698) {
      FUN_00405ad3(DAT_00424724,0x412);
      puVar7 = DAT_00435690;
    }
    else {
      puVar7 = DAT_00435690 + 2;
      *puVar7 = DAT_00435684;
      DAT_00435690[3] = uVar4;
      DAT_00435690 = puVar7;
    }
  } while( true );
joined_r0x0040e2a8:
  while (cVar3 != '\x19') {
    FUN_0040e179();
    cVar3 = *(char *)DAT_00435690;
  }
  if (DAT_00435690 < &DAT_004376a0) {
    FUN_00405ad3(DAT_00424724,0x3ff);
  }
  puVar7 = DAT_00435690 + -2;
  DAT_00435690 = puVar7;
  goto LAB_0040e2ea;
}



bool __fastcall FUN_0040e314(wchar_t *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  uint uVar3;
  wchar_t *local_8;
  
  local_8 = (wchar_t *)0x0;
  pwVar1 = wcstok_s(param_1,L" \t",&local_8);
  pwVar2 = wcstok_s((wchar_t *)0x0,L" \t",&local_8);
  if (pwVar2 != (wchar_t *)0x0) {
    FUN_00405ad3(DAT_00424724,0x409);
  }
  if (pwVar1 == (wchar_t *)0x0) {
    FUN_00405ad3(DAT_00424724,0x417);
  }
  uVar3 = FUN_0040b4d9((ushort *)pwVar1);
  return uVar3 != 0;
}



char __fastcall FUN_0040e383(wchar_t *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  
  if (*param_1 == L'\0') {
    FUN_00405ad3(DAT_00424724,0x3fa);
  }
  if (param_2 == '\x04') {
LAB_0040e3d5:
    cVar2 = FUN_0040e314(param_1);
  }
  else {
    if (param_2 != '\x05') {
      if (param_2 == '\x06') goto LAB_0040e3d5;
      if (param_2 != '\a') {
        DAT_00435694 = param_1;
        bVar1 = FUN_0040e1ea();
        return bVar1;
      }
    }
    bVar1 = FUN_0040e314(param_1);
    cVar2 = '\x01' - bVar1;
  }
  return cVar2;
}



int * __fastcall
FUN_0040e3e0(wchar_t *param_1,rsize_t param_2,wchar_t *param_3,short *param_4,
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
  wchar_t *local_2c;
  int *local_18;
  int local_14;
  wchar_t *local_10;
  
  local_18 = DAT_00424714;
  if (DAT_00424714 == (int *)0x0) {
    return (int *)0x0;
  }
LAB_0040e41d:
  local_10 = (wchar_t *)local_18[2];
  local_2c = wcsrchr(local_10,L'.');
  iVar5 = FUN_00411b28(local_2c,param_4);
  if (iVar5 == 0) {
    pwVar8 = local_10 + 1;
    *param_1 = L'\0';
    wVar1 = *pwVar8;
    pwVar9 = pwVar8;
    while (wVar1 != L'\0') {
      if (wVar1 == L'{') {
        wVar1 = L'{';
        pwVar14 = pwVar9;
        goto LAB_0040e4a1;
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
    goto LAB_0040e59a;
  }
  goto LAB_0040e814;
  while( true ) {
    if (wVar1 == L'^') {
      pwVar14 = pwVar14 + 1;
    }
    pwVar14 = pwVar14 + 1;
    wVar1 = *pwVar14;
    if (wVar1 == L'\0') break;
LAB_0040e4a1:
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
        if ((sVar2 != 0x5c) && (sVar2 != 0x2f)) goto LAB_0040e814;
      }
      else {
        iVar6 = _wcsnicmp(pwVar7,(wchar_t *)(iVar13 + (int)pwVar7),1);
        if (iVar6 != 0) goto LAB_0040e814;
      }
      iVar15 = iVar15 + -1;
      pwVar7 = pwVar7 + 1;
    } while (iVar15 != 0);
  }
  pwVar12 = param_3 + iVar5 + 1;
  pwVar7 = wcschr(pwVar12,L'\\');
  local_2c = pwVar9;
  if (((pwVar7 != (wchar_t *)0x0) || (pwVar7 = wcschr(pwVar12,L'/'), pwVar7 != (wchar_t *)0x0)) &&
     ((pwVar7 != pwVar12 || ((pwVar14[-1] == L'\\' || (pwVar14[-1] == L'/')))))) goto LAB_0040e814;
LAB_0040e59a:
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
    local_14 = rVar16 + ((int)param_4 + iVar5 >> 1);
  }
  else {
    pwVar8 = param_3;
    if (*pwVar9 != L'\0') {
      pwVar8 = wcsrchr(param_3,L'.');
      wVar1 = *pwVar8;
      while (wVar1 != L':') {
        if (wVar1 == L'\\') goto LAB_0040e710;
        if ((wVar1 == L'/') || (pwVar8 <= param_3)) break;
        pwVar8 = pwVar8 + -1;
        wVar1 = *pwVar8;
      }
      if (wVar1 != L':') {
LAB_0040e710:
        if ((wVar1 != L'\\') && (wVar1 != L'/')) goto LAB_0040e721;
      }
      pwVar8 = pwVar8 + 1;
    }
LAB_0040e721:
    iVar5 = 0;
    local_14 = 0;
    rVar16 = (int)param_4 - (int)pwVar8 >> 1;
    if ((pwVar8 != param_3) && (*param_3 == L'\"')) {
      *param_1 = L'\"';
      iVar5 = 1;
      local_14 = 1;
    }
    iVar15 = iVar5;
    if ((int)(param_2 - iVar5) <= (int)rVar16) {
      FUN_00405ad3(0,0x434);
      iVar15 = local_14;
    }
    wcsncpy_s(param_1 + iVar15,param_2 - iVar5,pwVar8,rVar16);
    local_14 = rVar16 + local_14;
  }
  rVar16 = (int)local_2c - (int)local_10 >> 1;
  if ((int)(param_2 - local_14) <= (int)rVar16) {
    FUN_00405ad3(0,0x434);
  }
  wcsncpy_s(param_1 + local_14,param_2 - local_14,local_10,rVar16);
  if ((*param_1 == L'\"') && (iVar5 = rVar16 + local_14, param_1[iVar5 + -1] != L'\"')) {
    if ((int)((param_2 - rVar16) - local_14) < 2) {
      FUN_00405ad3(0,0x434);
    }
    rVar16 = rVar16 + 1;
    param_1[iVar5] = L'\"';
  }
  param_1[rVar16 + local_14] = L'\0';
  puVar10 = FUN_0040edb7(param_1);
  if (puVar10 != (undefined4 *)0x0) {
    DVar3 = puVar10[4];
    DVar4 = puVar10[5];
    (param_5->ftCreationTime).dwLowDateTime = DVar3;
    (param_5->ftCreationTime).dwHighDateTime = DVar4;
    (param_5->ftLastWriteTime).dwLowDateTime = DVar3;
    (param_5->ftLastWriteTime).dwHighDateTime = DVar4;
    return local_18;
  }
  uVar11 = FUN_00408495(param_1,param_5);
  if ((char)uVar11 != '\0') {
    return local_18;
  }
LAB_0040e814:
  local_18 = (int *)*local_18;
  if (local_18 == (int *)0x0) {
    return (int *)0x0;
  }
  goto LAB_0040e41d;
}



void FUN_0040e847(void)

{
  short sVar1;
  wchar_t *_Str1;
  int ***pppiVar2;
  int ***pppiVar3;
  int **ppiVar4;
  int **_Memory;
  int iVar5;
  wchar_t wVar6;
  wchar_t *pwVar7;
  size_t _MaxCount;
  int **ppiVar8;
  int **ppiVar9;
  int *piVar10;
  int *_Str2;
  int **ppiVar11;
  int *local_1c;
  int **local_14;
  int *local_10;
  int **local_c;
  int **local_8;
  
  ppiVar8 = DAT_00424714;
  local_10 = (int *)0x0;
  local_1c = DAT_00424720;
  local_14 = DAT_00424714;
  DAT_00424714 = (int **)0x0;
  if (DAT_00424720 != (int *)0x0) {
    do {
      _Str1 = (wchar_t *)local_1c[1];
      pwVar7 = _Str1;
      do {
        wVar6 = *pwVar7;
        pwVar7 = pwVar7 + 1;
      } while (wVar6 != L'\0');
      _MaxCount = (int)pwVar7 - (int)(_Str1 + 1) >> 1;
      ppiVar9 = ppiVar8;
      ppiVar4 = local_14;
      while (ppiVar9 != (int **)0x0) {
        local_c = ppiVar9 + 2;
        _Str2 = *local_c;
        wVar6 = L'{';
        if (*(wchar_t *)_Str2 == L'{') {
          do {
            piVar10 = _Str2;
            if (wVar6 == L'^') {
              piVar10 = (int *)((int)_Str2 + 2);
            }
            _Str2 = (int *)((int)piVar10 + 2);
            wVar6 = *(wchar_t *)_Str2;
          } while (wVar6 != L'}');
          _Str2 = piVar10 + 1;
        }
        local_8 = ppiVar9;
        iVar5 = _wcsnicmp(_Str1,(wchar_t *)_Str2,_MaxCount);
        _Memory = local_8;
        if ((iVar5 == 0) &&
           ((sVar1 = *(short *)((int)_Str2 + _MaxCount * 2), sVar1 == 0x2e || (sVar1 == 0x7b)))) {
          ppiVar9 = (int **)*local_8;
          local_14 = ppiVar9;
          if ((int **)local_8[1] != (int **)0x0) {
            *local_8[1] = (int)ppiVar9;
            ppiVar9 = ppiVar8;
            local_14 = ppiVar4;
          }
          if (*local_8 != (int *)0x0) {
            (*local_8)[1] = (int)local_8[1];
          }
          ppiVar8 = (int **)*local_8;
          *local_8 = (int *)0x0;
          ppiVar11 = DAT_00424714;
          local_8 = ppiVar8;
          ppiVar4 = local_14;
          if (DAT_00424714 == (int **)0x0) {
LAB_0040e94b:
            ppiVar11 = local_c;
            ppiVar8 = (int **)_Memory[3];
            while (ppiVar8 != (int **)0x0) {
              local_c = (int **)ppiVar8[1];
              DAT_004386ac = *(char *)(_Memory + 5);
              if (DAT_004386ac != '\0') {
                DAT_004386b0 = *ppiVar11;
              }
              FUN_0040ef9c((wchar_t **)&local_c,(int *)&local_10,(int *)0x0,(ushort *)0x0,0,0,0,'\0'
                          );
              ppiVar8 = (int **)*ppiVar8;
              DAT_004386ac = '\0';
              ppiVar9 = local_14;
            }
            _Memory[4] = local_10;
            local_10 = (int *)0x0;
            pppiVar2 = &DAT_00424714;
            for (pppiVar3 = (int ***)DAT_00424714; pppiVar3 != (int ***)0x0;
                pppiVar3 = (int ***)*pppiVar3) {
              pppiVar2 = pppiVar3;
            }
            *pppiVar2 = _Memory;
            ppiVar8 = ppiVar9;
            ppiVar9 = local_8;
          }
          else {
            while (iVar5 = _wcsicmp((wchar_t *)ppiVar11[2],(wchar_t *)*local_c), iVar5 != 0) {
              ppiVar11 = (int **)*ppiVar11;
              if (ppiVar11 == (int **)0x0) goto LAB_0040e94b;
            }
            free(*local_c);
            while (ppiVar8 = (int **)_Memory[3], ppiVar8 != (int **)0x0) {
              _Memory[3] = *ppiVar8;
              free(ppiVar8[1]);
              *ppiVar8 = (int *)DAT_00435698;
              DAT_00435698 = ppiVar8;
            }
            free(_Memory);
            ppiVar8 = ppiVar9;
            ppiVar9 = local_8;
          }
        }
        else {
          ppiVar9 = (int **)*ppiVar9;
        }
      }
      local_1c = (int *)*local_1c;
      local_8 = (int **)0x0;
      local_14 = ppiVar4;
    } while (local_1c != (int *)0x0);
  }
  while (ppiVar8 != (int **)0x0) {
    if ((DAT_0041450c & 1) != 0) {
      FUN_00405ad3(0,0xfa5);
    }
    free(ppiVar8[2]);
    FUN_004052c9(ppiVar8[3]);
    FUN_004052c9(ppiVar8[4]);
    ppiVar9 = (int **)*ppiVar8;
    free(ppiVar8);
    ppiVar8 = ppiVar9;
  }
  return;
}



void __fastcall
FUN_0040ea67(int param_1,wchar_t *param_2,undefined4 param_3,uint param_4,uint param_5,int *param_6,
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
  
  local_c = DAT_00414014 ^ (uint)auStack_28c;
  local_26c = param_6;
  local_274 = param_7;
  local_270 = param_8;
  local_268 = param_9;
  pwVar1 = wcsrchr(*(wchar_t **)(param_1 + 4),L'.');
  if ((pwVar1 != (wchar_t *)0x0) &&
     (piStack_264 = FUN_0040e3e0(param_2,0x101,*(wchar_t **)(param_1 + 4),pwVar1,&_Stack_260),
     piStack_264 != (int *)0x0)) {
    uStack_288 = FUN_004081de((byte *)&_Stack_260);
    *param_10 = param_2;
    piVar8 = local_274;
    do {
      piVar8 = (int *)*piVar8;
      if (piVar8 == (int *)0x0) goto LAB_0040eb12;
      iVar2 = _wcsicmp((wchar_t *)piVar8[1],param_2);
    } while (iVar2 != 0);
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
LAB_0040eb12:
    piStack_27c = (int *)0x0;
    iStack_278 = FUN_00403f13(param_2,*(byte *)(param_1 + 8),&uStack_288,(int ************)0x0,
                              &piStack_27c);
    if (piStack_27c != (int *)0x0) {
      iVar2 = FUN_0040553b(piStack_27c);
      iStack_278 = iStack_278 + iVar2;
      FUN_00405559(&piStack_27c);
    }
    *local_270 = *local_270 + iStack_278;
    if (((((*(byte *)(param_1 + 8) & 0x10) != 0) || (param_5 < uStack_288._4_4_)) ||
        ((param_5 <= uStack_288._4_4_ && (param_4 < (uint)uStack_288)))) ||
       (((uVar6 = uStack_288._4_4_, uVar7 = (uint)uStack_288, DAT_00424736 != '\0' &&
         (param_4 == (uint)uStack_288)) && (param_5 == uStack_288._4_4_)))) {
      if (piVar8 == (int *)0x0) {
        puVar3 = FUN_0040ec13();
        pvVar4 = FUN_0040ec65(param_2);
        piVar8 = local_26c;
        puVar3[1] = pvVar4;
        FUN_0040ed6a(local_26c,puVar3);
        if (*local_274 == 0) {
          *local_274 = *piVar8;
        }
      }
      uVar6 = uStack_288._4_4_;
      uVar7 = (uint)uStack_288;
      if ((*(byte *)(param_1 + 8) & 0x11) == 1) {
        FUN_00405bad(3);
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
  FUN_00412542(local_c ^ (uint)auStack_28c);
  return;
}



undefined4 * FUN_0040ec13(void)

{
  undefined4 *puVar1;
  
  if (DAT_00435698 == (undefined4 *)0x0) {
    if (DAT_004386a4 < 8) {
      DAT_004386a0 = (undefined4 *)FUN_0040b57e(0x8000);
      DAT_004386a4 = 0x8000;
    }
    DAT_004386a4 = DAT_004386a4 - 8;
    puVar1 = DAT_004386a0;
    DAT_004386a0 = DAT_004386a0 + 2;
  }
  else {
    puVar1 = DAT_00435698;
    DAT_00435698 = (undefined4 *)*DAT_00435698;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  return puVar1;
}



void * __fastcall FUN_0040ec65(short *param_1)

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
  _Dst = FUN_0040b57e(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  memcpy(_Dst,param_1,uVar4 * 2);
  return _Dst;
}



undefined2 * __fastcall FUN_0040eca9(short *param_1)

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
  puVar3 = (undefined2 *)FUN_0040b57e(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  *puVar3 = 0x22;
  memcpy(puVar3 + 1,param_1,iVar5 * 2);
  puVar3[iVar5 + 1] = 0x22;
  puVar3[iVar5 + 2] = 0;
  return puVar3;
}



wchar_t * __fastcall FUN_0040ed0f(short *param_1,wchar_t *param_2)

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
  pwVar3 = (wchar_t *)FUN_00403d09(param_1,_SizeInWords);
  wcscat_s(pwVar3,_SizeInWords,param_2);
  return pwVar3;
}



void __fastcall FUN_0040ed6a(undefined4 *param_1,undefined4 param_2)

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



ushort __fastcall FUN_0040ed7f(wint_t *param_1)

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



undefined4 * __fastcall FUN_0040edb7(wchar_t *param_1)

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
    uVar3 = FUN_0040ed7f((wint_t *)param_1);
    puVar4 = FUN_00411a70(param_1,CONCAT22(extraout_var,uVar3));
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
                 FUN_0040b57e(-(uint)((int)((ulonglong)uVar7 * 2 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar7 * 2));
        wcscpy_s(pwVar6,uVar7,L".\\");
        wcscat_s(pwVar6,uVar7,param_1);
        bVar2 = true;
      }
      uVar3 = FUN_0040ed7f((wint_t *)pwVar6);
      puVar4 = FUN_00411a70(pwVar6,CONCAT22(extraout_var_00,uVar3));
      if (puVar4 == (undefined4 *)0x0) {
        if (pwVar6 != param_1 + 2) {
          pwVar6[1] = L'/';
        }
        uVar3 = FUN_0040ed7f((wint_t *)pwVar6);
        puVar4 = FUN_00411a70(pwVar6,CONCAT22(extraout_var_01,uVar3));
        if (bVar2) {
          free(pwVar6);
        }
        if (puVar4 == (undefined4 *)0x0) {
          if (*param_1 == L'\"') {
            pwVar6 = FUN_00411c42(param_1);
          }
          else {
            pwVar6 = param_1;
            do {
              wVar1 = *pwVar6;
              pwVar6 = pwVar6 + 1;
            } while (wVar1 != L'\0');
            uVar7 = ((int)pwVar6 - (int)(param_1 + 1) >> 1) + 3;
            pwVar6 = (wchar_t *)
                     FUN_0040b57e(-(uint)((int)((ulonglong)uVar7 * 2 >> 0x20) != 0) |
                                  (uint)((ulonglong)uVar7 * 2));
            wcscpy_s(pwVar6,uVar7,L"\"");
            wcscat_s(pwVar6,uVar7,param_1);
            wcscat_s(pwVar6,uVar7,L"\"");
          }
          uVar3 = FUN_0040ed7f((wint_t *)pwVar6);
          puVar4 = FUN_00411a70(pwVar6,CONCAT22(extraout_var_02,uVar3));
          free(pwVar6);
        }
      }
      else if (bVar2) {
        free(pwVar6);
      }
    }
  }
  return puVar4;
}



undefined4 __fastcall FUN_0040ef5e(short param_1)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = 3;
  psVar1 = (short *)&DAT_00401714;
  psVar2 = psVar1;
  if (param_1 != 0x20) {
    do {
      psVar1 = (short *)0x0;
      if (iVar3 == 1) break;
      psVar1 = psVar2 + 1;
      iVar3 = iVar3 + -1;
      psVar2 = psVar1;
    } while (*psVar1 != param_1);
  }
  if (psVar1 == (short *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = (int)(psVar1 + -0x200b8a) >> 1;
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),iVar3 != -1);
}



// WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe

void __fastcall
FUN_0040ef9c(wchar_t **param_1,int *param_2,int *param_3,ushort *param_4,int param_5,int param_6,
            uint param_7,char param_8)

{
  ushort uVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  uint uVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  int **ppiVar7;
  undefined4 *puVar8;
  int *piVar9;
  ushort *puVar10;
  int iVar11;
  undefined **ppuVar12;
  int **ppiVar13;
  int *piVar14;
  bool bVar15;
  int *local_238;
  undefined4 local_234;
  ushort *local_230;
  int *local_22c;
  wchar_t **local_228;
  int *local_224;
  char local_21d;
  int **local_21c;
  byte local_216;
  char local_215;
  undefined4 local_214;
  undefined2 local_10;
  wchar_t local_e;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_00414014 ^ (uint)&stack0xfffffffc;
  local_215 = '\0';
  if (param_2 == (int *)0x0) {
    local_21c = (int **)0x0;
  }
  else if (param_3 == (int *)0x0) {
    local_21c = (int **)*param_2;
    if (local_21c != (int **)0x0) {
      for (ppiVar7 = (int **)*local_21c; ppiVar7 != (int **)0x0; ppiVar7 = (int **)*ppiVar7) {
        local_21c = ppiVar7;
      }
    }
  }
  else {
    local_21c = (int **)*param_3;
  }
  pwVar5 = *param_1;
  wVar2 = *pwVar5;
  local_228 = param_1;
  local_22c = param_2;
  local_230 = param_4;
joined_r0x0040f01a:
  if (wVar2 != L'\0') {
    do {
      if (wVar2 == L'$') break;
      if (wVar2 == L'\"') {
        local_215 = local_215 == '\0';
      }
      if ((param_8 != '\0') && ((wVar2 == L',' || (wVar2 == L')')))) {
        if (param_3 != (int *)0x0) {
          *param_3 = (int)local_21c;
        }
        goto LAB_0040f55b;
      }
      if (((local_215 == '\0') && (wVar2 == L'^')) && (*param_1 = pwVar5 + 1, pwVar5[1] == L'\"')) {
        local_215 = '\x01';
      }
      pwVar5 = *param_1 + 1;
      *param_1 = pwVar5;
      wVar2 = *pwVar5;
    } while (wVar2 != L'\0');
    if (*pwVar5 != L'\0') {
      local_216 = (byte)param_7 & 4;
      if (pwVar5[1] != L'\0') {
LAB_0040f0db:
        pwVar5 = *param_1;
        pwVar3 = pwVar5 + 1;
        *param_1 = pwVar3;
        if ((local_215 == '\0') && (*pwVar3 == L'^')) {
          pwVar5 = pwVar5 + 2;
          *param_1 = pwVar5;
          uVar4 = FUN_00403b00(*pwVar5);
          if (((char)uVar4 == '\0') && (local_216 != 0)) goto LAB_0040f580;
          FUN_00405ad3(DAT_00424730,0x3e9);
        }
        pwVar5 = *param_1;
        wVar2 = *pwVar5;
        if (wVar2 != L'$') {
          local_224 = (int *)0x0;
          local_21d = '\0';
          if (wVar2 == L'(') {
            pwVar5 = (wchar_t *)
                     FUN_0040f703((ushort *)(pwVar5 + 1),(ushort *)&local_214,&local_21d,
                                  (uint *)&local_224);
            piVar9 = local_224;
            *param_1 = pwVar5;
            if (local_21d == '\0') {
              pwVar5 = wcschr(L"*@<?",(wchar_t)local_214);
              if (pwVar5 != (wchar_t *)0x0) {
                if ((DAT_004386ac == '\0') || ((DAT_0041450c & 0x40) != 0)) goto LAB_0040f542;
                FUN_00412231(&stack0xfffffdbc,local_224 + 1,L"$(%s)",(char)&local_214);
                FUN_00405ad3(0,0x44c);
              }
              goto LAB_0040f351;
            }
            ppuVar12 = &PTR_u_abspath_004015e0;
            do {
              if (((int *)((ushort **)ppuVar12)[1] == piVar9) &&
                 (iVar11 = FUN_00411fac((ushort *)*ppuVar12,(ushort *)&local_214,
                                        (int)((ushort **)ppuVar12)[1]), iVar11 == 0)) {
                piVar9 = (int *)((ushort **)ppuVar12)[2];
                if (piVar9 == (int *)0x0) goto LAB_0040f249;
                piVar14 = (int *)0x1;
                goto LAB_0040f261;
              }
              ppuVar12 = (undefined **)((ushort **)ppuVar12 + 4);
            } while (ppuVar12 != (undefined **)L"DFBR");
            if (local_216 != 0) goto LAB_0040f580;
            FUN_00405ad3(DAT_00424730,0x450);
            goto LAB_0040f249;
          }
          pwVar5 = wcschr(L"*@<?",wVar2);
          if (pwVar5 != (wchar_t *)0x0) {
            if (((DAT_004386ac == '\0') || ((DAT_0041450c & 0x40) != 0)) || (**param_1 == L'<'))
            goto LAB_0040f542;
            local_c = 0;
            local_10 = 0x24;
            local_e = **param_1;
            FUN_00405ad3(0,0x44c);
          }
          uVar4 = FUN_00403b00(**param_1);
          if ((char)uVar4 == '\0') {
            if (local_216 != 0) goto LAB_0040f580;
            FUN_00405ad3(DAT_00424730,0x3ea);
          }
          local_214 = (uint)(ushort)**param_1;
LAB_0040f351:
          local_238 = (int *)0x0;
          local_234 = 0;
          if (local_22c == (int *)0x0) {
            ppiVar7 = &local_238;
          }
          else {
            ppiVar7 = (int **)FUN_0040ec13();
          }
          local_224 = (int *)FUN_0040b4d9((ushort *)&local_214);
          if (local_224 == (int *)0x0) {
LAB_0040f44e:
            piVar9 = (int *)FUN_0040ec65((short *)&DAT_004017bc);
LAB_0040f458:
            ppiVar7[1] = piVar9;
          }
          else {
            if (local_230 != (ushort *)0x0) {
              puVar8 = &local_214;
              puVar10 = local_230;
              do {
                uVar1 = *puVar10;
                bVar15 = uVar1 < *(ushort *)puVar8;
                if (uVar1 != *(ushort *)puVar8) {
LAB_0040f3c9:
                  uVar4 = -(uint)bVar15 | 1;
                  goto LAB_0040f3ce;
                }
                if (uVar1 == 0) break;
                uVar1 = puVar10[1];
                bVar15 = uVar1 < *(ushort *)((int)puVar8 + 2);
                if (uVar1 != *(ushort *)((int)puVar8 + 2)) goto LAB_0040f3c9;
                puVar10 = puVar10 + 2;
                puVar8 = puVar8 + 1;
              } while (uVar1 != 0);
              uVar4 = 0;
LAB_0040f3ce:
              if (uVar4 != 0) goto LAB_0040f403;
              puVar8 = (undefined4 *)local_224[2];
              iVar11 = param_5;
              if (param_5 != param_6) {
                do {
                  if (puVar8 == (undefined4 *)0x0) goto LAB_0040f3f4;
                  puVar8 = (undefined4 *)*puVar8;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != param_6);
              }
              if (puVar8 == (undefined4 *)0x0) {
LAB_0040f3f4:
                piVar9 = (int *)FUN_0040ec65((short *)&DAT_004017bc);
              }
              else {
                piVar9 = (int *)puVar8[1];
              }
              goto LAB_0040f458;
            }
LAB_0040f403:
            if ((*(byte *)(local_224 + 3) & 1) == 0) {
              if ((*(byte *)(local_224 + 3) & 0x10) != 0) goto LAB_0040f44e;
              piVar9 = *(int **)(local_224[2] + 4);
              goto LAB_0040f458;
            }
            if (local_216 != 0) goto LAB_0040f580;
            FUN_00405ad3(DAT_00424730,0x42e);
          }
          ppiVar13 = ppiVar7 + 1;
          if (*ppiVar13 == (int *)0x0) {
            FUN_00405ad3(DAT_00424730,0x410);
          }
          if (local_22c != (int *)0x0) {
            if (local_21c == (int **)0x0) {
              *local_22c = (int)ppiVar7;
            }
            else {
              *local_21c = (int *)ppiVar7;
            }
            local_21c = ppiVar7;
          }
          piVar9 = local_224;
          if ((local_224 != (int *)0x0) &&
             (pwVar5 = wcschr((wchar_t *)*ppiVar13,L'$'), pwVar5 != (wchar_t *)0x0)) {
            piVar14 = piVar9 + 3;
            *(byte *)piVar14 = *(byte *)piVar14 | 1;
            local_224 = *ppiVar13;
            if (local_230 == (ushort *)0x0) {
LAB_0040f4ff:
              iVar11 = param_6;
            }
            else {
              puVar8 = &local_214;
              puVar10 = local_230;
              do {
                uVar1 = *puVar10;
                bVar15 = uVar1 < *(ushort *)puVar8;
                if (uVar1 != *(ushort *)puVar8) {
LAB_0040f4f3:
                  uVar4 = -(uint)bVar15 | 1;
                  goto LAB_0040f4f8;
                }
                if (uVar1 == 0) break;
                uVar1 = puVar10[1];
                bVar15 = uVar1 < *(ushort *)((int)puVar8 + 2);
                if (uVar1 != *(ushort *)((int)puVar8 + 2)) goto LAB_0040f4f3;
                puVar10 = puVar10 + 2;
                puVar8 = puVar8 + 1;
              } while (uVar1 != 0);
              uVar4 = 0;
LAB_0040f4f8:
              iVar11 = param_5;
              if (uVar4 == 0) goto LAB_0040f4ff;
            }
            FUN_0040ef9c((wchar_t **)&local_224,local_22c,(int *)&local_21c,(ushort *)&local_214,
                         param_5 + 1,iVar11,param_7,'\0');
            piVar9 = piVar9 + 3;
            *(byte *)piVar9 = *(byte *)piVar9 & 0xfe;
          }
          goto LAB_0040f536;
        }
        pwVar5 = FUN_0040f83d(pwVar5);
        *param_1 = pwVar5;
        goto LAB_0040f542;
      }
      if ((param_7 & 4) == 0) {
        FUN_00405ad3(DAT_00424730,0x3ea);
        local_216 = 0;
        goto LAB_0040f0db;
      }
LAB_0040f580:
      if (param_3 != (int *)0x0) {
        *param_3 = (int)local_21c;
      }
    }
  }
LAB_0040f55b:
  FUN_00412542(local_8 ^ (uint)&stack0xfffffffc);
  return;
  while( true ) {
    piVar9 = (int *)((ushort **)ppuVar12)[2];
    piVar14 = (int *)((int)piVar14 + 1);
    if (piVar9 <= local_224) break;
LAB_0040f261:
    local_224 = piVar14;
    uVar6 = FUN_0040f590(local_228,&local_21c,local_230,param_5,param_6,param_7,*ppuVar12,
                         *(char *)((int)ppuVar12 + 0xb + (int)piVar14),(uint)piVar14,(uint)piVar9);
    if ((char)uVar6 == '\0') goto LAB_0040f580;
  }
LAB_0040f249:
  *local_228 = *local_228 + -1;
LAB_0040f536:
  param_1 = local_228;
  if (param_3 != (int *)0x0) {
    *param_3 = (int)local_21c;
  }
LAB_0040f542:
  pwVar5 = *param_1 + 1;
  *param_1 = pwVar5;
  wVar2 = *pwVar5;
  goto joined_r0x0040f01a;
}



uint __thiscall
FUN_0040f590(void *this,int *param_1,ushort *param_2,int param_3,int param_4,uint param_5,
            undefined4 param_6,char param_7,uint param_8,uint param_9)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  int *in_EDX;
  byte bVar5;
  
                    // WARNING: Load size is inaccurate
  iVar2 = *this;
  psVar3 = (short *)FUN_0040ef9c((wchar_t **)this,in_EDX,param_1,param_2,param_3,param_4,param_5,
                                 '\x01');
  if ((char)psVar3 == '\0') {
LAB_0040f6f8:
    uVar4 = (uint)psVar3 & 0xffffff00;
  }
  else {
                    // WARNING: Load size is inaccurate
    if ((param_7 == '\0') && (*this == iVar2)) {
      if ((param_5 & 4) != 0) goto LAB_0040f6f8;
      FUN_00405ad3(DAT_00424730,0x44e);
    }
                    // WARNING: Load size is inaccurate
    psVar3 = *this;
    bVar5 = (byte)param_5 & 4;
    if (*psVar3 == 0) {
      if ((param_5 & 4) != 0) goto LAB_0040f6f8;
      FUN_00405ad3(DAT_00424730,1000);
      bVar5 = 0;
    }
                    // WARNING: Load size is inaccurate
    sVar1 = **this;
    *(short **)this = *this + 1;
    psVar3 = (short *)0x0;
    if ((sVar1 != 0x2c) && (sVar1 != 0x29)) {
      if (bVar5 != 0) goto LAB_0040f6f8;
      FUN_00405ad3(DAT_00424730,1000);
    }
    psVar3 = (short *)0x0;
    if (param_8 < param_9) {
      if (sVar1 != 0x2c) {
        if (bVar5 != 0) goto LAB_0040f6f8;
LAB_0040f6dd:
        psVar3 = (short *)FUN_00405ad3(DAT_00424730,0x44f);
      }
    }
    else if ((param_8 == param_9) && (sVar1 != 0x29)) {
      if (bVar5 == 0) {
        do {
          FUN_0040ef9c((wchar_t **)this,in_EDX,param_1,param_2,param_3,param_4,param_5,'\x01');
                    // WARNING: Load size is inaccurate
          if (**this == 0) {
            FUN_00405ad3(DAT_00424730,1000);
          }
                    // WARNING: Load size is inaccurate
          sVar1 = **this;
          *(short **)this = *this + 1;
        } while (sVar1 == 0x2c);
        goto LAB_0040f6dd;
      }
      goto LAB_0040f6f8;
    }
    uVar4 = CONCAT31((int3)((uint)psVar3 >> 8),1);
  }
  return uVar4;
}



ushort * __fastcall FUN_0040f703(ushort *param_1,ushort *param_2,char *param_3,uint *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  short extraout_CX;
  ushort uVar3;
  ushort *puVar4;
  
  uVar3 = *param_1;
  puVar4 = param_2;
  while ((((uVar3 != 0 && (uVar3 != 0x29)) && (uVar3 != 0x3a)) &&
         (uVar1 = FUN_0040ef5e(uVar3), (char)uVar1 == '\0'))) {
    if (extraout_CX == 0x5e) {
      param_1 = param_1 + 1;
      uVar2 = FUN_00403b00(*param_1);
      if ((char)uVar2 == '\0') {
        FUN_00405ad3(DAT_00424730,0x3e9);
      }
    }
    uVar3 = *param_1;
    param_1 = param_1 + 1;
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
    uVar3 = *param_1;
  }
  *param_4 = (int)puVar4 - (int)param_2 >> 1;
  *puVar4 = 0;
  uVar3 = *param_1;
  uVar1 = FUN_0040ef5e(uVar3);
  *param_3 = (char)uVar1;
  if ((char)uVar1 == '\0') {
    while (uVar3 != 0x29) {
      if (uVar3 == 0x5e) {
        param_1 = param_1 + 1;
        uVar3 = *param_1;
      }
      if (uVar3 == 0) break;
      param_1 = param_1 + 1;
      uVar3 = *param_1;
    }
    if (uVar3 != 0x29) {
      FUN_00405ad3(DAT_00424730,1000);
    }
    if (0x101 < *param_4) {
      FUN_00405ad3(DAT_00424730,0x434);
    }
  }
  else {
    do {
      param_1 = param_1 + 1;
      if (*param_1 == 0) {
        FUN_00405ad3(DAT_00424730,0x410);
      }
      uVar1 = FUN_0040ef5e(*param_1);
    } while ((char)uVar1 != '\0');
  }
  return param_1;
}



short * __fastcall FUN_0040f83d(short *param_1)

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
      FUN_00405ad3(DAT_00424730,0x3e9);
    }
  }
  return param_1;
}



int * __fastcall FUN_0040f8d7(int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  wchar_t *pwVar3;
  void *local_1c [2];
  int *local_14;
  int *local_10;
  int *local_c;
  int **local_8;
  
  pwVar3 = wcschr((wchar_t *)param_1,L'$');
  if (pwVar3 != (wchar_t *)0x0) {
    local_8 = (int **)0x0;
    local_10 = param_1;
    FUN_0040ef9c((wchar_t **)&local_10,(int *)&local_8,(int *)0x0,(ushort *)0x0,0,0,0,'\0');
    ppiVar2 = local_8;
    local_c = (int *)0x0;
    local_14 = param_1;
    FUN_0040f95a(local_1c,&local_14,-1,(int **)&local_8,'\0',&local_c);
    while (param_1 = local_c, ppiVar2 != (int **)0x0) {
      ppiVar1 = (int **)*ppiVar2;
      *ppiVar2 = (int *)DAT_00435698;
      DAT_00435698 = ppiVar2;
      ppiVar2 = ppiVar1;
    }
  }
  return param_1;
}



void __fastcall
FUN_0040f95a(void **param_1,int **param_2,char param_3,int **param_4,char param_5,void **param_6)

{
  wchar_t wVar1;
  int **ppiVar2;
  uint uVar3;
  char cVar4;
  wchar_t *pwVar5;
  int *piVar6;
  undefined4 uVar7;
  void **ppvVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined auStack_860 [7];
  char local_859;
  int **local_858;
  int **local_854;
  undefined4 local_850;
  int *local_84c;
  char local_845;
  undefined4 uStack_844;
  int *piStack_840;
  int iStack_83c;
  int *piStack_838;
  undefined4 local_834;
  void **local_830;
  void **local_82c;
  void *apvStack_828 [2];
  undefined local_820 [2048];
  undefined *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_c;
  
  local_c = DAT_00414014 ^ (uint)auStack_860;
  local_850 = CONCAT31(local_850._1_3_,param_3);
  piVar6 = *param_2;
  local_20 = local_820;
  local_18 = 0;
  local_1c = 0x400;
  wVar1 = *(wchar_t *)piVar6;
  local_834 = 0;
  local_859 = '\0';
  ppvVar8 = param_1;
  local_858 = param_2;
  local_845 = param_3;
  local_854 = param_4;
  local_82c = param_6;
  while (local_830 = ppvVar8, wVar1 != L'\0') {
    if (wVar1 == L'$') {
      local_84c = (int *)((int)piVar6 + 2);
      piVar10 = piVar6 + 1;
      piVar9 = piVar6;
      if (*(wchar_t *)local_84c == L'(') {
        pwVar5 = wcschr(L"*@<?",*(wchar_t *)piVar10);
        if (pwVar5 == (wchar_t *)0x0) {
          piVar9 = *param_2;
          goto LAB_0040faac;
        }
        iVar11 = 3;
LAB_0040fa96:
        FUN_0040ff9e(local_820,(wchar_t **)param_2,iVar11);
      }
      else {
LAB_0040faac:
        if (*(wchar_t *)local_84c == L'$') {
          wVar1 = *(wchar_t *)piVar10;
          if ((wVar1 == L'^') || (local_845 != '\x01')) {
LAB_0040faff:
            iVar11 = 5;
          }
          else if (wVar1 == L'@') {
            iVar11 = 2;
          }
          else {
            if (wVar1 == L'(') {
              piVar10 = (int *)((int)piVar6 + 6);
            }
            wVar1 = *(wchar_t *)((int)piVar10 + 2);
            if (((((wVar1 != L'F') && (wVar1 != L'D')) && (wVar1 != L'B')) && (wVar1 != L'R')) ||
               (*(wchar_t *)(piVar10 + 1) != L')')) goto LAB_0040faff;
            iVar11 = 4;
          }
          goto LAB_0040fa96;
        }
        pwVar5 = wcschr(L"*@<?",*(wchar_t *)((int)piVar9 + 2));
        if (pwVar5 != (wchar_t *)0x0) {
          iVar11 = 1;
          goto LAB_0040fa96;
        }
        if (*(wchar_t *)((int)*param_2 + 2) == L'(') {
          piVar6 = (int *)wcspbrk((wchar_t *)(*param_2 + 1),L" \t\n:)");
          local_84c = piVar6;
          uVar7 = FUN_0040ef5e(*(wchar_t *)piVar6);
          if ((char)uVar7 == '\0') goto LAB_0040fe3f;
          piStack_840 = *param_2;
          local_84c = (int *)((int)local_84c + 2);
          piVar10 = piStack_840 + 1;
          iVar11 = ((int)piVar6 - (int)piStack_840 >> 1) + -2;
          *local_858 = local_84c;
          iStack_83c = iVar11;
          piStack_838 = piVar10;
          uVar7 = FUN_0040ef5e(*(wchar_t *)local_84c);
          ppiVar2 = local_858;
          cVar4 = (char)uVar7;
          piVar6 = local_84c;
          while (cVar4 != '\0') {
            piVar6 = (int *)((int)piVar6 + 2);
            *ppiVar2 = piVar6;
            uVar7 = FUN_0040ef5e(*(wchar_t *)piVar6);
            piVar10 = piStack_838;
            iVar11 = iStack_83c;
            cVar4 = (char)uVar7;
          }
          uVar3 = (uint)uStack_844 >> 8;
          uStack_844 = CONCAT31((int3)uVar3,*(short *)((int)piStack_840 + iVar11 * 2 + 2) == 0x69);
          uVar7 = FUN_00411d95((ushort *)piVar10,iVar11,(ushort *)L"subst",5);
          if (((char)uVar7 == '\0') &&
             (uVar7 = FUN_00411d95((ushort *)piVar10,iVar11,(ushort *)L"substi",6),
             (char)uVar7 == '\0')) {
            uVar7 = FUN_00411d95((ushort *)piVar10,iVar11,(ushort *)L"strip",5);
            param_2 = local_858;
            if ((char)uVar7 == '\0') {
              uVar7 = FUN_00411d95((ushort *)piVar10,iVar11,(ushort *)L"filter",6);
              if (((char)uVar7 == '\0') &&
                 (uVar7 = FUN_00411d95((ushort *)piVar10,iVar11,(ushort *)L"filteri",7),
                 (char)uVar7 == '\0')) {
                uVar7 = FUN_00411d95((ushort *)piVar10,iVar11,(ushort *)L"filterout",9);
                if (((char)uVar7 == '\0') &&
                   (uVar7 = FUN_00411d95((ushort *)piVar10,iVar11,(ushort *)L"filterouti",10),
                   (char)uVar7 == '\0')) {
                  uVar7 = FUN_00411d95((ushort *)piVar10,iVar11,(ushort *)L"findstring",10);
                  if (((char)uVar7 == '\0') &&
                     (uVar7 = FUN_00411d95((ushort *)piVar10,iVar11,(ushort *)L"findstringi",0xb),
                     (char)uVar7 == '\0')) {
                    uVar7 = FUN_00411d95((ushort *)piVar10,iVar11,(ushort *)L"abspath",7);
                    param_2 = local_858;
                    if ((char)uVar7 == '\0') {
                      uVar7 = FUN_00411d95((ushort *)piVar10,iVar11,(ushort *)L"basename",8);
                      param_2 = local_858;
                      if ((char)uVar7 == '\0') {
                        uVar7 = FUN_00411d95((ushort *)piVar10,iVar11,(ushort *)L"patsubst",8);
                        if (((char)uVar7 == '\0') &&
                           (uVar7 = FUN_00411d95((ushort *)piVar10,iVar11,(ushort *)L"patsubsti",9),
                           (char)uVar7 == '\0')) {
                          FUN_00405ad3(DAT_00424730,0x410);
                          param_2 = local_858;
                        }
                        else {
                          param_2 = local_858;
                          FUN_004110d7(local_820,(short **)local_858,local_850,local_854,
                                       (char)uStack_844);
                        }
                      }
                      else {
                        FUN_00410fe9(local_820,(short **)local_858,local_850,local_854);
                      }
                    }
                    else {
                      FUN_00410ec1(local_820,(short **)local_858,local_850,local_854);
                    }
                  }
                  else {
                    param_2 = local_858;
                    FUN_00410e1c(local_820,(short **)local_858,local_850,local_854,(char)uStack_844)
                    ;
                  }
                  goto LAB_0040feee;
                }
                cVar4 = '\0';
              }
              else {
                cVar4 = '\x01';
              }
              param_2 = local_858;
              FUN_00410d01(local_820,(short **)local_858,local_850,local_854,(char)uStack_844,cVar4)
              ;
            }
            else {
              FUN_00410c76(local_820,(short **)local_858,local_850,local_854);
            }
          }
          else {
            param_2 = local_858;
            FUN_00410bc3(local_820,(short **)local_858,local_850,local_854,(char)uStack_844);
          }
        }
        else {
LAB_0040fe3f:
          if (*local_854 == (int *)0x0) {
            FUN_00405ad3(DAT_00424730,0x410);
          }
          ppiVar2 = (int **)*local_854;
          *local_854 = *ppiVar2;
          pwVar5 = wcschr((wchar_t *)ppiVar2[1],L'$');
          piVar6 = ppiVar2[1];
          if (pwVar5 == (wchar_t *)0x0) {
            piVar10 = piVar6;
            do {
              wVar1 = *(wchar_t *)piVar10;
              piVar10 = (int *)((int)piVar10 + 2);
            } while (wVar1 != (wchar_t)local_834);
            FUN_00410737(local_820,(wchar_t **)param_2,piVar6,
                         (void *)((int)piVar10 - (int)((int)piVar6 + 2) >> 1));
          }
          else {
            local_84c = (int *)0x0;
            piStack_840 = piVar6;
            ppvVar8 = (void **)FUN_0040f95a(apvStack_828,&piStack_840,(char)local_850,local_854,'\0'
                                            ,&local_84c);
            FUN_00410737(local_820,(wchar_t **)param_2,*ppvVar8,ppvVar8[1]);
            if (local_84c != (int *)0x0) {
              FUN_00412550(local_84c);
            }
          }
        }
      }
LAB_0040feee:
      piVar6 = *param_2;
      wVar1 = *(wchar_t *)piVar6;
      ppvVar8 = local_830;
    }
    else {
      if (wVar1 == L'\"') {
        local_859 = local_859 == '\0';
      }
      if ((param_5 != '\0') && ((wVar1 == L',' || (wVar1 == L')')))) break;
      if ((local_859 == '\0') && (wVar1 == L'^')) {
        FUN_00403b30(local_820,0x5e);
        *param_2 = (int *)((int)*param_2 + 2);
        if (*(wchar_t *)*param_2 == L'\"') {
          local_859 = '\x01';
        }
      }
      wVar1 = *(wchar_t *)*param_2;
      *param_2 = (int *)((int)*param_2 + 2);
      FUN_00403b30(local_820,wVar1);
      piVar6 = *param_2;
      wVar1 = *(wchar_t *)piVar6;
      ppvVar8 = local_830;
    }
  }
  FUN_00403b30(local_820,0);
  FUN_00403bd0(local_820,ppvVar8,local_82c);
  FUN_00412542(local_c ^ (uint)auStack_860);
  return;
}



void ** __fastcall
FUN_0040ff34(void **param_1,short **param_2,undefined4 param_3,int **param_4,char param_5,
            void **param_6)

{
  short sVar1;
  
  FUN_0040f95a(param_1,(int **)param_2,(char)param_3,param_4,'\x01',param_6);
  if (**param_2 == 0) {
    FUN_00405ad3(DAT_00424730,0x410);
  }
  sVar1 = **param_2;
  *param_2 = *param_2 + 1;
  if (param_5 == '\0') {
    if (sVar1 == 0x2c) {
      return param_1;
    }
  }
  else if (sVar1 == 0x29) {
    return param_1;
  }
  FUN_00405ad3(DAT_00424730,0x410);
  return param_1;
}



void __fastcall FUN_0040ff9e(void *param_1,wchar_t **param_2,int param_3)

{
  short sVar1;
  wchar_t wVar2;
  ushort uVar3;
  short **ppsVar4;
  uint uVar5;
  short *psVar6;
  char cVar7;
  uint uVar8;
  int *piVar9;
  int **ppiVar10;
  int **ppiVar11;
  wchar_t *pwVar12;
  short *psVar13;
  int iVar14;
  short *psVar15;
  int local_864 [2];
  void *local_85c;
  short *local_858;
  short *local_854;
  uint local_850;
  short *local_84c;
  wchar_t **local_848;
  short *local_844;
  short *local_840;
  char local_839;
  short *local_838;
  short *local_834;
  short *local_830;
  char local_82a;
  char local_829;
  undefined local_828 [2048];
  undefined *local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_14;
  
  local_14 = DAT_00414014 ^ (uint)&stack0xfffffff0;
  iVar14 = 1;
  local_834 = (short *)0x0;
  ppiVar10 = (int **)0x0;
  local_829 = '\0';
  local_839 = '\0';
  local_850 = 1;
  local_85c = param_1;
  local_848 = param_2;
  if (param_3 == 1) {
LAB_00410049:
    wVar2 = (*param_2)[iVar14];
    if (wVar2 == L'*') {
      if ((*param_2)[iVar14 + 1] == L'*') {
        iVar14 = iVar14 + 1;
        ppiVar11 = DAT_00424f44;
        goto LAB_004100ad;
      }
      local_834 = DAT_00424f58;
      local_839 = '\x01';
      psVar15 = local_834;
    }
    else {
      psVar15 = DAT_00424f4c;
      if ((wVar2 != L'<') &&
         ((ppiVar11 = DAT_00424f50, wVar2 == L'?' ||
          (ppiVar11 = ppiVar10, psVar15 = DAT_00424f54, wVar2 != L'@')))) {
LAB_004100ad:
        ppiVar10 = ppiVar11;
        psVar15 = local_834;
      }
    }
    local_834 = psVar15;
    local_850 = iVar14 + 1;
  }
  else {
    if (param_3 != 2) {
      if (param_3 == 3) {
        iVar14 = 2;
        local_829 = '\x01';
        goto LAB_00410049;
      }
      if (param_3 != 4) {
        if (param_3 == 5) {
          FUN_00403b30(param_1,0x24);
          *local_848 = *local_848 + 2;
        }
        goto LAB_00410181;
      }
      local_850 = 4;
      local_829 = '\x01';
    }
    local_834 = DAT_00424f48;
  }
  local_840 = (short *)0x0;
  local_830 = (short *)0x0;
  local_84c = (short *)0x0;
  if (local_834 == (short *)0x0) {
    if (ppiVar10 == (int **)0x0) {
      pwVar12 = *param_2;
      wVar2 = *pwVar12;
      while (((local_834 = (short *)(uint)(ushort)wVar2, wVar2 != L'\0' && (wVar2 != L' ')) &&
             (wVar2 != L'\t'))) {
        pwVar12 = pwVar12 + 1;
        wVar2 = *pwVar12;
      }
      psVar15 = (short *)0x0;
      *pwVar12 = L'\0';
      FUN_00405ad3(DAT_00424730,0xfa6);
      *pwVar12 = (wchar_t)local_834;
LAB_0041015e:
      psVar6 = local_830;
      psVar13 = (short *)0x0;
    }
    else {
LAB_0041019e:
      local_28 = local_828;
      local_24 = 0x400;
      local_20 = 0;
      for (; ppiVar10 != (int **)0x0; ppiVar10 = (int **)*ppiVar10) {
        if (local_829 == '\0') {
          FUN_00403b60(local_828,(short *)ppiVar10[1]);
        }
        else {
          piVar9 = ppiVar10[1];
          local_82a = '\0';
          psVar15 = (short *)((int)piVar9 + 2);
          do {
            sVar1 = *(short *)piVar9;
            piVar9 = (int *)((int)piVar9 + 2);
          } while (sVar1 != 0);
          FUN_004105e8(&local_858,(*local_848)[local_850],(short *)ppiVar10[1],
                       (short *)((int)piVar9 - (int)psVar15 >> 1),(short *)0x0,(short *)&local_82a);
          if (local_82a != '\0') {
            FUN_00403b30(local_828,0x22);
          }
          FUN_00403b91(local_828,local_858,(int)local_854);
          if (local_82a != '\0') {
            FUN_00403b30(local_828,0x22);
          }
        }
        if (*ppiVar10 != (int *)0x0) {
          FUN_00403b30(local_828,0x20);
        }
      }
      FUN_00403b30(local_828,0);
      ppsVar4 = (short **)FUN_00403bd0(local_828,&local_858,&local_840);
      psVar6 = *ppsVar4;
      psVar13 = local_840;
      psVar15 = ppsVar4[1];
    }
  }
  else {
    if (ppiVar10 != (int **)0x0) goto LAB_0041019e;
    psVar15 = local_834;
    do {
      sVar1 = *psVar15;
      psVar15 = psVar15 + 1;
    } while (sVar1 != 0);
    psVar15 = (short *)((int)psVar15 - (int)(local_834 + 1) >> 1);
    local_82a = '\0';
    local_840 = (short *)0x5c;
    psVar6 = local_834;
    local_830 = local_834;
    if (local_839 != '\0') {
      if (psVar15 == (short *)0x0) {
        local_82a = '\0';
      }
      else {
        if (*local_834 == 0x22) {
          local_82a = '\x01';
          psVar6 = local_834 + (int)psVar15 + -1;
          local_838 = local_834;
          local_834 = psVar15;
          ppsVar4 = (short **)
                    FUN_00411d65(&local_838,local_864,1,(int)psVar15 - ((*psVar6 == 0x22) + 1));
          local_834 = *ppsVar4;
          psVar15 = ppsVar4[1];
        }
        else {
          local_82a = '\0';
        }
        uVar5 = (int)psVar15 - 1;
        uVar8 = 0xffffffff;
        local_84c = psVar15;
        local_838 = local_834;
        psVar6 = psVar15;
        local_830 = local_834;
        if (-1 < (int)uVar5) {
          do {
            sVar1 = local_834[uVar5];
            if ((sVar1 == (ushort)local_840) || (sVar1 == 0x2f)) break;
            if ((sVar1 == 0x2e) && (uVar8 == 0xffffffff)) {
              uVar8 = uVar5;
            }
            uVar5 = uVar5 - 1;
          } while (-1 < (int)uVar5);
          if (uVar8 != 0xffffffff) {
            local_834 = psVar15;
            FUN_00411d65(&local_838,(int *)&local_858,0,uVar8);
            psVar15 = local_854;
            psVar6 = local_834;
            local_830 = local_858;
          }
        }
      }
    }
    local_834 = psVar6;
    cVar7 = '\0';
    psVar6 = local_830;
    if (local_829 != '\0') {
      local_84c = (short *)(uint)(ushort)(*local_848)[local_850];
      local_858 = local_830;
      local_854 = psVar15;
      if (psVar15 == (short *)0x0) {
        cVar7 = '\0';
      }
      else {
        if (*local_830 == 0x22) {
          local_829 = '\x01';
          ppsVar4 = (short **)
                    FUN_00411d65(&local_858,local_864,1,
                                 (int)psVar15 - ((local_830[(int)psVar15 + -1] == 0x22) + 1));
          psVar15 = ppsVar4[1];
          local_858 = *ppsVar4;
        }
        else {
          local_829 = '\0';
        }
        uVar5 = 0;
        local_830 = (short *)0xffffffff;
        local_834 = psVar15;
        while (local_834 = (short *)((int)local_834 + -1), psVar13 = (short *)0xffffffff,
              -1 < (int)local_834) {
          uVar3 = local_858[(int)local_834];
          local_850 = (uint)uVar3;
          psVar13 = local_834;
          if ((uVar3 == (ushort)local_840) || (uVar3 == 0x2f)) break;
          if ((uVar3 == 0x2e) && (local_830 == (short *)0xffffffff)) {
            local_830 = local_834;
          }
        }
        uVar8 = (uint)local_84c & 0xffff;
        local_854 = psVar15;
        if (uVar8 == 0x42) {
LAB_00410534:
          if (psVar13 == (short *)0xffffffff) {
            if (((short *)0x1 < psVar15) && (local_858[1] == 0x3a)) {
              uVar5 = 2;
            }
          }
          else {
            uVar5 = (int)psVar13 + 1;
          }
          psVar13 = psVar15;
          if (((short)local_84c == 0x42) && (local_830 != (short *)0xffffffff)) {
            psVar13 = (short *)((int)local_830 - uVar5);
          }
        }
        else {
          cVar7 = local_829;
          if (uVar8 == 0x44) {
            if (psVar13 == (short *)0xffffffff) {
              if (local_858[1] != 0x3a) {
                psVar15 = (short *)0x1;
                psVar6 = &DAT_004017ec;
                goto LAB_00410594;
              }
              psVar13 = (short *)0x2;
            }
            else if ((psVar13 == (short *)0x2) && (local_858[1] == 0x3a)) {
              psVar13 = (short *)0x3;
            }
          }
          else {
            if (uVar8 == 0x46) goto LAB_00410534;
            psVar6 = local_858;
            if ((uVar8 != 0x52) ||
               (psVar13 = local_830, psVar6 = local_858, local_830 == (short *)0xffffffff))
            goto LAB_00410594;
          }
        }
        FUN_00411d65(&local_858,(int *)&local_844,uVar5,(uint)psVar13);
        psVar15 = local_840;
        cVar7 = local_829;
        psVar6 = local_844;
      }
    }
LAB_00410594:
    local_830 = psVar6;
    if ((local_82a == '\0') && (cVar7 == '\0')) goto LAB_0041015e;
    local_840 = psVar15 + 1;
    psVar6 = (short *)FUN_00403cd7((uint)local_840);
    *psVar6 = 0x22;
    memcpy(psVar6 + 1,local_830,(int)psVar15 * 2);
    psVar6[(int)psVar15 + 1] = 0x22;
    psVar13 = psVar6;
    psVar15 = local_840;
  }
  FUN_00410737(local_85c,local_848,psVar6,psVar15);
  if (psVar13 != (short *)0x0) {
    FUN_00412550(psVar13);
  }
LAB_00410181:
  FUN_00412542(local_14 ^ (uint)&stack0xfffffff0);
  return;
}



short ** __fastcall
FUN_004105e8(short **param_1,short param_2,short *param_3,short *param_4,short *param_5,
            short *param_6)

{
  ushort uVar1;
  short **ppsVar2;
  short *psVar3;
  uint uVar4;
  int local_10;
  uint local_c;
  short local_6;
  
  if (param_4 == (short *)0x0) {
    *(undefined *)param_6 = 0;
    *param_1 = param_3;
    param_1[1] = (short *)0x0;
    return param_1;
  }
  uVar4 = 0;
  local_6 = param_2;
  if (((char)param_5 == '\0') && (*param_3 == 0x22)) {
    *(undefined *)param_6 = 1;
    ppsVar2 = (short **)
              FUN_00411d65(&param_3,&local_10,1,
                           (int)param_4 - ((param_3[(int)param_4 + -1] == 0x22) + 1));
    param_3 = *ppsVar2;
    param_4 = ppsVar2[1];
  }
  else {
    *(undefined *)param_6 = 0;
  }
  param_6 = (short *)0xffffffff;
  param_5 = param_4;
  while (param_5 = (short *)((int)param_5 + -1), psVar3 = (short *)0xffffffff, -1 < (int)param_5) {
    uVar1 = param_3[(int)param_5];
    local_c = (uint)uVar1;
    psVar3 = param_5;
    if ((local_c == 0x5c) || (uVar1 == 0x2f)) break;
    if ((uVar1 == 0x2e) && (param_6 == (short *)0xffffffff)) {
      param_6 = param_5;
    }
  }
  if (local_6 != 0x42) {
    if (local_6 == 0x44) {
      if (psVar3 == (short *)0xffffffff) {
        if (param_3[1] != 0x3a) {
          *param_1 = &DAT_004017ec;
          param_1[1] = (short *)0x1;
          return param_1;
        }
        psVar3 = (short *)0x2;
      }
      else if ((psVar3 == (short *)0x2) && (param_3[1] == 0x3a)) {
        psVar3 = (short *)0x3;
      }
      goto LAB_00410724;
    }
    if (local_6 != 0x46) {
      if ((local_6 != 0x52) || (psVar3 = param_6, param_6 == (short *)0xffffffff)) {
        *param_1 = param_3;
        param_1[1] = param_4;
        return param_1;
      }
      goto LAB_00410724;
    }
  }
  if (psVar3 == (short *)0xffffffff) {
    if (((short *)0x1 < param_4) && (param_3[1] == 0x3a)) {
      uVar4 = 2;
    }
  }
  else {
    uVar4 = (int)psVar3 + 1;
  }
  psVar3 = param_4;
  if ((local_6 == 0x42) && (param_6 != (short *)0xffffffff)) {
    psVar3 = (short *)((int)param_6 - uVar4);
  }
LAB_00410724:
  FUN_00411d65(&param_3,(int *)param_1,uVar4,(uint)psVar3);
  return param_1;
}



void __fastcall FUN_00410737(void *param_1,wchar_t **param_2,void *param_3,void *param_4)

{
  wchar_t *_Str;
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t *local_8;
  
  pwVar1 = *param_2;
  _Str = pwVar1 + 1;
  *param_2 = _Str;
  if (*_Str == L'^') {
    _Str = pwVar1 + 2;
    *param_2 = _Str;
  }
  local_8 = wcschr(_Str,L':');
  pwVar1 = *param_2;
  wVar2 = *pwVar1;
  while ((wVar2 != L'\0' && (wVar2 != L')'))) {
    if (wVar2 == L'^') {
      pwVar1 = pwVar1 + 1;
    }
    pwVar1 = pwVar1 + 1;
    wVar2 = *pwVar1;
  }
  if (((**param_2 == L'(') && (local_8 != (wchar_t *)0x0)) && (local_8 < pwVar1)) {
    FUN_00410822(param_1,(ushort **)&local_8,param_3,param_4);
  }
  else {
    FUN_00403b91(param_1,param_3,(int)param_4);
    local_8 = *param_2;
    wVar2 = *local_8;
    if (wVar2 == L'$') {
      local_8 = local_8 + 1;
      *param_2 = local_8;
      wVar2 = *local_8;
    }
    if (wVar2 == L'(') {
      do {
        local_8 = local_8 + 1;
        *param_2 = local_8;
      } while (*local_8 != L')');
    }
    else if ((wVar2 == L'*') && (local_8[1] == L'*')) {
      local_8 = local_8 + 1;
    }
    local_8 = local_8 + 1;
  }
  *param_2 = local_8;
  return;
}



void __fastcall FUN_00410822(void *param_1,ushort **param_2,void *param_3,void *param_4)

{
  ushort uVar1;
  ushort *_Memory;
  ushort *_Memory_00;
  undefined4 *****pppppuVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  undefined4 *****local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_00414014 ^ (uint)&stack0xfffffff0;
  *param_2 = *param_2 + 1;
  puVar5 = *param_2;
  uVar1 = *puVar5;
  while ((uVar1 != 0 && (uVar1 != 0x3d))) {
    if (uVar1 == 0x5e) {
      puVar5 = puVar5 + 1;
    }
    puVar5 = puVar5 + 1;
    uVar1 = *puVar5;
  }
  if (uVar1 != 0x3d) {
    FUN_00405ad3(DAT_00424724,0x3eb);
  }
  if (puVar5 == *param_2) {
    FUN_00405ad3(DAT_00424724,0x3ed);
  }
  uVar1 = *puVar5;
  puVar6 = puVar5;
  while ((uVar1 != 0 && (uVar1 != 0x29))) {
    if (uVar1 == 0x5e) {
      puVar6 = puVar6 + 1;
    }
    puVar6 = puVar6 + 1;
    uVar1 = *puVar6;
  }
  if (uVar1 != 0x29) {
    FUN_00405ad3(DAT_00424724,1000);
  }
  _Memory = (ushort *)FUN_00403cd7(((int)puVar5 - (int)*param_2 >> 1) + 1);
  puVar4 = *param_2;
  uVar1 = *puVar4;
  puVar3 = _Memory;
  while (uVar1 != 0x3d) {
    if (uVar1 == 0x5e) {
      puVar4 = puVar4 + 1;
      uVar1 = *puVar4;
    }
    puVar4 = puVar4 + 1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
    uVar1 = *puVar4;
  }
  *puVar3 = 0;
  _Memory_00 = (ushort *)FUN_00403cd7((int)puVar6 - (int)puVar5 >> 1);
  puVar4 = puVar4 + 1;
  uVar1 = *puVar4;
  puVar5 = _Memory_00;
  while (uVar1 != 0x29) {
    if (uVar1 == 0x5e) {
      puVar4 = puVar4 + 1;
      uVar1 = *puVar4;
    }
    puVar4 = puVar4 + 1;
    *puVar5 = uVar1;
    puVar5 = puVar5 + 1;
    uVar1 = *puVar4;
  }
  local_2c[0] = (undefined4 *****)0x0;
  local_1c = 0;
  *puVar5 = 0;
  *param_2 = puVar6 + 1;
  local_18 = 7;
  FUN_004121e1(local_2c,_Memory_00,(void *)((int)puVar5 - (int)_Memory_00 >> 1));
  pppppuVar2 = local_2c;
  if (7 < local_18) {
    pppppuVar2 = local_2c[0];
  }
  FUN_00410a3d(param_1,param_3,param_4,_Memory,(ushort *)((int)puVar3 - (int)_Memory >> 1),
               pppppuVar2,local_1c);
  if (7 < local_18) {
    FUN_0041211e(local_2c[0],local_18 + 1);
  }
  free(_Memory);
  free(_Memory_00);
  FUN_00412542(local_14 ^ (uint)&stack0xfffffff0);
  return;
}



void __thiscall
FUN_00410a3d(void *this,void *param_1,void *param_2,ushort *param_3,ushort *param_4,void *param_5,
            int param_6)

{
  void *pvVar1;
  void *pvVar2;
  void **ppvVar3;
  int local_18 [2];
  int local_10 [2];
  uint local_8;
  
  if (param_4 == (ushort *)0x0) {
    FUN_00403b91(this,param_1,(int)param_2);
  }
  else if (param_2 != (void *)0x0) {
    do {
      pvVar2 = param_2;
      pvVar1 = param_1;
      local_8 = FUN_00411cfe(&param_1,param_3,param_4);
      if (local_8 == 0xffffffff) {
        FUN_00403b91(this,pvVar1,(int)pvVar2);
        param_1 = (void *)0x0;
        param_2 = (void *)0x0;
      }
      else {
        ppvVar3 = (void **)FUN_00411d65(&param_1,local_10,0,local_8);
        FUN_00403b91(this,*ppvVar3,(int)ppvVar3[1]);
        FUN_00403b91(this,param_5,param_6);
        ppvVar3 = (void **)FUN_00411d65(&param_1,local_18,(int)param_4 + local_8,0xffffffff);
        param_1 = *ppvVar3;
        param_2 = ppvVar3[1];
      }
    } while (param_2 != (void *)0x0);
  }
  return;
}



void __thiscall
FUN_00410ae4(void *this,void *param_1,void *param_2,wchar_t *param_3,size_t param_4,void *param_5,
            int param_6)

{
  wchar_t _C;
  wint_t wVar1;
  int iVar2;
  void **ppvVar3;
  void *pvVar4;
  int local_18 [2];
  int local_10 [2];
  uint local_8;
  
  if (param_4 == 0) {
    FUN_00403b91(this,param_1,(int)param_2);
  }
  else {
    wVar1 = towupper(*param_3);
    local_8 = (uint)wVar1;
LAB_00410b73:
    if (param_2 != (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (param_2 != (void *)0x0) {
        do {
          _C = *(wchar_t *)((int)param_1 + (int)pvVar4 * 2);
          if (_C == *param_3) {
LAB_00410b40:
            iVar2 = _wcsnicmp((wchar_t *)((int)param_1 + (int)pvVar4 * 2),param_3,param_4);
            if (iVar2 == 0) {
              ppvVar3 = (void **)FUN_00411d65(&param_1,local_10,0,(uint)pvVar4);
              FUN_00403b91(this,*ppvVar3,(int)ppvVar3[1]);
              FUN_00403b91(this,param_5,param_6);
              ppvVar3 = (void **)FUN_00411d65(&param_1,local_18,param_4 + (int)pvVar4,0xffffffff);
              param_1 = *ppvVar3;
              param_2 = ppvVar3[1];
              goto LAB_00410b73;
            }
          }
          else {
            wVar1 = towupper(_C);
            if (wVar1 == (wint_t)local_8) goto LAB_00410b40;
          }
          pvVar4 = (void *)((int)pvVar4 + 1);
        } while (pvVar4 < param_2);
      }
      FUN_00403b91(this,param_1,(int)param_2);
      param_2 = (void *)0x0;
      param_1 = (void *)0x0;
      goto LAB_00410b73;
    }
  }
  return;
}



void __fastcall
FUN_00410bc3(void *param_1,short **param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  void **ppvVar2;
  void *local_34;
  void *local_30;
  wchar_t *local_2c;
  ushort *local_28;
  void *local_24;
  int local_20;
  void *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  uint local_c;
  
  local_c = DAT_00414014 ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_1c = param_1;
  FUN_0040ff34(&local_2c,param_2,param_3,param_4,'\0',&local_18);
  FUN_0040ff34(&local_24,param_2,param_3,param_4,'\0',&local_14);
  FUN_0040ff34(&local_34,param_2,param_3,param_4,'\x01',&local_10);
  if (param_5 == '\0') {
    FUN_00410a3d(local_1c,local_34,local_30,(ushort *)local_2c,local_28,local_24,local_20);
  }
  else {
    FUN_00410ae4(local_1c,local_34,local_30,local_2c,(size_t)local_28,local_24,local_20);
  }
  iVar1 = 3;
  ppvVar2 = &local_10 + 1;
  do {
    ppvVar2 = ppvVar2 + -1;
    iVar1 = iVar1 + -1;
    if (*ppvVar2 != (void *)0x0) {
      FUN_00412550(*ppvVar2);
    }
  } while (iVar1 != 0);
  FUN_00412542(local_c ^ (uint)&stack0xfffffffc);
  return;
}



void __fastcall FUN_00410c76(void *param_1,short **param_2,undefined4 param_3,undefined4 param_4)

{
  ushort *local_20;
  ushort *local_1c;
  ushort *local_18;
  ushort *local_14;
  ushort *local_10;
  int local_c;
  void *local_8;
  
  local_8 = (void *)0x0;
  FUN_0040ff34(&local_20,param_2,param_3,param_4,'\x01',&local_8);
  local_18 = local_20;
  local_14 = local_1c;
  while (local_1c != (ushort *)0x0) {
    local_10 = (ushort *)0x0;
    local_c = 0;
    FUN_004112b1(&local_10,&local_18,local_18,local_1c);
    local_1c = local_14;
    if (local_c != 0) {
      FUN_00403b91(param_1,local_10,local_c);
      if (local_1c == (ushort *)0x0) break;
      FUN_00403b30(param_1,0x20);
    }
  }
  if (local_8 != (void *)0x0) {
    FUN_00412550(local_8);
  }
  return;
}



void __fastcall
FUN_00410d01(void *param_1,short **param_2,undefined4 param_3,undefined4 param_4,char param_5,
            char param_6)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  ushort **ppuVar6;
  undefined4 local_44;
  undefined4 local_40;
  ushort *local_3c;
  ushort *local_38;
  ushort *local_34;
  ushort *local_30;
  undefined4 local_2c;
  ushort *local_28 [4];
  ushort *local_18;
  ushort *local_14;
  uint local_10;
  ushort *local_c;
  uint local_8;
  
  local_2c = 0;
  local_28[0] = (ushort *)0x0;
  FUN_0040ff34(&local_3c,param_2,param_3,param_4,'\0',&local_2c);
  FUN_0040ff34(&local_34,param_2,param_3,param_4,'\x01',local_28);
  local_28[1] = local_34;
  local_28[2] = local_30;
  if (local_30 != (ushort *)0x0) {
    bVar1 = false;
    do {
      local_c = (ushort *)0x0;
      local_8 = 0;
      FUN_004112b1(&local_c,local_28 + 1,local_28[1],local_28[2]);
      uVar2 = local_8;
      local_28[3] = local_3c;
      local_18 = local_38;
      if (local_8 != 0) {
        do {
          if (local_18 == (ushort *)0x0) {
            cVar3 = '\0';
            goto LAB_00410dca;
          }
          local_14 = (ushort *)0x0;
          local_10 = 0;
          FUN_004112b1(&local_14,local_28 + 3,local_28[3],local_18);
          local_44 = 0;
          local_40 = 0;
          uVar4 = FUN_00411355(param_5,&local_44,(int)local_c,uVar2,(int)local_14,local_10);
        } while ((char)uVar4 == '\0');
        cVar3 = '\x01';
LAB_00410dca:
        if (cVar3 == param_6) {
          if (bVar1) {
            FUN_00403b30(param_1,0x20);
          }
          FUN_00403b91(param_1,local_c,uVar2);
          bVar1 = true;
        }
      }
    } while (local_28[2] != (ushort *)0x0);
  }
  iVar5 = 2;
  ppuVar6 = local_28 + 1;
  do {
    ppuVar6 = ppuVar6 + -1;
    iVar5 = iVar5 + -1;
    if (*ppuVar6 != (ushort *)0x0) {
      FUN_00412550(*ppuVar6);
    }
  } while (iVar5 != 0);
  return;
}



void __fastcall
FUN_00410e1c(void *param_1,short **param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  undefined4 uVar1;
  int iVar2;
  wchar_t **ppwVar3;
  int local_20;
  uint local_1c;
  undefined4 local_18;
  wchar_t *local_14 [4];
  
  local_18 = 0;
  local_14[0] = (wchar_t *)0x0;
  FUN_0040ff34(local_14 + 1,param_2,param_3,param_4,'\0',&local_18);
  FUN_0040ff34(&local_20,param_2,param_3,param_4,'\x01',local_14);
  if (param_5 == '\0') {
    iVar2 = FUN_00411cfe(&local_20,(ushort *)local_14[1],(ushort *)local_14[2]);
    if (iVar2 == -1) goto LAB_00410e9c;
  }
  else {
    uVar1 = FUN_00411243(local_14[1],(uint)local_14[2],local_20,local_1c);
    if ((char)uVar1 == '\0') goto LAB_00410e9c;
  }
  FUN_00403b91(param_1,local_14[1],(int)local_14[2]);
LAB_00410e9c:
  iVar2 = 2;
  ppwVar3 = local_14 + 1;
  do {
    ppwVar3 = ppwVar3 + -1;
    iVar2 = iVar2 + -1;
    if (*ppwVar3 != (wchar_t *)0x0) {
      FUN_00412550(*ppwVar3);
    }
  } while (iVar2 != 0);
  return;
}



void __fastcall FUN_00410ec1(void *param_1,short **param_2,undefined4 param_3,undefined4 param_4)

{
  void *this;
  LPWSTR lpBuffer;
  undefined4 *****lpFileName;
  DWORD DVar1;
  ushort *local_40;
  ushort *local_3c;
  void *local_38;
  ushort *local_34;
  ushort *local_30;
  ushort *local_2c;
  void *local_28;
  void *local_24;
  undefined4 *****local_20 [4];
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_00414014 ^ (uint)&stack0xfffffffc;
  local_24 = (void *)0x0;
  local_38 = param_1;
  FUN_0040ff34(&local_40,param_2,param_3,param_4,'\x01',&local_24);
  lpBuffer = (LPWSTR)FUN_00403cd7(0x8000);
  local_34 = local_40;
  local_30 = local_3c;
  while (local_3c != (ushort *)0x0) {
    local_2c = (ushort *)0x0;
    local_28 = (void *)0x0;
    FUN_004112b1(&local_2c,&local_34,local_34,local_3c);
    local_3c = local_30;
    if (local_28 != (void *)0x0) {
      local_20[0] = (undefined4 *****)0x0;
      local_10 = 0;
      local_c = 7;
      FUN_004121e1(local_20,local_2c,local_28);
      lpFileName = local_20;
      if (7 < local_c) {
        lpFileName = local_20[0];
      }
      DVar1 = GetFullPathNameW((LPCWSTR)lpFileName,0x8000,lpBuffer,(LPWSTR *)0x0);
      if (7 < local_c) {
        FUN_0041211e(local_20[0],local_c + 1);
      }
      if (DVar1 == 0) {
        FUN_00405ad3(DAT_00424730,0x410);
      }
      this = local_38;
      FUN_00403b60(local_38,lpBuffer);
      if (local_3c == (ushort *)0x0) break;
      FUN_00403b30(this,0x20);
    }
  }
  if (lpBuffer != (LPWSTR)0x0) {
    FUN_00412550(lpBuffer);
  }
  if (local_24 != (void *)0x0) {
    FUN_00412550(local_24);
  }
  FUN_00412542(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __fastcall FUN_00410fe9(void *param_1,short **param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *local_34;
  int local_30;
  ushort *local_2c;
  ushort *local_28;
  ushort *local_24;
  ushort *local_20;
  ushort *local_1c;
  int local_18;
  ushort *local_14;
  int local_10;
  void *local_c;
  void *local_8;
  
  local_8 = (void *)0x0;
  local_c = param_1;
  FUN_0040ff34(&local_2c,param_2,param_3,param_4,'\x01',&local_8);
  local_24 = local_2c;
  local_20 = local_28;
  while (local_28 != (ushort *)0x0) {
    local_14 = (ushort *)0x0;
    local_10 = 0;
    FUN_004112b1(&local_14,&local_24,local_24,local_28);
    local_28 = local_20;
    if (local_10 != 0) {
      uVar2 = local_10 - 1;
      uVar3 = 0xffffffff;
      local_34 = local_14;
      local_30 = local_10;
      if ((int)uVar2 < 0) {
LAB_00411096:
        local_1c = local_14;
        local_18 = local_10;
      }
      else {
        do {
          uVar1 = local_14[uVar2];
          if ((uVar1 == 0x5c) || (uVar1 == 0x2f)) break;
          if ((uVar1 == 0x2e) && (uVar3 == 0xffffffff)) {
            uVar3 = uVar2;
          }
          uVar2 = uVar2 - 1;
        } while (-1 < (int)uVar2);
        param_1 = local_c;
        if (uVar3 == 0xffffffff) goto LAB_00411096;
        FUN_00411d65(&local_34,(int *)&local_1c,0,uVar3);
        param_1 = local_c;
      }
      FUN_00403b91(param_1,local_1c,local_18);
      if (local_28 == (ushort *)0x0) break;
      FUN_00403b30(param_1,0x20);
    }
  }
  if (local_8 != (void *)0x0) {
    FUN_00412550(local_8);
  }
  return;
}



void __fastcall
FUN_004110d7(void *param_1,short **param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  void *this;
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort **ppuVar4;
  int iVar5;
  void **ppvVar6;
  ushort *puVar7;
  ushort *puVar8;
  int local_58 [2];
  int local_50;
  uint local_4c;
  ushort *local_48;
  ushort *local_44;
  ushort *local_40;
  ushort *local_3c;
  void *local_38;
  int local_34;
  ushort *local_30;
  ushort *local_2c;
  int local_28;
  uint local_24;
  void *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  uint local_c;
  
  local_c = DAT_00414014 ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_20 = param_1;
  FUN_0040ff34(&local_50,param_2,param_3,param_4,'\0',&local_18);
  FUN_0040ff34(&local_28,param_2,param_3,param_4,'\0',&local_14);
  FUN_0040ff34(&local_48,param_2,param_3,param_4,'\x01',&local_10);
  local_40 = local_48;
  local_3c = local_44;
  while (local_44 != (ushort *)0x0) {
    local_30 = (ushort *)0x0;
    local_2c = (ushort *)0x0;
    FUN_004112b1(&local_30,&local_40,local_40,local_44);
    puVar8 = local_2c;
    local_44 = local_3c;
    if (local_2c != (ushort *)0x0) {
      local_38 = (void *)0x0;
      local_34 = 0;
      uVar2 = FUN_00411355(param_5,&local_38,(int)local_30,(uint)local_2c,local_50,local_4c);
      this = local_20;
      puVar7 = local_30;
      if ((char)uVar2 == '\0') {
LAB_004111f2:
        FUN_00403b91(this,puVar7,(int)puVar8);
      }
      else {
        local_1c = 0;
        if (local_24 != 0) {
          do {
            uVar3 = FUN_004114cf(&local_1c,local_28,local_24);
            uVar1 = local_1c;
            if ((char)uVar3 != '\0') {
              FUN_00403b91(this,local_38,local_34);
              ppuVar4 = (ushort **)FUN_00411d65(&local_28,local_58,local_1c + 1,0xffffffff);
              puVar8 = ppuVar4[1];
              puVar7 = *ppuVar4;
              goto LAB_004111f2;
            }
            FUN_00403b30(this,*(undefined2 *)(local_28 + local_1c * 2));
            local_1c = uVar1 + 1;
          } while (local_1c < local_24);
        }
      }
      if (local_44 == (ushort *)0x0) break;
      FUN_00403b30(this,0x20);
    }
  }
  iVar5 = 3;
  ppvVar6 = &local_10 + 1;
  do {
    ppvVar6 = ppvVar6 + -1;
    iVar5 = iVar5 + -1;
    if (*ppvVar6 != (void *)0x0) {
      FUN_00412550(*ppvVar6);
    }
  } while (iVar5 != 0);
  FUN_00412542(local_c ^ (uint)&stack0xfffffffc);
  return;
}



uint FUN_00411243(wchar_t *param_1,uint param_2,int param_3,uint param_4)

{
  wchar_t _C;
  wint_t wVar1;
  wint_t wVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_2;
  if (param_2 <= param_4) {
    wVar1 = towupper(*param_1);
    uVar5 = 0;
    do {
      _C = *(wchar_t *)(param_3 + uVar5 * 2);
      if (((*param_1 == _C) || (wVar2 = towupper(_C), wVar1 == wVar2)) &&
         (iVar3 = _wcsnicmp(param_1,(wchar_t *)(param_3 + uVar5 * 2),param_2), iVar3 == 0)) {
        return 1;
      }
      uVar5 = uVar5 + 1;
      uVar4 = param_4 - param_2;
    } while (uVar5 <= uVar4);
  }
  return uVar4 & 0xffffff00;
}



void __fastcall FUN_004112b1(ushort **param_1,undefined4 *param_2,ushort *param_3,ushort *param_4)

{
  ushort *puVar1;
  undefined4 uVar2;
  ushort **ppuVar3;
  uint uVar4;
  undefined4 *puVar5;
  int local_14 [2];
  undefined4 local_c;
  uint local_8;
  
  local_8 = FUN_00411e7c(param_3,(int)param_4,param_1,(ushort *)&DAT_00401714,3);
  if (local_8 == 0xffffffff) {
    *param_2 = 0;
    param_2[1] = 0;
    *param_1 = param_3;
    param_1[1] = param_4;
  }
  else {
    ppuVar3 = (ushort **)FUN_00411d65(&param_3,local_14,0,local_8);
    puVar1 = *ppuVar3;
    param_1[1] = ppuVar3[1];
    *param_1 = puVar1;
    uVar4 = FUN_00411dba((int)param_3,(uint)param_4,local_8 + 1,(ushort *)&DAT_00401714,3);
    if (uVar4 == 0xffffffff) {
      local_c = 0;
      puVar5 = &local_c;
      local_8 = 0;
    }
    else {
      puVar5 = (undefined4 *)FUN_00411d65(&param_3,local_14,uVar4,0xffffffff);
    }
    uVar2 = puVar5[1];
    *param_2 = *puVar5;
    param_2[1] = uVar2;
  }
  return;
}



undefined4 __fastcall
FUN_00411355(char param_1,undefined4 *param_2,int param_3,uint param_4,int param_5,uint param_6)

{
  ushort uVar1;
  ushort _C;
  wint_t wVar2;
  wint_t wVar3;
  uint uVar4;
  undefined2 extraout_var;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined uVar7;
  uint uVar8;
  bool bVar9;
  wchar_t *local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  wchar_t *local_14;
  uint local_10;
  uint local_c;
  char local_5;
  
  uVar7 = 0;
  local_10 = 0;
  local_c = 0;
  local_18 = 0;
  uVar8 = param_6;
  local_5 = param_1;
  if (param_6 != 0) {
    do {
      local_18 = local_10;
      if (param_4 <= local_c) break;
      local_20 = local_10;
      uVar4 = FUN_004114cf(&local_10,param_5,uVar8);
      if ((char)uVar4 != '\0') {
        FUN_00411d65(&param_5,(int *)&local_14,local_10 + 1,0xffffffff);
        FUN_00411d65(&param_3,&local_1c,local_c,0xffffffff);
        uVar8 = local_10;
        uVar4 = local_18;
        if (local_18 < local_10) goto LAB_00411431;
        puVar5 = (undefined4 *)FUN_00411d65(&local_1c,(int *)&local_24,0,local_18 - local_10);
        uVar6 = *puVar5;
        uVar4 = puVar5[1];
        param_2[1] = uVar4;
        *param_2 = uVar6;
        uVar4 = FUN_00411d65(&local_1c,(int *)&local_24,uVar4,0xffffffff);
        if (local_5 == '\0') {
          if (local_20 != uVar8) goto LAB_004114c6;
          uVar4 = FUN_00411fac((ushort *)local_24,(ushort *)local_14,local_20);
        }
        else {
          uVar4 = _wcsnicmp(local_24,local_14,uVar8);
        }
        bVar9 = uVar4 == 0;
        goto LAB_004114c2;
      }
      uVar1 = *(ushort *)(param_5 + local_10 * 2);
      local_20 = (uint)uVar1;
      _C = *(ushort *)(param_3 + local_c * 2);
      if (uVar1 != _C) {
        uVar4 = (uint)_C;
        if (local_5 == '\0') {
LAB_00411431:
          *param_2 = 0;
          param_2[1] = 0;
          return uVar4 & 0xffffff00;
        }
        wVar2 = towupper(_C);
        wVar3 = towupper((wint_t)local_20);
        uVar4 = CONCAT22(extraout_var,wVar3);
        uVar8 = param_6;
        if (wVar3 != wVar2) goto LAB_00411431;
      }
      local_18 = local_10 + 1;
      local_c = local_c + 1;
      local_10 = local_18;
    } while (local_18 < uVar8);
  }
  uVar4 = local_18 + 1;
  if ((local_18 + 1 == uVar8) && (uVar4 = param_5, *(short *)(param_5 + local_18 * 2) == 0x25)) {
    *param_2 = 0;
    uVar6 = CONCAT31((int3)((uint)param_5 >> 8),1);
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    if (local_18 == uVar8) {
      bVar9 = local_c == param_4;
LAB_004114c2:
      if (bVar9) {
        uVar7 = 1;
      }
    }
LAB_004114c6:
    uVar6 = CONCAT31((int3)(uVar4 >> 8),uVar7);
  }
  return uVar6;
}



uint __thiscall FUN_004114cf(void *this,int param_1,uint param_2)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  
                    // WARNING: Load size is inaccurate
  uVar3 = *this;
  sVar2 = *(short *)(param_1 + uVar3 * 2);
  if (sVar2 == 0x25) {
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    if (((sVar2 == 0x5c) && (uVar1 = uVar3 + 1, uVar1 < param_2)) &&
       ((sVar2 = *(short *)(param_1 + 2 + uVar3 * 2), sVar2 == 0x25 ||
        (((sVar2 == 0x5c && (uVar3 = uVar3 + 2, uVar3 < param_2)) &&
         (*(short *)(param_1 + uVar3 * 2) == 0x25)))))) {
      *(uint *)this = uVar1;
    }
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}



void __fastcall FUN_00411529(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t local_41c [260];
  wchar_t local_214 [258];
  wchar_t local_10 [4];
  uint local_8;
  
  local_8 = DAT_00414014 ^ (uint)&stack0xfffffffc;
  _wsplitpath_s(param_1,local_10,3,local_214,0x100,(wchar_t *)0x0,0,(wchar_t *)0x0,0);
  _wmakepath_s(local_41c,0x104,local_10,local_214,param_2,(wchar_t *)0x0);
  FUN_0040ec65(local_41c);
  FUN_00412542(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



undefined4 __fastcall FUN_0041159d(short *param_1)

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
LAB_004116c8:
        pwVar1 = wcschr(_Str,L'/');
        if ((pwVar1 == (wchar_t *)0x0) && (pwVar1 = wcschr(_Str,L'\\'), pwVar1 == (wchar_t *)0x0)) {
          pwVar1 = wcschr(_Str,L'.');
          if (pwVar1 == (wchar_t *)0x0) {
            uVar5 = 1;
            pwVar1 = (wchar_t *)0x0;
          }
          else {
            pwVar1 = (wchar_t *)FUN_00405ad3(DAT_00424730,0x444);
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
            goto LAB_004116c8;
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



void __fastcall FUN_00411712(wchar_t *param_1,int param_2,wchar_t *param_3,wchar_t *param_4)

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
  
  local_8 = DAT_00414014 ^ (uint)&stack0xfffffffc;
  wVar6 = *param_3;
  pwVar1 = param_1 + param_2;
joined_r0x00411745:
  if (wVar6 == L'\0') {
    if (param_1 < pwVar1) {
      *param_1 = L'\0';
    }
LAB_00411a5f:
    FUN_00412542(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (pwVar1 <= param_1) goto LAB_00411a5f;
  pwVar9 = param_3;
  if (wVar6 == L'%') {
    pwVar9 = param_3 + 1;
    wVar6 = *pwVar9;
    pwVar10 = param_3;
    if (wVar6 == L'\0') goto LAB_00411a41;
    if (wVar6 == L'%') {
      *param_1 = L'%';
      goto LAB_004117b0;
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
          goto LAB_004117ad;
        }
        goto LAB_00411a5f;
      }
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      bVar2 = false;
      local_214 = L'\0';
      do {
        pwVar10 = pwVar9 + 1;
        wVar6 = *pwVar10;
        if (wVar6 == L'\0') goto LAB_00411a07;
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
          if (wVar6 != L'p') goto LAB_00411a07;
          bVar3 = true;
        }
        pwVar9 = pwVar10;
      } while (wVar6 != L'F');
      if (param_4 == (wchar_t *)0x0) {
        FUN_00405ad3(0,0x449);
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
LAB_004117ad:
    *param_1 = wVar6;
LAB_004117b0:
    param_1 = param_1 + 1;
    pwVar10 = pwVar9;
  }
LAB_00411a41:
  param_3 = pwVar10 + 1;
  wVar6 = *param_3;
  goto joined_r0x00411745;
LAB_00411a07:
  for (; (pwVar10 = pwVar9, param_3 <= pwVar9 && (param_1 < pwVar1)); param_1 = param_1 + 1) {
    wVar6 = *param_3;
    param_3 = param_3 + 1;
    *param_1 = wVar6;
  }
  goto LAB_00411a41;
}



undefined4 * __thiscall FUN_00411a70(void *this,int param_1)

{
  undefined4 *puVar1;
  wint_t wVar2;
  wint_t wVar3;
  wint_t *pwVar4;
  wint_t *pwVar5;
  
  puVar1 = (undefined4 *)(&DAT_00424510)[param_1];
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

void __fastcall FUN_00411b28(short *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  undefined4 uStack_30;
  wchar_t *pwStack_2c;
  wchar_t *local_28;
  short *local_14;
  short local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00414014 ^ (uint)&stack0xfffffffc;
  psVar6 = param_1;
  do {
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
  } while (sVar1 != 0);
  local_28 = (wchar_t *)0x411b65;
  iVar3 = -(((int)psVar6 - (int)(param_1 + 1) >> 1) * 2 + 2);
  psVar6 = param_2;
  do {
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
  } while (sVar1 != 0);
  local_14 = param_2;
  *(undefined4 *)((int)&local_28 + iVar3) = 0x411b88;
  iVar4 = -(((int)psVar6 - (int)(param_2 + 1) >> 1) * 2 + 2);
  sVar1 = *param_1;
  local_c = 0x22;
  if (sVar1 == 0x22) {
    param_1 = param_1 + 1;
    sVar1 = *param_1;
  }
  psVar6 = (short *)(&stack0xffffffdc + iVar3);
  if (sVar1 != 0) {
    psVar6 = (short *)(&stack0xffffffdc + iVar3);
    do {
      sVar2 = sVar1;
      psVar5 = psVar6;
      *psVar5 = sVar2;
      psVar6 = psVar5 + 1;
      sVar1 = *(short *)(((int)param_1 - (int)(&stack0xffffffdc + iVar3)) + (int)psVar6);
    } while (sVar1 != 0);
    param_2 = local_14;
    if ((psVar6 != (short *)(&stack0xffffffdc + iVar3)) && (sVar2 == (short)local_c)) {
      psVar6 = psVar5;
    }
  }
  *psVar6 = 0;
  sVar1 = *param_2;
  if (sVar1 == (short)local_c) {
    param_2 = param_2 + 1;
    sVar1 = *param_2;
  }
  psVar6 = (short *)(&stack0xffffffdc + iVar4 + iVar3);
  if (sVar1 != 0) {
    psVar6 = (short *)(&stack0xffffffdc + iVar4 + iVar3);
    do {
      psVar5 = psVar6;
      local_10 = sVar1;
      *psVar5 = sVar1;
      psVar6 = psVar5 + 1;
      sVar1 = *(short *)(((int)param_2 - (int)(&stack0xffffffdc + iVar4 + iVar3)) + (int)psVar6);
    } while (sVar1 != 0);
    if ((psVar6 != (short *)(&stack0xffffffdc + iVar4 + iVar3)) && (local_10 == (short)local_c)) {
      psVar6 = psVar5;
    }
  }
  *(undefined **)((int)&local_28 + iVar4 + iVar3) = &stack0xffffffdc + iVar4 + iVar3;
  *(undefined **)((int)&pwStack_2c + iVar4 + iVar3) = &stack0xffffffdc + iVar3;
  *psVar6 = 0;
  *(undefined4 *)((int)&uStack_30 + iVar4 + iVar3) = 0x411c2e;
  _wcsicmp(*(wchar_t **)((int)&pwStack_2c + iVar4 + iVar3),
           *(wchar_t **)((int)&local_28 + iVar4 + iVar3));
  FUN_00412542(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



short * __fastcall FUN_00411c42(short *param_1)

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
  psVar3 = (short *)FUN_0040b57e(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
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



void __fastcall FUN_00411cb7(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  if (*param_1 == L'\"') {
    pwVar2 = wcsrchr(param_1,L'\"');
    *pwVar2 = L'\0';
    wVar1 = param_1[1];
    *param_1 = wVar1;
    pwVar2 = param_1;
    while (wVar1 != L'\0') {
      wVar1 = pwVar2[2];
      pwVar2[1] = wVar1;
      pwVar2 = pwVar2 + 1;
    }
  }
  _wfsopen(param_1,param_2,0x20);
  return;
}



int __thiscall FUN_00411cfe(void *this,ushort *param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  
  puVar1 = *(ushort **)((int)this + 4);
                    // WARNING: Load size is inaccurate
  puVar2 = *this;
  if (param_2 <= puVar1) {
    if (param_2 == (ushort *)0x0) {
      return 0;
    }
    puVar4 = puVar2;
    while (puVar4 = (ushort *)
                    FUN_00411f83((short *)puVar4,
                                 (int)puVar2 +
                                 (((int)puVar1 + (1 - (int)param_2)) * 2 - (int)puVar4) >> 1,
                                 (short *)param_1), puVar4 != (ushort *)0x0) {
      iVar3 = FUN_00411fac(puVar4,param_1,(int)param_2);
      if (iVar3 == 0) {
        return (int)puVar4 - (int)puVar2 >> 1;
      }
      puVar4 = puVar4 + 1;
    }
  }
  return -1;
}



void __thiscall FUN_00411d65(void *this,int *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  
  if (param_2 <= *(uint *)((int)this + 4)) {
    uVar2 = *(uint *)((int)this + 4) - param_2;
    if (param_3 <= uVar2) {
      uVar2 = param_3;
    }
                    // WARNING: Load size is inaccurate
    *param_1 = *this + param_2 * 2;
    param_1[1] = uVar2;
    return;
  }
  FUN_00403ccb();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



uint FUN_00411d95(ushort *param_1,int param_2,ushort *param_3,int param_4)

{
  if ((param_2 == param_4) && (param_2 = FUN_00411fac(param_1,param_3,param_2), param_2 == 0)) {
    return 1;
  }
  return param_2 & 0xffffff00;
}



void __fastcall FUN_00411dba(int param_1,uint param_2,uint param_3,ushort *param_4,int param_5)

{
  ushort *puVar1;
  undefined4 uVar2;
  short *psVar3;
  ushort *puVar4;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00414014 ^ (uint)&stack0xfffffffc;
  if (param_3 < param_2) {
    memset(local_10c,0,0x100);
    puVar1 = (ushort *)(param_1 + param_2 * 2);
    puVar4 = (ushort *)(param_1 + param_3 * 2);
    uVar2 = FUN_00411f53(local_10c,param_4,param_4 + param_5);
    if ((char)uVar2 == '\0') {
      while ((puVar4 < puVar1 &&
             (psVar3 = FUN_00411f83((short *)param_4,param_5,(short *)puVar4),
             psVar3 != (short *)0x0))) {
        puVar4 = puVar4 + 1;
      }
    }
    else {
      while (((puVar4 < puVar1 && (*puVar4 < 0x100)) && (local_10c[*puVar4] != '\0'))) {
        puVar4 = puVar4 + 1;
      }
    }
  }
  FUN_00412542(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __fastcall
FUN_00411e7c(ushort *param_1,int param_2,undefined4 param_3,ushort *param_4,int param_5)

{
  ushort *puVar1;
  undefined4 uVar2;
  short *psVar3;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00414014 ^ (uint)&stack0xfffffffc;
  if ((param_5 != 0) && (param_2 != 0)) {
    memset(local_10c,0,0x100);
    puVar1 = param_1 + param_2;
    uVar2 = FUN_00411f53(local_10c,param_4,param_4 + param_5);
    if ((char)uVar2 == '\0') {
      if (param_1 < puVar1) {
        do {
          psVar3 = FUN_00411f83((short *)param_4,param_5,(short *)param_1);
          if (psVar3 != (short *)0x0) break;
          param_1 = param_1 + 1;
        } while (param_1 < puVar1);
      }
    }
    else if (param_1 < puVar1) {
      do {
        if ((*param_1 < 0x100) && (local_10c[*param_1] != '\0')) break;
        param_1 = param_1 + 1;
      } while (param_1 < puVar1);
    }
  }
  FUN_00412542(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



undefined4 __thiscall FUN_00411f53(void *this,ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  uint in_EAX;
  
  while( true ) {
    if (param_1 == param_2) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
    uVar1 = *param_1;
    if (0xff < uVar1) break;
    in_EAX = uVar1 & 0xff;
    param_1 = param_1 + 1;
    *(undefined *)(in_EAX + (int)this) = 1;
  }
  return (uint)(byte)(uVar1 >> 8) << 8;
}



short * __fastcall FUN_00411f83(short *param_1,int param_2,short *param_3)

{
  short *psVar1;
  
  psVar1 = (short *)0x0;
  if (param_2 != 0) {
    for (; (psVar1 = param_1, *param_1 != *param_3 && (psVar1 = (short *)0x0, param_2 != 1));
        param_2 = param_2 + -1) {
      param_1 = param_1 + 1;
    }
  }
  return psVar1;
}



undefined4 __fastcall FUN_00411fac(ushort *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  uVar3 = 0;
  if (param_3 != 0) {
    uVar1 = *param_2;
    uVar2 = *param_1;
    if (uVar1 <= uVar2) {
      iVar4 = (int)param_1 - (int)param_2;
      bVar5 = uVar2 < uVar1;
      bVar6 = uVar2 == uVar1;
      do {
        if (!bVar5 && !bVar6) {
          return 1;
        }
        if (param_3 == 1) {
          return 0;
        }
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
        uVar1 = *(ushort *)(iVar4 + (int)param_2);
        bVar5 = uVar1 < *param_2;
        bVar6 = uVar1 == *param_2;
      } while (!bVar5);
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



void FUN_00411ff3(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __fastcall FUN_00411fff(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = &PTR_FUN_00402654;
  return param_1;
}



undefined4 * __thiscall FUN_00412029(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00402654;
  __std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_00412550(this);
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_00412057(void *this,int param_1)

{
  FUN_0041207f(this,param_1);
  *(undefined ***)this = &PTR_FUN_00402654;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_0041207f(void *this,int param_1)

{
  *(undefined ***)this = &PTR_FUN_00402654;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  __std_exception_copy(param_1 + 4,(undefined4 *)((int)this + 4));
  return (undefined4 *)this;
}



void FUN_004120ac(void)

{
  void *pExceptionObject;
  undefined4 local_10 [3];
  
  FUN_00411fff(local_10);
                    // WARNING: Subroutine does not return
  _CxxThrowException(pExceptionObject,(ThrowInfo *)&DAT_00413220);
}



void * FUN_004120c8(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (param_1 < 0x80000000) {
    uVar2 = param_1 * 2;
    if (uVar2 < 0x1000) {
      if (uVar2 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = FUN_0040b57e(uVar2);
      }
    }
    else {
      if (uVar2 + 0x23 <= uVar2) goto LAB_00412118;
      pvVar3 = FUN_0040b57e(uVar2 + 0x23);
      if (pvVar3 == (void *)0x0) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar4 = (void *)((int)pvVar3 + 0x23U & 0xffffffe0);
      *(void **)((int)pvVar4 - 4) = pvVar3;
    }
    return pvVar4;
  }
LAB_00412118:
  FUN_004120ac();
  pcVar1 = (code *)swi(3);
  pvVar4 = (void *)(*pcVar1)();
  return pvVar4;
}



void FUN_0041211e(void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  if ((0xfff < (uint)(param_2 * 2)) &&
     (pvVar1 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_00412550(pvVar1);
  return;
}



void ** __thiscall FUN_00412158(void *this,void *param_1,undefined4 param_2,void *param_3)

{
  uint uVar1;
  code *pcVar2;
  void *_Dst;
  void **ppvVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 < (void *)0x7fffffff) {
    uVar1 = *(uint *)((int)this + 0x14);
    uVar4 = (uint)param_1 | 7;
    uVar5 = 0x7ffffffe;
    if (((uVar4 < 0x7fffffff) && (uVar1 <= 0x7ffffffe - (uVar1 >> 1))) &&
       (uVar5 = (uVar1 >> 1) + uVar1, uVar5 <= uVar4)) {
      uVar5 = uVar4;
    }
    _Dst = FUN_004120c8(uVar5 + 1);
    *(uint *)((int)this + 0x14) = uVar5;
    *(void **)((int)this + 0x10) = param_1;
    memcpy(_Dst,param_3,(int)param_1 * 2);
    *(undefined2 *)((int)param_1 * 2 + (int)_Dst) = 0;
    if (7 < uVar1) {
                    // WARNING: Load size is inaccurate
      FUN_0041211e(*this,uVar1 + 1);
    }
    *(void **)this = _Dst;
    return (void **)this;
  }
  FUN_00411ff3();
  pcVar2 = (code *)swi(3);
  ppvVar3 = (void **)(*pcVar2)();
  return ppvVar3;
}



void ** __thiscall FUN_004121e1(void *this,void *param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = param_2;
  if (param_2 < *(void **)((int)this + 0x14) || param_2 == *(void **)((int)this + 0x14)) {
    pvVar1 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
                    // WARNING: Load size is inaccurate
      pvVar1 = *this;
    }
    *(void **)((int)this + 0x10) = param_2;
    memmove(pvVar1,param_1,(int)param_2 * 2);
    *(undefined2 *)((int)param_2 * 2 + (int)pvVar1) = 0;
  }
  else {
    param_2 = (void *)((uint)param_2 & 0xffffff00);
    this = FUN_00412158(this,pvVar1,param_2,param_1);
  }
  return (void **)this;
}



int __cdecl FUN_00412231(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  puVar4 = &param_4;
  uVar3 = 0;
  puVar1 = (undefined4 *)FUN_0040d1ce();
  iVar2 = __stdio_common_vswprintf_s(*puVar1,puVar1[1],param_1,param_2,param_3,uVar3,puVar4);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



void __fastcall FUN_0041225f(wchar_t *param_1)

{
  wchar_t *pwVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  WCHAR *pWVar5;
  HANDLE local_260;
  _WIN32_FIND_DATAW local_25c;
  uint local_8;
  
  local_8 = DAT_00414014 ^ (uint)&stack0xfffffffc;
  pwVar1 = (wchar_t *)FUN_004081f8(param_1,&local_25c,&local_260);
  if (pwVar1 != (wchar_t *)0x0) {
    puVar2 = FUN_0040ec13();
    uVar3 = FUN_00411529(param_1,pwVar1);
    puVar2[1] = uVar3;
    while (pWVar5 = FUN_00408383(&local_25c,local_260), pWVar5 != (WCHAR *)0x0) {
      puVar4 = FUN_0040ec13();
      uVar3 = FUN_00411529(param_1,pWVar5);
      *puVar4 = puVar2;
      puVar4[1] = uVar3;
      puVar2 = puVar4;
    }
  }
  FUN_00412542(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __cdecl free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x004122eb. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4

int FUN_004123b6(void)

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
    if (DAT_004144bc != 1) {
      if (DAT_004144bc == 0) {
        DAT_004144bc = 1;
        iVar4 = _initterm_e(&LAB_0040100c,&DAT_0040101c);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        _initterm(&LAB_00401000,&LAB_00401008);
        DAT_004144bc = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      ppcVar5 = (code **)FUN_00412afc();
      if ((*ppcVar5 != (code *)0x0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)ppcVar5), (char)uVar3 != '\0')) {
        pcVar1 = *ppcVar5;
        uVar9 = 0;
        uVar8 = 2;
        uVar3 = 0;
        _guard_check_icall();
        (*pcVar1)(uVar3,uVar8,uVar9);
      }
      piVar6 = (int *)FUN_00412b02();
      if ((*piVar6 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar6), (char)uVar3 != '\0')) {
        _register_thread_local_exe_atexit_callback(*piVar6);
      }
      _get_initial_wide_environment();
      piVar6 = (int *)__p___wargv();
      iVar4 = *piVar6;
      piVar6 = (int *)__p___argc();
      unaff_ESI = FUN_0040bdc3(*piVar6,iVar4);
      uVar7 = FUN_00412c28();
      if ((char)uVar7 != '\0') {
        if (!bVar2) {
          _cexit();
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_00412529;
    }
  }
  FUN_00412b08(7);
LAB_00412529:
                    // WARNING: Subroutine does not return
  exit(unaff_ESI);
}



void entry(void)

{
  ___security_init_cookie();
  FUN_004123b6();
  return;
}



void __fastcall FUN_00412542(int param_1)

{
  undefined1 in_stack_00000004;
  
  if (param_1 == DAT_00414014) {
    return;
  }
  FUN_00412586(in_stack_00000004);
  return;
}



void __cdecl FUN_00412550(void *param_1)

{
  free(param_1);
  return;
}



void __cdecl FUN_0041255e(_EXCEPTION_POINTERS *param_1)

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

void FUN_00412586(undefined param_1)

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
  _DAT_00414298 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_004142a0 = (undefined4)uVar9;
  _DAT_004142b0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_004142b4 = &param_1;
  _DAT_004141f0 = 0x10001;
  _DAT_004141a0 = 0xc0000409;
  _DAT_004141a4 = 1;
  _DAT_004141b0 = 1;
  DAT_004141b4 = 2;
  _DAT_004141ac = unaff_retaddr;
  _DAT_0041427c = in_GS;
  _DAT_00414280 = in_FS;
  _DAT_00414284 = in_ES;
  _DAT_00414288 = in_DS;
  _DAT_0041428c = unaff_EDI;
  _DAT_00414290 = unaff_ESI;
  _DAT_00414294 = unaff_EBX;
  _DAT_0041429c = uVar3;
  _DAT_004142a4 = unaff_EBP;
  DAT_004142a8 = unaff_retaddr;
  _DAT_004142ac = in_CS;
  _DAT_004142b8 = in_SS;
  FUN_0041255e((_EXCEPTION_POINTERS *)&PTR_DAT_00401030);
  return;
}



void FUN_00412680(void)

{
  FUN_0041268c(8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_0041268c(undefined4 param_1)

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
  _DAT_00414298 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_004142a0 = (undefined4)uVar9;
  _DAT_004142b0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_004142b4 = &param_1;
  _DAT_004141a0 = 0xc0000409;
  _DAT_004141a4 = 1;
  _DAT_004141b0 = 1;
  DAT_004141b4 = param_1;
  _DAT_004141ac = unaff_retaddr;
  _DAT_0041427c = in_GS;
  _DAT_00414280 = in_FS;
  _DAT_00414284 = in_ES;
  _DAT_00414288 = in_DS;
  _DAT_0041428c = unaff_EDI;
  _DAT_00414290 = unaff_ESI;
  _DAT_00414294 = unaff_EBX;
  _DAT_0041429c = uVar3;
  _DAT_004142a4 = unaff_EBP;
  DAT_004142a8 = unaff_retaddr;
  _DAT_004142ac = in_CS;
  _DAT_004142b8 = in_SS;
  FUN_0041255e((_EXCEPTION_POINTERS *)&PTR_DAT_00401030);
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
  _except_handler4_common(&DAT_00414014,FUN_00412542,param_1,param_2,param_3,param_4);
  return;
}



undefined4 * __thiscall FUN_0041278a(void *this,byte param_1)

{
  *(undefined ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    FUN_00412550(this);
  }
  return (undefined4 *)this;
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
      if (DAT_004144c0 != (void *)0x0) {
        pvVar3 = DAT_004144c0;
        pvVar1 = DAT_004144c0;
      }
      DAT_004144c0 = pvVar1;
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
    DAT_004144c4 = 1;
  }
  FUN_00412d75();
  uVar1 = FUN_00412aaf();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_00412aaf();
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    uVar1 = FUN_00412aaf();
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
  
  if (DAT_004144c5 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_00412b08(5);
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((uVar3 == 0) || (param_1 != 0)) {
    _DAT_004144c8 = 0xffffffff;
    _DAT_004144cc = 0xffffffff;
    _DAT_004144d0 = 0xffffffff;
    _DAT_004144d4 = 0xffffffff;
    _DAT_004144d8 = 0xffffffff;
    _DAT_004144dc = 0xffffffff;
LAB_004128cf:
    DAT_004144c5 = '\x01';
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    uVar3 = _initialize_onexit_table(&DAT_004144c8);
    if (uVar3 == 0) {
      uVar3 = _initialize_onexit_table(&DAT_004144d4);
      if (uVar3 == 0) goto LAB_004128cf;
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
  iVar1 = DAT_004144c0;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_004144c0 = 0;
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
  if ((DAT_004144c4 == '\0') || (param_2 == '\0')) {
    FUN_00412aaf();
    FUN_00412aaf();
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
  
  if (_DAT_004144c8 == -1) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_004144c8,_Func);
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
  if ((DAT_00414014 == 0xbb40e64e) || ((DAT_00414014 & 0xffff0000) == 0)) {
    DAT_00414014 = ___get_entropy();
    if (DAT_00414014 == 0xbb40e64e) {
      DAT_00414014 = 0xbb40e64f;
    }
    else if ((DAT_00414014 & 0xffff0000) == 0) {
      DAT_00414014 = DAT_00414014 | (DAT_00414014 | 0x4711) << 0x10;
    }
  }
  DAT_00414010 = ~DAT_00414014;
  return;
}



undefined FUN_00412aaf(void)

{
  return 1;
}



undefined * FUN_00412afc(void)

{
  return &DAT_00438ef0;
}



undefined * FUN_00412b02(void)

{
  return &DAT_00438eec;
}



void FUN_00412b08(undefined4 param_1)

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
  FUN_00412ccc();
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
    FUN_00412ccc();
  }
  return;
}



uint FUN_00412c28(void)

{
  HMODULE pHVar1;
  int *piVar2;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 != (HMODULE)0x0) && (*(short *)&pHVar1->unused == 0x5a4d)) &&
      (piVar2 = (int *)((int)&pHVar1->unused + pHVar1[0xf].unused), *piVar2 == 0x4550)) &&
     ((pHVar1 = (HMODULE)0x10b, *(short *)(piVar2 + 6) == 0x10b && (0xe < (uint)piVar2[0x1d])))) {
    return CONCAT31(1,piVar2[0x3a] != 0);
  }
  return (uint)pHVar1 & 0xffffff00;
}



undefined4 FUN_00412c76(int **param_1)

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

void FUN_00412ccc(void)

{
  _DAT_004144e8 = 0;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00414014 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



// WARNING: Removing unreachable block (ram,0x00412de4)
// WARNING: Removing unreachable block (ram,0x00412da8)
// WARNING: Removing unreachable block (ram,0x00412e5c)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00412d75(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  
  _DAT_004144ec = 0;
  DAT_00414018 = DAT_00414018 | 1;
  BVar4 = IsProcessorFeaturePresent(10);
  uVar5 = DAT_00414018;
  if (BVar4 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar6 = puVar2[3];
    if (((piVar1[2] ^ 0x49656e69U | piVar1[3] ^ 0x6c65746eU | piVar1[1] ^ 0x756e6547U) == 0) &&
       (((((uVar5 = *puVar2 & 0xfff3ff0, uVar5 == 0x106c0 || (uVar5 == 0x20660)) ||
          (uVar5 == 0x20670)) || ((uVar5 == 0x30650 || (uVar5 == 0x30660)))) || (uVar5 == 0x30670)))
       ) {
      DAT_004144f0 = DAT_004144f0 | 1;
    }
    if (*piVar1 < 7) {
      uVar7 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar7 = *(uint *)(iVar3 + 4);
      if ((uVar7 & 0x200) != 0) {
        DAT_004144f0 = DAT_004144f0 | 2;
      }
    }
    _DAT_004144ec = 1;
    uVar5 = DAT_00414018 | 2;
    if ((uVar6 & 0x100000) != 0) {
      uVar5 = DAT_00414018 | 6;
      _DAT_004144ec = 2;
      if ((((uVar6 & 0x8000000) != 0) && ((uVar6 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        _DAT_004144ec = 3;
        uVar5 = DAT_00414018 | 0xe;
        if ((uVar7 & 0x20) != 0) {
          _DAT_004144ec = 5;
          uVar5 = DAT_00414018 | 0x2e;
          if (((uVar7 & 0xd0030000) == 0xd0030000) && ((in_XCR0 & 0xe0) == 0xe0)) {
            DAT_00414018 = DAT_00414018 | 0x6e;
            _DAT_004144ec = 6;
            uVar5 = DAT_00414018;
          }
        }
      }
    }
  }
  DAT_00414018 = uVar5;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___scrt_is_ucrt_dll_in_use
// 
// Library: Visual Studio 2019 Release

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return _DAT_0041401c != 0;
}



void _except_handler4_common(void)

{
                    // WARNING: Could not recover jumptable at 0x00412f55. Too many branches
                    // WARNING: Treating indirect jump as call
  _except_handler4_common();
  return;
}



void __current_exception(void)

{
                    // WARNING: Could not recover jumptable at 0x00412f5b. Too many branches
                    // WARNING: Treating indirect jump as call
  __current_exception();
  return;
}



void __current_exception_context(void)

{
                    // WARNING: Could not recover jumptable at 0x00412f61. Too many branches
                    // WARNING: Treating indirect jump as call
  __current_exception_context();
  return;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00412f67. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



void __cdecl exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x00412f6d. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  exit(_Code);
  return;
}



void _get_initial_wide_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x00412f91. Too many branches
                    // WARNING: Treating indirect jump as call
  _get_initial_wide_environment();
  return;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x00412f97. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x00412f9d. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



void __cdecl _exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x00412fa3. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _exit(_Code);
  return;
}



void __p___argc(void)

{
                    // WARNING: Could not recover jumptable at 0x00412faf. Too many branches
                    // WARNING: Treating indirect jump as call
  __p___argc();
  return;
}



void __p___wargv(void)

{
                    // WARNING: Could not recover jumptable at 0x00412fb5. Too many branches
                    // WARNING: Treating indirect jump as call
  __p___wargv();
  return;
}



void __cdecl _cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00412fbb. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}



void _register_thread_local_exe_atexit_callback(void)

{
                    // WARNING: Could not recover jumptable at 0x00412fc7. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_thread_local_exe_atexit_callback();
  return;
}



void _initialize_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x00412fdf. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_onexit_table();
  return;
}



void _register_onexit_function(void)

{
                    // WARNING: Could not recover jumptable at 0x00412fe5. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_onexit_function();
  return;
}



void _crt_atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00412feb. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_atexit();
  return;
}



void terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x00412ff7. Too many branches
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
  
  if ((_DAT_004144ec < 1) || ((param_1 != -0x3ffffd4c && (param_1 != -0x3ffffd4b)))) {
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00414014 ^ (uint)&param_2;
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



void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    // WARNING: Could not recover jumptable at 0x0041314b. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413151. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413157. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}




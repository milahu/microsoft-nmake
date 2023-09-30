#include "out.h"



void FUN_00401030(void)

{
  int *piVar1;
  int iVar2;
  int *local_4;
  
  if (DAT_00413a3c != 0) {
    DAT_00413a48 = DAT_00413a48 | 0x20;
    FUN_00401170();
    DAT_00413a3c = 0;
  }
  if (((DAT_00413a48 & 0x20) != 0) && (iVar2 = FUN_0040c3a0(&DAT_00413aa0), iVar2 != 0)) {
    if ((DAT_00413a48 & 0x10) != 0) {
      FUN_00403220(DAT_00413424,0x444);
    }
    FUN_00403220(DAT_00413424,0x43d);
  }
  local_4 = (int *)FUN_0040ad20();
  if ((DAT_00413a48 & 0x40) == 0) {
    iVar2 = FUN_0040add0((undefined4 *)&DAT_00413aa0);
    local_4[1] = iVar2;
  }
  else {
    local_4[1] = DAT_004133fc;
    DAT_004133fc = 0;
  }
  if ((((DAT_00413a48 & 0x10) == 0) || ((DAT_00413a48 & 0x20) != 0)) &&
     (FUN_0040b110((int *)local_4[1],&DAT_00413a28,0), piVar1 = (int *)DAT_00413a28,
     (DAT_00413a48 & 0x20) != 0)) {
    FUN_004013d0(&DAT_00413004,&local_4,(int **)&DAT_00413a28);
    FUN_004013d0(&DAT_00413000,&local_4,(int **)0x0);
    DAT_00413a28 = (int **)piVar1;
    while (DAT_00413a28 != (int **)0x0) {
      piVar1 = *DAT_00413a28;
      FUN_0040ada0((int *)DAT_00413a28);
      DAT_00413a28 = (int **)piVar1;
    }
  }
  FUN_0040ae30((int **)&DAT_00413a38,local_4);
  return;
}



void FUN_00401170(void)

{
  int *piVar1;
  int iVar2;
  
  DAT_00413a44 = DAT_004133d0;
  DAT_00413a38 = FUN_0040ad20();
  *(undefined4 *)(DAT_00413a38 + 4) = DAT_00413a3c;
  piVar1 = (int *)DAT_00413a28;
  FUN_004013d0(&DAT_00413004,(int **)&DAT_00413a38,(int **)&DAT_00413a28);
  FUN_004013d0(&DAT_00413000,(int **)&DAT_00413a38,(int **)0x0);
  DAT_00413a28 = (int **)piVar1;
  while (DAT_00413a28 != (int **)0x0) {
    piVar1 = *DAT_00413a28;
    FUN_0040ada0((int *)DAT_00413a28);
    DAT_00413a28 = (int **)piVar1;
  }
  if (DAT_00413a38 == 0) {
    if ((DAT_00413a48 & 0x20) == 0) {
      FUN_00403220(DAT_004133f4,0x43b);
    }
    if (DAT_00413a38 == 0) {
      return;
    }
  }
  iVar2 = FUN_0040c3a0(*(char **)(DAT_00413a38 + 4));
  if (iVar2 != 0) {
    DAT_00413a48 = DAT_00413a48 | 0x10;
  }
  return;
}



void FUN_00401230(void)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (DAT_00413a3c == 0) {
    DAT_00413a48 = DAT_00413a48 & 0xdf;
  }
  else {
    FUN_00401170();
    DAT_00413a3c = 0;
  }
  if (DAT_00413aa1 != '\0') {
    DAT_00413a44 = DAT_00413a44 | 0x20;
  }
  if (DAT_00413a38 == (int *)0x0) {
    FUN_00403220(DAT_00413424,0x40d);
  }
  if ((DAT_00413a48 & 0x10) == 0) {
    if (*DAT_00413a38 == 0) {
      bVar1 = FUN_00401310((uchar *)DAT_00413a38[1]);
      if (CONCAT31(extraout_var,bVar1) != 0) {
        free((void *)DAT_00413a38[1]);
        FUN_0040ada0(DAT_00413a38);
        goto LAB_004012fb;
      }
    }
    DAT_00411b10 = DAT_00413a38;
  }
  else {
    if ((DAT_00413a44 & 0x20) != 0) {
      FUN_00403220(DAT_00413424,0x440);
    }
    FUN_00401bc0((int)DAT_00413a38);
    FUN_0040ada0(DAT_00413a38);
  }
LAB_004012fb:
  DAT_00413a38 = (int *)0x0;
  DAT_00413a48 = DAT_00413a48 | 0x80;
  return;
}



bool FUN_00401310(uchar *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _mbsicmp(param_1,(uchar *)s__SILENT_00413ec0);
  if (iVar1 == 0) {
    DAT_00413a48 = DAT_00413a48 | 2;
    FUN_004086d0('s',1);
  }
  iVar2 = _mbsicmp(param_1,(uchar *)s__IGNORE_00413eb8);
  if (iVar2 == 0) {
    DAT_00413a48 = DAT_00413a48 | 4;
    FUN_004086d0('i',1);
    return true;
  }
  iVar2 = _mbscmp(param_1,(uchar *)s__SUFFIXES_00413ea8);
  if (iVar2 == 0) {
    DAT_00413a48 = DAT_00413a48 | 1;
    return true;
  }
  iVar2 = _mbscmp(param_1,(uchar *)s__PRECIOUS_00413ec8);
  if (iVar2 == 0) {
    DAT_00413a48 = DAT_00413a48 | 8;
  }
  return iVar2 == 0 || iVar1 == 0;
}



void FUN_004013d0(uchar *param_1,int **param_2,int **param_3)

{
  uchar **ppuVar1;
  uchar *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int **ppiVar6;
  int **ppiVar7;
  int **ppiStack_10;
  undefined4 *puStack_c;
  undefined4 *local_8;
  uchar *local_4;
  
  local_8 = (undefined4 *)0x0;
  local_4 = (uchar *)0x0;
  ppiVar6 = (int **)0x0;
  ppiVar7 = (int **)*param_2;
  do {
    while( true ) {
      while( true ) {
        if (ppiVar7 == (int **)0x0) {
          return;
        }
        ppuVar1 = (uchar **)(ppiVar7 + 1);
        puVar2 = _mbspbrk(*ppuVar1,param_1);
        if (puVar2 != (uchar *)0x0) break;
        ppiVar6 = ppiVar7;
        ppiVar7 = (int **)*ppiVar7;
      }
      if (*param_1 != '$') break;
      local_8 = FUN_0040b700(*ppuVar1,param_3);
      free(*ppuVar1);
LAB_00401470:
      if (ppiVar6 == (int **)0x0) {
        *param_2 = *ppiVar7;
        FUN_0040ada0((int *)ppiVar7);
        ppiVar7 = (int **)*param_2;
      }
      else {
        *ppiVar6 = *ppiVar7;
        FUN_0040ada0((int *)ppiVar7);
        ppiVar7 = (int **)*ppiVar6;
      }
      if (*param_1 == '$') {
        puStack_c = local_8;
        puVar4 = (undefined4 *)FUN_00401550((char **)&puStack_c);
        while (puVar4 != (undefined4 *)0x0) {
          ppiStack_10 = (int **)FUN_0040ad20();
          piVar5 = (int *)FUN_0040add0(puVar4);
          ppiStack_10[1] = piVar5;
          FUN_0040ae10(param_2,ppiStack_10);
          if (ppiVar6 == (int **)0x0) {
            ppiVar6 = ppiStack_10;
          }
          puVar4 = (undefined4 *)FUN_00401550((char **)&puStack_c);
        }
        free(local_8);
      }
      else {
        if (ppiStack_10 != (int **)0x0) {
          if (ppiVar6 == (int **)0x0) {
            piVar5 = *ppiStack_10;
            ppiVar6 = ppiStack_10;
            while (piVar5 != (int *)0x0) {
              ppiVar6 = (int **)*ppiVar6;
              piVar5 = *ppiVar6;
            }
          }
          FUN_0040ae30((int **)&ppiStack_10,*param_2);
          *param_2 = (int *)ppiStack_10;
        }
        free(local_4);
      }
    }
    iVar3 = FUN_0040c3a0((char *)*ppuVar1);
    if ((iVar3 == 0) && (ppiStack_10 = (int **)FUN_0040cb30(*ppuVar1), ppiStack_10 != (int **)0x0))
    {
      local_4 = *ppuVar1;
      goto LAB_00401470;
    }
    ppiVar6 = ppiVar7;
    ppiVar7 = (int **)*ppiVar7;
  } while( true );
}



char * FUN_00401550(char **param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  for (pcVar3 = *param_1; (*pcVar3 == ' ' || (*pcVar3 == '\t')); pcVar3 = pcVar3 + 1) {
  }
  pcVar2 = pcVar3;
  cVar1 = *pcVar3;
  if (cVar1 == '\0') {
    return (char *)0x0;
  }
  if (cVar1 == '\"') {
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
    while ((cVar1 != '\0' && (*pcVar3 != '\"'))) {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
  }
  else {
    while (((cVar1 != '\0' && (*pcVar3 != ' ')) && (*pcVar3 != '\t'))) {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
  }
  cVar1 = *pcVar3;
  if ((cVar1 == ' ') || (cVar1 == '\t')) {
    *pcVar3 = '\0';
  }
  else {
    if (cVar1 == '\"') {
      pcVar3[1] = '\0';
      *param_1 = pcVar3 + 2;
      return pcVar2;
    }
    if (cVar1 == '\0') {
      *param_1 = pcVar3;
      return pcVar2;
    }
  }
  *param_1 = pcVar3 + 1;
  return pcVar2;
}



void FUN_004015e0(void)

{
  if ((DAT_00413a48 & 0x80) != 0) {
    DAT_00413a48 = DAT_00413a48 & 0x7f;
  }
  if ((DAT_00413a48 & 0x10) == 0) {
    if (((DAT_00413a48 & 2) == 0) && ((DAT_00413a48 & 4) == 0)) {
      if ((DAT_00413a48 & 1) == 0) {
        if ((DAT_00413a48 & 8) == 0) {
          DAT_00413a40 = FUN_0040acf0(0x18);
          *DAT_00413a40 = DAT_00413a38;
          DAT_00413a40[1] = DAT_00413a28;
        }
        else if (DAT_00413a38 != (int **)0x0) {
          FUN_00401d00((int **)&DAT_00413a30,DAT_00413a38);
        }
      }
      else if (DAT_00413a38 == (int **)0x0) {
        FUN_00401cc0();
      }
      else {
        FUN_00401d00((int **)&DAT_00413a2c,DAT_00413a38);
      }
    }
    else if (DAT_00413a38 != (int **)0x0) {
      FUN_00403220(DAT_00413424,0x442);
    }
  }
  else if (DAT_00413a38 != (int **)0x0) {
    FUN_00403220(DAT_00413424,0x43e);
  }
  DAT_00413a48 = DAT_00413a48 | 0x40;
  DAT_00413a38 = (int **)0x0;
  DAT_00413a28 = 0;
  return;
}



void FUN_00401710(void)

{
  bool bVar1;
  int **ppiVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  
  bVar1 = true;
  iVar4 = 1;
  if ((DAT_00413a48 & 0x10) == 0) {
    if (((DAT_00413a48 & 2) == 0) && ((DAT_00413a48 & 0xd) == 0)) {
      *(int *)(DAT_00413a40 + 8) = DAT_00413a38;
      *(undefined4 *)(DAT_00413a40 + 0xc) = DAT_00413a28;
      *(undefined *)(DAT_00413a40 + 0x10) = DAT_00413a44;
      ppiVar2 = DAT_00411b10;
      while (ppiVar2 != (int **)0x0) {
        DAT_00411b10 = ppiVar2;
        bVar3 = FUN_00401310((uchar *)ppiVar2[1]);
        if (CONCAT31(extraout_var,bVar3) != 0) {
          FUN_00403220(DAT_00413424,0x445);
        }
        FUN_00401bf0((uchar *)ppiVar2[1],iVar4,&DAT_00413a40);
        if (DAT_004133dc == (int **)0x0) {
          bVar1 = false;
          DAT_004133dc = ppiVar2;
        }
        DAT_00411b10 = (int **)*ppiVar2;
        if (bVar1) {
          FUN_0040ada0((int *)ppiVar2);
        }
        ppiVar2 = DAT_00411b10;
        if (iVar4 != 0) {
          iVar4 = 0;
        }
      }
    }
    else if (DAT_00413a38 != 0) {
      FUN_00403220(DAT_00413424,0x441);
    }
  }
  else {
    *(int *)(DAT_00413a34 + 0xc) = DAT_00413a38;
  }
  DAT_00411b10 = (int **)0x0;
  DAT_00413a38 = 0;
  DAT_00413a28 = 0;
  DAT_00413a40 = 0;
  DAT_00413a48 = 0;
  return;
}



undefined4 FUN_00401980(byte *param_1,int *param_2,byte param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  
  bVar1 = *param_1;
  pbVar2 = param_1;
  while ((bVar1 != 0 && (((&DAT_004149c0)[*pbVar2] & 1) != 0))) {
    pbVar2 = pbVar2 + 1;
    bVar1 = *pbVar2;
  }
  if (*pbVar2 != 0) {
    if ((param_3 & 4) != 0) {
      return 0;
    }
    FUN_00403220(DAT_00413424,0x3e9);
  }
  uVar3 = FUN_004019f0(param_1,param_2,param_3);
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_004019f0(uchar *param_1,int *param_2,byte param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uchar *puVar8;
  bool bVar9;
  int local_8;
  
  local_8 = 1;
  if ((param_3 & 2) == 0) {
    if (((_DAT_004133b4 != 0) && ((DAT_004133d4 & 4) == 0)) &&
       (pcVar4 = getenv((char *)param_1), pcVar4 != (char *)0x0)) {
      uVar5 = FUN_00407b70(param_1);
      if ((uVar5 != 0) &&
         (((*(byte *)(uVar5 + 0xc) & 2) != 0 ||
          (((DAT_004133d4 & 4) != 0 && ((*(byte *)(uVar5 + 0xc) & 4) != 0)))))) {
        return 0;
      }
      piVar2 = FUN_0040b690(param_2);
      iVar3 = FUN_00401e00((char *)param_1,(char *)piVar2);
      if (iVar3 == -1) {
        FUN_00403220(DAT_00413424,0x41f);
      }
    }
  }
  else if (*(char *)param_2 != '\0') {
    piVar2 = FUN_0040b690(param_2);
    iVar3 = FUN_00401e00((char *)param_1,(char *)piVar2);
    if (iVar3 == -1) {
      FUN_00403220(DAT_00413424,0x41f);
    }
  }
  _DAT_004133b4 = 0;
  puVar6 = (undefined4 *)FUN_00407b70(param_1);
  if ((puVar6 != (undefined4 *)0x0) &&
     (((*(byte *)(puVar6 + 3) & 2) != 0 ||
      (((DAT_004133d4 & 4) != 0 && ((*(byte *)(puVar6 + 3) & 4) != 0)))))) {
    return 0;
  }
  puVar7 = (undefined4 *)FUN_0040ad20();
  puVar7[1] = param_2;
  bVar9 = puVar6 == (undefined4 *)0x0;
  if (bVar9) {
    puVar6 = FUN_0040acf0(0x10);
    puVar6[1] = param_1;
  }
  bVar1 = *(byte *)(puVar6 + 3);
  *(byte *)(puVar6 + 3) = bVar1 & 0xef;
  *(byte *)(puVar6 + 3) = param_3 | bVar1 & 0xef;
  FUN_0040ae10(puVar6 + 2,puVar7);
  if (bVar9) {
    FUN_00407bf0(puVar6);
  }
  puVar8 = _mbschr((uchar *)param_2,0x24);
  if (puVar8 != (uchar *)0x0) {
    *(byte *)(puVar6 + 3) = *(byte *)(puVar6 + 3) | 1;
    local_8 = FUN_0040b110(param_2,0,0);
    *(byte *)(puVar6 + 3) = *(byte *)(puVar6 + 3) & 0xfe;
  }
  if (local_8 != 0) {
    return 1;
  }
  puVar6[2] = 0;
  *(byte *)(puVar6 + 3) = *(byte *)(puVar6 + 3) & 0x10;
  return 0;
}



void FUN_00401bc0(int param_1)

{
  int *piVar1;
  
  piVar1 = FUN_0040acf0(0x14);
  piVar1[2] = *(int *)(param_1 + 4);
  FUN_0040ae10(&DAT_00413a34,piVar1);
  if (*piVar1 != 0) {
    *(int **)(*piVar1 + 4) = piVar1;
  }
  return;
}



void FUN_00401bf0(uchar *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  
  if (*param_3 == 0) {
    puVar1 = FUN_0040acf0(0x18);
    *param_3 = (int)puVar1;
  }
  if (param_2 == 0) {
    piVar2 = FUN_00401ed0((undefined4 *)*param_3);
  }
  else {
    piVar2 = FUN_0040acf0(8);
    piVar2[1] = *param_3;
  }
  puVar1 = FUN_0040aec0(param_1,0x80,0x413828,1);
  if (puVar1 != (undefined4 *)0x0) {
    if (((*(byte *)(puVar1 + 2) ^ DAT_00413a44) & 0x20) != 0) {
      FUN_00403220(DAT_00413424,0x43f);
    }
    FUN_0040ae30((int **)(puVar1 + 4),piVar2);
    free(param_1);
    return;
  }
  *piVar2 = 0;
  puVar1 = FUN_0040acf0(0x14);
  puVar1[1] = param_1;
  puVar1[4] = piVar2;
  *(byte *)(puVar1 + 2) = DAT_00413a44;
  uVar3 = FUN_0040ae50((char *)param_1,0x80,1);
  FUN_0040ae10(&DAT_00413828 + uVar3,puVar1);
  return;
}



void FUN_00401cc0(void)

{
  int **ppiVar1;
  int **ppiVar2;
  
  if (DAT_00413a2c != (int **)0x0) {
    do {
      ppiVar2 = DAT_00413a2c;
      ppiVar1 = DAT_00413a2c + 1;
      DAT_00413a2c = (int **)*DAT_00413a2c;
      free(*ppiVar1);
      FUN_0040ada0((int *)ppiVar2);
    } while (DAT_00413a2c != (int **)0x0);
  }
  return;
}



void FUN_00401d00(int **param_1,int **param_2)

{
  int **ppiVar1;
  uchar *puVar2;
  undefined4 *_Str;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int **ppiVar6;
  
  if (param_2 != (int **)0x0) {
    do {
      puVar2 = _mbschr((uchar *)param_2[1],0x24);
      ppiVar6 = DAT_00413a28;
      if (puVar2 == (uchar *)0x0) {
        ppiVar6 = (int **)*param_2;
        *param_2 = (int *)0x0;
        FUN_0040ae30(param_1,(int *)param_2);
        param_2 = ppiVar6;
      }
      else {
        _Str = FUN_0040b700((uchar *)param_2[1],(int **)&DAT_00413a28);
        if (DAT_00413a28 != ppiVar6) {
          do {
            ppiVar1 = (int **)*ppiVar6;
            FUN_0040ada0((int *)ppiVar6);
            ppiVar6 = ppiVar1;
          } while (DAT_00413a28 != ppiVar1);
        }
        puVar3 = (undefined4 *)_mbstok((uchar *)_Str,&DAT_00413008);
        while (puVar3 != (undefined4 *)0x0) {
          piVar4 = (int *)FUN_0040ad20();
          iVar5 = FUN_0040add0(puVar3);
          piVar4[1] = iVar5;
          FUN_0040ae30(param_1,piVar4);
          puVar3 = (undefined4 *)_mbstok((uchar *)0x0,&DAT_00413008);
        }
        free(_Str);
        free(param_2[1]);
        ppiVar6 = (int **)*param_2;
        FUN_0040ada0((int *)param_2);
        param_2 = ppiVar6;
      }
    } while (param_2 != (int **)0x0);
  }
  return;
}



void FUN_00401e00(char *param_1,char *param_2)

{
  char cVar1;
  undefined4 *_EnvString;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  
  uVar2 = 0xffffffff;
  pcVar7 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  pcVar7 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  _EnvString = (undefined4 *)FUN_0040acc0(~uVar3 + ~uVar2);
  uVar2 = 0xffffffff;
  do {
    pcVar7 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar7;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  puVar5 = (undefined4 *)(pcVar7 + -uVar2);
  puVar8 = _EnvString;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined *)puVar8 = *(undefined *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  uVar2 = 0xffffffff;
  pcVar7 = &DAT_0041300c;
  do {
    pcVar6 = pcVar7;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar6 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar6;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar4 = -1;
  puVar5 = _EnvString;
  do {
    puVar8 = puVar5;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    puVar8 = (undefined4 *)((int)puVar5 + 1);
    cVar1 = *(char *)puVar5;
    puVar5 = puVar8;
  } while (cVar1 != '\0');
  puVar5 = (undefined4 *)(pcVar6 + -uVar2);
  puVar8 = (undefined4 *)((int)puVar8 + -1);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined *)puVar8 = *(undefined *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  uVar2 = 0xffffffff;
  do {
    pcVar7 = param_2;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar7;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar4 = -1;
  puVar5 = _EnvString;
  do {
    puVar8 = puVar5;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    puVar8 = (undefined4 *)((int)puVar5 + 1);
    cVar1 = *(char *)puVar5;
    puVar5 = puVar8;
  } while (cVar1 != '\0');
  puVar5 = (undefined4 *)(pcVar7 + -uVar2);
  puVar8 = (undefined4 *)((int)puVar8 + -1);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined *)puVar8 = *(undefined *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  _putenv((char *)_EnvString);
  return;
}



undefined4 * FUN_00401ed0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_0040acf0(8);
  puVar2 = FUN_0040acf0(0x18);
  *puVar2 = *param_1;
  puVar2[1] = param_1[1];
  puVar2[2] = param_1[2];
  puVar2[3] = param_1[3];
  *(undefined *)(puVar2 + 4) = *(undefined *)(param_1 + 4);
  puVar2[5] = param_1[5];
  puVar1[1] = puVar2;
  return puVar1;
}



undefined4 FUN_00401f10(void)

{
  int **ppiVar1;
  uchar *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *_Memory;
  intptr_t local_10;
  int *local_c;
  byte *local_8;
  
  if (DAT_004133dc != (int **)0x0) {
    do {
      ppiVar1 = DAT_004133dc;
      puVar2 = _mbspbrk((uchar *)DAT_004133dc[1],&DAT_00413000);
      if (puVar2 == (uchar *)0x0) {
        local_c = (int *)0x0;
        iVar3 = FUN_00402080(DAT_004133dc[1],DAT_004133d0,&local_c,(int *)0x0);
        if ((iVar3 < 0) && ((DAT_004133d4 & 8) != 0)) {
          FUN_00402c40(ppiVar1);
          return 0xff;
        }
      }
      else {
        FUN_0040ceb4();
        local_8 = &stack0xffffffe4;
        iVar3 = FUN_0040cd20((uchar *)DAT_004133dc[1],(int *)&local_8,&local_10);
        if (iVar3 == 0) {
          FUN_00403220(0,0x42d);
        }
        else {
          do {
            pcVar4 = (char *)FUN_00404c90((int *)&local_8);
            _Memory = (undefined4 *)FUN_0040c340((char *)DAT_004133dc[1],pcVar4);
            local_c = (int *)FUN_00404ca0(&local_8);
            iVar3 = FUN_00402080(_Memory,DAT_004133d0,&local_c,(int *)0x0);
            free(_Memory);
            if ((iVar3 < 0) && ((DAT_004133d4 & 8) != 0)) {
              FUN_00402c40(ppiVar1);
              return 0xffffffff;
            }
            iVar3 = FUN_0040ce00((int *)&local_8,local_10);
          } while (iVar3 != 0);
        }
      }
      DAT_004133dc = (int **)*ppiVar1;
      FUN_0040ada0((int *)ppiVar1);
    } while (DAT_004133dc != (int **)0x0);
  }
  return 0;
}



void FUN_00402080(undefined4 *param_1,byte param_2,int **param_3,int *param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  
  DAT_00413010 = DAT_00413010 + 1;
  puVar1 = FUN_0040aec0((uchar *)param_1,0x80,0x413828,1);
  bVar2 = puVar1 != (undefined4 *)0x0;
  if (!bVar2) {
    puVar1 = FUN_00402c70(param_1,param_2);
  }
  FUN_004020e0((int)puVar1,param_2,param_3,(uint)bVar2,param_4);
  DAT_00413010 = DAT_00413010 + -1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_004020e0(int param_1,byte param_2,int **param_3,int param_4,int *param_5)

{
  byte bVar1;
  undefined uVar2;
  byte bVar3;
  int iVar4;
  int **ppiVar5;
  undefined4 *puVar6;
  int **ppiVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  undefined4 local_14c [65];
  int *local_48;
  int **local_44;
  int **local_40;
  int **local_3c;
  int *local_38;
  int *local_34;
  int **ppiVar11;
  int *piVar12;
  int **ppiVar13;
  int **ppiVar14;
  int **ppiVar15;
  int *piVar16;
  int *piVar17;
  
  FUN_0040ceb4();
  piVar12 = (int *)0x0;
  if (param_1 == 0) {
    *param_3 = (int *)0x0;
    return (int *)0x0;
  }
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    FUN_00403220(0,0x42f);
  }
  if ((*(byte *)(param_1 + 9) & 2) != 0) {
    if ((param_2 & 1) != 0) {
      FUN_00408d10(DAT_00413010 * 2,*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0xc));
    }
    *param_3 = *(int **)(param_1 + 0xc);
    return (int *)(uint)((*(byte *)(param_1 + 9) & 4) != 0);
  }
  FUN_0040ceb4();
  ppiVar13 = (int **)0x0;
  local_48 = (int *)0x0;
  local_40 = (int **)0x0;
  piVar17 = (int *)0x0;
  local_34 = (int *)0x0;
  DAT_00413a8c = *(undefined4 *)(param_1 + 4);
  local_38 = (int *)0x0;
  local_44 = (int **)0x0;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
  ppiVar11 = *(int ***)(param_1 + 0x10);
  DAT_00413a90 = DAT_00413a8c;
  ppiVar15 = local_44;
  if (((ppiVar11 != (int **)0x0) && ((*(byte *)(ppiVar11[1] + 4) & 0x20) != 0)) &&
     (iVar4 = FUN_0040cd20(*(uchar **)(param_1 + 4),(int *)&stack0xffffffe0,
                           (intptr_t *)&stack0xffffffd4), ppiVar15 = local_44, iVar4 != 0)) {
    piVar17 = (int *)FUN_00404ca0((byte **)&stack0xffffffe0);
    ppiVar15 = local_44;
  }
  for (; ppiVar11 != (int **)0x0; ppiVar11 = (int **)*ppiVar11) {
    piVar10 = (int *)0x0;
    local_44 = (int **)(ppiVar11[1] + 5);
    piVar8 = *local_44;
    local_3c = local_44;
    if (piVar8 == (int *)0x0) {
      ppiVar7 = *(int ***)(param_1 + 4);
      ppiVar14 = (int **)0x402219;
      ppiVar5 = (int **)FUN_00402870(ppiVar7,ppiVar7);
      ppiVar15 = ppiVar5;
      for (; uVar2 = DAT_00414008, ppiVar5 != (int **)0x0; ppiVar5 = (int **)*ppiVar5) {
        piVar8 = ppiVar5[2];
        piVar16 = (int *)0x0;
        ppiVar13 = (int **)0x402242;
        iVar4 = FUN_00402080(ppiVar5[1],bRam00000010,(int **)&stack0xfffffff0,(int *)0x0);
        piVar12 = (int *)((int)piVar12 + iVar4);
        if ((_DAT_004133a4 != 0) && (iVar4 != 0)) {
          piVar16 = (int *)0x1;
          ppiVar13 = (int **)0x402267;
          puVar6 = FUN_0040aec0((uchar *)ppiVar5[1],0x80,0x413828,1);
          if ((*(byte *)((int)puVar6 + 9) & 8) == 0) {
            _DAT_004133b0 = 0;
            piVar16 = ppiVar5[1];
            FUN_00403220(0,0xfaa);
          }
          *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 8;
        }
        if (piVar10 <= piVar8) {
          piVar10 = piVar8;
        }
        if (((piVar17 == (int *)0x0) && ((*(byte *)(piVar16 + 4) & 0x20) == 0)) &&
           (iVar4 = FUN_0040cd20(*(uchar **)(param_1 + 4),(int *)&stack0xffffffe0,
                                 (intptr_t *)&stack0xffffffd4), iVar4 != 0)) {
          piVar17 = (int *)FUN_00404ca0((byte **)&stack0xffffffe0);
          *(int **)(param_1 + 0xc) = piVar17;
        }
        if ((((*(byte *)(param_1 + 8) & 0x10) != 0) || (piVar17 < piVar8)) ||
           ((_DAT_004133b8 != 0 && (piVar8 == piVar17)))) {
          piVar8 = (int *)FUN_0040ad20();
          iVar4 = FUN_0040add0(ppiVar5[1]);
          piVar8[1] = iVar4;
          FUN_0040ae30((int **)&stack0xffffffdc,piVar8);
        }
        ppiVar7 = (int **)FUN_0040ad20();
        piVar8 = (int *)FUN_0040add0(ppiVar5[1]);
        ppiVar7[1] = piVar8;
        ppiVar15 = (int **)&stack0xffffffe4;
        ppiVar14 = (int **)0x402328;
        FUN_0040ae30(ppiVar15,(int *)ppiVar7);
      }
      while (DAT_00414008 = uVar2, ppiVar15 != (int **)0x0) {
        free(ppiVar15[1]);
        ppiVar5 = (int **)0x402352;
        free(ppiVar15);
        uVar2 = DAT_00414008;
        ppiVar7 = ppiVar15;
        ppiVar15 = ppiVar5;
      }
      if ((*(byte *)(ppiVar7 + 4) & 0x20) == 0) {
        ppiVar15 = local_40;
        if ((ppiVar7[2] != (int *)0x0) && (ppiVar15 = ppiVar7, local_40 != (int **)0x0)) {
          ppiVar7 = *(int ***)(param_1 + 4);
          FUN_00403220(0,0xfa4);
          ppiVar15 = local_40;
        }
        local_40 = ppiVar15;
        if (local_38 <= piVar10) {
          local_38 = piVar10;
        }
      }
      else if (ppiVar7[2] != (int *)0x0) {
        DAT_00413a8c = *(undefined4 *)(param_1 + 4);
        DAT_00413a84 = 0;
        DAT_00413a88 = (undefined4 *)0x0;
        DAT_00413a90 = DAT_00413a8c;
        DAT_00413a94 = ppiVar13;
        DAT_00413a98 = ppiVar14;
        if (((((((_DAT_004133a4 != 0) && ((*(byte *)(param_1 + 9) & 8) == 0)) ||
               (piVar12 == (int *)0x0)) && (piVar17 < piVar10)) ||
             ((_DAT_004133b8 != 0 && (piVar10 == piVar17)))) ||
            ((piVar17 == (int *)0x0 && (piVar10 == (int *)0x0)))) || (*ppiVar7 == (int *)0x0)) {
          DAT_00414008 = 1;
          if (param_5 == (int *)0x0) {
            if (ppiVar14 == (int **)0x0) {
              param_5 = (int *)0x0;
            }
            else {
              param_5 = ppiVar14[1];
            }
          }
          ppiVar13 = (int **)ppiVar7[3];
          ppiVar15 = *(int ***)(param_1 + 4);
          piVar12 = (int *)0x40242b;
          uVar9 = FUN_004036c0(ppiVar15,ppiVar7[2],(int *)ppiVar13,*(byte *)(ppiVar7 + 4),
                               (char *)param_5);
          piVar12 = (int *)((int)piVar12 + uVar9);
          if ((*(byte *)(param_1 + 8) & 4) == 0) {
            ppiVar13 = *(int ***)(param_1 + 4);
            iVar4 = FUN_0040cd20((uchar *)ppiVar13,(int *)&stack0xffffffe0,
                                 (intptr_t *)&stack0xffffffd4);
            if (iVar4 == 0) goto LAB_00402457;
            local_34 = (int *)FUN_00404ca0((byte **)&stack0xffffffe0);
          }
          else {
LAB_00402457:
            if (local_38 == (int *)0x0) {
              FUN_0040cea0((time_t *)&local_34);
            }
            else {
              local_34 = local_38;
            }
          }
          *local_3c = local_34;
          ppiVar7 = ppiVar13;
          if (ppiVar13 != ppiVar15) {
            FUN_00402c40(ppiVar13);
            ppiVar7 = ppiVar15;
          }
          FUN_00402c40(ppiVar7);
          ppiVar13 = (int **)0x0;
        }
        DAT_00414008 = uVar2;
        if ((_DAT_004133a4 != 0) && ((*(byte *)(param_1 + 9) & 8) != 0)) {
          ppiVar7 = *(int ***)(param_1 + 4);
          FUN_00403220(0,0xfab);
        }
      }
      ppiVar15 = local_44;
      if (((*(byte *)(ppiVar7 + 4) & 0x20) != 0) && (*ppiVar11 == (int *)0x0)) {
        bVar1 = *(byte *)(param_1 + 9);
        bVar3 = bVar1 & 0xfe;
        *(byte *)(param_1 + 9) = bVar3;
        *(byte *)(param_1 + 9) = bVar3 | 2;
        if ((int)piVar12 < 1) {
          bVar3 = bVar1 & 0xfa | 2;
        }
        else {
          bVar3 = bVar3 | 6;
        }
        *(byte *)(param_1 + 9) = bVar3;
        if (local_34 <= piVar17) {
          local_34 = piVar17;
        }
        *(int **)(param_1 + 0xc) = local_34;
        *param_3 = local_34;
        return piVar12;
      }
    }
    else if (piVar17 <= piVar8) {
      piVar17 = piVar8;
    }
    local_44 = ppiVar15;
    ppiVar15 = local_44;
  }
  DAT_00413a84 = 0;
  DAT_00413a88 = (undefined4 *)0x0;
  piVar12 = *param_3;
  piVar17 = piVar12;
  local_44 = ppiVar15;
  if (((piVar12 == (int *)0x0) && (piVar17 = *(int **)(param_1 + 0xc), piVar17 == (int *)0x0)) &&
     (iVar4 = FUN_0040cd20(*(uchar **)(param_1 + 4),(int *)&stack0xffffffe0,
                           (intptr_t *)&stack0xffffffd4), piVar17 = piVar12, iVar4 != 0)) {
    piVar17 = (int *)FUN_00404ca0((byte **)&stack0xffffffe0);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00408d10(DAT_00413010 * 2,*(undefined4 *)(param_1 + 4),(int)piVar17);
  }
  ppiVar11 = &param_5;
  local_34 = (int *)0x4025ce;
  piVar12 = piVar17;
  ppiVar15 = (int **)&stack0xffffffdc;
  ppiVar13 = (int **)&stack0xffffffd8;
  piVar8 = FUN_0040a500(param_1,local_14c,(uint)piVar17,(int **)&stack0xffffffdc,
                        (int **)&stack0xffffffe4,(int *)&stack0xffffffd8,(uint *)&local_38,ppiVar11)
  ;
  DAT_00413a98 = ppiVar13;
  DAT_00413a94 = ppiVar15;
  uVar2 = DAT_00414008;
  if ((piVar8 != (int *)0x0) && (local_40 == (int **)0x0)) {
    DAT_00413a88 = local_14c;
    local_48 = (int *)piVar8[3];
  }
  DAT_00413a8c = *(undefined4 *)(param_1 + 4);
  DAT_00413a90 = DAT_00413a8c;
  ppiVar13 = DAT_00413a94;
  ppiVar15 = DAT_00413a98;
  if ((((_DAT_004133a4 == 0) || ((*(byte *)(param_1 + 9) & 8) != 0)) && (piVar12 != (int *)0x0)) ||
     ((((local_38 <= piVar17 && ((_DAT_004133b8 == 0 || (local_38 != piVar17)))) &&
       ((piVar17 != (int *)0x0 || (local_38 != (int *)0x0)))) &&
      ((*(byte *)(param_1 + 8) & 0x10) == 0)))) {
    if ((((DAT_004133d4 & 8) == 0) && (DAT_00413010 == 1)) && ((*(byte *)(param_1 + 9) & 8) == 0)) {
      ppiVar15 = (int **)0x402789;
      FUN_00403370(2);
    }
  }
  else {
    DAT_00414008 = 1;
    if (local_40 == (int **)0x0) {
      if (local_48 == (int *)0x0) {
        if ((DAT_004133d4 & 0x10) == 0) {
          if ((param_4 == 0) && (piVar17 == (int *)0x0)) {
            if (_DAT_004133a4 == 0) {
              ppiVar15 = (int **)0x0;
              FUN_00403220(0,0x431);
            }
            else {
              piVar12 = (int *)0x1;
            }
          }
        }
        else {
          ppiVar15 = (int **)ppiVar11[3];
          ppiVar13 = *(int ***)(param_1 + 4);
          piVar12 = (int *)0x4026e9;
          uVar9 = FUN_004036c0(ppiVar13,ppiVar11[2],(int *)ppiVar15,*(byte *)(ppiVar11 + 4),
                               (char *)param_5);
          piVar12 = (int *)((int)piVar12 + uVar9);
        }
      }
      else {
        ppiVar15 = (int **)piVar8[4];
        ppiVar13 = *(int ***)(param_1 + 4);
        piVar12 = (int *)0x4026bf;
        uVar9 = FUN_004036c0(ppiVar13,local_48,(int *)ppiVar15,*(byte *)(param_1 + 8),
                             (char *)param_5);
        piVar12 = (int *)((int)piVar12 + uVar9);
      }
    }
    else {
      if (param_5 == (int *)0x0) {
        if (DAT_00413a98 == (int **)0x0) {
          param_5 = (int *)0x0;
        }
        else {
          param_5 = DAT_00413a98[1];
        }
      }
      ppiVar15 = (int **)local_40[3];
      ppiVar13 = *(int ***)(param_1 + 4);
      piVar12 = (int *)0x40269b;
      uVar9 = FUN_004036c0(ppiVar13,local_40[2],(int *)ppiVar15,*(byte *)(local_40 + 4),
                           (char *)param_5);
      piVar12 = (int *)((int)piVar12 + uVar9);
    }
    DAT_00414008 = uVar2;
    if (((local_40 == (int **)0x0) && (local_48 == (int *)0x0)) && (DAT_00413a98 != (int **)0x0)) {
      local_34 = local_38;
    }
    else {
      FUN_0040cea0((time_t *)&local_34);
      local_34 = (int *)((int)local_34 + 2);
    }
    if ((local_44 != (int **)0x0) && (local_40 != (int **)0x0)) {
      *local_44 = local_34;
    }
  }
  if ((_DAT_004133a4 != 0) && (piVar12 != (int *)0x0)) {
    _DAT_004133b0 = 0;
    if ((*(byte *)(param_1 + 9) & 8) == 0) {
      if (DAT_00413010 != 1) goto LAB_004027d2;
      uVar9 = 0xfaa;
    }
    else {
      uVar9 = 0xfab;
    }
    ppiVar15 = (int **)0x0;
    FUN_00403220(0,uVar9);
  }
LAB_004027d2:
  if (((DAT_004133d4 & 8) == 0) || (DAT_00413010 != 1)) {
    bVar1 = *(byte *)(param_1 + 9);
    bVar3 = bVar1 & 0xfe;
    *(byte *)(param_1 + 9) = bVar3;
    *(byte *)(param_1 + 9) = bVar3 | 2;
    if ((int)piVar12 < 1) {
      bVar3 = bVar1 & 0xfa | 2;
    }
    else {
      bVar3 = bVar3 | 6;
    }
    *(byte *)(param_1 + 9) = bVar3;
    piVar8 = local_34;
    if (local_34 <= piVar17) {
      piVar8 = piVar17;
    }
    *(int **)(param_1 + 0xc) = piVar8;
    *param_3 = piVar8;
    if (ppiVar15 != ppiVar13) {
      FUN_00402c40(ppiVar15);
      ppiVar15 = ppiVar13;
    }
    FUN_00402c40(ppiVar15);
  }
  else {
    if (ppiVar15 != ppiVar13) {
      FUN_00402c40(ppiVar15);
      ppiVar15 = ppiVar13;
    }
    FUN_00402c40(ppiVar15);
    piVar12 = (int *)((_DAT_00413a50 == 0) - 1);
  }
  return piVar12;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_00402870(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uchar *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 *local_28;
  intptr_t iStack_24;
  int *local_20;
  undefined4 *local_1c;
  int local_18;
  char *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  char *local_8;
  int *local_4;
  
  local_20 = (int *)0x0;
  local_28 = FUN_0040acf0(DAT_00413ee0);
  local_4 = (int *)param_1[1];
  local_10 = (undefined4 *)*param_1;
  do {
    if (local_10 == (undefined4 *)0x0) {
      free(local_28);
      return local_20;
    }
    puVar2 = (undefined4 *)local_10[1];
    puVar1 = puVar2;
    if (*(char *)puVar2 != '\0') {
      do {
        if (*(char *)puVar1 == '$') break;
        if (*(char *)puVar1 == '^') {
          puVar1 = (undefined4 *)((int)puVar1 + 1);
        }
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      } while (*(char *)puVar1 != '\0');
      if (*(char *)puVar1 != '\0') {
        DAT_00413a84 = param_2;
        puVar2 = FUN_0040b700((uchar *)local_10[1],&local_4);
      }
    }
    local_c = puVar2;
    local_14 = (char *)FUN_0040add0(local_c);
    local_8 = local_14;
    iVar3 = FUN_00402b20(&local_14,(char **)&local_1c);
    while (iVar3 != 0) {
      puVar2 = local_1c;
      if (*(char *)local_1c == '{') {
        do {
          if (*(char *)puVar2 == '}') break;
          if (*(char *)puVar2 == '^') {
            puVar2 = (undefined4 *)((int)puVar2 + 1);
          }
          puVar2 = (undefined4 *)((int)puVar2 + 1);
        } while (*(char *)puVar2 != '\0');
        if (*(char *)puVar2 != '\0') {
          *(char *)puVar2 = '\0';
          local_1c = (undefined4 *)((int)local_1c + 1);
          puVar2 = (undefined4 *)((int)puVar2 + 1);
        }
      }
      else {
        local_1c = (undefined4 *)0x0;
      }
      local_18 = 0;
      FUN_00404cc0((byte **)&local_28,0);
      puVar1 = (undefined4 *)FUN_0040add0(puVar2);
      puVar4 = _mbspbrk((uchar *)puVar2,&DAT_00413000);
      if (((puVar4 != (uchar *)0x0) || (local_1c != (undefined4 *)0x0)) &&
         (puVar5 = (undefined4 *)FUN_00405930((char *)local_1c,puVar2,local_28,&iStack_24),
         puVar5 != (undefined4 *)0x0)) {
        local_18 = 1;
        free(puVar1);
        pcVar6 = (char *)FUN_00404c90((int *)&local_28);
        puVar1 = (undefined4 *)FUN_0040c340((char *)puVar5,pcVar6);
        puVar2 = puVar5;
      }
      do {
        piVar7 = FUN_0040acf0(0xc);
        iVar3 = FUN_0040add0(puVar1);
        piVar7[1] = iVar3;
        if ((_DAT_004133a8 == 0) ||
           (iVar3 = FUN_0040cd20((uchar *)puVar1,(int *)&local_28,&iStack_24), iVar3 != 0)) {
          iVar3 = FUN_00404ca0((byte **)&local_28);
          piVar7[2] = iVar3;
        }
        else {
          piVar7[2] = 0;
        }
        if (_DAT_004133a8 == 0) {
          FUN_0040ae30(&local_20,piVar7);
        }
        else {
          FUN_00402ae0(&local_20,piVar7);
        }
        free(puVar1);
        if (((local_18 == 0) ||
            (puVar4 = _mbspbrk((uchar *)puVar2,&DAT_00413000), puVar4 == (uchar *)0x0)) ||
           (iVar3 = FUN_0040ce00((int *)&local_28,iStack_24), iVar3 == 0)) break;
        pcVar6 = (char *)FUN_00404c90((int *)&local_28);
        puVar1 = (undefined4 *)FUN_0040c340((char *)puVar2,pcVar6);
      } while (puVar1 != (undefined4 *)0x0);
      iVar3 = FUN_00402b20(&local_14,(char **)&local_1c);
    }
    if ((undefined4 *)local_10[1] != local_c) {
      free(local_c);
    }
    free(local_8);
    local_10 = (undefined4 *)*local_10;
  } while( true );
}



void FUN_00402ae0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)*param_1;
  puVar2 = (undefined4 *)*param_1;
  while ((puVar1 = puVar3, puVar1 != (undefined4 *)0x0 && ((uint)param_2[2] <= (uint)puVar1[2]))) {
    puVar2 = puVar1;
    puVar3 = (undefined4 *)*puVar1;
  }
  if (puVar2 != puVar1) {
    *puVar2 = param_2;
    *param_2 = puVar1;
    return;
  }
  *param_1 = param_2;
  return;
}



undefined4 FUN_00402b20(char **param_1,char **param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = *param_1;
  cVar1 = *pcVar2;
  while ((cVar1 != '\0' && ((*pcVar2 == ' ' || (*pcVar2 == '\t'))))) {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  *param_2 = pcVar2;
  if (*pcVar2 == '\0') {
    return 0;
  }
  *param_2 = pcVar2;
  if (*pcVar2 == '\"') {
    do {
      if (*pcVar2 == '\0') goto LAB_00402c0e;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 != '\"');
    if (*pcVar2 == '\0') {
LAB_00402c0e:
      FUN_00403220(0,0x40e);
    }
    pcVar3 = pcVar2 + 1;
    if (*pcVar3 != '\0') {
      *pcVar3 = '\0';
      pcVar3 = pcVar2 + 2;
    }
    *param_1 = pcVar3;
    return 1;
  }
  if (*pcVar2 == '{') {
    do {
      if (*pcVar2 == '\"') {
        do {
          if (*pcVar2 == '\"') break;
          pcVar2 = pcVar2 + 1;
        } while (*pcVar2 != '\0');
      }
      else {
        pcVar2 = pcVar2 + 1;
        if (*pcVar2 == '}') break;
      }
    } while (*pcVar2 != '\0');
    if (*pcVar2 == '\0') {
      FUN_00403220(0,0x423);
    }
    pcVar2 = pcVar2 + 1;
    if (*pcVar2 == '\"') {
      do {
        if (*pcVar2 == '\0') goto LAB_00402baf;
        pcVar2 = pcVar2 + 1;
      } while (*pcVar2 != '\"');
      if (*pcVar2 == '\0') {
LAB_00402baf:
        FUN_00403220(0,0x40e);
      }
      pcVar3 = pcVar2 + 1;
      if (*pcVar3 != '\0') {
        *pcVar3 = '\0';
        pcVar3 = pcVar2 + 2;
      }
      *param_1 = pcVar3;
      return 1;
    }
  }
  if (*pcVar2 != '\0') {
    do {
      if ((*pcVar2 == ' ') || (*pcVar2 == '\t')) break;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    if (*pcVar2 != '\0') {
      *pcVar2 = '\0';
      pcVar2 = pcVar2 + 1;
    }
  }
  *param_1 = pcVar2;
  return 1;
}



void FUN_00402c40(int **param_1)

{
  int *piVar1;
  
  if (param_1 != (int **)0x0) {
    do {
      piVar1 = *param_1;
      free(param_1[1]);
      FUN_0040ada0((int *)param_1);
      param_1 = (int **)piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return;
}



undefined4 * FUN_00402c70(undefined4 *param_1,undefined param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  puVar1 = FUN_0040acf0(0x14);
  uVar2 = FUN_0040add0(param_1);
  puVar1[1] = uVar2;
  *(undefined *)(puVar1 + 2) = param_2;
  *(undefined *)((int)puVar1 + 9) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  uVar3 = FUN_0040ae50((char *)param_1,0x80,1);
  FUN_0040ae10(&DAT_00413828 + uVar3,puVar1);
  return puVar1;
}



void FUN_00402cc0(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int local_10;
  undefined4 *local_c;
  uint local_8;
  uchar **local_4;
  
  local_8 = 0;
  DAT_004133d8 = FUN_0040ca80(param_1,&DAT_00413014);
  if (DAT_004133d8 == 0) {
    FUN_00403220(0,0x41c);
  }
  local_4 = (uchar **)0x0;
  pcVar3 = fgets(&DAT_00413aa0,0x400,(FILE *)DAT_004133d8);
  do {
    if (pcVar3 == (char *)0x0) {
      iVar4 = fclose((FILE *)DAT_004133d8);
      if (iVar4 == -1) {
        FUN_00403220(0,0x424);
      }
      FUN_00408320(local_8,local_4);
      while (bVar2 = local_8 != 0, local_8 = local_8 - 1, bVar2) {
        if (local_4[local_8] != (uchar *)0x0) {
          free(local_4[local_8]);
        }
      }
      free(local_4);
      return;
    }
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_00413aa0;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    local_10 = uVar5 - 1;
    if (((local_10 == 0x3ff) && ((&DAT_00413a9e)[uVar5] != '\n')) ||
       (((&DAT_00413a9e)[uVar5] == '\n' && (*(char *)(uVar5 + 0x413a9d) == '\\')))) {
      if (*(char *)(uVar5 + 0x413a9d) == '\\') {
        (&DAT_00413a9e)[uVar5] = 0;
        local_10 = uVar5 - 2;
        *(char *)(uVar5 + 0x413a9d) = ' ';
      }
      local_c = (undefined4 *)FUN_0040add0((undefined4 *)&DAT_00413aa0);
      FUN_00402e60(&local_c,&local_10);
    }
    else {
      local_c = (undefined4 *)&DAT_00413aa0;
    }
    FUN_00402f60(local_c,&local_8,&local_4);
    if (local_c != (undefined4 *)&DAT_00413aa0) {
      free(local_c);
    }
    pcVar3 = fgets(&DAT_00413aa0,0x400,(FILE *)DAT_004133d8);
  } while( true );
}



void FUN_00402e60(void **param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  
  cVar2 = *(char *)(*param_2 + -1 + (int)*param_1);
  do {
    if ((cVar2 == '\n') || (pcVar4 = fgets(&DAT_00413aa0,0x400,DAT_004133d8), pcVar4 == (char *)0x0)
       ) {
      return;
    }
    uVar6 = 0xffffffff;
    pcVar4 = &DAT_00413aa0;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    if ((*(char *)(uVar6 + 0x413a9d) == '\\') && ((&DAT_00413a9e)[uVar6] == '\n')) {
      (&DAT_00413a9e)[uVar6] = 0;
      *(undefined *)(uVar6 + 0x413a9d) = 0x20;
    }
    iVar3 = *param_2;
    uVar6 = 0xffffffff;
    pcVar4 = &DAT_00413aa0;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    iVar1 = (~uVar6 - 1) + iVar3;
    *param_2 = iVar1;
    pvVar5 = realloc(*param_1,iVar1 + 1);
    *param_1 = pvVar5;
    if (pvVar5 == (void *)0x0) {
      FUN_00403220(DAT_004133f4,0x419);
    }
    uVar6 = 0xffffffff;
    pcVar4 = &DAT_00413aa0;
    do {
      pcVar9 = pcVar4;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar4 + 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar9;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    puVar8 = (undefined4 *)(pcVar9 + -uVar6);
    puVar10 = (undefined4 *)((int)*param_1 + iVar3);
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined *)puVar10 = *(undefined *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    cVar2 = *(char *)(*param_2 + -1 + (int)*param_1);
  } while( true );
}



void FUN_00402f60(undefined4 *param_1,uint *param_2,void **param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 *puStack_8;
  int iStack_4;
  
  bVar3 = false;
  puStack_8 = (undefined4 *)_mbschr((uchar *)param_1,0x22);
  if (puStack_8 == (undefined4 *)0x0) {
    FUN_00403120((uchar *)param_1,param_2,param_3);
    return;
  }
  if ((param_1 == puStack_8) || (*(uchar *)((int)puStack_8 + -1) != '=')) {
    *(uchar *)puStack_8 = '\0';
    puStack_8 = (undefined4 *)((int)puStack_8 + 1);
    FUN_00403120((uchar *)param_1,param_2,param_3);
    puVar7 = puStack_8;
  }
  else {
    *(uchar *)puStack_8 = ' ';
    puStack_8 = (undefined4 *)((int)puStack_8 + -1);
    for (puVar7 = puStack_8;
        (((param_1 < puVar7 && (cVar2 = *(char *)puVar7, cVar2 != ' ')) && (cVar2 != '\t')) &&
        (cVar2 != '\n')); puVar7 = (undefined4 *)((int)puVar7 + -1)) {
    }
    if (param_1 != puVar7) {
      *(undefined *)puVar7 = 0;
      FUN_00403120((uchar *)param_1,param_2,param_3);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
  }
  puStack_8 = puVar7;
  uVar4 = 0xffffffff;
  puVar7 = puStack_8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *(char *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  } while (cVar2 != '\0');
  iStack_4 = ~uVar4 - 1;
  cVar2 = *(char *)puStack_8;
  puVar7 = puStack_8;
  do {
    puVar6 = puVar7;
    if (cVar2 == '\0') {
LAB_004030e1:
      if ((undefined4 *)(iStack_4 + (int)puStack_8) == puVar6) {
        FUN_00403220(0,0x3ee);
      }
      if (bVar3) {
        free(puStack_8);
      }
      return;
    }
    if (*(char *)puVar7 == '\"') {
      if (*(char *)((int)puVar7 + 1) != '\"') {
        *(undefined *)puVar7 = 0;
        puVar6 = (undefined4 *)((int)puVar7 + 1);
        FUN_004031b0(puStack_8,*param_2,param_3);
        *param_2 = *param_2 + 1;
        FUN_00402f60((undefined4 *)((int)puVar7 + 2),param_2,param_3);
        goto LAB_004030e1;
      }
      uVar4 = 0xffffffff;
      pcVar8 = (char *)((int)puVar7 + 1);
      do {
        pcVar9 = pcVar8;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = pcVar8 + 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar2 != '\0');
      uVar4 = ~uVar4;
      puVar6 = (undefined4 *)(pcVar9 + -uVar4);
      puVar10 = puVar7;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar10 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined *)puVar10 = *(undefined *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
    }
    else if (((*(char *)puVar7 == '\\') &&
             ((*(char *)((int)puVar7 + -1) == ' ' || (*(char *)((int)puVar7 + -1) == '\t')))) &&
            (*(char *)((int)puVar7 + 1) == '\n')) {
      *(undefined *)puVar7 = 0;
      iVar1 = iStack_4 + -2;
      iStack_4 = iVar1;
      if (!bVar3) {
        bVar3 = true;
        puStack_8 = (undefined4 *)FUN_0040add0(puStack_8);
      }
      FUN_00402e60(&puStack_8,&iStack_4);
      puVar7 = (undefined4 *)(iVar1 + (int)puStack_8);
    }
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    cVar2 = *(char *)puVar7;
  } while( true );
}



void FUN_00403120(uchar *param_1,uint *param_2,void **param_3)

{
  uchar *puVar1;
  undefined4 *puVar2;
  
  puVar1 = _mbschr(param_1,0x5c);
  if ((puVar1 != (uchar *)0x0) &&
     (((puVar1[-1] == ' ' || (puVar1[-1] == '\t')) && (puVar1[1] == '\n')))) {
    *puVar1 = '\0';
  }
  puVar2 = (undefined4 *)_mbstok(param_1,&DAT_00413018);
  if (puVar2 != (undefined4 *)0x0) {
    while (*(char *)puVar2 != '@') {
      FUN_004031b0(puVar2,*param_2,param_3);
      *param_2 = *param_2 + 1;
      puVar2 = (undefined4 *)_mbstok((uchar *)0x0,&DAT_00413018);
      if (puVar2 == (undefined4 *)0x0) {
        return;
      }
    }
    FUN_00403220(0,0xfa1);
  }
  return;
}



void FUN_004031b0(undefined4 *param_1,uint param_2,void **param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  
  if (*param_3 == (void *)0x0) {
    puVar1 = FUN_0040acf0(0x20);
    *param_3 = puVar1;
  }
  else if ((param_2 & 7) == 0) {
    pvVar2 = realloc(*param_3,param_2 * 4 + 0x20);
    *param_3 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      FUN_00403220(0,0x41b);
    }
  }
  uVar3 = FUN_0040add0(param_1);
  *(undefined4 *)((int)*param_3 + param_2 * 4) = uVar3;
  return;
}



void __cdecl FUN_00403220(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int _Code;
  char *pcVar4;
  uint uVar5;
  va_list _ArgList;
  
  _Code = 2;
  if (((DAT_004133d4 & 0x20) != 0) && (param_2 / 1000 == 4)) {
    return;
  }
  FUN_00403420();
  if (param_1 == 0) {
    pcVar4 = s__s___00413030;
    iVar1 = __p__iob(s__s___00413030,s_NMAKE_00413038);
    pcVar3 = fprintf_exref;
    fprintf((FILE *)(iVar1 + 0x40),pcVar4);
  }
  else {
    pcVar4 = s__s__d____00413040;
    iVar1 = __p__iob(s__s__d____00413040,DAT_004133f8,param_1);
    pcVar3 = fprintf_exref;
    fprintf((FILE *)(iVar1 + 0x40),pcVar4);
  }
  uVar2 = param_2 / 1000;
  if (uVar2 == 1) {
    FUN_00403370(0x14);
    if (param_2 == 0x41b) {
      _Code = 4;
    }
  }
  else {
    if (uVar2 == 2) {
      uVar5 = 0x15;
    }
    else {
      if (uVar2 != 4) goto LAB_004032e4;
      uVar5 = 0x16;
    }
    FUN_00403370(uVar5);
  }
LAB_004032e4:
  iVar1 = __p__iob(s__U_04d__00413024,param_2);
  (*pcVar3)(iVar1 + 0x40);
  _ArgList = &stack0x0000000c;
  pcVar4 = (char *)FUN_00403410(param_2);
  iVar1 = __p__iob();
  vfprintf((FILE *)(iVar1 + 0x40),pcVar4,_ArgList);
  iVar1 = __p__iob();
  putc(10,(FILE *)(iVar1 + 0x40));
  iVar1 = __p__iob();
  fflush((FILE *)(iVar1 + 0x40));
  if (uVar2 != 1) {
    return;
  }
  iVar1 = __p__iob(s_Stop__0041301c);
  (*pcVar3)(iVar1 + 0x40);
  FUN_00408a20();
                    // WARNING: Subroutine does not return
  exit(_Code);
}



void __cdecl FUN_00403370(uint param_1)

{
  int iVar1;
  char *_Format;
  FILE *_File;
  va_list _ArgList;
  
  iVar1 = __p__iob();
  _File = (FILE *)(iVar1 + 0x20);
  if ((DAT_004133d4 & 0x20) == 0) {
    FUN_00403420();
    if ((0x13 < param_1) && (param_1 < 0x1a)) {
      iVar1 = __p__iob();
      _File = (FILE *)(iVar1 + 0x40);
    }
    if (param_1 == 0x18) {
      putc(10,_File);
    }
    _ArgList = &stack0x00000008;
    _Format = (char *)FUN_00403410(param_1);
    vfprintf(_File,_Format,_ArgList);
    if (((param_1 < 10) || (0x17 < param_1)) && (param_1 != 0x78)) {
      putc(10,_File);
    }
    fflush(_File);
  }
  return;
}



void FUN_00403400(void)

{
  return;
}



void FUN_00403410(int param_1)

{
  FUN_0040a660(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00403420(void)

{
  int iVar1;
  
  if (_DAT_004133cc == 0) {
    _DAT_004133cc = 1;
    FUN_00403400();
    FUN_00403400();
    FUN_00403370(0x18);
    FUN_00403370(0x19);
    iVar1 = __p__iob();
    fflush((FILE *)(iVar1 + 0x40));
  }
  return;
}



void FUN_00403490(void)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 local_a0 [20];
  undefined4 local_50 [20];
  
  bVar2 = false;
  uVar5 = 100;
  do {
    uVar6 = uVar5 + 1;
    FUN_00403370(uVar5);
    uVar5 = uVar6;
  } while (uVar6 < 0x67);
  uVar5 = 0x67;
  do {
    if (uVar5 == 0x6f) {
      uVar5 = 0x70;
    }
    if (uVar5 == 0x77) {
      uVar5 = 0x78;
    }
    if (uVar5 == 0x78) break;
    if (bVar2) {
      pcVar3 = (char *)FUN_00403410(uVar5);
      uVar6 = 0xffffffff;
      do {
        pcVar8 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar8 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar8;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      puVar7 = (undefined4 *)(pcVar8 + -uVar6);
      puVar9 = local_50;
      for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined *)puVar9 = *(undefined *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_00403370(0x7d);
    }
    else {
      pcVar3 = (char *)FUN_00403410(uVar5);
      uVar6 = 0xffffffff;
      do {
        pcVar8 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar8 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar8;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      puVar7 = (undefined4 *)(pcVar8 + -uVar6);
      puVar9 = local_a0;
      for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined *)puVar9 = *(undefined *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    }
    bVar2 = !bVar2;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x78);
  if (bVar2) {
    FUN_00403370(0x7d);
  }
  FUN_00403370(0x78);
  return;
}



void FUN_00403580(uint *param_1,uchar **param_2,uchar *param_3)

{
  uchar uVar1;
  uint uVar2;
  bool bVar3;
  size_t sVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar **ppuVar7;
  uchar *puVar8;
  uchar *puVar9;
  
  bVar3 = true;
  uVar1 = *param_3;
  puVar9 = param_3;
  while (uVar1 != '\0') {
    puVar9 = puVar9 + 1;
    uVar1 = *puVar9;
  }
  *param_1 = 0;
  do {
    ppuVar7 = param_2;
    if (puVar9 <= param_3) break;
    sVar4 = _mbsspn(param_3,&DAT_00413008);
    puVar8 = param_3 + sVar4;
    if (puVar9 <= puVar8) break;
    *param_2 = puVar8;
    ppuVar7 = param_2 + 1;
    if (*puVar8 == '\"') {
      param_3 = puVar8 + 1;
      if (param_3 < puVar9) {
        do {
          if (*param_3 == '\\') {
            param_3 = param_3 + 1;
          }
          else if (*param_3 == '\"') break;
          param_3 = param_3 + 1;
        } while (param_3 < puVar9);
        if (param_3 < puVar9) {
          puVar5 = _mbspbrk(param_3 + 1,&DAT_00413008);
          goto LAB_00403691;
        }
      }
    }
    else {
      puVar8 = _mbspbrk(puVar8,&DAT_004132e0);
      if (puVar8 != (uchar *)0x0) {
        do {
          if (((puVar9 <= puVar8) || (*puVar8 != '/')) || (bVar3)) break;
          puVar8 = _mbspbrk(puVar8 + 1,&DAT_004132e0);
        } while (puVar8 != (uchar *)0x0);
        if ((puVar8 != (uchar *)0x0) && (*puVar8 == '\"')) {
          do {
            puVar8 = puVar8 + 1;
            if (puVar9 <= puVar8) break;
          } while (*puVar8 != '\"');
          puVar8 = _mbspbrk(puVar8,&DAT_00413008);
        }
      }
      puVar5 = puVar8;
      if (bVar3) {
        bVar3 = false;
        if (puVar8 != (uchar *)0x0) {
          if (*puVar8 == '/') {
            *puVar8 = '\0';
            puVar5 = puVar8 + -1;
            puVar6 = (uchar *)FUN_0040add0((undefined4 *)*param_2);
            *param_2 = puVar6;
            *puVar8 = '/';
          }
          goto LAB_00403691;
        }
LAB_00403695:
        puVar5 = puVar9;
      }
      else {
LAB_00403691:
        if (puVar5 == (uchar *)0x0) goto LAB_00403695;
      }
      *puVar5 = '\0';
      param_3 = puVar5 + 1;
    }
    uVar2 = *param_1;
    *param_1 = uVar2 + 1;
    param_2 = ppuVar7;
  } while (uVar2 + 1 < 0x7f);
  *ppuVar7 = (uchar *)0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_004036c0(undefined4 *param_1,int *param_2,int *param_3,byte param_4,char *param_5)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uchar *puVar5;
  undefined4 *puVar6;
  int iVar7;
  char cVar8;
  byte bVar9;
  byte local_15;
  undefined4 *local_14;
  uint local_10;
  undefined4 *local_c;
  undefined4 uStack_8;
  int local_4;
  
  _DAT_00413a50 = _DAT_00413a50 + 1;
  local_10 = 0;
  if ((DAT_004133d4 & 8) != 0) {
    return 0;
  }
  FUN_00403400();
  if ((DAT_004133d4 & 0x10) != 0) {
    FUN_00404c10(param_1,param_4 & 4);
    return 0;
  }
  if (param_2 != (int *)0x0) {
    do {
      local_4 = FUN_00406020((undefined4 *)param_2[1],(uchar **)&local_c,&param_3);
      local_15 = 0;
      DAT_00413a4c = 0;
      local_14 = local_c;
      cVar8 = *(char *)local_c;
      puVar6 = local_c;
      cVar1 = cVar8;
      while (cVar1 != '\0') {
        if ((*(char *)puVar6 == '^') || (*(char *)puVar6 == '$')) {
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        cVar1 = *(char *)puVar6;
      }
      while (((((cVar8 == '!' || (cVar8 == '-')) || (cVar8 == '@')) ||
              ((cVar8 == '^' || (cVar8 == ' ')))) || (cVar8 == '\t'))) {
        switch(cVar8) {
        case '!':
          local_15 = local_15 | 4;
          break;
        case '-':
          local_14 = (undefined4 *)((int)local_14 + 1);
          local_15 = local_15 | 2;
          iVar4 = _ismbcdigit((int)*(char *)local_14);
          if (iVar4 == 0) {
            DAT_00413a4c = 0xff;
          }
          else {
            DAT_00413a4c = strtol((char *)local_14,(char **)&local_14,10);
            piVar3 = _errno();
            if (*piVar3 == 0x22) {
              *(char *)local_14 = '\0';
              FUN_00403220(DAT_004133f4,0x436);
            }
            iVar4 = _ismbcspace((int)*(char *)local_14);
            if (iVar4 != 0) {
              do {
                local_14 = (undefined4 *)((int)local_14 + 1);
                iVar4 = _ismbcspace((int)*(char *)local_14);
              } while (iVar4 != 0);
              local_14 = (undefined4 *)((int)local_14 + -1);
              break;
            }
          }
          local_14 = (undefined4 *)((int)local_14 + -1);
          break;
        case '@':
          if ((DAT_004133d0 & 4) == 0) {
            local_15 = local_15 | 1;
          }
          break;
        case '^':
          local_14 = (undefined4 *)((int)local_14 + 1);
          if ((*(char *)local_14 == ' ') || (bVar2 = false, *(char *)local_14 == '\t')) {
            bVar2 = true;
          }
          cVar8 = (-!bVar2 & 0x3eU) + 0x20;
        }
        if (cVar8 == '^') break;
        local_14 = (undefined4 *)((int)local_14 + 1);
        cVar8 = *(char *)local_14;
      }
      if (((local_15 & 4) == 0) ||
         (iVar4 = FUN_004048b0((uchar *)local_14,param_3,param_4,local_15,param_5,&local_10),
         puVar6 = local_14, iVar4 == 0)) {
        puVar6 = local_14;
        if ((local_4 == 0) && (puVar5 = _mbschr((uchar *)local_14,0x24), puVar5 != (uchar *)0x0)) {
          local_14 = FUN_0040b700((uchar *)local_14,&param_3);
        }
        FUN_0040c790(&DAT_00411250,(char *)local_14,param_5);
        if ((param_4 & 4) == 0) {
          iVar4 = 1;
          if (((param_4 & 8) == 0) && ((local_15 & 1) == 0)) goto LAB_004039c6;
          iVar7 = 0;
        }
        else {
          iVar4 = 0;
LAB_004039c6:
          iVar7 = 1;
        }
        local_10 = FUN_00403af0(&DAT_00411250,iVar7,iVar4,local_15 & 2,&uStack_8);
        bVar9 = param_4 & 2;
        if ((((bVar9 == 0) && (local_10 != 0)) && (DAT_00413a4c < local_10)) && (_DAT_004133a4 == 0)
           ) {
          FUN_00403220(0,0x435);
        }
        if (puVar6 != local_14) {
          free(local_14);
        }
        free(local_c);
        if (((bVar9 == 0) && (_DAT_004133a4 != 0)) && ((local_10 != 0 && (DAT_00413a4c < local_10)))
           ) break;
      }
      else {
        puVar5 = _mbschr((uchar *)local_14,0x24);
        if (puVar5 != (uchar *)0x0) {
          local_14 = FUN_0040b700((uchar *)local_14,&param_3);
        }
        if (puVar6 != local_14) {
          free(local_14);
        }
        if ((((param_4 & 2) == 0) && (_DAT_004133a4 != 0)) &&
           ((local_10 != 0 && (DAT_00413a4c < local_10)))) break;
      }
      param_2 = (int *)*param_2;
    } while (param_2 != (int *)0x0);
  }
  if (((param_4 & 2) == 0) && (_DAT_004133a4 != 0)) {
    return local_10;
  }
  return 0;
}



int FUN_00403af0(char *param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uchar *_Str1;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  code *pcVar13;
  code *pcVar14;
  char *pcVar15;
  undefined4 *puVar16;
  char *pcVar17;
  intptr_t iStack_220;
  uint uStack_21c;
  int local_218;
  int local_214;
  undefined4 uStack_210;
  undefined4 *puStack_20c;
  undefined *puStack_208;
  undefined4 auStack_204 [129];
  
  local_214 = -1;
  local_218 = -1;
  bVar3 = false;
  DAT_00413a54 = (uchar *)0x0;
  if (DAT_00413a58 == (undefined4 *)0x0) {
    DAT_00413a58 = (undefined4 *)FUN_00404830();
  }
  if (*param_1 == '-') {
    param_4 = 1;
    param_1 = param_1 + 1;
    iVar4 = _ismbcdigit((int)*param_1);
    if (iVar4 == 0) {
      DAT_00413a4c = 0xff;
    }
    else {
      DAT_00413a4c = strtol(param_1,&param_1,10);
      piVar7 = _errno();
      if (*piVar7 == 0x22) {
        *param_1 = '\0';
        FUN_00403220(0,0x436);
      }
      iVar4 = _ismbcspace((int)*param_1);
      while (iVar4 != 0) {
        param_1 = param_1 + 1;
        iVar4 = _ismbcspace((int)*param_1);
      }
    }
  }
  else if ((*param_1 == '@') && (param_1 = param_1 + 1, param_3 != 0)) {
    param_2 = 0;
  }
  if (*param_1 != '\0') {
    uVar8 = 0xffffffff;
    pcVar17 = param_1;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar17 + 1;
    } while (cVar1 != '\0');
    if (~uVar8 - 1 < 0x800) {
      uVar8 = 0xffffffff;
      pcVar17 = param_1;
      do {
        pcVar15 = pcVar17;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar15 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar15;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      puVar10 = (undefined4 *)(pcVar15 + -uVar8);
      puVar16 = (undefined4 *)&DAT_0040e108;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar16 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar16 = puVar16 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined *)puVar16 = *(undefined *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar16 = (undefined4 *)((int)puVar16 + 1);
      }
    }
    else {
      FUN_00403220(0,0x447);
    }
    if (param_2 != 0) {
      printf(&DAT_00413350,&DAT_0040e108);
      iVar4 = __p__iob();
      fflush((FILE *)(iVar4 + 0x20));
    }
    if (((DAT_0041400c == '\0') && (DAT_00414010 == '\0')) ||
       (((DAT_004133d0 & 4) == 0 &&
        (iVar4 = FUN_004043a0((undefined4 *)&DAT_0040e108,&local_214,&local_218), iVar4 != 0)))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    DAT_00413a5c = (uchar *)FUN_0040add0((undefined4 *)&DAT_0040e108);
    FUN_00403580(&uStack_21c,(uchar **)&puStack_20c,DAT_00413a5c);
    if (((puStack_20c != (undefined4 *)0x0) && (DAT_00413ff8 != 0)) &&
       (iVar4 = _mbsicmp((uchar *)puStack_20c,(uchar *)DAT_00413ff8), iVar4 == 0)) {
      puStack_20c = (undefined4 *)__p__pgmptr();
      puStack_20c = (undefined4 *)*puStack_20c;
    }
    if (uStack_21c != 0) {
      DAT_00413a54 = _mbsnbcpy(&DAT_004130f8,(uchar *)puStack_20c,0x100);
      if (param_3 != 0) {
        iVar4 = FUN_00404680(uStack_21c,(uchar **)&puStack_20c,&iStack_220);
        if (iVar4 == 0) {
          if (!bVar2) {
            piVar7 = _errno();
            iVar4 = 0x23;
            *piVar7 = 0;
            iVar11 = 0;
            iVar12 = 0x11;
            do {
              iVar6 = _mbsicmp((uchar *)puStack_20c,(&PTR_s_BREAK_00413068)[iVar12]);
              if (iVar6 == 0) {
                bVar2 = true;
                break;
              }
              if (iVar6 < 0) {
                iVar4 = iVar12;
                iVar12 = iVar11;
              }
              iVar6 = iVar4 - iVar12;
              iVar11 = iVar12;
              iVar12 = (iVar12 + iVar4) / 2;
            } while (1 < iVar6);
            bVar3 = true;
            if (!bVar2) {
              _splitpath((char *)DAT_00413a54,&DAT_0040e000,&DAT_0040e908,&DAT_0040e008,(char *)0x0)
              ;
              _makepath((char *)DAT_00413a54,&DAT_0040e000,&DAT_0040e908,&DAT_0040e008,(char *)0x0);
              _Str1 = (uchar *)FUN_00405bc0(DAT_00413a54,(undefined4 *)&DAT_00411050);
              if (_Str1 == (uchar *)0x0) {
                piVar7 = _errno();
                *piVar7 = 2;
                iStack_220 = -1;
              }
              else if ((_Str1[1] == 'b') || (iVar4 = _mbsicmp(_Str1,&DAT_00413348), iVar4 == 0)) {
                bVar2 = true;
              }
              else {
                cVar1 = *(char *)puStack_20c;
                puVar10 = puStack_20c;
                puVar16 = puStack_20c;
                while (cVar1 != '\0') {
                  puStack_20c = puVar16;
                  uVar8 = _mbctoupper((int)*(char *)puVar10);
                  *(char *)puVar10 = (char)uVar8;
                  cVar1 = *(char *)(undefined4 *)((int)puVar10 + 1);
                  puVar10 = (undefined4 *)((int)puVar10 + 1);
                  puVar16 = puStack_20c;
                }
                puStack_20c = (undefined4 *)&DAT_00411050;
                if ((DAT_00414014 == '\0') ||
                   (iVar4 = FUN_0040ab40(&DAT_00411050,&uStack_210), iVar4 != 0)) {
                  iStack_220 = _spawnvp(0,&DAT_00411050,(char **)&puStack_20c);
                  puStack_20c = puVar16;
                }
                else {
                  printf(s_NMAKE___Cannot_execute_command__s_00413314);
                  piVar7 = _errno();
                  *piVar7 = 1;
                  iStack_220 = -1;
                }
              }
            }
          }
        }
        else {
          bVar2 = false;
        }
        pcVar13 = _dup2_exref;
        pcVar14 = _close_exref;
        if (local_214 != -1) {
          iVar4 = __p__iob();
          pcVar13 = _dup2_exref;
          iVar4 = _dup2(local_214,*(int *)(iVar4 + 0x10));
          if (iVar4 == -1) {
            FUN_00403220(0,0x411);
          }
          pcVar14 = _close_exref;
          _close(local_214);
        }
        if (local_218 != -1) {
          iVar4 = __p__iob();
          iVar4 = (*pcVar13)(local_218,*(undefined4 *)(iVar4 + 0x30));
          if (iVar4 == -1) {
            FUN_00403220(0,0x411);
          }
          (*pcVar14)(local_218);
        }
        if (bVar2) {
          if (DAT_00414014 == '\0') {
            uVar8 = 0xffffffff;
            pcVar17 = param_1;
            do {
              pcVar15 = pcVar17;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar15 = pcVar17 + 1;
              cVar1 = *pcVar17;
              pcVar17 = pcVar15;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            puVar10 = (undefined4 *)(pcVar15 + -uVar8);
            puVar16 = (undefined4 *)&DAT_0040e108;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar16 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar16 = puVar16 + 1;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined *)puVar16 = *(undefined *)puVar10;
              puVar10 = (undefined4 *)((int)puVar10 + 1);
              puVar16 = (undefined4 *)((int)puVar16 + 1);
            }
            if (bVar3) {
              iStack_220 = system(&DAT_0040e108);
            }
            else {
              if (-1 < (int)uStack_21c) {
                puVar10 = auStack_204 + uStack_21c;
                do {
                  puVar16 = puVar10 + -1;
                  *puVar10 = puVar10[-2];
                  puVar10 = puVar16;
                } while (auStack_204 <= puVar16);
              }
              puStack_208 = &DAT_00413310;
              puStack_20c = DAT_00413a58;
              iStack_220 = _spawnvp(0,(char *)DAT_00413a58,(char **)&puStack_20c);
            }
          }
          else {
            printf(s_NMAKE___Cannot_execute_command__s_00413314);
            piVar7 = _errno();
            *piVar7 = 1;
            iStack_220 = -1;
          }
        }
        if (iStack_220 == -0x3fffffb5) {
          pcVar17 = s_spawn_returned_0xc000004b_____Be_004132e8;
          iVar4 = __p__iob();
          fprintf((FILE *)(iVar4 + 0x40),pcVar17);
          iStack_220 = 0;
        }
        if (iStack_220 == -1) {
          if (param_4 == 0) {
            piVar7 = _errno();
            iVar4 = *piVar7;
            if (iVar4 != 0) {
              if (iVar4 == 2) {
                uVar8 = 0x439;
              }
              else if (iVar4 == 0xc) {
                uVar8 = 0x43a;
              }
              else {
                _strerror((char *)0x0);
                uVar8 = 0x415;
              }
              FUN_00403220(0,uVar8);
            }
          }
          else {
            iStack_220 = 0;
          }
        }
        puVar10 = param_5;
        if ((iStack_220 != 0) && (param_5 != (undefined4 *)0x0)) {
          uVar5 = FUN_0040add0(puStack_20c);
          *puVar10 = uVar5;
        }
        free(DAT_00413a5c);
        return iStack_220;
      }
      iVar4 = FUN_00404680(uStack_21c,(uchar **)&puStack_20c,&iStack_220);
      puVar10 = param_5;
      if (iVar4 != 0) {
        if (iStack_220 == 0) {
          return 0;
        }
        if (param_5 == (undefined4 *)0x0) {
          return iStack_220;
        }
        uVar5 = FUN_0040add0(puStack_20c);
        *puVar10 = uVar5;
        return iStack_220;
      }
    }
  }
  return 0;
}



undefined * FUN_00404180(void)

{
  char cVar1;
  uchar uVar2;
  undefined *puVar3;
  uchar *puVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uchar *puVar9;
  uchar *_Str;
  uchar *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 *puVar14;
  char in_stack_00000108;
  
  FUN_0040ceb4();
  puVar9 = &stack0x0000090b;
  for (_Str = &DAT_0040e10b; (uVar2 = *_Str, uVar2 == ' ' || (uVar2 == '\t')); _Str = _Str + 1) {
    *puVar9 = uVar2;
    puVar9 = puVar9 + 1;
  }
  puVar4 = _mbschr(_Str,0x3d);
  if (puVar4 == (uchar *)0x0) {
    return &DAT_00413060;
  }
  uVar2 = *_Str;
  puVar4 = puVar9;
  while (uVar2 != '=') {
    uVar5 = _mbctoupper((int)(char)*_Str);
    *puVar4 = (uchar)uVar5;
    uVar2 = _Str[1];
    puVar4 = puVar4 + 1;
    _Str = _Str + 1;
  }
  uVar2 = *_Str;
  while (uVar2 != '\0') {
    if (*_Str == '%') {
      puVar10 = _Str + 1;
      uVar2 = *puVar10;
      puVar3 = &stack0x00000004;
      while ((uVar2 != '%' && (uVar2 = *puVar10, uVar2 != '\0'))) {
        puVar10 = puVar10 + 1;
        uVar5 = _mbctoupper((int)(char)uVar2);
        *puVar3 = (char)uVar5;
        uVar2 = *puVar10;
        puVar3 = puVar3 + 1;
      }
      *puVar3 = 0;
      _Str = puVar10 + 1;
      if (*puVar10 == '\0') {
        uVar5 = 0xffffffff;
        *puVar4 = '\0';
        pcVar6 = &stack0x00000004;
        do {
          pcVar12 = pcVar6;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar12;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar7 = -1;
        pcVar6 = &stack0x00000908;
        do {
          pcVar13 = pcVar6;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar13 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar13;
        } while (cVar1 != '\0');
        puVar11 = (undefined4 *)(pcVar12 + -uVar5);
        puVar14 = (undefined4 *)(pcVar13 + -1);
        for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar14 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar14 = puVar14 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined *)puVar14 = *(undefined *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        uVar5 = 0xffffffff;
        pcVar6 = &stack0x00000004;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        puVar4 = puVar4 + (~uVar5 - 1);
      }
      else {
        in_stack_00000108 = '\0';
        pcVar6 = getenv(&stack0x00000004);
        if (pcVar6 != (char *)0x0) {
          uVar5 = 0xffffffff;
          do {
            pcVar12 = pcVar6;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar12 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar12;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          iVar7 = -1;
          pcVar6 = &stack0x00000108;
          do {
            pcVar13 = pcVar6;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar13 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar13;
          } while (cVar1 != '\0');
          puVar11 = (undefined4 *)(pcVar12 + -uVar5);
          puVar14 = (undefined4 *)(pcVar13 + -1);
          for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar14 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar14 = puVar14 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined *)puVar14 = *(undefined *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar14 = (undefined4 *)((int)puVar14 + 1);
          }
          uVar5 = 0xffffffff;
          *puVar4 = '\0';
          pcVar6 = &stack0x00000108;
          do {
            pcVar12 = pcVar6;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar12 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar12;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          iVar7 = -1;
          pcVar6 = &stack0x00000908;
          do {
            pcVar13 = pcVar6;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar13 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar13;
          } while (cVar1 != '\0');
          puVar11 = (undefined4 *)(pcVar12 + -uVar5);
          puVar14 = (undefined4 *)(pcVar13 + -1);
          for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar14 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar14 = puVar14 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined *)puVar14 = *(undefined *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar14 = (undefined4 *)((int)puVar14 + 1);
          }
          uVar5 = 0xffffffff;
          pcVar6 = &stack0x00000108;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          puVar4 = puVar4 + (~uVar5 - 1);
        }
      }
    }
    else {
      *puVar4 = *_Str;
      _Str = _Str + 1;
      puVar4 = puVar4 + 1;
    }
    uVar2 = *_Str;
  }
  uVar5 = 0xffffffff;
  *puVar4 = '\0';
  pcVar6 = &stack0x00000908;
  do {
    pcVar12 = pcVar6;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar12 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar12;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  puVar11 = (undefined4 *)(pcVar12 + -uVar5);
  puVar14 = (undefined4 *)&DAT_0040e108;
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar14 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar14 = puVar14 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined *)puVar14 = *(undefined *)puVar11;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  *puVar9 = '\0';
  uVar5 = 0xffffffff;
  pcVar6 = &stack0x00000908;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  return (undefined *)(~uVar5 + 0x40e107);
}



int FUN_004043a0(undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uchar *puVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  char *pcVar13;
  char *pcVar14;
  char *local_10;
  int iStack_c;
  
  iVar11 = 0;
  uVar9 = 0xffffffff;
  bVar3 = false;
  bVar4 = false;
  local_10 = (char *)0x0;
  puVar12 = param_1;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *(char *)puVar12;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  } while (cVar1 != '\0');
  bVar2 = true;
  if (~uVar9 - 1 < 0x7c) {
    bVar2 = false;
  }
  do {
    puVar6 = _mbspbrk((uchar *)param_1,&DAT_0041335c);
    if (puVar6 == (uchar *)0x0) break;
    switch(*puVar6) {
    case '\"':
      puVar6 = _mbschr(puVar6 + 1,0x22);
      if (puVar6 == (uchar *)0x0) break;
      param_1 = (undefined4 *)(puVar6 + 1);
      goto LAB_00404510;
    default:
      FUN_00403220(0,0x411);
      goto LAB_00404510;
    case '<':
      if ((!bVar3) && (bVar2)) {
        if (local_10 == (char *)0x0) {
          local_10 = (char *)FUN_0040add0(param_1);
        }
        *puVar6 = ' ';
        param_1 = (undefined4 *)(puVar6 + 1);
        bVar3 = true;
        iVar8 = __p__iob();
        iVar8 = _dup(*(int *)(iVar8 + 0x10));
        *param_2 = iVar8;
        if (iVar8 != -1) {
          bVar5 = FUN_00404af0((uchar *)param_1,4);
          iVar8 = CONCAT31(extraout_var,bVar5);
joined_r0x00404509:
          param_1 = (undefined4 *)(puVar6 + 1);
          if (iVar8 != 0) goto LAB_00404510;
        }
      }
      break;
    case '>':
      if ((!bVar4) && (bVar2)) {
        if (local_10 == (char *)0x0) {
          local_10 = (char *)FUN_0040add0(param_1);
        }
        *puVar6 = ' ';
        param_1 = (undefined4 *)(puVar6 + 1);
        bVar4 = true;
        if (*(char *)param_1 == '>') {
          *(undefined *)param_1 = 0x20;
          iStack_c = 3;
          puVar12 = (undefined4 *)(puVar6 + 2);
        }
        else {
          iStack_c = 2;
          puVar12 = param_1;
        }
        iVar8 = __p__iob();
        iVar8 = _dup(*(int *)(iVar8 + 0x30));
        *param_3 = iVar8;
        if (iVar8 != -1) {
          bVar5 = FUN_00404af0((uchar *)puVar12,iStack_c);
          iVar8 = CONCAT31(extraout_var_00,bVar5);
          goto joined_r0x00404509;
        }
      }
      break;
    case '|':
      break;
    }
    iVar11 = 1;
LAB_00404510:
  } while (iVar11 == 0);
  if (iVar11 != 0) {
    if (local_10 != (char *)0x0) {
      uVar9 = 0xffffffff;
      pcVar13 = local_10;
      do {
        pcVar14 = pcVar13;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      puVar12 = (undefined4 *)(pcVar14 + -uVar9);
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *param_1 = *puVar12;
        puVar12 = puVar12 + 1;
        param_1 = param_1 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined *)param_1 = *(undefined *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        param_1 = (undefined4 *)((int)param_1 + 1);
      }
      free(local_10);
    }
    if ((bVar3) && (iVar8 = *param_2, iVar8 != -1)) {
      iVar7 = __p__iob();
      iVar8 = _dup2(iVar8,*(int *)(iVar7 + 0x30));
      if (iVar8 == -1) {
        FUN_00403220(0,0x411);
      }
      _close(*param_2);
      *param_2 = -1;
    }
    if ((bVar4) && (iVar8 = *param_3, iVar8 != -1)) {
      iVar7 = __p__iob();
      iVar8 = _dup2(iVar8,*(int *)(iVar7 + 0x30));
      if (iVar8 == -1) {
        FUN_00403220(0,0x411);
      }
      _close(*param_3);
      *param_3 = -1;
    }
  }
  return iVar11;
}



undefined4 FUN_00404680(int param_1,uchar **param_2,int *param_3)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *_EnvString;
  int *piVar5;
  uchar *puVar6;
  uchar *_Path;
  
  puVar6 = *param_2;
  _Path = param_2[1];
  iVar2 = _ismbcalpha((int)(char)*puVar6);
  if (((iVar2 != 0) && (puVar6[1] == ':')) && (puVar6[2] == '\0')) {
    uVar3 = _mbctoupper((int)(char)*puVar6);
    FUN_0040cbd0(uVar3 - 0x40);
    *param_3 = 0;
    return 1;
  }
  iVar2 = _mbsicmp(puVar6,(uchar *)&DAT_00413358);
  if (iVar2 == 0) {
    if (param_1 == 1) {
      return 0;
    }
    puVar4 = (undefined4 *)FUN_00404180();
    if (*(char *)puVar4 == '\0') {
      return 0;
    }
    _EnvString = (char *)FUN_0040add0(puVar4);
    iVar2 = _putenv(_EnvString);
    *param_3 = iVar2;
    if (iVar2 == -1) {
      FUN_00403220(DAT_00413424,0x41f);
    }
  }
  else {
    iVar2 = _mbsnbicmp(puVar6,&DAT_0041336c,2);
    if (iVar2 == 0) {
      puVar6 = puVar6 + 2;
    }
    else {
      iVar2 = _mbsnbicmp(puVar6,(uchar *)s_chdir_00413364,5);
      if (iVar2 != 0) {
        return 0;
      }
      puVar6 = puVar6 + 5;
    }
    FUN_00404bb0(param_1,(char **)param_2);
    if (2 < param_1) {
      return 0;
    }
    uVar1 = *puVar6;
    if ((uVar1 == '\0') && (_Path != (uchar *)0x0)) {
      piVar5 = (int *)__p___mb_cur_max();
      if (*piVar5 < 2) {
        piVar5 = (int *)__p__pctype();
        uVar3 = *(ushort *)(*piVar5 + (char)*_Path * 2) & 0x103;
      }
      else {
        uVar3 = _isctype((int)(char)*_Path,0x103);
      }
      if (((uVar3 != 0) && (_Path[1] == ':')) && (_Path[2] == '\0')) {
        return 0;
      }
    }
    else {
      _Path = puVar6;
      if ((uVar1 != '.') && ((uVar1 != '\\' && (uVar1 != '/')))) {
        return 0;
      }
    }
    iVar2 = _chdir((char *)_Path);
    *param_3 = iVar2;
  }
  if (*param_3 != 0) {
    *param_3 = 1;
  }
  return 1;
}



char * FUN_00404830(void)

{
  char *pcVar1;
  intptr_t local_8;
  
  FUN_0040ceb4();
  pcVar1 = getenv(s_COMSPEC_00413378);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = getenv(&DAT_00413254);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = &DAT_00413060;
    }
    pcVar1 = (char *)FUN_00405930(pcVar1,(undefined4 *)s_CMD_EXE_00413370,&stack0xfffffff0,&local_8)
    ;
    if (pcVar1 == (char *)0x0) {
      FUN_00403220(0,0x420);
    }
  }
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4
FUN_004048b0(uchar *param_1,undefined4 param_2,byte param_3,byte param_4,char *param_5,uint *param_6
            )

{
  uchar uVar1;
  uchar *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uchar *puVar8;
  uchar *puVar9;
  bool bVar10;
  char local_11;
  undefined4 local_c;
  uchar *local_8;
  undefined4 *local_4;
  
  local_11 = '\0';
  uVar1 = *param_1;
  puVar9 = param_1;
  while (puVar7 = (undefined4 *)0x0, uVar1 != '\0') {
    if (*puVar9 == '$') {
      bVar10 = puVar9[1] == '(';
      puVar8 = puVar9;
      if (bVar10) {
        puVar8 = puVar9 + 1;
      }
      puVar9 = puVar8 + 1;
      if (*puVar9 == '?') {
        puVar9 = puVar8;
        if ((!bVar10) ||
           (((puVar2 = _mbschr(&DAT_00413380,(int)(char)puVar8[2]), puVar2 != (uchar *)0x0 &&
             (puVar8[3] == ')')) || (puVar8[2] == ')')))) {
          local_11 = '?';
          puVar7 = DAT_00413a94;
          break;
        }
      }
      else if (((*puVar9 == '*') && (puVar8[2] == '*')) &&
              (((!bVar10 ||
                ((puVar2 = _mbschr(&DAT_00413380,(int)(char)puVar8[3]), puVar2 != (uchar *)0x0 &&
                 (puVar8[4] == ')')))) || (puVar8[3] == ')')))) {
        local_11 = '*';
        puVar7 = DAT_00413a98;
        break;
      }
    }
    puVar9 = puVar9 + 1;
    uVar1 = *puVar9;
  }
  if (*puVar9 == '\0') {
    return 0;
  }
  local_8 = param_1;
  local_4 = puVar7;
  do {
    if (puVar7 == (undefined4 *)0x0) break;
    DAT_00413a28 = param_2;
    puVar3 = DAT_00413a94;
    if (local_11 == '*') {
      puVar3 = DAT_00413a98;
    }
    puVar7 = (undefined4 *)*puVar3;
    *puVar3 = 0;
    puVar3 = FUN_0040b700(local_8,(int **)&DAT_00413a28);
    FUN_0040c790(&DAT_00411250,(char *)puVar3,param_5);
    if (((param_3 & 4) == 0) || (iVar5 = 0, (param_4 & 8) != 0)) {
      iVar5 = 1;
    }
    if (((param_3 & 4) == 0) && (((param_3 & 8) != 0 || ((param_4 & 1) != 0)))) {
      iVar6 = 0;
    }
    else {
      iVar6 = 1;
    }
    uVar4 = FUN_00403af0(&DAT_00411250,iVar6,iVar5,param_4 & 2,&local_c);
    *param_6 = uVar4;
    if (((((param_3 & 2) == 0) && (*param_6 != 0)) && (DAT_00413a4c < *param_6)) &&
       (_DAT_004133a4 == 0)) {
      FUN_00403220(0,0x435);
    }
    if (local_11 == '*') {
      *DAT_00413a98 = puVar7;
      DAT_00413a98 = (undefined4 *)*DAT_00413a98;
    }
    else {
      *DAT_00413a94 = puVar7;
      DAT_00413a94 = (undefined4 *)*DAT_00413a94;
    }
    free(puVar3);
  } while ((((param_3 & 2) != 0) || (_DAT_004133a4 == 0)) ||
          ((*param_6 == 0 || (*param_6 <= DAT_00413a4c))));
  if (local_11 == '*') {
    DAT_00413a98 = local_4;
  }
  else {
    DAT_00413a94 = local_4;
  }
  return 1;
}



bool FUN_00404af0(uchar *param_1,int param_2)

{
  uchar uVar1;
  uchar *puVar2;
  FILE *pFVar3;
  int iVar4;
  char *_Mode;
  uchar local_1;
  
  local_1 = '\0';
  for (; (*param_1 == ' ' || (*param_1 == '\t')); param_1 = param_1 + 1) {
  }
  puVar2 = _mbspbrk(param_1,(uchar *)s__<>_00413394);
  if (puVar2 != (uchar *)0x0) {
    local_1 = *puVar2;
    *puVar2 = '\0';
  }
  if (param_2 == 4) {
    _Mode = &DAT_00413390;
    pFVar3 = (FILE *)__p__iob();
  }
  else {
    _Mode = &DAT_0041338c;
    iVar4 = __p__iob();
    pFVar3 = (FILE *)(iVar4 + 0x20);
    if (param_2 != 2) {
      _Mode = &DAT_00413388;
    }
  }
  pFVar3 = freopen((char *)param_1,_Mode,pFVar3);
  if ((pFVar3 != (FILE *)0x0) && (param_2 == 3)) {
    _lseek(pFVar3->_file,0,2);
  }
  uVar1 = *param_1;
  while (uVar1 != '\0') {
    *param_1 = ' ';
    param_1 = param_1 + 1;
    uVar1 = *param_1;
  }
  if (puVar2 != (uchar *)0x0) {
    *puVar2 = local_1;
  }
  return pFVar3 != (FILE *)0x0;
}



void FUN_00404bb0(int param_1,char **param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_1 != 0) {
    do {
      param_1 = param_1 + -1;
      pcVar2 = *param_2;
      cVar1 = *pcVar2;
      pcVar3 = pcVar2;
      while (cVar1 != '\0') {
        cVar1 = *pcVar2;
        if ((cVar1 == '\\') || (cVar1 == '^')) {
          if (pcVar2[1] == '\"') {
            *pcVar3 = cVar1;
            pcVar3 = pcVar3 + 1;
            pcVar2 = pcVar2 + 1;
          }
          *pcVar3 = *pcVar2;
LAB_00404bf4:
          pcVar3 = pcVar3 + 1;
        }
        else if (cVar1 != '\"') {
          *pcVar3 = cVar1;
          goto LAB_00404bf4;
        }
        pcVar2 = pcVar2 + 1;
        cVar1 = *pcVar2;
      }
      param_2 = param_2 + 1;
      *pcVar3 = '\0';
    } while (param_1 != 0);
  }
  return;
}



void FUN_00404c10(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined local_1;
  
  FUN_00403370(5);
  if (param_2 == 0) {
    iVar1 = FUN_0040ca80(param_1,&DAT_0041339c);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x10);
      iVar2 = _read(iVar1,&local_1,1);
      if (0 < iVar2) {
        _lseek(iVar1,0,0);
        _write(iVar1,&local_1,1);
      }
      _close(iVar1);
    }
  }
  return;
}



int FUN_00404c90(int *param_1)

{
  return *param_1 + 0x14;
}



int FUN_00404ca0(byte **param_1)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = *param_1;
  if ((*pbVar1 & 0x10) == 0) {
    iVar2 = *(int *)(pbVar1 + 0xc);
  }
  else {
    iVar2 = *(int *)(pbVar1 + 4);
    if (iVar2 == -1) {
      return *(int *)(pbVar1 + 0xc);
    }
  }
  return iVar2;
}



void FUN_00404cc0(byte **param_1,undefined4 param_2)

{
  byte *pbVar1;
  
  pbVar1 = *param_1;
  if ((*pbVar1 & 0x10) != 0) {
    *(undefined4 *)(pbVar1 + 4) = param_2;
    return;
  }
  *(undefined4 *)(pbVar1 + 0xc) = param_2;
  return;
}



uint FUN_00404cf0(FILE *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_00413a80 == 0xffffffff) {
    uVar1 = getc(param_1);
    iVar2 = __p__mbctype();
    if ((*(byte *)((uVar1 & 0xff) + 1 + iVar2) & 4) != 0) {
      uVar3 = getc(param_1);
      DAT_00413a80 = uVar1 << 8 | uVar3;
      if (DAT_00413a80 == 0x8140) {
        return 0x20;
      }
    }
  }
  else {
    uVar1 = 0x20;
    if (DAT_00413a80 != 0x8140) {
      uVar1 = DAT_00413a80;
    }
    DAT_00413a80 = 0xffffffff;
  }
  return uVar1;
}



void FUN_00404d70(uint param_1,FILE *param_2)

{
  if (DAT_00413a80 != 0xffffffff) {
    ungetc(DAT_00413a80 & 0xff,param_2);
    ungetc(param_1,param_2);
    DAT_00413a80 = 0xffffffff;
    return;
  }
  if ((param_1 & 0xffffff00) == 0) {
    ungetc(param_1,param_2);
    return;
  }
  DAT_00413a80 = param_1;
  return;
}



uint FUN_00404de0(void)

{
  uint uVar1;
  uchar *_Memory;
  int *_Str1;
  undefined4 uVar2;
  uchar *puVar3;
  uchar *puVar4;
  int iVar5;
  char local_1;
  
  uVar1 = FUN_00404cf0(DAT_004133d8);
  do {
    if (DAT_00413a78 == (uchar *)0x0) {
      if (DAT_004133f0 == 0) {
        return uVar1;
      }
      if (uVar1 != 0x21) {
        return uVar1;
      }
    }
    DAT_004133f0 = 0;
    if (DAT_00413a78 == (uchar *)0x0) {
      _Memory = (uchar *)FUN_00404f80();
    }
    else {
      FUN_00404d70(uVar1,DAT_004133d8);
      _Memory = DAT_00413a78;
      DAT_00413a78 = (uchar *)0x0;
    }
    _Str1 = (int *)FUN_004050b0(_Memory,&local_1);
    if (local_1 == '\t') {
      if (DAT_00413408 != 0) {
        FUN_00403220(DAT_004133f4,0x409);
      }
      uVar2 = FUN_00407680(_Str1);
      if ((char)uVar2 == '\x12') {
        return 0x20;
      }
    }
    else if (local_1 == '\n') {
      FUN_004051e0((char *)_Str1);
    }
    else if (local_1 == '\v') {
      FUN_00403220(DAT_004133f4,0x41a);
    }
    else if (local_1 == '\f') {
      iVar5 = _mbsnbicmp((uchar *)_Str1,&DAT_00413f04,2);
      if (iVar5 == 0) {
        printf(&DAT_00413f00);
      }
      FUN_00403370(0xd);
    }
    else if (local_1 == '\r') {
      puVar3 = _mbstok((uchar *)_Str1,&DAT_00413008);
      puVar4 = _mbstok((uchar *)0x0,&DAT_00413008);
      if (puVar4 != (uchar *)0x0) {
        FUN_00403220(DAT_004133f4,0x409);
      }
      uVar1 = FUN_00407b70(puVar3);
      if (uVar1 != 0) {
        *(byte *)(uVar1 + 0xc) = *(byte *)(uVar1 + 0xc) | 0x10;
      }
    }
    else {
      FUN_00405530((uchar *)_Str1,local_1);
    }
    DAT_004133f0 = 1;
    if (DAT_00413a74 != _Memory) {
      free(_Memory);
    }
    DAT_004133f4 = DAT_004133f4 + 1;
    uVar1 = FUN_00404cf0(DAT_004133d8);
  } while( true );
}



void FUN_00404f80(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_00406880('\x01');
  if ((uVar2 == 10) || (uVar2 == 0xffffffff)) {
    FUN_00403220(DAT_004133f4,0x3fa);
  }
  FUN_00404d70(uVar2,DAT_004133d8);
  iVar3 = 0;
  while( true ) {
    uVar2 = FUN_00404cf0(DAT_004133d8);
    uVar2 = FUN_004069d0(uVar2,'\x01');
    uVar1 = DAT_00413a7c;
    if (((uVar2 == 0x23) || (uVar2 == 10)) || (uVar2 == 0xffffffff)) break;
    if (DAT_00413a7c < iVar3 + 2U) {
      DAT_00413a7c = DAT_00413a7c + 0x400;
      if (DAT_00413a74 == (int *)0x0) {
        DAT_00413a74 = FUN_0040acf0(uVar1 + 0x401);
      }
      else {
        DAT_00413a74 = (int *)realloc(DAT_00413a74,uVar1 + 0x401);
        if (DAT_00413a74 == (int *)0x0) {
          FUN_00403220(DAT_004133f4,0x419);
        }
      }
    }
    *(char *)((int)DAT_00413a74 + iVar3) = (char)uVar2;
    iVar3 = iVar3 + 1;
  }
  *(undefined *)((int)DAT_00413a74 + iVar3) = 0;
  if (uVar2 == 0x23) {
    uVar2 = FUN_00404cf0(DAT_004133d8);
    while (uVar2 != 10) {
      if (uVar2 == 0xffffffff) goto LAB_00405089;
      uVar2 = FUN_00404cf0(DAT_004133d8);
    }
  }
  if (uVar2 == 0xffffffff) {
LAB_00405089:
    FUN_00404d70(uVar2,DAT_004133d8);
  }
  FUN_0040b690(DAT_00413a74);
  return;
}



uchar * FUN_004050b0(uchar *param_1,char *param_2)

{
  uchar uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uchar *local_4;
  
  *param_2 = '\0';
  uVar1 = *param_1;
  local_4 = param_1;
  while (((uVar1 != '\0' && (*local_4 != ' ')) && (*local_4 != '\t'))) {
    local_4 = local_4 + 1;
    uVar1 = *local_4;
  }
  iVar4 = (int)local_4 - (int)param_1;
  uVar1 = *local_4;
  while ((uVar1 != '\0' && ((*local_4 == ' ' || (*local_4 == '\t'))))) {
    local_4 = local_4 + 1;
    uVar1 = *local_4;
  }
  iVar3 = _mbsnbicmp(param_1,(uchar *)s_INCLUDE_00413f2c,7);
  if ((iVar3 == 0) && (iVar4 == 7)) {
    *param_2 = '\t';
  }
  else {
    iVar3 = _mbsnbicmp(param_1,(uchar *)s_CMDSWITCHES_00413f20,0xb);
    if ((iVar3 == 0) && (iVar4 == 0xb)) {
      *param_2 = '\n';
    }
    else {
      iVar3 = _mbsnbicmp(param_1,(uchar *)s_ERROR_00413f18,5);
      if ((iVar3 == 0) && (iVar4 == 5)) {
        *param_2 = '\v';
      }
      else {
        iVar3 = _mbsnbicmp(param_1,(uchar *)s_MESSAGE_00413f10,7);
        if ((iVar3 == 0) && (iVar4 == 7)) {
          *param_2 = '\f';
        }
        else {
          iVar3 = _mbsnbicmp(param_1,(uchar *)s_UNDEF_00413f08,5);
          if ((iVar3 == 0) && (iVar4 == 5)) {
            *param_2 = '\r';
          }
          else {
            cVar2 = FUN_00405360(param_1,iVar4,&local_4);
            *param_2 = cVar2;
          }
        }
      }
    }
  }
  if (*param_2 == '\0') {
    FUN_00403220(DAT_004133f4,0x3f9);
  }
  return local_4;
}



void FUN_004051e0(char *param_1)

{
  char cVar1;
  uint uVar2;
  uchar *puVar3;
  
  cVar1 = *param_1;
  do {
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = *param_1;
    if (cVar1 == '+') {
      param_1 = param_1 + 1;
      if (*param_1 != '\0') {
        do {
          if (*param_1 == '-') break;
          uVar2 = _mbctoupper((int)*param_1);
          puVar3 = _mbschr(&DAT_00413f44,uVar2 & 0xffff);
          if (puVar3 == (uchar *)0x0) {
            if (DAT_00413408 != 0) {
              uVar2 = _mbctoupper((int)*param_1);
              puVar3 = _mbschr((uchar *)s_ABCEKLMPQRTV_00413f34,uVar2 & 0xffff);
              if (puVar3 != (uchar *)0x0) {
                FUN_004086d0(*param_1,1);
                goto LAB_004052b5;
              }
            }
            FUN_00403220(DAT_004133f4,0x400);
          }
          else {
            FUN_004086d0(*param_1,1);
          }
LAB_004052b5:
          param_1 = param_1 + 1;
        } while (*param_1 != '\0');
        if (*param_1 == '\0') {
          return;
        }
        goto LAB_004052c4;
      }
    }
    else if (cVar1 == '-') {
LAB_004052c4:
      param_1 = param_1 + 1;
      if (*param_1 == '\0') {
        return;
      }
      do {
        if (*param_1 == '+') break;
        uVar2 = _mbctoupper((int)*param_1);
        puVar3 = _mbschr(&DAT_00413f44,uVar2 & 0xffff);
        if (puVar3 == (uchar *)0x0) {
          if (DAT_00413408 != 0) {
            uVar2 = _mbctoupper((int)*param_1);
            puVar3 = _mbschr((uchar *)s_ABCEKLMPQRTV_00413f34,uVar2 & 0xffff);
            if (puVar3 != (uchar *)0x0) {
              FUN_004086d0(*param_1,0);
              goto LAB_00405342;
            }
          }
          FUN_00403220(DAT_004133f4,0x400);
        }
        else {
          FUN_004086d0(*param_1,0);
        }
LAB_00405342:
        param_1 = param_1 + 1;
      } while (*param_1 != '\0');
    }
    else if ((cVar1 != ' ') && (cVar1 != '\t')) {
      FUN_00403220(DAT_004133f4,0x400);
    }
    if (*param_1 == '\0') {
      return;
    }
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  } while( true );
}



undefined FUN_00405360(uchar *param_1,int param_2,uchar **param_3)

{
  uchar uVar1;
  uchar *_Str1;
  int iVar2;
  int iVar3;
  uchar *puVar4;
  undefined uVar5;
  
  uVar5 = 0;
  iVar2 = _mbsnbicmp(param_1,&DAT_00413268,2);
  if ((iVar2 == 0) && (param_2 == 2)) {
    return 1;
  }
  iVar2 = _mbsnbicmp(param_1,(uchar *)s_IFDEF_00413f84,5);
  if ((iVar2 == 0) && (param_2 == 5)) {
    return 6;
  }
  iVar2 = _mbsnbicmp(param_1,(uchar *)s_IFNDEF_00413f7c,6);
  if ((iVar2 == 0) && (param_2 == 6)) {
    return 7;
  }
  iVar2 = _mbsnbicmp(param_1,&DAT_00413f74,4);
  if ((iVar2 == 0) && (param_2 == 4)) {
    _Str1 = *param_3;
    uVar1 = *_Str1;
    puVar4 = _Str1;
    if (uVar1 == '\0') {
      return 2;
    }
    while (((uVar1 != '\0' && (*puVar4 != ' ')) && (*puVar4 != '\t'))) {
      uVar1 = puVar4[1];
      puVar4 = puVar4 + 1;
    }
    iVar2 = (int)puVar4 - (int)_Str1;
    uVar1 = *puVar4;
    while ((uVar1 != '\0' && ((*puVar4 == ' ' || (*puVar4 == '\t'))))) {
      puVar4 = puVar4 + 1;
      uVar1 = *puVar4;
    }
    *param_3 = puVar4;
    iVar3 = _mbsnbicmp(_Str1,&DAT_00413268,2);
    if ((iVar3 == 0) && (iVar2 == 2)) {
      return 3;
    }
    iVar3 = _mbsnbicmp(_Str1,(uchar *)s_IFDEF_00413f84,5);
    if ((iVar3 == 0) && (iVar2 == 5)) {
      return 4;
    }
    iVar3 = _mbsnbicmp(_Str1,(uchar *)s_IFNDEF_00413f7c,6);
    if ((iVar3 == 0) && (iVar2 == 6)) {
      return 5;
    }
  }
  else {
    iVar2 = _mbsnbicmp(param_1,(uchar *)s_ELSEIF_00413f6c,6);
    if ((iVar2 == 0) && (param_2 == 6)) {
      return 3;
    }
    iVar2 = _mbsnbicmp(param_1,(uchar *)s_ELSEIFDEF_00413f60,9);
    if ((iVar2 == 0) && (param_2 == 9)) {
      return 4;
    }
    iVar2 = _mbsnbicmp(param_1,(uchar *)s_ELSEIFNDEF_00413f54,10);
    if ((iVar2 == 0) && (param_2 == 10)) {
      return 5;
    }
    iVar2 = _mbsnbicmp(param_1,(uchar *)s_ENDIF_00413f4c,5);
    if ((iVar2 == 0) && (param_2 == 5)) {
      uVar5 = 8;
    }
  }
  return uVar5;
}



void FUN_00405530(uchar *param_1,undefined param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  
  iVar3 = DAT_00413a70;
  switch(param_2) {
  case 1:
  case 6:
  case 7:
    if (DAT_00413a70 == 0xf) {
      FUN_00403220(DAT_004133f4,0x3fb);
    }
    *(undefined *)(DAT_00413a70 + 0x413a61) = 1;
    iVar3 = DAT_00413a70 + 1;
    if ((iVar3 != 0) && (((&DAT_00413a60)[DAT_00413a70] & 2) == 0)) {
      puVar1 = (undefined *)(DAT_00413a70 + 0x413a61);
      DAT_00413a70 = iVar3;
      *puVar1 = 5;
      FUN_00405710();
      return;
    }
    DAT_00413a70 = iVar3;
    iVar3 = FUN_00409e80(param_1,param_2);
    if (iVar3 == 0) {
      FUN_00405710();
      return;
    }
    (&DAT_00413a60)[DAT_00413a70] = (&DAT_00413a60)[DAT_00413a70] | 2;
    return;
  case 2:
    if ((DAT_00413a70 < 0) || (((&DAT_00413a60)[DAT_00413a70] & 9) == 0)) {
      FUN_00403220(DAT_004133f4,0x3fd);
    }
    pbVar2 = &DAT_00413a60 + DAT_00413a70;
    bVar4 = *pbVar2;
    *pbVar2 = bVar4 & 0xfe;
    *pbVar2 = bVar4 & 0xf6;
    if ((bVar4 & 4) != 0) {
      FUN_00405710();
      return;
    }
    if ((bVar4 & 2) == 0) {
      bVar4 = bVar4 & 0xf6 | 2;
    }
    else {
      bVar4 = bVar4 & 0xf4;
    }
    *pbVar2 = bVar4;
    iVar3 = DAT_00413a70;
    if ((*pbVar2 & 2) == 0) {
      FUN_00405710();
      return;
    }
    break;
  case 3:
  case 4:
  case 5:
    if ((DAT_00413a70 < 0) || (((&DAT_00413a60)[DAT_00413a70] & 9) == 0)) {
      FUN_00403220(DAT_004133f4,0x3fd);
    }
    pbVar2 = &DAT_00413a60 + DAT_00413a70;
    bVar4 = *pbVar2;
    bVar5 = bVar4 & 0xfe;
    *pbVar2 = bVar5;
    *pbVar2 = bVar5 | 8;
    if ((bVar4 & 4) != 0) {
      FUN_00405710();
      return;
    }
    if ((bVar4 & 2) != 0) {
      *pbVar2 = bVar5 | 0xc;
      *pbVar2 = bVar4 & 0xfc | 0xc;
      FUN_00405710();
      return;
    }
    iVar3 = FUN_00409e80(param_1,param_2);
    if (iVar3 == 0) {
      FUN_00405710();
      return;
    }
    (&DAT_00413a60)[DAT_00413a70] = (&DAT_00413a60)[DAT_00413a70] | 2;
    return;
  case 8:
    if (DAT_00413a70 < 0) {
      FUN_00403220(DAT_004133f4,0x3fd);
    }
    iVar3 = DAT_00413a70 + -1;
    if ((-1 < iVar3) && ((*(byte *)((int)&DAT_00413a5c + DAT_00413a70 + 3) & 2) == 0)) {
      DAT_00413a70 = iVar3;
      FUN_00405710();
      iVar3 = DAT_00413a70;
    }
  }
  DAT_00413a70 = iVar3;
  return;
}



void FUN_00405710(void)

{
  uint uVar1;
  byte local_1;
  
  do {
    uVar1 = FUN_00404cf0(DAT_004133d8);
joined_r0x00405735:
    if ((uVar1 != 0x21) && (uVar1 != 0xffffffff)) {
      DAT_004133f4 = DAT_004133f4 + 1;
      do {
        if (uVar1 == 0x5c) {
          uVar1 = FUN_004069d0(0x5c,'\x01');
          if ((uVar1 == 0x21) && (DAT_004133f0 != 0)) goto LAB_00405793;
          DAT_004133f0 = 0;
        }
        if (uVar1 == 0x23) goto LAB_00405798;
        if ((uVar1 == 10) || (uVar1 == 0xffffffff)) goto LAB_00405793;
        uVar1 = FUN_00404cf0(DAT_004133d8);
      } while( true );
    }
LAB_004057de:
    if (uVar1 != 0x21) {
      if (uVar1 == 0xffffffff) {
        FUN_00403220(DAT_004133f4,0x3fc);
      }
      return;
    }
LAB_004057e3:
    if ((DAT_00413a78 != (uchar *)0x0) && (DAT_00413a78 != DAT_00413a74)) {
      free(DAT_00413a78);
    }
    DAT_00413a78 = (uchar *)FUN_00404f80();
    FUN_004050b0(DAT_00413a78,(char *)&local_1);
    if (local_1 < 9) {
      return;
    }
    DAT_004133f4 = DAT_004133f4 + 1;
  } while( true );
LAB_00405793:
  if (uVar1 == 0x23) {
LAB_00405798:
    uVar1 = FUN_00404cf0(DAT_004133d8);
    while (uVar1 != 10) {
      if (uVar1 == 0xffffffff) goto LAB_004057de;
      uVar1 = FUN_00404cf0(DAT_004133d8);
    }
  }
  if (uVar1 == 0xffffffff) goto LAB_004057de;
  if (uVar1 == 0x21) goto LAB_004057e3;
  uVar1 = FUN_00404cf0(DAT_004133d8);
  goto joined_r0x00405735;
}



undefined4 FUN_00405860(char *param_1,undefined4 *param_2,uchar *param_3)

{
  char *pcVar1;
  undefined4 *_Memory;
  int iVar2;
  undefined *puVar3;
  intptr_t *piVar4;
  intptr_t local_8;
  
  puVar3 = &stack0xfffffff4;
  FUN_0040ceb4();
  piVar4 = &local_8;
  pcVar1 = getenv(param_1);
  _Memory = (undefined4 *)FUN_00405930(pcVar1,param_2,puVar3,piVar4);
  if (_Memory == (undefined4 *)0x0) {
    return 0;
  }
  DAT_004133d8 = FUN_0040ca80(_Memory,&DAT_00413014);
  if (DAT_004133d8 == 0) {
    FUN_00403220(0,0x41d);
  }
  free(_Memory);
  iVar2 = FUN_00405a20(param_3);
  if (iVar2 != 0) {
    return 1;
  }
  iVar2 = fclose((FILE *)DAT_004133d8);
  if (iVar2 == -1) {
    FUN_00403220(0,0x424);
  }
  return 0;
}



undefined4 FUN_00405930(char *param_1,undefined4 *param_2,undefined4 param_3,intptr_t *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uchar *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar2 = FUN_0040cd20((uchar *)param_2,&param_3,param_4);
  if (iVar2 != 0) {
    uVar3 = FUN_0040add0(param_2);
    return uVar3;
  }
  if (param_1 == (char *)0x0) {
    return 0;
  }
LAB_0040596e:
  puVar7 = (undefined4 *)&DAT_00413aa0;
LAB_00405973:
  do {
    cVar1 = *param_1;
    if (cVar1 != '\0') {
      param_1 = param_1 + 1;
      *(char *)puVar7 = cVar1;
      if (cVar1 != ';') {
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        goto LAB_00405973;
      }
    }
    if (puVar7 != (undefined4 *)&DAT_00413aa0) break;
    if (*param_1 == '\0') {
      return 0;
    }
  } while( true );
  if ((*(char *)((int)puVar7 + -1) != '\\') && (*(char *)((int)puVar7 + -1) != '/')) {
    *(undefined *)puVar7 = 0x5c;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  *(undefined *)puVar7 = 0;
  puVar4 = _mbspbrk(&DAT_00413aa0,&DAT_00413000);
  if (puVar4 == (uchar *)0x0) {
    uVar5 = 0xffffffff;
    puVar8 = param_2;
    do {
      puVar9 = puVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      puVar9 = (undefined4 *)((int)puVar8 + 1);
      cVar1 = *(char *)puVar8;
      puVar8 = puVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    puVar8 = (undefined4 *)((int)puVar9 - uVar5);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined *)puVar7 = *(undefined *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    iVar2 = FUN_0040cd20(&DAT_00413aa0,&param_3,param_4);
    if (iVar2 != 0) {
      uVar3 = FUN_0040add0((undefined4 *)&DAT_00413aa0);
      return uVar3;
    }
  }
  goto LAB_0040596e;
}



undefined4 FUN_00405a20(uchar *param_1)

{
  uchar uVar1;
  bool bVar2;
  char *pcVar3;
  uchar *_Str1;
  int iVar4;
  uint uVar5;
  uchar *puVar6;
  
  DAT_004133f4 = 0;
  pcVar3 = fgets(&DAT_00413aa0,0x400,(FILE *)DAT_004133d8);
  do {
    if (pcVar3 == (char *)0x0) {
      if ((*(byte *)(DAT_004133d8 + 0xc) & 0x10) == 0) {
        DAT_00413424 = DAT_004133f4;
        FUN_00403220(0,0x41d);
      }
      return 0;
    }
    if (DAT_00413aa0 == '[') {
      bVar2 = false;
      _Str1 = _mbstok(&DAT_00413aa1,&DAT_00413018);
      while ((_Str1 != (uchar *)0x0 && (!bVar2))) {
        uVar5 = 0xffffffff;
        puVar6 = _Str1;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
        } while (uVar1 != '\0');
        if (_Str1[~uVar5 - 2] == ']') {
          bVar2 = true;
          _Str1[~uVar5 - 2] = '\0';
        }
        iVar4 = _mbsicmp(_Str1,param_1);
        if (iVar4 == 0) {
          return 1;
        }
        _Str1 = _mbstok((uchar *)0x0,&DAT_00413018);
      }
    }
    DAT_004133f4 = DAT_004133f4 + 1;
    pcVar3 = fgets(&DAT_00413aa0,0x400,(FILE *)DAT_004133d8);
  } while( true );
}



void FUN_00405b20(uchar *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  char cVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char local_104 [260];
  
  _makepath(local_104,(char *)0x0,(char *)0x0,(char *)param_1,param_2);
  _searchenv(local_104,param_3,(char *)param_4);
  if (*(char *)param_4 != '\0') {
    puVar2 = _mbspbrk(param_1,&DAT_00413f8c);
    if (puVar2 != (uchar *)0x0) {
      uVar3 = 0xffffffff;
      pcVar6 = local_104;
      do {
        pcVar7 = pcVar6;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      puVar5 = (undefined4 *)(pcVar7 + -uVar3);
      puVar8 = param_4;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined *)puVar8 = *(undefined *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
    }
  }
  _mbsrchr((uchar *)param_4,0x2e);
  return;
}



uint FUN_00405bc0(uchar *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00405b20(param_1,&DAT_00413fa0,&DAT_00413254,param_2);
  if (uVar1 == 0) {
    uVar1 = FUN_00405b20(param_1,&DAT_00413f98,&DAT_00413254,param_2);
    if (uVar1 == 0) {
      uVar1 = FUN_00405b20(param_1,&DAT_00413f90,&DAT_00413254,param_2);
      uVar1 = (uVar1 == 0) - 1 & uVar1;
    }
  }
  return uVar1;
}



undefined4 * FUN_00405c20(undefined4 *param_1,uchar **param_2,uchar **param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *_Dest;
  uint uVar5;
  uint _NewSize;
  undefined4 *local_408;
  undefined4 local_400;
  
  _Dest = (undefined4 *)0x0;
  bVar2 = false;
  puVar3 = FUN_00406490((undefined *)((int)&local_400 + 2),0x3fe);
  if (puVar3 == (undefined *)0x0) {
    if ((*(byte *)(DAT_004133d8 + 0xc) & 0x10) != 0) {
      FUN_00403220(DAT_004133f4,0x409);
    }
    FUN_00403220(DAT_004133f4,0x41d);
  }
  FUN_00405ef0((uchar *)&local_400);
  uVar5 = local_400;
  if (DAT_00413404 != (int *)0x0) {
    do {
      while( true ) {
        puVar4 = param_1;
        local_408 = &local_400;
        do {
          param_1 = (undefined4 *)((int)puVar4 + 1);
          puVar1 = (undefined4 *)((int)local_408 + 1);
          *(char *)puVar4 = *(char *)local_408;
          _NewSize = uVar5;
          if ((undefined4 *)*param_3 == param_1) {
            if (_Dest == (undefined4 *)0x0) {
              _NewSize = 0x800;
              _Dest = FUN_0040acf0(0x800);
              param_1 = _Dest + 0x100;
              _mbsnbcpy((uchar *)_Dest,*param_2,0x400);
              *param_3 = (uchar *)(_Dest + 0x200);
            }
            else {
              _NewSize = uVar5 + 0x400;
              if ((_NewSize < uVar5) ||
                 (_Dest = (undefined4 *)realloc(_Dest,_NewSize), _Dest == (undefined4 *)0x0)) {
                FUN_00403220(DAT_004133f4,0x419);
              }
              param_1 = (undefined4 *)(uVar5 + (int)_Dest);
              *param_3 = (uchar *)(_NewSize + (int)_Dest);
            }
            *param_2 = (uchar *)_Dest;
          }
          puVar4 = param_1;
          uVar5 = _NewSize;
          local_408 = puVar1;
        } while (*(char *)puVar1 != '\0');
        if (((bVar2) && ((char)local_400 == '<')) && (local_400._1_1_ == '<')) break;
        bVar2 = true;
        puVar3 = FUN_00406490((undefined *)&local_400,0x400);
        if (puVar3 == (undefined *)0x0) {
          if ((*(byte *)(DAT_004133d8 + 0xc) & 0x10) != 0) {
            FUN_00403220(DAT_004133f4,0x409);
          }
          FUN_00403220(DAT_004133f4,0x41d);
        }
      }
      if ((*DAT_00413404 != 0) &&
         (puVar3 = FUN_00406490((undefined *)&local_400,0x400), puVar3 == (undefined *)0x0)) {
        if ((*(byte *)(DAT_004133d8 + 0xc) & 0x10) != 0) {
          FUN_00403220(DAT_004133f4,0x409);
        }
        FUN_00403220(DAT_004133f4,0x41d);
      }
      DAT_00413404 = (int *)*DAT_00413404;
    } while (DAT_00413404 != (int *)0x0);
    DAT_00413404 = (int *)0x0;
  }
  *(char *)param_1 = '\0';
  return param_1;
}



void FUN_00405e60(uchar *param_1)

{
  uchar *puVar1;
  char *pcVar2;
  
  puVar1 = param_1;
  while( true ) {
    puVar1 = _mbschr(puVar1,10);
    if ((puVar1 == (uchar *)0x0) || (puVar1[-1] != '^')) break;
    puVar1 = puVar1 + 1;
    pcVar2 = fgets((char *)puVar1,(int)(param_1 + (0x400 - (int)puVar1)),(FILE *)DAT_004133d8);
    if (pcVar2 == (char *)0x0) {
      if ((*(byte *)(DAT_004133d8 + 0xc) & 0x10) != 0) {
        FUN_00403220(DAT_004133f4,0x409);
      }
      FUN_00403220(DAT_004133f4,0x41d);
    }
    DAT_004133f4 = DAT_004133f4 + 1;
  }
  return;
}



void FUN_00405ef0(uchar *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00405e60(param_1);
  puVar1 = (undefined4 *)FUN_00405f60(&param_1);
  while (puVar1 != (undefined4 *)0x0) {
    piVar2 = FUN_0040acf0(0xc);
    iVar3 = FUN_0040add0(puVar1);
    piVar2[1] = iVar3;
    FUN_00405f40((int **)&DAT_00413404,piVar2);
    puVar1 = (undefined4 *)FUN_00405f60(&param_1);
  }
  return;
}



void FUN_00405f40(int **param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *param_1;
  while (piVar1 != (int *)0x0) {
    param_1 = (int **)*param_1;
    piVar1 = *param_1;
  }
  *param_1 = param_2;
  return;
}



undefined1 * FUN_00405f60(uchar **param_1)

{
  uchar uVar1;
  bool bVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  
  puVar5 = &DAT_00410f40;
  puVar4 = *param_1;
  bVar2 = false;
  do {
    puVar3 = _mbschr(puVar4,0x3c);
    if (puVar3 == (uchar *)0x0) {
      return (undefined1 *)0x0;
    }
    puVar4 = puVar3 + 1;
    if (*puVar4 == '<') {
      bVar2 = true;
    }
  } while (!bVar2);
  puVar3 = puVar3 + 2;
  uVar1 = *puVar3;
  while (((((uVar1 != '\0' && (uVar1 = *puVar3, uVar1 != ' ')) && (uVar1 != '>')) &&
          ((uVar1 != '<' && (uVar1 != '^')))) &&
         ((uVar1 != ',' && ((uVar1 != '\t' && (uVar1 != '\n'))))))) {
    if ((uVar1 == '$') && (puVar4 = puVar3 + 1, *puVar4 == '(')) {
      *puVar5 = '$';
      puVar5 = puVar5 + 1;
      *puVar5 = '(';
      uVar1 = *puVar4;
      puVar3 = puVar4;
      while ((uVar1 != '\n' && (uVar1 = *puVar3, uVar1 != ')'))) {
        puVar3 = puVar3 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
        uVar1 = *puVar3;
      }
      if (*puVar3 == '\n') break;
    }
    else {
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    uVar1 = *puVar3;
  }
  *puVar5 = '\0';
  *param_1 = puVar3;
  return &DAT_00410f40;
}



undefined4 FUN_00406020(undefined4 *param_1,uchar **param_2,int **param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uchar *puVar3;
  FILE *_File;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puStack_118;
  int iStack_114;
  uchar *puStack_110;
  undefined4 *puStack_10c;
  undefined4 *puStack_108;
  undefined4 auStack_104 [65];
  
  puStack_10c = (undefined4 *)_mbschr((uchar *)param_1,10);
  if (puStack_10c == (undefined4 *)0x0) {
    puVar3 = (uchar *)FUN_0040add0(param_1);
    *param_2 = puVar3;
    uVar6 = 0;
  }
  else {
    *(uchar *)puStack_10c = '\0';
    puVar2 = FUN_0040b700((uchar *)param_1,param_3);
    *param_2 = (uchar *)puVar2;
    puVar2 = (undefined4 *)((int)puStack_10c + 1);
    *(uchar *)puStack_10c = '\n';
    puStack_10c = puVar2;
    if ((undefined4 *)*param_2 == param_1) {
      puVar3 = (uchar *)FUN_0040add0(param_1);
      *param_2 = puVar3;
    }
    puStack_110 = *param_2;
    puStack_118 = FUN_0040b700((uchar *)puStack_10c,param_3);
    puStack_108 = puStack_118;
    while( true ) {
      puVar2 = (undefined4 *)FUN_00405f60(&puStack_110);
      if (puVar2 == (undefined4 *)0x0) break;
      iStack_114 = 0;
      puVar2 = (undefined4 *)FUN_0040add0(puVar2);
      if (*(char *)puVar2 == '\0') {
        puVar3 = (uchar *)getenv(&DAT_00413fc0);
        if ((puVar3 == (uchar *)0x0) || (*puVar3 == '\0')) {
          auStack_104[0]._0_1_ = '\0';
        }
        else {
          _mbsnbcpy((uchar *)auStack_104,puVar3,0x101);
        }
        _File = (FILE *)FUN_00407450(auStack_104);
        if (_File == (FILE *)0x0) {
          FUN_00403220(DAT_004133f4,0x41e);
        }
        FUN_004062a0((char **)param_2,(char *)auStack_104);
        free(puVar2);
        puVar2 = (undefined4 *)FUN_0040add0(auStack_104);
      }
      else {
        _File = (FILE *)FUN_0040ca80(puVar2,&DAT_0041338c);
        if (_File == (FILE *)0x0) {
          FUN_00403220(DAT_004133f4,0x41e);
        }
        else {
          FUN_00406430(*param_2);
        }
      }
      puStack_110 = *param_2;
      FUN_004063b0(_File,(uchar **)&puStack_118);
      puVar3 = _mbschr((uchar *)puStack_118,10);
      if (puVar3 == (uchar *)0x0) {
        uVar7 = 0xffffffff;
        puVar9 = puStack_118;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *(char *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        } while (cVar1 != '\0');
        iVar8 = ~uVar7 - 1;
      }
      else {
        iVar8 = (int)puVar3 - (int)puStack_118;
      }
      if (iVar8 < 4) {
LAB_004061d3:
        if (5 < iVar8) {
          iVar4 = _mbsnbicmp((uchar *)puStack_118,(uchar *)s_nokeep_00413fb0,6);
          if (iVar4 == 0) {
            puStack_118 = (undefined4 *)((int)puStack_118 + 6);
            goto LAB_0040620f;
          }
        }
        if (iVar8 != 0) {
          FUN_00403220(DAT_004133f4,0x446);
        }
      }
      else {
        iVar4 = _mbsnbicmp((uchar *)puStack_118,&DAT_00413fb8,4);
        if (iVar4 != 0) goto LAB_004061d3;
        puStack_118 = puStack_118 + 1;
        iStack_114 = 1;
      }
LAB_0040620f:
      if (*(char *)puStack_118 == '\n') {
        puStack_118 = (undefined4 *)((int)puStack_118 + 1);
      }
      fclose(_File);
      if (iStack_114 == 0) {
        piVar5 = (int *)FUN_0040ad20();
        iVar8 = FUN_0040add0(puVar2);
        piVar5[1] = iVar8;
        FUN_0040ae30((int **)&DAT_004133bc,piVar5);
      }
      free(puVar2);
    }
    if (puStack_108 != puStack_10c) {
      free(puStack_108);
    }
    uVar6 = 1;
  }
  return uVar6;
}



void FUN_004062a0(char **param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  
  pcVar6 = &stack0xffffffe8;
  iVar2 = -1;
  pcVar5 = *param_1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar2 = -1;
  pcVar5 = param_2;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_0040ceb4();
  pcVar5 = *param_1;
  while( true ) {
    for (; *pcVar5 != '<'; pcVar5 = pcVar5 + 1) {
      *pcVar6 = *pcVar5;
      pcVar6 = pcVar6 + 1;
    }
    if (pcVar5[1] == '<') break;
    *pcVar6 = '<';
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar3 = 0xffffffff;
  *pcVar6 = '\0';
  do {
    pcVar6 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar2 = -1;
  pcVar9 = &stack0xffffffe8;
  do {
    pcVar8 = pcVar9;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar8;
  } while (cVar1 != '\0');
  puVar7 = (undefined4 *)(pcVar6 + -uVar3);
  puVar10 = (undefined4 *)(pcVar8 + -1);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined *)puVar10 = *(undefined *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  uVar3 = 0xffffffff;
  pcVar5 = pcVar5 + 2;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar2 = -1;
  pcVar5 = &stack0xffffffe8;
  do {
    pcVar9 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar9 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar9;
  } while (cVar1 != '\0');
  puVar7 = (undefined4 *)(pcVar6 + -uVar3);
  puVar10 = (undefined4 *)(pcVar9 + -1);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined *)puVar10 = *(undefined *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  uVar3 = 0xffffffff;
  pcVar5 = &stack0xffffffe8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = (char *)realloc(*param_1,~uVar3);
  *param_1 = pcVar5;
  uVar3 = 0xffffffff;
  pcVar5 = &stack0xffffffe8;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  puVar7 = (undefined4 *)(pcVar6 + -uVar3);
  puVar10 = (undefined4 *)*param_1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined *)puVar10 = *(undefined *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  return;
}



void FUN_004063b0(FILE *param_1,uchar **param_2)

{
  uchar *puVar1;
  int iVar2;
  uchar *puVar3;
  
  do {
    puVar1 = _mbschr(*param_2,10);
    if (puVar1 == (uchar *)0x0) {
LAB_0040640c:
      iVar2 = _mbsnbcmp(*param_2,(uchar *)&DAT_00413fac,2);
      if (iVar2 == 0) {
        *param_2 = *param_2 + 2;
      }
      return;
    }
    iVar2 = _mbsnbcmp(*param_2,(uchar *)&DAT_00413fac,2);
    if (iVar2 == 0) {
      *param_2 = *param_2 + 2;
      if (puVar1 != (uchar *)0x0) {
        return;
      }
      goto LAB_0040640c;
    }
    for (puVar3 = *param_2; puVar3 <= puVar1; puVar3 = puVar3 + 1) {
      fputc((int)(char)*puVar3,param_1);
    }
    *param_2 = puVar3;
  } while( true );
}



void FUN_00406430(uchar *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  
  puVar2 = (undefined4 *)_mbschr(param_1,0x3c);
  cVar1 = *(char *)((int)puVar2 + 1);
  while (cVar1 != '<') {
    puVar2 = (undefined4 *)_mbschr((uchar *)((int)puVar2 + 1),0x3c);
    cVar1 = *(char *)((int)puVar2 + 1);
  }
  uVar3 = 0xffffffff;
  pcVar6 = (char *)((int)puVar2 + 2);
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  puVar5 = (undefined4 *)(pcVar7 + -uVar3);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined *)puVar2 = *(undefined *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return;
}



undefined * FUN_00406490(undefined *param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = param_1;
  while( true ) {
    uVar1 = FUN_00404de0();
    if (uVar1 == 0) {
      return (undefined *)0x0;
    }
    if (uVar1 == 0xffffffff) {
      *puVar2 = 0;
      return (undefined *)0x0;
    }
    *puVar2 = (char)uVar1;
    puVar3 = puVar2 + 1;
    if (param_1 + param_2 == puVar3) {
      *puVar2 = 0;
      FUN_00404d70(uVar1,DAT_004133d8);
      return puVar3;
    }
    if (uVar1 == 10) break;
    DAT_004133f0 = 0;
    puVar2 = puVar3;
  }
  DAT_004133f4 = DAT_004133f4 + 1;
  DAT_004133f0 = 1;
  *puVar3 = 0;
  return puVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_00406500(int param_1,byte param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(&DAT_00413aa0 + param_1);
  if (_DAT_004133c8 == 0) {
    if ((param_2 != 0x18) && (param_2 != 0x19)) {
      uVar1 = FUN_00406880('\0');
      DAT_00413aa0 = (undefined)uVar1;
      DAT_00413aa1 = 0;
      uVar1 = FUN_004065d0(uVar1,&DAT_00413aa1,(undefined *)puVar3);
      return uVar1;
    }
    uVar2 = FUN_00406a80(param_2,(undefined4 *)&DAT_00413aa0,puVar3);
    return CONCAT31((int3)((uint)uVar2 >> 8),param_2);
  }
  _DAT_004133c8 = 0;
  DAT_004133f4 = DAT_004133f4 + 1;
  uVar1 = FUN_00404de0();
  if ((uVar1 == 0x20) || (DAT_004133f0 = 1, uVar1 == 9)) {
    DAT_004133f0 = 0;
  }
  if (DAT_004133f0 != 0) {
    if (uVar1 == 0xffffffff) {
      uVar1 = FUN_004065d0(0xffffffff,&DAT_00413aa0,(undefined *)puVar3);
      return uVar1;
    }
    uVar2 = FUN_00404d70(uVar1,DAT_004133d8);
    return CONCAT31((int3)((uint)uVar2 >> 8),0x11);
  }
  return CONCAT31((int3)(uVar1 >> 8),0x12);
}



undefined4 FUN_004065d0(uint param_1,undefined *param_2,undefined *param_3)

{
  undefined3 uVar5;
  FILE *pFVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  do {
    uVar5 = (undefined3)(param_1 >> 8);
    switch(param_1) {
    case 0x3a:
      DAT_004133f0 = 0;
      uVar3 = FUN_00404de0();
      if (uVar3 == 0x3a) {
        *param_2 = 0x3a;
        param_2[1] = 0;
        return 0x15;
      }
      uVar4 = FUN_00404d70(uVar3,DAT_004133d8);
      return CONCAT31((int3)((uint)uVar4 >> 8),0x14);
    case 0x3b:
      DAT_004133f0 = 0;
      return CONCAT31(uVar5,0x13);
    case 0x3d:
      DAT_004133f0 = 0;
      return CONCAT31(uVar5,0x16);
    case 0x5b:
      if ((DAT_00413408 != 0) && (DAT_004133f0 != 0)) {
        return CONCAT31(uVar5,0x17);
      }
    case 0x5e:
      FUN_00404d70(param_1,DAT_004133d8);
      param_2 = param_2 + -1;
    default:
      iVar2 = FUN_00407070(param_2,param_3);
      if ((DAT_004133f0 == 0) ||
         (iVar2 = _mbsicmp(&DAT_00413aa0,(uchar *)s_include_00413fd8), iVar2 != 0)) {
        DAT_004133f0 = 0;
        return CONCAT31((int3)((uint)iVar2 >> 8),0x10);
      }
      DAT_004133f0 = 0;
      uVar3 = FUN_00406880('\0');
      if ((uVar3 != 0x3a) && (uVar3 != 0x3d)) {
        if (DAT_00413408 != 0) {
          FUN_00403220(DAT_004133f4,0x409);
        }
        uVar4 = FUN_004075c0(uVar3);
        return uVar4;
      }
      uVar4 = FUN_00404d70(uVar3,DAT_004133d8);
      return CONCAT31((int3)((uint)uVar4 >> 8),0x10);
    case 0xffffffff:
      pFVar1 = DAT_004133d8;
      if ((DAT_004133d8->_flag & 0x10U) == 0) {
        pFVar1 = (FILE *)FUN_00403220(DAT_004133f4,0x40e);
      }
      if (DAT_00413400 == 0) {
        if (DAT_00413a70 < 0) {
          return CONCAT31((int3)((uint)pFVar1 >> 8),0x17);
        }
        FUN_00403220(DAT_004133f4,0x3fc);
      }
      else {
        FUN_00407550();
      }
    case 10:
      DAT_004133f4 = DAT_004133f4 + 1;
      DAT_004133f0 = 1;
      uVar3 = FUN_00404de0();
      if (((uVar3 == 0x3b) && (DAT_00413408 != 0)) || (uVar3 == 0x23)) {
        FUN_00406940('\0');
        DAT_004133f4 = DAT_004133f4 + 1;
        DAT_004133f0 = 1;
        uVar3 = FUN_00404de0();
      }
      if ((uVar3 == 0x20) || (DAT_004133f0 = 1, uVar3 == 9)) {
        DAT_004133f0 = 0;
      }
      if (DAT_004133f0 == 0) {
        return CONCAT31((int3)(uVar3 >> 8),0x12);
      }
      if (uVar3 != 0xffffffff) {
        uVar4 = FUN_00404d70(uVar3,DAT_004133d8);
        return CONCAT31((int3)((uint)uVar4 >> 8),0x11);
      }
      param_1 = 0xffffffff;
    }
  } while( true );
}



uint FUN_00406880(char param_1)

{
  uint uVar1;
  
  do {
    if (param_1 == '\0') {
      uVar1 = FUN_00404de0();
    }
    else {
      uVar1 = FUN_00404cf0(DAT_004133d8);
    }
    if (((uVar1 == 0x20) || (uVar1 == 9)) || (uVar1 == 0x5e)) {
      if (uVar1 == 0x5e) {
        if (param_1 == '\0') {
          uVar1 = FUN_00404de0();
        }
        else {
          uVar1 = FUN_00404cf0(DAT_004133d8);
        }
        if ((uVar1 != 0x20) && (uVar1 != 9)) {
          FUN_00404d70(uVar1,DAT_004133d8);
          uVar1 = 0x5e;
          goto LAB_00406905;
        }
      }
      DAT_004133f0 = 0;
    }
    if (uVar1 == 0x5c) {
      uVar1 = FUN_004069d0(0x5c,param_1);
    }
    if ((uVar1 != 0x20) && (uVar1 != 9)) {
LAB_00406905:
      if (((uVar1 == 0x3b) && ((DAT_004133f0 != 0 && (DAT_00413408 != 0)))) || (uVar1 == 0x23)) {
        FUN_00406940(param_1);
        DAT_004133f0 = 1;
        uVar1 = 10;
      }
      return uVar1;
    }
  } while( true );
}



void FUN_00406940(char param_1)

{
  uint uVar1;
  
  while( true ) {
    DAT_004133f0 = 0;
    do {
      if (param_1 == '\0') {
        uVar1 = FUN_00404de0();
      }
      else {
        uVar1 = FUN_00404cf0(DAT_004133d8);
      }
      if (uVar1 == 0xffffffff) {
        return;
      }
    } while (uVar1 != 10);
    DAT_004133f0 = 1;
    if (param_1 == '\0') {
      uVar1 = FUN_00404de0();
    }
    else {
      uVar1 = FUN_00404cf0(DAT_004133d8);
    }
    if (((uVar1 != 0x3b) || (DAT_00413408 == 0)) && (uVar1 != 0x23)) break;
    DAT_004133f4 = DAT_004133f4 + 1;
  }
  FUN_00404d70(uVar1,DAT_004133d8);
  return;
}



uint FUN_004069d0(uint param_1,char param_2)

{
  uint uVar1;
  
  if (param_1 == 0x5c) {
    while( true ) {
      if (param_2 == '\0') {
        uVar1 = FUN_00404de0();
      }
      else {
        uVar1 = FUN_00404cf0(DAT_004133d8);
      }
      if (uVar1 != 10) break;
      DAT_004133f0 = 1;
      DAT_004133f4 = DAT_004133f4 + 1;
      if (param_2 == '\0') {
        uVar1 = FUN_00404de0();
      }
      else {
        uVar1 = FUN_00404cf0(DAT_004133d8);
      }
      if (((uVar1 == 0x3b) && (DAT_00413408 != 0)) || (uVar1 == 0x23)) {
        FUN_00406940(param_2);
        DAT_004133f4 = DAT_004133f4 + 1;
        if (param_2 == '\0') {
          uVar1 = FUN_00404de0();
        }
        else {
          uVar1 = FUN_00404cf0(DAT_004133d8);
        }
      }
      if (uVar1 != 0x5c) {
        return uVar1;
      }
    }
    FUN_00404d70(uVar1,DAT_004133d8);
    param_1 = 0x5c;
  }
  return param_1;
}



void FUN_00406a80(char param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  uint uVar7;
  byte local_d;
  uint local_c;
  undefined4 *local_8;
  uint local_4;
  
  local_4 = 0;
  local_8 = param_2;
  local_c = FUN_00404de0();
  if (param_1 == '\x18') {
    local_d = 2;
    goto LAB_00406b00;
  }
  if ((local_c != 0x20) && (local_c != 9)) {
    if (local_c != 0x5e) {
      local_d = 1;
      goto LAB_00406b00;
    }
    uVar7 = FUN_00404de0();
    if ((uVar7 != 0x20) && (uVar7 != 9)) {
      FUN_00404d70(uVar7,DAT_004133d8);
      local_c = 0x5e;
      goto LAB_00406b00;
    }
  }
  local_d = 2;
  local_c = FUN_00406880('\0');
LAB_00406b00:
  uVar7 = local_4;
  bVar6 = (byte)local_4;
  do {
    if (local_c == 0x22) {
      local_4 = (uint)(local_4 == 0);
    }
    bVar1 = true;
    uVar3 = uVar7;
    if (local_c == 0x5e) {
      if ((local_4 == 0) && (param_1 == '\x19')) {
        local_c = FUN_00404de0();
        switch(local_c) {
        case 0x21:
        case 0x24:
        case 0x28:
        case 0x29:
        case 0x2d:
        case 0x40:
        case 0x5e:
        case 0x7b:
        case 0x7d:
          *(char *)param_2 = '^';
          param_2 = (undefined4 *)((int)param_2 + 1);
          if (param_3 == param_2) {
            if (DAT_004133fc == (undefined4 *)0x0) {
              DAT_004133fc = FUN_0040acf0(0x800);
              uVar3 = 0x800;
              _mbsnbcpy((uchar *)DAT_004133fc,(uchar *)local_8,0x400);
              param_2 = DAT_004133fc + 0x100;
              param_3 = DAT_004133fc + 0x200;
            }
            else {
              uVar3 = uVar7 + 0x400;
              if ((uVar3 < uVar7) ||
                 (DAT_004133fc = (undefined4 *)realloc(DAT_004133fc,uVar3),
                 DAT_004133fc == (undefined4 *)0x0)) {
                FUN_00403220(DAT_004133f4,0x419);
              }
              param_2 = (undefined4 *)((int)DAT_004133fc + uVar7);
              param_3 = (undefined4 *)((int)DAT_004133fc + uVar3);
            }
            local_8 = DAT_004133fc;
          }
        case 10:
        case 0x22:
        case 0x23:
        case 0x5c:
          bVar6 = 0;
          bVar1 = false;
        }
      }
      else {
        uVar7 = FUN_00404de0();
        FUN_00404d70(uVar7,DAT_004133d8);
        local_c = 0x5e;
      }
    }
    if (bVar1) {
      switch(local_c) {
      default:
        bVar6 = (((&DAT_004149c0)[local_c & 0xff] & 1) == 0) - 1U & 10;
        break;
      case 9:
      case 0x20:
        bVar6 = 5;
        break;
      case 0x23:
        bVar6 = 1;
        break;
      case 0x24:
        bVar6 = 7;
        break;
      case 0x28:
        bVar6 = 8;
        break;
      case 0x29:
        bVar6 = 9;
        break;
      case 0x2a:
        bVar6 = 0xb;
        break;
      case 0x3a:
        bVar6 = 4;
        break;
      case 0x3b:
        if ((local_d == 0) && (DAT_00413408 != 0)) {
          bVar6 = 1;
        }
        else {
          bVar6 = 0;
        }
        break;
      case 0x3c:
      case 0x3f:
      case 0x40:
        bVar6 = 0xc;
        break;
      case 0x3d:
        bVar6 = 2;
        break;
      case 0x42:
      case 0x44:
      case 0x46:
      case 0x52:
        bVar6 = 0xd;
        break;
      case 0x5c:
        bVar6 = 3;
        break;
      case 0xffffffff:
      case 10:
        bVar6 = 6;
      }
    }
    uVar7 = uVar3;
    if (((bVar6 == 0xc) && (param_1 == '\x18')) && (local_c == 0x3c)) {
      uVar2 = FUN_00404de0();
      if (uVar2 == 0x3c) {
        bVar6 = 6;
        param_2 = FUN_00405c20(param_2,(uchar **)&local_8,(uchar **)&param_3);
        local_c = 10;
      }
      else {
        FUN_00404d70(uVar2,DAT_004133d8);
      }
LAB_00406d36:
      local_d = *(byte *)(bVar6 + 0x414648 + (uint)local_d * 0xe);
LAB_00406d52:
      if (local_d == 0x40) break;
      if ((local_d & 0x20) != 0) {
        FUN_00403220(DAT_004133f4,(local_d & 0xdf) + 1000);
      }
      if (local_d == 0) {
        *(char *)((int)param_2 + -1) = ' ';
        DAT_004133f4 = DAT_004133f4 + 1;
        DAT_004133f0 = 1;
        uVar3 = FUN_00404de0();
        DAT_004133f0 = 0;
        if ((uVar3 == 0x20) || (uVar3 == 9)) {
          local_d = 2;
          do {
            do {
              uVar3 = FUN_00404de0();
            } while (uVar3 == 0x20);
          } while (uVar3 == 9);
        }
        FUN_00404d70(uVar3,DAT_004133d8);
      }
      else {
        *(char *)param_2 = (char)local_c;
        param_2 = (undefined4 *)((int)param_2 + 1);
        if (param_3 == param_2) {
          if (DAT_004133fc == (undefined4 *)0x0) {
            DAT_004133fc = FUN_0040acf0(0x800);
            uVar7 = 0x800;
            _mbsnbcpy((uchar *)DAT_004133fc,(uchar *)local_8,0x400);
            param_2 = DAT_004133fc + 0x100;
            param_3 = DAT_004133fc + 0x200;
          }
          else {
            uVar7 = uVar3 + 0x400;
            if ((uVar7 < uVar3) ||
               (DAT_004133fc = (undefined4 *)realloc(DAT_004133fc,uVar7),
               DAT_004133fc == (undefined4 *)0x0)) {
              FUN_00403220(DAT_004133f4,0x419);
            }
            param_2 = (undefined4 *)((int)DAT_004133fc + uVar3);
            param_3 = (undefined4 *)((int)DAT_004133fc + uVar7);
          }
        }
      }
    }
    else {
      if (bVar6 != 1) goto LAB_00406d36;
      if (local_d != 0) {
        if (param_1 != '\x19') goto LAB_00406d36;
        local_d = 0x40;
        goto LAB_00406d52;
      }
      local_4 = 0;
      FUN_00406940('\0');
      DAT_004133f4 = DAT_004133f4 + 1;
    }
    local_c = FUN_00404de0();
  } while( true );
  FUN_00404d70(local_c,DAT_004133d8);
  if (local_8 < param_2) {
    do {
      puVar5 = (undefined4 *)((int)param_2 + -1);
      iVar4 = _ismbcspace((int)*(char *)puVar5);
      if (iVar4 == 0) break;
      param_2 = puVar5;
    } while (local_8 < puVar5);
  }
  *(char *)param_2 = '\0';
  if (DAT_004133fc == (undefined4 *)0x0) {
    DAT_004133fc = (undefined4 *)FUN_0040add0(local_8);
  }
  else {
    puVar5 = (undefined4 *)realloc(DAT_004133fc,(size_t)((int)param_2 + (1 - (int)DAT_004133fc)));
    if (puVar5 != (undefined4 *)0x0) {
      DAT_004133fc = puVar5;
      return;
    }
  }
  return;
}



void FUN_00407070(undefined *param_1,undefined *param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  byte local_12;
  byte local_11;
  
  bVar5 = false;
  bVar4 = false;
  pcVar1 = param_1 + -1;
  cVar2 = *pcVar1;
  if (cVar2 == '\"') {
    bVar4 = true;
    local_11 = 0x10;
  }
  else if (cVar2 == '$') {
    local_11 = 2;
  }
  else if (cVar2 == '{') {
    local_11 = 8;
  }
  else {
    local_11 = 0;
  }
  do {
    uVar6 = FUN_00404de0();
    bVar3 = true;
    if (uVar6 == 0x5e) {
      uVar6 = FUN_00404de0();
      switch(uVar6) {
      case 0x24:
      case 0x28:
      case 0x29:
      case 0x5e:
      case 0x7b:
      case 0x7d:
        *param_1 = 0x5e;
        param_1 = param_1 + 1;
      case 10:
      case 0x23:
      case 0x5c:
        local_12 = 0;
        bVar3 = false;
      }
    }
    if (bVar3) {
      switch(uVar6) {
      default:
        if ((DAT_00413a48 & 0x80) == 0) {
          local_12 = (((&DAT_004149c0)[uVar6 & 0xff] & 1) == 0) - 1U & 10;
        }
        else if (((((&DAT_004149c0)[uVar6 & 0xff] & 1) == 0) && (uVar6 != 0x2a)) && (uVar6 != 0x40))
        {
          local_12 = 0;
        }
        else {
          local_12 = 10;
        }
        break;
      case 9:
      case 0x20:
        local_12 = -!bVar4 & 5;
        break;
      case 0x22:
        local_12 = 0xe;
        break;
      case 0x23:
        local_12 = 1;
        break;
      case 0x24:
        local_12 = 7;
        break;
      case 0x28:
        local_12 = 8;
        break;
      case 0x29:
        local_12 = 9;
        break;
      case 0x3a:
        local_12 = 4;
        break;
      case 0x3b:
        local_12 = 3;
        break;
      case 0x3d:
        local_12 = 2;
        break;
      case 0x5c:
        local_12 = 0xd;
        break;
      case 0x7b:
        local_12 = 0xb;
        break;
      case 0x7d:
        local_12 = 0xc;
        break;
      case 0xffffffff:
      case 10:
        local_12 = 6;
      }
    }
    local_11 = *(byte *)((uint)local_11 * 0xf + 0x414700 + (uint)local_12);
    if ((bVar4) && (local_11 == 1)) {
      local_11 = 0x10;
    }
    if (bVar5) {
      if (local_12 == 6) {
        DAT_004133f0 = 1;
        DAT_004133f4 = DAT_004133f4 + 1;
        uVar6 = FUN_00404de0();
        DAT_004133f0 = 0;
        if ((uVar6 == 0x20) || (uVar6 == 9)) {
          local_11 = 0x40;
          do {
            do {
              uVar6 = FUN_00404de0();
            } while (uVar6 == 0x20);
          } while (uVar6 == 9);
        }
        else {
          local_11 = 1 - (param_1 == &DAT_00413aa1);
        }
      }
      else {
        *param_1 = 0x5c;
        param_1 = param_1 + 1;
      }
    }
    bVar5 = false;
    if (local_11 == 0x40) {
      if (param_2 <= param_1) {
        FUN_00403220(DAT_004133f4,0x434);
      }
      FUN_00404d70(uVar6,DAT_004133d8);
      *param_1 = 0;
      FUN_00408a90(pcVar1);
      return;
    }
    if ((local_11 & 0x20) != 0) {
      FUN_00403220(DAT_004133f4,(local_11 & 0xdf) + 1000);
    }
    if (local_11 == 0xf) {
      bVar5 = true;
    }
    else {
      *param_1 = (char)uVar6;
      param_1 = param_1 + 1;
    }
  } while( true );
}



void FUN_00407450(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 local_104 [65];
  
  if ((param_1 == (undefined4 *)0x0) || (*(char *)param_1 == '\0')) {
    local_104[0]._0_2_ = DAT_00413fe0;
  }
  else {
    uVar3 = 0xffffffff;
    puVar6 = param_1;
    do {
      puVar8 = puVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      puVar8 = (undefined4 *)((int)puVar6 + 1);
      cVar1 = *(char *)puVar6;
      puVar6 = puVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    puVar6 = (undefined4 *)((int)puVar8 - uVar3);
    puVar8 = local_104;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined *)puVar8 = *(undefined *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  _makepath((char *)param_1,(char *)0x0,(char *)local_104,&DAT_00413fc8,(char *)0x0);
  pcVar2 = _mktemp((char *)param_1);
  if (pcVar2 == (char *)0x0) {
    if (s_mXXXXXX_00413fc9[0] == 'z') {
      s_mXXXXXX_00413fc9[0] = 'a';
    }
    else {
      s_mXXXXXX_00413fc9[0] = s_mXXXXXX_00413fc9[0] + '\x01';
    }
    _makepath((char *)param_1,(char *)0x0,(char *)local_104,&DAT_00413fc8,(char *)0x0);
    pcVar2 = _mktemp((char *)param_1);
    if (pcVar2 == (char *)0x0) {
      return;
    }
  }
  uVar3 = 0xffffffff;
  pcVar2 = &DAT_00413fd4;
  do {
    pcVar7 = pcVar2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar5 = -1;
  puVar6 = param_1;
  do {
    puVar8 = puVar6;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    puVar8 = (undefined4 *)((int)puVar6 + 1);
    cVar1 = *(char *)puVar6;
    puVar6 = puVar8;
  } while (cVar1 != '\0');
  puVar6 = (undefined4 *)(pcVar7 + -uVar3);
  puVar8 = (undefined4 *)((int)puVar8 + -1);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined *)puVar8 = *(undefined *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  FUN_0040ca80(param_1,&DAT_0041338c);
  return;
}



void FUN_00407550(void)

{
  int iVar1;
  
  iVar1 = fclose(DAT_004133d8);
  if (iVar1 == -1) {
    FUN_00403220(0,0x424);
  }
  free(DAT_004133f8);
  DAT_00413400 = DAT_00413400 + -1;
  DAT_004133d8 = (FILE *)*(undefined4 *)(&DAT_00411a58 + DAT_00413400 * 0xc);
  DAT_004133f8 = (void *)(&DAT_00411a54)[DAT_00413400 * 3];
  DAT_004133f4 = *(undefined4 *)(&DAT_00411a50 + DAT_00413400 * 0xc);
  return;
}



void FUN_004075c0(int param_1)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  uint uVar4;
  
  if ((param_1 == 10) || (param_1 == -1)) {
    FUN_00403220(DAT_004133f4,0x407);
  }
  DAT_00413aa0 = (undefined)param_1;
  pcVar2 = fgets(&DAT_00413aa1,0x3ff,(FILE *)DAT_004133d8);
  if (pcVar2 == (char *)0x0) {
    if ((*(byte *)(DAT_004133d8 + 0xc) & 0x10) != 0) {
      FUN_00403220(DAT_004133f4,0x409);
    }
    FUN_00403220(DAT_004133f4,0x41d);
  }
  uVar4 = 0xffffffff;
  pcVar2 = &DAT_00413aa0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((&DAT_00413a9e)[~uVar4] == '\n') {
    (&DAT_00413a9e)[~uVar4] = 0;
  }
  for (piVar3 = (int *)&DAT_00413aa0; (*(char *)piVar3 == ' ' || (*(char *)piVar3 == '\t'));
      piVar3 = (int *)((int)piVar3 + 1)) {
  }
  FUN_00407680(piVar3);
  return;
}



undefined4 FUN_00407680(int *param_1)

{
  char cVar1;
  uchar uVar2;
  undefined *puVar3;
  uchar *puVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int *piVar13;
  uchar **ppuVar14;
  int iVar15;
  uchar *puVar16;
  char *pcVar17;
  undefined4 *puVar18;
  intptr_t local_20;
  undefined *local_1c;
  int local_18;
  char **local_14;
  int *local_10;
  char *local_c;
  int *local_8;
  
  local_1c = &stack0xffffffd4;
  iVar15 = 0;
  FUN_0040ceb4();
  if ((*(char *)param_1 == '\0') || (puVar3 = &stack0xffffffd4, *(char *)param_1 == '#')) {
    FUN_00403220(DAT_004133f4,0x407);
    puVar3 = local_1c;
  }
  local_1c = puVar3;
  puVar4 = _mbspbrk((uchar *)param_1,&DAT_00413fec);
  if (puVar4 == (uchar *)0x0) {
    uVar6 = 0xffffffff;
    piVar5 = param_1;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *(char *)piVar5;
      piVar5 = (int *)((int)piVar5 + 1);
    } while (cVar1 != '\0');
    puVar4 = (uchar *)((~uVar6 - 1) + (int)param_1);
  }
  else {
    if (*puVar4 == '#') {
      iVar15 = 0x23;
    }
    *puVar4 = '\0';
    if (iVar15 == 0) {
      puVar16 = puVar4 + 1;
      uVar2 = *puVar16;
      while ((uVar2 != '\0' && (uVar2 = *puVar16, uVar2 != '#'))) {
        if ((uVar2 != ' ') && (uVar2 != '\t')) {
          FUN_00403220(DAT_004133f4,0x409);
        }
        puVar16 = puVar16 + 1;
        uVar2 = *puVar16;
      }
    }
  }
  if ((*(char *)param_1 == '<') && (puVar4[-1] == '>')) {
    piVar13 = (int *)((int)param_1 + 1);
    puVar4[-1] = '\0';
    piVar5 = FUN_0040b690(piVar13);
    if (piVar5 == piVar13) {
      piVar5 = (int *)FUN_0040add0(piVar13);
    }
    uVar6 = FUN_00407b70((uchar *)s_INCLUDE_00413f2c);
    if (uVar6 == 0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = *(undefined4 **)(*(int *)(uVar6 + 8) + 4);
    }
    if (puVar7 == (undefined4 *)0x0) {
      piVar13 = (int *)0x0;
    }
    else {
      piVar8 = (int *)FUN_0040add0(puVar7);
      piVar13 = FUN_0040b690(piVar8);
      if (piVar13 != piVar8) {
        free(piVar8);
      }
    }
    param_1 = (int *)FUN_00405930((char *)piVar13,piVar5,local_1c,&local_20);
    if (param_1 == (int *)0x0) {
      FUN_00403220(DAT_004133f4,0x41c);
    }
    if (piVar13 != (int *)0x0) {
      free(piVar13);
    }
    free(piVar5);
  }
  else {
    if ((*(char *)param_1 == '\"') && (puVar4[-1] == '\"')) {
      param_1 = (int *)((int)param_1 + 1);
      puVar4[-1] = '\0';
    }
    local_10 = FUN_0040b690(param_1);
    if (local_10 == param_1) {
      local_10 = (int *)FUN_0040add0(param_1);
    }
    iVar15 = FUN_0040cd20((uchar *)local_10,(int *)&local_1c,&local_20);
    if (iVar15 == 0) {
      puVar4 = _mbspbrk((uchar *)local_10,&DAT_00413fe8);
      if (puVar4 == (uchar *)0x0) {
        local_18 = DAT_00413400;
        if (-1 < DAT_00413400) {
          local_14 = (char **)(&DAT_00411a54 + DAT_00413400 * 3);
          do {
            pcVar9 = DAT_004133f8;
            if (DAT_00413400 != local_18) {
              pcVar9 = *local_14;
            }
            local_c = FUN_00407ad0(pcVar9);
            if (local_c != (char *)0x0) {
              uVar6 = 0xffffffff;
              piVar5 = local_10;
              do {
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                cVar1 = *(char *)piVar5;
                piVar5 = (int *)((int)piVar5 + 1);
              } while (cVar1 != '\0');
              uVar12 = 0xffffffff;
              pcVar9 = local_c;
              do {
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar9 + 1;
              } while (cVar1 != '\0');
              local_8 = FUN_0040acf0(~uVar12 + ~uVar6);
              uVar6 = 0xffffffff;
              pcVar9 = local_c;
              do {
                pcVar17 = pcVar9;
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                pcVar17 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar17;
              } while (cVar1 != '\0');
              uVar6 = ~uVar6;
              piVar5 = (int *)(pcVar17 + -uVar6);
              piVar13 = local_8;
              for (uVar12 = uVar6 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *piVar13 = *piVar5;
                piVar5 = piVar5 + 1;
                piVar13 = piVar13 + 1;
              }
              for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined *)piVar13 = *(undefined *)piVar5;
                piVar5 = (int *)((int)piVar5 + 1);
                piVar13 = (int *)((int)piVar13 + 1);
              }
              uVar6 = 0xffffffff;
              pcVar9 = &DAT_00413fe4;
              do {
                pcVar17 = pcVar9;
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                pcVar17 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar17;
              } while (cVar1 != '\0');
              uVar6 = ~uVar6;
              iVar15 = -1;
              piVar5 = local_8;
              do {
                piVar13 = piVar5;
                if (iVar15 == 0) break;
                iVar15 = iVar15 + -1;
                piVar13 = (int *)((int)piVar5 + 1);
                cVar1 = *(char *)piVar5;
                piVar5 = piVar13;
              } while (cVar1 != '\0');
              puVar7 = (undefined4 *)(pcVar17 + -uVar6);
              puVar18 = (undefined4 *)((int)piVar13 + -1);
              for (uVar12 = uVar6 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *puVar18 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar18 = puVar18 + 1;
              }
              for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined *)puVar18 = *(undefined *)puVar7;
                puVar7 = (undefined4 *)((int)puVar7 + 1);
                puVar18 = (undefined4 *)((int)puVar18 + 1);
              }
              uVar6 = 0xffffffff;
              piVar5 = local_10;
              do {
                piVar13 = piVar5;
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                piVar13 = (int *)((int)piVar5 + 1);
                cVar1 = *(char *)piVar5;
                piVar5 = piVar13;
              } while (cVar1 != '\0');
              uVar6 = ~uVar6;
              iVar15 = -1;
              piVar5 = local_8;
              do {
                piVar8 = piVar5;
                if (iVar15 == 0) break;
                iVar15 = iVar15 + -1;
                piVar8 = (int *)((int)piVar5 + 1);
                cVar1 = *(char *)piVar5;
                piVar5 = piVar8;
              } while (cVar1 != '\0');
              puVar7 = (undefined4 *)((int)piVar13 - uVar6);
              puVar18 = (undefined4 *)((int)piVar8 + -1);
              for (uVar12 = uVar6 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *puVar18 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar18 = puVar18 + 1;
              }
              for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined *)puVar18 = *(undefined *)puVar7;
                puVar7 = (undefined4 *)((int)puVar7 + 1);
                puVar18 = (undefined4 *)((int)puVar18 + 1);
              }
              iVar15 = FUN_0040cd20((uchar *)local_8,(int *)&local_1c,&local_20);
              piVar5 = local_8;
              if (iVar15 != 0) {
                free(local_c);
                param_1 = piVar5;
                break;
              }
              free(local_c);
              free(local_8);
            }
            local_14 = local_14 + -3;
            local_18 = local_18 + -1;
          } while ((char **)0x411a53 < local_14);
        }
        free(local_10);
        if (-1 < local_18) goto LAB_004079b6;
      }
      FUN_00403220(DAT_004133f4,0x41c);
    }
  }
LAB_004079b6:
  iVar15 = 0;
  if (0 < DAT_00413400) {
    ppuVar14 = (uchar **)&DAT_00411a54;
    do {
      iVar10 = _mbsicmp((uchar *)param_1,*ppuVar14);
      if (iVar10 == 0) {
        FUN_00403220(DAT_004133f4,0x430);
      }
      ppuVar14 = ppuVar14 + 3;
      iVar15 = iVar15 + 1;
    } while (iVar15 < DAT_00413400);
  }
  iVar15 = DAT_00413400;
  pcVar9 = DAT_004133f8;
  DAT_00413424 = 0;
  *(FILE **)(&DAT_00411a58 + DAT_00413400 * 0xc) = DAT_004133d8;
  *(int *)(&DAT_00411a50 + iVar15 * 0xc) = DAT_004133f4;
  (&DAT_00411a54)[iVar15 * 3] = pcVar9;
  DAT_00413400 = DAT_00413400 + 1;
  DAT_004133d8 = (FILE *)FUN_0040ca80(param_1,&DAT_00413014);
  if (DAT_004133d8 == (FILE *)0x0) {
    FUN_00403220(DAT_004133f4,0x41c);
  }
  DAT_004133f8 = (char *)FUN_0040add0(param_1);
  DAT_004133f4 = 1;
  DAT_004133f0 = 1;
  uVar6 = FUN_00404de0();
  if ((uVar6 == 0x20) || (DAT_004133f0 = 1, uVar6 == 9)) {
    DAT_004133f0 = 0;
  }
  if (DAT_004133f0 != 0) {
    uVar11 = FUN_00404d70(uVar6,DAT_004133d8);
    return CONCAT31((int3)((uint)uVar11 >> 8),0x11);
  }
  return CONCAT31((int3)(uVar6 >> 8),0x12);
}



char * FUN_00407ad0(char *param_1)

{
  char cVar1;
  char *_Path;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char local_104 [4];
  char local_100 [256];
  
  _splitpath(param_1,local_104,local_100,(char *)0x0,(char *)0x0);
  uVar2 = 0xffffffff;
  pcVar4 = local_100;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  pcVar4 = local_104;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  _Path = (char *)FUN_0040acc0((~uVar3 + ~uVar2) - 1);
  _makepath(_Path,local_104,local_100,(char *)0x0,(char *)0x0);
  uVar2 = 0xffffffff;
  pcVar4 = _Path;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  cVar1 = _Path[~uVar2 - 2];
  if ((cVar1 == '\\') || (cVar1 == '/')) {
    _Path[~uVar2 - 2] = '\0';
  }
  return _Path;
}



uint FUN_00407b70(uchar *param_1)

{
  uint uVar1;
  int iVar2;
  uchar *puVar3;
  int *piVar4;
  
  if (*param_1 == '\0') {
    DAT_00413ff0 = (int **)&DAT_00413428;
  }
  else {
    uVar1 = 0;
    puVar3 = param_1;
    do {
      uVar1 = uVar1 + (int)(char)*puVar3;
      puVar3 = puVar3 + 1;
    } while (*puVar3 != '\0');
    DAT_00413ff0 = (int **)(&DAT_00413428 + (uVar1 & 0xff));
    piVar4 = *DAT_00413ff0;
    if (piVar4 != (int *)0x0) {
      do {
        iVar2 = _mbscmp((uchar *)piVar4[1],param_1);
        if (iVar2 == 0) {
          return -(uint)((*(byte *)(piVar4 + 3) & 0x10) == 0) & (uint)piVar4;
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)0x0);
      return 0;
    }
  }
  return 0;
}



void FUN_00407bf0(undefined4 *param_1)

{
  FUN_0040ae10(DAT_00413ff0,param_1);
  DAT_00413ff0 = (undefined4 *)0x0;
  return;
}



void FUN_00407c10(undefined4 *param_1)

{
  int iVar1;
  
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00407c30(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  char **ppcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  bool bVar10;
  
  FUN_00407d80();
  DAT_0041400c = FUN_0040aaf0();
  DAT_00414010 = FUN_0040ab20();
  if (DAT_00414010 != '\0') {
    pcVar2 = getenv(s_vc20chicspwn_00414468);
    bVar10 = pcVar2 == (char *)0x0;
    if (!bVar10) {
      iVar4 = 2;
      pcVar8 = &DAT_00414464;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar10 = *pcVar2 == *pcVar8;
        pcVar2 = pcVar2 + 1;
        pcVar8 = pcVar8 + 1;
      } while (bVar10);
      if (bVar10) {
        DAT_00414014 = 1;
      }
    }
  }
  FUN_0040a630();
  FUN_00407c10(&DAT_00413428);
  DAT_00413ee0 = 0x118;
  _DAT_00413edc = 0x104;
  _DAT_00414004 = param_3;
  DAT_00413ed4 = 0x100;
  DAT_00413ed8 = 0x100;
  if (DAT_00413ff8 == (char *)0x0) {
    ppcVar3 = (char **)__p__pgmptr();
    uVar5 = 0xffffffff;
    pcVar2 = *ppcVar3;
    do {
      pcVar8 = pcVar2;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    puVar7 = (undefined4 *)(pcVar8 + -uVar5);
    puVar9 = (undefined4 *)&DAT_00410e30;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined *)puVar9 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    iVar4 = FUN_00408140(&DAT_00410e30,&DAT_00413ff8);
    if (iVar4 == 0) {
      DAT_00413ff8 = s_NMAKE_00413038;
    }
  }
  iVar4 = 1;
  ppcVar3 = (char **)__p__pgmptr();
  FUN_0040a890(s_nmake_err_00414458,*ppcVar3,iVar4);
  signal(2);
  signal(0xf);
  FUN_00403400();
  iVar4 = FUN_00407f70(param_3,param_4);
  FUN_00408a20();
  if (_DAT_004133b0 == 0) {
    iVar4 = 1;
  }
                    // WARNING: Subroutine does not return
  exit(iVar4);
}



void FUN_00407d80(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00407d90(void)

{
  char cVar1;
  byte *pbVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined **ppuVar7;
  char **ppcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined **local_4;
  
  pbVar2 = (byte *)FUN_0040add0((undefined4 *)&DAT_004144c8);
  piVar3 = (int *)FUN_0040add0((undefined4 *)&DAT_004144c4);
  FUN_00401980(pbVar2,piVar3,0);
  pbVar2 = (byte *)FUN_0040add0((undefined4 *)&DAT_004144c0);
  piVar3 = (int *)FUN_0040add0((undefined4 *)&DAT_004144c4);
  FUN_00401980(pbVar2,piVar3,0);
  pbVar2 = (byte *)FUN_0040add0((undefined4 *)&DAT_004144bc);
  piVar3 = (int *)FUN_0040add0((undefined4 *)&DAT_004144c4);
  FUN_00401980(pbVar2,piVar3,0);
  pbVar2 = (byte *)FUN_0040add0((undefined4 *)&DAT_004144b8);
  piVar3 = (int *)FUN_0040add0((undefined4 *)&DAT_004144b4);
  FUN_00401980(pbVar2,piVar3,0);
  pbVar2 = (byte *)FUN_0040add0((undefined4 *)&DAT_004144b0);
  piVar3 = (int *)FUN_0040add0((undefined4 *)&DAT_004144ac);
  FUN_00401980(pbVar2,piVar3,0);
  pbVar2 = (byte *)FUN_0040add0((undefined4 *)s_COBOL_004144a4);
  piVar3 = (int *)FUN_0040add0((undefined4 *)s_cobol_0041449c);
  FUN_00401980(pbVar2,piVar3,0);
  pbVar2 = (byte *)FUN_0040add0((undefined4 *)&DAT_00413274);
  piVar3 = (int *)FUN_0040add0((undefined4 *)&DAT_00414498);
  FUN_00401980(pbVar2,piVar3,0);
  pbVar2 = (byte *)FUN_0040add0((undefined4 *)s_PASCAL_00414490);
  piVar3 = (int *)FUN_0040add0((undefined4 *)&DAT_0041448c);
  FUN_00401980(pbVar2,piVar3,0);
  pbVar2 = (byte *)FUN_0040add0((undefined4 *)&DAT_00414488);
  piVar3 = (int *)FUN_0040add0((undefined4 *)&DAT_00414484);
  FUN_00401980(pbVar2,piVar3,0);
  pbVar2 = (byte *)FUN_0040add0((undefined4 *)&DAT_0041447c);
  piVar3 = (int *)FUN_0040add0(DAT_00413ff8);
  FUN_00401980(pbVar2,piVar3,0xc);
  if (PTR_s__SUFFIXES_00414018 != (undefined *)0x0) {
    local_4 = &PTR_s__SUFFIXES_00414018;
    ppuVar7 = &PTR_PTR_DAT_00414118;
    puVar4 = (undefined4 *)PTR_s__SUFFIXES_00414018;
    do {
      DAT_00413a3c = FUN_0040add0(puVar4);
      _DAT_00413aa0 = DAT_00414478;
      FUN_00401230();
      ppcVar8 = (char **)*ppuVar7;
      pcVar9 = *ppcVar8;
      while (pcVar9 != (char *)0x0) {
        uVar5 = 0xffffffff;
        pcVar9 = *ppcVar8;
        do {
          pcVar10 = pcVar9;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar10 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        ppcVar8 = ppcVar8 + 1;
        puVar4 = (undefined4 *)(pcVar10 + -uVar5);
        puVar11 = (undefined4 *)&DAT_00413aa0;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar11 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined *)puVar11 = *(undefined *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        FUN_00401030();
        pcVar9 = *ppcVar8;
      }
      if (ppuVar7 == &PTR_PTR_DAT_00414118) {
        FUN_004015e0();
      }
      ppuVar7 = ppuVar7 + 1;
      FUN_00401710();
      local_4 = local_4 + 1;
      puVar4 = (undefined4 *)*local_4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00407f70(int param_1,int param_2)

{
  char cVar1;
  byte *pbVar2;
  int *_Path;
  uchar *_Source;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  byte bVar8;
  
  _DAT_004133c0 = 0;
  pbVar2 = (byte *)FUN_0040add0((undefined4 *)s_MAKEDIR_004144ec);
  _Path = FUN_0040ce40();
  FUN_00401980(pbVar2,_Path,0);
  _Source = (uchar *)getenv(s_MAKEFLAGS_004144e0);
  if (_Source != (uchar *)0x0) {
    uVar7 = 0xffffffff;
    pcVar5 = PTR_s_MAKEFLAGS__004133c4 + 10;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    _mbsnbcpy(PTR_s_MAKEFLAGS__004133c4 + 10,_Source,~uVar7 - 1);
  }
  bVar8 = 6;
  _DAT_004133b4 = 1;
  piVar3 = (int *)FUN_0040add0((undefined4 *)(PTR_s_MAKEFLAGS__004133c4 + 10));
  pbVar2 = (byte *)FUN_0040add0((undefined4 *)s_MAKEFLAGS_004144e0);
  FUN_00401980(pbVar2,piVar3,bVar8);
  for (; (_Source != (uchar *)0x0 && (*_Source != '\0')); _Source = _Source + 1) {
    FUN_004086d0(*_Source,1);
  }
  FUN_00408320(param_1 + -1,(uchar **)(param_2 + 4));
  if (_DAT_004133cc == 0) {
    FUN_00403420();
  }
  if ((DAT_004133d4 & 2) == 0) {
    FUN_00407d90();
    DAT_004133f8 = s_tools_ini_004144d4;
    iVar4 = FUN_00405860(&DAT_004144cc,(undefined4 *)s_tools_ini_004144d4,DAT_00413ff8);
    if (iVar4 != 0) {
      DAT_00413408 = 1;
      DAT_004133f4 = DAT_004133f4 + 1;
      FUN_00408ae0();
      iVar4 = fclose(DAT_004133d8);
      if (iVar4 == -1) {
        FUN_00403220(0,0x424);
      }
    }
  }
  pcVar5 = (char *)FUN_0040add0((undefined4 *)PTR_s_MAKEFLAGS__004133c4);
  iVar4 = _putenv(pcVar5);
  if (iVar4 == -1) {
    FUN_00403220(0,0x41f);
  }
  if (DAT_004133e0 == 0) {
    FUN_004085f0();
  }
  FUN_00408270();
  FUN_00408190();
  DAT_00413424 = 0;
  FUN_0040a3c0();
  if ((DAT_004133d4 & 1) != 0) {
    FUN_00409000();
    FUN_004090a0();
    FUN_00409170();
  }
  if (DAT_00413a74 != 0) {
    free((void *)DAT_00413a74);
  }
  uVar6 = FUN_00401f10();
  _chdir((char *)_Path);
  return uVar6;
}



int FUN_00408140(char *param_1,char **param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 local_100 [64];
  
  _splitpath(param_1,(char *)0x0,(char *)0x0,(char *)local_100,(char *)0x0);
  pcVar2 = (char *)FUN_0040add0(local_100);
  *param_2 = pcVar2;
  uVar3 = 0xffffffff;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return ~uVar3 - 1;
}



void FUN_00408190(void)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  
  ppiVar3 = DAT_004133e0;
  if (DAT_004133e0 != (int **)0x0) {
    do {
      piVar1 = ppiVar3[1];
      if ((*(char *)piVar1 == '-') && (*(char *)((int)piVar1 + 1) == '\0')) {
        DAT_004133f8 = (undefined4 *)FUN_0040add0((undefined4 *)s_STDIN_004144f4);
        DAT_004133d8 = __p__iob();
      }
      else {
        DAT_004133f8 = (undefined4 *)FUN_0040add0(piVar1);
        DAT_004133d8 = FUN_0040ca80(DAT_004133f8,&DAT_00413014);
        if (DAT_004133d8 == 0) {
          FUN_00403220(0,0x41c);
        }
      }
      DAT_004133f4 = 0;
      DAT_00413408 = 0;
      FUN_00408ae0();
      iVar2 = __p__iob();
      if ((iVar2 != DAT_004133d8) && (iVar2 = fclose((FILE *)DAT_004133d8), iVar2 == -1)) {
        FUN_00403220(0,0x424);
      }
      ppiVar3 = (int **)*ppiVar3;
    } while (ppiVar3 != (int **)0x0);
  }
  FUN_00402c40(DAT_004133e0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00408270(void)

{
  undefined4 *puVar1;
  uchar *puVar2;
  int iVar3;
  uchar *_String;
  byte *_Memory;
  int *_Memory_00;
  uchar **ppuVar4;
  
  puVar1 = (undefined4 *)__p__environ();
  ppuVar4 = (uchar **)*puVar1;
  puVar2 = *ppuVar4;
  while (puVar2 != (uchar *)0x0) {
    puVar2 = _mbschr(*ppuVar4,0x3d);
    if ((puVar2 != (uchar *)0x0) &&
       (iVar3 = _mbsnbicmp(*ppuVar4,(uchar *)s_MAKEFLAGS_004144e0,8), iVar3 != 0)) {
      *puVar2 = '\0';
      if (**ppuVar4 != '\0') {
        _String = (uchar *)FUN_0040add0((undefined4 *)*ppuVar4);
        _Memory = _mbsupr(_String);
        _Memory_00 = (int *)FUN_0040add0((undefined4 *)(puVar2 + 1));
        *puVar2 = '=';
        _DAT_004133b4 = 0;
        iVar3 = FUN_00401980(_Memory,_Memory_00,4);
        if (iVar3 == 0) {
          free(_Memory);
          free(_Memory_00);
        }
      }
    }
    ppuVar4 = ppuVar4 + 1;
    puVar2 = *ppuVar4;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00408320(int param_1,uchar **param_2)

{
  uchar uVar1;
  uchar *puVar2;
  bool bVar3;
  bool bVar4;
  uchar *puVar5;
  size_t sVar6;
  int *piVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  FILE *_File;
  uchar *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  byte bVar14;
  
  bVar3 = false;
  bVar4 = false;
  if (param_1 != 0) {
    do {
      puVar5 = *param_2;
      uVar1 = *puVar5;
      if (uVar1 == '@') {
        FUN_00402cc0((undefined4 *)(puVar5 + 1));
      }
      else if ((uVar1 == '-') || (uVar1 == '/')) {
        puVar5 = puVar5 + 1;
        iVar9 = _mbsicmp(puVar5,&DAT_00414508);
        if (iVar9 == 0) {
          bVar3 = true;
          break;
        }
        uVar1 = *puVar5;
        while (uVar1 != '\0') {
          iVar9 = _mbsicmp(puVar5,(uchar *)s_nologo_00414500);
          if (iVar9 == 0) {
            FUN_004086d0(puVar5[2],1);
            break;
          }
          uVar1 = *puVar5;
          if (uVar1 == '?') {
            bVar4 = true;
            break;
          }
          if ((uVar1 == 'f') || (uVar1 == 'F')) {
            puVar12 = (undefined4 *)(puVar5 + 1);
            puVar13 = puVar12;
            if (*(uchar *)puVar12 == '\0') {
              param_1 = param_1 + -1;
              if (param_1 != 0) {
                puVar13 = (undefined4 *)param_2[1];
                param_2 = param_2 + 1;
                if ((puVar13 != (undefined4 *)0x0) && (puVar12 = puVar13, *(uchar *)puVar13 != '\0')
                   ) goto LAB_00408577;
              }
              puVar13 = puVar12;
              FUN_00403220(0,0x425);
            }
LAB_00408577:
            piVar7 = (int *)FUN_0040ad20();
            iVar9 = FUN_0040add0(puVar13);
            piVar7[1] = iVar9;
            FUN_0040ae30((int **)&DAT_004133e0,piVar7);
            break;
          }
          if ((uVar1 == 'x') || (uVar1 == 'X')) {
            puVar5 = puVar5 + 1;
            puVar11 = puVar5;
            if (*puVar5 == '\0') {
              param_1 = param_1 + -1;
              if (param_1 != 0) {
                puVar11 = param_2[1];
                param_2 = param_2 + 1;
                if ((puVar11 != (uchar *)0x0) && (puVar5 = puVar11, *puVar11 != '\0'))
                goto LAB_004084d9;
              }
              puVar11 = puVar5;
              FUN_00403220(0,0x426);
            }
LAB_004084d9:
            if ((*puVar11 == '-') && (puVar11[1] == '\0')) {
              iVar9 = __p__iob();
              iVar9 = *(int *)(iVar9 + 0x50);
              iVar10 = __p__iob();
              _dup2(*(int *)(iVar10 + 0x30),iVar9);
            }
            else {
              _File = fopen((char *)puVar11,&DAT_004144fc);
              if (_File == (FILE *)0x0) {
                FUN_00403220(0,0x418);
              }
              iVar9 = __p__iob();
              _dup2(_File->_file,*(int *)(iVar9 + 0x50));
              fclose(_File);
            }
            break;
          }
          puVar5 = puVar5 + 1;
          FUN_004086d0(uVar1,1);
          uVar1 = *puVar5;
        }
      }
      else {
        puVar5 = _mbschr(puVar5,0x3d);
        if (puVar5 == (uchar *)0x0) {
          FUN_00408a90((char *)*param_2);
          if (**param_2 != '\0') {
            piVar7 = (int *)FUN_0040ad20();
            iVar9 = FUN_0040add0((undefined4 *)*param_2);
            piVar7[1] = iVar9;
            FUN_0040ae30((int **)&DAT_004133dc,piVar7);
          }
          *param_2 = (uchar *)0x0;
        }
        else {
          if (*param_2 == puVar5) {
            FUN_00403220(0,0x427);
          }
          *puVar5 = '\0';
          puVar11 = puVar5;
          do {
            do {
              puVar2 = puVar11;
              puVar11 = puVar2 + -1;
            } while (*puVar11 == ' ');
          } while (*puVar11 == '\t');
          *puVar2 = '\0';
          _DAT_004133b4 = 1;
          puVar11 = *param_2;
          bVar14 = 2;
          sVar6 = _mbsspn(puVar5 + 1,&DAT_00413008);
          piVar7 = (int *)FUN_0040add0((undefined4 *)(puVar5 + 1 + sVar6));
          sVar6 = _mbsspn(puVar11,&DAT_00413008);
          pbVar8 = (byte *)FUN_0040add0((undefined4 *)(puVar11 + sVar6));
          FUN_00401980(pbVar8,piVar7,bVar14);
          *param_2 = (uchar *)0x0;
        }
      }
      param_1 = param_1 + -1;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  if (bVar3) {
    FUN_00403490();
                    // WARNING: Subroutine does not return
    exit(0);
  }
  if (bVar4) {
    FUN_00403490();
                    // WARNING: Subroutine does not return
    exit(0);
  }
  return;
}



void FUN_004085f0(void)

{
  uchar *_Str;
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uchar *puVar4;
  int *piVar5;
  uchar local_108 [260];
  
  FUN_0040ceb4();
  iVar1 = _access(s_makefile_00414510,4);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)FUN_0040ad20();
    uVar3 = FUN_0040add0((undefined4 *)s_makefile_00414510);
    puVar2[1] = uVar3;
    DAT_004133e0 = puVar2;
    return;
  }
  if (DAT_004133dc == (undefined4 *)0x0) {
    if ((DAT_004133d4 & 1) == 0) {
      FUN_00403220(0,0x428);
    }
  }
  else {
    _Str = (uchar *)DAT_004133dc[1];
    iVar1 = _access((char *)_Str,4);
    if (iVar1 == 0) {
      puVar4 = _mbsrchr(_Str,0x2e);
      if ((puVar4 != (uchar *)0x0) &&
         (piVar5 = FUN_00409ef0(local_108,_Str,(char *)puVar4), piVar5 != (int *)0x0)) {
        return;
      }
      DAT_004133e0 = DAT_004133dc;
      DAT_004133dc = (undefined4 *)*DAT_004133dc;
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004086d0(char param_1,int param_2)

{
  uchar *puVar1;
  byte bVar2;
  uchar uVar3;
  uint uVar4;
  uchar *puVar5;
  char *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte bStack_1;
  
  pbVar8 = &DAT_004133d0;
  uVar4 = _mbctoupper((int)param_1);
  uVar3 = (uchar)uVar4;
  uVar4 = (uint)(char)uVar3;
  switch(uVar4) {
  case 0x20:
    goto switchD_00408701_caseD_20;
  default:
    FUN_00403220(0,0x429);
    break;
  case 0x41:
    bStack_1 = 0x10;
    break;
  case 0x42:
    _DAT_004133b8 = 1;
    return;
  case 0x43:
    bStack_1 = 0x20;
    pbVar8 = &DAT_004133d4;
    _DAT_004133cc = 1;
    break;
  case 0x44:
    bStack_1 = 1;
    break;
  case 0x45:
    bStack_1 = 4;
    goto LAB_004087a9;
  case 0x49:
    bStack_1 = 2;
    break;
  case 0x4b:
    _DAT_004133a4 = 1;
    return;
  case 0x4c:
    bStack_1 = 0x80;
    pbVar8 = &DAT_004133d4;
    _DAT_004133cc = 1;
    break;
  case 0x4e:
    bStack_1 = 4;
    break;
  case 0x4f:
    _DAT_004133a8 = 1;
    return;
  case 0x50:
    bStack_1 = 1;
    goto LAB_004087a9;
  case 0x51:
    bStack_1 = 8;
    goto LAB_004087a9;
  case 0x52:
    bStack_1 = 2;
    goto LAB_004087a9;
  case 0x53:
    bStack_1 = 8;
    break;
  case 0x54:
    bStack_1 = 0x10;
LAB_004087a9:
    pbVar8 = &DAT_004133d4;
  }
  if (_DAT_004133e8 == 0) {
    _DAT_004133e8 = FUN_00407b70((uchar *)s_MAKEFLAGS_004144e0);
    DAT_004133ec = *(int *)(_DAT_004133e8 + 8);
  }
  if (param_2 == 0) {
    if (pbVar8 == &DAT_004133d0) {
      DAT_004133d0 = DAT_004133d0 & ~bStack_1;
      puVar5 = _mbschr(*(uchar **)(DAT_004133ec + 4),uVar4);
      if (puVar5 != (uchar *)0x0) {
        do {
          puVar1 = puVar5 + 1;
          *puVar5 = *puVar1;
          puVar5 = puVar1;
        } while (*puVar1 != '\0');
      }
      pcVar6 = (char *)FUN_0040add0((undefined4 *)PTR_s_MAKEFLAGS__004133c4);
      iVar7 = _putenv(pcVar6);
      if (iVar7 == -1) {
        FUN_00403220(DAT_004133f4,0x41f);
      }
    }
  }
  else {
    bVar2 = *pbVar8;
    *pbVar8 = bVar2 | bStack_1;
    if (uVar3 == 'Q') {
      *pbVar8 = bVar2 | bStack_1 | 0x20;
    }
    puVar5 = _mbschr(*(uchar **)(DAT_004133ec + 4),uVar4);
    if (puVar5 == (uchar *)0x0) {
      puVar5 = _mbschr(*(uchar **)(DAT_004133ec + 4),0x20);
      if (puVar5 != (uchar *)0x0) {
        *puVar5 = uVar3;
      }
      pcVar6 = (char *)FUN_0040add0((undefined4 *)PTR_s_MAKEFLAGS__004133c4);
      iVar7 = _putenv(pcVar6);
      if (iVar7 == -1) {
        FUN_00403220(DAT_004133f4,0x41f);
        return;
      }
    }
  }
switchD_00408701_caseD_20:
  return;
}



uint FUN_004089e0(uchar *param_1)

{
  uint in_EAX;
  int *piVar1;
  
  piVar1 = DAT_00413a30;
  if (DAT_00413a30 != (int *)0x0) {
    do {
      in_EAX = _mbsicmp((uchar *)piVar1[1],param_1);
      if (in_EAX == 0) {
        return 1;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return in_EAX & 0xffffff00;
}



void FUN_00408a20(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  _fcloseall();
  for (puVar1 = DAT_004133bc; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    _unlink((char *)puVar1[1]);
    if ((DAT_004133d0 & 4) != 0) {
      printf(s__del__s_0041451c,puVar1[1]);
      iVar2 = __p__iob();
      fflush((FILE *)(iVar2 + 0x20));
    }
  }
  return;
}



void FUN_00408a90(char *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  
  uVar4 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = param_1 + (~uVar4 - 2);
  bVar2 = false;
  if ((*param_1 == '\"') && (*pcVar3 == '\"')) {
    pcVar3 = pcVar3 + -1;
    bVar2 = true;
  }
  for (; (param_1 < pcVar3 && ((*pcVar3 == ' ' || (*pcVar3 == '.')))); pcVar3 = pcVar3 + -1) {
  }
  if (bVar2) {
    pcVar3[1] = '\"';
    pcVar3 = pcVar3 + 1;
  }
  pcVar3[1] = '\0';
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00408ae0(void)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte local_2;
  byte local_1;
  
  iVar5 = DAT_00413420;
  DAT_00413424 = DAT_004133f4;
  _DAT_004133c8 = 1;
  local_2 = 0;
  DAT_00413420 = DAT_00413420 + 2;
  (&DAT_00413411)[iVar5] = 0x17;
  (&DAT_00413410)[DAT_00413420] = 0;
  uVar6 = FUN_00406500(0x400,0);
  local_1 = (byte)uVar6;
  bVar1 = (&DAT_00413410)[DAT_00413420];
  bVar4 = local_2;
  iVar5 = DAT_00413420;
  while (bVar1 != 0x17) {
    local_2 = bVar4;
    if ((bVar1 & 0x40) == 0) {
      DAT_00413420 = iVar5;
      if ((bVar1 & 0x10) == 0) {
        bVar2 = (&DAT_004145d8)[(local_1 & 0xf) + (uint)bVar1 * 8];
        uVar6 = (uint)bVar2;
        if ((bVar2 & 0x20) != 0) {
          FUN_00403220(DAT_00413424,uVar6 + 1000);
        }
        DAT_00413420 = DAT_00413420 + -1;
        if ((bVar2 & 0x80) != 0) {
          if (bVar4 == 0) {
            uVar7 = FUN_00406500(0x400,bVar1);
            local_2 = (byte)uVar7;
          }
          uVar6 = (uVar6 & 0xf) + (uint)(byte)(&DAT_00414618)[(local_2 & 0xf) + (uint)bVar1 * 8];
        }
        pbVar3 = (&PTR_DAT_00414588)[uVar6];
        iVar5 = DAT_00413420;
        for (uVar6 = (uint)*pbVar3; DAT_00413420 = iVar5, uVar6 != 0; uVar6 = uVar6 - 1) {
          DAT_00413420 = iVar5 + 1;
          (&DAT_00413411)[iVar5] = pbVar3[uVar6];
          iVar5 = DAT_00413420;
        }
      }
      else if (local_1 == bVar1) {
        DAT_00413420 = iVar5 + -1;
        if (((&DAT_0041340f)[iVar5] & 0x40) != 0) {
          DAT_00413420 = iVar5 + -2;
          (*(code *)(&PTR_LAB_00414630)[(byte)(&DAT_0041340f)[iVar5] & 0xf])();
        }
        DAT_00413424 = DAT_004133f4;
        if (bVar4 == 0) {
          uVar6 = FUN_00406500(0x400,(&DAT_00413410)[DAT_00413420]);
          local_1 = (byte)uVar6;
        }
        else {
          if (DAT_00413aa0 == '\n') {
            DAT_00413424 = DAT_004133f4 + -1;
          }
          local_2 = 0;
          local_1 = bVar4;
        }
      }
      else {
        FUN_00403220(DAT_00413424,0x409);
      }
    }
    else {
      DAT_00413420 = iVar5 + -1;
      (*(code *)(&PTR_LAB_00414630)[(byte)(&DAT_00413410)[iVar5] & 0xf])();
    }
    bVar4 = local_2;
    iVar5 = DAT_00413420;
    bVar1 = (&DAT_00413410)[DAT_00413420];
  }
  DAT_00413420 = iVar5 + -1;
  return;
}



uint FUN_00408cd0(int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  uVar2 = (~uVar2 - 1) + param_1;
  if (0x28 < uVar2) {
    printf(&DAT_00414820);
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_00408d10(undefined4 param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  int local_4;
  
  if (param_3 == 0) {
    FUN_00403370(6);
    return;
  }
  local_4 = param_3;
  pcVar1 = ctime((time_t *)&local_4);
  pcVar1[0x18] = '\0';
  FUN_00403370(4);
  return;
}



void FUN_00408d80(int *param_1)

{
  uchar *puVar1;
  undefined4 *_Str;
  uchar *puVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *local_c;
  intptr_t iStack_8;
  undefined4 *puStack_4;
  
  uVar5 = 0;
  local_c = FUN_0040acf0(DAT_00413ee0);
  FUN_00403370(0xc);
  if (param_1 != (int *)0x0) {
    do {
      puVar1 = _mbschr((uchar *)param_1[1],0x24);
      if (puVar1 == (uchar *)0x0) {
        puVar1 = _mbspbrk((uchar *)param_1[1],&DAT_00413000);
        if (puVar1 == (uchar *)0x0) {
          printf(&DAT_00414828,param_1[1]);
          uVar5 = FUN_00408cd0(uVar5,(char *)param_1[1]);
        }
        else {
          iVar3 = FUN_0040cd20((uchar *)param_1[1],(int *)&local_c,&iStack_8);
          if (iVar3 != 0) {
            pcVar4 = (char *)FUN_00404c90((int *)&local_c);
            pcVar4 = (char *)FUN_0040c340((char *)param_1[1],pcVar4);
            printf(&DAT_00414828,pcVar4);
            uVar5 = FUN_00408cd0(uVar5,pcVar4);
            free(pcVar4);
            iVar3 = FUN_0040ce00((int *)&local_c,iStack_8);
            while (iVar3 != 0) {
              pcVar4 = (char *)FUN_00404c90((int *)&local_c);
              pcVar4 = (char *)FUN_0040c340((char *)param_1[1],pcVar4);
              printf(&DAT_00414828,pcVar4);
              uVar5 = FUN_00408cd0(uVar5,pcVar4);
              free(pcVar4);
              iVar3 = FUN_0040ce00((int *)&local_c,iStack_8);
            }
          }
        }
      }
      else {
        _Str = FUN_0040b700((uchar *)param_1[1],(int **)&stack0x00000008);
        puStack_4 = _Str;
        while (puVar1 = _mbstok((uchar *)_Str,&DAT_00413008), puVar1 != (uchar *)0x0) {
          puVar2 = _mbspbrk(puVar1,&DAT_00413000);
          if (puVar2 == (uchar *)0x0) {
            printf(&DAT_00414828,puVar1);
            uVar5 = FUN_00408cd0(uVar5,(char *)puVar1);
          }
          else {
            iVar3 = FUN_0040cd20(puVar1,(int *)&local_c,&iStack_8);
            if (iVar3 != 0) {
              pcVar4 = (char *)FUN_00404c90((int *)&local_c);
              pcVar4 = (char *)FUN_0040c340((char *)puVar1,pcVar4);
              printf(&DAT_00414828,pcVar4);
              uVar5 = FUN_00408cd0(uVar5,pcVar4);
              free(pcVar4);
              iVar3 = FUN_0040ce00((int *)&local_c,iStack_8);
              while (iVar3 != 0) {
                pcVar4 = (char *)FUN_00404c90((int *)&local_c);
                pcVar4 = (char *)FUN_0040c340((char *)puVar1,pcVar4);
                printf(&DAT_00414828,pcVar4);
                uVar5 = FUN_00408cd0(uVar5,pcVar4);
                free(pcVar4);
                iVar3 = FUN_0040ce00((int *)&local_c,iStack_8);
              }
            }
          }
          _Str = (undefined4 *)0x0;
        }
        free(puStack_4);
      }
      param_1 = (int *)*param_1;
    } while (param_1 != (int *)0x0);
  }
  return;
}



void FUN_00409000(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = &DAT_00413428;
  FUN_00403370(8);
  do {
    for (puVar1 = (undefined4 *)*puVar4; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1
        ) {
      if ((puVar1[2] != 0) && (*(int *)(puVar1[2] + 4) != 0)) {
        FUN_00403370(0xe);
        for (puVar2 = *(undefined4 **)puVar1[2]; puVar2 != (undefined4 *)0x0;
            puVar2 = (undefined4 *)*puVar2) {
          if (puVar2[1] != 0) {
            printf(s___s_0041482c,puVar2[1]);
          }
        }
      }
    }
    puVar4 = puVar4 + 1;
  } while (puVar4 < &DAT_00413828);
  putchar(10);
  iVar3 = __p__iob();
  fflush((FILE *)(iVar3 + 0x20));
  return;
}



void FUN_004090a0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_00403370(7);
  for (puVar2 = DAT_00413a34; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    printf(&DAT_00414848,puVar2[2]);
    FUN_00403370(10);
    puVar1 = (undefined4 *)puVar2[3];
    if (puVar1 != (undefined4 *)0x0) {
      printf(&DAT_00414844,puVar1[1]);
      for (puVar1 = (undefined4 *)*puVar1; puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)*puVar1) {
        printf(s___s_0041483c,puVar1[1]);
      }
    }
    putchar(10);
  }
  printf(&DAT_00414834,s__SUFFIXES_00413ea8);
  for (puVar2 = DAT_00413a2c; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    printf(&DAT_00414828,puVar2[1]);
  }
  putchar(10);
  iVar3 = __p__iob();
  fflush((FILE *)(iVar3 + 0x20));
  return;
}



void FUN_00409170(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int **ppiVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *local_4;
  
  FUN_00403370(9);
  local_4 = &DAT_00413828;
  do {
    puVar1 = (undefined4 *)*local_4;
    while (puVar1 != (undefined4 *)0x0) {
      printf(s__s__c_00414854,puVar1[1],
             (-(uint)((*(byte *)(*(int *)(puVar1[4] + 4) + 0x10) & 0x20) == 0) & 0xffffffe6) + 0x3a)
      ;
      DAT_00413a84 = puVar1[1];
      DAT_00413a8c = DAT_00413a84;
      DAT_00413a90 = DAT_00413a84;
      for (puVar2 = (undefined4 *)puVar1[4]; puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
        ppiVar3 = (int **)puVar2[1];
        iVar7 = 0;
        FUN_00403370(0xb);
        uVar6 = 1;
        do {
          if ((*(byte *)(ppiVar3 + 4) & (byte)uVar6) != 0) {
            printf(&DAT_0041484c,(int)(char)PTR_s_dinsb_00414814[iVar7]);
          }
          iVar7 = iVar7 + 1;
          uVar6 = uVar6 * 2;
        } while (uVar6 < 0x10);
        FUN_00408d80(*ppiVar3);
        FUN_00403370(10);
        piVar4 = ppiVar3[2];
        if (piVar4 == (int *)0x0) {
          putchar(10);
        }
        else {
          if (piVar4[1] != 0) {
            printf(&DAT_00414844,piVar4[1]);
          }
          for (puVar5 = (undefined4 *)*piVar4; puVar5 != (undefined4 *)0x0;
              puVar5 = (undefined4 *)*puVar5) {
            if (puVar5[1] != 0) {
              printf(s___s_0041483c,puVar5[1]);
            }
          }
        }
      }
      puVar1 = (undefined4 *)*puVar1;
      putchar(10);
    }
    local_4 = local_4 + 1;
  } while (local_4 < &DAT_00413a28);
  DAT_00413a84 = 0;
  DAT_00413a90 = 0;
  DAT_00413a8c = 0;
  putchar(10);
  iVar7 = __p__iob();
  fflush((FILE *)(iVar7 + 0x20));
  return;
}



undefined4 FUN_00409300(char param_1)

{
  uchar **ppuVar1;
  char *pcVar2;
  int iVar3;
  uchar **ppuVar4;
  
  pcVar2 = DAT_0040ea24;
  DAT_0040ea24 = DAT_0040ea24 + -8;
  ppuVar1 = (uchar **)(pcVar2 + 4);
  ppuVar4 = (uchar **)(pcVar2 + -4);
  if ((*pcVar2 == '\x16') && (*DAT_0040ea24 == '\x16')) {
    switch(param_1) {
    case '\x01':
      goto switchD_00409340_caseD_1;
    case '\x02':
      if ((*ppuVar4 != (uchar *)0x0) && (*ppuVar1 != (uchar *)0x0)) {
        *ppuVar4 = (uchar *)0x1;
        return 1;
      }
      *ppuVar4 = (uchar *)0x0;
      return 1;
    case '\x03':
      *ppuVar4 = (uchar *)((uint)*ppuVar4 | (uint)*ppuVar1);
      return 1;
    case '\x04':
      *ppuVar4 = (uchar *)((uint)*ppuVar4 ^ (uint)*ppuVar1);
      return 1;
    case '\x05':
      *ppuVar4 = (uchar *)((uint)*ppuVar4 & (uint)*ppuVar1);
      return 1;
    case '\x06':
      *ppuVar4 = (uchar *)(uint)(*ppuVar1 != *ppuVar4);
      return 1;
    case '\a':
      *ppuVar4 = (uchar *)(uint)(*ppuVar1 == *ppuVar4);
      return 1;
    case '\b':
      *ppuVar4 = (uchar *)(uint)((int)*ppuVar1 < (int)*ppuVar4);
      return 1;
    case '\t':
      *ppuVar4 = (uchar *)(uint)(*ppuVar1 != *ppuVar4 && (int)*ppuVar4 <= (int)*ppuVar1);
      return 1;
    case '\n':
      *ppuVar4 = (uchar *)(uint)(*ppuVar1 == *ppuVar4 || (int)*ppuVar1 < (int)*ppuVar4);
      return 1;
    case '\v':
      *ppuVar4 = (uchar *)(uint)((int)*ppuVar4 <= (int)*ppuVar1);
      return 1;
    case '\f':
      *ppuVar4 = (uchar *)((int)*ppuVar4 >> (*(byte *)ppuVar1 & 0x1f));
      return 1;
    case '\r':
      *ppuVar4 = (uchar *)((int)*ppuVar4 << (*(byte *)ppuVar1 & 0x1f));
      return 1;
    case '\x0e':
      *ppuVar4 = *ppuVar4 + -(int)*ppuVar1;
      return 1;
    case '\x0f':
      *ppuVar4 = *ppuVar4 + (int)*ppuVar1;
      return 1;
    case '\x10':
      if (*ppuVar1 == (uchar *)0x0) {
        FUN_00403220(DAT_004133f4,0x437);
      }
      *ppuVar4 = (uchar *)((int)*ppuVar4 % (int)*ppuVar1);
      return 1;
    case '\x11':
      if (*ppuVar1 == (uchar *)0x0) {
        FUN_00403220(DAT_004133f4,0x437);
      }
      *ppuVar4 = (uchar *)((int)*ppuVar4 / (int)*ppuVar1);
      return 1;
    case '\x12':
      *ppuVar4 = (uchar *)((int)*ppuVar1 * (int)*ppuVar4);
      return 1;
    default:
      return 0;
    }
  }
  if (((*pcVar2 == '\x17') && (*DAT_0040ea24 == '\x17')) &&
     ((param_1 == '\a' || (param_1 == '\x06')))) {
    *DAT_0040ea24 = '\x16';
    iVar3 = _mbscmp(*ppuVar4,*ppuVar1);
    *ppuVar4 = (uchar *)(uint)(iVar3 == 0);
    if ((param_1 == '\x06') && (iVar3 = FUN_004095c0('\x15'), iVar3 == 0)) {
      return 0;
    }
    return 1;
  }
  return 0;
switchD_00409340_caseD_1:
  if ((*ppuVar4 == (uchar *)0x0) && (*ppuVar1 == (uchar *)0x0)) {
    *ppuVar4 = (uchar *)0x0;
    return 1;
  }
  *ppuVar4 = (uchar *)0x1;
  return 1;
}



undefined4 FUN_004095c0(char param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(DAT_0040ea24 + 4);
  if (*DAT_0040ea24 != '\x16') {
    return 0;
  }
  if (param_1 == '\x13') {
    *puVar1 = -*puVar1;
    return 1;
  }
  if (param_1 == '\x14') {
    *puVar1 = ~*puVar1;
    return 1;
  }
  if (param_1 != '\x15') {
    return 0;
  }
  *puVar1 = (uint)(*puVar1 == 0);
  return 1;
}



char * FUN_00409620(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  DAT_0040ea18 = (char *)((int)DAT_0040ea18 + 1);
  pcVar2 = DAT_0040ea18;
  cVar1 = *DAT_0040ea18;
  while ((cVar1 != '\0' &&
         ((pcVar3 = DAT_0040ea18, *DAT_0040ea18 != '\"' ||
          (pcVar3 = DAT_0040ea18 + 1, DAT_0040ea18[1] == '\"'))))) {
    DAT_0040ea18 = pcVar3;
    DAT_0040ea18 = DAT_0040ea18 + 1;
    cVar1 = *DAT_0040ea18;
  }
  if (*DAT_0040ea18 == '\0') {
    FUN_00403220(DAT_004133f4,0x3fe);
  }
  *DAT_0040ea18 = '\0';
  DAT_0040ea18 = DAT_0040ea18 + 1;
  return pcVar2;
}



char * FUN_00409690(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *_Src;
  char *pcVar4;
  
  DAT_0040ea18 = DAT_0040ea18 + 1;
  pcVar2 = DAT_0040ea18;
  cVar1 = *DAT_0040ea18;
  while (cVar1 != '\0') {
    if ((*DAT_0040ea18 == '^') && (_Src = DAT_0040ea18 + 1, *_Src == ']')) {
      uVar3 = 0xffffffff;
      pcVar4 = _Src;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      memmove(DAT_0040ea18,_Src,~uVar3);
    }
    else if (*DAT_0040ea18 == ']') break;
    DAT_0040ea18 = DAT_0040ea18 + 1;
    cVar1 = *DAT_0040ea18;
  }
  if (*DAT_0040ea18 == '\0') {
    FUN_00403220(DAT_004133f4,0x3fe);
  }
  *DAT_0040ea18 = '\0';
  DAT_0040ea18 = DAT_0040ea18 + 1;
  return pcVar2;
}



void FUN_00409730(byte param_1)

{
  byte bVar1;
  
  if (param_1 == 0x19) {
    bVar1 = 3;
  }
  else if (param_1 == 0) {
    bVar1 = 4;
  }
  else {
    bVar1 = 0;
    if (param_1 < 0x16) {
      bVar1 = (0x12 < param_1) + 1;
    }
  }
  if (*(char *)((uint)DAT_0040ea1c * 5 + 0x414880 + (uint)bVar1) == '\0') {
    FUN_00403220(DAT_004133f4,0x3ff);
  }
  DAT_0040ea1c = bVar1;
  return;
}



void FUN_00409790(byte param_1,undefined4 param_2)

{
  FUN_00409730(param_1);
  DAT_0040ea08 = param_1;
  DAT_0040ea10 = param_1;
  DAT_0040ea14 = param_2;
  return;
}



undefined4 FUN_004097c0(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = DAT_0040ea18;
  if (*param_1 != '\0') {
    do {
      if (*pcVar1 != *param_1) break;
      pcVar1 = pcVar1 + 1;
      param_1 = param_1 + 1;
    } while (*param_1 != '\0');
    if (*param_1 != '\0') {
      return (uint)param_1 & 0xffffff00;
    }
  }
  DAT_0040ea18 = pcVar1;
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00409800(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  long lVar6;
  uint uVar7;
  uchar *puVar8;
  size_t sVar9;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  byte bVar10;
  undefined **ppuVar11;
  
  bVar10 = *DAT_0040ea18;
  if ((bVar10 == 0x20) || (bVar10 == 9)) {
    iVar2 = _ismbcspace((int)(char)bVar10);
    while (iVar2 != 0) {
      DAT_0040ea18 = DAT_0040ea18 + 1;
      bVar10 = *DAT_0040ea18;
      iVar2 = _ismbcspace((int)(char)bVar10);
    }
  }
  if (((&DAT_004149c0)[bVar10] & 0x80) == 0) {
    ppuVar11 = (undefined **)&DAT_00414948;
  }
  else {
    ppuVar11 = &PTR_DAT_004148a0;
    pcVar4 = PTR_DAT_004148a0;
    while ((pcVar4 != (char *)0x0 && (uVar3 = FUN_004097c0(*ppuVar11), (char)uVar3 == '\0'))) {
      ppuVar11 = ppuVar11 + 2;
      pcVar4 = *ppuVar11;
    }
  }
  if (*ppuVar11 != (char *)0x0) {
    FUN_00409790(*(byte *)(ppuVar11 + 1),0);
    return;
  }
  if (bVar10 == 0x2d) {
    DAT_0040ea18 = DAT_0040ea18 + 1;
    if (DAT_0040ea08 != '\x16') {
      FUN_00409790(0x13,0);
      return;
    }
    FUN_00409790(0xe,0);
    return;
  }
  if (bVar10 == 0x22) {
    pcVar4 = FUN_00409620();
    FUN_00409790(0x17,pcVar4);
    return;
  }
  if (bVar10 == 0x5b) {
    pcVar4 = FUN_00409690();
    FUN_00409790(0x18,pcVar4);
    return;
  }
  iVar2 = _ismbcdigit((int)(char)bVar10);
  if (iVar2 != 0) {
    piVar5 = _errno();
    *piVar5 = 0;
    lVar6 = strtol((char *)DAT_0040ea18,(char **)&DAT_0040ea18,0);
    piVar5 = _errno();
    if (*piVar5 == 0x22) {
      *DAT_0040ea18 = 0;
      FUN_00403220(DAT_004133f4,0x436);
    }
    uVar7 = _mbctoupper((int)(char)*DAT_0040ea18);
    if (uVar7 == 0x4c) {
      DAT_0040ea18 = DAT_0040ea18 + 1;
    }
    FUN_00409790(0x16,lVar6);
    return;
  }
  if (bVar10 == 0) {
    _DAT_0040ea20 = 1;
    FUN_00409790(0,0);
    return;
  }
  iVar2 = _mbsnbicmp(DAT_0040ea18,(uchar *)s_DEFINED_004149b0,7);
  if (iVar2 != 0) {
    iVar2 = _mbsnbicmp(DAT_0040ea18,(uchar *)s_EXIST_004149a8,5);
    if (iVar2 != 0) {
      FUN_00403220(DAT_004133f4,0x3ff);
      return;
    }
    puVar8 = _mbschr(DAT_0040ea18,0x28);
    if (puVar8 == (uchar *)0x0) {
      FUN_00403220(DAT_004133f4,0x3ff);
    }
    puVar8 = puVar8 + 1;
    sVar9 = _mbscspn(puVar8,&DAT_004149a0);
    DAT_0040ea18 = puVar8 + sVar9;
    *DAT_0040ea18 = 0;
    DAT_0040ea18 = DAT_0040ea18 + 1;
    bVar1 = FUN_00409de0(puVar8);
    FUN_00409790(0x16,CONCAT31(extraout_var_00,bVar1));
    return;
  }
  puVar8 = _mbschr(DAT_0040ea18,0x28);
  if (puVar8 == (uchar *)0x0) {
    FUN_00403220(DAT_004133f4,0x3ff);
  }
  puVar8 = puVar8 + 1;
  sVar9 = _mbscspn(puVar8,&DAT_004149a0);
  DAT_0040ea18 = puVar8 + sVar9;
  *DAT_0040ea18 = 0;
  DAT_0040ea18 = DAT_0040ea18 + 1;
  bVar1 = FUN_00409d70(puVar8);
  FUN_00409790(0x16,CONCAT31(extraout_var,bVar1));
  return;
}



void FUN_00409a90(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)DAT_0040ea24;
  DAT_0040ea24 = (undefined4 *)((int)DAT_0040ea24 + 8);
  if (*(char *)param_1 == '\x18') {
    iVar2 = FUN_00403af0((char *)param_1[1],0,1,0,(undefined4 *)0x0);
    DAT_0040ea24[1] = iVar2;
    *(undefined *)DAT_0040ea24 = 0x16;
    return;
  }
  uVar1 = param_1[1];
  *DAT_0040ea24 = *param_1;
  *(undefined4 *)(iVar2 + 0xc) = uVar1;
  return;
}



uint FUN_00409ae0(void)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)&DAT_0040ee30;
  if (&DAT_0040ee30 < DAT_0040ea0c) {
    do {
      bVar1 = *(byte *)puVar5;
      if (bVar1 < 0x16) {
        pcVar2 = FUN_004095c0;
        if (bVar1 < 0x13) {
          pcVar2 = FUN_00409300;
        }
        iVar3 = (*pcVar2)(bVar1);
        if (iVar3 == 0) {
          FUN_00403220(DAT_004133f4,0x438);
        }
      }
      else {
        FUN_00409a90(puVar5);
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 < DAT_0040ea0c);
  }
  if ((DAT_0040ea24 == &DAT_0040fe30) && (DAT_0040fe30 == '\x16')) {
    return (uint)(DAT_0040fe34 != 0);
  }
  uVar4 = FUN_00403220(DAT_004133f4,0x3ff);
  return uVar4;
}



void FUN_00409b70(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (DAT_0040ea24 < &DAT_0040fe30) {
    FUN_00403220(DAT_004133f4,0x3ff);
  }
  if (PTR_DAT_00414954 < DAT_0040ea0c) {
    FUN_00403220(DAT_004133f4,0x412);
  }
  puVar2 = DAT_0040ea0c;
  uVar1 = DAT_0040ea24[1];
  *DAT_0040ea0c = *DAT_0040ea24;
  puVar2[1] = uVar1;
  DAT_0040ea24 = DAT_0040ea24 + -2;
  DAT_0040ea0c = DAT_0040ea0c + 2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00409be0(void)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  
  DAT_0040ea24 = (uint *)&DAT_0040fe30;
  DAT_0040ea0c = &DAT_0040ee30;
  DAT_0040ea1c = 3;
  DAT_0040ea08 = 0x19;
  _DAT_0040ea20 = 0;
  FUN_00409790(0x19,0);
  puVar4 = DAT_0040ea24;
  uVar3 = DAT_0040ea14;
  *DAT_0040ea24 = _DAT_0040ea10;
  puVar4[1] = uVar3;
  do {
    if (_DAT_0040ea20 != 0) {
      if (DAT_0040ea24 != (uint *)&DAT_0040fe28) {
        FUN_00403220(DAT_004133f4,0x3ff);
      }
      FUN_00409ae0();
      return;
    }
    bVar2 = false;
    FUN_00409800();
    if ((DAT_0040ea10 != '\x19') &&
       ((byte)(&DAT_00414860)[_DAT_0040ea10 & 0xff] <= (byte)(&DAT_00414860)[*(byte *)DAT_0040ea24])
       ) {
      do {
        if ((&DAT_00414860)[_DAT_0040ea10 & 0xff] == '\0') {
          bVar1 = *(byte *)DAT_0040ea24;
          while (bVar1 != 0x19) {
            FUN_00409b70();
            bVar1 = *(byte *)DAT_0040ea24;
          }
          bVar2 = true;
          if ((uint *)0x40fe2f < DAT_0040ea24) {
            DAT_0040ea24 = DAT_0040ea24 + -2;
            break;
          }
          FUN_00403220(DAT_004133f4,0x3ff);
        }
        else {
          FUN_00409b70();
        }
      } while ((byte)(&DAT_00414860)[_DAT_0040ea10 & 0xff] <=
               (byte)(&DAT_00414860)[*(byte *)DAT_0040ea24]);
    }
    puVar4 = DAT_0040ea24;
    uVar3 = DAT_0040ea14;
    if (!bVar2) {
      if ((uint *)PTR_DAT_00414950 == DAT_0040ea24) {
        FUN_00403220(DAT_004133f4,0x412);
      }
      else {
        DAT_0040ea24 = DAT_0040ea24 + 2;
        *DAT_0040ea24 = _DAT_0040ea10;
        puVar4[3] = uVar3;
      }
    }
  } while( true );
}



bool FUN_00409d70(uchar *param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  uint uVar3;
  
  puVar1 = _mbstok(param_1,&DAT_00413008);
  puVar2 = _mbstok((uchar *)0x0,&DAT_00413008);
  if (puVar2 != (uchar *)0x0) {
    FUN_00403220(DAT_004133f4,0x409);
  }
  if (puVar1 == (uchar *)0x0) {
    FUN_00403220(DAT_004133f4,0x417);
  }
  uVar3 = FUN_00407b70(puVar1);
  return (bool)('\x01' - (uVar3 == 0));
}



bool FUN_00409de0(uchar *param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  int iVar3;
  char *local_4;
  
  puVar1 = _mbstok(param_1,&DAT_00413008);
  puVar2 = _mbstok((uchar *)0x0,&DAT_00413008);
  if (puVar2 != (uchar *)0x0) {
    FUN_00403220(DAT_004133f4,0x409);
  }
  if ((puVar1 == (uchar *)0x0) ||
     (local_4 = (char *)FUN_0040ca30((char *)puVar1), local_4 == (char *)0x0)) {
    FUN_00403220(DAT_004133f4,0x417);
  }
  iVar3 = _access(local_4,0);
  free(local_4);
  return iVar3 == 0;
}



undefined FUN_00409e80(uchar *param_1,undefined param_2)

{
  undefined uVar1;
  bool bVar2;
  undefined3 extraout_var;
  
  if (*param_1 == '\0') {
    FUN_00403220(DAT_004133f4,0x3fa);
  }
  switch(param_2) {
  case 4:
  case 6:
    bVar2 = FUN_00409d70(param_1);
    return bVar2;
  case 5:
  case 7:
    bVar2 = FUN_00409d70(param_1);
    return CONCAT31(extraout_var,bVar2) == 0;
  default:
    DAT_0040ea18 = param_1;
    uVar1 = FUN_00409be0();
    return uVar1;
  }
}



int * FUN_00409ef0(uchar *param_1,uchar *param_2,char *param_3)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uchar *puVar6;
  size_t sVar7;
  size_t sVar8;
  char *pcVar9;
  uchar *puVar10;
  uchar *puVar11;
  uchar *puVar12;
  undefined4 *puVar13;
  uchar *local_10;
  uchar *puStack_c;
  int *local_4;
  
  local_4 = DAT_00413a34;
  if (DAT_00413a34 != (int *)0x0) {
    do {
      local_10 = (uchar *)local_4[2];
      puStack_c = _mbsrchr(local_10,0x2e);
      iVar2 = FUN_0040c980((char *)puStack_c,param_3);
      if (iVar2 == 0) {
        puVar6 = local_10 + 1;
        *param_1 = '\0';
        uVar1 = *puVar6;
        while ((uVar1 != '\0' && (uVar1 = *puVar6, uVar1 != '{'))) {
          if (uVar1 == '^') {
            puVar6 = puVar6 + 1;
          }
          else if (uVar1 == '\"') {
            puVar6 = puVar6 + 1;
            uVar1 = *puVar6;
            while (uVar1 != '\"') {
              puVar6 = puVar6 + 1;
              uVar1 = *puVar6;
            }
          }
          puVar6 = puVar6 + 1;
          uVar1 = *puVar6;
        }
        puVar12 = puVar6;
        if (*puVar6 == '\0') {
LAB_0040a048:
          if (*local_10 == '{') {
            puVar6 = local_10 + 1;
            uVar1 = *puVar6;
            puVar12 = puVar6;
            while ((uVar1 != '\0' && (*puVar12 != '}'))) {
              if (*puVar12 == '^') {
                puVar12 = puVar12 + 1;
              }
              puVar12 = puVar12 + 1;
              uVar1 = *puVar12;
            }
            sVar7 = (int)puVar12 - (int)puVar6;
            if (sVar7 == 0) {
              sVar8 = 2;
              _mbsnbcpy(param_1,(uchar *)&DAT_004149b8,2);
              local_10 = local_10 + 2;
            }
            else {
              _mbsnbcpy(param_1,puVar6,sVar7);
              local_10 = puVar6 + sVar7 + 1;
              sVar8 = sVar7;
              if (local_10[-2] != '\\') {
                sVar8 = sVar7 + 1;
                param_1[sVar7] = '\\';
              }
            }
            puVar12 = _mbsrchr(param_2,0x5c);
            puVar6 = _mbsrchr(param_2,0x2f);
            if (puVar6 <= puVar12) {
              puVar6 = puVar12;
            }
            if (puVar6 == (uchar *)0x0) {
              uVar3 = 0xffffffff;
              puVar6 = param_2;
              do {
                puVar12 = puVar6;
                if (uVar3 == 0) break;
                uVar3 = uVar3 - 1;
                puVar12 = puVar6 + 1;
                uVar1 = *puVar6;
                puVar6 = puVar12;
              } while (uVar1 != '\0');
              uVar3 = ~uVar3;
              puVar5 = (undefined4 *)(puVar12 + -uVar3);
              puVar13 = (undefined4 *)(param_1 + sVar8);
              for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                *puVar13 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar13 = puVar13 + 1;
              }
              for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                *(undefined *)puVar13 = *(undefined *)puVar5;
                puVar5 = (undefined4 *)((int)puVar5 + 1);
                puVar13 = (undefined4 *)((int)puVar13 + 1);
              }
              pcVar9 = param_3 + (sVar8 - (int)param_2);
            }
            else {
              uVar3 = 0xffffffff;
              puVar12 = puVar6 + 1;
              do {
                puVar10 = puVar12;
                if (uVar3 == 0) break;
                uVar3 = uVar3 - 1;
                puVar10 = puVar12 + 1;
                uVar1 = *puVar12;
                puVar12 = puVar10;
              } while (uVar1 != '\0');
              uVar3 = ~uVar3;
              puVar5 = (undefined4 *)(puVar10 + -uVar3);
              puVar13 = (undefined4 *)(param_1 + sVar8);
              for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                *puVar13 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar13 = puVar13 + 1;
              }
              for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                *(undefined *)puVar13 = *(undefined *)puVar5;
                puVar5 = (undefined4 *)((int)puVar5 + 1);
                puVar13 = (undefined4 *)((int)puVar13 + 1);
              }
              pcVar9 = param_3 + sVar8 + (-1 - (int)puVar6);
            }
          }
          else {
            puVar12 = param_2;
            if (*puVar6 != '\0') {
              puVar12 = _mbsrchr(param_2,0x2e);
              uVar1 = *puVar12;
              while ((((uVar1 != ':' && (*puVar12 != '\\')) && (*puVar12 != '/')) &&
                     (param_2 < puVar12))) {
                puVar12 = puVar12 + -1;
                uVar1 = *puVar12;
              }
              uVar1 = *puVar12;
              if (((uVar1 == ':') || (uVar1 == '\\')) || (uVar1 == '/')) {
                puVar12 = puVar12 + 1;
              }
            }
            iVar2 = 0;
            if ((puVar12 != param_2) && (*param_2 == '\"')) {
              iVar2 = 1;
              *param_1 = '\"';
            }
            pcVar9 = (char *)(((int)param_3 - (int)puVar12) + iVar2);
            _mbsnbcpy(param_1 + iVar2,puVar12,(int)param_3 - (int)puVar12);
          }
          sVar7 = (int)puStack_c - (int)local_10;
          if (0x101 < (int)(pcVar9 + sVar7)) {
            FUN_00403220(0,0x434);
          }
          _mbsnbcpy(param_1 + (int)pcVar9,local_10,sVar7);
          if (*param_1 == '\"') {
            puVar6 = param_1 + sVar7;
            sVar7 = sVar7 + 1;
            puVar6[(int)pcVar9] = '\"';
          }
          (param_1 + sVar7)[(int)pcVar9] = '\0';
          puVar5 = FUN_0040aec0(param_1,0x80,0x413828,1);
          if (puVar5 != (undefined4 *)0x0) {
            FUN_00404cc0((byte **)&stack0x00000010,puVar5[3]);
            return local_4;
          }
          iVar2 = FUN_0040cbf0((char *)param_1,(int *)&stack0x00000010);
          if (iVar2 != 0) {
            return local_4;
          }
        }
        else {
          do {
            if (*puVar12 == '}') break;
            if (*puVar12 == '^') {
              puVar12 = puVar12 + 1;
            }
            puVar12 = puVar12 + 1;
          } while (*puVar12 != '\0');
          puVar10 = puVar12 + (-1 - (int)puVar6);
          puVar11 = param_2;
          if (*param_2 == '\"') {
            puVar11 = param_2 + 1;
          }
          puStack_c = puVar6;
          if (puVar10 != (uchar *)0x0) {
            do {
              puStack_c = puStack_c + 1;
              uVar1 = *puStack_c;
              if ((uVar1 == '\\') || (uVar1 == '/')) {
                if ((*puVar11 != '\\') && (*puVar11 != '/')) goto LAB_00409ff1;
              }
              else {
                uVar3 = _mbctoupper((int)(char)*puVar11);
                uVar4 = _mbctoupper((int)(char)uVar1);
                if (uVar3 != uVar4) {
LAB_00409ff1:
                  puVar10 = (uchar *)0xffffffff;
                  goto LAB_00409ff6;
                }
              }
              puVar10 = puVar10 + -1;
              puVar11 = puVar11 + 1;
            } while (puVar10 != (uchar *)0x0);
            puVar10 = (uchar *)0x0;
          }
LAB_00409ff6:
          if (puVar10 != (uchar *)0xffffffff) {
            puVar11 = param_2 + ((int)puVar12 - (int)puVar6);
            puVar10 = _mbschr(puVar11,0x5c);
            if (((puVar10 == (uchar *)0x0) &&
                (puVar10 = _mbschr(puVar11,0x2f), puStack_c = puVar6, puVar10 == (uchar *)0x0)) ||
               ((puVar10 == puVar11 &&
                ((puVar12[-1] != '\\' && (puStack_c = puVar6, puVar12[-1] != '/'))))))
            goto LAB_0040a048;
          }
        }
      }
      local_4 = (int *)*local_4;
    } while (local_4 != (int *)0x0);
  }
  return (int *)0x0;
}



void FUN_0040a2a0(int *param_1,int param_2)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    do {
      if ((param_2 != 0) && ((DAT_004133d4 & 1) != 0)) {
        FUN_00403220(0,0xfa5);
      }
      free((void *)param_1[2]);
      FUN_00402c40((int **)param_1[3]);
      FUN_00402c40((int **)param_1[4]);
      piVar1 = (int *)*param_1;
      free(param_1);
      param_1 = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return;
}



undefined4 FUN_0040a310(void *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 != (int *)0x0) {
    do {
      iVar2 = _mbsicmp((uchar *)param_2[2],*(uchar **)((int)param_1 + 8));
      if (iVar2 == 0) {
        free(*(void **)((int)param_1 + 8));
        piVar1 = *(int **)((int)param_1 + 0xc);
        while (piVar1 != (int *)0x0) {
          *(int *)((int)param_1 + 0xc) = *piVar1;
          free((void *)piVar1[1]);
          FUN_0040ada0(piVar1);
          piVar1 = *(int **)((int)param_1 + 0xc);
        }
        free(param_1);
        return 1;
      }
      param_2 = (int *)*param_2;
    } while (param_2 != (int *)0x0);
  }
  return 0;
}



char * FUN_0040a390(char *param_1)

{
  char *pcVar1;
  
  if (*param_1 == '{') {
    do {
      pcVar1 = param_1 + 1;
      if (*param_1 == '^') {
        pcVar1 = param_1 + 2;
      }
      param_1 = pcVar1;
    } while (*pcVar1 != '}');
    param_1 = pcVar1 + 1;
  }
  return param_1;
}



void FUN_0040a3c0(void)

{
  uchar uVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  int **ppiVar4;
  uchar *puVar5;
  int iVar6;
  uint uVar7;
  int local_10;
  int *local_c;
  uchar *local_8;
  int *local_4;
  
  local_c = DAT_00413a34;
  DAT_00413a34 = (int *)0x0;
  local_4 = DAT_00413a2c;
  local_10 = 0;
  if (DAT_00413a2c != (int *)0x0) {
    do {
      local_8 = (uchar *)local_4[1];
      uVar7 = 0xffffffff;
      puVar5 = local_8;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
      } while (uVar1 != '\0');
      ppiVar2 = (int **)local_c;
      while (ppiVar4 = ppiVar2, ppiVar4 != (int **)0x0) {
        puVar5 = (uchar *)FUN_0040a390((char *)ppiVar4[2]);
        iVar6 = _mbsnbicmp(local_8,puVar5,~uVar7 - 1);
        if ((iVar6 == 0) && ((puVar5[~uVar7 - 1] == '.' || (puVar5[~uVar7 - 1] == '{')))) {
          if (ppiVar4[1] == (int *)0x0) {
            local_c = *ppiVar4;
          }
          else {
            *ppiVar4[1] = (int)*ppiVar4;
          }
          if (*ppiVar4 != (int *)0x0) {
            *(int **)((int)*ppiVar4 + 4) = ppiVar4[1];
          }
          ppiVar2 = (int **)*ppiVar4;
          *ppiVar4 = (int *)0x0;
          iVar6 = FUN_0040a310(ppiVar4,DAT_00413a34);
          if (iVar6 == 0) {
            for (puVar3 = ppiVar4[3]; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3) {
              FUN_0040b110((int *)puVar3[1],&local_10,0);
            }
            ppiVar4[4] = (int *)local_10;
            local_10 = 0;
            FUN_0040ae30(&DAT_00413a34,(int *)ppiVar4);
          }
        }
        else {
          ppiVar2 = (int **)*ppiVar4;
        }
      }
      local_4 = (int *)*local_4;
    } while (local_4 != (int *)0x0);
  }
  if (local_c != (int *)0x0) {
    FUN_0040a2a0(local_c,1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_0040a500(int param_1,undefined4 *param_2,uint param_3,int **param_4,int **param_5,
                  int *param_6,uint *param_7,undefined4 *param_8)

{
  uchar *puVar1;
  int iVar2;
  int *piVar3;
  byte *local_10;
  int *local_c;
  int *local_8;
  
  local_10 = &stack0xffffffe4;
  FUN_0040ceb4();
  puVar1 = _mbsrchr(*(uchar **)(param_1 + 4),0x2e);
  if (puVar1 != (uchar *)0x0) {
    local_c = FUN_00409ef0((uchar *)param_2,*(uchar **)(param_1 + 4),(char *)puVar1);
    if (local_c != (int *)0x0) {
      local_8 = (int *)FUN_00404ca0(&local_10);
      *param_8 = param_2;
      piVar3 = *param_5;
      if (piVar3 != (int *)0x0) {
        do {
          iVar2 = _mbsicmp((uchar *)piVar3[1],(uchar *)param_2);
          if (iVar2 == 0) break;
          piVar3 = (int *)*piVar3;
        } while (piVar3 != (int *)0x0);
        if (piVar3 != (int *)0x0) {
          *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
        }
      }
      iVar2 = FUN_00402080(param_2,*(byte *)(param_1 + 8),&local_8,(int *)0x0);
      *param_6 = *param_6 + iVar2;
      if ((((*(byte *)(param_1 + 8) & 0x10) != 0) || (param_3 < local_8)) ||
         ((_DAT_004133b8 != 0 && ((int *)param_3 == local_8)))) {
        if (piVar3 == (int *)0x0) {
          piVar3 = (int *)FUN_0040ad20();
          iVar2 = FUN_0040add0(param_2);
          piVar3[1] = iVar2;
          FUN_0040ae30(param_4,piVar3);
          if (*param_5 == (int *)0x0) {
            *param_5 = *param_4;
          }
        }
        if (((*(byte *)(param_1 + 8) & 1) != 0) && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
          FUN_00403370(3);
        }
      }
      piVar3 = (int *)*param_7;
      if ((int *)*param_7 <= local_8) {
        piVar3 = local_8;
      }
      *param_7 = (uint)piVar3;
      return local_c;
    }
  }
  return (int *)0x0;
}



void FUN_0040a630(void)

{
  int iVar1;
  uint _Ch;
  
  _Ch = 0;
  do {
    iVar1 = _ismbcalnum(_Ch);
    if (iVar1 != 0) {
      (&DAT_004149c0)[_Ch & 0xff] = (&DAT_004149c0)[_Ch & 0xff] | 1;
    }
    _Ch = _Ch + 1;
  } while ((int)_Ch < 0x80);
  return;
}



byte * FUN_0040a660(int param_1)

{
  int _File;
  long _Offset;
  byte *pbVar1;
  int _Origin;
  
  if (DAT_00414ac0 != 0) {
    if (DAT_00414ac0 == -1) {
      return &DAT_00413060;
    }
LAB_0040a6a0:
    _File = DAT_00414ac0;
    _Origin = 0;
    _Offset = FUN_0040aa70(param_1);
    fseek((FILE *)_File,_Offset,_Origin);
    pbVar1 = FUN_0040a6f0(param_1,&DAT_0040ea28,0x400);
    return pbVar1;
  }
  if (DAT_00414ac4 != 0) {
    DAT_00414ac0 = (int)fopen((char *)DAT_00414ac4,&DAT_00413390);
    if ((FILE *)DAT_00414ac0 != (FILE *)0x0) {
      FUN_0040cf7b((_onexit_t)&LAB_0040a9f0);
      goto LAB_0040a6a0;
    }
  }
  DAT_00414ac0 = -1;
  return &DAT_00413060;
}



byte * FUN_0040a6f0(int param_1,char *param_2,int param_3)

{
  long lVar1;
  char *pcVar2;
  byte *pbVar3;
  int iStack_8;
  byte *pbStack_4;
  
  do {
    do {
      lVar1 = ftell(DAT_00414ac0);
      pcVar2 = fgets(param_2,param_3,DAT_00414ac0);
      if (pcVar2 == (char *)0x0) {
        return &DAT_00413060;
      }
      pbStack_4 = (byte *)FUN_0040a820(param_2,&iStack_8);
      if (param_1 == iStack_8) {
LAB_0040a785:
        FUN_0040aa20(lVar1,param_1);
        goto LAB_0040a78c;
      }
    } while (iStack_8 % 1000 != 999);
    if (param_1 == iStack_8) goto LAB_0040a785;
  } while (param_1 / -1000 != iStack_8 / -1000);
LAB_0040a78c:
  pbVar3 = FUN_0040a7a0(pbStack_4);
  return pbVar3;
}



byte * FUN_0040a7a0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  do {
    pbVar4 = param_1 + 1;
    bVar1 = *param_1;
    param_1 = pbVar4;
  } while (bVar1 != 0x22);
  bVar1 = *pbVar4;
  pbVar6 = pbVar4;
  pbVar3 = pbVar4;
  do {
    if (bVar1 == 0x22) {
      *pbVar3 = 0;
      return pbVar4;
    }
    iVar2 = __p__mbctype();
    if ((*(byte *)(*pbVar6 + 1 + iVar2) & 4) == 0) {
      pbVar5 = pbVar6;
      if (*pbVar6 == 0x5c) {
        bVar1 = pbVar6[1];
        pbVar5 = pbVar6 + 1;
        if (bVar1 == 0x6e) {
          *pbVar5 = 10;
        }
        else if (bVar1 == 0x74) {
          *pbVar5 = 9;
        }
        else {
          if (bVar1 != 0x22) {
            *pbVar3 = 0x5c;
            goto LAB_0040a7fa;
          }
          *pbVar5 = 0x22;
        }
      }
    }
    else {
      *pbVar3 = *pbVar6;
LAB_0040a7fa:
      pbVar3 = pbVar3 + 1;
      pbVar5 = pbVar6 + 1;
    }
    pbVar6 = pbVar5 + 1;
    *pbVar3 = *pbVar5;
    pbVar3 = pbVar3 + 1;
    bVar1 = *pbVar6;
  } while( true );
}



char * FUN_0040a820(char *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    piVar2 = (int *)__p___mb_cur_max();
    if (*piVar2 < 2) {
      piVar2 = (int *)__p__pctype();
      uVar3 = *(ushort *)(*piVar2 + *param_1 * 2) & 4;
    }
    else {
      uVar3 = _isctype((int)*param_1,4);
    }
    if (uVar3 == 0) break;
    iVar4 = *param_1 + -0x30 + iVar4 * 10;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  *param_2 = iVar4;
  return param_1;
}



undefined4 FUN_0040a890(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  char *_Format;
  char local_408 [4];
  char local_404 [256];
  char local_304 [256];
  char local_204 [256];
  char local_104 [260];
  
  if (param_3 == 0) {
    iVar1 = _access(param_1,0);
    if (iVar1 == 0) {
      DAT_00414ac4 = _strdup(param_1);
      return 0;
    }
  }
  else {
    _splitpath(param_2,local_408,local_204,(char *)0x0,(char *)0x0);
    _splitpath(param_1,(char *)0x0,(char *)0x0,local_404,local_304);
    _makepath(local_104,local_408,local_204,local_404,local_304);
    iVar1 = _access(local_104,0);
    if (iVar1 == 0) {
      DAT_00414ac4 = _strdup(local_104);
      return 0;
    }
    _makepath(local_104,(char *)0x0,(char *)0x0,local_404,local_304);
    iVar1 = _access(local_104,0);
    if (iVar1 == 0) {
      DAT_00414ac4 = _strdup(local_104);
      return 0;
    }
    _Format = s_WARNING__missing__s__displaying_e_00414b68;
    iVar1 = __p__iob(s_WARNING__missing__s__displaying_e_00414b68,param_1);
    fprintf((FILE *)(iVar1 + 0x40),_Format);
  }
  return 1;
}



void FUN_0040aa20(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_00414ac8;
  do {
    if (*piVar2 == 0) break;
    if (param_2 == *piVar2) {
      return;
    }
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + 1;
  } while (piVar2 < s_WARNING__missing__s__displaying_e_00414b68);
  if (iVar1 < 0x14) {
    (&DAT_00414ac8)[iVar1 * 2] = param_2;
    (&DAT_00414acc)[iVar1 * 2] = param_1;
  }
  return;
}



undefined4 FUN_0040aa70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = 0;
  iVar3 = -1;
  iVar6 = 0x7fff;
  do {
    iVar1 = (&DAT_00414ac8)[iVar2 * 2];
    iVar4 = iVar3;
    if (iVar1 == 0) break;
    iVar5 = param_1 - iVar1;
    iVar4 = iVar2;
    if (iVar5 == 0) break;
    if (((iVar5 != 0 && iVar1 <= param_1) && (iVar5 < iVar6)) && (iVar1 / -1000 == param_1 / -1000))
    {
      iVar3 = iVar2;
      iVar6 = iVar5;
    }
    iVar2 = iVar2 + 1;
    iVar4 = iVar3;
  } while (iVar2 < 0x14);
  if (iVar4 < 0) {
    return 0;
  }
  return (&DAT_00414acc)[iVar4 * 2];
}



char FUN_0040aaf0(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA(s_kernel32_dll_00414bb4);
  if (hModule == (HMODULE)0x0) {
    return '\0';
  }
  pFVar1 = GetProcAddress(hModule,s_IsTNT_00414bac);
  return '\x01' - (pFVar1 == (FARPROC)0x0);
}



char FUN_0040ab20(void)

{
  DWORD DVar1;
  
  DVar1 = GetVersion();
  if ((DVar1 & 0x80000000) != 0) {
    return '\x01' - ((byte)DVar1 < 4);
  }
  return '\0';
}



undefined4 FUN_0040ab40(char *param_1,undefined4 *param_2)

{
  int iVar1;
  HFILE hFile;
  LONG LVar2;
  UINT UVar3;
  undefined auStack_18e [2];
  LONG LStack_18c;
  _OFSTRUCT _Stack_188;
  char local_100 [256];
  
  _splitpath(param_1,(char *)0x0,(char *)0x0,(char *)0x0,local_100);
  iVar1 = _strnicmp(local_100,&DAT_00413fa0,3);
  if (iVar1 != 0) {
    hFile = OpenFile(param_1,&_Stack_188,0x40);
    if (hFile == -1) {
      *param_2 = 3;
      return 0;
    }
    _lread(hFile,auStack_18e,2);
    iVar1 = _memicmp(auStack_18e,&DAT_00414bc8,2);
    if (iVar1 != 0) {
      _lclose(hFile);
      *param_2 = 2;
      return 0;
    }
    LVar2 = _llseek(hFile,0x3c,0);
    if (LVar2 != 0x3c) {
      _lclose(hFile);
      *param_2 = 2;
      return 0;
    }
    UVar3 = _lread(hFile,&LStack_18c,4);
    if (UVar3 == 4) {
      LVar2 = _llseek(hFile,LStack_18c,0);
      if (LVar2 != LStack_18c) {
        _lclose(hFile);
        *param_2 = 2;
        return 0;
      }
      _lread(hFile,auStack_18e,4);
      iVar1 = _memicmp(auStack_18e,&DAT_00414bc4,2);
      if (iVar1 == 0) {
        _lclose(hFile);
        *param_2 = 0;
        return 1;
      }
    }
    _lclose(hFile);
  }
  *param_2 = 1;
  return 0;
}



void * FUN_0040acc0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if (pvVar1 == (void *)0x0) {
    FUN_00403220(DAT_00413424,0x41b);
  }
  return pvVar1;
}



undefined4 * FUN_0040acf0(uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_0040acc0(param_1);
  puVar3 = puVar1;
  for (uVar2 = param_1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = param_1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0040ad20(void)

{
  undefined4 *puVar1;
  
  if (DAT_0040ee28 == (undefined4 *)0x0) {
    if (_DAT_00414bdc < 8) {
      DAT_00414be0 = (undefined4 *)malloc(0x8000);
      if (DAT_00414be0 == (undefined4 *)0x0) {
        FUN_00403220(DAT_00413424,0x41b);
      }
      _DAT_00414bdc = 0x8000;
    }
    puVar1 = DAT_00414be0;
    _DAT_00414bdc = _DAT_00414bdc - 8;
    DAT_00414be0 = DAT_00414be0 + 2;
  }
  else {
    puVar1 = DAT_0040ee28;
    DAT_0040ee28 = (undefined4 *)*DAT_0040ee28;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  return;
}



void FUN_0040ada0(int *param_1)

{
  if (DAT_0040ee28 == (int *)0x0) {
    *param_1 = 0;
    DAT_0040ee28 = param_1;
    return;
  }
  *param_1 = (int)DAT_0040ee28;
  DAT_0040ee28 = param_1;
  return;
}



void FUN_0040add0(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0xffffffff;
  puVar2 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  puVar2 = (undefined4 *)FUN_0040acc0(uVar3);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined *)puVar2 = *(undefined *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return;
}



void FUN_0040ae10(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  *param_1 = param_2;
  return;
}



void FUN_0040ae30(int **param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *param_1;
  while (piVar1 != (int *)0x0) {
    param_1 = (int **)*param_1;
    piVar1 = *param_1;
  }
  *param_1 = param_2;
  return;
}



uint FUN_0040ae50(char *param_1,uint param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    uVar3 = 0;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      uVar3 = uVar3 + (int)*param_1;
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    }
  }
  else {
    uVar3 = 0;
    cVar1 = *param_1;
    while (uVar2 = (uint)cVar1, uVar2 != 0) {
      if (uVar2 == 0x2f) {
        uVar2 = 0x5c;
      }
      else {
        uVar2 = _mbctoupper(uVar2);
      }
      uVar3 = uVar3 + uVar2;
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    }
  }
  return uVar3 % param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * FUN_0040aec0(uchar *param_1,uint param_2,int param_3,int param_4)

{
  uchar uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 *_Memory;
  undefined4 *puVar7;
  uint uVar8;
  uchar *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uchar *puVar12;
  char *pcVar13;
  char *pcVar14;
  undefined4 *puVar15;
  
  bVar3 = false;
  if (*param_1 != '\0') {
    uVar4 = FUN_0040ae50((char *)param_1,param_2,param_4);
    if (param_4 != 0) {
      puVar5 = FUN_0040c8d0((char *)param_1,param_3,uVar4);
      if (puVar5 != (undefined4 *)0x0) {
        return puVar5;
      }
      iVar6 = _mbsnbcmp(param_1,(uchar *)&DAT_004149b8,2);
      if ((iVar6 == 0) || (iVar6 = _mbsnbcmp(param_1,&DAT_00414be8,2), iVar6 == 0)) {
        _Memory = (undefined2 *)(param_1 + 2);
      }
      else {
        uVar4 = 0xffffffff;
        puVar12 = param_1;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          uVar1 = *puVar12;
          puVar12 = puVar12 + 1;
        } while (uVar1 != '\0');
        _Memory = (undefined2 *)FUN_0040acc0(~uVar4 + 2);
        *_Memory = DAT_004149b8;
        uVar4 = 0xffffffff;
        *(char *)(_Memory + 1) = DAT_004149ba;
        puVar12 = param_1;
        do {
          puVar9 = puVar12;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          puVar9 = puVar12 + 1;
          uVar1 = *puVar12;
          puVar12 = puVar9;
        } while (uVar1 != '\0');
        uVar4 = ~uVar4;
        iVar6 = -1;
        puVar10 = _Memory;
        do {
          puVar11 = puVar10;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          puVar11 = (undefined2 *)((int)puVar10 + 1);
          cVar2 = *(char *)puVar10;
          puVar10 = puVar11;
        } while (cVar2 != '\0');
        puVar5 = (undefined4 *)(puVar9 + -uVar4);
        puVar7 = (undefined4 *)((int)puVar11 + -1);
        for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined *)puVar7 = *(undefined *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        bVar3 = true;
      }
      uVar4 = FUN_0040ae50((char *)_Memory,param_2,param_4);
      puVar5 = FUN_0040c8d0((char *)_Memory,param_3,uVar4);
      if (puVar5 != (undefined4 *)0x0) {
        if (bVar3) {
          free(_Memory);
        }
        return puVar5;
      }
      if ((int)param_1 - (int)_Memory != -2) {
        *(undefined *)((int)_Memory + 1) = 0x2f;
      }
      uVar4 = FUN_0040ae50((char *)_Memory,param_2,param_4);
      puVar5 = FUN_0040c8d0((char *)_Memory,param_3,uVar4);
      if (bVar3) {
        free(_Memory);
      }
      if (puVar5 != (undefined4 *)0x0) {
        return puVar5;
      }
      if (*param_1 == '\"') {
        puVar5 = (undefined4 *)FUN_0040ca30((char *)param_1);
      }
      else {
        uVar4 = 0xffffffff;
        puVar12 = param_1;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          uVar1 = *puVar12;
          puVar12 = puVar12 + 1;
        } while (uVar1 != '\0');
        puVar5 = FUN_0040acf0(~uVar4 + 2);
        uVar4 = 0xffffffff;
        *(undefined2 *)puVar5 = _DAT_00414be4;
        do {
          puVar12 = param_1;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          puVar12 = param_1 + 1;
          uVar1 = *param_1;
          param_1 = puVar12;
        } while (uVar1 != '\0');
        uVar4 = ~uVar4;
        iVar6 = -1;
        puVar7 = puVar5;
        do {
          puVar15 = puVar7;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          puVar15 = (undefined4 *)((int)puVar7 + 1);
          cVar2 = *(char *)puVar7;
          puVar7 = puVar15;
        } while (cVar2 != '\0');
        puVar7 = (undefined4 *)(puVar12 + -uVar4);
        puVar15 = (undefined4 *)((int)puVar15 + -1);
        for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar15 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar15 = puVar15 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined *)puVar15 = *(undefined *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
        uVar4 = 0xffffffff;
        pcVar13 = &DAT_00414be4;
        do {
          pcVar14 = pcVar13;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar14 = pcVar13 + 1;
          cVar2 = *pcVar13;
          pcVar13 = pcVar14;
        } while (cVar2 != '\0');
        uVar4 = ~uVar4;
        iVar6 = -1;
        puVar7 = puVar5;
        do {
          puVar15 = puVar7;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          puVar15 = (undefined4 *)((int)puVar7 + 1);
          cVar2 = *(char *)puVar7;
          puVar7 = puVar15;
        } while (cVar2 != '\0');
        puVar7 = (undefined4 *)(pcVar14 + -uVar4);
        puVar15 = (undefined4 *)((int)puVar15 + -1);
        for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar15 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar15 = puVar15 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined *)puVar15 = *(undefined *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
      }
      uVar4 = FUN_0040ae50((char *)puVar5,param_2,param_4);
      puVar7 = FUN_0040c8d0((char *)puVar5,param_3,uVar4);
      free(puVar5);
      return puVar7;
    }
    for (puVar5 = *(undefined4 **)(param_3 + uVar4 * 4); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)*puVar5) {
      iVar6 = _mbscmp((uchar *)puVar5[1],param_1);
      if (iVar6 == 0) {
        return (undefined4 *)(-(uint)((*(byte *)(puVar5 + 3) & 0x10) == 0) & (uint)puVar5);
      }
    }
  }
  return (undefined4 *)0x0;
}



undefined4 FUN_0040b110(int *param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  bool bVar3;
  uchar *puVar4;
  int **ppiVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int **ppiVar9;
  int **ppiVar10;
  byte *in_stack_00000114;
  int **in_stack_00000118;
  int **in_stack_0000011c;
  uchar *in_stack_00000120;
  int in_stack_00000124;
  int in_stack_00000128;
  byte in_stack_0000012c;
  
  FUN_0040ceb4();
  bVar3 = false;
  if (in_stack_00000118 == (int **)0x0) {
    ppiVar10 = (int **)0x0;
  }
  else if (in_stack_0000011c == (int **)0x0) {
    ppiVar10 = (int **)*in_stack_00000118;
    if (ppiVar10 != (int **)0x0) {
      piVar8 = *ppiVar10;
      while (piVar8 != (int *)0x0) {
        ppiVar10 = (int **)*ppiVar10;
        piVar8 = *ppiVar10;
      }
    }
  }
  else {
    ppiVar10 = (int **)*in_stack_0000011c;
  }
  if (*in_stack_00000114 != 0) {
    bVar1 = *in_stack_00000114;
    while (bVar1 != 0) {
      do {
        bVar1 = *in_stack_00000114;
        if (bVar1 == 0x24) break;
        if (bVar1 == 0x22) {
          bVar3 = !bVar3;
        }
        if (((!bVar3) && (bVar1 == 0x5e)) &&
           (in_stack_00000114 = in_stack_00000114 + 1, *in_stack_00000114 == 0x22)) {
          bVar3 = true;
        }
        in_stack_00000114 = _mbsinc(in_stack_00000114);
      } while (*in_stack_00000114 != 0);
      if (*in_stack_00000114 == 0) break;
      if (in_stack_00000114[1] == 0) {
        if ((in_stack_0000012c & 4) != 0) {
          if (in_stack_0000011c != (int **)0x0) {
            *in_stack_0000011c = (int *)ppiVar10;
          }
          return 0;
        }
        FUN_00403220(DAT_00413424,0x3ea);
      }
      in_stack_00000114 = _mbsinc(in_stack_00000114);
      if (((!bVar3) && (*in_stack_00000114 == 0x5e)) &&
         (in_stack_00000114 = _mbsinc(in_stack_00000114),
         ((&DAT_004149c0)[*in_stack_00000114] & 1) == 0)) {
        if ((in_stack_0000012c & 4) != 0) {
          if (in_stack_0000011c != (int **)0x0) {
            *in_stack_0000011c = (int *)ppiVar10;
          }
          return 0;
        }
        FUN_00403220(DAT_00413424,0x3e9);
      }
      bVar1 = *in_stack_00000114;
      if (bVar1 == 0x24) {
        in_stack_00000114 = (byte *)FUN_0040b5d0((char *)in_stack_00000114);
      }
      else if (bVar1 == 0x28) {
        in_stack_00000114 = (byte *)FUN_0040b520((char *)(in_stack_00000114 + 1),(char *)&param_3);
        puVar4 = _mbschr(&DAT_00414bcc,(int)(char)param_3);
        if (puVar4 == (uchar *)0x0) {
LAB_0040b2db:
          if (in_stack_00000118 == (int **)0x0) {
            param_1 = (int *)0x0;
            param_2 = FUN_0040add0((undefined4 *)&DAT_00414bec);
            ppiVar5 = &param_1;
          }
          else {
            ppiVar5 = (int **)FUN_0040ad20();
          }
          uVar6 = FUN_00407b70((uchar *)&param_3);
          if (uVar6 != 0) {
            if ((in_stack_00000120 == (uchar *)0x0) ||
               (iVar7 = _mbscmp(in_stack_00000120,(uchar *)&param_3), iVar7 != 0)) {
              if ((*(byte *)(uVar6 + 0xc) & 1) == 0) {
                ppiVar5[1] = *(int **)(*(int *)(uVar6 + 8) + 4);
              }
              else {
                if ((in_stack_0000012c & 4) != 0) {
                  if (in_stack_0000011c != (int **)0x0) {
                    *in_stack_0000011c = (int *)ppiVar10;
                  }
                  return 0;
                }
                FUN_00403220(DAT_00413424,0x42e);
              }
            }
            else {
              puVar2 = *(undefined4 **)(uVar6 + 8);
              for (iVar7 = in_stack_00000124; in_stack_00000128 != iVar7; iVar7 = iVar7 + -1) {
                if (puVar2 == (undefined4 *)0x0) goto LAB_0040b36f;
                puVar2 = (undefined4 *)*puVar2;
              }
              if (puVar2 == (undefined4 *)0x0) {
LAB_0040b36f:
                piVar8 = (int *)FUN_0040add0((undefined4 *)&DAT_00413060);
                ppiVar5[1] = piVar8;
              }
              else {
                ppiVar5[1] = (int *)puVar2[1];
              }
            }
          }
          if (in_stack_00000118 != (int **)0x0) {
            if ((uVar6 == 0) || ((*(byte *)(uVar6 + 0xc) & 0x10) != 0)) {
              piVar8 = (int *)FUN_0040add0((undefined4 *)&DAT_00413060);
              ppiVar5[1] = piVar8;
            }
            *ppiVar5 = (int *)0x0;
            ppiVar9 = in_stack_00000118;
            if (ppiVar10 != (int **)0x0) {
              ppiVar9 = ppiVar10;
            }
            *ppiVar9 = (int *)ppiVar5;
            ppiVar10 = ppiVar5;
          }
          if ((uVar6 != 0) && (puVar4 = _mbschr((uchar *)ppiVar5[1],0x24), puVar4 != (uchar *)0x0))
          {
            *(byte *)(uVar6 + 0xc) = *(byte *)(uVar6 + 0xc) | 1;
            if (in_stack_00000120 != (uchar *)0x0) {
              _mbscmp(in_stack_00000120,(uchar *)&param_3);
            }
            FUN_0040b110(ppiVar5[1],in_stack_00000118,(uint)&stack0x00000000);
            *(byte *)(uVar6 + 0xc) = *(byte *)(uVar6 + 0xc) & 0xfe;
          }
        }
      }
      else {
        puVar4 = _mbschr(&DAT_00414bcc,(int)(char)bVar1);
        if (puVar4 == (uchar *)0x0) {
          if (((&DAT_004149c0)[*in_stack_00000114] & 1) == 0) {
            if ((in_stack_0000012c & 4) != 0) {
              if (in_stack_0000011c != (int **)0x0) {
                *in_stack_0000011c = (int *)ppiVar10;
              }
              return 0;
            }
            FUN_00403220(DAT_00413424,0x3ea);
          }
          param_3 = CONCAT31((int3)(param_3 >> 8),*in_stack_00000114) & 0xffff00ff;
          goto LAB_0040b2db;
        }
      }
      in_stack_00000114 = in_stack_00000114 + 1;
      bVar1 = *in_stack_00000114;
    }
  }
  if (in_stack_0000011c != (int **)0x0) {
    *in_stack_0000011c = (int *)ppiVar10;
  }
  return 1;
}



char * FUN_0040b520(char *param_1,char *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  pcVar3 = param_2;
  while (((cVar2 != '\0' && (cVar2 = *param_1, cVar2 != ')')) && (cVar2 != ':'))) {
    if ((cVar2 == '^') &&
       (pbVar1 = (byte *)(param_1 + 1), param_1 = param_1 + 1, ((&DAT_004149c0)[*pbVar1] & 1) == 0))
    {
      FUN_00403220(DAT_00413424,0x3e9);
    }
    cVar2 = *param_1;
    param_1 = param_1 + 1;
    *pcVar3 = cVar2;
    pcVar3 = pcVar3 + 1;
    cVar2 = *param_1;
  }
  if (*param_1 != ')') {
    do {
      if (*param_1 == '^') {
        param_1 = param_1 + 1;
      }
    } while ((*param_1 != '\0') && (param_1 = param_1 + 1, *param_1 != ')'));
    if (*param_1 != ')') {
      FUN_00403220(DAT_00413424,1000);
    }
  }
  *pcVar3 = '\0';
  if (0x101 < (int)pcVar3 - (int)param_2) {
    FUN_00403220(DAT_00413424,0x434);
  }
  return param_1;
}



char * FUN_0040b5d0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uchar *puVar4;
  
  cVar2 = param_1[1];
  pcVar3 = param_1 + 1;
  if ((cVar2 != '^') && (pcVar3 = param_1, cVar2 == '(')) {
    pcVar1 = param_1 + 2;
    if (*pcVar1 == '^') {
      return pcVar1;
    }
    if (*pcVar1 != '@') {
      return pcVar1;
    }
    cVar2 = param_1[3];
    if (cVar2 == '^') {
      FUN_00403220(DAT_00413424,0x3e9);
    }
    else {
      if (cVar2 == ')') {
        return param_1 + 3;
      }
      puVar4 = _mbschr(&DAT_00414bd4,(int)cVar2);
      if (puVar4 != (uchar *)0x0) {
        if (param_1[4] == '^') {
          FUN_00403220(DAT_00413424,0x3e9);
          return param_1;
        }
        if (param_1[4] == ')') {
          return param_1 + 4;
        }
      }
    }
  }
  return pcVar3;
}



int * FUN_0040b690(int *param_1)

{
  int *piVar1;
  uchar *puVar2;
  int **local_4;
  
  local_4 = (int **)0x0;
  puVar2 = _mbschr((uchar *)param_1,0x24);
  if (puVar2 != (uchar *)0x0) {
    FUN_0040b110(param_1,&local_4,0);
    piVar1 = (int *)local_4;
    param_1 = FUN_0040b700((uchar *)param_1,(int **)&local_4);
    local_4 = (int **)piVar1;
    while (local_4 != (int **)0x0) {
      piVar1 = *local_4;
      FUN_0040ada0((int *)local_4);
      local_4 = (int **)piVar1;
    }
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x0040b8fa)

undefined4 * FUN_0040b700(uchar *param_1,int **param_2)

{
  uchar *puVar1;
  uchar uVar2;
  int **ppiVar3;
  bool bVar4;
  bool bVar5;
  int **ppiVar6;
  uchar *puVar7;
  uchar *puVar8;
  int *_Memory;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *local_410;
  undefined4 *local_408;
  size_t local_404;
  undefined4 local_400 [256];
  
  ppiVar6 = param_2;
  local_404 = 0x400;
  local_410 = local_400;
  bVar4 = false;
  bVar5 = false;
  uVar2 = *param_1;
  local_408 = local_410;
  while (uVar2 != '\0') {
    uVar2 = *param_1;
    while ((uVar2 != '\0' && (*param_1 != '$'))) {
      if ((undefined4 *)&stack0x00000000 == local_410) {
        FUN_0040bb00(&local_408,(int *)&local_410,(int *)&stack0xfffffbf4,&local_404,local_400);
      }
      if (*param_1 == '\"') {
        bVar4 = !bVar4;
      }
      if ((!bVar4) && (*param_1 == '^')) {
        *(undefined *)local_410 = 0x5e;
        local_410 = (undefined4 *)((int)local_410 + 1);
        param_1 = param_1 + 1;
        if (*param_1 == '\"') {
          bVar4 = true;
        }
      }
      *(uchar *)local_410 = *param_1;
      param_1 = param_1 + 1;
      local_410 = (undefined4 *)((int)local_410 + 1);
      uVar2 = *param_1;
    }
    if ((undefined4 *)&stack0x00000000 == local_410) {
      FUN_0040bb00(&local_408,(int *)&local_410,(int *)&stack0xfffffbf4,&local_404,local_400);
    }
    puVar8 = param_1;
    if (*param_1 == '\0') break;
    puVar1 = param_1 + 1;
    if ((*puVar1 == '(') &&
       (puVar7 = _mbschr(&DAT_00414bcc,(int)(char)param_1[2]), puVar7 != (uchar *)0x0)) {
      FUN_0040bb90(&local_408,&param_1,(uchar **)&local_410,(uchar **)&stack0xfffffbf4,&local_404,3,
                   local_400);
    }
    else {
      puVar7 = puVar8 + 2;
      if (*puVar1 == '$') {
        uVar2 = *puVar7;
        if (uVar2 == '^') {
          FUN_0040bb90(&local_408,&param_1,(uchar **)&local_410,(uchar **)&stack0xfffffbf4,
                       &local_404,5,local_400);
        }
        else if (uVar2 == '@') {
          FUN_0040bb90(&local_408,&param_1,(uchar **)&local_410,(uchar **)&stack0xfffffbf4,
                       &local_404,2,local_400);
        }
        else {
          if (uVar2 == '(') {
            puVar7 = puVar8 + 3;
          }
          uVar2 = puVar7[1];
          if (((((uVar2 == 'F') || (uVar2 == 'D')) || (uVar2 == 'B')) || (uVar2 == 'R')) &&
             (puVar7[2] == ')')) {
            FUN_0040bb90(&local_408,&param_1,(uchar **)&local_410,(uchar **)&stack0xfffffbf4,
                         &local_404,4,local_400);
          }
          else {
            FUN_0040bb90(&local_408,&param_1,(uchar **)&local_410,(uchar **)&stack0xfffffbf4,
                         &local_404,5,local_400);
          }
        }
      }
      else {
        puVar8 = _mbschr(&DAT_00414bcc,(int)(char)param_1[1]);
        if (puVar8 == (uchar *)0x0) {
          if (*ppiVar6 == (int *)0x0) {
            FUN_00403220(DAT_00413424,0x410);
          }
          puVar8 = _mbschr((uchar *)(*ppiVar6)[1],0x24);
          ppiVar3 = (int **)*ppiVar6;
          if (puVar8 == (uchar *)0x0) {
            _Memory = ppiVar3[1];
            *ppiVar6 = *ppiVar3;
          }
          else {
            bVar5 = true;
            *ppiVar6 = *ppiVar3;
            _Memory = FUN_0040b700((uchar *)ppiVar3[1],ppiVar6);
          }
          FUN_0040c060(&local_408,&param_1,(uchar **)&local_410,(uchar **)&stack0xfffffbf4,
                       (uchar *)_Memory,&local_404,local_400);
          if (bVar5) {
            bVar5 = false;
            free(_Memory);
          }
        }
        else {
          FUN_0040bb90(&local_408,&param_1,(uchar **)&local_410,(uchar **)&stack0xfffffbf4,
                       &local_404,1,local_400);
        }
      }
    }
    uVar2 = *param_1;
  }
  if ((undefined4 *)&stack0x00000000 == local_410) {
    FUN_0040bb00(&local_408,(int *)&local_410,(int *)&stack0xfffffbf4,&local_404,local_400);
  }
  *(undefined *)local_410 = 0;
  local_410 = (undefined4 *)((int)local_410 + 1);
  puVar9 = (undefined4 *)FUN_0040acc0((int)local_410 - (int)local_408);
  if (puVar9 == (undefined4 *)0x0) {
    FUN_00403220(DAT_00413424,0x419);
  }
  puVar11 = local_408;
  puVar12 = puVar9;
  for (uVar10 = (uint)((int)local_410 - (int)local_408) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  for (uVar10 = (int)local_410 - (int)local_408 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined *)puVar12 = *(undefined *)puVar11;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  }
  return puVar9;
}



void FUN_0040bb00(void **param_1,int *param_2,int *param_3,size_t *param_4,void *param_5)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  size_t _NewSize;
  undefined4 *puVar6;
  
  if (*param_1 == param_5) {
    puVar1 = (undefined4 *)FUN_0040acc0(*param_4);
    uVar4 = *param_4;
    puVar5 = (undefined4 *)*param_1;
    puVar6 = puVar1;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined *)puVar6 = *(undefined *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *param_1 = puVar1;
  }
  _NewSize = *param_4 + 0x400;
  pvVar2 = realloc(*param_1,_NewSize);
  *param_1 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    FUN_00403220(DAT_00413424,0x419);
  }
  *param_2 = *param_4 + (int)*param_1;
  *param_4 = _NewSize;
  *param_3 = (int)*param_1 + _NewSize;
  return;
}



void FUN_0040bb90(void **param_1,uchar **param_2,uchar **param_3,uchar **param_4,size_t *param_5,
                 undefined4 param_6,void *param_7)

{
  uchar uVar1;
  char cVar2;
  int **ppiVar3;
  bool bVar4;
  int *piVar5;
  int **ppiVar6;
  uchar *puVar7;
  int iVar8;
  int **local_118;
  int **local_114;
  int **local_110;
  int local_10c;
  size_t local_108;
  int *local_104 [65];
  
  bVar4 = false;
  iVar8 = 1;
  local_118 = (int **)0x0;
  local_10c = 0;
  local_108 = 0;
  switch(param_6) {
  case 3:
    local_10c = 1;
    iVar8 = 2;
  case 1:
    switch((*param_2)[iVar8]) {
    case '*':
      if ((*param_2 + iVar8)[1] == '*') {
        bVar4 = true;
        local_118 = DAT_00413a98;
        iVar8 = iVar8 + 2;
      }
      else {
        iVar8 = iVar8 + 1;
        local_108 = 1;
        local_118 = DAT_00413a8c;
      }
      break;
    case '<':
      iVar8 = iVar8 + 1;
      local_118 = DAT_00413a88;
      break;
    case '?':
      local_118 = DAT_00413a94;
      bVar4 = true;
      iVar8 = iVar8 + 1;
      break;
    case '@':
      local_118 = DAT_00413a90;
    default:
      iVar8 = iVar8 + 1;
    }
    break;
  case 4:
    local_10c = 1;
    iVar8 = 4;
  case 2:
    local_118 = DAT_00413a84;
    break;
  case 5:
    if (*param_4 == *param_3) {
      FUN_0040bb00(param_1,(int *)param_3,(int *)param_4,param_5,param_7);
    }
    **param_3 = '$';
    *param_3 = *param_3 + 1;
    *param_2 = *param_2 + 2;
  default:
    goto switchD_0040bbbe_caseD_5;
  }
  if (local_118 == (int **)0x0) {
    puVar7 = *param_2;
    uVar1 = *puVar7;
    while (((uVar1 != '\0' && (*puVar7 != ' ')) && (*puVar7 != '\t'))) {
      puVar7 = puVar7 + 1;
      uVar1 = *puVar7;
    }
    uVar1 = *puVar7;
    *puVar7 = '\0';
    FUN_00403220(DAT_00413424,0xfa6);
    *puVar7 = uVar1;
    bVar4 = false;
    local_118 = (int **)FUN_0040add0((undefined4 *)&DAT_00413060);
  }
  ppiVar3 = local_118;
  if (bVar4) {
    local_108 = 0x400;
    local_118 = (int **)FUN_0040acf0(0x400);
    local_114 = local_118 + 0x100;
    local_110 = local_118;
    for (; ppiVar6 = local_110, ppiVar3 != (int **)0x0; ppiVar3 = (int **)*ppiVar3) {
      piVar5 = ppiVar3[1];
      if (local_10c != 0) {
        piVar5 = FUN_0040bf30((*param_2)[iVar8],local_104,(char *)piVar5);
      }
      cVar2 = *(char *)piVar5;
      while (cVar2 != '\0') {
        if (local_118 == local_114) {
          FUN_0040bb00(&local_110,(int *)&local_118,(int *)&local_114,&local_108,(void *)0x0);
        }
        cVar2 = *(char *)piVar5;
        piVar5 = (int *)((int)piVar5 + 1);
        *(char *)local_118 = cVar2;
        local_118 = (int **)((int)local_118 + 1);
        cVar2 = *(char *)piVar5;
      }
      if (local_118 == local_114) {
        FUN_0040bb00(&local_110,(int *)&local_118,(int *)&local_114,&local_108,(void *)0x0);
      }
      *(char *)local_118 = '\0';
      if (*ppiVar3 != (int *)0x0) {
        *(char *)local_118 = ' ';
        local_118 = (int **)((int)local_118 + 1);
        if (local_118 == local_114) {
          FUN_0040bb00(&local_110,(int *)&local_118,(int *)&local_114,&local_108,(void *)0x0);
        }
        *(char *)local_118 = '\0';
      }
    }
  }
  else {
    if (local_108 != 0) {
      local_118 = (int **)FUN_0040bf30(0x52,local_104,(char *)local_118);
    }
    ppiVar6 = local_118;
    if (local_10c != 0) {
      ppiVar6 = (int **)FUN_0040bf30((*param_2)[iVar8],local_104,(char *)local_118);
    }
  }
  local_118 = ppiVar6;
  FUN_0040c060(param_1,param_2,param_3,param_4,(uchar *)local_118,param_5,param_7);
  if (((local_118 != DAT_00413a90) && (DAT_00413a84 != local_118)) &&
     ((DAT_00413a88 != local_118 &&
      ((local_118 < local_104 || ((int **)((int)local_104 + 0x101U) <= local_118)))))) {
    free(local_118);
  }
switchD_0040bbbe_caseD_5:
  return;
}



undefined4 * FUN_0040bf30(undefined param_1,undefined4 *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  
  uVar4 = 0xffffffff;
  puVar8 = (undefined4 *)0x0;
  do {
    pcVar9 = param_3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  puVar6 = (undefined4 *)(pcVar9 + -uVar4);
  puVar7 = param_2;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined *)puVar7 = *(undefined *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  cVar1 = *(char *)param_2;
  uVar4 = 0xffffffff;
  puVar6 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *(char *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  } while (cVar2 != '\0');
  for (puVar6 = (undefined4 *)((~uVar4 - 2) + (int)param_2);
      ((puVar7 = (undefined4 *)0x0, param_2 <= puVar6 &&
       (cVar2 = *(char *)puVar6, puVar7 = puVar6, cVar2 != '\\')) && (cVar2 != '/'));
      puVar6 = (undefined4 *)((int)puVar6 + -1)) {
    if ((cVar2 == '.') && (puVar8 == (undefined4 *)0x0)) {
      puVar8 = puVar6;
    }
  }
  switch(param_1) {
  case 0x42:
    if (puVar8 != (undefined4 *)0x0) {
      *(char *)puVar8 = '\0';
    }
  case 0x46:
    if (puVar7 == (undefined4 *)0x0) {
      if (*(char *)((int)param_2 + 1) == ':') {
        param_2 = (undefined4 *)((int)param_2 + 2);
      }
    }
    else {
      param_2 = (undefined4 *)((int)puVar7 + 1);
    }
    break;
  case 0x44:
    if (puVar7 == (undefined4 *)0x0) {
      if (*(char *)((int)param_2 + 1) == ':') {
        *(undefined *)((int)param_2 + 2) = 0;
      }
      else {
        *(undefined2 *)param_2 = DAT_00413fe0;
      }
    }
    else {
      if ((*(char *)((int)param_2 + 1) == ':') && ((int)param_2 - (int)puVar7 == -2)) {
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(char *)puVar7 = '\0';
    }
    break;
  case 0x52:
    if (puVar8 != (undefined4 *)0x0) {
      *(char *)puVar8 = '\0';
    }
  }
  if (cVar1 == '\"') {
    puVar3 = _mbschr((uchar *)param_2,0);
    *puVar3 = '\"';
    puVar3[1] = '\0';
  }
  return param_2;
}



void FUN_0040c060(void **param_1,uchar **param_2,uchar **param_3,uchar **param_4,uchar *param_5,
                 size_t *param_6,void *param_7)

{
  uchar uVar1;
  uchar uVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puStack_4;
  
  puVar4 = *param_2;
  puVar3 = puVar4 + 1;
  *param_2 = puVar3;
  if (*puVar3 == '^') {
    *param_2 = puVar4 + 2;
  }
  puStack_4 = _mbschr(*param_2,0x3a);
  puVar4 = *param_2;
  uVar1 = *puVar4;
  uVar2 = uVar1;
  while ((uVar2 != '\0' && (*puVar4 != ')'))) {
    if (*puVar4 == '^') {
      puVar4 = puVar4 + 1;
    }
    puVar4 = puVar4 + 1;
    uVar2 = *puVar4;
  }
  if (((uVar1 == '(') && (puStack_4 != (uchar *)0x0)) && (puStack_4 < puVar4)) {
    FUN_0040c170(param_1,(char **)&puStack_4,param_3,param_4,param_5,param_6,param_7);
    *param_2 = puStack_4;
    return;
  }
  uVar1 = *param_5;
  while (uVar1 != '\0') {
    if (*param_4 == *param_3) {
      FUN_0040bb00(param_1,(int *)param_3,(int *)param_4,param_6,param_7);
    }
    uVar1 = *param_5;
    param_5 = param_5 + 1;
    **param_3 = uVar1;
    *param_3 = *param_3 + 1;
    uVar1 = *param_5;
  }
  if (**param_2 == '$') {
    *param_2 = *param_2 + 1;
  }
  uVar1 = **param_2;
  if (uVar1 == '(') {
    do {
      puVar4 = *param_2;
      *param_2 = puVar4 + 1;
    } while (puVar4[1] != ')');
  }
  else if ((uVar1 == '*') && (puVar4 = *param_2 + 1, *puVar4 == '*')) {
    *param_2 = puVar4;
  }
  *param_2 = *param_2 + 1;
  return;
}



void FUN_0040c170(void **param_1,char **param_2,uchar **param_3,uchar **param_4,uchar *param_5,
                 size_t *param_6,void *param_7)

{
  char cVar1;
  uchar uVar2;
  undefined4 *_Str2;
  undefined4 *_Memory;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  pcVar8 = *param_2 + 1;
  *param_2 = pcVar8;
  cVar1 = *pcVar8;
  while ((cVar1 != '\0' && (*pcVar8 != '='))) {
    if (*pcVar8 == '^') {
      pcVar8 = pcVar8 + 1;
    }
    pcVar8 = pcVar8 + 1;
    cVar1 = *pcVar8;
  }
  if (*pcVar8 != '=') {
    FUN_00403220(DAT_004133f4,0x3eb);
  }
  if (*param_2 == pcVar8) {
    FUN_00403220(DAT_004133f4,0x3ed);
  }
  cVar1 = *pcVar8;
  pcVar6 = pcVar8;
  while ((cVar1 != '\0' && (*pcVar6 != ')'))) {
    if (*pcVar6 == '^') {
      pcVar6 = pcVar6 + 1;
    }
    pcVar6 = pcVar6 + 1;
    cVar1 = *pcVar6;
  }
  if (*pcVar6 != ')') {
    FUN_00403220(DAT_004133f4,1000);
  }
  _Str2 = FUN_0040acf0((uint)(pcVar8 + (1 - (int)*param_2)));
  pcVar7 = *param_2;
  cVar1 = *pcVar7;
  puVar4 = _Str2;
  while (cVar1 != '=') {
    if (*pcVar7 == '^') {
      pcVar7 = pcVar7 + 1;
    }
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    *(char *)puVar4 = cVar1;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    cVar1 = *pcVar7;
  }
  *(char *)puVar4 = '\0';
  uVar5 = 0xffffffff;
  puVar4 = _Str2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + 1;
  _Memory = FUN_0040acf0((int)pcVar6 - (int)pcVar8);
  cVar1 = *pcVar7;
  puVar4 = _Memory;
  while (cVar1 != ')') {
    if (*pcVar7 == '^') {
      pcVar7 = pcVar7 + 1;
    }
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    *(char *)puVar4 = cVar1;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    cVar1 = *pcVar7;
  }
  *(char *)puVar4 = '\0';
  *param_2 = pcVar6 + 1;
  uVar2 = *param_5;
  while (uVar2 != '\0') {
    if ((*(uchar *)_Str2 == *param_5) &&
       (iVar3 = _mbsnbcmp(param_5,(uchar *)_Str2,~uVar5 - 1), iVar3 == 0)) {
      cVar1 = *(char *)_Memory;
      puVar4 = _Memory;
      while (cVar1 != '\0') {
        if (*param_4 == *param_3) {
          FUN_0040bb00(param_1,(int *)param_3,(int *)param_4,param_6,param_7);
        }
        uVar2 = *(uchar *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        **param_3 = uVar2;
        *param_3 = *param_3 + 1;
        cVar1 = *(char *)puVar4;
      }
      param_5 = param_5 + (~uVar5 - 1);
    }
    else {
      if (*param_4 == *param_3) {
        FUN_0040bb00(param_1,(int *)param_3,(int *)param_4,param_6,param_7);
      }
      uVar2 = *param_5;
      param_5 = param_5 + 1;
      **param_3 = uVar2;
      *param_3 = *param_3 + 1;
    }
    uVar2 = *param_5;
  }
  free(_Str2);
  free(_Memory);
  return;
}



void FUN_0040c340(char *param_1,char *param_2)

{
  char local_208 [4];
  char local_204 [256];
  undefined4 auStack_104 [65];
  
  _splitpath(param_1,local_208,local_204,(char *)0x0,(char *)0x0);
  _makepath((char *)auStack_104,local_208,local_204,param_2,(char *)0x0);
  FUN_0040add0(auStack_104);
  return;
}



undefined4 FUN_0040c3a0(char *param_1)

{
  char *pcVar1;
  uchar *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  uchar *puVar5;
  
  uVar3 = 0;
  if ((*param_1 == '{') && (param_1 = param_1 + 1, *param_1 != '\0')) {
    do {
      if (*param_1 == '}') break;
      if (*param_1 == '^') {
        param_1 = param_1 + 1;
      }
      param_1 = param_1 + 1;
    } while (*param_1 != '\0');
    if (*param_1 != '\0') {
      param_1 = param_1 + 1;
    }
  }
  pcVar4 = param_1;
  if (*param_1 == '.') {
    do {
      pcVar1 = param_1;
      if (*pcVar4 == '{') break;
      if (*pcVar4 == '^') {
        pcVar4 = pcVar4 + 1;
      }
      pcVar4 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    for (; ((pcVar1 < pcVar4 && (*pcVar1 != '\\')) && (*pcVar1 != '/')); pcVar1 = pcVar1 + 1) {
    }
    if ((*pcVar4 == '\0') || (pcVar4 != pcVar1)) {
      puVar2 = _mbspbrk((uchar *)(param_1 + 1),&DAT_00414bf0);
      if ((puVar2 != (uchar *)0x0) && (*puVar2 == '.')) {
        puVar2 = puVar2 + 1;
        puVar5 = _mbschr(puVar2,0x2f);
        if ((puVar5 == (uchar *)0x0) && (puVar5 = _mbschr(puVar2,0x5c), puVar5 == (uchar *)0x0)) {
          puVar2 = _mbschr(puVar2,0x2e);
          if (puVar2 != (uchar *)0x0) {
            FUN_00403220(DAT_00413424,0x444);
            return 0;
          }
          uVar3 = 1;
        }
      }
    }
    else {
      pcVar4 = pcVar4 + 1;
      if (*pcVar4 != '\0') {
        do {
          if (*pcVar4 == '}') break;
          if (*pcVar4 == '^') {
            pcVar4 = pcVar4 + 1;
          }
          pcVar4 = pcVar4 + 1;
        } while (*pcVar4 != '\0');
        if ((*pcVar4 != '\0') && (pcVar4[1] == '.')) {
          puVar5 = (uchar *)(pcVar4 + 2);
          puVar2 = _mbschr(puVar5,0x2f);
          if ((puVar2 == (uchar *)0x0) && (puVar2 = _mbschr(puVar5,0x5c), puVar2 == (uchar *)0x0)) {
            puVar2 = _mbschr(puVar5,0x2e);
            if (puVar2 != (uchar *)0x0) {
              FUN_00403220(DAT_00413424,0x444);
              return 0;
            }
            return 1;
          }
        }
      }
    }
  }
  return uVar3;
}



undefined4 FUN_0040c510(char *param_1,int param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 local_104;
  char local_100 [256];
  
  pcVar1 = param_1 + param_2;
  cVar2 = *param_3;
joined_r0x0040c533:
  if (cVar2 == '\0') {
    if (param_1 < pcVar1) {
      uVar7 = 0;
      *param_1 = '\0';
    }
    else {
LAB_0040c731:
      uVar7 = 1;
    }
    return uVar7;
  }
  if (pcVar1 <= param_1) goto LAB_0040c731;
  if (cVar2 == '%') {
    cVar2 = param_3[1];
    pcVar10 = param_3 + 1;
    if (cVar2 == '%') {
      *param_1 = '%';
      param_1 = param_1 + 1;
    }
    else {
      if (cVar2 == 's') {
        cVar2 = *param_4;
        pcVar9 = param_4;
        for (; (cVar2 != '\0' && (param_1 < pcVar1)); param_1 = param_1 + 1) {
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          *param_1 = cVar2;
          cVar2 = *pcVar9;
        }
        goto LAB_0040c71a;
      }
      if (cVar2 == '|') {
        bVar4 = false;
        bVar6 = false;
        bVar5 = false;
        local_104 = 0;
        bVar3 = false;
        local_100[0] = '\0';
        pcVar9 = pcVar10;
        do {
          pcVar10 = pcVar9 + 1;
          switch(pcVar9[1]) {
          case 'F':
            if (*pcVar9 == '|') {
              bVar4 = true;
              local_104 = 1;
              bVar5 = true;
              bVar6 = true;
            }
            break;
          default:
            bVar3 = true;
            break;
          case 'd':
            bVar4 = true;
            break;
          case 'e':
            bVar6 = true;
            break;
          case 'f':
            bVar5 = true;
            break;
          case 'p':
            local_104 = 1;
          }
          if (bVar3) goto joined_r0x0040c63c;
          pcVar9 = pcVar10;
        } while (*pcVar10 != 'F');
        if (param_4 == (char *)0x0) {
          FUN_00403220(0,0x449);
        }
        if (bVar4) {
          FUN_0040c7d0(param_4,local_100);
        }
        if (local_104 != 0) {
          uVar8 = 0xffffffff;
          pcVar9 = local_100;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          FUN_0040c890(param_4,local_100 + (~uVar8 - 1));
        }
        if (bVar5) {
          uVar8 = 0xffffffff;
          pcVar9 = local_100;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          FUN_0040c850(param_4,local_100 + (~uVar8 - 1));
        }
        if (bVar6) {
          uVar8 = 0xffffffff;
          pcVar9 = local_100;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          FUN_0040c810(param_4,local_100 + (~uVar8 - 1));
        }
        pcVar9 = local_100;
        for (; (local_100[0] != '\0' && (param_1 < pcVar1)); param_1 = param_1 + 1) {
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          *param_1 = cVar2;
          local_100[0] = *pcVar9;
        }
      }
      else {
        *param_1 = '%';
        if (pcVar1 == param_1 + 1) goto LAB_0040c731;
        param_1[1] = *pcVar10;
        param_1 = param_1 + 2;
      }
    }
  }
  else {
    *param_1 = cVar2;
    param_1 = param_1 + 1;
    pcVar10 = param_3;
  }
LAB_0040c71a:
  cVar2 = pcVar10[1];
  param_3 = pcVar10 + 1;
  goto joined_r0x0040c533;
joined_r0x0040c63c:
  for (; (param_3 <= pcVar10 && (param_1 < pcVar1)); param_1 = param_1 + 1) {
    cVar2 = *param_3;
    param_3 = param_3 + 1;
    *param_1 = cVar2;
  }
  goto LAB_0040c71a;
}



void FUN_0040c790(char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0040c510(param_1,0x800,param_2,param_3);
  if (iVar1 != 0) {
    FUN_00403220(0,0x447);
  }
  return;
}



bool FUN_0040c7d0(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  _splitpath(param_1,param_2,(char *)0x0,(char *)0x0,(char *)0x0);
  iVar2 = -1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return iVar2 != -2;
}



bool FUN_0040c810(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  _splitpath(param_1,(char *)0x0,(char *)0x0,(char *)0x0,param_2);
  iVar2 = -1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return iVar2 != -2;
}



bool FUN_0040c850(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  _splitpath(param_1,(char *)0x0,(char *)0x0,param_2,(char *)0x0);
  iVar2 = -1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return iVar2 != -2;
}



bool FUN_0040c890(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  _splitpath(param_1,(char *)0x0,param_2,(char *)0x0,(char *)0x0);
  iVar2 = -1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return iVar2 != -2;
}



undefined4 * FUN_0040c8d0(char *param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  puVar3 = *(undefined4 **)(param_2 + param_3 * 4);
  do {
    if (puVar3 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    pcVar7 = (char *)puVar3[1];
    pcVar6 = param_1;
    if (*param_1 == '\0') {
LAB_0040c944:
      if (*pcVar7 == '\0') {
        return puVar3;
      }
    }
    else {
      do {
        cVar1 = *pcVar7;
        if (cVar1 == '\0') break;
        cVar2 = *pcVar6;
        if ((cVar2 == '\\') || (cVar2 == '/')) {
          if ((cVar1 != '\\') && (cVar1 != '/')) break;
        }
        else {
          uVar4 = _mbctoupper((int)cVar1);
          uVar5 = _mbctoupper((int)cVar2);
          if (uVar4 != uVar5) break;
        }
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar6 != '\0');
      if (*pcVar6 == '\0') goto LAB_0040c944;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}



void FUN_0040c980(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uchar *local_8;
  
  iVar2 = -1;
  pcVar3 = &stack0xffffffec;
  local_8 = &stack0xffffffec;
  pcVar4 = &stack0xffffffec;
  pcVar5 = param_1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_0040ceb4();
  iVar2 = -1;
  pcVar5 = param_2;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_0040ceb4();
  if (*param_1 == '\"') {
    param_1 = param_1 + 1;
  }
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
    cVar1 = *param_1;
  }
  if (pcVar3[-1] == '\"') {
    pcVar3 = pcVar3 + -1;
  }
  *pcVar3 = '\0';
  if (*param_2 == '\"') {
    param_2 = param_2 + 1;
  }
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
    cVar1 = *param_2;
  }
  if (pcVar4[-1] == '\"') {
    pcVar4 = pcVar4 + -1;
  }
  *pcVar4 = '\0';
  _mbsicmp(local_8,&stack0xffffffec);
  return;
}



void FUN_0040ca30(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = 0xffffffff;
  pcVar2 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_0040acc0(~uVar3);
  if (*param_1 == '\"') {
    param_1 = param_1 + 1;
  }
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    cVar1 = *param_1;
  }
  if (pcVar2[-1] == '\"') {
    pcVar2 = pcVar2 + -1;
  }
  *pcVar2 = '\0';
  return;
}



void FUN_0040ca80(undefined4 *param_1,char *param_2)

{
  char cVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  
  if (*(char *)param_1 == '\"') {
    puVar2 = _mbsrchr((uchar *)param_1,0x22);
    uVar3 = 0xffffffff;
    *puVar2 = '\0';
    pcVar6 = (char *)((int)param_1 + 1);
    do {
      pcVar7 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    puVar5 = (undefined4 *)(pcVar7 + -uVar3);
    puVar8 = param_1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined *)puVar8 = *(undefined *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  _fsopen((char *)param_1,param_2,0x20);
  return;
}



void FUN_0040cae0(byte *param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  
  pbVar2 = param_1;
  if (*param_1 != 0) {
    while( true ) {
      iVar1 = __p__mbctype();
      iVar1 = 2 - (uint)((*(byte *)(*pbVar2 + 1 + iVar1) & 4) == 0);
      if (param_2 < pbVar2 + (iVar1 - (int)param_1)) break;
      pbVar2 = pbVar2 + iVar1;
      if (*pbVar2 == 0) {
        return;
      }
    }
    *pbVar2 = 0;
  }
  return;
}



int FUN_0040cb30(uchar *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  intptr_t local_10;
  int local_c;
  undefined *local_8;
  
  local_8 = &stack0xffffffe4;
  FUN_0040ceb4();
  pcVar1 = (char *)FUN_0040cd20(param_1,(int *)&local_8,&local_10);
  if (pcVar1 == (char *)0x0) {
    return 0;
  }
  local_c = FUN_0040ad20();
  uVar2 = FUN_0040c340((char *)param_1,pcVar1);
  *(undefined4 *)(local_c + 4) = uVar2;
  while( true ) {
    FUN_00404c90((int *)&local_8);
    pcVar1 = (char *)FUN_0040ce00((int *)&local_8,local_10);
    if (pcVar1 == (char *)0x0) break;
    puVar3 = (undefined4 *)FUN_0040ad20();
    uVar2 = FUN_0040c340((char *)param_1,pcVar1);
    puVar3[1] = uVar2;
    FUN_0040ae10(&local_c,puVar3);
  }
  return local_c;
}



void FUN_0040cbd0(int param_1)

{
  _chdrive(param_1);
  return;
}



int FUN_0040cbf0(char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if ((*param_1 == '\"') && (param_1[~uVar3 - 2] == '\"')) {
    param_1 = (char *)FUN_0040ca30(param_1);
  }
  iVar2 = _findfirst(param_1,*param_2);
  if (iVar2 == -1) {
    return 0;
  }
  _findclose(iVar2);
  iVar2 = FUN_00404c90(param_2);
  return iVar2;
}



void FUN_0040cc50(char *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  char local_304 [4];
  byte local_300 [256];
  byte local_200 [256];
  char local_100 [256];
  
  _splitpath(param_1,local_304,local_100,(char *)local_300,(char *)local_200);
  uVar4 = 0xffffffff;
  pbVar5 = local_300;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar1 != 0);
  bVar2 = DAT_00413ed8 < (byte *)(~uVar4 - 1);
  if (bVar2) {
    FUN_0040cae0(local_300,DAT_00413ed8);
  }
  uVar4 = 0xffffffff;
  pbVar5 = local_200;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar1 != 0);
  bVar3 = DAT_00413ed4 < (byte *)(~uVar4 - 1);
  if (bVar3) {
    FUN_0040cae0(local_200,DAT_00413ed4);
  }
  if (bVar3 || bVar2) {
    _makepath(param_1,local_304,local_100,(char *)local_300,(char *)local_200);
  }
  return;
}



int FUN_0040cd20(uchar *param_1,int *param_2,intptr_t *param_3)

{
  uchar uVar1;
  uchar *puVar2;
  uchar *puVar3;
  int iVar4;
  uint uVar5;
  uchar auStack_104 [260];
  
  puVar2 = _mbspbrk(param_1,&DAT_00414bf4);
  if (puVar2 != (uchar *)0x0) {
    uVar5 = 0xffffffff;
    puVar3 = param_1;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (uVar1 != '\0');
    if ((*param_1 == '\"') && (param_1[~uVar5 - 2] == '\"')) {
      param_1 = (uchar *)FUN_0040ca30((char *)param_1);
    }
    puVar3 = auStack_104;
    uVar1 = *param_1;
    while (uVar1 != '\0') {
      if (*param_1 == '^') {
        param_1 = param_1 + 1;
      }
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
      uVar1 = *param_1;
    }
    param_1 = auStack_104;
    *puVar3 = '\0';
  }
  FUN_0040cc50((char *)param_1);
  iVar4 = _findfirst(param_1,*param_2);
  *param_3 = iVar4;
  if (iVar4 == -1) {
    iVar4 = 0;
  }
  else {
    if ((puVar2 == (uchar *)0x0) ||
       ((puVar2 = _mbschr(param_1,0x2a), puVar2 == (uchar *)0x0 &&
        (puVar2 = _mbschr(param_1,0x3f), puVar2 == (uchar *)0x0)))) {
      _findclose(*param_3);
    }
    iVar4 = *param_2 + 0x14;
  }
  return iVar4;
}



int FUN_0040ce00(int *param_1,intptr_t param_2)

{
  int iVar1;
  
  iVar1 = _findnext(param_2,*param_1);
  if (iVar1 != 0) {
    _findclose(param_2);
    return 0;
  }
  iVar1 = FUN_00404c90(param_1);
  return iVar1;
}



undefined4 * FUN_0040ce40(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char local_104 [260];
  
  pcVar2 = _getcwd(local_104,0x101);
  uVar4 = 0xffffffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  puVar3 = (undefined4 *)FUN_0040acc0(~uVar4);
  uVar4 = 0xffffffff;
  pcVar2 = local_104;
  do {
    pcVar7 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  puVar6 = (undefined4 *)(pcVar7 + -uVar4);
  puVar8 = puVar3;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined *)puVar8 = *(undefined *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  return puVar3;
}



time_t FUN_0040cea0(time_t *param_1)

{
  time_t tVar1;
  
  tVar1 = time(param_1);
  return tVar1;
}



void FUN_0040ceb4(void)

{
  uint in_EAX;
  undefined4 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar1 = (undefined4 *)&stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x400;
    *puVar1 = *puVar1;
  }
  *(undefined4 *)((int)puVar1 - in_EAX) = *(undefined4 *)((int)puVar1 - in_EAX);
                    // WARNING: Could not recover jumptable at 0x0040cedf. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_0040cee1(_onexit_t param_1)

{
  DWORD DVar1;
  
  if (DAT_00414bfc == 0) {
    DVar1 = GetVersion();
    if (((DVar1 & 0xff) == 3) && ((DVar1 & 0x80000000) != 0)) {
      DAT_00414bfc = DAT_00414bfc + 1;
    }
    else {
      DAT_00414bfc = DAT_00414bfc + -1;
    }
  }
  if (0 < DAT_00414bfc) {
    while (0 < DAT_00414c00) {
      Sleep(0);
    }
    DAT_00414c00 = DAT_00414c00 + 1;
  }
  if (_DAT_00411b18 == -1) {
    _onexit(param_1);
  }
  else {
    __dllonexit(param_1,&DAT_00411b18,&DAT_00411b14);
  }
  if (0 < DAT_00414bfc) {
    DAT_00414c00 = DAT_00414c00 + -1;
  }
  return;
}



int __cdecl FUN_0040cf7b(_onexit_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040cee1(param_1);
  return -(uint)(iVar1 == 0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int _Code;
  int unaff_EDI;
  undefined4 *unaff_FS_OFFSET;
  char **local_2c;
  int local_28;
  char **local_24 [2];
  undefined *local_1c;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  uStack_14 = *unaff_FS_OFFSET;
  puStack_c = &DAT_00412000;
  puStack_10 = &DAT_0040d0c2;
  *unaff_FS_OFFSET = &uStack_14;
  local_1c = &stack0xffffffb8;
  local_8 = 0;
  DAT_00411b14 = 0xffffffff;
  _DAT_00411b18 = 0xffffffff;
  puVar1 = (undefined4 *)__p__fmode();
  *puVar1 = DAT_00414c10;
  puVar1 = (undefined4 *)__p__commode();
  *puVar1 = DAT_00414c0c;
  FUN_0040d0c1();
  FUN_0040d0ae();
  _initterm(&DAT_00414c1c,&DAT_00414c20);
  __getmainargs(&local_28,&local_2c,local_24,DAT_00414c04,DAT_00414c08);
  _initterm(&DAT_00414c14,&DAT_00414c18);
  piVar2 = (int *)__p___initenv();
  *piVar2 = (int)local_24[0];
  _Code = FUN_00407c30(local_28,local_2c,(int)local_24[0],unaff_EDI);
                    // WARNING: Subroutine does not return
  exit(_Code);
}



void __dllonexit(void)

{
                    // WARNING: Could not recover jumptable at 0x0040d09c. Too many branches
                    // WARNING: Treating indirect jump as call
  __dllonexit();
  return;
}



int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040d0a2. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x0040d0a8. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void FUN_0040d0ae(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



void FUN_0040d0c1(void)

{
  return;
}



uint __cdecl _controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040d0c8. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = _controlfp(_NewValue,_Mask);
  return uVar1;
}




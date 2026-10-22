// ==== public int HPCKHLLBFPL(EDALCEKLAEJ FHOFNGHGNGF) { }   @0xb1a6e4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DJKGLJOCFCE__HPCKHLLBFPL(void *__this,int FHOFNGHGNGF)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  lVar3 = *(long *)((long)__this + 0x48);
  if (lVar3 == 0) {
LAB_00c1a748:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  iVar1 = *(int *)(lVar3 + 0x18);
  if (iVar1 < 1) {
    iVar2 = 0;
  }
  else {
    iVar4 = 0;
    iVar2 = 0;
    do {
      if (iVar1 == iVar4) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      lVar5 = *(long *)(lVar3 + (long)iVar4 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_00c1a748;
      if (*(int *)(lVar5 + 0x10) == FHOFNGHGNGF) {
        iVar2 = *(int *)(lVar5 + 0x14);
      }
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  return iVar2;
}


// ==== public void PIGJGOGBEPF(EDALCEKLAEJ FHOFNGHGNGF, int BEPBGMKPPJK) { }   @0xb1a8ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DJKGLJOCFCE__PIGJGOGBEPF(void *__this,int FHOFNGHGNGF,int BEPBGMKPPJK)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  int iStack_38;
  undefined4 uStack_24;
  
  if ((bRam0000000001916fe1 & 1) == 0) {
    func_0x00a67900(&EDALCEKLAEJ_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str_SetTaskValue_error__);
    bRam0000000001916fe1 = 1;
  }
  if (0 < BEPBGMKPPJK) {
    iVar2 = DJKGLJOCFCE__HPCKHLLBFPL(__this,FHOFNGHGNGF);
    if (iVar2 < BEPBGMKPPJK) {
      lVar5 = *(long *)((long)__this + 0x48);
      if (lVar5 == 0) {
LAB_00c1aa84:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      iVar2 = *(int *)(lVar5 + 0x18);
      if (0 < iVar2) {
        iVar6 = 0;
        do {
          if (iVar2 == iVar6) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar7 = *(long *)(lVar5 + (long)iVar6 * 8 + 0x20);
          if (lVar7 == 0) goto LAB_00c1aa84;
          if (*(int *)(lVar7 + 0x10) == FHOFNGHGNGF) {
            *(int *)(lVar7 + 0x14) = BEPBGMKPPJK;
            uVar4 = DJKGLJOCFCE__CNLCNMMMOFD(__this,FHOFNGHGNGF);
            uVar1 = *(undefined4 *)(lVar7 + 0x14);
            if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
            }
            if ((bRam000000000191673e & 1) == 0) {
              func_0x00a67900(&Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___,
                              uVar1,0);
              func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
              bRam000000000191673e = 1;
            }
            if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptKey(uVar4);
            uStack_24 = uVar1;
            uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptValue___Il2CppFullySharedGenericType_
                              (uVar4,&uStack_24,
                               _Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___
                              );
            UnityEngine_PlayerPrefs__SetString(uVar3,uVar4,0);
            return;
          }
          iVar6 = iVar6 + 1;
        } while (iVar2 != iVar6);
      }
      uStack_48 = _EDALCEKLAEJ_TypeInfo;
      uStack_40 = 0xffffffffffffffff;
      iStack_38 = FHOFNGHGNGF;
      uVar4 = System_Enum__ToString(&uStack_48,0);
      uVar4 = System_String__Concat(_Str_SetTaskValue_error__,uVar4,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      Main__EEKNCFLMGDP(uVar4,0);
    }
  }
  return;
}


// ==== private string NJNIFJANINE() { }   @0xb1ab70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DJKGLJOCFCE__NJNIFJANINE(void *__this)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  bool bVar4;
  void *pvVar5;
  
  if ((bRam0000000001916fe5 & 1) == 0) {
    func_0x00a67900(&Str_e);
    bRam0000000001916fe5 = 1;
  }
  pvVar2 = (void *)DJKGLJOCFCE__POOODOJHMMJ(__this);
  pvVar5 = _Str_e;
  if ((bRam00000000019178db & 1) == 0) {
    func_0x00a67900(&string_TypeInfo,_Str_e,0);
    bRam00000000019178db = 1;
  }
  if ((pvVar2 == (void *)0x0) || (*(int *)((long)pvVar2 + 0x10) == 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((pvVar5 == (void *)0x0) || (*(int *)((long)pvVar5 + 0x10) == 0)) {
    pvVar5 = pvVar2;
    if (bVar4) {
      pvVar5 = (void *)**(undefined8 **)(_string_TypeInfo + 0xb8);
    }
  }
  else if (!bVar4) {
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    iVar1 = *(int *)((long)pvVar2 + 0x10);
    pvVar3 = (void *)func_0x00ad4750(*(int *)((long)pvVar5 + 0x10) + iVar1);
    System_String__FillStringChecked(pvVar3,0,pvVar2);
    System_String__FillStringChecked(pvVar3,iVar1,pvVar5);
    pvVar5 = pvVar3;
  }
  return pvVar5;
}


// ==== public void FCGMALHHOJK(int ALLBGCHDGNC) { }   @0xb1adb8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DJKGLJOCFCE__FCGMALHHOJK(void *__this,int ALLBGCHDGNC)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam0000000001916fea & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001916fea = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_68,ALLBGCHDGNC,0);
  uStack_40 = uStack_58;
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  *(undefined4 *)((long)__this + 0x38) = uStack_58;
  *(undefined8 *)((long)__this + 0x30) = uStack_60;
  *(undefined8 *)((long)__this + 0x28) = uStack_68;
  uVar2 = DJKGLJOCFCE__OEOONPINEJA(__this);
  uStack_78 = *(undefined8 *)((long)__this + 0x30);
  uStack_80 = *(undefined8 *)((long)__this + 0x28);
  uStack_70 = *(undefined4 *)((long)__this + 0x38);
  uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_80,0);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar2,uVar1,0);
  return;
}


// ==== public void MHHDNMHEMKH(int ALLBGCHDGNC) { }   @0xb1ae94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DJKGLJOCFCE__MHHDNMHEMKH(void *__this,int ALLBGCHDGNC)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam0000000001916fed & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001916fed = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_68,ALLBGCHDGNC,0);
  uStack_40 = uStack_58;
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  *(undefined4 *)((long)__this + 0x24) = uStack_58;
  *(undefined8 *)((long)__this + 0x1c) = uStack_60;
  *(undefined8 *)((long)__this + 0x14) = uStack_68;
  uVar2 = DJKGLJOCFCE__POOODOJHMMJ(__this);
  uStack_78 = *(undefined8 *)((long)__this + 0x1c);
  uStack_80 = *(undefined8 *)((long)__this + 0x14);
  uStack_70 = *(undefined4 *)((long)__this + 0x24);
  uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_80,0);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar2,uVar1,0);
  return;
}



// ==== public int DLEPICFCEEG() { }   @0xb1a130

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DJKGLJOCFCE__DLEPICFCEEG(void *__this)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_20 = *(undefined4 *)((long)__this + 0x38);
  uStack_28 = *(undefined8 *)((long)__this + 0x30);
  uStack_30 = *(undefined8 *)((long)__this + 0x28);
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_30,0);
  return iVar1;
}


// ==== public void PHPLFEHCLJH(int ALLBGCHDGNC) { }   @0xb1a74c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DJKGLJOCFCE__PHPLFEHCLJH(void *__this,int ALLBGCHDGNC)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined4 uStack_24;
  
  if ((bRam0000000001916fde & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001916fde = 1;
  }
  *(int *)((long)__this + 0x3c) = ALLBGCHDGNC;
  pvVar4 = DJKGLJOCFCE__DLOKHEPHLGI(__this);
  uVar1 = *(undefined4 *)((long)__this + 0x3c);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  if ((bRam000000000191673e & 1) == 0) {
    func_0x00a67900(&Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___,uVar1,0);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam000000000191673e = 1;
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptKey(pvVar4);
  uStack_24 = uVar1;
  uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptValue___Il2CppFullySharedGenericType_
                    (pvVar4,&uStack_24,
                     _Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___);
  UnityEngine_PlayerPrefs__SetString(uVar2,uVar3,0);
  return;
}


// ==== public int EECPDELFCIL() { }   @0xb1ab04

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DJKGLJOCFCE__EECPDELFCIL(void *__this)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int aiStack_28 [2];
  
  if ((bRam0000000001916fe2 & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001916fe2 = 1;
  }
  uVar4 = DJKGLJOCFCE__NJNIFJANINE(__this);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  if ((bRam000000000191673f & 1) == 0) {
    func_0x00a67900(&Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_DecryptValue_int___,0,0);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam000000000191673f = 1;
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptKey(uVar4);
  uVar3 = UnityEngine_PlayerPrefs__HasKey(uVar2,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = UnityEngine_PlayerPrefs__HasKey(uVar4,0);
    if ((uVar3 & 1) != 0) {
      iVar1 = UnityEngine_PlayerPrefs__GetInt(uVar4,0,0);
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      }
      if (*(char *)(*(long *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xb8) + 0x38) !=
          '\0') {
        return iVar1;
      }
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      }
      CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar4,iVar1);
      UnityEngine_PlayerPrefs__DeleteKey(uVar4,0);
      return iVar1;
    }
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    CodeStage_AntiCheat_Storage_ObscuredPrefs__MigrateFromACTkV1Internal
              (uVar4,*(undefined8 *)
                      (*(long *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xb8) + 0x10)
              );
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  aiStack_28[1] = 0;
  CodeStage_AntiCheat_Storage_ObscuredPrefs__DecryptValue___Il2CppFullySharedGenericType_
            (uVar4,uVar2,aiStack_28 + 1,0,aiStack_28,
             _Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_DecryptValue_int___);
  return aiStack_28[0];
}


// ==== public string DLOKHEPHLGI() { }   @0xb1a7cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DJKGLJOCFCE__DLOKHEPHLGI(void *__this)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  bool bVar4;
  void *pvVar5;
  
  if ((bRam0000000001916fe6 & 1) == 0) {
    func_0x00a67900(&Str_a);
    bRam0000000001916fe6 = 1;
  }
  pvVar2 = (void *)DJKGLJOCFCE__POOODOJHMMJ(__this);
  pvVar5 = _Str_a;
  if ((bRam00000000019178db & 1) == 0) {
    func_0x00a67900(&string_TypeInfo,_Str_a,0);
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


// ==== public string KACBPKKHMLH() { }   @0xb1ad68

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DJKGLJOCFCE__KACBPKKHMLH(void *__this)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  bool bVar4;
  void *pvVar5;
  
  if ((bRam0000000001916feb & 1) == 0) {
    func_0x00a67900(&Str_cc);
    bRam0000000001916feb = 1;
  }
  pvVar2 = (void *)DJKGLJOCFCE__POOODOJHMMJ(__this);
  pvVar5 = _Str_cc;
  if ((bRam00000000019178db & 1) == 0) {
    func_0x00a67900(&string_TypeInfo,_Str_cc,0);
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



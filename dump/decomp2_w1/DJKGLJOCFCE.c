// ==== public string OEOONPINEJA() { }   @0xb1a160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DJKGLJOCFCE__OEOONPINEJA(void *__this)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  bool bVar4;
  void *pvVar5;
  
  if ((bRam0000000001916fdd & 1) == 0) {
    func_0x00a67900(&Str_t);
    bRam0000000001916fdd = 1;
  }
  pvVar2 = (void *)DJKGLJOCFCE__POOODOJHMMJ(__this);
  pvVar5 = _Str_t;
  if ((bRam00000000019178db & 1) == 0) {
    func_0x00a67900(&string_TypeInfo,_Str_t,0);
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


// ==== public bool EDAGFIGCPAE() { }   @0xb1a81c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool DJKGLJOCFCE__EDAGFIGCPAE(void *__this)

{
  int iVar1;
  void *pvVar2;
  
  if ((bRam0000000001916fdf & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001916fdf = 1;
  }
  pvVar2 = DJKGLJOCFCE__BKFGIBHDOPJ(__this);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  iVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(pvVar2,0,0);
  return iVar1 == 1;
}


// ==== private string BKFGIBHDOPJ() { }   @0xb1a894

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DJKGLJOCFCE__BKFGIBHDOPJ(void *__this)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  bool bVar4;
  void *pvVar5;
  
  if ((bRam0000000001916fe3 & 1) == 0) {
    func_0x00a67900(&Str_er);
    bRam0000000001916fe3 = 1;
  }
  pvVar2 = (void *)DJKGLJOCFCE__POOODOJHMMJ(__this);
  pvVar5 = _Str_er;
  if ((bRam00000000019178db & 1) == 0) {
    func_0x00a67900(&string_TypeInfo,_Str_er,0);
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


// ==== public void GEBLPKOKIDF(bool ALLBGCHDGNC) { }   @0xb1ac70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DJKGLJOCFCE__GEBLPKOKIDF(void *__this,bool ALLBGCHDGNC)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  uint uStack_24;
  
  if ((bRam0000000001916fe7 & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001916fe7 = 1;
  }
  pvVar3 = DJKGLJOCFCE__BKFGIBHDOPJ(__this);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  if ((bRam000000000191673e & 1) == 0) {
    func_0x00a67900(&Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___,
                    ALLBGCHDGNC,0);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam000000000191673e = 1;
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptKey(pvVar3);
  uStack_24 = (uint)ALLBGCHDGNC;
  uVar2 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptValue___Il2CppFullySharedGenericType_
                    (pvVar3,&uStack_24,
                     _Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___);
  UnityEngine_PlayerPrefs__SetString(uVar1,uVar2,0);
  return;
}


// ==== public string CNLCNMMMOFD(EDALCEKLAEJ GMDNJGNAAFG) { }   @0xb1aa88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DJKGLJOCFCE__CNLCNMMMOFD(void *__this,int GMDNJGNAAFG)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  int iStack_24;
  
  if ((bRam0000000001916fec & 1) == 0) {
    func_0x00a67900(&Str_t);
    bRam0000000001916fec = 1;
  }
  uVar1 = DJKGLJOCFCE__POOODOJHMMJ(__this);
  iStack_24 = GMDNJGNAAFG;
  uVar2 = System_Int32__ToString(&iStack_24,0);
  pvVar3 = (void *)System_String__Concat(uVar1,_Str_t,uVar2,0);
  return pvVar3;
}



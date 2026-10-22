// ==== public int NIDLADCDMOH() { }   @0xb1a220

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DJKGLJOCFCE__NIDLADCDMOH(void *__this)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_20 = *(undefined4 *)((long)__this + 0x24);
  uStack_28 = *(undefined8 *)((long)__this + 0x1c);
  uStack_30 = *(undefined8 *)((long)__this + 0x14);
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_30,0);
  return iVar1;
}


// ==== public string POOODOJHMMJ() { }   @0xb1a1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DJKGLJOCFCE__POOODOJHMMJ(void *__this)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined4 uStack_24;
  
  if ((bRam0000000001916fe0 & 1) == 0) {
    func_0x00a67900(&Str_l);
    bRam0000000001916fe0 = 1;
  }
  uStack_24 = *(undefined4 *)((long)__this + 0x10);
  uVar1 = System_Int32__ToString(&uStack_24,0);
  pvVar2 = (void *)System_String__Concat(_Str_l,uVar1,0);
  return pvVar2;
}


// ==== public void OKJBPIKMAPJ(int ALLBGCHDGNC) { }   @0xb1abc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DJKGLJOCFCE__OKJBPIKMAPJ(void *__this,int ALLBGCHDGNC)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iStack_24;
  
  if ((bRam0000000001916fe4 & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001916fe4 = 1;
  }
  uVar2 = DJKGLJOCFCE__NJNIFJANINE(__this);
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
  uVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptKey(uVar2);
  iStack_24 = ALLBGCHDGNC;
  uVar2 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptValue___Il2CppFullySharedGenericType_
                    (uVar2,&iStack_24,
                     _Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___);
  UnityEngine_PlayerPrefs__SetString(uVar1,uVar2,0);
  return;
}


// ==== public void JLPGAJDGPGG(int ALLBGCHDGNC) { }   @0xb1ace8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DJKGLJOCFCE__JLPGAJDGPGG(void *__this,int ALLBGCHDGNC)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uStack_24;
  
  if ((bRam0000000001916fe8 & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001916fe8 = 1;
  }
  *(int *)((long)__this + 0x40) = ALLBGCHDGNC;
  uVar3 = DJKGLJOCFCE__KACBPKKHMLH(__this);
  uVar1 = *(undefined4 *)((long)__this + 0x40);
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
  uVar2 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptKey(uVar3);
  uStack_24 = uVar1;
  uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptValue___Il2CppFullySharedGenericType_
                    (uVar3,&uStack_24,
                     _Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___);
  UnityEngine_PlayerPrefs__SetString(uVar2,uVar3,0);
  return;
}


// ==== public int HLMOBDGNAKK() { }   @0xb1ae84

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DJKGLJOCFCE__HLMOBDGNAKK(void *__this)

{
  return *(int *)((long)__this + 0x10);
}



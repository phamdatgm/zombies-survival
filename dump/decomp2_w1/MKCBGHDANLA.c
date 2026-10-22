// ==== public string NDCGHMCJLPF(int EIGKFINFICB) { }   @0xb4a5a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * MKCBGHDANLA__NDCGHMCJLPF(void *__this,int EIGKFINFICB)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  int iStack_24;
  
  iStack_24 = EIGKFINFICB;
  if ((bRam0000000001917160 & 1) == 0) {
    func_0x00a67900(&Str_c);
    func_0x00a67900(&Str__cb);
    bRam0000000001917160 = 1;
  }
  uVar1 = System_Int32__ToString((long)__this + 0x10,0);
  uVar2 = System_Int32__ToString(&iStack_24,0);
  pvVar3 = (void *)System_String__Concat(_Str_c,uVar1,_Str__cb,uVar2,0);
  return pvVar3;
}


// ==== public void ACDFKIBBJGP(MGACAOGOMPM FHOFNGHGNGF) { }   @0xb4ada4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA__ACDFKIBBJGP(void *__this,int FHOFNGHGNGF)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  int iStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int iStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam0000000001917164 & 1) == 0) {
    func_0x00a67900(&MGACAOGOMPM_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str____);
    func_0x00a67900(&Str_RemoveUpgrade__);
    bRam0000000001917164 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  lVar4 = *(long *)((long)__this + 0x40);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_d8,0,0);
  uStack_78 = uStack_d0;
  uStack_80 = uStack_d8;
  iStack_70 = iStack_c8;
  if (lVar4 != 0) {
    uStack_98 = uStack_d0;
    uStack_a0 = uStack_d8;
    iStack_90 = iStack_c8;
    if ((uint)FHOFNGHGNGF < *(uint *)(lVar4 + 0x18)) {
      lVar5 = (long)FHOFNGHGNGF;
      lVar4 = lVar4 + lVar5 * 0x14;
      *(int *)(lVar4 + 0x30) = iStack_c8;
      *(undefined8 *)(lVar4 + 0x28) = uStack_d0;
      *(undefined8 *)(lVar4 + 0x20) = uStack_d8;
      uVar2 = MKCBGHDANLA__FKDNILOCFBC(__this,FHOFNGHGNGF);
      lVar4 = *(long *)((long)__this + 0x40);
      if (lVar4 == 0) goto LAB_00c4afc4;
      if ((uint)FHOFNGHGNGF < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + lVar5 * 0x14;
        uStack_b0 = *(undefined4 *)(lVar4 + 0x30);
        uStack_b8 = *(undefined8 *)(lVar4 + 0x28);
        uStack_c0 = *(undefined8 *)(lVar4 + 0x20);
        uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_c0,0);
        if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
        }
        CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar2,uVar1,0);
        uStack_d8 = _MGACAOGOMPM_TypeInfo;
        uStack_d0 = 0xffffffffffffffff;
        iStack_c8 = FHOFNGHGNGF;
        uVar2 = System_Enum__ToString(&uStack_d8,0);
        lVar4 = *(long *)((long)__this + 0x40);
        if (lVar4 == 0) goto LAB_00c4afc4;
        if ((uint)FHOFNGHGNGF < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + lVar5 * 0x14;
          uStack_50 = *(undefined4 *)(lVar4 + 0x30);
          uStack_58 = *(undefined8 *)(lVar4 + 0x28);
          uStack_60 = *(undefined8 *)(lVar4 + 0x20);
          uVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(&uStack_60,0);
          uVar2 = System_String__Concat(_Str_RemoveUpgrade__,uVar2,_Str____,uVar3,0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Main_TypeInfo);
          }
          Main__GEMDEAMAGPG(uVar2,0,0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
LAB_00c4afc4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void DDPLLMLFICC(int ALLBGCHDGNC) { }   @0xb4a2c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA__DDPLLMLFICC(void *__this,int ALLBGCHDGNC)

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
  
  if ((bRam0000000001917168 & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001917168 = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_68,ALLBGCHDGNC,0);
  uStack_40 = uStack_58;
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  *(undefined4 *)((long)__this + 0x24) = uStack_58;
  *(undefined8 *)((long)__this + 0x1c) = uStack_60;
  *(undefined8 *)((long)__this + 0x14) = uStack_68;
  uVar2 = MKCBGHDANLA__KNJMKLLCKEK(__this);
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


// ==== public void .ctor(int HCBODNKILEA) { }   @0xb4bc0c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA___ctor(void *__this,int HCBODNKILEA)

{
  undefined8 uVar1;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam000000000191716c & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt___TypeInfo);
    bRam000000000191716c = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_70,0xffffffff,0);
  uStack_40 = uStack_60;
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  *(undefined4 *)((long)__this + 0x24) = uStack_60;
  *(undefined8 *)((long)__this + 0x1c) = uStack_68;
  *(undefined8 *)((long)__this + 0x14) = uStack_70;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_88,0,0);
  uStack_60 = uStack_78;
  uStack_68 = uStack_80;
  uStack_70 = uStack_88;
  *(undefined4 *)((long)__this + 0x38) = uStack_78;
  *(undefined8 *)((long)__this + 0x30) = uStack_80;
  *(undefined8 *)((long)__this + 0x28) = uStack_88;
  uVar1 = func_0x00a679a0(_CodeStage_AntiCheat_ObscuredTypes_ObscuredInt___TypeInfo,5);
  *(undefined8 *)((long)__this + 0x40) = uVar1;
  uVar1 = func_0x00a679a0(_CodeStage_AntiCheat_ObscuredTypes_ObscuredInt___TypeInfo,5);
  *(undefined8 *)((long)__this + 0x48) = uVar1;
  System_Object___ctor(__this,0);
  *(int *)((long)__this + 0x10) = HCBODNKILEA;
  MKCBGHDANLA__LAAAPNLMDIE(__this);
  return;
}



// ==== private void FLFBPCJNJHP(int HKGEOJPHLAN) { }   @0xb4a45c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA__FLFBPCJNJHP(void *__this,int HKGEOJPHLAN)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam000000000191715f & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam000000000191715f = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
      (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 != 0)) &&
     (lVar4 = *(long *)(lVar4 + 0x560), lVar4 != 0)) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
LAB_00c4a59c:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar2 = *(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_00c4a598;
        if ((*(char *)(lVar2 + 0x70) == '\0') && (*(int *)(lVar2 + 0x28) == HKGEOJPHLAN)) {
          lVar6 = *(long *)((long)__this + 0x40);
          uVar3 = ShopItem__EKBFKEBGGOP(lVar2,0);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_78,uVar3,0);
          uStack_58 = uStack_70;
          uStack_60 = uStack_78;
          uStack_50 = uStack_68;
          if (lVar6 == 0) goto LAB_00c4a598;
          if (*(uint *)(lVar6 + 0x18) <= (uint)HKGEOJPHLAN) goto LAB_00c4a59c;
          lVar6 = lVar6 + (long)HKGEOJPHLAN * 0x14;
          *(undefined4 *)(lVar6 + 0x30) = uStack_68;
          *(undefined8 *)(lVar6 + 0x28) = uStack_70;
          *(undefined8 *)(lVar6 + 0x20) = uStack_78;
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
    return;
  }
LAB_00c4a598:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public bool JOEMNOABHDF(int OKADKPBGELG = -1) { }   @0xb4ace4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool MKCBGHDANLA__JOEMNOABHDF(void *__this,int OKADKPBGELG)

{
  long lVar1;
  
  if ((bRam0000000001917163 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001917163 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((OKADKPBGELG == -1) &&
     (lVar1 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40), lVar1 != 0)) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar1 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
    OKADKPBGELG = *(int *)(lVar1 + 0x10);
  }
  return *(int *)((long)__this + 0x10) == OKADKPBGELG ||
         OKADKPBGELG == 0 && *(int *)((long)__this + 0x10) == 1;
}


// ==== public string FKDNILOCFBC(int HFPLBIFMBPH) { }   @0xb4a228

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * MKCBGHDANLA__FKDNILOCFBC(void *__this,int HFPLBIFMBPH)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  int iStack_24;
  
  iStack_24 = HFPLBIFMBPH;
  if ((bRam0000000001917167 & 1) == 0) {
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_c);
    bRam0000000001917167 = 1;
  }
  uVar1 = System_Int32__ToString((long)__this + 0x10,0);
  uVar2 = System_Int32__ToString(&iStack_24,0);
  pvVar3 = (void *)System_String__Concat(_Str_c,uVar1,_Str__,uVar2,0);
  return pvVar3;
}


// ==== public void LPHCCLPECIA(int EIGKFINFICB) { }   @0xb4ba3c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA__LPHCCLPECIA(void *__this,int EIGKFINFICB)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  int iStack_44;
  
  iStack_44 = EIGKFINFICB;
  if ((bRam000000000191716b & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str____and_refresh_HP_);
    func_0x00a67900(&Str_BuyColor__);
    bRam000000000191716b = 1;
  }
  if (EIGKFINFICB == 0) {
    return;
  }
  lVar3 = *(long *)((long)__this + 0x48);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_78,1,0);
  uStack_58 = uStack_70;
  uStack_60 = uStack_78;
  uStack_50 = uStack_68;
  if (lVar3 == 0) {
LAB_00c4bc04:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uStack_88 = uStack_70;
  uStack_90 = uStack_78;
  uStack_80 = uStack_68;
  if ((uint)EIGKFINFICB < *(uint *)(lVar3 + 0x18)) {
    lVar3 = lVar3 + (long)EIGKFINFICB * 0x14;
    *(undefined4 *)(lVar3 + 0x30) = uStack_68;
    *(undefined8 *)(lVar3 + 0x28) = uStack_70;
    *(undefined8 *)(lVar3 + 0x20) = uStack_78;
    uVar2 = MKCBGHDANLA__NDCGHMCJLPF(__this,EIGKFINFICB);
    lVar3 = *(long *)((long)__this + 0x48);
    if (lVar3 == 0) goto LAB_00c4bc04;
    if ((uint)EIGKFINFICB < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)EIGKFINFICB * 0x14;
      uStack_a0 = *(undefined4 *)(lVar3 + 0x30);
      uStack_a8 = *(undefined8 *)(lVar3 + 0x28);
      uStack_b0 = *(undefined8 *)(lVar3 + 0x20);
      uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_b0,0);
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      }
      CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar2,uVar1,0);
      MKCBGHDANLA__DDPLLMLFICC(__this,0xffffffff);
      uVar2 = System_Int32__ToString(&iStack_44,0);
      uVar2 = System_String__Concat(_Str_BuyColor__,uVar2,_Str____and_refresh_HP_,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      Main__GEMDEAMAGPG(uVar2,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}



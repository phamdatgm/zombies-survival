// ==== public void CMFJICHIMAH(MGACAOGOMPM FHOFNGHGNGF, int BFGICMFMMIE) { }   @0xb49f78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA__CMFJICHIMAH(void *__this,int FHOFNGHGNGF,int BFGICMFMMIE)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
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
  
  if ((bRam000000000191715d & 1) == 0) {
    func_0x00a67900(&MGACAOGOMPM_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_BuyUpgrade__);
    func_0x00a67900(&Str____);
    func_0x00a67900(&Str__and_refresh_HP_);
    bRam000000000191715d = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  lVar4 = *(long *)((long)__this + 0x40);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_d8,BFGICMFMMIE,0);
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
      if (lVar4 == 0) goto LAB_00c4a224;
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
        MKCBGHDANLA__DDPLLMLFICC(__this,0xffffffff);
        lVar4 = func_0x00a679a0(_string___TypeInfo,5);
        if (lVar4 == 0) goto LAB_00c4a224;
        if (*(int *)(lVar4 + 0x18) != 0) {
          *(undefined8 *)(lVar4 + 0x20) = _Str_BuyUpgrade__;
          uStack_d8 = _MGACAOGOMPM_TypeInfo;
          uStack_d0 = 0xffffffffffffffff;
          iStack_c8 = FHOFNGHGNGF;
          uVar2 = System_Enum__ToString(&uStack_d8,0);
          if ((1 < *(uint *)(lVar4 + 0x18)) &&
             (*(undefined8 *)(lVar4 + 0x28) = uVar2, *(uint *)(lVar4 + 0x18) != 2)) {
            *(undefined8 *)(lVar4 + 0x30) = _Str____;
            lVar3 = *(long *)((long)__this + 0x40);
            if (lVar3 == 0) goto LAB_00c4a224;
            if ((uint)FHOFNGHGNGF < *(uint *)(lVar3 + 0x18)) {
              lVar3 = lVar3 + lVar5 * 0x14;
              uStack_50 = *(undefined4 *)(lVar3 + 0x30);
              uStack_58 = *(undefined8 *)(lVar3 + 0x28);
              uStack_60 = *(undefined8 *)(lVar3 + 0x20);
              uVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(&uStack_60,0);
              if ((3 < *(uint *)(lVar4 + 0x18)) &&
                 (*(undefined8 *)(lVar4 + 0x38) = uVar2, *(uint *)(lVar4 + 0x18) != 4)) {
                *(undefined8 *)(lVar4 + 0x40) = _Str__and_refresh_HP_;
                uVar2 = System_String__Concat(lVar4,0);
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_Main_TypeInfo);
                }
                Main__GEMDEAMAGPG(uVar2,0,0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
LAB_00c4a224:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public string MIKFNEELEFE() { }   @0xb4a638

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * MKCBGHDANLA__MIKFNEELEFE(void *__this)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  bool bVar7;
  
  if ((bRam0000000001917161 & 1) == 0) {
    func_0x00a67900(&Str__col);
    func_0x00a67900(&Str_c);
    bRam0000000001917161 = 1;
  }
  pvVar3 = (void *)System_Int32__ToString((long)__this + 0x10,0);
  pvVar2 = _Str_c;
  pvVar4 = _Str__col;
  pvVar6 = pvVar3;
  pvVar5 = _Str__col;
  if (((((_Str_c != (void *)0x0) && (*(int *)((long)_Str_c + 0x10) != 0)) &&
       (pvVar6 = _Str_c, pvVar3 != (void *)0x0)) &&
      ((*(int *)((long)pvVar3 + 0x10) != 0 && (pvVar5 = pvVar3, _Str__col != (void *)0x0)))) &&
     (*(int *)((long)_Str__col + 0x10) != 0)) {
    pvVar5 = (void *)func_0x00ad4750(*(int *)((long)pvVar3 + 0x10) + *(int *)((long)_Str_c + 0x10) +
                                     *(int *)((long)_Str__col + 0x10));
    System_String__FillStringChecked(pvVar5,0,pvVar2);
    System_String__FillStringChecked(pvVar5,*(undefined4 *)((long)pvVar2 + 0x10),pvVar3);
    System_String__FillStringChecked
              (pvVar5,*(int *)((long)pvVar3 + 0x10) + *(int *)((long)pvVar2 + 0x10),pvVar4);
    return pvVar5;
  }
  if ((bRam00000000019178db & 1) == 0) {
    func_0x00a67900(&string_TypeInfo,pvVar5,_Str__col,0);
    bRam00000000019178db = 1;
  }
  if ((pvVar6 == (void *)0x0) || (*(int *)((long)pvVar6 + 0x10) == 0)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if ((pvVar5 == (void *)0x0) || (*(int *)((long)pvVar5 + 0x10) == 0)) {
    pvVar5 = pvVar6;
    if (bVar7) {
      pvVar5 = (void *)**(undefined8 **)(_string_TypeInfo + 0xb8);
    }
  }
  else if (!bVar7) {
    if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    iVar1 = *(int *)((long)pvVar6 + 0x10);
    pvVar4 = (void *)func_0x00ad4750(*(int *)((long)pvVar5 + 0x10) + iVar1);
    System_String__FillStringChecked(pvVar4,0,pvVar6);
    System_String__FillStringChecked(pvVar4,iVar1,pvVar5);
    pvVar5 = pvVar4;
  }
  return pvVar5;
}


// ==== public void CFMKDKAGFMA(int EIGKFINFICB) { }   @0xb4afcc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA__CFMKDKAGFMA(void *__this,int EIGKFINFICB)

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
  int iStack_34;
  
  iStack_34 = EIGKFINFICB;
  if ((bRam0000000001917165 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str____and_refresh_HP_);
    func_0x00a67900(&Str_RemoveColor__);
    bRam0000000001917165 = 1;
  }
  if (EIGKFINFICB == 0) {
    return;
  }
  lVar3 = *(long *)((long)__this + 0x48);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_78,0,0);
  uStack_58 = uStack_70;
  uStack_60 = uStack_78;
  uStack_50 = uStack_68;
  if (lVar3 == 0) {
LAB_00c4b188:
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
    if (lVar3 == 0) goto LAB_00c4b188;
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
      uVar2 = System_Int32__ToString(&iStack_34,0);
      uVar2 = System_String__Concat(_Str_RemoveColor__,uVar2,_Str____and_refresh_HP_,0);
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


// ==== public void IFGGBDCPJDF(MGACAOGOMPM FHOFNGHGNGF) { }   @0xb4b28c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA__IFGGBDCPJDF(void *__this,int FHOFNGHGNGF)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
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
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam0000000001917169 & 1) == 0) {
    func_0x00a67900(&MGACAOGOMPM_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_BuyUpgrade__);
    func_0x00a67900(&Str____);
    func_0x00a67900(&Str__and_refresh_HP_);
    bRam0000000001917169 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  lVar3 = *(long *)((long)__this + 0x40);
  if (lVar3 != 0) {
    if ((uint)FHOFNGHGNGF < *(uint *)(lVar3 + 0x18)) {
      lVar5 = (long)FHOFNGHGNGF;
      lVar3 = lVar3 + lVar5 * 0x14;
      uStack_90 = *(undefined4 *)(lVar3 + 0x30);
      uStack_98 = *(undefined8 *)(lVar3 + 0x28);
      uStack_a0 = *(undefined8 *)(lVar3 + 0x20);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Increment(&uStack_d8,&uStack_a0,0);
      iStack_70 = iStack_c8;
      uStack_78 = uStack_d0;
      uStack_80 = uStack_d8;
      *(int *)(lVar3 + 0x30) = iStack_c8;
      *(undefined8 *)(lVar3 + 0x28) = uStack_d0;
      *(undefined8 *)(lVar3 + 0x20) = uStack_d8;
      uVar2 = MKCBGHDANLA__FKDNILOCFBC(__this,FHOFNGHGNGF);
      lVar3 = *(long *)((long)__this + 0x40);
      if (lVar3 == 0) goto LAB_00c4b52c;
      if ((uint)FHOFNGHGNGF < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + lVar5 * 0x14;
        uStack_b0 = *(undefined4 *)(lVar3 + 0x30);
        uStack_b8 = *(undefined8 *)(lVar3 + 0x28);
        uStack_c0 = *(undefined8 *)(lVar3 + 0x20);
        uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_c0,0);
        if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
        }
        CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar2,uVar1,0);
        MKCBGHDANLA__DDPLLMLFICC(__this,0xffffffff);
        lVar3 = func_0x00a679a0(_string___TypeInfo,5);
        if (lVar3 == 0) goto LAB_00c4b52c;
        if (*(int *)(lVar3 + 0x18) != 0) {
          *(undefined8 *)(lVar3 + 0x20) = _Str_BuyUpgrade__;
          uStack_d8 = _MGACAOGOMPM_TypeInfo;
          uStack_d0 = 0xffffffffffffffff;
          iStack_c8 = FHOFNGHGNGF;
          uVar2 = System_Enum__ToString(&uStack_d8,0);
          if ((1 < *(uint *)(lVar3 + 0x18)) &&
             (*(undefined8 *)(lVar3 + 0x28) = uVar2, *(uint *)(lVar3 + 0x18) != 2)) {
            *(undefined8 *)(lVar3 + 0x30) = _Str____;
            lVar4 = *(long *)((long)__this + 0x40);
            if (lVar4 == 0) goto LAB_00c4b52c;
            if ((uint)FHOFNGHGNGF < *(uint *)(lVar4 + 0x18)) {
              lVar4 = lVar4 + lVar5 * 0x14;
              uStack_50 = *(undefined4 *)(lVar4 + 0x30);
              uStack_58 = *(undefined8 *)(lVar4 + 0x28);
              uStack_60 = *(undefined8 *)(lVar4 + 0x20);
              uVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(&uStack_60,0);
              if ((3 < *(uint *)(lVar3 + 0x18)) &&
                 (*(undefined8 *)(lVar3 + 0x38) = uVar2, *(uint *)(lVar3 + 0x18) != 4)) {
                *(undefined8 *)(lVar3 + 0x40) = _Str__and_refresh_HP_;
                uVar2 = System_String__Concat(lVar3,0);
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_Main_TypeInfo);
                }
                Main__GEMDEAMAGPG(uVar2,0,0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
LAB_00c4b52c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public int IIGHKMHDJNH() { }   @0xb4bce8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int MKCBGHDANLA__IIGHKMHDJNH(void *__this)

{
  return *(int *)((long)__this + 0x10);
}



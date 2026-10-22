// ==== private string KNJMKLLCKEK() { }   @0xb4a38c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * MKCBGHDANLA__KNJMKLLCKEK(void *__this)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  bool bVar7;
  
  if ((bRam000000000191715e & 1) == 0) {
    func_0x00a67900(&Str_c);
    func_0x00a67900(&Str__hp);
    bRam000000000191715e = 1;
  }
  pvVar3 = (void *)System_Int32__ToString((long)__this + 0x10,0);
  pvVar2 = _Str_c;
  pvVar4 = _Str__hp;
  pvVar6 = pvVar3;
  pvVar5 = _Str__hp;
  if (((((_Str_c != (void *)0x0) && (*(int *)((long)_Str_c + 0x10) != 0)) &&
       (pvVar6 = _Str_c, pvVar3 != (void *)0x0)) &&
      ((*(int *)((long)pvVar3 + 0x10) != 0 && (pvVar5 = pvVar3, _Str__hp != (void *)0x0)))) &&
     (*(int *)((long)_Str__hp + 0x10) != 0)) {
    pvVar5 = (void *)func_0x00ad4750(*(int *)((long)pvVar3 + 0x10) + *(int *)((long)_Str_c + 0x10) +
                                     *(int *)((long)_Str__hp + 0x10));
    System_String__FillStringChecked(pvVar5,0,pvVar2);
    System_String__FillStringChecked(pvVar5,*(undefined4 *)((long)pvVar2 + 0x10),pvVar3);
    System_String__FillStringChecked
              (pvVar5,*(int *)((long)pvVar3 + 0x10) + *(int *)((long)pvVar2 + 0x10),pvVar4);
    return pvVar5;
  }
  if ((bRam00000000019178db & 1) == 0) {
    func_0x00a67900(&string_TypeInfo,pvVar5,_Str__hp,0);
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


// ==== public int BGFAMABFPHC() { }   @0xb4a6b4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int MKCBGHDANLA__BGFAMABFPHC(void *__this)

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


// ==== public void EJLALLODBKM(int ALLBGCHDGNC) { }   @0xb4b190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA__EJLALLODBKM(void *__this,int ALLBGCHDGNC)

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
  
  if ((bRam0000000001917166 & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001917166 = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_68,ALLBGCHDGNC,0);
  uStack_40 = uStack_58;
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  *(undefined4 *)((long)__this + 0x38) = uStack_58;
  *(undefined8 *)((long)__this + 0x30) = uStack_60;
  *(undefined8 *)((long)__this + 0x28) = uStack_68;
  uVar2 = MKCBGHDANLA__MIKFNEELEFE(__this);
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


// ==== public void KFALLEFKLJL() { }   @0xb4b530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA__KFALLEFKLJL(void *__this)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  void *__this_00;
  long lVar8;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  uint uStack_64;
  
  if ((bRam000000000191716a & 1) == 0) {
    func_0x00a67900(&MGACAOGOMPM_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_BuyUpgrade__);
    func_0x00a67900(&Str____);
    func_0x00a67900(&Str_Error_in_FullUpgrade__Car__);
    func_0x00a67900(&Str_FullUpgrade_car__);
    func_0x00a67900(&Str__and_refresh_HP_);
    bRam000000000191716a = 1;
  }
  uStack_64 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar3 & 1) == 0) {
LAB_00c4b974:
    uVar7 = System_Int32__ToString((long)__this + 0x10,0);
    uVar7 = System_String__Concat(_Str_Error_in_FullUpgrade__Car__,uVar7,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__EEKNCFLMGDP(uVar7,0);
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar3 & 1) == 0) goto LAB_00c4b974;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
       (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x560);
      uStack_64 = 0;
      if (lVar4 != 0) {
        uVar6 = *(uint *)(lVar4 + 0x18);
        if (0 < (int)uVar6) {
          do {
            if (uVar6 <= uStack_64) goto LAB_00c4b9e0;
            __this_00 = *(void **)(lVar4 + (long)(int)uStack_64 * 8 + 0x20);
            if (__this_00 == (void *)0x0) goto LAB_00c4b9e4;
            if (*(char *)((long)__this_00 + 0x70) == '\0') {
              lVar8 = *(long *)((long)__this + 0x40);
              uVar6 = *(uint *)((long)__this_00 + 0x28);
              iVar1 = ShopItem__EKBFKEBGGOP(__this_00);
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_f8,iVar1,0);
              uStack_98 = uStack_f0;
              uStack_a0 = uStack_f8;
              uStack_90 = uStack_e8;
              if (lVar8 == 0) goto LAB_00c4b9e4;
              uStack_b8 = uStack_f0;
              uStack_c0 = uStack_f8;
              uStack_b0 = uStack_e8;
              if (*(uint *)(lVar8 + 0x18) <= uVar6) {
LAB_00c4b9e0:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              lVar8 = lVar8 + (long)(int)uVar6 * 0x14;
              *(undefined4 *)(lVar8 + 0x30) = uStack_e8;
              *(undefined8 *)(lVar8 + 0x28) = uStack_f0;
              *(undefined8 *)(lVar8 + 0x20) = uStack_f8;
              uVar7 = MKCBGHDANLA__FKDNILOCFBC(__this,*(undefined4 *)((long)__this_00 + 0x28));
              lVar8 = *(long *)((long)__this + 0x40);
              if (lVar8 == 0) goto LAB_00c4b9e4;
              if (*(uint *)(lVar8 + 0x18) <= *(uint *)((long)__this_00 + 0x28)) goto LAB_00c4b9e0;
              lVar8 = lVar8 + (long)(int)*(uint *)((long)__this_00 + 0x28) * 0x14;
              uStack_d0 = *(undefined4 *)(lVar8 + 0x30);
              uStack_d8 = *(undefined8 *)(lVar8 + 0x28);
              uStack_e0 = *(undefined8 *)(lVar8 + 0x20);
              uVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_e0,0);
              if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
              }
              CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar7,uVar2,0);
              lVar8 = func_0x00a679a0(_string___TypeInfo,5);
              if (lVar8 == 0) goto LAB_00c4b9e4;
              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_00c4b9e0;
              *(undefined8 *)(lVar8 + 0x20) = _Str_BuyUpgrade__;
              uStack_f8 = _MGACAOGOMPM_TypeInfo;
              uStack_f0 = 0xffffffffffffffff;
              uStack_e8 = *(undefined4 *)((long)__this_00 + 0x28);
              uVar7 = System_Enum__ToString(&uStack_f8,0);
              if ((*(uint *)(lVar8 + 0x18) < 2) ||
                 (*(undefined8 *)(lVar8 + 0x28) = uVar7, *(uint *)(lVar8 + 0x18) == 2))
              goto LAB_00c4b9e0;
              *(undefined8 *)(lVar8 + 0x30) = _Str____;
              lVar5 = *(long *)((long)__this + 0x40);
              if (lVar5 == 0) goto LAB_00c4b9e4;
              if (*(uint *)(lVar5 + 0x18) <= *(uint *)((long)__this_00 + 0x28)) goto LAB_00c4b9e0;
              lVar5 = lVar5 + (long)(int)*(uint *)((long)__this_00 + 0x28) * 0x14;
              uStack_70 = *(undefined4 *)(lVar5 + 0x30);
              uStack_78 = *(undefined8 *)(lVar5 + 0x28);
              uStack_80 = *(undefined8 *)(lVar5 + 0x20);
              uVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(&uStack_80,0);
              if ((*(uint *)(lVar8 + 0x18) < 4) ||
                 (*(undefined8 *)(lVar8 + 0x38) = uVar7, *(uint *)(lVar8 + 0x18) == 4))
              goto LAB_00c4b9e0;
              *(undefined8 *)(lVar8 + 0x40) = _Str__and_refresh_HP_;
              uVar7 = System_String__Concat(lVar8,0);
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_Main_TypeInfo);
              }
              Main__GEMDEAMAGPG(uVar7,0,0);
            }
            uStack_64 = uStack_64 + 1;
            uVar6 = *(uint *)(lVar4 + 0x18);
          } while ((int)uStack_64 < (int)uVar6);
        }
        MKCBGHDANLA__DDPLLMLFICC(__this,0xffffffff);
        uStack_64 = *(uint *)((long)__this + 0x10);
        uVar7 = System_Int32__ToString(&uStack_64,0);
        uVar7 = System_String__Concat(_Str_FullUpgrade_car__,uVar7,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        Main__GEMDEAMAGPG(uVar7,0,0);
        return;
      }
    }
  }
LAB_00c4b9e4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



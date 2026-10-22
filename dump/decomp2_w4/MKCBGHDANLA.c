// ==== public int IDOHKCCDGDG(MGACAOGOMPM FHOFNGHGNGF) { }   @0xb4a408

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int MKCBGHDANLA__IDOHKCCDGDG(void *__this,int FHOFNGHGNGF)

{
  int iVar1;
  long lVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  lVar2 = *(long *)((long)__this + 0x40);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((uint)FHOFNGHGNGF < *(uint *)(lVar2 + 0x18)) {
    lVar2 = lVar2 + (long)FHOFNGHGNGF * 0x14;
    uStack_20 = *(undefined4 *)(lVar2 + 0x30);
    uStack_28 = *(undefined8 *)(lVar2 + 0x28);
    uStack_30 = *(undefined8 *)(lVar2 + 0x20);
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_30,0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


// ==== private void LAAAPNLMDIE() { }   @0xb4a6e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA__LAAAPNLMDIE(void *__this)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  if ((bRam0000000001917162 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001917162 = 1;
  }
  uVar3 = MKCBGHDANLA__KNJMKLLCKEK(__this);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
  if ((uVar4 & 1) != 0) {
    uVar3 = MKCBGHDANLA__KNJMKLLCKEK(__this);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    }
    uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,uVar3,0);
    uStack_70 = uStack_88;
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    *(undefined4 *)((long)__this + 0x24) = uStack_88;
    *(undefined8 *)((long)__this + 0x1c) = uStack_90;
    *(undefined8 *)((long)__this + 0x14) = uStack_98;
  }
  uVar3 = MKCBGHDANLA__MIKFNEELEFE(__this);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
  if ((uVar4 & 1) != 0) {
    uVar3 = MKCBGHDANLA__MIKFNEELEFE(__this);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    }
    uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,uVar3,0);
    uStack_70 = uStack_88;
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    *(undefined4 *)((long)__this + 0x38) = uStack_88;
    *(undefined8 *)((long)__this + 0x30) = uStack_90;
    *(undefined8 *)((long)__this + 0x28) = uStack_98;
  }
  lVar6 = *(long *)((long)__this + 0x48);
  if (lVar6 != 0) {
    uVar4 = 1;
    lVar8 = 0x34;
    do {
      if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar4) {
        lVar6 = *(long *)((long)__this + 0x40);
        if (lVar6 != 0) {
          uVar4 = 0;
          lVar8 = 0x20;
          goto LAB_00c4a95c;
        }
        break;
      }
      uVar3 = MKCBGHDANLA__NDCGHMCJLPF(__this,uVar4 & 0xffffffff);
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      }
      uVar5 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
      if ((uVar5 & 1) != 0) {
        lVar6 = *(long *)((long)__this + 0x48);
        uVar3 = MKCBGHDANLA__NDCGHMCJLPF(__this,uVar4 & 0xffffffff);
        if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
        }
        uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,uVar3,0);
        uStack_78 = uStack_90;
        uStack_80 = uStack_98;
        uStack_70 = uStack_88;
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_00c4ace0;
        puVar7 = (undefined8 *)(lVar6 + lVar8);
        *(undefined4 *)(puVar7 + 2) = uStack_88;
        puVar7[1] = uStack_90;
        *puVar7 = uStack_98;
      }
      lVar6 = *(long *)((long)__this + 0x48);
      uVar4 = uVar4 + 1;
      lVar8 = lVar8 + 0x14;
    } while (lVar6 != 0);
  }
  goto LAB_00c4acbc;
LAB_00c4a95c:
  do {
    if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar4) {
      return;
    }
    iVar2 = *(int *)((long)__this + 0x10);
    if (((uVar4 != 3 && iVar2 == 0xc) || (iVar2 == 0xb)) || (uVar4 != 3 && iVar2 == 0)) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) break;
        uVar3 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if ((uVar5 & 1) != 0) {
          MKCBGHDANLA__FLFBPCJNJHP(__this,uVar4 & 0xffffffff);
        }
      }
    }
    iVar2 = *(int *)((long)__this + 0x10);
    if ((uVar4 == 4) && (iVar2 == 0)) {
      lVar6 = *(long *)((long)__this + 0x40);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,4,0);
      uStack_78 = uStack_90;
      uStack_80 = uStack_98;
      uStack_70 = uStack_88;
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) < 5) {
LAB_00c4ace0:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      *(undefined4 *)(lVar6 + 0x80) = uStack_88;
      *(undefined8 *)(lVar6 + 0x78) = uStack_90;
      *(undefined8 *)(lVar6 + 0x70) = uStack_98;
      iVar2 = *(int *)((long)__this + 0x10);
    }
    uVar3 = MKCBGHDANLA__FKDNILOCFBC(__this,uVar4 & 0xffffffff);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    }
    uVar5 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
    if (iVar2 == 1) {
      if ((uVar5 & 1) == 0) {
LAB_00c4ac54:
        lVar6 = *(long *)((long)__this + 0x40);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,1,0);
        uStack_78 = uStack_90;
        uStack_80 = uStack_98;
        uStack_70 = uStack_88;
        if (lVar6 == 0) break;
        uVar1 = *(uint *)(lVar6 + 0x18);
      }
      else {
        uVar3 = MKCBGHDANLA__FKDNILOCFBC(__this,uVar4 & 0xffffffff);
        if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
        }
        uVar5 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
        if ((uVar5 & 1) != 0) {
          uVar3 = MKCBGHDANLA__FKDNILOCFBC(__this,uVar4 & 0xffffffff);
          if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
          }
          iVar2 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
          if (iVar2 < 2) goto LAB_00c4ac54;
        }
        lVar6 = *(long *)((long)__this + 0x40);
        uVar3 = MKCBGHDANLA__FKDNILOCFBC(__this,uVar4 & 0xffffffff);
        if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
        }
        uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,uVar3,0);
        uStack_78 = uStack_90;
        uStack_80 = uStack_98;
        uStack_70 = uStack_88;
        if (lVar6 == 0) break;
        uVar1 = *(uint *)(lVar6 + 0x18);
      }
      if (uVar1 <= uVar4) goto LAB_00c4ace0;
LAB_00c4aca4:
      puVar7 = (undefined8 *)(lVar6 + lVar8);
      *(undefined4 *)(puVar7 + 2) = uStack_70;
      puVar7[1] = uStack_78;
      *puVar7 = uStack_80;
      uStack_98 = uStack_80;
      uStack_90 = uStack_78;
      uStack_88 = uStack_70;
    }
    else if ((uVar5 & 1) != 0) {
      lVar6 = *(long *)((long)__this + 0x40);
      uVar3 = MKCBGHDANLA__FKDNILOCFBC(__this,uVar4 & 0xffffffff);
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      }
      uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,uVar3,0);
      uStack_78 = uStack_90;
      uStack_80 = uStack_98;
      uStack_70 = uStack_88;
      if (lVar6 != 0) {
        if (uVar4 < *(uint *)(lVar6 + 0x18)) goto LAB_00c4aca4;
        goto LAB_00c4ace0;
      }
      break;
    }
    lVar6 = *(long *)((long)__this + 0x40);
    uVar4 = uVar4 + 1;
    lVar8 = lVar8 + 0x14;
  } while (lVar6 != 0);
LAB_00c4acbc:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public int EAEAJMKGDPD() { }   @0xb4b25c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int MKCBGHDANLA__EAEAJMKGDPD(void *__this)

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


// ==== public int KLAHDEDHJOD(int EIGKFINFICB) { }   @0xb4b9e8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int MKCBGHDANLA__KLAHDEDHJOD(void *__this,int EIGKFINFICB)

{
  int iVar1;
  long lVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  lVar2 = *(long *)((long)__this + 0x48);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((uint)EIGKFINFICB < *(uint *)(lVar2 + 0x18)) {
    lVar2 = lVar2 + (long)EIGKFINFICB * 0x14;
    uStack_20 = *(undefined4 *)(lVar2 + 0x30);
    uStack_28 = *(undefined8 *)(lVar2 + 0x28);
    uStack_30 = *(undefined8 *)(lVar2 + 0x20);
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_30,0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}



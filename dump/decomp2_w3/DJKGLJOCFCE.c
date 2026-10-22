// ==== public void .ctor(Level GDJDPNDHBNN) { }   @0xb1a250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DJKGLJOCFCE___ctor(void *__this,void *GDJDPNDHBNN)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  undefined1 auVar12 [12];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  System_Object___ctor(__this,0);
  if (GDJDPNDHBNN == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  *(undefined4 *)((long)__this + 0x10) = *(undefined4 *)((long)GDJDPNDHBNN + 0x10);
  if ((bRam0000000001916fe9 & 1) == 0) {
    func_0x00a67900(&LevelTasks___TypeInfo);
    func_0x00a67900(&LevelTasks_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001916fe9 = 1;
  }
  uVar3 = DJKGLJOCFCE__POOODOJHMMJ(__this);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
  if ((uVar4 & 1) != 0) {
    uVar3 = DJKGLJOCFCE__POOODOJHMMJ(__this);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    }
    uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_90,uVar3,0);
    uStack_60 = uStack_80;
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    *(undefined4 *)((long)__this + 0x24) = uStack_80;
    *(undefined8 *)((long)__this + 0x1c) = uStack_88;
    *(undefined8 *)((long)__this + 0x14) = uStack_90;
    uVar3 = DJKGLJOCFCE__OEOONPINEJA(__this);
    uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_a8,uVar3,0);
    uStack_80 = uStack_98;
    uStack_88 = uStack_a0;
    uStack_90 = uStack_a8;
    *(undefined4 *)((long)__this + 0x38) = uStack_98;
    *(undefined8 *)((long)__this + 0x30) = uStack_a0;
    *(undefined8 *)((long)__this + 0x28) = uStack_a8;
    uVar3 = DJKGLJOCFCE__KACBPKKHMLH(__this);
    uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
    if ((uVar4 & 1) != 0) {
      uVar3 = DJKGLJOCFCE__KACBPKKHMLH(__this);
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      }
      uVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
      *(undefined4 *)((long)__this + 0x40) = uVar1;
    }
  }
  uVar3 = DJKGLJOCFCE__DLOKHEPHLGI(__this);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
  if ((uVar4 & 1) != 0) {
    uVar3 = DJKGLJOCFCE__DLOKHEPHLGI(__this);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    }
    uVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
    *(undefined4 *)((long)__this + 0x3c) = uVar1;
  }
  if ((GDJDPNDHBNN != (void *)0x0) && (*(long *)((long)GDJDPNDHBNN + 0x28) != 0)) {
    uVar3 = func_0x00a679a0(_LevelTasks___TypeInfo,
                            *(undefined4 *)(*(long *)((long)GDJDPNDHBNN + 0x28) + 0x18));
    *(undefined8 *)((long)__this + 0x48) = uVar3;
    lVar7 = *(long *)((long)GDJDPNDHBNN + 0x28);
    if (lVar7 != 0) {
      lVar9 = 4;
      do {
        uVar10 = (int)lVar9 - 4;
        if (*(int *)(lVar7 + 0x18) <= (int)uVar10) {
          uVar4 = Level__get_IsTutorial(GDJDPNDHBNN,0);
          if ((uVar4 & 1) != 0) {
            uStack_60 = *(undefined4 *)((long)__this + 0x24);
            uStack_68 = *(undefined8 *)((long)__this + 0x1c);
            uStack_70 = *(undefined8 *)((long)__this + 0x14);
            iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_70,0);
            if (0 < iVar2) {
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (cRam0000000001916e67 == '\0') {
                func_0x00a67900(&Main_TypeInfo);
                cRam0000000001916e67 = '\x01';
              }
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              pvVar6 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (pvVar6 == (void *)0x0) break;
              pvVar6 = DAFNMLEKHAD__DKJLCJPBPPN(pvVar6,0,true);
              if (pvVar6 != (void *)0x0) {
                iVar2 = MKCBGHDANLA__IDOHKCCDGDG(pvVar6,3,0);
                if (iVar2 < 5) {
                  MKCBGHDANLA__CMFJICHIMAH(pvVar6,3,5,0);
                }
                iVar2 = MKCBGHDANLA__IDOHKCCDGDG(pvVar6,4,0);
                if (iVar2 < 5) {
                  MKCBGHDANLA__CMFJICHIMAH(pvVar6,4,5,0);
                }
              }
            }
          }
          return;
        }
        plVar11 = *(long **)((long)__this + 0x48);
        lVar7 = func_0x00a67b44(_LevelTasks_TypeInfo);
        LevelTasks___ctor(lVar7,0);
        if (plVar11 == (long *)0x0) break;
        if ((lVar7 != 0) &&
           (lVar5 = func_0x00a67a34(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar5 == 0)) {
          uVar3 = func_0x00a67b74();
          auVar12 = func_0x00a67a20(uVar3,0);
          lVar7 = *(long *)(auVar12._0_8_ + 0x48);
          if (lVar7 == 0) goto LAB_00c1a748;
          iVar2 = *(int *)(lVar7 + 0x18);
          if (0 < iVar2) {
            iVar8 = 0;
            uVar1 = 0;
            do {
              if (iVar2 == iVar8) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58(uVar1);
              }
              lVar9 = *(long *)(lVar7 + (long)iVar8 * 8 + 0x20);
              if (lVar9 == 0) {
LAB_00c1a748:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              if (*(int *)(lVar9 + 0x10) == auVar12._8_4_) {
                uVar1 = *(undefined4 *)(lVar9 + 0x14);
              }
              iVar8 = iVar8 + 1;
            } while (iVar2 != iVar8);
          }
          return;
        }
        if (*(uint *)(plVar11 + 3) <= uVar10) {
LAB_00c1a6d4:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        plVar11[lVar9] = lVar7;
        lVar7 = *(long *)((long)__this + 0x48);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_00c1a6d4;
        lVar5 = *(long *)((long)GDJDPNDHBNN + 0x28);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_00c1a6d4;
        lVar5 = *(long *)(lVar5 + lVar9 * 8);
        if ((lVar5 == 0) || (lVar7 = *(long *)(lVar7 + lVar9 * 8), lVar7 == 0)) break;
        *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(lVar5 + 0x10);
        uVar3 = DJKGLJOCFCE__CNLCNMMMOFD(__this);
        if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
        }
        uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
        if ((uVar4 & 1) != 0) {
          lVar7 = *(long *)((long)__this + 0x48);
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_00c1a6d4;
          lVar7 = *(long *)(lVar7 + lVar9 * 8);
          if (lVar7 == 0) break;
          uVar3 = DJKGLJOCFCE__CNLCNMMMOFD(__this,*(undefined4 *)(lVar7 + 0x10));
          if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
          }
          uVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
          *(undefined4 *)(lVar7 + 0x14) = uVar1;
        }
        lVar7 = *(long *)((long)GDJDPNDHBNN + 0x28);
        lVar9 = lVar9 + 1;
      } while (lVar7 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public int BENNLMFLFMH() { }   @0xb1a8e4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DJKGLJOCFCE__BENNLMFLFMH(void *__this)

{
  return *(int *)((long)__this + 0x3c);
}


// ==== public bool MCDLFBJCNNA() { }   @0xb1ac38

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool DJKGLJOCFCE__MCDLFBJCNNA(void *__this)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_20 = *(undefined4 *)((long)__this + 0x24);
  uStack_28 = *(undefined8 *)((long)__this + 0x1c);
  uStack_30 = *(undefined8 *)((long)__this + 0x14);
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_30,0);
  return 0 < iVar1;
}


// ==== private void LAAAPNLMDIE(Level GDJDPNDHBNN) { }   @0xb1a28c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DJKGLJOCFCE__LAAAPNLMDIE(void *__this,void *GDJDPNDHBNN)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  undefined1 auVar12 [12];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  if ((bRam0000000001916fe9 & 1) == 0) {
    func_0x00a67900(&LevelTasks___TypeInfo);
    func_0x00a67900(&LevelTasks_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001916fe9 = 1;
  }
  uVar3 = DJKGLJOCFCE__POOODOJHMMJ(__this);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
  if ((uVar4 & 1) != 0) {
    uVar3 = DJKGLJOCFCE__POOODOJHMMJ(__this);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    }
    uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_90,uVar3,0);
    uStack_60 = uStack_80;
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    *(undefined4 *)((long)__this + 0x24) = uStack_80;
    *(undefined8 *)((long)__this + 0x1c) = uStack_88;
    *(undefined8 *)((long)__this + 0x14) = uStack_90;
    uVar3 = DJKGLJOCFCE__OEOONPINEJA(__this);
    uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_a8,uVar3,0);
    uStack_80 = uStack_98;
    uStack_88 = uStack_a0;
    uStack_90 = uStack_a8;
    *(undefined4 *)((long)__this + 0x38) = uStack_98;
    *(undefined8 *)((long)__this + 0x30) = uStack_a0;
    *(undefined8 *)((long)__this + 0x28) = uStack_a8;
    uVar3 = DJKGLJOCFCE__KACBPKKHMLH(__this);
    uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
    if ((uVar4 & 1) != 0) {
      uVar3 = DJKGLJOCFCE__KACBPKKHMLH(__this);
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      }
      uVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
      *(undefined4 *)((long)__this + 0x40) = uVar1;
    }
  }
  uVar3 = DJKGLJOCFCE__DLOKHEPHLGI(__this);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
  if ((uVar4 & 1) != 0) {
    uVar3 = DJKGLJOCFCE__DLOKHEPHLGI(__this);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    }
    uVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
    *(undefined4 *)((long)__this + 0x3c) = uVar1;
  }
  if ((GDJDPNDHBNN != (void *)0x0) && (*(long *)((long)GDJDPNDHBNN + 0x28) != 0)) {
    uVar3 = func_0x00a679a0(_LevelTasks___TypeInfo,
                            *(undefined4 *)(*(long *)((long)GDJDPNDHBNN + 0x28) + 0x18));
    *(undefined8 *)((long)__this + 0x48) = uVar3;
    lVar7 = *(long *)((long)GDJDPNDHBNN + 0x28);
    if (lVar7 != 0) {
      lVar9 = 4;
      do {
        uVar10 = (int)lVar9 - 4;
        if (*(int *)(lVar7 + 0x18) <= (int)uVar10) {
          uVar4 = Level__get_IsTutorial(GDJDPNDHBNN,0);
          if ((uVar4 & 1) != 0) {
            uStack_60 = *(undefined4 *)((long)__this + 0x24);
            uStack_68 = *(undefined8 *)((long)__this + 0x1c);
            uStack_70 = *(undefined8 *)((long)__this + 0x14);
            iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_70,0);
            if (0 < iVar2) {
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (cRam0000000001916e67 == '\0') {
                func_0x00a67900(&Main_TypeInfo);
                cRam0000000001916e67 = '\x01';
              }
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              pvVar6 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (pvVar6 == (void *)0x0) break;
              pvVar6 = DAFNMLEKHAD__DKJLCJPBPPN(pvVar6,0,true);
              if (pvVar6 != (void *)0x0) {
                iVar2 = MKCBGHDANLA__IDOHKCCDGDG(pvVar6,3,0);
                if (iVar2 < 5) {
                  MKCBGHDANLA__CMFJICHIMAH(pvVar6,3,5,0);
                }
                iVar2 = MKCBGHDANLA__IDOHKCCDGDG(pvVar6,4,0);
                if (iVar2 < 5) {
                  MKCBGHDANLA__CMFJICHIMAH(pvVar6,4,5,0);
                }
              }
            }
          }
          return;
        }
        plVar11 = *(long **)((long)__this + 0x48);
        lVar7 = func_0x00a67b44(_LevelTasks_TypeInfo);
        LevelTasks___ctor(lVar7,0);
        if (plVar11 == (long *)0x0) break;
        if ((lVar7 != 0) &&
           (lVar5 = func_0x00a67a34(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar5 == 0)) {
          uVar3 = func_0x00a67b74();
          auVar12 = func_0x00a67a20(uVar3,0);
          lVar7 = *(long *)(auVar12._0_8_ + 0x48);
          if (lVar7 == 0) goto LAB_00c1a748;
          iVar2 = *(int *)(lVar7 + 0x18);
          if (0 < iVar2) {
            iVar8 = 0;
            uVar1 = 0;
            do {
              if (iVar2 == iVar8) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58(uVar1);
              }
              lVar9 = *(long *)(lVar7 + (long)iVar8 * 8 + 0x20);
              if (lVar9 == 0) {
LAB_00c1a748:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              if (*(int *)(lVar9 + 0x10) == auVar12._8_4_) {
                uVar1 = *(undefined4 *)(lVar9 + 0x14);
              }
              iVar8 = iVar8 + 1;
            } while (iVar2 != iVar8);
          }
          return;
        }
        if (*(uint *)(plVar11 + 3) <= uVar10) {
LAB_00c1a6d4:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        plVar11[lVar9] = lVar7;
        lVar7 = *(long *)((long)__this + 0x48);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_00c1a6d4;
        lVar5 = *(long *)((long)GDJDPNDHBNN + 0x28);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_00c1a6d4;
        lVar5 = *(long *)(lVar5 + lVar9 * 8);
        if ((lVar5 == 0) || (lVar7 = *(long *)(lVar7 + lVar9 * 8), lVar7 == 0)) break;
        *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(lVar5 + 0x10);
        uVar3 = DJKGLJOCFCE__CNLCNMMMOFD(__this);
        if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
        }
        uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
        if ((uVar4 & 1) != 0) {
          lVar7 = *(long *)((long)__this + 0x48);
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_00c1a6d4;
          lVar7 = *(long *)(lVar7 + lVar9 * 8);
          if (lVar7 == 0) break;
          uVar3 = DJKGLJOCFCE__CNLCNMMMOFD(__this,*(undefined4 *)(lVar7 + 0x10));
          if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
          }
          uVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
          *(undefined4 *)(lVar7 + 0x14) = uVar1;
        }
        lVar7 = *(long *)((long)GDJDPNDHBNN + 0x28);
        lVar9 = lVar9 + 1;
      } while (lVar7 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public int IHNJILKCLEL() { }   @0xb1ae8c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DJKGLJOCFCE__IHNJILKCLEL(void *__this)

{
  return *(int *)((long)__this + 0x40);
}



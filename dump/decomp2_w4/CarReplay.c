// ==== public void ABMNHLOGIIB() { }   @0xad406c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarReplay__ABMNHLOGIIB(void *__this)

{
  *(undefined4 *)((long)__this + 0x34) = 0;
  *(undefined1 *)((long)__this + 0x3d) = 1;
  return;
}


// ==== public static bool DJKMCIEIAMH() { }   @0xad4678

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool CarReplay__DJKMCIEIAMH(void)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam0000000001916dd2 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916dd2 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar2 != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar2 == 0) goto LAB_00bd4794;
    }
    uVar1 = Level__get_IsEvent(lVar2,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar2 != 0) {
        if (*(long *)(lVar2 + 0x60) == 0) {
          return false;
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if (lVar2 == 0) goto LAB_00bd4794;
        }
        if (*(long *)(lVar2 + 0x60) != 0) {
          if (*(long *)(*(long *)(lVar2 + 0x60) + 0x38) == 0) {
            return false;
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
            if (lVar2 == 0) goto LAB_00bd4794;
          }
          if ((*(long *)(lVar2 + 0x60) != 0) &&
             (lVar2 = *(long *)(*(long *)(lVar2 + 0x60) + 0x38), lVar2 != 0)) {
            return 0 < *(int *)(lVar2 + 0x10);
          }
        }
      }
LAB_00bd4794:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return false;
}


// ==== private void MKOCKANJLLP() { }   @0xad4dd8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarReplay__MKOCKANJLLP(void *__this)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *****pppppuVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 ****ppppuStack_70;
  long lStack_68;
  
  if ((bRam0000000001916dd6 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&CarReplay_TypeInfo);
    func_0x00a67900(&DDOBJBEDGLL_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_DDOBJBEDGLL__Add__);
    bRam0000000001916dd6 = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) == '\0') {
    iVar2 = *(int *)((long)__this + 0x38);
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = *(int *)((long)__this + 0x34) / iVar2;
    }
    if (*(int *)((long)__this + 0x34) == iVar4 * iVar2) {
      if ((*(long *)((long)__this + 0x20) != 0) &&
         (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x38), lVar6 != 0)) {
        uVar17 = UnityEngine_Transform__get_forward(lVar6,0);
        if (cRam0000000001916e65 == '\0') {
          func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
          cRam0000000001916e65 = '\x01';
        }
        lVar6 = *(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8);
        uVar20 = *(undefined4 *)(lVar6 + 0x48);
        uVar19 = *(undefined4 *)(lVar6 + 0x4c);
        uVar18 = *(undefined4 *)(lVar6 + 0x50);
        if (cRam0000000001916e66 == '\0') {
          func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
          cRam0000000001916e66 = '\x01';
        }
        fVar16 = (float)CarReplay__NLILMCLNPKF(uVar17,in_d1,in_d2,uVar20,uVar19,uVar18);
        uVar19 = (undefined4)in_d2;
        uVar18 = (undefined4)in_d1;
        pppppuVar7 = (undefined8 *****)func_0x00a67b44(_DDOBJBEDGLL_TypeInfo);
        DDOBJBEDGLL___ctor(pppppuVar7,0);
        if (((*(long *)((long)__this + 0x20) != 0) &&
            (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x38), lVar6 != 0)) &&
           (UnityEngine_Transform__get_position(lVar6,0), pppppuVar7 != (undefined8 *****)0x0)) {
          *(undefined4 *)(pppppuVar7 + 2) = uVar18;
          if ((*(long *)((long)__this + 0x20) != 0) &&
             (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x38), lVar6 != 0)) {
            UnityEngine_Transform__get_position(lVar6,0);
            uVar1 = 0;
            if (fVar16 != INFINITY) {
              uVar1 = (short)(int)fVar16;
            }
            *(undefined4 *)((long)pppppuVar7 + 0x14) = uVar19;
            *(undefined2 *)(pppppuVar7 + 3) = uVar1;
            if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar6 = _Method_System_Collections_Generic_List_DDOBJBEDGLL__Add__;
            lVar8 = *(long *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 0x18);
            if (lVar8 != 0) {
              lVar5 = tpidr_el0;
              lStack_68 = *(long *)(lVar5 + 0x28);
              lVar14 = *(long *)(_Method_System_Collections_Generic_List_DDOBJBEDGLL__Add__ + 0x20);
              lVar13 = *(long *)(lVar14 + 0xc0);
              uVar10 = (ulong)*(uint *)(*(long *)(lVar13 + 0x48) + 0xfc);
              uVar9 = uVar10 + 0xf & 0x1fffffff0;
              plVar11 = (long *)((long)&ppppuStack_70 - uVar9);
              lVar12 = (long)plVar11 - uVar9;
              plVar15 = *(long **)(lVar8 + 0x10);
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              ppppuStack_70 = pppppuVar7;
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              uVar3 = *(uint *)(lVar8 + 0x18);
              if (uVar3 < *(uint *)(plVar15 + 3)) {
                *(uint *)(lVar8 + 0x18) = uVar3 + 1;
                if (-1 < *(int *)(*(long *)(lVar13 + 0x48) + 0x28)) {
                  pppppuVar7 = &ppppuStack_70;
                }
                func_0x016decc0(plVar11,pppppuVar7,uVar10);
                func_0x016decc0((long)plVar15 +
                                (ulong)*(uint *)(*plVar15 + 0x104) * (long)(int)uVar3 + 0x20,plVar11
                                ,uVar10);
                if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x48) + 0x135)
                    & 1) == 0) {
                  func_0x00a9e3d0();
                }
                if (*(uint *)(plVar15 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
              }
              else {
                iVar2 = *(int *)(*(long *)(lVar13 + 0x48) + 0x28);
                if (-1 < iVar2) {
                  pppppuVar7 = &ppppuStack_70;
                }
                func_0x016decc0(plVar11,pppppuVar7,uVar10);
                if (iVar2 < 0) {
                  func_0x016decc0(lVar12,plVar11,uVar10);
                  lVar13 = *(long *)(lVar14 + 0xc0);
                }
                else {
                  lVar12 = *plVar11;
                }
                System_Collections_Generic_List___Il2CppFullySharedGenericType___AddWithResize
                          (lVar8,lVar12,*(undefined8 *)(lVar13 + 0x70));
              }
              if (*(long *)(lVar5 + 0x28) == lStack_68) {
                return;
              }
              func_0x016dec70();
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
}



// ==== private static void .cctor() { }   @0xad4508

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarReplay___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000001916dd1 & 1) == 0) {
    func_0x00a67900(&CarReplay_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_DDOBJBEDGLL___ctor__);
    func_0x00a67900(&System_Collections_Generic_List_DDOBJBEDGLL__TypeInfo);
    func_0x00a67900(&Str_);
    bRam0000000001916dd1 = 1;
  }
  **(undefined8 **)(_CarReplay_TypeInfo + 0xb8) = _Str_;
  uVar1 = func_0x00a67b44(_System_Collections_Generic_List_DDOBJBEDGLL__TypeInfo);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
            (uVar1,_Method_System_Collections_Generic_List_DDOBJBEDGLL___ctor__);
  *(undefined8 *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 0x10) = uVar1;
  uVar1 = func_0x00a67b44(_System_Collections_Generic_List_DDOBJBEDGLL__TypeInfo);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
            (uVar1,_Method_System_Collections_Generic_List_DDOBJBEDGLL___ctor__);
  *(undefined8 *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 0x18) = uVar1;
  return;
}


// ==== private void FixedUpdate() { }   @0xad4dac

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarReplay__FixedUpdate(void *__this)

{
  if (*(char *)((long)__this + 0x3d) != '\0') {
    CarReplay__MKOCKANJLLP(__this);
  }
  *(int *)((long)__this + 0x34) = *(int *)((long)__this + 0x34) + 1;
  return;
}


// ==== private void OFAPJCDIEIO() { }   @0xad535c

/* WARNING: Removing unreachable block (ram,0x00bd54f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarReplay__OFAPJCDIEIO(void *__this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  long lStack_38;
  ulong uVar14;
  
  if ((bRam0000000001916dd7 & 1) == 0) {
    func_0x00a67900(&CarReplay_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Count__);
    func_0x00a67900(&Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Item__);
    bRam0000000001916dd7 = 1;
  }
  fVar11 = (float)*(int *)((long)__this + 0x38);
  uVar4 = (ulong)(uint)fVar11;
  fVar13 = (float)(*(int *)((long)__this + 0x38) + *(int *)((long)__this + 0x34));
  uVar14 = (ulong)(uint)fVar13;
  fVar13 = fVar13 / fVar11;
  iVar1 = -0x80000000;
  if (fVar13 != INFINITY) {
    iVar1 = (int)fVar13;
  }
  if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = *(long *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 0x10);
  if (lVar5 != 0) {
    if (iVar1 < *(int *)(lVar5 + 0x18)) {
      iVar2 = iVar1 + -1;
      if (0 < iVar1) {
        lVar7 = *(long *)((long)__this + 0x28);
        if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar5 = *(long *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 0x10);
          if (lVar5 == 0) goto LAB_00bd5678;
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                  (lVar5,iVar2,&lStack_38,
                   _Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Item__);
        if ((lStack_38 != 0) &&
           (lVar5 = *(long *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 0x10), lVar5 != 0)) {
          fVar11 = *(float *)(lStack_38 + 0x10);
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                    (lVar5,iVar2,&lStack_38,
                     _Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Item__);
          if ((lStack_38 != 0) &&
             (lVar5 = *(long *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 0x10), lVar5 != 0)) {
            fVar17 = *(float *)(lStack_38 + 0x14);
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                      (lVar5,iVar1,&lStack_38,
                       _Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Item__);
            if ((lStack_38 != 0) &&
               (lVar5 = *(long *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 0x10), lVar5 != 0)) {
              fVar18 = *(float *)(lStack_38 + 0x10);
              System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                        (lVar5,iVar1,&lStack_38,
                         _Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Item__);
              if (lStack_38 != 0) {
                fVar3 = fVar13 - (float)iVar1;
                if (fVar13 - (float)iVar1 < 0.0) {
                  fVar3 = 0.0;
                }
                if (lVar7 != 0) {
                  fVar13 = *(float *)(lStack_38 + 0x14) - fVar17;
                  uVar4 = (ulong)(uint)fVar13;
                  UnityEngine_Transform__set_position
                            (fVar3 * 0.0 + 0.0,fVar11 + fVar3 * (fVar18 - fVar11),
                             fVar17 + fVar3 * fVar13,lVar7,0);
                  lVar5 = *(long *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 0x10);
                  if (lVar5 != 0) {
                    lVar7 = *(long *)((long)__this + 0x28);
                    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                              (lVar5,iVar2,&lStack_38,
                               _Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Item__);
                    if (lStack_38 != 0) {
                      uVar10 = 0;
                      uVar15 = 0;
                      uVar8 = UnityEngine_Quaternion__Internal_FromEulerRad
                                        ((float)(int)*(short *)(lStack_38 + 0x18) * 0.017453292,0,0,
                                         0);
                      lVar5 = *(long *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 0x10);
                      if ((lVar5 != 0) &&
                         (uVar14 = uVar4,
                         System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                                   (lVar5,iVar1,&lStack_38,
                                    _Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Item__)
                         , lStack_38 != 0)) {
                        uVar12 = 0;
                        uVar16 = 0;
                        uVar9 = UnityEngine_Quaternion__Internal_FromEulerRad
                                          ((float)(int)*(short *)(lStack_38 + 0x18) * 0.017453292,0,
                                           0,0);
                        UnityEngine_Quaternion__Lerp
                                  (uVar8,uVar10,uVar15,uVar4,uVar9,uVar12,uVar16,uVar14,0);
                        if (lVar7 != 0) {
                          UnityEngine_Transform__set_rotation(lVar7,0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_00bd5678;
      }
    }
    else if (*(char *)((long)__this + 0x3e) == '\0') {
      *(undefined1 *)((long)__this + 0x3e) = 1;
      if ((bRam0000000001916dd8 & 1) == 0) {
        func_0x00a67900(&CarController_TypeInfo);
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        func_0x00a67900(&Str_FX_SmokeGhost);
        bRam0000000001916dd8 = 1;
      }
      uVar8 = UnityEngine_Resources__Load(_Str_FX_SmokeGhost,0);
      if (*(long *)((long)__this + 0x28) != 0) {
        uVar10 = UnityEngine_Transform__get_position(*(long *)((long)__this + 0x28),0);
        if (cRam000000000191678a == '\0') {
          func_0x00a67900(&UnityEngine_Quaternion_TypeInfo);
          cRam000000000191678a = '\x01';
        }
        puVar6 = *(undefined4 **)(_UnityEngine_Quaternion_TypeInfo + 0xb8);
        uVar22 = *puVar6;
        uVar21 = puVar6[1];
        uVar20 = puVar6[2];
        uVar19 = puVar6[3];
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        UnityEngine_Object__Instantiate(uVar10,uVar4,uVar14,uVar22,uVar21,uVar20,uVar19,uVar8,0);
        uVar8 = UnityEngine_Component__get_gameObject(__this,0);
        UnityEngine_Object__Destroy(uVar8,0);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__op_Inequality
                          (**(undefined8 **)(_CarController_TypeInfo + 0xb8),0,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_CarController_TypeInfo + 0xb8) != 0) {
          uVar8 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
          if ((uVar4 & 1) == 0) {
            return;
          }
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
             (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 != 0)) {
            if ((bRam000000000191721b & 1) == 0) {
              func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
              bRam000000000191721b = 1;
            }
            lVar5 = *(long *)(lVar5 + 0x1b0);
            if (lVar5 != 0) {
              uVar8 = UnityEngine_Component__get_gameObject(lVar5,0);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_UnityEngine_Object_TypeInfo);
              }
              if ((bRam000000000191c518 & 1) == 0) {
                func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
                bRam000000000191c518 = 1;
              }
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (pcRam000000000191c510 == (code *)0x0) {
                pcRam000000000191c510 = (code *)func_0x00a678c4(&UNK_005ae57b);
              }
                    /* WARNING: Could not recover jumptable at 0x0148f1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam000000000191c510)(0,uVar8);
              return;
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    return;
  }
LAB_00bd5678:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



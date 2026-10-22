// ==== private void PPIBCCLIDMH() { }   @0xb43190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarControllerBot__PPIBCCLIDMH(void *__this)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  void *__this_00;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float in_s1;
  float fVar16;
  float in_s2;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_108;
  code *pcStack_100;
  long lStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  
  if ((bRam0000000001917136 & 1) == 0) {
    func_0x00a67900(&CarControllerBot_OMKEEHNKHPA___TypeInfo);
    bRam0000000001917136 = 1;
  }
  lVar12 = *(long *)((long)__this + 0x50);
  if (lVar12 == 0) goto LAB_00c43424;
  if (*(int *)(lVar12 + 0x18) == 0) {
LAB_00c43428:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  if (*(long *)(lVar12 + 0x20) != 0) {
    uVar3 = UnityEngine_GameObject__get_transform(*(long *)(lVar12 + 0x20),0);
    lVar12 = *(long *)((long)__this + 0x50);
    *(undefined8 *)((long)__this + 0x30) = uVar3;
    if (lVar12 != 0) {
      if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_00c43428;
      if (*(long *)(lVar12 + 0x28) != 0) {
        uVar3 = UnityEngine_GameObject__get_transform(*(long *)(lVar12 + 0x28),0);
        lVar12 = *(long *)((long)__this + 0x50);
        *(undefined8 *)((long)__this + 0x38) = uVar3;
        if (lVar12 != 0) {
          if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_00c43428;
          if (*(long *)(lVar12 + 0x30) != 0) {
            uVar3 = UnityEngine_GameObject__get_transform(*(long *)(lVar12 + 0x30),0);
            lVar12 = *(long *)((long)__this + 0x50);
            *(undefined8 *)((long)__this + 0x40) = uVar3;
            if (lVar12 != 0) {
              if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_00c43428;
              if (*(long *)(lVar12 + 0x38) != 0) {
                uVar3 = UnityEngine_GameObject__get_transform(*(long *)(lVar12 + 0x38),0);
                *(undefined8 *)((long)__this + 0x48) = uVar3;
                plVar4 = (long *)func_0x00a679a0(_CarControllerBot_OMKEEHNKHPA___TypeInfo,
                                                 *(undefined4 *)((long)__this + 0x68));
                *(long **)((long)__this + 0xc0) = plVar4;
                uVar11 = 1;
                lVar12 = CarControllerBot__DCPJJNIFCBM(__this,*(undefined8 *)((long)__this + 0x30));
                if (plVar4 != (long *)0x0) {
                  if ((lVar12 == 0) ||
                     (lVar5 = func_0x00a67a34(lVar12,*(undefined8 *)(*plVar4 + 0x40)), lVar5 != 0))
                  {
                    if ((int)plVar4[3] == 0) goto LAB_00c43428;
                    plVar4[4] = lVar12;
                    plVar4 = *(long **)((long)__this + 0xc0);
                    uVar11 = 1;
                    lVar12 = CarControllerBot__DCPJJNIFCBM
                                       (__this,*(undefined8 *)((long)__this + 0x38));
                    if (plVar4 == (long *)0x0) goto LAB_00c43424;
                    if ((lVar12 == 0) ||
                       (lVar5 = func_0x00a67a34(lVar12,*(undefined8 *)(*plVar4 + 0x40)), lVar5 != 0)
                       ) {
                      if (*(uint *)(plVar4 + 3) < 2) goto LAB_00c43428;
                      plVar4[5] = lVar12;
                      plVar4 = *(long **)((long)__this + 0xc0);
                      uVar11 = 2;
                      lVar12 = CarControllerBot__DCPJJNIFCBM
                                         (__this,*(undefined8 *)((long)__this + 0x40));
                      if (plVar4 == (long *)0x0) goto LAB_00c43424;
                      if ((lVar12 == 0) ||
                         (lVar5 = func_0x00a67a34(lVar12,*(undefined8 *)(*plVar4 + 0x40)),
                         lVar5 != 0)) {
                        if (*(uint *)(plVar4 + 3) < 3) goto LAB_00c43428;
                        plVar4[6] = lVar12;
                        plVar4 = *(long **)((long)__this + 0xc0);
                        uVar11 = 2;
                        lVar12 = CarControllerBot__DCPJJNIFCBM
                                           (__this,*(undefined8 *)((long)__this + 0x48));
                        if (plVar4 == (long *)0x0) goto LAB_00c43424;
                        if ((lVar12 == 0) ||
                           (lVar5 = func_0x00a67a34(lVar12,*(undefined8 *)(*plVar4 + 0x40)),
                           lVar5 != 0)) {
                          if (*(uint *)(plVar4 + 3) < 4) goto LAB_00c43428;
                          plVar4[7] = lVar12;
                          lVar12 = *(long *)((long)__this + 0xc0);
                          if (lVar12 != 0) {
                            uVar1 = *(uint *)(lVar12 + 0x18);
                            if (0 < (int)uVar1) {
                              uVar13 = 0;
                              do {
                                if (uVar1 <= uVar13) goto LAB_00c43428;
                                lVar5 = *(long *)(lVar12 + (long)(int)uVar13 * 8 + 0x20);
                                if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0))
                                goto LAB_00c43424;
                                UnityEngine_WheelCollider__set_suspensionDistance
                                          (*(undefined4 *)((long)__this + 0x6c),lVar5,0);
                                UnityEngine_WheelCollider__get_suspensionSpring(lVar5,0);
                                UnityEngine_WheelCollider__set_suspensionSpring
                                          (*(undefined4 *)((long)__this + 0x70),
                                           *(undefined4 *)((long)__this + 0x74),0x3e800000,lVar5,0);
                                UnityEngine_WheelCollider__set_mass
                                          (*(undefined4 *)((long)__this + 0x84),lVar5,0);
                                UnityEngine_WheelCollider__set_radius
                                          (*(undefined4 *)((long)__this + 0x78),lVar5,0);
                                uVar1 = *(uint *)(lVar12 + 0x18);
                                uVar13 = uVar13 + 1;
                              } while ((int)uVar13 < (int)uVar1);
                            }
                            return;
                          }
                          goto LAB_00c43424;
                        }
                      }
                    }
                  }
                  uVar3 = func_0x00a67b74();
                  auVar19 = func_0x00a67a20(uVar3,0);
                  lVar5 = auVar19._8_8_;
                  lVar12 = auVar19._0_8_;
                  if ((bRam000000000191713e & 1) == 0) {
                    func_0x00a67900(&UnityEngine_GameObject_TypeInfo);
                    func_0x00a67900(&CarControllerBot_OMKEEHNKHPA_TypeInfo);
                    func_0x00a67900(&UnityEngine_Object_TypeInfo);
                    func_0x00a67900(&System_Type_TypeInfo);
                    func_0x00a67900(&UnityEngine_WheelCollider_var);
                    func_0x00a67900(&UnityEngine_WheelCollider_TypeInfo);
                    func_0x00a67900(&Str_car);
                    func_0x00a67900(&Str_wheel);
                    func_0x00a67900(&Str_WheelCollider);
                    bRam000000000191713e = 1;
                  }
                  uStack_b0 = 0;
                  uStack_a8 = 0;
                  uStack_a0 = 0;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar6 = UnityEngine_Object__op_Equality(lVar5,0,0);
                  if ((uVar6 & 1) == 0) {
                    lVar7 = func_0x00a67b44(_CarControllerBot_OMKEEHNKHPA_TypeInfo);
                    System_Object___ctor(lVar7,0);
                    if (lVar5 != 0) {
                      lVar8 = UnityEngine_Component__get_gameObject(lVar5,0);
                      uVar2 = UnityEngine_LayerMask__NameToLayer(_Str_car,0);
                      if (lVar8 != 0) {
                        UnityEngine_GameObject__set_layer(lVar8,uVar2,0);
                        uVar3 = UnityEngine_Object__get_name(lVar5,0);
                        uVar3 = System_String__Concat(_Str_WheelCollider,uVar3,0);
                        lVar8 = func_0x00a67b44(_UnityEngine_GameObject_TypeInfo);
                        UnityEngine_GameObject___ctor(lVar8,uVar3,0);
                        uVar2 = UnityEngine_LayerMask__NameToLayer(_Str_wheel,0);
                        if (lVar8 != 0) {
                          UnityEngine_GameObject__set_layer(lVar8,uVar2,0);
                          lVar9 = UnityEngine_GameObject__get_transform(lVar8,0);
                          if (lVar9 != 0) {
                            UnityEngine_Transform__SetParent(lVar9,*(undefined8 *)(lVar12 + 0x20),0)
                            ;
                            lVar9 = UnityEngine_GameObject__get_transform(lVar8,0);
                            fVar14 = (float)UnityEngine_Transform__get_position(lVar5,0);
                            if ((*(long *)(lVar12 + 0x20) != 0) &&
                               (fVar16 = in_s1, fVar17 = in_s2,
                               fVar15 = (float)UnityEngine_Transform__get_up
                                                         (*(long *)(lVar12 + 0x20),0), lVar9 != 0))
                            {
                              fVar18 = *(float *)(lVar12 + 0x6c);
                              in_s2 = in_s2 + fVar17 * fVar18 * 0.5;
                              in_s1 = in_s1 + fVar16 * fVar18 * 0.5;
                              UnityEngine_Transform__set_position
                                        (fVar14 + fVar15 * fVar18 * 0.5,lVar9,0);
                              uVar3 = _UnityEngine_WheelCollider_var;
                              if (*(int *)(_System_Type_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
                              plVar4 = (long *)UnityEngine_GameObject__AddComponent(lVar8,uVar3,0);
                              if (plVar4 != (long *)0x0) {
                                if ((*(byte *)(*plVar4 + 0x130) <
                                     *(byte *)(_UnityEngine_WheelCollider_TypeInfo + 0x130)) ||
                                   (*(long *)(*(long *)(*plVar4 + 200) +
                                              (ulong)*(byte *)(_UnityEngine_WheelCollider_TypeInfo +
                                                              0x130) * 8 + -8) !=
                                    _UnityEngine_WheelCollider_TypeInfo)) {
                                  func_0x00a67eec(plVar4);
                                  goto LAB_00c437e0;
                                }
                                UnityEngine_WheelCollider__set_motorTorque(0x3727c5ac,plVar4,0);
                                UnityEngine_WheelCollider__set_wheelDampingRate(0x40a00000,plVar4,0)
                                ;
                                if (lVar7 != 0) {
                                  *(long *)(lVar7 + 0x10) = lVar5;
                                  *(long *)(lVar7 + 0x18) = lVar8;
                                  *(long **)(lVar7 + 0x20) = plVar4;
                                  uVar3 = UnityEngine_Component__get_transform(plVar4,0);
                                  *(undefined8 *)(lVar7 + 0x28) = uVar3;
                                  lVar5 = UnityEngine_GameObject__get_transform(lVar8,0);
                                  if (lVar5 != 0) {
                                    uVar2 = UnityEngine_Transform__get_localPosition(lVar5,0);
                                    *(undefined4 *)(lVar7 + 0x30) = uVar2;
                                    *(float *)(lVar7 + 0x34) = in_s1;
                                    *(float *)(lVar7 + 0x38) = in_s2;
                                    *(int *)(lVar7 + 0x40) = (int)uVar11;
                                    UnityEngine_WheelCollider__get_forwardFriction
                                              (&uStack_c8,plVar4,0);
                                    uStack_a8 = uStack_c0;
                                    uStack_b0 = uStack_c8;
                                    uStack_a0 = uStack_b8;
                                    UnityEngine_WheelFrictionCurve__set_stiffness
                                              (*(undefined4 *)(lVar12 + 0x8c),&uStack_b0,0);
                                    uStack_d8 = uStack_a8;
                                    uStack_e0 = uStack_b0;
                                    uStack_d0 = uStack_a0;
                                    UnityEngine_WheelCollider__set_forwardFriction
                                              (plVar4,&uStack_e0,0);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    il2cpp_throw_967b50();
                  }
LAB_00c437e0:
                  func_0x00a67914(&System_Exception_TypeInfo);
                  uVar3 = func_0x00a67b44();
                  uVar10 = func_0x00a67914(&Str_wheel_not_connected_to_script_);
                  System_Exception___ctor(uVar3,uVar10,0);
                  uVar10 = func_0x00a67914(&Method_CarControllerBot_DCPJJNIFCBM__);
                  __this_00 = (void *)func_0x00a67a20(uVar3,uVar10);
                  pcStack_100 = CarControllerBot__Start;
                  lStack_f8 = lVar5;
                  uStack_f0 = uVar11 & 0xffffffff;
                  uStack_e8 = uVar3;
                  if ((bRam0000000001917137 & 1) == 0) {
                    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
                    bRam0000000001917137 = 1;
                  }
                  uVar3 = UnityEngine_Component__get_transform(__this_00,0);
                  *(undefined8 *)((long)__this_00 + 0x20) = uVar3;
                  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (__this_00,&uStack_108,
                             _Method_UnityEngine_Component_GetComponent_Rigidbody___);
                  *(undefined8 *)((long)__this_00 + 0x28) = uStack_108;
                  CarControllerBot__PPIBCCLIDMH(__this_00);
                  CarControllerBot__LOPCCLDAPAE();
                  CarControllerBot__KIDOGHJAMDM();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00c43424:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void HMMPAIOPBJI() { }   @0xb444a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarControllerBot__HMMPAIOPBJI(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000191713b & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam000000000191713b = 1;
  }
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x70);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x70);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    UnityEngine_AudioSource__set_volume(0,lVar2,0);
    SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x70),0);
    *(undefined1 *)((long)__this + 0xaa) = 1;
  }
  return;
}


// ==== public void .ctor() { }   @0xb44ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarControllerBot___ctor(void *__this)

{
  *(undefined8 *)((long)__this + 0x74) = 0x3f8000003c23d70a;
  *(undefined8 *)((long)__this + 0x6c) = 0x400000003e4ccccd;
  *(undefined4 *)((long)__this + 0x68) = 4;
  *(undefined8 *)((long)__this + 0x94) = 0xbe800000;
  *(undefined8 *)((long)__this + 0x8c) = 0x3f4ccccd;
  *(undefined8 *)((long)__this + 0x84) = 0x41c8000040400000;
  *(undefined8 *)((long)__this + 0x7c) = 0x447a0000440c0000;
  *(undefined1 *)((long)__this + 0xa8) = 1;
  *(undefined4 *)((long)__this + 0xb4) = 10;
  *(undefined8 *)((long)__this + 0x9c) = 0x447a000043fa0000;
  *(undefined1 *)((long)__this + 0xb8) = 1;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



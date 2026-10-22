// ==== public void ButtonPauseHelpRight() { }   @0xb60ba8

/* WARNING: Removing unreachable block (ram,0x00c5f6f8) */
/* WARNING: Removing unreachable block (ram,0x00c5f1e8) */
/* WARNING: Removing unreachable block (ram,0x00c5f18c) */
/* WARNING: Removing unreachable block (ram,0x00c5f198) */
/* WARNING: Removing unreachable block (ram,0x00c5f1a0) */
/* WARNING: Removing unreachable block (ram,0x00c60534) */
/* WARNING: Removing unreachable block (ram,0x00c5f62c) */
/* WARNING: Removing unreachable block (ram,0x00c5f644) */
/* WARNING: Removing unreachable block (ram,0x00c5f64c) */
/* WARNING: Removing unreachable block (ram,0x00c600d4) */
/* WARNING: Removing unreachable block (ram,0x00c600e8) */
/* WARNING: Removing unreachable block (ram,0x00c600f0) */
/* WARNING: Removing unreachable block (ram,0x00c600fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonPauseHelpRight(void *__this)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  void *pvVar11;
  ulong uVar12;
  undefined8 extraout_x1;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 uVar20;
  long *plStack_b0;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint uStack_78;
  int iStack_74;
  
  if (*(int *)((long)__this + 0x42c) < *(int *)((long)__this + 0x430)) {
    if (*(long *)((long)__this + 0x460) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar12 = UnityEngine_GameObject__get_activeInHierarchy(*(long *)((long)__this + 0x460),0);
    if ((uVar12 & 1) != 0) {
      *(int *)((long)__this + 0x42c) = *(int *)((long)__this + 0x42c) + 1;
      GUIGameplay__CCDFIOJMHGC(__this);
      uVar1 = *(uint *)((long)__this + 0x42c);
      if ((bRam0000000001917217 & 1) == 0) {
        func_0x00a67900(&BridgePHP_TypeInfo);
        func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___);
        func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
        func_0x00a67900(&GUIGameplay_TypeInfo);
        func_0x00a67900(&System_IDisposable_TypeInfo);
        func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
        func_0x00a67900(&Main_TypeInfo);
        func_0x00a67900(&Menu_TypeInfo);
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        func_0x00a67900(&GUIGameplay_POFCDOMOIBH_TypeInfo);
        func_0x00a67900(&UnityEngine_RectOffset_TypeInfo);
        func_0x00a67900(&UnityEngine_Transform_TypeInfo);
        func_0x00a67900(&Translate_TypeInfo);
        func_0x00a67900(&Str_TUTORIAL);
        func_0x00a67900(&Str_latest_completed_tutorial__);
        func_0x00a67900(&Str_TUTORIAL_5_NINTENDO);
        func_0x00a67900(&Str__PLAYSTATION);
        func_0x00a67900(&Str__A);
        func_0x00a67900(&Str_TUTORIAL_5_PC);
        func_0x00a67900(&Str__GAMEPAD);
        func_0x00a67900(&Str_point_marker);
        func_0x00a67900(&Str__);
        func_0x00a67900(&Str_TUTORIAL_);
        func_0x00a67900(&Str_HELP);
        func_0x00a67900(&Str_TUTORIAL_5_PLAYSTATION);
        func_0x00a67900(&Str__PC);
        func_0x00a67900(&Str_);
        func_0x00a67900(&Str__B);
        func_0x00a67900(&Str__NINTENDO);
        func_0x00a67900(&Str_point_);
        func_0x00a67900(&Str_TUTORIAL_5_TAP);
        bRam0000000001917217 = 1;
      }
      uStack_80 = 0;
      uStack_78 = 0;
      iStack_74 = 0;
      uStack_88 = 0;
      plVar19 = *(long **)((long)__this + 0x3f8);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) != (void *)0x0) &&
         (pvVar4 = Translate__JJJNIPAKLJF
                             ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8),_Str_HELP),
         plVar19 != (long *)0x0)) {
        (**(code **)(*plVar19 + 0x5a8))(plVar19,pvVar4,*(undefined8 *)(*plVar19 + 0x5b0));
        if (*(long *)((long)__this + 0x438) != 0) {
          UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x438),1,0);
          *(undefined4 *)((long)__this + 0x42c) = 0xffffffff;
          *(uint *)((long)__this + 0x42c) = uVar1;
          if (*(long *)((long)__this + 0x438) != 0) {
            UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x438),1,0);
            if (*(long *)((long)__this + 0x410) != 0) {
              uVar3 = *(uint *)(*(long *)((long)__this + 0x410) + 0x18);
              do {
                uVar3 = uVar3 - 1;
                if ((int)uVar3 < 0) goto LAB_00c5f380;
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
                lVar15 = *(long *)((long)__this + 0x410);
                if (lVar15 == 0) goto LAB_00c600b8;
                if (*(uint *)(lVar15 + 0x18) <= uVar3) goto LAB_00c60508;
                lVar15 = *(long *)(lVar15 + (ulong)uVar3 * 8 + 0x20);
                if ((lVar15 == 0) ||
                   (lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar5 == 0))
                goto LAB_00c600b8;
                uVar12 = DAFNMLEKHAD__BLGOKNOOEEO(lVar5,*(undefined4 *)(lVar15 + 0x10),0);
              } while ((uVar12 & 1) == 0);
              lVar15 = *(long *)((long)__this + 0x410);
              if (lVar15 != 0) {
                if (*(uint *)(lVar15 + 0x18) <= uVar3) {
LAB_00c60508:
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                lVar15 = *(long *)(lVar15 + (ulong)uVar3 * 8 + 0x20);
                if (lVar15 != 0) {
                  uStack_90 = *(undefined4 *)(lVar15 + 0x10);
                  *(undefined4 *)((long)__this + 0x430) = uStack_90;
                  plStack_a0 = _GUIGameplay_POFCDOMOIBH_TypeInfo;
                  uStack_98 = 0xffffffffffffffff;
                  uVar6 = System_Enum__ToString(&plStack_a0,0);
                  pvVar4 = (void *)System_String__Concat(_Str_latest_completed_tutorial__,uVar6,0);
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_Main_TypeInfo);
                  }
                  Main__GEMDEAMAGPG(pvVar4,false);
LAB_00c5f380:
                  if ((*(long *)((long)__this + 0x438) != 0) &&
                     (lVar15 = UnityEngine_GameObject__get_transform
                                         (*(long *)((long)__this + 0x438),0), lVar15 != 0)) {
                    plVar19 = (long *)UnityEngine_Transform__GetEnumerator(lVar15,0);
                    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_throw_967b50();
                    }
                    plStack_b0 = (long *)0x0;
                    uVar12 = uStack_88 & 0xffffffff;
                    plVar18 = (long *)0x0;
                    uVar3 = 0;
                    do {
                      lVar15 = *plVar19;
                      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
                      if (uVar16 != 0) {
                        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar17 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                            puVar7 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                            goto LAB_00c5f420;
                          }
                          uVar16 = uVar16 - 1;
                          piVar17 = piVar17 + 4;
                        } while (uVar16 != 0);
                      }
                      puVar7 = (undefined8 *)
                               func_0x00a9e6c4(plVar19,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00c5f420:
                      uVar16 = (*(code *)*puVar7)(plVar19,puVar7[1]);
                      uVar20 = (undefined4)uVar12;
                      if ((uVar16 & 1) == 0) {
                        uStack_88 = CONCAT44(uStack_88._4_4_,uVar20);
                        plVar19 = (long *)func_0x00a67a34(plVar19,_System_IDisposable_TypeInfo);
                        if (plVar19 == (long *)0x0) goto LAB_00c5f6ec;
                        lVar15 = *plVar19;
                        uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
                        if (uVar12 == 0) goto LAB_00c5f6c4;
                        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                        goto LAB_00c5f6ac;
                      }
                      lVar15 = *plVar19;
                      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
                      if (uVar16 != 0) {
                        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar17 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                            goto LAB_00c5f480;
                          }
                          uVar16 = uVar16 - 1;
                          piVar17 = piVar17 + 4;
                        } while (uVar16 != 0);
                      }
                      puVar7 = (undefined8 *)
                               func_0x00a9e6c4(plVar19,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00c5f480:
                      plVar8 = (long *)(*(code *)*puVar7)(plVar19,puVar7[1]);
                      if (plVar8 == (long *)0x0) {
LAB_00c60518:
                        uStack_88 = CONCAT44(uStack_88._4_4_,uVar20);
                    /* WARNING: Subroutine does not return */
                        il2cpp_throw_967b50();
                      }
                      if ((*(byte *)(*plVar8 + 0x130) <
                           *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
                         (*(long *)(*(long *)(*plVar8 + 200) +
                                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 +
                                   -8) != _UnityEngine_Transform_TypeInfo)) {
                        uStack_88 = CONCAT44(uStack_88._4_4_,uVar20);
                        func_0x00a67eec(plVar8);
                        goto LAB_00c60518;
                      }
                      uVar6 = UnityEngine_Object__get_name(plVar8,0);
                      _uStack_78 = CONCAT44(iStack_74,uVar1);
                      uVar9 = System_Int32__ToString(&uStack_78,0);
                      uVar9 = System_String__Concat(_Str_point_,uVar9,0);
                      uVar16 = System_String__op_Equality(uVar6,uVar9,0);
                      if ((uVar16 & 1) == 0) {
                        uVar6 = UnityEngine_Object__get_name(plVar8,0);
                        uVar16 = System_String__op_Equality(uVar6,_Str_point_marker,0);
                        if ((uVar16 & 1) != 0) {
                          UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                                    (plVar8,&plStack_a0,
                                     _Method_UnityEngine_Component_GetComponent_RectTransform___);
                          plStack_b0 = plStack_a0;
                        }
                      }
                      else {
                        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                                  (plVar8,&plStack_a0,
                                   _Method_UnityEngine_Component_GetComponent_RectTransform___);
                        plVar18 = plStack_a0;
                      }
                      uVar6 = UnityEngine_Object__get_name(plVar8,0);
                      uStack_78 = uVar3;
                      uVar9 = System_Int32__ToString(&uStack_78,0);
                      uVar9 = System_String__Concat(_Str_point_,uVar9,0);
                      uVar16 = System_String__op_Equality(uVar6,uVar9,0);
                      if ((uVar16 & 1) != 0) {
                        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                                  (plVar8,&plStack_a0,
                                   _Method_UnityEngine_Component_GetComponent_Image___);
                        plVar8 = plStack_a0;
                        if (plStack_a0 == (long *)0x0) {
                          uStack_88 = CONCAT44(uStack_88._4_4_,uVar20);
                    /* WARNING: Subroutine does not return */
                          il2cpp_throw_967b50();
                        }
                        uVar12 = (**(code **)(*plStack_a0 + 0x298))
                                           (plStack_a0,*(undefined8 *)(*plStack_a0 + 0x2a0));
                        uStack_88 = CONCAT44(in_s1,(undefined4)uStack_88);
                        uStack_80 = CONCAT44(*(undefined4 *)
                                              (&UNK_0059c3a0 +
                                              (ulong)(*(int *)((long)__this + 0x430) < (int)uVar3) *
                                              4),in_s2);
                        lVar15 = *plVar8;
                        (**(code **)(lVar15 + 0x2a8))(plVar8,*(undefined8 *)(lVar15 + 0x2b0));
                      }
                      if (*(long *)((long)__this + 0x410) == 0) {
                        uStack_88 = CONCAT44(uStack_88._4_4_,(int)uVar12);
                    /* WARNING: Subroutine does not return */
                        il2cpp_throw_967b50();
                      }
                      if ((int)uVar3 < *(int *)(*(long *)((long)__this + 0x410) + 0x18) + -1) {
                        uVar3 = uVar3 + 1;
                      }
                    } while( true );
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_00c600b8;
    }
  }
  return;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar17 = piVar17 + 4;
    if (uVar12 == 0) break;
LAB_00c5f6ac:
    if (*(long *)(piVar17 + -2) == _System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_00c5f6e0;
    }
  }
LAB_00c5f6c4:
  puVar7 = (undefined8 *)func_0x00a9e6c4(plVar19,_System_IDisposable_TypeInfo,0);
LAB_00c5f6e0:
  (*(code *)*puVar7)(plVar19,puVar7[1]);
LAB_00c5f6ec:
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar12 = UnityEngine_Object__op_Inequality(plVar18,0,0);
  if ((uVar12 & 1) != 0) {
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar12 = UnityEngine_Object__op_Inequality(plStack_b0,0,0);
    if ((uVar12 & 1) != 0) {
      if ((plVar18 == (long *)0x0) ||
         (uVar6 = UnityEngine_RectTransform__get_anchoredPosition(plVar18,0),
         plStack_b0 == (long *)0x0)) goto LAB_00c600b8;
      UnityEngine_RectTransform__get_anchoredPosition(plStack_b0,0);
      UnityEngine_RectTransform__set_anchoredPosition(uVar6,plStack_b0,0);
    }
  }
  if (*(long *)((long)__this + 0x440) != 0) {
    UnityEngine_GameObject__SetActive
              (*(long *)((long)__this + 0x440),*(int *)((long)__this + 0x42c) != 0,0);
    if (*(long *)((long)__this + 0x448) != 0) {
      UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x448),0,0);
      if (*(long *)((long)__this + 0x450) != 0) {
        UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x450),0,0);
        if (*(long *)((long)__this + 0x458) != 0) {
          UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x458),0,0);
          if (*(long *)((long)__this + 0x460) != 0) {
            UnityEngine_GameObject__SetActive
                      (*(long *)((long)__this + 0x460),
                       *(int *)((long)__this + 0x42c) < *(int *)((long)__this + 0x430),0);
            if (*(long *)((long)__this + 0x468) != 0) {
              UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x468),0,0);
              if (*(long *)((long)__this + 0x470) != 0) {
                UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x470),0,0);
                if (*(long *)((long)__this + 0x478) != 0) {
                  UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x478),0,0);
                  lVar15 = *(long *)((long)__this + 0x480);
                  uVar6 = 0;
                  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_BridgePHP_TypeInfo,0);
                    uVar6 = extraout_x1;
                  }
                  iVar14 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
                  if (iVar14 == 0xc) {
                    bVar2 = false;
                  }
                  else {
                    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30(_BridgePHP_TypeInfo,uVar6);
                      iVar14 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
                    }
                    bVar2 = iVar14 != 0xd;
                  }
                  if (lVar15 != 0) {
                    UnityEngine_GameObject__SetActive(lVar15,bVar2,0);
                    lVar15 = *(long *)((long)__this + 0x410);
                    if (lVar15 != 0) {
                      uVar12 = 0;
                      uVar6 = 0;
                      plVar18 = (long *)0x0;
                      plVar19 = (long *)((long)__this + 0x410);
                      uVar16 = (ulong)uVar1;
                      do {
                        if ((long)(int)*(uint *)(lVar15 + 0x18) <= (long)uVar12) {
                          iStack_74 = uVar1 + 1;
                          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          pvVar4 = (void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8);
                          uVar6 = System_Int32__ToString(&iStack_74,0);
                          if (uVar1 == 3) {
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
                            lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                            if (lVar15 == 0) break;
                            uVar12 = DAFNMLEKHAD__DPJPKMHLGMO(lVar15,0);
                            puVar7 = (undefined8 *)&Str__A;
                            if ((uVar12 & 1) == 0) {
                              puVar7 = (undefined8 *)&Str__B;
                            }
                            pvVar11 = (void *)System_String__Concat(_Str_TUTORIAL_,uVar6,*puVar7,0);
                            if ((pvVar4 == (void *)0x0) ||
                               (pvVar4 = Translate__JJJNIPAKLJF(pvVar4,pvVar11),
                               plVar18 == (long *)0x0)) break;
                            lVar15 = *plVar18;
                            plVar19 = plVar18;
LAB_00c602cc:
                            (**(code **)(lVar15 + 0x5a8))
                                      (plVar19,pvVar4,*(undefined8 *)(lVar15 + 0x5b0));
                          }
                          else {
                            pvVar11 = (void *)System_String__Concat(_Str_TUTORIAL_,uVar6,0);
                            if ((pvVar4 == (void *)0x0) ||
                               (pvVar4 = Translate__JJJNIPAKLJF(pvVar4,pvVar11),
                               plVar18 == (long *)0x0)) break;
                            (**(code **)(*plVar18 + 0x5a8))
                                      (plVar18,pvVar4,*(undefined8 *)(*plVar18 + 0x5b0));
                            if (uVar1 == 4) {
                              if ((*(long *)((long)__this + 0x420) != 0) &&
                                 (lVar15 = UnityEngine_Component__get_gameObject
                                                     (*(long *)((long)__this + 0x420),0),
                                 lVar15 != 0)) {
                                UnityEngine_GameObject__SetActive(lVar15,0,0);
                                plVar19 = *(long **)((long)__this + 0x420);
                                if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                                  func_0x00a67a30();
                                }
                                if (((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) !=
                                     (void *)0x0) &&
                                   (pvVar4 = Translate__JJJNIPAKLJF
                                                       ((void *)**(undefined8 **)
                                                                  (_Translate_TypeInfo + 0xb8),
                                                        _Str_TUTORIAL_5_TAP), plVar19 != (long *)0x0
                                   )) {
                                  lVar15 = *plVar19;
                                  goto LAB_00c602cc;
                                }
                              }
                              break;
                            }
                          }
                          lVar15 = (**(code **)(*plVar18 + 0x598))
                                             (plVar18,*(undefined8 *)(*plVar18 + 0x5a0));
                          uVar6 = System_Environment__get_NewLine(0);
                          if (lVar15 == 0) break;
                          uVar6 = System_String__Replace(lVar15,_Str__,uVar6,0);
                          (**(code **)(*plVar18 + 0x5a8))
                                    (plVar18,uVar6,*(undefined8 *)(*plVar18 + 0x5b0));
                          lVar15 = *(long *)((long)__this + 0x408);
                          uVar6 = func_0x00a67b44(_UnityEngine_RectOffset_TypeInfo);
                          if ((int)uVar1 < 3) {
                            uVar9 = 0x87;
                            uVar13 = 0x6e;
                          }
                          else {
                            uVar9 = 0x6e;
                            uVar13 = 0x46;
                          }
                          UnityEngine_RectOffset___ctor(uVar6,0,0,uVar9,uVar13,0);
                          if (lVar15 == 0) break;
                          UnityEngine_UI_LayoutGroup__set_padding(lVar15,uVar6,0);
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
                          lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                          if (lVar15 == 0) break;
                          if (*(int *)(lVar15 + 0x94) == 10) {
LAB_00c60498:
                            if ((uVar1 & 0xfffffffe) == 2) {
                              UnityEngine_UI_Text__set_fontSize(plVar18,0x3e,0);
                            }
                            UnityEngine_UI_Text__set_lineSpacing(0x3f99999a,plVar18,0);
                          }
                          else {
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
                            lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                            if (lVar15 == 0) break;
                            if (*(int *)(lVar15 + 0x94) == 0xb) goto LAB_00c60498;
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
                            lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                            if (lVar15 == 0) break;
                            if (*(int *)(lVar15 + 0x94) == 0xc) goto LAB_00c60498;
                          }
                          if (*(void **)((long)__this + 0x78) != (void *)0x0) {
                            GUIWindow__HEGIHOAJOKK(*(void **)((long)__this + 0x78),false);
                            return;
                          }
                          break;
                        }
                        if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_00c60508;
                        lVar15 = *(long *)(lVar15 + uVar12 * 8 + 0x20);
                        if (lVar15 != 0) {
                          uVar9 = *(undefined8 *)(lVar15 + 0x18);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar10 = UnityEngine_Object__op_Inequality(uVar9,0,0);
                          if ((uVar10 & 1) != 0) {
                            lVar15 = *plVar19;
                            if (lVar15 == 0) break;
                            if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_00c60508;
                            lVar15 = *(long *)(lVar15 + uVar12 * 8 + 0x20);
                            if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x18), lVar15 == 0))
                            break;
                            UnityEngine_GameObject__SetActive(lVar15,uVar12 == uVar16,0);
                          }
                          lVar15 = *plVar19;
                          if (lVar15 == 0) break;
                          if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_00c60508;
                          lVar15 = *(long *)(lVar15 + uVar12 * 8 + 0x20);
                          if (lVar15 == 0) break;
                          uVar9 = *(undefined8 *)(lVar15 + 0x40);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar10 = UnityEngine_Object__op_Inequality(uVar9,0,0);
                          lVar15 = *plVar19;
                          if ((uVar12 == uVar16) && ((uVar10 & 1) != 0)) {
                            if (lVar15 == 0) break;
                            if (*(uint *)(lVar15 + 0x18) <= uVar16) goto LAB_00c60508;
                            lVar5 = *(long *)(lVar15 + uVar16 * 8 + 0x20);
                            if (lVar5 == 0) break;
                            plVar18 = *(long **)(lVar5 + 0x40);
                          }
                          else if (lVar15 == 0) break;
                          if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_00c60508;
                          lVar15 = *(long *)(lVar15 + uVar12 * 8 + 0x20);
                          if (lVar15 == 0) break;
                          uVar9 = *(undefined8 *)(lVar15 + 0x20);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar10 = UnityEngine_Object__op_Inequality(uVar9,0,0);
                          if ((uVar10 & 1) != 0) {
                            lVar15 = *plVar19;
                            if (lVar15 == 0) break;
                            if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_00c60508;
                            lVar15 = *(long *)(lVar15 + uVar12 * 8 + 0x20);
                            if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x20), lVar15 == 0))
                            break;
                            UnityEngine_GameObject__SetActive(lVar15,0,0);
                          }
                          lVar15 = *plVar19;
                          if (lVar15 == 0) break;
                          if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_00c60508;
                          lVar15 = *(long *)(lVar15 + uVar12 * 8 + 0x20);
                          if (lVar15 == 0) break;
                          uVar9 = *(undefined8 *)(lVar15 + 0x28);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar10 = UnityEngine_Object__op_Inequality(uVar9,0,0);
                          if ((uVar10 & 1) != 0) {
                            lVar15 = *plVar19;
                            if (lVar15 == 0) break;
                            if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_00c60508;
                            lVar15 = *(long *)(lVar15 + uVar12 * 8 + 0x20);
                            if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x28), lVar15 == 0))
                            break;
                            UnityEngine_GameObject__SetActive(lVar15,0,0);
                          }
                          lVar15 = *plVar19;
                          if (lVar15 == 0) break;
                          if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_00c60508;
                          lVar15 = *(long *)(lVar15 + uVar12 * 8 + 0x20);
                          if (lVar15 == 0) break;
                          uVar9 = *(undefined8 *)(lVar15 + 0x30);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar10 = UnityEngine_Object__op_Inequality(uVar9,0,0);
                          if ((uVar10 & 1) != 0) {
                            lVar15 = *plVar19;
                            if (lVar15 == 0) break;
                            if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_00c60508;
                            lVar15 = *(long *)(lVar15 + uVar12 * 8 + 0x20);
                            if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x30), lVar15 == 0))
                            break;
                            UnityEngine_GameObject__SetActive(lVar15,0,0);
                          }
                          lVar15 = *plVar19;
                          if (lVar15 == 0) break;
                          if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_00c60508;
                          lVar15 = *(long *)(lVar15 + uVar12 * 8 + 0x20);
                          if (lVar15 == 0) break;
                          uVar9 = *(undefined8 *)(lVar15 + 0x38);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar10 = UnityEngine_Object__op_Inequality(uVar9,0,0);
                          if ((uVar10 & 1) != 0) {
                            lVar15 = *plVar19;
                            if (lVar15 == 0) break;
                            if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_00c60508;
                            lVar15 = *(long *)(lVar15 + uVar12 * 8 + 0x20);
                            if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x38), lVar15 == 0))
                            break;
                            UnityEngine_GameObject__SetActive(lVar15,0,0);
                          }
                          if (uVar1 == 3) {
                            lVar15 = *(long *)((long)__this + 0x418);
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
                            lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                            if ((lVar5 == 0) ||
                               (uVar3 = DAFNMLEKHAD__DPJPKMHLGMO(lVar5,0), lVar15 == 0)) break;
                            UnityEngine_GameObject__SetActive(lVar15,uVar3 & 1,0);
                          }
                          if (uVar12 == uVar16) {
                            lVar15 = *plVar19;
                            if (lVar15 == 0) break;
                            if (*(uint *)(lVar15 + 0x18) <= uVar16) goto LAB_00c60508;
                            lVar15 = *(long *)(lVar15 + uVar16 * 8 + 0x20);
                            if (lVar15 == 0) break;
                            lVar15 = *(long *)(lVar15 + 0x50);
                            uStack_78 = 0;
                            if (lVar15 == 0) break;
                            uVar3 = *(uint *)(lVar15 + 0x18);
                            if (0 < (int)uVar3) {
                              do {
                                if (uVar3 <= uStack_78) goto LAB_00c60508;
                                lVar5 = *(long *)(lVar15 + (long)(int)uStack_78 * 8 + 0x20);
                                if (lVar5 == 0) goto LAB_00c600b8;
                                UnityEngine_Transform__SetParent
                                          (lVar5,*(undefined8 *)((long)__this + 0x28),0);
                                uStack_78 = uStack_78 + 1;
                                uVar3 = *(uint *)(lVar15 + 0x18);
                              } while ((int)uStack_78 < (int)uVar3);
                            }
                            if (*(long *)((long)__this + 0x488) == 0) break;
                            UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x488),0,0);
                            lVar15 = *plVar19;
                            if (lVar15 == 0) break;
                            if (*(uint *)(lVar15 + 0x18) <= uVar16) goto LAB_00c60508;
                            lVar15 = *(long *)(lVar15 + uVar16 * 8 + 0x20);
                            if (lVar15 == 0) break;
                            uVar9 = *(undefined8 *)(lVar15 + 0x28);
                            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                            }
                            uVar10 = UnityEngine_Object__op_Inequality(uVar9,0,0);
                            if ((uVar10 & 1) != 0) {
                              lVar15 = *plVar19;
                              if (lVar15 == 0) break;
                              if (*(uint *)(lVar15 + 0x18) <= uVar16) goto LAB_00c60508;
                              lVar15 = *(long *)(lVar15 + uVar16 * 8 + 0x20);
                              if (lVar15 == 0) break;
                              uVar9 = *(undefined8 *)(lVar15 + 0x18);
                              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              uVar10 = UnityEngine_Object__op_Inequality(uVar9,0,0);
                              if ((uVar10 & 1) != 0) {
                                if (*(long *)((long)__this + 0x488) == 0) break;
                                lVar15 = UnityEngine_GameObject__get_transform
                                                   (*(long *)((long)__this + 0x488),0);
                                lVar5 = *plVar19;
                                if (lVar5 == 0) break;
                                if (*(uint *)(lVar5 + 0x18) <= uVar16) goto LAB_00c60508;
                                lVar5 = *(long *)(lVar5 + uVar16 * 8 + 0x20);
                                if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x18), lVar5 == 0))
                                   || (uVar9 = UnityEngine_GameObject__get_transform(lVar5,0),
                                      lVar15 == 0)) break;
                                UnityEngine_Transform__set_parent(lVar15,uVar9,0);
                              }
                            }
                            if (*(long *)((long)__this + 0x490) == 0) break;
                            UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x490),0,0);
                            lVar15 = *plVar19;
                            if (lVar15 == 0) break;
                            if (*(uint *)(lVar15 + 0x18) <= uVar16) goto LAB_00c60508;
                            lVar15 = *(long *)(lVar15 + uVar16 * 8 + 0x20);
                            if (lVar15 == 0) break;
                            uVar9 = *(undefined8 *)(lVar15 + 0x30);
                            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                            }
                            uVar10 = UnityEngine_Object__op_Inequality(uVar9,0,0);
                            if ((uVar10 & 1) != 0) {
                              lVar15 = *plVar19;
                              if (lVar15 == 0) break;
                              if (*(uint *)(lVar15 + 0x18) <= uVar16) goto LAB_00c60508;
                              lVar15 = *(long *)(lVar15 + uVar16 * 8 + 0x20);
                              if (lVar15 == 0) break;
                              uVar9 = *(undefined8 *)(lVar15 + 0x18);
                              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              uVar10 = UnityEngine_Object__op_Inequality(uVar9,0,0);
                              if ((uVar10 & 1) != 0) {
                                if (*(long *)((long)__this + 0x490) == 0) break;
                                lVar15 = UnityEngine_GameObject__get_transform
                                                   (*(long *)((long)__this + 0x490),0);
                                lVar5 = *plVar19;
                                if (lVar5 == 0) break;
                                if (*(uint *)(lVar5 + 0x18) <= uVar16) goto LAB_00c60508;
                                lVar5 = *(long *)(lVar5 + uVar16 * 8 + 0x20);
                                if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x18), lVar5 == 0))
                                   || (uVar9 = UnityEngine_GameObject__get_transform(lVar5,0),
                                      lVar15 == 0)) break;
                                UnityEngine_Transform__set_parent(lVar15,uVar9,0);
                              }
                            }
                            if (*(long *)((long)__this + 0x498) == 0) break;
                            UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x498),0,0);
                            lVar15 = *plVar19;
                            if (lVar15 == 0) break;
                            if (*(uint *)(lVar15 + 0x18) <= uVar16) goto LAB_00c60508;
                            lVar15 = *(long *)(lVar15 + uVar16 * 8 + 0x20);
                            if (lVar15 == 0) break;
                            uVar9 = *(undefined8 *)(lVar15 + 0x38);
                            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                            }
                            uVar10 = UnityEngine_Object__op_Inequality(uVar9,0,0);
                            if ((uVar10 & 1) != 0) {
                              lVar15 = *plVar19;
                              if (lVar15 == 0) break;
                              if (*(uint *)(lVar15 + 0x18) <= uVar16) goto LAB_00c60508;
                              lVar15 = *(long *)(lVar15 + uVar16 * 8 + 0x20);
                              if (lVar15 == 0) break;
                              uVar9 = *(undefined8 *)(lVar15 + 0x18);
                              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              uVar10 = UnityEngine_Object__op_Inequality(uVar9,0,0);
                              if ((uVar10 & 1) != 0) {
                                if (*(long *)((long)__this + 0x498) == 0) break;
                                lVar15 = UnityEngine_GameObject__get_transform
                                                   (*(long *)((long)__this + 0x498),0);
                                lVar5 = *plVar19;
                                if (lVar5 == 0) break;
                                if (*(uint *)(lVar5 + 0x18) <= uVar16) goto LAB_00c60508;
                                lVar5 = *(long *)(lVar5 + uVar16 * 8 + 0x20);
                                if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x18), lVar5 == 0))
                                   || (uVar9 = UnityEngine_GameObject__get_transform(lVar5,0),
                                      lVar15 == 0)) break;
                                UnityEngine_Transform__set_parent(lVar15,uVar9,0);
                              }
                            }
                          }
                          lVar15 = *plVar19;
                          if (lVar15 == 0) break;
                          if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_00c60508;
                          lVar15 = *(long *)(lVar15 + uVar12 * 8 + 0x20);
                          if (lVar15 == 0) break;
                          uVar9 = *(undefined8 *)(lVar15 + 0x48);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar10 = UnityEngine_Object__op_Inequality(uVar9,0,0);
                          if ((uVar10 & 1) != 0) {
                            lVar15 = *plVar19;
                            if (lVar15 == 0) break;
                            if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_00c60508;
                            lVar15 = *(long *)(lVar15 + uVar12 * 8 + 0x20);
                            if (lVar15 == 0) break;
                            if (uVar12 == uVar16) {
                              if (*(long *)(lVar15 + 0x48) == 0) break;
                              UnityEngine_GameObject__SetActive(*(long *)(lVar15 + 0x48),1,0);
                              lVar15 = *plVar19;
                              if (lVar15 == 0) break;
                              if (*(uint *)(lVar15 + 0x18) <= uVar16) goto LAB_00c60508;
                              lVar15 = *(long *)(lVar15 + uVar16 * 8 + 0x20);
                              if (lVar15 == 0) break;
                              uVar6 = *(undefined8 *)(lVar15 + 0x48);
                            }
                            else {
                              uVar9 = *(undefined8 *)(lVar15 + 0x48);
                              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              uVar10 = UnityEngine_Object__op_Inequality(uVar6,uVar9,0);
                              if ((uVar10 & 1) != 0) {
                                lVar15 = *plVar19;
                                if (lVar15 == 0) break;
                                if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_00c60508;
                                lVar15 = *(long *)(lVar15 + uVar12 * 8 + 0x20);
                                if ((lVar15 == 0) ||
                                   (lVar15 = *(long *)(lVar15 + 0x48), lVar15 == 0)) break;
                                UnityEngine_GameObject__SetActive(lVar15,0,0);
                              }
                            }
                          }
                        }
                        lVar15 = *plVar19;
                        uVar12 = uVar12 + 1;
                      } while (lVar15 != 0);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00c600b8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void OOABHKFNLEJ() { }   @0xb61540

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__OOABHKFNLEJ(void *__this)

{
  return;
}


// ==== public void ButtonTutorialCrashCancel() { }   @0xb61d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonTutorialCrashCancel(void *__this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 auStack_28 [2];
  
  if (*(long *)((long)__this + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  GUIWindow__JGDCBENNDFO(*(long *)((long)__this + 0x80),0,0);
  if ((bRam0000000001917230 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Str_garage);
    bRam0000000001917230 = 1;
  }
  UnityEngine_Time__set_timeScale(0,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar3 != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar3 == 0) goto LAB_00c61fec;
    }
    if (*(int *)(lVar3 + 0x10) == -1) {
LAB_00c61f14:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 8) = 1;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c61fec;
        uVar2 = Menu__CLJDAMIIAKE(**(long **)(_Menu_TypeInfo + 0xb8),0);
        if ((uVar2 & 1) != 0) goto LAB_00c61f14;
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar3 == 0) goto LAB_00c61fec;
      uVar2 = Level__get_IsEvent(lVar3,0);
      if ((uVar2 & 1) != 0) goto LAB_00c61f14;
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if (lVar3 == 0) {
LAB_00c61fec:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*(int *)(lVar3 + 0x10) == -1) {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar3 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x20);
      if (lVar3 == 0) goto LAB_00c61fec;
      uVar2 = UnityEngine_AudioSource__get_isPlaying(lVar3,0);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar3 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x20);
        if (lVar3 == 0) goto LAB_00c61fec;
        UnityEngine_AudioSource__Stop(lVar3,0);
      }
    }
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = _Str_garage;
  if ((bRam000000000191720b & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam000000000191720b = 1;
  }
  if (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  auStack_28[0] = UnityEngine_SceneManagement_SceneManager__GetActiveScene(0);
  iVar1 = UnityEngine_SceneManagement_Scene__get_buildIndex(auStack_28,0);
  if (iVar1 == 0) {
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
    if (lVar3 == 0) goto LAB_00c5e61c;
    uVar2 = UnityEngine_AudioSource__get_isPlaying(lVar3,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar3 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
      if (lVar3 == 0) goto LAB_00c5e61c;
      UnityEngine_AudioSource__Stop(lVar3,0);
    }
  }
  else {
    if (iVar1 < 1) goto LAB_00c5e5f0;
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar3 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x70);
      if (lVar3 == 0) goto LAB_00c5e61c;
      UnityEngine_AudioSource__Pause(lVar3,0);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar3 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x48), lVar3 == 0))
      goto LAB_00c5e61c;
      UnityEngine_AudioSource__Stop(lVar3,0);
    }
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
    if (lVar3 == 0) {
LAB_00c5e61c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar2 = UnityEngine_AudioSource__get_isPlaying(lVar3,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      auStack_28[0] = UnityEngine_SceneManagement_SceneManager__GetActiveScene(0);
      uVar5 = UnityEngine_SceneManagement_Scene__get_name(auStack_28,0);
      uVar2 = System_String__op_Inequality(uVar5,uVar4,0);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar3 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
        if (lVar3 == 0) goto LAB_00c5e61c;
        UnityEngine_AudioSource__Stop(lVar3,0);
      }
    }
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    SoundScript__HCPNLKMMKFA();
  }
LAB_00c5e5f0:
  if (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_SceneManagement_SceneManager__LoadScene(uVar4,0);
  return;
}


// ==== public void POCPBLEDNJH() { }   @0xb62160

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__POCPBLEDNJH(void *__this)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(long *)((long)__this + 0x4f0) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x4f0),0), lVar1 != 0))
  {
    uVar2 = UnityEngine_GameObject__get_activeSelf(lVar1,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if ((*(long *)((long)__this + 0x4f0) != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x4f0),0), lVar1 != 0
       )) {
      if (pcRam000000000191c3f8 == (code *)0x0) {
        pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
      }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c3f8)(lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb62928

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay___ctor(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam0000000001917222 & 1) == 0) {
    func_0x00a67900(&GUICoins___TypeInfo);
    func_0x00a67900(&UnityEngine_UI_Image___TypeInfo);
    bRam0000000001917222 = 1;
  }
  *(undefined4 *)((long)__this + 0x138) = 1;
  *(undefined8 *)((long)__this + 0x160) = 0x3f8000003e4ccccd;
  *(undefined8 *)((long)__this + 0x158) = 0x3e4ccccd3f800000;
  *(undefined8 *)((long)__this + 0x170) = 0x3f8000003e19999a;
  *(undefined8 *)((long)__this + 0x168) = 0x3f19999a3f800000;
  *(undefined8 *)((long)__this + 0x1ec) = 0x3f8000003f800000;
  *(undefined8 *)((long)__this + 0x1e4) = 0x3f80000040a00000;
  *(undefined4 *)((long)__this + 500) = 0x3f800000;
  uVar1 = func_0x00a679a0(_UnityEngine_UI_Image___TypeInfo,3);
  *(undefined8 *)((long)__this + 0x250) = uVar1;
  uVar1 = func_0x00a679a0(_GUICoins___TypeInfo,3);
  *(undefined8 *)((long)__this + 600) = uVar1;
  *(undefined8 *)((long)__this + 0x42c) = 0x1ffffffff;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public void ShowResultResourcesHints(string translate_key) { }   @0xb62ee0

/* WARNING: Removing unreachable block (ram,0x00c16680) */
/* WARNING: Removing unreachable block (ram,0x00c63024) */
/* WARNING: Removing unreachable block (ram,0x00c63028) */
/* WARNING: Removing unreachable block (ram,0x00c63090) */
/* WARNING: Removing unreachable block (ram,0x00c63098) */
/* WARNING: Removing unreachable block (ram,0x00c630a4) */
/* WARNING: Removing unreachable block (ram,0x00c630b0) */
/* WARNING: Removing unreachable block (ram,0x00c630bc) */
/* WARNING: Removing unreachable block (ram,0x00c630c8) */
/* WARNING: Removing unreachable block (ram,0x00c630d0) */
/* WARNING: Removing unreachable block (ram,0x00c630dc) */
/* WARNING: Removing unreachable block (ram,0x00c630e8) */
/* WARNING: Removing unreachable block (ram,0x00c630f0) */
/* WARNING: Removing unreachable block (ram,0x00c63150) */
/* WARNING: Removing unreachable block (ram,0x00c63158) */
/* WARNING: Removing unreachable block (ram,0x00c63164) */
/* WARNING: Removing unreachable block (ram,0x00c63170) */
/* WARNING: Removing unreachable block (ram,0x00c6317c) */
/* WARNING: Removing unreachable block (ram,0x00c63008) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ShowResultResourcesHints(void *__this,void *translate_key)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long unaff_x23;
  undefined8 uVar10;
  long *unaff_x25;
  undefined8 unaff_x30;
  undefined4 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  undefined8 uStack_40;
  
  if ((bRam0000000001917225 & 1) == 0) {
    func_0x00a67900(&Translate_TypeInfo);
    bRam0000000001917225 = 1;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  pvVar5 = Translate__JJJNIPAKLJF
                     ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8),translate_key);
  uStack_40 = unaff_x30;
  if ((bRam0000000001917227 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Error_with_hints_);
    bRam0000000001917227 = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar8 = *(long *)((long)__this + 0x1f8);
  if (lVar8 == 0) goto LAB_00c63204;
  if (7 < (int)*(uint *)(lVar8 + 0x18)) {
    if (*(uint *)(lVar8 + 0x18) < 8) {
LAB_00c63208:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    uVar10 = *(undefined8 *)(lVar8 + 0x58);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if ((uVar6 & 1) != 0) {
      lVar8 = *(long *)((long)__this + 0x1f8);
      if (lVar8 == 0) goto LAB_00c63204;
      if (*(uint *)(lVar8 + 0x18) < 8) goto LAB_00c63208;
      if ((*(long *)(lVar8 + 0x58) == 0) ||
         (plVar7 = *(long **)(*(long *)(lVar8 + 0x58) + 0x88), plVar7 == (long *)0x0)) {
LAB_00c63204:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      (**(code **)(*plVar7 + 0x5a8))(plVar7,pvVar5,*(undefined8 *)(*plVar7 + 0x5b0));
      lVar8 = *(long *)((long)__this + 0x1f8);
      if (lVar8 == 0) goto LAB_00c63204;
      if (*(uint *)(lVar8 + 0x18) < 8) goto LAB_00c63208;
      lVar8 = *(long *)(lVar8 + 0x58);
      if (lVar8 == 0) goto LAB_00c63204;
      if ((bRam0000000001916e09 & 1) == 0) {
        func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___,0);
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        bRam0000000001916e09 = 1;
      }
      if (*(char *)(lVar8 + 0x20) == '\0') {
        if (*(int *)(lVar8 + 0x28) != 4) {
          UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                    (lVar8,&stack0xffffffffffffffd8,
                     _Method_UnityEngine_Component_GetComponent_RectTransform___);
          *(long *)(lVar8 + 0x70) = unaff_x23;
          if (unaff_x23 == 0) goto LAB_00bd9510;
          uVar11 = UnityEngine_Transform__get_localScale(unaff_x23,0);
          *(undefined4 *)(lVar8 + 0x90) = uVar11;
          if (*(long *)(lVar8 + 0x70) == 0) goto LAB_00bd9510;
          UnityEngine_Transform__get_localPosition(*(long *)(lVar8 + 0x70),0);
          *(undefined4 *)(lVar8 + 0x94) = in_s1;
        }
        plVar7 = *(long **)(lVar8 + 0x78);
        if (plVar7 == (long *)0x0) goto LAB_00bd9510;
        uVar11 = (**(code **)(*plVar7 + 0x298))(plVar7,*(undefined8 *)(*plVar7 + 0x2a0));
        *(undefined4 *)(lVar8 + 0x30) = uVar11;
        *(undefined4 *)(lVar8 + 0x34) = in_s1;
        *(undefined4 *)(lVar8 + 0x38) = in_s2;
        *(undefined4 *)(lVar8 + 0x3c) = in_s3;
        *(undefined4 *)(lVar8 + 0x50) = uVar11;
        *(undefined4 *)(lVar8 + 0x54) = in_s1;
        *(undefined4 *)(lVar8 + 0x58) = in_s2;
        *(undefined4 *)(lVar8 + 0x5c) = in_s3;
        uVar10 = *(undefined8 *)(lVar8 + 0x88);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar10,0,0);
        if ((uVar6 & 1) != 0) {
          plVar7 = *(long **)(lVar8 + 0x88);
          if (plVar7 == (long *)0x0) goto LAB_00bd9510;
          (**(code **)(*plVar7 + 0x2a8))
                    (ZEXT816(0x3f800000),0x3f800000,0x3f800000,0x3f800000,plVar7,
                     *(undefined8 *)(*plVar7 + 0x2b0));
          auVar13 = NEON_fmov(0x3f800000,4);
          *(long *)(lVar8 + 0x68) = auVar13._8_8_;
          *(long *)(lVar8 + 0x60) = auVar13._0_8_;
        }
        *(undefined1 *)(lVar8 + 0x20) = 1;
      }
      else {
        plVar7 = *(long **)(lVar8 + 0x78);
        *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)(lVar8 + 0x50);
        *(undefined4 *)(lVar8 + 0x34) = *(undefined4 *)(lVar8 + 0x54);
        *(undefined4 *)(lVar8 + 0x38) = *(undefined4 *)(lVar8 + 0x58);
        *(undefined4 *)(lVar8 + 0x3c) = *(undefined4 *)(lVar8 + 0x5c);
        if (plVar7 == (long *)0x0) goto LAB_00bd9510;
        (**(code **)(*plVar7 + 0x2a8))(plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
        uVar10 = *(undefined8 *)(lVar8 + 0x88);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar10,0,0);
        if ((uVar6 & 1) != 0) {
          plVar7 = *(long **)(lVar8 + 0x88);
          *(undefined4 *)(lVar8 + 0x40) = *(undefined4 *)(lVar8 + 0x60);
          *(undefined4 *)(lVar8 + 0x44) = *(undefined4 *)(lVar8 + 100);
          *(undefined4 *)(lVar8 + 0x48) = *(undefined4 *)(lVar8 + 0x68);
          *(undefined4 *)(lVar8 + 0x4c) = *(undefined4 *)(lVar8 + 0x6c);
          if (plVar7 == (long *)0x0) goto LAB_00bd9510;
          (**(code **)(*plVar7 + 0x2a8))(plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
        }
      }
      *(undefined4 *)(lVar8 + 0x2c) = 0;
      lVar2 = UnityEngine_Component__get_gameObject(lVar8,0);
      if (lVar2 != 0) {
        UnityEngine_GameObject__SetActive(lVar2,1,0);
        uVar10 = *(undefined8 *)(lVar8 + 0x70);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar10,0,0);
        if ((uVar6 & 1) != 0) {
          uVar10 = *(undefined8 *)(lVar8 + 0x88);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar6 = UnityEngine_Object__op_Inequality(uVar10,0,0);
          if (((uVar6 & 1) != 0) && (*(int *)(lVar8 + 0x28) != 6)) {
            plVar7 = *(long **)(lVar8 + 0x88);
            if (plVar7 != (long *)0x0) {
              lVar9 = *(long *)(lVar8 + 0x70);
              lVar2 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0));
              if (lVar2 != 0) {
                fVar12 = (float)*(int *)(lVar2 + 0x10) / 20.0;
                fVar14 = fVar12;
                if (1.0 < fVar12) {
                  fVar14 = 1.0;
                }
                fVar14 = fVar14 * 580.0 + 420.0;
                if (fVar12 < 0.0) {
                  fVar14 = 420.0;
                }
                if ((*(long *)(lVar8 + 0x70) != 0) &&
                   (UnityEngine_RectTransform__get_sizeDelta(*(long *)(lVar8 + 0x70),0), lVar9 != 0)
                   ) {
                  UnityEngine_RectTransform__set_sizeDelta(fVar14,lVar9,0);
                  return;
                }
              }
            }
            goto LAB_00bd9510;
          }
        }
        return;
      }
LAB_00bd9510:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar7 = _Str_Error_with_hints_;
  if ((bRam0000000001917204 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Debug_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917204 = 1;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__LogError(plVar7,0);
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
  lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar8 == 0) {
LAB_00c5d818:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar6 = DAFNMLEKHAD__LLEFEIHEJDE(lVar8,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar10 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c5d818;
  uVar10 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar7 == (long *)0x0)) goto LAB_00c5d818;
  lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar10 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
  if (lVar8 == 0) goto LAB_00c5d818;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar10,1,0);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&float_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str____color___);
    func_0x00a67900(&Str__FF4E4A);
    func_0x00a67900(&Str__0_f2_);
    func_0x00a67900(&Str___);
    func_0x00a67900(&Str__78e938);
    func_0x00a67900(&Str_);
    func_0x00a67900(&Str__color_);
    bRam0000000001916fbb = 1;
  }
  plVar7 = *(long **)(lVar8 + 0x1e8);
  if ((plVar7 == (long *)0x0) ||
     (lVar2 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0)), lVar2 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar2 + 0x10)) {
    if (*(long *)(lVar8 + 0x1e8) == 0) goto LAB_00c16768;
    uVar3 = UnityEngine_Component__get_gameObject(*(long *)(lVar8 + 0x1e8),0);
    if ((*(long *)(lVar8 + 0x1e8) == 0) ||
       (lVar2 = UnityEngine_Component__get_transform(*(long *)(lVar8 + 0x1e8),0), lVar2 == 0))
    goto LAB_00c16768;
    uVar4 = UnityEngine_Transform__get_parent(lVar2,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar2 = UnityEngine_Object__Instantiate_object_
                      (uVar3,uVar4,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar2 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar2,&stack0xffffffffffffffc8,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar8 + 0x1e8) = unaff_x25;
    if (unaff_x25 == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*unaff_x25 + 0x5a8))(unaff_x25,_Str_,*(undefined8 *)(*unaff_x25 + 0x5b0));
  }
  plVar7 = *(long **)(lVar8 + 0x1e8);
  lVar8 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar7 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0)), lVar8 != 0))
  {
    uVar1 = *(uint *)(lVar8 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar8 + 0x20) = uVar3, uVar1 != 1 &&
         (*(undefined8 *)(lVar8 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar8 + 0x30) = _Str__FF4E4A, uVar1 != 3)))) {
      *(undefined8 *)(lVar8 + 0x38) = _Str___;
      uVar11 = UnityEngine_Time__get_time(0);
      uStack_40 = CONCAT44(uVar11,(undefined4)uStack_40);
      uVar3 = func_0x00a67a38(_float_TypeInfo,(long)&uStack_40 + 4);
      uVar3 = System_String__Format(_Str__0_f2_,uVar3,0);
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar8 + 0x40) = uVar3, uVar1 != 5)) &&
         (*(undefined8 *)(lVar8 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar8 + 0x50) = uVar10;
        uVar10 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar8 + 0x18)) {
          *(undefined8 *)(lVar8 + 0x58) = uVar10;
          uVar10 = System_String__Concat(lVar8,0);
          (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar10,*(undefined8 *)(*plVar7 + 0x5b0));
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
LAB_00c16768:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void CEFDKCEFHAK() { }   @0xb63584

/* WARNING: Removing unreachable block (ram,0x00c63aec) */
/* WARNING: Removing unreachable block (ram,0x00c63e90) */
/* WARNING: Removing unreachable block (ram,0x00c63e9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__CEFDKCEFHAK(void *__this)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plStack_70;
  long *plStack_68;
  
  if ((bRam0000000001917229 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_HorizontalLayoutGroup___);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Text___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_CarReplay___);
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_Transform_TypeInfo);
    func_0x00a67900(&Str_player_name);
    func_0x00a67900(&Str_flag);
    bRam0000000001917229 = 1;
  }
  if (*(long *)((long)__this + 0x50) != 0) {
    uVar9 = *(undefined8 *)((long)__this + 0x1a0);
    uVar1 = UnityEngine_Component__get_transform(*(long *)((long)__this + 0x50),0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar2 = UnityEngine_Object__Instantiate_object_
                      (uVar9,uVar1,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar2 != 0) {
      lVar2 = UnityEngine_GameObject__get_transform(lVar2,0);
      *(long *)((long)__this + 0x1a8) = lVar2;
      if (lVar2 != 0) {
        UnityEngine_Transform__SetAsFirstSibling(lVar2,0);
        if (*(long *)((long)__this + 0x50) != 0) {
          uVar9 = *(undefined8 *)((long)__this + 0x1a0);
          uVar1 = UnityEngine_Component__get_transform(*(long *)((long)__this + 0x50),0);
          lVar2 = UnityEngine_Object__Instantiate_object_
                            (uVar9,uVar1,_Method_UnityEngine_Object_Instantiate_GameObject___);
          if (lVar2 != 0) {
            lVar2 = UnityEngine_GameObject__get_transform(lVar2,0);
            *(long *)((long)__this + 0x1b0) = lVar2;
            if (lVar2 != 0) {
              UnityEngine_Transform__SetAsFirstSibling(lVar2,0);
              if (*(long *)((long)__this + 0x1b0) != 0) {
                UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                          (*(long *)((long)__this + 0x1b0),&plStack_68,
                           _Method_UnityEngine_Component_GetComponent_HorizontalLayoutGroup___);
                *(long **)((long)__this + 0x1c0) = plStack_68;
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar3 = UnityEngine_Object__op_Inequality
                                  (*(undefined8 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x38),0,0);
                if ((uVar3 & 1) != 0) {
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x38);
                  if (lVar2 == 0) goto LAB_00c63e6c;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar2,&plStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_CarReplay___);
                  *(long **)((long)__this + 0x1b8) = plStack_68;
                }
                if (*(long *)((long)__this + 0x1a8) != 0) {
                  plVar4 = (long *)UnityEngine_Transform__GetEnumerator
                                             (*(long *)((long)__this + 0x1a8),0);
                  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_throw_967b50();
                  }
                  do {
                    lVar2 = *plVar4;
                    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    if (uVar3 != 0) {
                      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                          puVar5 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
                          goto LAB_00c63820;
                        }
                        uVar3 = uVar3 - 1;
                        piVar8 = piVar8 + 4;
                      } while (uVar3 != 0);
                    }
                    puVar5 = (undefined8 *)
                             func_0x00a9e6c4(plVar4,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00c63820:
                    uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                    if ((uVar3 & 1) == 0) {
                      plVar4 = (long *)func_0x00a67a34(plVar4,_System_IDisposable_TypeInfo);
                      if (plVar4 == (long *)0x0) goto LAB_00c63ae0;
                      lVar2 = *plVar4;
                      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                      if (uVar3 == 0) goto LAB_00c63ab8;
                      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                      goto LAB_00c63aa0;
                    }
                    lVar2 = *plVar4;
                    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    if (uVar3 != 0) {
                      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                          puVar5 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                          goto LAB_00c63880;
                        }
                        uVar3 = uVar3 - 1;
                        piVar8 = piVar8 + 4;
                      } while (uVar3 != 0);
                    }
                    puVar5 = (undefined8 *)
                             func_0x00a9e6c4(plVar4,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00c63880:
                    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
                    if (plVar6 == (long *)0x0) goto LAB_00c63e38;
                    if ((*(byte *)(*plVar6 + 0x130) <
                         *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
                       (*(long *)(*(long *)(*plVar6 + 200) +
                                  (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8
                                 ) != _UnityEngine_Transform_TypeInfo)) {
                      func_0x00a67eec(plVar6);
                      goto LAB_00c63e30;
                    }
                    lVar2 = UnityEngine_Object__get_name(plVar6,0);
                    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_throw_967b50();
                    }
                    uVar3 = System_String__Contains(lVar2,_Str_flag,0);
                    if ((uVar3 & 1) == 0) {
                      lVar2 = UnityEngine_Object__get_name(plVar6,0);
                      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_throw_967b50();
                      }
                      uVar3 = System_String__Contains(lVar2,_Str_player_name,0);
                      if ((uVar3 & 1) != 0) {
                        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                                  (plVar6,&plStack_70,
                                   _Method_UnityEngine_Component_GetComponent_Text___);
                        plVar6 = plStack_70;
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
                        lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_throw_967b50();
                        }
                        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_throw_967b50();
                        }
                        (**(code **)(*plVar6 + 0x5a8))
                                  (plVar6,*(undefined8 *)(lVar2 + 0x20),
                                   *(undefined8 *)(*plVar6 + 0x5b0));
                      }
                    }
                    else {
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_throw_967b50();
                      }
                      lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
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
                      lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_throw_967b50();
                      }
                      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_throw_967b50();
                      }
                      uVar1 = BridgePHP__GetCountryTextureFromID
                                        (lVar2,*(undefined4 *)(lVar7 + 0x14),0);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
                      if ((uVar3 & 1) != 0) {
                        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                                  (plVar6,&plStack_70,
                                   _Method_UnityEngine_Component_GetComponent_Image___);
                        if (plStack_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_throw_967b50();
                        }
                        UnityEngine_UI_Image__set_sprite(plStack_70,uVar1,0);
                      }
                    }
                  } while( true );
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_00c63e6c;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
LAB_00c63dc4:
    if (*(long *)(piVar8 + -2) == _System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_00c63df8;
    }
  }
LAB_00c63ddc:
  puVar5 = (undefined8 *)func_0x00a9e6c4(plVar4,_System_IDisposable_TypeInfo,0);
LAB_00c63df8:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
LAB_00c63aa0:
    if (*(long *)(piVar8 + -2) == _System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_00c63ad4;
    }
  }
LAB_00c63ab8:
  puVar5 = (undefined8 *)func_0x00a9e6c4(plVar4,_System_IDisposable_TypeInfo,0);
LAB_00c63ad4:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_00c63ae0:
  if (*(long *)((long)__this + 0x1b0) != 0) {
    plVar4 = (long *)UnityEngine_Transform__GetEnumerator(*(long *)((long)__this + 0x1b0),0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    do {
      lVar2 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo) {
            puVar5 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_00c63b8c;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)func_0x00a9e6c4(plVar4,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00c63b8c:
      uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar3 & 1) == 0) {
        plVar4 = (long *)func_0x00a67a34(plVar4,_System_IDisposable_TypeInfo);
        if (plVar4 == (long *)0x0) {
          return;
        }
        lVar2 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 == 0) goto LAB_00c63ddc;
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_00c63dc4;
      }
      lVar2 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo) {
            puVar5 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_00c63bec;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)func_0x00a9e6c4(plVar4,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00c63bec:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
         (*(long *)(*(long *)(*plVar6 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8) !=
          _UnityEngine_Transform_TypeInfo)) {
LAB_00c63e30:
        func_0x00a67eec(plVar6);
LAB_00c63e38:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      lVar2 = UnityEngine_Object__get_name(plVar6,0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar3 = System_String__Contains(lVar2,_Str_flag,0);
      if ((uVar3 & 1) == 0) {
        lVar2 = UnityEngine_Object__get_name(plVar6,0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar3 = System_String__Contains(lVar2,_Str_player_name,0);
        if ((uVar3 & 1) != 0) {
          UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                    (plVar6,&plStack_68,_Method_UnityEngine_Component_GetComponent_Text___);
          plVar6 = plStack_68;
          *(long **)((long)__this + 0x1d0) = plStack_68;
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          lVar2 = *(long *)(lVar2 + 0x60);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          (**(code **)(*plVar6 + 0x5a8))
                    (plVar6,*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(*plVar6 + 0x5b0));
        }
      }
      else {
        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                  (plVar6,&plStack_68,_Method_UnityEngine_Component_GetComponent_Image___);
        *(long **)((long)__this + 0x1c8) = plStack_68;
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        lVar7 = *(long *)(lVar7 + 0x60);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar1 = BridgePHP__GetCountryTextureFromID(lVar2,*(undefined4 *)(lVar7 + 0x20),0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)((long)__this + 0x1c8) == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          UnityEngine_UI_Image__set_sprite(*(long *)((long)__this + 0x1c8),uVar1,0);
        }
      }
    } while( true );
  }
LAB_00c63e6c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonSettingsAccelerometer() { }   @0xb644fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonSettingsAccelerometer(void *__this)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  float in_s2;
  float fVar9;
  float in_s3;
  float fVar10;
  
  if ((bRam000000000191722c & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam000000000191722c = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
  }
  else {
    lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if ((lVar4 == 0) || (uVar2 = DAFNMLEKHAD__DPJPKMHLGMO(lVar4,0), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  DAFNMLEKHAD__KHIFJCACGNC(lVar7,~uVar2 & 1,0);
  GUIGameplay__DMFIDCENMJF(__this);
  if ((bRam000000000191723b & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam000000000191723b = 1;
  }
  plVar6 = *(long **)((long)__this + 0x398);
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
  lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if ((lVar7 == 0) || (uVar3 = DAFNMLEKHAD__DPJPKMHLGMO(lVar7,0), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  lVar7 = 0x3a8;
  if ((uVar3 & 1) == 0) {
    lVar7 = 0x3a0;
  }
  lVar7 = *(long *)((long)__this + lVar7);
  if ((bRam000000000191db6f & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,lVar7,0);
    bRam000000000191db6f = 1;
  }
  lVar4 = plVar6[0x1b];
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(lVar4,0,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(lVar7,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (lVar7 != 0) {
      UnityEngine_Sprite__get_rect(lVar7,0);
      if (cRam0000000001916788 == '\0') {
        func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
        cRam0000000001916788 = '\x01';
      }
      in_s2 = in_s2 - **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
      in_s3 = in_s3 - (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
      *(bool *)(plVar6 + 7) = in_s2 * in_s2 + in_s3 * in_s3 < 9.9999994e-11;
      uVar5 = UnityEngine_Sprite__get_texture(lVar7,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar8 = 0;
LAB_01550934:
      bVar1 = UnityEngine_Object__op_Equality(uVar5,uVar8,0);
      *(byte *)((long)plVar6 + 0x39) = bVar1 & 1;
      plVar6[0x1b] = lVar7;
      UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(plVar6);
      (**(code **)(*plVar6 + 0x2d8))(plVar6,*(undefined8 *)(*plVar6 + 0x2e0));
      UnityEngine_UI_Image__TrackSprite(plVar6);
      return;
    }
  }
  else {
    lVar4 = plVar6[0x1b];
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(lVar4,lVar7,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (plVar6[0x1b] != 0) {
      UnityEngine_Sprite__get_rect(plVar6[0x1b],0);
      fVar9 = in_s2;
      fVar10 = in_s3;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Implicit(lVar7,0);
      if ((uVar3 & 1) == 0) {
        if (cRam0000000001916788 == '\0') {
          func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
          cRam0000000001916788 = '\x01';
        }
        fVar9 = **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
        fVar10 = (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
      }
      else {
        if (lVar7 == 0) goto LAB_01550984;
        UnityEngine_Sprite__get_rect(lVar7,0);
      }
      *(bool *)(plVar6 + 7) = in_s2 == fVar9 && in_s3 == fVar10;
      if (plVar6[0x1b] != 0) {
        uVar5 = UnityEngine_Sprite__get_texture(plVar6[0x1b],0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar3 = UnityEngine_Object__op_Implicit(lVar7,0);
        uVar8 = 0;
        if ((uVar3 & 1) != 0) {
          if (lVar7 == 0) goto LAB_01550984;
          uVar8 = UnityEngine_Sprite__get_texture(lVar7,0);
        }
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        goto LAB_01550934;
      }
    }
  }
LAB_01550984:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonReviveStart() { }   @0xb65288

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonReviveStart(void *__this)

{
  void *FHOFNGHGNGF;
  ulong uVar1;
  long lVar2;
  void *__this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_28;
  
  if ((bRam0000000001917231 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917231 = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c65434;
    CarController__HCBBKPNEMLE(**(long **)(_CarController_TypeInfo + 0xb8),0);
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x10) == 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_CarController_TypeInfo + 0xb8) != 0) {
        uVar4 = CarController__HAPAIKKJNCN(**(long **)(_CarController_TypeInfo + 0xb8),0);
        UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar4,0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
           (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40) != 0)) {
          if ((bRam0000000001916ec0 & 1) == 0) {
            func_0x00a67900(&Main_TypeInfo,0);
            func_0x00a67900(&Str_ANALYTICS__FreeReviveTutorial);
            func_0x00a67900(&Str_FreeReviveTutorial);
            bRam0000000001916ec0 = 1;
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          Main__GEMDEAMAGPG(_Str_ANALYTICS__FreeReviveTutorial,false);
          uVar4 = _Str_FreeReviveTutorial;
          uVar1 = System_String__IsNullOrEmpty(_Str_FreeReviveTutorial,0);
          if ((uVar1 & 1) == 0) {
            if (pcRam000000000191f018 == (code *)0x0) {
              pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
            }
            uVar1 = (*pcRam000000000191f018)();
            if ((uVar1 & 1) != 0) {
              if (pcRam000000000191f028 == (code *)0x0) {
                pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
              }
                    /* WARNING: Could not recover jumptable at 0x016d8fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam000000000191f028)(uVar4);
              return;
            }
            return;
          }
          func_0x00a67914(&System_ArgumentException_TypeInfo);
          uVar4 = func_0x00a67b44();
          uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
          System_ArgumentException___ctor(uVar4,uVar3,0);
          uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
          auVar5 = func_0x00a67a20(uVar4,uVar3);
          uVar3 = auVar5._0_8_;
          pcStack_40 = UnityEngine_Analytics_Analytics__CustomEvent;
          uStack_28 = uVar4;
          if ((bRam000000000191f039 & 1) == 0) {
            func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo);
            bRam000000000191f039 = 1;
          }
          uVar1 = System_String__IsNullOrEmpty(uVar3,0);
          if ((uVar1 & 1) == 0) {
            if (pcRam000000000191f018 == (code *)0x0) {
              pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
            }
            uVar1 = (*pcRam000000000191f018)();
            if ((uVar1 & 1) != 0) {
              if (auVar5._8_8_ == 0) {
                if (pcRam000000000191f028 == (code *)0x0) {
                  pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
                }
                    /* WARNING: Could not recover jumptable at 0x016d9148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam000000000191f028)(uVar3);
                return;
              }
              lVar2 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
              UnityEngine_Analytics_CustomEventData___ctor(lVar2,uVar3);
              if (lVar2 == 0) goto LAB_016d9194;
              UnityEngine_Analytics_CustomEventData__AddDictionary(lVar2,auVar5._8_8_);
              if (pcRam000000000191f030 == (code *)0x0) {
                pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
              }
              (*pcRam000000000191f030)(lVar2);
              UnityEngine_Analytics_CustomEventData__Dispose(lVar2);
            }
            return;
          }
          func_0x00a67914(&System_ArgumentException_TypeInfo);
          uVar4 = func_0x00a67b44();
          uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
          System_ArgumentException___ctor(uVar4,uVar3,0);
          uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
          func_0x00a67a20(uVar4,uVar3);
LAB_016d9194:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
      }
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
         (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar2 != 0)) {
        if ((bRam00000000019171df & 1) == 0) {
          func_0x00a67900(&Main_TypeInfo);
          func_0x00a67900(&MaxSdkAndroid_TypeInfo);
          func_0x00a67900(&Menu_TypeInfo);
          func_0x00a67900(&NNPDABJADNE_TypeInfo);
          func_0x00a67900(&Str_ADV_REWARD__SHOW_);
          bRam00000000019171df = 1;
        }
        uVar1 = AdvController__HNDMJBICLJF(lVar2);
        if ((uVar1 & 1) != 0) {
          *(undefined4 *)(lVar2 + 0x30) = 6;
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
            __this_00 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
            uStack_48 = _NNPDABJADNE_TypeInfo;
            pcStack_40 = (code *)0xffffffffffffffff;
            _uStack_38 = CONCAT44(uStack_34,*(undefined4 *)(lVar2 + 0x30));
            FHOFNGHGNGF = (void *)System_Enum__ToString(&uStack_48,0);
            if (__this_00 != (void *)0x0) {
              AnalyticsController__JCMFKBONIGF(__this_00,FHOFNGHGNGF);
              uStack_60 = _NNPDABJADNE_TypeInfo;
              uVar3 = *(undefined8 *)(lVar2 + 0x40);
              uStack_58 = 0xffffffffffffffff;
              uStack_50 = *(undefined4 *)(lVar2 + 0x30);
              uVar4 = System_Enum__ToString(&uStack_60,0);
              if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_MaxSdkAndroid_TypeInfo);
              }
              MaxSdkAndroid__ShowRewardedAd(uVar3,uVar4,0,0);
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              Main__GEMDEAMAGPG(_Str_ADV_REWARD__SHOW_,false);
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        return;
      }
    }
  }
LAB_00c65434:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void OKIGBJNMOOP() { }   @0xb660a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__OKIGBJNMOOP(void *__this)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *CIDKMFLFJEJ;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000001917236 & 1) == 0) {
    func_0x00a67900(&GUIGameplay_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&GUIGameplay_POFCDOMOIBH_TypeInfo);
    func_0x00a67900(&Str_TutorialTaskCompleteFAIL);
    func_0x00a67900(&Str_TutorialTaskComplete__);
    bRam0000000001917236 = 1;
  }
  if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar8 = *(long *)(_GUIGameplay_TypeInfo + 0xb8);
  iVar9 = *(int *)(lVar8 + 4);
  if (iVar9 != -1) {
    if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar8 = *(long *)(_GUIGameplay_TypeInfo + 0xb8);
      iVar9 = *(int *)(lVar8 + 4);
    }
    if (iVar9 != *(int *)(lVar8 + 8)) {
      if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar8 = *(long *)(_GUIGameplay_TypeInfo + 0xb8);
      }
      if (*(float *)(lVar8 + 0xc) < 0.0) {
        if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar8 = *(long *)(_GUIGameplay_TypeInfo + 0xb8);
        }
        uStack_48 = _GUIGameplay_POFCDOMOIBH_TypeInfo;
        uStack_40 = 0xffffffffffffffff;
        uStack_38 = *(undefined4 *)(lVar8 + 4);
        uVar5 = System_Enum__ToString(&uStack_48,0);
        CIDKMFLFJEJ = (void *)System_String__Concat(_Str_TutorialTaskComplete__,uVar5,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        Main__GEMDEAMAGPG(CIDKMFLFJEJ,false);
        uVar1 = *(uint *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4);
        *(uint *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 8) = uVar1;
        lVar8 = *(long *)((long)__this + 0x410);
        if (lVar8 != 0) {
          if (*(uint *)(lVar8 + 0x18) <= uVar1) {
LAB_00c664e4:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar8 = *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          if (cRam0000000001916e67 == '\0') {
            func_0x00a67900(&Main_TypeInfo);
            cRam0000000001916e67 = '\x01';
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if (lVar6 != 0) {
            uVar7 = DAFNMLEKHAD__BLGOKNOOEEO
                              (lVar6,*(undefined4 *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4),0)
            ;
            if ((uVar7 & 1) == 0) {
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
              lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_GUIGameplay_TypeInfo);
              }
              if (lVar6 == 0) goto LAB_00c664e0;
              DAFNMLEKHAD__NLPCIABIEIC
                        (lVar6,*(undefined4 *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4),0);
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_UnityEngine_Object_TypeInfo);
              }
              uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
              if ((uVar7 & 1) != 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c664e0;
                lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
                if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (lVar6 == 0) goto LAB_00c664e0;
                AnalyticsController__PKLGNADJLIG
                          (lVar6,*(undefined4 *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4),0);
              }
            }
            if (lVar8 != 0) {
              uVar5 = *(undefined8 *)(lVar8 + 0x48);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
              if ((uVar7 & 1) != 0) {
                if (*(long *)(lVar8 + 0x48) == 0) goto LAB_00c664e0;
                UnityEngine_GameObject__SetActive(*(long *)(lVar8 + 0x48),0,0);
              }
              lVar8 = *(long *)(lVar8 + 0x50);
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar8 + 0x18);
                if (0 < (int)uVar1) {
                  uVar10 = 0;
                  do {
                    if (uVar1 <= uVar10) goto LAB_00c664e4;
                    if (*(long *)((long)__this + 0x50) == 0) goto LAB_00c664e0;
                    lVar6 = *(long *)(lVar8 + (long)(int)uVar10 * 8 + 0x20);
                    uVar5 = UnityEngine_Component__get_transform(*(long *)((long)__this + 0x50),0);
                    if (lVar6 == 0) goto LAB_00c664e0;
                    UnityEngine_Transform__SetParent(lVar6,uVar5,0);
                    uVar1 = *(uint *)(lVar8 + 0x18);
                    uVar10 = uVar10 + 1;
                  } while ((int)uVar10 < (int)uVar1);
                }
                if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                *(undefined4 *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4) = 0xffffffff;
                GUIGameplay__ButtonContinue(__this);
                if (*(void **)((long)__this + 0x50) != (void *)0x0) {
                  GUIWindow__HEGIHOAJOKK(*(void **)((long)__this + 0x50),false);
                  return;
                }
              }
            }
          }
        }
LAB_00c664e0:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar2 = _Str_TutorialTaskCompleteFAIL;
  if ((bRam0000000001917206 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Debug_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917206 = 1;
  }
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
  lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar8 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = DAFNMLEKHAD__LLEFEIHEJDE(lVar8,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__Log(plVar2,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c590c8;
  uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar2 == (long *)0x0)) goto LAB_00c590c8;
  lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar5 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
  if (lVar8 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar5,0,0);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&float_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str____color___);
    func_0x00a67900(&Str__FF4E4A);
    func_0x00a67900(&Str__0_f2_);
    func_0x00a67900(&Str___);
    func_0x00a67900(&Str__78e938);
    func_0x00a67900(&Str_);
    func_0x00a67900(&Str__color_);
    bRam0000000001916fbb = 1;
  }
  plVar2 = *(long **)(lVar8 + 0x1e8);
  if ((plVar2 == (long *)0x0) ||
     (lVar6 = (**(code **)(*plVar2 + 0x598))(plVar2,*(undefined8 *)(*plVar2 + 0x5a0)), lVar6 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar6 + 0x10)) {
    if (*(long *)(lVar8 + 0x1e8) == 0) goto LAB_00c16768;
    uVar3 = UnityEngine_Component__get_gameObject(*(long *)(lVar8 + 0x1e8),0);
    if ((*(long *)(lVar8 + 0x1e8) == 0) ||
       (lVar6 = UnityEngine_Component__get_transform(*(long *)(lVar8 + 0x1e8),0), lVar6 == 0))
    goto LAB_00c16768;
    uVar4 = UnityEngine_Transform__get_parent(lVar6,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar6 = UnityEngine_Object__Instantiate_object_
                      (uVar3,uVar4,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar6 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar6,&uStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    plVar2 = (long *)CONCAT44(uStack_34,uStack_38);
    *(long **)(lVar8 + 0x1e8) = plVar2;
    if (plVar2 == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*plVar2 + 0x5a8))(plVar2,_Str_,*(undefined8 *)(*plVar2 + 0x5b0));
  }
  plVar2 = *(long **)(lVar8 + 0x1e8);
  lVar8 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar2 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar2 + 0x598))(plVar2,*(undefined8 *)(*plVar2 + 0x5a0)), lVar8 != 0))
  {
    uVar1 = *(uint *)(lVar8 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar8 + 0x20) = uVar3, uVar1 != 1 &&
         (*(undefined8 *)(lVar8 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar8 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar8 + 0x38) = _Str___;
      uVar11 = UnityEngine_Time__get_time(0);
      uStack_40 = CONCAT44(uVar11,(undefined4)uStack_40);
      uVar3 = func_0x00a67a38(_float_TypeInfo,(long)&uStack_40 + 4);
      uVar3 = System_String__Format(_Str__0_f2_,uVar3,0);
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar8 + 0x40) = uVar3, uVar1 != 5)) &&
         (*(undefined8 *)(lVar8 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar8 + 0x50) = uVar5;
        uVar5 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar8 + 0x18)) {
          *(undefined8 *)(lVar8 + 0x58) = uVar5;
          uVar5 = System_String__Concat(lVar8,0);
          (**(code **)(*plVar2 + 0x5a8))(plVar2,uVar5,*(undefined8 *)(*plVar2 + 0x5b0));
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
LAB_00c16768:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonBrake(bool value) { }   @0xb66684

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonBrake(void *__this,bool value)

{
  *(bool *)((long)__this + 0xb8) = value;
  *(bool *)((long)__this + 0xbc) = value;
  return;
}


// ==== private void Awake() { }   @0xb66f14

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__Awake(void *__this)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam000000000191723d & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam000000000191723d = 1;
  }
  uVar2 = *(undefined8 *)((long)__this + 0x38);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Menu__BGKFMDFJFMA(0x3e800000,uVar2,0);
  if ((bRam000000000191721d & 1) == 0) {
    func_0x00a67900(&GUIGameplay_TypeInfo);
    bRam000000000191721d = 1;
  }
  if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (0 < **(int **)(_GUIGameplay_TypeInfo + 0xb8)) {
    lVar1 = *(long *)((long)__this + 0x180);
    if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (lVar1 != 0) {
      if (pcRam000000000191c800 == (code *)0x0) {
        pcRam000000000191c800 = (code *)func_0x00a678c4(&UNK_005a0a0c,0);
      }
      (*pcRam000000000191c800)(lVar1,&stack0xffffffffffffffe8);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  return;
}



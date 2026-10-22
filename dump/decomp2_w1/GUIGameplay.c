// ==== public void ButtonPauseHelpShow() { }   @0xb5efb0

/* WARNING: Removing unreachable block (ram,0x00c5f6f8) */
/* WARNING: Removing unreachable block (ram,0x00c5f1e8) */
/* WARNING: Removing unreachable block (ram,0x00c5f18c) */
/* WARNING: Removing unreachable block (ram,0x00c5f198) */
/* WARNING: Removing unreachable block (ram,0x00c5f1a0) */
/* WARNING: Removing unreachable block (ram,0x00c60534) */
/* WARNING: Removing unreachable block (ram,0x00c5f62c) */
/* WARNING: Removing unreachable block (ram,0x00c5f644) */
/* WARNING: Removing unreachable block (ram,0x00c5f64c) */
/* WARNING: Removing unreachable block (ram,0x00c60354) */
/* WARNING: Removing unreachable block (ram,0x00c60260) */
/* WARNING: Removing unreachable block (ram,0x00c60268) */
/* WARNING: Removing unreachable block (ram,0x00c60274) */
/* WARNING: Removing unreachable block (ram,0x00c60294) */
/* WARNING: Removing unreachable block (ram,0x00c6029c) */
/* WARNING: Removing unreachable block (ram,0x00c602a8) */
/* WARNING: Removing unreachable block (ram,0x00c602c0) */
/* WARNING: Removing unreachable block (ram,0x00c600d0) */
/* WARNING: Removing unreachable block (ram,0x00c5fbb8) */
/* WARNING: Removing unreachable block (ram,0x00c5fbd0) */
/* WARNING: Removing unreachable block (ram,0x00c5fbd4) */
/* WARNING: Removing unreachable block (ram,0x00c5fbdc) */
/* WARNING: Removing unreachable block (ram,0x00c5fbf0) */
/* WARNING: Removing unreachable block (ram,0x00c5fc04) */
/* WARNING: Removing unreachable block (ram,0x00c5fc0c) */
/* WARNING: Removing unreachable block (ram,0x00c5fc18) */
/* WARNING: Removing unreachable block (ram,0x00c5fc24) */
/* WARNING: Removing unreachable block (ram,0x00c600d4) */
/* WARNING: Removing unreachable block (ram,0x00c600e8) */
/* WARNING: Removing unreachable block (ram,0x00c600f0) */
/* WARNING: Removing unreachable block (ram,0x00c600fc) */
/* WARNING: Removing unreachable block (ram,0x00c6014c) */
/* WARNING: Removing unreachable block (ram,0x00c60160) */
/* WARNING: Removing unreachable block (ram,0x00c60164) */
/* WARNING: Removing unreachable block (ram,0x00c6016c) */
/* WARNING: Removing unreachable block (ram,0x00c60180) */
/* WARNING: Removing unreachable block (ram,0x00c60194) */
/* WARNING: Removing unreachable block (ram,0x00c6019c) */
/* WARNING: Removing unreachable block (ram,0x00c601a8) */
/* WARNING: Removing unreachable block (ram,0x00c601d4) */
/* WARNING: Removing unreachable block (ram,0x00c601e8) */
/* WARNING: Removing unreachable block (ram,0x00c601fc) */
/* WARNING: Removing unreachable block (ram,0x00c602cc) */
/* WARNING: Removing unreachable block (ram,0x00c604a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonPauseHelpShow(void *__this)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  int iVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 uVar15;
  long *plStack_b0;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
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
  uStack_78._0_4_ = 0;
  uStack_78._4_4_ = 0;
  uStack_88 = 0;
  plVar14 = *(long **)((long)__this + 0x3f8);
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Translate_TypeInfo + 0xb8) != 0) &&
     (uVar2 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_HELP,0),
     plVar14 != (long *)0x0)) {
    (**(code **)(*plVar14 + 0x5a8))(plVar14,uVar2,*(undefined8 *)(*plVar14 + 0x5b0));
    if (*(long *)((long)__this + 0x438) != 0) {
      UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x438),1,0);
      *(undefined4 *)((long)__this + 0x42c) = 0xffffffff;
      *(undefined4 *)((long)__this + 0x42c) = 0;
      if (*(long *)((long)__this + 0x438) != 0) {
        UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x438),1,0);
        if (*(long *)((long)__this + 0x410) != 0) {
          uVar12 = *(uint *)(*(long *)((long)__this + 0x410) + 0x18);
          do {
            uVar12 = uVar12 - 1;
            if ((int)uVar12 < 0) goto LAB_00c5f380;
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
            lVar9 = *(long *)((long)__this + 0x410);
            if (lVar9 == 0) goto LAB_00c600b8;
            if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_00c60508;
            lVar9 = *(long *)(lVar9 + (ulong)uVar12 * 8 + 0x20);
            if ((lVar9 == 0) ||
               (lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar3 == 0))
            goto LAB_00c600b8;
            uVar4 = DAFNMLEKHAD__BLGOKNOOEEO(lVar3,*(undefined4 *)(lVar9 + 0x10),0);
          } while ((uVar4 & 1) == 0);
          lVar9 = *(long *)((long)__this + 0x410);
          if (lVar9 != 0) {
            if (*(uint *)(lVar9 + 0x18) <= uVar12) {
LAB_00c60508:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            lVar9 = *(long *)(lVar9 + (ulong)uVar12 * 8 + 0x20);
            if (lVar9 != 0) {
              uStack_90 = *(undefined4 *)(lVar9 + 0x10);
              *(undefined4 *)((long)__this + 0x430) = uStack_90;
              plStack_a0 = _GUIGameplay_POFCDOMOIBH_TypeInfo;
              uStack_98 = 0xffffffffffffffff;
              uVar2 = System_Enum__ToString(&plStack_a0,0);
              uVar2 = System_String__Concat(_Str_latest_completed_tutorial__,uVar2,0);
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_Main_TypeInfo);
              }
              Main__GEMDEAMAGPG(uVar2,0);
LAB_00c5f380:
              if ((*(long *)((long)__this + 0x438) != 0) &&
                 (lVar9 = UnityEngine_GameObject__get_transform(*(long *)((long)__this + 0x438),0),
                 lVar9 != 0)) {
                plVar14 = (long *)UnityEngine_Transform__GetEnumerator(lVar9,0);
                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b50();
                }
                plStack_b0 = (long *)0x0;
                uVar4 = uStack_88 & 0xffffffff;
                plVar13 = (long *)0x0;
                uVar12 = 0;
                do {
                  lVar9 = *plVar14;
                  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                        puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                        goto LAB_00c5f420;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar5 = (undefined8 *)
                           func_0x00a9e6c4(plVar14,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00c5f420:
                  uVar10 = (*(code *)*puVar5)(plVar14,puVar5[1]);
                  uVar15 = (undefined4)uVar4;
                  if ((uVar10 & 1) == 0) {
                    uStack_88 = CONCAT44(uStack_88._4_4_,uVar15);
                    plVar14 = (long *)func_0x00a67a34(plVar14,_System_IDisposable_TypeInfo);
                    if (plVar14 == (long *)0x0) goto LAB_00c5f6ec;
                    lVar9 = *plVar14;
                    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar4 == 0) goto LAB_00c5f6c4;
                    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    goto LAB_00c5f6ac;
                  }
                  lVar9 = *plVar14;
                  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                        goto LAB_00c5f480;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar5 = (undefined8 *)
                           func_0x00a9e6c4(plVar14,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00c5f480:
                  plVar6 = (long *)(*(code *)*puVar5)(plVar14,puVar5[1]);
                  if (plVar6 == (long *)0x0) {
LAB_00c60518:
                    uStack_88 = CONCAT44(uStack_88._4_4_,uVar15);
                    /* WARNING: Subroutine does not return */
                    il2cpp_throw_967b50();
                  }
                  if ((*(byte *)(*plVar6 + 0x130) <
                       *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
                     (*(long *)(*(long *)(*plVar6 + 200) +
                                (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8)
                      != _UnityEngine_Transform_TypeInfo)) {
                    uStack_88 = CONCAT44(uStack_88._4_4_,uVar15);
                    func_0x00a67eec(plVar6);
                    goto LAB_00c60518;
                  }
                  uVar2 = UnityEngine_Object__get_name(plVar6,0);
                  uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
                  uVar7 = System_Int32__ToString(&uStack_78,0);
                  uVar7 = System_String__Concat(_Str_point_,uVar7,0);
                  uVar10 = System_String__op_Equality(uVar2,uVar7,0);
                  if ((uVar10 & 1) == 0) {
                    uVar2 = UnityEngine_Object__get_name(plVar6,0);
                    uVar10 = System_String__op_Equality(uVar2,_Str_point_marker,0);
                    if ((uVar10 & 1) != 0) {
                      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                                (plVar6,&plStack_a0,
                                 _Method_UnityEngine_Component_GetComponent_RectTransform___);
                      plStack_b0 = plStack_a0;
                    }
                  }
                  else {
                    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                              (plVar6,&plStack_a0,
                               _Method_UnityEngine_Component_GetComponent_RectTransform___);
                    plVar13 = plStack_a0;
                  }
                  uVar2 = UnityEngine_Object__get_name(plVar6,0);
                  uStack_78._0_4_ = uVar12;
                  uVar7 = System_Int32__ToString(&uStack_78,0);
                  uVar7 = System_String__Concat(_Str_point_,uVar7,0);
                  uVar10 = System_String__op_Equality(uVar2,uVar7,0);
                  if ((uVar10 & 1) != 0) {
                    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                              (plVar6,&plStack_a0,
                               _Method_UnityEngine_Component_GetComponent_Image___);
                    plVar6 = plStack_a0;
                    if (plStack_a0 == (long *)0x0) {
                      uStack_88 = CONCAT44(uStack_88._4_4_,uVar15);
                    /* WARNING: Subroutine does not return */
                      il2cpp_throw_967b50();
                    }
                    uVar4 = (**(code **)(*plStack_a0 + 0x298))
                                      (plStack_a0,*(undefined8 *)(*plStack_a0 + 0x2a0));
                    uStack_88 = CONCAT44(in_s1,(undefined4)uStack_88);
                    uStack_80 = CONCAT44(*(undefined4 *)
                                          (&UNK_0059c3a0 +
                                          (ulong)(*(int *)((long)__this + 0x430) < (int)uVar12) * 4)
                                         ,in_s2);
                    lVar9 = *plVar6;
                    (**(code **)(lVar9 + 0x2a8))(plVar6,*(undefined8 *)(lVar9 + 0x2b0));
                  }
                  if (*(long *)((long)__this + 0x410) == 0) {
                    uStack_88 = CONCAT44(uStack_88._4_4_,(int)uVar4);
                    /* WARNING: Subroutine does not return */
                    il2cpp_throw_967b50();
                  }
                  if ((int)uVar12 < *(int *)(*(long *)((long)__this + 0x410) + 0x18) + -1) {
                    uVar12 = uVar12 + 1;
                  }
                } while( true );
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
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar11 = piVar11 + 4;
    if (uVar4 == 0) break;
LAB_00c5f6ac:
    if (*(long *)(piVar11 + -2) == _System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_00c5f6e0;
    }
  }
LAB_00c5f6c4:
  puVar5 = (undefined8 *)func_0x00a9e6c4(plVar14,_System_IDisposable_TypeInfo,0);
LAB_00c5f6e0:
  (*(code *)*puVar5)(plVar14,puVar5[1]);
LAB_00c5f6ec:
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Inequality(plVar13,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Inequality(plStack_b0,0,0);
    if ((uVar4 & 1) != 0) {
      if ((plVar13 == (long *)0x0) ||
         (uVar2 = UnityEngine_RectTransform__get_anchoredPosition(plVar13,0),
         plStack_b0 == (long *)0x0)) goto LAB_00c600b8;
      UnityEngine_RectTransform__get_anchoredPosition(plStack_b0,0);
      UnityEngine_RectTransform__set_anchoredPosition(uVar2,plStack_b0,0);
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
                  lVar9 = *(long *)((long)__this + 0x480);
                  uVar2 = 0;
                  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_BridgePHP_TypeInfo,0);
                    uVar2 = extraout_x1;
                  }
                  iVar8 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
                  if (iVar8 == 0xc) {
                    bVar1 = false;
                  }
                  else {
                    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30(_BridgePHP_TypeInfo,uVar2);
                      iVar8 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
                    }
                    bVar1 = iVar8 != 0xd;
                  }
                  if (lVar9 != 0) {
                    UnityEngine_GameObject__SetActive(lVar9,bVar1,0);
                    lVar9 = *(long *)((long)__this + 0x410);
                    if (lVar9 != 0) {
                      uVar4 = 0;
                      uVar2 = 0;
                      plVar13 = (long *)0x0;
                      plVar14 = (long *)((long)__this + 0x410);
                      do {
                        if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar4) {
                          uStack_78._4_4_ = 1;
                          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          lVar9 = **(long **)(_Translate_TypeInfo + 0xb8);
                          uVar2 = System_Int32__ToString((long)&uStack_78 + 4,0);
                          uVar2 = System_String__Concat(_Str_TUTORIAL_,uVar2,0);
                          if ((lVar9 == 0) ||
                             (uVar2 = Translate__JJJNIPAKLJF(lVar9,uVar2,0), plVar13 == (long *)0x0)
                             ) break;
                          (**(code **)(*plVar13 + 0x5a8))
                                    (plVar13,uVar2,*(undefined8 *)(*plVar13 + 0x5b0));
                          lVar9 = (**(code **)(*plVar13 + 0x598))
                                            (plVar13,*(undefined8 *)(*plVar13 + 0x5a0));
                          uVar2 = System_Environment__get_NewLine(0);
                          if (lVar9 == 0) break;
                          uVar2 = System_String__Replace(lVar9,_Str__,uVar2,0);
                          (**(code **)(*plVar13 + 0x5a8))
                                    (plVar13,uVar2,*(undefined8 *)(*plVar13 + 0x5b0));
                          lVar9 = *(long *)((long)__this + 0x408);
                          uVar2 = func_0x00a67b44(_UnityEngine_RectOffset_TypeInfo);
                          UnityEngine_RectOffset___ctor(uVar2,0,0,0x87,0x6e,0);
                          if (lVar9 == 0) break;
                          UnityEngine_UI_LayoutGroup__set_padding(lVar9,uVar2,0);
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
                          lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                          if (lVar9 == 0) break;
                          if (*(int *)(lVar9 + 0x94) == 10) {
LAB_00c60498:
                            UnityEngine_UI_Text__set_lineSpacing(0x3f99999a,plVar13,0);
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
                            lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                            if (lVar9 == 0) break;
                            if (*(int *)(lVar9 + 0x94) == 0xb) goto LAB_00c60498;
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
                            lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                            if (lVar9 == 0) break;
                            if (*(int *)(lVar9 + 0x94) == 0xc) goto LAB_00c60498;
                          }
                          if (*(long *)((long)__this + 0x78) != 0) {
                            GUIWindow__HEGIHOAJOKK(*(long *)((long)__this + 0x78),0,0);
                            return;
                          }
                          break;
                        }
                        if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_00c60508;
                        lVar9 = *(long *)(lVar9 + uVar4 * 8 + 0x20);
                        if (lVar9 != 0) {
                          uVar7 = *(undefined8 *)(lVar9 + 0x18);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar10 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                          if ((uVar10 & 1) != 0) {
                            lVar9 = *plVar14;
                            if (lVar9 == 0) break;
                            if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_00c60508;
                            lVar9 = *(long *)(lVar9 + uVar4 * 8 + 0x20);
                            if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x18), lVar9 == 0))
                            break;
                            UnityEngine_GameObject__SetActive(lVar9,uVar4 == 0,0);
                          }
                          lVar9 = *plVar14;
                          if (lVar9 == 0) break;
                          if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_00c60508;
                          lVar9 = *(long *)(lVar9 + uVar4 * 8 + 0x20);
                          if (lVar9 == 0) break;
                          uVar7 = *(undefined8 *)(lVar9 + 0x40);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar10 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                          lVar9 = *plVar14;
                          if ((uVar4 == 0) && ((uVar10 & 1) != 0)) {
                            if (lVar9 == 0) break;
                            if (*(int *)(lVar9 + 0x18) == 0) goto LAB_00c60508;
                            if (*(long *)(lVar9 + 0x20) == 0) break;
                            plVar13 = *(long **)(*(long *)(lVar9 + 0x20) + 0x40);
                          }
                          else if (lVar9 == 0) break;
                          if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_00c60508;
                          lVar9 = *(long *)(lVar9 + uVar4 * 8 + 0x20);
                          if (lVar9 == 0) break;
                          uVar7 = *(undefined8 *)(lVar9 + 0x20);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar10 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                          if ((uVar10 & 1) != 0) {
                            lVar9 = *plVar14;
                            if (lVar9 == 0) break;
                            if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_00c60508;
                            lVar9 = *(long *)(lVar9 + uVar4 * 8 + 0x20);
                            if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x20), lVar9 == 0))
                            break;
                            UnityEngine_GameObject__SetActive(lVar9,0,0);
                          }
                          lVar9 = *plVar14;
                          if (lVar9 == 0) break;
                          if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_00c60508;
                          lVar9 = *(long *)(lVar9 + uVar4 * 8 + 0x20);
                          if (lVar9 == 0) break;
                          uVar7 = *(undefined8 *)(lVar9 + 0x28);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar10 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                          if ((uVar10 & 1) != 0) {
                            lVar9 = *plVar14;
                            if (lVar9 == 0) break;
                            if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_00c60508;
                            lVar9 = *(long *)(lVar9 + uVar4 * 8 + 0x20);
                            if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x28), lVar9 == 0))
                            break;
                            UnityEngine_GameObject__SetActive(lVar9,0,0);
                          }
                          lVar9 = *plVar14;
                          if (lVar9 == 0) break;
                          if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_00c60508;
                          lVar9 = *(long *)(lVar9 + uVar4 * 8 + 0x20);
                          if (lVar9 == 0) break;
                          uVar7 = *(undefined8 *)(lVar9 + 0x30);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar10 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                          if ((uVar10 & 1) != 0) {
                            lVar9 = *plVar14;
                            if (lVar9 == 0) break;
                            if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_00c60508;
                            lVar9 = *(long *)(lVar9 + uVar4 * 8 + 0x20);
                            if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x30), lVar9 == 0))
                            break;
                            UnityEngine_GameObject__SetActive(lVar9,0,0);
                          }
                          lVar9 = *plVar14;
                          if (lVar9 == 0) break;
                          if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_00c60508;
                          lVar9 = *(long *)(lVar9 + uVar4 * 8 + 0x20);
                          if (lVar9 == 0) break;
                          uVar7 = *(undefined8 *)(lVar9 + 0x38);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar10 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                          if ((uVar10 & 1) != 0) {
                            lVar9 = *plVar14;
                            if (lVar9 == 0) break;
                            if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_00c60508;
                            lVar9 = *(long *)(lVar9 + uVar4 * 8 + 0x20);
                            if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x38), lVar9 == 0))
                            break;
                            UnityEngine_GameObject__SetActive(lVar9,0,0);
                          }
                          if (uVar4 == 0) {
                            lVar9 = *plVar14;
                            if (lVar9 == 0) break;
                            if (*(int *)(lVar9 + 0x18) == 0) goto LAB_00c60508;
                            if (*(long *)(lVar9 + 0x20) == 0) break;
                            lVar9 = *(long *)(*(long *)(lVar9 + 0x20) + 0x50);
                            uStack_78._0_4_ = 0;
                            if (lVar9 == 0) break;
                            uVar12 = *(uint *)(lVar9 + 0x18);
                            if (0 < (int)uVar12) {
                              do {
                                if (uVar12 <= (uint)uStack_78) goto LAB_00c60508;
                                lVar3 = *(long *)(lVar9 + (long)(int)(uint)uStack_78 * 8 + 0x20);
                                if (lVar3 == 0) goto LAB_00c600b8;
                                UnityEngine_Transform__SetParent
                                          (lVar3,*(undefined8 *)((long)__this + 0x28),0);
                                uStack_78._0_4_ = (uint)uStack_78 + 1;
                                uVar12 = *(uint *)(lVar9 + 0x18);
                              } while ((int)(uint)uStack_78 < (int)uVar12);
                            }
                            if (*(long *)((long)__this + 0x488) == 0) break;
                            UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x488),0,0);
                            lVar9 = *plVar14;
                            if (lVar9 == 0) break;
                            if (*(int *)(lVar9 + 0x18) == 0) goto LAB_00c60508;
                            if (*(long *)(lVar9 + 0x20) == 0) break;
                            uVar7 = *(undefined8 *)(*(long *)(lVar9 + 0x20) + 0x28);
                            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                            }
                            uVar10 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                            if ((uVar10 & 1) != 0) {
                              lVar9 = *plVar14;
                              if (lVar9 == 0) break;
                              if (*(int *)(lVar9 + 0x18) == 0) goto LAB_00c60508;
                              if (*(long *)(lVar9 + 0x20) == 0) break;
                              uVar7 = *(undefined8 *)(*(long *)(lVar9 + 0x20) + 0x18);
                              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              uVar10 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                              if ((uVar10 & 1) != 0) {
                                if (*(long *)((long)__this + 0x488) == 0) break;
                                lVar9 = UnityEngine_GameObject__get_transform
                                                  (*(long *)((long)__this + 0x488),0);
                                lVar3 = *plVar14;
                                if (lVar3 == 0) break;
                                if (*(int *)(lVar3 + 0x18) == 0) goto LAB_00c60508;
                                if (((*(long *)(lVar3 + 0x20) == 0) ||
                                    (lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x18), lVar3 == 0))
                                   || (uVar7 = UnityEngine_GameObject__get_transform(lVar3,0),
                                      lVar9 == 0)) break;
                                UnityEngine_Transform__set_parent(lVar9,uVar7,0);
                              }
                            }
                            if (*(long *)((long)__this + 0x490) == 0) break;
                            UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x490),0,0);
                            lVar9 = *plVar14;
                            if (lVar9 == 0) break;
                            if (*(int *)(lVar9 + 0x18) == 0) goto LAB_00c60508;
                            if (*(long *)(lVar9 + 0x20) == 0) break;
                            uVar7 = *(undefined8 *)(*(long *)(lVar9 + 0x20) + 0x30);
                            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                            }
                            uVar10 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                            if ((uVar10 & 1) != 0) {
                              lVar9 = *plVar14;
                              if (lVar9 == 0) break;
                              if (*(int *)(lVar9 + 0x18) == 0) goto LAB_00c60508;
                              if (*(long *)(lVar9 + 0x20) == 0) break;
                              uVar7 = *(undefined8 *)(*(long *)(lVar9 + 0x20) + 0x18);
                              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              uVar10 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                              if ((uVar10 & 1) != 0) {
                                if (*(long *)((long)__this + 0x490) == 0) break;
                                lVar9 = UnityEngine_GameObject__get_transform
                                                  (*(long *)((long)__this + 0x490),0);
                                lVar3 = *plVar14;
                                if (lVar3 == 0) break;
                                if (*(int *)(lVar3 + 0x18) == 0) goto LAB_00c60508;
                                if (((*(long *)(lVar3 + 0x20) == 0) ||
                                    (lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x18), lVar3 == 0))
                                   || (uVar7 = UnityEngine_GameObject__get_transform(lVar3,0),
                                      lVar9 == 0)) break;
                                UnityEngine_Transform__set_parent(lVar9,uVar7,0);
                              }
                            }
                            if (*(long *)((long)__this + 0x498) == 0) break;
                            UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x498),0,0);
                            lVar9 = *plVar14;
                            if (lVar9 == 0) break;
                            if (*(int *)(lVar9 + 0x18) == 0) goto LAB_00c60508;
                            if (*(long *)(lVar9 + 0x20) == 0) break;
                            uVar7 = *(undefined8 *)(*(long *)(lVar9 + 0x20) + 0x38);
                            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                            }
                            uVar10 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                            if ((uVar10 & 1) != 0) {
                              lVar9 = *plVar14;
                              if (lVar9 == 0) break;
                              if (*(int *)(lVar9 + 0x18) == 0) goto LAB_00c60508;
                              if (*(long *)(lVar9 + 0x20) == 0) break;
                              uVar7 = *(undefined8 *)(*(long *)(lVar9 + 0x20) + 0x18);
                              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              uVar10 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                              if ((uVar10 & 1) != 0) {
                                if (*(long *)((long)__this + 0x498) == 0) break;
                                lVar9 = UnityEngine_GameObject__get_transform
                                                  (*(long *)((long)__this + 0x498),0);
                                lVar3 = *plVar14;
                                if (lVar3 == 0) break;
                                if (*(int *)(lVar3 + 0x18) == 0) goto LAB_00c60508;
                                if (((*(long *)(lVar3 + 0x20) == 0) ||
                                    (lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x18), lVar3 == 0))
                                   || (uVar7 = UnityEngine_GameObject__get_transform(lVar3,0),
                                      lVar9 == 0)) break;
                                UnityEngine_Transform__set_parent(lVar9,uVar7,0);
                              }
                            }
                          }
                          lVar9 = *plVar14;
                          if (lVar9 == 0) break;
                          if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_00c60508;
                          lVar9 = *(long *)(lVar9 + uVar4 * 8 + 0x20);
                          if (lVar9 == 0) break;
                          uVar7 = *(undefined8 *)(lVar9 + 0x48);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar10 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                          if ((uVar10 & 1) != 0) {
                            lVar9 = *plVar14;
                            if (lVar9 == 0) break;
                            if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_00c60508;
                            lVar9 = *(long *)(lVar9 + uVar4 * 8 + 0x20);
                            if (lVar9 == 0) break;
                            if (uVar4 == 0) {
                              if (*(long *)(lVar9 + 0x48) == 0) break;
                              UnityEngine_GameObject__SetActive(*(long *)(lVar9 + 0x48),1,0);
                              lVar9 = *plVar14;
                              if (lVar9 == 0) break;
                              if (*(int *)(lVar9 + 0x18) == 0) goto LAB_00c60508;
                              if (*(long *)(lVar9 + 0x20) == 0) break;
                              uVar2 = *(undefined8 *)(*(long *)(lVar9 + 0x20) + 0x48);
                            }
                            else {
                              uVar7 = *(undefined8 *)(lVar9 + 0x48);
                              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              uVar10 = UnityEngine_Object__op_Inequality(uVar2,uVar7,0);
                              if ((uVar10 & 1) != 0) {
                                lVar9 = *plVar14;
                                if (lVar9 == 0) break;
                                if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_00c60508;
                                lVar9 = *(long *)(lVar9 + uVar4 * 8 + 0x20);
                                if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x48), lVar9 == 0))
                                break;
                                UnityEngine_GameObject__SetActive(lVar9,0,0);
                              }
                            }
                          }
                        }
                        lVar9 = *plVar14;
                        uVar4 = uVar4 + 1;
                      } while (lVar9 != 0);
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
  goto LAB_00c600b8;
}


// ==== public void CBFONCCJIEE() { }   @0xb60dfc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__CBFONCCJIEE(void *__this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if ((bRam0000000001917215 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917215 = 1;
  }
  lVar3 = *(long *)((long)__this + 0x1f8);
  if (lVar3 != 0) {
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar4 = 0;
      uVar1 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar2 = *(long *)(lVar3 + 0x20 + uVar4 * 8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = UnityEngine_Object__op_Inequality(lVar2,0,0);
        if ((uVar1 & 1) != 0) {
          if ((lVar2 == 0) || (lVar2 = UnityEngine_Component__get_gameObject(lVar2,0), lVar2 == 0))
          goto LAB_00c60ec8;
          UnityEngine_GameObject__SetActive(lVar2,0,0);
        }
        uVar1 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    return;
  }
LAB_00c60ec8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonSettingsGFX() { }   @0xb61724

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonSettingsGFX(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvStack_28;
  
  if ((bRam0000000001917219 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_BackgroundController___);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917219 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    Menu__EFBCOMMLAGE(**(long **)(_Menu_TypeInfo + 0xb8),0);
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c618e0;
      uVar3 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar2 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x28), lVar2 == 0))
        goto LAB_00c618e0;
        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                  (lVar2,&pvStack_28,
                   _Method_UnityEngine_Component_GetComponent_BackgroundController___);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = UnityEngine_Object__op_Inequality(pvStack_28,0,0);
        if ((uVar1 & 1) != 0) {
          if (pvStack_28 == (void *)0x0) goto LAB_00c618e0;
          BackgroundController__MLIIENHGIGK(pvStack_28);
          BackgroundController__HAMLCJJANAJ(pvStack_28);
          BackgroundController__NNDOCLOMBPN();
          BackgroundController__DIMGJKDADNE(pvStack_28);
        }
      }
    }
    GUIGameplay__ODHAOMJKKAE(__this);
    return;
  }
LAB_00c618e0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void BEGHDNNLEDG() { }   @0xb61ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__BEGHDNNLEDG(void *__this)

{
  long lVar1;
  
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


// ==== public void ButtonFire(bool value) { }   @0xb6226c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonFire(void *__this,bool value)

{
  *(bool *)((long)__this + 0xba) = value;
  return;
}


// ==== public void ButtonRestart(bool _use_fuel) { }   @0xb62b34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonRestart(void *__this,bool _use_fuel)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001917224 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Results);
    func_0x00a67900(&Str_RestartPause);
    func_0x00a67900(&Str_Pause);
    func_0x00a67900(&Str_RestartResults);
    bRam0000000001917224 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c62e80;
    uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) != 0) {
        if ((*(long *)((long)__this + 0x68) == 0) ||
           (lVar2 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x68),0),
           lVar2 == 0)) goto LAB_00c62e80;
        uVar1 = UnityEngine_GameObject__get_activeSelf(lVar2,0);
        if ((uVar1 & 1) == 0) {
          if ((*(long *)((long)__this + 0x58) == 0) ||
             (lVar2 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x58),0),
             lVar2 == 0)) goto LAB_00c62e80;
          uVar1 = UnityEngine_GameObject__get_activeSelf(lVar2,0);
          if ((uVar1 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c62e80;
            lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
            if ((lVar3 == 0) || (lVar2 == 0)) goto LAB_00c62e80;
            AnalyticsController__OJNGEGNNOME(lVar2,*(undefined4 *)(lVar3 + 0x10),_Str_Results,0);
            if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c62e80;
            uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
            if ((uVar1 & 1) != 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar2 == 0))
              goto LAB_00c62e80;
              puVar4 = (undefined8 *)&Str_RestartResults;
              goto LAB_00c62e54;
            }
          }
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c62e80;
          lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if ((lVar3 == 0) || (lVar2 == 0)) goto LAB_00c62e80;
          AnalyticsController__OJNGEGNNOME(lVar2,*(undefined4 *)(lVar3 + 0x10),_Str_Pause,0);
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c62e80;
          uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
          if ((uVar1 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar2 == 0))
            goto LAB_00c62e80;
            puVar4 = (undefined8 *)&Str_RestartPause;
LAB_00c62e54:
            AdvController__NKNJOFHCDIF(lVar2,*puVar4);
          }
        }
      }
    }
  }
  lVar2 = *(long *)((long)__this + 0x20);
  if (lVar2 == 0) {
LAB_00c62e80:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam0000000001917038 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo,_use_fuel,0);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001917038 = 1;
  }
  lVar2 = *(long *)(lVar2 + 0x48);
  if (lVar2 != 0) {
    UnityEngine_AudioSource__Stop(lVar2,0);
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x70);
    if (lVar2 != 0) {
      UnityEngine_AudioSource__Pause(lVar2,0);
      lVar2 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
      if (lVar2 != 0) {
        UnityEngine_AudioSource__Stop(lVar2,0);
        if (_use_fuel) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
          if ((uVar1 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c273e4;
            uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x28);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
            if ((uVar1 & 1) != 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x28), lVar2 == 0))
              goto LAB_00c273e4;
              FuelManager__OBAELOECFBH(lVar2,0);
            }
          }
        }
        if (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        UnityEngine_SceneManagement_SceneManager__GetActiveScene(0);
        uVar5 = UnityEngine_SceneManagement_Scene__get_name(&stack0xffffffffffffffd8,0);
        UnityEngine_SceneManagement_SceneManager__LoadScene(uVar5,0);
        return;
      }
    }
  }
LAB_00c273e4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public IEnumerator JLHJOJHINPC(GUICoins NBBKILHLACJ) { }   @0xb63290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGameplay__JLHJOJHINPC(void *__this,void *NBBKILHLACJ)

{
  void *pvVar1;
  
  if ((bRam0000000001917226 & 1) == 0) {
    func_0x00a67900(&GUIGameplay_EDNODNGHHMJ_TypeInfo);
    bRam0000000001917226 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_GUIGameplay_EDNODNGHHMJ_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x20) = NBBKILHLACJ;
  *(void **)((long)pvVar1 + 0x28) = __this;
  return pvVar1;
}


// ==== public void DMFIDCENMJF() { }   @0xb64284

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__DMFIDCENMJF(void *__this)

{
  bool bVar1;
  void *__this_00;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  
  if ((bRam000000000191722b & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191722b = 1;
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
  __this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (__this_00 == (void *)0x0) goto LAB_00c6448c;
  bVar1 = DAFNMLEKHAD__DPJPKMHLGMO(__this_00);
  if (bVar1) {
LAB_00c643a8:
    lVar6 = *(long *)((long)__this + 200);
    if (lVar6 == 0) goto LAB_00c6448c;
    uVar4 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar4) {
      uVar7 = 0;
      do {
        if (uVar4 <= uVar7) goto LAB_00c64490;
        lVar3 = *(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_00c6448c;
        UnityEngine_GameObject__SetActive(lVar3,0,0);
        uVar4 = *(uint *)(lVar6 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar4);
    }
    if (*(long *)((long)__this + 0xd0) == 0) goto LAB_00c6448c;
    UnityEngine_RectTransform__get_anchoredPosition(*(long *)((long)__this + 0xd0),0);
    lVar6 = *(long *)((long)__this + 0xd0);
  }
  else {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c6448c;
      if (*(char *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x3fc) != '\0') goto LAB_00c643a8;
    }
    lVar6 = *(long *)((long)__this + 200);
    if (lVar6 == 0) goto LAB_00c6448c;
    uVar4 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar4) {
      uVar7 = 0;
      do {
        if (uVar4 <= uVar7) {
LAB_00c64490:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar3 = *(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_00c6448c;
        UnityEngine_GameObject__SetActive(lVar3,1,0);
        uVar4 = *(uint *)(lVar6 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar4);
    }
    if (*(long *)((long)__this + 0xd0) == 0) goto LAB_00c6448c;
    UnityEngine_RectTransform__get_anchoredPosition(*(long *)((long)__this + 0xd0),0);
    lVar6 = *(long *)((long)__this + 0xd0);
  }
  if (lVar6 != 0) {
    if (pcRam000000000191c800 == (code *)0x0) {
      pcRam000000000191c800 = (code *)func_0x00a678c4(&UNK_005a0a0c,0);
    }
    (*pcRam000000000191c800)(lVar6,&stack0xffffffffffffffe8);
    return;
  }
LAB_00c6448c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void ODHAOMJKKAE() { }   @0xb618e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ODHAOMJKKAE(void *__this)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if ((bRam000000000191722e & 1) == 0) {
    func_0x00a67900(&DHLBGHCGAKB_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_GFX_);
    bRam000000000191722e = 1;
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
  lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar3 == 0) goto LAB_00c61ae4;
  iVar1 = *(int *)(lVar3 + 0x90);
  if (iVar1 == 2) {
    lVar3 = *(long *)((long)__this + 0x3b0);
    if (lVar3 == 0) goto LAB_00c61ae4;
    puVar4 = (undefined8 *)((long)__this + 0x3c8);
LAB_00c619d8:
    UnityEngine_UI_Image__set_sprite(lVar3,*puVar4,0);
  }
  else {
    if (iVar1 == 1) {
      lVar3 = *(long *)((long)__this + 0x3b0);
      if (lVar3 == 0) goto LAB_00c61ae4;
      puVar4 = (undefined8 *)((long)__this + 0x3c0);
      goto LAB_00c619d8;
    }
    if (iVar1 == 0) {
      lVar3 = *(long *)((long)__this + 0x3b0);
      if (lVar3 == 0) goto LAB_00c61ae4;
      puVar4 = (undefined8 *)((long)__this + 0x3b8);
      goto LAB_00c619d8;
    }
  }
  plVar6 = *(long **)((long)__this + 0x3d0);
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = **(long **)(_Translate_TypeInfo + 0xb8);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar5 != 0) {
    uStack_48 = _DHLBGHCGAKB_TypeInfo;
    uStack_38 = *(undefined4 *)(lVar5 + 0x90);
    uStack_40 = 0xffffffffffffffff;
    uVar2 = System_Enum__ToString(&uStack_48,0);
    uVar2 = System_String__Concat(_Str_GFX_,uVar2,0);
    if ((lVar3 != 0) && (uVar2 = Translate__JJJNIPAKLJF(lVar3,uVar2,0), plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 0x5a8))(plVar6,uVar2,*(undefined8 *)(*plVar6 + 0x5b0));
      return;
    }
  }
LAB_00c61ae4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void PIHHDKCEMGD() { }   @0xb65854

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__PIHHDKCEMGD(void *__this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 uStack_74;
  uint uStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  
  if ((bRam0000000001917233 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_string__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_List_string__Contains__);
    func_0x00a67900(&Method_System_Collections_Generic_List_string___ctor__);
    func_0x00a67900(&Method_System_Collections_Generic_List_string__get_Count__);
    func_0x00a67900(&Method_System_Collections_Generic_List_string__get_Item__);
    func_0x00a67900(&System_Collections_Generic_List_string__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&System_Random_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_HINT);
    func_0x00a67900(&Str___random_hint__);
    func_0x00a67900(&Str___final_hints__);
    func_0x00a67900(&Str_Remove_HINT_7_for_PC);
    func_0x00a67900(&Str____color__);
    func_0x00a67900(&Str_HINT_7);
    func_0x00a67900(&Str_ShowResulstHints_error_);
    func_0x00a67900(&Str_HINT_NEW_3);
    func_0x00a67900(&Str_LastOpenLvl__);
    func_0x00a67900(&Str__x_);
    func_0x00a67900(&Str__color__FFBB00_);
    bRam0000000001917233 = 1;
  }
  iStack_6c = 0;
  uStack_74 = 0;
  if (*(long *)((long)__this + 0x240) == 0) goto LAB_00c65fa8;
  uVar1 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 0x240),0);
  if ((uVar1 & 1) == 0) {
    uVar8 = *(undefined8 *)((long)__this + 0xa8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar1 & 1) != 0) {
      uVar8 = *(undefined8 *)((long)__this + 0xb0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = **(undefined8 **)(_Translate_TypeInfo + 0xb8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar1 = UnityEngine_Object__op_Inequality(uVar8,0,0);
        if ((uVar1 & 1) != 0) {
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
          lVar6 = *(long *)(_Main_TypeInfo + 0xb8);
          if (*(long *)(lVar6 + 8) != 0) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              lVar6 = *(long *)(_Main_TypeInfo + 0xb8);
            }
            lVar6 = *(long *)(lVar6 + 0x40);
            if (lVar6 != 0) {
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
                lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                if (lVar6 == 0) goto LAB_00c65fa8;
              }
              uVar1 = Level__get_IsEvent(lVar6,0);
              if ((uVar1 & 1) == 0) {
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
                if (lVar6 != 0) {
                  lVar6 = DAFNMLEKHAD__DCOOPMCEMNE(lVar6,0);
                  if (lVar6 == 0) {
                    return;
                  }
                  lVar2 = func_0x00a67b44(_System_Collections_Generic_List_string__TypeInfo);
                  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
                            (lVar2,_Method_System_Collections_Generic_List_string___ctor__);
                  lVar9 = *(long *)((long)__this + 0x330);
                  uStack_70 = 0;
                  if (lVar9 != 0) {
                    uVar7 = *(uint *)(lVar9 + 0x18);
                    if (0 < (int)uVar7) {
                      do {
                        if (uVar7 <= uStack_70) goto LAB_00c65fac;
                        lVar10 = *(long *)(lVar9 + (long)(int)uStack_70 * 8 + 0x20);
                        if (lVar10 == 0) goto LAB_00c65fa8;
                        if (*(int *)(lVar10 + 0x18) <= *(int *)(lVar6 + 0x10)) {
                          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c65fa8;
                          lVar3 = Translate__JJJNIPAKLJF
                                            (**(long **)(_Translate_TypeInfo + 0xb8),
                                             *(undefined8 *)(lVar10 + 0x10),0);
                          uVar1 = System_String__op_Equality
                                            (*(undefined8 *)(lVar10 + 0x10),_Str_HINT_NEW_3,0);
                          if ((uVar1 & 1) != 0) {
                            uStack_74 = 10;
                            uVar8 = System_Int32__ToString(&uStack_74,0);
                            if (lVar3 == 0) goto LAB_00c65fa8;
                            lVar3 = System_String__Replace(lVar3,_Str__x_,uVar8,0);
                          }
                          if (lVar2 == 0) goto LAB_00c65fa8;
                          uVar1 = System_Collections_Generic_List___Il2CppFullySharedGenericType___Contains
                                            (lVar2,lVar3,
                                             _Method_System_Collections_Generic_List_string__Contains__
                                            );
                          if ((uVar1 & 1) == 0) {
                            uVar1 = System_String__op_Equality
                                              (*(undefined8 *)(lVar10 + 0x10),_Str_HINT_7,0);
                            if ((uVar1 & 1) != 0) {
                              if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              iVar5 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
                              if (iVar5 != 1) {
                                if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                                  func_0x00a67a30();
                                  iVar5 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
                                }
                                if (iVar5 != 2) {
                                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                                    func_0x00a67a30();
                                  }
                                  Main__GEMDEAMAGPG(_Str_Remove_HINT_7_for_PC,0);
                                  goto LAB_00c65d1c;
                                }
                              }
                            }
                            if (*(char *)(lVar10 + 0x1c) != '\0') {
                              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              if (*(char *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x11) == '\0')
                              goto LAB_00c65d1c;
                            }
                            func_0x00b7fe44(lVar2,lVar3,
                                            _Method_System_Collections_Generic_List_string__Add__);
                          }
                        }
LAB_00c65d1c:
                        uStack_70 = uStack_70 + 1;
                        uVar7 = *(uint *)(lVar9 + 0x18);
                      } while ((int)uStack_70 < (int)uVar7);
                    }
                    plVar4 = (long *)func_0x00a67b44(_System_Random_TypeInfo);
                    System_Random___ctor(plVar4,0);
                    if ((lVar2 != 0) && (plVar4 != (long *)0x0)) {
                      iStack_6c = (**(code **)(*plVar4 + 0x1a8))
                                            (plVar4,*(undefined4 *)(lVar2 + 0x18),
                                             *(undefined8 *)(*plVar4 + 0x1b0));
                      lVar9 = func_0x00a679a0(_string___TypeInfo,6);
                      if (lVar9 != 0) {
                        if (*(int *)(lVar9 + 0x18) != 0) {
                          *(undefined8 *)(lVar9 + 0x20) = _Str_LastOpenLvl__;
                          uStack_70 = *(uint *)(lVar6 + 0x10);
                          uVar8 = System_Int32__ToString(&uStack_70,0);
                          if ((1 < *(uint *)(lVar9 + 0x18)) &&
                             (*(undefined8 *)(lVar9 + 0x28) = uVar8, *(uint *)(lVar9 + 0x18) != 2))
                          {
                            *(undefined8 *)(lVar9 + 0x30) = _Str___final_hints__;
                            uStack_70 = *(uint *)(lVar2 + 0x18);
                            uVar8 = System_Int32__ToString(&uStack_70,0);
                            if ((3 < *(uint *)(lVar9 + 0x18)) &&
                               (*(undefined8 *)(lVar9 + 0x38) = uVar8, *(uint *)(lVar9 + 0x18) != 4)
                               ) {
                              *(undefined8 *)(lVar9 + 0x40) = _Str___random_hint__;
                              uVar8 = System_Int32__ToString(&iStack_6c,0);
                              if (5 < *(uint *)(lVar9 + 0x18)) {
                                *(undefined8 *)(lVar9 + 0x48) = uVar8;
                                uVar8 = System_String__Concat(lVar9,0);
                                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                                  func_0x00a67a30(_Main_TypeInfo);
                                }
                                Main__GEMDEAMAGPG(uVar8,0);
                                if (*(int *)(lVar2 + 0x18) <= iStack_6c) {
                                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                                    func_0x00a67a30();
                                  }
                                  Main__EEKNCFLMGDP(_Str_ShowResulstHints_error_);
                                  return;
                                }
                                plVar4 = *(long **)((long)__this + 0xb0);
                                if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                                  func_0x00a67a30();
                                }
                                if ((**(long **)(_Translate_TypeInfo + 0xb8) != 0) &&
                                   (lVar6 = Translate__JJJNIPAKLJF
                                                      (**(long **)(_Translate_TypeInfo + 0xb8),
                                                       _Str_HINT,0), lVar6 != 0)) {
                                  uVar8 = System_String__ToUpper(lVar6,0);
                                  System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                                            (lVar2,iStack_6c,&uStack_68,
                                             _Method_System_Collections_Generic_List_string__get_Item__
                                            );
                                  uVar8 = System_String__Concat
                                                    (_Str__color__FFBB00_,uVar8,_Str____color__,
                                                     uStack_68,0);
                                  if (plVar4 != (long *)0x0) {
                                    (**(code **)(*plVar4 + 0x5a8))
                                              (plVar4,uVar8,*(undefined8 *)(*plVar4 + 0x5b0));
                                    if (*(long *)((long)__this + 0xa8) != 0) {
                                      UnityEngine_GameObject__SetActive
                                                (*(long *)((long)__this + 0xa8),1,0);
                                      return;
                                    }
                                  }
                                }
                                goto LAB_00c65fa8;
                              }
                            }
                          }
                        }
LAB_00c65fac:
                    /* WARNING: Subroutine does not return */
                        il2cpp_throw_967b58();
                      }
                    }
                  }
                }
LAB_00c65fa8:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
            }
          }
        }
      }
    }
  }
  return;
}


// ==== public void ButtonAccel(bool value) { }   @0xb664f4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonAccel(void *__this,bool value)

{
  *(bool *)((long)__this + 0xb8) = value;
  return;
}


// ==== public void MFOBEMEHKEO(bool JCEDJOALMDL, int FECKNINKJBG, int GHGELIHOKND) { }   @0xb667b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__MFOBEMEHKEO(void *__this,bool JCEDJOALMDL,int FECKNINKJBG,int GHGELIHOKND)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  long lStack_68;
  
  if ((bRam000000000191723a & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___,JCEDJOALMDL,
                    FECKNINKJBG,GHGELIHOKND);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_GUIRating___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191723a = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if ((lVar5 != 0) && (pvVar2 = *(void **)(lVar5 + 0x50), pvVar2 != (void *)0x0)) {
    iVar1 = EventContest__get_sort(pvVar2);
    if (*(long *)((long)__this + 0x58) != 0) {
      uVar7 = *(undefined8 *)((long)__this + 0x338);
      uVar3 = UnityEngine_Component__get_transform(*(long *)((long)__this + 0x58),0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      lVar5 = UnityEngine_Object__Instantiate_object_
                        (uVar7,uVar3,_Method_UnityEngine_Object_Instantiate_GameObject___);
      if (lVar5 != 0) {
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (lVar5,&lStack_68,_Method_UnityEngine_GameObject_GetComponent_GUIRating___);
        lVar6 = lStack_68;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (lVar5,&lStack_68,_Method_UnityEngine_GameObject_GetComponent_RectTransform___);
        if (lStack_68 != 0) {
          uVar9 = 0x43aa0000;
          if (!JCEDJOALMDL) {
            uVar9 = 0x43820000;
          }
          UnityEngine_RectTransform__set_anchoredPosition(0x44160000,uVar9,lStack_68,0);
          if (((lVar6 != 0) && (*(long *)(lVar6 + 0x30) != 0)) &&
             (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                        (*(long *)(lVar6 + 0x30),&lStack_68,
                         _Method_UnityEngine_Component_GetComponent_RectTransform___),
             lVar4 = lStack_68, lStack_68 != 0)) {
            fVar8 = (float)UnityEngine_RectTransform__get_anchoredPosition(lStack_68,0);
            UnityEngine_RectTransform__get_anchoredPosition(lVar4,0);
            UnityEngine_RectTransform__set_anchoredPosition(fVar8 + -50.0,lVar4,0);
            if ((*(long *)(lVar6 + 0x38) != 0) &&
               (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                          (*(long *)(lVar6 + 0x38),&lStack_68,
                           _Method_UnityEngine_Component_GetComponent_RectTransform___),
               lVar4 = lStack_68, lStack_68 != 0)) {
              fVar8 = (float)UnityEngine_RectTransform__get_anchoredPosition(lStack_68,0);
              UnityEngine_RectTransform__get_anchoredPosition(lVar4,0);
              UnityEngine_RectTransform__set_anchoredPosition(fVar8 + -50.0,lVar4,0);
              if ((*(long *)(lVar6 + 0x40) != 0) &&
                 (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (*(long *)(lVar6 + 0x40),&lStack_68,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___),
                 lVar4 = lStack_68, lStack_68 != 0)) {
                fVar8 = (float)UnityEngine_RectTransform__get_anchoredPosition(lStack_68,0);
                UnityEngine_RectTransform__get_anchoredPosition(lVar4,0);
                UnityEngine_RectTransform__set_anchoredPosition(fVar8 + -50.0,lVar4,0);
                if (iVar1 - 1U < 2) {
                  if ((*(long *)(lVar6 + 0x38) == 0) ||
                     (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                                (*(long *)(lVar6 + 0x38),&lStack_68,
                                 _Method_UnityEngine_Component_GetComponent_RectTransform___),
                     lStack_68 == 0)) goto LAB_00c66e48;
                  UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x44098000,lStack_68,0,0);
                  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (lVar6,&lStack_68,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___);
                  if (lStack_68 == 0) goto LAB_00c66e48;
                  UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x442f0000,lStack_68,0,0);
                  if (iVar1 == 2) {
                    if ((*(long *)(lVar6 + 0x50) == 0) ||
                       (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar6 + 0x50),0),
                       lVar4 == 0)) goto LAB_00c66e48;
                    UnityEngine_GameObject__SetActive(lVar4,0,0);
                    if ((*(long *)(lVar6 + 0x48) == 0) ||
                       (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar6 + 0x48),0),
                       lVar4 == 0)) goto LAB_00c66e48;
                    UnityEngine_GameObject__SetActive(lVar4,0,0);
                  }
                  else if (iVar1 == 1) {
                    if ((*(long *)(lVar6 + 0x60) == 0) ||
                       (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar6 + 0x60),0),
                       lVar4 == 0)) goto LAB_00c66e48;
                    UnityEngine_GameObject__SetActive(lVar4,0,0);
                    if ((*(long *)(lVar6 + 0x58) == 0) ||
                       (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar6 + 0x58),0),
                       lVar4 == 0)) goto LAB_00c66e48;
                    UnityEngine_GameObject__SetActive(lVar4,0,0);
                    if (*(long *)(lVar6 + 0x50) == 0) goto LAB_00c66e48;
                    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                              (*(long *)(lVar6 + 0x50),&lStack_68,
                               _Method_UnityEngine_Component_GetComponent_RectTransform___);
                    lVar4 = lStack_68;
                    if (((*(long *)(lVar6 + 0x60) == 0) ||
                        (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                                   (*(long *)(lVar6 + 0x60),&lStack_68,
                                    _Method_UnityEngine_Component_GetComponent_RectTransform___),
                        lStack_68 == 0)) ||
                       (UnityEngine_RectTransform__get_anchoredPosition(lStack_68,0), lVar4 == 0))
                    goto LAB_00c66e48;
                    UnityEngine_RectTransform__set_anchoredPosition(lVar4,0);
                    if (*(long *)(lVar6 + 0x50) == 0) goto LAB_00c66e48;
                    lVar4 = *(long *)(lVar6 + 0x48);
                    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                              (*(long *)(lVar6 + 0x50),&lStack_68,
                               _Method_UnityEngine_Component_GetComponent_RectTransform___);
                    if (lStack_68 == 0) goto LAB_00c66e48;
                    fVar8 = (float)UnityEngine_RectTransform__get_anchoredPosition(lStack_68,0);
                    if ((*(long *)(lVar6 + 0x48) == 0) ||
                       (UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar6 + 0x48),0),
                       lVar4 == 0)) goto LAB_00c66e48;
                    UnityEngine_RectTransform__set_anchoredPosition(fVar8 + -86.0,lVar4,0);
                  }
                }
                else if (iVar1 == 0) {
                  if ((*(long *)(lVar6 + 0x38) == 0) ||
                     (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                                (*(long *)(lVar6 + 0x38),&lStack_68,
                                 _Method_UnityEngine_Component_GetComponent_RectTransform___),
                     lStack_68 == 0)) goto LAB_00c66e48;
                  UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x43cd0000,lStack_68,0,0);
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
                lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                if (lVar4 != 0) {
                  uVar3 = *(undefined8 *)(lVar4 + 0x20);
                  pvVar2 = Car__get_Current();
                  if (pvVar2 != (void *)0x0) {
                    uVar7 = *(undefined8 *)((long)pvVar2 + 0x10);
                    if (cRam0000000001916e67 == '\0') {
                      func_0x00a67900(&Main_TypeInfo);
                      cRam0000000001916e67 = '\x01';
                    }
                    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                    if (lVar4 != 0) {
                      GUIGameplay__HLIGHGDJECN
                                (_Main_TypeInfo,lVar6,uVar3,uVar7,FECKNINKJBG,GHGELIHOKND,
                                 *(undefined4 *)(lVar4 + 0x14),iVar1,1);
                      lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                      if (lVar6 != 0) {
                        if (*(long *)(lVar6 + 0x60) == 0) {
                          return;
                        }
                        if (*(long *)((long)__this + 0x58) != 0) {
                          uVar3 = UnityEngine_Component__get_transform
                                            (*(long *)((long)__this + 0x58),0);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                          }
                          lVar5 = UnityEngine_Object__Instantiate_object_
                                            (lVar5,uVar3,
                                             _Method_UnityEngine_Object_Instantiate_GameObject___);
                          if (lVar5 != 0) {
                            UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                      (lVar5,&lStack_68,
                                       _Method_UnityEngine_GameObject_GetComponent_GUIRating___);
                            lVar6 = lStack_68;
                            UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                      (lVar5,&lStack_68,
                                       _Method_UnityEngine_GameObject_GetComponent_RectTransform___)
                            ;
                            if (lStack_68 != 0) {
                              uVar9 = 0x43820000;
                              if (!JCEDJOALMDL) {
                                uVar9 = 0x43aa0000;
                              }
                              UnityEngine_RectTransform__set_anchoredPosition
                                        (0x44160000,uVar9,lStack_68,0);
                              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                              if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x60), lVar5 != 0)) {
                                uVar7 = *(undefined8 *)(lVar5 + 0x28);
                                uVar3 = Car__DBJBMIGLBNF(*(undefined4 *)(lVar5 + 0x1c),0);
                                lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                                if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x60), lVar5 != 0)) {
                                  GUIGameplay__HLIGHGDJECN
                                            (uVar3,lVar6,uVar7,uVar3,*(undefined4 *)(lVar5 + 0x34),
                                             *(undefined4 *)(lVar5 + 0x30),
                                             *(undefined4 *)(lVar5 + 0x20),iVar1,0);
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
              }
            }
          }
        }
      }
    }
  }
LAB_00c66e48:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void PKECIKMIECO(CPFPFGOIDDO BAMPGHJACCL, GameObject MIPKEALMBHI) { }   @0xb67020

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__PKECIKMIECO(void *__this,int BAMPGHJACCL,void *MIPKEALMBHI)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(char *)((long)__this + 0x51c) == '\0') {
    *(int *)((long)__this + 0x500) = BAMPGHJACCL;
    *(undefined1 *)((long)__this + 0x51c) = 1;
    *(void **)((long)__this + 0x508) = MIPKEALMBHI;
    if (MIPKEALMBHI == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar1 = UnityEngine_GameObject__get_transform(MIPKEALMBHI,0);
    *(undefined8 *)((long)__this + 0x510) = uVar1;
    switch(BAMPGHJACCL) {
    case 0xb:
    case 0xe:
      uVar2 = 0x3fd9999a;
      break;
    case 0xc:
      uVar2 = 0x40200000;
      break;
    case 0xd:
      uVar2 = 0x40966666;
      break;
    default:
      if (BAMPGHJACCL == 0) {
        uVar2 = 0x3f800000;
      }
      else {
        uVar2 = 0x40000000;
      }
      break;
    case 0x11:
      uVar2 = 0x3fc00000;
    }
    *(undefined4 *)((long)__this + 0x518) = uVar2;
    uVar2 = UnityEngine_Time__get_realtimeSinceStartup(0);
    *(undefined4 *)((long)__this + 0x4f8) = uVar2;
  }
  return;
}



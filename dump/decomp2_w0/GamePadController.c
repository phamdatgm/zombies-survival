// ==== private void Update() { }   @0xb53c44

/* WARNING: Removing unreachable block (ram,0x00c55318) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__Update(void *__this)

{
  undefined8 uVar1;
  byte bVar2;
  bool bVar3;
  void *pvVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 extraout_s0;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long in_stack_ffffffffffffffa8;
  
  pvVar4 = __this;
  if ((bRam00000000019171a0 & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Button___);
    func_0x00a67900(&GamePadController_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_JoyVertical);
    func_0x00a67900(&Str_help_arrow);
    func_0x00a67900(&Str_LB);
    func_0x00a67900(&Str_isControllerInput__IsGamePadInput__);
    func_0x00a67900(&Str_lvl_);
    func_0x00a67900(&Str_RB);
    func_0x00a67900(&Str_hide_button);
    func_0x00a67900(&Str_Start);
    func_0x00a67900(&Str_isMouseKeyboard__IsGamePadInput__);
    func_0x00a67900(&Str_arrow_car);
    func_0x00a67900(&Str_JoyHorizontal);
    pvVar4 = (void *)func_0x00a67900(&Str_X);
    bRam00000000019171a0 = 1;
  }
  pvVar4 = GamePadController__KNABINMBNJC(pvVar4);
  uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if ((uVar5 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c55828;
    uVar11 = *(undefined8 *)(**(long **)(_GUIWindow_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar11 = UnityEngine_EventSystems_EventSystem__get_current(0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Equality(pvVar4,0,0);
        if ((uVar5 & 1) == 0) {
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Inequality(pvVar4,0,0);
          if ((uVar5 & 1) != 0) {
            if (pvVar4 == (void *)0x0) goto LAB_00c55828;
            uVar5 = UnityEngine_GameObject__get_activeInHierarchy(pvVar4,0);
            if ((uVar5 & 1) == 0) goto LAB_00c53eb0;
          }
        }
        else {
LAB_00c53eb0:
          fVar14 = (float)UnityEngine_Input__GetAxisRaw(_Str_JoyVertical,0);
          fVar15 = (float)UnityEngine_Input__GetAxisRaw(_Str_JoyHorizontal,0);
          if ((ABS(fVar14) <= 0.5) && (ABS(fVar15) <= 0.5)) {
            if (*(int *)(_GamePadController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Input__GetButtonDown
                              (**(undefined8 **)(_GamePadController_TypeInfo + 0xb8),0);
            if (((uVar5 & 1) == 0) &&
               (uVar5 = UnityEngine_Input__GetButtonDown(_Str_X,0), (uVar5 & 1) == 0)) {
              if (*(char *)((long)__this + 0x32) == '\0') {
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar5 = Main__KCHOEBEIOCE(0);
                if ((uVar5 & 1) != 0) goto LAB_00c53f90;
              }
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__op_Equality(pvVar4,0,0);
              if (((uVar5 & 1) == 0) || (*(char *)((long)__this + 0x30) == '\0')) goto LAB_00c549e4;
            }
          }
LAB_00c53f90:
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Equality(pvVar4,0,0);
          if ((uVar5 & 1) == 0) goto LAB_00c54848;
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
LAB_00c541f4:
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar11 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
            if ((uVar5 & 1) != 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c55828;
              uVar11 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
              if ((uVar5 & 1) != 0) {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar9 == 0)) || (lVar9 = *(long *)(lVar9 + 0x78), lVar9 == 0)) ||
                   (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))
                goto LAB_00c55828;
                uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                if ((uVar5 & 1) != 0) {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                      (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                      lVar9 == 0)) || (lVar9 = *(long *)(lVar9 + 0x438), lVar9 == 0))
                  goto LAB_00c55828;
                  uVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar9,0);
                  if ((uVar5 & 1) != 0) {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                        (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                        lVar9 == 0)) || (lVar9 = *(long *)(lVar9 + 0x460), lVar9 == 0))
                    goto LAB_00c55828;
                    uVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar9,0);
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30(_CarController_TypeInfo);
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar9 == 0)) goto LAB_00c55828;
                    if ((uVar5 & 1) == 0) {
                      if (*(long *)(lVar9 + 0x440) == 0) goto LAB_00c55828;
                      uVar5 = UnityEngine_GameObject__get_activeInHierarchy
                                        (*(long *)(lVar9 + 0x440),0);
                      if ((uVar5 & 1) == 0) goto LAB_00c54848;
                      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                         (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                         lVar9 == 0)) goto LAB_00c55828;
                      plVar8 = *(long **)(lVar9 + 0x440);
                    }
                    else {
                      plVar8 = *(long **)(lVar9 + 0x460);
                    }
code_r0x00c558ec:
                    if ((bRam00000000019171a4 & 1) == 0) {
                      func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___);
                      func_0x00a67900(&
                                      Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__
                                     );
                      func_0x00a67900(&
                                      Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__
                                     );
                      func_0x00a67900(&
                                      Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__
                                     );
                      func_0x00a67900(&UnityEngine_EventSystems_EventSystem_TypeInfo);
                      func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Button___);
                      func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      func_0x00a67900(&Method_System_Collections_Generic_List_MLCNINCNANA__Add__);
                      func_0x00a67900(&
                                      Method_System_Collections_Generic_List_MLCNINCNANA__GetEnumerator__
                                     );
                      func_0x00a67900(&MLCNINCNANA_TypeInfo);
                      func_0x00a67900(&Main_TypeInfo);
                      func_0x00a67900(&Menu_TypeInfo);
                      func_0x00a67900(&UnityEngine_Object_TypeInfo);
                      func_0x00a67900(&Str_SetButton__);
                      func_0x00a67900(&Str___last__);
                      func_0x00a67900(&Str_lvl_);
                      bRam00000000019171a4 = 1;
                    }
                    plStack_90 = (long *)0x0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar5 = UnityEngine_Object__op_Equality(plVar8,0,0);
                    if ((uVar5 & 1) != 0) {
                      return;
                    }
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c55ff4;
                    uVar11 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
                    if ((uVar5 & 1) != 0) {
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                           (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0
                           )) || (lVar9 = *(long *)(lVar9 + 0x150), lVar9 == 0)) ||
                         (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))
                      goto LAB_00c55ff4;
                      uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                      if ((uVar5 & 1) != 0) {
                        return;
                      }
                    }
                    GamePadController__DJHKBCNIBNG(__this);
                    uVar11 = _Str_SetButton__;
                    if (plVar8 == (long *)0x0) {
                      uVar13 = 0;
                    }
                    else {
                      uVar13 = (**(code **)(*plVar8 + 0x168))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x170));
                    }
                    uVar1 = _Str___last__;
                    plVar6 = *(long **)((long)__this + 0x38);
                    if (plVar6 == (long *)0x0) {
                      uVar7 = 0;
                    }
                    else {
                      uVar7 = (**(code **)(*plVar6 + 0x168))
                                        (plVar6,*(undefined8 *)(*plVar6 + 0x170));
                    }
                    uVar11 = System_String__Concat(uVar11,uVar13,uVar1,uVar7,0);
                    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30(_Main_TypeInfo);
                    }
                    Main__GEMDEAMAGPG(uVar11,0,0);
                    *(long **)((long)__this + 0x38) = plVar8;
                    if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar11 = UnityEngine_EventSystems_EventSystem__get_current(0);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                    }
                    uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
                    if ((uVar5 & 1) == 0) {
                      return;
                    }
                    if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    lVar9 = UnityEngine_EventSystems_EventSystem__get_current(0);
                    if (lVar9 == 0) goto LAB_00c55ff4;
                    UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(lVar9,plVar8,0);
                    uVar16 = UnityEngine_Time__get_realtimeSinceStartup(0);
                    *(undefined4 *)((long)__this + 0x58) = uVar16;
                    if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c55ff4;
                    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                              (*(long *)((long)__this + 0x28),&plStack_a8,
                               _Method_System_Collections_Generic_List_MLCNINCNANA__GetEnumerator__)
                    ;
                    uStack_88 = uStack_a0;
                    plStack_90 = plStack_a8;
                    uStack_80 = uStack_98;
                    do {
                      do {
                        uVar5 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                                          (&plStack_90,
                                           _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__
                                          );
                        if ((uVar5 & 1) == 0) {
                          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                                    (&plStack_90,
                                     _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__
                                    );
                          lVar9 = func_0x00a67b44(_MLCNINCNANA_TypeInfo);
                          MLCNINCNANA___ctor(lVar9,0);
                          *(long *)((long)__this + 0x20) = lVar9;
                          if ((lVar9 == 0) ||
                             (*(long **)(lVar9 + 0x10) = plVar8, plVar8 == (long *)0x0))
                          goto LAB_00c55ff4;
                          pvVar4 = (void *)UnityEngine_Object__get_name(plVar8,0);
                          bVar3 = GamePadController__EODAOKKOJLL(pvVar4,pvVar4);
                          lVar9 = *(long *)((long)__this + 0x20);
                          if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) goto LAB_00c55ff4;
                          lVar10 = UnityEngine_GameObject__get_transform(*(long *)(lVar9 + 0x10),0);
                          if (bVar3) {
                            if (lVar10 == 0) goto LAB_00c55ff4;
                            lVar10 = UnityEngine_Transform__get_parent(lVar10,0);
                          }
                          *(long *)(lVar9 + 0x20) = lVar10;
                          lVar9 = *(long *)((long)__this + 0x20);
                          if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) goto LAB_00c55ff4;
                          UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                    (*(long *)(lVar9 + 0x10),&plStack_a8,
                                     _Method_UnityEngine_GameObject_GetComponent_Button___);
                          *(long **)(lVar9 + 0x18) = plStack_a8;
                          lVar9 = *(long *)((long)__this + 0x20);
                          if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) goto LAB_00c55ff4;
                          UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                    (*(long *)(lVar9 + 0x10),&plStack_a8,
                                     _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                          *(long **)(lVar9 + 0x28) = plStack_a8;
                          lVar9 = *(long *)((long)__this + 0x20);
                          if (((lVar9 == 0) || (*(long *)(lVar9 + 0x20) == 0)) ||
                             (lVar10 = UnityEngine_Object__get_name(*(long *)(lVar9 + 0x20),0),
                             lVar10 == 0)) goto LAB_00c55ff4;
                          uVar5 = System_String__Contains(lVar10,_Str_lvl_,0);
                          uVar19 = 0x3f800000;
                          uVar18 = 0x3f800000;
                          uVar16 = 0x3f800000;
                          if ((uVar5 & 1) == 0) {
                            if ((*(long *)((long)__this + 0x20) == 0) ||
                               (lVar10 = *(long *)(*(long *)((long)__this + 0x20) + 0x20),
                               lVar10 == 0)) goto LAB_00c55ff4;
                            uVar16 = UnityEngine_Transform__get_localScale(lVar10,0);
                          }
                          *(undefined4 *)(lVar9 + 0x30) = uVar16;
                          *(undefined4 *)(lVar9 + 0x34) = uVar18;
                          *(undefined4 *)(lVar9 + 0x38) = uVar19;
                          lVar9 = *(long *)((long)__this + 0x20);
                          if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) goto LAB_00c55ff4;
                          uVar11 = UnityEngine_RectTransform__get_pivot(*(long *)(lVar9 + 0x28),0);
                          *(undefined4 *)(lVar9 + 0x3c) = extraout_s0;
                          *(undefined4 *)(lVar9 + 0x40) = uVar18;
                          uVar5 = GamePadController__PJOJJBEIFAE
                                            (uVar11,*(undefined8 *)((long)__this + 0x20));
                          if ((uVar5 & 1) == 0) {
                            lVar9 = *(long *)((long)__this + 0x20);
                            if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) goto LAB_00c55ff4;
                            uVar16 = UnityEngine_RectTransform__get_anchoredPosition
                                               (*(long *)(lVar9 + 0x28),0);
                            *(undefined4 *)(lVar9 + 0x44) = uVar16;
                            *(undefined4 *)(lVar9 + 0x48) = uVar18;
                          }
                          if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c55ff4;
                          func_0x00b7fe44(*(long *)((long)__this + 0x28),
                                          *(undefined8 *)((long)__this + 0x20),
                                          _Method_System_Collections_Generic_List_MLCNINCNANA__Add__
                                         );
                          goto LAB_00c55e20;
                        }
                        func_0x00b947ec(&plStack_90,&lStack_78,
                                        _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__
                                       );
                        lVar9 = lStack_78;
                      } while (lStack_78 == 0);
                      uVar11 = *(undefined8 *)(lStack_78 + 0x10);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar5 = UnityEngine_Object__op_Equality(uVar11,plVar8,0);
                    } while ((uVar5 & 1) == 0);
                    *(long *)((long)__this + 0x20) = lVar9;
                    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                              (&plStack_90,
                               _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__
                              );
LAB_00c55e20:
                    if (*(long *)((long)__this + 0x20) == 0) {
                      return;
                    }
                    lVar9 = *(long *)(*(long *)((long)__this + 0x20) + 0x28);
                    if (lVar9 == 0) goto LAB_00c55ff4;
                    fVar14 = (float)UnityEngine_RectTransform__get_pivot(lVar9,0);
                    fVar15 = 0.5;
                    if (fVar14 == 0.5) {
                      if ((*(long *)((long)__this + 0x20) == 0) ||
                         (lVar9 = *(long *)(*(long *)((long)__this + 0x20) + 0x28), lVar9 == 0))
                      goto LAB_00c55ff4;
                      UnityEngine_RectTransform__get_pivot(lVar9,0);
                      if (fVar15 != 0.5) goto LAB_00c55e68;
                    }
                    else {
LAB_00c55e68:
                      if ((*(long *)((long)__this + 0x20) == 0) ||
                         (lVar9 = *(long *)(*(long *)((long)__this + 0x20) + 0x28), lVar9 == 0))
                      goto LAB_00c55ff4;
                      fVar14 = 0.5;
                      UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,lVar9,0);
                      lVar9 = *(long *)((long)__this + 0x20);
                      if ((lVar9 == 0) || (lVar10 = *(long *)(lVar9 + 0x28), lVar10 == 0))
                      goto LAB_00c55ff4;
                      fVar20 = *(float *)(lVar9 + 0x44);
                      fVar15 = (float)UnityEngine_RectTransform__get_sizeDelta(lVar10,0);
                      lVar9 = *(long *)((long)__this + 0x20);
                      if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) goto LAB_00c55ff4;
                      fVar22 = *(float *)(lVar9 + 0x3c);
                      fVar24 = *(float *)(lVar9 + 0x30);
                      fVar23 = *(float *)(lVar9 + 0x44);
                      fVar21 = *(float *)(lVar9 + 0x48);
                      UnityEngine_RectTransform__get_sizeDelta(*(long *)(lVar9 + 0x28),0);
                      lVar9 = *(long *)((long)__this + 0x20);
                      if (lVar9 == 0) goto LAB_00c55ff4;
                      fVar17 = ABS(fVar22 + -0.5);
                      fVar22 = fVar15 * fVar17;
                      if (fVar23 < 0.0) {
                        fVar22 = -(fVar15 * fVar17);
                      }
                      fVar23 = ABS(*(float *)(lVar9 + 0x40) + -0.5);
                      fVar15 = fVar14 * fVar23;
                      if (*(float *)(lVar9 + 0x48) < 0.0) {
                        fVar15 = -(fVar14 * fVar23);
                      }
                      UnityEngine_RectTransform__set_anchoredPosition
                                (fVar20 + ABS(fVar24) * fVar22,
                                 fVar21 + ABS(*(float *)(lVar9 + 0x34)) * fVar15,lVar10,0);
                    }
                    if ((*(long *)((long)__this + 0x20) != 0) &&
                       (lVar9 = *(long *)(*(long *)((long)__this + 0x20) + 0x10), lVar9 != 0)) {
                      pvVar4 = (void *)UnityEngine_Object__get_name(lVar9,0);
                      bVar3 = GamePadController__EODAOKKOJLL(pvVar4,pvVar4);
                      if (bVar3) {
                        if ((*(long *)((long)__this + 0x20) == 0) ||
                           (lVar9 = *(long *)(*(long *)((long)__this + 0x20) + 0x20), lVar9 == 0))
                        goto LAB_00c55ff4;
                        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                                  (lVar9,&plStack_a8,
                                   _Method_UnityEngine_Component_GetComponent_Image___);
                        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        uVar5 = UnityEngine_Object__op_Inequality(plStack_a8,0,0);
                        if ((uVar5 & 1) != 0) {
                          if (plStack_a8 == (long *)0x0) goto LAB_00c55ff4;
                          (**(code **)(*plStack_a8 + 0x2a8))
                                    (*(undefined4 *)((long)__this + 0x6c),
                                     *(undefined4 *)((long)__this + 0x70),
                                     *(undefined4 *)((long)__this + 0x74),
                                     *(undefined4 *)((long)__this + 0x78),plStack_a8,
                                     *(undefined8 *)(*plStack_a8 + 0x2b0));
                        }
                      }
                      return;
                    }
LAB_00c55ff4:
                    /* WARNING: Subroutine does not return */
                    il2cpp_throw_967b50();
                  }
                }
              }
            }
          }
          else {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c55828;
            uVar11 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
            if ((uVar5 & 1) == 0) goto LAB_00c541f4;
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
                (lVar9 = *(long *)(lVar9 + 0x78), lVar9 == 0)) ||
               (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))
            goto LAB_00c55828;
            uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
            if ((uVar5 & 1) != 0) {
              uVar11 = *(undefined8 *)((long)__this + 0x38);
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
              goto LAB_00c55828;
              uVar13 = *(undefined8 *)(lVar9 + 0x420);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__op_Equality(uVar11,uVar13,0);
              if ((uVar5 & 1) == 0) {
LAB_00c540f0:
                uVar11 = *(undefined8 *)((long)__this + 0x38);
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                goto LAB_00c55828;
                uVar13 = *(undefined8 *)(lVar9 + 0x430);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar5 = UnityEngine_Object__op_Equality(uVar11,uVar13,0);
                if ((uVar5 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                      (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
                     (lVar9 = *(long *)(lVar9 + 0x430), lVar9 == 0)) goto LAB_00c55828;
                  uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                  if ((uVar5 & 1) != 0) goto LAB_00c54180;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  plVar8 = *(long **)(_Menu_TypeInfo + 0xb8);
LAB_00c5469c:
                  if ((*plVar8 == 0) || (lVar9 = *(long *)(*plVar8 + 0x20), lVar9 == 0))
                  goto LAB_00c55828;
                  plVar8 = *(long **)(lVar9 + 0x420);
                  goto code_r0x00c558ec;
                }
LAB_00c54180:
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                    (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
                   (lVar9 = *(long *)(lVar9 + 0x480), lVar9 == 0)) goto LAB_00c55828;
                uVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar9,0);
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_Menu_TypeInfo);
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                goto LAB_00c55828;
                if ((uVar5 & 1) != 0) {
                  plVar8 = *(long **)(lVar9 + 0x480);
                  goto code_r0x00c558ec;
                }
                if (*(long *)(lVar9 + 0x4b8) == 0) goto LAB_00c55828;
                uVar5 = UnityEngine_GameObject__get_activeInHierarchy(*(long *)(lVar9 + 0x4b8),0);
                if ((uVar5 & 1) == 0) goto LAB_00c54848;
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_Menu_TypeInfo);
                }
                lVar9 = **(long **)(_Menu_TypeInfo + 0xb8);
                if ((lVar9 == 0) || (*(long *)(lVar9 + 0x20) == 0)) goto LAB_00c55828;
                if (*(char *)(*(long *)(lVar9 + 0x20) + 0x471) != '\0') {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_Menu_TypeInfo);
                    lVar9 = **(long **)(_Menu_TypeInfo + 0xb8);
                    if (lVar9 == 0) goto LAB_00c55828;
                  }
                  if ((*(long *)(lVar9 + 0x20) == 0) ||
                     (lVar9 = *(long *)(*(long *)(lVar9 + 0x20) + 0x420), lVar9 == 0))
                  goto LAB_00c55828;
                  uVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar9,0);
                  if ((uVar5 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30(_Menu_TypeInfo);
                    }
                    plVar8 = *(long **)(_Menu_TypeInfo + 0xb8);
                    goto LAB_00c5469c;
                  }
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_Menu_TypeInfo);
                }
                lVar9 = **(long **)(_Menu_TypeInfo + 0xb8);
                if ((lVar9 == 0) || (*(long *)(lVar9 + 0x20) == 0)) goto LAB_00c55828;
                if (*(char *)(*(long *)(lVar9 + 0x20) + 0x470) != '\0') {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_Menu_TypeInfo);
                    lVar9 = **(long **)(_Menu_TypeInfo + 0xb8);
                    if (lVar9 == 0) goto LAB_00c55828;
                  }
                  if ((*(long *)(lVar9 + 0x20) == 0) ||
                     (lVar9 = *(long *)(*(long *)(lVar9 + 0x20) + 0x430), lVar9 == 0))
                  goto LAB_00c55828;
                  uVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar9,0);
                  if ((uVar5 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30(_Menu_TypeInfo);
                    }
                    plVar8 = *(long **)(_Menu_TypeInfo + 0xb8);
                    goto LAB_00c5466c;
                  }
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_Menu_TypeInfo);
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                goto LAB_00c55828;
                uVar11 = *(undefined8 *)(lVar9 + 0x548);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
                if ((uVar5 & 1) == 0) goto LAB_00c54848;
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                goto LAB_00c55828;
                plVar8 = *(long **)(lVar9 + 0x548);
              }
              else {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                    (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
                   (lVar9 = *(long *)(lVar9 + 0x420), lVar9 == 0)) goto LAB_00c55828;
                uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                if ((uVar5 & 1) != 0) goto LAB_00c540f0;
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                plVar8 = *(long **)(_Menu_TypeInfo + 0xb8);
LAB_00c5466c:
                if ((*plVar8 == 0) || (lVar9 = *(long *)(*plVar8 + 0x20), lVar9 == 0))
                goto LAB_00c55828;
                plVar8 = *(long **)(lVar9 + 0x430);
              }
              goto code_r0x00c558ec;
            }
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
                (lVar9 = *(long *)(lVar9 + 0x70), lVar9 == 0)) ||
               (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))
            goto LAB_00c55828;
            uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
            if ((uVar5 & 1) != 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                  (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
                 ((lVar9 = *(long *)(lVar9 + 0x278), lVar9 == 0 ||
                  (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))))
              goto LAB_00c55828;
              uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
              if ((uVar5 & 1) != 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                    (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
                   ((lVar9 = *(long *)(lVar9 + 0x170), lVar9 == 0 ||
                    (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))))
                goto LAB_00c55828;
                uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                if ((uVar5 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                      (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
                     (lVar9 = *(long *)(lVar9 + 0x170), lVar9 == 0)) goto LAB_00c55828;
                  uVar11 = *(undefined8 *)(lVar9 + 0x30);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
                  if ((uVar5 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                        (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                       || ((lVar9 = *(long *)(lVar9 + 0x170), lVar9 == 0 ||
                           (lVar9 = *(long *)(lVar9 + 0x30), lVar9 == 0)))) goto LAB_00c55828;
                    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                    if ((uVar5 & 1) == 0) {
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                          (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 != 0)
                          ) && ((lVar9 = *(long *)(lVar9 + 0x170), lVar9 != 0 &&
                                (lVar9 = *(long *)(lVar9 + 0x30), lVar9 != 0)))) {
                        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                  (lVar9,&stack0xffffffffffffffa8,
                                   _Method_UnityEngine_GameObject_GetComponent_Button___);
                        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        uVar5 = UnityEngine_Object__op_Inequality(in_stack_ffffffffffffffa8,0,0);
                        if ((uVar5 & 1) == 0) {
                          return;
                        }
                        if (in_stack_ffffffffffffffa8 != 0) {
                          uVar11 = *(undefined8 *)(in_stack_ffffffffffffffa8 + 0x30);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
                          if ((uVar5 & 1) == 0) {
                            return;
                          }
                          plVar8 = *(long **)(in_stack_ffffffffffffffa8 + 0x30);
                          if (plVar8 != (long *)0x0) {
                            (**(code **)(*plVar8 + 0x398))(plVar8,*(undefined8 *)(*plVar8 + 0x3a0));
                            return;
                          }
                        }
                      }
                      goto LAB_00c55828;
                    }
                  }
                  goto LAB_00c54848;
                }
                if ((bRam00000000019171a1 & 1) == 0) {
                  func_0x00a67900(&Menu_TypeInfo);
                  bRam00000000019171a1 = 1;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
                    (lVar9 = *(long *)(lVar9 + 0x170), lVar9 == 0)) ||
                   (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0)) {
LAB_00c561a4:
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b50();
                }
                uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                if ((uVar5 & 1) != 0) {
                  return;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                    (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
                   ((lVar9 = *(long *)(lVar9 + 0x268), lVar9 == 0 ||
                    (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))))
                goto LAB_00c561a4;
                uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_Menu_TypeInfo);
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                goto LAB_00c561a4;
                if ((uVar5 & 1) == 0) {
                  lVar9 = *(long *)(lVar9 + 0x280);
                }
                else {
                  lVar9 = *(long *)(lVar9 + 0x268);
                }
                if (lVar9 == 0) goto LAB_00c561a4;
                plVar8 = (long *)UnityEngine_Component__get_gameObject(lVar9,0);
                goto code_r0x00c558ec;
              }
            }
          }
LAB_00c54848:
          uVar11 = *(undefined8 *)((long)__this + 0x38);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
          if ((uVar5 & 1) == 0) {
LAB_00c548c8:
            uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
            if ((uVar5 & 1) == 0) {
LAB_00c54968:
              if ((**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) ||
                 (lVar9 = *(long *)(**(long **)(_GUIWindow_TypeInfo + 0xb8) + 0x30), lVar9 == 0))
              goto LAB_00c55828;
              uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
              if ((uVar5 & 1) != 0) {
                if (((**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) ||
                    (lVar9 = *(long *)(**(long **)(_GUIWindow_TypeInfo + 0xb8) + 0x30), lVar9 == 0))
                   || (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                 (lVar9,&stack0xffffffffffffffa8,
                                  _Method_UnityEngine_GameObject_GetComponent_Button___),
                      in_stack_ffffffffffffffa8 == 0)) goto LAB_00c55828;
                if (*(char *)(in_stack_ffffffffffffffa8 + 0xd8) != '\0') {
                  lVar9 = **(long **)(_GUIWindow_TypeInfo + 0xb8);
                  goto joined_r0x00c549d4;
                }
              }
              goto LAB_00c549e4;
            }
            lVar9 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
            if (lVar9 == 0) goto LAB_00c55828;
            uVar11 = *(undefined8 *)(lVar9 + 0x30);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
            if ((uVar5 & 1) == 0) goto LAB_00c54968;
            lVar9 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
            if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x30), lVar9 == 0)) goto LAB_00c55828;
            uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
            if ((uVar5 & 1) == 0) goto LAB_00c54968;
            lVar9 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
joined_r0x00c549d4:
            if (lVar9 == 0) goto LAB_00c55828;
            uVar11 = *(undefined8 *)(lVar9 + 0x30);
          }
          else {
            if ((*(long *)((long)__this + 0x38) == 0) ||
               (lVar9 = UnityEngine_GameObject__get_gameObject(*(long *)((long)__this + 0x38),0),
               lVar9 == 0)) goto LAB_00c55828;
            uVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar9,0);
            if ((uVar5 & 1) == 0) goto LAB_00c548c8;
            if ((*(long *)((long)__this + 0x38) == 0) ||
               (uVar11 = UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                   (*(long *)((long)__this + 0x38),&stack0xffffffffffffffa8,
                                    _Method_UnityEngine_GameObject_GetComponent_Button___),
               in_stack_ffffffffffffffa8 == 0)) goto LAB_00c55828;
            if ((*(char *)(in_stack_ffffffffffffffa8 + 0xd8) == '\0') ||
               (uVar5 = GamePadController__ANCEANGJPLH(uVar11,*(undefined8 *)((long)__this + 0x38)),
               (uVar5 & 1) != 0)) goto LAB_00c548c8;
            uVar11 = *(undefined8 *)((long)__this + 0x38);
          }
          GamePadController__FJJJEMJAMGO(__this,uVar11);
        }
      }
    }
  }
LAB_00c549e4:
  fVar14 = (float)UnityEngine_Time__get_unscaledTime(0);
  if ((*(float *)((long)__this + 0x40) < fVar14) ||
     (uVar5 = UnityEngine_Input__get_anyKey(0), (uVar5 & 1) != 0)) {
    uVar5 = GamePadController__GDCKFJKBEOE();
    if ((uVar5 & 1) == 0) {
      if (*(char *)((long)__this + 0x32) == '\0') {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = Main__KCHOEBEIOCE(0);
        if ((uVar5 & 1) != 0) goto LAB_00c54a0c;
      }
    }
    else {
LAB_00c54a0c:
      pcVar12 = (char *)((long)__this + 0x30);
      *(char *)((long)__this + 0x31) = *pcVar12;
      *pcVar12 = '\x01';
      UnityEngine_Cursor__set_visible(0,0);
      UnityEngine_Cursor__set_lockState(1,0);
      if (*pcVar12 != *(char *)((long)__this + 0x31)) {
        GamePadController__FKBCEHJHEBP(__this);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c55828;
        Menu__OCCACLIDKCM((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar11 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c55828;
          uVar11 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 == 0))
            goto LAB_00c55828;
            GUIGameplay__AGGPLIPJHPI(lVar9,0);
          }
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar11 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c55828;
            uVar11 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
            if ((uVar5 & 1) != 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c55828;
              Menu__FMEHJALLGBK(**(long **)(_Menu_TypeInfo + 0xb8),0);
              if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
                  (lVar9 = *(long *)(lVar9 + 0x80), lVar9 == 0)) ||
                 (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))
              goto LAB_00c55828;
              uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
              if ((uVar5 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                    (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
                   ((lVar9 = *(long *)(lVar9 + 0x90), lVar9 == 0 ||
                    (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))))
                goto LAB_00c55828;
                uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                if ((uVar5 & 1) == 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                      (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
                     ((lVar9 = *(long *)(lVar9 + 0x88), lVar9 == 0 ||
                      (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))))
                  goto LAB_00c55828;
                  uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                  if ((uVar5 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c55828;
                    Menu__KJDAFBPKLLF(**(long **)(_Menu_TypeInfo + 0xb8),0);
                  }
                  goto LAB_00c54cb4;
                }
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c55828;
              Menu__INMDNKGHGEO(**(long **)(_Menu_TypeInfo + 0xb8),0);
            }
          }
        }
LAB_00c54cb4:
        if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar11 = System_Boolean__ToString(pcVar12,0);
        uVar11 = System_String__Concat(_Str_isControllerInput__IsGamePadInput__,uVar11,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        Main__GEMDEAMAGPG(uVar11,0,0);
      }
    }
    uVar5 = GamePadController__FEGHHAKCEIG();
    if ((uVar5 & 1) == 0) {
      if (*(char *)((long)__this + 0x32) != '\0') {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = Main__KCHOEBEIOCE(0);
        if ((uVar5 & 1) == 0) goto LAB_00c54d70;
      }
    }
    else {
LAB_00c54d70:
      GamePadController__DJHKBCNIBNG(__this);
      GamePadController__KBLMMLBPPKO(__this);
      pcVar12 = (char *)((long)__this + 0x30);
      *(char *)((long)__this + 0x31) = *pcVar12;
      *pcVar12 = '\0';
      UnityEngine_Cursor__set_visible(1,0);
      UnityEngine_Cursor__set_lockState(0,0);
      if (*pcVar12 != *(char *)((long)__this + 0x31)) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c55828;
        Menu__OCCACLIDKCM((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c55828;
        Menu__DEEFHDJMBAC(**(long **)(_Menu_TypeInfo + 0xb8),0);
        GamePadController__FKBCEHJHEBP(__this);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar11 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c55828;
          uVar11 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 == 0))
            goto LAB_00c55828;
            GUIGameplay__AGGPLIPJHPI(lVar9,0);
          }
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar11 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c55828;
            uVar11 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
            if ((uVar5 & 1) != 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c55828;
              Menu__FMEHJALLGBK(**(long **)(_Menu_TypeInfo + 0xb8),0);
            }
          }
        }
        if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar11 = System_Boolean__ToString(pcVar12,0);
        uVar11 = System_String__Concat(_Str_isMouseKeyboard__IsGamePadInput__,uVar11,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        Main__GEMDEAMAGPG(uVar11,0,0);
      }
    }
    fVar14 = (float)UnityEngine_Time__get_unscaledTime(0);
    *(float *)((long)__this + 0x40) = fVar14 + 0.1;
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    bVar2 = Main__KCHOEBEIOCE(0);
    *(byte *)((long)__this + 0x32) = bVar2 & 1;
  }
  if (*(char *)((long)__this + 0x30) == '\0') {
    return;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(pvVar4,0,0);
  if ((uVar5 & 1) != 0) {
    uVar11 = *(undefined8 *)((long)__this + 0x38);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(pvVar4,uVar11,0);
    if (((uVar5 & 1) != 0) || (*(long *)((long)__this + 0x20) == 0)) {
      GamePadController__FJJJEMJAMGO(__this,pvVar4);
    }
  }
  if (*(long *)((long)__this + 0x20) != 0) {
    uVar11 = *(undefined8 *)(*(long *)((long)__this + 0x20) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c55828;
      uVar11 = *(undefined8 *)(*(long *)((long)__this + 0x20) + 0x10);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Equality(pvVar4,uVar11,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c55828;
        uVar11 = *(undefined8 *)(*(long *)((long)__this + 0x20) + 0x18);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if ((uVar5 & 1) != 0) {
          if ((*(long *)((long)__this + 0x20) == 0) ||
             (lVar9 = *(long *)(*(long *)((long)__this + 0x20) + 0x18), lVar9 == 0))
          goto LAB_00c55828;
          if (*(char *)(lVar9 + 0xd8) != '\0') {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            fVar14 = 1.1;
            if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c55828;
              uVar11 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
              if ((uVar5 & 1) != 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
                    (lVar9 = *(long *)(lVar9 + 0x70), lVar9 == 0)) ||
                   (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))
                goto LAB_00c55828;
                uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                if ((uVar5 & 1) != 0) {
                  if (((*(long *)((long)__this + 0x20) == 0) ||
                      (lVar9 = *(long *)(*(long *)((long)__this + 0x20) + 0x20), lVar9 == 0)) ||
                     (lVar9 = UnityEngine_Object__get_name(lVar9,0), lVar9 == 0)) goto LAB_00c55828;
                  uVar5 = System_String__Contains(lVar9,_Str_lvl_,0);
                  if ((uVar5 & 1) == 0) {
                    if (((*(long *)((long)__this + 0x20) == 0) ||
                        (lVar9 = *(long *)(*(long *)((long)__this + 0x20) + 0x20), lVar9 == 0)) ||
                       (lVar9 = UnityEngine_Object__get_name(lVar9,0), lVar9 == 0))
                    goto LAB_00c55828;
                    uVar5 = System_String__Contains(lVar9,_Str_hide_button,0);
                    if ((uVar5 & 1) == 0) goto LAB_00c55268;
                  }
                  fVar14 = 1.2;
                }
              }
            }
LAB_00c55268:
            if (((*(long *)((long)__this + 0x20) == 0) ||
                (lVar9 = *(long *)(*(long *)((long)__this + 0x20) + 0x20), lVar9 == 0)) ||
               (lVar9 = UnityEngine_Object__get_name(lVar9,0), lVar9 == 0)) goto LAB_00c55828;
            uVar5 = System_String__Contains(lVar9,_Str_help_arrow,0);
            if ((uVar5 & 1) == 0) {
              if (((*(long *)((long)__this + 0x20) == 0) ||
                  (lVar9 = *(long *)(*(long *)((long)__this + 0x20) + 0x20), lVar9 == 0)) ||
                 (lVar9 = UnityEngine_Object__get_name(lVar9,0), lVar9 == 0)) goto LAB_00c55828;
              uVar5 = System_String__Contains(lVar9,_Str_arrow_car,0);
              if ((uVar5 & 1) != 0) goto LAB_00c552d0;
            }
            else {
LAB_00c552d0:
              fVar14 = 1.2;
            }
            fVar15 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
            fVar15 = ((fVar15 - *(float *)((long)__this + 0x58)) + 0.3) * 1.5;
            fVar20 = (float)(int)(fVar15 * 0.5);
            fVar15 = fVar15 - (fVar20 + fVar20);
            fVar20 = fVar15 + -1.0;
            if (fVar15 < 0.0) {
              fVar20 = -1.0;
            }
            lVar9 = *(long *)((long)__this + 0x20);
            fVar20 = 1.0 - ABS(fVar20);
            fVar15 = fVar20;
            if (1.0 < fVar20) {
              fVar15 = 1.0;
            }
            if (fVar20 < 0.0) {
              fVar15 = 0.0;
            }
            if ((lVar9 == 0) || (*(long *)(lVar9 + 0x20) == 0)) goto LAB_00c55828;
            fVar14 = (fVar14 + -1.0) * fVar15 + 1.0;
            UnityEngine_Transform__set_localScale
                      (fVar14 * *(float *)(lVar9 + 0x30),fVar14 * *(float *)(lVar9 + 0x34),
                       fVar14 * *(float *)(lVar9 + 0x38),*(long *)(lVar9 + 0x20),0);
          }
        }
      }
    }
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(pvVar4,0,0);
  if ((uVar5 & 1) != 0) {
    if (pvVar4 == (void *)0x0) goto LAB_00c55828;
    uVar5 = UnityEngine_GameObject__get_activeInHierarchy(pvVar4,0);
    if ((uVar5 & 1) == 0) {
      GamePadController__KBLMMLBPPKO(__this);
    }
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) != 0) {
      uVar11 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
           (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 != 0)) &&
          (lVar9 = *(long *)(lVar9 + 0x78), lVar9 != 0)) &&
         (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 != 0)) {
        uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
        if ((uVar5 & 1) == 0) {
          return;
        }
        uVar5 = UnityEngine_Input__GetButtonDown(_Str_LB,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 == 0))
          goto LAB_00c55828;
          GUIGameplay__ButtonPauseHelpLeft(lVar9,0);
        }
        uVar5 = UnityEngine_Input__GetButtonDown(_Str_RB,0);
        if ((uVar5 & 1) == 0) {
          return;
        }
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
           (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 != 0)) {
          GUIGameplay__ButtonPauseHelpRight(lVar9,0);
          return;
        }
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
      uVar11 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
          (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 != 0)) &&
         (lVar9 = *(long *)(lVar9 + 0x30), lVar9 != 0)) {
        uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
        if ((uVar5 & 1) != 0) {
          uVar5 = UnityEngine_Input__GetButtonDown(_Str_LB,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c55828;
            Menu__LJDEGMJCOIG(**(long **)(_Menu_TypeInfo + 0xb8),0);
          }
          uVar5 = UnityEngine_Input__GetButtonDown(_Str_RB,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c55828;
            Menu__BMIIEMFFFEO(**(long **)(_Menu_TypeInfo + 0xb8),0);
          }
          uVar5 = UnityEngine_Input__GetButtonDown(_Str_Start,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 != 0)) &&
               ((lVar9 = *(long *)(lVar9 + 0x578), lVar9 != 0 &&
                (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 != 0)))) {
              uVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar9,0);
              if ((uVar5 & 1) == 0) {
                return;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              lVar9 = **(long **)(_Menu_TypeInfo + 0xb8);
              if (((lVar9 != 0) && (*(long *)(lVar9 + 0x20) != 0)) &&
                 (lVar10 = *(long *)(*(long *)(lVar9 + 0x20) + 0x578), lVar10 != 0)) {
                if (*(char *)(lVar10 + 0xd8) == '\0') {
                  return;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                  lVar9 = **(long **)(_Menu_TypeInfo + 0xb8);
                  if (lVar9 == 0) goto LAB_00c55828;
                }
                if ((*(long *)(lVar9 + 0x20) != 0) &&
                   (lVar9 = *(long *)(*(long *)(lVar9 + 0x20) + 0x1b0), lVar9 != 0)) {
                  uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                  if ((uVar5 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                        (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                       || (lVar9 = *(long *)(lVar9 + 0x1b0), lVar9 == 0)) goto LAB_00c55828;
                    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                    if ((uVar5 & 1) == 0) {
                      return;
                    }
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                        (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                       || ((lVar9 = *(long *)(lVar9 + 0x90), lVar9 == 0 ||
                           (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))))
                    goto LAB_00c55828;
                    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                    if ((uVar5 & 1) == 0) {
                      return;
                    }
                  }
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                     (pvVar4 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20),
                     pvVar4 != (void *)0x0)) {
                    GUIGarage__ButtonStartRaceGo(pvVar4);
                    return;
                  }
                }
              }
            }
            goto LAB_00c55828;
          }
        }
        return;
      }
    }
  }
LAB_00c55828:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private bool EODAOKKOJLL(string BJNIAMHIPAM) { }   @0xb53724

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GamePadController__EODAOKKOJLL(void *__this,void *BJNIAMHIPAM)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  if ((bRam00000000019171a5 & 1) == 0) {
    func_0x00a67900(&Str_icon_encyclopedia);
    func_0x00a67900(&Str_color_);
    __this = (void *)func_0x00a67900(&Str_bg);
    bRam00000000019171a5 = 1;
  }
  if (BJNIAMHIPAM == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50(__this);
  }
  uVar4 = System_String__Contains(BJNIAMHIPAM,_Str_color_,0);
  if (((uVar4 & 1) != 0) &&
     (uVar4 = System_String__Contains(BJNIAMHIPAM,_Str_bg,0), (uVar4 & 1) != 0)) {
    return true;
  }
  if (BJNIAMHIPAM == _Str_icon_encyclopedia) {
    return true;
  }
  if (BJNIAMHIPAM != (void *)0x0) {
    if (_Str_icon_encyclopedia == (void *)0x0) {
      return false;
    }
    if (*(int *)((long)BJNIAMHIPAM + 0x10) != *(int *)((long)_Str_icon_encyclopedia + 0x10)) {
      return false;
    }
    lVar1 = (long)BJNIAMHIPAM + 0x14;
    lVar2 = (long)_Str_icon_encyclopedia + 0x14;
    lVar8 = (long)*(int *)((long)BJNIAMHIPAM + 0x10) << 1;
    if (lVar1 != lVar2) {
      lVar5 = System_IntPtr__op_Explicit(0,0,lVar8,0);
      uVar6 = System_IntPtr__op_Explicit(lVar8,0);
      uVar4 = System_IntPtr__op_Explicit(uVar6,0);
      if (7 < uVar4) {
        lVar8 = System_IntPtr__op_Subtraction(uVar6,8,0);
        while( true ) {
          uVar4 = System_IntPtr__op_Explicit(lVar8,0);
          uVar7 = System_IntPtr__op_Explicit(lVar5,0);
          if (uVar4 <= uVar7) {
            return *(long *)(lVar1 + lVar8) == *(long *)(lVar2 + lVar8);
          }
          uVar4 = System_UIntPtr__op_Inequality
                            (*(undefined8 *)(lVar1 + lVar5),*(undefined8 *)(lVar2 + lVar5),0);
          if ((uVar4 & 1) != 0) break;
          lVar5 = System_IntPtr__op_Addition(lVar5,8,0);
        }
        return false;
      }
      uVar4 = System_IntPtr__op_Explicit(uVar6,0);
      uVar7 = System_IntPtr__op_Explicit(lVar5,0);
      if (uVar7 < uVar4) {
        do {
          bVar3 = *(char *)(lVar1 + lVar5) == *(char *)(lVar2 + lVar5);
          if (!bVar3) {
            return bVar3;
          }
          lVar5 = System_IntPtr__op_Addition(lVar5,1,0);
          uVar4 = System_IntPtr__op_Explicit(uVar6,0);
          uVar7 = System_IntPtr__op_Explicit(lVar5,0);
        } while (uVar7 < uVar4);
        return bVar3;
      }
    }
    return true;
  }
  return false;
}


// ==== public GameObject KNABINMBNJC() { }   @0xb5582c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GamePadController__KNABINMBNJC(void *__this)

{
  undefined8 uVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  
  if ((bRam00000000019171aa & 1) == 0) {
    func_0x00a67900(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171aa = 1;
  }
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  pvVar3 = (void *)0x0;
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar4 = UnityEngine_EventSystems_EventSystem__get_current(0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    pvVar3 = *(void **)(lVar4 + 0x40);
  }
  return pvVar3;
}


// ==== public void FNHCGKNKDNJ(Level MGKLJJHHEML) { }   @0xb56f58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__FNHCGKNKDNJ(void *__this,void *MGKLJJHHEML)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  void *__this_00;
  undefined8 uVar10;
  long *unaff_x25;
  
  if ((bRam00000000019171af & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_lvl_);
    func_0x00a67900(&Str_SaveLastLvl__);
    bRam00000000019171af = 1;
  }
  if (MGKLJJHHEML == (void *)0x0) {
    if (*(long *)((long)__this + 0x20) != 0) {
      lVar7 = *(long *)(*(long *)((long)__this + 0x20) + 0x10);
      if ((lVar7 == 0) || (lVar7 = UnityEngine_Object__get_name(lVar7,0), lVar7 == 0)) {
LAB_00c57168:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar8 = System_String__Contains(lVar7,_Str_lvl_,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
           (lVar7 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x38), lVar7 == 0))
        goto LAB_00c57168;
        if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
          uVar8 = 0;
          uVar9 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
          do {
            if (uVar9 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            __this_00 = *(void **)(lVar7 + 0x20 + uVar8 * 8);
            if (__this_00 != (void *)0x0) {
              pvVar6 = Level__get_gui(__this_00);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_UnityEngine_Object_TypeInfo);
              }
              uVar9 = UnityEngine_Object__op_Inequality(pvVar6,0,0);
              if ((uVar9 & 1) != 0) {
                pvVar6 = Level__get_gui(__this_00);
                if (pvVar6 == (void *)0x0) goto LAB_00c57168;
                uVar10 = UnityEngine_Component__get_gameObject(pvVar6,0);
                if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c57168;
                uVar5 = *(undefined8 *)(*(long *)((long)__this + 0x20) + 0x10);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar9 = UnityEngine_Object__op_Equality(uVar10,uVar5,0);
                if ((uVar9 & 1) != 0) {
                  *(void **)((long)__this + 0x50) = __this_00;
                }
              }
            }
            uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
            uVar8 = uVar8 + 1;
          } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
        }
      }
    }
  }
  else {
    *(void **)((long)__this + 0x50) = MGKLJJHHEML;
  }
  uVar10 = _Str_SaveLastLvl__;
  plVar4 = *(long **)((long)__this + 0x50);
  if (plVar4 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  }
  plVar4 = (long *)System_String__Concat(uVar10,uVar5,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  if ((bRam0000000001917206 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Debug_TypeInfo,0,0);
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
  lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar7 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar8 = DAFNMLEKHAD__LLEFEIHEJDE(lVar7,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__Log(plVar4,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar10 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c590c8;
  uVar10 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar4 == (long *)0x0)) goto LAB_00c590c8;
  lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar10 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  if (lVar7 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar10,0,0);
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
  plVar4 = *(long **)(lVar7 + 0x1e8);
  if ((plVar4 == (long *)0x0) ||
     (lVar2 = (**(code **)(*plVar4 + 0x598))(plVar4,*(undefined8 *)(*plVar4 + 0x5a0)), lVar2 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar2 + 0x10)) {
    if (*(long *)(lVar7 + 0x1e8) == 0) goto LAB_00c16768;
    uVar5 = UnityEngine_Component__get_gameObject(*(long *)(lVar7 + 0x1e8),0);
    if ((*(long *)(lVar7 + 0x1e8) == 0) ||
       (lVar2 = UnityEngine_Component__get_transform(*(long *)(lVar7 + 0x1e8),0), lVar2 == 0))
    goto LAB_00c16768;
    uVar3 = UnityEngine_Transform__get_parent(lVar2,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar2 = UnityEngine_Object__Instantiate_object_
                      (uVar5,uVar3,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar2 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar2,&stack0xffffffffffffffc8,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar7 + 0x1e8) = unaff_x25;
    if (unaff_x25 == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*unaff_x25 + 0x5a8))(unaff_x25,_Str_,*(undefined8 *)(*unaff_x25 + 0x5b0));
  }
  plVar4 = *(long **)(lVar7 + 0x1e8);
  lVar7 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar4 != (long *)0x0) &&
     (uVar5 = (**(code **)(*plVar4 + 0x598))(plVar4,*(undefined8 *)(*plVar4 + 0x5a0)), lVar7 != 0))
  {
    uVar1 = *(uint *)(lVar7 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar7 + 0x20) = uVar5, uVar1 != 1 &&
         (*(undefined8 *)(lVar7 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar7 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar7 + 0x38) = _Str___;
      UnityEngine_Time__get_time(0);
      uVar5 = func_0x00a67a38(_float_TypeInfo,&stack0xffffffffffffffc4);
      uVar5 = System_String__Format(_Str__0_f2_,uVar5,0);
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar7 + 0x40) = uVar5, uVar1 != 5)) &&
         (*(undefined8 *)(lVar7 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar7 + 0x50) = uVar10;
        uVar10 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar7 + 0x18)) {
          *(undefined8 *)(lVar7 + 0x58) = uVar10;
          uVar10 = System_String__Concat(lVar7,0);
          (**(code **)(*plVar4 + 0x5a8))(plVar4,uVar10,*(undefined8 *)(*plVar4 + 0x5b0));
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



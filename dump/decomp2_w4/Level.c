// ==== public bool get_IsAvailable() { }   @0xb30374

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Level__get_IsAvailable(void *__this)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  if ((bRam00000000019170bf & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__get_Current__);
    func_0x00a67900(&Method_System_Collections_Generic_List_DJKGLJOCFCE__GetEnumerator__);
    func_0x00a67900(&Main_TypeInfo);
    bRam00000000019170bf = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (*(int *)((long)__this + 0x10) < 100) {
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
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x120), lVar2 != 0)) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                (lVar2,&uStack_48,
                 _Method_System_Collections_Generic_List_DJKGLJOCFCE__GetEnumerator__);
      bVar4 = true;
      while( true ) {
        do {
          uVar3 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                            (&uStack_48,
                             _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__
                            );
          if ((uVar3 & 1) == 0) {
            System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                      (&uStack_48,
                       _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__);
            return bVar4;
          }
          func_0x00b947ec(&uStack_48,&lStack_28,
                          _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__get_Current__
                         );
        } while (*(int *)((long)__this + 0x10) < 1);
        if (lStack_28 == 0) break;
        if (*(int *)((long)__this + 0x10) + -1 == *(int *)(lStack_28 + 0x10)) {
          bVar1 = DJKGLJOCFCE__MCDLFBJCNNA(lStack_28,0);
          bVar4 = (bool)(bVar4 & bVar1);
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
LAB_00c30600:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (0 < *(int *)((long)__this + 0x30)) {
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
    if (lVar2 == 0) goto LAB_00c30600;
    lVar2 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar2,*(undefined4 *)((long)__this + 0x30),0);
    if (lVar2 != 0) {
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
      if ((lVar2 == 0) ||
         (lVar2 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar2,*(undefined4 *)((long)__this + 0x30),0), lVar2 == 0
         )) goto LAB_00c30600;
      bVar1 = DJKGLJOCFCE__MCDLFBJCNNA(lVar2,0);
      goto LAB_00c305bc;
    }
  }
  bVar1 = 1;
LAB_00c305bc:
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return (bool)(bVar1 & *(char *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x12) == '\0');
}


// ==== private void CBKFPGOAMCA() { }   @0xb2f670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Level__CBKFPGOAMCA(void *__this)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if ((bRam00000000019170c4 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170c4 = 1;
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
    lVar4 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar4,*(undefined4 *)((long)__this + 0x10),0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Menu_TypeInfo);
    }
    uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c2fa24;
    uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (lVar4 == 0) {
      return;
    }
    iVar1 = *(int *)((long)__this + 0x10);
    if (99 < iVar1) {
      return;
    }
    if (iVar1 == 1) {
      if (*(char *)((long)__this + 0x4c) != '\0') {
        return;
      }
      uVar5 = DJKGLJOCFCE__MCDLFBJCNNA(lVar4,0);
      if ((uVar5 & 1) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (__this != *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40)) {
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
          if ((lVar4 == 0) || (lVar4 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar4,0,0), lVar4 == 0))
          goto LAB_00c2fa24;
          uVar2 = DJKGLJOCFCE__MCDLFBJCNNA(lVar4,0);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Menu_TypeInfo);
          }
          if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
              (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0)) ||
             (lVar4 = *(long *)(lVar4 + 0x2f8), lVar4 == 0)) goto LAB_00c2fa24;
          uVar2 = uVar2 & 1;
          goto LAB_00c2fa0c;
        }
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
      goto LAB_00c2fa24;
      lVar4 = *(long *)(lVar4 + 0x2f8);
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      uVar5 = DJKGLJOCFCE__MCDLFBJCNNA(lVar4,0);
      if ((uVar5 & 1) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (__this != *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40)) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
              (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 != 0)) &&
             (lVar4 = *(long *)(lVar4 + 0x2f0), lVar4 != 0)) {
            UnityEngine_GameObject__SetActive(lVar4,1,0);
            if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
               (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 != 0)) {
              if ((bRam0000000001916fcc & 1) == 0) {
                func_0x00a67900(&Main_TypeInfo,0);
                bRam0000000001916fcc = 1;
              }
              uVar5 = GUIGarage__DCFAACLJPKH(lVar4);
              if ((((uVar5 & 1) == 0) || (*(long *)(lVar4 + 0x238) == 0)) ||
                 (*(long *)(*(long *)(lVar4 + 0x238) + 0x18) == 0)) {
                return;
              }
              if ((*(long *)(lVar4 + 0x2f0) != 0) &&
                 (lVar3 = UnityEngine_GameObject__get_gameObject(*(long *)(lVar4 + 0x2f0),0),
                 lVar3 != 0)) {
                uVar5 = UnityEngine_GameObject__get_activeSelf(lVar3,0);
                if ((uVar5 & 1) == 0) {
                  return;
                }
                if ((*(long *)(lVar4 + 0x1c0) != 0) &&
                   (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(lVar4 + 0x1c0),0),
                   lVar3 != 0)) {
                  uVar5 = UnityEngine_GameObject__get_activeSelf(lVar3,0);
                  if ((uVar5 & 1) != 0) {
                    return;
                  }
                  if (*(char *)(lVar4 + 0x250) != '\0') {
                    return;
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
                  if (lVar3 != 0) {
                    if (*(int *)(lVar3 + 0x108) == 0) {
                      return;
                    }
                    if (*(long *)(lVar4 + 0x1d0) != 0) {
                      lVar3 = UnityEngine_GameObject__get_transform(*(long *)(lVar4 + 0x1d0),0);
                      if ((*(long *)(lVar4 + 0x70) != 0) &&
                         (uVar7 = UnityEngine_Component__get_transform(*(long *)(lVar4 + 0x70),0),
                         lVar3 != 0)) {
                        UnityEngine_Transform__SetParent(lVar3,uVar7,0);
                        if (*(long *)(lVar4 + 0x1c0) != 0) {
                          lVar3 = UnityEngine_Component__get_transform(*(long *)(lVar4 + 0x1c0),0);
                          if ((*(long *)(lVar4 + 0x70) != 0) &&
                             (uVar7 = UnityEngine_Component__get_transform
                                                (*(long *)(lVar4 + 0x70),0), lVar3 != 0)) {
                            UnityEngine_Transform__SetParent(lVar3,uVar7,0);
                            if ((*(long *)(lVar4 + 0x1c0) != 0) &&
                               (lVar3 = UnityEngine_Component__get_transform
                                                  (*(long *)(lVar4 + 0x1c0),0), lVar3 != 0)) {
                              UnityEngine_Transform__SetAsLastSibling(lVar3,0);
                              lVar3 = *(long *)(lVar4 + 0x238);
                              if (lVar3 != 0) {
                                if (*(int *)(lVar3 + 0x18) == 0) {
LAB_00c17730:
                    /* WARNING: Subroutine does not return */
                                  il2cpp_throw_967b58();
                                }
                                if (*(long *)(lVar3 + 0x20) != 0) {
                                  lVar3 = UnityEngine_Component__get_transform
                                                    (*(long *)(lVar3 + 0x20),0);
                                  if ((*(long *)(lVar4 + 0x70) != 0) &&
                                     (uVar7 = UnityEngine_Component__get_transform
                                                        (*(long *)(lVar4 + 0x70),0), lVar3 != 0)) {
                                    UnityEngine_Transform__SetParent(lVar3,uVar7,0);
                                    lVar3 = *(long *)(lVar4 + 0x238);
                                    if (lVar3 != 0) {
                                      if (*(int *)(lVar3 + 0x18) == 0) goto LAB_00c17730;
                                      if ((*(long *)(lVar3 + 0x20) != 0) &&
                                         (lVar3 = UnityEngine_Component__get_transform
                                                            (*(long *)(lVar3 + 0x20),0), lVar3 != 0)
                                         ) {
                                        UnityEngine_Transform__SetAsLastSibling(lVar3,0);
                                        if (*(long *)(lVar4 + 0x2f0) != 0) {
                                          lVar3 = UnityEngine_GameObject__get_transform
                                                            (*(long *)(lVar4 + 0x2f0),0);
                                          if ((*(long *)(lVar4 + 0x70) != 0) &&
                                             (uVar7 = UnityEngine_Component__get_transform
                                                                (*(long *)(lVar4 + 0x70),0),
                                             lVar3 != 0)) {
                                            UnityEngine_Transform__SetParent(lVar3,uVar7,0);
                                            if ((*(long *)(lVar4 + 0x2f0) != 0) &&
                                               (lVar3 = UnityEngine_GameObject__get_transform
                                                                  (*(long *)(lVar4 + 0x2f0),0),
                                               lVar3 != 0)) {
                                              UnityEngine_Transform__SetAsLastSibling(lVar3,0);
                                              if (*(long *)(lVar4 + 0x1c8) != 0) {
                                                UnityEngine_MonoBehaviour__StopCoroutine
                                                          (lVar4,*(long *)(lVar4 + 0x1c8),0);
                                              }
                                              lVar3 = GUIGarage__KEPPKPEAEOO(lVar4);
                                              *(long *)(lVar4 + 0x1c8) = lVar3;
                                              if (lVar3 == 0) {
                                                func_0x00a67914(&
                                                  System_NullReferenceException_TypeInfo,0,0);
                                                uVar6 = func_0x00a67b44();
                                                uVar7 = func_0x00a67914(&Str_routine_is_null);
                                                System_NullReferenceException___ctor(uVar6,uVar7,0);
                                              }
                                              else {
                                                if (pcRam000000000191c478 == (code *)0x0) {
                                                  pcRam000000000191c478 =
                                                       (code *)func_0x00a678c4(&UNK_005a63bb);
                                                }
                                                uVar5 = (*pcRam000000000191c478)(lVar4);
                                                if ((uVar5 & 1) != 0) {
                                                  if (pcRam000000000191c488 == (code *)0x0) {
                                                    pcRam000000000191c488 =
                                                         (code *)func_0x00a678c4(&UNK_005ac95e);
                                                  }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                  (*pcRam000000000191c488)(lVar4,lVar3);
                                                  return;
                                                }
                                                func_0x00a67914(&System_ArgumentException_TypeInfo);
                                                uVar6 = func_0x00a67b44();
                                                uVar7 = func_0x00a67914(&
                                                  Str_Coroutines_can_only_be_stopped_on_a_Mono);
                                                System_ArgumentException___ctor(uVar6,uVar7,0);
                                              }
                                              uVar7 = func_0x00a67914(&
                                                  Method_UnityEngine_MonoBehaviour_StartCoroutine__)
                                              ;
                                              auVar8 = func_0x00a67a20(uVar6,uVar7);
                                              if (pcRam000000000191c488 == (code *)0x0) {
                                                pcRam000000000191c488 =
                                                     (code *)func_0x00a678c4(&UNK_005ac95e);
                                              }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                              (*pcRam000000000191c488)(auVar8._0_8_,auVar8._8_8_);
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
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
          }
          goto LAB_00c2fa24;
        }
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0)) ||
         (lVar4 = *(long *)(lVar4 + 0x2f0), lVar4 == 0)) goto LAB_00c2fa24;
      UnityEngine_GameObject__SetActive(lVar4,0,0);
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0)) ||
         (lVar4 = *(long *)(lVar4 + 0x1c0), lVar4 == 0)) goto LAB_00c2fa24;
      lVar4 = UnityEngine_Component__get_gameObject(lVar4,0);
    }
    if (lVar4 != 0) {
      uVar2 = 0;
LAB_00c2fa0c:
      if (pcRam000000000191c3f8 == (code *)0x0) {
        pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
      }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c3f8)(lVar4,uVar2);
      return;
    }
  }
LAB_00c2fa24:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void HMPEMADOAAL() { }   @0xb30684

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Level__HMPEMADOAAL(void *__this)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  float fVar11;
  
  if ((bRam00000000019170c6 & 1) == 0) {
    func_0x00a67900(&Level_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__GrayscaleValue);
    bRam00000000019170c6 = 1;
  }
  bVar3 = Level__get_IsAvailable(__this);
  if (bVar3) {
    Level__ICIKEDJLOBK(__this);
    iVar2 = *(int *)((long)__this + 0x10);
    lVar4 = Level__get_gui(__this);
    if (lVar4 == 0) goto LAB_00c30bc0;
    if (iVar2 < 100) {
      plVar6 = *(long **)(lVar4 + 0x28);
      if (plVar6 == (long *)0x0) goto LAB_00c30bc0;
      lVar4 = (**(code **)(*plVar6 + 0x338))(plVar6,*(undefined8 *)(*plVar6 + 0x340));
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
      lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar8 == 0) goto LAB_00c30bc0;
      lVar8 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar8,*(undefined4 *)((long)__this + 0x10),0);
      uVar9 = _Str__GrayscaleValue;
      if (lVar8 == 0) {
        uVar10 = 0x3f800000;
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
        lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((lVar8 == 0) ||
           (lVar8 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar8,*(undefined4 *)((long)__this + 0x10),0),
           lVar8 == 0)) goto LAB_00c30bc0;
        uVar5 = DJKGLJOCFCE__MCDLFBJCNNA(lVar8,0);
        uVar10 = 0;
        if ((uVar5 & 1) == 0) {
          uVar10 = 0x3f800000;
        }
      }
      if (lVar4 == 0) goto LAB_00c30bc0;
      UnityEngine_Material__SetFloat(uVar10,lVar4,uVar9,0);
      Level__MNPHCGOJNCN(__this);
    }
    else {
      if (*(long *)(lVar4 + 0x58) == 0) goto LAB_00c30bc0;
      UnityEngine_GameObject__SetActive
                (*(long *)(lVar4 + 0x58),*(undefined1 *)((long)__this + 0x68),0);
      lVar4 = Level__get_gui(__this);
      if ((lVar4 == 0) || (*(long *)((long)__this + 0x50) == 0)) goto LAB_00c30bc0;
      lVar4 = *(long *)(lVar4 + 0x28);
      iVar2 = *(int *)(*(long *)((long)__this + 0x50) + 0x1c);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0)) ||
         (lVar4 == 0)) goto LAB_00c30bc0;
      lVar1 = 0x358;
      if (iVar2 < 1) {
        lVar1 = 0x360;
      }
      UnityEngine_UI_Image__set_sprite(lVar4,*(undefined8 *)(lVar8 + lVar1),0);
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (__this != *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40)) {
      lVar4 = Level__get_gui(__this);
      if (lVar4 == 0) goto LAB_00c30bc0;
      uVar9 = *(undefined8 *)(lVar4 + 0x30);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
      if ((uVar5 & 1) != 0) {
        lVar4 = Level__get_gui(__this);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x30) == 0)) goto LAB_00c30bc0;
        fVar11 = (float)UnityEngine_Transform__get_localScale(*(long *)(lVar4 + 0x30),0);
        if (1.01 < fVar11) {
          lVar4 = Level__get_gui(__this);
          if ((lVar4 == 0) || (*(long *)(lVar4 + 0x30) == 0)) goto LAB_00c30bc0;
          UnityEngine_Transform__set_localScale
                    (0x3f800000,0x3f800000,0x3f800000,*(long *)(lVar4 + 0x30),0);
        }
      }
    }
    if (*(char *)((long)__this + 0x4d) == '\0') {
      lVar4 = Level__get_gui(__this);
      if (lVar4 == 0) goto LAB_00c30bc0;
      uVar9 = *(undefined8 *)(lVar4 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        iVar2 = *(int *)((long)__this + 0x10);
        iVar7 = **(int **)(_Level_TypeInfo + 0xb8);
        if (iVar7 + 1 == iVar2) {
          if (99 < iVar2) {
LAB_00c30ad8:
            if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              iVar7 = **(int **)(_Level_TypeInfo + 0xb8);
            }
            if (iVar7 != *(int *)((long)__this + 0x30)) goto LAB_00c30b8c;
          }
          *(undefined1 *)((long)__this + 0x4c) = 1;
          fVar11 = (float)UnityEngine_Time__get_time(0);
          *(float *)((long)__this + 0x48) = fVar11 + 0.75;
          lVar4 = Level__get_gui(__this);
          if ((lVar4 == 0) || (plVar6 = *(long **)(lVar4 + 0x50), plVar6 == (long *)0x0))
          goto LAB_00c30bc0;
          (**(code **)(*plVar6 + 0x2a8))
                    (0x3f800000,0x3f800000,0x3f800000,0,plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
          if (99 < *(int *)((long)__this + 0x10)) {
            lVar4 = *(long *)((long)__this + 0x50);
            uVar10 = 0;
            if (lVar4 == 0) goto LAB_00c30b90;
            if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            NotificationsManager__HFGMIIHKBPC(lVar4,0);
          }
          uVar10 = 0;
        }
        else {
          if (99 < iVar2) goto LAB_00c30ad8;
LAB_00c30b8c:
          uVar10 = 1;
        }
LAB_00c30b90:
        lVar4 = Level__get_gui(__this);
        if (((lVar4 == 0) || (*(long *)(lVar4 + 0x50) == 0)) ||
           (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar4 + 0x50),0), lVar4 == 0))
        goto LAB_00c30bc0;
        UnityEngine_GameObject__SetActive(lVar4,1,0);
        goto LAB_00c30a98;
      }
    }
    uVar10 = 1;
  }
  else {
    lVar4 = Level__get_gui(__this);
    if (lVar4 == 0) goto LAB_00c30bc0;
    uVar9 = *(undefined8 *)(lVar4 + 0x50);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
    if ((uVar5 & 1) != 0) {
      lVar4 = Level__get_gui(__this);
      if (((lVar4 == 0) || (*(long *)(lVar4 + 0x50) == 0)) ||
         (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar4 + 0x50),0), lVar4 == 0))
      goto LAB_00c30bc0;
      UnityEngine_GameObject__SetActive(lVar4,0,0);
    }
    uVar10 = 0;
  }
LAB_00c30a98:
  Level__CBKFPGOAMCA(__this);
  lVar4 = Level__get_gui(__this);
  if ((lVar4 != 0) && (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 != 0)) {
    if (pcRam000000000191c3f8 == (code *)0x0) {
      pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
    }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c3f8)(lVar4,uVar10);
    return;
  }
LAB_00c30bc0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb32260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Level___ctor(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam00000000019170ca & 1) == 0) {
    func_0x00a67900(&int___TypeInfo);
    func_0x00a67900(&LevelTasks___TypeInfo);
    bRam00000000019170ca = 1;
  }
  uVar1 = func_0x00a679a0(_LevelTasks___TypeInfo,4);
  *(undefined8 *)((long)__this + 0x28) = uVar1;
  uVar1 = func_0x00a679a0(_int___TypeInfo,0x15);
  *(undefined8 *)((long)__this + 0x38) = uVar1;
  *(undefined4 *)((long)__this + 0x6c) = 0xbf800000;
  return;
}



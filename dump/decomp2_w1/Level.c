// ==== public void BBGODPBKHPF() { }   @0xb2f27c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Level__BBGODPBKHPF(void *__this)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  if ((bRam00000000019170bc & 1) == 0) {
    func_0x00a67900(&Level_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170bc = 1;
  }
  if (*(char *)((long)__this + 0x4d) != '\0') {
    return;
  }
  if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(int **)(_Level_TypeInfo + 0xb8) < 0) {
    return;
  }
  lVar4 = Level__get_gui(__this);
  if (lVar4 == 0) {
LAB_00c2f510:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = *(undefined8 *)(lVar4 + 0x50);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  fVar10 = *(float *)((long)__this + 0x48);
  fVar9 = (float)UnityEngine_Time__get_time(0);
  if (fVar9 < fVar10) {
    lVar4 = Level__get_gui(__this);
    if (lVar4 != 0) {
      plVar8 = *(long **)(lVar4 + 0x50);
      fVar10 = *(float *)((long)__this + 0x48);
      fVar9 = (float)UnityEngine_Time__get_time(0);
      fVar10 = (fVar10 - fVar9) * 1.33;
      fVar9 = fVar10;
      if (1.0 < fVar10) {
        fVar9 = 1.0;
      }
      if (fVar10 < 0.0) {
        fVar9 = 0.0;
      }
      if (plVar8 != (long *)0x0) {
        fVar10 = fVar9 * 0.0 + 1.0;
                    /* WARNING: Could not recover jumptable at 0x00c2f3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x2a8))
                  (fVar10,fVar10,fVar10,1.0 - fVar9,plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
        return;
      }
    }
    goto LAB_00c2f510;
  }
  if (*(char *)((long)__this + 0x4c) == '\0') {
    return;
  }
  lVar4 = Level__get_gui(__this);
  if ((lVar4 == 0) || (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0))
  goto LAB_00c2f510;
  uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar4 = Level__get_gui(__this);
  if ((lVar4 == 0) || (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0))
  goto LAB_00c2f510;
  UnityEngine_GameObject__SetActive(lVar4,1,0);
  *(undefined2 *)((long)__this + 0x4c) = 0x100;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c2f510;
    uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
      goto LAB_00c2f510;
      GUIGarage__AEBFNHHILNI(lVar4,0);
    }
  }
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
                                              auVar11 = func_0x00a67a20(uVar6,uVar7);
                                              if (pcRam000000000191c488 == (code *)0x0) {
                                                pcRam000000000191c488 =
                                                     (code *)func_0x00a678c4(&UNK_005ac95e);
                                              }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                              (*pcRam000000000191c488)(auVar11._0_8_,auVar11._8_8_);
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


// ==== public void BIBHMOPJLCO() { }   @0xb30f3c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Level__BIBHMOPJLCO(void *__this)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *pvVar10;
  char cVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  byte bVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  long lStack_68;
  long *in_stack_ffffffffffffffc8;
  
  if ((bRam00000000019170c1 & 1) == 0) {
    func_0x00a67900(&Level_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam00000000019170c1 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar12 = *(long *)(_Main_TypeInfo + 0xb8);
  if (*(void **)(lVar12 + 0x40) != __this) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar12 = *(long *)(_Main_TypeInfo + 0xb8);
    }
    *(void **)(lVar12 + 0x40) = __this;
    uVar19 = UnityEngine_Time__get_realtimeSinceStartup(0);
    *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar19;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
    goto LAB_00c310d0;
    if ((bRam0000000001916f75 & 1) == 0) {
      func_0x00a67900(&Main_TypeInfo,0);
      func_0x00a67900(&Menu_TypeInfo);
      func_0x00a67900(&UnityEngine_Object_TypeInfo);
      func_0x00a67900(&Str_UpdateMap);
      bRam0000000001916f75 = 1;
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
       (lVar16 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x38), lVar16 == 0)) {
LAB_00c0b950:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar2 = *(uint *)(lVar16 + 0x18);
    if (0 < (int)uVar2) {
      uVar17 = 0;
      do {
        if (uVar2 <= uVar17) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar15 = *(long *)(lVar16 + (long)(int)uVar17 * 8 + 0x20);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (lVar15 == *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40)) {
          GUIGarage__PGEEGDGGHLL(lVar12,lVar15,1);
        }
        if (lVar15 == 0) goto LAB_00c0b950;
        uVar5 = Level__get_IsEvent(lVar15,0);
        if ((uVar5 & 1) != 0) {
          Level__FKJAANMGOMP(lVar15,0);
        }
        Level__HMPEMADOAAL(lVar15,0);
        uVar2 = *(uint *)(lVar16 + 0x18);
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < (int)uVar2);
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0b950;
    uVar14 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), lVar12 == 0))
      goto LAB_00c0b950;
      BridgePHP__RefreshUserProfileAndEvents(lVar12,0);
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    plVar7 = _Str_UpdateMap;
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
    lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar12 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar5 = DAFNMLEKHAD__LLEFEIHEJDE(lVar12,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Debug__Log(plVar7,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar14 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c590c8;
    uVar14 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar7 == (long *)0x0)) goto LAB_00c590c8;
    lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    uVar14 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    if (lVar12 == 0) goto LAB_00c590c8;
    if ((bRam0000000001916fbb & 1) == 0) {
      func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar14,0,0);
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
    plVar7 = *(long **)(lVar12 + 0x1e8);
    if ((plVar7 == (long *)0x0) ||
       (lVar16 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0)),
       lVar16 == 0)) goto LAB_00c16768;
    if (10000 < *(int *)(lVar16 + 0x10)) {
      if (*(long *)(lVar12 + 0x1e8) == 0) goto LAB_00c16768;
      uVar8 = UnityEngine_Component__get_gameObject(*(long *)(lVar12 + 0x1e8),0);
      if ((*(long *)(lVar12 + 0x1e8) == 0) ||
         (lVar16 = UnityEngine_Component__get_transform(*(long *)(lVar12 + 0x1e8),0), lVar16 == 0))
      goto LAB_00c16768;
      uVar9 = UnityEngine_Transform__get_parent(lVar16,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      lVar16 = UnityEngine_Object__Instantiate_object_
                         (uVar8,uVar9,_Method_UnityEngine_Object_Instantiate_GameObject___);
      if (lVar16 == 0) goto LAB_00c16768;
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                (lVar16,&stack0xffffffffffffffc8,_Method_UnityEngine_GameObject_GetComponent_Text___
                );
      *(long **)(lVar12 + 0x1e8) = in_stack_ffffffffffffffc8;
      if (in_stack_ffffffffffffffc8 == (long *)0x0) goto LAB_00c16768;
      (**(code **)(*in_stack_ffffffffffffffc8 + 0x5a8))
                (in_stack_ffffffffffffffc8,_Str_,*(undefined8 *)(*in_stack_ffffffffffffffc8 + 0x5b0)
                );
    }
    plVar7 = *(long **)(lVar12 + 0x1e8);
    lVar12 = func_0x00a679a0(_string___TypeInfo,8);
    if ((plVar7 != (long *)0x0) &&
       (uVar8 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0)), lVar12 != 0
       )) {
      uVar2 = *(uint *)(lVar12 + 0x18);
      if ((uVar2 != 0) &&
         (((*(undefined8 *)(lVar12 + 0x20) = uVar8, uVar2 != 1 &&
           (*(undefined8 *)(lVar12 + 0x28) = _Str__color_, 2 < uVar2)) &&
          (*(undefined8 *)(lVar12 + 0x30) = _Str__78e938, uVar2 != 3)))) {
        *(undefined8 *)(lVar12 + 0x38) = _Str___;
        UnityEngine_Time__get_time(0);
        uVar8 = func_0x00a67a38(_float_TypeInfo,&stack0xffffffffffffffc4);
        uVar8 = System_String__Format(_Str__0_f2_,uVar8,0);
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (((4 < uVar2) && (*(undefined8 *)(lVar12 + 0x40) = uVar8, uVar2 != 5)) &&
           (*(undefined8 *)(lVar12 + 0x48) = _Str____color___, 6 < uVar2)) {
          *(undefined8 *)(lVar12 + 0x50) = uVar14;
          uVar14 = System_Environment__get_NewLine(0);
          if (7 < *(uint *)(lVar12 + 0x18)) {
            *(undefined8 *)(lVar12 + 0x58) = uVar14;
            uVar14 = System_String__Concat(lVar12,0);
            (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar14,*(undefined8 *)(*plVar7 + 0x5b0));
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
  iVar3 = *(int *)((long)__this + 0x10);
  if (99 < iVar3) {
    if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar12 = Level__FHMGLDDPEDJ(iVar3);
    if (lVar12 == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar16 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar16 == 0))
    goto LAB_00c310d0;
    if ((bRam0000000001916fa5 & 1) == 0) {
      func_0x00a67900(&BridgePHP_TypeInfo,lVar12,1,0);
      func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
      func_0x00a67900(&Main_TypeInfo);
      func_0x00a67900(&Menu_TypeInfo);
      func_0x00a67900(&UnityEngine_Object_TypeInfo);
      func_0x00a67900(&Translate_TypeInfo);
      func_0x00a67900(&Str_EVENT_TIME_START_IN);
      func_0x00a67900(&Str_EVENT_TIME_END_IN);
      func_0x00a67900(&Str_EVENT_ANY_CAR);
      func_0x00a67900(&Str_);
      bRam0000000001916fa5 = 1;
    }
    if ((lVar12 == 0) || (uVar5 = Level__get_IsEvent(lVar12,0), (uVar5 & 1) == 0)) {
      bVar1 = false;
    }
    else {
      if (*(long *)(lVar12 + 0x50) == 0) goto LAB_00c12d8c;
      bVar1 = *(int *)(*(long *)(lVar12 + 0x50) + 0x1c) == 1;
    }
    if (bVar1) {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2a) == '\0') {
        if (*(long *)(lVar16 + 0x48) == 0) goto LAB_00c12d8c;
        RatingEventController__OJBAJGILIJN(*(long *)(lVar16 + 0x48),lVar12,0,0);
      }
    }
    if (lVar12 == 0) goto LAB_00c12d8c;
    uVar5 = Level__get_IsEvent(lVar12,0);
    if ((uVar5 & 1) == 0) {
LAB_00c12828:
      bVar18 = 0;
    }
    else {
      if (*(long *)(lVar12 + 0x50) == 0) goto LAB_00c12d8c;
      if (*(int *)(*(long *)(lVar12 + 0x50) + 0x1c) != 1) goto LAB_00c12828;
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      bVar18 = *(byte *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2a) ^ 1;
    }
    lVar15 = *(long *)(lVar16 + 0x300);
    uVar2 = Level__get_IsEvent(lVar12,0);
    if (lVar15 == 0) goto LAB_00c12d8c;
    UnityEngine_GameObject__SetActive(lVar15,~uVar2 & 1,0);
    lVar15 = *(long *)(lVar16 + 0x308);
    uVar2 = Level__get_IsEvent(lVar12,0);
    if (lVar15 == 0) goto LAB_00c12d8c;
    UnityEngine_GameObject__SetActive(lVar15,uVar2 & 1,0);
    if (*(long *)(lVar16 + 0x310) == 0) goto LAB_00c12d8c;
    UnityEngine_GameObject__SetActive(*(long *)(lVar16 + 0x310),bVar18 != 0,0);
    lVar15 = *(long *)(lVar16 + 0x350);
    uVar5 = Level__get_IsEvent(lVar12,0);
    if ((uVar5 & 1) == 0) {
      cVar11 = '\0';
    }
    else {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      cVar11 = *(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2a);
    }
    if (lVar15 == 0) goto LAB_00c12d8c;
    UnityEngine_GameObject__SetActive(lVar15,cVar11 != '\0',0);
    lVar15 = *(long *)(lVar16 + 0x330);
    uVar2 = Level__get_IsEvent(lVar12,0);
    if (lVar15 == 0) goto LAB_00c12d8c;
    UnityEngine_GameObject__SetActive(lVar15,uVar2 & 1,0);
    GUIGarage__ADMNOIMMGGA(lVar16,bVar18 != 0);
    uVar5 = Level__get_IsEvent(lVar12,0);
    if ((uVar5 & 1) == 0) {
      if (*(long *)(lVar16 + 0x328) == 0) goto LAB_00c12d8c;
      lVar12 = UnityEngine_Component__get_gameObject(*(long *)(lVar16 + 0x328),0);
joined_r0x00c12a74:
      if (lVar12 == 0) goto LAB_00c12d8c;
      uVar14 = 0;
    }
    else {
      if (*(long *)(lVar12 + 0x50) == 0) goto LAB_00c12d8c;
      plVar7 = *(long **)(lVar16 + 0x318);
      uVar14 = EventContest__get_desc(*(long *)(lVar12 + 0x50),0);
      if (plVar7 == (long *)0x0) goto LAB_00c12d8c;
      (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar14,*(undefined8 *)(*plVar7 + 0x5b0));
      lVar15 = *(long *)(lVar16 + 0x368);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (lVar15 == 0) goto LAB_00c12d8c;
      UnityEngine_GameObject__SetActive
                (lVar15,*(undefined1 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x11),0);
      if (*(long *)(lVar12 + 0x50) == 0) goto LAB_00c12d8c;
      iVar3 = EventContest__get_car_id(*(long *)(lVar12 + 0x50),0);
      if (iVar3 < 0) {
LAB_00c12a7c:
        plVar7 = *(long **)(lVar16 + 800);
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
           (uVar14 = Translate__JJJNIPAKLJF
                               (**(long **)(_Translate_TypeInfo + 0xb8),_Str_EVENT_ANY_CAR,0),
           plVar7 == (long *)0x0)) goto LAB_00c12d8c;
        (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar14,*(undefined8 *)(*plVar7 + 0x5b0));
      }
      else {
        if (*(long *)(lVar12 + 0x50) == 0) goto LAB_00c12d8c;
        iVar3 = EventContest__get_car_id(*(long *)(lVar12 + 0x50),0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        lVar15 = **(long **)(_Main_TypeInfo + 0xb8);
        if ((lVar15 == 0) || (*(long *)(lVar15 + 0x28) == 0)) goto LAB_00c12d8c;
        if (*(int *)(*(long *)(lVar15 + 0x28) + 0x18) <= iVar3) goto LAB_00c12a7c;
        plVar7 = *(long **)(lVar16 + 800);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
          lVar15 = **(long **)(_Main_TypeInfo + 0xb8);
          if (lVar15 == 0) goto LAB_00c12d8c;
        }
        if (*(long *)(lVar12 + 0x50) == 0) goto LAB_00c12d8c;
        lVar15 = *(long *)(lVar15 + 0x28);
        uVar2 = EventContest__get_car_id(*(long *)(lVar12 + 0x50),0);
        if (lVar15 == 0) goto LAB_00c12d8c;
        if (*(uint *)(lVar15 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar15 = *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
        if ((lVar15 == 0) || (plVar7 == (long *)0x0)) goto LAB_00c12d8c;
        (**(code **)(*plVar7 + 0x5a8))
                  (plVar7,*(undefined8 *)(lVar15 + 0x10),*(undefined8 *)(*plVar7 + 0x5b0));
      }
      if (*(long *)(lVar12 + 0x50) == 0) goto LAB_00c12d8c;
      plVar7 = *(long **)(lVar16 + 0x338);
      iVar3 = *(int *)(*(long *)(lVar12 + 0x50) + 0x1c);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c12d8c;
      puVar13 = (undefined8 *)&Str_EVENT_TIME_END_IN;
      if (iVar3 != 1) {
        puVar13 = (undefined8 *)&Str_EVENT_TIME_START_IN;
      }
      uVar14 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),*puVar13,0);
      if (plVar7 == (long *)0x0) goto LAB_00c12d8c;
      (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar14,*(undefined8 *)(*plVar7 + 0x5b0));
      if (*(long *)(lVar16 + 0x338) == 0) goto LAB_00c12d8c;
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (*(long *)(lVar16 + 0x338),&stack0xffffffffffffffc8,
                 _Method_UnityEngine_Component_GetComponent_RectTransform___);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(in_stack_ffffffffffffffc8,0,0);
      if ((uVar5 & 1) != 0) {
        if ((*(long *)(lVar12 + 0x50) == 0) || (in_stack_ffffffffffffffc8 == (long *)0x0))
        goto LAB_00c12d8c;
        uVar19 = 0x43c30000;
        if (*(int *)(*(long *)(lVar12 + 0x50) + 0x1c) != 1) {
          uVar19 = 0x44688000;
        }
        UnityEngine_RectTransform__SetSizeWithCurrentAnchors(uVar19,in_stack_ffffffffffffffc8,0,0);
        uVar19 = UnityEngine_RectTransform__get_anchoredPosition(in_stack_ffffffffffffffc8,0);
        if (*(long *)(lVar12 + 0x50) == 0) goto LAB_00c12d8c;
        uVar21 = 0x42b20000;
        if (*(int *)(*(long *)(lVar12 + 0x50) + 0x1c) != 1) {
          uVar21 = 0x42960000;
        }
        UnityEngine_RectTransform__set_anchoredPosition(uVar19,uVar21,in_stack_ffffffffffffffc8,0);
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), lVar12 == 0))
      goto LAB_00c12d8c;
      uVar14 = BridgePHP__GetErrors(lVar12,1,0);
      uVar5 = System_String__op_Inequality(uVar14,_Str_,0);
      if ((*(long *)(lVar16 + 0x328) == 0) ||
         (lVar12 = UnityEngine_Component__get_gameObject(*(long *)(lVar16 + 0x328),0), lVar12 == 0))
      goto LAB_00c12d8c;
      if ((uVar5 & 1) != 0) {
        UnityEngine_GameObject__SetActive(lVar12,1,0);
        if (*(long *)(lVar16 + 0x308) == 0) goto LAB_00c12d8c;
        UnityEngine_GameObject__SetActive(*(long *)(lVar16 + 0x308),0,0);
        plVar7 = *(long **)(lVar16 + 0x328);
        if (plVar7 == (long *)0x0) goto LAB_00c12d8c;
        (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar14,*(undefined8 *)(*plVar7 + 0x5b0));
        lVar12 = *(long *)(lVar16 + 0x330);
        goto joined_r0x00c12a74;
      }
      UnityEngine_GameObject__SetActive(lVar12,0,0);
      lVar12 = *(long *)(lVar16 + 0x330);
      if (lVar12 == 0) goto LAB_00c12d8c;
      uVar14 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar12,uVar14,0);
    GUIGarage__KBINLNMDLEC(lVar16);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    bVar1 = Main__KCHOEBEIOCE();
    if (bVar1) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar12 = **(long **)(_Menu_TypeInfo + 0xb8);
      if ((lVar12 == 0) || (*(long *)(lVar12 + 0x58) == 0)) {
LAB_00c12d8c:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if (*(char *)(*(long *)(lVar12 + 0x58) + 0x30) != '\0') {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar12 = **(long **)(_Menu_TypeInfo + 0xb8);
          if (lVar12 == 0) goto LAB_00c12d8c;
        }
        if (*(void **)(lVar12 + 0x58) == (void *)0x0) goto LAB_00c12d8c;
        GamePadController__PKDDGJPLNAP(*(void **)(lVar12 + 0x58));
      }
    }
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
     (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0)) {
LAB_00c310d0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam0000000001916f81 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo,0);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f81 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar14 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0dbe0;
    uVar5 = Menu__CLJDAMIIAKE(**(long **)(_Menu_TypeInfo + 0xb8),0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0dbe0;
      if (*(char *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x7b) == '\0') {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = 0;
        GUIGarage__PIHABGKNPDI(lVar12,1);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
          lVar16 = Menu__LBKMBBLLINK(**(long **)(_Menu_TypeInfo + 0xb8),0,0);
          if (lVar16 == 0) {
            func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
            uVar8 = func_0x00a67b44();
            uVar14 = func_0x00a67914(&Str_routine_is_null);
            System_NullReferenceException___ctor(uVar8,uVar14,0);
          }
          else {
            if (pcRam000000000191c478 == (code *)0x0) {
              pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
            }
            uVar5 = (*pcRam000000000191c478)(lVar12);
            if ((uVar5 & 1) != 0) {
              if (pcRam000000000191c488 == (code *)0x0) {
                pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
              }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam000000000191c488)(lVar12,lVar16);
              return;
            }
            func_0x00a67914(&System_ArgumentException_TypeInfo);
            uVar8 = func_0x00a67b44();
            uVar14 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
            System_ArgumentException___ctor(uVar8,uVar14,0);
          }
          uVar14 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
          auVar22 = func_0x00a67a20(uVar8,uVar14);
          if (pcRam000000000191c488 == (code *)0x0) {
            pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
          }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191c488)(auVar22._0_8_,auVar22._8_8_);
          return;
        }
        goto LAB_00c0dbe0;
      }
    }
  }
  pvVar6 = *(void **)(lVar12 + 0x78);
  *(undefined1 *)(lVar12 + 0x630) = 1;
  if (pvVar6 == (void *)0x0) {
LAB_00c0dbe0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam0000000001917151 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo,0,0);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_DonateItem___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_Try_to_Show__);
    func_0x00a67900(&Str_Window__Show__);
    func_0x00a67900(&Str_null);
    func_0x00a67900(&Str____Child__);
    func_0x00a67900(&Str___last__);
    func_0x00a67900(&Str___current__);
    bRam0000000001917151 = 1;
  }
  lVar12 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar12 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar12 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x20) = _Str_Try_to_Show__;
  lVar16 = UnityEngine_Component__get_gameObject(pvVar6,0);
  if (lVar16 == 0) goto LAB_00c485b8;
  uVar14 = UnityEngine_Object__get_name(lVar16,0);
  if ((*(uint *)(lVar12 + 0x18) < 2) ||
     (*(undefined8 *)(lVar12 + 0x28) = uVar14, *(uint *)(lVar12 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x30) = _Str___current__;
  uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  uVar14 = _Str_null;
  if ((uVar5 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar14 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar12 + 0x18) < 4) ||
     (*(undefined8 *)(lVar12 + 0x38) = uVar14, *(uint *)(lVar12 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x40) = _Str___last__;
  uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  uVar14 = _Str_null;
  if ((uVar5 & 1) != 0) {
    lVar16 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar16 == 0) goto LAB_00c485b8;
    uVar14 = UnityEngine_Object__get_name(lVar16,0);
  }
  uVar2 = *(uint *)(lVar12 + 0x18);
  if ((uVar2 < 6) || (*(undefined8 *)(lVar12 + 0x48) = uVar14, uVar2 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x50) = _Str____Child__;
  plVar7 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar14 = 0;
  if (plVar7 != (long *)0x0) {
    uVar14 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    uVar2 = *(uint *)(lVar12 + 0x18);
  }
  if (uVar2 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x58) = uVar14;
  uVar14 = System_String__Concat(lVar12,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar14,0,0);
  uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Equality(uVar14,pvVar6,0);
  if ((uVar5 & 1) != 0) {
    uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar14,0,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
  uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Equality(uVar14,pvVar6,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  lVar12 = _GUIWindow_TypeInfo;
  if ((uVar5 & 1) != 0) {
    lVar12 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar12 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar12,0);
    lVar12 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar14 = **(undefined8 **)(lVar12 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  if ((uVar5 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  lVar12 = GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(lVar12,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(char *)((long)pvVar6 + 0x20) == '\0') {
      if (lVar12 == 0) goto LAB_00c485b8;
      uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
      if ((uVar5 & 1) == 0) goto LAB_00c46b74;
      uVar19 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar14 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar19;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar14 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
      if (((uVar5 & 1) != 0) && (*(char *)((long)pvVar6 + 0x21) != '\0')) {
        fVar20 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar20) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),lVar12,0);
          goto LAB_00c46b74;
        }
      }
      if (lVar12 == 0) goto LAB_00c485b8;
      uVar14 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar12,uVar14,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar14 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar14 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar14 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(char *)((long)pvVar6 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar12 == 0))
          goto LAB_00c485b8;
          uVar5 = AdvController__EDNAEPDDBPJ(lVar12,0);
          if ((uVar5 & 1) != 0) {
            iVar3 = UnityEngine_Screen__get_width(0);
            iVar4 = UnityEngine_Screen__get_height(0);
            fVar20 = (float)iVar3 / (float)iVar4;
            if (fVar20 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar12 == 0)
               ) goto LAB_00c485b8;
            uVar14 = *(undefined8 *)(lVar12 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar14,0);
            if ((uVar5 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                 lVar12 == 0)) goto LAB_00c485b8;
              uVar14 = *(undefined8 *)(lVar12 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar14,0);
              if ((uVar5 & 1) != 0) {
                if (1.61 <= fVar20) {
                  if ((fVar20 <= 1.61) || (1.8 <= fVar20)) {
                    if (fVar20 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar12 == 0)) goto LAB_00c485b8;
                    uVar14 = *(undefined8 *)(lVar12 + 0x70);
                    uVar21 = 0x3f51eb85;
                    uVar19 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar12 == 0)) goto LAB_00c485b8;
                    uVar14 = *(undefined8 *)(lVar12 + 0x70);
                    uVar21 = 0x3f5eb852;
                    uVar19 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar12 == 0)) goto LAB_00c485b8;
                  uVar14 = *(undefined8 *)(lVar12 + 0x70);
                  uVar21 = 0x3f733333;
                  uVar19 = 0x425c0000;
                }
                goto LAB_00c46f38;
              }
            }
            else {
              if (1.61 <= fVar20) {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar12 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar20) {
                  if (*(long *)(lVar12 + 0x240) == 0) goto LAB_00c485b8;
                  uVar5 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar12 + 0x240),0);
                  if ((uVar5 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar12 == 0)) goto LAB_00c485b8;
                  uVar14 = *(undefined8 *)(lVar12 + 0x60);
                  uVar21 = 0x3f51eb85;
                  uVar19 = 0x41a00000;
                }
                else {
                  uVar14 = *(undefined8 *)(lVar12 + 0x60);
                  uVar21 = 0x3f5eb852;
                  uVar19 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar12 == 0)) goto LAB_00c485b8;
                uVar14 = *(undefined8 *)(lVar12 + 0x60);
                uVar19 = 0xc0a00000;
                uVar21 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar19,uVar21,pvVar6,uVar14);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar12 == 0))
            goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(lVar12,0);
            goto LAB_00c46f70;
          }
        }
        GUIWindow__IPELKJAHFGL(pvVar6);
      }
    }
  }
LAB_00c46f70:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar14 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar14 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(char *)((long)pvVar6 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(pvVar6);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar12 == 0))
          goto LAB_00c485b8;
          uVar5 = AdvController__EDNAEPDDBPJ(lVar12,0);
          if ((uVar5 & 1) == 0) goto LAB_00c47120;
          iVar3 = UnityEngine_Screen__get_width(0);
          iVar4 = UnityEngine_Screen__get_height(0);
          fVar20 = (float)iVar3 / (float)iVar4;
          if (1.51 < fVar20) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
            goto LAB_00c485b8;
            uVar14 = *(undefined8 *)(lVar12 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar14,0);
            if ((uVar5 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
              goto LAB_00c485b8;
              uVar14 = *(undefined8 *)(lVar12 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar14,0);
              if ((uVar5 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
                goto LAB_00c485b8;
                uVar14 = *(undefined8 *)(lVar12 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar14,0);
                if ((uVar5 & 1) == 0) {
                  lVar12 = UnityEngine_Component__get_gameObject(pvVar6,0);
                  if (lVar12 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar12,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar12 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar5 = UnityEngine_Object__op_Inequality(lVar12,0,0);
                  if ((uVar5 & 1) != 0) {
                    if (lVar12 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar12 + 0x2c) == 3) {
                      lVar12 = UnityEngine_Component__get_gameObject(pvVar6,0);
                      if (lVar12 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar12,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar5 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar5 & 1) != 0) {
                        if (1.61 <= fVar20) {
                          if (1.8 <= fVar20) {
                            uVar21 = 0x3f59999a;
                            uVar19 = 0x42700000;
                          }
                          else {
                            uVar19 = 0x428c0000;
                            uVar21 = 0;
                          }
                        }
                        else {
                          uVar19 = 0x41a00000;
                          uVar21 = 0;
                        }
                        goto LAB_00c47304;
                      }
                    }
                  }
                  goto LAB_00c47308;
                }
                if (1.61 <= fVar20) {
                  if (fVar20 < 1.8) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
                    goto LAB_00c485b8;
                    lStack_68 = *(long *)(lVar12 + 0xe8);
                    uVar21 = 0x3f733333;
                    uVar19 = 0x428c0000;
                    goto LAB_00c47304;
                  }
                  goto LAB_00c47338;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar12 + 0xe8);
                uVar19 = 0x41f00000;
              }
              else {
                if (1.61 <= fVar20) {
                  if (1.8 <= fVar20) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar12 + 0xb0);
                  uVar21 = 0x3f6e147b;
                  uVar19 = 0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar12 + 0xb0);
                uVar19 = 0xc1c80000;
              }
LAB_00c4729c:
              uVar21 = 0;
            }
            else {
              if (fVar20 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar12 + 0x188);
                uVar19 = 0x41200000;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
              goto LAB_00c485b8;
              lStack_68 = *(long *)(lVar12 + 0x188);
              if (1.8 <= fVar20) {
                uVar21 = 0x3f51eb85;
                uVar19 = 0x42180000;
              }
              else {
                uVar21 = 0x3f733333;
                uVar19 = 0x420c0000;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(uVar19,uVar21,pvVar6,lStack_68);
          }
LAB_00c47308:
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar12 == 0))
          goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(lVar12,0);
        }
      }
    }
  }
LAB_00c47338:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar12 = *(long *)(_Menu_TypeInfo + 0xb8);
  if (*(char *)(lVar12 + 0x1a) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar12 = *(long *)(_Menu_TypeInfo + 0xb8);
    }
    if (*(char *)(lVar12 + 0xc) != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar14 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar14 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar14 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar12 == 0))
            goto LAB_00c485b8;
            if (*(char *)(lVar12 + 0x6c) != '\0') {
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
              lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (lVar12 == 0) goto LAB_00c485b8;
              uVar5 = DAFNMLEKHAD__MHBEPDHNNFH(lVar12,0);
              if ((uVar5 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar12 == 0))
                goto LAB_00c485b8;
                uVar14 = *(undefined8 *)(lVar12 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar5 = UnityEngine_Object__op_Equality(uVar14,0,0);
                if ((uVar5 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
                  goto LAB_00c485b8;
                  uVar14 = *(undefined8 *)(lVar12 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar14,0);
                  if ((uVar5 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar12 == 0))
                    goto LAB_00c485b8;
                    uVar14 = *(undefined8 *)(lVar12 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar14 = UnityEngine_Object__Instantiate_object_
                                       (uVar14,_Method_UnityEngine_Object_Instantiate_GameObject___)
                    ;
                    *(undefined8 *)(lVar12 + 0x90) = uVar14;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar12 = UnityEngine_Component__get_gameObject(pvVar6,0);
  if (lVar12 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar12,1,0);
  puVar13 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar13[2] = *puVar13;
  *puVar13 = pvVar6;
  if (*(char *)((long)pvVar6 + 0x23) != '\0') {
    pvVar10 = GUIWindow__FAAELIPKLCB(pvVar6);
    UnityEngine_MonoBehaviour__StartCoroutine(pvVar6,pvVar10,0);
  }
  lVar12 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar12 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar12 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar12 + 0x20) = _Str_Window__Show__;
  uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  uVar14 = _Str_null;
  if ((uVar5 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar14 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar12 + 0x18) < 2) ||
     (*(undefined8 *)(lVar12 + 0x28) = uVar14, *(uint *)(lVar12 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x30) = _Str___last__;
  uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  uVar14 = _Str_null;
  if ((uVar5 & 1) != 0) {
    lVar16 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar16 == 0) goto LAB_00c485b8;
    uVar14 = UnityEngine_Object__get_name(lVar16,0);
  }
  uVar2 = *(uint *)(lVar12 + 0x18);
  if ((uVar2 < 4) || (*(undefined8 *)(lVar12 + 0x38) = uVar14, uVar2 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x40) = _Str____Child__;
  plVar7 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar14 = 0;
  if (plVar7 != (long *)0x0) {
    uVar14 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    uVar2 = *(uint *)(lVar12 + 0x18);
  }
  if (uVar2 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x48) = uVar14;
  uVar14 = System_String__Concat(lVar12,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar14,0,0);
  bVar1 = Main__KCHOEBEIOCE();
  if (bVar1) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58) == 0)) goto LAB_00c485b8;
    GamePadController__KCAHLEAKNNK();
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
LAB_00c47a5c:
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar14 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar5 & 1) != 0) {
      uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar12 == 0))
      goto LAB_00c485b8;
      uVar8 = *(undefined8 *)(lVar12 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar14,uVar8,0);
      if ((uVar5 & 1) == 0) {
        uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar12 == 0))
        goto LAB_00c485b8;
        uVar8 = *(undefined8 *)(lVar12 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Equality(uVar14,uVar8,0);
        if ((uVar5 & 1) == 0) {
          uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar12 == 0))
          goto LAB_00c485b8;
          uVar8 = *(undefined8 *)(lVar12 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Equality(uVar14,uVar8,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (pvVar6 = *(void **)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
               pvVar6 == (void *)0x0)) goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(pvVar6);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar12 == 0))
          goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(lVar12,0);
        }
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar12 == 0))
        goto LAB_00c485b8;
        lVar12 = *(long *)(lVar12 + 0x178);
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
        lVar16 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((lVar16 == 0) || (uVar2 = DAFNMLEKHAD__EFDKHACIIEC(lVar16,0), lVar12 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar12,uVar2 & 1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar14 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar5 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar14 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar5 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
    goto LAB_00c485b8;
    uVar5 = GUIGarage__ABAHNKCPCFA(lVar12,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0)) ||
        (lVar12 = *(long *)(lVar12 + 0x78), lVar12 == 0)) ||
       (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c485b8;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0)) ||
         ((lVar12 = *(long *)(lVar12 + 0x70), lVar12 == 0 ||
          (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0))))
      goto LAB_00c485b8;
      uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
      if ((uVar5 & 1) != 0) goto LAB_00c47948;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0)) ||
         (lVar12 = *(long *)(lVar12 + 0x1d0), lVar12 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar12,0,0);
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0)) ||
         (lVar12 = *(long *)(lVar12 + 0x1b8), lVar12 == 0)) goto LAB_00c485b8;
      uVar19 = 0;
    }
    else {
LAB_00c47948:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0)) ||
         (lVar12 = *(long *)(lVar12 + 0x1d0), lVar12 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar12,1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (pvVar10 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar10 == (void *)0x0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(pvVar10);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
      goto LAB_00c485b8;
      lVar12 = *(long *)(lVar12 + 0x3e0);
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
      lVar16 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((lVar16 == 0) || (uVar2 = DAFNMLEKHAD__EFDKHACIIEC(lVar16,0), lVar12 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar12,uVar2 & 1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0 ||
          (lVar12 = *(long *)(lVar12 + 0x1b8), lVar12 == 0)))) goto LAB_00c485b8;
      uVar19 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar19,lVar12,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0)) ||
       ((lVar12 = *(long *)(lVar12 + 0x60), lVar12 == 0 ||
        (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0))))
    goto LAB_00c485b8;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
    if ((uVar5 & 1) == 0) {
      bVar1 = false;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Menu_TypeInfo);
      }
      bVar1 = *(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xd) != '\0';
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Menu_TypeInfo);
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0)) ||
       (lVar12 = *(long *)(lVar12 + 0x68), lVar12 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar12,*(undefined1 *)((long)pvVar6 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
    goto LAB_00c485b8;
    uVar14 = *(undefined8 *)(lVar12 + 0x78);
    uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar8,uVar14,0);
    if ((uVar5 & 1) != 0) {
      uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
      goto LAB_00c485b8;
      uVar8 = *(undefined8 *)(lVar12 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar14,uVar8,0);
      if ((uVar5 & 1) != 0) {
        uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
        if ((uVar5 & 1) != 0) {
          uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
          goto LAB_00c485b8;
          uVar8 = *(undefined8 *)(lVar12 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Equality(uVar14,uVar8,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
            Menu__OODBEAHDBMH(**(long **)(_Menu_TypeInfo + 0xb8),0);
          }
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar12 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x20), lVar12 == 0)) ||
           (lVar12 = *(long *)(lVar12 + 0x4e0), lVar12 == 0)) goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive
                  (lVar12,*(undefined1 *)((long)*(long **)(_Menu_TypeInfo + 0xb8) + 0xe),0);
        uVar19 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar19;
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
      }
    }
    uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
    goto LAB_00c485b8;
    uVar8 = *(undefined8 *)(lVar12 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar14,uVar8,0);
    if ((uVar5 & 1) == 0) {
      uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
      goto LAB_00c485b8;
      uVar8 = *(undefined8 *)(lVar12 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar14,uVar8,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (pvVar6 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar6 == (void *)0x0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(pvVar6);
      }
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
      lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar12 == 0) goto LAB_00c485b8;
      uVar5 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar12,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar14 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar12 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar12 == 0) goto LAB_00c485b8;
            uVar5 = UnityEngine_AudioSource__get_isPlaying(lVar12,0);
            if ((uVar5 & 1) == 0) {
              if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              SoundScript__HCEFONCADKE
                        (*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98),0,0);
            }
          }
        }
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
      lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar12 == 0) goto LAB_00c485b8;
      lVar12 = DAFNMLEKHAD__DKJLCJPBPPN(lVar12,0xffffffff,1,0);
      if (lVar12 == 0) {
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
        lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar12 == 0) goto LAB_00c485b8;
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = *(undefined4 *)(lVar12 + 0x104);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        Menu__CKPDEIAFHEC(**(long **)(_Menu_TypeInfo + 0xb8),0);
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(lVar12,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (pvVar6 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar6 == (void *)0x0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(pvVar6);
    }
    uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
    goto LAB_00c485b8;
    uVar8 = *(undefined8 *)(lVar12 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar14,uVar8,0);
    if ((uVar5 & 1) != 0) {
      uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar14,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
          goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(lVar12,0,0);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar12 = **(long **)(_Menu_TypeInfo + 0xb8);
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x20), lVar12 == 0)) goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(lVar12,0);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(lVar12,0);
      }
    }
    if (bVar1) {
      return;
    }
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    Menu__GDEFDCOIDNM(**(long **)(_Menu_TypeInfo + 0xb8),0);
    return;
  }
LAB_00c485b8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public int get_EventId() { }   @0xb31f4c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int Level__get_EventId(void *__this)

{
  return *(int *)((long)__this + 0x10) + -100;
}


// ==== private static void .cctor() { }   @0xb32060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Level___cctor(void)

{
  if ((bRam00000000019170c7 & 1) == 0) {
    func_0x00a67900(&Level_TypeInfo);
    bRam00000000019170c7 = 1;
  }
  **(undefined8 **)(_Level_TypeInfo + 0xb8) = 0xaffffffff;
  return;
}



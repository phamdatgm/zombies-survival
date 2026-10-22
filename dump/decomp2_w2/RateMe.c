// ==== public void ButtonRateMeSelectStars(int stars_count) { }   @0xaec328

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RateMe__ButtonRateMeSelectStars(void *__this,int stars_count)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if ((bRam0000000001916e9d & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916e9d = 1;
  }
  *(int *)((long)__this + 0x88) = stars_count;
  RateMe__LACBJDFDOLF(__this,1);
  lVar2 = *(long *)((long)__this + 0x28);
  if (lVar2 != 0) {
    lVar4 = 5;
    do {
      uVar5 = (int)lVar4 - 4;
      if ((int)*(uint *)(lVar2 + 0x18) <= (int)uVar5) {
        return;
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      lVar2 = *(long *)(lVar2 + lVar4 * 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar3 == 0)) ||
         (lVar2 == 0)) break;
      lVar1 = 0x2b8;
      if ((int)uVar5 <= stars_count) {
        lVar1 = 0x2b0;
      }
      UnityEngine_UI_Image__set_sprite(lVar2,*(undefined8 *)(lVar3 + lVar1),0);
      lVar2 = *(long *)((long)__this + 0x28);
      lVar4 = lVar4 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonRateMeNow() { }   @0xaece2c

/* WARNING: Removing unreachable block (ram,0x00c0b570) */
/* WARNING: Removing unreachable block (ram,0x00c0b578) */
/* WARNING: Removing unreachable block (ram,0x00c0b5a0) */
/* WARNING: Removing unreachable block (ram,0x00c0b5ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RateMe__ButtonRateMeNow(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *pvVar9;
  ulong uVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  float fVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  long lStack_68;
  
  if ((bRam0000000001916ea1 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_SEND);
    func_0x00a67900(&Str_);
    func_0x00a67900(&Str_market___details_id_);
    bRam0000000001916ea1 = 1;
  }
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Application__get_identifier(0);
  uVar7 = System_String__Concat(_Str_market___details_id_,uVar7,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Menu_TypeInfo);
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x19) != '\0') {
    if (*(int *)((long)__this + 0x88) == 5) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Menu_TypeInfo);
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
         (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40) != 0)) {
        AnalyticsController__BHBKBILKNBE();
        if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        UnityEngine_Application__OpenURL(uVar7,0);
        if ((bRam0000000001916ea0 & 1) == 0) {
          func_0x00a67900(&Main_TypeInfo);
          func_0x00a67900(&Menu_TypeInfo);
          func_0x00a67900(&SoundScript_TypeInfo);
          func_0x00a67900(&Translate_TypeInfo);
          func_0x00a67900(&Str_RATE_ME_REWARD_RECEIVED);
          bRam0000000001916ea0 = 1;
        }
        if (*(char *)((long)__this + 0x98) == '\0') {
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
            DAFNMLEKHAD__DCLEGMOJBPN(lVar6,0xffffffff);
            if ((*(long *)((long)__this + 0x38) != 0) &&
               (lVar6 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x38),0),
               lVar6 != 0)) {
              UnityEngine_GameObject__SetActive(lVar6,0,0);
              if (*(long *)((long)__this + 0x58) != 0) {
                UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x58),0,0);
                if (*(long *)((long)__this + 0x48) != 0) {
                  UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x48),1,0);
                  plVar14 = *(long **)((long)__this + 0x30);
                  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Translate_TypeInfo + 0xb8) != 0) &&
                     (uVar7 = Translate__JJJNIPAKLJF
                                        (**(long **)(_Translate_TypeInfo + 0xb8),
                                         _Str_RATE_ME_REWARD_RECEIVED,0), plVar14 != (long *)0x0)) {
                    (**(code **)(*plVar14 + 0x5a8))(plVar14,uVar7,*(undefined8 *)(*plVar14 + 0x5b0))
                    ;
                    if (*(long *)((long)__this + 0x50) != 0) {
                      UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x50),0,0);
                      if (*(long *)((long)__this + 0x20) != 0) {
                        UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                  (0x43a28000,*(long *)((long)__this + 0x20),1,0);
                        if (cRam0000000001916e67 == '\0') {
                          func_0x00a67900(&Main_TypeInfo);
                          cRam0000000001916e67 = '\x01';
                        }
                        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                        if (lVar6 != 0) {
                          iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit
                                            (&stack0xffffffffffffffb0,0);
                          DAFNMLEKHAD__DIMKKHJDHFJ(lVar6,iVar2 + 0x14);
                          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          SoundScript__GIGBLEBBIEK
                                    (*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x60)
                                     ,0);
                          *(undefined1 *)((long)__this + 0x98) = 1;
                          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                             (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40) != 0)) {
                            AnalyticsController__BHBKBILKNBE();
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
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        return;
      }
    }
    else if (*(long *)((long)__this + 0x48) != 0) {
      uVar8 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 0x48),0);
      if ((uVar8 & 1) == 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
          uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar8 & 1) == 0) {
            return;
          }
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) && (*(long *)((long)__this + 0x60) != 0))
             && (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), lVar6 != 0)) {
            lVar6 = BridgePHP__SendRateMe
                              (lVar6,*(undefined4 *)((long)__this + 0x88),
                               *(undefined8 *)(*(long *)((long)__this + 0x60) + 0x180),0);
            if (lVar6 == 0) {
              func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
              uVar12 = func_0x00a67b44();
              uVar7 = func_0x00a67914(&Str_routine_is_null);
              System_NullReferenceException___ctor(uVar12,uVar7,0);
            }
            else {
              if (pcRam000000000191c478 == (code *)0x0) {
                pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
              }
              uVar8 = (*pcRam000000000191c478)(__this);
              if ((uVar8 & 1) != 0) {
                if (pcRam000000000191c488 == (code *)0x0) {
                  pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
                }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam000000000191c488)(__this,lVar6);
                return;
              }
              func_0x00a67914(&System_ArgumentException_TypeInfo);
              uVar12 = func_0x00a67b44();
              uVar7 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
              System_ArgumentException___ctor(uVar12,uVar7,0);
            }
            uVar7 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
            auVar18 = func_0x00a67a20(uVar12,uVar7);
            if (pcRam000000000191c488 == (code *)0x0) {
              pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
            }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam000000000191c488)(auVar18._0_8_,auVar18._8_8_);
            return;
          }
        }
      }
      else {
        RateMe__MDLHHGNHEOP(__this,_Str_);
        if (*(long *)((long)__this + 0x60) != 0) {
          UnityEngine_UI_Selectable__set_interactable(*(long *)((long)__this + 0x60),1,0);
          if (*(long *)((long)__this + 0x60) != 0) {
            UnityEngine_UI_InputField__set_text(*(long *)((long)__this + 0x60),_Str_,0);
            if (*(long *)((long)__this + 0x58) != 0) {
              UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x58),1,0);
              if (*(long *)((long)__this + 0x48) != 0) {
                UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x48),0,0);
                plVar14 = *(long **)((long)__this + 0x40);
                if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Translate_TypeInfo + 0xb8) != 0) &&
                   (uVar7 = Translate__JJJNIPAKLJF
                                      (**(long **)(_Translate_TypeInfo + 0xb8),_Str_SEND,0),
                   plVar14 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00bed134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*plVar14 + 0x5a8))(plVar14,uVar7,*(undefined8 *)(*plVar14 + 0x5b0));
                  return;
                }
              }
            }
          }
        }
      }
    }
LAB_00bed1f4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Menu_TypeInfo);
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
     (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40) == 0)) goto LAB_00bed1f4;
  AnalyticsController__BHBKBILKNBE();
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Application__OpenURL(uVar7,0);
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
  if (lVar6 == 0) goto LAB_00bed1f4;
  DAFNMLEKHAD__DCLEGMOJBPN(lVar6,0xffffffff);
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
     (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20) == 0)) goto LAB_00bed1f4;
  if ((bRam0000000001916f61 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo,0);
    bRam0000000001916f61 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = **(long **)(_Menu_TypeInfo + 0xb8);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam00000000019170e3 & 1) == 0) {
    func_0x00a67900(&GUIGarage_TypeInfo,0);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170e3 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
    return;
  }
  plVar14 = (long *)(lVar6 + 0x20);
  lVar15 = *plVar14;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(lVar15,0,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if ((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0x30), lVar15 == 0)) goto LAB_00c37710;
  uVar8 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0x140), lVar15 == 0)) ||
     (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c37710;
  uVar8 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0x138), lVar15 == 0)) ||
     (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c37710;
  uVar8 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0x150), lVar15 == 0)) ||
     (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c37710;
  uVar8 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  fVar16 = (float)UnityEngine_Time__get_time(0);
  if (fVar16 - **(float **)(_GUIGarage_TypeInfo + 0xb8) <= 1.0) {
    return;
  }
  if (*plVar14 == 0) goto LAB_00c37710;
  uVar7 = *(undefined8 *)(*plVar14 + 0x70);
  uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Equality(uVar12,uVar7,0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) goto LAB_00c37408;
    if (((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0xa8), lVar15 == 0)) ||
       (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c37710;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
    if ((uVar8 & 1) != 0) goto LAB_00c37408;
    if (((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0x178), lVar15 == 0)) ||
       (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c37710;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
    if ((uVar8 & 1) != 0) goto LAB_00c37408;
    if (((*plVar14 == 0) || (lVar6 = *(long *)(*plVar14 + 0x170), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c37710;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    pvVar9 = (void *)*plVar14;
    if ((uVar8 & 1) == 0) {
      if (pvVar9 != (void *)0x0) {
        if ((bRam0000000001916f6d & 1) == 0) {
          func_0x00a67900(&Main_TypeInfo,1,0);
          func_0x00a67900(&Menu_TypeInfo);
          func_0x00a67900(&Str_Hide_lvl__);
          bRam0000000001916f6d = 1;
        }
        GUIGarage__PIHABGKNPDI(pvVar9,1);
        if (*(long *)((long)pvVar9 + 0x310) == 0) {
LAB_00c0b6e0:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar8 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)pvVar9 + 0x310),0);
        if ((uVar8 & 1) != 0) {
          if (*(long *)((long)pvVar9 + 0x310) == 0) goto LAB_00c0b6e0;
          UnityEngine_GameObject__SetActive(*(long *)((long)pvVar9 + 0x310),0,0);
          GUIGarage__ADMNOIMMGGA(pvVar9,false);
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar6 != 0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
            if (lVar6 == 0) goto LAB_00c0b6e0;
          }
          uVar7 = System_Int32__ToString(lVar6 + 0x10,0);
          uVar7 = System_String__Concat(_Str_Hide_lvl__,uVar7,0);
          Main__GEMDEAMAGPG(uVar7,0,0);
          uVar8 = Main__KCHOEBEIOCE(0);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (pvVar11 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58),
               pvVar11 == (void *)0x0)) goto LAB_00c0b6e0;
            GamePadController__KCAHLEAKNNK(pvVar11);
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          *(undefined8 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) = 0;
          GUIGarage__AGFKGLDJDLE(pvVar9);
        }
        *(undefined1 *)((long)pvVar9 + 0x250) = 0;
        return;
      }
      goto LAB_00c37710;
    }
    if (pvVar9 == (void *)0x0) goto LAB_00c37710;
    uVar7 = *(undefined8 *)((long)pvVar9 + 0x48);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar10 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar10 & 1) == 0) goto Menu__CEFAHBMMKCD;
    if (((*plVar14 == 0) || (lVar6 = *(long *)(*plVar14 + 0x48), lVar6 == 0)) ||
       (lVar6 = *(long *)(lVar6 + 0xb8), lVar6 == 0)) goto LAB_00c37710;
    uVar10 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar10 & 1) != 0) goto Menu__CEFAHBMMKCD;
    if ((void *)*plVar14 == (void *)0x0) goto LAB_00c37710;
    GUIGarage__ButtonMapHidePanel((void *)*plVar14,true);
joined_r0x00c37634:
    if ((uVar8 & 1) == 0) {
      return;
    }
Menu__CEFAHBMMKCD:
    if ((bRam00000000019170e1 & 1) == 0) {
      func_0x00a67900(&GUIWindow_TypeInfo);
      func_0x00a67900(&UnityEngine_Object_TypeInfo);
      bRam00000000019170e1 = 1;
    }
    lVar6 = **(long **)(_GUIWindow_TypeInfo + 0xb8);
    lVar15 = (*(long **)(_GUIWindow_TypeInfo + 0xb8))[1];
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(lVar15,0,0);
    if ((uVar8 & 1) != 0) {
      lVar6 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    }
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(lVar6,0,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(lVar6 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar8 & 1) == 0) {
        uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar8 & 1) == 0) {
          return;
        }
      }
      uVar7 = *(undefined8 *)(lVar6 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar8 & 1) == 0) {
        lVar6 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
      }
      else {
        lVar6 = *(long *)(lVar6 + 0x28);
      }
      if (lVar6 != 0) {
        GUIWindow__HEGIHOAJOKK(lVar6,0,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
LAB_00c37408:
  if (*plVar14 == 0) goto LAB_00c37710;
  uVar7 = *(undefined8 *)(*plVar14 + 0xa8);
  uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Equality(uVar12,uVar7,0);
  if ((uVar8 & 1) == 0) {
    if (*plVar14 == 0) goto LAB_00c37710;
    uVar7 = *(undefined8 *)(*plVar14 + 0xa8);
    uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar12,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_00c37480;
    if (*plVar14 == 0) goto LAB_00c37710;
    uVar7 = *(undefined8 *)(*plVar14 + 0xd0);
    uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar12,uVar7,0);
    if (((uVar8 & 1) == 0) || (*(char *)(lVar6 + 0x78) != '\0')) {
      if ((*plVar14 == 0) ||
         ((lVar6 = *(long *)(*plVar14 + 0xa0), lVar6 == 0 ||
          (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c37710;
      uVar8 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar8 & 1) == 0) {
        uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        goto joined_r0x00c37634;
      }
      if (((*plVar14 == 0) || (lVar6 = *(long *)(*plVar14 + 0x70), lVar6 == 0)) ||
         (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c37710;
      uVar8 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar8 & 1) != 0) {
        lVar6 = *plVar14;
        if (lVar6 == 0) goto LAB_00c37710;
LAB_00c37690:
        pvVar9 = *(void **)(lVar6 + 0xa8);
        if (pvVar9 == (void *)0x0) goto LAB_00c37710;
        iVar2 = 1;
        goto code_r0x00c4660c;
      }
      if (*plVar14 == 0) goto LAB_00c37710;
      uVar7 = *(undefined8 *)(*plVar14 + 0xa8);
      uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar12,uVar7,0);
      lVar6 = *plVar14;
      if (lVar6 == 0) goto LAB_00c37710;
      if ((uVar8 & 1) != 0) goto LAB_00c37690;
      goto LAB_00c376a0;
    }
    lVar15 = *(long *)(lVar6 + 0x20);
    *(undefined1 *)(lVar6 + 0x78) = 1;
    if (lVar15 == 0) goto LAB_00c37710;
    if ((bRam0000000001916f93 & 1) == 0) {
      func_0x00a67900(&CarController_TypeInfo,0);
      func_0x00a67900(&string___TypeInfo);
      func_0x00a67900(&Translate_TypeInfo);
      func_0x00a67900(&Str__);
      func_0x00a67900(&Str_HP);
      func_0x00a67900(&Str_SECOND);
      func_0x00a67900(&Str____1_);
      bRam0000000001916f93 = 1;
    }
    plVar14 = *(long **)(lVar15 + 0x4e8);
    lVar6 = func_0x00a679a0(_string___TypeInfo,5);
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CarController_TypeInfo);
    }
    uVar7 = System_Int32__ToString(*(long *)(_CarController_TypeInfo + 0xb8) + 0xc,0);
    if (lVar6 == 0) goto LAB_00c10f6c;
    if ((*(int *)(lVar6 + 0x18) == 0) ||
       (*(undefined8 *)(lVar6 + 0x20) = uVar7, *(int *)(lVar6 + 0x18) == 1)) {
LAB_00c10f68:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    *(undefined8 *)(lVar6 + 0x28) = _Str__;
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c10f6c;
    uVar7 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_SECOND,0);
    if ((*(uint *)(lVar6 + 0x18) < 3) ||
       (*(undefined8 *)(lVar6 + 0x30) = uVar7, *(uint *)(lVar6 + 0x18) == 3)) goto LAB_00c10f68;
    *(undefined8 *)(lVar6 + 0x38) = _Str____1_;
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c10f6c;
    uVar7 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_HP,0);
    if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_00c10f68;
    *(undefined8 *)(lVar6 + 0x40) = uVar7;
    uVar7 = System_String__Concat(lVar6,0);
    if (plVar14 == (long *)0x0) {
LAB_00c10f6c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    (**(code **)(*plVar14 + 0x5a8))(plVar14,uVar7,*(undefined8 *)(*plVar14 + 0x5b0));
    pvVar9 = *(void **)(lVar15 + 200);
    if (pvVar9 == (void *)0x0) goto LAB_00c10f6c;
    iVar2 = 1;
  }
  else {
LAB_00c37480:
    if (((*plVar14 == 0) || (lVar6 = *(long *)(*plVar14 + 0x70), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c37710;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    lVar6 = *plVar14;
    if (lVar6 == 0) goto LAB_00c37710;
    if ((uVar8 & 1) == 0) {
LAB_00c376a0:
      pvVar9 = *(void **)(lVar6 + 0x78);
    }
    else {
      pvVar9 = *(void **)(lVar6 + 0x70);
    }
    if (pvVar9 == (void *)0x0) {
LAB_00c37710:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    iVar2 = 0;
  }
code_r0x00c4660c:
  if ((bRam0000000001917151 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo,iVar2,0);
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
  lVar6 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar6 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar6 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x20) = _Str_Try_to_Show__;
  lVar15 = UnityEngine_Component__get_gameObject(pvVar9,0);
  if (lVar15 == 0) goto LAB_00c485b8;
  uVar7 = UnityEngine_Object__get_name(lVar15,0);
  if ((*(uint *)(lVar6 + 0x18) < 2) ||
     (*(undefined8 *)(lVar6 + 0x28) = uVar7, *(uint *)(lVar6 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x30) = _Str___current__;
  uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar8 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar6 + 0x18) < 4) ||
     (*(undefined8 *)(lVar6 + 0x38) = uVar7, *(uint *)(lVar6 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x40) = _Str___last__;
  uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar8 & 1) != 0) {
    lVar15 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar15 == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(lVar15,0);
  }
  uVar5 = *(uint *)(lVar6 + 0x18);
  if ((uVar5 < 6) || (*(undefined8 *)(lVar6 + 0x48) = uVar7, uVar5 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x50) = _Str____Child__;
  plVar14 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar7 = 0;
  if (plVar14 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
    uVar5 = *(uint *)(lVar6 + 0x18);
  }
  if (uVar5 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x58) = uVar7;
  uVar7 = System_String__Concat(lVar6,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar7,0,0);
  uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Equality(uVar7,pvVar9,0);
  if ((uVar8 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar7,0,0);
    if ((uVar8 & 1) != 0) {
      return;
    }
  }
  uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Equality(uVar7,pvVar9,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  lVar6 = _GUIWindow_TypeInfo;
  if ((uVar8 & 1) != 0) {
    pvVar11 = *(void **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (pvVar11 == (void *)0x0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(pvVar11,false);
    lVar6 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar7 = **(undefined8 **)(lVar6 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if (((uVar8 & 1) != 0) && (iVar2 == 0)) {
    if ((void *)**(undefined8 **)(_GUIWindow_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO((void *)**(undefined8 **)(_GUIWindow_TypeInfo + 0xb8),false);
  }
  pvVar11 = (void *)GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar8 = UnityEngine_Object__op_Inequality(pvVar11,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(char *)((long)pvVar9 + 0x20) == '\0') {
      if (pvVar11 == (void *)0x0) goto LAB_00c485b8;
      uVar8 = UnityEngine_GameObject__get_activeSelf(pvVar11,0);
      if ((uVar8 & 1) == 0) goto LAB_00c46b74;
      uVar17 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar17;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if (((uVar8 & 1) != 0) && (*(char *)((long)pvVar9 + 0x21) != '\0')) {
        fVar16 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar16) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8),pvVar11);
          goto LAB_00c46b74;
        }
      }
      if (pvVar11 == (void *)0x0) goto LAB_00c485b8;
      uVar7 = 1;
    }
    UnityEngine_GameObject__SetActive(pvVar11,uVar7,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar7 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(char *)((long)pvVar9 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
          goto LAB_00c485b8;
          uVar8 = AdvController__EDNAEPDDBPJ(lVar6,0);
          if ((uVar8 & 1) != 0) {
            iVar3 = UnityEngine_Screen__get_width(0);
            iVar4 = UnityEngine_Screen__get_height(0);
            fVar16 = (float)iVar3 / (float)iVar4;
            if (fVar16 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
            goto LAB_00c485b8;
            uVar7 = *(undefined8 *)(lVar6 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar8 = UnityEngine_Object__op_Equality(pvVar9,uVar7,0);
            if ((uVar8 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0)
                 ) goto LAB_00c485b8;
              uVar7 = *(undefined8 *)(lVar6 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar8 = UnityEngine_Object__op_Equality(pvVar9,uVar7,0);
              if ((uVar8 & 1) != 0) {
                if (1.61 <= fVar16) {
                  if ((fVar16 <= 1.61) || (1.8 <= fVar16)) {
                    if (fVar16 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar6 == 0)) goto LAB_00c485b8;
                    uVar7 = *(undefined8 *)(lVar6 + 0x70);
                    uVar17 = 0x3f51eb85;
                    uVar12 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar6 == 0)) goto LAB_00c485b8;
                    uVar7 = *(undefined8 *)(lVar6 + 0x70);
                    uVar17 = 0x3f5eb852;
                    uVar12 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar6 == 0)) goto LAB_00c485b8;
                  uVar7 = *(undefined8 *)(lVar6 + 0x70);
                  uVar17 = 0x3f733333;
                  uVar12 = 0x425c0000;
                }
                goto LAB_00c46f38;
              }
            }
            else {
              if (1.61 <= fVar16) {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar6 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar16) {
                  if (*(long *)(lVar6 + 0x240) == 0) goto LAB_00c485b8;
                  uVar8 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar6 + 0x240),0);
                  if ((uVar8 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar6 == 0)) goto LAB_00c485b8;
                  uVar7 = *(undefined8 *)(lVar6 + 0x60);
                  uVar17 = 0x3f51eb85;
                  uVar12 = 0x41a00000;
                }
                else {
                  uVar7 = *(undefined8 *)(lVar6 + 0x60);
                  uVar17 = 0x3f5eb852;
                  uVar12 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar6 == 0)) goto LAB_00c485b8;
                uVar7 = *(undefined8 *)(lVar6 + 0x60);
                uVar12 = 0xc0a00000;
                uVar17 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar12,uVar17,pvVar9,uVar7);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (pvVar11 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38),
               pvVar11 == (void *)0x0)) goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(pvVar11);
            goto LAB_00c46f70;
          }
        }
        GUIWindow__IPELKJAHFGL(pvVar9);
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
    uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(char *)((long)pvVar9 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(pvVar9);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
          goto LAB_00c485b8;
          uVar8 = AdvController__EDNAEPDDBPJ(lVar6,0);
          if ((uVar8 & 1) == 0) goto LAB_00c47120;
          iVar3 = UnityEngine_Screen__get_width(0);
          iVar4 = UnityEngine_Screen__get_height(0);
          fVar16 = (float)iVar3 / (float)iVar4;
          if (1.51 < fVar16) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
            goto LAB_00c485b8;
            uVar7 = *(undefined8 *)(lVar6 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar8 = UnityEngine_Object__op_Equality(pvVar9,uVar7,0);
            if ((uVar8 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
              goto LAB_00c485b8;
              uVar7 = *(undefined8 *)(lVar6 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar8 = UnityEngine_Object__op_Equality(pvVar9,uVar7,0);
              if ((uVar8 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                goto LAB_00c485b8;
                uVar7 = *(undefined8 *)(lVar6 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar8 = UnityEngine_Object__op_Equality(pvVar9,uVar7,0);
                if ((uVar8 & 1) == 0) {
                  lVar6 = UnityEngine_Component__get_gameObject(pvVar9,0);
                  if (lVar6 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar6,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar6 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar8 = UnityEngine_Object__op_Inequality(lVar6,0,0);
                  if ((uVar8 & 1) != 0) {
                    if (lVar6 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar6 + 0x2c) == 3) {
                      lVar6 = UnityEngine_Component__get_gameObject(pvVar9,0);
                      if (lVar6 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar6,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar8 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar8 & 1) != 0) {
                        if (1.61 <= fVar16) {
                          if (1.8 <= fVar16) {
                            uVar17 = 0x3f59999a;
                            uVar7 = 0x42700000;
                          }
                          else {
                            uVar7 = 0x428c0000;
                            uVar17 = 0;
                          }
                        }
                        else {
                          uVar7 = 0x41a00000;
                          uVar17 = 0;
                        }
                        goto LAB_00c47304;
                      }
                    }
                  }
                  goto LAB_00c47308;
                }
                if (1.61 <= fVar16) {
                  if (fVar16 < 1.8) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                    goto LAB_00c485b8;
                    lStack_68 = *(long *)(lVar6 + 0xe8);
                    uVar17 = 0x3f733333;
                    uVar7 = 0x428c0000;
                    goto LAB_00c47304;
                  }
                  goto LAB_00c47338;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar6 + 0xe8);
                uVar7 = 0x41f00000;
              }
              else {
                if (1.61 <= fVar16) {
                  if (1.8 <= fVar16) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar6 + 0xb0);
                  uVar17 = 0x3f6e147b;
                  uVar7 = 0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar6 + 0xb0);
                uVar7 = 0xc1c80000;
              }
LAB_00c4729c:
              uVar17 = 0;
            }
            else {
              if (fVar16 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar6 + 0x188);
                uVar7 = 0x41200000;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
              goto LAB_00c485b8;
              lStack_68 = *(long *)(lVar6 + 0x188);
              if (1.8 <= fVar16) {
                uVar17 = 0x3f51eb85;
                uVar7 = 0x42180000;
              }
              else {
                uVar17 = 0x3f733333;
                uVar7 = 0x420c0000;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(uVar7,uVar17,pvVar9,lStack_68);
          }
LAB_00c47308:
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar11 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38),
             pvVar11 == (void *)0x0)) goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(pvVar11);
        }
      }
    }
  }
LAB_00c47338:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = *(long *)(_Menu_TypeInfo + 0xb8);
  if (*(char *)(lVar6 + 0x1a) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar6 = *(long *)(_Menu_TypeInfo + 0xb8);
    }
    if (*(char *)(lVar6 + 0xc) != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar8 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
            goto LAB_00c485b8;
            if (*(char *)(lVar6 + 0x6c) != '\0') {
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
              pvVar11 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (pvVar11 == (void *)0x0) goto LAB_00c485b8;
              bVar1 = DAFNMLEKHAD__MHBEPDHNNFH(pvVar11);
              if (!bVar1) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
                goto LAB_00c485b8;
                uVar7 = *(undefined8 *)(lVar6 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar8 = UnityEngine_Object__op_Equality(uVar7,0,0);
                if ((uVar8 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                  goto LAB_00c485b8;
                  uVar7 = *(undefined8 *)(lVar6 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar8 = UnityEngine_Object__op_Equality(pvVar9,uVar7,0);
                  if ((uVar8 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
                    goto LAB_00c485b8;
                    uVar7 = *(undefined8 *)(lVar6 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar7 = UnityEngine_Object__Instantiate_object_
                                      (uVar7,_Method_UnityEngine_Object_Instantiate_GameObject___);
                    *(undefined8 *)(lVar6 + 0x90) = uVar7;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar6 = UnityEngine_Component__get_gameObject(pvVar9,0);
  if (lVar6 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar6,1,0);
  lVar6 = 8;
  if (iVar2 == 0) {
    lVar6 = 0;
  }
  puVar13 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar13[2] = *puVar13;
  *(void **)((long)puVar13 + lVar6) = pvVar9;
  if (*(char *)((long)pvVar9 + 0x23) != '\0') {
    uVar7 = GUIWindow__FAAELIPKLCB(pvVar9);
    UnityEngine_MonoBehaviour__StartCoroutine(pvVar9,uVar7,0);
  }
  lVar6 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar6 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar6 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar6 + 0x20) = _Str_Window__Show__;
  uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar8 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar6 + 0x18) < 2) ||
     (*(undefined8 *)(lVar6 + 0x28) = uVar7, *(uint *)(lVar6 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x30) = _Str___last__;
  uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar8 & 1) != 0) {
    lVar15 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar15 == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(lVar15,0);
  }
  uVar5 = *(uint *)(lVar6 + 0x18);
  if ((uVar5 < 4) || (*(undefined8 *)(lVar6 + 0x38) = uVar7, uVar5 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x40) = _Str____Child__;
  plVar14 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar7 = 0;
  if (plVar14 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
    uVar5 = *(uint *)(lVar6 + 0x18);
  }
  if (uVar5 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x48) = uVar7;
  uVar7 = System_String__Concat(lVar6,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar7,0,0);
  uVar8 = Main__KCHOEBEIOCE(0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (pvVar11 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58), pvVar11 == (void *)0x0))
    goto LAB_00c485b8;
    GamePadController__KCAHLEAKNNK(pvVar11);
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
    uVar7 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar8 & 1) != 0) {
      uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
      goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(lVar6 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
      if ((uVar8 & 1) == 0) {
        uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
        goto LAB_00c485b8;
        uVar12 = *(undefined8 *)(lVar6 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
        if ((uVar8 & 1) == 0) {
          uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
          goto LAB_00c485b8;
          uVar12 = *(undefined8 *)(lVar6 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
            goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(lVar6,0);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (pvVar9 = *(void **)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
             pvVar9 == (void *)0x0)) goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(pvVar9);
        }
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
        goto LAB_00c485b8;
        lVar6 = *(long *)(lVar6 + 0x178);
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
        if ((lVar15 == 0) || (uVar5 = DAFNMLEKHAD__EFDKHACIIEC(lVar15,0), lVar6 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar6,uVar5 & 1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar8 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar8 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar8 = GUIGarage__ABAHNKCPCFA(lVar6,0);
    if ((uVar8 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
        (lVar6 = *(long *)(lVar6 + 0x78), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c485b8;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
         ((lVar6 = *(long *)(lVar6 + 0x70), lVar6 == 0 ||
          (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c485b8;
      uVar8 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar8 & 1) != 0) goto LAB_00c47948;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
         (lVar6 = *(long *)(lVar6 + 0x1d0), lVar6 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar6,0,0);
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
         (lVar6 = *(long *)(lVar6 + 0x1b8), lVar6 == 0)) goto LAB_00c485b8;
      uVar17 = 0;
    }
    else {
LAB_00c47948:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
         (lVar6 = *(long *)(lVar6 + 0x1d0), lVar6 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar6,1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(lVar6,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      lVar6 = *(long *)(lVar6 + 0x3e0);
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
      if ((lVar15 == 0) || (uVar5 = DAFNMLEKHAD__EFDKHACIIEC(lVar15,0), lVar6 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar6,uVar5 & 1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0 ||
          (lVar6 = *(long *)(lVar6 + 0x1b8), lVar6 == 0)))) goto LAB_00c485b8;
      uVar17 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar17,lVar6,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
       ((lVar6 = *(long *)(lVar6 + 0x60), lVar6 == 0 ||
        (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c485b8;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar8 & 1) == 0) {
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
        (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
       (lVar6 = *(long *)(lVar6 + 0x68), lVar6 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar6,*(undefined1 *)((long)pvVar9 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar7 = *(undefined8 *)(lVar6 + 0x78);
    uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar12,uVar7,0);
    if ((uVar8 & 1) != 0) {
      uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(lVar6 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,uVar12,0);
      if ((uVar8 & 1) != 0) {
        uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar8 & 1) != 0) {
          uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
          goto LAB_00c485b8;
          uVar12 = *(undefined8 *)(lVar6 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
          if ((uVar8 & 1) != 0) {
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
        lVar6 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x20), lVar6 == 0)) ||
           (lVar6 = *(long *)(lVar6 + 0x4e0), lVar6 == 0)) goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive
                  (lVar6,*(undefined1 *)((long)*(long **)(_Menu_TypeInfo + 0xb8) + 0xe),0);
        uVar17 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar17;
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
      }
    }
    uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(lVar6 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
    if ((uVar8 & 1) == 0) {
      uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(lVar6 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(lVar6,0);
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
      lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_00c485b8;
      uVar8 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar6,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar6 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar6 == 0) goto LAB_00c485b8;
            uVar8 = UnityEngine_AudioSource__get_isPlaying(lVar6,0);
            if ((uVar8 & 1) == 0) {
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
      lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_00c485b8;
      lVar6 = DAFNMLEKHAD__DKJLCJPBPPN(lVar6,0xffffffff,1,0);
      if (lVar6 == 0) {
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
        if (lVar6 == 0) goto LAB_00c485b8;
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = *(undefined4 *)(lVar6 + 0x104);
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
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(lVar6,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar6,0);
    }
    uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(lVar6 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
    if ((uVar8 & 1) != 0) {
      uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar9 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar9 == (void *)0x0)
             ) goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(pvVar9,false);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar6 = **(long **)(_Menu_TypeInfo + 0xb8);
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x20), lVar6 == 0)) goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(lVar6,0);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(lVar6,0);
      }
    }
    if (bVar1) {
      return;
    }
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) != (void *)0x0) {
    Menu__GDEFDCOIDNM((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
    return;
  }
LAB_00c485b8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



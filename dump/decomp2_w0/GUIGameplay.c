// ==== public void DHFMPHMAMBF() { }   @0xb5ed70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__DHFMPHMAMBF(void *__this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uStack_24;
  
  if ((bRam0000000001917212 & 1) == 0) {
    func_0x00a67900(&GUIGameplay_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&float_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_SECOND);
    func_0x00a67900(&Str__0_0_0__);
    func_0x00a67900(&Str_);
    bRam0000000001917212 = 1;
  }
  if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  fVar7 = *(float *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 0x14);
  fVar6 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
  *(float *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 0xc) =
       fVar7 - (fVar6 - *(float *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 0x10));
  if ((*(long *)((long)__this + 0x78) == 0) ||
     (lVar1 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x78),0), lVar1 == 0))
  goto LAB_00c5efac;
  uVar2 = UnityEngine_GameObject__get_activeSelf(lVar1,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = *(undefined8 *)((long)__this + 0x400);
    fVar6 = *(float *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 0xc);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if (fVar6 <= 0.0) {
      if ((uVar2 & 1) != 0) {
        plVar4 = *(long **)((long)__this + 0x400);
        if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c5ef98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x5a8))(plVar4,_Str_,*(undefined8 *)(*plVar4 + 0x5b0));
          return;
        }
        goto LAB_00c5efac;
      }
    }
    else if ((uVar2 & 1) != 0) {
      plVar4 = *(long **)((long)__this + 0x400);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
        uVar5 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_SECOND,0);
        uVar5 = System_String__Concat(_Str__0_0_0__,uVar5,0);
        if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_GUIGameplay_TypeInfo);
        }
        uStack_24 = *(undefined4 *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 0xc);
        uVar3 = func_0x00a67a38(_float_TypeInfo,&uStack_24);
        uVar5 = System_String__Format(uVar5,uVar3,0);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x5a8))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x5b0));
          return;
        }
      }
LAB_00c5efac:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
}


// ==== public void FNOJDNIIENN() { }   @0xb60d98

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__FNOJDNIIENN(void *__this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = *(long *)((long)__this + 0xc0);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar2 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_00c60df8;
        UnityEngine_GameObject__SetActive(lVar2,1,0);
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
    return;
  }
LAB_00c60df8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void PEDBEOIPIIB(string FJBLHMNOPEP) { }   @0xb61544

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__PEDBEOIPIIB(void *__this,void *FJBLHMNOPEP)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000001917218 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917218 = 1;
  }
  lVar4 = *(long *)((long)__this + 0x1f8);
  if (lVar4 == 0) {
LAB_00c6171c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (6 < *(int *)(lVar4 + 0x18)) {
    uVar5 = *(undefined8 *)(lVar4 + 0x50);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar1 & 1) != 0) {
      lVar4 = *(long *)((long)__this + 0x1f8);
      if (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x18) < 7) goto LAB_00c61720;
        if (*(long *)(lVar4 + 0x50) != 0) {
          lVar4 = *(long *)(*(long *)(lVar4 + 0x50) + 0x70);
          if (cRam0000000001916788 == '\0') {
            func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
            cRam0000000001916788 = '\x01';
          }
          if (lVar4 != 0) {
            UnityEngine_RectTransform__set_anchoredPosition
                      (**(undefined4 **)(_UnityEngine_Vector2_TypeInfo + 0xb8),
                       (*(undefined4 **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1],lVar4,0);
            lVar4 = *(long *)((long)__this + 0x1f8);
            if (lVar4 != 0) {
              if (*(uint *)(lVar4 + 0x18) < 7) {
LAB_00c61720:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              if ((*(long *)(lVar4 + 0x50) != 0) &&
                 (plVar2 = *(long **)(*(long *)(lVar4 + 0x50) + 0x78), plVar2 != (long *)0x0)) {
                (**(code **)(*plVar2 + 0x2a8))
                          (0x3e088889,0x3ef0f0f1,0x3f59d9da,0x3f800000,plVar2,
                           *(undefined8 *)(*plVar2 + 0x2b0));
                lVar4 = *(long *)((long)__this + 0x1f8);
                if (lVar4 != 0) {
                  if (*(uint *)(lVar4 + 0x18) < 7) goto LAB_00c61720;
                  if ((*(long *)(lVar4 + 0x50) != 0) &&
                     (plVar2 = *(long **)(*(long *)(lVar4 + 0x50) + 0x88), plVar2 != (long *)0x0)) {
                    (**(code **)(*plVar2 + 0x5a8))
                              (plVar2,FJBLHMNOPEP,*(undefined8 *)(*plVar2 + 0x5b0));
                    lVar4 = *(long *)((long)__this + 0x1f8);
                    if (lVar4 != 0) {
                      if (*(uint *)(lVar4 + 0x18) < 7) goto LAB_00c61720;
                      if (*(long *)(lVar4 + 0x50) != 0) {
                        objDestructorHints__NNIADFNMHGB(*(long *)(lVar4 + 0x50),0);
                        lVar4 = *(long *)((long)__this + 0x1f8);
                        if (lVar4 != 0) {
                          if (*(uint *)(lVar4 + 0x18) < 7) goto LAB_00c61720;
                          if (*(long *)(lVar4 + 0x50) != 0) {
                            lVar4 = objDestructorHints__BHAHHFJLFNI(*(long *)(lVar4 + 0x50),0);
                            if (lVar4 == 0) {
                              func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
                              uVar3 = func_0x00a67b44();
                              uVar5 = func_0x00a67914(&Str_routine_is_null);
                              System_NullReferenceException___ctor(uVar3,uVar5,0);
                            }
                            else {
                              if (pcRam000000000191c478 == (code *)0x0) {
                                pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
                              }
                              uVar1 = (*pcRam000000000191c478)(__this);
                              if ((uVar1 & 1) != 0) {
                                if (pcRam000000000191c488 == (code *)0x0) {
                                  pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
                                }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                (*pcRam000000000191c488)(__this,lVar4);
                                return;
                              }
                              func_0x00a67914(&System_ArgumentException_TypeInfo);
                              uVar3 = func_0x00a67b44();
                              uVar5 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono)
                              ;
                              System_ArgumentException___ctor(uVar3,uVar5,0);
                            }
                            uVar5 = func_0x00a67914(&
                                                  Method_UnityEngine_MonoBehaviour_StartCoroutine__)
                            ;
                            auVar6 = func_0x00a67a20(uVar3,uVar5);
                            if (pcRam000000000191c488 == (code *)0x0) {
                              pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
                            }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            (*pcRam000000000191c488)(auVar6._0_8_,auVar6._8_8_);
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
      goto LAB_00c6171c;
    }
  }
  return;
}


// ==== private void LLAEHJGOFLG() { }   @0xb61bb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__LLAEHJGOFLG(void *__this)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float in_s2;
  float fVar8;
  float in_s3;
  float fVar9;
  
  if ((bRam000000000191721c & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam000000000191721c = 1;
  }
  if (*(long *)((long)__this + 0x368) != 0) {
    lVar2 = UnityEngine_UI_Selectable__get_image(*(long *)((long)__this + 0x368),0);
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
    lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((lVar3 != 0) && (uVar4 = DAFNMLEKHAD__BMMOMBGDEKF(lVar3,0), lVar2 != 0)) {
      lVar3 = 0x370;
      if ((uVar4 & 1) == 0) {
        lVar3 = 0x378;
      }
      UnityEngine_UI_Image__set_sprite(lVar2,*(undefined8 *)((long)__this + lVar3),0);
      if (*(long *)((long)__this + 0x380) != 0) {
        plVar5 = (long *)UnityEngine_UI_Selectable__get_image(*(long *)((long)__this + 0x380),0);
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
        lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((lVar2 != 0) && (uVar4 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar2,0), plVar5 != (long *)0x0)) {
          lVar2 = 0x388;
          if ((uVar4 & 1) == 0) {
            lVar2 = 0x390;
          }
          lVar2 = *(long *)((long)__this + lVar2);
          if ((bRam000000000191db6f & 1) == 0) {
            func_0x00a67900(&UnityEngine_Object_TypeInfo,lVar2,0);
            bRam000000000191db6f = 1;
          }
          lVar3 = plVar5[0x1b];
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar4 = UnityEngine_Object__op_Inequality(lVar3,0,0);
          if ((uVar4 & 1) == 0) {
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = UnityEngine_Object__op_Inequality(lVar2,0,0);
            if ((uVar4 & 1) == 0) {
              return;
            }
            if (lVar2 != 0) {
              UnityEngine_Sprite__get_rect(lVar2,0);
              if (cRam0000000001916788 == '\0') {
                func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
                cRam0000000001916788 = '\x01';
              }
              in_s2 = in_s2 - **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
              in_s3 = in_s3 - (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
              *(bool *)(plVar5 + 7) = in_s2 * in_s2 + in_s3 * in_s3 < 9.9999994e-11;
              uVar6 = UnityEngine_Sprite__get_texture(lVar2,0);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_UnityEngine_Object_TypeInfo);
              }
              uVar7 = 0;
LAB_01550934:
              bVar1 = UnityEngine_Object__op_Equality(uVar6,uVar7,0);
              *(byte *)((long)plVar5 + 0x39) = bVar1 & 1;
              plVar5[0x1b] = lVar2;
              UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(plVar5);
              (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
              UnityEngine_UI_Image__TrackSprite(plVar5);
              return;
            }
          }
          else {
            lVar3 = plVar5[0x1b];
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = UnityEngine_Object__op_Inequality(lVar3,lVar2,0);
            if ((uVar4 & 1) == 0) {
              return;
            }
            if (plVar5[0x1b] != 0) {
              UnityEngine_Sprite__get_rect(plVar5[0x1b],0);
              fVar8 = in_s2;
              fVar9 = in_s3;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar4 = UnityEngine_Object__op_Implicit(lVar2,0);
              if ((uVar4 & 1) == 0) {
                if (cRam0000000001916788 == '\0') {
                  func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
                  cRam0000000001916788 = '\x01';
                }
                fVar8 = **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
                fVar9 = (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
              }
              else {
                if (lVar2 == 0) goto LAB_01550984;
                UnityEngine_Sprite__get_rect(lVar2,0);
              }
              *(bool *)(plVar5 + 7) = in_s2 == fVar8 && in_s3 == fVar9;
              if (plVar5[0x1b] != 0) {
                uVar6 = UnityEngine_Sprite__get_texture(plVar5[0x1b],0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                }
                uVar4 = UnityEngine_Object__op_Implicit(lVar2,0);
                uVar7 = 0;
                if ((uVar4 & 1) != 0) {
                  if (lVar2 == 0) goto LAB_01550984;
                  uVar7 = UnityEngine_Sprite__get_texture(lVar2,0);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonSilverRewarded() { }   @0xb621b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonSilverRewarded(void *__this)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((bRam000000000191721f & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam000000000191721f = 1;
  }
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Application__get_isEditor(0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Menu_TypeInfo);
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    if ((uVar3 & 1) != 0) {
      if ((bRam00000000019170ed & 1) == 0) {
        func_0x00a67900(&CarController_TypeInfo,0);
        func_0x00a67900(&Main_TypeInfo);
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        func_0x00a67900(&SoundScript_TypeInfo);
        bRam00000000019170ed = 1;
      }
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar4 = **(long **)(_CarController_TypeInfo + 0xb8);
      if (lVar4 != 0) {
        uStack_38 = *(undefined8 *)(lVar4 + 0x94);
        uStack_40 = *(undefined8 *)(lVar4 + 0x8c);
        _uStack_30 = CONCAT44(uStack_2c,*(undefined4 *)(lVar4 + 0x9c));
        iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_40,0);
        if (iVar1 < 1) {
          return;
        }
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
             (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 != 0)) &&
            (lVar4 = *(long *)(lVar4 + 0x2e8), lVar4 != 0)) &&
           (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 != 0)) {
          UnityEngine_GameObject__SetActive(lVar4,0,0);
          if (((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
              (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 != 0))
             && (lVar4 = *(long *)(lVar4 + 0x318), lVar4 != 0)) {
            GUICoins__ICMOCEHIFOI(lVar4,0);
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
              iVar1 = DAFNMLEKHAD__LOCFCFJIAIH(lVar4,0);
              lVar5 = **(long **)(_CarController_TypeInfo + 0xb8);
              if (lVar5 != 0) {
                uStack_50 = *(undefined4 *)(lVar5 + 0x9c);
                uStack_58 = *(undefined8 *)(lVar5 + 0x94);
                uStack_60 = *(undefined8 *)(lVar5 + 0x8c);
                iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_60,0);
                DAFNMLEKHAD__JLEEMPONONF(lVar4,iVar2 + iVar1,0);
                lVar4 = **(long **)(_CarController_TypeInfo + 0xb8);
                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,0,0);
                uStack_78 = uStack_90;
                uStack_80 = uStack_98;
                uStack_70 = uStack_88;
                if (lVar4 != 0) {
                  *(undefined4 *)(lVar4 + 0x9c) = uStack_88;
                  *(undefined8 *)(lVar4 + 0x94) = uStack_90;
                  *(undefined8 *)(lVar4 + 0x8c) = uStack_98;
                  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  SoundScript__GIGBLEBBIEK
                            (*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x60),0);
                  return;
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
    if (lVar4 != 0) {
      if ((bRam00000000019171df & 1) == 0) {
        func_0x00a67900(&Main_TypeInfo);
        func_0x00a67900(&MaxSdkAndroid_TypeInfo);
        func_0x00a67900(&Menu_TypeInfo);
        func_0x00a67900(&NNPDABJADNE_TypeInfo);
        func_0x00a67900(&Str_ADV_REWARD__SHOW_);
        bRam00000000019171df = 1;
      }
      uVar3 = AdvController__HNDMJBICLJF(lVar4);
      if ((uVar3 & 1) == 0) {
        return;
      }
      *(undefined4 *)(lVar4 + 0x30) = 0;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
        lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
        uStack_48 = _NNPDABJADNE_TypeInfo;
        uStack_40 = 0xffffffffffffffff;
        uStack_38 = CONCAT44(uStack_38._4_4_,*(undefined4 *)(lVar4 + 0x30));
        uVar6 = System_Enum__ToString(&uStack_48,0);
        if (lVar5 != 0) {
          AnalyticsController__JCMFKBONIGF(lVar5,uVar6,0);
          uStack_60 = _NNPDABJADNE_TypeInfo;
          uVar7 = *(undefined8 *)(lVar4 + 0x40);
          uStack_58 = 0xffffffffffffffff;
          uStack_50 = *(undefined4 *)(lVar4 + 0x30);
          uVar6 = System_Enum__ToString(&uStack_60,0);
          if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_MaxSdkAndroid_TypeInfo);
          }
          MaxSdkAndroid__ShowRewardedAd(uVar7,uVar6,0,0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          Main__GEMDEAMAGPG(_Str_ADV_REWARD__SHOW_,0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonReviveCancel() { }   @0xb629f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonReviveCancel(void *__this)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000001917223 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_);
    bRam0000000001917223 = 1;
  }
  plVar1 = *(long **)((long)__this + 0x358);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x5a8))(plVar1,_Str_,*(undefined8 *)(*plVar1 + 0x5b0));
    if (*(long *)((long)__this + 0x90) != 0) {
      GUIWindow__JGDCBENNDFO(*(long *)((long)__this + 0x90),0,0);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_CarController_TypeInfo + 0xb8) != 0) {
        CarController__HCBBKPNEMLE(**(long **)(_CarController_TypeInfo + 0xb8),0);
        lVar3 = **(long **)(_CarController_TypeInfo + 0xb8);
        if (lVar3 != 0) {
          *(undefined1 *)(lVar3 + 0x504) = 1;
          lVar3 = CarController__FIOKLNLIDNH(lVar3,0,0);
          if (lVar3 == 0) {
            func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
            uVar4 = func_0x00a67b44();
            uVar5 = func_0x00a67914(&Str_routine_is_null);
            System_NullReferenceException___ctor(uVar4,uVar5,0);
          }
          else {
            if (pcRam000000000191c478 == (code *)0x0) {
              pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
            }
            uVar2 = (*pcRam000000000191c478)(__this);
            if ((uVar2 & 1) != 0) {
              if (pcRam000000000191c488 == (code *)0x0) {
                pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
              }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam000000000191c488)(__this,lVar3);
              return;
            }
            func_0x00a67914(&System_ArgumentException_TypeInfo);
            uVar4 = func_0x00a67b44();
            uVar5 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
            System_ArgumentException___ctor(uVar4,uVar5,0);
          }
          uVar5 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
          auVar6 = func_0x00a67a20(uVar4,uVar5);
          if (pcRam000000000191c488 == (code *)0x0) {
            pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
          }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191c488)(auVar6._0_8_,auVar6._8_8_);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void LPFPLIJJJHJ() { }   @0xb6320c

/* WARNING: Removing unreachable block (ram,0x00c63238) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__LPFPLIJJJHJ(void *__this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  
  fVar2 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
  fVar2 = fVar2 - ((float)(int)(fVar2 * 0.5) + (float)(int)(fVar2 * 0.5));
  fVar3 = fVar2 + -1.0;
  if (fVar2 < 0.0) {
    fVar3 = -1.0;
  }
  fVar3 = 1.0 - ABS(fVar3);
  lVar1 = *(long *)((long)__this + 0x2f0);
  fVar2 = fVar3;
  if (1.0 < fVar3) {
    fVar2 = 1.0;
  }
  fStack_30 = fVar2 * 0.07000005 + 1.0;
  if (fVar3 < 0.0) {
    fStack_30 = 1.0;
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uStack_28 = 0x3f800000;
  fStack_2c = fStack_30;
  if (pcRam000000000191c8c0 == (code *)0x0) {
    pcRam000000000191c8c0 = (code *)func_0x00a678c4(&UNK_005b50fa,0);
  }
  (*pcRam000000000191c8c0)(lVar1,&fStack_30);
  return;
}


// ==== public void NLBALNDOEFG() { }   @0xb640fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__NLBALNDOEFG(void *__this)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if ((bRam000000000191722a & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191722a = 1;
  }
  fVar5 = *(float *)((long)__this + 0x120);
  if (0.0 <= fVar5) {
    plVar1 = *(long **)((long)__this + 0x118);
    if (plVar1 == (long *)0x0) {
LAB_00c64280:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    fVar6 = (float)*(undefined8 *)((long)__this + 0x168);
    fVar7 = (float)((ulong)*(undefined8 *)((long)__this + 0x168) >> 0x20);
    fVar8 = (float)*(undefined8 *)((long)__this + 0x170);
    if (0.3 <= *(float *)((long)plVar1 + 0xf4)) {
      auVar9 = NEON_fmov(0xbf800000,4);
      if (1.0 < fVar5) {
        fVar5 = 1.0;
      }
      pcVar4 = *(code **)(*plVar1 + 0x2a8);
      uVar3 = *(undefined8 *)(*plVar1 + 0x2b0);
      auVar10 = NEON_fmov(0x3f800000,4);
      fVar6 = (fVar6 + auVar9._0_4_) * fVar5 + auVar10._0_4_;
      fVar7 = (fVar7 + auVar9._4_4_) * fVar5 + auVar10._4_4_;
      fVar8 = (fVar8 + auVar9._8_4_) * fVar5 + auVar10._8_4_;
    }
    else {
      if (1.0 < fVar5) {
        fVar5 = 1.0;
      }
      pcVar4 = *(code **)(*plVar1 + 0x2a8);
      uVar3 = *(undefined8 *)(*plVar1 + 0x2b0);
      fVar6 = fVar6 + ((float)*(undefined8 *)((long)__this + 0x158) - fVar6) * fVar5;
      fVar7 = fVar7 + ((float)((ulong)*(undefined8 *)((long)__this + 0x158) >> 0x20) - fVar7) *
                      fVar5;
      fVar8 = fVar8 + ((float)*(undefined8 *)((long)__this + 0x160) - fVar8) * fVar5;
    }
    (*pcVar4)(fVar6,fVar7,fVar8,plVar1,uVar3);
    fVar6 = *(float *)((long)__this + 0x120);
    fVar5 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar6 = fVar6 + fVar5 * 3.0;
    *(float *)((long)__this + 0x120) = fVar6;
    if (1.0 < fVar6) {
      *(undefined4 *)((long)__this + 0x120) = 0xbf800000;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c64280;
        *(undefined1 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x214) = 0;
      }
    }
  }
  return;
}


// ==== public void HNINFAKLAJH() { }   @0xb64604

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__HNINFAKLAJH(void *__this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  float in_s2;
  float fVar10;
  undefined8 uStack_58;
  
  if ((bRam000000000191722d & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_RectTransformUtility_TypeInfo);
    bRam000000000191722d = 1;
  }
  uStack_58 = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if (lVar3 == 0) {
      return;
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar3 == 0) goto LAB_00c64a5c;
    }
    if ((0 < *(int *)(lVar3 + 0x10)) && (*(char *)((long)__this + 0x51c) != '\0')) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c64a5c;
        uVar4 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x28);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        uVar4 = *(undefined8 *)((long)__this + 0x508);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
        if ((uVar2 & 1) == 0) {
          if ((*(long *)((long)__this + 0x4f0) == 0) ||
             (lVar3 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x4f0),0),
             lVar3 == 0)) goto LAB_00c64a5c;
          uVar2 = UnityEngine_GameObject__get_activeSelf(lVar3,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          if ((*(long *)((long)__this + 0x4f0) == 0) ||
             (lVar3 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x4f0),0),
             lVar3 == 0)) goto LAB_00c64a5c;
          uVar4 = 0;
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar3 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x38), lVar3 == 0)) {
LAB_00c64a5c:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          UnityEngine_Transform__get_position(lVar3,0);
          if (*(long *)((long)__this + 0x510) == 0) goto LAB_00c64a5c;
          fVar6 = in_s2;
          UnityEngine_Transform__get_position(*(long *)((long)__this + 0x510),0);
          fVar8 = -2.0;
          if (-2.0 < in_s2 - fVar6) {
            *(undefined8 *)((long)__this + 0x508) = 0;
            return;
          }
          if (*(long *)((long)__this + 0x510) == 0) goto LAB_00c64a5c;
          UnityEngine_Transform__get_position(*(long *)((long)__this + 0x510),0);
          fVar10 = *(float *)((long)__this + 0x518);
          fVar6 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
          fVar7 = (fVar6 - *(float *)((long)__this + 0x4f8)) * 0.7;
          fVar7 = fVar7 - (float)(int)(fVar7 / 0.8) * 0.8;
          fVar6 = fVar7;
          if (0.8 < fVar7) {
            fVar6 = 0.8;
          }
          uVar2 = (ulong)(uint)(fVar6 + -0.4);
          fVar6 = fVar6 + -0.4;
          if (fVar7 < 0.0) {
            fVar6 = -0.4;
          }
          if (*(long *)((long)__this + 0x510) == 0) goto LAB_00c64a5c;
          uVar4 = UnityEngine_Transform__get_position(*(long *)((long)__this + 0x510),0);
          if (*(long *)((long)__this + 0x510) == 0) goto LAB_00c64a5c;
          UnityEngine_Transform__get_position(*(long *)((long)__this + 0x510),0);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
              (lVar3 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x28), lVar3 == 0))
             || (lVar3 = *(long *)(lVar3 + 0x28), lVar3 == 0)) goto LAB_00c64a5c;
          uVar9 = (ulong)(uint)(fVar8 + fVar10 + (0.4 - ABS(fVar6)));
          uVar4 = UnityEngine_Camera__WorldToScreenPoint(uVar4,uVar9,uVar2,lVar3,0);
          iVar1 = UnityEngine_Screen__get_width(0);
          fVar6 = ((float)uVar4 / (float)iVar1) * 100.0;
          if ((fVar6 != INFINITY) && (0x59 < (int)fVar6)) {
            if ((*(long *)((long)__this + 0x4f0) == 0) ||
               (lVar3 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x4f0),0),
               lVar3 == 0)) goto LAB_00c64a5c;
            uVar2 = UnityEngine_GameObject__get_activeSelf(lVar3,0);
            if ((uVar2 & 1) == 0) {
              return;
            }
          }
          uVar5 = *(undefined8 *)((long)__this + 0x30);
          if (*(int *)(_UnityEngine_RectTransformUtility_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                    (uVar4,uVar9,uVar5,0,&uStack_58,0);
          if (*(long *)((long)__this + 0x4f0) == 0) goto LAB_00c64a5c;
          UnityEngine_Transform__set_localPosition
                    (uStack_58 & 0xffffffff,uStack_58._4_4_,0,*(long *)((long)__this + 0x4f0),0);
          if (*(char *)((long)__this + 0x51d) != '\0') {
            return;
          }
          GUIGameplay__LFOIDHBMEMK(__this);
          if ((*(long *)((long)__this + 0x4f0) == 0) ||
             (lVar3 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x4f0),0),
             lVar3 == 0)) goto LAB_00c64a5c;
          uVar4 = 1;
        }
        UnityEngine_GameObject__SetActive(lVar3,uVar4,0);
      }
    }
  }
  return;
}


// ==== private void HLIGHGDJECN(GUIRating BKBKLJKDINA, string DIKNHCJJBBC, string FMBLJPEOKMC, int ONBPMGJNDOC, int OKKCFECENJB, int CDKFEFCGMKE, PMJPCDJMHPK JODFAOFGNDK, bool FJDCALHGHCI) { }   @0xb65438

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__HLIGHGDJECN
               (void *__this,void *BKBKLJKDINA,void *DIKNHCJJBBC,void *FMBLJPEOKMC,int ONBPMGJNDOC,
               int OKKCFECENJB,int CDKFEFCGMKE,int JODFAOFGNDK,bool FJDCALHGHCI)

{
  undefined4 uVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if ((bRam0000000001917232 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    __this = (void *)func_0x00a67900(&Str_);
    bRam0000000001917232 = 1;
  }
  if (BKBKLJKDINA != (void *)0x0) {
    plVar3 = *(long **)((long)BKBKLJKDINA + 0x28);
    __this = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x5a8))(plVar3,_Str_,*(undefined8 *)(*plVar3 + 0x5b0));
      plVar3 = *(long **)((long)BKBKLJKDINA + 0x38);
      __this = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x5a8))(plVar3,DIKNHCJJBBC,*(undefined8 *)(*plVar3 + 0x5b0));
        plVar3 = *(long **)((long)BKBKLJKDINA + 0x40);
        __this = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x5a8))(plVar3,FMBLJPEOKMC,*(undefined8 *)(*plVar3 + 0x5b0));
          if ((uint)JODFAOFGNDK < 2) {
            plVar3 = *(long **)((long)BKBKLJKDINA + 0x50);
            if ((int)_Main_TypeInfo[0x1c] == 0) {
              func_0x00a67a30();
            }
            __this = _Main_TypeInfo;
            if (((*(long *)(_Main_TypeInfo[0x17] + 0x40) == 0) ||
                (lVar6 = *(long *)(*(long *)(_Main_TypeInfo[0x17] + 0x40) + 0x50), lVar6 == 0)) ||
               (__this = (void *)Main__HIIJGDANAIK(ONBPMGJNDOC,*(undefined4 *)(lVar6 + 0x18)),
               plVar3 == (long *)0x0)) goto LAB_00c65850;
            (**(code **)(*plVar3 + 0x5a8))(plVar3,__this,*(undefined8 *)(*plVar3 + 0x5b0));
          }
          if ((JODFAOFGNDK | 2U) == 2) {
            plVar3 = *(long **)((long)BKBKLJKDINA + 0x60);
            if ((int)_Main_TypeInfo[0x1c] == 0) {
              func_0x00a67a30();
            }
            __this = (void *)Main__CHJONPOFGFA(OKKCFECENJB);
            if (plVar3 == (long *)0x0) goto LAB_00c65850;
            (**(code **)(*plVar3 + 0x5a8))(plVar3,__this,*(undefined8 *)(*plVar3 + 0x5b0));
          }
          plVar3 = *(long **)((long)BKBKLJKDINA + 0x20);
          __this = (long *)0x0;
          if (plVar3 != (long *)0x0) {
            uVar14 = 0x3f800000;
            uVar12 = 0x3f800000;
            uVar1 = 0x3f800000;
            if (!FJDCALHGHCI) {
              uVar14 = 0x3ec8b439;
              uVar12 = 0x3e9eb852;
              uVar1 = 0x3e645a1d;
            }
            (**(code **)(*plVar3 + 0x2a8))
                      (uVar1,uVar12,uVar14,0x3f800000,plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
            plVar3 = *(long **)((long)BKBKLJKDINA + 0x28);
            plVar9 = *(long **)((long)BKBKLJKDINA + 0x38);
            plVar11 = *(long **)((long)BKBKLJKDINA + 0x60);
            __this = *(void **)((long)BKBKLJKDINA + 0x50);
            if (FJDCALHGHCI) {
              if (((__this == (long *)0x0) ||
                  (__this = (void *)(**(code **)(*(long *)__this + 0x2a8))
                                              (0,0,0,0x3f800000,__this,
                                               *(undefined8 *)(*(long *)__this + 0x2b0)),
                  plVar11 == (long *)0x0)) ||
                 ((__this = (void *)(**(code **)(*plVar11 + 0x2a8))
                                              (0,0,0,0x3f800000,plVar11,
                                               *(undefined8 *)(*plVar11 + 0x2b0)),
                  plVar9 == (long *)0x0 ||
                  (__this = (void *)(**(code **)(*plVar9 + 0x2a8))
                                              (0,0,0,0x3f800000,plVar9,
                                               *(undefined8 *)(*plVar9 + 0x2b0)),
                  plVar3 == (long *)0x0)))) goto LAB_00c65850;
              (**(code **)(*plVar3 + 0x2a8))
                        (0,0,0,0x3f800000,plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
              plVar3 = *(long **)((long)BKBKLJKDINA + 0x40);
              __this = (long *)0x0;
              if (plVar3 == (long *)0x0) goto LAB_00c65850;
              uVar12 = 0x3f000000;
              uVar14 = 0x3f000000;
              fVar13 = 0.5;
              pcVar7 = *(code **)(*plVar3 + 0x2a8);
              uVar5 = *(undefined8 *)(*plVar3 + 0x2b0);
            }
            else {
              if (((__this == (long *)0x0) ||
                  (__this = (void *)(**(code **)(*(long *)__this + 0x2a8))
                                              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,__this,
                                               *(undefined8 *)(*(long *)__this + 0x2b0)),
                  plVar11 == (long *)0x0)) ||
                 ((__this = (void *)(**(code **)(*plVar11 + 0x2a8))
                                              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar11,
                                               *(undefined8 *)(*plVar11 + 0x2b0)),
                  plVar9 == (long *)0x0 ||
                  (__this = (void *)(**(code **)(*plVar9 + 0x2a8))
                                              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar9,
                                               *(undefined8 *)(*plVar9 + 0x2b0)),
                  plVar3 == (long *)0x0)))) goto LAB_00c65850;
              (**(code **)(*plVar3 + 0x2a8))
                        (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar3,
                         *(undefined8 *)(*plVar3 + 0x2b0));
              plVar3 = *(long **)((long)BKBKLJKDINA + 0x40);
              __this = (long *)0x0;
              if (plVar3 == (long *)0x0) goto LAB_00c65850;
              pcVar7 = *(code **)(*plVar3 + 0x2a8);
              uVar5 = *(undefined8 *)(*plVar3 + 0x2b0);
              uVar12 = 0x3f4ccccd;
              uVar14 = 0x3f4ccccd;
              fVar13 = 0.8;
            }
            fVar15 = 1.0;
            (*pcVar7)(uVar12,uVar14,plVar3,uVar5);
            if ((int)_Menu_TypeInfo[0x1c] == 0) {
              func_0x00a67a30();
            }
            __this = _Menu_TypeInfo;
            if (*(long *)_Menu_TypeInfo[0x17] != 0) {
              lVar6 = *(long *)(*(long *)_Menu_TypeInfo[0x17] + 0x50);
              __this = (long *)0x0;
              if (lVar6 != 0) {
                lVar6 = BridgePHP__GetCountryTextureFromID(lVar6,CDKFEFCGMKE,0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                }
                uVar4 = UnityEngine_Object__op_Inequality(lVar6,0,0);
                if ((uVar4 & 1) == 0) {
                  return;
                }
                plVar3 = *(long **)((long)BKBKLJKDINA + 0x30);
                __this = (long *)0x0;
                if (plVar3 != (long *)0x0) {
                  if ((bRam000000000191db6f & 1) == 0) {
                    func_0x00a67900(&UnityEngine_Object_TypeInfo,lVar6,0);
                    bRam000000000191db6f = 1;
                  }
                  lVar8 = plVar3[0x1b];
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar4 = UnityEngine_Object__op_Inequality(lVar8,0,0);
                  if ((uVar4 & 1) == 0) {
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar4 = UnityEngine_Object__op_Inequality(lVar6,0,0);
                    if ((uVar4 & 1) == 0) {
                      return;
                    }
                    if (lVar6 != 0) {
                      UnityEngine_Sprite__get_rect(lVar6,0);
                      if (cRam0000000001916788 == '\0') {
                        func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
                        cRam0000000001916788 = '\x01';
                      }
                      fVar13 = fVar13 - **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
                      fVar15 = fVar15 - (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
                      *(bool *)(plVar3 + 7) = fVar13 * fVar13 + fVar15 * fVar15 < 9.9999994e-11;
                      uVar5 = UnityEngine_Sprite__get_texture(lVar6,0);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                      }
                      uVar10 = 0;
LAB_01550934:
                      bVar2 = UnityEngine_Object__op_Equality(uVar5,uVar10,0);
                      *(byte *)((long)plVar3 + 0x39) = bVar2 & 1;
                      plVar3[0x1b] = lVar6;
                      UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0
                                (plVar3);
                      (**(code **)(*plVar3 + 0x2d8))(plVar3,*(undefined8 *)(*plVar3 + 0x2e0));
                      UnityEngine_UI_Image__TrackSprite(plVar3);
                      return;
                    }
                  }
                  else {
                    lVar8 = plVar3[0x1b];
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar4 = UnityEngine_Object__op_Inequality(lVar8,lVar6,0);
                    if ((uVar4 & 1) == 0) {
                      return;
                    }
                    if (plVar3[0x1b] != 0) {
                      UnityEngine_Sprite__get_rect(plVar3[0x1b],0);
                      fVar17 = fVar15;
                      fVar16 = fVar13;
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar4 = UnityEngine_Object__op_Implicit(lVar6,0);
                      if ((uVar4 & 1) == 0) {
                        if (cRam0000000001916788 == '\0') {
                          func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
                          cRam0000000001916788 = '\x01';
                        }
                        fVar16 = **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
                        fVar17 = (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
                      }
                      else {
                        if (lVar6 == 0) goto LAB_01550984;
                        UnityEngine_Sprite__get_rect(lVar6,0);
                      }
                      *(bool *)(plVar3 + 7) = fVar13 == fVar16 && fVar15 == fVar17;
                      if (plVar3[0x1b] != 0) {
                        uVar5 = UnityEngine_Sprite__get_texture(plVar3[0x1b],0);
                        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                        }
                        uVar4 = UnityEngine_Object__op_Implicit(lVar6,0);
                        uVar10 = 0;
                        if ((uVar4 & 1) != 0) {
                          if (lVar6 == 0) goto LAB_01550984;
                          uVar10 = UnityEngine_Sprite__get_texture(lVar6,0);
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
              }
            }
          }
        }
      }
    }
  }
LAB_00c65850:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50(__this);
}


// ==== public void ButtonNitro(bool value) { }   @0xb664e8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonNitro(void *__this,bool value)

{
  *(bool *)((long)__this + 0xb9) = value;
  return;
}


// ==== public void KLIPHOLINEP() { }   @0xb66694

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__KLIPHOLINEP(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  long lStack_68;
  
  if ((bRam0000000001917239 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917239 = 1;
  }
  lVar9 = *(long *)((long)__this + 0x410);
  if (lVar9 == 0) {
LAB_00c667a8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(uint *)(lVar9 + 0x18) < 3) {
LAB_00c667ac:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  lVar9 = *(long *)(lVar9 + 0x30);
  if (lVar9 == 0) goto LAB_00c667a8;
  uVar11 = *(undefined8 *)(lVar9 + 0x48);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(lVar9 + 0x48) == 0) goto LAB_00c667a8;
    UnityEngine_GameObject__SetActive(*(long *)(lVar9 + 0x48),0,0);
  }
  lVar9 = *(long *)(lVar9 + 0x50);
  if (lVar9 == 0) goto LAB_00c667a8;
  uVar8 = *(uint *)(lVar9 + 0x18);
  if (0 < (int)uVar8) {
    uVar13 = 0;
    do {
      if (uVar8 <= uVar13) goto LAB_00c667ac;
      if (*(long *)((long)__this + 0x50) == 0) goto LAB_00c667a8;
      lVar12 = *(long *)(lVar9 + (long)(int)uVar13 * 8 + 0x20);
      uVar11 = UnityEngine_Component__get_transform(*(long *)((long)__this + 0x50),0);
      if (lVar12 == 0) goto LAB_00c667a8;
      UnityEngine_Transform__SetParent(lVar12,uVar11,0);
      uVar8 = *(uint *)(lVar9 + 0x18);
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar8);
  }
  GUIGameplay__ButtonContinue(__this);
  lVar9 = *(long *)((long)__this + 0x50);
  if (lVar9 == 0) goto LAB_00c667a8;
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
  lVar4 = UnityEngine_Component__get_gameObject(lVar9,0);
  if (lVar4 == 0) goto LAB_00c485b8;
  uVar11 = UnityEngine_Object__get_name(lVar4,0);
  if ((*(uint *)(lVar12 + 0x18) < 2) ||
     (*(undefined8 *)(lVar12 + 0x28) = uVar11, *(uint *)(lVar12 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x30) = _Str___current__;
  uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  uVar11 = _Str_null;
  if ((uVar7 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar11 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar12 + 0x18) < 4) ||
     (*(undefined8 *)(lVar12 + 0x38) = uVar11, *(uint *)(lVar12 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x40) = _Str___last__;
  uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  uVar11 = _Str_null;
  if ((uVar7 & 1) != 0) {
    lVar4 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar4 == 0) goto LAB_00c485b8;
    uVar11 = UnityEngine_Object__get_name(lVar4,0);
  }
  uVar8 = *(uint *)(lVar12 + 0x18);
  if ((uVar8 < 6) || (*(undefined8 *)(lVar12 + 0x48) = uVar11, uVar8 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x50) = _Str____Child__;
  plVar5 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar11 = 0;
  if (plVar5 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    uVar8 = *(uint *)(lVar12 + 0x18);
  }
  if (uVar8 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x58) = uVar11;
  uVar11 = System_String__Concat(lVar12,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar11,0,0);
  uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar11,lVar9,0);
  if ((uVar7 & 1) != 0) {
    uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar11,0,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
  }
  uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar11,lVar9,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  lVar12 = _GUIWindow_TypeInfo;
  if ((uVar7 & 1) != 0) {
    lVar12 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar12 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar12,0);
    lVar12 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar11 = **(undefined8 **)(lVar12 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if ((uVar7 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  lVar12 = GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(lVar12,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(char *)(lVar9 + 0x20) == '\0') {
      if (lVar12 == 0) goto LAB_00c485b8;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
      if ((uVar7 & 1) == 0) goto LAB_00c46b74;
      uVar15 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar11 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar15;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar11 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if (((uVar7 & 1) != 0) && (*(char *)(lVar9 + 0x21) != '\0')) {
        fVar14 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar14) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),lVar12,0);
          goto LAB_00c46b74;
        }
      }
      if (lVar12 == 0) goto LAB_00c485b8;
      uVar11 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar12,uVar11,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar11 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar11 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(char *)(lVar9 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar6 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), pvVar6 == (void *)0x0)
             ) goto LAB_00c485b8;
          bVar1 = AdvController__EDNAEPDDBPJ(pvVar6);
          if (bVar1) {
            iVar2 = UnityEngine_Screen__get_width(0);
            iVar3 = UnityEngine_Screen__get_height(0);
            fVar14 = (float)iVar2 / (float)iVar3;
            if (fVar14 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar12 == 0)
               ) goto LAB_00c485b8;
            uVar11 = *(undefined8 *)(lVar12 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Object__op_Equality(lVar9,uVar11,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                 lVar12 == 0)) goto LAB_00c485b8;
              uVar11 = *(undefined8 *)(lVar12 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(lVar9,uVar11,0);
              if ((uVar7 & 1) != 0) {
                if (1.61 <= fVar14) {
                  if ((fVar14 <= 1.61) || (1.8 <= fVar14)) {
                    if (fVar14 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar12 == 0)) goto LAB_00c485b8;
                    uVar11 = *(undefined8 *)(lVar12 + 0x70);
                    uVar16 = 0x3f51eb85;
                    uVar15 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar12 == 0)) goto LAB_00c485b8;
                    uVar11 = *(undefined8 *)(lVar12 + 0x70);
                    uVar16 = 0x3f5eb852;
                    uVar15 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar12 == 0)) goto LAB_00c485b8;
                  uVar11 = *(undefined8 *)(lVar12 + 0x70);
                  uVar16 = 0x3f733333;
                  uVar15 = 0x425c0000;
                }
                goto LAB_00c46f38;
              }
            }
            else {
              if (1.61 <= fVar14) {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar12 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar14) {
                  if (*(long *)(lVar12 + 0x240) == 0) goto LAB_00c485b8;
                  uVar7 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar12 + 0x240),0);
                  if ((uVar7 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar12 == 0)) goto LAB_00c485b8;
                  uVar11 = *(undefined8 *)(lVar12 + 0x60);
                  uVar16 = 0x3f51eb85;
                  uVar15 = 0x41a00000;
                }
                else {
                  uVar11 = *(undefined8 *)(lVar12 + 0x60);
                  uVar16 = 0x3f5eb852;
                  uVar15 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar12 == 0)) goto LAB_00c485b8;
                uVar11 = *(undefined8 *)(lVar12 + 0x60);
                uVar15 = 0xc0a00000;
                uVar16 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar15,uVar16,lVar9,uVar11);
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
        GUIWindow__IPELKJAHFGL(lVar9);
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
    uVar11 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar11 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(char *)(lVar9 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(lVar9);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar6 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), pvVar6 == (void *)0x0)
             ) goto LAB_00c485b8;
          bVar1 = AdvController__EDNAEPDDBPJ(pvVar6);
          if (!bVar1) goto LAB_00c47120;
          iVar2 = UnityEngine_Screen__get_width(0);
          iVar3 = UnityEngine_Screen__get_height(0);
          fVar14 = (float)iVar2 / (float)iVar3;
          if (1.51 < fVar14) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
            goto LAB_00c485b8;
            uVar11 = *(undefined8 *)(lVar12 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Object__op_Equality(lVar9,uVar11,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
              goto LAB_00c485b8;
              uVar11 = *(undefined8 *)(lVar12 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(lVar9,uVar11,0);
              if ((uVar7 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
                goto LAB_00c485b8;
                uVar11 = *(undefined8 *)(lVar12 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Equality(lVar9,uVar11,0);
                if ((uVar7 & 1) == 0) {
                  lVar12 = UnityEngine_Component__get_gameObject(lVar9,0);
                  if (lVar12 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar12,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar12 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar7 = UnityEngine_Object__op_Inequality(lVar12,0,0);
                  if ((uVar7 & 1) != 0) {
                    if (lVar12 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar12 + 0x2c) == 3) {
                      lVar12 = UnityEngine_Component__get_gameObject(lVar9,0);
                      if (lVar12 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar12,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar7 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar7 & 1) != 0) {
                        if (1.61 <= fVar14) {
                          if (1.8 <= fVar14) {
                            uVar16 = 0x3f59999a;
                            uVar15 = 0x42700000;
                          }
                          else {
                            uVar15 = 0x428c0000;
                            uVar16 = 0;
                          }
                        }
                        else {
                          uVar15 = 0x41a00000;
                          uVar16 = 0;
                        }
                        goto LAB_00c47304;
                      }
                    }
                  }
                  goto LAB_00c47308;
                }
                if (1.61 <= fVar14) {
                  if (fVar14 < 1.8) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
                    goto LAB_00c485b8;
                    lStack_68 = *(long *)(lVar12 + 0xe8);
                    uVar16 = 0x3f733333;
                    uVar15 = 0x428c0000;
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
                uVar15 = 0x41f00000;
              }
              else {
                if (1.61 <= fVar14) {
                  if (1.8 <= fVar14) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar12 + 0xb0);
                  uVar16 = 0x3f6e147b;
                  uVar15 = 0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar12 + 0xb0);
                uVar15 = 0xc1c80000;
              }
LAB_00c4729c:
              uVar16 = 0;
            }
            else {
              if (fVar14 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar12 + 0x188);
                uVar15 = 0x41200000;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
              goto LAB_00c485b8;
              lStack_68 = *(long *)(lVar12 + 0x188);
              if (1.8 <= fVar14) {
                uVar16 = 0x3f51eb85;
                uVar15 = 0x42180000;
              }
              else {
                uVar16 = 0x3f733333;
                uVar15 = 0x420c0000;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(uVar15,uVar16,lVar9,lStack_68);
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
      uVar11 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar11 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar11 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
          if ((uVar7 & 1) != 0) {
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
              uVar7 = DAFNMLEKHAD__MHBEPDHNNFH(lVar12,0);
              if ((uVar7 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar12 == 0))
                goto LAB_00c485b8;
                uVar11 = *(undefined8 *)(lVar12 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Equality(uVar11,0,0);
                if ((uVar7 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
                  goto LAB_00c485b8;
                  uVar11 = *(undefined8 *)(lVar12 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar7 = UnityEngine_Object__op_Equality(lVar9,uVar11,0);
                  if ((uVar7 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar12 == 0))
                    goto LAB_00c485b8;
                    uVar11 = *(undefined8 *)(lVar12 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar11 = UnityEngine_Object__Instantiate_object_
                                       (uVar11,_Method_UnityEngine_Object_Instantiate_GameObject___)
                    ;
                    *(undefined8 *)(lVar12 + 0x90) = uVar11;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar12 = UnityEngine_Component__get_gameObject(lVar9,0);
  if (lVar12 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar12,1,0);
  plVar5 = *(long **)(_GUIWindow_TypeInfo + 0xb8);
  plVar5[2] = *plVar5;
  *plVar5 = lVar9;
  if (*(char *)(lVar9 + 0x23) != '\0') {
    uVar11 = GUIWindow__FAAELIPKLCB(lVar9);
    UnityEngine_MonoBehaviour__StartCoroutine(lVar9,uVar11,0);
  }
  lVar12 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar12 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar12 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar12 + 0x20) = _Str_Window__Show__;
  uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  uVar11 = _Str_null;
  if ((uVar7 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar11 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar12 + 0x18) < 2) ||
     (*(undefined8 *)(lVar12 + 0x28) = uVar11, *(uint *)(lVar12 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x30) = _Str___last__;
  uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  uVar11 = _Str_null;
  if ((uVar7 & 1) != 0) {
    lVar4 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar4 == 0) goto LAB_00c485b8;
    uVar11 = UnityEngine_Object__get_name(lVar4,0);
  }
  uVar8 = *(uint *)(lVar12 + 0x18);
  if ((uVar8 < 4) || (*(undefined8 *)(lVar12 + 0x38) = uVar11, uVar8 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x40) = _Str____Child__;
  plVar5 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar11 = 0;
  if (plVar5 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    uVar8 = *(uint *)(lVar12 + 0x18);
  }
  if (uVar8 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x48) = uVar11;
  uVar11 = System_String__Concat(lVar12,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar11,0,0);
  uVar7 = Main__KCHOEBEIOCE(0);
  if ((uVar7 & 1) != 0) {
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
    uVar11 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar7 & 1) != 0) {
      uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 == 0))
      goto LAB_00c485b8;
      uVar10 = *(undefined8 *)(lVar9 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar11,uVar10,0);
      if ((uVar7 & 1) == 0) {
        uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 == 0))
        goto LAB_00c485b8;
        uVar10 = *(undefined8 *)(lVar9 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Equality(uVar11,uVar10,0);
        if ((uVar7 & 1) == 0) {
          uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 == 0))
          goto LAB_00c485b8;
          uVar10 = *(undefined8 *)(lVar9 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Equality(uVar11,uVar10,0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 == 0))
            goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(lVar9,0);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 == 0))
          goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(lVar9,0);
        }
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 == 0))
        goto LAB_00c485b8;
        lVar9 = *(long *)(lVar9 + 0x178);
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
        if ((pvVar6 == (void *)0x0) || (bVar1 = DAFNMLEKHAD__EFDKHACIIEC(pvVar6), lVar9 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar9,bVar1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar11 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar7 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar11 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar7 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
    goto LAB_00c485b8;
    uVar7 = GUIGarage__ABAHNKCPCFA(lVar12,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0)) ||
        (lVar12 = *(long *)(lVar12 + 0x78), lVar12 == 0)) ||
       (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c485b8;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0)) ||
         ((lVar12 = *(long *)(lVar12 + 0x70), lVar12 == 0 ||
          (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0))))
      goto LAB_00c485b8;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
      if ((uVar7 & 1) != 0) goto LAB_00c47948;
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
      uVar15 = 0;
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
         (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(lVar12,0);
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
      pvVar6 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((pvVar6 == (void *)0x0) || (bVar1 = DAFNMLEKHAD__EFDKHACIIEC(pvVar6), lVar12 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar12,bVar1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0 ||
          (lVar12 = *(long *)(lVar12 + 0x1b8), lVar12 == 0)))) goto LAB_00c485b8;
      uVar15 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar15,lVar12,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0)) ||
       ((lVar12 = *(long *)(lVar12 + 0x60), lVar12 == 0 ||
        (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0))))
    goto LAB_00c485b8;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
    if ((uVar7 & 1) == 0) {
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
    UnityEngine_GameObject__SetActive(lVar12,*(undefined1 *)(lVar9 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
    goto LAB_00c485b8;
    uVar11 = *(undefined8 *)(lVar9 + 0x78);
    uVar10 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar10,uVar11,0);
    if ((uVar7 & 1) != 0) {
      uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
      goto LAB_00c485b8;
      uVar10 = *(undefined8 *)(lVar9 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar11,uVar10,0);
      if ((uVar7 & 1) != 0) {
        uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if ((uVar7 & 1) != 0) {
          uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
          goto LAB_00c485b8;
          uVar10 = *(undefined8 *)(lVar9 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Equality(uVar11,uVar10,0);
          if ((uVar7 & 1) != 0) {
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
        lVar9 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x20), lVar9 == 0)) ||
           (lVar9 = *(long *)(lVar9 + 0x4e0), lVar9 == 0)) goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive
                  (lVar9,*(undefined1 *)((long)*(long **)(_Menu_TypeInfo + 0xb8) + 0xe),0);
        uVar15 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar15;
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
      }
    }
    uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
    goto LAB_00c485b8;
    uVar10 = *(undefined8 *)(lVar9 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar11,uVar10,0);
    if ((uVar7 & 1) == 0) {
      uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
      goto LAB_00c485b8;
      uVar10 = *(undefined8 *)(lVar9 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar11,uVar10,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(lVar9,0);
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
      lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar9 == 0) goto LAB_00c485b8;
      uVar7 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar9,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar11 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar9 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar9 == 0) goto LAB_00c485b8;
            uVar7 = UnityEngine_AudioSource__get_isPlaying(lVar9,0);
            if ((uVar7 & 1) == 0) {
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
      lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar9 == 0) goto LAB_00c485b8;
      lVar9 = DAFNMLEKHAD__DKJLCJPBPPN(lVar9,0xffffffff,1,0);
      if (lVar9 == 0) {
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
        if (lVar9 == 0) goto LAB_00c485b8;
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = *(undefined4 *)(lVar9 + 0x104);
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
         (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(lVar9,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar9,0);
    }
    uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
    goto LAB_00c485b8;
    uVar10 = *(undefined8 *)(lVar9 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar11,uVar10,0);
    if ((uVar7 & 1) != 0) {
      uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar11,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
          goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(lVar9,0,0);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar9 = **(long **)(_Menu_TypeInfo + 0xb8);
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x20), lVar9 == 0)) goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(lVar9,0);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(lVar9,0);
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


// ==== public IEnumerator OJHKPPIFCLM(bool JPPCOPEIOGH, int DMPKPEPDOKI) { }   @0xb66f7c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGameplay__OJHKPPIFCLM(void *__this,bool JPPCOPEIOGH,int DMPKPEPDOKI)

{
  void *pvVar1;
  
  if ((bRam000000000191723e & 1) == 0) {
    func_0x00a67900(&GUIGameplay_GHHIIAGLDMN_TypeInfo);
    bRam000000000191723e = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_GUIGameplay_GHHIIAGLDMN_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x28) = __this;
  *(bool *)((long)pvVar1 + 0x30) = JPPCOPEIOGH;
  *(int *)((long)pvVar1 + 0x20) = DMPKPEPDOKI;
  return pvVar1;
}



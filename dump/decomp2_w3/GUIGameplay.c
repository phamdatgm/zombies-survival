// ==== public void ButtonRewardEncyclopediaItem(bool is_adv) { }   @0xb60688

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonRewardEncyclopediaItem(void *__this,bool is_adv)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  void *pvVar9;
  void *pvVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  void *pvStack_68;
  
  if ((bRam0000000001917214 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001917214 = 1;
  }
  fVar15 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
  if (fVar15 - *(float *)((long)__this + 0x4fc) < 0.5) {
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
  lVar13 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar13 == 0) {
LAB_00c607d0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  iVar4 = DAFNMLEKHAD__HPDEBBJNCIK(lVar13,0);
  iVar2 = 1;
  if (is_adv) {
    iVar2 = 2;
  }
  DAFNMLEKHAD__DIMKKHJDHFJ
            (lVar13,iVar4 + *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x4c) * iVar2,0);
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x60));
  GUIGameplay__ButtonContinue(__this);
  pvVar10 = *(void **)((long)__this + 0x50);
  if (pvVar10 == (void *)0x0) goto LAB_00c607d0;
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
  lVar13 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar13 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar13 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x20) = _Str_Try_to_Show__;
  lVar5 = UnityEngine_Component__get_gameObject(pvVar10,0);
  if (lVar5 == 0) goto LAB_00c485b8;
  uVar6 = UnityEngine_Object__get_name(lVar5,0);
  if ((*(uint *)(lVar13 + 0x18) < 2) ||
     (*(undefined8 *)(lVar13 + 0x28) = uVar6, *(uint *)(lVar13 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x30) = _Str___current__;
  uVar6 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  uVar6 = _Str_null;
  if ((uVar7 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar6 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar13 + 0x18) < 4) ||
     (*(undefined8 *)(lVar13 + 0x38) = uVar6, *(uint *)(lVar13 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x40) = _Str___last__;
  uVar6 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  uVar6 = _Str_null;
  if ((uVar7 & 1) != 0) {
    lVar5 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar5 == 0) goto LAB_00c485b8;
    uVar6 = UnityEngine_Object__get_name(lVar5,0);
  }
  uVar3 = *(uint *)(lVar13 + 0x18);
  if ((uVar3 < 6) || (*(undefined8 *)(lVar13 + 0x48) = uVar6, uVar3 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x50) = _Str____Child__;
  plVar8 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar6 = 0;
  if (plVar8 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    uVar3 = *(uint *)(lVar13 + 0x18);
  }
  if (uVar3 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x58) = uVar6;
  uVar6 = System_String__Concat(lVar13,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar6,0,0);
  uVar6 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar6,pvVar10,0);
  if ((uVar7 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar6,0,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
  }
  uVar6 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar6,pvVar10,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar6 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  lVar13 = _GUIWindow_TypeInfo;
  if ((uVar7 & 1) != 0) {
    lVar13 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar13 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar13,0);
    lVar13 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar6 = **(undefined8 **)(lVar13 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  pvVar9 = (void *)UnityEngine_Object__op_Inequality(uVar6,0,0);
  if (((ulong)pvVar9 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    pvVar9 = (void *)GUIWindow__JGDCBENNDFO(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  pvVar9 = GUIWindow__FEHHGIGJIKL(pvVar9);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(pvVar9,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(char *)((long)pvVar10 + 0x20) == '\0') {
      if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
      uVar7 = UnityEngine_GameObject__get_activeSelf(pvVar9,0);
      if ((uVar7 & 1) == 0) goto LAB_00c46b74;
      uVar14 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar14;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if (((uVar7 & 1) != 0) && (*(char *)((long)pvVar10 + 0x21) != '\0')) {
        fVar15 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar15) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),pvVar9,0);
          goto LAB_00c46b74;
        }
      }
      if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
      uVar6 = 1;
    }
    UnityEngine_GameObject__SetActive(pvVar9,uVar6,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar6 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(char *)((long)pvVar10 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar13 == 0))
          goto LAB_00c485b8;
          uVar7 = AdvController__EDNAEPDDBPJ(lVar13,0);
          if ((uVar7 & 1) != 0) {
            iVar2 = UnityEngine_Screen__get_width(0);
            iVar4 = UnityEngine_Screen__get_height(0);
            fVar15 = (float)iVar2 / (float)iVar4;
            if (fVar15 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar13 == 0)
               ) goto LAB_00c485b8;
            uVar6 = *(undefined8 *)(lVar13 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Object__op_Equality(pvVar10,uVar6,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                 lVar13 == 0)) goto LAB_00c485b8;
              uVar6 = *(undefined8 *)(lVar13 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(pvVar10,uVar6,0);
              if ((uVar7 & 1) != 0) {
                if (1.61 <= fVar15) {
                  if ((fVar15 <= 1.61) || (1.8 <= fVar15)) {
                    if (fVar15 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar13 == 0)) goto LAB_00c485b8;
                    pvVar9 = *(void **)(lVar13 + 0x70);
                    fVar16 = 0.82;
                    fVar15 = 70.0;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar13 == 0)) goto LAB_00c485b8;
                    pvVar9 = *(void **)(lVar13 + 0x70);
                    fVar16 = 0.87;
                    fVar15 = 66.0;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar13 == 0)) goto LAB_00c485b8;
                  pvVar9 = *(void **)(lVar13 + 0x70);
                  fVar16 = 0.95;
                  fVar15 = 55.0;
                }
                goto LAB_00c46f38;
              }
            }
            else {
              if (1.61 <= fVar15) {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar13 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar15) {
                  if (*(long *)(lVar13 + 0x240) == 0) goto LAB_00c485b8;
                  uVar7 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar13 + 0x240),0);
                  if ((uVar7 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar13 == 0)) goto LAB_00c485b8;
                  pvVar9 = *(void **)(lVar13 + 0x60);
                  fVar16 = 0.82;
                  fVar15 = 20.0;
                }
                else {
                  pvVar9 = *(void **)(lVar13 + 0x60);
                  fVar16 = 0.87;
                  fVar15 = 5.0;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar13 == 0)) goto LAB_00c485b8;
                pvVar9 = *(void **)(lVar13 + 0x60);
                fVar15 = -5.0;
                fVar16 = 0.0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(pvVar10,pvVar9,fVar15,fVar16);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar13 == 0))
            goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(lVar13,0);
            goto LAB_00c46f70;
          }
        }
        GUIWindow__IPELKJAHFGL(pvVar10);
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
    uVar6 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar6 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(char *)((long)pvVar10 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(pvVar10);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar13 == 0))
          goto LAB_00c485b8;
          uVar7 = AdvController__EDNAEPDDBPJ(lVar13,0);
          if ((uVar7 & 1) == 0) goto LAB_00c47120;
          iVar2 = UnityEngine_Screen__get_width(0);
          iVar4 = UnityEngine_Screen__get_height(0);
          fVar15 = (float)iVar2 / (float)iVar4;
          if (1.51 < fVar15) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
            goto LAB_00c485b8;
            uVar6 = *(undefined8 *)(lVar13 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Object__op_Equality(pvVar10,uVar6,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
              goto LAB_00c485b8;
              uVar6 = *(undefined8 *)(lVar13 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(pvVar10,uVar6,0);
              if ((uVar7 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
                goto LAB_00c485b8;
                uVar6 = *(undefined8 *)(lVar13 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Equality(pvVar10,uVar6,0);
                if ((uVar7 & 1) == 0) {
                  lVar13 = UnityEngine_Component__get_gameObject(pvVar10,0);
                  if (lVar13 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar13,&pvStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  pvVar9 = pvStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar7 = UnityEngine_Object__op_Inequality(pvVar9,0,0);
                  if ((uVar7 & 1) != 0) {
                    if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
                    if (*(int *)((long)pvVar9 + 0x2c) == 3) {
                      lVar13 = UnityEngine_Component__get_gameObject(pvVar10,0);
                      if (lVar13 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar13,&pvStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar7 = UnityEngine_Object__op_Inequality(pvStack_68,0,0);
                      if ((uVar7 & 1) != 0) {
                        if (1.61 <= fVar15) {
                          if (1.8 <= fVar15) {
                            fVar16 = 0.85;
                            fVar15 = 60.0;
                          }
                          else {
                            fVar15 = 70.0;
                            fVar16 = 0.0;
                          }
                        }
                        else {
                          fVar15 = 20.0;
                          fVar16 = 0.0;
                        }
                        goto LAB_00c47304;
                      }
                    }
                  }
                  goto LAB_00c47308;
                }
                if (1.61 <= fVar15) {
                  if (fVar15 < 1.8) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
                    goto LAB_00c485b8;
                    pvStack_68 = *(void **)(lVar13 + 0xe8);
                    fVar16 = 0.95;
                    fVar15 = 70.0;
                    goto LAB_00c47304;
                  }
                  goto LAB_00c47338;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
                goto LAB_00c485b8;
                pvStack_68 = *(void **)(lVar13 + 0xe8);
                fVar15 = 30.0;
              }
              else {
                if (1.61 <= fVar15) {
                  if (1.8 <= fVar15) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
                  goto LAB_00c485b8;
                  pvStack_68 = *(void **)(lVar13 + 0xb0);
                  fVar16 = 0.93;
                  fVar15 = 0.0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
                goto LAB_00c485b8;
                pvStack_68 = *(void **)(lVar13 + 0xb0);
                fVar15 = -25.0;
              }
LAB_00c4729c:
              fVar16 = 0.0;
            }
            else {
              if (fVar15 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
                goto LAB_00c485b8;
                pvStack_68 = *(void **)(lVar13 + 0x188);
                fVar15 = 10.0;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
              goto LAB_00c485b8;
              pvStack_68 = *(void **)(lVar13 + 0x188);
              if (1.8 <= fVar15) {
                fVar16 = 0.82;
                fVar15 = 38.0;
              }
              else {
                fVar16 = 0.95;
                fVar15 = 35.0;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(pvVar10,pvStack_68,fVar15,fVar16);
          }
LAB_00c47308:
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar13 == 0))
          goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(lVar13,0);
        }
      }
    }
  }
LAB_00c47338:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar13 = *(long *)(_Menu_TypeInfo + 0xb8);
  if (*(char *)(lVar13 + 0x1a) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar13 = *(long *)(_Menu_TypeInfo + 0xb8);
    }
    if (*(char *)(lVar13 + 0xc) != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar6 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar6 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar13 == 0))
            goto LAB_00c485b8;
            if (*(char *)(lVar13 + 0x6c) != '\0') {
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
              lVar13 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (lVar13 == 0) goto LAB_00c485b8;
              uVar7 = DAFNMLEKHAD__MHBEPDHNNFH(lVar13,0);
              if ((uVar7 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar13 == 0))
                goto LAB_00c485b8;
                uVar6 = *(undefined8 *)(lVar13 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Equality(uVar6,0,0);
                if ((uVar7 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
                  goto LAB_00c485b8;
                  uVar6 = *(undefined8 *)(lVar13 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar7 = UnityEngine_Object__op_Equality(pvVar10,uVar6,0);
                  if ((uVar7 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar13 == 0))
                    goto LAB_00c485b8;
                    uVar6 = *(undefined8 *)(lVar13 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar6 = UnityEngine_Object__Instantiate_object_
                                      (uVar6,_Method_UnityEngine_Object_Instantiate_GameObject___);
                    *(undefined8 *)(lVar13 + 0x90) = uVar6;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar13 = UnityEngine_Component__get_gameObject(pvVar10,0);
  if (lVar13 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar13,1,0);
  puVar11 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar11[2] = *puVar11;
  *puVar11 = pvVar10;
  if (*(char *)((long)pvVar10 + 0x23) != '\0') {
    uVar6 = GUIWindow__FAAELIPKLCB(pvVar10);
    UnityEngine_MonoBehaviour__StartCoroutine(pvVar10,uVar6,0);
  }
  lVar13 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar13 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar13 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar13 + 0x20) = _Str_Window__Show__;
  uVar6 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  uVar6 = _Str_null;
  if ((uVar7 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar6 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar13 + 0x18) < 2) ||
     (*(undefined8 *)(lVar13 + 0x28) = uVar6, *(uint *)(lVar13 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x30) = _Str___last__;
  uVar6 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  uVar6 = _Str_null;
  if ((uVar7 & 1) != 0) {
    lVar5 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar5 == 0) goto LAB_00c485b8;
    uVar6 = UnityEngine_Object__get_name(lVar5,0);
  }
  uVar3 = *(uint *)(lVar13 + 0x18);
  if ((uVar3 < 4) || (*(undefined8 *)(lVar13 + 0x38) = uVar6, uVar3 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x40) = _Str____Child__;
  plVar8 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar6 = 0;
  if (plVar8 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    uVar3 = *(uint *)(lVar13 + 0x18);
  }
  if (uVar3 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x48) = uVar6;
  uVar6 = System_String__Concat(lVar13,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar6,0,0);
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
    uVar6 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar7 & 1) != 0) {
      uVar6 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar13 == 0))
      goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(lVar13 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar6,uVar12,0);
      if ((uVar7 & 1) == 0) {
        uVar6 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar13 == 0))
        goto LAB_00c485b8;
        uVar12 = *(undefined8 *)(lVar13 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Equality(uVar6,uVar12,0);
        if ((uVar7 & 1) == 0) {
          uVar6 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar13 == 0))
          goto LAB_00c485b8;
          uVar12 = *(undefined8 *)(lVar13 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Equality(uVar6,uVar12,0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar13 == 0)
               ) goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(lVar13,0);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar13 == 0))
          goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(lVar13,0);
        }
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar13 == 0))
        goto LAB_00c485b8;
        lVar13 = *(long *)(lVar13 + 0x178);
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
        if ((lVar5 == 0) || (uVar3 = DAFNMLEKHAD__EFDKHACIIEC(lVar5,0), lVar13 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar13,uVar3 & 1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar7 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar6 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar7 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
    goto LAB_00c485b8;
    uVar7 = GUIGarage__ABAHNKCPCFA(lVar13,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0)) ||
        (lVar13 = *(long *)(lVar13 + 0x78), lVar13 == 0)) ||
       (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0)) goto LAB_00c485b8;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0)) ||
         ((lVar13 = *(long *)(lVar13 + 0x70), lVar13 == 0 ||
          (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0))))
      goto LAB_00c485b8;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
      if ((uVar7 & 1) != 0) goto LAB_00c47948;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0)) ||
         (lVar13 = *(long *)(lVar13 + 0x1d0), lVar13 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar13,0,0);
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0)) ||
         (lVar13 = *(long *)(lVar13 + 0x1b8), lVar13 == 0)) goto LAB_00c485b8;
      uVar14 = 0;
    }
    else {
LAB_00c47948:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0)) ||
         (lVar13 = *(long *)(lVar13 + 0x1d0), lVar13 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar13,1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(lVar13,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
      goto LAB_00c485b8;
      lVar13 = *(long *)(lVar13 + 0x3e0);
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
      if ((lVar5 == 0) || (uVar3 = DAFNMLEKHAD__EFDKHACIIEC(lVar5,0), lVar13 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar13,uVar3 & 1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0 ||
          (lVar13 = *(long *)(lVar13 + 0x1b8), lVar13 == 0)))) goto LAB_00c485b8;
      uVar14 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar14,lVar13,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0)) ||
       ((lVar13 = *(long *)(lVar13 + 0x60), lVar13 == 0 ||
        (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0))))
    goto LAB_00c485b8;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
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
        (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0)) ||
       (lVar13 = *(long *)(lVar13 + 0x68), lVar13 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar13,*(undefined1 *)((long)pvVar10 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
    goto LAB_00c485b8;
    uVar6 = *(undefined8 *)(lVar13 + 0x78);
    uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar12,uVar6,0);
    if ((uVar7 & 1) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
      goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(lVar13 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar6,uVar12,0);
      if ((uVar7 & 1) != 0) {
        uVar6 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if ((uVar7 & 1) != 0) {
          uVar6 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
          goto LAB_00c485b8;
          uVar12 = *(undefined8 *)(lVar13 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Equality(uVar6,uVar12,0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
            Menu__OODBEAHDBMH((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
          }
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar13 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x20), lVar13 == 0)) ||
           (lVar13 = *(long *)(lVar13 + 0x4e0), lVar13 == 0)) goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive
                  (lVar13,*(undefined1 *)((long)*(long **)(_Menu_TypeInfo + 0xb8) + 0xe),0);
        uVar14 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar14;
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
      }
    }
    uVar6 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
    goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(lVar13 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar6,uVar12,0);
    if ((uVar7 & 1) == 0) {
      uVar6 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
      goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(lVar13 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar6,uVar12,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(lVar13,0);
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
      lVar13 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar13 == 0) goto LAB_00c485b8;
      uVar7 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar13,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar6 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar13 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar13 == 0) goto LAB_00c485b8;
            uVar7 = UnityEngine_AudioSource__get_isPlaying(lVar13,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              SoundScript__HCEFONCADKE
                        (*(void **)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98),false);
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
      pvVar10 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (pvVar10 == (void *)0x0) goto LAB_00c485b8;
      pvVar10 = DAFNMLEKHAD__DKJLCJPBPPN(pvVar10,-1,true);
      if (pvVar10 == (void *)0x0) {
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
        lVar13 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar13 == 0) goto LAB_00c485b8;
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = *(undefined4 *)(lVar13 + 0x104);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
        Menu__CKPDEIAFHEC((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (pvVar10 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar10 == (void *)0x0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(pvVar10);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar13,0);
    }
    uVar6 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
    goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(lVar13 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar6,uVar12,0);
    if ((uVar7 & 1) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar6,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
          goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(lVar13,0,0);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar13 = **(long **)(_Menu_TypeInfo + 0xb8);
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar13 == 0) || (pvVar10 = *(void **)(lVar13 + 0x20), pvVar10 == (void *)0x0))
        goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(pvVar10);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(lVar13,0);
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


// ==== public void MGNNDFEFHAH(GUIGameplay.POFCDOMOIBH LMIFACAEINI, bool LCEMDCJMCPF = False) { }   @0xb5efbc

/* WARNING: Removing unreachable block (ram,0x00c60534) */
/* WARNING: Removing unreachable block (ram,0x00c5f6f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__MGNNDFEFHAH(void *__this,int LMIFACAEINI,bool LCEMDCJMCPF)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  void *__this_00;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong extraout_x1;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  long *plVar15;
  undefined4 uVar16;
  ulong uVar17;
  undefined4 in_s1;
  undefined4 in_s2;
  long *plStack_b0;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint uStack_78;
  int iStack_74;
  
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
  if (!LCEMDCJMCPF) {
    if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(int *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4) = LMIFACAEINI;
  }
  plVar15 = *(long **)((long)__this + 0x3f8);
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c600b8;
  puVar4 = (undefined8 *)&Str_HELP;
  if (!LCEMDCJMCPF) {
    puVar4 = (undefined8 *)&Str_TUTORIAL;
  }
  uVar3 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),*puVar4,0);
  if (plVar15 == (long *)0x0) goto LAB_00c600b8;
  (**(code **)(*plVar15 + 0x5a8))(plVar15,uVar3,*(undefined8 *)(*plVar15 + 0x5b0));
  if (*(long *)((long)__this + 0x438) == 0) goto LAB_00c600b8;
  UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x438),LCEMDCJMCPF,0);
  *(undefined4 *)((long)__this + 0x42c) = 0xffffffff;
  if (LCEMDCJMCPF) {
    *(int *)((long)__this + 0x42c) = LMIFACAEINI;
    if (*(long *)((long)__this + 0x438) != 0) {
      UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x438),1,0);
      if (*(long *)((long)__this + 0x410) != 0) {
        uVar2 = *(uint *)(*(long *)((long)__this + 0x410) + 0x18);
        do {
          uVar2 = uVar2 - 1;
          if ((int)uVar2 < 0) goto LAB_00c5f380;
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
          lVar10 = *(long *)((long)__this + 0x410);
          if (lVar10 == 0) goto LAB_00c600b8;
          if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_00c60508;
          lVar10 = *(long *)(lVar10 + (ulong)uVar2 * 8 + 0x20);
          if ((lVar10 == 0) ||
             (__this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8), __this_00 == (void *)0x0
             )) goto LAB_00c600b8;
          bVar1 = DAFNMLEKHAD__BLGOKNOOEEO(__this_00,*(int *)(lVar10 + 0x10));
        } while (!bVar1);
        lVar10 = *(long *)((long)__this + 0x410);
        if (lVar10 != 0) {
          if (*(uint *)(lVar10 + 0x18) <= uVar2) {
LAB_00c60508:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar10 = *(long *)(lVar10 + (ulong)uVar2 * 8 + 0x20);
          if (lVar10 != 0) {
            uStack_90 = *(undefined4 *)(lVar10 + 0x10);
            *(undefined4 *)((long)__this + 0x430) = uStack_90;
            plStack_a0 = _GUIGameplay_POFCDOMOIBH_TypeInfo;
            uStack_98 = 0xffffffffffffffff;
            uVar3 = System_Enum__ToString(&plStack_a0,0);
            uVar3 = System_String__Concat(_Str_latest_completed_tutorial__,uVar3,0);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_Main_TypeInfo);
            }
            Main__GEMDEAMAGPG(uVar3,0);
LAB_00c5f380:
            if ((*(long *)((long)__this + 0x438) != 0) &&
               (lVar10 = UnityEngine_GameObject__get_transform(*(long *)((long)__this + 0x438),0),
               lVar10 != 0)) {
              plVar15 = (long *)UnityEngine_Transform__GetEnumerator(lVar10,0);
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              plStack_b0 = (long *)0x0;
              uVar17 = uStack_88 & 0xffffffff;
              plVar14 = (long *)0x0;
              uVar2 = 0;
              do {
                lVar10 = *plVar15;
                uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar11 != 0) {
                  piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                      puVar4 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                      goto LAB_00c5f420;
                    }
                    uVar11 = uVar11 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar11 != 0);
                }
                puVar4 = (undefined8 *)
                         func_0x00a9e6c4(plVar15,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00c5f420:
                uVar11 = (*(code *)*puVar4)(plVar15,puVar4[1]);
                uVar16 = (undefined4)uVar17;
                if ((uVar11 & 1) == 0) {
                  uStack_88 = CONCAT44(uStack_88._4_4_,uVar16);
                  plVar15 = (long *)func_0x00a67a34(plVar15,_System_IDisposable_TypeInfo);
                  if (plVar15 == (long *)0x0) goto LAB_00c5f6ec;
                  lVar10 = *plVar15;
                  uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar17 == 0) goto LAB_00c5f6c4;
                  piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  goto LAB_00c5f6ac;
                }
                lVar10 = *plVar15;
                uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar11 != 0) {
                  piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                      puVar4 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                      goto LAB_00c5f480;
                    }
                    uVar11 = uVar11 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar11 != 0);
                }
                puVar4 = (undefined8 *)
                         func_0x00a9e6c4(plVar15,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00c5f480:
                plVar5 = (long *)(*(code *)*puVar4)(plVar15,puVar4[1]);
                if (plVar5 == (long *)0x0) {
LAB_00c60518:
                  uStack_88 = CONCAT44(uStack_88._4_4_,uVar16);
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b50();
                }
                if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)
                    ) || (*(long *)(*(long *)(*plVar5 + 200) +
                                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 +
                                   -8) != _UnityEngine_Transform_TypeInfo)) {
                  uStack_88 = CONCAT44(uStack_88._4_4_,uVar16);
                  func_0x00a67eec(plVar5);
                  goto LAB_00c60518;
                }
                uVar3 = UnityEngine_Object__get_name(plVar5,0);
                _uStack_78 = CONCAT44(iStack_74,LMIFACAEINI);
                uVar6 = System_Int32__ToString(&uStack_78,0);
                uVar6 = System_String__Concat(_Str_point_,uVar6,0);
                uVar11 = System_String__op_Equality(uVar3,uVar6,0);
                if ((uVar11 & 1) == 0) {
                  uVar3 = UnityEngine_Object__get_name(plVar5,0);
                  uVar11 = System_String__op_Equality(uVar3,_Str_point_marker,0);
                  if ((uVar11 & 1) != 0) {
                    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                              (plVar5,&plStack_a0,
                               _Method_UnityEngine_Component_GetComponent_RectTransform___);
                    plStack_b0 = plStack_a0;
                  }
                }
                else {
                  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (plVar5,&plStack_a0,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___);
                  plVar14 = plStack_a0;
                }
                uVar3 = UnityEngine_Object__get_name(plVar5,0);
                uStack_78 = uVar2;
                uVar6 = System_Int32__ToString(&uStack_78,0);
                uVar6 = System_String__Concat(_Str_point_,uVar6,0);
                uVar11 = System_String__op_Equality(uVar3,uVar6,0);
                if ((uVar11 & 1) != 0) {
                  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (plVar5,&plStack_a0,_Method_UnityEngine_Component_GetComponent_Image___)
                  ;
                  plVar5 = plStack_a0;
                  if (plStack_a0 == (long *)0x0) {
                    uStack_88 = CONCAT44(uStack_88._4_4_,uVar16);
                    /* WARNING: Subroutine does not return */
                    il2cpp_throw_967b50();
                  }
                  uVar17 = (**(code **)(*plStack_a0 + 0x298))
                                     (plStack_a0,*(undefined8 *)(*plStack_a0 + 0x2a0));
                  uStack_88 = CONCAT44(in_s1,(undefined4)uStack_88);
                  uStack_80 = CONCAT44(*(undefined4 *)
                                        (&UNK_0059c3a0 +
                                        (ulong)(*(int *)((long)__this + 0x430) < (int)uVar2) * 4),
                                       in_s2);
                  lVar10 = *plVar5;
                  (**(code **)(lVar10 + 0x2a8))(plVar5,*(undefined8 *)(lVar10 + 0x2b0));
                }
                if (*(long *)((long)__this + 0x410) == 0) {
                  uStack_88 = CONCAT44(uStack_88._4_4_,(int)uVar17);
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b50();
                }
                if ((int)uVar2 < *(int *)(*(long *)((long)__this + 0x410) + 0x18) + -1) {
                  uVar2 = uVar2 + 1;
                }
              } while( true );
            }
          }
        }
      }
    }
    goto LAB_00c600b8;
  }
  uVar16 = UnityEngine_Time__get_realtimeSinceStartup(0);
  if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  *(undefined4 *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 0x10) = uVar16;
  GUIGameplay__DHFMPHMAMBF(__this);
  bVar1 = false;
  goto LAB_00c5f788;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar13 = piVar13 + 4;
    if (uVar17 == 0) break;
LAB_00c5f6ac:
    if (*(long *)(piVar13 + -2) == _System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_00c5f6e0;
    }
  }
LAB_00c5f6c4:
  puVar4 = (undefined8 *)func_0x00a9e6c4(plVar15,_System_IDisposable_TypeInfo,0);
LAB_00c5f6e0:
  (*(code *)*puVar4)(plVar15,puVar4[1]);
LAB_00c5f6ec:
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar17 = UnityEngine_Object__op_Inequality(plVar14,0,0);
  if ((uVar17 & 1) != 0) {
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar17 = UnityEngine_Object__op_Inequality(plStack_b0,0,0);
    if ((uVar17 & 1) != 0) {
      if ((plVar14 == (long *)0x0) ||
         (uVar3 = UnityEngine_RectTransform__get_anchoredPosition(plVar14,0),
         plStack_b0 == (long *)0x0)) goto LAB_00c600b8;
      UnityEngine_RectTransform__get_anchoredPosition(plStack_b0,0);
      UnityEngine_RectTransform__set_anchoredPosition(uVar3,plStack_b0,0);
    }
  }
  bVar1 = *(int *)((long)__this + 0x42c) != 0;
LAB_00c5f788:
  if (*(long *)((long)__this + 0x440) != 0) {
    UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x440),bVar1,0);
    if (*(long *)((long)__this + 0x448) != 0) {
      UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x448),0,0);
      if (*(long *)((long)__this + 0x450) != 0) {
        UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x450),0,0);
        if (*(long *)((long)__this + 0x458) != 0) {
          UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x458),0,0);
          bVar1 = false;
          if (LCEMDCJMCPF) {
            bVar1 = *(int *)((long)__this + 0x42c) < *(int *)((long)__this + 0x430);
          }
          if (*(long *)((long)__this + 0x460) != 0) {
            UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x460),bVar1,0);
            if (*(long *)((long)__this + 0x468) != 0) {
              UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x468),0,0);
              if (*(long *)((long)__this + 0x470) != 0) {
                UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x470),0,0);
                if (*(long *)((long)__this + 0x478) != 0) {
                  UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x478),0,0);
                  lVar10 = *(long *)((long)__this + 0x480);
                  uVar17 = 0;
                  if (LCEMDCJMCPF) {
                    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30(_BridgePHP_TypeInfo,0);
                      uVar17 = extraout_x1;
                    }
                    iVar9 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
                    if (iVar9 == 0xc) {
                      uVar17 = 0;
                    }
                    else {
                      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30(_BridgePHP_TypeInfo,uVar17);
                        iVar9 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
                      }
                      uVar17 = (ulong)(iVar9 != 0xd);
                    }
                  }
                  if (lVar10 != 0) {
                    UnityEngine_GameObject__SetActive(lVar10,uVar17,0);
                    lVar10 = *(long *)((long)__this + 0x410);
                    if (lVar10 != 0) {
                      uVar17 = 0;
                      uVar3 = 0;
                      plVar14 = (long *)0x0;
                      plVar15 = (long *)((long)__this + 0x410);
                      uVar11 = (ulong)(uint)LMIFACAEINI;
                      do {
                        if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar17) {
                          if ((LMIFACAEINI != 0) && (!LCEMDCJMCPF)) {
                            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                            }
                            if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xb) == '\0') {
                              GUIGameplay__ButtonPause(__this,1);
                            }
                          }
                          iStack_74 = LMIFACAEINI + 1;
                          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          lVar10 = **(long **)(_Translate_TypeInfo + 0xb8);
                          uVar3 = System_Int32__ToString(&iStack_74,0);
                          if (LMIFACAEINI == 3) {
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
                            if (lVar12 == 0) break;
                            uVar17 = DAFNMLEKHAD__DPJPKMHLGMO(lVar12,0);
                            puVar4 = (undefined8 *)&Str__A;
                            if ((uVar17 & 1) == 0) {
                              puVar4 = (undefined8 *)&Str__B;
                            }
                            uVar3 = System_String__Concat(_Str_TUTORIAL_,uVar3,*puVar4,0);
                            if ((lVar10 == 0) ||
                               (uVar3 = Translate__JJJNIPAKLJF(lVar10,uVar3,0),
                               plVar14 == (long *)0x0)) break;
                            lVar10 = *plVar14;
                            plVar15 = plVar14;
LAB_00c602cc:
                            (**(code **)(lVar10 + 0x5a8))
                                      (plVar15,uVar3,*(undefined8 *)(lVar10 + 0x5b0));
                          }
                          else {
                            uVar3 = System_String__Concat(_Str_TUTORIAL_,uVar3,0);
                            if ((lVar10 == 0) ||
                               (uVar3 = Translate__JJJNIPAKLJF(lVar10,uVar3,0),
                               plVar14 == (long *)0x0)) break;
                            (**(code **)(*plVar14 + 0x5a8))
                                      (plVar14,uVar3,*(undefined8 *)(*plVar14 + 0x5b0));
                            if (LMIFACAEINI == 4) {
                              if ((*(long *)((long)__this + 0x420) != 0) &&
                                 (lVar10 = UnityEngine_Component__get_gameObject
                                                     (*(long *)((long)__this + 0x420),0),
                                 lVar10 != 0)) {
                                UnityEngine_GameObject__SetActive(lVar10,~LCEMDCJMCPF & 1,0);
                                plVar15 = *(long **)((long)__this + 0x420);
                                if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                                  func_0x00a67a30();
                                }
                                if ((**(long **)(_Translate_TypeInfo + 0xb8) != 0) &&
                                   (uVar3 = Translate__JJJNIPAKLJF
                                                      (**(long **)(_Translate_TypeInfo + 0xb8),
                                                       _Str_TUTORIAL_5_TAP,0),
                                   plVar15 != (long *)0x0)) {
                                  lVar10 = *plVar15;
                                  goto LAB_00c602cc;
                                }
                              }
                              break;
                            }
                          }
                          lVar10 = (**(code **)(*plVar14 + 0x598))
                                             (plVar14,*(undefined8 *)(*plVar14 + 0x5a0));
                          uVar3 = System_Environment__get_NewLine(0);
                          if (lVar10 == 0) break;
                          uVar3 = System_String__Replace(lVar10,_Str__,uVar3,0);
                          (**(code **)(*plVar14 + 0x5a8))
                                    (plVar14,uVar3,*(undefined8 *)(*plVar14 + 0x5b0));
                          lVar10 = *(long *)((long)__this + 0x408);
                          uVar3 = func_0x00a67b44(_UnityEngine_RectOffset_TypeInfo);
                          if (LMIFACAEINI < 3) {
                            uVar6 = 0x87;
                            uVar8 = 0x6e;
                          }
                          else {
                            uVar6 = 0x6e;
                            uVar8 = 0x46;
                          }
                          UnityEngine_RectOffset___ctor(uVar3,0,0,uVar6,uVar8,0);
                          if (lVar10 == 0) break;
                          UnityEngine_UI_LayoutGroup__set_padding(lVar10,uVar3,0);
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
                          lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                          if (lVar10 == 0) break;
                          if (*(int *)(lVar10 + 0x94) == 10) {
LAB_00c60498:
                            if ((LMIFACAEINI & 0xfffffffeU) == 2) {
                              UnityEngine_UI_Text__set_fontSize(plVar14,0x3e,0);
                            }
                            UnityEngine_UI_Text__set_lineSpacing(0x3f99999a,plVar14,0);
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
                            lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                            if (lVar10 == 0) break;
                            if (*(int *)(lVar10 + 0x94) == 0xb) goto LAB_00c60498;
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
                            lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                            if (lVar10 == 0) break;
                            if (*(int *)(lVar10 + 0x94) == 0xc) goto LAB_00c60498;
                          }
                          if (*(long *)((long)__this + 0x78) != 0) {
                            GUIWindow__HEGIHOAJOKK
                                      (*(long *)((long)__this + 0x78),~LCEMDCJMCPF & 1,0);
                            return;
                          }
                          break;
                        }
                        if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_00c60508;
                        lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                        if (lVar10 != 0) {
                          uVar6 = *(undefined8 *)(lVar10 + 0x18);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
                          if ((uVar7 & 1) != 0) {
                            lVar10 = *plVar15;
                            if (lVar10 == 0) break;
                            if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_00c60508;
                            lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                            if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x18), lVar10 == 0))
                            break;
                            UnityEngine_GameObject__SetActive(lVar10,uVar17 == uVar11,0);
                          }
                          lVar10 = *plVar15;
                          if (lVar10 == 0) break;
                          if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_00c60508;
                          lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                          if (lVar10 == 0) break;
                          uVar6 = *(undefined8 *)(lVar10 + 0x40);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
                          lVar10 = *plVar15;
                          if ((uVar17 == uVar11) && ((uVar7 & 1) != 0)) {
                            if (lVar10 == 0) break;
                            if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_00c60508;
                            lVar12 = *(long *)(lVar10 + uVar11 * 8 + 0x20);
                            if (lVar12 == 0) break;
                            plVar14 = *(long **)(lVar12 + 0x40);
                          }
                          else if (lVar10 == 0) break;
                          if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_00c60508;
                          lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                          if (lVar10 == 0) break;
                          uVar6 = *(undefined8 *)(lVar10 + 0x20);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
                          if ((uVar7 & 1) != 0) {
                            lVar10 = *plVar15;
                            if (lVar10 == 0) break;
                            if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_00c60508;
                            lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                            if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x20), lVar10 == 0))
                            break;
                            UnityEngine_GameObject__SetActive(lVar10,0,0);
                          }
                          lVar10 = *plVar15;
                          if (lVar10 == 0) break;
                          if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_00c60508;
                          lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                          if (lVar10 == 0) break;
                          uVar6 = *(undefined8 *)(lVar10 + 0x28);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
                          if ((uVar7 & 1) != 0) {
                            lVar10 = *plVar15;
                            if (lVar10 == 0) break;
                            if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_00c60508;
                            lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                            if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x28), lVar10 == 0))
                            break;
                            UnityEngine_GameObject__SetActive(lVar10,0,0);
                          }
                          lVar10 = *plVar15;
                          if (lVar10 == 0) break;
                          if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_00c60508;
                          lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                          if (lVar10 == 0) break;
                          uVar6 = *(undefined8 *)(lVar10 + 0x30);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
                          if ((uVar7 & 1) != 0) {
                            lVar10 = *plVar15;
                            if (lVar10 == 0) break;
                            if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_00c60508;
                            lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                            if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x30), lVar10 == 0))
                            break;
                            UnityEngine_GameObject__SetActive(lVar10,0,0);
                          }
                          lVar10 = *plVar15;
                          if (lVar10 == 0) break;
                          if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_00c60508;
                          lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                          if (lVar10 == 0) break;
                          uVar6 = *(undefined8 *)(lVar10 + 0x38);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
                          if ((uVar7 & 1) != 0) {
                            lVar10 = *plVar15;
                            if (lVar10 == 0) break;
                            if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_00c60508;
                            lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                            if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x38), lVar10 == 0))
                            break;
                            UnityEngine_GameObject__SetActive(lVar10,0,0);
                          }
                          if (LMIFACAEINI == 3) {
                            lVar10 = *(long *)((long)__this + 0x418);
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
                            if ((lVar12 == 0) ||
                               (uVar2 = DAFNMLEKHAD__DPJPKMHLGMO(lVar12,0), lVar10 == 0)) break;
                            UnityEngine_GameObject__SetActive(lVar10,uVar2 & 1,0);
                          }
                          if (uVar17 == uVar11) {
                            lVar10 = *plVar15;
                            if (lVar10 == 0) break;
                            if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_00c60508;
                            lVar10 = *(long *)(lVar10 + uVar11 * 8 + 0x20);
                            if (lVar10 == 0) break;
                            lVar10 = *(long *)(lVar10 + 0x50);
                            uStack_78 = 0;
                            if (lVar10 == 0) break;
                            uVar2 = *(uint *)(lVar10 + 0x18);
                            if (0 < (int)uVar2) {
                              do {
                                if (uVar2 <= uStack_78) goto LAB_00c60508;
                                lVar12 = *(long *)(lVar10 + (long)(int)uStack_78 * 8 + 0x20);
                                if (lVar12 == 0) goto LAB_00c600b8;
                                UnityEngine_Transform__SetParent
                                          (lVar12,*(undefined8 *)((long)__this + 0x28),0);
                                uStack_78 = uStack_78 + 1;
                                uVar2 = *(uint *)(lVar10 + 0x18);
                              } while ((int)uStack_78 < (int)uVar2);
                            }
                            if (*(long *)((long)__this + 0x488) == 0) break;
                            UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x488),0,0);
                            lVar10 = *plVar15;
                            if (lVar10 == 0) break;
                            if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_00c60508;
                            lVar10 = *(long *)(lVar10 + uVar11 * 8 + 0x20);
                            if (lVar10 == 0) break;
                            uVar6 = *(undefined8 *)(lVar10 + 0x28);
                            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                            }
                            uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
                            if ((uVar7 & 1) != 0) {
                              lVar10 = *plVar15;
                              if (lVar10 == 0) break;
                              if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_00c60508;
                              lVar10 = *(long *)(lVar10 + uVar11 * 8 + 0x20);
                              if (lVar10 == 0) break;
                              uVar6 = *(undefined8 *)(lVar10 + 0x18);
                              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
                              if ((uVar7 & 1) != 0) {
                                if (*(long *)((long)__this + 0x488) == 0) break;
                                lVar10 = UnityEngine_GameObject__get_transform
                                                   (*(long *)((long)__this + 0x488),0);
                                lVar12 = *plVar15;
                                if (lVar12 == 0) break;
                                if (*(uint *)(lVar12 + 0x18) <= uVar11) goto LAB_00c60508;
                                lVar12 = *(long *)(lVar12 + uVar11 * 8 + 0x20);
                                if (((lVar12 == 0) ||
                                    (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0)) ||
                                   (uVar6 = UnityEngine_GameObject__get_transform(lVar12,0),
                                   lVar10 == 0)) break;
                                UnityEngine_Transform__set_parent(lVar10,uVar6,0);
                              }
                            }
                            if (*(long *)((long)__this + 0x490) == 0) break;
                            UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x490),0,0);
                            lVar10 = *plVar15;
                            if (lVar10 == 0) break;
                            if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_00c60508;
                            lVar10 = *(long *)(lVar10 + uVar11 * 8 + 0x20);
                            if (lVar10 == 0) break;
                            uVar6 = *(undefined8 *)(lVar10 + 0x30);
                            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                            }
                            uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
                            if ((uVar7 & 1) != 0) {
                              lVar10 = *plVar15;
                              if (lVar10 == 0) break;
                              if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_00c60508;
                              lVar10 = *(long *)(lVar10 + uVar11 * 8 + 0x20);
                              if (lVar10 == 0) break;
                              uVar6 = *(undefined8 *)(lVar10 + 0x18);
                              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
                              if ((uVar7 & 1) != 0) {
                                if (*(long *)((long)__this + 0x490) == 0) break;
                                lVar10 = UnityEngine_GameObject__get_transform
                                                   (*(long *)((long)__this + 0x490),0);
                                lVar12 = *plVar15;
                                if (lVar12 == 0) break;
                                if (*(uint *)(lVar12 + 0x18) <= uVar11) goto LAB_00c60508;
                                lVar12 = *(long *)(lVar12 + uVar11 * 8 + 0x20);
                                if (((lVar12 == 0) ||
                                    (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0)) ||
                                   (uVar6 = UnityEngine_GameObject__get_transform(lVar12,0),
                                   lVar10 == 0)) break;
                                UnityEngine_Transform__set_parent(lVar10,uVar6,0);
                              }
                            }
                            if (*(long *)((long)__this + 0x498) == 0) break;
                            UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x498),0,0);
                            lVar10 = *plVar15;
                            if (lVar10 == 0) break;
                            if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_00c60508;
                            lVar10 = *(long *)(lVar10 + uVar11 * 8 + 0x20);
                            if (lVar10 == 0) break;
                            uVar6 = *(undefined8 *)(lVar10 + 0x38);
                            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                            }
                            uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
                            if ((uVar7 & 1) != 0) {
                              lVar10 = *plVar15;
                              if (lVar10 == 0) break;
                              if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_00c60508;
                              lVar10 = *(long *)(lVar10 + uVar11 * 8 + 0x20);
                              if (lVar10 == 0) break;
                              uVar6 = *(undefined8 *)(lVar10 + 0x18);
                              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
                              if ((uVar7 & 1) != 0) {
                                if (*(long *)((long)__this + 0x498) == 0) break;
                                lVar10 = UnityEngine_GameObject__get_transform
                                                   (*(long *)((long)__this + 0x498),0);
                                lVar12 = *plVar15;
                                if (lVar12 == 0) break;
                                if (*(uint *)(lVar12 + 0x18) <= uVar11) goto LAB_00c60508;
                                lVar12 = *(long *)(lVar12 + uVar11 * 8 + 0x20);
                                if (((lVar12 == 0) ||
                                    (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0)) ||
                                   (uVar6 = UnityEngine_GameObject__get_transform(lVar12,0),
                                   lVar10 == 0)) break;
                                UnityEngine_Transform__set_parent(lVar10,uVar6,0);
                              }
                            }
                          }
                          lVar10 = *plVar15;
                          if (lVar10 == 0) break;
                          if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_00c60508;
                          lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                          if (lVar10 == 0) break;
                          uVar6 = *(undefined8 *)(lVar10 + 0x48);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
                          if ((uVar7 & 1) != 0) {
                            lVar10 = *plVar15;
                            if (lVar10 == 0) break;
                            if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_00c60508;
                            lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                            if (lVar10 == 0) break;
                            if (uVar17 == uVar11) {
                              if (*(long *)(lVar10 + 0x48) == 0) break;
                              UnityEngine_GameObject__SetActive(*(long *)(lVar10 + 0x48),1,0);
                              lVar10 = *plVar15;
                              if (lVar10 == 0) break;
                              if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_00c60508;
                              lVar10 = *(long *)(lVar10 + uVar11 * 8 + 0x20);
                              if (lVar10 == 0) break;
                              uVar3 = *(undefined8 *)(lVar10 + 0x48);
                            }
                            else {
                              uVar6 = *(undefined8 *)(lVar10 + 0x48);
                              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              uVar7 = UnityEngine_Object__op_Inequality(uVar3,uVar6,0);
                              if ((uVar7 & 1) != 0) {
                                lVar10 = *plVar15;
                                if (lVar10 == 0) break;
                                if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_00c60508;
                                lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                                if ((lVar10 == 0) ||
                                   (lVar10 = *(long *)(lVar10 + 0x48), lVar10 == 0)) break;
                                UnityEngine_GameObject__SetActive(lVar10,0,0);
                              }
                            }
                          }
                        }
                        lVar10 = *plVar15;
                        uVar17 = uVar17 + 1;
                      } while (lVar10 != 0);
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


// ==== public void EHHBPPDPGIK() { }   @0xb61d1c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__EHHBPPDPGIK(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam000000000191721b & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191721b = 1;
  }
  if (*(long *)((long)__this + 0x1b0) != 0) {
    uVar1 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x1b0),0);
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
    (*pcRam000000000191c510)(0,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void JMMJMDCMDHI() { }   @0xb6215c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__JMMJMDCMDHI(void *__this)

{
  return;
}


// ==== public void LJNIGKAEGON(Vector3 LBFLGOOEOCE, Camera AGHABKFGCLN, bool OFDBLGCLFPL) { }   @0xb62340

/* WARNING: Removing unreachable block (ram,0x00c625c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__LJNIGKAEGON
               (void *__this,float LBFLGOOEOCE_x,float LBFLGOOEOCE_y,float LBFLGOOEOCE_z,
               void *AGHABKFGCLN,bool OFDBLGCLFPL)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 in_register_00005004;
  ulong uVar13;
  float fVar14;
  undefined4 in_register_00005044;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uStack_68;
  
  uVar5 = CONCAT44(in_register_00005044,LBFLGOOEOCE_z);
  uVar7 = uVar5;
  fVar12 = LBFLGOOEOCE_y;
  if ((bRam0000000001917221 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_RectTransformUtility_TypeInfo);
    bRam0000000001917221 = 1;
  }
  fVar10 = (float)uVar7;
  uStack_68 = 0;
  if (!OFDBLGCLFPL) {
    uVar7 = *(undefined8 *)((long)__this + 0x1a8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (AGHABKFGCLN != (void *)0x0) {
      uVar2 = (ulong)(uint)(LBFLGOOEOCE_y + 2.0);
      uVar5 = UnityEngine_Camera__WorldToScreenPoint
                        (CONCAT44(in_register_00005004,LBFLGOOEOCE_x),uVar2,uVar5,AGHABKFGCLN,0);
      uVar7 = *(undefined8 *)((long)__this + 0x30);
      if (*(int *)(_UnityEngine_RectTransformUtility_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                (uVar5,uVar2,uVar7,0,&uStack_68,0);
      if (*(long *)((long)__this + 0x1a8) != 0) {
        UnityEngine_Transform__set_localPosition
                  (uStack_68 & 0xffffffff,uStack_68._4_4_,0,*(long *)((long)__this + 0x1a8),0);
        return;
      }
    }
    goto LAB_00c62924;
  }
  uVar7 = *(undefined8 *)((long)__this + 0x1b0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar7 = *(undefined8 *)((long)__this + 0x1b8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((*(long *)((long)__this + 0x1b8) == 0) ||
     (lVar3 = *(long *)(*(long *)((long)__this + 0x1b8) + 0x28), lVar3 == 0)) goto LAB_00c62924;
  UnityEngine_Transform__get_position(lVar3,0);
  if ((*(long *)((long)__this + 0x1b8) == 0) ||
     (lVar3 = *(long *)(*(long *)((long)__this + 0x1b8) + 0x28), lVar3 == 0)) goto LAB_00c62924;
  uVar7 = UnityEngine_Transform__get_position(lVar3,0);
  if (((*(long *)((long)__this + 0x1b8) == 0) ||
      (lVar3 = *(long *)(*(long *)((long)__this + 0x1b8) + 0x28), lVar3 == 0)) ||
     (UnityEngine_Transform__get_position(lVar3,0), AGHABKFGCLN == (void *)0x0)) goto LAB_00c62924;
  uVar13 = (ulong)(uint)(fVar12 + 2.0);
  uVar7 = UnityEngine_Camera__WorldToScreenPoint(uVar7,AGHABKFGCLN,0);
  uVar2 = uVar13;
  iVar1 = UnityEngine_Screen__get_width(0);
  fVar12 = (float)uVar2;
  if ((*(long *)((long)__this + 0x1b8) == 0) ||
     (lVar3 = *(long *)(*(long *)((long)__this + 0x1b8) + 0x28), lVar3 == 0)) goto LAB_00c62924;
  UnityEngine_Transform__get_position(lVar3,0);
  if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c62924;
  fVar14 = fVar10;
  fVar8 = (float)UnityEngine_RectTransform__get_sizeDelta(*(long *)((long)__this + 0x30),0);
  plVar4 = *(long **)((long)__this + 0x1c0);
  if (plVar4 == (long *)0x0) goto LAB_00c62924;
  fVar9 = (float)(**(code **)(*plVar4 + 0x328))(plVar4,*(undefined8 *)(*plVar4 + 0x330));
  if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c62924;
  UnityEngine_RectTransform__get_sizeDelta(*(long *)((long)__this + 0x30),0);
  if ((*(long *)((long)__this + 0x1b8) == 0) ||
     (lVar3 = *(long *)(*(long *)((long)__this + 0x1b8) + 0x28), lVar3 == 0)) goto LAB_00c62924;
  UnityEngine_Transform__get_position(lVar3,0);
  if (fVar14 <= 0.5) {
    uVar5 = *(undefined8 *)((long)__this + 0x30);
    if (*(int *)(_UnityEngine_RectTransformUtility_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (uVar7,uVar13,uVar5,0,&uStack_68,0);
    lVar3 = *(long *)((long)__this + 0x1b0);
    if (lVar3 == 0) goto LAB_00c62924;
    fVar14 = 0.0;
    uVar2 = uStack_68;
  }
  else {
    fVar14 = (float)uVar7 / (float)iVar1;
    fVar8 = fVar8 * 0.5 + (fVar9 + 32.0 + 85.0) * 0.5 * -0.7;
    if ((-3000.0 < (float)uVar7 && fVar14 < -0.05) || (10.0 < LBFLGOOEOCE_z - fVar10)) {
      fVar14 = -250.0;
      fVar8 = 15.0 - fVar8;
LAB_00c62758:
      fVar12 = fVar12 * 0.5 + fVar14;
      *(float *)((long)__this + 0x1d8) = fVar8;
      *(float *)((long)__this + 0x1dc) = fVar12;
      *(undefined8 *)((long)__this + 0x1e0) = 0x40a0000000000000;
    }
    else {
      if ((1.05 < fVar14) || (fVar14 = -110.0, LBFLGOOEOCE_z - fVar10 < -110.0)) {
        fVar14 = -198.0;
        goto LAB_00c62758;
      }
      fVar8 = *(float *)((long)__this + 0x1e4);
      fVar10 = (float)UnityEngine_Time__get_deltaTime(0);
      fVar12 = fVar10 * 0.1;
      if (fVar10 * 0.1 < 0.0) {
        fVar12 = 0.0;
      }
      *(float *)((long)__this + 0x1e4) = fVar8 + (100.0 - fVar8) * fVar12;
      uVar5 = *(undefined8 *)((long)__this + 0x30);
      if (*(int *)(_UnityEngine_RectTransformUtility_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                (uVar7,uVar5,0,&uStack_68,0);
      fVar12 = (float)uVar13;
      *(undefined4 *)((long)__this + 0x1e0) = 0;
      *(ulong *)((long)__this + 0x1d8) = uStack_68;
    }
    lVar3 = *(long *)((long)__this + 0x1b0);
    if (lVar3 == 0) goto LAB_00c62924;
    UnityEngine_Transform__get_localPosition(lVar3,0);
    uVar7 = *(undefined8 *)((long)__this + 0x1d8);
    fVar9 = *(float *)((long)__this + 0x1e0);
    fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar8 = fVar8 * *(float *)((long)__this + 0x1e4);
    fVar10 = fVar8;
    if (1.0 < fVar8) {
      fVar10 = 1.0;
    }
    if (fVar8 < 0.0) {
      fVar10 = 0.0;
    }
    fVar14 = fVar14 + (fVar9 - fVar14) * fVar10;
    uVar2 = (ulong)(uint)(fVar12 + ((float)((ulong)uVar7 >> 0x20) - fVar12) * fVar10) << 0x20;
  }
  fVar12 = (float)(uVar2 >> 0x20);
  UnityEngine_Transform__set_localPosition(lVar3,0);
  if (*(long *)((long)__this + 0x1a8) != 0) {
    fVar10 = (float)UnityEngine_Transform__get_localPosition(*(long *)((long)__this + 0x1a8),0);
    if (*(long *)((long)__this + 0x1b0) != 0) {
      fVar8 = fVar12;
      fVar9 = fVar14;
      fVar11 = (float)UnityEngine_Transform__get_localPosition(*(long *)((long)__this + 0x1b0),0);
      if (cRam0000000001916aa3 == '\0') {
        func_0x00a67900(&System_Math_TypeInfo);
        cRam0000000001916aa3 = '\x01';
      }
      if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      fVar12 = SQRT((fVar14 - fVar9) * (fVar14 - fVar9) +
                    (fVar10 - fVar11) * (fVar10 - fVar11) + (fVar12 - fVar8) * (fVar12 - fVar8));
      if (300.0 <= fVar12) {
        return;
      }
      fVar12 = fVar12 / 200.0;
      plVar4 = *(long **)((long)__this + 0x1d0);
      if (1.0 < fVar12) {
        fVar12 = 1.0;
      }
      fVar12 = fVar12 * 0.85 + 0.15;
      *(float *)((long)__this + 500) = fVar12;
      if (plVar4 != (long *)0x0) {
        uVar15 = *(undefined4 *)((long)__this + 0x1f0);
        uVar16 = *(undefined4 *)((long)__this + 0x1ec);
        uVar17 = *(undefined4 *)((long)__this + 0x1e8);
        plVar6 = *(long **)((long)__this + 0x1c8);
        (**(code **)(*plVar4 + 0x2a8))
                  (uVar17,uVar16,uVar15,fVar12,plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x2a8))
                    (uVar17,uVar16,uVar15,fVar12,plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
          return;
        }
      }
    }
  }
LAB_00c62924:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonTiltLeft(bool value) { }   @0xb62ed4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonTiltLeft(void *__this,bool value)

{
  *(bool *)((long)__this + 0xbb) = value;
  return;
}


// ==== public void ButtonContinue() { }   @0xb607d4

/* WARNING: Possible PIC construction at 0x00c60868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c608ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c608dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c6093c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c6099c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c609d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00a7ff24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00a7ffc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60b18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00c60ad0) */
/* WARNING: Removing unreachable block (ram,0x00c60a88) */
/* WARNING: Removing unreachable block (ram,0x00c60a50) */
/* WARNING: Removing unreachable block (ram,0x00c60a18) */
/* WARNING: Removing unreachable block (ram,0x00c609d4) */
/* WARNING: Removing unreachable block (ram,0x00c609a0) */
/* WARNING: Removing unreachable block (ram,0x00c6096c) */
/* WARNING: Removing unreachable block (ram,0x00c608e0) */
/* WARNING: Removing unreachable block (ram,0x00c6086c) */
/* WARNING: Removing unreachable block (ram,0x00c60b1c) */
/* WARNING: Removing unreachable block (ram,0x00b05788) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonContinue(void *__this)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  void *unaff_x19;
  undefined *unaff_x20;
  undefined *unaff_x21;
  int *piVar14;
  undefined *unaff_x22;
  undefined *puVar15;
  undefined *unaff_x23;
  undefined *puVar16;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x30;
  float fVar17;
  byte abStack_a8 [120];
  
  if ((bRam0000000001917228 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&GUIGameplay_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001917228 = 1;
  }
  fVar17 = (float)UnityEngine_Time__get_timeScale(0);
  if (1.0 <= fVar17) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    unaff_x30 = 0xc6086c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    lVar10 = _Menu_TypeInfo;
    unaff_x19 = __this;
    unaff_x20 = &Menu_TypeInfo;
  }
  else {
    *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 10) = 0;
    UnityEngine_Time__set_timeScale(0x3f800000,0);
    UnityEngine_AudioListener__set_volume
              (*(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x14),0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      unaff_x30 = 0xc608b0;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      lVar10 = _Main_TypeInfo;
      unaff_x19 = __this;
      unaff_x20 = &Menu_TypeInfo;
      unaff_x21 = &Main_TypeInfo;
    }
    else {
      puVar15 = (undefined *)0x1916000;
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        unaff_x30 = 0xc608e0;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        lVar10 = _Main_TypeInfo;
        unaff_x19 = __this;
        unaff_x20 = &Menu_TypeInfo;
        unaff_x21 = &Main_TypeInfo;
        unaff_x22 = puVar15;
      }
      else {
        lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar10 == 0) goto LAB_00c60ba4;
        uVar11 = DAFNMLEKHAD__BMMOMBGDEKF(lVar10,0);
        if ((uVar11 & 1) != 0) {
          if ((*(long *)((long)__this + 0x20) == 0) ||
             (lVar10 = *(long *)(*(long *)((long)__this + 0x20) + 0x48), lVar10 == 0))
          goto LAB_00c60ba4;
          uVar11 = UnityEngine_AudioSource__get_isPlaying(lVar10,0);
          if ((uVar11 & 1) == 0) {
            if ((*(long *)((long)__this + 0x20) == 0) ||
               (lVar10 = *(long *)(*(long *)((long)__this + 0x20) + 0x48), lVar10 == 0))
            goto LAB_00c60ba4;
            UnityEngine_AudioSource__Play(lVar10,0);
          }
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          unaff_x30 = 0xc60940;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
          lVar10 = _Main_TypeInfo;
          unaff_x19 = __this;
          unaff_x20 = &Menu_TypeInfo;
          unaff_x21 = &Main_TypeInfo;
          unaff_x22 = puVar15;
        }
        else {
          if (cRam0000000001916e67 == '\0') {
            func_0x00a67900(&Main_TypeInfo);
            cRam0000000001916e67 = '\x01';
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            unaff_x30 = 0xc6096c;
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
            lVar10 = _Main_TypeInfo;
            unaff_x19 = __this;
            unaff_x20 = &Menu_TypeInfo;
            unaff_x21 = &Main_TypeInfo;
            unaff_x22 = puVar15;
          }
          else {
            lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
            if (lVar10 == 0) goto LAB_00c60ba4;
            uVar11 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar10,0);
            puVar16 = unaff_x23;
            if ((uVar11 & 1) != 0) {
              puVar15 = &SoundScript_TypeInfo;
              if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                unaff_x30 = 0xc609a0;
                register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                lVar10 = _SoundScript_TypeInfo;
                unaff_x19 = __this;
                unaff_x20 = &Menu_TypeInfo;
                unaff_x21 = &Main_TypeInfo;
                unaff_x22 = puVar15;
                goto SUB_00a67a30;
              }
              lVar10 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
              if (lVar10 == 0) goto LAB_00c60ba4;
              uVar11 = UnityEngine_AudioSource__get_isPlaying(lVar10,0);
              if ((uVar11 & 1) == 0) {
                puVar16 = &CarController_TypeInfo;
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  unaff_x30 = 0xc609d4;
                  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                  lVar10 = _CarController_TypeInfo;
                  unaff_x19 = __this;
                  unaff_x20 = &Menu_TypeInfo;
                  unaff_x21 = &Main_TypeInfo;
                  unaff_x22 = puVar15;
                  unaff_x23 = puVar16;
                  goto SUB_00a67a30;
                }
                if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x34) != '\0') {
                  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  SoundScript__HCEFONCADKE
                            (*(void **)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0),false);
                }
              }
            }
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              unaff_x30 = 0xc60a18;
              register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
              lVar10 = _Menu_TypeInfo;
              unaff_x19 = __this;
              unaff_x20 = &Menu_TypeInfo;
              unaff_x21 = &Main_TypeInfo;
              unaff_x22 = puVar15;
              unaff_x23 = puVar16;
            }
            else {
              lVar10 = *(long *)(_Menu_TypeInfo + 0xb8);
              if (*(char *)(lVar10 + 0xc) != '\0') goto LAB_00c60b78;
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
                lVar10 = *(long *)(_Menu_TypeInfo + 0xb8);
              }
              if (*(char *)(lVar10 + 0xb) == '\0') {
                if (*(long *)((long)__this + 0x50) == 0) goto LAB_00c60ba4;
                GUIWindow__HEGIHOAJOKK(*(long *)((long)__this + 0x50),0,0);
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  unaff_x30 = 0xc60ad0;
                  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                  lVar10 = _CarController_TypeInfo;
                  unaff_x19 = __this;
                  unaff_x20 = &Menu_TypeInfo;
                  unaff_x21 = &Main_TypeInfo;
                  unaff_x22 = &CarController_TypeInfo;
                  unaff_x23 = puVar16;
                }
                else {
                  puVar15 = (undefined *)**(undefined8 **)(_CarController_TypeInfo + 0xb8);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                  }
                  uVar11 = UnityEngine_Object__op_Inequality(puVar15,0,0);
                  if ((uVar11 & 1) != 0) {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      unaff_x30 = 0xc60b1c;
                      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                      lVar10 = _CarController_TypeInfo;
                      unaff_x19 = __this;
                      unaff_x20 = puVar15;
                      unaff_x21 = &Main_TypeInfo;
                      unaff_x22 = &CarController_TypeInfo;
                      unaff_x23 = puVar16;
                      goto SUB_00a67a30;
                    }
                    lVar10 = **(long **)(_CarController_TypeInfo + 0xb8);
                    if (lVar10 == 0) {
LAB_00c60ba4:
                    /* WARNING: Subroutine does not return */
                      il2cpp_throw_967b50();
                    }
                    if (*(char *)(lVar10 + 0x3fd) != '\0') {
                      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                        lVar10 = **(long **)(_CarController_TypeInfo + 0xb8);
                        if (lVar10 == 0) goto LAB_00c60ba4;
                      }
                      if (*(long *)(lVar10 + 0x28) == 0) goto LAB_00c60ba4;
                      uVar11 = UnityEngine_Behaviour__get_enabled(*(long *)(lVar10 + 0x28),0);
                      if ((uVar11 & 1) == 0) {
                        if (*(long *)((long)__this + 0x50) == 0) goto LAB_00c60ba4;
                        GUIWindow__JGDCBENNDFO(*(long *)((long)__this + 0x50),0,0);
                      }
                    }
                  }
LAB_00c60b78:
                  lVar10 = _Main_TypeInfo;
                  if (*(int *)(_Main_TypeInfo + 0xe0) != 0) {
                    return;
                  }
                }
              }
              else if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                unaff_x30 = 0xc60a50;
                register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                lVar10 = _Menu_TypeInfo;
                unaff_x19 = __this;
                unaff_x20 = &Menu_TypeInfo;
                unaff_x21 = &Main_TypeInfo;
                unaff_x22 = puVar15;
                unaff_x23 = puVar16;
              }
              else {
                *(undefined1 *)(lVar10 + 0xb) = 0;
                if (*(long *)((long)__this + 0x50) == 0) goto LAB_00c60ba4;
                GUIWindow__HEGIHOAJOKK(*(long *)((long)__this + 0x50),0,0);
                if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) != 0) {
                  GUIGameplay__MGNNDFEFHAH
                            (__this,*(int *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4),false);
                  goto LAB_00c60b78;
                }
                unaff_x30 = 0xc60a88;
                register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                lVar10 = _GUIGameplay_TypeInfo;
                unaff_x19 = __this;
                unaff_x20 = &GUIGameplay_TypeInfo;
                unaff_x21 = &Main_TypeInfo;
                unaff_x22 = puVar15;
                unaff_x23 = puVar16;
              }
            }
          }
        }
      }
    }
  }
SUB_00a67a30:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x24;
  *(undefined **)((long)register0x00000008 + -0x28) = unaff_x23;
  *(undefined **)((long)register0x00000008 + -0x20) = unaff_x22;
  *(undefined **)((long)register0x00000008 + -0x18) = unaff_x21;
  *(undefined **)((long)register0x00000008 + -0x10) = unaff_x20;
  *(void **)((long)register0x00000008 + -8) = unaff_x19;
  piVar14 = (int *)(lVar10 + 0xe0);
  if (*piVar14 == 0) {
    lVar8 = func_0x00a51c20();
    if (lVar8 == lRam000000000191ff18) {
      iRam000000000191ff20 = iRam000000000191ff20 + 1;
    }
    else {
      iVar13 = 0;
      do {
        iVar7 = iRam000000000191fed8;
        if (iRam000000000191fed8 == iVar13) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0x191fed8,0x10);
          if (bVar6) {
            cVar5 = ExclusiveMonitorsStatus();
            iRam000000000191fed8 = iVar13 + 1;
          }
          if (cVar5 != '\0') goto LAB_00a7fdf8;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00a7fdf8:
          bVar6 = false;
        }
      } while ((iVar7 != 2) && (iVar13 = iVar7, !bVar6));
      while (iVar7 != 0) {
        func_0x00b05724(0x191fed8,2,0xffffffff);
        do {
          iVar7 = iRam000000000191fed8;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0x191fed8,0x10);
          if (bVar6) {
            iRam000000000191fed8 = 2;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      iRam000000000191ff20 = 1;
      lRam000000000191ff18 = lVar8;
    }
    do {
      if (*piVar14 != 1) {
        ClearExclusiveLocal();
        DataMemoryBarrier(2,3);
        piVar1 = (int *)(lVar10 + 0xdc);
        goto LAB_00a7fec8;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar6) {
        *piVar14 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    DataMemoryBarrier(2,3);
    iVar13 = iRam000000000191ff20 + -1;
    if ((0 < iRam000000000191ff20) && (iRam000000000191ff20 = iVar13, iVar13 == 0)) {
      lRam000000000191ff18 = 0;
      iRam000000000191ff20 = 0;
      do {
        iVar13 = iRam000000000191fed8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(0x191fed8,0x10);
        if (bVar6) {
          iRam000000000191fed8 = 0;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 == 2) {
SUB_00b0577c:
        iRam000000000191ff20 = 0;
        lRam000000000191ff18 = 0;
        syscall(0x62,0x191fed8,0x81,1,0,0,0);
        return;
      }
    }
  }
  return;
  while( true ) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') break;
LAB_00a7fec8:
    if (*piVar1 != 1) {
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      puVar3 = (undefined8 *)(lVar10 + 0xe8);
      uVar9 = func_0x00accfa0();
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar6) {
          *puVar3 = uVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      iVar13 = iRam000000000191ff20 + -1;
      if ((0 < iRam000000000191ff20) && (iRam000000000191ff20 = iVar13, iVar13 == 0)) {
        lRam000000000191ff18 = 0;
        iRam000000000191ff20 = 0;
        do {
          iVar13 = iRam000000000191fed8;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0x191fed8,0x10);
          if (bVar6) {
            iRam000000000191fed8 = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 == 2) goto SUB_00b0577c;
      }
      *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
      lVar8 = func_0x00ae13e8(lVar10);
      if (lVar8 != 0) {
        func_0x00a819e8(lVar8,0,0,(undefined1 *)((long)register0x00000008 + -0x48));
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar6) {
          *puVar3 = 0;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      if (*(long *)((long)register0x00000008 + -0x48) != 0) {
        func_0x00a79ab8((undefined1 *)((long)register0x00000008 + -0x78),lVar10 + 0x20,0);
        uVar11 = (ulong)((long)register0x00000008 + -0x78) | 1;
        if ((*(byte *)((long)register0x00000008 + -0x78) & 1) != 0) {
          uVar11 = *(ulong *)((long)register0x00000008 + -0x68);
        }
        func_0x00ad2e28((undefined1 *)((long)register0x00000008 + -0x60),&UNK_005a3f1d,uVar11);
        if ((*(byte *)((long)register0x00000008 + -0x78) & 1) != 0) {
          func_0x016defe0(*(undefined8 *)((long)register0x00000008 + -0x68));
        }
        uVar11 = (ulong)((long)register0x00000008 + -0x60) | 1;
        if ((*(byte *)((long)register0x00000008 + -0x60) & 1) != 0) {
          uVar11 = *(ulong *)((long)register0x00000008 + -0x50);
        }
        uVar9 = func_0x00ace868(uVar11,*(undefined8 *)((long)register0x00000008 + -0x48));
        func_0x00adf278(lVar10,uVar9);
        if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto LAB_00a800d0;
        func_0x016defe0(*(undefined8 *)((long)register0x00000008 + -0x50));
        goto LAB_00a800d0;
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar6) {
          *piVar14 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_00a800cc;
    }
  }
  DataMemoryBarrier(2,3);
  iVar13 = iRam000000000191ff20 + -1;
  if ((iRam000000000191ff20 < 1) || (iRam000000000191ff20 = iVar13, iVar13 != 0)) {
LAB_00a7ff28:
    lVar8 = func_0x00accfa0();
    plVar2 = (long *)(lVar10 + 0xe8);
    do {
      lVar12 = *plVar2;
      if (lVar12 != lVar8) {
        ClearExclusiveLocal();
        bVar6 = false;
        goto LAB_00a8008c;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar6 = true;
LAB_00a8008c:
    DataMemoryBarrier(2,3);
    lVar4 = lVar8;
    if (!bVar6) {
      lVar4 = lVar12;
    }
    if (lVar4 == lVar8) {
      return;
    }
    do {
      if (*piVar14 != 1) goto LAB_00a800e4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar6) {
        *piVar14 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_00a800cc:
    do {
      DataMemoryBarrier(2,3);
LAB_00a800d0:
      if (*(int *)(lVar10 + 0xd8) == 0) {
        return;
      }
      uVar9 = func_0x00ab272c();
      func_0x00acdca4(uVar9,0);
LAB_00a800e4:
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      piVar1 = (int *)(lVar10 + 0xd8);
      while (*piVar1 == 0) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = 0;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          DataMemoryBarrier(2,3);
          func_0x00accf98(1,0);
          while (*piVar14 == 1) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar6) {
              *piVar14 = 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_00a800cc;
          }
          ClearExclusiveLocal();
          DataMemoryBarrier(2,3);
        }
      }
      ClearExclusiveLocal();
    } while( true );
  }
  lRam000000000191ff18 = 0;
  iRam000000000191ff20 = 0;
  do {
    iVar13 = iRam000000000191fed8;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x191fed8,0x10);
    if (bVar6) {
      iRam000000000191fed8 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar13 != 2) goto LAB_00a7ff28;
  goto SUB_00b0577c;
}


// ==== public void ButtonPauseHelpLeft() { }   @0xb644a0

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

void GUIGameplay__ButtonPauseHelpLeft(void *__this)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  void *__this_00;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 extraout_x1;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long *plVar16;
  long *plVar17;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 uVar18;
  long *plStack_b0;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint uStack_78;
  int iStack_74;
  
  if (0 < *(int *)((long)__this + 0x42c)) {
    if (*(long *)((long)__this + 0x440) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar9 = UnityEngine_GameObject__get_activeInHierarchy(*(long *)((long)__this + 0x440),0);
    if ((uVar9 & 1) != 0) {
      *(int *)((long)__this + 0x42c) = *(int *)((long)__this + 0x42c) + -1;
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
      plVar17 = *(long **)((long)__this + 0x3f8);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Translate_TypeInfo + 0xb8) != 0) &&
         (uVar4 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_HELP,0),
         plVar17 != (long *)0x0)) {
        (**(code **)(*plVar17 + 0x5a8))(plVar17,uVar4,*(undefined8 *)(*plVar17 + 0x5b0));
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
                lVar12 = *(long *)((long)__this + 0x410);
                if (lVar12 == 0) goto LAB_00c600b8;
                if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_00c60508;
                lVar12 = *(long *)(lVar12 + (ulong)uVar3 * 8 + 0x20);
                if ((lVar12 == 0) ||
                   (__this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8),
                   __this_00 == (void *)0x0)) goto LAB_00c600b8;
                bVar2 = DAFNMLEKHAD__BLGOKNOOEEO(__this_00,*(int *)(lVar12 + 0x10));
              } while (!bVar2);
              lVar12 = *(long *)((long)__this + 0x410);
              if (lVar12 != 0) {
                if (*(uint *)(lVar12 + 0x18) <= uVar3) {
LAB_00c60508:
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                lVar12 = *(long *)(lVar12 + (ulong)uVar3 * 8 + 0x20);
                if (lVar12 != 0) {
                  uStack_90 = *(undefined4 *)(lVar12 + 0x10);
                  *(undefined4 *)((long)__this + 0x430) = uStack_90;
                  plStack_a0 = _GUIGameplay_POFCDOMOIBH_TypeInfo;
                  uStack_98 = 0xffffffffffffffff;
                  uVar4 = System_Enum__ToString(&plStack_a0,0);
                  uVar4 = System_String__Concat(_Str_latest_completed_tutorial__,uVar4,0);
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_Main_TypeInfo);
                  }
                  Main__GEMDEAMAGPG(uVar4,0);
LAB_00c5f380:
                  if ((*(long *)((long)__this + 0x438) != 0) &&
                     (lVar12 = UnityEngine_GameObject__get_transform
                                         (*(long *)((long)__this + 0x438),0), lVar12 != 0)) {
                    plVar17 = (long *)UnityEngine_Transform__GetEnumerator(lVar12,0);
                    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_throw_967b50();
                    }
                    plStack_b0 = (long *)0x0;
                    uVar9 = uStack_88 & 0xffffffff;
                    plVar16 = (long *)0x0;
                    uVar3 = 0;
                    do {
                      lVar12 = *plVar17;
                      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
                      if (uVar13 != 0) {
                        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar15 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                            puVar5 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                            goto LAB_00c5f420;
                          }
                          uVar13 = uVar13 - 1;
                          piVar15 = piVar15 + 4;
                        } while (uVar13 != 0);
                      }
                      puVar5 = (undefined8 *)
                               func_0x00a9e6c4(plVar17,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00c5f420:
                      uVar13 = (*(code *)*puVar5)(plVar17,puVar5[1]);
                      uVar18 = (undefined4)uVar9;
                      if ((uVar13 & 1) == 0) {
                        uStack_88 = CONCAT44(uStack_88._4_4_,uVar18);
                        plVar17 = (long *)func_0x00a67a34(plVar17,_System_IDisposable_TypeInfo);
                        if (plVar17 == (long *)0x0) goto LAB_00c5f6ec;
                        lVar12 = *plVar17;
                        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
                        if (uVar9 == 0) goto LAB_00c5f6c4;
                        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        goto LAB_00c5f6ac;
                      }
                      lVar12 = *plVar17;
                      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
                      if (uVar13 != 0) {
                        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar15 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                            puVar5 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                            goto LAB_00c5f480;
                          }
                          uVar13 = uVar13 - 1;
                          piVar15 = piVar15 + 4;
                        } while (uVar13 != 0);
                      }
                      puVar5 = (undefined8 *)
                               func_0x00a9e6c4(plVar17,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00c5f480:
                      plVar6 = (long *)(*(code *)*puVar5)(plVar17,puVar5[1]);
                      if (plVar6 == (long *)0x0) {
LAB_00c60518:
                        uStack_88 = CONCAT44(uStack_88._4_4_,uVar18);
                    /* WARNING: Subroutine does not return */
                        il2cpp_throw_967b50();
                      }
                      if ((*(byte *)(*plVar6 + 0x130) <
                           *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
                         (*(long *)(*(long *)(*plVar6 + 200) +
                                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 +
                                   -8) != _UnityEngine_Transform_TypeInfo)) {
                        uStack_88 = CONCAT44(uStack_88._4_4_,uVar18);
                        func_0x00a67eec(plVar6);
                        goto LAB_00c60518;
                      }
                      uVar4 = UnityEngine_Object__get_name(plVar6,0);
                      _uStack_78 = CONCAT44(iStack_74,uVar1);
                      uVar7 = System_Int32__ToString(&uStack_78,0);
                      uVar7 = System_String__Concat(_Str_point_,uVar7,0);
                      uVar13 = System_String__op_Equality(uVar4,uVar7,0);
                      if ((uVar13 & 1) == 0) {
                        uVar4 = UnityEngine_Object__get_name(plVar6,0);
                        uVar13 = System_String__op_Equality(uVar4,_Str_point_marker,0);
                        if ((uVar13 & 1) != 0) {
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
                        plVar16 = plStack_a0;
                      }
                      uVar4 = UnityEngine_Object__get_name(plVar6,0);
                      uStack_78 = uVar3;
                      uVar7 = System_Int32__ToString(&uStack_78,0);
                      uVar7 = System_String__Concat(_Str_point_,uVar7,0);
                      uVar13 = System_String__op_Equality(uVar4,uVar7,0);
                      if ((uVar13 & 1) != 0) {
                        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                                  (plVar6,&plStack_a0,
                                   _Method_UnityEngine_Component_GetComponent_Image___);
                        plVar6 = plStack_a0;
                        if (plStack_a0 == (long *)0x0) {
                          uStack_88 = CONCAT44(uStack_88._4_4_,uVar18);
                    /* WARNING: Subroutine does not return */
                          il2cpp_throw_967b50();
                        }
                        uVar9 = (**(code **)(*plStack_a0 + 0x298))
                                          (plStack_a0,*(undefined8 *)(*plStack_a0 + 0x2a0));
                        uStack_88 = CONCAT44(in_s1,(undefined4)uStack_88);
                        uStack_80 = CONCAT44(*(undefined4 *)
                                              (&UNK_0059c3a0 +
                                              (ulong)(*(int *)((long)__this + 0x430) < (int)uVar3) *
                                              4),in_s2);
                        lVar12 = *plVar6;
                        (**(code **)(lVar12 + 0x2a8))(plVar6,*(undefined8 *)(lVar12 + 0x2b0));
                      }
                      if (*(long *)((long)__this + 0x410) == 0) {
                        uStack_88 = CONCAT44(uStack_88._4_4_,(int)uVar9);
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
    uVar9 = uVar9 - 1;
    piVar15 = piVar15 + 4;
    if (uVar9 == 0) break;
LAB_00c5f6ac:
    if (*(long *)(piVar15 + -2) == _System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_00c5f6e0;
    }
  }
LAB_00c5f6c4:
  puVar5 = (undefined8 *)func_0x00a9e6c4(plVar17,_System_IDisposable_TypeInfo,0);
LAB_00c5f6e0:
  (*(code *)*puVar5)(plVar17,puVar5[1]);
LAB_00c5f6ec:
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(plVar16,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Inequality(plStack_b0,0,0);
    if ((uVar9 & 1) != 0) {
      if ((plVar16 == (long *)0x0) ||
         (uVar4 = UnityEngine_RectTransform__get_anchoredPosition(plVar16,0),
         plStack_b0 == (long *)0x0)) goto LAB_00c600b8;
      UnityEngine_RectTransform__get_anchoredPosition(plStack_b0,0);
      UnityEngine_RectTransform__set_anchoredPosition(uVar4,plStack_b0,0);
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
                  lVar12 = *(long *)((long)__this + 0x480);
                  uVar4 = 0;
                  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_BridgePHP_TypeInfo,0);
                    uVar4 = extraout_x1;
                  }
                  iVar11 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
                  if (iVar11 == 0xc) {
                    bVar2 = false;
                  }
                  else {
                    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30(_BridgePHP_TypeInfo,uVar4);
                      iVar11 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
                    }
                    bVar2 = iVar11 != 0xd;
                  }
                  if (lVar12 != 0) {
                    UnityEngine_GameObject__SetActive(lVar12,bVar2,0);
                    lVar12 = *(long *)((long)__this + 0x410);
                    if (lVar12 != 0) {
                      uVar9 = 0;
                      uVar4 = 0;
                      plVar16 = (long *)0x0;
                      plVar17 = (long *)((long)__this + 0x410);
                      uVar13 = (ulong)uVar1;
                      do {
                        if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar9) {
                          iStack_74 = uVar1 + 1;
                          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          lVar12 = **(long **)(_Translate_TypeInfo + 0xb8);
                          uVar4 = System_Int32__ToString(&iStack_74,0);
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
                            lVar14 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                            if (lVar14 == 0) break;
                            uVar9 = DAFNMLEKHAD__DPJPKMHLGMO(lVar14,0);
                            puVar5 = (undefined8 *)&Str__A;
                            if ((uVar9 & 1) == 0) {
                              puVar5 = (undefined8 *)&Str__B;
                            }
                            uVar4 = System_String__Concat(_Str_TUTORIAL_,uVar4,*puVar5,0);
                            if ((lVar12 == 0) ||
                               (uVar4 = Translate__JJJNIPAKLJF(lVar12,uVar4,0),
                               plVar16 == (long *)0x0)) break;
                            lVar12 = *plVar16;
                            plVar17 = plVar16;
LAB_00c602cc:
                            (**(code **)(lVar12 + 0x5a8))
                                      (plVar17,uVar4,*(undefined8 *)(lVar12 + 0x5b0));
                          }
                          else {
                            uVar4 = System_String__Concat(_Str_TUTORIAL_,uVar4,0);
                            if ((lVar12 == 0) ||
                               (uVar4 = Translate__JJJNIPAKLJF(lVar12,uVar4,0),
                               plVar16 == (long *)0x0)) break;
                            (**(code **)(*plVar16 + 0x5a8))
                                      (plVar16,uVar4,*(undefined8 *)(*plVar16 + 0x5b0));
                            if (uVar1 == 4) {
                              if ((*(long *)((long)__this + 0x420) != 0) &&
                                 (lVar12 = UnityEngine_Component__get_gameObject
                                                     (*(long *)((long)__this + 0x420),0),
                                 lVar12 != 0)) {
                                UnityEngine_GameObject__SetActive(lVar12,0,0);
                                plVar17 = *(long **)((long)__this + 0x420);
                                if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                                  func_0x00a67a30();
                                }
                                if ((**(long **)(_Translate_TypeInfo + 0xb8) != 0) &&
                                   (uVar4 = Translate__JJJNIPAKLJF
                                                      (**(long **)(_Translate_TypeInfo + 0xb8),
                                                       _Str_TUTORIAL_5_TAP,0),
                                   plVar17 != (long *)0x0)) {
                                  lVar12 = *plVar17;
                                  goto LAB_00c602cc;
                                }
                              }
                              break;
                            }
                          }
                          lVar12 = (**(code **)(*plVar16 + 0x598))
                                             (plVar16,*(undefined8 *)(*plVar16 + 0x5a0));
                          uVar4 = System_Environment__get_NewLine(0);
                          if (lVar12 == 0) break;
                          uVar4 = System_String__Replace(lVar12,_Str__,uVar4,0);
                          (**(code **)(*plVar16 + 0x5a8))
                                    (plVar16,uVar4,*(undefined8 *)(*plVar16 + 0x5b0));
                          lVar12 = *(long *)((long)__this + 0x408);
                          uVar4 = func_0x00a67b44(_UnityEngine_RectOffset_TypeInfo);
                          if ((int)uVar1 < 3) {
                            uVar7 = 0x87;
                            uVar10 = 0x6e;
                          }
                          else {
                            uVar7 = 0x6e;
                            uVar10 = 0x46;
                          }
                          UnityEngine_RectOffset___ctor(uVar4,0,0,uVar7,uVar10,0);
                          if (lVar12 == 0) break;
                          UnityEngine_UI_LayoutGroup__set_padding(lVar12,uVar4,0);
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
                          if (lVar12 == 0) break;
                          if (*(int *)(lVar12 + 0x94) == 10) {
LAB_00c60498:
                            if ((uVar1 & 0xfffffffe) == 2) {
                              UnityEngine_UI_Text__set_fontSize(plVar16,0x3e,0);
                            }
                            UnityEngine_UI_Text__set_lineSpacing(0x3f99999a,plVar16,0);
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
                            if (lVar12 == 0) break;
                            if (*(int *)(lVar12 + 0x94) == 0xb) goto LAB_00c60498;
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
                            if (lVar12 == 0) break;
                            if (*(int *)(lVar12 + 0x94) == 0xc) goto LAB_00c60498;
                          }
                          if (*(long *)((long)__this + 0x78) != 0) {
                            GUIWindow__HEGIHOAJOKK(*(long *)((long)__this + 0x78),0,0);
                            return;
                          }
                          break;
                        }
                        if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_00c60508;
                        lVar12 = *(long *)(lVar12 + uVar9 * 8 + 0x20);
                        if (lVar12 != 0) {
                          uVar7 = *(undefined8 *)(lVar12 + 0x18);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                          if ((uVar8 & 1) != 0) {
                            lVar12 = *plVar17;
                            if (lVar12 == 0) break;
                            if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_00c60508;
                            lVar12 = *(long *)(lVar12 + uVar9 * 8 + 0x20);
                            if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0))
                            break;
                            UnityEngine_GameObject__SetActive(lVar12,uVar9 == uVar13,0);
                          }
                          lVar12 = *plVar17;
                          if (lVar12 == 0) break;
                          if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_00c60508;
                          lVar12 = *(long *)(lVar12 + uVar9 * 8 + 0x20);
                          if (lVar12 == 0) break;
                          uVar7 = *(undefined8 *)(lVar12 + 0x40);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                          lVar12 = *plVar17;
                          if ((uVar9 == uVar13) && ((uVar8 & 1) != 0)) {
                            if (lVar12 == 0) break;
                            if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_00c60508;
                            lVar14 = *(long *)(lVar12 + uVar13 * 8 + 0x20);
                            if (lVar14 == 0) break;
                            plVar16 = *(long **)(lVar14 + 0x40);
                          }
                          else if (lVar12 == 0) break;
                          if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_00c60508;
                          lVar12 = *(long *)(lVar12 + uVar9 * 8 + 0x20);
                          if (lVar12 == 0) break;
                          uVar7 = *(undefined8 *)(lVar12 + 0x20);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                          if ((uVar8 & 1) != 0) {
                            lVar12 = *plVar17;
                            if (lVar12 == 0) break;
                            if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_00c60508;
                            lVar12 = *(long *)(lVar12 + uVar9 * 8 + 0x20);
                            if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x20), lVar12 == 0))
                            break;
                            UnityEngine_GameObject__SetActive(lVar12,0,0);
                          }
                          lVar12 = *plVar17;
                          if (lVar12 == 0) break;
                          if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_00c60508;
                          lVar12 = *(long *)(lVar12 + uVar9 * 8 + 0x20);
                          if (lVar12 == 0) break;
                          uVar7 = *(undefined8 *)(lVar12 + 0x28);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                          if ((uVar8 & 1) != 0) {
                            lVar12 = *plVar17;
                            if (lVar12 == 0) break;
                            if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_00c60508;
                            lVar12 = *(long *)(lVar12 + uVar9 * 8 + 0x20);
                            if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x28), lVar12 == 0))
                            break;
                            UnityEngine_GameObject__SetActive(lVar12,0,0);
                          }
                          lVar12 = *plVar17;
                          if (lVar12 == 0) break;
                          if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_00c60508;
                          lVar12 = *(long *)(lVar12 + uVar9 * 8 + 0x20);
                          if (lVar12 == 0) break;
                          uVar7 = *(undefined8 *)(lVar12 + 0x30);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                          if ((uVar8 & 1) != 0) {
                            lVar12 = *plVar17;
                            if (lVar12 == 0) break;
                            if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_00c60508;
                            lVar12 = *(long *)(lVar12 + uVar9 * 8 + 0x20);
                            if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x30), lVar12 == 0))
                            break;
                            UnityEngine_GameObject__SetActive(lVar12,0,0);
                          }
                          lVar12 = *plVar17;
                          if (lVar12 == 0) break;
                          if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_00c60508;
                          lVar12 = *(long *)(lVar12 + uVar9 * 8 + 0x20);
                          if (lVar12 == 0) break;
                          uVar7 = *(undefined8 *)(lVar12 + 0x38);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                          if ((uVar8 & 1) != 0) {
                            lVar12 = *plVar17;
                            if (lVar12 == 0) break;
                            if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_00c60508;
                            lVar12 = *(long *)(lVar12 + uVar9 * 8 + 0x20);
                            if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x38), lVar12 == 0))
                            break;
                            UnityEngine_GameObject__SetActive(lVar12,0,0);
                          }
                          if (uVar1 == 3) {
                            lVar12 = *(long *)((long)__this + 0x418);
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
                            lVar14 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                            if ((lVar14 == 0) ||
                               (uVar3 = DAFNMLEKHAD__DPJPKMHLGMO(lVar14,0), lVar12 == 0)) break;
                            UnityEngine_GameObject__SetActive(lVar12,uVar3 & 1,0);
                          }
                          if (uVar9 == uVar13) {
                            lVar12 = *plVar17;
                            if (lVar12 == 0) break;
                            if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_00c60508;
                            lVar12 = *(long *)(lVar12 + uVar13 * 8 + 0x20);
                            if (lVar12 == 0) break;
                            lVar12 = *(long *)(lVar12 + 0x50);
                            uStack_78 = 0;
                            if (lVar12 == 0) break;
                            uVar3 = *(uint *)(lVar12 + 0x18);
                            if (0 < (int)uVar3) {
                              do {
                                if (uVar3 <= uStack_78) goto LAB_00c60508;
                                lVar14 = *(long *)(lVar12 + (long)(int)uStack_78 * 8 + 0x20);
                                if (lVar14 == 0) goto LAB_00c600b8;
                                UnityEngine_Transform__SetParent
                                          (lVar14,*(undefined8 *)((long)__this + 0x28),0);
                                uStack_78 = uStack_78 + 1;
                                uVar3 = *(uint *)(lVar12 + 0x18);
                              } while ((int)uStack_78 < (int)uVar3);
                            }
                            if (*(long *)((long)__this + 0x488) == 0) break;
                            UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x488),0,0);
                            lVar12 = *plVar17;
                            if (lVar12 == 0) break;
                            if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_00c60508;
                            lVar12 = *(long *)(lVar12 + uVar13 * 8 + 0x20);
                            if (lVar12 == 0) break;
                            uVar7 = *(undefined8 *)(lVar12 + 0x28);
                            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                            }
                            uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                            if ((uVar8 & 1) != 0) {
                              lVar12 = *plVar17;
                              if (lVar12 == 0) break;
                              if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_00c60508;
                              lVar12 = *(long *)(lVar12 + uVar13 * 8 + 0x20);
                              if (lVar12 == 0) break;
                              uVar7 = *(undefined8 *)(lVar12 + 0x18);
                              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                              if ((uVar8 & 1) != 0) {
                                if (*(long *)((long)__this + 0x488) == 0) break;
                                lVar12 = UnityEngine_GameObject__get_transform
                                                   (*(long *)((long)__this + 0x488),0);
                                lVar14 = *plVar17;
                                if (lVar14 == 0) break;
                                if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_00c60508;
                                lVar14 = *(long *)(lVar14 + uVar13 * 8 + 0x20);
                                if (((lVar14 == 0) ||
                                    (lVar14 = *(long *)(lVar14 + 0x18), lVar14 == 0)) ||
                                   (uVar7 = UnityEngine_GameObject__get_transform(lVar14,0),
                                   lVar12 == 0)) break;
                                UnityEngine_Transform__set_parent(lVar12,uVar7,0);
                              }
                            }
                            if (*(long *)((long)__this + 0x490) == 0) break;
                            UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x490),0,0);
                            lVar12 = *plVar17;
                            if (lVar12 == 0) break;
                            if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_00c60508;
                            lVar12 = *(long *)(lVar12 + uVar13 * 8 + 0x20);
                            if (lVar12 == 0) break;
                            uVar7 = *(undefined8 *)(lVar12 + 0x30);
                            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                            }
                            uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                            if ((uVar8 & 1) != 0) {
                              lVar12 = *plVar17;
                              if (lVar12 == 0) break;
                              if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_00c60508;
                              lVar12 = *(long *)(lVar12 + uVar13 * 8 + 0x20);
                              if (lVar12 == 0) break;
                              uVar7 = *(undefined8 *)(lVar12 + 0x18);
                              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                              if ((uVar8 & 1) != 0) {
                                if (*(long *)((long)__this + 0x490) == 0) break;
                                lVar12 = UnityEngine_GameObject__get_transform
                                                   (*(long *)((long)__this + 0x490),0);
                                lVar14 = *plVar17;
                                if (lVar14 == 0) break;
                                if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_00c60508;
                                lVar14 = *(long *)(lVar14 + uVar13 * 8 + 0x20);
                                if (((lVar14 == 0) ||
                                    (lVar14 = *(long *)(lVar14 + 0x18), lVar14 == 0)) ||
                                   (uVar7 = UnityEngine_GameObject__get_transform(lVar14,0),
                                   lVar12 == 0)) break;
                                UnityEngine_Transform__set_parent(lVar12,uVar7,0);
                              }
                            }
                            if (*(long *)((long)__this + 0x498) == 0) break;
                            UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x498),0,0);
                            lVar12 = *plVar17;
                            if (lVar12 == 0) break;
                            if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_00c60508;
                            lVar12 = *(long *)(lVar12 + uVar13 * 8 + 0x20);
                            if (lVar12 == 0) break;
                            uVar7 = *(undefined8 *)(lVar12 + 0x38);
                            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                            }
                            uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                            if ((uVar8 & 1) != 0) {
                              lVar12 = *plVar17;
                              if (lVar12 == 0) break;
                              if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_00c60508;
                              lVar12 = *(long *)(lVar12 + uVar13 * 8 + 0x20);
                              if (lVar12 == 0) break;
                              uVar7 = *(undefined8 *)(lVar12 + 0x18);
                              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                              if ((uVar8 & 1) != 0) {
                                if (*(long *)((long)__this + 0x498) == 0) break;
                                lVar12 = UnityEngine_GameObject__get_transform
                                                   (*(long *)((long)__this + 0x498),0);
                                lVar14 = *plVar17;
                                if (lVar14 == 0) break;
                                if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_00c60508;
                                lVar14 = *(long *)(lVar14 + uVar13 * 8 + 0x20);
                                if (((lVar14 == 0) ||
                                    (lVar14 = *(long *)(lVar14 + 0x18), lVar14 == 0)) ||
                                   (uVar7 = UnityEngine_GameObject__get_transform(lVar14,0),
                                   lVar12 == 0)) break;
                                UnityEngine_Transform__set_parent(lVar12,uVar7,0);
                              }
                            }
                          }
                          lVar12 = *plVar17;
                          if (lVar12 == 0) break;
                          if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_00c60508;
                          lVar12 = *(long *)(lVar12 + uVar9 * 8 + 0x20);
                          if (lVar12 == 0) break;
                          uVar7 = *(undefined8 *)(lVar12 + 0x48);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                          if ((uVar8 & 1) != 0) {
                            lVar12 = *plVar17;
                            if (lVar12 == 0) break;
                            if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_00c60508;
                            lVar12 = *(long *)(lVar12 + uVar9 * 8 + 0x20);
                            if (lVar12 == 0) break;
                            if (uVar9 == uVar13) {
                              if (*(long *)(lVar12 + 0x48) == 0) break;
                              UnityEngine_GameObject__SetActive(*(long *)(lVar12 + 0x48),1,0);
                              lVar12 = *plVar17;
                              if (lVar12 == 0) break;
                              if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_00c60508;
                              lVar12 = *(long *)(lVar12 + uVar13 * 8 + 0x20);
                              if (lVar12 == 0) break;
                              uVar4 = *(undefined8 *)(lVar12 + 0x48);
                            }
                            else {
                              uVar7 = *(undefined8 *)(lVar12 + 0x48);
                              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              uVar8 = UnityEngine_Object__op_Inequality(uVar4,uVar7,0);
                              if ((uVar8 & 1) != 0) {
                                lVar12 = *plVar17;
                                if (lVar12 == 0) break;
                                if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_00c60508;
                                lVar12 = *(long *)(lVar12 + uVar9 * 8 + 0x20);
                                if ((lVar12 == 0) ||
                                   (lVar12 = *(long *)(lVar12 + 0x48), lVar12 == 0)) break;
                                UnityEngine_GameObject__SetActive(lVar12,0,0);
                              }
                            }
                          }
                        }
                        lVar12 = *plVar17;
                        uVar9 = uVar9 + 1;
                      } while (lVar12 != 0);
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


// ==== public void ButtonToGarage() { }   @0xb61db4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonToGarage(void *__this)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  void *__this_00;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 auStack_28 [2];
  
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
  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar4 != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar4 == 0) goto LAB_00c61fec;
    }
    if (*(int *)(lVar4 + 0x10) == -1) {
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
      uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c61fec;
        bVar1 = Menu__CLJDAMIIAKE((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
        if (bVar1) goto LAB_00c61f14;
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      __this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (__this_00 == (void *)0x0) goto LAB_00c61fec;
      bVar1 = Level__get_IsEvent(__this_00);
      if (bVar1) goto LAB_00c61f14;
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if (lVar4 == 0) {
LAB_00c61fec:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*(int *)(lVar4 + 0x10) == -1) {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar4 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x20);
      if (lVar4 == 0) goto LAB_00c61fec;
      uVar3 = UnityEngine_AudioSource__get_isPlaying(lVar4,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar4 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x20);
        if (lVar4 == 0) goto LAB_00c61fec;
        UnityEngine_AudioSource__Stop(lVar4,0);
      }
    }
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = _Str_garage;
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
  iVar2 = UnityEngine_SceneManagement_Scene__get_buildIndex(auStack_28,0);
  if (iVar2 == 0) {
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar4 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
    if (lVar4 == 0) goto LAB_00c5e61c;
    uVar3 = UnityEngine_AudioSource__get_isPlaying(lVar4,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar4 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
      if (lVar4 == 0) goto LAB_00c5e61c;
      UnityEngine_AudioSource__Stop(lVar4,0);
    }
  }
  else {
    if (iVar2 < 1) goto LAB_00c5e5f0;
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar4 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x70);
      if (lVar4 == 0) goto LAB_00c5e61c;
      UnityEngine_AudioSource__Pause(lVar4,0);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x48), lVar4 == 0))
      goto LAB_00c5e61c;
      UnityEngine_AudioSource__Stop(lVar4,0);
    }
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar4 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
    if (lVar4 == 0) {
LAB_00c5e61c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar3 = UnityEngine_AudioSource__get_isPlaying(lVar4,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      auStack_28[0] = UnityEngine_SceneManagement_SceneManager__GetActiveScene(0);
      uVar6 = UnityEngine_SceneManagement_Scene__get_name(auStack_28,0);
      uVar3 = System_String__op_Inequality(uVar6,uVar5,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar4 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
        if (lVar4 == 0) goto LAB_00c5e61c;
        UnityEngine_AudioSource__Stop(lVar4,0);
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
  UnityEngine_SceneManagement_SceneManager__LoadScene(uVar5,0);
  return;
}


// ==== private void LFOIDHBMEMK() { }   @0xb64a60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__LFOIDHBMEMK(void *__this)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  int iStack_54;
  
  if ((bRam0000000001917235 & 1) == 0) {
    func_0x00a67900(&CPFPFGOIDDO_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str___);
    func_0x00a67900(&Str_SILVER);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_DAMAGE);
    func_0x00a67900(&Str__NAME);
    func_0x00a67900(&Str_ShowEncyclopediaItem__);
    func_0x00a67900(&Str_CLAIM);
    func_0x00a67900(&Str__DESC);
    bRam0000000001917235 = 1;
  }
  iStack_54 = 0;
  if (*(char *)((long)__this + 0x51c) == '\0') {
    return;
  }
  *(undefined1 *)((long)__this + 0x51d) = 1;
  uStack_70 = _CPFPFGOIDDO_TypeInfo;
  uStack_68 = 0xffffffffffffffff;
  uStack_60 = *(undefined4 *)((long)__this + 0x500);
  uVar1 = System_Enum__ToString(&uStack_70,0);
  uVar1 = System_String__Concat(_Str_ShowEncyclopediaItem__,uVar1,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0);
  lVar2 = Encyclopedia__EILIOBHFJNB(*(undefined4 *)((long)__this + 0x500),0);
  plVar9 = *(long **)((long)__this + 0x4a8);
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Translate_TypeInfo);
  }
  uStack_88 = _CPFPFGOIDDO_TypeInfo;
  lVar10 = **(long **)(_Translate_TypeInfo + 0xb8);
  uStack_80 = 0xffffffffffffffff;
  uStack_78 = *(undefined4 *)((long)__this + 0x500);
  lVar3 = System_Enum__ToString(&uStack_88,0);
  if (lVar3 == 0) goto LAB_00c65224;
  uVar1 = System_String__ToUpper(lVar3,0);
  uVar1 = System_String__Concat(uVar1,_Str__NAME,0);
  if ((lVar10 == 0) || (uVar1 = Translate__JJJNIPAKLJF(lVar10,uVar1,0), plVar9 == (long *)0x0))
  goto LAB_00c65224;
  (**(code **)(*plVar9 + 0x5a8))(plVar9,uVar1,*(undefined8 *)(*plVar9 + 0x5b0));
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
    lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar3 == 0) goto LAB_00c65224;
    DAFNMLEKHAD__CHGBPDAONOH(lVar3,*(undefined4 *)((long)__this + 0x500),1,0);
    if (*(long *)((long)__this + 0x4b0) == 0) goto LAB_00c65224;
    UnityEngine_UI_Image__set_sprite
              (*(long *)((long)__this + 0x4b0),*(undefined8 *)(lVar2 + 0x30),0);
    plVar9 = *(long **)((long)__this + 0x4b8);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c65224;
    uVar1 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_DAMAGE,0);
    uVar4 = System_Int32__ToString(lVar2 + 0x14,0);
    uVar1 = System_String__Concat(uVar1,_Str___,uVar4,0);
    if (plVar9 == (long *)0x0) goto LAB_00c65224;
    (**(code **)(*plVar9 + 0x5a8))(plVar9,uVar1,*(undefined8 *)(*plVar9 + 0x5b0));
    if (0 < *(int *)(lVar2 + 0x18)) {
      plVar9 = *(long **)((long)__this + 0x4b8);
      lVar3 = func_0x00a679a0(_string___TypeInfo,5);
      if ((plVar9 == (long *)0x0) ||
         (uVar1 = (**(code **)(*plVar9 + 0x598))(plVar9,*(undefined8 *)(*plVar9 + 0x5a0)),
         lVar3 == 0)) goto LAB_00c65224;
      if (*(int *)(lVar3 + 0x18) == 0) {
LAB_00c65228:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      *(undefined8 *)(lVar3 + 0x20) = uVar1;
      uVar1 = System_Environment__get_NewLine(0);
      if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_00c65228;
      *(undefined8 *)(lVar3 + 0x28) = uVar1;
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c65224;
      uVar1 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_SILVER,0);
      if ((*(uint *)(lVar3 + 0x18) < 3) ||
         (*(undefined8 *)(lVar3 + 0x30) = uVar1, *(uint *)(lVar3 + 0x18) == 3)) goto LAB_00c65228;
      *(undefined8 *)(lVar3 + 0x38) = _Str___;
      uVar1 = System_Int32__ToString((int *)(lVar2 + 0x18),0);
      if (*(uint *)(lVar3 + 0x18) < 5) goto LAB_00c65228;
      *(undefined8 *)(lVar3 + 0x40) = uVar1;
      uVar1 = System_String__Concat(lVar3,0);
      (**(code **)(*plVar9 + 0x5a8))(plVar9,uVar1,*(undefined8 *)(*plVar9 + 0x5b0));
    }
    plVar9 = *(long **)((long)__this + 0x4b8);
    if (plVar9 == (long *)0x0) goto LAB_00c65224;
    uVar1 = (**(code **)(*plVar9 + 0x598))(plVar9,*(undefined8 *)(*plVar9 + 0x5a0));
    uVar4 = System_Environment__get_NewLine(0);
    uVar5 = System_Environment__get_NewLine(0);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Translate_TypeInfo);
    }
    uStack_70 = _CPFPFGOIDDO_TypeInfo;
    lVar3 = **(long **)(_Translate_TypeInfo + 0xb8);
    uStack_68 = 0xffffffffffffffff;
    uStack_60 = *(undefined4 *)((long)__this + 0x500);
    lVar2 = System_Enum__ToString(&uStack_70,0);
    if (lVar2 == 0) goto LAB_00c65224;
    uVar6 = System_String__ToUpper(lVar2,0);
    uVar6 = System_String__Concat(uVar6,_Str__DESC,0);
    if (lVar3 == 0) goto LAB_00c65224;
    uVar6 = Translate__JJJNIPAKLJF(lVar3,uVar6,0);
    uVar1 = System_String__Concat(uVar1,uVar4,uVar5,uVar6,0);
    (**(code **)(*plVar9 + 0x5a8))(plVar9,uVar1,*(undefined8 *)(*plVar9 + 0x5b0));
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c65224;
    plVar9 = *(long **)((long)__this + 0x4c8);
    uVar1 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_CLAIM,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    uVar4 = System_Int32__ToString(*(long *)(_Main_TypeInfo + 0xb8) + 0x4c,0);
    uVar1 = System_String__Concat(uVar1,_Str__,uVar4,0);
    if (plVar9 == (long *)0x0) goto LAB_00c65224;
    (**(code **)(*plVar9 + 0x5a8))(plVar9,uVar1,*(undefined8 *)(*plVar9 + 0x5b0));
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar1,0,0);
    if ((uVar7 & 1) == 0) {
LAB_00c650ac:
      lVar2 = *(long *)((long)__this + 0x4c0);
LAB_00c650b4:
      iVar8 = 0;
      uVar11 = 0;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c65224;
      uVar1 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar1,0,0);
      if ((uVar7 & 1) == 0) goto LAB_00c650ac;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38) == 0)) goto LAB_00c65224;
      uVar7 = AdvController__HNDMJBICLJF();
      lVar2 = *(long *)((long)__this + 0x4c0);
      if ((uVar7 & 1) == 0) goto LAB_00c650b4;
      iVar8 = 1;
      uVar11 = 0xc38e0000;
    }
    if (lVar2 == 0) goto LAB_00c65224;
    UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
    UnityEngine_RectTransform__set_anchoredPosition(uVar11,lVar2,0);
    if (*(long *)((long)__this + 0x4c0) == 0) goto LAB_00c65224;
    uVar11 = 0x43d20000;
    if (iVar8 == 0) {
      uVar11 = 0x44020000;
    }
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors(uVar11,*(long *)((long)__this + 0x4c0),0,0)
    ;
    if (*(long *)((long)__this + 0x4d8) == 0) goto LAB_00c65224;
    UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x4d8),iVar8,0);
    if (iVar8 != 0) {
      plVar9 = *(long **)((long)__this + 0x4e0);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c65224;
      uVar1 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_CLAIM,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      iStack_54 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x4c) << 1;
      uVar4 = System_Int32__ToString(&iStack_54,0);
      uVar1 = System_String__Concat(uVar1,_Str__,uVar4,0);
      if (plVar9 == (long *)0x0) goto LAB_00c65224;
      (**(code **)(*plVar9 + 0x5a8))(plVar9,uVar1,*(undefined8 *)(*plVar9 + 0x5b0));
    }
  }
  GUIGameplay__ButtonPause(__this,1);
  uVar11 = UnityEngine_Time__get_realtimeSinceStartup(0);
  *(undefined4 *)((long)__this + 0x4fc) = uVar11;
  if ((*(long *)((long)__this + 0x4f0) != 0) &&
     (lVar2 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x4f0),0), lVar2 != 0))
  {
    UnityEngine_GameObject__SetActive(lVar2,0,0);
    if (*(long *)((long)__this + 0x88) != 0) {
      GUIWindow__HEGIHOAJOKK(*(long *)((long)__this + 0x88),0,0);
      return;
    }
  }
LAB_00c65224:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public bool NNOEOMKNGJL(CPFPFGOIDDO BAMPGHJACCL) { }   @0xb6656c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GUIGameplay__NNOEOMKNGJL(void *__this,int BAMPGHJACCL)

{
  long lVar1;
  float in_s2;
  int iVar2;
  
  if ((bRam0000000001917238 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    bRam0000000001917238 = 1;
  }
  lVar1 = Encyclopedia__EILIOBHFJNB(BAMPGHJACCL,0);
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CarController_TypeInfo);
  }
  if ((((lVar1 == 0) || (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x34) == '\0')) ||
      (*(int *)(lVar1 + 0x3c) != 0)) || (*(char *)(lVar1 + 0x38) != '\0')) {
    return false;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CarController_TypeInfo);
  }
  lVar1 = **(long **)(_CarController_TypeInfo + 0xb8);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x38) != 0)) {
    iVar2 = *(int *)(lVar1 + 0x408);
    UnityEngine_Transform__get_position(*(long *)(lVar1 + 0x38),0);
    if ((float)iVar2 - in_s2 <= 50.0) {
      return false;
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) != 0) {
      return *(char *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x414) == '\0';
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonChangeMusic() { }   @0xb66e4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonChangeMusic(void *__this)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float in_s2;
  float fVar8;
  float in_s3;
  float fVar9;
  
  if ((bRam000000000191723c & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191723c = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    Menu__CBHHIGMKCJC(**(long **)(_Menu_TypeInfo + 0xb8),0);
  }
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
    if ((lVar3 != 0) && (uVar5 = DAFNMLEKHAD__BMMOMBGDEKF(lVar3,0), lVar2 != 0)) {
      lVar3 = 0x370;
      if ((uVar5 & 1) == 0) {
        lVar3 = 0x378;
      }
      UnityEngine_UI_Image__set_sprite(lVar2,*(undefined8 *)((long)__this + lVar3),0);
      if (*(long *)((long)__this + 0x380) != 0) {
        plVar4 = (long *)UnityEngine_UI_Selectable__get_image(*(long *)((long)__this + 0x380),0);
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
        if ((lVar2 != 0) && (uVar5 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar2,0), plVar4 != (long *)0x0)) {
          lVar2 = 0x388;
          if ((uVar5 & 1) == 0) {
            lVar2 = 0x390;
          }
          lVar2 = *(long *)((long)__this + lVar2);
          if ((bRam000000000191db6f & 1) == 0) {
            func_0x00a67900(&UnityEngine_Object_TypeInfo,lVar2,0);
            bRam000000000191db6f = 1;
          }
          lVar3 = plVar4[0x1b];
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Inequality(lVar3,0,0);
          if ((uVar5 & 1) == 0) {
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Inequality(lVar2,0,0);
            if ((uVar5 & 1) == 0) {
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
              *(bool *)(plVar4 + 7) = in_s2 * in_s2 + in_s3 * in_s3 < 9.9999994e-11;
              uVar6 = UnityEngine_Sprite__get_texture(lVar2,0);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_UnityEngine_Object_TypeInfo);
              }
              uVar7 = 0;
LAB_01550934:
              bVar1 = UnityEngine_Object__op_Equality(uVar6,uVar7,0);
              *(byte *)((long)plVar4 + 0x39) = bVar1 & 1;
              plVar4[0x1b] = lVar2;
              UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(plVar4);
              (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
              UnityEngine_UI_Image__TrackSprite(plVar4);
              return;
            }
          }
          else {
            lVar3 = plVar4[0x1b];
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Inequality(lVar3,lVar2,0);
            if ((uVar5 & 1) == 0) {
              return;
            }
            if (plVar4[0x1b] != 0) {
              UnityEngine_Sprite__get_rect(plVar4[0x1b],0);
              fVar8 = in_s2;
              fVar9 = in_s3;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__op_Implicit(lVar2,0);
              if ((uVar5 & 1) == 0) {
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
              *(bool *)(plVar4 + 7) = in_s2 == fVar8 && in_s3 == fVar9;
              if (plVar4[0x1b] != 0) {
                uVar6 = UnityEngine_Sprite__get_texture(plVar4[0x1b],0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                }
                uVar5 = UnityEngine_Object__op_Implicit(lVar2,0);
                uVar7 = 0;
                if ((uVar5 & 1) != 0) {
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



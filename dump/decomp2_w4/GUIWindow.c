// ==== public void HEGIHOAJOKK(bool LIMOELDKJHO = False) { }   @0xb4660c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIWindow__HEGIHOAJOKK(void *__this,bool LIMOELDKJHO)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  long lStack_68;
  
  if ((bRam0000000001917151 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
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
  lVar7 = UnityEngine_Component__get_gameObject(__this,0);
  if (lVar7 == 0) goto LAB_00c485b8;
  uVar8 = UnityEngine_Object__get_name(lVar7,0);
  if ((*(uint *)(lVar6 + 0x18) < 2) ||
     (*(undefined8 *)(lVar6 + 0x28) = uVar8, *(uint *)(lVar6 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x30) = _Str___current__;
  uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  uVar8 = _Str_null;
  if ((uVar9 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar8 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar6 + 0x18) < 4) ||
     (*(undefined8 *)(lVar6 + 0x38) = uVar8, *(uint *)(lVar6 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x40) = _Str___last__;
  uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  uVar8 = _Str_null;
  if ((uVar9 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_00c485b8;
    uVar8 = UnityEngine_Object__get_name(lVar7,0);
  }
  uVar5 = *(uint *)(lVar6 + 0x18);
  if ((uVar5 < 6) || (*(undefined8 *)(lVar6 + 0x48) = uVar8, uVar5 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x50) = _Str____Child__;
  plVar10 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar8 = 0;
  if (plVar10 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    uVar5 = *(uint *)(lVar6 + 0x18);
  }
  if (uVar5 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x58) = uVar8;
  pvVar11 = (void *)System_String__Concat(lVar6,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(pvVar11,false);
  uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Equality(uVar8,__this,0);
  if ((uVar9 & 1) != 0) {
    uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar8,0,0);
    if ((uVar9 & 1) != 0) {
      return;
    }
  }
  uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Equality(uVar8,__this,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  lVar6 = _GUIWindow_TypeInfo;
  if ((uVar9 & 1) != 0) {
    lVar6 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar6 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar6,0);
    lVar6 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar8 = **(undefined8 **)(lVar6 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if (((uVar9 & 1) != 0) && (!LIMOELDKJHO)) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  lVar6 = GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar9 = UnityEngine_Object__op_Inequality(lVar6,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(char *)((long)__this + 0x20) == '\0') {
      if (lVar6 == 0) goto LAB_00c485b8;
      uVar9 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar9 & 1) == 0) goto LAB_00c46b74;
      uVar15 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar15;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if (((uVar9 & 1) != 0) && (*(char *)((long)__this + 0x21) != '\0')) {
        fVar14 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar14) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),lVar6,0);
          goto LAB_00c46b74;
        }
      }
      if (lVar6 == 0) goto LAB_00c485b8;
      uVar8 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar6,uVar8,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar8 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar9 & 1) != 0) {
        if (*(char *)((long)__this + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
          goto LAB_00c485b8;
          uVar9 = AdvController__EDNAEPDDBPJ(lVar6,0);
          if ((uVar9 & 1) != 0) {
            iVar3 = UnityEngine_Screen__get_width(0);
            iVar4 = UnityEngine_Screen__get_height(0);
            fVar14 = (float)iVar3 / (float)iVar4;
            if (fVar14 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
            goto LAB_00c485b8;
            uVar8 = *(undefined8 *)(lVar6 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar9 = UnityEngine_Object__op_Equality(__this,uVar8,0);
            if ((uVar9 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0)
                 ) goto LAB_00c485b8;
              uVar8 = *(undefined8 *)(lVar6 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar9 = UnityEngine_Object__op_Equality(__this,uVar8,0);
              if ((uVar9 & 1) != 0) {
                if (1.61 <= fVar14) {
                  if ((fVar14 <= 1.61) || (1.8 <= fVar14)) {
                    if (fVar14 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar6 == 0)) goto LAB_00c485b8;
                    uVar8 = *(undefined8 *)(lVar6 + 0x70);
                    uVar16 = 0x3f51eb85;
                    uVar15 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar6 == 0)) goto LAB_00c485b8;
                    uVar8 = *(undefined8 *)(lVar6 + 0x70);
                    uVar16 = 0x3f5eb852;
                    uVar15 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar6 == 0)) goto LAB_00c485b8;
                  uVar8 = *(undefined8 *)(lVar6 + 0x70);
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
                   (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar6 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar14) {
                  if (*(long *)(lVar6 + 0x240) == 0) goto LAB_00c485b8;
                  uVar9 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar6 + 0x240),0);
                  if ((uVar9 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar6 == 0)) goto LAB_00c485b8;
                  uVar8 = *(undefined8 *)(lVar6 + 0x60);
                  uVar16 = 0x3f51eb85;
                  uVar15 = 0x41a00000;
                }
                else {
                  uVar8 = *(undefined8 *)(lVar6 + 0x60);
                  uVar16 = 0x3f5eb852;
                  uVar15 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar6 == 0)) goto LAB_00c485b8;
                uVar8 = *(undefined8 *)(lVar6 + 0x60);
                uVar15 = 0xc0a00000;
                uVar16 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar15,uVar16,__this,uVar8);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
            goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(lVar6,0);
            goto LAB_00c46f70;
          }
        }
        GUIWindow__IPELKJAHFGL(__this);
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
    uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar9 & 1) != 0) {
        if (*(char *)((long)__this + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(__this);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
          goto LAB_00c485b8;
          uVar9 = AdvController__EDNAEPDDBPJ(lVar6,0);
          if ((uVar9 & 1) == 0) goto LAB_00c47120;
          iVar3 = UnityEngine_Screen__get_width(0);
          iVar4 = UnityEngine_Screen__get_height(0);
          fVar14 = (float)iVar3 / (float)iVar4;
          if (1.51 < fVar14) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
            goto LAB_00c485b8;
            uVar8 = *(undefined8 *)(lVar6 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar9 = UnityEngine_Object__op_Equality(__this,uVar8,0);
            if ((uVar9 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
              goto LAB_00c485b8;
              uVar8 = *(undefined8 *)(lVar6 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar9 = UnityEngine_Object__op_Equality(__this,uVar8,0);
              if ((uVar9 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                goto LAB_00c485b8;
                uVar8 = *(undefined8 *)(lVar6 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar9 = UnityEngine_Object__op_Equality(__this,uVar8,0);
                if ((uVar9 & 1) == 0) {
                  lVar6 = UnityEngine_Component__get_gameObject(__this,0);
                  if (lVar6 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar6,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar6 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar9 = UnityEngine_Object__op_Inequality(lVar6,0,0);
                  if ((uVar9 & 1) != 0) {
                    if (lVar6 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar6 + 0x2c) == 3) {
                      lVar6 = UnityEngine_Component__get_gameObject(__this,0);
                      if (lVar6 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar6,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar9 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar9 & 1) != 0) {
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
                       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                    goto LAB_00c485b8;
                    lStack_68 = *(long *)(lVar6 + 0xe8);
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
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar6 + 0xe8);
                uVar15 = 0x41f00000;
              }
              else {
                if (1.61 <= fVar14) {
                  if (1.8 <= fVar14) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar6 + 0xb0);
                  uVar16 = 0x3f6e147b;
                  uVar15 = 0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar6 + 0xb0);
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
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar6 + 0x188);
                uVar15 = 0x41200000;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
              goto LAB_00c485b8;
              lStack_68 = *(long *)(lVar6 + 0x188);
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
            GUIWindow__EPGDFDEPGCB(uVar15,uVar16,__this,lStack_68);
          }
LAB_00c47308:
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
          goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(lVar6,0);
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
      uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar9 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
        if ((uVar9 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
          if ((uVar9 & 1) != 0) {
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
              lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (lVar6 == 0) goto LAB_00c485b8;
              uVar9 = DAFNMLEKHAD__MHBEPDHNNFH(lVar6,0);
              if ((uVar9 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
                goto LAB_00c485b8;
                uVar8 = *(undefined8 *)(lVar6 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar9 = UnityEngine_Object__op_Equality(uVar8,0,0);
                if ((uVar9 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                  goto LAB_00c485b8;
                  uVar8 = *(undefined8 *)(lVar6 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar9 = UnityEngine_Object__op_Equality(__this,uVar8,0);
                  if ((uVar9 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
                    goto LAB_00c485b8;
                    uVar8 = *(undefined8 *)(lVar6 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar8 = UnityEngine_Object__Instantiate_object_
                                      (uVar8,_Method_UnityEngine_Object_Instantiate_GameObject___);
                    *(undefined8 *)(lVar6 + 0x90) = uVar8;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar6 = UnityEngine_Component__get_gameObject(__this,0);
  if (lVar6 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar6,1,0);
  lVar6 = 8;
  if (!LIMOELDKJHO) {
    lVar6 = 0;
  }
  puVar12 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar12[2] = *puVar12;
  *(void **)((long)puVar12 + lVar6) = __this;
  if (*(char *)((long)__this + 0x23) != '\0') {
    uVar8 = GUIWindow__FAAELIPKLCB(__this);
    UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar8,0);
  }
  lVar6 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar6 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar6 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar6 + 0x20) = _Str_Window__Show__;
  uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  uVar8 = _Str_null;
  if ((uVar9 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar8 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar6 + 0x18) < 2) ||
     (*(undefined8 *)(lVar6 + 0x28) = uVar8, *(uint *)(lVar6 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x30) = _Str___last__;
  uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  uVar8 = _Str_null;
  if ((uVar9 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_00c485b8;
    uVar8 = UnityEngine_Object__get_name(lVar7,0);
  }
  uVar5 = *(uint *)(lVar6 + 0x18);
  if ((uVar5 < 4) || (*(undefined8 *)(lVar6 + 0x38) = uVar8, uVar5 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x40) = _Str____Child__;
  plVar10 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar8 = 0;
  if (plVar10 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    uVar5 = *(uint *)(lVar6 + 0x18);
  }
  if (uVar5 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x48) = uVar8;
  pvVar11 = (void *)System_String__Concat(lVar6,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(pvVar11,false);
  uVar9 = Main__KCHOEBEIOCE(0);
  if ((uVar9 & 1) != 0) {
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
    uVar8 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar9 & 1) != 0) {
      uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar6 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
      if ((uVar9 & 1) == 0) {
        uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
        goto LAB_00c485b8;
        uVar13 = *(undefined8 *)(lVar6 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
        if ((uVar9 & 1) == 0) {
          uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
          goto LAB_00c485b8;
          uVar13 = *(undefined8 *)(lVar6 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
          if ((uVar9 & 1) != 0) {
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
             (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
          goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(lVar6,0);
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
        lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((lVar7 == 0) || (uVar5 = DAFNMLEKHAD__EFDKHACIIEC(lVar7,0), lVar6 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar6,uVar5 & 1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar9 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar9 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (pvVar11 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar11 == (void *)0x0))
    goto LAB_00c485b8;
    bVar1 = GUIGarage__ABAHNKCPCFA(pvVar11);
    if (bVar1) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
        (lVar6 = *(long *)(lVar6 + 0x78), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c485b8;
    uVar9 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar9 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
         ((lVar6 = *(long *)(lVar6 + 0x70), lVar6 == 0 ||
          (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c485b8;
      uVar9 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar9 & 1) != 0) goto LAB_00c47948;
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
      uVar15 = 0;
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
      lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((lVar7 == 0) || (uVar5 = DAFNMLEKHAD__EFDKHACIIEC(lVar7,0), lVar6 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar6,uVar5 & 1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0 ||
          (lVar6 = *(long *)(lVar6 + 0x1b8), lVar6 == 0)))) goto LAB_00c485b8;
      uVar15 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar15,lVar6,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
       ((lVar6 = *(long *)(lVar6 + 0x60), lVar6 == 0 ||
        (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c485b8;
    uVar9 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar9 & 1) == 0) {
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
    UnityEngine_GameObject__SetActive(lVar6,*(undefined1 *)((long)__this + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar8 = *(undefined8 *)(lVar6 + 0x78);
    uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar13,uVar8,0);
    if ((uVar9 & 1) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar6 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar8,uVar13,0);
      if ((uVar9 & 1) != 0) {
        uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
        if ((uVar9 & 1) != 0) {
          uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
          goto LAB_00c485b8;
          uVar13 = *(undefined8 *)(lVar6 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
          if ((uVar9 & 1) != 0) {
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
        uVar15 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar15;
        if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
      }
    }
    uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(lVar6 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
    if ((uVar9 & 1) == 0) {
      uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar6 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
      if ((uVar9 & 1) != 0) {
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
      pvVar11 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (pvVar11 == (void *)0x0) goto LAB_00c485b8;
      bVar2 = DAFNMLEKHAD__LKKDIBOKNMJ(pvVar11);
      if (bVar2) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
          if ((uVar9 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar6 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar6 == 0) goto LAB_00c485b8;
            uVar9 = UnityEngine_AudioSource__get_isPlaying(lVar6,0);
            if ((uVar9 & 1) == 0) {
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
    uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(lVar6 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
    if ((uVar9 & 1) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar9 = UnityEngine_Object__op_Equality(uVar8,0,0);
      if ((uVar9 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
          goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(lVar6,0,0);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar6 = **(long **)(_Menu_TypeInfo + 0xb8);
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x20), lVar6 == 0)) goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(lVar6,0);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (pvVar11 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar11 == (void *)0x0)
           ) goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(pvVar11);
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



// ==== public void MDLHHGNHEOP(string AKEODMCLILB) { }   @0xaebde8

/* WARNING: Removing unreachable block (ram,0x0149383c) */
/* WARNING: Removing unreachable block (ram,0x01493884) */
/* WARNING: Removing unreachable block (ram,0x014938e4) */
/* WARNING: Removing unreachable block (ram,0x01493904) */
/* WARNING: Removing unreachable block (ram,0x01493910) */
/* WARNING: Removing unreachable block (ram,0x01493924) */
/* WARNING: Removing unreachable block (ram,0x01493954) */
/* WARNING: Removing unreachable block (ram,0x01493938) */
/* WARNING: Removing unreachable block (ram,0x0149394c) */
/* WARNING: Removing unreachable block (ram,0x01493958) */
/* WARNING: Removing unreachable block (ram,0x01493964) */
/* WARNING: Removing unreachable block (ram,0x01493968) */
/* WARNING: Removing unreachable block (ram,0x0149398c) */
/* WARNING: Removing unreachable block (ram,0x01493998) */
/* WARNING: Removing unreachable block (ram,0x014939ac) */
/* WARNING: Removing unreachable block (ram,0x01493974) */
/* WARNING: Removing unreachable block (ram,0x014939cc) */
/* WARNING: Removing unreachable block (ram,0x01493978) */
/* WARNING: Removing unreachable block (ram,0x014939c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RateMe__MDLHHGNHEOP(void *__this,void *AKEODMCLILB)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  float in_s1;
  
  if ((bRam0000000001916e99 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Str_);
    bRam0000000001916e99 = 1;
  }
  uVar1 = System_String__op_Inequality(AKEODMCLILB,_Str_,0);
  if ((*(long *)((long)__this + 0x70) != 0) &&
     (lVar2 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x70),0), lVar2 != 0))
  {
    if ((uVar1 & 1) == 0) {
      UnityEngine_GameObject__SetActive(lVar2,0,0);
    }
    else {
      UnityEngine_GameObject__SetActive(lVar2,1,0);
      plVar3 = *(long **)((long)__this + 0x70);
      if (plVar3 == (long *)0x0) goto LAB_00bebf58;
      (**(code **)(*plVar3 + 0x5a8))(plVar3,AKEODMCLILB,*(undefined8 *)(*plVar3 + 0x5b0));
    }
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x29) != '\0') {
      if ((*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) &&
         (func_0x00a67a30(), *(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x29) == '\0')) {
        return;
      }
      if (*(long *)((long)__this + 0x68) == 0) goto LAB_00bebf58;
      UnityEngine_RectTransform__get_sizeDelta(*(long *)((long)__this + 0x68),0);
      if (in_s1 <= 300.0) {
        return;
      }
    }
    lVar2 = *(long *)((long)__this + 0x68);
    System_String__op_Inequality(AKEODMCLILB,_Str_,0);
    if (lVar2 != 0) {
      UnityEngine_RectTransform__get_sizeDelta(lVar2,1,0);
      UnityEngine_RectTransform__GetParentSize(lVar2);
      UnityEngine_RectTransform__get_anchorMax(lVar2);
      UnityEngine_RectTransform__get_anchorMin(lVar2);
      if (pcRam000000000191c810 == (code *)0x0) {
        pcRam000000000191c810 = (code *)func_0x00a678c4(&UNK_0059f9bb);
      }
      (*pcRam000000000191c810)(lVar2,&stack0xffffffffffffffe8);
      return;
    }
  }
LAB_00bebf58:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ACPIOHNDIID() { }   @0xaec41c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RateMe__ACPIOHNDIID(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  void *pvStack_68;
  
  if ((bRam0000000001916e9e & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_RATE_ME_NOW);
    func_0x00a67900(&Str_RATE_ME_NEW);
    bRam0000000001916e9e = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x19) != '\0') {
    *(undefined1 *)((long)__this + 0x98) = 0;
    *(undefined4 *)((long)__this + 0x88) = 0;
    RateMe__ButtonRateMeSelectStars(__this,0);
    if (*(long *)((long)__this + 0x20) != 0) {
      UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                (0x44110000,*(long *)((long)__this + 0x20),1,0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
          (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 != 0)) &&
         (lVar10 = *(long *)(lVar10 + 0xb8), lVar10 != 0)) {
        GUIWindow__HEGIHOAJOKK(lVar10,0,0);
        RateMe__LACBJDFDOLF(__this,0);
        if (*(long *)((long)__this + 0x58) != 0) {
          UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x58),0,0);
          if (*(long *)((long)__this + 0x48) != 0) {
            UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x48),1,0);
            if (*(long *)((long)__this + 0x50) != 0) {
              UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x50),1,0);
              if ((*(long *)((long)__this + 0x38) != 0) &&
                 (lVar10 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x38),0),
                 lVar10 != 0)) {
                UnityEngine_GameObject__SetActive(lVar10,1,0);
                plVar12 = *(long **)((long)__this + 0x40);
                if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Translate_TypeInfo + 0xb8) != 0) &&
                   (uVar5 = Translate__JJJNIPAKLJF
                                      (**(long **)(_Translate_TypeInfo + 0xb8),_Str_RATE_ME_NOW,0),
                   plVar12 != (long *)0x0)) {
                  (**(code **)(*plVar12 + 0x5a8))(plVar12,uVar5,*(undefined8 *)(*plVar12 + 0x5b0));
                  if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
                    plVar12 = *(long **)((long)__this + 0x30);
                    uVar5 = Translate__JJJNIPAKLJF
                                      (**(long **)(_Translate_TypeInfo + 0xb8),_Str_RATE_ME_NEW,0);
                    if (plVar12 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00bec60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)(*plVar12 + 0x5a8))
                                (plVar12,uVar5,*(undefined8 *)(*plVar12 + 0x5b0));
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
LAB_00bec650:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
      (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0)) ||
     (pvVar6 = *(void **)(lVar10 + 0xc0), pvVar6 == (void *)0x0)) goto LAB_00bec650;
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
  lVar10 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar10 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar10 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar10 + 0x20) = _Str_Try_to_Show__;
  lVar7 = UnityEngine_Component__get_gameObject(pvVar6,0);
  if (lVar7 == 0) goto LAB_00c485b8;
  uVar5 = UnityEngine_Object__get_name(lVar7,0);
  if ((*(uint *)(lVar10 + 0x18) < 2) ||
     (*(undefined8 *)(lVar10 + 0x28) = uVar5, *(uint *)(lVar10 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar10 + 0x30) = _Str___current__;
  uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  uVar5 = _Str_null;
  if ((uVar8 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar5 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar10 + 0x18) < 4) ||
     (*(undefined8 *)(lVar10 + 0x38) = uVar5, *(uint *)(lVar10 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar10 + 0x40) = _Str___last__;
  uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  uVar5 = _Str_null;
  if ((uVar8 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_00c485b8;
    uVar5 = UnityEngine_Object__get_name(lVar7,0);
  }
  uVar4 = *(uint *)(lVar10 + 0x18);
  if ((uVar4 < 6) || (*(undefined8 *)(lVar10 + 0x48) = uVar5, uVar4 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar10 + 0x50) = _Str____Child__;
  plVar12 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar5 = 0;
  if (plVar12 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    uVar4 = *(uint *)(lVar10 + 0x18);
  }
  if (uVar4 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar10 + 0x58) = uVar5;
  uVar5 = System_String__Concat(lVar10,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar5,0,0);
  uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Equality(uVar5,pvVar6,0);
  if ((uVar8 & 1) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar5,0,0);
    if ((uVar8 & 1) != 0) {
      return;
    }
  }
  uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Equality(uVar5,pvVar6,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  lVar10 = _GUIWindow_TypeInfo;
  if ((uVar8 & 1) != 0) {
    lVar10 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar10 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar10,0);
    lVar10 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar5 = **(undefined8 **)(lVar10 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  pvVar9 = (void *)UnityEngine_Object__op_Inequality(uVar5,0,0);
  if (((ulong)pvVar9 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    pvVar9 = (void *)GUIWindow__JGDCBENNDFO(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  pvVar9 = GUIWindow__FEHHGIGJIKL(pvVar9);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar8 = UnityEngine_Object__op_Inequality(pvVar9,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(char *)((long)pvVar6 + 0x20) == '\0') {
      if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
      uVar8 = UnityEngine_GameObject__get_activeSelf(pvVar9,0);
      if ((uVar8 & 1) == 0) goto LAB_00c46b74;
      uVar15 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar15;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if (((uVar8 & 1) != 0) && (*(char *)((long)pvVar6 + 0x21) != '\0')) {
        fVar14 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar14) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),pvVar9,0);
          goto LAB_00c46b74;
        }
      }
      if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
      uVar5 = 1;
    }
    UnityEngine_GameObject__SetActive(pvVar9,uVar5,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar5 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(char *)((long)pvVar6 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar10 == 0))
          goto LAB_00c485b8;
          uVar8 = AdvController__EDNAEPDDBPJ(lVar10,0);
          if ((uVar8 & 1) != 0) {
            iVar2 = UnityEngine_Screen__get_width(0);
            iVar3 = UnityEngine_Screen__get_height(0);
            fVar14 = (float)iVar2 / (float)iVar3;
            if (fVar14 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar10 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar10 == 0)
               ) goto LAB_00c485b8;
            uVar5 = *(undefined8 *)(lVar10 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar8 = UnityEngine_Object__op_Equality(pvVar6,uVar5,0);
            if ((uVar8 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar10 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                 lVar10 == 0)) goto LAB_00c485b8;
              uVar5 = *(undefined8 *)(lVar10 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar8 = UnityEngine_Object__op_Equality(pvVar6,uVar5,0);
              if ((uVar8 & 1) != 0) {
                if (1.61 <= fVar14) {
                  if ((fVar14 <= 1.61) || (1.8 <= fVar14)) {
                    if (fVar14 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar10 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar10 == 0)) goto LAB_00c485b8;
                    pvVar9 = *(void **)(lVar10 + 0x70);
                    fVar16 = 0.82;
                    fVar14 = 70.0;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar10 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar10 == 0)) goto LAB_00c485b8;
                    pvVar9 = *(void **)(lVar10 + 0x70);
                    fVar16 = 0.87;
                    fVar14 = 66.0;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar10 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar10 == 0)) goto LAB_00c485b8;
                  pvVar9 = *(void **)(lVar10 + 0x70);
                  fVar16 = 0.95;
                  fVar14 = 55.0;
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
                   (lVar10 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar10 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar14) {
                  if (*(long *)(lVar10 + 0x240) == 0) goto LAB_00c485b8;
                  uVar8 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar10 + 0x240),0);
                  if ((uVar8 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar10 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar10 == 0)) goto LAB_00c485b8;
                  pvVar9 = *(void **)(lVar10 + 0x60);
                  fVar16 = 0.82;
                  fVar14 = 20.0;
                }
                else {
                  pvVar9 = *(void **)(lVar10 + 0x60);
                  fVar16 = 0.87;
                  fVar14 = 5.0;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar10 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar10 == 0)) goto LAB_00c485b8;
                pvVar9 = *(void **)(lVar10 + 0x60);
                fVar14 = -5.0;
                fVar16 = 0.0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(pvVar6,pvVar9,fVar14,fVar16);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar10 == 0))
            goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(lVar10,0);
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
    uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(char *)((long)pvVar6 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(pvVar6);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar10 == 0))
          goto LAB_00c485b8;
          uVar8 = AdvController__EDNAEPDDBPJ(lVar10,0);
          if ((uVar8 & 1) == 0) goto LAB_00c47120;
          iVar2 = UnityEngine_Screen__get_width(0);
          iVar3 = UnityEngine_Screen__get_height(0);
          fVar14 = (float)iVar2 / (float)iVar3;
          if (1.51 < fVar14) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
            goto LAB_00c485b8;
            uVar5 = *(undefined8 *)(lVar10 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar8 = UnityEngine_Object__op_Equality(pvVar6,uVar5,0);
            if ((uVar8 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
              goto LAB_00c485b8;
              uVar5 = *(undefined8 *)(lVar10 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar8 = UnityEngine_Object__op_Equality(pvVar6,uVar5,0);
              if ((uVar8 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
                goto LAB_00c485b8;
                uVar5 = *(undefined8 *)(lVar10 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar8 = UnityEngine_Object__op_Equality(pvVar6,uVar5,0);
                if ((uVar8 & 1) == 0) {
                  lVar10 = UnityEngine_Component__get_gameObject(pvVar6,0);
                  if (lVar10 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar10,&pvStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  pvVar9 = pvStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar8 = UnityEngine_Object__op_Inequality(pvVar9,0,0);
                  if ((uVar8 & 1) != 0) {
                    if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
                    if (*(int *)((long)pvVar9 + 0x2c) == 3) {
                      lVar10 = UnityEngine_Component__get_gameObject(pvVar6,0);
                      if (lVar10 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar10,&pvStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar8 = UnityEngine_Object__op_Inequality(pvStack_68,0,0);
                      if ((uVar8 & 1) != 0) {
                        if (1.61 <= fVar14) {
                          if (1.8 <= fVar14) {
                            fVar16 = 0.85;
                            fVar14 = 60.0;
                          }
                          else {
                            fVar14 = 70.0;
                            fVar16 = 0.0;
                          }
                        }
                        else {
                          fVar14 = 20.0;
                          fVar16 = 0.0;
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
                       (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
                    goto LAB_00c485b8;
                    pvStack_68 = *(void **)(lVar10 + 0xe8);
                    fVar16 = 0.95;
                    fVar14 = 70.0;
                    goto LAB_00c47304;
                  }
                  goto LAB_00c47338;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
                goto LAB_00c485b8;
                pvStack_68 = *(void **)(lVar10 + 0xe8);
                fVar14 = 30.0;
              }
              else {
                if (1.61 <= fVar14) {
                  if (1.8 <= fVar14) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
                  goto LAB_00c485b8;
                  pvStack_68 = *(void **)(lVar10 + 0xb0);
                  fVar16 = 0.93;
                  fVar14 = 0.0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
                goto LAB_00c485b8;
                pvStack_68 = *(void **)(lVar10 + 0xb0);
                fVar14 = -25.0;
              }
LAB_00c4729c:
              fVar16 = 0.0;
            }
            else {
              if (fVar14 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
                goto LAB_00c485b8;
                pvStack_68 = *(void **)(lVar10 + 0x188);
                fVar14 = 10.0;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
              goto LAB_00c485b8;
              pvStack_68 = *(void **)(lVar10 + 0x188);
              if (1.8 <= fVar14) {
                fVar16 = 0.82;
                fVar14 = 38.0;
              }
              else {
                fVar16 = 0.95;
                fVar14 = 35.0;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(pvVar6,pvStack_68,fVar14,fVar16);
          }
LAB_00c47308:
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar10 == 0))
          goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(lVar10,0);
        }
      }
    }
  }
LAB_00c47338:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar10 = *(long *)(_Menu_TypeInfo + 0xb8);
  if (*(char *)(lVar10 + 0x1a) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar10 = *(long *)(_Menu_TypeInfo + 0xb8);
    }
    if (*(char *)(lVar10 + 0xc) != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar8 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar10 == 0))
            goto LAB_00c485b8;
            if (*(char *)(lVar10 + 0x6c) != '\0') {
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
              if (lVar10 == 0) goto LAB_00c485b8;
              uVar8 = DAFNMLEKHAD__MHBEPDHNNFH(lVar10,0);
              if ((uVar8 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar10 == 0))
                goto LAB_00c485b8;
                uVar5 = *(undefined8 *)(lVar10 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar8 = UnityEngine_Object__op_Equality(uVar5,0,0);
                if ((uVar8 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
                  goto LAB_00c485b8;
                  uVar5 = *(undefined8 *)(lVar10 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar8 = UnityEngine_Object__op_Equality(pvVar6,uVar5,0);
                  if ((uVar8 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar10 == 0))
                    goto LAB_00c485b8;
                    uVar5 = *(undefined8 *)(lVar10 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar5 = UnityEngine_Object__Instantiate_object_
                                      (uVar5,_Method_UnityEngine_Object_Instantiate_GameObject___);
                    *(undefined8 *)(lVar10 + 0x90) = uVar5;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar10 = UnityEngine_Component__get_gameObject(pvVar6,0);
  if (lVar10 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar10,1,0);
  puVar11 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar11[2] = *puVar11;
  *puVar11 = pvVar6;
  if (*(char *)((long)pvVar6 + 0x23) != '\0') {
    uVar5 = GUIWindow__FAAELIPKLCB(pvVar6);
    UnityEngine_MonoBehaviour__StartCoroutine(pvVar6,uVar5,0);
  }
  lVar10 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar10 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar10 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar10 + 0x20) = _Str_Window__Show__;
  uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  uVar5 = _Str_null;
  if ((uVar8 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar5 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar10 + 0x18) < 2) ||
     (*(undefined8 *)(lVar10 + 0x28) = uVar5, *(uint *)(lVar10 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar10 + 0x30) = _Str___last__;
  uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  uVar5 = _Str_null;
  if ((uVar8 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_00c485b8;
    uVar5 = UnityEngine_Object__get_name(lVar7,0);
  }
  uVar4 = *(uint *)(lVar10 + 0x18);
  if ((uVar4 < 4) || (*(undefined8 *)(lVar10 + 0x38) = uVar5, uVar4 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar10 + 0x40) = _Str____Child__;
  plVar12 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar5 = 0;
  if (plVar12 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    uVar4 = *(uint *)(lVar10 + 0x18);
  }
  if (uVar4 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar10 + 0x48) = uVar5;
  uVar5 = System_String__Concat(lVar10,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar5,0,0);
  uVar8 = Main__KCHOEBEIOCE(0);
  if ((uVar8 & 1) != 0) {
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
    uVar5 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar8 & 1) != 0) {
      uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar10 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar10 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar10 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar5,uVar13,0);
      if ((uVar8 & 1) == 0) {
        uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar10 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar10 == 0))
        goto LAB_00c485b8;
        uVar13 = *(undefined8 *)(lVar10 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Equality(uVar5,uVar13,0);
        if ((uVar8 & 1) == 0) {
          uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar10 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar10 == 0))
          goto LAB_00c485b8;
          uVar13 = *(undefined8 *)(lVar10 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = UnityEngine_Object__op_Equality(uVar5,uVar13,0);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar10 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar10 == 0)
               ) goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(lVar10,0);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar10 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar10 == 0))
          goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(lVar10,0);
        }
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar10 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar10 == 0))
        goto LAB_00c485b8;
        lVar10 = *(long *)(lVar10 + 0x178);
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
        if ((lVar7 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar7,0), lVar10 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar10,uVar4 & 1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar8 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar8 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
    goto LAB_00c485b8;
    uVar8 = GUIGarage__ABAHNKCPCFA(lVar10,0);
    if ((uVar8 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0)) ||
        (lVar10 = *(long *)(lVar10 + 0x78), lVar10 == 0)) ||
       (lVar10 = UnityEngine_Component__get_gameObject(lVar10,0), lVar10 == 0)) goto LAB_00c485b8;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar10,0);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0)) ||
         ((lVar10 = *(long *)(lVar10 + 0x70), lVar10 == 0 ||
          (lVar10 = UnityEngine_Component__get_gameObject(lVar10,0), lVar10 == 0))))
      goto LAB_00c485b8;
      uVar8 = UnityEngine_GameObject__get_activeSelf(lVar10,0);
      if ((uVar8 & 1) != 0) goto LAB_00c47948;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0)) ||
         (lVar10 = *(long *)(lVar10 + 0x1d0), lVar10 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar10,0,0);
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0)) ||
         (lVar10 = *(long *)(lVar10 + 0x1b8), lVar10 == 0)) goto LAB_00c485b8;
      uVar15 = 0;
    }
    else {
LAB_00c47948:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0)) ||
         (lVar10 = *(long *)(lVar10 + 0x1d0), lVar10 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar10,1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(lVar10,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
      goto LAB_00c485b8;
      lVar10 = *(long *)(lVar10 + 0x3e0);
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
      if ((lVar7 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar7,0), lVar10 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar10,uVar4 & 1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0 ||
          (lVar10 = *(long *)(lVar10 + 0x1b8), lVar10 == 0)))) goto LAB_00c485b8;
      uVar15 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar15,lVar10,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0)) ||
       ((lVar10 = *(long *)(lVar10 + 0x60), lVar10 == 0 ||
        (lVar10 = UnityEngine_Component__get_gameObject(lVar10,0), lVar10 == 0))))
    goto LAB_00c485b8;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar10,0);
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
        (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0)) ||
       (lVar10 = *(long *)(lVar10 + 0x68), lVar10 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar10,*(undefined1 *)((long)pvVar6 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
    goto LAB_00c485b8;
    uVar5 = *(undefined8 *)(lVar10 + 0x78);
    uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar13,uVar5,0);
    if ((uVar8 & 1) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar10 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar5,uVar13,0);
      if ((uVar8 & 1) != 0) {
        uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar8 & 1) != 0) {
          uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
          goto LAB_00c485b8;
          uVar13 = *(undefined8 *)(lVar10 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = UnityEngine_Object__op_Equality(uVar5,uVar13,0);
          if ((uVar8 & 1) != 0) {
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
        lVar10 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x20), lVar10 == 0)) ||
           (lVar10 = *(long *)(lVar10 + 0x4e0), lVar10 == 0)) goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive
                  (lVar10,*(undefined1 *)((long)*(long **)(_Menu_TypeInfo + 0xb8) + 0xe),0);
        uVar15 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar15;
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
      }
    }
    uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
    goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(lVar10 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar5,uVar13,0);
    if ((uVar8 & 1) == 0) {
      uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar10 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar5,uVar13,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(lVar10,0);
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
      lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar10 == 0) goto LAB_00c485b8;
      uVar8 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar10,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar10 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar10 == 0) goto LAB_00c485b8;
            uVar8 = UnityEngine_AudioSource__get_isPlaying(lVar10,0);
            if ((uVar8 & 1) == 0) {
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
      pvVar6 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (pvVar6 == (void *)0x0) goto LAB_00c485b8;
      pvVar6 = DAFNMLEKHAD__DKJLCJPBPPN(pvVar6,-1,true);
      if (pvVar6 == (void *)0x0) {
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
        if (lVar10 == 0) goto LAB_00c485b8;
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = *(undefined4 *)(lVar10 + 0x104);
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
         (pvVar6 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar6 == (void *)0x0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(pvVar6);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar10,0);
    }
    uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
    goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(lVar10 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar5,uVar13,0);
    if ((uVar8 & 1) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar5,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
          goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(lVar10,0,0);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar10 = **(long **)(_Menu_TypeInfo + 0xb8);
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar10 == 0) || (pvVar6 = *(void **)(lVar10 + 0x20), pvVar6 == (void *)0x0))
        goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(pvVar6);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(lVar10,0);
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



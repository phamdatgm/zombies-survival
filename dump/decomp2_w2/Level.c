// ==== public void FKJAANMGOMP() { }   @0xb2fa28

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Level__FKJAANMGOMP(void *__this)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  float fVar12;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  if ((bRam00000000019170bd & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&EventContest_TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&MMOCGEKHBKE_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&RatingEventController_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&System_TimeSpan_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str__0_);
    func_0x00a67900(&Str_0_00_00);
    func_0x00a67900(&Str___lvl__);
    func_0x00a67900(&Str___1_);
    func_0x00a67900(&Str____status__);
    func_0x00a67900(&Str_);
    func_0x00a67900(&Str_Set_Cached_Event__Id__);
    func_0x00a67900(&Str__0___1_00___2_00_);
    bRam00000000019170bd = 1;
  }
  uStack_48 = 0;
  uVar4 = Level__get_IsAvailable(__this);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar10 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c3036c;
      uVar10 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar10,0,0);
      if ((((uVar4 & 1) != 0) && (*(long *)((long)__this + 0x50) != 0)) &&
         (*(int *)(*(long *)((long)__this + 0x50) + 0x18) != 0)) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0))
        goto LAB_00c3036c;
        uVar10 = *(undefined8 *)(lVar8 + 0x48);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar10,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (*(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2a) == '\0') {
            if (*(long *)((long)__this + 0x50) != 0) {
              iVar2 = EventContest__get_TimeLeft(*(long *)((long)__this + 0x50),0);
              if (iVar2 < 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                    (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 != 0)) &&
                   (plVar5 = *(long **)(lVar8 + 0x340), plVar5 != (long *)0x0)) {
                  (**(code **)(*plVar5 + 0x5a8))
                            (plVar5,_Str_0_00_00,*(undefined8 *)(*plVar5 + 0x5b0));
                  lVar8 = Level__get_gui(__this);
                  if ((lVar8 != 0) && (plVar5 = *(long **)(lVar8 + 0x40), plVar5 != (long *)0x0)) {
                    (**(code **)(*plVar5 + 0x5a8))(plVar5,_Str_,*(undefined8 *)(*plVar5 + 0x5b0));
                    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (*(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x5c) != '\0') {
                      return;
                    }
                    fVar12 = (float)UnityEngine_Time__get_time(0);
                    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (fVar12 <= *(float *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x58)) {
                      return;
                    }
                    lVar8 = *(long *)((long)__this + 0x50);
                    *(undefined8 *)((long)__this + 0x60) = 0;
                    if (lVar8 != 0) {
                      if (*(int *)(lVar8 + 0x1c) == 0) {
                        *(undefined4 *)(lVar8 + 0x1c) = 1;
                        lVar8 = func_0x00a679a0(_string___TypeInfo,6);
                        if (lVar8 == 0) goto LAB_00c3036c;
                        if (*(int *)(lVar8 + 0x18) == 0) {
LAB_00c30370:
                    /* WARNING: Subroutine does not return */
                          il2cpp_throw_967b58();
                        }
                        *(undefined8 *)(lVar8 + 0x20) = _Str_Set_Cached_Event__Id__;
                        if (*(long *)((long)__this + 0x50) == 0) goto LAB_00c3036c;
                        uVar10 = System_Int32__ToString(*(long *)((long)__this + 0x50) + 0x10,0);
                        if ((*(uint *)(lVar8 + 0x18) < 2) ||
                           (*(undefined8 *)(lVar8 + 0x28) = uVar10, *(uint *)(lVar8 + 0x18) == 2))
                        goto LAB_00c30370;
                        *(undefined8 *)(lVar8 + 0x30) = _Str___lvl__;
                        if (*(long *)((long)__this + 0x50) == 0) goto LAB_00c3036c;
                        uVar10 = System_Int32__ToString(*(long *)((long)__this + 0x50) + 0x14,0);
                        if ((*(uint *)(lVar8 + 0x18) < 4) ||
                           (*(undefined8 *)(lVar8 + 0x38) = uVar10, *(uint *)(lVar8 + 0x18) == 4))
                        goto LAB_00c30370;
                        *(undefined8 *)(lVar8 + 0x40) = _Str____status__;
                        if (*(long *)((long)__this + 0x50) == 0) goto LAB_00c3036c;
                        uStack_58 = *(undefined4 *)(*(long *)((long)__this + 0x50) + 0x1c);
LAB_00c3016c:
                        uStack_60 = 0xffffffffffffffff;
                        uStack_68 = _MMOCGEKHBKE_TypeInfo;
                        uVar10 = System_Enum__ToString(&uStack_68,0);
                        if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_00c30370;
                        *(undefined8 *)(lVar8 + 0x48) = uVar10;
                        uVar10 = System_String__Concat(lVar8,0);
                        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30(_Main_TypeInfo);
                        }
                        Main__GEMDEAMAGPG(uVar10,0,0);
                      }
                      else {
                        if (((*(int *)(lVar8 + 0x1c) == 1) &&
                            (lVar8 = **(long **)(_RatingEventController_TypeInfo + 0xb8), lVar8 != 0
                            )) && (uVar1 = *(uint *)(lVar8 + 0x18), 0 < (int)uVar1)) {
                          lVar9 = 0;
                          do {
                            if (uVar1 <= (uint)lVar9) goto LAB_00c30370;
                            lVar11 = *(long *)(lVar8 + 0x20 + lVar9 * 8);
                            if (lVar11 == 0) goto LAB_00c3036c;
                            if ((*(int *)(lVar11 + 0x1c) == 0) &&
                               (*(int *)(lVar11 + 0x14) + 100 == *(int *)((long)__this + 0x10))) {
                              *(long *)((long)__this + 0x50) = lVar11;
                              lVar8 = func_0x00a679a0(_string___TypeInfo,6);
                              if (lVar8 == 0) goto LAB_00c3036c;
                              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_00c30370;
                              *(undefined8 *)(lVar8 + 0x20) = _Str_Set_Cached_Event__Id__;
                              uVar10 = System_Int32__ToString(lVar11 + 0x10,0);
                              if ((*(uint *)(lVar8 + 0x18) < 2) ||
                                 (*(undefined8 *)(lVar8 + 0x28) = uVar10,
                                 *(uint *)(lVar8 + 0x18) == 2)) goto LAB_00c30370;
                              *(undefined8 *)(lVar8 + 0x30) = _Str___lvl__;
                              uVar10 = System_Int32__ToString(lVar11 + 0x14,0);
                              if ((*(uint *)(lVar8 + 0x18) < 4) ||
                                 (*(undefined8 *)(lVar8 + 0x38) = uVar10,
                                 *(uint *)(lVar8 + 0x18) == 4)) goto LAB_00c30370;
                              *(undefined8 *)(lVar8 + 0x40) = _Str____status__;
                              uStack_58 = *(undefined4 *)(lVar11 + 0x1c);
                              goto LAB_00c3016c;
                            }
                            lVar9 = lVar9 + 1;
                          } while ((int)lVar9 < (int)uVar1);
                        }
                        uVar10 = func_0x00a67b44(_EventContest_TypeInfo);
                        EventContest___ctor(uVar10,0);
                        *(undefined8 *)((long)__this + 0x50) = uVar10;
                      }
                      Level__HMPEMADOAAL(__this);
                      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if (*(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == __this) {
                        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                           (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0
                           )) goto LAB_00c3036c;
                        GUIGarage__PGEEGDGGHLL(lVar8,__this,0,0);
                      }
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                          (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 != 0)
                          ) && (lVar8 = *(long *)(lVar8 + 0x48), lVar8 != 0)) {
                        RatingEventController__OJBAJGILIJN(lVar8,__this,1);
                        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        *(undefined1 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x5c) = 1;
                        fVar12 = (float)UnityEngine_Time__get_time(0);
                        *(float *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x58) = fVar12 + 20.0;
                        return;
                      }
                    }
                  }
                }
              }
              else {
                if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uStack_48 = System_TimeSpan__FromSeconds((double)iVar2,0);
                iVar2 = System_TimeSpan__get_Days(&uStack_48,0);
                if (iVar2 < 1) {
                  if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar3 = System_TimeSpan__get_Hours(&uStack_48,0);
                  uStack_68 = CONCAT44(uStack_68._4_4_,uVar3);
                  uVar10 = func_0x00a67a38(_int_TypeInfo,&uStack_68);
                  uStack_4c = System_TimeSpan__get_Minutes(&uStack_48,0);
                  uVar6 = func_0x00a67a38(_int_TypeInfo,&uStack_4c);
                  uStack_50 = System_TimeSpan__get_Seconds(&uStack_48,0);
                  uVar7 = func_0x00a67a38(_int_TypeInfo,&uStack_50);
                  uVar10 = System_String__Format(_Str__0___1_00___2_00_,uVar10,uVar6,uVar7,0);
                }
                else {
                  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  lVar8 = **(long **)(_Translate_TypeInfo + 0xb8);
                  if (lVar8 == 0) goto LAB_00c3036c;
                  uVar10 = System_String__Concat
                                     (_Str__0_,*(undefined8 *)(lVar8 + 0x20),_Str___1_,
                                      *(undefined8 *)(lVar8 + 0x28),0);
                  if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_System_TimeSpan_TypeInfo);
                  }
                  uVar3 = System_TimeSpan__get_Days(&uStack_48,0);
                  uStack_68 = CONCAT44(uStack_68._4_4_,uVar3);
                  uVar6 = func_0x00a67a38(_int_TypeInfo,&uStack_68);
                  uStack_4c = System_TimeSpan__get_Hours(&uStack_48,0);
                  uVar7 = func_0x00a67a38(_int_TypeInfo,&uStack_4c);
                  uVar10 = System_String__Format(uVar10,uVar6,uVar7,0);
                }
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (*(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == __this) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                      (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0)) ||
                     (plVar5 = *(long **)(lVar8 + 0x340), plVar5 == (long *)0x0)) goto LAB_00c3036c;
                  (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar10,*(undefined8 *)(*plVar5 + 0x5b0));
                }
                lVar8 = Level__get_gui(__this);
                if (((lVar8 != 0) && (*(long *)((long)__this + 0x50) != 0)) &&
                   (plVar5 = *(long **)(lVar8 + 0x40), plVar5 != (long *)0x0)) {
                  if (*(int *)(*(long *)((long)__this + 0x50) + 0x1c) != 1) {
                    uVar10 = _Str_;
                  }
                  (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar10,*(undefined8 *)(*plVar5 + 0x5b0));
                  return;
                }
              }
            }
            goto LAB_00c3036c;
          }
        }
      }
    }
  }
  lVar8 = Level__get_gui(__this);
  if ((lVar8 != 0) && (plVar5 = *(long **)(lVar8 + 0x40), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x5a8))(plVar5,_Str_,*(undefined8 *)(*plVar5 + 0x5b0));
    return;
  }
LAB_00c3036c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public int MNPHCGOJNCN() { }   @0xb310d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int Level__MNPHCGOJNCN(void *__this)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *CIDKMFLFJEJ;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  uint uVar12;
  undefined8 uVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  int iStack_74;
  
  if ((bRam00000000019170c2 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str____);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_Not_Found_stars_image_for_level_id_);
    bRam00000000019170c2 = 1;
  }
  iStack_74 = 0;
  lVar9 = *(long *)((long)__this + 0x28);
  if (lVar9 != 0) {
    uVar12 = 0;
    piVar1 = (int *)((long)__this + 0x10);
    lVar16 = 4;
    do {
      uVar15 = (int)lVar16 - 4;
      if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar15) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar13 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar6 & 1) == 0) {
          return uVar12;
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
          return uVar12;
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) break;
        uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar6 & 1) == 0) {
          return uVar12;
        }
        uVar13 = Level__get_gui(__this);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar6 & 1) == 0) {
          return uVar12;
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
            (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
           (lVar9 = *(long *)(lVar9 + 0x248), lVar9 == 0)) break;
        if (((int)uVar12 < *(int *)(lVar9 + 0x18)) && (*piVar1 < 100)) {
          lVar9 = Level__get_gui(__this);
          if (lVar9 == 0) break;
          uVar13 = *(undefined8 *)(lVar9 + 0x48);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
          if ((uVar6 & 1) == 0) {
            uVar13 = System_Int32__ToString(piVar1,0);
            CIDKMFLFJEJ = (void *)System_String__Concat
                                            (_Str_Not_Found_stars_image_for_level_id_,uVar13,0);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_Main_TypeInfo);
            }
            Main__EEKNCFLMGDP(CIDKMFLFJEJ);
          }
          else {
            lVar9 = Level__get_gui(__this);
            if (lVar9 == 0) break;
            lVar9 = *(long *)(lVar9 + 0x48);
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                (lVar16 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar16 == 0)) ||
               (lVar16 = *(long *)(lVar16 + 0x248), lVar16 == 0)) break;
            if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_00c31afc;
            if (lVar9 == 0) break;
            UnityEngine_UI_Image__set_sprite
                      (lVar9,*(undefined8 *)(lVar16 + (long)(int)uVar12 * 8 + 0x20),0);
          }
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (__this != *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40)) {
          return uVar12;
        }
        lVar9 = 4;
        goto LAB_00c319c8;
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_00c31afc;
      lVar9 = *(long *)(lVar9 + lVar16 * 8);
      if (lVar9 == 0) goto LAB_00c31af0;
      if (*(int *)(lVar9 + 0x14) < 1) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar13 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar6 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c31af0;
          uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (__this == *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40)) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                  (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
                 (lVar9 = *(long *)(lVar9 + 0x2c0), lVar9 == 0)) goto LAB_00c31af0;
              if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_00c31afc;
              lVar9 = *(long *)(lVar9 + lVar16 * 8);
              if ((lVar9 == 0) || (plVar14 = *(long **)(lVar9 + 0x18), plVar14 == (long *)0x0))
              goto LAB_00c31af0;
              (**(code **)(*plVar14 + 0x5a8))(plVar14,_Str____,*(undefined8 *)(*plVar14 + 0x5b0));
            }
          }
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
        if (lVar9 == 0) goto LAB_00c31af0;
        lVar9 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar9,*piVar1,0);
        if (lVar9 != 0) {
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
          if (lVar9 == 0) {
LAB_00c31af0:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          lVar9 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar9,*(undefined4 *)((long)__this + 0x10),0);
          lVar10 = *(long *)((long)__this + 0x28);
          if (lVar10 == 0) goto LAB_00c31af0;
          if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_00c31afc;
          lVar10 = *(long *)(lVar10 + lVar16 * 8);
          if ((lVar10 == 0) || (lVar9 == 0)) goto LAB_00c31af0;
          iStack_74 = DJKGLJOCFCE__HPCKHLLBFPL(lVar9,*(undefined4 *)(lVar10 + 0x10),0);
          lVar9 = *(long *)((long)__this + 0x28);
          if (lVar9 == 0) goto LAB_00c31af0;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_00c31afc;
          lVar9 = *(long *)(lVar9 + lVar16 * 8);
          if (lVar9 == 0) goto LAB_00c31af0;
          iVar4 = *(int *)(lVar9 + 0x14);
          iVar2 = iVar4;
          if (iStack_74 <= iVar4) {
            iVar2 = iStack_74;
          }
          bVar5 = -1 < iStack_74;
          iStack_74 = 0;
          if (bVar5) {
            iStack_74 = iVar2;
          }
          if (iVar4 <= iStack_74) {
            uVar12 = uVar12 + 1;
          }
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Menu_TypeInfo);
          }
          uVar13 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c31af0;
            uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
            if ((uVar6 & 1) != 0) {
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (__this == *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40)) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                    (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
                   (lVar9 = *(long *)(lVar9 + 0x2c0), lVar9 == 0)) goto LAB_00c31af0;
                if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_00c31afc;
                lVar9 = *(long *)(lVar9 + lVar16 * 8);
                if (lVar9 == 0) goto LAB_00c31af0;
                plVar14 = *(long **)(lVar9 + 0x18);
                uVar13 = System_Int32__ToString(&iStack_74,0);
                lVar9 = *(long *)((long)__this + 0x28);
                if (lVar9 == 0) goto LAB_00c31af0;
                if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_00c31afc;
                lVar9 = *(long *)(lVar9 + lVar16 * 8);
                if (lVar9 == 0) goto LAB_00c31af0;
                uVar7 = System_Int32__ToString(lVar9 + 0x14,0);
                uVar13 = System_String__Concat(uVar13,_Str__,uVar7,0);
                if (plVar14 == (long *)0x0) goto LAB_00c31af0;
                (**(code **)(*plVar14 + 0x5a8))(plVar14,uVar13,*(undefined8 *)(*plVar14 + 0x5b0));
                lVar9 = *(long *)((long)__this + 0x28);
                if (lVar9 == 0) goto LAB_00c31af0;
                if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_00c31afc;
                lVar9 = *(long *)(lVar9 + lVar16 * 8);
                if (lVar9 == 0) goto LAB_00c31af0;
                if (iStack_74 < *(int *)(lVar9 + 0x14)) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                      (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
                     (lVar9 = *(long *)(lVar9 + 0x2c0), lVar9 == 0)) goto LAB_00c31af0;
                  if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_00c31afc;
                  lVar9 = *(long *)(lVar9 + lVar16 * 8);
                  if ((lVar9 == 0) || (plVar14 = *(long **)(lVar9 + 0x10), plVar14 == (long *)0x0))
                  goto LAB_00c31af0;
                  pcVar11 = *(code **)(*plVar14 + 0x2a8);
                  uVar13 = *(undefined8 *)(*plVar14 + 0x2b0);
                  uVar18 = 0x3ecccccd;
                }
                else {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                      (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
                     (lVar9 = *(long *)(lVar9 + 0x2c0), lVar9 == 0)) goto LAB_00c31af0;
                  if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_00c31afc;
                  lVar9 = *(long *)(lVar9 + lVar16 * 8);
                  if ((lVar9 == 0) || (plVar14 = *(long **)(lVar9 + 0x10), plVar14 == (long *)0x0))
                  goto LAB_00c31af0;
                  pcVar11 = *(code **)(*plVar14 + 0x2a8);
                  uVar13 = *(undefined8 *)(*plVar14 + 0x2b0);
                  uVar18 = 0x3f800000;
                }
                (*pcVar11)(0x3f800000,0x3f800000,0x3f800000,uVar18,plVar14,uVar13);
                lVar9 = *(long *)((long)__this + 0x28);
                if (lVar9 == 0) goto LAB_00c31af0;
                if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_00c31afc;
                lVar9 = *(long *)(lVar9 + lVar16 * 8);
                if (lVar9 == 0) goto LAB_00c31af0;
                if (*(int *)(lVar9 + 0x10) - 1U < 2) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                      (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
                     (lVar9 = *(long *)(lVar9 + 0x2c0), lVar9 == 0)) goto LAB_00c31af0;
                  if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_00c31afc;
                  lVar9 = *(long *)(lVar9 + lVar16 * 8);
                  if (((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x10), lVar9 == 0)) ||
                     (lVar9 = UnityEngine_UI_Graphic__get_rectTransform(lVar9,0), lVar9 == 0))
                  goto LAB_00c31af0;
                  fVar17 = (float)UnityEngine_Transform__get_localScale(lVar9,0);
                  fVar19 = *(float *)((long)__this + 0x6c);
                  if (*(float *)((long)__this + 0x6c) == -1.0) {
                    *(float *)((long)__this + 0x6c) = fVar17;
                    fVar19 = fVar17;
                  }
                  lVar10 = *(long *)((long)__this + 0x28);
                  if (lVar10 == 0) goto LAB_00c31af0;
                  if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_00c31afc;
                  lVar10 = *(long *)(lVar10 + lVar16 * 8);
                  if (lVar10 == 0) goto LAB_00c31af0;
                  fVar17 = -ABS(fVar19);
                  if (*(int *)(lVar10 + 0x10) != 1) {
                    fVar17 = ABS(fVar19);
                  }
                  UnityEngine_Transform__set_localScale(fVar17,lVar9,0);
                }
              }
            }
          }
        }
      }
      lVar9 = *(long *)((long)__this + 0x28);
      lVar16 = lVar16 + 1;
    } while (lVar9 != 0);
  }
LAB_00c31750:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
LAB_00c319c8:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar16 = **(long **)(_Menu_TypeInfo + 0xb8);
  if (((lVar16 == 0) || (*(long *)(lVar16 + 0x20) == 0)) ||
     (lVar10 = *(long *)(*(long *)(lVar16 + 0x20) + 0x2a8), lVar10 == 0)) goto LAB_00c31750;
  uVar6 = lVar9 - 4;
  if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar6) {
    return uVar12;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    lVar16 = **(long **)(_Menu_TypeInfo + 0xb8);
    if (lVar16 == 0) goto LAB_00c31750;
  }
  if ((*(long *)(lVar16 + 0x20) == 0) ||
     (lVar16 = *(long *)(*(long *)(lVar16 + 0x20) + 0x2a8), lVar16 == 0)) goto LAB_00c31750;
  if (*(uint *)(lVar16 + 0x18) <= uVar6) goto LAB_00c31afc;
  uVar13 = *(undefined8 *)(lVar16 + lVar9 * 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar16 = **(long **)(_Menu_TypeInfo + 0xb8);
    if (((lVar16 == 0) || (*(long *)(lVar16 + 0x20) == 0)) ||
       (lVar10 = *(long *)(*(long *)(lVar16 + 0x20) + 0x2a8), lVar10 == 0)) goto LAB_00c31750;
    if (*(uint *)(lVar10 + 0x18) <= uVar6) {
LAB_00c31afc:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar10 = *(long *)(lVar10 + lVar9 * 8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar16 = **(long **)(_Menu_TypeInfo + 0xb8);
      if (lVar16 == 0) goto LAB_00c31750;
    }
    if ((*(long *)(lVar16 + 0x20) == 0) || (lVar10 == 0)) goto LAB_00c31750;
    lVar3 = 0x2b0;
    if ((long)(int)uVar12 <= (long)uVar6) {
      lVar3 = 0x2b8;
    }
    UnityEngine_UI_Image__set_sprite(lVar10,*(undefined8 *)(*(long *)(lVar16 + 0x20) + lVar3),0);
  }
  lVar9 = lVar9 + 1;
  goto LAB_00c319c8;
}


// ==== public void POIIKNJOHOP() { }   @0xb31f58

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Level__POIIKNJOHOP(void *__this)

{
  *(undefined2 *)((long)__this + 0x4c) = 0;
  *(undefined4 *)((long)__this + 0x48) = 0;
  return;
}


// ==== public void FOOFLNEEJFI() { }   @0xb320b0

/* WARNING: Removing unreachable block (ram,0x00c321fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Level__FOOFLNEEJFI(void *__this)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam00000000019170c8 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170c8 = 1;
  }
  uVar1 = Level__get_gui(__this);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = Main__KCHOEBEIOCE(0);
  if ((uVar2 & 1) == 0) {
LAB_00c321ac:
    UnityEngine_Time__get_realtimeSinceStartup(0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58), lVar3 == 0))
    goto LAB_00c3225c;
    if (*(char *)(lVar3 + 0x30) == '\0') goto LAB_00c321ac;
  }
  lVar3 = Level__get_gui(__this);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x30), lVar3 != 0)) {
    if (pcRam000000000191c8c0 == (code *)0x0) {
      pcRam000000000191c8c0 = (code *)func_0x00a678c4(&UNK_005b50fa,0);
    }
    (*pcRam000000000191c8c0)(lVar3,&stack0xffffffffffffffd0);
    return;
  }
LAB_00c3225c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



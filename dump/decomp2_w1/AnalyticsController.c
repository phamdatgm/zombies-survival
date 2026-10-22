// ==== public void MELFCMJLGPJ(int ALLBGCHDGNC) { }   @0xaef470

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__MELFCMJLGPJ(void *__this,int ALLBGCHDGNC)

{
  return;
}


// ==== public void PKLGNADJLIG(GUIGameplay.POFCDOMOIBH BNCKNDDBOPA) { }   @0xaf02e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__PKLGNADJLIG(void *__this,int BNCKNDDBOPA)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  int iStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int iStack_60;
  int iStack_54;
  
  if ((bRam0000000001916eb4 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&GUIGameplay_POFCDOMOIBH_TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__Tutorial___);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_step_name);
    func_0x00a67900(&Str_Tutorial);
    bRam0000000001916eb4 = 1;
  }
  iStack_54 = BNCKNDDBOPA;
  uVar1 = System_Int32__ToString(&iStack_54,0);
  uStack_70 = _GUIGameplay_POFCDOMOIBH_TypeInfo;
  uStack_68 = 0xffffffffffffffff;
  iStack_60 = BNCKNDDBOPA;
  uVar2 = System_Enum__ToString(&uStack_70,0);
  uVar1 = System_String__Concat(_Str_ANALYTICS__Tutorial___,uVar1,_Str__,uVar2,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0,0);
  lVar3 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (lVar3,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  iStack_54 = BNCKNDDBOPA;
  uVar1 = System_Int32__ToString(&iStack_54,0);
  uStack_88 = _GUIGameplay_POFCDOMOIBH_TypeInfo;
  uStack_80 = 0xffffffffffffffff;
  iStack_78 = BNCKNDDBOPA;
  uVar2 = System_Enum__ToString(&uStack_88,0);
  uVar1 = System_String__Concat(uVar1,_Str__,uVar2,0);
  if (lVar3 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
              (lVar3,_Str_step_name,uVar1,
               _Method_System_Collections_Generic_Dictionary_string__object__Add__);
    UnityEngine_Analytics_Analytics__CustomEvent(_Str_Tutorial,lVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void GMIAJGPBEPN(int PBFKBPCNKKF, int NHEMBDGCNFG, int HCBODNKILEA) { }   @0xaf0830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__GMIAJGPBEPN(void *__this,int PBFKBPCNKKF,int NHEMBDGCNFG,int HCBODNKILEA)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_38;
  int iStack_34;
  
  iStack_44 = HCBODNKILEA;
  iStack_38 = NHEMBDGCNFG;
  iStack_34 = PBFKBPCNKKF;
  if ((bRam0000000001916eb9 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Level_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str___attempts__);
    func_0x00a67900(&Str___car_upgrade_armor__);
    func_0x00a67900(&Str_car_upgrade_armor);
    func_0x00a67900(&Str_result);
    func_0x00a67900(&Str___car_upgrade_nitro__);
    func_0x00a67900(&Str_car_upgrade_wheel);
    func_0x00a67900(&Str_car_upgrade_gun);
    func_0x00a67900(&Str___car_upgrade_wheel__);
    func_0x00a67900(&Str_Level_End);
    func_0x00a67900(&Str___result__);
    func_0x00a67900(&Str___car_upgrade_gun__);
    func_0x00a67900(&Str_car_upgrade_engine);
    func_0x00a67900(&Str___car_upgrade_engine__);
    func_0x00a67900(&Str_null);
    func_0x00a67900(&Str_null__lvl_);
    func_0x00a67900(&Str_car_upgrade_nitro);
    func_0x00a67900(&Str_attempts);
    func_0x00a67900(&Str___playerLevel_);
    func_0x00a67900(&Str___car_);
    func_0x00a67900(&Str_ANALYTICS__Level_End__car_id__);
    func_0x00a67900(&Str___playerCar_);
    func_0x00a67900(&Str_level_id);
    func_0x00a67900(&Str_event_id);
    func_0x00a67900(&Str_ANALYTICS__Level_End__Error__level_);
    func_0x00a67900(&Str___complete_count__);
    func_0x00a67900(&Str_ANALYTICS__Level_End__level_id__);
    func_0x00a67900(&Str_complete_count);
    func_0x00a67900(&Str_car_id);
    bRam0000000001916eb9 = 1;
  }
  uStack_48 = 0;
  if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar1 = Level__FHMGLDDPEDJ(PBFKBPCNKKF,0);
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
  if (lVar2 != 0) {
    lVar2 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar2,PBFKBPCNKKF);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar3 != 0) {
      lVar3 = DAFNMLEKHAD__DKJLCJPBPPN(lVar3,HCBODNKILEA,1);
      if (((lVar2 == 0) || (lVar1 == 0)) || (lVar3 == 0)) {
        lVar4 = func_0x00a679a0(_string___TypeInfo,6);
        if (lVar4 != 0) {
          uVar8 = (uint)*(undefined8 *)(lVar4 + 0x18);
          if (uVar8 != 0) {
            *(undefined8 *)(lVar4 + 0x20) = _Str_ANALYTICS__Level_End__Error__level_;
            uVar5 = _Str_null;
            if (lVar1 != 0) {
              uVar5 = System_Int32__ToString(lVar1 + 0x10,0);
              uVar8 = (uint)*(undefined8 *)(lVar4 + 0x18);
            }
            if ((1 < uVar8) && (*(undefined8 *)(lVar4 + 0x28) = uVar5, uVar8 != 2)) {
              *(undefined8 *)(lVar4 + 0x30) = _Str___playerLevel_;
              uVar5 = _Str_null;
              if (lVar2 != 0) {
                uStack_48 = *(undefined4 *)(lVar2 + 0x10);
                uVar5 = System_Int32__ToString(&uStack_48,0);
                uVar8 = (uint)*(undefined8 *)(lVar4 + 0x18);
              }
              if ((3 < uVar8) && (*(undefined8 *)(lVar4 + 0x38) = uVar5, uVar8 != 4)) {
                *(undefined8 *)(lVar4 + 0x40) = _Str___playerCar_;
                if (lVar3 == 0) {
                  uVar5 = System_Int32__ToString(&iStack_34,0);
                  uVar7 = System_Int32__ToString(&iStack_44,0);
                  uVar5 = System_String__Concat(_Str_null__lvl_,uVar5,_Str___car_,uVar7,0);
                }
                else {
                  uStack_48 = *(undefined4 *)(lVar3 + 0x10);
                  uVar5 = System_Int32__ToString(&uStack_48,0);
                }
                if (5 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x48) = uVar5;
                  uVar5 = System_String__Concat(lVar4,0);
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_Main_TypeInfo);
                  }
                  Main__EEKNCFLMGDP(uVar5,0);
                  return;
                }
              }
            }
          }
          goto LAB_00bf1244;
        }
      }
      else {
        lVar4 = func_0x00a679a0(_string___TypeInfo,8);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x18) != 0) {
            *(undefined8 *)(lVar4 + 0x20) = _Str_ANALYTICS__Level_End__level_id__;
            uVar5 = System_Int32__ToString(&iStack_34,0);
            if ((1 < *(uint *)(lVar4 + 0x18)) &&
               (*(undefined8 *)(lVar4 + 0x28) = uVar5, *(uint *)(lVar4 + 0x18) != 2)) {
              *(undefined8 *)(lVar4 + 0x30) = _Str___attempts__;
              uStack_48 = *(undefined4 *)(lVar2 + 0x3c);
              uVar5 = System_Int32__ToString(&uStack_48,0);
              if ((3 < *(uint *)(lVar4 + 0x18)) &&
                 (*(undefined8 *)(lVar4 + 0x38) = uVar5, *(uint *)(lVar4 + 0x18) != 4)) {
                *(undefined8 *)(lVar4 + 0x40) = _Str___result__;
                uVar5 = System_Int32__ToString(&iStack_38,0);
                if ((5 < *(uint *)(lVar4 + 0x18)) &&
                   (*(undefined8 *)(lVar4 + 0x48) = uVar5, *(uint *)(lVar4 + 0x18) != 6)) {
                  *(undefined8 *)(lVar4 + 0x50) = _Str___complete_count__;
                  uStack_48 = *(undefined4 *)(lVar2 + 0x40);
                  uVar5 = System_Int32__ToString(&uStack_48,0);
                  if (7 < *(uint *)(lVar4 + 0x18)) {
                    *(undefined8 *)(lVar4 + 0x58) = uVar5;
                    uVar5 = System_String__Concat(lVar4,0);
                    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30(_Main_TypeInfo);
                    }
                    Main__GEMDEAMAGPG(uVar5,0,0);
                    lVar4 = func_0x00a679a0(_string___TypeInfo,0xc);
                    if (lVar4 == 0) goto LAB_00bf1248;
                    if (*(int *)(lVar4 + 0x18) != 0) {
                      *(undefined8 *)(lVar4 + 0x20) = _Str_ANALYTICS__Level_End__car_id__;
                      uVar5 = System_Int32__ToString(&iStack_44,0);
                      if ((1 < *(uint *)(lVar4 + 0x18)) &&
                         (*(undefined8 *)(lVar4 + 0x28) = uVar5, *(uint *)(lVar4 + 0x18) != 2)) {
                        *(undefined8 *)(lVar4 + 0x30) = _Str___car_upgrade_engine__;
                        uStack_48 = MKCBGHDANLA__IDOHKCCDGDG(lVar3,0,0);
                        uVar5 = System_Int32__ToString(&uStack_48,0);
                        if ((3 < *(uint *)(lVar4 + 0x18)) &&
                           (*(undefined8 *)(lVar4 + 0x38) = uVar5, *(uint *)(lVar4 + 0x18) != 4)) {
                          *(undefined8 *)(lVar4 + 0x40) = _Str___car_upgrade_wheel__;
                          uStack_48 = MKCBGHDANLA__IDOHKCCDGDG(lVar3,1,0);
                          uVar5 = System_Int32__ToString(&uStack_48,0);
                          if ((5 < *(uint *)(lVar4 + 0x18)) &&
                             (*(undefined8 *)(lVar4 + 0x48) = uVar5, *(uint *)(lVar4 + 0x18) != 6))
                          {
                            *(undefined8 *)(lVar4 + 0x50) = _Str___car_upgrade_gun__;
                            uStack_48 = MKCBGHDANLA__IDOHKCCDGDG(lVar3,2,0);
                            uVar5 = System_Int32__ToString(&uStack_48,0);
                            if ((7 < *(uint *)(lVar4 + 0x18)) &&
                               (*(undefined8 *)(lVar4 + 0x58) = uVar5, *(uint *)(lVar4 + 0x18) != 8)
                               ) {
                              *(undefined8 *)(lVar4 + 0x60) = _Str___car_upgrade_nitro__;
                              uStack_48 = MKCBGHDANLA__IDOHKCCDGDG(lVar3,3,0);
                              uVar5 = System_Int32__ToString(&uStack_48,0);
                              if ((9 < *(uint *)(lVar4 + 0x18)) &&
                                 (*(undefined8 *)(lVar4 + 0x68) = uVar5,
                                 *(uint *)(lVar4 + 0x18) != 10)) {
                                *(undefined8 *)(lVar4 + 0x70) = _Str___car_upgrade_armor__;
                                uStack_48 = MKCBGHDANLA__IDOHKCCDGDG(lVar3,4,0);
                                uVar5 = System_Int32__ToString(&uStack_48,0);
                                if (0xb < *(uint *)(lVar4 + 0x18)) {
                                  *(undefined8 *)(lVar4 + 0x78) = uVar5;
                                  uVar5 = System_String__Concat(lVar4,0);
                                  Main__GEMDEAMAGPG(uVar5,0,0);
                                  lVar4 = func_0x00a67b44(
                                                  _System_Collections_Generic_Dictionary_string__object__TypeInfo
                                                  );
                                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                                            (lVar4,
                                             _Method_System_Collections_Generic_Dictionary_string__object___ctor__
                                            );
                                  iStack_4c = iStack_34;
                                  uVar5 = func_0x00a67a38(_int_TypeInfo,&iStack_4c);
                                  if (lVar4 != 0) {
                                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                              (lVar4,_Str_level_id,uVar5,
                                               _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                              );
                                    iStack_50 = *(int *)(lVar2 + 0x3c);
                                    uVar5 = func_0x00a67a38(_int_TypeInfo,&iStack_50);
                                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                              (lVar4,_Str_attempts,uVar5,
                                               _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                              );
                                    iStack_54 = iStack_38;
                                    uVar5 = func_0x00a67a38(_int_TypeInfo,&iStack_54);
                                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                              (lVar4,_Str_result,uVar5,
                                               _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                              );
                                    uVar6 = Level__get_IsEvent(lVar1,0);
                                    if ((uVar6 & 1) != 0) {
                                      iStack_4c = DJKGLJOCFCE__EECPDELFCIL(lVar2,0);
                                      uVar5 = func_0x00a67a38(_int_TypeInfo,&iStack_4c);
                                      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                                (lVar4,_Str_event_id,uVar5,
                                                 _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                                );
                                    }
                                    iStack_4c = *(int *)(lVar2 + 0x40);
                                    uVar5 = func_0x00a67a38(_int_TypeInfo,&iStack_4c);
                                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                              (lVar4,_Str_complete_count,uVar5,
                                               _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                              );
                                    iStack_50 = iStack_44;
                                    uVar5 = func_0x00a67a38(_int_TypeInfo,&iStack_50);
                                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                              (lVar4,_Str_car_id,uVar5,
                                               _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                              );
                                    iStack_54 = MKCBGHDANLA__IDOHKCCDGDG(lVar3,0,0);
                                    uVar5 = func_0x00a67a38(_int_TypeInfo,&iStack_54);
                                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                              (lVar4,_Str_car_upgrade_engine,uVar5,
                                               _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                              );
                                    uStack_58 = MKCBGHDANLA__IDOHKCCDGDG(lVar3,1,0);
                                    uVar5 = func_0x00a67a38(_int_TypeInfo,&uStack_58);
                                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                              (lVar4,_Str_car_upgrade_wheel,uVar5,
                                               _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                              );
                                    uStack_5c = MKCBGHDANLA__IDOHKCCDGDG(lVar3,2,0);
                                    uVar5 = func_0x00a67a38(_int_TypeInfo,&uStack_5c);
                                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                              (lVar4,_Str_car_upgrade_gun,uVar5,
                                               _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                              );
                                    uStack_60 = MKCBGHDANLA__IDOHKCCDGDG(lVar3,3,0);
                                    uVar5 = func_0x00a67a38(_int_TypeInfo,&uStack_60);
                                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                              (lVar4,_Str_car_upgrade_nitro,uVar5,
                                               _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                              );
                                    uStack_64 = MKCBGHDANLA__IDOHKCCDGDG(lVar3,4,0);
                                    uVar5 = func_0x00a67a38(_int_TypeInfo,&uStack_64);
                                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                              (lVar4,_Str_car_upgrade_armor,uVar5,
                                               _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                              );
                                    UnityEngine_Analytics_Analytics__CustomEvent
                                              (_Str_Level_End,lVar4,0);
                                    return;
                                  }
                                  goto LAB_00bf1248;
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
LAB_00bf1244:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
      }
    }
  }
LAB_00bf1248:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void HBKCMEEGIMF() { }   @0xaf1f68

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__HBKCMEEGIMF(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916ebe & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__EncyclopediaOpen);
    func_0x00a67900(&Str_EncyclopediaOpen);
    bRam0000000001916ebe = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_ANALYTICS__EncyclopediaOpen,0,0);
  uVar2 = _Str_EncyclopediaOpen;
  uVar1 = System_String__IsNullOrEmpty(_Str_EncyclopediaOpen,0);
  if ((uVar1 & 1) == 0) {
    if (pcRam000000000191f018 == (code *)0x0) {
      pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
    }
    uVar1 = (*pcRam000000000191f018)();
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (pcRam000000000191f028 == (code *)0x0) {
      pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
    }
                    /* WARNING: Could not recover jumptable at 0x016d8fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191f028)(uVar2);
    return;
  }
  func_0x00a67914(&System_ArgumentException_TypeInfo);
  uVar2 = func_0x00a67b44();
  uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
  System_ArgumentException___ctor(uVar2,uVar3,0);
  uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
  auVar5 = func_0x00a67a20(uVar2,uVar3);
  uVar2 = auVar5._0_8_;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo);
    bRam000000000191f039 = 1;
  }
  uVar1 = System_String__IsNullOrEmpty(uVar2,0);
  if ((uVar1 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar2 = func_0x00a67b44();
    uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar2,uVar3,0);
    uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar2,uVar3);
LAB_016d9194:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (pcRam000000000191f018 == (code *)0x0) {
    pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
  }
  uVar1 = (*pcRam000000000191f018)();
  if ((uVar1 & 1) != 0) {
    if (auVar5._8_8_ == 0) {
      if (pcRam000000000191f028 == (code *)0x0) {
        pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
      }
                    /* WARNING: Could not recover jumptable at 0x016d9148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191f028)(uVar2);
      return;
    }
    lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
    UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar2);
    if (lVar4 == 0) goto LAB_016d9194;
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,auVar5._8_8_);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar4);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
  }
  return;
}


// ==== public void JOOHAKJLNLC(string FHOFNGHGNGF) { }   @0xaf2180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__JOOHAKJLNLC(void *__this,void *FHOFNGHGNGF)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001916ec2 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_CrossPromoZD2);
    func_0x00a67900(&Str_ANALYTICS__CrossPromoZD2__);
    func_0x00a67900(&Str_type);
    bRam0000000001916ec2 = 1;
  }
  uVar1 = System_String__Concat(_Str_ANALYTICS__CrossPromoZD2__,FHOFNGHGNGF,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0,0);
  lVar2 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (lVar2,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
            (lVar2,_Str_type,FHOFNGHGNGF,
             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
  uVar1 = _Str_CrossPromoZD2;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo,lVar2,0);
    bRam000000000191f039 = 1;
  }
  uVar3 = System_String__IsNullOrEmpty(uVar1,0);
  if ((uVar3 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar1 = func_0x00a67b44();
    uVar5 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar1,uVar5,0);
    uVar5 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar1,uVar5);
LAB_016d9194:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (pcRam000000000191f018 == (code *)0x0) {
    pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
  }
  uVar3 = (*pcRam000000000191f018)();
  if ((uVar3 & 1) != 0) {
    if (lVar2 == 0) {
      if (pcRam000000000191f028 == (code *)0x0) {
        pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
      }
                    /* WARNING: Could not recover jumptable at 0x016d9148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191f028)(uVar1);
      return;
    }
    lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
    UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar1);
    if (lVar4 == 0) goto LAB_016d9194;
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,lVar2);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar4);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
  }
  return;
}


// ==== public void EFHKCIDGLHC() { }   @0xaf2528

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__EFHKCIDGLHC(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916ec6 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_SettingsGFX);
    func_0x00a67900(&Str_ANALYTICS__SettingsGFX);
    bRam0000000001916ec6 = 1;
  }
  if (*(char *)((long)__this + 0x22) != '\0') {
    return;
  }
  *(undefined1 *)((long)__this + 0x22) = 1;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_ANALYTICS__SettingsGFX,0,0);
  uVar2 = _Str_SettingsGFX;
  uVar1 = System_String__IsNullOrEmpty(_Str_SettingsGFX,0);
  if ((uVar1 & 1) == 0) {
    if (pcRam000000000191f018 == (code *)0x0) {
      pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
    }
    uVar1 = (*pcRam000000000191f018)();
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (pcRam000000000191f028 == (code *)0x0) {
      pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
    }
                    /* WARNING: Could not recover jumptable at 0x016d8fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191f028)(uVar2);
    return;
  }
  func_0x00a67914(&System_ArgumentException_TypeInfo);
  uVar2 = func_0x00a67b44();
  uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
  System_ArgumentException___ctor(uVar2,uVar3,0);
  uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
  auVar5 = func_0x00a67a20(uVar2,uVar3);
  uVar2 = auVar5._0_8_;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo);
    bRam000000000191f039 = 1;
  }
  uVar1 = System_String__IsNullOrEmpty(uVar2,0);
  if ((uVar1 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar2 = func_0x00a67b44();
    uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar2,uVar3,0);
    uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar2,uVar3);
LAB_016d9194:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (pcRam000000000191f018 == (code *)0x0) {
    pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
  }
  uVar1 = (*pcRam000000000191f018)();
  if ((uVar1 & 1) != 0) {
    if (auVar5._8_8_ == 0) {
      if (pcRam000000000191f028 == (code *)0x0) {
        pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
      }
                    /* WARNING: Could not recover jumptable at 0x016d9148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191f028)(uVar2);
      return;
    }
    lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
    UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar2);
    if (lVar4 == 0) goto LAB_016d9194;
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,auVar5._8_8_);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar4);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
  }
  return;
}


// ==== public void DCAKJGANLFG(string LDDJJLJMOHD) { }   @0xaf2ba4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__DCAKJGANLFG(void *__this,void *LDDJJLJMOHD)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001916eca & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__CheatDetect__);
    func_0x00a67900(&Str_scene_name);
    func_0x00a67900(&Str_CheatDetect);
    bRam0000000001916eca = 1;
  }
  uVar1 = System_String__Concat(_Str_ANALYTICS__CheatDetect__,LDDJJLJMOHD,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0,0);
  lVar2 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (lVar2,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
            (lVar2,_Str_scene_name,LDDJJLJMOHD,
             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
  uVar1 = _Str_CheatDetect;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo,lVar2,0);
    bRam000000000191f039 = 1;
  }
  uVar3 = System_String__IsNullOrEmpty(uVar1,0);
  if ((uVar3 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar1 = func_0x00a67b44();
    uVar5 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar1,uVar5,0);
    uVar5 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar1,uVar5);
LAB_016d9194:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (pcRam000000000191f018 == (code *)0x0) {
    pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
  }
  uVar3 = (*pcRam000000000191f018)();
  if ((uVar3 & 1) != 0) {
    if (lVar2 == 0) {
      if (pcRam000000000191f028 == (code *)0x0) {
        pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
      }
                    /* WARNING: Could not recover jumptable at 0x016d9148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191f028)(uVar1);
      return;
    }
    lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
    UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar1);
    if (lVar4 == 0) goto LAB_016d9194;
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,lVar2);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar4);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
  }
  return;
}



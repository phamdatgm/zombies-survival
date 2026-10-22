// ==== public void JDPLKBLAJGI(int PBFKBPCNKKF, int HCBODNKILEA) { }   @0xaef474

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__JDPLKBLAJGI(void *__this,int PBFKBPCNKKF,int HCBODNKILEA)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  
  iStack_38 = HCBODNKILEA;
  iStack_34 = PBFKBPCNKKF;
  if ((bRam0000000001916eb1 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str___attempts__);
    func_0x00a67900(&Str___car_upgrade_armor__);
    func_0x00a67900(&Str_ANALYTICS__Level_Start__level_id__);
    func_0x00a67900(&Str_car_upgrade_armor);
    func_0x00a67900(&Str___car_upgrade_nitro__);
    func_0x00a67900(&Str_car_upgrade_wheel);
    func_0x00a67900(&Str_car_upgrade_gun);
    func_0x00a67900(&Str___car_upgrade_wheel__);
    func_0x00a67900(&Str___car_upgrade_gun__);
    func_0x00a67900(&Str_car_upgrade_engine);
    func_0x00a67900(&Str_ANALYTICS__Level_Start__Error);
    func_0x00a67900(&Str_Level_Start);
    func_0x00a67900(&Str___car_upgrade_engine__);
    func_0x00a67900(&Str_car_upgrade_nitro);
    func_0x00a67900(&Str_attempts);
    func_0x00a67900(&Str_level_id);
    func_0x00a67900(&Str___complete_count__);
    func_0x00a67900(&Str_complete_count);
    func_0x00a67900(&Str_car_id);
    func_0x00a67900(&Str_ANALYTICS__Level_Start__car_id__);
    bRam0000000001916eb1 = 1;
  }
  uStack_3c = 0;
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
  lVar1 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar1 != 0) {
    lVar1 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar1,PBFKBPCNKKF);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar2 != 0) {
      lVar2 = DAFNMLEKHAD__DKJLCJPBPPN(lVar2,HCBODNKILEA,1);
      if ((lVar1 == 0) || (lVar2 == 0)) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__EEKNCFLMGDP(_Str_ANALYTICS__Level_Start__Error);
        return;
      }
      lVar3 = func_0x00a679a0(_string___TypeInfo,6);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) != 0) {
          *(undefined8 *)(lVar3 + 0x20) = _Str_ANALYTICS__Level_Start__level_id__;
          uVar4 = System_Int32__ToString(&iStack_34,0);
          if ((1 < *(uint *)(lVar3 + 0x18)) &&
             (*(undefined8 *)(lVar3 + 0x28) = uVar4, *(uint *)(lVar3 + 0x18) != 2)) {
            *(undefined8 *)(lVar3 + 0x30) = _Str___attempts__;
            uStack_3c = *(undefined4 *)(lVar1 + 0x3c);
            uVar4 = System_Int32__ToString(&uStack_3c,0);
            if ((3 < *(uint *)(lVar3 + 0x18)) &&
               (*(undefined8 *)(lVar3 + 0x38) = uVar4, *(uint *)(lVar3 + 0x18) != 4)) {
              *(undefined8 *)(lVar3 + 0x40) = _Str___complete_count__;
              uStack_3c = *(undefined4 *)(lVar1 + 0x40);
              uVar4 = System_Int32__ToString(&uStack_3c,0);
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = uVar4;
                uVar4 = System_String__Concat(lVar3,0);
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_Main_TypeInfo);
                }
                Main__GEMDEAMAGPG(uVar4,0,0);
                lVar3 = func_0x00a679a0(_string___TypeInfo,0xc);
                if (lVar3 == 0) goto LAB_00befbec;
                if (*(int *)(lVar3 + 0x18) != 0) {
                  *(undefined8 *)(lVar3 + 0x20) = _Str_ANALYTICS__Level_Start__car_id__;
                  uVar4 = System_Int32__ToString(&iStack_38,0);
                  if ((1 < *(uint *)(lVar3 + 0x18)) &&
                     (*(undefined8 *)(lVar3 + 0x28) = uVar4, *(uint *)(lVar3 + 0x18) != 2)) {
                    *(undefined8 *)(lVar3 + 0x30) = _Str___car_upgrade_engine__;
                    uStack_3c = MKCBGHDANLA__IDOHKCCDGDG(lVar2,0,0);
                    uVar4 = System_Int32__ToString(&uStack_3c,0);
                    if ((3 < *(uint *)(lVar3 + 0x18)) &&
                       (*(undefined8 *)(lVar3 + 0x38) = uVar4, *(uint *)(lVar3 + 0x18) != 4)) {
                      *(undefined8 *)(lVar3 + 0x40) = _Str___car_upgrade_wheel__;
                      uStack_3c = MKCBGHDANLA__IDOHKCCDGDG(lVar2,1,0);
                      uVar4 = System_Int32__ToString(&uStack_3c,0);
                      if ((5 < *(uint *)(lVar3 + 0x18)) &&
                         (*(undefined8 *)(lVar3 + 0x48) = uVar4, *(uint *)(lVar3 + 0x18) != 6)) {
                        *(undefined8 *)(lVar3 + 0x50) = _Str___car_upgrade_gun__;
                        uStack_3c = MKCBGHDANLA__IDOHKCCDGDG(lVar2,2,0);
                        uVar4 = System_Int32__ToString(&uStack_3c,0);
                        if ((7 < *(uint *)(lVar3 + 0x18)) &&
                           (*(undefined8 *)(lVar3 + 0x58) = uVar4, *(uint *)(lVar3 + 0x18) != 8)) {
                          *(undefined8 *)(lVar3 + 0x60) = _Str___car_upgrade_nitro__;
                          uStack_3c = MKCBGHDANLA__IDOHKCCDGDG(lVar2,3,0);
                          uVar4 = System_Int32__ToString(&uStack_3c,0);
                          if ((9 < *(uint *)(lVar3 + 0x18)) &&
                             (*(undefined8 *)(lVar3 + 0x68) = uVar4, *(uint *)(lVar3 + 0x18) != 10))
                          {
                            *(undefined8 *)(lVar3 + 0x70) = _Str___car_upgrade_armor__;
                            uStack_3c = MKCBGHDANLA__IDOHKCCDGDG(lVar2,4,0);
                            uVar4 = System_Int32__ToString(&uStack_3c,0);
                            if (0xb < *(uint *)(lVar3 + 0x18)) {
                              *(undefined8 *)(lVar3 + 0x78) = uVar4;
                              uVar4 = System_String__Concat(lVar3,0);
                              Main__GEMDEAMAGPG(uVar4,0,0);
                              lVar3 = func_0x00a67b44(
                                                  _System_Collections_Generic_Dictionary_string__object__TypeInfo
                                                  );
                              System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                                        (lVar3,
                                         _Method_System_Collections_Generic_Dictionary_string__object___ctor__
                                        );
                              iStack_40 = iStack_34;
                              uVar4 = func_0x00a67a38(_int_TypeInfo,&iStack_40);
                              if (lVar3 != 0) {
                                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                          (lVar3,_Str_level_id,uVar4,
                                           _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                          );
                                uStack_44 = *(undefined4 *)(lVar1 + 0x3c);
                                uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_44);
                                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                          (lVar3,_Str_attempts,uVar4,
                                           _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                          );
                                uStack_48 = *(undefined4 *)(lVar1 + 0x40);
                                uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_48);
                                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                          (lVar3,_Str_complete_count,uVar4,
                                           _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                          );
                                iStack_4c = iStack_38;
                                uVar4 = func_0x00a67a38(_int_TypeInfo,&iStack_4c);
                                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                          (lVar3,_Str_car_id,uVar4,
                                           _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                          );
                                uStack_50 = MKCBGHDANLA__IDOHKCCDGDG(lVar2,0,0);
                                uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_50);
                                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                          (lVar3,_Str_car_upgrade_engine,uVar4,
                                           _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                          );
                                uStack_54 = MKCBGHDANLA__IDOHKCCDGDG(lVar2,1,0);
                                uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_54);
                                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                          (lVar3,_Str_car_upgrade_wheel,uVar4,
                                           _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                          );
                                uStack_58 = MKCBGHDANLA__IDOHKCCDGDG(lVar2,2,0);
                                uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_58);
                                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                          (lVar3,_Str_car_upgrade_gun,uVar4,
                                           _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                          );
                                uStack_5c = MKCBGHDANLA__IDOHKCCDGDG(lVar2,3,0);
                                uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_5c);
                                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                          (lVar3,_Str_car_upgrade_nitro,uVar4,
                                           _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                          );
                                uStack_60 = MKCBGHDANLA__IDOHKCCDGDG(lVar2,4,0);
                                uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_60);
                                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                          (lVar3,_Str_car_upgrade_armor,uVar4,
                                           _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                          );
                                UnityEngine_Analytics_Analytics__CustomEvent
                                          (_Str_Level_Start,lVar3,0);
                                return;
                              }
                              goto LAB_00befbec;
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
        il2cpp_throw_967b58();
      }
    }
  }
LAB_00befbec:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void AEOHFJNPEJA() { }   @0xaf04d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__AEOHFJNPEJA(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916eb5 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_SettingsControls);
    func_0x00a67900(&Str_ANALYTICS__SettingsControls);
    bRam0000000001916eb5 = 1;
  }
  if (*(char *)((long)__this + 0x20) != '\0') {
    return;
  }
  *(undefined1 *)((long)__this + 0x20) = 1;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_ANALYTICS__SettingsControls,0,0);
  uVar2 = _Str_SettingsControls;
  uVar1 = System_String__IsNullOrEmpty(_Str_SettingsControls,0);
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


// ==== private void DBGNHGJOOCB() { }   @0xaf124c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__DBGNHGJOOCB(void *__this)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *__this_00;
  ulong uVar8;
  long lVar9;
  undefined4 uStack_3c;
  long *aplStack_38 [2];
  
  if ((bRam0000000001916eba & 1) == 0) {
    func_0x00a67900(&AdvController_TypeInfo);
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__App_Start__IsFirstStart);
    bRam0000000001916eba = 1;
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
  lVar3 = _Main_TypeInfo;
  lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar9 == 0) {
LAB_00bf13fc:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)(lVar9 + 0x98) != 1) {
    return;
  }
  **(undefined1 **)(_AdvController_TypeInfo + 0xb8) = 1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
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
  if (lVar3 == 0) goto LAB_00bf13fc;
  DAFNMLEKHAD__MJIAJNKPEAL(lVar3,0);
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_System_DateTime_TypeInfo);
  }
  uVar4 = System_DateTime__get_Now(0);
  if (lVar3 == 0) goto LAB_00bf13fc;
  DAFNMLEKHAD__PGHAPGLHFPH(lVar3,uVar4);
  plVar5 = _Str_ANALYTICS__App_Start__IsFirstStart;
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
  __this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (__this_00 == (void *)0x0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  bVar2 = DAFNMLEKHAD__LLEFEIHEJDE(__this_00);
  if (!bVar2) {
    return;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__Log(plVar5,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c590c8;
  uVar4 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar5 == (long *)0x0)) goto LAB_00c590c8;
  lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
  if (lVar3 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar4,0,0);
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
  plVar5 = *(long **)(lVar3 + 0x1e8);
  if ((plVar5 == (long *)0x0) ||
     (lVar9 = (**(code **)(*plVar5 + 0x598))(plVar5,*(undefined8 *)(*plVar5 + 0x5a0)), lVar9 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar9 + 0x10)) {
    if (*(long *)(lVar3 + 0x1e8) == 0) goto LAB_00c16768;
    uVar6 = UnityEngine_Component__get_gameObject(*(long *)(lVar3 + 0x1e8),0);
    if ((*(long *)(lVar3 + 0x1e8) == 0) ||
       (lVar9 = UnityEngine_Component__get_transform(*(long *)(lVar3 + 0x1e8),0), lVar9 == 0))
    goto LAB_00c16768;
    uVar7 = UnityEngine_Transform__get_parent(lVar9,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar9 = UnityEngine_Object__Instantiate_object_
                      (uVar6,uVar7,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar9 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar9,aplStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar3 + 0x1e8) = aplStack_38[0];
    if (aplStack_38[0] == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*aplStack_38[0] + 0x5a8))
              (aplStack_38[0],_Str_,*(undefined8 *)(*aplStack_38[0] + 0x5b0));
  }
  plVar5 = *(long **)(lVar3 + 0x1e8);
  lVar3 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar5 != (long *)0x0) &&
     (uVar6 = (**(code **)(*plVar5 + 0x598))(plVar5,*(undefined8 *)(*plVar5 + 0x5a0)), lVar3 != 0))
  {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar3 + 0x20) = uVar6, uVar1 != 1 &&
         (*(undefined8 *)(lVar3 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar3 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar3 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar6 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar6 = System_String__Format(_Str__0_f2_,uVar6,0);
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar3 + 0x40) = uVar6, uVar1 != 5)) &&
         (*(undefined8 *)(lVar3 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar3 + 0x50) = uVar4;
        uVar4 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x58) = uVar4;
          uVar4 = System_String__Concat(lVar3,0);
          (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x5b0));
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


// ==== public void MLJBGIEIBJA() { }   @0xaf1ff4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__MLJBGIEIBJA(void *__this)

{
  return;
}


// ==== public void .ctor() { }   @0xaf22b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController___ctor(void *__this)

{
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public void MICBBJKICOP(string CICIFFFOBLK, float KEFPEDBJENE, Decimal AJHFJLJLOOM, string DLBELLGFEOM, string EFAMGLIMNBI, string DKBDCJAIPLC, string JJDDKNOGDIK) { }   @0xaf25d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__MICBBJKICOP
               (void *__this,void *CICIFFFOBLK,float KEFPEDBJENE,void *AJHFJLJLOOM,void *DLBELLGFEOM
               ,void *EFAMGLIMNBI,void *DKBDCJAIPLC,void *JJDDKNOGDIK)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  
  fStack_34 = KEFPEDBJENE;
  if ((bRam0000000001916ec7 & 1) == 0) {
    func_0x00a67900(&System_Decimal_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__Revenue__current_level____nul);
    func_0x00a67900(&Str___price_converted__);
    func_0x00a67900(&Str_ANALYTICS__Revenue__productId__);
    func_0x00a67900(&Str_level_id);
    func_0x00a67900(&Str___price_in_usd__);
    bRam0000000001916ec7 = 1;
  }
  uStack_38 = 0;
  lVar2 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar2 == 0) goto LAB_00bf28a0;
  uVar1 = *(uint *)(lVar2 + 0x18);
  if (((uVar1 != 0) &&
      (*(undefined8 *)(lVar2 + 0x20) = _Str_ANALYTICS__Revenue__productId__, uVar1 != 1)) &&
     (*(void **)(lVar2 + 0x28) = CICIFFFOBLK, 2 < uVar1)) {
    *(undefined8 *)(lVar2 + 0x30) = _Str___price_in_usd__;
    uVar3 = System_Single__ToString(&fStack_34,0);
    if ((3 < *(uint *)(lVar2 + 0x18)) &&
       (*(undefined8 *)(lVar2 + 0x38) = uVar3, *(uint *)(lVar2 + 0x18) != 4)) {
      *(undefined8 *)(lVar2 + 0x40) = _Str___price_converted__;
      if (*(int *)(_System_Decimal_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uStack_38 = System_Decimal__op_Explicit(AJHFJLJLOOM,DLBELLGFEOM,0);
      uVar3 = System_Single__ToString(&uStack_38,0);
      if (5 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x48) = uVar3;
        uVar3 = System_String__Concat(lVar2,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        Main__GEMDEAMAGPG(uVar3,0,0);
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8) != 0) {
          lVar2 = DAFNMLEKHAD__DCOOPMCEMNE();
          if (lVar2 == 0) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            Main__EEKNCFLMGDP(_Str_ANALYTICS__Revenue__current_level____nul);
          }
          else {
            lVar4 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo)
            ;
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                      (lVar4,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
            uStack_3c = *(undefined4 *)(lVar2 + 0x10);
            uVar3 = func_0x00a67a38(_int_TypeInfo,&uStack_3c);
            if (lVar4 == 0) goto LAB_00bf28a0;
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                      (lVar4,_Str_level_id,uVar3,
                       _Method_System_Collections_Generic_Dictionary_string__object__Add__);
          }
          return;
        }
LAB_00bf28a0:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


// ==== public void GJEJLEDIILK(int HCBODNKILEA) { }   @0xaf2cd8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__GJEJLEDIILK(void *__this,int HCBODNKILEA)

{
  undefined8 uVar1;
  long lVar2;
  int iStack_38;
  int iStack_34;
  
  iStack_34 = HCBODNKILEA;
  if ((bRam0000000001916ecb & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Buy_New_Car);
    func_0x00a67900(&Str_ANALYTICS__Buy_New_Car__);
    func_0x00a67900(&Str_car_id);
    bRam0000000001916ecb = 1;
  }
  uVar1 = System_Int32__ToString(&iStack_34,0);
  uVar1 = System_String__Concat(_Str_ANALYTICS__Buy_New_Car__,uVar1,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0,0);
  lVar2 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (lVar2,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  iStack_38 = iStack_34;
  uVar1 = func_0x00a67a38(_int_TypeInfo,&iStack_38);
  if (lVar2 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
              (lVar2,_Str_car_id,uVar1,
               _Method_System_Collections_Generic_Dictionary_string__object__Add__);
    UnityEngine_Analytics_Analytics__CustomEvent(_Str_Buy_New_Car,lVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



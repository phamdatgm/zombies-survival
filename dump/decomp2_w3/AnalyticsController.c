// ==== public void ODLOKNOHMOB(KKMHKJEGDLA BPHDIJAFHJM) { }   @0xaeffd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__ODLOKNOHMOB(void *__this,int BPHDIJAFHJM)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int iStack_60;
  int iStack_54;
  
  if ((bRam0000000001916eb2 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&KKMHKJEGDLA_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Achievement_Claimed);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_achievement_id);
    func_0x00a67900(&Str_ANALYTICS__Achievement_Claimed__);
    bRam0000000001916eb2 = 1;
  }
  iStack_54 = BPHDIJAFHJM;
  uVar1 = System_Int32__ToString(&iStack_54,0);
  uStack_70 = _KKMHKJEGDLA_TypeInfo;
  uStack_68 = 0xffffffffffffffff;
  iStack_60 = BPHDIJAFHJM;
  uVar2 = System_Enum__ToString(&uStack_70,0);
  uVar1 = System_String__Concat(_Str_ANALYTICS__Achievement_Claimed__,uVar1,_Str__,uVar2,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0,0);
  lVar3 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (lVar3,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  iStack_74 = BPHDIJAFHJM;
  uVar1 = func_0x00a67a38(_int_TypeInfo,&iStack_74);
  if (lVar3 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
              (lVar3,_Str_achievement_id,uVar1,
               _Method_System_Collections_Generic_Dictionary_string__object__Add__);
    UnityEngine_Analytics_Analytics__CustomEvent(_Str_Achievement_Claimed,lVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void FKMJMCBODAF() { }   @0xaf0580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__FKMJMCBODAF(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916eb6 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_SettingsFPS);
    func_0x00a67900(&Str_ANALYTICS__SettingsFPS);
    bRam0000000001916eb6 = 1;
  }
  if (*(char *)((long)__this + 0x23) != '\0') {
    return;
  }
  *(undefined1 *)((long)__this + 0x23) = 1;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_ANALYTICS__SettingsFPS,0,0);
  uVar2 = _Str_SettingsFPS;
  uVar1 = System_String__IsNullOrEmpty(_Str_SettingsFPS,0);
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


// ==== public void NLMEEFHDKMH(int EGCBHPKONII, string PFLOEJOJJAP, string AJFBHMKJHJD) { }   @0xaf14fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__NLMEEFHDKMH
               (void *__this,int EGCBHPKONII,void *PFLOEJOJJAP,void *AJFBHMKJHJD)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  
  iStack_64 = EGCBHPKONII;
  if ((bRam0000000001916ebb & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str___attempts__);
    func_0x00a67900(&Str_item_id);
    func_0x00a67900(&Str_item_type);
    func_0x00a67900(&Str_ANALYTICS__Gold_Spend__item_type__);
    func_0x00a67900(&Str___item_id__);
    func_0x00a67900(&Str_attempts);
    func_0x00a67900(&Str_ANALYTICS__Rewarded_Video__current_level);
    func_0x00a67900(&Str_Gold_Spend);
    func_0x00a67900(&Str___level_id__);
    func_0x00a67900(&Str_level_id);
    func_0x00a67900(&Str___item_value__);
    func_0x00a67900(&Str_car_id);
    func_0x00a67900(&Str___car_id__);
    func_0x00a67900(&Str_item_value);
    bRam0000000001916ebb = 1;
  }
  uStack_68 = 0;
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
  if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8) != 0) {
    lVar2 = DAFNMLEKHAD__DCOOPMCEMNE();
    if (lVar2 == 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__EEKNCFLMGDP(_Str_ANALYTICS__Rewarded_Video__current_level,0);
      return;
    }
    lVar3 = func_0x00a679a0(_string___TypeInfo,0xc);
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if ((((uVar1 != 0) &&
           (*(undefined8 *)(lVar3 + 0x20) = _Str_ANALYTICS__Gold_Spend__item_type__, uVar1 != 1)) &&
          (*(void **)(lVar3 + 0x28) = PFLOEJOJJAP, 2 < uVar1)) &&
         ((*(undefined8 *)(lVar3 + 0x30) = _Str___item_id__, uVar1 != 3 &&
          (*(void **)(lVar3 + 0x38) = AJFBHMKJHJD, 4 < uVar1)))) {
        *(undefined8 *)(lVar3 + 0x40) = _Str___item_value__;
        uVar4 = System_Int32__ToString(&iStack_64,0);
        if ((5 < *(uint *)(lVar3 + 0x18)) &&
           (*(undefined8 *)(lVar3 + 0x48) = uVar4, *(uint *)(lVar3 + 0x18) != 6)) {
          *(undefined8 *)(lVar3 + 0x50) = _Str___car_id__;
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar4 = System_Int32__ToString(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c,0);
          if ((7 < *(uint *)(lVar3 + 0x18)) &&
             (*(undefined8 *)(lVar3 + 0x58) = uVar4, *(uint *)(lVar3 + 0x18) != 8)) {
            *(undefined8 *)(lVar3 + 0x60) = _Str___level_id__;
            uStack_68 = *(undefined4 *)(lVar2 + 0x10);
            uVar4 = System_Int32__ToString(&uStack_68,0);
            if ((9 < *(uint *)(lVar3 + 0x18)) &&
               (*(undefined8 *)(lVar3 + 0x68) = uVar4, *(uint *)(lVar3 + 0x18) != 10)) {
              *(undefined8 *)(lVar3 + 0x70) = _Str___attempts__;
              uStack_68 = *(undefined4 *)(lVar2 + 0x3c);
              uVar4 = System_Int32__ToString(&uStack_68,0);
              if (0xb < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x78) = uVar4;
                uVar4 = System_String__Concat(lVar3,0);
                Main__GEMDEAMAGPG(uVar4,0,0);
                lVar3 = func_0x00a67b44(
                                       _System_Collections_Generic_Dictionary_string__object__TypeInfo
                                       );
                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                          (lVar3,
                           _Method_System_Collections_Generic_Dictionary_string__object___ctor__);
                if (lVar3 != 0) {
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                            (lVar3,_Str_item_type,PFLOEJOJJAP,
                             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                            (lVar3,_Str_item_id,AJFBHMKJHJD,
                             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
                  iStack_6c = iStack_64;
                  uVar4 = func_0x00a67a38(_int_TypeInfo,&iStack_6c);
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                            (lVar3,_Str_item_value,uVar4,
                             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
                  uStack_70 = *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
                  uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_70);
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                            (lVar3,_Str_car_id,uVar4,
                             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
                  uStack_74 = *(undefined4 *)(lVar2 + 0x10);
                  uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_74);
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                            (lVar3,_Str_level_id,uVar4,
                             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
                  uStack_78 = *(undefined4 *)(lVar2 + 0x3c);
                  uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_78);
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                            (lVar3,_Str_attempts,uVar4,
                             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
                  UnityEngine_Analytics_Analytics__CustomEvent(_Str_Gold_Spend,lVar3,0);
                  return;
                }
                goto LAB_00bf19a0;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
  }
LAB_00bf19a0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void KHDFDGMBOIJ() { }   @0xaf1ff8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__KHDFDGMBOIJ(void *__this)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uStack_3c;
  long *aplStack_38 [2];
  
  if ((bRam0000000001916ebf & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_AnalyticsController_init___);
    bRam0000000001916ebf = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_AnalyticsController_init___,0,0);
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
  lVar2 = _Main_TypeInfo;
  lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar8 == 0) {
LAB_00bf13fc:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)(lVar8 + 0x98) != 1) {
    return;
  }
  **(undefined1 **)(_AdvController_TypeInfo + 0xb8) = 1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
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
  if (lVar2 == 0) goto LAB_00bf13fc;
  DAFNMLEKHAD__MJIAJNKPEAL(lVar2,0);
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_System_DateTime_TypeInfo);
  }
  uVar3 = System_DateTime__get_Now(0);
  if (lVar2 == 0) goto LAB_00bf13fc;
  DAFNMLEKHAD__PGHAPGLHFPH(lVar2,uVar3);
  plVar4 = _Str_ANALYTICS__App_Start__IsFirstStart;
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
  lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar2 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = DAFNMLEKHAD__LLEFEIHEJDE(lVar2,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__Log(plVar4,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c590c8;
  uVar3 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar4 == (long *)0x0)) goto LAB_00c590c8;
  lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar3 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  if (lVar2 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar3,0,0);
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
  plVar4 = *(long **)(lVar2 + 0x1e8);
  if ((plVar4 == (long *)0x0) ||
     (lVar8 = (**(code **)(*plVar4 + 0x598))(plVar4,*(undefined8 *)(*plVar4 + 0x5a0)), lVar8 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar8 + 0x10)) {
    if (*(long *)(lVar2 + 0x1e8) == 0) goto LAB_00c16768;
    uVar5 = UnityEngine_Component__get_gameObject(*(long *)(lVar2 + 0x1e8),0);
    if ((*(long *)(lVar2 + 0x1e8) == 0) ||
       (lVar8 = UnityEngine_Component__get_transform(*(long *)(lVar2 + 0x1e8),0), lVar8 == 0))
    goto LAB_00c16768;
    uVar6 = UnityEngine_Transform__get_parent(lVar8,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar8 = UnityEngine_Object__Instantiate_object_
                      (uVar5,uVar6,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar8 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar8,aplStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar2 + 0x1e8) = aplStack_38[0];
    if (aplStack_38[0] == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*aplStack_38[0] + 0x5a8))
              (aplStack_38[0],_Str_,*(undefined8 *)(*aplStack_38[0] + 0x5b0));
  }
  plVar4 = *(long **)(lVar2 + 0x1e8);
  lVar2 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar4 != (long *)0x0) &&
     (uVar5 = (**(code **)(*plVar4 + 0x598))(plVar4,*(undefined8 *)(*plVar4 + 0x5a0)), lVar2 != 0))
  {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar2 + 0x20) = uVar5, uVar1 != 1 &&
         (*(undefined8 *)(lVar2 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar2 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar2 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar5 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar5 = System_String__Format(_Str__0_f2_,uVar5,0);
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar2 + 0x40) = uVar5, uVar1 != 5)) &&
         (*(undefined8 *)(lVar2 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar2 + 0x50) = uVar3;
        uVar3 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x58) = uVar3;
          uVar3 = System_String__Concat(lVar2,0);
          (**(code **)(*plVar4 + 0x5a8))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x5b0));
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


// ==== public void PAHGPPCKPBM(string FHOFNGHGNGF) { }   @0xaf22bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__PAHGPPCKPBM(void *__this,void *FHOFNGHGNGF)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001916ec3 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_PurchaseNotValid);
    func_0x00a67900(&Str_Type);
    func_0x00a67900(&Str_ANALYTICS__PurchaseNotValid__);
    bRam0000000001916ec3 = 1;
  }
  uVar1 = System_String__Concat(_Str_ANALYTICS__PurchaseNotValid__,FHOFNGHGNGF,0);
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
            (lVar2,_Str_Type,FHOFNGHGNGF,
             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
  uVar1 = _Str_PurchaseNotValid;
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


// ==== public void JOMBJMIMKHJ() { }   @0xaf28a4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__JOMBJMIMKHJ(void *__this)

{
  return;
}


// ==== public void PKLJHOHIJEP(string FHOFNGHGNGF) { }   @0xaf2e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__PKLJHOHIJEP(void *__this,void *FHOFNGHGNGF)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001916ecc & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__AdvBannerClick__);
    func_0x00a67900(&Str_AdvBannerClick);
    func_0x00a67900(&Str_window);
    bRam0000000001916ecc = 1;
  }
  uVar1 = System_String__Concat(_Str_ANALYTICS__AdvBannerClick__,FHOFNGHGNGF,0);
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
            (lVar2,_Str_window,FHOFNGHGNGF,
             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
  uVar1 = _Str_AdvBannerClick;
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



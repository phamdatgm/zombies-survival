// ==== public void JGPNJOOHDBA(int ALLBGCHDGNC) { }   @0xaf01a8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__JGPNJOOHDBA(void *__this,int ALLBGCHDGNC)

{
  return;
}


// ==== public void KNPMHFKJGNL() { }   @0xaf062c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__KNPMHFKJGNL(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916eb7 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Shop_Visited);
    func_0x00a67900(&Str_ANALYTICS__Shop_Visited);
    bRam0000000001916eb7 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_ANALYTICS__Shop_Visited,false);
  uVar2 = _Str_Shop_Visited;
  uVar1 = System_String__IsNullOrEmpty(_Str_Shop_Visited,0);
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


// ==== public void JCMFKBONIGF(string FHOFNGHGNGF) { }   @0xaf1b88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__JCMFKBONIGF(void *__this,void *FHOFNGHGNGF)

{
  long lVar1;
  undefined8 uVar2;
  void *CIDKMFLFJEJ;
  long lVar3;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if ((bRam0000000001916ebc & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__Rewarded_Video__current_level);
    func_0x00a67900(&Str_level_id);
    func_0x00a67900(&Str__level_id__);
    func_0x00a67900(&Str_ANALYTICS__Rewarded_Video__);
    func_0x00a67900(&Str_Rewarded_Video);
    func_0x00a67900(&Str_type);
    bRam0000000001916ebc = 1;
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
  if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8) != 0) {
    lVar1 = DAFNMLEKHAD__DCOOPMCEMNE();
    if (lVar1 == 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__EEKNCFLMGDP(_Str_ANALYTICS__Rewarded_Video__current_level,0);
    }
    else {
      uStack_44 = *(undefined4 *)(lVar1 + 0x10);
      uVar2 = System_Int32__ToString(&uStack_44,0);
      CIDKMFLFJEJ = (void *)System_String__Concat
                                      (_Str_ANALYTICS__Rewarded_Video__,FHOFNGHGNGF,_Str__level_id__
                                       ,uVar2,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      Main__GEMDEAMAGPG(CIDKMFLFJEJ,false);
      lVar3 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                (lVar3,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if (lVar3 == 0) goto LAB_00bf1de0;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                (lVar3,_Str_type,FHOFNGHGNGF,
                 _Method_System_Collections_Generic_Dictionary_string__object__Add__);
      uStack_48 = *(undefined4 *)(lVar1 + 0x10);
      uVar2 = func_0x00a67a38(_int_TypeInfo,&uStack_48);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                (lVar3,_Str_level_id,uVar2,
                 _Method_System_Collections_Generic_Dictionary_string__object__Add__);
      UnityEngine_Analytics_Analytics__CustomEvent(_Str_Rewarded_Video,lVar3,0);
    }
    return;
  }
LAB_00bf1de0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void KPMBGEFPJCE() { }   @0xaf2068

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__KPMBGEFPJCE(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916ec0 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__FreeReviveTutorial);
    func_0x00a67900(&Str_FreeReviveTutorial);
    bRam0000000001916ec0 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_ANALYTICS__FreeReviveTutorial,false);
  uVar2 = _Str_FreeReviveTutorial;
  uVar1 = System_String__IsNullOrEmpty(_Str_FreeReviveTutorial,0);
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


// ==== public void CCFACNADLJH() { }   @0xaf23f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__CCFACNADLJH(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916ec4 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_RatingOpen);
    func_0x00a67900(&Str_ANALYTICS__RatingOpen);
    bRam0000000001916ec4 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_ANALYTICS__RatingOpen,false);
  uVar2 = _Str_RatingOpen;
  uVar1 = System_String__IsNullOrEmpty(_Str_RatingOpen,0);
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


// ==== public void DFHNBMEPNDH(string FHOFNGHGNGF) { }   @0xaf28a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__DFHNBMEPNDH(void *__this,void *FHOFNGHGNGF)

{
  void *CIDKMFLFJEJ;
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001916ec8 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_SocialClick);
    func_0x00a67900(&Str_ANALYTICS__SocialClick__);
    func_0x00a67900(&Str_type);
    bRam0000000001916ec8 = 1;
  }
  CIDKMFLFJEJ = (void *)System_String__Concat(_Str_ANALYTICS__SocialClick__,FHOFNGHGNGF,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(CIDKMFLFJEJ,false);
  lVar1 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (lVar1,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
            (lVar1,_Str_type,FHOFNGHGNGF,
             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
  uVar4 = _Str_SocialClick;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo,lVar1,0);
    bRam000000000191f039 = 1;
  }
  uVar2 = System_String__IsNullOrEmpty(uVar4,0);
  if ((uVar2 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar4 = func_0x00a67b44();
    uVar5 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar4,uVar5,0);
    uVar5 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar4,uVar5);
LAB_016d9194:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (pcRam000000000191f018 == (code *)0x0) {
    pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
  }
  uVar2 = (*pcRam000000000191f018)();
  if ((uVar2 & 1) != 0) {
    if (lVar1 == 0) {
      if (pcRam000000000191f028 == (code *)0x0) {
        pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
      }
                    /* WARNING: Could not recover jumptable at 0x016d9148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191f028)(uVar4);
      return;
    }
    lVar3 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
    UnityEngine_Analytics_CustomEventData___ctor(lVar3,uVar4);
    if (lVar3 == 0) goto LAB_016d9194;
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar3,lVar1);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar3);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar3);
  }
  return;
}


// ==== public void CBPJCFHKMLE(string FHOFNGHGNGF, int GBADBNPHNGF) { }   @0xaf2f84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__CBPJCFHKMLE(void *__this,void *FHOFNGHGNGF,int GBADBNPHNGF)

{
  ulong uVar1;
  void *CIDKMFLFJEJ;
  long lVar2;
  undefined8 uVar3;
  int iStack_34;
  
  if ((bRam0000000001916ecd & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__AccelerometerProblem__);
    func_0x00a67900(&Str_api);
    func_0x00a67900(&Str_device);
    func_0x00a67900(&Str_AccelerometerProblem);
    func_0x00a67900(&Str_type);
    bRam0000000001916ecd = 1;
  }
  uVar1 = UnityEngine_PlayerPrefs__HasKey(_Str_AccelerometerProblem,0);
  if ((uVar1 & 1) == 0) {
    UnityEngine_PlayerPrefs__SetInt(_Str_AccelerometerProblem,1,0);
    CIDKMFLFJEJ = (void *)System_String__Concat
                                    (_Str_ANALYTICS__AccelerometerProblem__,FHOFNGHGNGF,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__GEMDEAMAGPG(CIDKMFLFJEJ,false);
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
    iStack_34 = GBADBNPHNGF;
    uVar3 = func_0x00a67a38(_int_TypeInfo,&iStack_34);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
              (lVar2,_Str_api,uVar3,
               _Method_System_Collections_Generic_Dictionary_string__object__Add__);
    uVar3 = UnityEngine_SystemInfo__get_deviceModel(0);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
              (lVar2,_Str_device,uVar3,
               _Method_System_Collections_Generic_Dictionary_string__object__Add__);
    UnityEngine_Analytics_Analytics__CustomEvent(_Str_AccelerometerProblem,lVar2,0);
  }
  return;
}



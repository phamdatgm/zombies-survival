// ==== public bool EDNAEPDDBPJ() { }   @0xb597c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool AdvController__EDNAEPDDBPJ(void *__this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam00000000019171d4 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    bRam00000000019171d4 = 1;
  }
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = MaxSdkAndroid__IsInitialized(0);
  if (((uVar2 & 1) == 0) || (*(char *)((long)__this + 0x34) == '\0')) {
    if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Application__get_isEditor(0);
    if ((uVar2 & 1) == 0) {
      return false;
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
  lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar3 != 0) {
    uVar2 = DAFNMLEKHAD__MHBEPDHNNFH(lVar3,0);
    if ((uVar2 & 1) != 0) {
      return false;
    }
    if ((bRam00000000019171e1 & 1) == 0) {
      func_0x00a67900(&Main_TypeInfo);
      bRam00000000019171e1 = 1;
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
    lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar3 != 0) {
      lVar3 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar3,0,0);
      if (lVar3 == 0) {
        return false;
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
      lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((lVar3 != 0) && (lVar3 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar3,0,0), lVar3 != 0)) {
        uStack_28 = *(undefined8 *)(lVar3 + 0x1c);
        uStack_30 = *(undefined8 *)(lVar3 + 0x14);
        iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_30,0);
        return 0 < iVar1;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public bool AKGPHJEILLB() { }   @0xb59ee4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool AdvController__AKGPHJEILLB(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam00000000019171d9 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    bRam00000000019171d9 = 1;
  }
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = MaxSdkAndroid__IsInitialized(0);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)((long)__this + 0x38);
    if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = MaxSdkAndroid__IsInterstitialReady(uVar2,0);
    if ((uVar1 & 1) != 0) {
      return true;
    }
  }
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return false;
}


// ==== public bool NKNJOFHCDIF(string MGIDIKDJDPG) { }   @0xb5a838

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool AdvController__NKNJOFHCDIF(void *__this,void *MGIDIKDJDPG)

{
  float *pfVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  void *__this_00;
  long lVar7;
  float fVar8;
  float fStack_68;
  byte abStack_64 [4];
  
  if ((bRam00000000019171dd & 1) == 0) {
    func_0x00a67900(&AdvController_TypeInfo);
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_ADV_1__is_first_session__);
    func_0x00a67900(&Str___IsDisableInter__);
    func_0x00a67900(&Str___event__);
    func_0x00a67900(&Str__sec__interval_);
    func_0x00a67900(&Str___time__);
    func_0x00a67900(&Str_NO_adv__Try_to_show_after_20_seconds_);
    func_0x00a67900(&Str_sec___);
    func_0x00a67900(&Str_____);
    func_0x00a67900(&Str_ADV_2__Next_show_after__);
    func_0x00a67900(&Str___is_show_adv_1_session__);
    func_0x00a67900(&Str_ADV__SHOW_AppLovin_Max_);
    bRam00000000019171dd = 1;
  }
  abStack_64[0] = 0;
  fStack_68 = 0.0;
  if (**(char **)(_AdvController_TypeInfo + 0xb8) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar7 = *(long *)(_Menu_TypeInfo + 0xb8);
    if (*(char *)(lVar7 + 0xc) == '\0') {
LAB_00c5a9d8:
      uVar4 = AdvController__FIDKMPCKMMB();
      if ((uVar4 & 1) == 0) goto LAB_00c5a9e8;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar7 = *(long *)(_Menu_TypeInfo + 0xb8);
      }
      if (*(char *)(lVar7 + 0xe) == '\0') goto LAB_00c5a9d8;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar7 = *(long *)(_Menu_TypeInfo + 0xb8);
      }
      if (*(int *)(lVar7 + 0x10) != 1) goto LAB_00c5a9d8;
    }
    *(undefined1 *)((long)__this + 0x67) = 1;
  }
LAB_00c5a9e8:
  lVar7 = func_0x00a679a0(_string___TypeInfo,0xc);
  if (lVar7 == 0) goto LAB_00c5aed8;
  if (*(int *)(lVar7 + 0x18) == 0) goto LAB_00c5aed4;
  *(undefined8 *)(lVar7 + 0x20) = _Str_ADV_1__is_first_session__;
  if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = System_Boolean__ToString(*(undefined8 *)(_AdvController_TypeInfo + 0xb8),0);
  if ((*(uint *)(lVar7 + 0x18) < 2) ||
     (*(undefined8 *)(lVar7 + 0x28) = uVar5, *(uint *)(lVar7 + 0x18) == 2)) goto LAB_00c5aed4;
  *(undefined8 *)(lVar7 + 0x30) = _Str___is_show_adv_1_session__;
  uVar5 = System_Boolean__ToString((char *)((long)__this + 0x67),0);
  if ((*(uint *)(lVar7 + 0x18) < 4) ||
     (*(undefined8 *)(lVar7 + 0x38) = uVar5, *(uint *)(lVar7 + 0x18) == 4)) goto LAB_00c5aed4;
  *(undefined8 *)(lVar7 + 0x40) = _Str___IsDisableInter__;
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
  if (lVar6 == 0) goto LAB_00c5aed8;
  abStack_64[0] = DAFNMLEKHAD__MHBEPDHNNFH(lVar6,0);
  abStack_64[0] = abStack_64[0] & 1;
  uVar5 = System_Boolean__ToString(abStack_64,0);
  if ((*(uint *)(lVar7 + 0x18) < 6) ||
     (*(undefined8 *)(lVar7 + 0x48) = uVar5, *(uint *)(lVar7 + 0x18) == 6)) goto LAB_00c5aed4;
  *(undefined8 *)(lVar7 + 0x50) = _Str___time__;
  fStack_68 = (float)UnityEngine_Time__get_time(0);
  uVar5 = System_Single__ToString(&fStack_68,0);
  if ((*(uint *)(lVar7 + 0x18) < 8) ||
     (*(undefined8 *)(lVar7 + 0x58) = uVar5, *(uint *)(lVar7 + 0x18) == 8)) goto LAB_00c5aed4;
  pfVar1 = (float *)((long)__this + 0x24);
  *(undefined8 *)(lVar7 + 0x60) = _Str_____;
  uVar5 = System_Single__ToString(pfVar1,0);
  if ((*(uint *)(lVar7 + 0x18) < 10) ||
     (*(undefined8 *)(lVar7 + 0x68) = uVar5, *(uint *)(lVar7 + 0x18) == 10)) goto LAB_00c5aed4;
  *(undefined8 *)(lVar7 + 0x70) = _Str___event__;
  uVar5 = System_Int32__ToString(*(long *)(_AdvController_TypeInfo + 0xb8) + 4,0);
  if (*(uint *)(lVar7 + 0x18) < 0xc) goto LAB_00c5aed4;
  *(undefined8 *)(lVar7 + 0x78) = uVar5;
  uVar5 = System_String__Concat(lVar7,0);
  Main__GEMDEAMAGPG(uVar5,0);
  if ((**(char **)(_AdvController_TypeInfo + 0xb8) != '\0') &&
     (*(char *)((long)__this + 0x67) == '\0')) goto LAB_00c5ad90;
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
  if (lVar7 == 0) goto LAB_00c5aed8;
  uVar4 = DAFNMLEKHAD__MHBEPDHNNFH(lVar7,0);
  if (((uVar4 & 1) == 0) && (*(char *)((long)__this + 0x20) != '\0')) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if (((uVar4 & 1) == 0) || (uVar4 = AdvController__HICAMEDDDKG(), (uVar4 & 1) == 0))
    goto LAB_00c5ad90;
    fVar8 = (float)UnityEngine_Time__get_time(0);
    iVar2 = *(int *)(*(long *)(_AdvController_TypeInfo + 0xb8) + 4);
    if (fVar8 <= *(float *)((long)__this + 0x24)) {
      if (iVar2 != *(int *)((long)__this + 0x68)) goto LAB_00c5ad90;
LAB_00c5acec:
      *(undefined4 *)(*(long *)(_AdvController_TypeInfo + 0xb8) + 4) = 0;
    }
    else if (iVar2 == *(int *)((long)__this + 0x68)) goto LAB_00c5acec;
    bVar3 = AdvController__AKGPHJEILLB(__this);
    if (bVar3) {
      AdvController__AOEKDBOFCIM(__this);
      uVar5 = *(undefined8 *)((long)__this + 0x38);
      if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      MaxSdkAndroid__ShowInterstitial(uVar5,MGIDIKDJDPG,0,0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (__this_00 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40),
         __this_00 == (void *)0x0)) goto LAB_00c5aed8;
      AnalyticsController__FFLOAIJLGHB(__this_00);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(_Str_ADV__SHOW_AppLovin_Max_,0);
      bVar3 = true;
    }
    else {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(_Str_NO_adv__Try_to_show_after_20_seconds_,0);
      fVar8 = (float)UnityEngine_Time__get_time(0);
      bVar3 = false;
      *pfVar1 = fVar8 + 20.0;
    }
  }
  else {
LAB_00c5ad90:
    bVar3 = false;
  }
  lVar7 = func_0x00a679a0(_string___TypeInfo,5);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) != 0) {
      *(undefined8 *)(lVar7 + 0x20) = _Str_ADV_2__Next_show_after__;
      uVar5 = System_Single__ToString(pfVar1,0);
      if ((1 < *(uint *)(lVar7 + 0x18)) &&
         (*(undefined8 *)(lVar7 + 0x28) = uVar5, *(uint *)(lVar7 + 0x18) != 2)) {
        *(undefined8 *)(lVar7 + 0x30) = _Str_sec___;
        fVar8 = *pfVar1;
        fStack_68 = (float)UnityEngine_Time__get_time(0);
        fStack_68 = fVar8 - fStack_68;
        uVar5 = System_Single__ToString(&fStack_68,0);
        if ((3 < *(uint *)(lVar7 + 0x18)) &&
           (*(undefined8 *)(lVar7 + 0x38) = uVar5, *(uint *)(lVar7 + 0x18) != 4)) {
          *(undefined8 *)(lVar7 + 0x40) = _Str__sec__interval_;
          uVar5 = System_String__Concat(lVar7,0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Main_TypeInfo);
          }
          Main__GEMDEAMAGPG(uVar5,0);
          return bVar3;
        }
      }
    }
LAB_00c5aed4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
LAB_00c5aed8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void OnInterstitialHiddenEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }   @0xb5b2a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__OnInterstitialHiddenEvent(void *__this,void *adUnitId,void *adInfo)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  void *extraout_x1;
  undefined8 uVar8;
  undefined4 uStack_3c;
  long *aplStack_38 [2];
  
  if ((bRam00000000019171e2 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_AppLovin__OnInterstitialDismissedEvent);
    bRam00000000019171e2 = 1;
    adUnitId = extraout_x1;
  }
  AdvController__BIJIMEAHGLM(__this,adUnitId);
  AdvController__EnableAudio();
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar2 = _Str_AppLovin__OnInterstitialDismissedEvent;
  if ((bRam0000000001917206 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Debug_TypeInfo);
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
  lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar6 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = DAFNMLEKHAD__LLEFEIHEJDE(lVar6,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__Log(plVar2,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c590c8;
  uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar2 == (long *)0x0)) goto LAB_00c590c8;
  lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar8 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
  if (lVar6 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar8,0,0);
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
  plVar2 = *(long **)(lVar6 + 0x1e8);
  if ((plVar2 == (long *)0x0) ||
     (lVar3 = (**(code **)(*plVar2 + 0x598))(plVar2,*(undefined8 *)(*plVar2 + 0x5a0)), lVar3 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar3 + 0x10)) {
    if (*(long *)(lVar6 + 0x1e8) == 0) goto LAB_00c16768;
    uVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar6 + 0x1e8),0);
    if ((*(long *)(lVar6 + 0x1e8) == 0) ||
       (lVar3 = UnityEngine_Component__get_transform(*(long *)(lVar6 + 0x1e8),0), lVar3 == 0))
    goto LAB_00c16768;
    uVar5 = UnityEngine_Transform__get_parent(lVar3,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar3 = UnityEngine_Object__Instantiate_object_
                      (uVar4,uVar5,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar3 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar3,aplStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar6 + 0x1e8) = aplStack_38[0];
    if (aplStack_38[0] == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*aplStack_38[0] + 0x5a8))
              (aplStack_38[0],_Str_,*(undefined8 *)(*aplStack_38[0] + 0x5b0));
  }
  plVar2 = *(long **)(lVar6 + 0x1e8);
  lVar6 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar2 != (long *)0x0) &&
     (uVar4 = (**(code **)(*plVar2 + 0x598))(plVar2,*(undefined8 *)(*plVar2 + 0x5a0)), lVar6 != 0))
  {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar6 + 0x20) = uVar4, uVar1 != 1 &&
         (*(undefined8 *)(lVar6 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar6 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar6 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar4 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar4 = System_String__Format(_Str__0_f2_,uVar4,0);
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar6 + 0x40) = uVar4, uVar1 != 5)) &&
         (*(undefined8 *)(lVar6 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar6 + 0x50) = uVar8;
        uVar8 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x58) = uVar8;
          uVar8 = System_String__Concat(lVar6,0);
          (**(code **)(*plVar2 + 0x5a8))(plVar2,uVar8,*(undefined8 *)(*plVar2 + 0x5b0));
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


// ==== private void OnBannerAdClickedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }   @0xb5b540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__OnBannerAdClickedEvent(void *__this,void *adUnitId,void *adInfo)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  
  if ((bRam00000000019171e7 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_donate);
    func_0x00a67900(&Str_exit);
    func_0x00a67900(&Str_no_money);
    func_0x00a67900(&Str_encyclopedia);
    func_0x00a67900(&Str_hp_low);
    func_0x00a67900(&Str_na);
    func_0x00a67900(&Str_hp_info);
    func_0x00a67900(&Str_pause);
    func_0x00a67900(&Str_settings);
    func_0x00a67900(&Str_buy_item);
    func_0x00a67900(&Str_results);
    func_0x00a67900(&Str_special_offer);
    bRam00000000019171e7 = 1;
    adUnitId = extraout_x1;
  }
  uVar2 = _Str_na;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Menu_TypeInfo,adUnitId);
    adUnitId = extraout_x1_00;
  }
  uVar5 = uVar2;
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
LAB_00c5b72c:
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CarController_TypeInfo,adUnitId);
      adUnitId = extraout_x1_02;
    }
    uVar8 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo,adUnitId);
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c5bb94;
      uVar8 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0)) ||
            (lVar6 = *(long *)(lVar6 + 0x68), lVar6 == 0)) ||
           (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c5bb94;
        uVar3 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
        if ((uVar3 & 1) != 0) {
          puVar7 = (undefined8 *)&Str_pause;
          goto LAB_00c5bab8;
        }
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
            (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0)) ||
           ((lVar6 = *(long *)(lVar6 + 0x58), lVar6 == 0 ||
            (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0))))
        goto LAB_00c5bb94;
        uVar3 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
        uVar5 = _Str_results;
        if ((uVar3 & 1) == 0) {
          uVar5 = uVar2;
        }
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Menu_TypeInfo,adUnitId);
      adUnitId = extraout_x1_01;
    }
    uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo,adUnitId);
    }
    auVar10 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    adUnitId = auVar10._8_8_;
    if ((auVar10._0_8_ & 1) == 0) goto LAB_00c5b72c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c5bb94;
    uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    auVar10 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    adUnitId = auVar10._8_8_;
    if ((auVar10._0_8_ & 1) == 0) goto LAB_00c5b72c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
       ((lVar6 = *(long *)(lVar6 + 0x108), lVar6 == 0 ||
        (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c5bb94;
    uVar3 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
          (lVar6 = *(long *)(lVar6 + 0x98), lVar6 == 0)) ||
         (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c5bb94;
      uVar3 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar3 & 1) != 0) {
        puVar7 = (undefined8 *)&Str_buy_item;
        goto LAB_00c5bab8;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
         ((lVar6 = *(long *)(lVar6 + 0xa0), lVar6 == 0 ||
          (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c5bb94;
      uVar3 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar3 & 1) != 0) {
        puVar7 = (undefined8 *)&Str_no_money;
        goto LAB_00c5bab8;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
         ((lVar6 = *(long *)(lVar6 + 200), lVar6 == 0 ||
          (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c5bb94;
      uVar3 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar3 & 1) != 0) {
        puVar7 = (undefined8 *)&Str_hp_info;
        goto LAB_00c5bab8;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
          (lVar6 = *(long *)(lVar6 + 0xd0), lVar6 == 0)) ||
         (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c5bb94;
      uVar3 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar3 & 1) != 0) {
        puVar7 = (undefined8 *)&Str_hp_low;
        goto LAB_00c5bab8;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
         ((lVar6 = *(long *)(lVar6 + 0x180), lVar6 == 0 ||
          (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c5bb94;
      uVar3 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar3 & 1) != 0) {
        puVar7 = (undefined8 *)&Str_encyclopedia;
        goto LAB_00c5bab8;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
         ((lVar6 = *(long *)(lVar6 + 0xa8), lVar6 == 0 ||
          (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c5bb94;
      uVar3 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar3 & 1) != 0) {
        puVar7 = (undefined8 *)&Str_donate;
        goto LAB_00c5bab8;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
          (lVar6 = *(long *)(lVar6 + 0xe0), lVar6 == 0)) ||
         (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c5bb94;
      uVar3 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar3 & 1) != 0) {
        puVar7 = (undefined8 *)&Str_settings;
        goto LAB_00c5bab8;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
         (lVar6 = *(long *)(lVar6 + 0x650), lVar6 == 0)) goto LAB_00c5bb94;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar1) {
        uVar9 = 0;
        do {
          if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar4 = *(long *)(lVar6 + (long)(int)uVar9 * 8 + 0x20);
          if (lVar4 == 0) goto LAB_00c5bb94;
          if (*(int *)(lVar4 + 0x2c) == 3) {
            lVar4 = UnityEngine_Component__get_gameObject(lVar4,0);
            if (lVar4 == 0) goto LAB_00c5bb94;
            uVar3 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
            if ((uVar3 & 1) != 0) {
              puVar7 = (undefined8 *)&Str_special_offer;
              goto LAB_00c5bab8;
            }
          }
          uVar1 = *(uint *)(lVar6 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar1);
      }
    }
    else {
      puVar7 = (undefined8 *)&Str_exit;
LAB_00c5bab8:
      uVar5 = *puVar7;
    }
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
     (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40) == 0)) {
LAB_00c5bb94:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam0000000001916ecc & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__,uVar5,0);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__AdvBannerClick__);
    func_0x00a67900(&Str_AdvBannerClick);
    func_0x00a67900(&Str_window);
    bRam0000000001916ecc = 1;
  }
  uVar2 = System_String__Concat(_Str_ANALYTICS__AdvBannerClick__,uVar5,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar2,0,0);
  lVar6 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (lVar6,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
            (lVar6,_Str_window,uVar5,
             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
  uVar2 = _Str_AdvBannerClick;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo,lVar6,0);
    bRam000000000191f039 = 1;
  }
  uVar3 = System_String__IsNullOrEmpty(uVar2,0);
  if ((uVar3 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar2 = func_0x00a67b44();
    uVar5 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar2,uVar5,0);
    uVar5 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar2,uVar5);
LAB_016d9194:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (pcRam000000000191f018 == (code *)0x0) {
    pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
  }
  uVar3 = (*pcRam000000000191f018)();
  if ((uVar3 & 1) != 0) {
    if (lVar6 == 0) {
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
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,lVar6);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar4);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
  }
  return;
}


// ==== private void OnBannerAdLoadFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo) { }   @0xb5bcb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__OnBannerAdLoadFailedEvent(void *__this,void *adUnitId,void *errorInfo)

{
  undefined8 uVar1;
  
  if ((bRam00000000019171e9 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_AppLovin__OnBannerAdCollapsedEvent__);
    func_0x00a67900(&Str___arg2__);
    bRam00000000019171e9 = 1;
  }
  if (errorInfo != (void *)0x0) {
    uVar1 = System_String__Concat
                      (_Str_AppLovin__OnBannerAdCollapsedEvent__,adUnitId,_Str___arg2__,
                       *(undefined8 *)((long)errorInfo + 0x18),0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__GEMDEAMAGPG(uVar1,0);
    *(undefined1 *)((long)__this + 0x34) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void MEAIDGHKEOL() { }   @0xb5be58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__MEAIDGHKEOL(void *__this)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *unaff_x25;
  
  if ((bRam00000000019171ee & 1) == 0) {
    func_0x00a67900(&System_Action_string__MaxSdkBase_AdInfo__TypeInfo);
    func_0x00a67900(&System_Action_string__MaxSdkBase_ErrorInfo__TypeInfo);
    func_0x00a67900(&Method_AdvController_OnBannerAdClickedEvent__);
    func_0x00a67900(&Method_AdvController_OnBannerAdCollapsedEvent__);
    func_0x00a67900(&Method_AdvController_OnBannerAdExpandedEvent__);
    func_0x00a67900(&Method_AdvController_OnBannerAdLoadFailedEvent__);
    func_0x00a67900(&Method_AdvController_OnBannerAdLoadedEvent__);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    func_0x00a67900(&Str_AppLovin__InitializeBannerAds);
    bRam00000000019171ee = 1;
  }
  uVar8 = func_0x00a67b44(_System_Action_string__MaxSdkBase_AdInfo__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar8,__this,_Method_AdvController_OnBannerAdLoadedEvent__,0);
  MaxSdkCallbacks_Banner__add_OnAdLoadedEvent(uVar8,0);
  uVar8 = func_0x00a67b44(_System_Action_string__MaxSdkBase_ErrorInfo__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar8,__this,_Method_AdvController_OnBannerAdLoadFailedEvent__,0);
  MaxSdkCallbacks_Banner__add_OnAdLoadFailedEvent(uVar8,0);
  uVar8 = func_0x00a67b44(_System_Action_string__MaxSdkBase_AdInfo__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar8,__this,_Method_AdvController_OnBannerAdExpandedEvent__,0);
  MaxSdkCallbacks_Banner__add_OnAdExpandedEvent(uVar8,0);
  uVar8 = func_0x00a67b44(_System_Action_string__MaxSdkBase_AdInfo__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar8,__this,_Method_AdvController_OnBannerAdCollapsedEvent__,0);
  MaxSdkCallbacks_Banner__add_OnAdCollapsedEvent(uVar8,0);
  uVar8 = func_0x00a67b44(_System_Action_string__MaxSdkBase_AdInfo__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar8,__this,_Method_AdvController_OnBannerAdClickedEvent__,0);
  MaxSdkCallbacks_Banner__add_OnAdClickedEvent(uVar8,0);
  uVar8 = *(undefined8 *)((long)__this + 0x48);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  MaxSdkAndroid__CreateBanner(uVar8,7,0);
  MaxSdkAndroid__SetBannerBackgroundColor(0,0,0,0,*(undefined8 *)((long)__this + 0x48),0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar2 = _Str_AppLovin__InitializeBannerAds;
  if ((bRam0000000001917206 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Debug_TypeInfo);
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
  lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar6 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = DAFNMLEKHAD__LLEFEIHEJDE(lVar6,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__Log(plVar2,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c590c8;
  uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar2 == (long *)0x0)) goto LAB_00c590c8;
  lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar8 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
  if (lVar6 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar8,0,0);
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
  plVar2 = *(long **)(lVar6 + 0x1e8);
  if ((plVar2 == (long *)0x0) ||
     (lVar3 = (**(code **)(*plVar2 + 0x598))(plVar2,*(undefined8 *)(*plVar2 + 0x5a0)), lVar3 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar3 + 0x10)) {
    if (*(long *)(lVar6 + 0x1e8) == 0) goto LAB_00c16768;
    uVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar6 + 0x1e8),0);
    if ((*(long *)(lVar6 + 0x1e8) == 0) ||
       (lVar3 = UnityEngine_Component__get_transform(*(long *)(lVar6 + 0x1e8),0), lVar3 == 0))
    goto LAB_00c16768;
    uVar5 = UnityEngine_Transform__get_parent(lVar3,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar3 = UnityEngine_Object__Instantiate_object_
                      (uVar4,uVar5,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar3 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar3,&stack0xffffffffffffffc8,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar6 + 0x1e8) = unaff_x25;
    if (unaff_x25 == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*unaff_x25 + 0x5a8))(unaff_x25,_Str_,*(undefined8 *)(*unaff_x25 + 0x5b0));
  }
  plVar2 = *(long **)(lVar6 + 0x1e8);
  lVar6 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar2 != (long *)0x0) &&
     (uVar4 = (**(code **)(*plVar2 + 0x598))(plVar2,*(undefined8 *)(*plVar2 + 0x5a0)), lVar6 != 0))
  {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar6 + 0x20) = uVar4, uVar1 != 1 &&
         (*(undefined8 *)(lVar6 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar6 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar6 + 0x38) = _Str___;
      UnityEngine_Time__get_time(0);
      uVar4 = func_0x00a67a38(_float_TypeInfo,&stack0xffffffffffffffc4);
      uVar4 = System_String__Format(_Str__0_f2_,uVar4,0);
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar6 + 0x40) = uVar4, uVar1 != 5)) &&
         (*(undefined8 *)(lVar6 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar6 + 0x50) = uVar8;
        uVar8 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x58) = uVar8;
          uVar8 = System_String__Concat(lVar6,0);
          (**(code **)(*plVar2 + 0x5a8))(plVar2,uVar8,*(undefined8 *)(*plVar2 + 0x5b0));
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


// ==== public void KMIIPJHJPBM() { }   @0xb5c160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__KMIIPJHJPBM(void *__this)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *unaff_x25;
  
  if ((bRam00000000019171f3 & 1) == 0) {
    func_0x00a67900(&System_Action_string__MaxSdkBase_AdInfo__TypeInfo);
    func_0x00a67900(&System_Action_string__MaxSdkBase_ErrorInfo__TypeInfo);
    func_0x00a67900(&System_Action_string__MaxSdkBase_ErrorInfo__MaxSdkBase_AdInfo__TypeInfo);
    func_0x00a67900(&Method_AdvController_InterstitialFailedToDisplayEvent__);
    func_0x00a67900(&Method_AdvController_OnInterstitialDisplayedEvent__);
    func_0x00a67900(&Method_AdvController_OnInterstitialFailedEvent__);
    func_0x00a67900(&Method_AdvController_OnInterstitialHiddenEvent__);
    func_0x00a67900(&Method_AdvController_OnInterstitialLoadedEvent__);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_AppLovin__InitializeInterstitialAds);
    bRam00000000019171f3 = 1;
  }
  uVar8 = func_0x00a67b44(_System_Action_string__MaxSdkBase_AdInfo__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar8,__this,_Method_AdvController_OnInterstitialLoadedEvent__,0);
  MaxSdkCallbacks_Interstitial__add_OnAdLoadedEvent(uVar8,0);
  uVar8 = func_0x00a67b44(_System_Action_string__MaxSdkBase_ErrorInfo__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar8,__this,_Method_AdvController_OnInterstitialFailedEvent__,0);
  MaxSdkCallbacks_Interstitial__add_OnAdLoadFailedEvent(uVar8,0);
  uVar8 = func_0x00a67b44(_System_Action_string__MaxSdkBase_ErrorInfo__MaxSdkBase_AdInfo__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar8,__this,_Method_AdvController_InterstitialFailedToDisplayEvent__,0);
  MaxSdkCallbacks_Interstitial__add_OnAdDisplayFailedEvent(uVar8,0);
  uVar8 = func_0x00a67b44(_System_Action_string__MaxSdkBase_AdInfo__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar8,__this,_Method_AdvController_OnInterstitialHiddenEvent__,0);
  MaxSdkCallbacks_Interstitial__add_OnAdHiddenEvent(uVar8,0);
  uVar8 = func_0x00a67b44(_System_Action_string__MaxSdkBase_AdInfo__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar8,__this,_Method_AdvController_OnInterstitialDisplayedEvent__,0);
  MaxSdkCallbacks_Interstitial__add_OnAdDisplayedEvent(uVar8,0);
  AdvController__BIJIMEAHGLM(__this);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar2 = _Str_AppLovin__InitializeInterstitialAds;
  if ((bRam0000000001917206 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Debug_TypeInfo);
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
  lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar6 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = DAFNMLEKHAD__LLEFEIHEJDE(lVar6,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__Log(plVar2,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c590c8;
  uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar2 == (long *)0x0)) goto LAB_00c590c8;
  lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar8 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
  if (lVar6 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar8,0,0);
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
  plVar2 = *(long **)(lVar6 + 0x1e8);
  if ((plVar2 == (long *)0x0) ||
     (lVar3 = (**(code **)(*plVar2 + 0x598))(plVar2,*(undefined8 *)(*plVar2 + 0x5a0)), lVar3 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar3 + 0x10)) {
    if (*(long *)(lVar6 + 0x1e8) == 0) goto LAB_00c16768;
    uVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar6 + 0x1e8),0);
    if ((*(long *)(lVar6 + 0x1e8) == 0) ||
       (lVar3 = UnityEngine_Component__get_transform(*(long *)(lVar6 + 0x1e8),0), lVar3 == 0))
    goto LAB_00c16768;
    uVar5 = UnityEngine_Transform__get_parent(lVar3,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar3 = UnityEngine_Object__Instantiate_object_
                      (uVar4,uVar5,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar3 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar3,&stack0xffffffffffffffc8,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar6 + 0x1e8) = unaff_x25;
    if (unaff_x25 == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*unaff_x25 + 0x5a8))(unaff_x25,_Str_,*(undefined8 *)(*unaff_x25 + 0x5b0));
  }
  plVar2 = *(long **)(lVar6 + 0x1e8);
  lVar6 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar2 != (long *)0x0) &&
     (uVar4 = (**(code **)(*plVar2 + 0x598))(plVar2,*(undefined8 *)(*plVar2 + 0x5a0)), lVar6 != 0))
  {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar6 + 0x20) = uVar4, uVar1 != 1 &&
         (*(undefined8 *)(lVar6 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar6 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar6 + 0x38) = _Str___;
      UnityEngine_Time__get_time(0);
      uVar4 = func_0x00a67a38(_float_TypeInfo,&stack0xffffffffffffffc4);
      uVar4 = System_String__Format(_Str__0_f2_,uVar4,0);
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar6 + 0x40) = uVar4, uVar1 != 5)) &&
         (*(undefined8 *)(lVar6 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar6 + 0x50) = uVar8;
        uVar8 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x58) = uVar8;
          uVar8 = System_String__Concat(lVar6,0);
          (**(code **)(*plVar2 + 0x5a8))(plVar2,uVar8,*(undefined8 *)(*plVar2 + 0x5b0));
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


// ==== private void OnRewardedAdDisplayedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }   @0xb5c9c4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__OnRewardedAdDisplayedEvent(void *__this,void *adUnitId,void *adInfo)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined4 uStack_3c;
  long *aplStack_38 [2];
  
  auVar9._8_8_ = adUnitId;
  auVar9._0_8_ = __this;
  if ((bRam00000000019171f8 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    auVar9 = func_0x00a67900(&Str_AppLovin__OnRewardedAdDisplayedEvent);
    bRam00000000019171f8 = 1;
  }
  AdvController__NGHMIHEBNLO(auVar9._0_8_,auVar9._8_8_);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar2 = _Str_AppLovin__OnRewardedAdDisplayedEvent;
  if ((bRam0000000001917206 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Debug_TypeInfo);
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
  lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar6 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = DAFNMLEKHAD__LLEFEIHEJDE(lVar6,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__Log(plVar2,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c590c8;
  uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar2 == (long *)0x0)) goto LAB_00c590c8;
  lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar8 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
  if (lVar6 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar8,0,0);
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
  plVar2 = *(long **)(lVar6 + 0x1e8);
  if ((plVar2 == (long *)0x0) ||
     (lVar3 = (**(code **)(*plVar2 + 0x598))(plVar2,*(undefined8 *)(*plVar2 + 0x5a0)), lVar3 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar3 + 0x10)) {
    if (*(long *)(lVar6 + 0x1e8) == 0) goto LAB_00c16768;
    uVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar6 + 0x1e8),0);
    if ((*(long *)(lVar6 + 0x1e8) == 0) ||
       (lVar3 = UnityEngine_Component__get_transform(*(long *)(lVar6 + 0x1e8),0), lVar3 == 0))
    goto LAB_00c16768;
    uVar5 = UnityEngine_Transform__get_parent(lVar3,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar3 = UnityEngine_Object__Instantiate_object_
                      (uVar4,uVar5,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar3 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar3,aplStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar6 + 0x1e8) = aplStack_38[0];
    if (aplStack_38[0] == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*aplStack_38[0] + 0x5a8))
              (aplStack_38[0],_Str_,*(undefined8 *)(*aplStack_38[0] + 0x5b0));
  }
  plVar2 = *(long **)(lVar6 + 0x1e8);
  lVar6 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar2 != (long *)0x0) &&
     (uVar4 = (**(code **)(*plVar2 + 0x598))(plVar2,*(undefined8 *)(*plVar2 + 0x5a0)), lVar6 != 0))
  {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar6 + 0x20) = uVar4, uVar1 != 1 &&
         (*(undefined8 *)(lVar6 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar6 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar6 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar4 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar4 = System_String__Format(_Str__0_f2_,uVar4,0);
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar6 + 0x40) = uVar4, uVar1 != 5)) &&
         (*(undefined8 *)(lVar6 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar6 + 0x50) = uVar8;
        uVar8 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x58) = uVar8;
          uVar8 = System_String__Concat(lVar6,0);
          (**(code **)(*plVar2 + 0x5a8))(plVar2,uVar8,*(undefined8 *)(*plVar2 + 0x5b0));
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


// ==== private void OnBannerAdCollapsedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }   @0xb5cc10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__OnBannerAdCollapsedEvent(void *__this,void *adUnitId,void *adInfo)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 uStack_3c;
  long *plStack_38;
  
  if ((bRam00000000019171fd & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_AppLovin__OnBannerAdCollapsedEvent__);
    bRam00000000019171fd = 1;
  }
  plVar7 = (long *)System_String__Concat(_Str_AppLovin__OnBannerAdCollapsedEvent__,adUnitId,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  if ((bRam0000000001917206 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Debug_TypeInfo);
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
  lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar5 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar6 = DAFNMLEKHAD__LLEFEIHEJDE(lVar5,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__Log(plVar7,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c590c8;
  uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar7 == (long *)0x0)) goto LAB_00c590c8;
  lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
  if (lVar5 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar8,0,0);
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
  plVar7 = *(long **)(lVar5 + 0x1e8);
  if ((plVar7 == (long *)0x0) ||
     (lVar2 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0)), lVar2 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar2 + 0x10)) {
    if (*(long *)(lVar5 + 0x1e8) == 0) goto LAB_00c16768;
    uVar3 = UnityEngine_Component__get_gameObject(*(long *)(lVar5 + 0x1e8),0);
    if ((*(long *)(lVar5 + 0x1e8) == 0) ||
       (lVar2 = UnityEngine_Component__get_transform(*(long *)(lVar5 + 0x1e8),0), lVar2 == 0))
    goto LAB_00c16768;
    uVar4 = UnityEngine_Transform__get_parent(lVar2,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar2 = UnityEngine_Object__Instantiate_object_
                      (uVar3,uVar4,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar2 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar2,&plStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar5 + 0x1e8) = plStack_38;
    if (plStack_38 == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*plStack_38 + 0x5a8))(plStack_38,_Str_,*(undefined8 *)(*plStack_38 + 0x5b0));
  }
  plVar7 = *(long **)(lVar5 + 0x1e8);
  lVar5 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar7 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0)), lVar5 != 0))
  {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar5 + 0x20) = uVar3, uVar1 != 1 &&
         (*(undefined8 *)(lVar5 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar5 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar5 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar3 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar3 = System_String__Format(_Str__0_f2_,uVar3,0);
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar5 + 0x40) = uVar3, uVar1 != 5)) &&
         (*(undefined8 *)(lVar5 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar5 + 0x50) = uVar8;
        uVar8 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x58) = uVar8;
          uVar8 = System_String__Concat(lVar5,0);
          (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x5b0));
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



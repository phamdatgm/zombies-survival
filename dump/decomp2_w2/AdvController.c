// ==== public void BJJBOLOBKEJ(NNPDABJADNE JJNILODLKGJ) { }   @0xb590cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__BJJBOLOBKEJ(void *__this,int JJNILODLKGJ)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  int iStack_38;
  
  if ((bRam00000000019171d1 & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    func_0x00a67900(&NNPDABJADNE_TypeInfo);
    bRam00000000019171d1 = 1;
  }
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = MaxSdkAndroid__IsInitialized(0);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)((long)__this + 0x40);
    uStack_48 = _NNPDABJADNE_TypeInfo;
    uStack_40 = 0xffffffffffffffff;
    iStack_38 = JJNILODLKGJ;
    uVar2 = System_Enum__ToString(&uStack_48,0);
    if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_MaxSdkAndroid_TypeInfo);
    }
    MaxSdkAndroid__ShowRewardedAd(uVar3,uVar2,0,0);
  }
  return;
}


// ==== public void AOEKDBOFCIM() { }   @0xb59c9c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__AOEKDBOFCIM(void *__this)

{
  float fVar1;
  
  if ((bRam00000000019171d6 & 1) == 0) {
    func_0x00a67900(&AdvController_TypeInfo);
    bRam00000000019171d6 = 1;
  }
  *(undefined4 *)(*(long *)(_AdvController_TypeInfo + 0xb8) + 4) = 0;
  fVar1 = (float)UnityEngine_Time__get_time(0);
  *(float *)((long)__this + 0x24) = fVar1 + (float)(*(int *)((long)__this + 0x2c) * 0x3c);
  return;
}


// ==== private void OnRewardedAdClickedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }   @0xb5a450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__OnRewardedAdClickedEvent(void *__this,void *adUnitId,void *adInfo)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *__this_00;
  ulong uVar7;
  void *extraout_x1;
  undefined8 uVar8;
  long lVar9;
  undefined4 uStack_3c;
  long *aplStack_38 [2];
  
  if ((bRam00000000019171db & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_AppLovin__OnRewardedAdClickedEvent);
    bRam00000000019171db = 1;
    adUnitId = extraout_x1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo,adUnitId);
  }
  plVar3 = _Str_AppLovin__OnRewardedAdClickedEvent;
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
  UnityEngine_Debug__Log(plVar3,0);
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
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar3 == (long *)0x0)) goto LAB_00c590c8;
  lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar8 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  if (lVar9 == 0) goto LAB_00c590c8;
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
  plVar3 = *(long **)(lVar9 + 0x1e8);
  if ((plVar3 == (long *)0x0) ||
     (lVar4 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0)), lVar4 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar4 + 0x10)) {
    if (*(long *)(lVar9 + 0x1e8) == 0) goto LAB_00c16768;
    uVar5 = UnityEngine_Component__get_gameObject(*(long *)(lVar9 + 0x1e8),0);
    if ((*(long *)(lVar9 + 0x1e8) == 0) ||
       (lVar4 = UnityEngine_Component__get_transform(*(long *)(lVar9 + 0x1e8),0), lVar4 == 0))
    goto LAB_00c16768;
    uVar6 = UnityEngine_Transform__get_parent(lVar4,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar4 = UnityEngine_Object__Instantiate_object_
                      (uVar5,uVar6,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar4 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar4,aplStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar9 + 0x1e8) = aplStack_38[0];
    if (aplStack_38[0] == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*aplStack_38[0] + 0x5a8))
              (aplStack_38[0],_Str_,*(undefined8 *)(*aplStack_38[0] + 0x5b0));
  }
  plVar3 = *(long **)(lVar9 + 0x1e8);
  lVar9 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar3 != (long *)0x0) &&
     (uVar5 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0)), lVar9 != 0))
  {
    uVar1 = *(uint *)(lVar9 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar9 + 0x20) = uVar5, uVar1 != 1 &&
         (*(undefined8 *)(lVar9 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar9 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar9 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar5 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar5 = System_String__Format(_Str__0_f2_,uVar5,0);
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar9 + 0x40) = uVar5, uVar1 != 5)) &&
         (*(undefined8 *)(lVar9 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar9 + 0x50) = uVar8;
        uVar8 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar9 + 0x18)) {
          *(undefined8 *)(lVar9 + 0x58) = uVar8;
          uVar8 = System_String__Concat(lVar9,0);
          (**(code **)(*plVar3 + 0x5a8))(plVar3,uVar8,*(undefined8 *)(*plVar3 + 0x5b0));
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


// ==== public void FCHOPNGPCPN(NNPDABJADNE ELMHMLONAMN) { }   @0xb5afe8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__FCHOPNGPCPN(void *__this,int ELMHMLONAMN)

{
  bool bVar1;
  undefined8 uVar2;
  int extraout_w1;
  int JJNILODLKGJ;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  JJNILODLKGJ = ELMHMLONAMN;
  if ((bRam00000000019171df & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&NNPDABJADNE_TypeInfo);
    func_0x00a67900(&Str_ADV_REWARD__SHOW_);
    bRam00000000019171df = 1;
    JJNILODLKGJ = extraout_w1;
  }
  bVar1 = AdvController__HNDMJBICLJF(__this,JJNILODLKGJ);
  if (!bVar1) {
    return;
  }
  *(int *)((long)__this + 0x30) = ELMHMLONAMN;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
    uStack_48 = _NNPDABJADNE_TypeInfo;
    uStack_40 = 0xffffffffffffffff;
    uStack_38 = *(undefined4 *)((long)__this + 0x30);
    uVar2 = System_Enum__ToString(&uStack_48,0);
    if (lVar3 != 0) {
      AnalyticsController__JCMFKBONIGF(lVar3,uVar2,0);
      uStack_60 = _NNPDABJADNE_TypeInfo;
      uVar4 = *(undefined8 *)((long)__this + 0x40);
      uStack_58 = 0xffffffffffffffff;
      uStack_50 = *(undefined4 *)((long)__this + 0x30);
      uVar2 = System_Enum__ToString(&uStack_60,0);
      if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_MaxSdkAndroid_TypeInfo);
      }
      MaxSdkAndroid__ShowRewardedAd(uVar4,uVar2,0,0);
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


// ==== public bool HNDMJBICLJF(NNPDABJADNE JJNILODLKGJ) { }   @0xb5a57c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool AdvController__HNDMJBICLJF(void *__this,int JJNILODLKGJ)

{
  undefined1 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long in_x2;
  uint uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_24 [4];
  
  if ((bRam00000000019171e4 & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo,JJNILODLKGJ);
    bRam00000000019171e4 = 1;
  }
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = MaxSdkAndroid__IsInitialized(0);
  if ((uVar2 & 1) == 0) {
    return false;
  }
  lVar12 = *(long *)((long)__this + 0x40);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((bRam000000000191766d & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___,0);
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_check_rewarded_ad_loaded);
    func_0x00a67900(&Str_isRewardedAdReady);
    bRam000000000191766d = 1;
  }
  MaxSdkBase__ValidateAdUnitIdentifier(lVar12,_Str_check_rewarded_ad_loaded);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar13 = **(long **)(_MaxSdkAndroid_TypeInfo + 0xb8);
  plVar3 = (long *)func_0x00a679a0(_object___TypeInfo,1);
  if (plVar3 == (long *)0x0) {
LAB_00ddff1c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((lVar12 == 0) || (lVar4 = func_0x00a67a34(lVar12,*(undefined8 *)(*plVar3 + 0x40)), lVar4 != 0)
     ) {
    if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar3[4] = lVar12;
    if (lVar13 != 0) {
      UnityEngine_AndroidJavaObject__CallStatic___Il2CppFullySharedGenericType_
                (lVar13,_Str_isRewardedAdReady,plVar3,auStack_24,
                 _Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
      return (bool)auStack_24[0];
    }
    goto LAB_00ddff1c;
  }
  uVar5 = func_0x00a67b74();
  auVar16 = func_0x00a67a20(uVar5,0);
  lVar13 = auVar16._8_8_;
  lVar12 = auVar16._0_8_;
  if ((bRam000000000191766e & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_show_rewarded_ad);
    func_0x00a67900(&Str_Not_showing_MAX_Ads_rewarded_ad__ad_not_);
    func_0x00a67900(&Str_showRewardedAd);
    bRam000000000191766e = 1;
  }
  MaxSdkBase__ValidateAdUnitIdentifier(lVar12,_Str_show_rewarded_ad);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = MaxSdkAndroid__IsRewardedAdReady(lVar12);
  uVar5 = _Str_Not_showing_MAX_Ads_rewarded_ad__ad_not_;
  if ((uVar2 & 1) == 0) {
    uVar7 = _Str_Not_showing_MAX_Ads_rewarded_ad__ad_not_;
    if ((bRam00000000019176b4 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Debug_TypeInfo);
      uVar7 = func_0x00a67900(&Str_Warning__AppLovin_MAX__);
      bRam00000000019176b4 = 1;
    }
    uVar1 = (undefined1)uVar7;
    if (cRam00000000019176de == '\0') {
      uVar1 = func_0x00a67900(&MaxSdkBase_TypeInfo);
      cRam00000000019176de = '\x01';
    }
    if (*(char *)(*(long *)(_MaxSdkBase_TypeInfo + 0xb8) + 2) != '\0') {
      return (bool)uVar1;
    }
    uVar5 = System_String__Concat(_Str_Warning__AppLovin_MAX__,uVar5,0);
    if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Debug_TypeInfo);
    }
    uVar7 = 0;
    if ((bRam000000000191b9e0 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Debug_TypeInfo,0);
      func_0x00a67900(&UnityEngine_ILogger_TypeInfo);
      bRam000000000191b9e0 = 1;
      uVar7 = extraout_x1;
    }
    if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      uVar7 = extraout_x1_00;
    }
    if (cRam000000000191aefe == '\0') {
      func_0x00a67900(&UnityEngine_Debug_TypeInfo,uVar7);
      cRam000000000191aefe = '\x01';
    }
    if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    plVar3 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo + 0xb8) + 8);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    lVar12 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar2 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == _UnityEngine_ILogger_TypeInfo) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_0146ab34;
        }
        uVar2 = uVar2 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar2 != 0);
    }
    puVar9 = (undefined8 *)func_0x00a9e6c4(plVar3,_UnityEngine_ILogger_TypeInfo,3);
LAB_0146ab34:
                    /* WARNING: Could not recover jumptable at 0x0146ab4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*puVar9)(plVar3,2,uVar5,puVar9[1]);
    return (bool)uVar1;
  }
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = **(long **)(_MaxSdkAndroid_TypeInfo + 0xb8);
  plVar3 = (long *)func_0x00a679a0(_object___TypeInfo,3);
  if (plVar3 == (long *)0x0) goto LAB_00de00e0;
  if ((lVar12 == 0) || (lVar6 = func_0x00a67a34(lVar12,*(undefined8 *)(*plVar3 + 0x40)), lVar6 != 0)
     ) {
    uVar10 = *(uint *)(plVar3 + 3);
    if (uVar10 == 0) goto LAB_00de00d0;
    plVar3[4] = lVar12;
    if (lVar13 != 0) {
      lVar12 = func_0x00a67a34(lVar13,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar12 == 0) goto LAB_00de00d4;
      uVar10 = *(uint *)(plVar3 + 3);
    }
    if (uVar10 < 2) goto LAB_00de00d0;
    plVar3[5] = lVar13;
    if (in_x2 != 0) {
      lVar12 = func_0x00a67a34(in_x2,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar12 == 0) goto LAB_00de00d4;
      uVar10 = *(uint *)(plVar3 + 3);
    }
    if (uVar10 < 3) {
LAB_00de00d0:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar3[6] = in_x2;
    uVar5 = _Str_showRewardedAd;
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar14 = *(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x18);
      uVar7 = UnityEngine__AndroidJNIHelper__GetSignature(plVar3);
      uVar5 = UnityEngine__AndroidJNIHelper__GetMethodID(uVar14,uVar5,uVar7,1);
      lVar12 = tpidr_el0;
      lStack_78 = *(long *)(lVar12 + 0x28);
      if ((bRam000000000191b543 & 1) == 0) {
        func_0x00a67900(&Method_UnityEngine_AndroidJavaObject__CallStatic__);
        func_0x00a67900(&Method_System_Span_jvalue___ctor__);
        bRam000000000191b543 = 1;
      }
      if ((plVar3 == (long *)0x0) || (uVar2 = plVar3[3], uVar2 == 0)) {
        uVar7 = 0;
        uVar14 = 0;
      }
      else {
        if ((uVar2 & 0xffffffff) == 0) {
          puVar15 = (undefined1 *)0x0;
        }
        else {
          puVar15 = auStack_90 +
                    -((-(uVar2 >> 0x1f & 1) & 0xfffffff800000000 | (uVar2 & 0xffffffff) << 3) + 0xf
                     & 0xfffffffffffffff0);
        }
        func_0x016decb0(puVar15,0);
        uStack_88 = 0;
        uStack_80 = 0;
        func_0x00c90098(&uStack_88,puVar15,uVar2 & 0xffffffff,_Method_System_Span_jvalue___ctor__);
        uVar7 = uStack_88;
        uVar14 = uStack_80;
      }
      UnityEngine_AndroidJNIHelper__CreateJNIArgArray(plVar3,uVar7,uVar14);
      if (*(long *)(lVar4 + 0x18) != 0) {
        UnityEngine_AndroidJNISafe__CallStaticVoidMethod
                  (*(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x18),uVar5,uVar7,uVar14);
        uVar1 = UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar3,uVar7,uVar14);
        while( true ) {
          if (*(long *)(lVar12 + 0x28) == lStack_78) {
            return (bool)uVar1;
          }
          auVar17 = func_0x016dec70();
          if (auVar17._8_4_ != 1) break;
          plVar8 = (long *)func_0x016dec50(auVar17._0_8_);
          lVar13 = *plVar8;
          func_0x016dec60();
          uVar1 = UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar3,uVar7,uVar14);
          if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b48(lVar13);
          }
        }
        UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar3,uVar7,uVar14);
        func_0x00b65214(auVar17._0_8_);
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b48(0);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  else {
LAB_00de00d4:
    uVar5 = func_0x00a67b74();
    func_0x00a67a20(uVar5,0);
  }
LAB_00de00e0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void CLJNOOPEBCC() { }   @0xb58d18

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__CLJNOOPEBCC(void *__this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)((long)__this + 0x2c);
  fVar2 = (float)UnityEngine_Time__get_time(0);
  fVar3 = (float)(*(int *)((long)__this + 0x2c) * 0x3c);
  if (1 < iVar1) {
    fVar3 = fVar3 * 0.5;
  }
  *(float *)((long)__this + 0x24) = fVar2 + fVar3;
  *(float *)((long)__this + 0x28) = fVar2 + fVar3;
  return;
}


// ==== public void EnableAudio() { }   @0xb59b94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__EnableAudio(void *__this)

{
  int iVar1;
  
  if ((bRam00000000019171eb & 1) == 0) {
    func_0x00a67900(&AdvController_TypeInfo);
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam00000000019171eb = 1;
  }
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  iVar1 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
  if (iVar1 != 2) {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      iVar1 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
    }
    if (iVar1 != 3) {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        iVar1 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
      }
      if (iVar1 != 6) {
        return;
      }
    }
  }
  if (*(char *)(*(long *)(_AdvController_TypeInfo + 0xb8) + 8) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_AudioListener__set_volume
              (*(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x14),0);
    *(undefined1 *)(*(long *)(_AdvController_TypeInfo + 0xb8) + 8) = 0;
  }
  return;
}


// ==== private void OnRewardedAdFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo) { }   @0xb5c5f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__OnRewardedAdFailedEvent(void *__this,void *adUnitId,void *errorInfo)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *__this_00;
  ulong uVar8;
  void *extraout_x1;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  undefined4 uStack_3c;
  long *plStack_38;
  
  if ((bRam00000000019171f0 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&System_Math_TypeInfo);
    func_0x00a67900(&Str_AppLovin__OnRewardedAdFailedEvent);
    func_0x00a67900(&Str_AGMALFPABAM);
    bRam00000000019171f0 = 1;
    adUnitId = extraout_x1;
  }
  iVar1 = *(int *)((long)__this + 0x54) + 1;
  *(int *)((long)__this + 0x54) = iVar1;
  if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_System_Math_TypeInfo,adUnitId);
  }
  dVar11 = (double)System_Math__Pow(0x4000000000000000,(double)iVar1,0);
  UnityEngine_MonoBehaviour__Invoke((float)dVar11,__this,_Str_AGMALFPABAM,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar4 = _Str_AppLovin__OnRewardedAdFailedEvent;
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
  __this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (__this_00 == (void *)0x0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  bVar3 = DAFNMLEKHAD__LLEFEIHEJDE(__this_00);
  if (!bVar3) {
    return;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__Log(plVar4,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c590c8;
  uVar9 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar4 == (long *)0x0)) goto LAB_00c590c8;
  lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar9 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  if (lVar10 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar9,0,0);
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
  plVar4 = *(long **)(lVar10 + 0x1e8);
  if ((plVar4 == (long *)0x0) ||
     (lVar5 = (**(code **)(*plVar4 + 0x598))(plVar4,*(undefined8 *)(*plVar4 + 0x5a0)), lVar5 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar5 + 0x10)) {
    if (*(long *)(lVar10 + 0x1e8) == 0) goto LAB_00c16768;
    uVar6 = UnityEngine_Component__get_gameObject(*(long *)(lVar10 + 0x1e8),0);
    if ((*(long *)(lVar10 + 0x1e8) == 0) ||
       (lVar5 = UnityEngine_Component__get_transform(*(long *)(lVar10 + 0x1e8),0), lVar5 == 0))
    goto LAB_00c16768;
    uVar7 = UnityEngine_Transform__get_parent(lVar5,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar5 = UnityEngine_Object__Instantiate_object_
                      (uVar6,uVar7,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar5 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar5,&plStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar10 + 0x1e8) = plStack_38;
    if (plStack_38 == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*plStack_38 + 0x5a8))(plStack_38,_Str_,*(undefined8 *)(*plStack_38 + 0x5b0));
  }
  plVar4 = *(long **)(lVar10 + 0x1e8);
  lVar10 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar4 != (long *)0x0) &&
     (uVar6 = (**(code **)(*plVar4 + 0x598))(plVar4,*(undefined8 *)(*plVar4 + 0x5a0)), lVar10 != 0))
  {
    uVar2 = *(uint *)(lVar10 + 0x18);
    if ((uVar2 != 0) &&
       (((*(undefined8 *)(lVar10 + 0x20) = uVar6, uVar2 != 1 &&
         (*(undefined8 *)(lVar10 + 0x28) = _Str__color_, 2 < uVar2)) &&
        (*(undefined8 *)(lVar10 + 0x30) = _Str__78e938, uVar2 != 3)))) {
      *(undefined8 *)(lVar10 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar6 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar6 = System_String__Format(_Str__0_f2_,uVar6,0);
      uVar2 = *(uint *)(lVar10 + 0x18);
      if (((4 < uVar2) && (*(undefined8 *)(lVar10 + 0x40) = uVar6, uVar2 != 5)) &&
         (*(undefined8 *)(lVar10 + 0x48) = _Str____color___, 6 < uVar2)) {
        *(undefined8 *)(lVar10 + 0x50) = uVar9;
        uVar9 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar10 + 0x18)) {
          *(undefined8 *)(lVar10 + 0x58) = uVar9;
          uVar9 = System_String__Concat(lVar10,0);
          (**(code **)(*plVar4 + 0x5a8))(plVar4,uVar9,*(undefined8 *)(*plVar4 + 0x5b0));
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


// ==== public void NNFMKIDINAO() { }   @0xb5c7e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__NNFMKIDINAO(void *__this)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 uStack_3c;
  long *aplStack_38 [2];
  
  if ((bRam00000000019171f5 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Adverty_UserData_TypeInfo);
    func_0x00a67900(&Str_Adverty__Init_);
    func_0x00a67900(&Str_Adverty__Skip_Init_);
    func_0x00a67900(&Str_MmU5YWQxNmUtNmUyZC00MzVjLWI4NjktZTIwYmNk);
    bRam00000000019171f5 = 1;
  }
  if (*(char *)((long)__this + 0x6c) != '\0') {
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
  pvVar8 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  bVar2 = DAFNMLEKHAD__MHBEPDHNNFH(pvVar8);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  plVar3 = _Str_Adverty__Skip_Init_;
  if (!bVar2) {
    Main__GEMDEAMAGPG(_Str_Adverty__Init_,0);
    uVar9 = func_0x00a67b44(_Adverty_UserData_TypeInfo);
    Adverty_UserData___ctor(uVar9,4,4,0);
    Adverty_AdvertySDK__Init(_Str_MmU5YWQxNmUtNmUyZC00MzVjLWI4NjktZTIwYmNk,0,0,uVar9,0,0);
    *(undefined1 *)((long)__this + 0x6c) = 1;
    return;
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
  pvVar8 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (pvVar8 == (void *)0x0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  bVar2 = DAFNMLEKHAD__LLEFEIHEJDE(pvVar8);
  if (!bVar2) {
    return;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__Log(plVar3,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c590c8;
  uVar9 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar3 == (long *)0x0)) goto LAB_00c590c8;
  lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar9 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  if (lVar10 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar9,0,0);
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
  plVar3 = *(long **)(lVar10 + 0x1e8);
  if ((plVar3 == (long *)0x0) ||
     (lVar4 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0)), lVar4 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar4 + 0x10)) {
    if (*(long *)(lVar10 + 0x1e8) == 0) goto LAB_00c16768;
    uVar5 = UnityEngine_Component__get_gameObject(*(long *)(lVar10 + 0x1e8),0);
    if ((*(long *)(lVar10 + 0x1e8) == 0) ||
       (lVar4 = UnityEngine_Component__get_transform(*(long *)(lVar10 + 0x1e8),0), lVar4 == 0))
    goto LAB_00c16768;
    uVar6 = UnityEngine_Transform__get_parent(lVar4,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar4 = UnityEngine_Object__Instantiate_object_
                      (uVar5,uVar6,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar4 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar4,aplStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar10 + 0x1e8) = aplStack_38[0];
    if (aplStack_38[0] == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*aplStack_38[0] + 0x5a8))
              (aplStack_38[0],_Str_,*(undefined8 *)(*aplStack_38[0] + 0x5b0));
  }
  plVar3 = *(long **)(lVar10 + 0x1e8);
  lVar10 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar3 != (long *)0x0) &&
     (uVar5 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0)), lVar10 != 0))
  {
    uVar1 = *(uint *)(lVar10 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar10 + 0x20) = uVar5, uVar1 != 1 &&
         (*(undefined8 *)(lVar10 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar10 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar10 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar5 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar5 = System_String__Format(_Str__0_f2_,uVar5,0);
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar10 + 0x40) = uVar5, uVar1 != 5)) &&
         (*(undefined8 *)(lVar10 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar10 + 0x50) = uVar9;
        uVar9 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar10 + 0x18)) {
          *(undefined8 *)(lVar10 + 0x58) = uVar9;
          uVar9 = System_String__Concat(lVar10,0);
          (**(code **)(*plVar3 + 0x5a8))(plVar3,uVar9,*(undefined8 *)(*plVar3 + 0x5b0));
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


// ==== public void MJBKAAENPCL() { }   @0xb5cabc

/* WARNING: Removing unreachable block (ram,0x00ddf6e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__MJBKAAENPCL(void *__this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long unaff_x19;
  long lVar12;
  long unaff_x20;
  long lVar13;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  code *unaff_x30;
  float fVar16;
  undefined8 extraout_d0;
  float in_s1;
  float fVar17;
  float in_s2;
  float fVar18;
  float fVar19;
  float in_s3;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [12];
  code *apcStack_60 [2];
  undefined8 uStack_50;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  code *apcStack_30 [2];
  
  if ((bRam00000000019171fa & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    bRam00000000019171fa = 1;
  }
  uVar6 = AdvController__EDNAEPDDBPJ(__this);
  if ((uVar6 & 1) == 0) {
    return;
  }
  *(undefined1 *)((long)__this + 0x35) = 0;
  lVar12 = *(long *)((long)__this + 0x48);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  apcStack_30[0] = unaff_x30;
  if ((bRam0000000001917666 & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo,0);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_showBanner);
    func_0x00a67900(&Str_show_banner);
    bRam0000000001917666 = 1;
  }
  MaxSdkBase__ValidateAdUnitIdentifier(lVar12,_Str_show_banner);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar13 = **(long **)(_MaxSdkAndroid_TypeInfo + 0xb8);
  plVar7 = (long *)func_0x00a679a0(_object___TypeInfo,1);
  if (plVar7 == (long *)0x0) {
LAB_00ddf388:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((lVar12 == 0) || (lVar8 = func_0x00a67a34(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar8 != 0)
     ) {
    if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar7[4] = lVar12;
    uVar10 = _Str_showBanner;
    if (lVar13 != 0) {
UnityEngine_AndroidJavaObject__CallStatic:
      *(code **)((long)register0x00000008 + -0x30) = apcStack_30[0];
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x10) = unaff_x20;
      *(long *)((long)register0x00000008 + -8) = unaff_x19;
      if (*(long *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar14 = *(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x18);
      uVar9 = UnityEngine__AndroidJNIHelper__GetSignature(plVar7);
      uVar10 = UnityEngine__AndroidJNIHelper__GetMethodID(uVar14,uVar10,uVar9,1);
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -0x38) =
           *(undefined8 *)((long)register0x00000008 + -0x30);
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      lVar12 = tpidr_el0;
      *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(lVar12 + 0x28);
      if ((bRam000000000191b543 & 1) == 0) {
        func_0x00a67900(&Method_UnityEngine_AndroidJavaObject__CallStatic__);
        func_0x00a67900(&Method_System_Span_jvalue___ctor__);
        bRam000000000191b543 = 1;
      }
      if ((plVar7 == (long *)0x0) || (uVar6 = plVar7[3], uVar6 == 0)) {
        uVar9 = 0;
        uVar14 = 0;
      }
      else {
        if ((uVar6 & 0xffffffff) == 0) {
          puVar15 = (undefined1 *)0x0;
        }
        else {
          puVar15 = (undefined1 *)
                    ((long)register0x00000008 +
                    (-0x60 - ((-(uVar6 >> 0x1f & 1) & 0xfffffff800000000 | (uVar6 & 0xffffffff) << 3
                              ) + 0xf & 0xfffffffffffffff0)));
        }
        func_0x016decb0(puVar15,0);
        *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
        func_0x00c90098((undefined1 *)((long)register0x00000008 + -0x58),puVar15,uVar6 & 0xffffffff,
                        _Method_System_Span_jvalue___ctor__);
        uVar9 = *(undefined8 *)((long)register0x00000008 + -0x58);
        uVar14 = *(undefined8 *)((long)register0x00000008 + -0x50);
      }
      UnityEngine_AndroidJNIHelper__CreateJNIArgArray(plVar7,uVar9,uVar14);
      if (*(long *)(lVar13 + 0x18) != 0) {
        UnityEngine_AndroidJNISafe__CallStaticVoidMethod
                  (*(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x18),uVar10,uVar9,uVar14);
        UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar7,uVar9,uVar14);
        while( true ) {
          if (*(long *)(lVar12 + 0x28) == *(long *)((long)register0x00000008 + -0x48)) {
            return;
          }
          auVar23 = func_0x016dec70();
          if (auVar23._8_4_ != 1) break;
          plVar11 = (long *)func_0x016dec50(auVar23._0_8_);
          lVar13 = *plVar11;
          func_0x016dec60();
          UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar7,uVar9,uVar14);
          if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b48(lVar13);
          }
        }
        UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar7,uVar9,uVar14);
        func_0x00b65214(auVar23._0_8_);
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b48(0);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    goto LAB_00ddf388;
  }
  uVar10 = func_0x00a67b74();
  unaff_x19 = func_0x00a67a20(uVar10,0);
  apcStack_60[0] = MaxSdkAndroid__HideBanner;
  uStack_50 = 0x1917000;
  plStack_48 = plVar7;
  lStack_40 = lVar13;
  lStack_38 = lVar12;
  if ((bRam0000000001917667 & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_hide_banner);
    func_0x00a67900(&Str_hideBanner);
    bRam0000000001917667 = 1;
  }
  MaxSdkBase__ValidateAdUnitIdentifier(unaff_x19,_Str_hide_banner);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  unaff_x20 = **(long **)(_MaxSdkAndroid_TypeInfo + 0xb8);
  unaff_x21 = (long *)func_0x00a679a0(_object___TypeInfo,1);
  if (unaff_x21 == (long *)0x0) {
LAB_00ddf494:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((unaff_x19 == 0) ||
     (lVar12 = func_0x00a67a34(unaff_x19,*(undefined8 *)(*unaff_x21 + 0x40)), lVar12 != 0)) {
    if ((int)unaff_x21[3] == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    unaff_x21[4] = unaff_x19;
    if (unaff_x20 != 0) {
      register0x00000008 = (BADSPACEBASE *)apcStack_30;
      lVar13 = unaff_x20;
      uVar10 = _Str_hideBanner;
      plVar7 = unaff_x21;
      unaff_x19 = lStack_38;
      unaff_x20 = lStack_40;
      unaff_x21 = plStack_48;
      unaff_x22 = uStack_50;
      apcStack_30[0] = apcStack_60[0];
      goto UnityEngine_AndroidJavaObject__CallStatic;
    }
    goto LAB_00ddf494;
  }
  uVar10 = func_0x00a67b74();
  lVar12 = func_0x00a67a20(uVar10,0);
  fVar20 = in_s3;
  fVar17 = in_s1;
  fVar18 = in_s2;
  if ((bRam0000000001917668 & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    func_0x00a67900(&MaxSdkUtils_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_set_background_color);
    func_0x00a67900(&Str_setBannerBackgroundColor);
    bRam0000000001917668 = 1;
  }
  MaxSdkBase__ValidateAdUnitIdentifier(lVar12,_Str_set_background_color);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar13 = **(long **)(_MaxSdkAndroid_TypeInfo + 0xb8);
  plVar7 = (long *)func_0x00a679a0(_object___TypeInfo,2);
  if (plVar7 == (long *)0x0) {
LAB_00ddf628:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((lVar12 == 0) || (lVar8 = func_0x00a67a34(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar8 != 0)
     ) {
    if ((int)plVar7[3] == 0) {
LAB_00ddf624:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar7[4] = lVar12;
    if (*(int *)(_MaxSdkUtils_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    fVar20 = in_s3;
    fVar17 = in_s1;
    fVar18 = in_s2;
    lVar12 = MaxSdkUtils__ParseColor(extraout_d0);
    if ((lVar12 == 0) ||
       (lVar8 = func_0x00a67a34(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar8 != 0)) {
      if (1 < *(uint *)(plVar7 + 3)) {
        plVar7[5] = lVar12;
        if (lVar13 != 0) {
          unaff_x22 = 0x1917000;
          apcStack_30[0] = MaxSdkAndroid__SetBannerBackgroundColor;
          register0x00000008 = (BADSPACEBASE *)apcStack_60;
          uVar10 = _Str_setBannerBackgroundColor;
          goto UnityEngine_AndroidJavaObject__CallStatic;
        }
        goto LAB_00ddf628;
      }
      goto LAB_00ddf624;
    }
  }
  uVar10 = func_0x00a67b74();
  fVar16 = (float)func_0x00a67a20(uVar10,0);
  if ((bRam00000000019176c0 & 1) == 0) {
    func_0x00a67900(&byte___TypeInfo);
    func_0x00a67900(&System_Convert_TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_);
    bRam00000000019176c0 = 1;
  }
  fVar19 = fVar20;
  if (1.0 < fVar20) {
    fVar19 = 1.0;
  }
  fVar21 = fVar16;
  if (1.0 < fVar16) {
    fVar21 = 1.0;
  }
  fVar22 = fVar17;
  if (1.0 < fVar17) {
    fVar22 = 1.0;
  }
  fVar19 = fVar19 * 255.0;
  fVar21 = fVar21 * 255.0;
  if (fVar20 < 0.0) {
    fVar19 = 0.0;
  }
  iVar3 = -0x80000000;
  if (fVar19 != INFINITY) {
    iVar3 = (int)fVar19;
  }
  if (fVar16 < 0.0) {
    fVar21 = 0.0;
  }
  iVar4 = -0x80000000;
  if (fVar21 != INFINITY) {
    iVar4 = (int)fVar21;
  }
  fVar20 = fVar22 * 255.0;
  if (fVar17 < 0.0) {
    fVar20 = 0.0;
  }
  iVar1 = -0x80000000;
  if (fVar20 != INFINITY) {
    iVar1 = (int)fVar20;
  }
  fVar20 = fVar18 * 255.0;
  if (fVar18 < 0.0) {
    fVar20 = 0.0;
  }
  iVar2 = -0x80000000;
  if (fVar20 != INFINITY) {
    iVar2 = (int)fVar20;
  }
  lVar12 = func_0x00a679a0(_byte___TypeInfo,4);
  if (*(int *)(_System_Convert_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_System_Convert_TypeInfo);
  }
  uVar5 = System_Convert__ToByte(iVar3,0);
  if (lVar12 == 0) {
LAB_00ddf840:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)(lVar12 + 0x18) == 0) {
LAB_00ddf83c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined1 *)(lVar12 + 0x20) = uVar5;
  uVar5 = System_Convert__ToByte(iVar4,0);
  if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_00ddf83c;
  *(undefined1 *)(lVar12 + 0x21) = uVar5;
  uVar5 = System_Convert__ToByte(iVar1,0);
  if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_00ddf83c;
  *(undefined1 *)(lVar12 + 0x22) = uVar5;
  uVar5 = System_Convert__ToByte(iVar2,0);
  if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_00ddf83c;
  *(undefined1 *)(lVar12 + 0x23) = uVar5;
  lVar12 = System_BitConverter__ToString(lVar12,0);
  if ((lVar12 == 0) ||
     (lVar13 = System_String__Replace(lVar12,_Str__,_Str_,0), lVar12 = _Str__, lVar13 == 0))
  goto LAB_00ddf840;
  if (_Str__ == 0) {
    func_0x00a67914(&System_ArgumentNullException_TypeInfo,0,0,0);
    uVar10 = func_0x00a67b44();
    uVar9 = func_0x00a67914(&Str_value);
    System_ArgumentNullException___ctor(uVar10,uVar9,0);
  }
  else {
    iVar3 = *(int *)(lVar13 + 0x10);
    if (-1 < iVar3) {
      if (iVar3 == 0) {
        return;
      }
      iVar4 = *(int *)(_Str__ + 0x10);
      if (iVar4 == 0) {
        return;
      }
      lVar8 = func_0x00ad4750(iVar4 + iVar3);
      if (lVar8 != 0) {
        lVar8 = lVar8 + 0x14;
        System_Buffer__Memmove(lVar8,lVar13 + 0x14,0,0);
        System_Buffer__Memmove(lVar8,lVar12 + 0x14,iVar4 << 1,0);
        System_Buffer__Memmove(lVar8 + (long)iVar4 * 2,lVar13 + 0x14,iVar3 * 2,0);
        return;
      }
      goto LAB_00e27e3c;
    }
    func_0x00a67914(&System_ArgumentOutOfRangeException_TypeInfo,0,_Str__,0);
    uVar10 = func_0x00a67b44();
    uVar9 = func_0x00a67914(&Str_startIndex);
    System_ArgumentOutOfRangeException___ctor(uVar10,uVar9,0);
  }
  uVar9 = func_0x00a67914(&Method_System_String_Insert__);
  func_0x00a67a20(uVar10,uVar9);
LAB_00e27e3c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



// ==== private void OnRewardedAdLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }   @0xb59228

/* WARNING: Removing unreachable block (ram,0x00c59438) */
/* WARNING: Removing unreachable block (ram,0x00c59428) */
/* WARNING: Removing unreachable block (ram,0x00c59430) */
/* WARNING: Removing unreachable block (ram,0x00c5954c) */
/* WARNING: Removing unreachable block (ram,0x00c59560) */
/* WARNING: Removing unreachable block (ram,0x00c59568) */
/* WARNING: Removing unreachable block (ram,0x00c5957c) */
/* WARNING: Removing unreachable block (ram,0x00c59584) */
/* WARNING: Removing unreachable block (ram,0x00c59598) */
/* WARNING: Removing unreachable block (ram,0x00c595a4) */
/* WARNING: Removing unreachable block (ram,0x00c595ac) */
/* WARNING: Removing unreachable block (ram,0x00c595b8) */
/* WARNING: Removing unreachable block (ram,0x00c595c8) */
/* WARNING: Removing unreachable block (ram,0x00c595cc) */
/* WARNING: Removing unreachable block (ram,0x00c595e0) */
/* WARNING: Removing unreachable block (ram,0x00c595ec) */
/* WARNING: Removing unreachable block (ram,0x00c595f4) */
/* WARNING: Removing unreachable block (ram,0x00c59600) */
/* WARNING: Removing unreachable block (ram,0x00c59608) */
/* WARNING: Removing unreachable block (ram,0x00c59610) */
/* WARNING: Removing unreachable block (ram,0x00c5961c) */
/* WARNING: Removing unreachable block (ram,0x00c59628) */
/* WARNING: Removing unreachable block (ram,0x00c59648) */
/* WARNING: Removing unreachable block (ram,0x00c5964c) */
/* WARNING: Removing unreachable block (ram,0x00c59660) */
/* WARNING: Removing unreachable block (ram,0x00c5966c) */
/* WARNING: Removing unreachable block (ram,0x00c59674) */
/* WARNING: Removing unreachable block (ram,0x00c59680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__OnRewardedAdLoadedEvent(void *__this,void *adUnitId,void *adInfo)

{
  ulong uVar1;
  void *CIDKMFLFJEJ;
  void *extraout_x1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if ((bRam00000000019171d3 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_AppLovin__OnRewardedAdLoadedEvent);
    bRam00000000019171d3 = 1;
    adUnitId = extraout_x1;
  }
  *(undefined4 *)((long)__this + 0x54) = 0;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo,adUnitId);
  }
  Main__GEMDEAMAGPG(_Str_AppLovin__OnRewardedAdLoadedEvent,false);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
LAB_00c59398:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar3 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c59398;
  Menu__PPBIOKBJGPG(**(long **)(_Menu_TypeInfo + 0xb8),0);
  if ((bRam00000000019171de & 1) == 0) {
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&NNPDABJADNE_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_OnRewardedVideoLoaded__);
    bRam00000000019171de = 1;
  }
  *(undefined1 *)((long)__this + 0x66) = 1;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c597bc;
    uVar3 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar2 == 0)) ||
          (lVar2 = *(long *)(lVar2 + 0xf8), lVar2 == 0)) ||
         (lVar2 = UnityEngine_Component__get_gameObject(lVar2,0), lVar2 == 0)) goto LAB_00c597bc;
      uVar1 = UnityEngine_GameObject__get_activeSelf(lVar2,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c597bc;
        Menu__KLGOLHHGBKP(**(long **)(_Menu_TypeInfo + 0xb8),0);
      }
    }
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
LAB_00c597bc:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar3 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c597bc;
      Menu__PPBIOKBJGPG(**(long **)(_Menu_TypeInfo + 0xb8),0);
    }
  }
  uStack_48 = _NNPDABJADNE_TypeInfo;
  uStack_40 = 0xffffffffffffffff;
  uStack_38 = 3;
  uVar3 = System_Enum__ToString(&uStack_48,0);
  CIDKMFLFJEJ = (void *)System_String__Concat(_Str_OnRewardedVideoLoaded__,uVar3,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(CIDKMFLFJEJ,false);
  return;
}


// ==== private void AGMALFPABAM() { }   @0xb59dac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__AGMALFPABAM(void *__this)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  void *__this_00;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long in_x2;
  uint uVar11;
  int *piVar12;
  long unaff_x19;
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
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  code *pcStack_60;
  undefined1 auStack_54 [4];
  undefined8 uStack_50;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  code *pcStack_30;
  
  if ((bRam00000000019171d8 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    bRam00000000019171d8 = 1;
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
LAB_00c59ee0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar3 = DAFNMLEKHAD__BMMOMBGDEKF(lVar2,0);
  if ((uVar3 & 1) == 0) {
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
    if (__this_00 == (void *)0x0) goto LAB_00c59ee0;
    bVar1 = DAFNMLEKHAD__LKKDIBOKNMJ(__this_00);
    bVar1 = !bVar1;
  }
  else {
    bVar1 = false;
  }
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  MaxSdkAndroid__SetMuted(bVar1,0);
  lVar2 = *(long *)((long)__this + 0x40);
  pcStack_30 = unaff_x30;
  if ((bRam000000000191766c & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo,0);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_loadRewardedAd);
    func_0x00a67900(&Str_load_rewarded_ad);
    bRam000000000191766c = 1;
  }
  MaxSdkBase__ValidateAdUnitIdentifier(lVar2,_Str_load_rewarded_ad);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar13 = **(long **)(_MaxSdkAndroid_TypeInfo + 0xb8);
  plVar4 = (long *)func_0x00a679a0(_object___TypeInfo,1);
  if (plVar4 == (long *)0x0) {
LAB_00ddfdf0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((lVar2 == 0) || (lVar5 = func_0x00a67a34(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 != 0))
  {
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar4[4] = lVar2;
    uVar8 = _Str_loadRewardedAd;
    if (lVar13 == 0) goto LAB_00ddfdf0;
    goto UnityEngine_AndroidJavaObject__CallStatic;
  }
  uVar8 = func_0x00a67b74();
  unaff_x19 = func_0x00a67a20(uVar8,0);
  pcStack_60 = MaxSdkAndroid__IsRewardedAdReady;
  uStack_50 = 0x1917000;
  plStack_48 = plVar4;
  lStack_40 = lVar13;
  lStack_38 = lVar2;
  if ((bRam000000000191766d & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_check_rewarded_ad_loaded);
    func_0x00a67900(&Str_isRewardedAdReady);
    bRam000000000191766d = 1;
  }
  MaxSdkBase__ValidateAdUnitIdentifier(unaff_x19,_Str_check_rewarded_ad_loaded);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  unaff_x20 = **(long **)(_MaxSdkAndroid_TypeInfo + 0xb8);
  unaff_x21 = (long *)func_0x00a679a0(_object___TypeInfo,1);
  if (unaff_x21 == (long *)0x0) {
LAB_00ddff1c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((unaff_x19 == 0) ||
     (lVar2 = func_0x00a67a34(unaff_x19,*(undefined8 *)(*unaff_x21 + 0x40)), lVar2 != 0)) {
    if ((int)unaff_x21[3] == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    unaff_x21[4] = unaff_x19;
    if (unaff_x20 != 0) {
      UnityEngine_AndroidJavaObject__CallStatic___Il2CppFullySharedGenericType_
                (unaff_x20,_Str_isRewardedAdReady,unaff_x21,auStack_54,
                 _Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
      return;
    }
    goto LAB_00ddff1c;
  }
  uVar8 = func_0x00a67b74();
  auVar16 = func_0x00a67a20(uVar8,0);
  lVar5 = auVar16._8_8_;
  lVar2 = auVar16._0_8_;
  if ((bRam000000000191766e & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_show_rewarded_ad);
    func_0x00a67900(&Str_Not_showing_MAX_Ads_rewarded_ad__ad_not_);
    func_0x00a67900(&Str_showRewardedAd);
    bRam000000000191766e = 1;
  }
  MaxSdkBase__ValidateAdUnitIdentifier(lVar2,_Str_show_rewarded_ad);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = MaxSdkAndroid__IsRewardedAdReady(lVar2);
  uVar8 = _Str_Not_showing_MAX_Ads_rewarded_ad__ad_not_;
  if ((uVar3 & 1) == 0) {
    if ((bRam00000000019176b4 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Debug_TypeInfo);
      func_0x00a67900(&Str_Warning__AppLovin_MAX__);
      bRam00000000019176b4 = 1;
    }
    if (cRam00000000019176de == '\0') {
      func_0x00a67900(&MaxSdkBase_TypeInfo);
      cRam00000000019176de = '\x01';
    }
    if (*(char *)(*(long *)(_MaxSdkBase_TypeInfo + 0xb8) + 2) != '\0') {
      return;
    }
    uVar8 = System_String__Concat(_Str_Warning__AppLovin_MAX__,uVar8,0);
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
    plVar4 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo + 0xb8) + 8);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    lVar2 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == _UnityEngine_ILogger_TypeInfo) {
          puVar10 = (undefined8 *)(lVar2 + (long)(*piVar12 + 3) * 0x10 + 0x138);
          goto LAB_0146ab34;
        }
        uVar3 = uVar3 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar3 != 0);
    }
    puVar10 = (undefined8 *)func_0x00a9e6c4(plVar4,_UnityEngine_ILogger_TypeInfo,3);
LAB_0146ab34:
                    /* WARNING: Could not recover jumptable at 0x0146ab4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar10)(plVar4,2,uVar8,puVar10[1]);
    return;
  }
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar13 = **(long **)(_MaxSdkAndroid_TypeInfo + 0xb8);
  plVar4 = (long *)func_0x00a679a0(_object___TypeInfo,3);
  if (plVar4 == (long *)0x0) goto LAB_00de00e0;
  if ((lVar2 == 0) || (lVar6 = func_0x00a67a34(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar6 != 0))
  {
    uVar11 = *(uint *)(plVar4 + 3);
    if (uVar11 == 0) goto LAB_00de00d0;
    plVar4[4] = lVar2;
    if (lVar5 != 0) {
      lVar2 = func_0x00a67a34(lVar5,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar2 == 0) goto LAB_00de00d4;
      uVar11 = *(uint *)(plVar4 + 3);
    }
    if (uVar11 < 2) goto LAB_00de00d0;
    plVar4[5] = lVar5;
    if (in_x2 != 0) {
      lVar2 = func_0x00a67a34(in_x2,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar2 == 0) goto LAB_00de00d4;
      uVar11 = *(uint *)(plVar4 + 3);
    }
    if (uVar11 < 3) {
LAB_00de00d0:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar4[6] = in_x2;
    if (lVar13 != 0) {
      unaff_x22 = 0x1917000;
      register0x00000008 = (BADSPACEBASE *)&pcStack_60;
      pcStack_30 = MaxSdkAndroid__ShowRewardedAd;
      uVar8 = _Str_showRewardedAd;
UnityEngine_AndroidJavaObject__CallStatic:
      *(code **)((long)register0x00000008 + -0x30) = pcStack_30;
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x10) = unaff_x20;
      *(long *)((long)register0x00000008 + -8) = unaff_x19;
      if (*(long *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar14 = *(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x18);
      uVar7 = UnityEngine__AndroidJNIHelper__GetSignature(plVar4);
      uVar8 = UnityEngine__AndroidJNIHelper__GetMethodID(uVar14,uVar8,uVar7,1);
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
      lVar2 = tpidr_el0;
      *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(lVar2 + 0x28);
      if ((bRam000000000191b543 & 1) == 0) {
        func_0x00a67900(&Method_UnityEngine_AndroidJavaObject__CallStatic__);
        func_0x00a67900(&Method_System_Span_jvalue___ctor__);
        bRam000000000191b543 = 1;
      }
      if ((plVar4 == (long *)0x0) || (uVar3 = plVar4[3], uVar3 == 0)) {
        uVar7 = 0;
        uVar14 = 0;
      }
      else {
        if ((uVar3 & 0xffffffff) == 0) {
          puVar15 = (undefined1 *)0x0;
        }
        else {
          puVar15 = (undefined1 *)
                    ((long)register0x00000008 +
                    (-0x60 - ((-(uVar3 >> 0x1f & 1) & 0xfffffff800000000 | (uVar3 & 0xffffffff) << 3
                              ) + 0xf & 0xfffffffffffffff0)));
        }
        func_0x016decb0(puVar15,0);
        *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
        func_0x00c90098((undefined1 *)((long)register0x00000008 + -0x58),puVar15,uVar3 & 0xffffffff,
                        _Method_System_Span_jvalue___ctor__);
        uVar7 = *(undefined8 *)((long)register0x00000008 + -0x58);
        uVar14 = *(undefined8 *)((long)register0x00000008 + -0x50);
      }
      UnityEngine_AndroidJNIHelper__CreateJNIArgArray(plVar4,uVar7,uVar14);
      if (*(long *)(lVar13 + 0x18) != 0) {
        UnityEngine_AndroidJNISafe__CallStaticVoidMethod
                  (*(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x18),uVar8,uVar7,uVar14);
        UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar4,uVar7,uVar14);
        while( true ) {
          if (*(long *)(lVar2 + 0x28) == *(long *)((long)register0x00000008 + -0x48)) {
            return;
          }
          auVar17 = func_0x016dec70();
          if (auVar17._8_4_ != 1) break;
          plVar9 = (long *)func_0x016dec50(auVar17._0_8_);
          lVar13 = *plVar9;
          func_0x016dec60();
          UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar4,uVar7,uVar14);
          if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b48(lVar13);
          }
        }
        UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar4,uVar7,uVar14);
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
    uVar8 = func_0x00a67b74();
    func_0x00a67a20(uVar8,0);
  }
LAB_00de00e0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void DCNMAGKBJKO() { }   @0xb5a604

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__DCNMAGKBJKO(void *__this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  byte abStack_34 [4];
  
  if ((bRam00000000019171dc & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str____);
    func_0x00a67900(&Str_IsBannerAdsAvailable__);
    bRam00000000019171dc = 1;
  }
  lVar1 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = _Str_IsBannerAdsAvailable__;
      if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      abStack_34[0] = MaxSdkAndroid__IsInitialized(0);
      abStack_34[0] = abStack_34[0] & 1;
      if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_bool_TypeInfo);
      }
      uVar2 = System_Boolean__ToString(abStack_34,0);
      if ((1 < *(uint *)(lVar1 + 0x18)) &&
         (*(undefined8 *)(lVar1 + 0x28) = uVar2, *(uint *)(lVar1 + 0x18) != 2)) {
        *(undefined8 *)(lVar1 + 0x30) = _Str____;
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
        if (lVar3 == 0) goto LAB_00c5a834;
        abStack_34[0] = DAFNMLEKHAD__MHBEPDHNNFH(lVar3,0);
        abStack_34[0] = abStack_34[0] & 1;
        uVar2 = System_Boolean__ToString(abStack_34,0);
        if ((3 < *(uint *)(lVar1 + 0x18)) &&
           (*(undefined8 *)(lVar1 + 0x38) = uVar2, *(uint *)(lVar1 + 0x18) != 4)) {
          *(undefined8 *)(lVar1 + 0x40) = _Str____;
          pvVar4 = (void *)System_Boolean__ToString((long)__this + 0x34,0);
          if ((5 < *(uint *)(lVar1 + 0x18)) &&
             (*(void **)(lVar1 + 0x48) = pvVar4, *(uint *)(lVar1 + 0x18) != 6)) {
            *(undefined8 *)(lVar1 + 0x50) = _Str____;
            abStack_34[0] = AdvController__HICAMEDDDKG(pvVar4);
            uVar2 = System_Boolean__ToString(abStack_34,0);
            if (7 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x58) = uVar2;
              pvVar4 = (void *)System_String__Concat(lVar1,0);
              Main__GEMDEAMAGPG(pvVar4,false);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
LAB_00c5a834:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private bool HICAMEDDDKG() { }   @0xb598d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool AdvController__HICAMEDDDKG(void *__this)

{
  int iVar1;
  long lVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
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
  lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar2 != 0) {
    lVar2 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar2,0,0);
    if (lVar2 == 0) {
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
    lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((lVar2 != 0) && (lVar2 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar2,0,0), lVar2 != 0)) {
      uStack_28 = *(undefined8 *)(lVar2 + 0x1c);
      uStack_30 = *(undefined8 *)(lVar2 + 0x14);
      iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_30,0);
      return 0 < iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void AIOCMHEIJDD() { }   @0xb5b4b4

/* WARNING: Removing unreachable block (ram,0x00ddfb80) */
/* WARNING: Removing unreachable block (ram,0x00ddfb94) */
/* WARNING: Removing unreachable block (ram,0x00ddfba8) */
/* WARNING: Removing unreachable block (ram,0x00ddfbbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__AIOCMHEIJDD(void *__this)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int *piVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined1 auVar14 [12];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam00000000019171e6 & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    bRam00000000019171e6 = 1;
  }
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = MaxSdkAndroid__IsInitialized(0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar10 = *(long *)((long)__this + 0x38);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((bRam000000000191766b & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo,0,0,0);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_show_interstitial);
    func_0x00a67900(&Str_showInterstitial);
    func_0x00a67900(&Str_Not_showing_MAX_Ads_interstitial__ad_not);
    bRam000000000191766b = 1;
  }
  MaxSdkBase__ValidateAdUnitIdentifier(lVar10,_Str_show_interstitial);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = MaxSdkAndroid__IsInterstitialReady(lVar10);
  uVar6 = _Str_Not_showing_MAX_Ads_interstitial__ad_not;
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar11 = **(long **)(_MaxSdkAndroid_TypeInfo + 0xb8);
    plVar3 = (long *)func_0x00a679a0(_object___TypeInfo,3);
    if (plVar3 != (long *)0x0) {
      if ((lVar10 == 0) ||
         (lVar4 = func_0x00a67a34(lVar10,*(undefined8 *)(*plVar3 + 0x40)), lVar4 != 0)) {
        uVar1 = *(uint *)(plVar3 + 3);
        if (((uVar1 == 0) || (plVar3[4] = lVar10, uVar1 < 2)) || (plVar3[5] = 0, uVar1 < 3)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        plVar3[6] = 0;
        uVar6 = _Str_showInterstitial;
        if (lVar11 != 0) {
          if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x18) + 0x18);
          uVar5 = UnityEngine__AndroidJNIHelper__GetSignature(plVar3);
          uVar6 = UnityEngine__AndroidJNIHelper__GetMethodID(uVar12,uVar6,uVar5,1);
          lVar10 = tpidr_el0;
          lStack_48 = *(long *)(lVar10 + 0x28);
          if ((bRam000000000191b543 & 1) == 0) {
            func_0x00a67900(&Method_UnityEngine_AndroidJavaObject__CallStatic__);
            func_0x00a67900(&Method_System_Span_jvalue___ctor__);
            bRam000000000191b543 = 1;
          }
          if ((plVar3 == (long *)0x0) || (uVar2 = plVar3[3], uVar2 == 0)) {
            uVar5 = 0;
            uVar12 = 0;
          }
          else {
            if ((uVar2 & 0xffffffff) == 0) {
              puVar13 = (undefined1 *)0x0;
            }
            else {
              puVar13 = auStack_60 +
                        -((-(uVar2 >> 0x1f & 1) & 0xfffffff800000000 | (uVar2 & 0xffffffff) << 3) +
                          0xf & 0xfffffffffffffff0);
            }
            func_0x016decb0(puVar13,0);
            uStack_58 = 0;
            uStack_50 = 0;
            func_0x00c90098(&uStack_58,puVar13,uVar2 & 0xffffffff,
                            _Method_System_Span_jvalue___ctor__);
            uVar5 = uStack_58;
            uVar12 = uStack_50;
          }
          UnityEngine_AndroidJNIHelper__CreateJNIArgArray(plVar3,uVar5,uVar12);
          if (*(long *)(lVar11 + 0x18) != 0) {
            UnityEngine_AndroidJNISafe__CallStaticVoidMethod
                      (*(undefined8 *)(*(long *)(lVar11 + 0x18) + 0x18),uVar6,uVar5,uVar12);
            UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar3,uVar5,uVar12);
            while( true ) {
              if (*(long *)(lVar10 + 0x28) == lStack_48) {
                return;
              }
              auVar14 = func_0x016dec70();
              if (auVar14._8_4_ != 1) break;
              plVar7 = (long *)func_0x016dec50(auVar14._0_8_);
              lVar11 = *plVar7;
              func_0x016dec60();
              UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar3,uVar5,uVar12);
              if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b48(lVar11);
              }
            }
            UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar3,uVar5,uVar12);
            func_0x00b65214(auVar14._0_8_);
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b48(0);
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
      }
      else {
        uVar6 = func_0x00a67b74();
        func_0x00a67a20(uVar6,0);
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam00000000019176b4 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Debug_TypeInfo);
    func_0x00a67900(&Str_Warning__AppLovin_MAX__);
    bRam00000000019176b4 = 1;
  }
  if (cRam00000000019176de == '\0') {
    func_0x00a67900(&MaxSdkBase_TypeInfo);
    cRam00000000019176de = '\x01';
  }
  if (*(char *)(*(long *)(_MaxSdkBase_TypeInfo + 0xb8) + 2) != '\0') {
    return;
  }
  uVar6 = System_String__Concat(_Str_Warning__AppLovin_MAX__,uVar6,0);
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Debug_TypeInfo);
  }
  uVar5 = 0;
  if ((bRam000000000191b9e0 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Debug_TypeInfo,0);
    func_0x00a67900(&UnityEngine_ILogger_TypeInfo);
    bRam000000000191b9e0 = 1;
    uVar5 = extraout_x1;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    uVar5 = extraout_x1_00;
  }
  if (cRam000000000191aefe == '\0') {
    func_0x00a67900(&UnityEngine_Debug_TypeInfo,uVar5);
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
  lVar10 = *plVar3;
  uVar2 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar2 != 0) {
    piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _UnityEngine_ILogger_TypeInfo) {
        puVar8 = (undefined8 *)(lVar10 + (long)(*piVar9 + 3) * 0x10 + 0x138);
        goto LAB_0146ab34;
      }
      uVar2 = uVar2 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar2 != 0);
  }
  puVar8 = (undefined8 *)func_0x00a9e6c4(plVar3,_UnityEngine_ILogger_TypeInfo,3);
LAB_0146ab34:
                    /* WARNING: Could not recover jumptable at 0x0146ab4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar8)(plVar3,2,uVar6,puVar8[1]);
  return;
}


// ==== public void OBNLPJNOLJP(int KHKPDHMICLM) { }   @0xb5bc4c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__OBNLPJNOLJP(void *__this,int KHKPDHMICLM)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)UnityEngine_Time__get_time(0);
  if (fVar1 <= 30.0) {
    *(int *)((long)__this + 0x2c) = KHKPDHMICLM;
    fVar2 = (float)UnityEngine_Time__get_time(0);
    fVar1 = (float)(*(int *)((long)__this + 0x2c) * 0x3c);
    if (1 < KHKPDHMICLM) {
      fVar1 = fVar1 * 0.5;
    }
    *(float *)((long)__this + 0x24) = fVar2 + fVar1;
    *(float *)((long)__this + 0x28) = fVar2 + fVar1;
  }
  return;
}


// ==== private void OnRewardedAdFailedToDisplayEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo) { }   @0xb5bde0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__OnRewardedAdFailedToDisplayEvent
               (void *__this,void *adUnitId,void *errorInfo,void *adInfo)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 uStack_3c;
  long *aplStack_38 [2];
  
  if ((bRam00000000019171ed & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_AppLovin__OnRewardedAdFailedToDisplayEve);
    bRam00000000019171ed = 1;
  }
  AdvController__AGMALFPABAM(__this);
  AdvController__EnableAudio();
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar2 = _Str_AppLovin__OnRewardedAdFailedToDisplayEve;
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


// ==== private void OnBannerAdLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }   @0xb5c6cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__OnBannerAdLoadedEvent(void *__this,void *adUnitId,void *adInfo)

{
  void *CIDKMFLFJEJ;
  
  if ((bRam00000000019171f2 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_AppLovin__OnBannerAdLoadedEvent__);
    bRam00000000019171f2 = 1;
  }
  CIDKMFLFJEJ = (void *)System_String__Concat(_Str_AppLovin__OnBannerAdLoadedEvent__,adUnitId,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(CIDKMFLFJEJ,false);
  *(undefined1 *)((long)__this + 0x34) = 1;
  return;
}


// ==== public void FGHKCPANFIG() { }   @0xb5c35c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__FGHKCPANFIG(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam00000000019171f7 & 1) == 0) {
    func_0x00a67900(&System_Action_string__MaxSdkBase_AdInfo__TypeInfo);
    func_0x00a67900(&System_Action_string__MaxSdkBase_ErrorInfo__TypeInfo);
    func_0x00a67900(&System_Action_string__MaxSdkBase_ErrorInfo__MaxSdkBase_AdInfo__TypeInfo);
    func_0x00a67900(&System_Action_string__MaxSdkBase_Reward__MaxSdkBase_AdInfo__TypeInfo);
    func_0x00a67900(&Method_AdvController_OnRewardedAdClickedEvent__);
    func_0x00a67900(&Method_AdvController_OnRewardedAdDisplayedEvent__);
    func_0x00a67900(&Method_AdvController_OnRewardedAdFailedEvent__);
    func_0x00a67900(&Method_AdvController_OnRewardedAdFailedToDisplayEvent__);
    func_0x00a67900(&Method_AdvController_OnRewardedAdHiddenEvent__);
    func_0x00a67900(&Method_AdvController_OnRewardedAdLoadedEvent__);
    func_0x00a67900(&Method_AdvController_OnRewardedAdReceivedRewardEvent__);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_AppLovin__InitializeRewardedAds);
    bRam00000000019171f7 = 1;
  }
  uVar1 = func_0x00a67b44(_System_Action_string__MaxSdkBase_AdInfo__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar1,__this,_Method_AdvController_OnRewardedAdLoadedEvent__,0);
  MaxSdkCallbacks_Rewarded__add_OnAdLoadedEvent(uVar1,0);
  uVar1 = func_0x00a67b44(_System_Action_string__MaxSdkBase_ErrorInfo__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar1,__this,_Method_AdvController_OnRewardedAdFailedEvent__,0);
  MaxSdkCallbacks_Rewarded__add_OnAdLoadFailedEvent(uVar1,0);
  uVar1 = func_0x00a67b44(_System_Action_string__MaxSdkBase_ErrorInfo__MaxSdkBase_AdInfo__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar1,__this,_Method_AdvController_OnRewardedAdFailedToDisplayEvent__,0);
  MaxSdkCallbacks_Rewarded__add_OnAdDisplayFailedEvent(uVar1,0);
  uVar1 = func_0x00a67b44(_System_Action_string__MaxSdkBase_AdInfo__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar1,__this,_Method_AdvController_OnRewardedAdDisplayedEvent__,0);
  MaxSdkCallbacks_Rewarded__add_OnAdDisplayedEvent(uVar1,0);
  uVar1 = func_0x00a67b44(_System_Action_string__MaxSdkBase_AdInfo__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar1,__this,_Method_AdvController_OnRewardedAdClickedEvent__,0);
  MaxSdkCallbacks_Rewarded__add_OnAdClickedEvent(uVar1,0);
  uVar1 = func_0x00a67b44(_System_Action_string__MaxSdkBase_AdInfo__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar1,__this,_Method_AdvController_OnRewardedAdHiddenEvent__,0);
  MaxSdkCallbacks_Rewarded__add_OnAdHiddenEvent(uVar1,0);
  uVar1 = func_0x00a67b44(_System_Action_string__MaxSdkBase_Reward__MaxSdkBase_AdInfo__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar1,__this,_Method_AdvController_OnRewardedAdReceivedRewardEvent__,0);
  MaxSdkCallbacks_Rewarded__add_OnAdReceivedRewardEvent(uVar1,0);
  AdvController__AGMALFPABAM(__this);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_AppLovin__InitializeRewardedAds,false);
  *(undefined1 *)((long)__this + 0x58) = 1;
  return;
}


// ==== private void BIJIMEAHGLM() { }   @0xb59a5c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__BIJIMEAHGLM(void *__this)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  void *__this_00;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long in_x2;
  uint uVar11;
  int *piVar12;
  long unaff_x19;
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
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  code *pcStack_60;
  undefined1 auStack_54 [4];
  undefined8 uStack_50;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  code *pcStack_30;
  
  if ((bRam00000000019171fc & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    bRam00000000019171fc = 1;
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
LAB_00c59b90:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar3 = DAFNMLEKHAD__BMMOMBGDEKF(lVar2,0);
  if ((uVar3 & 1) == 0) {
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
    if (__this_00 == (void *)0x0) goto LAB_00c59b90;
    bVar1 = DAFNMLEKHAD__LKKDIBOKNMJ(__this_00);
    bVar1 = !bVar1;
  }
  else {
    bVar1 = false;
  }
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  MaxSdkAndroid__SetMuted(bVar1,0);
  lVar2 = *(long *)((long)__this + 0x38);
  pcStack_30 = unaff_x30;
  if ((bRam0000000001917669 & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo,0);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_loadInterstitial);
    func_0x00a67900(&Str_load_interstitial);
    bRam0000000001917669 = 1;
  }
  MaxSdkBase__ValidateAdUnitIdentifier(lVar2,_Str_load_interstitial);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar13 = **(long **)(_MaxSdkAndroid_TypeInfo + 0xb8);
  plVar4 = (long *)func_0x00a679a0(_object___TypeInfo,1);
  if (plVar4 == (long *)0x0) {
LAB_00ddf93c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((lVar2 == 0) || (lVar5 = func_0x00a67a34(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 != 0))
  {
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar4[4] = lVar2;
    uVar8 = _Str_loadInterstitial;
    if (lVar13 == 0) goto LAB_00ddf93c;
    goto UnityEngine_AndroidJavaObject__CallStatic;
  }
  uVar8 = func_0x00a67b74();
  unaff_x19 = func_0x00a67a20(uVar8,0);
  pcStack_60 = MaxSdkAndroid__IsInterstitialReady;
  uStack_50 = 0x1917000;
  plStack_48 = plVar4;
  lStack_40 = lVar13;
  lStack_38 = lVar2;
  if ((bRam000000000191766a & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_isInterstitialReady);
    func_0x00a67900(&Str_check_interstitial_loaded);
    bRam000000000191766a = 1;
  }
  MaxSdkBase__ValidateAdUnitIdentifier(unaff_x19,_Str_check_interstitial_loaded);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  unaff_x20 = **(long **)(_MaxSdkAndroid_TypeInfo + 0xb8);
  unaff_x21 = (long *)func_0x00a679a0(_object___TypeInfo,1);
  if (unaff_x21 == (long *)0x0) {
LAB_00ddfa68:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((unaff_x19 == 0) ||
     (lVar2 = func_0x00a67a34(unaff_x19,*(undefined8 *)(*unaff_x21 + 0x40)), lVar2 != 0)) {
    if ((int)unaff_x21[3] == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    unaff_x21[4] = unaff_x19;
    if (unaff_x20 != 0) {
      UnityEngine_AndroidJavaObject__CallStatic___Il2CppFullySharedGenericType_
                (unaff_x20,_Str_isInterstitialReady,unaff_x21,auStack_54,
                 _Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
      return;
    }
    goto LAB_00ddfa68;
  }
  uVar8 = func_0x00a67b74();
  auVar16 = func_0x00a67a20(uVar8,0);
  lVar5 = auVar16._8_8_;
  lVar2 = auVar16._0_8_;
  if ((bRam000000000191766b & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_show_interstitial);
    func_0x00a67900(&Str_showInterstitial);
    func_0x00a67900(&Str_Not_showing_MAX_Ads_interstitial__ad_not);
    bRam000000000191766b = 1;
  }
  MaxSdkBase__ValidateAdUnitIdentifier(lVar2,_Str_show_interstitial);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = MaxSdkAndroid__IsInterstitialReady(lVar2);
  uVar8 = _Str_Not_showing_MAX_Ads_interstitial__ad_not;
  if ((uVar3 & 1) == 0) {
    if ((bRam00000000019176b4 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Debug_TypeInfo);
      func_0x00a67900(&Str_Warning__AppLovin_MAX__);
      bRam00000000019176b4 = 1;
    }
    if (cRam00000000019176de == '\0') {
      func_0x00a67900(&MaxSdkBase_TypeInfo);
      cRam00000000019176de = '\x01';
    }
    if (*(char *)(*(long *)(_MaxSdkBase_TypeInfo + 0xb8) + 2) != '\0') {
      return;
    }
    uVar8 = System_String__Concat(_Str_Warning__AppLovin_MAX__,uVar8,0);
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
    plVar4 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo + 0xb8) + 8);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    lVar2 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == _UnityEngine_ILogger_TypeInfo) {
          puVar10 = (undefined8 *)(lVar2 + (long)(*piVar12 + 3) * 0x10 + 0x138);
          goto LAB_0146ab34;
        }
        uVar3 = uVar3 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar3 != 0);
    }
    puVar10 = (undefined8 *)func_0x00a9e6c4(plVar4,_UnityEngine_ILogger_TypeInfo,3);
LAB_0146ab34:
                    /* WARNING: Could not recover jumptable at 0x0146ab4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar10)(plVar4,2,uVar8,puVar10[1]);
    return;
  }
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar13 = **(long **)(_MaxSdkAndroid_TypeInfo + 0xb8);
  plVar4 = (long *)func_0x00a679a0(_object___TypeInfo,3);
  if (plVar4 == (long *)0x0) goto LAB_00ddfc2c;
  if ((lVar2 == 0) || (lVar6 = func_0x00a67a34(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar6 != 0))
  {
    uVar11 = *(uint *)(plVar4 + 3);
    if (uVar11 == 0) goto LAB_00ddfc1c;
    plVar4[4] = lVar2;
    if (lVar5 != 0) {
      lVar2 = func_0x00a67a34(lVar5,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar2 == 0) goto LAB_00ddfc20;
      uVar11 = *(uint *)(plVar4 + 3);
    }
    if (uVar11 < 2) goto LAB_00ddfc1c;
    plVar4[5] = lVar5;
    if (in_x2 != 0) {
      lVar2 = func_0x00a67a34(in_x2,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar2 == 0) goto LAB_00ddfc20;
      uVar11 = *(uint *)(plVar4 + 3);
    }
    if (uVar11 < 3) {
LAB_00ddfc1c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar4[6] = in_x2;
    if (lVar13 != 0) {
      unaff_x22 = 0x1917000;
      register0x00000008 = (BADSPACEBASE *)&pcStack_60;
      pcStack_30 = MaxSdkAndroid__ShowInterstitial;
      uVar8 = _Str_showInterstitial;
UnityEngine_AndroidJavaObject__CallStatic:
      *(code **)((long)register0x00000008 + -0x30) = pcStack_30;
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x10) = unaff_x20;
      *(long *)((long)register0x00000008 + -8) = unaff_x19;
      if (*(long *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar14 = *(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x18);
      uVar7 = UnityEngine__AndroidJNIHelper__GetSignature(plVar4);
      uVar8 = UnityEngine__AndroidJNIHelper__GetMethodID(uVar14,uVar8,uVar7,1);
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
      lVar2 = tpidr_el0;
      *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(lVar2 + 0x28);
      if ((bRam000000000191b543 & 1) == 0) {
        func_0x00a67900(&Method_UnityEngine_AndroidJavaObject__CallStatic__);
        func_0x00a67900(&Method_System_Span_jvalue___ctor__);
        bRam000000000191b543 = 1;
      }
      if ((plVar4 == (long *)0x0) || (uVar3 = plVar4[3], uVar3 == 0)) {
        uVar7 = 0;
        uVar14 = 0;
      }
      else {
        if ((uVar3 & 0xffffffff) == 0) {
          puVar15 = (undefined1 *)0x0;
        }
        else {
          puVar15 = (undefined1 *)
                    ((long)register0x00000008 +
                    (-0x60 - ((-(uVar3 >> 0x1f & 1) & 0xfffffff800000000 | (uVar3 & 0xffffffff) << 3
                              ) + 0xf & 0xfffffffffffffff0)));
        }
        func_0x016decb0(puVar15,0);
        *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
        func_0x00c90098((undefined1 *)((long)register0x00000008 + -0x58),puVar15,uVar3 & 0xffffffff,
                        _Method_System_Span_jvalue___ctor__);
        uVar7 = *(undefined8 *)((long)register0x00000008 + -0x58);
        uVar14 = *(undefined8 *)((long)register0x00000008 + -0x50);
      }
      UnityEngine_AndroidJNIHelper__CreateJNIArgArray(plVar4,uVar7,uVar14);
      if (*(long *)(lVar13 + 0x18) != 0) {
        UnityEngine_AndroidJNISafe__CallStaticVoidMethod
                  (*(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x18),uVar8,uVar7,uVar14);
        UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar4,uVar7,uVar14);
        while( true ) {
          if (*(long *)(lVar2 + 0x28) == *(long *)((long)register0x00000008 + -0x48)) {
            return;
          }
          auVar17 = func_0x016dec70();
          if (auVar17._8_4_ != 1) break;
          plVar9 = (long *)func_0x016dec50(auVar17._0_8_);
          lVar13 = *plVar9;
          func_0x016dec60();
          UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar4,uVar7,uVar14);
          if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b48(lVar13);
          }
        }
        UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar4,uVar7,uVar14);
        func_0x00b65214(auVar17._0_8_);
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b48(0);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  else {
LAB_00ddfc20:
    uVar8 = func_0x00a67b74();
    func_0x00a67a20(uVar8,0);
  }
LAB_00ddfc2c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



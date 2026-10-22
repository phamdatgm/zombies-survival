// ==== public void JJDJIEJLCFM() { }   @0xb5919c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__JJDJIEJLCFM(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam00000000019171d2 & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    bRam00000000019171d2 = 1;
  }
  if (*(char *)((long)__this + 0x35) == '\0') {
    if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = MaxSdkAndroid__IsInitialized(0);
    if ((uVar1 & 1) != 0) {
      uVar2 = *(undefined8 *)((long)__this + 0x48);
      if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      MaxSdkAndroid__HideBanner(uVar2,0);
      *(undefined1 *)((long)__this + 0x35) = 1;
    }
  }
  return;
}


// ==== public void .ctor() { }   @0xb59d08

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController___ctor(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam00000000019171d7 & 1) == 0) {
    func_0x00a67900(&Str_e00214815cf78976);
    func_0x00a67900(&Str_40b5ce7451461a49);
    func_0x00a67900(&Str_74fbf69c18ecd27f);
    bRam00000000019171d7 = 1;
  }
  *(undefined4 *)((long)__this + 0x2c) = 6;
  uVar1 = _Str_40b5ce7451461a49;
  *(undefined8 *)((long)__this + 0x38) = _Str_e00214815cf78976;
  *(undefined8 *)((long)__this + 0x40) = uVar1;
  uVar1 = _Str_74fbf69c18ecd27f;
  *(undefined4 *)((long)__this + 0x60) = 0x3f800000;
  *(undefined4 *)((long)__this + 0x68) = 3;
  *(undefined8 *)((long)__this + 0x48) = uVar1;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public void BDHEBIMMJNF() { }   @0xb5a4b8

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

void AdvController__BDHEBIMMJNF(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if ((((*(char *)((long)__this + 0x58) == '\0') || (*(char *)((long)__this + 0x20) == '\0')) ||
      (fVar4 = (float)UnityEngine_Time__get_time(0), fVar4 <= *(float *)((long)__this + 0x5c))) ||
     (((*(char *)((long)__this + 100) != '\0' && (*(char *)((long)__this + 0x65) != '\0')) &&
      (*(char *)((long)__this + 0x66) != '\0')))) {
    return;
  }
  fVar4 = (float)UnityEngine_Time__get_time(0);
  *(float *)((long)__this + 0x5c) = fVar4 + *(float *)((long)__this + 0x60);
  if ((*(char *)((long)__this + 100) == '\0') &&
     (uVar1 = AdvController__HNDMJBICLJF(__this), (uVar1 & 1) != 0)) {
    AdvController__LOGPFOOKGPO(__this,1);
  }
  if ((*(char *)((long)__this + 0x65) == '\0') &&
     (uVar1 = AdvController__HNDMJBICLJF(__this), (uVar1 & 1) != 0)) {
    AdvController__LOGPFOOKGPO(__this,2);
  }
  if (*(char *)((long)__this + 0x66) != '\0') {
    return;
  }
  uVar1 = AdvController__HNDMJBICLJF(__this);
  if ((uVar1 & 1) == 0) {
    return;
  }
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
      if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c597bc;
      Menu__PPBIOKBJGPG((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
    }
  }
  uStack_48 = _NNPDABJADNE_TypeInfo;
  uStack_40 = 0xffffffffffffffff;
  uStack_38 = 3;
  uVar3 = System_Enum__ToString(&uStack_48,0);
  uVar3 = System_String__Concat(_Str_OnRewardedVideoLoaded__,uVar3,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar3,0);
  return;
}


// ==== public string MMPJLHNFLAK() { }   @0xb5b160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * AdvController__MMPJLHNFLAK(void *__this)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  float fVar4;
  float fVar5;
  int iStack_24;
  
  if ((bRam00000000019171e0 & 1) == 0) {
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_m_);
    func_0x00a67900(&Str_s__interval__);
    func_0x00a67900(&Str_Next_ad_show__);
    bRam00000000019171e0 = 1;
  }
  lVar1 = func_0x00a679a0(_string___TypeInfo,5);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = _Str_Next_ad_show__;
      fVar5 = *(float *)((long)__this + 0x24);
      fVar4 = (float)UnityEngine_Time__get_time(0);
      fVar5 = fVar5 - fVar4;
      iStack_24 = -0x80000000;
      if (fVar5 != INFINITY) {
        iStack_24 = (int)fVar5;
      }
      uVar2 = System_Int32__ToString(&iStack_24,0);
      if ((1 < *(uint *)(lVar1 + 0x18)) &&
         (*(undefined8 *)(lVar1 + 0x28) = uVar2, *(uint *)(lVar1 + 0x18) != 2)) {
        *(undefined8 *)(lVar1 + 0x30) = _Str_s__interval__;
        uVar2 = System_Int32__ToString((long)__this + 0x2c,0);
        if ((3 < *(uint *)(lVar1 + 0x18)) &&
           (*(undefined8 *)(lVar1 + 0x38) = uVar2, *(uint *)(lVar1 + 0x18) != 4)) {
          *(undefined8 *)(lVar1 + 0x40) = _Str_m_;
          pvVar3 = (void *)System_String__Concat(lVar1,0);
          return pvVar3;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void NGHMIHEBNLO() { }   @0xb5b390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__NGHMIHEBNLO(void *__this)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  
  if ((bRam00000000019171e5 & 1) == 0) {
    func_0x00a67900(&AdvController_TypeInfo);
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam00000000019171e5 = 1;
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
  fVar2 = (float)UnityEngine_AudioListener__get_volume(0);
  if (0.0 < fVar2) {
    uVar3 = UnityEngine_AudioListener__get_volume(0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x14) = uVar3;
    UnityEngine_AudioListener__set_volume(0,0);
    *(undefined1 *)(*(long *)(_AdvController_TypeInfo + 0xb8) + 8) = 1;
  }
  return;
}


// ==== public void DIHNEEIFHAG(Camera EIKILFDFMFB) { }   @0xb5bb9c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__DIHNEEIFHAG(void *__this,void *EIKILFDFMFB)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 uStack_3c;
  long *aplStack_38 [2];
  
  if ((bRam00000000019171e8 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Adverty__SetMainCamera_);
    bRam00000000019171e8 = 1;
  }
  Adverty_AdvertySettings__SetMainCamera(EIKILFDFMFB,0);
  uVar8 = _Str_Adverty__SetMainCamera_;
  if (EIKILFDFMFB == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*(long *)EIKILFDFMFB + 0x168))
                      (EIKILFDFMFB,*(undefined8 *)(*(long *)EIKILFDFMFB + 0x170));
  }
  plVar7 = (long *)System_String__Concat(uVar8,uVar6,0);
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
  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar4 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar5 = DAFNMLEKHAD__LLEFEIHEJDE(lVar4,0);
  if ((uVar5 & 1) == 0) {
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
  uVar5 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar5 & 1) == 0) {
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
  uVar5 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar7 == (long *)0x0)) goto LAB_00c590c8;
  lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
  if (lVar4 == 0) goto LAB_00c590c8;
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
  plVar7 = *(long **)(lVar4 + 0x1e8);
  if ((plVar7 == (long *)0x0) ||
     (lVar2 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0)), lVar2 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar2 + 0x10)) {
    if (*(long *)(lVar4 + 0x1e8) == 0) goto LAB_00c16768;
    uVar6 = UnityEngine_Component__get_gameObject(*(long *)(lVar4 + 0x1e8),0);
    if ((*(long *)(lVar4 + 0x1e8) == 0) ||
       (lVar2 = UnityEngine_Component__get_transform(*(long *)(lVar4 + 0x1e8),0), lVar2 == 0))
    goto LAB_00c16768;
    uVar3 = UnityEngine_Transform__get_parent(lVar2,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar2 = UnityEngine_Object__Instantiate_object_
                      (uVar6,uVar3,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar2 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar2,aplStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar4 + 0x1e8) = aplStack_38[0];
    if (aplStack_38[0] == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*aplStack_38[0] + 0x5a8))
              (aplStack_38[0],_Str_,*(undefined8 *)(*aplStack_38[0] + 0x5b0));
  }
  plVar7 = *(long **)(lVar4 + 0x1e8);
  lVar4 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar7 != (long *)0x0) &&
     (uVar6 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0)), lVar4 != 0))
  {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar4 + 0x20) = uVar6, uVar1 != 1 &&
         (*(undefined8 *)(lVar4 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar4 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar4 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar6 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar6 = System_String__Format(_Str__0_f2_,uVar6,0);
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar4 + 0x40) = uVar6, uVar1 != 5)) &&
         (*(undefined8 *)(lVar4 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar4 + 0x50) = uVar8;
        uVar8 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x58) = uVar8;
          uVar8 = System_String__Concat(lVar4,0);
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


// ==== private void OnInterstitialLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }   @0xb5bd70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__OnInterstitialLoadedEvent(void *__this,void *adUnitId,void *adInfo)

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
  
  if ((bRam00000000019171ec & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_AppLovin__OnInterstitialLoadedEvent);
    bRam00000000019171ec = 1;
    adUnitId = extraout_x1;
  }
  *(undefined4 *)((long)__this + 0x50) = 0;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo,adUnitId);
  }
  plVar2 = _Str_AppLovin__OnInterstitialLoadedEvent;
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


// ==== private bool FIDKMPCKMMB() { }   @0xb5aedc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool AdvController__FIDKMPCKMMB(void *__this)

{
  int iVar1;
  void *pvVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam00000000019171f1 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam00000000019171f1 = 1;
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
  pvVar2 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (pvVar2 != (void *)0x0) {
    pvVar2 = DAFNMLEKHAD__PJDAAMCNMHJ(pvVar2,1);
    if (pvVar2 == (void *)0x0) {
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
    pvVar2 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((pvVar2 != (void *)0x0) &&
       (pvVar2 = DAFNMLEKHAD__PJDAAMCNMHJ(pvVar2,1), pvVar2 != (void *)0x0)) {
      uStack_28 = *(undefined8 *)((long)pvVar2 + 0x1c);
      uStack_30 = *(undefined8 *)((long)pvVar2 + 0x14);
      iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_30,0);
      return 0 < iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void OnInterstitialDisplayedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }   @0xb5c958

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__OnInterstitialDisplayedEvent(void *__this,void *adUnitId,void *adInfo)

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
  
  if ((bRam00000000019171f6 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    __this = (void *)func_0x00a67900(&Str_AppLovin__OnInterstitialDisplayedEvent);
    bRam00000000019171f6 = 1;
  }
  AdvController__NGHMIHEBNLO(__this);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar2 = _Str_AppLovin__OnInterstitialDisplayedEvent;
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


// ==== private void OnInterstitialFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo) { }   @0xb5cb34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__OnInterstitialFailedEvent(void *__this,void *adUnitId,void *errorInfo)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  void *extraout_x1;
  undefined8 uVar9;
  double dVar10;
  undefined4 uStack_3c;
  long *plStack_38;
  
  if ((bRam00000000019171fb & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&System_Math_TypeInfo);
    func_0x00a67900(&Str_AppLovin__OnInterstitialFailedEvent);
    func_0x00a67900(&Str_BIJIMEAHGLM);
    bRam00000000019171fb = 1;
    adUnitId = extraout_x1;
  }
  iVar1 = *(int *)((long)__this + 0x50) + 1;
  *(int *)((long)__this + 0x50) = iVar1;
  if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_System_Math_TypeInfo,adUnitId);
  }
  dVar10 = (double)System_Math__Pow(0x4000000000000000,(double)iVar1,0);
  UnityEngine_MonoBehaviour__Invoke((float)dVar10,__this,_Str_BIJIMEAHGLM,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar3 = _Str_AppLovin__OnInterstitialFailedEvent;
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
  lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar7 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar8 = DAFNMLEKHAD__LLEFEIHEJDE(lVar7,0);
  if ((uVar8 & 1) == 0) {
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
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar3 == (long *)0x0)) goto LAB_00c590c8;
  lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar9 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  if (lVar7 == 0) goto LAB_00c590c8;
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
  plVar3 = *(long **)(lVar7 + 0x1e8);
  if ((plVar3 == (long *)0x0) ||
     (lVar4 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0)), lVar4 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar4 + 0x10)) {
    if (*(long *)(lVar7 + 0x1e8) == 0) goto LAB_00c16768;
    uVar5 = UnityEngine_Component__get_gameObject(*(long *)(lVar7 + 0x1e8),0);
    if ((*(long *)(lVar7 + 0x1e8) == 0) ||
       (lVar4 = UnityEngine_Component__get_transform(*(long *)(lVar7 + 0x1e8),0), lVar4 == 0))
    goto LAB_00c16768;
    uVar6 = UnityEngine_Transform__get_parent(lVar4,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar4 = UnityEngine_Object__Instantiate_object_
                      (uVar5,uVar6,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar4 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar4,&plStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar7 + 0x1e8) = plStack_38;
    if (plStack_38 == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*plStack_38 + 0x5a8))(plStack_38,_Str_,*(undefined8 *)(*plStack_38 + 0x5b0));
  }
  plVar3 = *(long **)(lVar7 + 0x1e8);
  lVar7 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar3 != (long *)0x0) &&
     (uVar5 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0)), lVar7 != 0))
  {
    uVar2 = *(uint *)(lVar7 + 0x18);
    if ((uVar2 != 0) &&
       (((*(undefined8 *)(lVar7 + 0x20) = uVar5, uVar2 != 1 &&
         (*(undefined8 *)(lVar7 + 0x28) = _Str__color_, 2 < uVar2)) &&
        (*(undefined8 *)(lVar7 + 0x30) = _Str__78e938, uVar2 != 3)))) {
      *(undefined8 *)(lVar7 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar5 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar5 = System_String__Format(_Str__0_f2_,uVar5,0);
      uVar2 = *(uint *)(lVar7 + 0x18);
      if (((4 < uVar2) && (*(undefined8 *)(lVar7 + 0x40) = uVar5, uVar2 != 5)) &&
         (*(undefined8 *)(lVar7 + 0x48) = _Str____color___, 6 < uVar2)) {
        *(undefined8 *)(lVar7 + 0x50) = uVar9;
        uVar9 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar7 + 0x18)) {
          *(undefined8 *)(lVar7 + 0x58) = uVar9;
          uVar9 = System_String__Concat(lVar7,0);
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



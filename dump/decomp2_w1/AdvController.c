// ==== public void KHDFDGMBOIJ() { }   @0xb58b78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__KHDFDGMBOIJ(void *__this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  byte abStack_24 [4];
  
  if ((bRam00000000019171d0 & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str___Next_show_after__);
    func_0x00a67900(&Str_AdvInit__IsDisableInterstitial___);
    bRam00000000019171d0 = 1;
  }
  if (*(char *)((long)__this + 0x20) == '\0') {
    UnityEngine_Behaviour__set_enabled(__this,1,0);
    iVar1 = *(int *)((long)__this + 0x2c);
    fVar5 = (float)UnityEngine_Time__get_time(0);
    fVar6 = (float)(*(int *)((long)__this + 0x2c) * 0x3c);
    if (1 < iVar1) {
      fVar6 = fVar6 * 0.5;
    }
    *(float *)((long)__this + 0x28) = fVar5 + fVar6;
    *(float *)((long)__this + 0x24) = fVar5 + fVar6;
    AdvController__HNGKOHOGEFC(__this);
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
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    abStack_24[0] = DAFNMLEKHAD__MHBEPDHNNFH(lVar2,0);
    abStack_24[0] = abStack_24[0] & 1;
    if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_bool_TypeInfo);
    }
    uVar3 = System_Boolean__ToString(abStack_24,0);
    uVar4 = System_Single__ToString((float *)((long)__this + 0x24),0);
    uVar3 = System_String__Concat
                      (_Str_AdvInit__IsDisableInterstitial___,uVar3,_Str___Next_show_after__,uVar4,0
                      );
    Main__GEMDEAMAGPG(uVar3,0);
    *(undefined1 *)((long)__this + 0x20) = 1;
  }
  return;
}


// ==== private void InterstitialFailedToDisplayEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo) { }   @0xb599e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__InterstitialFailedToDisplayEvent
               (void *__this,void *adUnitId,void *errorInfo,void *adInfo)

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
  
  if ((bRam00000000019171d5 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_AppLovin__InterstitialFailedToDisplayEve);
    bRam00000000019171d5 = 1;
    adUnitId = extraout_x1;
  }
  AdvController__BIJIMEAHGLM(__this,adUnitId);
  AdvController__EnableAudio();
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar2 = _Str_AppLovin__InterstitialFailedToDisplayEve;
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


// ==== public void EIPJKIFBCGB(bool FDNFJIMNEEF) { }   @0xb59f9c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__EIPJKIFBCGB(void *__this,bool FDNFJIMNEEF)

{
  undefined8 uVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if ((bRam00000000019171da & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo,FDNFJIMNEEF);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&NNPDABJADNE_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_OnRewardedVideoFinish__);
    bRam00000000019171da = 1;
  }
  uStack_48 = _NNPDABJADNE_TypeInfo;
  uStack_40 = 0xffffffffffffffff;
  uStack_38 = *(undefined4 *)((long)__this + 0x30);
  uVar1 = System_Enum__ToString(&uStack_48,0);
  uVar1 = System_String__Concat(_Str_OnRewardedVideoFinish__,uVar1,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0);
  switch(*(undefined4 *)((long)__this + 0x30)) {
  case 0:
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c5a3e0;
    Menu__NPHCCBBGINI(**(long **)(_Menu_TypeInfo + 0xb8),0);
    break;
  case 1:
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c5a3e0;
    Menu__JPGHCLJLKDC((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
    *(undefined1 *)((long)__this + 100) = 0;
    goto code_r0x00c5a168;
  case 2:
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c5a3e0;
    Menu__IKGBHGHCJCL(**(long **)(_Menu_TypeInfo + 0xb8),0);
    *(undefined1 *)((long)__this + 0x65) = 0;
    goto code_r0x00c5a168;
  case 3:
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c5a3e0;
    Menu__EIABBDMGLHD((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
    *(undefined1 *)((long)__this + 0x66) = 0;
code_r0x00c5a168:
    *(undefined4 *)((long)__this + 0x5c) = 0;
    break;
  case 4:
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c5a3e0;
    Menu__JGDPPFPNOLB(**(long **)(_Menu_TypeInfo + 0xb8),0);
    break;
  case 5:
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c5a3e0;
      uVar1 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (*(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30) == 0)) goto LAB_00c5a3e0;
        pvVar2 = (void *)GUIGameplay__GGKBDJCHHOE();
        goto code_r0x00c5a2d4;
      }
    }
    break;
  case 6:
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((void *)**(undefined8 **)(_CarController_TypeInfo + 0xb8) == (void *)0x0)
      goto LAB_00c5a3e0;
      pvVar2 = CarController__HAPAIKKJNCN((void *)**(undefined8 **)(_CarController_TypeInfo + 0xb8))
      ;
code_r0x00c5a2d4:
      UnityEngine_MonoBehaviour__StartCoroutine(__this,pvVar2,0);
    }
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
LAB_00c5a3e0:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar1 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c5a3e0;
      Menu__PPBIOKBJGPG(**(long **)(_Menu_TypeInfo + 0xb8),0);
    }
  }
  if ((*(int *)((long)__this + 0x2c) < 3) ||
     ((*(uint *)((long)__this + 0x30) < 7 &&
      ((1 << (ulong)(*(uint *)((long)__this + 0x30) & 0x1f) & 0x61U) != 0)))) {
    AdvController__AOEKDBOFCIM(__this);
  }
  return;
}


// ==== private void LOGPFOOKGPO(NNPDABJADNE JJNILODLKGJ) { }   @0xb5939c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__LOGPFOOKGPO(void *__this,int JJNILODLKGJ)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  int iStack_38;
  
  if ((bRam00000000019171de & 1) == 0) {
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&NNPDABJADNE_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_OnRewardedVideoLoaded__);
    bRam00000000019171de = 1;
  }
  if (JJNILODLKGJ == 3) {
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
  }
  else if (JJNILODLKGJ == 2) {
    *(undefined1 *)((long)__this + 0x65) = 1;
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
        if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
            (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar2 == 0)) ||
           ((lVar2 = *(long *)(lVar2 + 0x78), lVar2 == 0 ||
            (lVar2 = UnityEngine_Component__get_gameObject(lVar2,0), lVar2 == 0))))
        goto LAB_00c597bc;
        uVar1 = UnityEngine_GameObject__get_activeSelf(lVar2,0);
        if ((uVar1 & 1) != 0) {
          uVar3 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
          if ((uVar1 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c597bc;
            Menu__INMDNKGHGEO((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
          }
        }
      }
    }
  }
  else if (JJNILODLKGJ == 1) {
    *(undefined1 *)((long)__this + 100) = 1;
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
  iStack_38 = JJNILODLKGJ;
  uVar3 = System_Enum__ToString(&uStack_48,0);
  uVar3 = System_String__Concat(_Str_OnRewardedVideoLoaded__,uVar3,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar3,0);
  return;
}


// ==== private void OnRewardedAdHiddenEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }   @0xb5b318

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__OnRewardedAdHiddenEvent(void *__this,void *adUnitId,void *adInfo)

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
  
  if ((bRam00000000019171e3 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_AppLovin__OnRewardedAdDismissedEvent);
    bRam00000000019171e3 = 1;
    adUnitId = extraout_x1;
  }
  AdvController__AGMALFPABAM(__this,adUnitId);
  AdvController__EnableAudio();
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar2 = _Str_AppLovin__OnRewardedAdDismissedEvent;
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


// ==== private void PCKKKENHFJK(ref bool MFEHJEBOGEA) { }   @0xb5a3e4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__PCKKKENHFJK(void *__this,void *MFEHJEBOGEA)

{
  *(undefined1 *)MFEHJEBOGEA = 0;
  *(undefined4 *)((long)__this + 0x5c) = 0;
  return;
}


// ==== private void HNGKOHOGEFC() { }   @0xb58d64

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__HNGKOHOGEFC(void *__this)

{
  undefined8 uVar1;
  byte abStack_34 [4];
  
  if ((bRam00000000019171ea & 1) == 0) {
    func_0x00a67900(&System_Action_MaxSdkBase_SdkConfiguration__TypeInfo);
    func_0x00a67900(&Method_AdvController_MaxSdkCallbacks_OnSdkInitializedEvent__);
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    func_0x00a67900(&Str_AppLovinMaxInit__);
    bRam00000000019171ea = 1;
  }
  uVar1 = func_0x00a67b44(_System_Action_MaxSdkBase_SdkConfiguration__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____ctor
            (uVar1,__this,_Method_AdvController_MaxSdkCallbacks_OnSdkInitializedEvent__,0);
  MaxSdkCallbacks__add_OnSdkInitializedEvent(uVar1,0);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  MaxSdkAndroid__SetHasUserConsent(1,0);
  MaxSdkAndroid__SetDoNotSell(0,0);
  MaxSdkAndroid__InitializeSdk(0,0);
  abStack_34[0] = MaxSdkAndroid__IsInitialized(0);
  abStack_34[0] = abStack_34[0] & 1;
  if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_bool_TypeInfo);
  }
  uVar1 = System_Boolean__ToString(abStack_34,0);
  uVar1 = System_String__Concat(_Str_AppLovinMaxInit__,uVar1,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0);
  return;
}


// ==== private void MaxSdkCallbacks_OnSdkInitializedEvent(MaxSdkBase.SdkConfiguration sdkConfiguration) { }   @0xb5c08c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__MaxSdkCallbacks_OnSdkInitializedEvent(void *__this,void *sdkConfiguration)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *extraout_x1;
  
  if ((bRam00000000019171ef & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_AppLovin__Initialized);
    bRam00000000019171ef = 1;
    sdkConfiguration = extraout_x1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo,sdkConfiguration);
  }
  Main__GEMDEAMAGPG(_Str_AppLovin__Initialized,0);
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar1 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar1 != 0) {
    uVar2 = DAFNMLEKHAD__MHBEPDHNNFH(lVar1,0);
    if ((uVar2 & 1) == 0) {
      AdvController__KMIIPJHJPBM(__this);
      AdvController__MEAIDGHKEOL(__this);
    }
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
    uVar3 = func_0x00a67b44(_System_Action_string__MaxSdkBase_AdInfo__TypeInfo);
    System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (uVar3,__this,_Method_AdvController_OnRewardedAdLoadedEvent__,0);
    MaxSdkCallbacks_Rewarded__add_OnAdLoadedEvent(uVar3,0);
    uVar3 = func_0x00a67b44(_System_Action_string__MaxSdkBase_ErrorInfo__TypeInfo);
    System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (uVar3,__this,_Method_AdvController_OnRewardedAdFailedEvent__,0);
    MaxSdkCallbacks_Rewarded__add_OnAdLoadFailedEvent(uVar3,0);
    uVar3 = func_0x00a67b44(_System_Action_string__MaxSdkBase_ErrorInfo__MaxSdkBase_AdInfo__TypeInfo
                           );
    System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (uVar3,__this,_Method_AdvController_OnRewardedAdFailedToDisplayEvent__,0);
    MaxSdkCallbacks_Rewarded__add_OnAdDisplayFailedEvent(uVar3,0);
    uVar3 = func_0x00a67b44(_System_Action_string__MaxSdkBase_AdInfo__TypeInfo);
    System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (uVar3,__this,_Method_AdvController_OnRewardedAdDisplayedEvent__,0);
    MaxSdkCallbacks_Rewarded__add_OnAdDisplayedEvent(uVar3,0);
    uVar3 = func_0x00a67b44(_System_Action_string__MaxSdkBase_AdInfo__TypeInfo);
    System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (uVar3,__this,_Method_AdvController_OnRewardedAdClickedEvent__,0);
    MaxSdkCallbacks_Rewarded__add_OnAdClickedEvent(uVar3,0);
    uVar3 = func_0x00a67b44(_System_Action_string__MaxSdkBase_AdInfo__TypeInfo);
    System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (uVar3,__this,_Method_AdvController_OnRewardedAdHiddenEvent__,0);
    MaxSdkCallbacks_Rewarded__add_OnAdHiddenEvent(uVar3,0);
    uVar3 = func_0x00a67b44(_System_Action_string__MaxSdkBase_Reward__MaxSdkBase_AdInfo__TypeInfo);
    System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (uVar3,__this,_Method_AdvController_OnRewardedAdReceivedRewardEvent__,0);
    MaxSdkCallbacks_Rewarded__add_OnAdReceivedRewardEvent(uVar3,0);
    AdvController__AGMALFPABAM(__this);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__GEMDEAMAGPG(_Str_AppLovin__InitializeRewardedAds,0);
    *(undefined1 *)((long)__this + 0x58) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void OnRewardedAdReceivedRewardEvent(string adUnitId, MaxSdkBase.Reward reward, MaxSdkBase.AdInfo adInfo) { }   @0xb5c768

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__OnRewardedAdReceivedRewardEvent
               (void *__this,void *adUnitId,void *reward,void *adInfo)

{
  undefined8 uVar1;
  void *pvVar2;
  ulong uVar3;
  void *extraout_x1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if ((bRam00000000019171f4 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_AppLovin__OnRewardedAdReceivedRewardEven);
    bRam00000000019171f4 = 1;
    adUnitId = extraout_x1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo,adUnitId);
  }
  Main__GEMDEAMAGPG(_Str_AppLovin__OnRewardedAdReceivedRewardEven,0);
  AdvController__EnableAudio();
  if ((bRam00000000019171da & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo,0);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&NNPDABJADNE_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_OnRewardedVideoFinish__);
    bRam00000000019171da = 1;
  }
  uStack_48 = _NNPDABJADNE_TypeInfo;
  uStack_40 = 0xffffffffffffffff;
  uStack_38 = *(undefined4 *)((long)__this + 0x30);
  uVar1 = System_Enum__ToString(&uStack_48,0);
  uVar1 = System_String__Concat(_Str_OnRewardedVideoFinish__,uVar1,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0);
  switch(*(undefined4 *)((long)__this + 0x30)) {
  case 0:
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c5a3e0;
    Menu__NPHCCBBGINI(**(long **)(_Menu_TypeInfo + 0xb8),0);
    break;
  case 1:
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c5a3e0;
    Menu__JPGHCLJLKDC((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
    *(undefined1 *)((long)__this + 100) = 0;
    goto code_r0x00c5a168;
  case 2:
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c5a3e0;
    Menu__IKGBHGHCJCL(**(long **)(_Menu_TypeInfo + 0xb8),0);
    *(undefined1 *)((long)__this + 0x65) = 0;
    goto code_r0x00c5a168;
  case 3:
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c5a3e0;
    Menu__EIABBDMGLHD((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
    *(undefined1 *)((long)__this + 0x66) = 0;
code_r0x00c5a168:
    *(undefined4 *)((long)__this + 0x5c) = 0;
    break;
  case 4:
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c5a3e0;
    Menu__JGDPPFPNOLB(**(long **)(_Menu_TypeInfo + 0xb8),0);
    break;
  case 5:
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c5a3e0;
      uVar1 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (*(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30) == 0)) goto LAB_00c5a3e0;
        pvVar2 = (void *)GUIGameplay__GGKBDJCHHOE();
        goto code_r0x00c5a2d4;
      }
    }
    break;
  case 6:
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((void *)**(undefined8 **)(_CarController_TypeInfo + 0xb8) == (void *)0x0)
      goto LAB_00c5a3e0;
      pvVar2 = CarController__HAPAIKKJNCN((void *)**(undefined8 **)(_CarController_TypeInfo + 0xb8))
      ;
code_r0x00c5a2d4:
      UnityEngine_MonoBehaviour__StartCoroutine(__this,pvVar2,0);
    }
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
LAB_00c5a3e0:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar1 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c5a3e0;
      Menu__PPBIOKBJGPG(**(long **)(_Menu_TypeInfo + 0xb8),0);
    }
  }
  if ((*(int *)((long)__this + 0x2c) < 3) ||
     ((*(uint *)((long)__this + 0x30) < 7 &&
      ((1 << (ulong)(*(uint *)((long)__this + 0x30) & 0x1f) & 0x61U) != 0)))) {
    AdvController__AOEKDBOFCIM(__this);
  }
  return;
}


// ==== private void OnBannerAdExpandedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }   @0xb5ca30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvController__OnBannerAdExpandedEvent(void *__this,void *adUnitId,void *adInfo)

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
  
  if ((bRam00000000019171f9 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_AppLovin__OnBannerAdExpandedEvent__);
    bRam00000000019171f9 = 1;
  }
  plVar7 = (long *)System_String__Concat(_Str_AppLovin__OnBannerAdExpandedEvent__,adUnitId,0);
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



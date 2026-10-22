// ==== public void Login() { }   @0xad9890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__Login(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000001916e0c & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Method_System_Array_Empty_object___);
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Str_editor_new);
    func_0x00a67900(&Str_);
    bRam0000000001916e0c = 1;
  }
  BridgePHP__SetServerStatusIcon(0x3f800000,0x3f800000,0x3f800000,0x3f800000,__this);
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(int **)(_BridgePHP_TypeInfo + 0xb8) == 1) {
    GooglePlayGames_PlayGamesPlatform__set_DebugLogEnabled(1,0);
    GooglePlayGames_PlayGamesPlatform__Activate(0);
    BridgePHP__SocialLogin(__this);
  }
  else if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Application__get_isEditor(0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = System_String__op_Equality
                      (*(undefined8 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x10),_Str_,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      piVar5 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
      if (*piVar5 != 5) {
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          piVar5 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
        }
        *(undefined8 *)(piVar5 + 4) = _Str_editor_new;
        lVar2 = _Method_System_Array_Empty_object___;
        lVar6 = *(long *)(_Method_System_Array_Empty_object___ + 0x38);
        if (lVar6 == 0) {
          func_0x00a9e42c(_Method_System_Array_Empty_object___);
          lVar6 = *(long *)(lVar2 + 0x38);
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = func_0x00a9e3d0();
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = func_0x00a9e3d0();
        }
        uVar4 = **(undefined8 **)(lVar2 + 0xb8);
        if ((bRam0000000001916e14 & 1) == 0) {
          func_0x00a67900(&BridgePHP_TypeInfo);
          func_0x00a67900(&Str_);
          bRam0000000001916e14 = 1;
        }
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = System_String__op_Inequality
                          (*(undefined8 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x10),_Str_,0);
        if ((uVar1 & 1) == 0) {
          return;
        }
        if ((*(long *)((long)__this + 0x68) != 0) && (*(char *)((long)__this + 0x7b) != '\0')) {
          *(undefined8 *)((long)__this + 0x28) = 0;
          BridgePHP__StopServerConnect(__this);
        }
        lVar2 = BridgePHP__ServerConnect(__this,0,uVar4);
        *(long *)((long)__this + 0x68) = lVar2;
        if (lVar2 == 0) {
          func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
          uVar3 = func_0x00a67b44();
          uVar4 = func_0x00a67914(&Str_routine_is_null);
          System_NullReferenceException___ctor(uVar3,uVar4,0);
        }
        else {
          if (pcRam000000000191c478 == (code *)0x0) {
            pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
          }
          uVar1 = (*pcRam000000000191c478)(__this);
          if ((uVar1 & 1) != 0) {
            if (pcRam000000000191c488 == (code *)0x0) {
              pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
            }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam000000000191c488)(__this,lVar2);
            return;
          }
          func_0x00a67914(&System_ArgumentException_TypeInfo);
          uVar3 = func_0x00a67b44();
          uVar4 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
          System_ArgumentException___ctor(uVar3,uVar4,0);
        }
        uVar4 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
        auVar7 = func_0x00a67a20(uVar3,uVar4);
        if (pcRam000000000191c488 == (code *)0x0) {
          pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
        }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191c488)(auVar7._0_8_,auVar7._8_8_);
        return;
      }
    }
  }
  return;
}


// ==== private void OnSocialLogin(SignInStatus status) { }   @0xada2d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__OnSocialLogin(void *__this,int status)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *__this_00;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_70;
  byte abStack_64 [4];
  
  if ((bRam0000000001916e11 & 1) == 0) {
    func_0x00a67900(&System_Action_SignInStatus__TypeInfo);
    func_0x00a67900(&Method_System_Array_Empty_object___);
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&Method_BridgePHP_OnSocialLogin__);
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&UnityEngine_SocialPlatforms_ILocalUser_TypeInfo);
    func_0x00a67900(&UnityEngine_SocialPlatforms_IUserProfile_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&GooglePlayGames_BasicApi_SignInStatus_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str____id__);
    func_0x00a67900(&Str_SOCIAL_Login__);
    func_0x00a67900(&Str_n);
    func_0x00a67900(&Str_OnSocialLogin__TRY_Manually___);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str___name__);
    func_0x00a67900(&Str_OnSocialLogin__Skip_Manually);
    bRam0000000001916e11 = 1;
  }
  abStack_64[0] = 0;
  lVar1 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar1 == 0) goto LAB_00bdac4c;
  if (*(int *)(lVar1 + 0x18) == 0) {
LAB_00bdac48:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar1 + 0x20) = _Str_SOCIAL_Login__;
  uStack_80 = _GooglePlayGames_BasicApi_SignInStatus_TypeInfo;
  uStack_78 = 0xffffffffffffffff;
  iStack_70 = status;
  uVar2 = System_Enum__ToString(&uStack_80,0);
  if ((*(uint *)(lVar1 + 0x18) < 2) ||
     (*(undefined8 *)(lVar1 + 0x28) = uVar2, *(uint *)(lVar1 + 0x18) == 2)) goto LAB_00bdac48;
  *(undefined8 *)(lVar1 + 0x30) = _Str__;
  plVar3 = (long *)UnityEngine_Social__get_localUser(0);
  if (plVar3 == (long *)0x0) goto LAB_00bdac4c;
  lVar5 = *plVar3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _UnityEngine_SocialPlatforms_ILocalUser_TypeInfo) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_00bda4e0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)func_0x00a9e6c4(plVar3,_UnityEngine_SocialPlatforms_ILocalUser_TypeInfo,0);
LAB_00bda4e0:
  abStack_64[0] = (*(code *)*puVar4)(plVar3,puVar4[1]);
  abStack_64[0] = abStack_64[0] & 1;
  if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_bool_TypeInfo);
  }
  uVar2 = System_Boolean__ToString(abStack_64,0);
  if ((*(uint *)(lVar1 + 0x18) < 4) ||
     (*(undefined8 *)(lVar1 + 0x38) = uVar2, *(uint *)(lVar1 + 0x18) == 4)) goto LAB_00bdac48;
  *(undefined8 *)(lVar1 + 0x40) = _Str____id__;
  plVar3 = (long *)UnityEngine_Social__get_localUser(0);
  if (plVar3 == (long *)0x0) goto LAB_00bdac4c;
  lVar5 = *plVar3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _UnityEngine_SocialPlatforms_IUserProfile_TypeInfo) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_00bda5a4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)
           func_0x00a9e6c4(plVar3,_UnityEngine_SocialPlatforms_IUserProfile_TypeInfo,1);
LAB_00bda5a4:
  uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  if ((*(uint *)(lVar1 + 0x18) < 6) ||
     (*(undefined8 *)(lVar1 + 0x48) = uVar2, *(uint *)(lVar1 + 0x18) == 6)) goto LAB_00bdac48;
  *(undefined8 *)(lVar1 + 0x50) = _Str___name__;
  plVar3 = (long *)UnityEngine_Social__get_localUser(0);
  if (plVar3 == (long *)0x0) goto LAB_00bdac4c;
  lVar5 = *plVar3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _UnityEngine_SocialPlatforms_IUserProfile_TypeInfo) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_00bda634;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)
           func_0x00a9e6c4(plVar3,_UnityEngine_SocialPlatforms_IUserProfile_TypeInfo,0);
LAB_00bda634:
  uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  if (*(uint *)(lVar1 + 0x18) < 8) goto LAB_00bdac48;
  *(undefined8 *)(lVar1 + 0x58) = uVar2;
  uVar2 = System_String__Concat(lVar1,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar2,1,0);
  if (status == 0) {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined1 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2b) = 1;
    plVar3 = (long *)UnityEngine_Social__get_localUser(0);
    if (plVar3 == (long *)0x0) goto LAB_00bdac4c;
    lVar1 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _UnityEngine_SocialPlatforms_IUserProfile_TypeInfo) {
          puVar4 = (undefined8 *)(lVar1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_00bda814;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)
             func_0x00a9e6c4(plVar3,_UnityEngine_SocialPlatforms_IUserProfile_TypeInfo,1);
LAB_00bda814:
    uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    *(undefined8 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x10) = uVar2;
    uVar6 = UnityEngine_PlayerPrefs__HasKey(_Str_n,0);
    if ((uVar6 & 1) == 0) {
      plVar3 = (long *)UnityEngine_Social__get_localUser(0);
      if (plVar3 == (long *)0x0) goto LAB_00bdac4c;
      lVar1 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _UnityEngine_SocialPlatforms_IUserProfile_TypeInfo) {
            puVar4 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00bda8a0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)
               func_0x00a9e6c4(plVar3,_UnityEngine_SocialPlatforms_IUserProfile_TypeInfo,0);
LAB_00bda8a0:
      lVar1 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (lVar1 == 0) goto LAB_00bdac4c;
      if (2 < *(int *)(lVar1 + 0x10)) {
        if (0x1e < *(int *)(lVar1 + 0x10)) {
          lVar1 = System_String__Substring(lVar1,0,0x1e,0);
        }
        *(long *)((long)__this + 0x48) = lVar1;
      }
    }
    lVar1 = _Method_System_Array_Empty_object___;
    lVar5 = *(long *)(_Method_System_Array_Empty_object___ + 0x38);
    if (lVar5 == 0) {
      func_0x00a9e42c(_Method_System_Array_Empty_object___);
      lVar5 = *(long *)(lVar1 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = func_0x00a9e3d0();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = func_0x00a9e3d0();
    }
    BridgePHP__StartServerConnect(__this,0,**(undefined8 **)(lVar1 + 0xb8));
    BridgePHP__SyncAchievements(__this);
  }
  else if (*(char *)((long)__this + 0xa5) != '\0') {
    if (*(char *)((long)__this + 0xa6) == '\0') {
      *(undefined1 *)((long)__this + 0xa6) = 1;
      lVar1 = func_0x00a679a0(_string___TypeInfo,8);
      if (lVar1 == 0) goto LAB_00bdac4c;
      if (*(int *)(lVar1 + 0x18) == 0) goto LAB_00bdac48;
      *(undefined8 *)(lVar1 + 0x20) = _Str_OnSocialLogin__TRY_Manually___;
      uStack_80 = _GooglePlayGames_BasicApi_SignInStatus_TypeInfo;
      uStack_78 = 0xffffffffffffffff;
      iStack_70 = status;
      uVar2 = System_Enum__ToString(&uStack_80,0);
      if ((*(uint *)(lVar1 + 0x18) < 2) ||
         (*(undefined8 *)(lVar1 + 0x28) = uVar2, *(uint *)(lVar1 + 0x18) == 2)) goto LAB_00bdac48;
      *(undefined8 *)(lVar1 + 0x30) = _Str__;
      plVar3 = (long *)UnityEngine_Social__get_localUser(0);
      if (plVar3 == (long *)0x0) goto LAB_00bdac4c;
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _UnityEngine_SocialPlatforms_ILocalUser_TypeInfo) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00bda954;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)
               func_0x00a9e6c4(plVar3,_UnityEngine_SocialPlatforms_ILocalUser_TypeInfo,0);
LAB_00bda954:
      abStack_64[0] = (*(code *)*puVar4)(plVar3,puVar4[1]);
      abStack_64[0] = abStack_64[0] & 1;
      if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_bool_TypeInfo);
      }
      uVar2 = System_Boolean__ToString(abStack_64,0);
      if ((*(uint *)(lVar1 + 0x18) < 4) ||
         (*(undefined8 *)(lVar1 + 0x38) = uVar2, *(uint *)(lVar1 + 0x18) == 4)) goto LAB_00bdac48;
      *(undefined8 *)(lVar1 + 0x40) = _Str____id__;
      plVar3 = (long *)UnityEngine_Social__get_localUser(0);
      if (plVar3 == (long *)0x0) goto LAB_00bdac4c;
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _UnityEngine_SocialPlatforms_IUserProfile_TypeInfo) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_00bdaa10;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)
               func_0x00a9e6c4(plVar3,_UnityEngine_SocialPlatforms_IUserProfile_TypeInfo,1);
LAB_00bdaa10:
      uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((*(uint *)(lVar1 + 0x18) < 6) ||
         (*(undefined8 *)(lVar1 + 0x48) = uVar2, *(uint *)(lVar1 + 0x18) == 6)) goto LAB_00bdac48;
      *(undefined8 *)(lVar1 + 0x50) = _Str___name__;
      plVar3 = (long *)UnityEngine_Social__get_localUser(0);
      if (plVar3 == (long *)0x0) goto LAB_00bdac4c;
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _UnityEngine_SocialPlatforms_IUserProfile_TypeInfo) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00bdaa98;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)
               func_0x00a9e6c4(plVar3,_UnityEngine_SocialPlatforms_IUserProfile_TypeInfo,0);
LAB_00bdaa98:
      uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (*(uint *)(lVar1 + 0x18) < 8) goto LAB_00bdac48;
      *(undefined8 *)(lVar1 + 0x58) = uVar2;
      uVar2 = System_String__Concat(lVar1,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      Main__GEMDEAMAGPG(uVar2,1,0);
      lVar1 = GooglePlayGames_PlayGamesPlatform__get_Instance(0);
      uVar2 = func_0x00a67b44(_System_Action_SignInStatus__TypeInfo);
      System_Action___Il2CppFullySharedGenericType____ctor
                (uVar2,__this,_Method_BridgePHP_OnSocialLogin__,0);
      if (lVar1 == 0) goto LAB_00bdac4c;
      GooglePlayGames_PlayGamesPlatform__ManuallyAuthenticate(lVar1,uVar2,0);
    }
    else {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(_Str_OnSocialLogin__Skip_Manually,0,0);
    }
  }
  *(undefined1 *)((long)__this + 0xa5) = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar2 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
       (lVar1 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar1 != 0)) {
      GUIGarage__MLEEOPKCMBP(lVar1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
         (__this_00 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20),
         __this_00 != (void *)0x0)) {
        GUIGarage__MGBNHDCJAMK(__this_00);
        return;
      }
    }
  }
LAB_00bdac4c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public IEnumerator GetServerConfig() { }   @0xada274

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * BridgePHP__GetServerConfig(void *__this)

{
  void *pvVar1;
  
  if ((bRam0000000001916e15 & 1) == 0) {
    func_0x00a67900(&BridgePHP__GetServerConfig_d__57_TypeInfo);
    bRam0000000001916e15 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_BridgePHP__GetServerConfig_d__57_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x20) = __this;
  return pvVar1;
}


// ==== public void RefreshUserProfileAndEvents() { }   @0xadb6ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__RefreshUserProfileAndEvents(void *__this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000001916e1a & 1) == 0) {
    func_0x00a67900(&Method_System_Array_Empty_object___);
    func_0x00a67900(&BridgePHP_TypeInfo);
    bRam0000000001916e1a = 1;
  }
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x28) == '\0') {
    fVar7 = (float)UnityEngine_Time__get_unscaledTime(0);
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((float)(*(int *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x50) + 600) < fVar7) {
      fVar7 = (float)UnityEngine_Time__get_unscaledTime(0);
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((float)(*(int *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x54) + 0x78) < fVar7) {
        fVar7 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        iVar1 = -0x80000000;
        if (fVar7 != INFINITY) {
          iVar1 = (int)fVar7;
        }
        *(int *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x54) = iVar1;
        lVar3 = _Method_System_Array_Empty_object___;
        lVar6 = *(long *)(_Method_System_Array_Empty_object___ + 0x38);
        if (lVar6 == 0) {
          func_0x00a9e42c(_Method_System_Array_Empty_object___);
          lVar6 = *(long *)(lVar3 + 0x38);
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = func_0x00a9e3d0();
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = func_0x00a9e3d0();
        }
        uVar5 = **(undefined8 **)(lVar3 + 0xb8);
        if ((bRam0000000001916e14 & 1) == 0) {
          func_0x00a67900(&BridgePHP_TypeInfo);
          func_0x00a67900(&Str_);
          bRam0000000001916e14 = 1;
        }
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = System_String__op_Inequality
                          (*(undefined8 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x10),_Str_,0);
        if ((uVar2 & 1) != 0) {
          if ((*(long *)((long)__this + 0x68) != 0) && (*(char *)((long)__this + 0x7b) != '\0')) {
            *(undefined8 *)((long)__this + 0x28) = 0;
            BridgePHP__StopServerConnect(__this);
          }
          lVar3 = BridgePHP__ServerConnect(__this,1,uVar5);
          *(long *)((long)__this + 0x68) = lVar3;
          if (lVar3 == 0) {
            func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
            uVar4 = func_0x00a67b44();
            uVar5 = func_0x00a67914(&Str_routine_is_null);
            System_NullReferenceException___ctor(uVar4,uVar5,0);
          }
          else {
            if (pcRam000000000191c478 == (code *)0x0) {
              pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
            }
            uVar2 = (*pcRam000000000191c478)(__this);
            if ((uVar2 & 1) != 0) {
              if (pcRam000000000191c488 == (code *)0x0) {
                pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
              }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam000000000191c488)(__this,lVar3);
              return;
            }
            func_0x00a67914(&System_ArgumentException_TypeInfo);
            uVar4 = func_0x00a67b44();
            uVar5 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
            System_ArgumentException___ctor(uVar4,uVar5,0);
          }
          uVar5 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
          auVar8 = func_0x00a67a20(uVar4,uVar5);
          if (pcRam000000000191c488 == (code *)0x0) {
            pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
          }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191c488)(auVar8._0_8_,auVar8._8_8_);
          return;
        }
        return;
      }
    }
  }
  return;
}


// ==== public string GenerateJsonPath() { }   @0xadc188

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * BridgePHP__GenerateJsonPath(void *__this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dStack_68;
  
  if ((bRam0000000001916e1f & 1) == 0) {
    func_0x00a67900(&CarReplay_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Count__);
    func_0x00a67900(&Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Item__);
    func_0x00a67900(&System_Text_StringBuilder_TypeInfo);
    func_0x00a67900(&Str_);
    bRam0000000001916e1f = 1;
  }
  plVar1 = (long *)func_0x00a67b44(_System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(plVar1,_Str_,0);
  iVar4 = 0;
  while( true ) {
    if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = *(long *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 0x18);
    if (lVar3 == 0) goto LAB_00bdc4b0;
    if (*(int *)(lVar3 + 0x18) <= iVar4) break;
    if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar3 = *(long *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 0x18);
      if (lVar3 == 0) goto LAB_00bdc4b0;
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
              (lVar3,iVar4,&dStack_68,
               _Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Item__);
    if (dStack_68 == 0.0) goto LAB_00bdc4b0;
    fVar7 = *(float *)((long)dStack_68 + 0x10) * 100.0;
    dVar6 = (double)func_0x016dece0((double)fVar7,&dStack_68);
    if (0.0 <= fVar7) {
      if (dVar6 == 0.5) {
        fVar7 = (float)dStack_68 + 1.0;
        goto LAB_00bdc304;
      }
      fVar5 = (float)(int)(fVar7 + 0.5);
    }
    else if (dVar6 == -0.5) {
      fVar7 = (float)dStack_68 + -1.0;
LAB_00bdc304:
      fVar5 = (float)dStack_68;
      if (((long)dStack_68 & 1U) != 0) {
        fVar5 = fVar7;
      }
    }
    else {
      fVar5 = (float)(int)(fVar7 + -0.5);
    }
    if (plVar1 == (long *)0x0) goto LAB_00bdc4b0;
    System_Text_StringBuilder__Append(fVar5 / 100.0,plVar1,0);
    System_Text_StringBuilder__Append(plVar1,0x69,0);
    lVar3 = *(long *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 0x18);
    if ((lVar3 == 0) ||
       (System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                  (lVar3,iVar4,&dStack_68,
                   _Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Item__),
       dStack_68 == 0.0)) goto LAB_00bdc4b0;
    fVar7 = *(float *)((long)dStack_68 + 0x14) * 100.0;
    dVar6 = (double)func_0x016dece0((double)fVar7,&dStack_68);
    if (0.0 <= fVar7) {
      if (dVar6 == 0.5) {
        fVar7 = (float)dStack_68 + 1.0;
        goto LAB_00bdc3c8;
      }
      fVar5 = (float)(int)(fVar7 + 0.5);
    }
    else if (dVar6 == -0.5) {
      fVar7 = (float)dStack_68 + -1.0;
LAB_00bdc3c8:
      fVar5 = (float)dStack_68;
      if (((long)dStack_68 & 1U) != 0) {
        fVar5 = fVar7;
      }
    }
    else {
      fVar5 = (float)(int)(fVar7 + -0.5);
    }
    System_Text_StringBuilder__Append(fVar5 / 100.0,plVar1,0);
    System_Text_StringBuilder__Append(plVar1,0x69,0);
    lVar3 = *(long *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 0x18);
    if ((lVar3 == 0) ||
       (System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                  (lVar3,iVar4,&dStack_68,
                   _Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Item__),
       dStack_68 == 0.0)) goto LAB_00bdc4b0;
    System_Text_StringBuilder__Append(plVar1,*(undefined2 *)((long)dStack_68 + 0x18),0);
    lVar3 = *(long *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 0x18);
    if (lVar3 == 0) goto LAB_00bdc4b0;
    if (iVar4 < *(int *)(lVar3 + 0x18) + -1) {
      System_Text_StringBuilder__Append(plVar1,0x69,0);
    }
    iVar4 = iVar4 + 1;
  }
  if (plVar1 != (long *)0x0) {
    pvVar2 = (void *)(**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    return pvVar2;
  }
LAB_00bdc4b0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private static void .cctor() { }   @0xadc7fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP___cctor(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000001916e23 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_LR);
    func_0x00a67900(&Str_CN);
    func_0x00a67900(&Str_AW);
    func_0x00a67900(&Str_LK);
    func_0x00a67900(&Str_RU);
    func_0x00a67900(&Str_SO);
    func_0x00a67900(&Str_ET);
    func_0x00a67900(&Str_GN);
    func_0x00a67900(&Str_MC);
    func_0x00a67900(&Str_FO);
    func_0x00a67900(&Str_LV);
    func_0x00a67900(&Str_KR);
    func_0x00a67900(&Str_ZW);
    func_0x00a67900(&Str_NZ);
    func_0x00a67900(&Str_AT);
    func_0x00a67900(&Str_SL);
    func_0x00a67900(&Str_BG);
    func_0x00a67900(&Str_PE);
    func_0x00a67900(&Str_TD);
    func_0x00a67900(&Str_MF);
    func_0x00a67900(&Str_YE);
    func_0x00a67900(&Str_HU);
    func_0x00a67900(&Str_GS);
    func_0x00a67900(&Str_GW);
    func_0x00a67900(&Str_TW);
    func_0x00a67900(&Str_BJ);
    func_0x00a67900(&Str_BI);
    func_0x00a67900(&Str_CD);
    func_0x00a67900(&Str_TL);
    func_0x00a67900(&Str_NU);
    func_0x00a67900(&Str_CF);
    func_0x00a67900(&Str_LT);
    func_0x00a67900(&Str_NA);
    func_0x00a67900(&Str_MP);
    func_0x00a67900(&Str_DO);
    func_0x00a67900(&Str_TG);
    func_0x00a67900(&Str_CZ);
    func_0x00a67900(&Str_IL);
    func_0x00a67900(&Str_LC);
    func_0x00a67900(&Str_IS);
    func_0x00a67900(&Str_MK);
    func_0x00a67900(&Str_RS);
    func_0x00a67900(&Str_BE);
    func_0x00a67900(&Str_UM);
    func_0x00a67900(&Str_MW);
    func_0x00a67900(&Str_KM);
    func_0x00a67900(&Str_PK);
    func_0x00a67900(&Str_AG);
    func_0x00a67900(&Str_PR);
    func_0x00a67900(&Str_RE);
    func_0x00a67900(&Str_ME);
    func_0x00a67900(&Str_KW);
    func_0x00a67900(&Str_CA);
    func_0x00a67900(&Str_AX);
    func_0x00a67900(&Str_BS);
    func_0x00a67900(&Str_MV);
    func_0x00a67900(&Str_GA);
    func_0x00a67900(&Str_GH);
    func_0x00a67900(&Str_JO);
    func_0x00a67900(&Str_CG);
    func_0x00a67900(&Str_AO);
    func_0x00a67900(&Str_BW);
    func_0x00a67900(&Str_BD);
    func_0x00a67900(&Str_CV);
    func_0x00a67900(&Str_TM);
    func_0x00a67900(&Str_BY);
    func_0x00a67900(&Str_FJ);
    func_0x00a67900(&Str_LB);
    func_0x00a67900(&Str_XK);
    func_0x00a67900(&Str_SE);
    func_0x00a67900(&Str_DM);
    func_0x00a67900(&Str_SN);
    func_0x00a67900(&Str_LA);
    func_0x00a67900(&Str_AQ);
    func_0x00a67900(&Str_ZM);
    func_0x00a67900(&Str_GP);
    func_0x00a67900(&Str_RO);
    func_0x00a67900(&Str_TK);
    func_0x00a67900(&Str_MD);
    func_0x00a67900(&Str_SH);
    func_0x00a67900(&Str_MS);
    func_0x00a67900(&Str_LI);
    func_0x00a67900(&Str_AR);
    func_0x00a67900(&Str_BZ);
    func_0x00a67900(&Str_GF);
    func_0x00a67900(&Str_A1);
    func_0x00a67900(&Str_GL);
    func_0x00a67900(&Str_GE);
    func_0x00a67900(&Str_MM);
    func_0x00a67900(&Str_WS);
    func_0x00a67900(&Str_TC);
    func_0x00a67900(&Str_PA);
    func_0x00a67900(&Str_MH);
    func_0x00a67900(&Str_IQ);
    func_0x00a67900(&Str_MQ);
    func_0x00a67900(&Str_SA);
    func_0x00a67900(&Str_PF);
    func_0x00a67900(&Str_O1);
    func_0x00a67900(&Str_MT);
    func_0x00a67900(&Str_VE);
    func_0x00a67900(&Str_CO);
    func_0x00a67900(&Str_BN);
    func_0x00a67900(&Str_MU);
    func_0x00a67900(&Str_VI);
    func_0x00a67900(&Str_HN);
    func_0x00a67900(&Str_TJ);
    func_0x00a67900(&Str_BB);
    func_0x00a67900(&Str_NP);
    func_0x00a67900(&Str_TH);
    func_0x00a67900(&Str_VN);
    func_0x00a67900(&Str_MY);
    func_0x00a67900(&Str_TN);
    func_0x00a67900(&Str_BH);
    func_0x00a67900(&Str_TT);
    func_0x00a67900(&Str_CR);
    func_0x00a67900(&Str_EG);
    func_0x00a67900(&Str_OM);
    func_0x00a67900(&Str_TO);
    func_0x00a67900(&Str_KZ);
    func_0x00a67900(&Str_IN);
    func_0x00a67900(&Str_JP);
    func_0x00a67900(&Str_KN);
    func_0x00a67900(&Str_AL);
    func_0x00a67900(&Str_AI);
    func_0x00a67900(&Str_JM);
    func_0x00a67900(&Str_MX);
    func_0x00a67900(&Str_NO);
    func_0x00a67900(&Str_CM);
    func_0x00a67900(&Str_CY);
    func_0x00a67900(&Str_SI);
    func_0x00a67900(&Str_NR);
    func_0x00a67900(&Str_AP);
    func_0x00a67900(&Str_FR);
    func_0x00a67900(&Str_BQ);
    func_0x00a67900(&Str_SG);
    func_0x00a67900(&Str_SS);
    func_0x00a67900(&Str_PH);
    func_0x00a67900(&Str_CL);
    func_0x00a67900(&Str_VA);
    func_0x00a67900(&Str_PN);
    func_0x00a67900(&Str_BM);
    func_0x00a67900(&Str_BA);
    func_0x00a67900(&Str_GU);
    func_0x00a67900(&Str_TV);
    func_0x00a67900(&Str_DZ);
    func_0x00a67900(&Str_NC);
    func_0x00a67900(&Str_KH);
    func_0x00a67900(&Str_IT);
    func_0x00a67900(&Str_PG);
    func_0x00a67900(&Str_SD);
    func_0x00a67900(&Str_DE);
    func_0x00a67900(&Str_BF);
    func_0x00a67900(&Str_GM);
    func_0x00a67900(&Str_FK);
    func_0x00a67900(&Str_TF);
    func_0x00a67900(&Str_GR);
    func_0x00a67900(&Str_PL);
    func_0x00a67900(&Str_QA);
    func_0x00a67900(&Str_JE);
    func_0x00a67900(&Str_LU);
    func_0x00a67900(&Str_CU);
    func_0x00a67900(&Str_GD);
    func_0x00a67900(&Str_CK);
    func_0x00a67900(&Str_NE);
    func_0x00a67900(&Str_DK);
    func_0x00a67900(&Str_PT);
    func_0x00a67900(&Str_SR);
    func_0x00a67900(&Str_AE);
    func_0x00a67900(&Str_SJ);
    func_0x00a67900(&Str_https___api_zombiederby_com_zdpixel_);
    func_0x00a67900(&Str_SY);
    func_0x00a67900(&Str_SV);
    func_0x00a67900(&Str_BR);
    func_0x00a67900(&Str_AU);
    func_0x00a67900(&Str_LY);
    func_0x00a67900(&Str_AF);
    func_0x00a67900(&Str_SB);
    func_0x00a67900(&Str_CI);
    func_0x00a67900(&Str_ZA);
    func_0x00a67900(&Str_GG);
    func_0x00a67900(&Str_MO);
    func_0x00a67900(&Str_FI);
    func_0x00a67900(&Str_NF);
    func_0x00a67900(&Str_SK);
    func_0x00a67900(&Str_US);
    func_0x00a67900(&Str_PY);
    func_0x00a67900(&Str_ST);
    func_0x00a67900(&Str_KE);
    func_0x00a67900(&Str_KI);
    func_0x00a67900(&Str_CW);
    func_0x00a67900(&Str_ER);
    func_0x00a67900(&Str_KY);
    func_0x00a67900(&Str_UG);
    func_0x00a67900(&Str_PW);
    func_0x00a67900(&Str_DJ);
    func_0x00a67900(&Str_IO);
    func_0x00a67900(&Str_BL);
    func_0x00a67900(&Str_LS);
    func_0x00a67900(&Str_IM);
    func_0x00a67900(&Str_GY);
    func_0x00a67900(&Str_BO);
    func_0x00a67900(&Str_NL);
    func_0x00a67900(&Str_MN);
    func_0x00a67900(&Str_CX);
    func_0x00a67900(&Str_HK);
    func_0x00a67900(&Str_WF);
    func_0x00a67900(&Str_AM);
    func_0x00a67900(&Str_SM);
    func_0x00a67900(&Str_AS);
    func_0x00a67900(&Str_MR);
    func_0x00a67900(&Str_EC);
    func_0x00a67900(&Str_UA);
    func_0x00a67900(&Str_SC);
    func_0x00a67900(&Str_EH);
    func_0x00a67900(&Str_ML);
    func_0x00a67900(&Str_PM);
    func_0x00a67900(&Str_KG);
    func_0x00a67900(&Str_UZ);
    func_0x00a67900(&Str_CC);
    func_0x00a67900(&Str_FM);
    func_0x00a67900(&Str_HT);
    func_0x00a67900(&Str_CH);
    func_0x00a67900(&Str_);
    func_0x00a67900(&Str_HM);
    func_0x00a67900(&Str_GQ);
    func_0x00a67900(&Str_VG);
    func_0x00a67900(&Str_MZ);
    func_0x00a67900(&Str_BV);
    func_0x00a67900(&Str_ES);
    func_0x00a67900(&Str_PS);
    func_0x00a67900(&Str_VC);
    func_0x00a67900(&Str_IR);
    func_0x00a67900(&Str_UY);
    func_0x00a67900(&Str_IE);
    func_0x00a67900(&Str_BT);
    func_0x00a67900(&Str_AZ);
    func_0x00a67900(&Str_GB);
    func_0x00a67900(&Str_GT);
    func_0x00a67900(&Str_TZ);
    func_0x00a67900(&Str_SZ);
    func_0x00a67900(&Str_NG);
    func_0x00a67900(&Str_AD);
    func_0x00a67900(&Str_ID);
    func_0x00a67900(&Str_GI);
    func_0x00a67900(&Str_KP);
    func_0x00a67900(&Str_EE);
    func_0x00a67900(&Str_HR);
    func_0x00a67900(&Str_NI);
    func_0x00a67900(&Str_EU);
    func_0x00a67900(&Str_MG);
    func_0x00a67900(&Str_YT);
    func_0x00a67900(&Str_MA);
    func_0x00a67900(&Str_VU);
    func_0x00a67900(&Str_RW);
    func_0x00a67900(&Str_SX);
    func_0x00a67900(&Str_TR);
    bRam0000000001916e23 = 1;
  }
  **(undefined4 **)(_BridgePHP_TypeInfo + 0xb8) = 1;
  lVar2 = func_0x00a679a0(_string___TypeInfo,0xff);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (uVar1 != 0) {
      *(undefined8 *)(lVar2 + 0x20) = _Str_;
      if ((((((((((((uVar1 != 1) && (*(undefined8 *)(lVar2 + 0x28) = _Str_AP, 2 < uVar1)) &&
                  (*(undefined8 *)(lVar2 + 0x30) = _Str_EU, uVar1 != 3)) &&
                 ((*(undefined8 *)(lVar2 + 0x38) = _Str_AD, 4 < uVar1 &&
                  (*(undefined8 *)(lVar2 + 0x40) = _Str_AE, uVar1 != 5)))) &&
                ((*(undefined8 *)(lVar2 + 0x48) = _Str_AF, 6 < uVar1 &&
                 ((*(undefined8 *)(lVar2 + 0x50) = _Str_AG, uVar1 != 7 &&
                  (*(undefined8 *)(lVar2 + 0x58) = _Str_AI, 8 < uVar1)))))) &&
               (((*(undefined8 *)(lVar2 + 0x60) = _Str_AL, uVar1 != 9 &&
                 ((((((*(undefined8 *)(lVar2 + 0x68) = _Str_AM, 10 < uVar1 &&
                      (*(undefined8 *)(lVar2 + 0x70) = _Str_CW, uVar1 != 0xb)) &&
                     (*(undefined8 *)(lVar2 + 0x78) = _Str_AO, 0xc < uVar1)) &&
                    (((*(undefined8 *)(lVar2 + 0x80) = _Str_AQ, uVar1 != 0xd &&
                      (*(undefined8 *)(lVar2 + 0x88) = _Str_AR, 0xe < uVar1)) &&
                     ((*(undefined8 *)(lVar2 + 0x90) = _Str_AS, uVar1 != 0xf &&
                      ((*(undefined8 *)(lVar2 + 0x98) = _Str_AT, 0x10 < uVar1 &&
                       (*(undefined8 *)(lVar2 + 0xa0) = _Str_AU, uVar1 != 0x11)))))))) &&
                   (*(undefined8 *)(lVar2 + 0xa8) = _Str_AW, 0x12 < uVar1)) &&
                  (((*(undefined8 *)(lVar2 + 0xb0) = _Str_AZ, uVar1 != 0x13 &&
                    (*(undefined8 *)(lVar2 + 0xb8) = _Str_BA, 0x14 < uVar1)) &&
                   (*(undefined8 *)(lVar2 + 0xc0) = _Str_BB, uVar1 != 0x15)))))) &&
                (((*(undefined8 *)(lVar2 + 200) = _Str_BD, 0x16 < uVar1 &&
                  (*(undefined8 *)(lVar2 + 0xd0) = _Str_BE, uVar1 != 0x17)) &&
                 ((*(undefined8 *)(lVar2 + 0xd8) = _Str_BF, 0x18 < uVar1 &&
                  ((*(undefined8 *)(lVar2 + 0xe0) = _Str_BG, uVar1 != 0x19 &&
                   (*(undefined8 *)(lVar2 + 0xe8) = _Str_BH, 0x1a < uVar1)))))))))) &&
              (*(undefined8 *)(lVar2 + 0xf0) = _Str_BI, uVar1 != 0x1b)) &&
             (((((((*(undefined8 *)(lVar2 + 0xf8) = _Str_BJ, 0x1c < uVar1 &&
                   (*(undefined8 *)(lVar2 + 0x100) = _Str_BM, uVar1 != 0x1d)) &&
                  (*(undefined8 *)(lVar2 + 0x108) = _Str_BN, 0x1e < uVar1)) &&
                 ((*(undefined8 *)(lVar2 + 0x110) = _Str_BO, uVar1 != 0x1f &&
                  (*(undefined8 *)(lVar2 + 0x118) = _Str_BR, 0x20 < uVar1)))) &&
                ((*(undefined8 *)(lVar2 + 0x120) = _Str_BS, uVar1 != 0x21 &&
                 ((*(undefined8 *)(lVar2 + 0x128) = _Str_BT, 0x22 < uVar1 &&
                  (*(undefined8 *)(lVar2 + 0x130) = _Str_BV, uVar1 != 0x23)))))) &&
               ((*(undefined8 *)(lVar2 + 0x138) = _Str_BW, 0x24 < uVar1 &&
                ((((*(undefined8 *)(lVar2 + 0x140) = _Str_BY, uVar1 != 0x25 &&
                   (*(undefined8 *)(lVar2 + 0x148) = _Str_BZ, 0x26 < uVar1)) &&
                  (*(undefined8 *)(lVar2 + 0x150) = _Str_CA, uVar1 != 0x27)) &&
                 (((*(undefined8 *)(lVar2 + 0x158) = _Str_CC, 0x28 < uVar1 &&
                   (*(undefined8 *)(lVar2 + 0x160) = _Str_CD, uVar1 != 0x29)) &&
                  ((*(undefined8 *)(lVar2 + 0x168) = _Str_CF, 0x2a < uVar1 &&
                   ((*(undefined8 *)(lVar2 + 0x170) = _Str_CG, uVar1 != 0x2b &&
                    (*(undefined8 *)(lVar2 + 0x178) = _Str_CH, 0x2c < uVar1)))))))))))) &&
              ((*(undefined8 *)(lVar2 + 0x180) = _Str_CI, uVar1 != 0x2d &&
               ((((*(undefined8 *)(lVar2 + 0x188) = _Str_CK, 0x2e < uVar1 &&
                  (*(undefined8 *)(lVar2 + 400) = _Str_CL, uVar1 != 0x2f)) &&
                 (*(undefined8 *)(lVar2 + 0x198) = _Str_CM, 0x30 < uVar1)) &&
                ((*(undefined8 *)(lVar2 + 0x1a0) = _Str_CN, uVar1 != 0x31 &&
                 (*(undefined8 *)(lVar2 + 0x1a8) = _Str_CO, 0x32 < uVar1)))))))))) &&
            (((*(undefined8 *)(lVar2 + 0x1b0) = _Str_CR, uVar1 != 0x33 &&
              ((*(undefined8 *)(lVar2 + 0x1b8) = _Str_CU, 0x34 < uVar1 &&
               (*(undefined8 *)(lVar2 + 0x1c0) = _Str_CV, uVar1 != 0x35)))) &&
             (*(undefined8 *)(lVar2 + 0x1c8) = _Str_CX, 0x36 < uVar1)))) &&
           ((((((*(undefined8 *)(lVar2 + 0x1d0) = _Str_CY, uVar1 != 0x37 &&
                (*(undefined8 *)(lVar2 + 0x1d8) = _Str_CZ, 0x38 < uVar1)) &&
               (*(undefined8 *)(lVar2 + 0x1e0) = _Str_DE, uVar1 != 0x39)) &&
              ((*(undefined8 *)(lVar2 + 0x1e8) = _Str_DJ, 0x3a < uVar1 &&
               (*(undefined8 *)(lVar2 + 0x1f0) = _Str_DK, uVar1 != 0x3b)))) &&
             (*(undefined8 *)(lVar2 + 0x1f8) = _Str_DM, 0x3c < uVar1)) &&
            (((((*(undefined8 *)(lVar2 + 0x200) = _Str_DO, uVar1 != 0x3d &&
                (*(undefined8 *)(lVar2 + 0x208) = _Str_DZ, 0x3e < uVar1)) &&
               ((*(undefined8 *)(lVar2 + 0x210) = _Str_EC, uVar1 != 0x3f &&
                (((*(undefined8 *)(lVar2 + 0x218) = _Str_EE, 0x40 < uVar1 &&
                  (*(undefined8 *)(lVar2 + 0x220) = _Str_EG, uVar1 != 0x41)) &&
                 (*(undefined8 *)(lVar2 + 0x228) = _Str_EH, 0x42 < uVar1)))))) &&
              ((*(undefined8 *)(lVar2 + 0x230) = _Str_ER, uVar1 != 0x43 &&
               (*(undefined8 *)(lVar2 + 0x238) = _Str_ES, 0x44 < uVar1)))) &&
             (*(undefined8 *)(lVar2 + 0x240) = _Str_ET, uVar1 != 0x45)))))) &&
          (((((*(undefined8 *)(lVar2 + 0x248) = _Str_FI, 0x46 < uVar1 &&
              (*(undefined8 *)(lVar2 + 0x250) = _Str_FJ, uVar1 != 0x47)) &&
             ((*(undefined8 *)(lVar2 + 600) = _Str_FK, 0x48 < uVar1 &&
              (((*(undefined8 *)(lVar2 + 0x260) = _Str_FM, uVar1 != 0x49 &&
                (*(undefined8 *)(lVar2 + 0x268) = _Str_FO, 0x4a < uVar1)) &&
               (*(undefined8 *)(lVar2 + 0x270) = _Str_FR, uVar1 != 0x4b)))))) &&
            (((*(undefined8 *)(lVar2 + 0x278) = _Str_SX, 0x4c < uVar1 &&
              (*(undefined8 *)(lVar2 + 0x280) = _Str_GA, uVar1 != 0x4d)) &&
             ((*(undefined8 *)(lVar2 + 0x288) = _Str_GB, 0x4e < uVar1 &&
              (((*(undefined8 *)(lVar2 + 0x290) = _Str_GD, uVar1 != 0x4f &&
                (*(undefined8 *)(lVar2 + 0x298) = _Str_GE, 0x50 < uVar1)) &&
               ((*(undefined8 *)(lVar2 + 0x2a0) = _Str_GF, uVar1 != 0x51 &&
                ((((*(undefined8 *)(lVar2 + 0x2a8) = _Str_GH, 0x52 < uVar1 &&
                   (*(undefined8 *)(lVar2 + 0x2b0) = _Str_GI, uVar1 != 0x53)) &&
                  (*(undefined8 *)(lVar2 + 0x2b8) = _Str_GL, 0x54 < uVar1)) &&
                 ((*(undefined8 *)(lVar2 + 0x2c0) = _Str_GM, uVar1 != 0x55 &&
                  (*(undefined8 *)(lVar2 + 0x2c8) = _Str_GN, 0x56 < uVar1)))))))))))))) &&
           ((*(undefined8 *)(lVar2 + 0x2d0) = _Str_GP, uVar1 != 0x57 &&
            (((*(undefined8 *)(lVar2 + 0x2d8) = _Str_GQ, 0x58 < uVar1 &&
              (*(undefined8 *)(lVar2 + 0x2e0) = _Str_GR, uVar1 != 0x59)) &&
             ((*(undefined8 *)(lVar2 + 0x2e8) = _Str_GS, 0x5a < uVar1 &&
              (((*(undefined8 *)(lVar2 + 0x2f0) = _Str_GT, uVar1 != 0x5b &&
                (*(undefined8 *)(lVar2 + 0x2f8) = _Str_GU, 0x5c < uVar1)) &&
               (*(undefined8 *)(lVar2 + 0x300) = _Str_GW, uVar1 != 0x5d)))))))))))) &&
         ((((((((*(undefined8 *)(lVar2 + 0x308) = _Str_GY, 0x5e < uVar1 &&
                (*(undefined8 *)(lVar2 + 0x310) = _Str_HK, uVar1 != 0x5f)) &&
               (*(undefined8 *)(lVar2 + 0x318) = _Str_HM, 0x60 < uVar1)) &&
              ((*(undefined8 *)(lVar2 + 800) = _Str_HN, uVar1 != 0x61 &&
               (*(undefined8 *)(lVar2 + 0x328) = _Str_HR, 0x62 < uVar1)))) &&
             ((((*(undefined8 *)(lVar2 + 0x330) = _Str_HT, uVar1 != 99 &&
                (((*(undefined8 *)(lVar2 + 0x338) = _Str_HU, 100 < uVar1 &&
                  (*(undefined8 *)(lVar2 + 0x340) = _Str_ID, uVar1 != 0x65)) &&
                 (*(undefined8 *)(lVar2 + 0x348) = _Str_IE, 0x66 < uVar1)))) &&
               (((*(undefined8 *)(lVar2 + 0x350) = _Str_IL, uVar1 != 0x67 &&
                 (*(undefined8 *)(lVar2 + 0x358) = _Str_IN, 0x68 < uVar1)) &&
                ((*(undefined8 *)(lVar2 + 0x360) = _Str_IO, uVar1 != 0x69 &&
                 (((*(undefined8 *)(lVar2 + 0x368) = _Str_IQ, 0x6a < uVar1 &&
                   (*(undefined8 *)(lVar2 + 0x370) = _Str_IR, uVar1 != 0x6b)) &&
                  ((*(undefined8 *)(lVar2 + 0x378) = _Str_IS, 0x6c < uVar1 &&
                   ((((*(undefined8 *)(lVar2 + 0x380) = _Str_IT, uVar1 != 0x6d &&
                      (*(undefined8 *)(lVar2 + 0x388) = _Str_JM, 0x6e < uVar1)) &&
                     (*(undefined8 *)(lVar2 + 0x390) = _Str_JO, uVar1 != 0x6f)) &&
                    ((*(undefined8 *)(lVar2 + 0x398) = _Str_JP, 0x70 < uVar1 &&
                     (*(undefined8 *)(lVar2 + 0x3a0) = _Str_KE, uVar1 != 0x71)))))))))))))) &&
              (*(undefined8 *)(lVar2 + 0x3a8) = _Str_KG, 0x72 < uVar1)))) &&
            ((*(undefined8 *)(lVar2 + 0x3b0) = _Str_KH, uVar1 != 0x73 &&
             (*(undefined8 *)(lVar2 + 0x3b8) = _Str_KI, 0x74 < uVar1)))) &&
           (((((((((*(undefined8 *)(lVar2 + 0x3c0) = _Str_KM, uVar1 != 0x75 &&
                   (((*(undefined8 *)(lVar2 + 0x3c8) = _Str_KN, 0x76 < uVar1 &&
                     (*(undefined8 *)(lVar2 + 0x3d0) = _Str_KP, uVar1 != 0x77)) &&
                    (*(undefined8 *)(lVar2 + 0x3d8) = _Str_KR, 0x78 < uVar1)))) &&
                  (((*(undefined8 *)(lVar2 + 0x3e0) = _Str_KW, uVar1 != 0x79 &&
                    (*(undefined8 *)(lVar2 + 1000) = _Str_KY, 0x7a < uVar1)) &&
                   (*(undefined8 *)(lVar2 + 0x3f0) = _Str_KZ, uVar1 != 0x7b)))) &&
                 ((*(undefined8 *)(lVar2 + 0x3f8) = _Str_LA, 0x7c < uVar1 &&
                  (*(undefined8 *)(lVar2 + 0x400) = _Str_LB, uVar1 != 0x7d)))) &&
                ((*(undefined8 *)(lVar2 + 0x408) = _Str_LC, 0x7e < uVar1 &&
                 (((*(undefined8 *)(lVar2 + 0x410) = _Str_LI, uVar1 != 0x7f &&
                   (*(undefined8 *)(lVar2 + 0x418) = _Str_LK, 0x80 < uVar1)) &&
                  (*(undefined8 *)(lVar2 + 0x420) = _Str_LR, uVar1 != 0x81)))))) &&
               ((*(undefined8 *)(lVar2 + 0x428) = _Str_LS, 0x82 < uVar1 &&
                (*(undefined8 *)(lVar2 + 0x430) = _Str_LT, uVar1 != 0x83)))) &&
              ((*(undefined8 *)(lVar2 + 0x438) = _Str_LU, 0x84 < uVar1 &&
               (((*(undefined8 *)(lVar2 + 0x440) = _Str_LV, uVar1 != 0x85 &&
                 (*(undefined8 *)(lVar2 + 0x448) = _Str_LY, 0x86 < uVar1)) &&
                ((*(undefined8 *)(lVar2 + 0x450) = _Str_MA, uVar1 != 0x87 &&
                 ((((((*(undefined8 *)(lVar2 + 0x458) = _Str_MC, 0x88 < uVar1 &&
                      (*(undefined8 *)(lVar2 + 0x460) = _Str_MD, uVar1 != 0x89)) &&
                     (*(undefined8 *)(lVar2 + 0x468) = _Str_MG, 0x8a < uVar1)) &&
                    ((*(undefined8 *)(lVar2 + 0x470) = _Str_MH, uVar1 != 0x8b &&
                     (*(undefined8 *)(lVar2 + 0x478) = _Str_MK, 0x8c < uVar1)))) &&
                   (*(undefined8 *)(lVar2 + 0x480) = _Str_ML, uVar1 != 0x8d)) &&
                  ((*(undefined8 *)(lVar2 + 0x488) = _Str_MM, 0x8e < uVar1 &&
                   (*(undefined8 *)(lVar2 + 0x490) = _Str_MN, uVar1 != 0x8f)))))))))))) &&
             (((((*(undefined8 *)(lVar2 + 0x498) = _Str_MO, 0x90 < uVar1 &&
                 ((((((*(undefined8 *)(lVar2 + 0x4a0) = _Str_MP, uVar1 != 0x91 &&
                      (*(undefined8 *)(lVar2 + 0x4a8) = _Str_MQ, 0x92 < uVar1)) &&
                     (*(undefined8 *)(lVar2 + 0x4b0) = _Str_MR, uVar1 != 0x93)) &&
                    ((*(undefined8 *)(lVar2 + 0x4b8) = _Str_MS, 0x94 < uVar1 &&
                     (*(undefined8 *)(lVar2 + 0x4c0) = _Str_MT, uVar1 != 0x95)))) &&
                   (((*(undefined8 *)(lVar2 + 0x4c8) = _Str_MU, 0x96 < uVar1 &&
                     ((*(undefined8 *)(lVar2 + 0x4d0) = _Str_MV, uVar1 != 0x97 &&
                      (*(undefined8 *)(lVar2 + 0x4d8) = _Str_MW, 0x98 < uVar1)))) &&
                    (*(undefined8 *)(lVar2 + 0x4e0) = _Str_MX, uVar1 != 0x99)))) &&
                  (((*(undefined8 *)(lVar2 + 0x4e8) = _Str_MY, 0x9a < uVar1 &&
                    (*(undefined8 *)(lVar2 + 0x4f0) = _Str_MZ, uVar1 != 0x9b)) &&
                   (*(undefined8 *)(lVar2 + 0x4f8) = _Str_NA, 0x9c < uVar1)))))) &&
                ((((*(undefined8 *)(lVar2 + 0x500) = _Str_NC, uVar1 != 0x9d &&
                   (*(undefined8 *)(lVar2 + 0x508) = _Str_NE, 0x9e < uVar1)) &&
                  ((*(undefined8 *)(lVar2 + 0x510) = _Str_NF, uVar1 != 0x9f &&
                   ((*(undefined8 *)(lVar2 + 0x518) = _Str_NG, 0xa0 < uVar1 &&
                    (*(undefined8 *)(lVar2 + 0x520) = _Str_NI, uVar1 != 0xa1)))))) &&
                 (*(undefined8 *)(lVar2 + 0x528) = _Str_NL, 0xa2 < uVar1)))) &&
               (((((*(undefined8 *)(lVar2 + 0x530) = _Str_NO, uVar1 != 0xa3 &&
                   (*(undefined8 *)(lVar2 + 0x538) = _Str_NP, 0xa4 < uVar1)) &&
                  (*(undefined8 *)(lVar2 + 0x540) = _Str_NR, uVar1 != 0xa5)) &&
                 ((*(undefined8 *)(lVar2 + 0x548) = _Str_NU, 0xa6 < uVar1 &&
                  (*(undefined8 *)(lVar2 + 0x550) = _Str_NZ, uVar1 != 0xa7)))) &&
                (((*(undefined8 *)(lVar2 + 0x558) = _Str_OM, 0xa8 < uVar1 &&
                  ((*(undefined8 *)(lVar2 + 0x560) = _Str_PA, uVar1 != 0xa9 &&
                   (*(undefined8 *)(lVar2 + 0x568) = _Str_PE, 0xaa < uVar1)))) &&
                 (((*(undefined8 *)(lVar2 + 0x570) = _Str_PF, uVar1 != 0xab &&
                   (((*(undefined8 *)(lVar2 + 0x578) = _Str_PG, 0xac < uVar1 &&
                     (*(undefined8 *)(lVar2 + 0x580) = _Str_PH, uVar1 != 0xad)) &&
                    (*(undefined8 *)(lVar2 + 0x588) = _Str_PK, 0xae < uVar1)))) &&
                  (((*(undefined8 *)(lVar2 + 0x590) = _Str_PL, uVar1 != 0xaf &&
                    (*(undefined8 *)(lVar2 + 0x598) = _Str_PM, 0xb0 < uVar1)) &&
                   ((*(undefined8 *)(lVar2 + 0x5a0) = _Str_PN, uVar1 != 0xb1 &&
                    ((*(undefined8 *)(lVar2 + 0x5a8) = _Str_PR, 0xb2 < uVar1 &&
                     (*(undefined8 *)(lVar2 + 0x5b0) = _Str_PS, uVar1 != 0xb3)))))))))))))) &&
              (*(undefined8 *)(lVar2 + 0x5b8) = _Str_PT, 0xb4 < uVar1)))) &&
            ((((((((((*(undefined8 *)(lVar2 + 0x5c0) = _Str_PW, uVar1 != 0xb5 &&
                     (*(undefined8 *)(lVar2 + 0x5c8) = _Str_PY, 0xb6 < uVar1)) &&
                    (*(undefined8 *)(lVar2 + 0x5d0) = _Str_QA, uVar1 != 0xb7)) &&
                   (((*(undefined8 *)(lVar2 + 0x5d8) = _Str_RE, 0xb8 < uVar1 &&
                     (*(undefined8 *)(lVar2 + 0x5e0) = _Str_RO, uVar1 != 0xb9)) &&
                    ((*(undefined8 *)(lVar2 + 0x5e8) = _Str_RU, 0xba < uVar1 &&
                     ((*(undefined8 *)(lVar2 + 0x5f0) = _Str_RW, uVar1 != 0xbb &&
                      (*(undefined8 *)(lVar2 + 0x5f8) = _Str_SA, 0xbc < uVar1)))))))) &&
                  (*(undefined8 *)(lVar2 + 0x600) = _Str_SB, uVar1 != 0xbd)) &&
                 ((((((*(undefined8 *)(lVar2 + 0x608) = _Str_SC, 0xbe < uVar1 &&
                      (*(undefined8 *)(lVar2 + 0x610) = _Str_SD, uVar1 != 0xbf)) &&
                     (*(undefined8 *)(lVar2 + 0x618) = _Str_SE, 0xc0 < uVar1)) &&
                    ((*(undefined8 *)(lVar2 + 0x620) = _Str_SG, uVar1 != 0xc1 &&
                     (*(undefined8 *)(lVar2 + 0x628) = _Str_SH, 0xc2 < uVar1)))) &&
                   ((*(undefined8 *)(lVar2 + 0x630) = _Str_SI, uVar1 != 0xc3 &&
                    ((*(undefined8 *)(lVar2 + 0x638) = _Str_SJ, 0xc4 < uVar1 &&
                     (*(undefined8 *)(lVar2 + 0x640) = _Str_SK, uVar1 != 0xc5)))))) &&
                  (*(undefined8 *)(lVar2 + 0x648) = _Str_SL, 0xc6 < uVar1)))) &&
                (((*(undefined8 *)(lVar2 + 0x650) = _Str_SM, uVar1 != 199 &&
                  (*(undefined8 *)(lVar2 + 0x658) = _Str_SN, 200 < uVar1)) &&
                 (*(undefined8 *)(lVar2 + 0x660) = _Str_SO, uVar1 != 0xc9)))) &&
               ((*(undefined8 *)(lVar2 + 0x668) = _Str_SR, 0xca < uVar1 &&
                (*(undefined8 *)(lVar2 + 0x670) = _Str_ST, uVar1 != 0xcb)))) &&
              ((((*(undefined8 *)(lVar2 + 0x678) = _Str_SV, 0xcc < uVar1 &&
                 ((*(undefined8 *)(lVar2 + 0x680) = _Str_SY, uVar1 != 0xcd &&
                  (*(undefined8 *)(lVar2 + 0x688) = _Str_SZ, 0xce < uVar1)))) &&
                (*(undefined8 *)(lVar2 + 0x690) = _Str_TC, uVar1 != 0xcf)) &&
               ((((*(undefined8 *)(lVar2 + 0x698) = _Str_TD, 0xd0 < uVar1 &&
                  (*(undefined8 *)(lVar2 + 0x6a0) = _Str_TF, uVar1 != 0xd1)) &&
                 (*(undefined8 *)(lVar2 + 0x6a8) = _Str_TG, 0xd2 < uVar1)) &&
                (((*(undefined8 *)(lVar2 + 0x6b0) = _Str_TH, uVar1 != 0xd3 &&
                  (*(undefined8 *)(lVar2 + 0x6b8) = _Str_TJ, 0xd4 < uVar1)) &&
                 ((*(undefined8 *)(lVar2 + 0x6c0) = _Str_TK, uVar1 != 0xd5 &&
                  ((*(undefined8 *)(lVar2 + 0x6c8) = _Str_TM, 0xd6 < uVar1 &&
                   (*(undefined8 *)(lVar2 + 0x6d0) = _Str_TN, uVar1 != 0xd7)))))))))))) &&
             (((*(undefined8 *)(lVar2 + 0x6d8) = _Str_TO, 0xd8 < uVar1 &&
               ((((((*(undefined8 *)(lVar2 + 0x6e0) = _Str_TL, uVar1 != 0xd9 &&
                    (*(undefined8 *)(lVar2 + 0x6e8) = _Str_TR, 0xda < uVar1)) &&
                   (*(undefined8 *)(lVar2 + 0x6f0) = _Str_TT, uVar1 != 0xdb)) &&
                  ((*(undefined8 *)(lVar2 + 0x6f8) = _Str_TV, 0xdc < uVar1 &&
                   (*(undefined8 *)(lVar2 + 0x700) = _Str_TW, uVar1 != 0xdd)))) &&
                 (*(undefined8 *)(lVar2 + 0x708) = _Str_TZ, 0xde < uVar1)) &&
                ((*(undefined8 *)(lVar2 + 0x710) = _Str_UA, uVar1 != 0xdf &&
                 (*(undefined8 *)(lVar2 + 0x718) = _Str_UG, 0xe0 < uVar1)))))) &&
              ((((*(undefined8 *)(lVar2 + 0x720) = _Str_UM, uVar1 != 0xe1 &&
                 (((*(undefined8 *)(lVar2 + 0x728) = _Str_US, 0xe2 < uVar1 &&
                   (*(undefined8 *)(lVar2 + 0x730) = _Str_UY, uVar1 != 0xe3)) &&
                  (*(undefined8 *)(lVar2 + 0x738) = _Str_UZ, 0xe4 < uVar1)))) &&
                (((*(undefined8 *)(lVar2 + 0x740) = _Str_VA, uVar1 != 0xe5 &&
                  (*(undefined8 *)(lVar2 + 0x748) = _Str_VC, 0xe6 < uVar1)) &&
                 (*(undefined8 *)(lVar2 + 0x750) = _Str_VE, uVar1 != 0xe7)))) &&
               ((((*(undefined8 *)(lVar2 + 0x758) = _Str_VG, 0xe8 < uVar1 &&
                  (*(undefined8 *)(lVar2 + 0x760) = _Str_VI, uVar1 != 0xe9)) &&
                 ((*(undefined8 *)(lVar2 + 0x768) = _Str_VN, 0xea < uVar1 &&
                  (((*(undefined8 *)(lVar2 + 0x770) = _Str_VU, uVar1 != 0xeb &&
                    (*(undefined8 *)(lVar2 + 0x778) = _Str_WF, 0xec < uVar1)) &&
                   (*(undefined8 *)(lVar2 + 0x780) = _Str_WS, uVar1 != 0xed)))))) &&
                (((*(undefined8 *)(lVar2 + 0x788) = _Str_YE, 0xee < uVar1 &&
                  (*(undefined8 *)(lVar2 + 0x790) = _Str_YT, uVar1 != 0xef)) &&
                 ((*(undefined8 *)(lVar2 + 0x798) = _Str_RS, 0xf0 < uVar1 &&
                  (((*(undefined8 *)(lVar2 + 0x7a0) = _Str_ZA, uVar1 != 0xf1 &&
                    (*(undefined8 *)(lVar2 + 0x7a8) = _Str_ZM, 0xf2 < uVar1)) &&
                   ((*(undefined8 *)(lVar2 + 0x7b0) = _Str_ME, uVar1 != 0xf3 &&
                    ((((*(undefined8 *)(lVar2 + 0x7b8) = _Str_ZW, 0xf4 < uVar1 &&
                       (*(undefined8 *)(lVar2 + 0x7c0) = _Str_A1, uVar1 != 0xf5)) &&
                      (*(undefined8 *)(lVar2 + 0x7c8) = _Str_XK, 0xf6 < uVar1)) &&
                     ((*(undefined8 *)(lVar2 + 2000) = _Str_O1, uVar1 != 0xf7 &&
                      (*(undefined8 *)(lVar2 + 0x7d8) = _Str_AX, 0xf8 < uVar1)))))))))))))))))))))))
           ) && (((*(undefined8 *)(lVar2 + 0x7e0) = _Str_GG, uVar1 != 0xf9 &&
                  ((*(undefined8 *)(lVar2 + 0x7e8) = _Str_IM, 0xfa < uVar1 &&
                   (*(undefined8 *)(lVar2 + 0x7f0) = _Str_JE, uVar1 != 0xfb)))) &&
                 ((*(undefined8 *)(lVar2 + 0x7f8) = _Str_BL, 0xfc < uVar1 &&
                  ((*(undefined8 *)(lVar2 + 0x800) = _Str_MF, uVar1 != 0xfd &&
                   (*(undefined8 *)(lVar2 + 0x808) = _Str_BQ, 0xfe < uVar1)))))))))) {
        *(undefined8 *)(lVar2 + 0x810) = _Str_SS;
        lVar4 = *(long *)(_BridgePHP_TypeInfo + 0xb8);
        *(long *)(lVar4 + 8) = lVar2;
        uVar3 = _Str_;
        *(undefined8 *)(lVar4 + 0x10) = _Str_;
        *(undefined8 *)(lVar4 + 0x18) = uVar3;
        uVar3 = _Str_https___api_zombiederby_com_zdpixel_;
        *(undefined8 *)(lVar4 + 0x28) = 0xffffffff00000000;
        *(undefined8 *)(lVar4 + 0x20) = uVar3;
        *(undefined2 *)(lVar4 + 0x40) = 0;
        uVar3 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__int__TypeInfo);
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                  (uVar3,_Method_System_Collections_Generic_Dictionary_string__int___ctor__);
        lVar2 = *(long *)(_BridgePHP_TypeInfo + 0xb8);
        *(undefined8 *)(lVar2 + 0x48) = uVar3;
        *(undefined8 *)(lVar2 + 0x50) = 0xfffffd66fffffd66;
        *(undefined4 *)(lVar2 + 0x58) = 0;
        *(undefined1 *)(lVar2 + 0x5c) = 0;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



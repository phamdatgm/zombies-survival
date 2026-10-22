// ==== public void CheckProtocolForMobile() { }   @0xad9780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__CheckProtocolForMobile(void *__this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001916e0b & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_http);
    func_0x00a67900(&Str_Change_protocol_to_HTTP_);
    func_0x00a67900(&Str_https);
    bRam0000000001916e0b = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  iVar1 = Main__FAOGGIELDDF(0);
  if (iVar1 - 0x10U < 10) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__GEMDEAMAGPG(_Str_Change_protocol_to_HTTP_,0,0);
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = *(long *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x20);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar3 = System_String__Replace(lVar2,_Str_https,_Str_http,0);
    *(undefined8 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x20) = uVar3;
  }
  return;
}


// ==== public void SocialLogin() { }   @0xad9c94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__SocialLogin(void *__this)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  byte abStack_38 [4];
  undefined4 uStack_34;
  
  if ((bRam0000000001916e10 & 1) == 0) {
    func_0x00a67900(&System_Action_SignInStatus__TypeInfo);
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&Method_BridgePHP_OnSocialLogin__);
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&UnityEngine_SocialPlatforms_ILocalUser_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_SocialLogin__time__);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_RETURN____SocialLogin_in_progres_);
    func_0x00a67900(&Str____isProgress__);
    func_0x00a67900(&Str___auth__);
    bRam0000000001916e10 = 1;
  }
  abStack_38[0] = 0;
  lVar1 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = _Str_SocialLogin__time__;
      uStack_34 = UnityEngine_Time__get_time(0);
      uVar2 = System_Single__ToString(&uStack_34,0);
      if ((1 < *(uint *)(lVar1 + 0x18)) &&
         (*(undefined8 *)(lVar1 + 0x28) = uVar2, *(uint *)(lVar1 + 0x18) != 2)) {
        *(undefined8 *)(lVar1 + 0x30) = _Str___auth__;
        plVar3 = (long *)UnityEngine_Social__get_localUser(0);
        if (plVar3 == (long *)0x0) goto LAB_00bda000;
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _UnityEngine_SocialPlatforms_ILocalUser_TypeInfo) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_00bd9e30;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)
                 func_0x00a9e6c4(plVar3,_UnityEngine_SocialPlatforms_ILocalUser_TypeInfo,0);
LAB_00bd9e30:
        abStack_38[0] = (*(code *)*puVar4)(plVar3,puVar4[1]);
        abStack_38[0] = abStack_38[0] & 1;
        if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_bool_TypeInfo);
        }
        uVar2 = System_Boolean__ToString(abStack_38,0);
        if ((3 < *(uint *)(lVar1 + 0x18)) &&
           (*(undefined8 *)(lVar1 + 0x38) = uVar2, *(uint *)(lVar1 + 0x18) != 4)) {
          *(undefined8 *)(lVar1 + 0x40) = _Str__;
          if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar2 = System_Boolean__ToString(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2b,0);
          if ((5 < *(uint *)(lVar1 + 0x18)) &&
             (*(undefined8 *)(lVar1 + 0x48) = uVar2, *(uint *)(lVar1 + 0x18) != 6)) {
            *(undefined8 *)(lVar1 + 0x50) = _Str____isProgress__;
            uVar2 = System_Boolean__ToString((char *)((long)__this + 0xa5),0);
            if (7 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x58) = uVar2;
              uVar2 = System_String__Concat(lVar1,0);
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_Main_TypeInfo);
              }
              Main__GEMDEAMAGPG(uVar2,1,0);
              if (*(char *)((long)__this + 0xa5) == '\0') {
                *(undefined1 *)((long)__this + 0xa5) = 1;
                if (*(char *)((long)__this + 0xa4) == '\0') {
                  uVar2 = BridgePHP__GetServerConfig(__this);
                  UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar2,0);
                }
                lVar1 = GooglePlayGames_PlayGamesPlatform__get_Instance(0);
                uVar2 = func_0x00a67b44(_System_Action_SignInStatus__TypeInfo);
                System_Action___Il2CppFullySharedGenericType____ctor
                          (uVar2,__this,_Method_BridgePHP_OnSocialLogin__,0);
                if (lVar1 == 0) goto LAB_00bda000;
                GooglePlayGames_PlayGamesPlatform__Authenticate(lVar1,uVar2,0);
              }
              else {
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                Main__GEMDEAMAGPG(_Str_RETURN____SocialLogin_in_progres_,1,0);
              }
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
LAB_00bda000:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void StartServerConnect(IINFOGDGDHA _mode, object[] _param) { }   @0xada004

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__StartServerConnect(void *__this,int _mode,void *_param)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
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
  lVar2 = BridgePHP__ServerConnect(__this,_mode,_param);
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
  auVar5 = func_0x00a67a20(uVar3,uVar4);
  if (pcRam000000000191c488 == (code *)0x0) {
    pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
  }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c488)(auVar5._0_8_,auVar5._8_8_);
  return;
}


// ==== public string GetErrors(bool is_try_login) { }   @0xadb30c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * BridgePHP__GetErrors(void *__this,bool is_try_login)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  void *unaff_x23;
  float fVar8;
  undefined4 uVar9;
  
  if ((bRam0000000001916e19 & 1) == 0) {
    func_0x00a67900(&Method_System_Array_Empty_object___);
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&RatingEventController_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_ERROR_INTERNET);
    func_0x00a67900(&Str_EVENT_NOT_AVAILABLE);
    func_0x00a67900(&Str_ERROR_UPDATE);
    func_0x00a67900(&Str_ERROR_UNAVAILABLE);
    func_0x00a67900(&Str_ERROR_SOCIAL_APP_STORE);
    func_0x00a67900(&Str_ERROR_SOCIAL_GOOGLE_PLAY);
    func_0x00a67900(&Str_);
    bRam0000000001916e19 = 1;
  }
  pvVar2 = _Str_;
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = System_String__op_Equality
                    (*(undefined8 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x10),_Str_,0);
  if ((uVar1 & 1) == 0) {
    lVar3 = *(long *)((long)__this + 0x58);
    if (lVar3 != 0) {
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar3 = *(long *)((long)__this + 0x58);
        if (lVar3 == 0) goto LAB_00bdb6e8;
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
        pvVar2 = (void *)Translate__JJJNIPAKLJF
                                   (**(long **)(_Translate_TypeInfo + 0xb8),
                                    *(undefined8 *)(lVar3 + 0x10),0);
        if ((is_try_login) &&
           (fVar8 = (float)UnityEngine_Time__get_time(0),
           5.0 < fVar8 - *(float *)((long)__this + 0xa0))) {
          if (*(long *)((long)__this + 0x58) == 0) goto LAB_00bdb6e8;
          uVar1 = System_String__op_Equality
                            (*(undefined8 *)(*(long *)((long)__this + 0x58) + 0x10),
                             _Str_ERROR_INTERNET,0);
          if ((uVar1 & 1) == 0) {
            if (*(long *)((long)__this + 0x58) == 0) goto LAB_00bdb6e8;
            uVar1 = System_String__op_Equality
                              (*(undefined8 *)(*(long *)((long)__this + 0x58) + 0x10),
                               _Str_ERROR_UNAVAILABLE,0);
            if ((uVar1 & 1) == 0) {
              return pvVar2;
            }
          }
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
          BridgePHP__StartServerConnect(__this,0,(void *)**(undefined8 **)(lVar3 + 0xb8));
          uVar9 = UnityEngine_Time__get_time(0);
          *(undefined4 *)((long)__this + 0xa0) = uVar9;
        }
        return pvVar2;
      }
      goto LAB_00bdb6e8;
    }
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2a) == '\0') {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x50), lVar3 == 0)) {
LAB_00bdb6e8:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if ((0 < *(int *)(lVar3 + 0x10)) &&
         ((**(long **)(_RatingEventController_TypeInfo + 0xb8) != 0 &&
          (*(long *)(**(long **)(_RatingEventController_TypeInfo + 0xb8) + 0x18) != 0)))) {
        return pvVar2;
      }
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00bdb6e8;
LAB_00bdb6c8:
      puVar5 = (undefined8 *)&Str_EVENT_NOT_AVAILABLE;
    }
    else {
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00bdb6e8;
      puVar5 = (undefined8 *)&Str_ERROR_UPDATE;
    }
  }
  else {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iVar7 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
    if (iVar7 == 1) {
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00bdb6e8;
      puVar5 = (undefined8 *)&Str_ERROR_SOCIAL_GOOGLE_PLAY;
    }
    else {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        iVar7 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
      }
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00bdb6e8;
      if (iVar7 != 2) goto LAB_00bdb6c8;
      puVar5 = (undefined8 *)&Str_ERROR_SOCIAL_APP_STORE;
    }
  }
  uVar4 = *puVar5;
  if ((bRam0000000001917112 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__,
                    uVar4,0);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_error);
    bRam0000000001917112 = 1;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = *(long *)(*(long *)(_Translate_TypeInfo + 0xb8) + 8);
  if (lVar3 == 0) {
LAB_00c31f48:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                    (lVar3,uVar4,
                     _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
  pvVar2 = _Str_error;
  if ((uVar1 & 1) != 0) {
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = *(long *)(*(long *)(_Translate_TypeInfo + 0xb8) + 8);
    if (lVar3 == 0) goto LAB_00c31f48;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item
              (lVar3,uVar4,&stack0xffffffffffffffd8,
               _Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    pvVar2 = unaff_x23;
  }
  return pvVar2;
}


// ==== public static void JsonParseKostyl(string json_data) { }   @0xadbdd4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__JsonParseKostyl(void *json_data)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  void *CIDKMFLFJEJ;
  uint uVar7;
  uint uVar8;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if ((bRam0000000001916e1e & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str___Val__);
    func_0x00a67900(&Str_Problem__Key__);
    bRam0000000001916e1e = 1;
  }
  uStack_58 = 0;
  if (json_data == (void *)0x0) {
LAB_00bdc180:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  iVar1 = System_String__IndexOf(json_data,0x7b,0,0);
  if ((iVar1 == 0) && (5 < *(int *)((long)json_data + 0x10))) {
    uVar2 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__int__TypeInfo);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (uVar2,_Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined8 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x48) = uVar2;
    lVar3 = System_String__Substring(json_data,1,*(int *)((long)json_data + 0x10) + -2,0);
    if ((lVar3 == 0) ||
       (((iVar1 = System_String__IndexOf(lVar3,0x7d,*(int *)(lVar3 + 0x10) + -3,0), 0 < iVar1 &&
         (lVar3 = System_String__Substring(lVar3,0,iVar1,0), lVar3 == 0)) ||
        (lVar3 = System_String__Split(lVar3,0x2c,0,0), lVar3 == 0)))) goto LAB_00bdc180;
    uVar7 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar7) {
      uVar8 = 0;
      do {
        if (uVar7 <= uVar8) {
LAB_00bdc184:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar4 = *(long *)(lVar3 + (long)(int)uVar8 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_00bdc180;
        lVar4 = System_String__Split(lVar4,0x3a,0,0);
        uStack_58 = 0;
        if (lVar4 == 0) goto LAB_00bdc180;
        if (*(int *)(lVar4 + 0x18) == 0) goto LAB_00bdc184;
        if (*(long *)(lVar4 + 0x20) == 0) goto LAB_00bdc180;
        iVar1 = System_String__IndexOf(*(long *)(lVar4 + 0x20),0x22,0,0);
        uVar7 = *(uint *)(lVar4 + 0x18);
        if (iVar1 == 0) {
          if (uVar7 == 0) goto LAB_00bdc184;
          lVar5 = *(long *)(lVar4 + 0x20);
          if (lVar5 == 0) goto LAB_00bdc180;
          if (2 < *(int *)(lVar5 + 0x10)) {
            uVar2 = System_String__Substring(lVar5,1,*(int *)(lVar5 + 0x10) + -2,0);
            uVar7 = *(uint *)(lVar4 + 0x18);
            if (uVar7 == 0) goto LAB_00bdc184;
            *(undefined8 *)(lVar4 + 0x20) = uVar2;
          }
        }
        if (uVar7 < 2) goto LAB_00bdc184;
        if (*(long *)(lVar4 + 0x28) == 0) goto LAB_00bdc180;
        iVar1 = System_String__IndexOf(*(long *)(lVar4 + 0x28),0x22,0,0);
        if (iVar1 == 0) {
          if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_00bdc184;
          lVar5 = *(long *)(lVar4 + 0x28);
          if (lVar5 == 0) goto LAB_00bdc180;
          if (2 < *(int *)(lVar5 + 0x10)) {
            uVar2 = System_String__Substring(lVar5,1,*(int *)(lVar5 + 0x10) + -2,0);
            if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_00bdc184;
            *(undefined8 *)(lVar4 + 0x28) = uVar2;
          }
        }
        else if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_00bdc184;
        uVar6 = System_Int32__TryParse(*(undefined8 *)(lVar4 + 0x28),&uStack_58,0);
        if ((uVar6 & 1) == 0) {
          if ((*(int *)(lVar4 + 0x18) == 1) || (*(int *)(lVar4 + 0x18) == 0)) goto LAB_00bdc184;
          CIDKMFLFJEJ = (void *)System_String__Concat
                                          (_Str_Problem__Key__,*(undefined8 *)(lVar4 + 0x20),
                                           _Str___Val__,*(undefined8 *)(lVar4 + 0x28),0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Main_TypeInfo);
          }
          Main__EEKNCFLMGDP(CIDKMFLFJEJ);
        }
        else {
          if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (*(int *)(lVar4 + 0x18) == 0) goto LAB_00bdc184;
          lVar5 = *(long *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x48);
          if (lVar5 == 0) goto LAB_00bdc180;
          uVar6 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                            (lVar5,*(undefined8 *)(lVar4 + 0x20),
                             _Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__
                            );
          if ((uVar6 & 1) == 0) {
            if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (*(int *)(lVar4 + 0x18) == 0) goto LAB_00bdc184;
            lVar5 = *(long *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x48);
            if (lVar5 == 0) goto LAB_00bdc180;
            uStack_54 = uStack_58;
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                      (lVar5,*(undefined8 *)(lVar4 + 0x20),&uStack_54,
                       _Method_System_Collections_Generic_Dictionary_string__int__Add__);
          }
        }
        uVar7 = *(uint *)(lVar3 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar7);
    }
  }
  return;
}


// ==== public void .ctor() { }   @0xadc79c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP___ctor(void *__this)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000001916e22 & 1) == 0) {
    func_0x00a67900(&Str_);
    bRam0000000001916e22 = 1;
  }
  uVar1 = _Str_;
  auVar2 = NEON_fmov(0x3f800000,4);
  *(long *)((long)__this + 0x98) = auVar2._8_8_;
  *(long *)((long)__this + 0x90) = auVar2._0_8_;
  *(undefined8 *)((long)__this + 0x30) = uVar1;
  *(undefined8 *)((long)__this + 0x38) = uVar1;
  *(undefined8 *)((long)__this + 0x48) = uVar1;
  *(undefined8 *)((long)__this + 0x80) = uVar1;
  *(undefined8 *)((long)__this + 0x88) = uVar1;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



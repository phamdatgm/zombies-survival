/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class BridgePHP : MonoBehaviour // TypeDefIndex: 5073
{
	// Fields
	public static BridgePHP.SN_PLATFORM sn; // 0x0
	public static string[] countries; // 0x8
	public Sprite[] countries_flags; // 0x20
	private const string GoodCharsStr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789abcdefghijklmnopqrstuvwxyz _.ÄäÖöÜüßÀàÂâÆæÇçÉéÈèÊêËëÎîÏïÔôŒœÙùÛûÜüŸÿÌìÍíÒòÚúÁáÑñÃãÕõĄąĆćĘęŁłŃńÓóŚśŹźŻżАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдеёжзийклмнопрстуфхцчшщъыьэюяҐґЄєЇїІі";
	private UnityWebRequest wwwBridge; // 0x28
	public static string sid; // 0x10
	private string email; // 0x30
	private string sid_old; // 0x38
	public static string auth_key; // 0x18
	public static string domen; // 0x20
	public static bool is_loading; // 0x28
	public static bool is_loading_rate_me; // 0x29
	public static bool is_need_update_game; // 0x2A
	public static bool isGoogleServicesLoaded; // 0x2B
	private bool is_achieve_sync; // 0x40
	public static int rnd_key; // 0x2C
	private string social_name; // 0x48
	private BridgeData bridge_data; // 0x50
	public BridgePHP.BridgeError BRIDGE_ERROR; // 0x58
	public static string save_json; // 0x30
	public static string save_time; // 0x38
	public static bool is_need_sync_save_progress; // 0x40
	public static bool is_can_save_lower_progress_to_server; // 0x41
	public static Dictionary<string, int> save_keys_and_values; // 0x48
	private bool is_already_set_nickname; // 0x60
	private IEnumerator server_coroutine; // 0x68
	private IEnumerator CheckNintendoNetwork_coroutine; // 0x70
	private bool is_delay_for_wwww; // 0x78
	private bool is_error_for_wwww; // 0x79
	private bool is_error_for_wwww_2; // 0x7A
	private bool is_can_stop_coroutine; // 0x7B
	private string frame_url; // 0x80
	private string parent_url; // 0x88
	public Color last_color_server_status; // 0x90
	public const char split_replay_char = '\x69';
	public static int last_event_time_loaded; // 0x50
	public static int last_try_refresh_event_time; // 0x54
	public static float last_check_event_for_refresh; // 0x58
	public static bool is_start_updating_event_from_server; // 0x5C
	private float last_try_login_time_from_events; // 0xA0
	private bool isConfigLoaded; // 0xA4
	private bool isSocialLoginInProgress; // 0xA5
	private bool isAlreadyManuallyAuthenticate; // 0xA6
	private IAchievement[] soc_achievements; // 0xA8

	// Methods

	public void CheckProtocolForMobile() { }

	public void Login() { }

	public void SetServerStatusIcon(Color col) { }

	public string GetCountryNameFromID(int id) { }

	public Sprite GetCountryTextureFromID(int id) { }

	public void SocialLogin() { }

	private void OnSocialLogin(SignInStatus status) { }

	public void UnlockAchievement(string achievID) { }

	public void SyncAchievements() { }

	public bool GooglePlayIsAuthenticated() { }

	public void StartServerConnect(IINFOGDGDHA _mode, object[] _param) { }

	public IEnumerator GetServerConfig() { }

	public void StopServerConnect() { }

	public IEnumerator ServerConnect(IINFOGDGDHA mode, object[] param) { }

	public IEnumerator SendRateMe(int stars, string comment) { }

	public string GetErrors(bool is_try_login) { }

	public void RefreshUserProfileAndEvents() { }

	private void ResetCheckEventTimer() { }

	public void UpdateNickNameAndCountry() { }

	public static string Md5Sum(string strToEncrypt) { }

	public static void JsonParseKostyl(string json_data) { }

	public string GenerateJsonPath() { }

	private void SiteLock() { }

	private string GenerateRandomMd5() { }

	private bool IsSponsorParentUrl(string[] domains) { }

	public void .ctor() { }

	private static void .cctor() { }

	[CompilerGenerated]
	private void <SyncAchievements>b__54_0(IAchievement[] soc_achievements) { }
}
*/

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
    lVar2 = BridgePHP.domen;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar3 = System_String__Replace(lVar2,_Str_https,_Str_http,0);
    BridgePHP.domen = uVar3;
  }
  return;
}


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
  if (BridgePHP.sn == 1) {
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
                      (BridgePHP.sid,_Str_,0);
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
                          (BridgePHP.sid,_Str_,0);
        if ((uVar1 & 1) == 0) {
          return;
        }
        if ((this.server_coroutine != 0) && (this.is_can_stop_coroutine != '\0')) {
          this.wwwBridge = 0;
          BridgePHP__StopServerConnect(__this);
        }
        lVar2 = BridgePHP__ServerConnect(__this,0,uVar4);
        this.server_coroutine = lVar2;
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


// ==== public void SetServerStatusIcon(Color col) { }   @0xad9a74

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__SetServerStatusIcon(void *__this,float col_r,float col_g,float col_b,float col_a)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  undefined4 in_register_00005044;
  undefined4 in_register_00005064;
  
  if ((bRam0000000001916e0d & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_);
    bRam0000000001916e0d = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF != 0) {
    uVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar1 & 1) == 0) {
LAB_00bd9c70:
      this.last_color_server_status = col_r;
      *(float *)((long)__this + 0x94) = col_g;
      *(float *)((long)__this + 0x98) = col_b;
      *(float *)((long)__this + 0x9c) = col_a;
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF != 0) &&
       (lVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar3 != 0)) {
      uVar4 = *(undefined8 *)(lVar3 + 0x3a0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      if ((uVar1 & 1) == 0) goto LAB_00bd9c70;
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = System_String__op_Inequality
                        (BridgePHP.sid,_Str_,0);
      if ((uVar1 & 1) == 0) {
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (BridgePHP.sn != 0xb) goto LAB_00bd9c70;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF != 0) &&
          (lVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar3 != 0)) &&
         (plVar2 = *(long **)(lVar3 + 0x3a0), plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 0x2a8))
                  (CONCAT44(in_register_00005004,col_r),CONCAT44(in_register_00005024,col_g),
                   CONCAT44(in_register_00005044,col_b),CONCAT44(in_register_00005064,col_a),plVar2,
                   *(undefined8 *)(*plVar2 + 0x2b0));
        if (((Menu.KECGFPHIEHF != 0) &&
            (lVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar3 != 0)) &&
           ((lVar3 = *(long *)(lVar3 + 0x3a0), lVar3 != 0 &&
            (lVar3 = UnityEngine_Component__get_gameObject(lVar3,0), lVar3 != 0)))) {
          UnityEngine_GameObject__SetActive(lVar3,1,0);
          goto LAB_00bd9c70;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
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
          uVar2 = System_Boolean__ToString(BridgePHP.<statics> + 0x2b,0);
          if ((5 < *(uint *)(lVar1 + 0x18)) &&
             (*(undefined8 *)(lVar1 + 0x48) = uVar2, *(uint *)(lVar1 + 0x18) != 6)) {
            *(undefined8 *)(lVar1 + 0x50) = _Str____isProgress__;
            uVar2 = System_Boolean__ToString((char *)(&this.isSocialLoginInProgress),0);
            if (7 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x58) = uVar2;
              uVar2 = System_String__Concat(lVar1,0);
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_Main_TypeInfo);
              }
              Main__GEMDEAMAGPG(uVar2,1,0);
              if (this.isSocialLoginInProgress == '\0') {
                this.isSocialLoginInProgress = 1;
                if (this.isConfigLoaded == '\0') {
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
                    (BridgePHP.sid,_Str_,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if ((this.server_coroutine != 0) && (this.is_can_stop_coroutine != '\0')) {
    this.wwwBridge = 0;
    BridgePHP__StopServerConnect(__this);
  }
  lVar2 = BridgePHP__ServerConnect(__this,_mode,_param);
  this.server_coroutine = lVar2;
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


// ==== public string GetCountryNameFromID(int id) { }   @0xada0e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * BridgePHP__GetCountryNameFromID(void *__this,int id)

{
  long lVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000001916e0e & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Str_);
    bRam0000000001916e0e = 1;
  }
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar1 = BridgePHP.countries;
  if (lVar1 != 0) {
    if (id < lVar1.Length) {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar1 = BridgePHP.countries;
        if (lVar1 == 0) goto LAB_00bda198;
      }
      if (lVar1.Length <= (uint)id) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      puVar2 = (undefined8 *)(lVar1 + (long)id * 8 + 0x20);
    }
    else {
      puVar2 = (undefined8 *)&Str_;
    }
    return (void *)*puVar2;
  }
LAB_00bda198:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public Sprite GetCountryTextureFromID(int id) { }   @0xada1a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * BridgePHP__GetCountryTextureFromID(void *__this,int id)

{
  uint uVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  
  pvVar2 = __this;
  if ((bRam0000000001916e0f & 1) == 0) {
    pvVar2 = (void *)func_0x00a67900(&Str_);
    bRam0000000001916e0f = 1;
  }
  uVar3 = BridgePHP__GetCountryNameFromID(pvVar2,id);
  uVar4 = System_String__op_Inequality(uVar3,_Str_,0);
  if ((uVar4 & 1) != 0) {
    lVar6 = this.countries_flags;
    if (lVar6 == 0) {
LAB_00bda270:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar1 = lVar6.Length;
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        pvVar2 = *(void **)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
        if (pvVar2 == (void *)0x0) goto LAB_00bda270;
        uVar5 = UnityEngine_Object__get_name(pvVar2,0);
        uVar4 = System_String__op_Equality(uVar5,uVar3,0);
        if ((uVar4 & 1) != 0) {
          return pvVar2;
        }
        uVar1 = lVar6.Length;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar1);
    }
  }
  return (void *)0x0;
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
    BridgePHP.isGoogleServicesLoaded = 1;
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
    BridgePHP.sid = uVar2;
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
        this.social_name = lVar1;
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
  else if (this.isSocialLoginInProgress != '\0') {
    if (this.isAlreadyManuallyAuthenticate == '\0') {
      this.isAlreadyManuallyAuthenticate = 1;
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
  this.isSocialLoginInProgress = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = Menu.KECGFPHIEHF;
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
  if (Menu.KECGFPHIEHF != 0) {
    uVar2 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
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
    if ((Menu.KECGFPHIEHF != 0) &&
       (lVar1 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar1 != 0)) {
      GUIGarage__MLEEOPKCMBP(lVar1,0);
      if ((Menu.KECGFPHIEHF != 0) &&
         (__this_00 = Menu.KECGFPHIEHF.ALPCPBBNEBA,
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


// ==== public void SyncAchievements() { }   @0xadac50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__SyncAchievements(void *__this)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001916e13 & 1) == 0) {
    func_0x00a67900(&System_Action_IAchievement____TypeInfo);
    func_0x00a67900(&Method_BridgePHP__SyncAchievements_b__54_0__);
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&UnityEngine_SocialPlatforms_ILocalUser_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_SyncAchievements);
    bRam0000000001916e13 = 1;
  }
  if (this.is_achieve_sync == '\0') {
    plVar2 = (long *)UnityEngine_Social__get_localUser(0);
    if (plVar2 == (long *)0x0) goto LAB_00bdaed8;
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _UnityEngine_SocialPlatforms_ILocalUser_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_00bdad40;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)
             func_0x00a9e6c4(plVar2,_UnityEngine_SocialPlatforms_ILocalUser_TypeInfo,0);
LAB_00bdad40:
    uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (BridgePHP.isGoogleServicesLoaded != '\0') {
        this.is_achieve_sync = 1;
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__GEMDEAMAGPG(_Str_SyncAchievements,0,0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = Menu.KECGFPHIEHF;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.KECGFPHIEHF == 0) {
LAB_00bdaed8:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          uVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 == 0))
            goto LAB_00bdaed8;
            iVar1 = GUIGarage__BGHFPDCINFC(lVar4,0);
            if (0 < iVar1) {
              uVar7 = func_0x00a67b44(_System_Action_IAchievement____TypeInfo);
              System_Action___Il2CppFullySharedGenericType____ctor
                        (uVar7,__this,_Method_BridgePHP__SyncAchievements_b__54_0__,0);
              if ((bRam000000000191cc8d & 1) == 0) {
                func_0x00a67900(&UnityEngine_SocialPlatforms_ISocialPlatform_TypeInfo,0);
                bRam000000000191cc8d = 1;
              }
              plVar2 = (long *)UnityEngine_SocialPlatforms_ActivePlatform__get_Instance();
              if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              lVar4 = *plVar2;
              uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) ==
                      _UnityEngine_SocialPlatforms_ISocialPlatform_TypeInfo) {
                    puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                    goto LAB_014a5b88;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              puVar3 = (undefined8 *)
                       func_0x00a9e6c4(plVar2,_UnityEngine_SocialPlatforms_ISocialPlatform_TypeInfo,
                                       2);
LAB_014a5b88:
                    /* WARNING: Could not recover jumptable at 0x014a5b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar3)(plVar2,uVar7,puVar3[1]);
              return;
            }
          }
        }
      }
    }
  }
  return;
}


// ==== public void UnlockAchievement(string achievID) { }   @0xadaedc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__UnlockAchievement(void *__this,void *achievID)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001916e12 & 1) == 0) {
    func_0x00a67900(&System_Action_bool__TypeInfo);
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&UnityEngine_SocialPlatforms_ILocalUser_TypeInfo);
    func_0x00a67900(&Method_BridgePHP___c__UnlockAchievement_b__52_0__);
    func_0x00a67900(&BridgePHP___c_TypeInfo);
    bRam0000000001916e12 = 1;
  }
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Application__get_isEditor(0);
  if ((uVar1 & 1) == 0) {
    plVar2 = (long *)UnityEngine_Social__get_localUser(0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _UnityEngine_SocialPlatforms_ILocalUser_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_00bdafd0;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)
             func_0x00a9e6c4(plVar2,_UnityEngine_SocialPlatforms_ILocalUser_TypeInfo,0);
LAB_00bdafd0:
    uVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (BridgePHP.isGoogleServicesLoaded != '\0') {
        if (*(int *)(_BridgePHP___c_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar4 = *(long *)(BridgePHP___c.<statics> + 8);
        if (lVar4 == 0) {
          if (*(int *)(_BridgePHP___c_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = **(undefined8 **)(_BridgePHP___c_TypeInfo + 0xb8);
          lVar4 = func_0x00a67b44(_System_Action_bool__TypeInfo);
          System_Action___Il2CppFullySharedGenericType____ctor
                    (lVar4,uVar7,_Method_BridgePHP___c__UnlockAchievement_b__52_0__,0);
          *(long *)(BridgePHP___c.<statics> + 8) = lVar4;
        }
        if ((bRam000000000191cc8c & 1) == 0) {
          func_0x00a67900(&UnityEngine_SocialPlatforms_ISocialPlatform_TypeInfo,lVar4,0);
          bRam000000000191cc8c = 1;
        }
        plVar2 = (long *)UnityEngine_SocialPlatforms_ActivePlatform__get_Instance();
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        lVar5 = *plVar2;
        uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar1 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == _UnityEngine_SocialPlatforms_ISocialPlatform_TypeInfo) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_014a5ad0;
            }
            uVar1 = uVar1 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)
                 func_0x00a9e6c4(plVar2,_UnityEngine_SocialPlatforms_ISocialPlatform_TypeInfo,1);
LAB_014a5ad0:
                    /* WARNING: Could not recover jumptable at 0x014a5af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar3)(0x4059000000000000,plVar2,achievID,lVar4,puVar3[1]);
        return;
      }
    }
  }
  return;
}


// ==== public bool GooglePlayIsAuthenticated() { }   @0xadb0b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool BridgePHP__GooglePlayIsAuthenticated(void *__this)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  lVar2 = GooglePlayGames_PlayGamesPlatform__get_Instance(0);
  if (lVar2 == 0) {
    return false;
  }
  lVar2 = GooglePlayGames_PlayGamesPlatform__get_Instance(0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam0000000001917564 & 1) == 0) {
    func_0x00a67900(&GooglePlayGames_BasicApi_IPlayGamesClient_TypeInfo,0);
    bRam0000000001917564 = 1;
  }
  plVar6 = *(long **)(lVar2 + 0x18);
  if (plVar6 == (long *)0x0) {
    return false;
  }
  lVar2 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _GooglePlayGames_BasicApi_IPlayGamesClient_TypeInfo) {
        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_00dc169c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)
           func_0x00a9e6c4(plVar6,_GooglePlayGames_BasicApi_IPlayGamesClient_TypeInfo,2);
LAB_00dc169c:
                    /* WARNING: Could not recover jumptable at 0x00dc16ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)*puVar3)(plVar6,puVar3[1]);
  return (bool)uVar1;
}


// ==== public void StopServerConnect() { }   @0xadb0ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__StopServerConnect(void *__this)

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
  
  if ((bRam0000000001916e16 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Coroutine_stopped_);
    func_0x00a67900(&Str_server_coroutine_is_NULL);
    bRam0000000001916e16 = 1;
  }
  if (this.server_coroutine == 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__EEKNCFLMGDP(_Str_server_coroutine_is_NULL,0);
  }
  else {
    UnityEngine_MonoBehaviour__StopCoroutine(__this,this.server_coroutine,0);
  }
  this.is_delay_for_wwww = 0;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar2 = _Str_Coroutine_stopped_;
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
  lVar6 = Main.FBDDKIOEKDM;
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
  uVar8 = Menu.KECGFPHIEHF;
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
  if (Menu.KECGFPHIEHF == 0) goto LAB_00c590c8;
  uVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
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
  if ((Menu.KECGFPHIEHF == 0) || (plVar2 == (long *)0x0)) goto LAB_00c590c8;
  lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
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


// ==== public IEnumerator ServerConnect(IINFOGDGDHA mode, object[] param) { }   @0xadb1a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * BridgePHP__ServerConnect(void *__this,int mode,void *param)

{
  void *pvVar1;
  
  if ((bRam0000000001916e17 & 1) == 0) {
    func_0x00a67900(&BridgePHP__ServerConnect_d__59_TypeInfo);
    bRam0000000001916e17 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_BridgePHP__ServerConnect_d__59_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x20) = __this;
  *(int *)((long)pvVar1 + 0x28) = mode;
  *(void **)((long)pvVar1 + 0x30) = param;
  return pvVar1;
}


// ==== public IEnumerator SendRateMe(int stars, string comment) { }   @0xadb270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * BridgePHP__SendRateMe(void *__this,int stars,void *comment)

{
  void *pvVar1;
  
  if ((bRam0000000001916e18 & 1) == 0) {
    func_0x00a67900(&BridgePHP__SendRateMe_d__60_TypeInfo);
    bRam0000000001916e18 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_BridgePHP__SendRateMe_d__60_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(int *)((long)pvVar1 + 0x20) = stars;
  *(void **)((long)pvVar1 + 0x28) = comment;
  *(void **)((long)pvVar1 + 0x30) = __this;
  return pvVar1;
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
                    (BridgePHP.sid,_Str_,0);
  if ((uVar1 & 1) == 0) {
    lVar3 = this.BRIDGE_ERROR;
    if (lVar3 != 0) {
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar3 = this.BRIDGE_ERROR;
        if (lVar3 == 0) goto LAB_00bdb6e8;
      }
      if (Translate.KECGFPHIEHF != 0) {
        pvVar2 = (void *)Translate__JJJNIPAKLJF
                                   (Translate.KECGFPHIEHF,
                                    *(undefined8 *)(lVar3 + 0x10),0);
        if ((is_try_login) &&
           (fVar8 = (float)UnityEngine_Time__get_time(0),
           5.0 < fVar8 - this.last_try_login_time_from_events)) {
          if (this.BRIDGE_ERROR == 0) goto LAB_00bdb6e8;
          uVar1 = System_String__op_Equality
                            (this.BRIDGE_ERROR.name,
                             _Str_ERROR_INTERNET,0);
          if ((uVar1 & 1) == 0) {
            if (this.BRIDGE_ERROR == 0) goto LAB_00bdb6e8;
            uVar1 = System_String__op_Equality
                              (this.BRIDGE_ERROR.name,
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
          this.last_try_login_time_from_events = uVar9;
        }
        return pvVar2;
      }
      goto LAB_00bdb6e8;
    }
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (BridgePHP.is_need_update_game == '\0') {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar3 = Main.NMDEEOMHAGP;
      if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x50), lVar3 == 0)) {
LAB_00bdb6e8:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if ((0 < *(int *)(lVar3 + 0x10)) &&
         ((RatingEventController.GBOBBEDAFKH != 0 &&
          (RatingEventController.GBOBBEDAFKH.Length != 0)))) {
        return pvVar2;
      }
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Translate.KECGFPHIEHF == 0) goto LAB_00bdb6e8;
LAB_00bdb6c8:
      puVar5 = (undefined8 *)&Str_EVENT_NOT_AVAILABLE;
    }
    else {
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Translate.KECGFPHIEHF == 0) goto LAB_00bdb6e8;
      puVar5 = (undefined8 *)&Str_ERROR_UPDATE;
    }
  }
  else {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iVar7 = BridgePHP.sn;
    if (iVar7 == 1) {
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Translate.KECGFPHIEHF == 0) goto LAB_00bdb6e8;
      puVar5 = (undefined8 *)&Str_ERROR_SOCIAL_GOOGLE_PLAY;
    }
    else {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        iVar7 = BridgePHP.sn;
      }
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Translate.KECGFPHIEHF == 0) goto LAB_00bdb6e8;
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
  lVar3 = Translate.LEAMIBBOEKD;
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
    lVar3 = Translate.LEAMIBBOEKD;
    if (lVar3 == 0) goto LAB_00c31f48;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item
              (lVar3,uVar4,&stack0xffffffffffffffd8,
               _Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    pvVar2 = unaff_x23;
  }
  return pvVar2;
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
  if (BridgePHP.is_loading == '\0') {
    fVar7 = (float)UnityEngine_Time__get_unscaledTime(0);
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((float)(BridgePHP.last_event_time_loaded + 600) < fVar7) {
      fVar7 = (float)UnityEngine_Time__get_unscaledTime(0);
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((float)(BridgePHP.last_try_refresh_event_time + 0x78) < fVar7) {
        fVar7 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        iVar1 = -0x80000000;
        if (fVar7 != INFINITY) {
          iVar1 = (int)fVar7;
        }
        BridgePHP.last_try_refresh_event_time = iVar1;
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
                          (BridgePHP.sid,_Str_,0);
        if ((uVar2 & 1) != 0) {
          if ((this.server_coroutine != 0) && (this.is_can_stop_coroutine != '\0')) {
            this.wwwBridge = 0;
            BridgePHP__StopServerConnect(__this);
          }
          lVar3 = BridgePHP__ServerConnect(__this,1,uVar5);
          this.server_coroutine = lVar3;
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


// ==== private void ResetCheckEventTimer() { }   @0xadb880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__ResetCheckEventTimer(void *__this)

{
  float fVar1;
  
  if ((bRam0000000001916e1b & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    bRam0000000001916e1b = 1;
  }
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (BridgePHP.is_start_updating_event_from_server != '\0') {
    fVar1 = (float)UnityEngine_Time__get_time(0);
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    BridgePHP.last_check_event_for_refresh = fVar1 + 5.0;
  }
  return;
}


// ==== public void UpdateNickNameAndCountry() { }   @0xadb914

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__UpdateNickNameAndCountry(void *__this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *__this_00;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uStack_34;
  
  if ((bRam0000000001916e1c & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Nicknames__);
    func_0x00a67900(&Str_Player_id__);
    func_0x00a67900(&Str_Countries__);
    func_0x00a67900(&Str__and_);
    bRam0000000001916e1c = 1;
  }
  if (this.bridge_data == 0) {
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
  lVar4 = Main.FBDDKIOEKDM;
  if (lVar4 != 0) {
    uStack_34 = *(undefined4 *)(lVar4 + 0x10);
    uVar1 = System_Int32__ToString(&uStack_34,0);
    if ((this.bridge_data != 0) &&
       (lVar4 = this.bridge_data.player, lVar4 != 0)) {
      uVar2 = System_Int32__ToString(lVar4 + 0x10,0);
      uVar1 = System_String__Concat(_Str_Player_id__,uVar1,_Str__and_,uVar2,0);
      Main__GEMDEAMAGPG(uVar1,0,0);
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar4 = Main.FBDDKIOEKDM;
      if (((lVar4 != 0) && (this.bridge_data != 0)) &&
         (lVar5 = this.bridge_data.player, lVar5 != 0)) {
        uVar1 = System_String__Concat
                          (_Str_Nicknames__,*(undefined8 *)(lVar4 + 0x20),_Str__and_,
                           *(undefined8 *)(lVar5 + 0x18),0);
        Main__GEMDEAMAGPG(uVar1,0,0);
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar4 = Main.FBDDKIOEKDM;
        if (lVar4 != 0) {
          uStack_34 = *(undefined4 *)(lVar4 + 0x14);
          uVar1 = System_Int32__ToString(&uStack_34,0);
          if ((this.bridge_data != 0) &&
             (lVar4 = this.bridge_data.player, lVar4 != 0)) {
            uVar2 = System_Int32__ToString(lVar4 + 0x28,0);
            uVar1 = System_String__Concat(_Str_Countries__,uVar1,_Str__and_,uVar2,0);
            Main__GEMDEAMAGPG(uVar1,0,0);
            if (cRam0000000001916e67 == '\0') {
              func_0x00a67900(&Main_TypeInfo);
              cRam0000000001916e67 = '\x01';
            }
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar4 = _Main_TypeInfo;
            if (((this.bridge_data != 0) &&
                (lVar5 = this.bridge_data.player, lVar5 != 0)) &&
               (lVar6 = Main.FBDDKIOEKDM, lVar6 != 0)) {
              *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(lVar5 + 0x10);
              if (cRam0000000001916e67 == '\0') {
                func_0x00a67900(&Main_TypeInfo);
                cRam0000000001916e67 = '\x01';
                lVar4 = _Main_TypeInfo;
              }
              if (*(int *)(lVar4 + 0xe0) == 0) {
                func_0x00a67a30();
                lVar4 = _Main_TypeInfo;
              }
              if (((this.bridge_data != 0) &&
                  (lVar5 = this.bridge_data.player, lVar5 != 0)) &&
                 (__this_00 = *(void **)(*(long *)(lVar4 + 0xb8) + 8), __this_00 != (void *)0x0)) {
                DAFNMLEKHAD__EMADJEPNIKK(__this_00,*(void **)(lVar5 + 0x18));
                if (cRam0000000001916e67 == '\0') {
                  func_0x00a67900(&Main_TypeInfo);
                  cRam0000000001916e67 = '\x01';
                }
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (((this.bridge_data != 0) &&
                    (lVar4 = this.bridge_data.player, lVar4 != 0)) &&
                   (lVar5 = Main.FBDDKIOEKDM, lVar5 != 0)) {
                  *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(lVar4 + 0x28);
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (Menu.KECGFPHIEHF != 0) {
                    uVar1 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
                    if ((uVar3 & 1) != 0) {
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if (Menu.MDLMIEDLJMC != '\0') {
                        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        if ((Menu.KECGFPHIEHF != 0) &&
                           (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 != 0
                           )) {
                          GUIGarage__CDFFAINFEDD(lVar4,0);
                          if ((Menu.KECGFPHIEHF != 0) &&
                             (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA,
                             lVar4 != 0)) {
                            GUIGarage__EOGBHKMFBGE(lVar4,0);
                            return;
                          }
                        }
                        goto LAB_00bdbd48;
                      }
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00bdbd48:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public static string Md5Sum(string strToEncrypt) { }   @0xadbd4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * BridgePHP__Md5Sum(void *strToEncrypt)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  if ((bRam0000000001916e1d & 1) == 0) {
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_);
    bRam0000000001916e1d = 1;
  }
  uVar1 = KNIEPIEJMDD__COCCMCDDMBM(strToEncrypt,0);
  lVar2 = System_BitConverter__ToString(uVar1,0);
  if ((lVar2 != 0) && (lVar2 = System_String__Replace(lVar2,_Str__,_Str_,0), lVar2 != 0)) {
    if ((bRam00000000019178f1 & 1) == 0) {
      func_0x00a67900(&System_Globalization_CultureInfo_TypeInfo,0);
      bRam00000000019178f1 = 1;
    }
    if (*(int *)(_System_Globalization_CultureInfo_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    plVar3 = (long *)System_Globalization_CultureInfo__get_CurrentCulture(0);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e2aedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pvVar4 = (void *)(**(code **)(*plVar3 + 0x1b8))
                                   (plVar3,lVar2,*(undefined8 *)(*plVar3 + 0x1c0));
        return pvVar4;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
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
    BridgePHP.save_keys_and_values = uVar2;
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
          lVar5 = BridgePHP.save_keys_and_values;
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
            lVar5 = BridgePHP.save_keys_and_values;
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
    lVar3 = CarReplay.HJPPNJKDEKF;
    if (lVar3 == 0) goto LAB_00bdc4b0;
    if (*(int *)(lVar3 + 0x18) <= iVar4) break;
    if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar3 = CarReplay.HJPPNJKDEKF;
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
    lVar3 = CarReplay.HJPPNJKDEKF;
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
    lVar3 = CarReplay.HJPPNJKDEKF;
    if ((lVar3 == 0) ||
       (System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                  (lVar3,iVar4,&dStack_68,
                   _Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Item__),
       dStack_68 == 0.0)) goto LAB_00bdc4b0;
    System_Text_StringBuilder__Append(plVar1,*(undefined2 *)((long)dStack_68 + 0x18),0);
    lVar3 = CarReplay.HJPPNJKDEKF;
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


// ==== private void SiteLock() { }   @0xadc4b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__SiteLock(void *__this)

{
  bool bVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001916e20 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Str_SiteLock_);
    bRam0000000001916e20 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF != 0) {
    uVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((Menu.KECGFPHIEHF != 0) &&
        (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 != 0)) &&
       (pvVar3 = *(void **)(lVar6 + 0x168), pvVar3 != (void *)0x0)) {
      GUIWindow__HEGIHOAJOKK(pvVar3,false);
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
      pvVar3 = Main.FBDDKIOEKDM;
      if (pvVar3 != (void *)0x0) {
        bVar1 = DAFNMLEKHAD__LKKDIBOKNMJ(pvVar3);
        if (bVar1) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.MDLMIEDLJMC != '\0') {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar6 = SoundScript.FPOJDHNIFPP;
            if (lVar6 == 0) goto LAB_00bdc748;
            uVar2 = UnityEngine_AudioSource__get_isPlaying(lVar6,0);
            if ((uVar2 & 1) != 0) {
              if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              lVar6 = SoundScript.FPOJDHNIFPP;
              if (lVar6 == 0) goto LAB_00bdc748;
              UnityEngine_AudioSource__Stop(lVar6,0);
            }
          }
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__GEMDEAMAGPG(_Str_SiteLock_,false);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.KECGFPHIEHF != 0) {
          uVar7 = Menu.KECGFPHIEHF.OJJAEEGGHJM;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF != 0) &&
             (Menu.KECGFPHIEHF.OJJAEEGGHJM != 0)) {
            uVar7 = this.frame_url;
            uVar5 = this.parent_url;
            if ((bRam0000000001916ebd & 1) == 0) {
              func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__,
                              uVar7,uVar5,0);
              func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__)
              ;
              func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
              func_0x00a67900(&Main_TypeInfo);
              func_0x00a67900(&Str_parent);
              func_0x00a67900(&Str_ANALYTICS__SiteLockActivated__);
              func_0x00a67900(&Str___);
              func_0x00a67900(&Str_SiteLockActivated);
              func_0x00a67900(&Str_frame);
              bRam0000000001916ebd = 1;
            }
            pvVar3 = (void *)System_String__Concat
                                       (_Str_ANALYTICS__SiteLockActivated__,uVar7,_Str___,uVar5,0);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_Main_TypeInfo);
            }
            Main__GEMDEAMAGPG(pvVar3,false);
            lVar6 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo)
            ;
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                      (lVar6,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                      (lVar6,_Str_frame,uVar7,
                       _Method_System_Collections_Generic_Dictionary_string__object__Add__);
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                      (lVar6,_Str_parent,uVar5,
                       _Method_System_Collections_Generic_Dictionary_string__object__Add__);
            uVar7 = _Str_SiteLockActivated;
            if ((bRam000000000191f039 & 1) == 0) {
              func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo,lVar6,0);
              bRam000000000191f039 = 1;
            }
            uVar2 = System_String__IsNullOrEmpty(uVar7,0);
            if ((uVar2 & 1) == 0) {
              if (pcRam000000000191f018 == (code *)0x0) {
                pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
              }
              uVar2 = (*pcRam000000000191f018)();
              if ((uVar2 & 1) != 0) {
                if (lVar6 == 0) {
                  if (pcRam000000000191f028 == (code *)0x0) {
                    pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
                  }
                    /* WARNING: Could not recover jumptable at 0x016d9148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam000000000191f028)(uVar7);
                  return;
                }
                lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
                UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar7);
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
            func_0x00a67914(&System_ArgumentException_TypeInfo);
            uVar7 = func_0x00a67b44();
            uVar5 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
            System_ArgumentException___ctor(uVar7,uVar5,0);
            uVar5 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
            func_0x00a67a20(uVar7,uVar5);
LAB_016d9194:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
        }
      }
    }
  }
LAB_00bdc748:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private string GenerateRandomMd5() { }   @0xadc74c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * BridgePHP__GenerateRandomMd5(void *__this)

{
  if ((bRam0000000001916e21 & 1) == 0) {
    func_0x00a67900(&string_TypeInfo);
    bRam0000000001916e21 = 1;
  }
  return (void *)**(undefined8 **)(_string_TypeInfo + 0xb8);
}


// ==== private bool IsSponsorParentUrl(string[] domains) { }   @0xadc794

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool BridgePHP__IsSponsorParentUrl(void *__this,void *domains)

{
  return false;
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
  this.last_color_server_status = auVar2._0_8_;
  this.email = uVar1;
  this.sid_old = uVar1;
  this.social_name = uVar1;
  this.frame_url = uVar1;
  this.parent_url = uVar1;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
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
  BridgePHP.sn = 1;
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
        lVar4 = BridgePHP.<statics>;
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
        lVar2 = BridgePHP.<statics>;
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


// ==== private void <SyncAchievements>b__54_0(IAchievement[] soc_achievements) { }   @0xadece8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP___SyncAchievements_b__54_0(void *__this,void *soc_achievements)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined8 uStack_80;
  byte abStack_74 [4];
  undefined8 uStack_70;
  uint uStack_64;
  
  if ((bRam0000000001916e24 & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&UnityEngine_SocialPlatforms_IAchievement_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_SOCIAL__My_achievements__);
    func_0x00a67900(&Str_SOCIAL__Got_);
    func_0x00a67900(&Str_SOCIAL__No_achievements_returned);
    func_0x00a67900(&Str_SOCIAL__);
    func_0x00a67900(&Str__achievement_instances);
    bRam0000000001916e24 = 1;
  }
  uStack_70 = 0;
  abStack_74[0] = 0;
  uStack_80 = 0;
  if (soc_achievements != (void *)0x0) {
    uStack_64 = (uint)*(undefined8 *)((long)soc_achievements + 0x18);
    uVar1 = System_Int32__ToString(&uStack_64,0);
    pvVar2 = (void *)System_String__Concat(_Str_SOCIAL__Got_,uVar1,_Str__achievement_instances,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__GEMDEAMAGPG(pvVar2,false);
    if (Main.KECGFPHIEHF != 0) {
      lVar10 = Main.KECGFPHIEHF.HEIGOLFEAHJ;
      uStack_64 = 0;
      if (lVar10 != 0) {
        uVar7 = *(uint *)(lVar10 + 0x18);
        if (0 < (int)uVar7) {
          do {
            if (uVar7 <= uStack_64) goto LAB_00bdf430;
            lVar11 = *(long *)(lVar10 + (long)(int)uStack_64 * 8 + 0x20);
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
            if ((lVar11 == 0) ||
               (lVar3 = Main.FBDDKIOEKDM, lVar3 == 0))
            goto LAB_00bdf434;
            uVar4 = DAFNMLEKHAD__HIFFBAOPBGD(lVar3,*(undefined4 *)(lVar11 + 0x10),0);
            if ((uVar4 & 1) == 0) {
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
              lVar3 = Main.FBDDKIOEKDM;
              if (lVar3 == 0) goto LAB_00bdf434;
              uVar4 = DAFNMLEKHAD__OFOJMCJAGFD(lVar3,*(undefined4 *)(lVar11 + 0x10),0);
              if ((uVar4 & 1) != 0) goto LAB_00bdef2c;
            }
            else {
LAB_00bdef2c:
              uVar7 = *(uint *)((long)soc_achievements + 0x18);
              if (0 < (int)uVar7) {
                uVar12 = 0;
                do {
                  if (uVar7 <= uVar12) goto LAB_00bdf430;
                  plVar9 = *(long **)((long)soc_achievements + (long)(int)uVar12 * 8 + 0x20);
                  if (plVar9 == (long *)0x0) goto LAB_00bdf434;
                  lVar3 = *plVar9;
                  uVar1 = *(undefined8 *)(lVar11 + 0x18);
                  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                  if (uVar4 != 0) {
                    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar8 + -2) ==
                          _UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                        puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                        goto LAB_00bdefa0;
                      }
                      uVar4 = uVar4 - 1;
                      piVar8 = piVar8 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar5 = (undefined8 *)
                           func_0x00a9e6c4(plVar9,_UnityEngine_SocialPlatforms_IAchievement_TypeInfo
                                           ,0);
LAB_00bdefa0:
                  uVar6 = (*(code *)*puVar5)(plVar9,puVar5[1]);
                  uVar4 = System_String__op_Equality(uVar1,uVar6,0);
                  if ((uVar4 & 1) != 0) {
                    lVar3 = *plVar9;
                    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    if (uVar4 != 0) {
                      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar8 + -2) ==
                            _UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                          goto LAB_00bdf010;
                        }
                        uVar4 = uVar4 - 1;
                        piVar8 = piVar8 + 4;
                      } while (uVar4 != 0);
                    }
                    puVar5 = (undefined8 *)
                             func_0x00a9e6c4(plVar9,
                                             _UnityEngine_SocialPlatforms_IAchievement_TypeInfo,2);
LAB_00bdf010:
                    uVar4 = (*(code *)*puVar5)(plVar9,puVar5[1]);
                    if ((uVar4 & 1) == 0) {
                      lVar3 = *plVar9;
                      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                      if (uVar4 != 0) {
                        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar8 + -2) ==
                              _UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                            puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                            goto LAB_00bdf06c;
                          }
                          uVar4 = uVar4 - 1;
                          piVar8 = piVar8 + 4;
                        } while (uVar4 != 0);
                      }
                      puVar5 = (undefined8 *)
                               func_0x00a9e6c4(plVar9,
                                               _UnityEngine_SocialPlatforms_IAchievement_TypeInfo,0)
                      ;
LAB_00bdf06c:
                      pvVar2 = (void *)(*(code *)*puVar5)(plVar9,puVar5[1]);
                      BridgePHP__UnlockAchievement(pvVar2,pvVar2);
                    }
                  }
                  uVar7 = *(uint *)((long)soc_achievements + 0x18);
                  uVar12 = uVar12 + 1;
                } while ((int)uVar12 < (int)uVar7);
              }
            }
            uStack_64 = uStack_64 + 1;
            uVar7 = *(uint *)(lVar10 + 0x18);
          } while ((int)uStack_64 < (int)uVar7);
        }
        uVar4 = *(ulong *)((long)soc_achievements + 0x18);
        if (uVar4 == 0) {
          pvVar2 = _Str_SOCIAL__No_achievements_returned;
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            pvVar2 = _Str_SOCIAL__No_achievements_returned;
          }
        }
        else {
          uStack_64 = 0;
          uVar1 = _Str_SOCIAL__My_achievements__;
          if (0 < (int)uVar4) {
LAB_00bdf0f4:
            if ((uint)uVar4 <= uStack_64) {
LAB_00bdf430:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            plVar9 = *(long **)((long)soc_achievements + (long)(int)uStack_64 * 8 + 0x20);
            lVar10 = func_0x00a679a0(_string___TypeInfo,10);
            if (lVar10 == 0) goto LAB_00bdf434;
            if ((*(int *)(lVar10 + 0x18) == 0) ||
               (*(undefined8 *)(lVar10 + 0x20) = uVar1, *(int *)(lVar10 + 0x18) == 1))
            goto LAB_00bdf430;
            *(undefined8 *)(lVar10 + 0x28) = _Str__;
            if (plVar9 == (long *)0x0) goto LAB_00bdf434;
            lVar11 = *plVar9;
            uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == _UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_00bdf18c;
                }
                uVar4 = uVar4 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)
                     func_0x00a9e6c4(plVar9,_UnityEngine_SocialPlatforms_IAchievement_TypeInfo,0);
LAB_00bdf18c:
            uVar1 = (*(code *)*puVar5)(plVar9,puVar5[1]);
            if ((*(uint *)(lVar10 + 0x18) < 3) ||
               (*(undefined8 *)(lVar10 + 0x30) = uVar1, *(uint *)(lVar10 + 0x18) == 3))
            goto LAB_00bdf430;
            *(undefined8 *)(lVar10 + 0x38) = _Str__;
            lVar11 = *plVar9;
            uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == _UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar11 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                  goto LAB_00bdf208;
                }
                uVar4 = uVar4 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)
                     func_0x00a9e6c4(plVar9,_UnityEngine_SocialPlatforms_IAchievement_TypeInfo,1);
LAB_00bdf208:
            uStack_70 = (*(code *)*puVar5)(plVar9,puVar5[1]);
            uVar1 = System_Double__ToString(&uStack_70,0);
            if ((*(uint *)(lVar10 + 0x18) < 5) ||
               (*(undefined8 *)(lVar10 + 0x40) = uVar1, *(uint *)(lVar10 + 0x18) == 5))
            goto LAB_00bdf430;
            *(undefined8 *)(lVar10 + 0x48) = _Str__;
            lVar11 = *plVar9;
            uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == _UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar11 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                  goto LAB_00bdf294;
                }
                uVar4 = uVar4 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)
                     func_0x00a9e6c4(plVar9,_UnityEngine_SocialPlatforms_IAchievement_TypeInfo,2);
LAB_00bdf294:
            abStack_74[0] = (*(code *)*puVar5)(plVar9,puVar5[1]);
            abStack_74[0] = abStack_74[0] & 1;
            if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_bool_TypeInfo);
            }
            uVar1 = System_Boolean__ToString(abStack_74,0);
            if ((*(uint *)(lVar10 + 0x18) < 7) ||
               (*(undefined8 *)(lVar10 + 0x50) = uVar1, *(uint *)(lVar10 + 0x18) == 7))
            goto LAB_00bdf430;
            *(undefined8 *)(lVar10 + 0x58) = _Str__;
            lVar11 = *plVar9;
            uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == _UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar11 + (long)(*piVar8 + 3) * 0x10 + 0x138);
                  goto LAB_00bdf338;
                }
                uVar4 = uVar4 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)
                     func_0x00a9e6c4(plVar9,_UnityEngine_SocialPlatforms_IAchievement_TypeInfo,3);
LAB_00bdf338:
            uStack_80 = (*(code *)*puVar5)(plVar9,puVar5[1]);
            if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_System_DateTime_TypeInfo);
            }
            uVar1 = System_DateTime__ToString(&uStack_80,0);
            if ((*(uint *)(lVar10 + 0x18) < 9) ||
               (*(undefined8 *)(lVar10 + 0x60) = uVar1, *(uint *)(lVar10 + 0x18) == 9))
            goto LAB_00bdf430;
            *(undefined8 *)(lVar10 + 0x68) = _Str__;
            uVar1 = System_String__Concat(lVar10,0);
            uStack_64 = uStack_64 + 1;
            uVar4 = (ulong)*(uint *)((long)soc_achievements + 0x18);
            if ((int)uStack_64 < (int)*(uint *)((long)soc_achievements + 0x18)) goto LAB_00bdf0f4;
          }
          pvVar2 = (void *)System_String__Concat(_Str_SOCIAL__,uVar1,0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Main_TypeInfo);
          }
        }
        Main__GEMDEAMAGPG(pvVar2,false);
        return;
      }
    }
  }
LAB_00bdf434:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



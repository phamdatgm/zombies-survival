using System.Collections;
using System.Collections.Generic;
using GooglePlayGames.BasicApi;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SocialPlatforms;

public class BridgePHP : MonoBehaviour
{
	public class BridgeError
	{
		public string name;

		public IINFOGDGDHA mode;

		public BridgeError(string _name, IINFOGDGDHA _mode)
		{
		}
	}

	public enum SN_PLATFORM
	{
		NONE = 0,
		GOOGLE_PLAY = 1,
		APP_STORE = 2,
		POKI = 3,
		STEAM = 4,
		PC_GAMETOP = 5,
		VK = 6,
		NOW_GG = 7,
		WIN_STORE = 8,
		XBOX_CONSOLE = 9,
		ANDROID_PREMIUM = 10,
		NINTENDO_SWITCH = 11,
		PS4 = 12,
		PS5 = 13
	}

	public static SN_PLATFORM sn;

	public static string[] countries;

	public Sprite[] countries_flags;

	private const string GoodCharsStr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789abcdefghijklmnopqrstuvwxyz _.ÄäÖöÜüßÀàÂâÆæÇçÉéÈèÊêËëÎîÏïÔôŒœÙùÛûÜüŸÿÌìÍíÒòÚúÁáÑñÃãÕõĄąĆćĘęŁłŃńÓóŚśŹźŻżАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдеёжзийклмнопрстуфхцчшщъыьэюяҐґЄєЇїІі";

	private UnityWebRequest wwwBridge;

	public static string sid;

	private string email;

	private string sid_old;

	public static string auth_key;

	public static string domen;

	public static bool is_loading;

	public static bool is_loading_rate_me;

	public static bool is_need_update_game;

	public static bool isGoogleServicesLoaded;

	private bool is_achieve_sync;

	public static int rnd_key;

	private string social_name;

	private BridgeData bridge_data;

	public BridgeError BRIDGE_ERROR;

	public static string save_json;

	public static string save_time;

	public static bool is_need_sync_save_progress;

	public static bool is_can_save_lower_progress_to_server;

	public static Dictionary<string, int> save_keys_and_values;

	private bool is_already_set_nickname;

	private IEnumerator server_coroutine;

	private IEnumerator CheckNintendoNetwork_coroutine;

	private bool is_delay_for_wwww;

	private bool is_error_for_wwww;

	private bool is_error_for_wwww_2;

	private bool is_can_stop_coroutine;

	private string frame_url;

	private string parent_url;

	public Color last_color_server_status;

	public const char split_replay_char = 'i';

	public static int last_event_time_loaded;

	public static int last_try_refresh_event_time;

	public static float last_check_event_for_refresh;

	public static bool is_start_updating_event_from_server;

	private float last_try_login_time_from_events;

	private bool isConfigLoaded;

	private bool isSocialLoginInProgress;

	private bool isAlreadyManuallyAuthenticate;

	private IAchievement[] soc_achievements;

	public void CheckProtocolForMobile()
	{
	}

	public void Login()
	{
	}

	public void SetServerStatusIcon(Color col)
	{
	}

	public string GetCountryNameFromID(int id)
	{
		return null;
	}

	public Sprite GetCountryTextureFromID(int id)
	{
		return null;
	}

	public void SocialLogin()
	{
	}

	private void OnSocialLogin(SignInStatus status)
	{
	}

	public void UnlockAchievement(string achievID)
	{
	}

	public void SyncAchievements()
	{
	}

	public bool GooglePlayIsAuthenticated()
	{
		return false;
	}

	public void StartServerConnect(IINFOGDGDHA _mode, params object[] _param)
	{
	}

	public IEnumerator GetServerConfig()
	{
		return null;
	}

	public void StopServerConnect()
	{
	}

	public IEnumerator ServerConnect(IINFOGDGDHA mode, params object[] param)
	{
		return null;
	}

	public IEnumerator SendRateMe(int stars, string comment)
	{
		return null;
	}

	public string GetErrors(bool is_try_login)
	{
		return null;
	}

	public void RefreshUserProfileAndEvents()
	{
	}

	private void ResetCheckEventTimer()
	{
	}

	public void UpdateNickNameAndCountry()
	{
	}

	public static string Md5Sum(string strToEncrypt)
	{
		return null;
	}

	public static void JsonParseKostyl(string json_data)
	{
	}

	public string GenerateJsonPath()
	{
		return null;
	}

	private void SiteLock()
	{
	}

	private string GenerateRandomMd5()
	{
		return null;
	}

	private bool IsSponsorParentUrl(string[] domains)
	{
		return false;
	}
}

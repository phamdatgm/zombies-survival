using System;
using System.Reflection;
using System.Runtime.CompilerServices;
using Adverty.AdDebug;
using Adverty.Communication.Models;
using Adverty.Utility.Misc;
using Adverty.Utility.RenderPipeline;
using UnityEngine;

namespace Adverty;

public class AdvertySettings : SOSingleton<AdvertySettings, AdvertySettingsFactory>, IAdvertyScriptableObject
{
	public enum Mode
	{
		Mobile = 0,
		AR = 1,
		VR = 2
	}

	public enum ClickHandlingType
	{
		Internal = 0,
		External = 1
	}

	private const string VALIDATE_PATTERN = "^(?!undefined).*\\$\\bhttps\\b.*\\badserver\\b.*\\b.\\badverty\\b.\\b(com|internal)\\b.*$";

	[CompilerGenerated]
	private Action m_APIKeyChanged;

	[CompilerGenerated]
	private Action<bool> m_PublicLogsStateChanged;

	public const string VERSION = "4.1.0";

	public const string API_VERSION = "0.3";

	[SerializeField]
	private bool enableLogs;

	[SerializeField]
	private Mode platform;

	[SerializeField]
	private string apiKey;

	[SerializeField]
	private string hostUrl;

	[SerializeField]
	private bool isLazyLoadAllowed;

	[SerializeField]
	[Obsolete("Deprecated. Extrernal clickhandling is used by default.")]
	private ClickHandlingType clickHandling;

	[SerializeField]
	private bool sandboxMode;

	[SerializeField]
	private string renderPipelineType;

	[SerializeField]
	private string renderPipelineVersion;

	private string applicationKey;

	private bool restrictUserData;

	private UserData userData;

	private HardwareModel hardwareModel;

	private string previousAPIKey;

	private AdvertyLocalFeatures localSettings;

	private LogLevel advertyLogLevel;

	private static bool IsModified;

	public Camera MainCamera { get; private set; }

	public static string HostUrl => null;

	public static UserData UserData
	{
		get
		{
			return null;
		}
		internal set
		{
		}
	}

	public static bool RestrictUserData
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public static bool SandboxMode
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public static string APIKey
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public static Mode Platform
	{
		get
		{
			return Mode.Mobile;
		}
		set
		{
		}
	}

	public static bool EnableLogs
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public static LogLevel AdvertyLogLevel
	{
		get
		{
			return LogLevel.None;
		}
		set
		{
		}
	}

	public static bool IsAPIKeyValid => false;

	public static bool IsLazyLoadAllowed
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	[Obsolete("Deprecated. Extrernal clickhandling is used by default.")]
	public static ClickHandlingType ClickHandling
	{
		get
		{
			return ClickHandlingType.Internal;
		}
		set
		{
		}
	}

	public static Assembly ProductAssembly { get; set; }

	public static Assembly NativeAssembly { get; set; }

	public event Action APIKeyChanged
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public event Action<bool> PublicLogsStateChanged
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public void Initialize()
	{
	}

	public static void SetMainCamera(Camera camera)
	{
	}

	public void ResetLogSettings()
	{
	}

	internal static RenderPipelineData GetRenderPipelineData()
	{
		return default;
	}

	internal static void SetRenderPipelineData(string type, string version)
	{
	}

	private static void SetAPIKey(string key)
	{
	}

	public static void ClearAPIKey()
	{
	}

	public static bool ValidateAPIKey(string key)
	{
		return false;
	}

	public static void UpdateSettings(string apiKey, Mode platform, bool restrictUserData, UserData userData = null)
	{
	}

	private static string[] DecodeAPIKey(string apiKey)
	{
		return null;
	}

	[SpecialName]
	internal static string vP()
	{
		return null;
	}

	[SpecialName]
	internal static HardwareModel vp()
	{
		return default;
	}

	[SpecialName]
	internal static void vQ(HardwareModel value)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	internal static bool vq()
	{
		return false;
	}

	[SpecialName]
	[CompilerGenerated]
	internal static void vR(bool value)
	{
	}

	[SpecialName]
	internal static AdvertyLocalFeatures vr()
	{
		return null;
	}

	[SpecialName]
	internal static void vS(AdvertyLocalFeatures value)
	{
	}

	protected void OnValidate()
	{
	}
}

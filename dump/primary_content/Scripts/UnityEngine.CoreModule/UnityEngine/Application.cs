using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using UnityEngine.Scripting;

namespace UnityEngine;

public class Application
{
	public delegate void AdvertisingIdentifierCallback(string advertisingId, bool trackingEnabled, string errorMsg);

	public delegate void LowMemoryCallback();

	public delegate void MemoryUsageChangedCallback([In] ref ApplicationMemoryUsageChange usage);

	public delegate void LogCallback(string condition, string stackTrace, LogType type);

	[CompilerGenerated]
	private static LowMemoryCallback lowMemory;

	[CompilerGenerated]
	private static MemoryUsageChangedCallback memoryUsageChanged;

	private static LogCallback s_LogCallbackHandler;

	private static LogCallback s_LogCallbackHandlerThreaded;

	[CompilerGenerated]
	private static Action<bool> focusChanged;

	[CompilerGenerated]
	private static Action<string> deepLinkActivated;

	[CompilerGenerated]
	private static Func<bool> wantsToQuit;

	[CompilerGenerated]
	private static Action m_quitting;

	[CompilerGenerated]
	private static Action unloading;

	private static CancellationTokenSource s_currentCancellationTokenSource;

	public static bool isPlaying => false;

	public static bool isFocused => false;

	public static string buildGUID => null;

	public static bool isBatchMode => false;

	public static string streamingAssetsPath => null;

	public static string persistentDataPath => null;

	public static string unityVersion => null;

	public static string version => null;

	public static string identifier => null;

	public static string cloudProjectId => null;

	public static int targetFrameRate
	{
		set
		{
		}
	}

	public static RuntimePlatform platform => RuntimePlatform.OSXEditor;

	public static SystemLanguage systemLanguage => SystemLanguage.Afrikaans;

	public static NetworkReachability internetReachability => NetworkReachability.NotReachable;

	public static bool isEditor => false;

	public static event LogCallback logMessageReceived
	{
		add
		{
		}
		remove
		{
		}
	}

	public static event Action quitting
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

	public static void Quit(int exitCode)
	{
	}

	public static void Quit()
	{
	}

	public static bool RequestAdvertisingIdentifierAsync(AdvertisingIdentifierCallback delegateMethod)
	{
		return false;
	}

	public static void OpenURL(string url)
	{
	}

	private static void SetLogCallbackDefined(bool defined)
	{
	}

	[RequiredByNativeCode]
	internal static void CallLowMemory(ApplicationMemoryUsage usage)
	{
	}

	[RequiredByNativeCode]
	internal static bool HasLogCallback()
	{
		return false;
	}

	[RequiredByNativeCode]
	private static void CallLogCallback(string logString, string stackTrace, LogType type, bool invokedOnMainThread)
	{
	}

	[RequiredByNativeCode]
	private static bool Internal_ApplicationWantsToQuit()
	{
		return false;
	}

	[RequiredByNativeCode]
	private static void Internal_ApplicationInit()
	{
	}

	[RequiredByNativeCode]
	private static void Internal_ApplicationQuit()
	{
	}

	[RequiredByNativeCode]
	private static void Internal_ApplicationUnload()
	{
	}

	[RequiredByNativeCode]
	internal static void InvokeOnBeforeRender()
	{
	}

	[RequiredByNativeCode]
	internal static void InvokeFocusChanged(bool focus)
	{
	}

	[RequiredByNativeCode]
	internal static void InvokeDeepLinkActivated(string url)
	{
	}
}

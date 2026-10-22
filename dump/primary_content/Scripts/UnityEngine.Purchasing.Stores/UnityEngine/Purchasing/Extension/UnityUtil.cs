using System;
using System.Collections;
using System.Collections.Generic;
using Uniject;

namespace UnityEngine.Purchasing.Extension;

internal class UnityUtil : MonoBehaviour, IUtil
{
	private static readonly List<Action> s_Callbacks;

	private static bool s_CallbacksPending;

	private static readonly List<RuntimePlatform> s_PcControlledPlatforms;

	private readonly List<Action<bool>> pauseListeners;

	public DateTime currentTime => default;

	public string persistentDataPath => null;

	public string deviceUniqueIdentifier => null;

	public string unityVersion => null;

	public string cloudProjectId => null;

	public string userId => null;

	public string gameVersion => null;

	public ulong sessionId => 0uL;

	public RuntimePlatform platform => RuntimePlatform.OSXEditor;

	public bool isEditor => false;

	public string deviceModel => null;

	public string deviceName => null;

	public DeviceType deviceType => DeviceType.Unknown;

	public string operatingSystem => null;

	public int screenWidth => 0;

	public int screenHeight => 0;

	public float screenDpi => 0f;

	public string screenOrientation => null;

	public T[] GetAnyComponentsOfType<T>() where T : class
	{
		return null;
	}

	object IUtil.InitiateCoroutine(IEnumerator start)
	{
		return null;
	}

	void IUtil.InitiateCoroutine(IEnumerator start, int delay)
	{
	}

	public void RunOnMainThread(Action runnable)
	{
	}

	public object GetWaitForSeconds(int seconds)
	{
		return null;
	}

	private void Start()
	{
	}

	public static T FindInstanceOfType<T>() where T : MonoBehaviour
	{
		return null;
	}

	public static T LoadResourceInstanceOfType<T>() where T : MonoBehaviour
	{
		return null;
	}

	public static bool PcPlatform()
	{
		return false;
	}

	private IEnumerator DelayedCoroutine(IEnumerator coroutine, int delay)
	{
		return null;
	}

	private void Update()
	{
	}

	public void AddPauseListener(Action<bool> runnable)
	{
	}

	public void OnApplicationPause(bool paused)
	{
	}

	public bool IsClassOrSubclass(Type potentialBase, Type potentialDescendant)
	{
		return false;
	}
}

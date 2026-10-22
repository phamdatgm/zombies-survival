using System;
using System.Collections;
using System.Threading;
using UnityEngine.Scripting;

namespace UnityEngine;

[RequiredByNativeCode]
[ExtensionOfNativeClass]
public class MonoBehaviour : Behaviour
{
	private CancellationTokenSource m_CancellationTokenSource;

	public CancellationToken destroyCancellationToken => default;

	[RequiredByNativeCode]
	private void RaiseCancellation()
	{
	}

	public bool IsInvoking()
	{
		return false;
	}

	public void CancelInvoke()
	{
	}

	public void Invoke(string methodName, float time)
	{
	}

	public void InvokeRepeating(string methodName, float time, float repeatRate)
	{
	}

	public void CancelInvoke(string methodName)
	{
	}

	public bool IsInvoking(string methodName)
	{
		return false;
	}

	public Coroutine StartCoroutine(string methodName)
	{
		return null;
	}

	public Coroutine StartCoroutine(string methodName, object value)
	{
		return null;
	}

	public Coroutine StartCoroutine(IEnumerator routine)
	{
		return null;
	}

	[Obsolete("StartCoroutine_Auto has been deprecated. Use StartCoroutine instead (UnityUpgradable) -> StartCoroutine([mscorlib] System.Collections.IEnumerator)", false)]
	public Coroutine StartCoroutine_Auto(IEnumerator routine)
	{
		return null;
	}

	public void StopCoroutine(IEnumerator routine)
	{
	}

	public void StopCoroutine(Coroutine routine)
	{
	}

	public static void print(object message)
	{
	}

	private static void Internal_CancelInvokeAll(MonoBehaviour self)
	{
	}

	private static bool Internal_IsInvokingAll(MonoBehaviour self)
	{
		return false;
	}

	private static void InvokeDelayed(MonoBehaviour self, string methodName, float time, float repeatRate)
	{
	}

	private static void CancelInvoke(MonoBehaviour self, string methodName)
	{
	}

	private static bool IsInvoking(MonoBehaviour self, string methodName)
	{
		return false;
	}

	private static bool IsObjectMonoBehaviour(Object obj)
	{
		return false;
	}

	private Coroutine StartCoroutineManaged(string methodName, object value)
	{
		return null;
	}

	private Coroutine StartCoroutineManaged2(IEnumerator enumerator)
	{
		return null;
	}

	private void StopCoroutineManaged(Coroutine routine)
	{
	}

	private void StopCoroutineFromEnumeratorManaged(IEnumerator routine)
	{
	}

	private void OnCancellationTokenCreated()
	{
	}
}

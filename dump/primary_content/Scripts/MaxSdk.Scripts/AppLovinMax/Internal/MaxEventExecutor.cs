using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace AppLovinMax.Internal;

public class MaxEventExecutor : MonoBehaviour
{
	private struct MaxAction(Action actionToExecute, string nameOfEvent)
	{
		public readonly Action ActionToExecute = null;

		public readonly string EventName = null;
	}

	private static MaxEventExecutor _instance;

	private static readonly List<MaxAction> AdEventsQueue;

	private static bool _adEventsQueueEmpty;

	public static void InitializeIfNeeded()
	{
	}

	public static void ExecuteOnMainThread(Action action, string eventName)
	{
	}

	public static void InvokeOnMainThread(UnityEvent unityEvent, string eventName)
	{
	}

	public void Update()
	{
	}

	public void Disable()
	{
	}
}

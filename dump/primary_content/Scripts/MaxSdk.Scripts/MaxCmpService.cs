using System;
using System.Collections.Generic;
using UnityEngine;

public class MaxCmpService
{
	private static readonly MaxCmpService _instance;

	private static Action<MaxCmpError> _onCompletedAction;

	private static readonly AndroidJavaClass MaxUnityPluginClass;

	private MaxCmpService()
	{
	}

	internal static void NotifyCompletedIfNeeded(Dictionary<string, object> errorProps)
	{
	}
}

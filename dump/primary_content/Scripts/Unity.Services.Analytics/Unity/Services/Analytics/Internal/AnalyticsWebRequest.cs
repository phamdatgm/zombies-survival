using System;
using UnityEngine.Networking;

namespace Unity.Services.Analytics.Internal;

internal class AnalyticsWebRequest : UnityWebRequest, IWebRequest, IDisposable
{
	public bool IsNetworkError => false;

	internal AnalyticsWebRequest(string url, string method)
	{
	}

	UnityWebRequestAsyncOperation IWebRequest.SendWebRequest()
	{
		return null;
	}

	void IWebRequest.SetRequestHeader(string key, string value)
	{
	}
}

using System;
using GooglePlayGames.BasicApi.Nearby;
using UnityEngine;

namespace GooglePlayGames.Android;

public class AndroidNearbyConnectionClient
{
	private class AdvertisingConnectionLifecycleCallbackProxy : AndroidJavaProxy
	{
		private Action<AdvertisingResult> mResultCallback;

		private Action<ConnectionRequest> mConnectionRequestCallback;

		private AndroidNearbyConnectionClient mClient;

		private string mLocalEndpointName;

		public AdvertisingConnectionLifecycleCallbackProxy(Action<AdvertisingResult> resultCallback, Action<ConnectionRequest> connectionRequestCallback, AndroidNearbyConnectionClient client)
			: base((string)null)
		{
		}

		public void onConnectionInitiated(string endpointId, AndroidJavaObject connectionInfo)
		{
		}

		public void onConnectionResult(string endpointId, AndroidJavaObject connectionResolution)
		{
		}

		public void onDisconnected(string endpointId)
		{
		}
	}

	private class PayloadCallback : AndroidJavaProxy
	{
		private IMessageListener mListener;

		public PayloadCallback(IMessageListener listener)
			: base((string)null)
		{
		}

		public void onPayloadReceived(string endpointId, AndroidJavaObject payload)
		{
		}
	}

	private class DiscoveringConnectionLifecycleCallback : AndroidJavaProxy
	{
		private Action<ConnectionResponse> mResponseCallback;

		private IMessageListener mListener;

		private AndroidJavaObject mClient;

		public DiscoveringConnectionLifecycleCallback(Action<ConnectionResponse> responseCallback, IMessageListener listener, AndroidJavaObject client)
			: base((string)null)
		{
		}

		public void onConnectionInitiated(string endpointId, AndroidJavaObject connectionInfo)
		{
		}

		public void onConnectionResult(string endpointId, AndroidJavaObject connectionResolution)
		{
		}

		public void onDisconnected(string endpointId)
		{
		}
	}

	private class EndpointDiscoveryCallback : AndroidJavaProxy
	{
		private IDiscoveryListener mListener;

		public EndpointDiscoveryCallback(IDiscoveryListener listener)
			: base((string)null)
		{
		}

		public void onEndpointFound(string endpointId, AndroidJavaObject endpointInfo)
		{
		}

		public void onEndpointLost(string endpointId)
		{
		}

		private EndpointDetails CreateEndPointDetails(string endpointId, AndroidJavaObject endpointInfo)
		{
			return default;
		}
	}

	private static readonly long NearbyClientId;

	private static readonly int ApplicationInfoFlags;

	private static readonly string ServiceId;

	protected IMessageListener mAdvertisingMessageListener;

	public string GetServiceId()
	{
		return null;
	}

	private static string ReadServiceId()
	{
		return null;
	}
}

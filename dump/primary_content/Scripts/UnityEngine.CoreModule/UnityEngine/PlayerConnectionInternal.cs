using System;

namespace UnityEngine;

internal class PlayerConnectionInternal : IPlayerEditorConnectionNative
{
	void IPlayerEditorConnectionNative.SendMessage(Guid messageId, byte[] data, int playerId)
	{
	}

	bool IPlayerEditorConnectionNative.TrySendMessage(Guid messageId, byte[] data, int playerId)
	{
		return false;
	}

	void IPlayerEditorConnectionNative.Poll()
	{
	}

	void IPlayerEditorConnectionNative.RegisterInternal(Guid messageId)
	{
	}

	void IPlayerEditorConnectionNative.UnregisterInternal(Guid messageId)
	{
	}

	void IPlayerEditorConnectionNative.Initialize()
	{
	}

	bool IPlayerEditorConnectionNative.IsConnected()
	{
		return false;
	}

	void IPlayerEditorConnectionNative.DisconnectAll()
	{
	}

	private static bool IsConnected()
	{
		return false;
	}

	private static void Initialize()
	{
	}

	private static void RegisterInternal(string messageId)
	{
	}

	private static void UnregisterInternal(string messageId)
	{
	}

	private static void SendMessage(string messageId, byte[] data, int playerId)
	{
	}

	private static bool TrySendMessage(string messageId, byte[] data, int playerId)
	{
		return false;
	}

	private static void PollInternal()
	{
	}

	private static void DisconnectAll()
	{
	}
}

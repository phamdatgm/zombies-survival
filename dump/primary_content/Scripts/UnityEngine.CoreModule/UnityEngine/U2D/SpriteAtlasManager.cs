using System;
using System.Runtime.CompilerServices;
using UnityEngine.Scripting;

namespace UnityEngine.U2D;

public class SpriteAtlasManager
{
	[CompilerGenerated]
	private static Action<string, Action<SpriteAtlas>> atlasRequested;

	[CompilerGenerated]
	private static Action<SpriteAtlas> m_atlasRegistered;

	public static event Action<SpriteAtlas> atlasRegistered
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

	[RequiredByNativeCode]
	private static bool RequestAtlas(string tag)
	{
		return false;
	}

	[RequiredByNativeCode]
	private static void PostRegisteredAtlas(SpriteAtlas spriteAtlas)
	{
	}

	internal static void Register(SpriteAtlas spriteAtlas)
	{
	}
}

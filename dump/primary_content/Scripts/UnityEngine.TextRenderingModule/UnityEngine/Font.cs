using System;
using System.Runtime.CompilerServices;
using UnityEngine.Scripting;

namespace UnityEngine;

public sealed class Font : Object
{
	public delegate void FontTextureRebuildCallback();

	[CompilerGenerated]
	private static Action<Font> m_textureRebuilt;

	[CompilerGenerated]
	private FontTextureRebuildCallback m_FontTextureRebuildCallback;

	public Material material => null;

	public bool dynamic => false;

	public int fontSize => 0;

	public static event Action<Font> textureRebuilt
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
	internal static void InvokeTextureRebuilt_Internal(Font font)
	{
	}

	public bool HasCharacter(char c)
	{
		return false;
	}

	private bool HasCharacter(int c)
	{
		return false;
	}

	private static void Internal_CreateFont(Font self, string name)
	{
	}

	public bool GetCharacterInfo(char ch, out CharacterInfo info, int size, FontStyle style)
	{
		info = default;
		return false;
	}

	public void RequestCharactersInTexture(string characters, int size, FontStyle style)
	{
	}
}

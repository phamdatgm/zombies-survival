using System.Runtime.InteropServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[UsedByNativeCode]
public sealed class LightmapData
{
	internal Texture2D m_Light;

	internal Texture2D m_Dir;

	internal Texture2D m_ShadowMask;

	public Texture2D lightmapColor
	{
		set
		{
		}
	}
}

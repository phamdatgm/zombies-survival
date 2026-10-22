using System;
using System.Runtime.CompilerServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[UsedByNativeCode]
public struct Plane : IFormattable
{
	private Vector3 m_Normal = default;

	private float m_Distance = 0f;

	public Vector3 normal
	{
		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		get
		{
			return default;
		}
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public Plane(Vector3 inNormal, Vector3 inPoint)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public bool Raycast(Ray ray, out float enter)
	{
		enter = default;
		return false;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}

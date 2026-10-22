using System;
using System.Reflection;
using System.Runtime.CompilerServices;
using Unity.IL2CPP.CompilerServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[DefaultMember("Item")]
[Il2CppEagerStaticClassConstruction]
[UsedByNativeCode]
public struct Quaternion : IEquatable<Quaternion>, IFormattable
{
	public float x = 0f;

	public float y = 0f;

	public float z = 0f;

	public float w = 0f;

	private static readonly Quaternion identityQuaternion;

	public static Quaternion identity
	{
		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		get
		{
			return default;
		}
	}

	public Vector3 eulerAngles
	{
		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		get
		{
			return default;
		}
	}

	public static Quaternion FromToRotation(Vector3 fromDirection, Vector3 toDirection)
	{
		return default;
	}

	public static Quaternion Inverse(Quaternion rotation)
	{
		return default;
	}

	public static Quaternion Lerp(Quaternion a, Quaternion b, float t)
	{
		return default;
	}

	private static Quaternion Internal_FromEulerRad(Vector3 euler)
	{
		return default;
	}

	private static Vector3 Internal_ToEulerRad(Quaternion rotation)
	{
		return default;
	}

	public static Quaternion AngleAxis(float angle, Vector3 axis)
	{
		return default;
	}

	public static Quaternion LookRotation(Vector3 forward, Vector3 upwards)
	{
		return default;
	}

	public static Quaternion LookRotation(Vector3 forward)
	{
		return default;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public Quaternion(float x, float y, float z, float w)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public static Quaternion operator *(Quaternion lhs, Quaternion rhs)
	{
		return default;
	}

	public static Vector3 operator *(Quaternion rotation, Vector3 point)
	{
		return default;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	private static bool IsEqualUsingDot(float dot)
	{
		return false;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public static bool operator ==(Quaternion lhs, Quaternion rhs)
	{
		return false;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public static bool operator !=(Quaternion lhs, Quaternion rhs)
	{
		return false;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public static float Dot(Quaternion a, Quaternion b)
	{
		return 0f;
	}

	private static Vector3 Internal_MakePositive(Vector3 euler)
	{
		return default;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public static Quaternion Euler(float x, float y, float z)
	{
		return default;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public static Quaternion Euler(Vector3 euler)
	{
		return default;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public override int GetHashCode()
	{
		return 0;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public override bool Equals(object other)
	{
		return false;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public bool Equals(Quaternion other)
	{
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

	private static void FromToRotation_Injected(ref Vector3 fromDirection, ref Vector3 toDirection, out Quaternion ret)
	{
		ret = default;
	}

	private static void Inverse_Injected(ref Quaternion rotation, out Quaternion ret)
	{
		ret = default;
	}

	private static void Lerp_Injected(ref Quaternion a, ref Quaternion b, float t, out Quaternion ret)
	{
		ret = default;
	}

	private static void Internal_FromEulerRad_Injected(ref Vector3 euler, out Quaternion ret)
	{
		ret = default;
	}

	private static void Internal_ToEulerRad_Injected(ref Quaternion rotation, out Vector3 ret)
	{
		ret = default;
	}

	private static void AngleAxis_Injected(float angle, ref Vector3 axis, out Quaternion ret)
	{
		ret = default;
	}

	private static void LookRotation_Injected(ref Vector3 forward, ref Vector3 upwards, out Quaternion ret)
	{
		ret = default;
	}
}

using System;
using System.Reflection;
using System.Runtime.CompilerServices;
using Unity.IL2CPP.CompilerServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[Il2CppEagerStaticClassConstruction]
[DefaultMember("Item")]
public struct Matrix4x4 : IEquatable<Matrix4x4>, IFormattable
{
	public float m00 = 0f;

	public float m10 = 0f;

	public float m20 = 0f;

	public float m30 = 0f;

	public float m01 = 0f;

	public float m11 = 0f;

	public float m21 = 0f;

	public float m31 = 0f;

	public float m02 = 0f;

	public float m12 = 0f;

	public float m22 = 0f;

	public float m32 = 0f;

	public float m03 = 0f;

	public float m13 = 0f;

	public float m23 = 0f;

	public float m33 = 0f;

	private static readonly Matrix4x4 zeroMatrix;

	private static readonly Matrix4x4 identityMatrix;

	public Matrix4x4 inverse => default;

	public static Matrix4x4 identity
	{
		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		get
		{
			return default;
		}
	}

	public static Matrix4x4 TRS(Vector3 pos, Quaternion q, Vector3 s)
	{
		return default;
	}

	public static bool Inverse3DAffine(Matrix4x4 input, ref Matrix4x4 result)
	{
		return false;
	}

	public static Matrix4x4 Inverse(Matrix4x4 m)
	{
		return default;
	}

	public Matrix4x4(Vector4 column0, Vector4 column1, Vector4 column2, Vector4 column3)
	{
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
	public bool Equals(Matrix4x4 other)
	{
		return false;
	}

	public static Matrix4x4 operator *(Matrix4x4 lhs, Matrix4x4 rhs)
	{
		return default;
	}

	public Vector4 GetColumn(int index)
	{
		return default;
	}

	public Vector4 GetRow(int index)
	{
		return default;
	}

	public Vector3 MultiplyPoint(Vector3 point)
	{
		return default;
	}

	public Vector3 MultiplyPoint3x4(Vector3 point)
	{
		return default;
	}

	public static Matrix4x4 Rotate(Quaternion q)
	{
		return default;
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

	private static void TRS_Injected(ref Vector3 pos, ref Quaternion q, ref Vector3 s, out Matrix4x4 ret)
	{
		ret = default;
	}

	private static bool Inverse3DAffine_Injected(ref Matrix4x4 input, ref Matrix4x4 result)
	{
		return false;
	}

	private static void Inverse_Injected(ref Matrix4x4 m, out Matrix4x4 ret)
	{
		ret = default;
	}
}

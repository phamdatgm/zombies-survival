using System;
using System.Runtime.InteropServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[RequiredByNativeCode]
public class Gradient : IEquatable<Gradient>
{
	internal IntPtr m_Ptr;

	private static IntPtr Init()
	{
		return (IntPtr)0;
	}

	private void Cleanup()
	{
	}

	private bool Internal_Equals(IntPtr other)
	{
		return false;
	}

	[RequiredByNativeCode]
	public Gradient()
	{
	}

	~Gradient()
	{
	}

	public override bool Equals(object o)
	{
		return false;
	}

	public bool Equals(Gradient other)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}
}

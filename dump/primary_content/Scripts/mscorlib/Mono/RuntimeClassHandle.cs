using System;

namespace Mono;

internal struct RuntimeClassHandle
{
	private unsafe RuntimeStructs.MonoClass* value;

	public override bool Equals(object obj)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	internal unsafe static IntPtr GetTypeFromClass(RuntimeStructs.MonoClass* klass)
	{
		return (IntPtr)0;
	}

	internal RuntimeTypeHandle GetTypeHandle()
	{
		return default;
	}
}

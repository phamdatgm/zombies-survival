using System;
using System.Runtime.InteropServices;

namespace Mono;

internal static class RuntimeStructs
{
	[StructLayout((LayoutKind)0, Size = 1)]
	internal struct MonoClass
	{
	}

	internal struct GenericParamInfo
	{
		internal unsafe MonoClass* pklass;

		internal IntPtr name;

		internal ushort flags;

		internal uint token;

		internal unsafe MonoClass** constraints;
	}

	internal struct GPtrArray
	{
		internal unsafe IntPtr* data;

		internal int len;
	}
}

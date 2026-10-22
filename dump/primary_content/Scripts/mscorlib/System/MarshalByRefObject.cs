using System.Runtime.InteropServices;

namespace System;

/// <summary>Enables access to objects across application domain boundaries in applications that support remoting.</summary>
[Serializable]
[StructLayout((LayoutKind)0)]
public abstract class MarshalByRefObject
{
	[NonSerialized]
	private object _identity;

	/// <summary>Initializes a new instance of the <see cref="T:System.MarshalByRefObject" /> class.</summary>
	protected MarshalByRefObject()
	{
	}
}

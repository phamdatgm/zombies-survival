using System;

namespace UnityEngine.Scripting;

[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Constructor | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Interface, Inherited = false)]
internal class RequiredByNativeCodeAttribute : Attribute
{
	public string Name { set; }

	public bool Optional { set; }

	public bool GenerateProxy { set; }

	public RequiredByNativeCodeAttribute()
	{
	}

	public RequiredByNativeCodeAttribute(string name)
	{
	}
}

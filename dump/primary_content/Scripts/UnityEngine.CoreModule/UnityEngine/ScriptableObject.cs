using System;
using System.Runtime.InteropServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[RequiredByNativeCode]
[ExtensionOfNativeClass]
public class ScriptableObject : Object
{
	public static ScriptableObject CreateInstance(Type type)
	{
		return null;
	}

	public static T CreateInstance<T>() where T : ScriptableObject
	{
		return null;
	}

	private static void CreateScriptableObject(ScriptableObject self)
	{
	}

	internal static ScriptableObject CreateScriptableObjectInstanceFromType(Type type, bool applyDefaultsAndReset)
	{
		return null;
	}
}

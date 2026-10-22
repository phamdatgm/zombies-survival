using System;
using System.Runtime.InteropServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[RequiredByNativeCode(GenerateProxy = true)]
public class Object
{
	private IntPtr m_CachedPtr;

	internal static int OffsetOfInstanceIDInCPlusPlusObject;

	private const string objectIsNullMessage = "The Object you want to instantiate is null.";

	private const string cloneDestroyedMessage = "Instantiate failed because the clone was destroyed during creation. This can happen if DestroyImmediate is called in MonoBehaviour.Awake.";

	public string name
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public HideFlags hideFlags
	{
		get
		{
			return HideFlags.None;
		}
		set
		{
		}
	}

	public int GetInstanceID()
	{
		return 0;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	public override bool Equals(object other)
	{
		return false;
	}

	public static implicit operator bool(Object exists)
	{
		return false;
	}

	private static bool CompareBaseObjects(Object lhs, Object rhs)
	{
		return false;
	}

	private static bool IsNativeObjectAlive(Object o)
	{
		return false;
	}

	private IntPtr GetCachedPtr()
	{
		return (IntPtr)0;
	}

	public static Object Instantiate(Object original, Vector3 position, Quaternion rotation)
	{
		return null;
	}

	public static Object Instantiate(Object original, Vector3 position, Quaternion rotation, Transform parent)
	{
		return null;
	}

	public static Object Instantiate(Object original)
	{
		return null;
	}

	public static Object Instantiate(Object original, Transform parent)
	{
		return null;
	}

	public static Object Instantiate(Object original, Transform parent, bool instantiateInWorldSpace)
	{
		return null;
	}

	public static T Instantiate<T>(T original) where T : Object
	{
		return null;
	}

	public static T Instantiate<T>(T original, Vector3 position, Quaternion rotation) where T : Object
	{
		return null;
	}

	public static T Instantiate<T>(T original, Vector3 position, Quaternion rotation, Transform parent) where T : Object
	{
		return null;
	}

	public static T Instantiate<T>(T original, Transform parent) where T : Object
	{
		return null;
	}

	public static T Instantiate<T>(T original, Transform parent, bool worldPositionStays) where T : Object
	{
		return null;
	}

	public static void Destroy(Object obj, float t)
	{
	}

	public static void Destroy(Object obj)
	{
	}

	public static void DestroyImmediate(Object obj, bool allowDestroyingAssets)
	{
	}

	public static void DestroyImmediate(Object obj)
	{
	}

	public static Object[] FindObjectsOfType(Type type)
	{
		return null;
	}

	public static Object[] FindObjectsOfType(Type type, bool includeInactive)
	{
		return null;
	}

	public static void DontDestroyOnLoad(Object target)
	{
	}

	public static T[] FindObjectsOfType<T>() where T : Object
	{
		return null;
	}

	public static T FindObjectOfType<T>() where T : Object
	{
		return null;
	}

	private static void CheckNullArgument(object arg, string message)
	{
	}

	public static Object FindObjectOfType(Type type)
	{
		return null;
	}

	public static Object FindObjectOfType(Type type, bool includeInactive)
	{
		return null;
	}

	public override string ToString()
	{
		return null;
	}

	public static bool operator ==(Object x, Object y)
	{
		return false;
	}

	public static bool operator !=(Object x, Object y)
	{
		return false;
	}

	private static int GetOffsetOfInstanceIDInCPlusPlusObject()
	{
		return 0;
	}

	private static Object Internal_CloneSingle(Object data)
	{
		return null;
	}

	private static Object Internal_CloneSingleWithParent(Object data, Transform parent, bool worldPositionStays)
	{
		return null;
	}

	private static Object Internal_InstantiateSingle(Object data, Vector3 pos, Quaternion rot)
	{
		return null;
	}

	private static Object Internal_InstantiateSingleWithParent(Object data, Transform parent, Vector3 pos, Quaternion rot)
	{
		return null;
	}

	private static string ToString(Object obj)
	{
		return null;
	}

	private static string GetName(Object obj)
	{
		return null;
	}

	private static void SetName(Object obj, string name)
	{
	}

	internal static Object FindObjectFromInstanceID(int instanceID)
	{
		return null;
	}

	private static Object Internal_InstantiateSingle_Injected(Object data, ref Vector3 pos, ref Quaternion rot)
	{
		return null;
	}

	private static Object Internal_InstantiateSingleWithParent_Injected(Object data, Transform parent, ref Vector3 pos, ref Quaternion rot)
	{
		return null;
	}
}

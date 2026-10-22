using System;
using System.Collections.Generic;
using UnityEngine.Scripting;

namespace UnityEngine;

[UsedByNativeCode]
public sealed class GameObject : Object
{
	public Transform transform => null;

	public int layer
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	[Obsolete("GameObject.active is obsolete. Use GameObject.SetActive(), GameObject.activeSelf or GameObject.activeInHierarchy.")]
	public bool active => false;

	public bool activeSelf => false;

	public bool activeInHierarchy => false;

	public string tag => null;

	public GameObject gameObject => null;

	public T GetComponent<T>()
	{
		return default;
	}

	public Component GetComponent(Type type)
	{
		return null;
	}

	internal void GetComponentFastPath(Type type, IntPtr oneFurtherThanResultValue)
	{
	}

	public Component GetComponentInChildren(Type type, bool includeInactive)
	{
		return null;
	}

	public T GetComponentInChildren<T>()
	{
		return default;
	}

	public T GetComponentInChildren<T>(bool includeInactive)
	{
		return default;
	}

	public Component GetComponentInParent(Type type, bool includeInactive)
	{
		return null;
	}

	public T GetComponentInParent<T>()
	{
		return default;
	}

	public T GetComponentInParent<T>(bool includeInactive)
	{
		return default;
	}

	private Array GetComponentsInternal(Type type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, object resultList)
	{
		return null;
	}

	public T[] GetComponents<T>()
	{
		return null;
	}

	public void GetComponents<T>(List<T> results)
	{
	}

	public T[] GetComponentsInChildren<T>(bool includeInactive)
	{
		return null;
	}

	public void GetComponentsInChildren<T>(bool includeInactive, List<T> results)
	{
	}

	public T[] GetComponentsInChildren<T>()
	{
		return null;
	}

	public void GetComponentsInParent<T>(bool includeInactive, List<T> results)
	{
	}

	public T[] GetComponentsInParent<T>(bool includeInactive)
	{
		return null;
	}

	public bool TryGetComponent<T>(out T component)
	{
		component = default;
		return false;
	}

	public bool TryGetComponent(Type type, out Component component)
	{
		component = null;
		return false;
	}

	internal Component TryGetComponentInternal(Type type)
	{
		return null;
	}

	internal void TryGetComponentFastPath(Type type, IntPtr oneFurtherThanResultValue)
	{
	}

	private Component Internal_AddComponentWithType(Type componentType)
	{
		return null;
	}

	public Component AddComponent(Type componentType)
	{
		return null;
	}

	public T AddComponent<T>() where T : Component
	{
		return null;
	}

	public void SetActive(bool value)
	{
	}

	public static GameObject[] FindGameObjectsWithTag(string tag)
	{
		return null;
	}

	public void SendMessage(string methodName, object value, SendMessageOptions options)
	{
	}

	public GameObject(string name)
	{
	}

	public GameObject()
	{
	}

	public GameObject(string name, params Type[] components)
	{
	}

	private static void Internal_CreateGameObject(GameObject self, string name)
	{
	}

	public static GameObject Find(string name)
	{
		return null;
	}
}

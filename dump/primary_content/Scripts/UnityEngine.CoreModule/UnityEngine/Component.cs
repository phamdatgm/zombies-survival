using System;
using System.Collections.Generic;
using UnityEngine.Scripting;

namespace UnityEngine;

[RequiredByNativeCode]
public class Component : Object
{
	public Transform transform => null;

	public GameObject gameObject => null;

	public Component GetComponent(Type type)
	{
		return null;
	}

	internal void GetComponentFastPath(Type type, IntPtr oneFurtherThanResultValue)
	{
	}

	public T GetComponent<T>()
	{
		return default;
	}

	public bool TryGetComponent(Type type, out Component component)
	{
		component = null;
		return false;
	}

	public bool TryGetComponent<T>(out T component)
	{
		component = default;
		return false;
	}

	public Component GetComponentInChildren(Type t, bool includeInactive)
	{
		return null;
	}

	public T GetComponentInChildren<T>()
	{
		return default;
	}

	public T[] GetComponentsInChildren<T>(bool includeInactive)
	{
		return null;
	}

	public void GetComponentsInChildren<T>(bool includeInactive, List<T> result)
	{
	}

	public T[] GetComponentsInChildren<T>()
	{
		return null;
	}

	public void GetComponentsInChildren<T>(List<T> results)
	{
	}

	public Component GetComponentInParent(Type t, bool includeInactive)
	{
		return null;
	}

	public T GetComponentInParent<T>()
	{
		return default;
	}

	public T[] GetComponentsInParent<T>(bool includeInactive)
	{
		return null;
	}

	public void GetComponentsInParent<T>(bool includeInactive, List<T> results)
	{
	}

	public T[] GetComponentsInParent<T>()
	{
		return null;
	}

	private void GetComponentsForListInternal(Type searchType, object resultList)
	{
	}

	public void GetComponents(Type type, List<Component> results)
	{
	}

	public void GetComponents<T>(List<T> results)
	{
	}

	public T[] GetComponents<T>()
	{
		return null;
	}

	public void SendMessage(string methodName, object value, SendMessageOptions options)
	{
	}
}

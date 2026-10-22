using System;

namespace UnityEngine;

public sealed class Resources
{
	internal static T[] ConvertObjects<T>(Object[] rawObjects) where T : Object
	{
		return null;
	}

	public static Object Load(string path)
	{
		return null;
	}

	public static T Load<T>(string path) where T : Object
	{
		return null;
	}

	public static Object Load(string path, Type systemTypeInstance)
	{
		return null;
	}

	public static Object GetBuiltinResource(Type type, string path)
	{
		return null;
	}

	public static T GetBuiltinResource<T>(string path) where T : Object
	{
		return null;
	}
}

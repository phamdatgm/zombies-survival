using System.Collections.Generic;
using UnityEngine;

namespace Adverty.Utility;

public static class AssetsManager
{
	private static Dictionary<string, Object> dx;

	private static Dictionary<string, Shader> dY;

	static AssetsManager()
	{
	}

	public static T GetAsset<T>(string path) where T : Object
	{
		return null;
	}

	public static Shader GetShader(string name)
	{
		return null;
	}
}

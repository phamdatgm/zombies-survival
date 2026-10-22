using UnityEngine;

namespace Adverty.Utility.Misc;

public class SOSingleton<T, W> : ScriptableObject where T : ScriptableObject, IAdvertyScriptableObject where W : SOFactory<T>, new()
{
	private static T Et;

	public static T Instance => null;
}

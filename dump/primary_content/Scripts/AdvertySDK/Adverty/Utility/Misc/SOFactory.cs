using UnityEngine;

namespace Adverty.Utility.Misc;

public abstract class SOFactory<T> : IFactory<T> where T : ScriptableObject, IAdvertyScriptableObject
{
	public abstract T Create();

	protected static T Load(string path)
	{
		return null;
	}
}

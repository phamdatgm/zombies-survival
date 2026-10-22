using System;

namespace UnityEngine.SceneManagement;

[Serializable]
public struct Scene
{
	[SerializeField]
	private int m_Handle;

	public int handle => 0;

	public string name => null;

	public int buildIndex => 0;

	private static string GetNameInternal(int sceneHandle)
	{
		return null;
	}

	private static int GetBuildIndexInternal(int sceneHandle)
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
}

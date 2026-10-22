using System.Runtime.CompilerServices;
using UnityEngine.Events;
using UnityEngine.Scripting;

namespace UnityEngine.SceneManagement;

[RequiredByNativeCode]
public class SceneManager
{
	internal static bool s_AllowLoadScene;

	[CompilerGenerated]
	private static UnityAction<Scene, LoadSceneMode> m_sceneLoaded;

	[CompilerGenerated]
	private static UnityAction<Scene> m_sceneUnloaded;

	[CompilerGenerated]
	private static UnityAction<Scene, Scene> m_activeSceneChanged;

	public static int sceneCount => 0;

	public static event UnityAction<Scene, LoadSceneMode> sceneLoaded
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event UnityAction<Scene> sceneUnloaded
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event UnityAction<Scene, Scene> activeSceneChanged
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static Scene GetActiveScene()
	{
		return default;
	}

	public static Scene GetSceneAt(int index)
	{
		return default;
	}

	private static AsyncOperation LoadSceneAsyncNameIndexInternal(string sceneName, int sceneBuildIndex, LoadSceneParameters parameters, bool mustCompleteNextFrame)
	{
		return null;
	}

	[RequiredByNativeCode]
	internal static AsyncOperation LoadFirstScene_Internal(bool async)
	{
		return null;
	}

	public static void LoadScene(string sceneName)
	{
	}

	public static Scene LoadScene(string sceneName, LoadSceneParameters parameters)
	{
		return default;
	}

	[RequiredByNativeCode]
	private static void Internal_SceneLoaded(Scene scene, LoadSceneMode mode)
	{
	}

	[RequiredByNativeCode]
	private static void Internal_SceneUnloaded(Scene scene)
	{
	}

	[RequiredByNativeCode]
	private static void Internal_ActiveSceneChanged(Scene previousActiveScene, Scene newActiveScene)
	{
	}

	private static void GetActiveScene_Injected(out Scene ret)
	{
		ret = default;
	}

	private static void GetSceneAt_Injected(int index, out Scene ret)
	{
		ret = default;
	}
}

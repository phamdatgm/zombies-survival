using System;

namespace GooglePlayGames.BasicApi;

public class DummyClient : IPlayGamesClient
{
	public void Authenticate(Action<SignInStatus> callback)
	{
	}

	public void ManuallyAuthenticate(Action<SignInStatus> callback)
	{
	}

	public bool IsAuthenticated()
	{
		return false;
	}

	public string GetUserId()
	{
		return null;
	}

	public string GetUserDisplayName()
	{
		return null;
	}

	public string GetUserImageUrl()
	{
		return null;
	}

	public void LoadAchievements(Action<Achievement[]> callback)
	{
	}

	public void UnlockAchievement(string achId, Action<bool> callback)
	{
	}

	public void RevealAchievement(string achId, Action<bool> callback)
	{
	}

	public void SetStepsAtLeast(string achId, int steps, Action<bool> callback)
	{
	}

	public void ShowAchievementsUI(Action<UIStatus> callback)
	{
	}

	private static void LogUsage()
	{
	}
}

using System;
using System.Collections.Generic;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;

namespace GooglePlayGames;

public class PlayGamesPlatform : ISocialPlatform
{
	private static PlayGamesPlatform sInstance;

	private PlayGamesLocalUser mLocalUser;

	private IPlayGamesClient mClient;

	private Dictionary<string, string> mIdMap;

	public static bool DebugLogEnabled
	{
		set
		{
		}
	}

	public static PlayGamesPlatform Instance => null;

	public ILocalUser localUser => null;

	internal PlayGamesPlatform(IPlayGamesClient client)
	{
	}

	public static PlayGamesPlatform Activate()
	{
		return null;
	}

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

	public void ReportProgress(string achievementID, double progress, Action<bool> callback)
	{
	}

	internal static int progressToSteps(double progress, int totalSteps)
	{
		return 0;
	}

	public void LoadAchievements(Action<IAchievement[]> callback)
	{
	}

	public void ShowAchievementsUI()
	{
	}

	public void ShowAchievementsUI(Action<UIStatus> callback)
	{
	}

	private string MapId(string id)
	{
		return null;
	}

	private static Action<T> ToOnGameThread<T>(Action<T> toConvert)
	{
		return null;
	}
}

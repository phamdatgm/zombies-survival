using System;
using UnityEngine.SocialPlatforms;

namespace UnityEngine;

public static class Social
{
	public static ISocialPlatform Active
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public static ILocalUser localUser => null;

	public static void ReportProgress(string achievementID, double progress, Action<bool> callback)
	{
	}

	public static void LoadAchievements(Action<IAchievement[]> callback)
	{
	}

	public static void ShowAchievementsUI()
	{
	}
}

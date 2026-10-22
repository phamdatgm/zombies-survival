using System;
using System.Collections.Generic;
using UnityEngine.SocialPlatforms.Impl;

namespace UnityEngine.SocialPlatforms;

public class Local : ISocialPlatform
{
	private static LocalUser m_LocalUser;

	private List<UserProfile> m_Friends;

	private List<UserProfile> m_Users;

	private List<AchievementDescription> m_AchievementDescriptions;

	private List<Achievement> m_Achievements;

	private List<Leaderboard> m_Leaderboards;

	public ILocalUser localUser => null;

	public void ReportProgress(string id, double progress, Action<bool> callback)
	{
	}

	public void LoadAchievements(Action<IAchievement[]> callback)
	{
	}

	public void ShowAchievementsUI()
	{
	}

	private bool VerifyUser()
	{
		return false;
	}
}

using System;

namespace UnityEngine.SocialPlatforms;

public interface ISocialPlatform
{
	ILocalUser localUser { get; }

	void ReportProgress(string achievementID, double progress, Action<bool> callback);

	void LoadAchievements(Action<IAchievement[]> callback);

	void ShowAchievementsUI();
}

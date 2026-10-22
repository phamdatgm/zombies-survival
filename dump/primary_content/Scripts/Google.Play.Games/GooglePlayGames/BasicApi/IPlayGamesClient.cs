using System;

namespace GooglePlayGames.BasicApi;

public interface IPlayGamesClient
{
	void Authenticate(Action<SignInStatus> callback);

	void ManuallyAuthenticate(Action<SignInStatus> callback);

	bool IsAuthenticated();

	string GetUserId();

	string GetUserDisplayName();

	string GetUserImageUrl();

	void LoadAchievements(Action<Achievement[]> callback);

	void UnlockAchievement(string achievementId, Action<bool> successOrFailureCalllback);

	void RevealAchievement(string achievementId, Action<bool> successOrFailureCalllback);

	void SetStepsAtLeast(string achId, int steps, Action<bool> callback);

	void ShowAchievementsUI(Action<UIStatus> callback);
}

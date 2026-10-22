using System;
using GooglePlayGames.BasicApi;
using GooglePlayGames.BasicApi.Events;
using GooglePlayGames.BasicApi.SavedGame;
using UnityEngine;
using UnityEngine.SocialPlatforms;

namespace GooglePlayGames.Android;

public class AndroidClient : IPlayGamesClient
{
	private enum AuthState
	{
		Unauthenticated = 0,
		Authenticated = 1
	}

	private readonly object GameServicesLock;

	private readonly object AuthStateLock;

	private static readonly string PlayGamesSdkClassName;

	private ISavedGameClient mSavedGameClient;

	private IEventsClient mEventsClient;

	private Player mUser;

	private AuthState mAuthState;

	private IUserProfile[] mFriends;

	private AndroidJavaClass mGamesClass;

	private static string TasksClassName;

	private readonly int mLeaderboardMaxResults;

	private readonly int mFriendsMaxResults;

	internal AndroidClient()
	{
	}

	private static void InitializeSdk()
	{
	}

	public void Authenticate(Action<SignInStatus> callback)
	{
	}

	public void ManuallyAuthenticate(Action<SignInStatus> callback)
	{
	}

	private void Authenticate(bool isAutoSignIn, Action<SignInStatus> callback)
	{
	}

	private void SignInOnResult(bool isAuthenticated, Action<SignInStatus> callback)
	{
	}

	private static Action<T> AsOnGameThreadCallback<T>(Action<T> callback)
	{
		return null;
	}

	private static void InvokeCallbackOnGameThread<T>(Action<T> callback, T data)
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

	private AndroidJavaObject getAchievementsClient()
	{
		return null;
	}

	private AndroidJavaObject getPlayersClient()
	{
		return null;
	}

	private AndroidJavaObject getGamesSignInClient()
	{
		return null;
	}
}

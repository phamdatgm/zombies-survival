using System;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;

namespace GooglePlayGames;

internal class PlayGamesAchievement : IAchievement
{
	private readonly ReportProgress mProgressCallback;

	private string mId;

	private bool mIsIncremental;

	private int mCurrentSteps;

	private int mTotalSteps;

	private double mPercentComplete;

	private bool mCompleted;

	private bool mHidden;

	private DateTime mLastModifiedTime;

	private string mTitle;

	private string mRevealedImageUrl;

	private string mUnlockedImageUrl;

	private string mDescription;

	private ulong mPoints;

	public string id => null;

	public double percentCompleted => 0.0;

	public bool completed => false;

	public DateTime lastReportedDate => default;

	internal PlayGamesAchievement()
	{
	}

	internal PlayGamesAchievement(ReportProgress progressCallback)
	{
	}

	internal PlayGamesAchievement(Achievement ach)
	{
	}
}

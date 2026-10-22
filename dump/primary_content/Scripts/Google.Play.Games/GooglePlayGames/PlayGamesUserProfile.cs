using UnityEngine;
using UnityEngine.SocialPlatforms;

namespace GooglePlayGames;

public class PlayGamesUserProfile : IUserProfile
{
	private string mDisplayName;

	private string mPlayerId;

	private string mAvatarUrl;

	private bool mIsFriend;

	private bool mImageLoading;

	private Texture2D mImage;

	public string userName => null;

	public string id => null;

	public string AvatarURL => null;

	internal PlayGamesUserProfile(string displayName, string playerId, string avatarUrl)
	{
	}

	protected void ResetIdentity(string displayName, string playerId, string avatarUrl)
	{
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	public override string ToString()
	{
		return null;
	}

	private void setAvatarUrl(string avatarUrl)
	{
	}
}

using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;

namespace GooglePlayGames;

public class PlayGamesLocalUser : PlayGamesUserProfile, ILocalUser, IUserProfile
{
	internal PlayGamesPlatform mPlatform;

	private PlayerStats mStats;

	public bool authenticated => false;

	public new string userName => null;

	public new string id => null;

	internal PlayGamesLocalUser(PlayGamesPlatform plaf)
		: base(null, null, null)
	{
	}
}

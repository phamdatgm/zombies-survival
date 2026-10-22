namespace UnityEngine.SocialPlatforms.Impl;

public class UserProfile : IUserProfile
{
	protected string m_UserName;

	protected string m_ID;

	private string m_legacyID;

	protected bool m_IsFriend;

	protected UserState m_State;

	protected Texture2D m_Image;

	public string userName => null;

	public string id => null;

	public bool isFriend => false;

	public UserState state => UserState.Online;

	public override string ToString()
	{
		return null;
	}
}

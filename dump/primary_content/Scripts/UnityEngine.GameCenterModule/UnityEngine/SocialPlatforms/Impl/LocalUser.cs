namespace UnityEngine.SocialPlatforms.Impl;

public class LocalUser : UserProfile, ILocalUser, IUserProfile
{
	private IUserProfile[] m_Friends;

	private bool m_Authenticated;

	private bool m_Underage;

	public bool authenticated => false;
}

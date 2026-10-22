// Namespace: 
internal class <Module> // TypeDefIndex: 7761
{}


// Namespace: UnityEngine
public static class Social // TypeDefIndex: 7762
{
	// Properties
	public static ISocialPlatform Active { get; set; }
	public static ILocalUser localUser { get; }

	// Methods

	// RVA: 0x13A5898 Offset: 0x13A1898 VA: 0x13A5898
	public static ISocialPlatform get_Active() { }

	// RVA: 0x13A5904 Offset: 0x13A1904 VA: 0x13A5904
	public static void set_Active(ISocialPlatform value) { }

	// RVA: 0x13A599C Offset: 0x13A199C VA: 0x13A599C
	public static ILocalUser get_localUser() { }

	// RVA: 0x13A5A34 Offset: 0x13A1A34 VA: 0x13A5A34
	public static void ReportProgress(string achievementID, double progress, Action<bool> callback) { }

	// RVA: 0x13A5AF8 Offset: 0x13A1AF8 VA: 0x13A5AF8
	public static void LoadAchievements(Action<IAchievement[]> callback) { }

	// RVA: 0x13A5BA4 Offset: 0x13A1BA4 VA: 0x13A5BA4
	public static void ShowAchievementsUI() { }
}


// Namespace: UnityEngine.SocialPlatforms
public class Local : ISocialPlatform // TypeDefIndex: 7763
{
	// Fields
	private static LocalUser m_LocalUser; // 0x0
	private List<UserProfile> m_Friends; // 0x10
	private List<UserProfile> m_Users; // 0x18
	private List<AchievementDescription> m_AchievementDescriptions; // 0x20
	private List<Achievement> m_Achievements; // 0x28
	private List<Leaderboard> m_Leaderboards; // 0x30

	// Properties
	public ILocalUser localUser { get; }

	// Methods

	// RVA: 0x13A5C40 Offset: 0x13A1C40 VA: 0x13A5C40 Slot: 4
	public ILocalUser get_localUser() { }

	// RVA: 0x13A5D24 Offset: 0x13A1D24 VA: 0x13A5D24 Slot: 5
	public void ReportProgress(string id, double progress, Action<bool> callback) { }

	// RVA: 0x13A6358 Offset: 0x13A2358 VA: 0x13A6358 Slot: 6
	public void LoadAchievements(Action<IAchievement[]> callback) { }

	// RVA: 0x13A63DC Offset: 0x13A23DC VA: 0x13A63DC Slot: 7
	public void ShowAchievementsUI() { }

	// RVA: 0x13A61F8 Offset: 0x13A21F8 VA: 0x13A61F8
	private bool VerifyUser() { }

	// RVA: 0x13A6444 Offset: 0x13A2444 VA: 0x13A6444
	public void .ctor() { }
}


// Namespace: UnityEngine.SocialPlatforms
internal static class ActivePlatform // TypeDefIndex: 7764
{
	// Fields
	private static ISocialPlatform _active; // 0x0

	// Properties
	internal static ISocialPlatform Instance { get; set; }

	// Methods

	// RVA: 0x13A589C Offset: 0x13A189C VA: 0x13A589C
	internal static ISocialPlatform get_Instance() { }

	// RVA: 0x13A5950 Offset: 0x13A1950 VA: 0x13A5950
	internal static void set_Instance(ISocialPlatform value) { }

	// RVA: 0x13A65B0 Offset: 0x13A25B0 VA: 0x13A65B0
	private static ISocialPlatform SelectSocialPlatform() { }
}


// Namespace: UnityEngine.SocialPlatforms
public interface ISocialPlatform // TypeDefIndex: 7765
{
	// Properties
	public abstract ILocalUser localUser { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract ILocalUser get_localUser();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void ReportProgress(string achievementID, double progress, Action<bool> callback);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void LoadAchievements(Action<IAchievement[]> callback);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void ShowAchievementsUI();
}


// Namespace: UnityEngine.SocialPlatforms
public interface ILocalUser : IUserProfile // TypeDefIndex: 7766
{
	// Properties
	public abstract bool authenticated { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool get_authenticated();
}


// Namespace: UnityEngine.SocialPlatforms
public enum UserState // TypeDefIndex: 7767
{
	// Fields
	public int value__; // 0x0
	public const UserState Online = 0;
	public const UserState OnlineAndAway = 1;
	public const UserState OnlineAndBusy = 2;
	public const UserState Offline = 3;
	public const UserState Playing = 4;
}


// Namespace: UnityEngine.SocialPlatforms
public interface IUserProfile // TypeDefIndex: 7768
{
	// Properties
	public abstract string userName { get; }
	public abstract string id { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string get_userName();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract string get_id();
}


// Namespace: UnityEngine.SocialPlatforms
public interface IAchievement // TypeDefIndex: 7769
{
	// Properties
	public abstract string id { get; }
	public abstract double percentCompleted { get; }
	public abstract bool completed { get; }
	public abstract DateTime lastReportedDate { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string get_id();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract double get_percentCompleted();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract bool get_completed();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract DateTime get_lastReportedDate();
}


// Namespace: UnityEngine.SocialPlatforms.Impl
public class LocalUser : UserProfile, ILocalUser, IUserProfile // TypeDefIndex: 7770
{
	// Fields
	private IUserProfile[] m_Friends; // 0x38
	private bool m_Authenticated; // 0x40
	private bool m_Underage; // 0x41

	// Properties
	public bool authenticated { get; }

	// Methods

	// RVA: 0x13A5CC8 Offset: 0x13A1CC8 VA: 0x13A5CC8
	public void .ctor() { }

	// RVA: 0x13A66B8 Offset: 0x13A26B8 VA: 0x13A66B8 Slot: 8
	public bool get_authenticated() { }
}


// Namespace: UnityEngine.SocialPlatforms.Impl
public class UserProfile : IUserProfile // TypeDefIndex: 7771
{
	// Fields
	protected string m_UserName; // 0x10
	protected string m_ID; // 0x18
	private string m_legacyID; // 0x20
	protected bool m_IsFriend; // 0x28
	protected UserState m_State; // 0x2C
	protected Texture2D m_Image; // 0x30

	// Properties
	public string userName { get; }
	public string id { get; }
	public bool isFriend { get; }
	public UserState state { get; }

	// Methods

	// RVA: 0x13A6600 Offset: 0x13A2600 VA: 0x13A6600
	public void .ctor() { }

	// RVA: 0x13A66C0 Offset: 0x13A26C0 VA: 0x13A66C0 Slot: 3
	public override string ToString() { }

	// RVA: 0x13A6828 Offset: 0x13A2828 VA: 0x13A6828 Slot: 4
	public string get_userName() { }

	// RVA: 0x13A6820 Offset: 0x13A2820 VA: 0x13A6820 Slot: 5
	public string get_id() { }

	// RVA: 0x13A6830 Offset: 0x13A2830 VA: 0x13A6830 Slot: 6
	public bool get_isFriend() { }

	// RVA: 0x13A6838 Offset: 0x13A2838 VA: 0x13A6838 Slot: 7
	public UserState get_state() { }
}


// Namespace: UnityEngine.SocialPlatforms.Impl
public class Achievement : IAchievement // TypeDefIndex: 7772
{
	// Fields
	private bool m_Completed; // 0x10
	private bool m_Hidden; // 0x11
	private DateTime m_LastReportedDate; // 0x18
	[CompilerGenerated]
	private string <id>k__BackingField; // 0x20
	[CompilerGenerated]
	private double <percentCompleted>k__BackingField; // 0x28

	// Properties
	public string id { get; set; }
	public double percentCompleted { get; set; }
	public bool completed { get; }
	public bool hidden { get; }
	public DateTime lastReportedDate { get; }

	// Methods

	// RVA: 0x13A6304 Offset: 0x13A2304 VA: 0x13A6304
	public void .ctor(string id, double percentCompleted, bool completed, bool hidden, DateTime lastReportedDate) { }

	// RVA: 0x13A6840 Offset: 0x13A2840 VA: 0x13A6840 Slot: 3
	public override string ToString() { }

	// RVA: 0x13A62E4 Offset: 0x13A22E4 VA: 0x13A62E4
	public void SetCompleted(bool value) { }

	// RVA: 0x13A62F0 Offset: 0x13A22F0 VA: 0x13A62F0
	public void SetHidden(bool value) { }

	// RVA: 0x13A62FC Offset: 0x13A22FC VA: 0x13A62FC
	public void SetLastReportedDate(DateTime date) { }

	[CompilerGenerated]
	// RVA: 0x13A6A0C Offset: 0x13A2A0C VA: 0x13A6A0C Slot: 4
	public string get_id() { }

	[CompilerGenerated]
	// RVA: 0x13A6A14 Offset: 0x13A2A14 VA: 0x13A6A14 Slot: 8
	public void set_id(string value) { }

	[CompilerGenerated]
	// RVA: 0x13A6A1C Offset: 0x13A2A1C VA: 0x13A6A1C Slot: 5
	public double get_percentCompleted() { }

	[CompilerGenerated]
	// RVA: 0x13A6A24 Offset: 0x13A2A24 VA: 0x13A6A24 Slot: 9
	public void set_percentCompleted(double value) { }

	// RVA: 0x13A69F4 Offset: 0x13A29F4 VA: 0x13A69F4 Slot: 6
	public bool get_completed() { }

	// RVA: 0x13A69FC Offset: 0x13A29FC VA: 0x13A69FC Slot: 10
	public bool get_hidden() { }

	// RVA: 0x13A6A04 Offset: 0x13A2A04 VA: 0x13A6A04 Slot: 7
	public DateTime get_lastReportedDate() { }
}


// Namespace: UnityEngine.SocialPlatforms.Impl
public class AchievementDescription // TypeDefIndex: 7773
{
	// Fields
	[CompilerGenerated]
	private string <id>k__BackingField; // 0x10

	// Properties
	public string id { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13A6A2C Offset: 0x13A2A2C VA: 0x13A6A2C Slot: 4
	public string get_id() { }
}


// Namespace: UnityEngine.SocialPlatforms.Impl
public class Leaderboard // TypeDefIndex: 7774
{}

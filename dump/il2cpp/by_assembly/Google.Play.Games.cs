// Namespace: 
internal class <Module> // TypeDefIndex: 7356
{}


// Namespace: GooglePlayGames
internal sealed class ReportProgress : MulticastDelegate // TypeDefIndex: 7357
{
	// Methods

	// RVA: 0xCC10C8 Offset: 0xCBD0C8 VA: 0xCC10C8
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xCC1168 Offset: 0xCBD168 VA: 0xCC1168 Slot: 12
	public virtual void Invoke(string id, double progress, Action<bool> callback) { }
}


// Namespace: GooglePlayGames
internal class PlayGamesAchievement : IAchievement // TypeDefIndex: 7358
{
	// Fields
	private readonly ReportProgress mProgressCallback; // 0x10
	private string mId; // 0x18
	private bool mIsIncremental; // 0x20
	private int mCurrentSteps; // 0x24
	private int mTotalSteps; // 0x28
	private double mPercentComplete; // 0x30
	private bool mCompleted; // 0x38
	private bool mHidden; // 0x39
	private DateTime mLastModifiedTime; // 0x40
	private string mTitle; // 0x48
	private string mRevealedImageUrl; // 0x50
	private string mUnlockedImageUrl; // 0x58
	private string mDescription; // 0x60
	private ulong mPoints; // 0x68

	// Properties
	public string id { get; }
	public double percentCompleted { get; }
	public bool completed { get; }
	public DateTime lastReportedDate { get; }

	// Methods

	// RVA: 0xCC117C Offset: 0xCBD17C VA: 0xCC117C
	internal void .ctor() { }

	// RVA: 0xCC12C8 Offset: 0xCBD2C8 VA: 0xCC12C8
	internal void .ctor(ReportProgress progressCallback) { }

	// RVA: 0xCC1384 Offset: 0xCBD384 VA: 0xCC1384
	internal void .ctor(Achievement ach) { }

	// RVA: 0xCC14FC Offset: 0xCBD4FC VA: 0xCC14FC Slot: 4
	public string get_id() { }

	// RVA: 0xCC1504 Offset: 0xCBD504 VA: 0xCC1504 Slot: 5
	public double get_percentCompleted() { }

	// RVA: 0xCC150C Offset: 0xCBD50C VA: 0xCC150C Slot: 6
	public bool get_completed() { }

	// RVA: 0xCC1514 Offset: 0xCBD514 VA: 0xCC1514 Slot: 7
	public DateTime get_lastReportedDate() { }
}


// Namespace: GooglePlayGames
public class PlayGamesLocalUser : PlayGamesUserProfile, ILocalUser, IUserProfile // TypeDefIndex: 7359
{
	// Fields
	internal PlayGamesPlatform mPlatform; // 0x38
	private PlayerStats mStats; // 0x40

	// Properties
	public bool authenticated { get; }
	public string userName { get; }
	public string id { get; }

	// Methods

	// RVA: 0xCC151C Offset: 0xCBD51C VA: 0xCC151C
	internal void .ctor(PlayGamesPlatform plaf) { }

	// RVA: 0xCC15E8 Offset: 0xCBD5E8 VA: 0xCC15E8 Slot: 6
	public bool get_authenticated() { }

	// RVA: 0xCC16B0 Offset: 0xCBD6B0 VA: 0xCC16B0 Slot: 4
	public string get_userName() { }

	// RVA: 0xCC1AF4 Offset: 0xCBDAF4 VA: 0xCC1AF4 Slot: 5
	public string get_id() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class PlayGamesPlatform.<>c__73<T> // TypeDefIndex: 7360
{
	// Fields
	public static readonly PlayGamesPlatform.<>c__73<T> <>9; // 0x0
	public static Action<T> <>9__73_0; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB8F74 Offset: 0xBB4F74 VA: 0xBB8F74
	|-PlayGamesPlatform.<>c__73<__Il2CppFullySharedGenericType>..cctor
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB9030 Offset: 0xBB5030 VA: 0xBB9030
	|-PlayGamesPlatform.<>c__73<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal void <ToOnGameThread>b__73_0(T <p0>) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB9038 Offset: 0xBB5038 VA: 0xBB9038
	|-PlayGamesPlatform.<>c__73<__Il2CppFullySharedGenericType>.<ToOnGameThread>b__73_0
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class PlayGamesPlatform.<>c__DisplayClass38_0 // TypeDefIndex: 7361
{
	// Fields
	public string achievementID; // 0x10
	public double progress; // 0x18
	public PlayGamesPlatform <>4__this; // 0x20
	public Action<bool> callback; // 0x28

	// Methods

	// RVA: 0xCC25D8 Offset: 0xCBE5D8 VA: 0xCC25D8
	public void .ctor() { }

	// RVA: 0xCC2A44 Offset: 0xCBEA44 VA: 0xCC2A44
	internal void <ReportProgress>b__0(Achievement[] ach) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class PlayGamesPlatform.<>c__DisplayClass45_0 // TypeDefIndex: 7362
{
	// Fields
	public Action<IAchievement[]> callback; // 0x10

	// Methods

	// RVA: 0xCC28C8 Offset: 0xCBE8C8 VA: 0xCC28C8
	public void .ctor() { }

	// RVA: 0xCC2FF0 Offset: 0xCBEFF0 VA: 0xCC2FF0
	internal void <LoadAchievements>b__0(Achievement[] ach) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class PlayGamesPlatform.<>c__DisplayClass73_0<T> // TypeDefIndex: 7363
{
	// Fields
	public Action<T> toConvert; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBB168 Offset: 0xBB7168 VA: 0xBBB168
	|-PlayGamesPlatform.<>c__DisplayClass73_0<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal void <ToOnGameThread>b__1(T val) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBB170 Offset: 0xBB7170 VA: 0xBBB170
	|-PlayGamesPlatform.<>c__DisplayClass73_0<__Il2CppFullySharedGenericType>.<ToOnGameThread>b__1
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class PlayGamesPlatform.<>c__DisplayClass73_1<T> // TypeDefIndex: 7364
{
	// Fields
	public T val; // 0x0
	public PlayGamesPlatform.<>c__DisplayClass73_0<T> CS$<>8__locals1; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBB31C Offset: 0xBB731C VA: 0xBBB31C
	|-PlayGamesPlatform.<>c__DisplayClass73_1<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal void <ToOnGameThread>b__2() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBB324 Offset: 0xBB7324 VA: 0xBBB324
	|-PlayGamesPlatform.<>c__DisplayClass73_1<__Il2CppFullySharedGenericType>.<ToOnGameThread>b__2
	*/
}


// Namespace: GooglePlayGames
public class PlayGamesPlatform : ISocialPlatform // TypeDefIndex: 7365
{
	// Fields
	private static PlayGamesPlatform sInstance; // 0x0
	private PlayGamesLocalUser mLocalUser; // 0x10
	private IPlayGamesClient mClient; // 0x18
	private Dictionary<string, string> mIdMap; // 0x20

	// Properties
	public static bool DebugLogEnabled { set; }
	public static PlayGamesPlatform Instance { get; }
	public ILocalUser localUser { get; }

	// Methods

	// RVA: 0xCC1BB8 Offset: 0xCBDBB8 VA: 0xCC1BB8
	internal void .ctor(IPlayGamesClient client) { }

	// RVA: 0xCC1CA4 Offset: 0xCBDCA4 VA: 0xCC1CA4
	public static void set_DebugLogEnabled(bool value) { }

	// RVA: 0xCC11F4 Offset: 0xCBD1F4 VA: 0xCC11F4
	public static PlayGamesPlatform get_Instance() { }

	// RVA: 0xCC1F54 Offset: 0xCBDF54 VA: 0xCC1F54 Slot: 4
	public ILocalUser get_localUser() { }

	// RVA: 0xCC1F5C Offset: 0xCBDF5C VA: 0xCC1F5C
	public static PlayGamesPlatform Activate() { }

	// RVA: 0xCC2038 Offset: 0xCBE038 VA: 0xCC2038
	public void Authenticate(Action<SignInStatus> callback) { }

	// RVA: 0xCC20E0 Offset: 0xCBE0E0 VA: 0xCC20E0
	public void ManuallyAuthenticate(Action<SignInStatus> callback) { }

	// RVA: 0xCC1600 Offset: 0xCBD600 VA: 0xCC1600
	public bool IsAuthenticated() { }

	// RVA: 0xCC1890 Offset: 0xCBD890 VA: 0xCC1890
	public string GetUserId() { }

	// RVA: 0xCC1774 Offset: 0xCBD774 VA: 0xCC1774
	public string GetUserDisplayName() { }

	// RVA: 0xCC19A4 Offset: 0xCBD9A4 VA: 0xCC19A4
	public string GetUserImageUrl() { }

	// RVA: 0xCC2298 Offset: 0xCBE298 VA: 0xCC2298 Slot: 5
	public void ReportProgress(string achievementID, double progress, Action<bool> callback) { }

	// RVA: 0xCC26F8 Offset: 0xCBE6F8 VA: 0xCC26F8
	internal static int progressToSteps(double progress, int totalSteps) { }

	// RVA: 0xCC2738 Offset: 0xCBE738 VA: 0xCC2738 Slot: 6
	public void LoadAchievements(Action<IAchievement[]> callback) { }

	// RVA: 0xCC28D0 Offset: 0xCBE8D0 VA: 0xCC28D0 Slot: 7
	public void ShowAchievementsUI() { }

	// RVA: 0xCC28D8 Offset: 0xCBE8D8 VA: 0xCC28D8
	public void ShowAchievementsUI(Action<UIStatus> callback) { }

	// RVA: 0xCC25E0 Offset: 0xCBE5E0 VA: 0xCC25E0
	private string MapId(string id) { }

	// RVA: -1 Offset: -1
	private static Action<T> ToOnGameThread<T>(Action<T> toConvert) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA34B0 Offset: 0xB9F4B0 VA: 0xBA34B0
	|-PlayGamesPlatform.ToOnGameThread<__Il2CppFullySharedGenericType>
	*/
}


// Namespace: GooglePlayGames
public class PlayGamesUserProfile : IUserProfile // TypeDefIndex: 7366
{
	// Fields
	private string mDisplayName; // 0x10
	private string mPlayerId; // 0x18
	private string mAvatarUrl; // 0x20
	private bool mIsFriend; // 0x28
	private bool mImageLoading; // 0x29
	private Texture2D mImage; // 0x30

	// Properties
	public string userName { get; }
	public string id { get; }
	public string AvatarURL { get; }

	// Methods

	// RVA: 0xCC159C Offset: 0xCBD59C VA: 0xCC159C
	internal void .ctor(string displayName, string playerId, string avatarUrl) { }

	// RVA: 0xCC1AA4 Offset: 0xCBDAA4 VA: 0xCC1AA4
	protected void ResetIdentity(string displayName, string playerId, string avatarUrl) { }

	// RVA: 0xCC31E4 Offset: 0xCBF1E4 VA: 0xCC31E4 Slot: 4
	public string get_userName() { }

	// RVA: 0xCC31EC Offset: 0xCBF1EC VA: 0xCC31EC Slot: 5
	public string get_id() { }

	// RVA: 0xCC31F4 Offset: 0xCBF1F4 VA: 0xCC31F4
	public string get_AvatarURL() { }

	// RVA: 0xCC31FC Offset: 0xCBF1FC VA: 0xCC31FC Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0xCC331C Offset: 0xCBF31C VA: 0xCC331C Slot: 2
	public override int GetHashCode() { }

	// RVA: 0xCC33CC Offset: 0xCBF3CC VA: 0xCC33CC Slot: 3
	public override string ToString() { }

	// RVA: 0xCC3114 Offset: 0xCBF114 VA: 0xCC3114
	private void setAvatarUrl(string avatarUrl) { }
}


// Namespace: GooglePlayGames
internal class PlayGamesClientFactory // TypeDefIndex: 7367
{
	// Methods

	// RVA: 0xCC1E40 Offset: 0xCBDE40 VA: 0xCC1E40
	internal static IPlayGamesClient GetPlatformPlayGamesClient() { }
}


// Namespace: 
private enum AndroidClient.AuthState // TypeDefIndex: 7368
{
	// Fields
	public int value__; // 0x0
	public const AndroidClient.AuthState Unauthenticated = 0;
	public const AndroidClient.AuthState Authenticated = 1;
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class AndroidClient.<>c // TypeDefIndex: 7369
{
	// Fields
	public static readonly AndroidClient.<>c <>9; // 0x0
	public static Action<Achievement[]> <>9__20_1; // 0x8

	// Methods

	// RVA: 0xCC627C Offset: 0xCC227C VA: 0xCC627C
	private static void .cctor() { }

	// RVA: 0xCC62D8 Offset: 0xCC22D8 VA: 0xCC62D8
	public void .ctor() { }

	// RVA: 0xCC62E0 Offset: 0xCC22E0 VA: 0xCC62E0
	internal void <SignInOnResult>b__20_1(Achievement[] ignore) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class AndroidClient.<>c__26<T> // TypeDefIndex: 7370
{
	// Fields
	public static readonly AndroidClient.<>c__26<T> <>9; // 0x0
	public static Action<T> <>9__26_0; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB8A04 Offset: 0xBB4A04 VA: 0xBB8A04
	|-AndroidClient.<>c__26<__Il2CppFullySharedGenericType>..cctor
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB8AC0 Offset: 0xBB4AC0 VA: 0xBB8AC0
	|-AndroidClient.<>c__26<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal void <AsOnGameThreadCallback>b__26_0(T <p0>) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB8AC8 Offset: 0xBB4AC8 VA: 0xBB8AC8
	|-AndroidClient.<>c__26<__Il2CppFullySharedGenericType>.<AsOnGameThreadCallback>b__26_0
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class AndroidClient.<>c__DisplayClass19_0 // TypeDefIndex: 7371
{
	// Fields
	public AndroidClient <>4__this; // 0x10
	public Action<SignInStatus> callback; // 0x18

	// Methods

	// RVA: 0xCC4180 Offset: 0xCC0180 VA: 0xCC4180
	public void .ctor() { }

	// RVA: 0xCC62E4 Offset: 0xCC22E4 VA: 0xCC62E4
	internal void <Authenticate>b__0(AndroidJavaObject authenticationResult) { }

	// RVA: 0xCC63E0 Offset: 0xCC23E0 VA: 0xCC63E0
	internal void <Authenticate>b__1(AndroidJavaObject exception) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class AndroidClient.<>c__DisplayClass20_0 // TypeDefIndex: 7372
{
	// Fields
	public AndroidClient <>4__this; // 0x10
	public Action<SignInStatus> callback; // 0x18
	public AndroidJavaObject taskGetPlayer; // 0x20

	// Methods

	// RVA: 0xCC4CB0 Offset: 0xCC0CB0 VA: 0xCC4CB0
	public void .ctor() { }

	// RVA: 0xCC6544 Offset: 0xCC2544 VA: 0xCC6544
	internal void <SignInOnResult>b__0(AndroidJavaObject completeTask) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class AndroidClient.<>c__DisplayClass26_0<T> // TypeDefIndex: 7373
{
	// Fields
	public Action<T> callback; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBA4A4 Offset: 0xBB64A4 VA: 0xBBA4A4
	|-AndroidClient.<>c__DisplayClass26_0<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal void <AsOnGameThreadCallback>b__1(T result) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBA4AC Offset: 0xBB64AC VA: 0xBBA4AC
	|-AndroidClient.<>c__DisplayClass26_0<__Il2CppFullySharedGenericType>.<AsOnGameThreadCallback>b__1
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class AndroidClient.<>c__DisplayClass28_0<T> // TypeDefIndex: 7374
{
	// Fields
	public Action<T> callback; // 0x0
	public T data; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBA5E8 Offset: 0xBB65E8 VA: 0xBBA5E8
	|-AndroidClient.<>c__DisplayClass28_0<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal void <InvokeCallbackOnGameThread>b__0() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBA5F0 Offset: 0xBB65F0 VA: 0xBBA5F0
	|-AndroidClient.<>c__DisplayClass28_0<__Il2CppFullySharedGenericType>.<InvokeCallbackOnGameThread>b__0
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class AndroidClient.<>c__DisplayClass48_0 // TypeDefIndex: 7375
{
	// Fields
	public Action<Achievement[]> callback; // 0x10

	// Methods

	// RVA: 0xCC5384 Offset: 0xCC1384 VA: 0xCC5384
	public void .ctor() { }

	// RVA: 0xCC7518 Offset: 0xCC3518 VA: 0xCC7518
	internal void <LoadAchievements>b__0(AndroidJavaObject annotatedData) { }

	// RVA: 0xCC83A8 Offset: 0xCC43A8 VA: 0xCC83A8
	internal void <LoadAchievements>b__1(AndroidJavaObject exception) { }
}


// Namespace: GooglePlayGames.Android
public class AndroidClient : IPlayGamesClient // TypeDefIndex: 7376
{
	// Fields
	private readonly object GameServicesLock; // 0x10
	private readonly object AuthStateLock; // 0x18
	private static readonly string PlayGamesSdkClassName; // 0x0
	private ISavedGameClient mSavedGameClient; // 0x20
	private IEventsClient mEventsClient; // 0x28
	private Player mUser; // 0x30
	private AndroidClient.AuthState mAuthState; // 0x38
	private IUserProfile[] mFriends; // 0x40
	private AndroidJavaClass mGamesClass; // 0x48
	private static string TasksClassName; // 0x8
	private readonly int mLeaderboardMaxResults; // 0x50
	private readonly int mFriendsMaxResults; // 0x54

	// Methods

	// RVA: 0xCC3420 Offset: 0xCBF420 VA: 0xCC3420
	internal void .ctor() { }

	// RVA: 0xCC3720 Offset: 0xCBF720 VA: 0xCC3720
	private static void InitializeSdk() { }

	// RVA: 0xCC3B4C Offset: 0xCBFB4C VA: 0xCC3B4C Slot: 4
	public void Authenticate(Action<SignInStatus> callback) { }

	// RVA: 0xCC4174 Offset: 0xCC0174 VA: 0xCC4174 Slot: 5
	public void ManuallyAuthenticate(Action<SignInStatus> callback) { }

	// RVA: 0xCC3B58 Offset: 0xCBFB58 VA: 0xCC3B58
	private void Authenticate(bool isAutoSignIn, Action<SignInStatus> callback) { }

	// RVA: 0xCC43F4 Offset: 0xCC03F4 VA: 0xCC43F4
	private void SignInOnResult(bool isAuthenticated, Action<SignInStatus> callback) { }

	// RVA: -1 Offset: -1
	private static Action<T> AsOnGameThreadCallback<T>(Action<T> callback) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6C4B0 Offset: 0xB684B0 VA: 0xB6C4B0
	|-AndroidClient.AsOnGameThreadCallback<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	private static void InvokeCallbackOnGameThread<T>(Action<T> callback, T data) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6C62C Offset: 0xB6862C VA: 0xB6C62C
	|-AndroidClient.InvokeCallbackOnGameThread<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0xCC4DA0 Offset: 0xCC0DA0 VA: 0xCC4DA0 Slot: 6
	public bool IsAuthenticated() { }

	// RVA: 0xCC4E70 Offset: 0xCC0E70 VA: 0xCC4E70 Slot: 7
	public string GetUserId() { }

	// RVA: 0xCC4EB0 Offset: 0xCC0EB0 VA: 0xCC4EB0 Slot: 8
	public string GetUserDisplayName() { }

	// RVA: 0xCC4EF0 Offset: 0xCC0EF0 VA: 0xCC4EF0 Slot: 9
	public string GetUserImageUrl() { }

	// RVA: 0xCC4F30 Offset: 0xCC0F30 VA: 0xCC4F30 Slot: 10
	public void LoadAchievements(Action<Achievement[]> callback) { }

	// RVA: 0xCC5474 Offset: 0xCC1474 VA: 0xCC5474 Slot: 11
	public void UnlockAchievement(string achId, Action<bool> callback) { }

	// RVA: 0xCC570C Offset: 0xCC170C VA: 0xCC570C Slot: 12
	public void RevealAchievement(string achId, Action<bool> callback) { }

	// RVA: 0xCC59A4 Offset: 0xCC19A4 VA: 0xCC59A4 Slot: 13
	public void SetStepsAtLeast(string achId, int steps, Action<bool> callback) { }

	// RVA: 0xCC5CB4 Offset: 0xCC1CB4 VA: 0xCC5CB4 Slot: 14
	public void ShowAchievementsUI(Action<UIStatus> callback) { }

	// RVA: 0xCC538C Offset: 0xCC138C VA: 0xCC538C
	private AndroidJavaObject getAchievementsClient() { }

	// RVA: 0xCC4CB8 Offset: 0xCC0CB8 VA: 0xCC4CB8
	private AndroidJavaObject getPlayersClient() { }

	// RVA: 0xCC4188 Offset: 0xCC0188 VA: 0xCC4188
	private AndroidJavaObject getGamesSignInClient() { }

	// RVA: 0xCC61F0 Offset: 0xCC21F0 VA: 0xCC61F0
	private static void .cctor() { }
}


// Namespace: GooglePlayGames.Android
internal class AndroidEventsClient : IEventsClient // TypeDefIndex: 7377
{
	// Fields
	private AndroidJavaObject mEventsClient; // 0x10

	// Methods

	// RVA: 0xCC72AC Offset: 0xCC32AC VA: 0xCC72AC
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class AndroidHelperFragment.<>c__DisplayClass3_0 // TypeDefIndex: 7378
{
	// Fields
	public Action<UIStatus> cb; // 0x10

	// Methods

	// RVA: 0xCC855C Offset: 0xCC455C VA: 0xCC855C
	public void .ctor() { }

	// RVA: 0xCC8564 Offset: 0xCC4564 VA: 0xCC8564
	internal void <ShowAchievementsUI>b__0(int uiCode) { }

	// RVA: 0xCC862C Offset: 0xCC462C VA: 0xCC862C
	internal void <ShowAchievementsUI>b__1(AndroidJavaObject exception) { }
}


// Namespace: GooglePlayGames.Android
internal class AndroidHelperFragment // TypeDefIndex: 7379
{
	// Methods

	// RVA: 0xCC3968 Offset: 0xCBF968 VA: 0xCC3968
	public static AndroidJavaObject GetActivity() { }

	// RVA: 0xCC5D84 Offset: 0xCC1D84 VA: 0xCC5D84
	public static void ShowAchievementsUI(Action<UIStatus> cb) { }
}


// Namespace: GooglePlayGames.Android
internal class AndroidJavaConverter // TypeDefIndex: 7380
{
	// Methods

	// RVA: 0xCC821C Offset: 0xCC421C VA: 0xCC821C
	internal static DateTime ToDateTime(long milliseconds) { }

	// RVA: 0xCC6E24 Offset: 0xCC2E24 VA: 0xCC6E24
	internal static Player ToPlayer(AndroidJavaObject player) { }
}


// Namespace: 
private class AndroidNearbyConnectionClient.AdvertisingConnectionLifecycleCallbackProxy : AndroidJavaProxy // TypeDefIndex: 7381
{
	// Fields
	private Action<AdvertisingResult> mResultCallback; // 0x20
	private Action<ConnectionRequest> mConnectionRequestCallback; // 0x28
	private AndroidNearbyConnectionClient mClient; // 0x30
	private string mLocalEndpointName; // 0x38

	// Methods

	// RVA: 0xCC9024 Offset: 0xCC5024 VA: 0xCC9024
	public void .ctor(Action<AdvertisingResult> resultCallback, Action<ConnectionRequest> connectionRequestCallback, AndroidNearbyConnectionClient client) { }

	// RVA: 0xCC90BC Offset: 0xCC50BC VA: 0xCC90BC
	public void onConnectionInitiated(string endpointId, AndroidJavaObject connectionInfo) { }

	// RVA: 0xCC934C Offset: 0xCC534C VA: 0xCC934C
	public void onConnectionResult(string endpointId, AndroidJavaObject connectionResolution) { }

	// RVA: 0xCC96E4 Offset: 0xCC56E4 VA: 0xCC96E4
	public void onDisconnected(string endpointId) { }
}


// Namespace: 
private class AndroidNearbyConnectionClient.PayloadCallback : AndroidJavaProxy // TypeDefIndex: 7382
{
	// Fields
	private IMessageListener mListener; // 0x20

	// Methods

	// RVA: 0xCC97A4 Offset: 0xCC57A4 VA: 0xCC97A4
	public void .ctor(IMessageListener listener) { }

	// RVA: 0xCC9828 Offset: 0xCC5828 VA: 0xCC9828
	public void onPayloadReceived(string endpointId, AndroidJavaObject payload) { }
}


// Namespace: 
private class AndroidNearbyConnectionClient.DiscoveringConnectionLifecycleCallback : AndroidJavaProxy // TypeDefIndex: 7383
{
	// Fields
	private Action<ConnectionResponse> mResponseCallback; // 0x20
	private IMessageListener mListener; // 0x28
	private AndroidJavaObject mClient; // 0x30

	// Methods

	// RVA: 0xCC9A30 Offset: 0xCC5A30 VA: 0xCC9A30
	public void .ctor(Action<ConnectionResponse> responseCallback, IMessageListener listener, AndroidJavaObject client) { }

	// RVA: 0xCC9AC8 Offset: 0xCC5AC8 VA: 0xCC9AC8
	public void onConnectionInitiated(string endpointId, AndroidJavaObject connectionInfo) { }

	// RVA: 0xCC9E3C Offset: 0xCC5E3C VA: 0xCC9E3C
	public void onConnectionResult(string endpointId, AndroidJavaObject connectionResolution) { }

	// RVA: 0xCCA374 Offset: 0xCC6374 VA: 0xCCA374
	public void onDisconnected(string endpointId) { }
}


// Namespace: 
private class AndroidNearbyConnectionClient.EndpointDiscoveryCallback : AndroidJavaProxy // TypeDefIndex: 7384
{
	// Fields
	private IDiscoveryListener mListener; // 0x20

	// Methods

	// RVA: 0xCCA420 Offset: 0xCC6420 VA: 0xCCA420
	public void .ctor(IDiscoveryListener listener) { }

	// RVA: 0xCCA4A4 Offset: 0xCC64A4 VA: 0xCCA4A4
	public void onEndpointFound(string endpointId, AndroidJavaObject endpointInfo) { }

	// RVA: 0xCCA71C Offset: 0xCC671C VA: 0xCCA71C
	public void onEndpointLost(string endpointId) { }

	// RVA: 0xCCA598 Offset: 0xCC6598 VA: 0xCCA598
	private EndpointDetails CreateEndPointDetails(string endpointId, AndroidJavaObject endpointInfo) { }
}


// Namespace: GooglePlayGames.Android
public class AndroidNearbyConnectionClient // TypeDefIndex: 7385
{
	// Fields
	private static readonly long NearbyClientId; // 0x0
	private static readonly int ApplicationInfoFlags; // 0x8
	private static readonly string ServiceId; // 0x10
	protected IMessageListener mAdvertisingMessageListener; // 0x10

	// Methods

	// RVA: 0xCC86CC Offset: 0xCC46CC VA: 0xCC86CC Slot: 4
	public string GetServiceId() { }

	// RVA: 0xCC8724 Offset: 0xCC4724 VA: 0xCC8724
	private static string ReadServiceId() { }

	// RVA: 0xCC8FC4 Offset: 0xCC4FC4 VA: 0xCC8FC4
	private static void .cctor() { }
}


// Namespace: GooglePlayGames.Android
internal class AndroidSavedGameClient : ISavedGameClient // TypeDefIndex: 7386
{
	// Fields
	private static readonly Regex ValidFilenameRegex; // 0x0
	private AndroidJavaObject mSnapshotsClient; // 0x10
	private AndroidClient mAndroidClient; // 0x18

	// Methods

	// RVA: 0xCC7034 Offset: 0xCC3034 VA: 0xCC7034
	public void .ctor(AndroidClient androidClient) { }

	// RVA: 0xCCA86C Offset: 0xCC686C VA: 0xCCA86C
	private static void .cctor() { }
}


// Namespace: 
private class AndroidTaskUtils.TaskOnCompleteProxy<T> : AndroidJavaProxy // TypeDefIndex: 7387
{
	// Fields
	private Action<T> mCallback; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(Action<T> callback) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC6088C Offset: 0xC5C88C VA: 0xC6088C
	|-AndroidTaskUtils.TaskOnCompleteProxy<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	public void onComplete(T result) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC60910 Offset: 0xC5C910 VA: 0xC60910
	|-AndroidTaskUtils.TaskOnCompleteProxy<__Il2CppFullySharedGenericType>.onComplete
	*/
}


// Namespace: 
private class AndroidTaskUtils.TaskOnSuccessProxy<T> : AndroidJavaProxy // TypeDefIndex: 7388
{
	// Fields
	private Action<T> mCallback; // 0x0
	private bool mDisposeResult; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(Action<T> callback, bool disposeResult) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC60C44 Offset: 0xC5CC44 VA: 0xC60C44
	|-AndroidTaskUtils.TaskOnSuccessProxy<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	public void onSuccess(T result) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC60CD4 Offset: 0xC5CCD4 VA: 0xC60CD4
	|-AndroidTaskUtils.TaskOnSuccessProxy<__Il2CppFullySharedGenericType>.onSuccess
	*/
}


// Namespace: 
private class AndroidTaskUtils.TaskOnFailedProxy : AndroidJavaProxy // TypeDefIndex: 7389
{
	// Fields
	private Action<AndroidJavaObject> mCallback; // 0x20

	// Methods

	// RVA: 0xCCA8FC Offset: 0xCC68FC VA: 0xCCA8FC
	public void .ctor(Action<AndroidJavaObject> callback) { }

	// RVA: 0xCCA980 Offset: 0xCC6980 VA: 0xCCA980
	public void onFailure(AndroidJavaObject exception) { }
}


// Namespace: GooglePlayGames.Android
internal class AndroidTaskUtils // TypeDefIndex: 7390
{
	// Methods

	// RVA: -1 Offset: -1
	public static void AddOnSuccessListener<T>(AndroidJavaObject task, Action<T> callback) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB74444 Offset: 0xB70444 VA: 0xB74444
	|-AndroidTaskUtils.AddOnSuccessListener<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0xCC4270 Offset: 0xCC0270 VA: 0xCC4270
	public static void AddOnFailureListener(AndroidJavaObject task, Action<AndroidJavaObject> callback) { }

	// RVA: -1 Offset: -1
	public static void AddOnCompleteListener<T>(AndroidJavaObject task, Action<T> callback) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB742A8 Offset: 0xB702A8 VA: 0xB742A8
	|-AndroidTaskUtils.AddOnCompleteListener<__Il2CppFullySharedGenericType>
	*/
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class Logger.<>c // TypeDefIndex: 7391
{
	// Fields
	public static readonly Logger.<>c <>9; // 0x0
	public static Action <>9__12_0; // 0x8

	// Methods

	// RVA: 0xCCB064 Offset: 0xCC7064 VA: 0xCCB064
	private static void .cctor() { }

	// RVA: 0xCCB0C0 Offset: 0xCC70C0 VA: 0xCCB0C0
	public void .ctor() { }

	// RVA: 0xCCB0C8 Offset: 0xCC70C8 VA: 0xCCB0C8
	internal void <ToLogMessage>b__12_0() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class Logger.<>c__DisplayClass10_0 // TypeDefIndex: 7392
{
	// Fields
	public string msg; // 0x10

	// Methods

	// RVA: 0xCCAD1C Offset: 0xCC6D1C VA: 0xCCAD1C
	public void .ctor() { }

	// RVA: 0xCCB130 Offset: 0xCC7130 VA: 0xCCB130
	internal void <e>b__0() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class Logger.<>c__DisplayClass8_0 // TypeDefIndex: 7393
{
	// Fields
	public string msg; // 0x10

	// Methods

	// RVA: 0xCCAB58 Offset: 0xCC6B58 VA: 0xCCAB58
	public void .ctor() { }

	// RVA: 0xCCB1F8 Offset: 0xCC71F8 VA: 0xCCB1F8
	internal void <d>b__0() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class Logger.<>c__DisplayClass9_0 // TypeDefIndex: 7394
{
	// Fields
	public string msg; // 0x10

	// Methods

	// RVA: 0xCCAD14 Offset: 0xCC6D14 VA: 0xCCAD14
	public void .ctor() { }

	// RVA: 0xCCB2CC Offset: 0xCC72CC VA: 0xCCB2CC
	internal void <w>b__0() { }
}


// Namespace: GooglePlayGames.OurUtils
public class Logger // TypeDefIndex: 7395
{
	// Fields
	private static bool debugLogEnabled; // 0x0
	private static bool warningLogEnabled; // 0x1

	// Properties
	public static bool DebugLogEnabled { set; }

	// Methods

	// RVA: 0xCCAAF8 Offset: 0xCC6AF8 VA: 0xCCAAF8
	public static void set_DebugLogEnabled(bool value) { }

	// RVA: 0xCC1D34 Offset: 0xCBDD34 VA: 0xCC1D34
	public static void d(string msg) { }

	// RVA: 0xCC2EE4 Offset: 0xCBEEE4 VA: 0xCC2EE4
	public static void w(string msg) { }

	// RVA: 0xCC218C Offset: 0xCBE18C VA: 0xCC218C
	public static void e(string msg) { }

	// RVA: 0xCCAD24 Offset: 0xCC6D24 VA: 0xCCAD24
	private static string ToLogMessage(string prefix, string logType, string msg) { }

	// RVA: 0xCCB018 Offset: 0xCC7018 VA: 0xCCB018
	private static void .cctor() { }
}


// Namespace: GooglePlayGames.OurUtils
public static class Misc // TypeDefIndex: 7396
{
	// Methods

	// RVA: -1 Offset: -1
	public static T CheckNotNull<T>(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA00C4 Offset: 0xB9C0C4 VA: 0xBA00C4
	|-Misc.CheckNotNull<__Il2CppFullySharedGenericType>
	*/
}


// Namespace: GooglePlayGames.OurUtils
public class NearbyHelperObject : MonoBehaviour // TypeDefIndex: 7397
{
	// Fields
	private static NearbyHelperObject instance; // 0x0
	private static double mAdvertisingRemaining; // 0x8
	private static double mDiscoveryRemaining; // 0x10
	private static INearbyConnectionClient mClient; // 0x18

	// Methods

	// RVA: 0xCCB394 Offset: 0xCC7394 VA: 0xCCB394
	public static void CreateObject(INearbyConnectionClient client) { }

	// RVA: 0xCCB510 Offset: 0xCC7510 VA: 0xCCB510
	private static double ToSeconds(Nullable<TimeSpan> span) { }

	// RVA: 0xCCB630 Offset: 0xCC7630 VA: 0xCCB630
	public static void StartAdvertisingTimer(Nullable<TimeSpan> span) { }

	// RVA: 0xCCB694 Offset: 0xCC7694 VA: 0xCCB694
	public static void StartDiscoveryTimer(Nullable<TimeSpan> span) { }

	// RVA: 0xCCB6F8 Offset: 0xCC76F8 VA: 0xCCB6F8
	public void Awake() { }

	// RVA: 0xCCB764 Offset: 0xCC7764 VA: 0xCCB764
	public void OnDisable() { }

	// RVA: 0xCCB7FC Offset: 0xCC77FC VA: 0xCCB7FC
	public void Update() { }

	// RVA: 0xCCB508 Offset: 0xCC7508 VA: 0xCCB508
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class PlayGamesHelperObject.<>c__DisplayClass10_0 // TypeDefIndex: 7398
{
	// Fields
	public IEnumerator action; // 0x10

	// Methods

	// RVA: 0xCCBCD0 Offset: 0xCC7CD0 VA: 0xCCBCD0
	public void .ctor() { }

	// RVA: 0xCCC954 Offset: 0xCC8954 VA: 0xCCC954
	internal void <RunCoroutine>b__0() { }
}


// Namespace: GooglePlayGames.OurUtils
public class PlayGamesHelperObject : MonoBehaviour // TypeDefIndex: 7399
{
	// Fields
	private static PlayGamesHelperObject instance; // 0x0
	private static bool sIsDummy; // 0x8
	private static List<Action> sQueue; // 0x10
	private List<Action> localQueue; // 0x20
	private static bool sQueueEmpty; // 0x18
	private static List<Action<bool>> sPauseCallbackList; // 0x20
	private static List<Action<bool>> sFocusCallbackList; // 0x28

	// Methods

	// RVA: 0xCC3574 Offset: 0xCBF574 VA: 0xCC3574
	public static void CreateObject() { }

	// RVA: 0xCCBA80 Offset: 0xCC7A80 VA: 0xCCBA80
	public void Awake() { }

	// RVA: 0xCCBAEC Offset: 0xCC7AEC VA: 0xCCBAEC
	public void OnDisable() { }

	// RVA: 0xCCBBA0 Offset: 0xCC7BA0 VA: 0xCCBBA0
	public static void RunCoroutine(IEnumerator action) { }

	// RVA: 0xCCAB60 Offset: 0xCC6B60 VA: 0xCCAB60
	public static void RunOnGameThread(Action action) { }

	// RVA: 0xCCBCD8 Offset: 0xCC7CD8 VA: 0xCCBCD8
	public void Update() { }

	// RVA: 0xCCBFB4 Offset: 0xCC7FB4 VA: 0xCCBFB4
	public void OnApplicationFocus(bool focused) { }

	// RVA: 0xCCC2A0 Offset: 0xCC82A0 VA: 0xCCC2A0
	public void OnApplicationPause(bool paused) { }

	// RVA: 0xCCC58C Offset: 0xCC858C VA: 0xCCC58C
	public static void AddFocusCallback(Action<bool> callback) { }

	// RVA: 0xCCC65C Offset: 0xCC865C VA: 0xCCC65C
	public static bool RemoveFocusCallback(Action<bool> callback) { }

	// RVA: 0xCCC6DC Offset: 0xCC86DC VA: 0xCCC6DC
	public static void AddPauseCallback(Action<bool> callback) { }

	// RVA: 0xCCC7AC Offset: 0xCC87AC VA: 0xCCC7AC
	public static bool RemovePauseCallback(Action<bool> callback) { }

	// RVA: 0xCCBA04 Offset: 0xCC7A04 VA: 0xCCBA04
	public void .ctor() { }

	// RVA: 0xCCC82C Offset: 0xCC882C VA: 0xCCC82C
	private static void .cctor() { }
}


// Namespace: GooglePlayGames.BasicApi
public class Achievement // TypeDefIndex: 7400
{
	// Fields
	private static readonly DateTime UnixEpoch; // 0x0
	private string mId; // 0x10
	private bool mIsIncremental; // 0x18
	private bool mIsRevealed; // 0x19
	private bool mIsUnlocked; // 0x1A
	private int mCurrentSteps; // 0x1C
	private int mTotalSteps; // 0x20
	private string mDescription; // 0x28
	private string mName; // 0x30
	private long mLastModifiedTime; // 0x38
	private ulong mPoints; // 0x40
	private string mRevealedImageUrl; // 0x48
	private string mUnlockedImageUrl; // 0x50

	// Properties
	public bool IsIncremental { get; set; }
	public int CurrentSteps { get; set; }
	public int TotalSteps { get; set; }
	public bool IsUnlocked { get; set; }
	public bool IsRevealed { get; set; }
	public string Id { get; set; }
	public string Description { get; set; }
	public string Name { get; set; }
	public DateTime LastModifiedTime { get; set; }
	public ulong Points { get; set; }
	public string RevealedImageUrl { get; set; }
	public string UnlockedImageUrl { get; set; }

	// Methods

	// RVA: 0xCCC9C0 Offset: 0xCC89C0 VA: 0xCCC9C0 Slot: 3
	public override string ToString() { }

	// RVA: 0xCC81C0 Offset: 0xCC41C0 VA: 0xCC81C0
	public void .ctor() { }

	// RVA: 0xCCCC68 Offset: 0xCC8C68 VA: 0xCCCC68
	public bool get_IsIncremental() { }

	// RVA: 0xCCCC70 Offset: 0xCC8C70 VA: 0xCCCC70
	public void set_IsIncremental(bool value) { }

	// RVA: 0xCCCC7C Offset: 0xCC8C7C VA: 0xCCCC7C
	public int get_CurrentSteps() { }

	// RVA: 0xCCCC84 Offset: 0xCC8C84 VA: 0xCCCC84
	public void set_CurrentSteps(int value) { }

	// RVA: 0xCCCC8C Offset: 0xCC8C8C VA: 0xCCCC8C
	public int get_TotalSteps() { }

	// RVA: 0xCCCC94 Offset: 0xCC8C94 VA: 0xCCCC94
	public void set_TotalSteps(int value) { }

	// RVA: 0xCCCC9C Offset: 0xCC8C9C VA: 0xCCCC9C
	public bool get_IsUnlocked() { }

	// RVA: 0xCCCCA4 Offset: 0xCC8CA4 VA: 0xCCCCA4
	public void set_IsUnlocked(bool value) { }

	// RVA: 0xCCCCB0 Offset: 0xCC8CB0 VA: 0xCCCCB0
	public bool get_IsRevealed() { }

	// RVA: 0xCCCCB8 Offset: 0xCC8CB8 VA: 0xCCCCB8
	public void set_IsRevealed(bool value) { }

	// RVA: 0xCCCCC4 Offset: 0xCC8CC4 VA: 0xCCCCC4
	public string get_Id() { }

	// RVA: 0xCCCCCC Offset: 0xCC8CCC VA: 0xCCCCCC
	public void set_Id(string value) { }

	// RVA: 0xCCCCD4 Offset: 0xCC8CD4 VA: 0xCCCCD4
	public string get_Description() { }

	// RVA: 0xCCCCDC Offset: 0xCC8CDC VA: 0xCCCCDC
	public void set_Description(string value) { }

	// RVA: 0xCCCCE4 Offset: 0xCC8CE4 VA: 0xCCCCE4
	public string get_Name() { }

	// RVA: 0xCCCCEC Offset: 0xCC8CEC VA: 0xCCCCEC
	public void set_Name(string value) { }

	// RVA: 0xCC1458 Offset: 0xCBD458 VA: 0xCC1458
	public DateTime get_LastModifiedTime() { }

	// RVA: 0xCC82B0 Offset: 0xCC42B0 VA: 0xCC82B0
	public void set_LastModifiedTime(DateTime value) { }

	// RVA: 0xCCCCF4 Offset: 0xCC8CF4 VA: 0xCCCCF4
	public ulong get_Points() { }

	// RVA: 0xCCCCFC Offset: 0xCC8CFC VA: 0xCCCCFC
	public void set_Points(ulong value) { }

	// RVA: 0xCCCD04 Offset: 0xCC8D04 VA: 0xCCCD04
	public string get_RevealedImageUrl() { }

	// RVA: 0xCCCD0C Offset: 0xCC8D0C VA: 0xCCCD0C
	public void set_RevealedImageUrl(string value) { }

	// RVA: 0xCCCD14 Offset: 0xCC8D14 VA: 0xCCCD14
	public string get_UnlockedImageUrl() { }

	// RVA: 0xCCCD1C Offset: 0xCC8D1C VA: 0xCCCD1C
	public void set_UnlockedImageUrl(string value) { }

	// RVA: 0xCCCD24 Offset: 0xCC8D24 VA: 0xCCCD24
	private static void .cctor() { }
}


// Namespace: GooglePlayGames.BasicApi
public enum ResponseStatus // TypeDefIndex: 7401
{
	// Fields
	public int value__; // 0x0
	public const ResponseStatus Success = 1;
	public const ResponseStatus SuccessWithStale = 2;
	public const ResponseStatus LicenseCheckFailed = -1;
	public const ResponseStatus InternalError = -2;
	public const ResponseStatus NotAuthorized = -3;
	public const ResponseStatus VersionUpdateRequired = -4;
	public const ResponseStatus Timeout = -5;
	public const ResponseStatus ResolutionRequired = -6;
}


// Namespace: GooglePlayGames.BasicApi
public enum UIStatus // TypeDefIndex: 7402
{
	// Fields
	public int value__; // 0x0
	public const UIStatus Valid = 1;
	public const UIStatus InternalError = -2;
	public const UIStatus NotAuthorized = -3;
	public const UIStatus VersionUpdateRequired = -4;
	public const UIStatus Timeout = -5;
	public const UIStatus UserClosedUI = -6;
	public const UIStatus UiBusy = -12;
	public const UIStatus NetworkError = -20;
}


// Namespace: GooglePlayGames.BasicApi
public class DummyClient : IPlayGamesClient // TypeDefIndex: 7403
{
	// Methods

	// RVA: 0xCCCDA8 Offset: 0xCC8DA8 VA: 0xCCCDA8 Slot: 4
	public void Authenticate(Action<SignInStatus> callback) { }

	// RVA: 0xCCCE48 Offset: 0xCC8E48 VA: 0xCCCE48 Slot: 5
	public void ManuallyAuthenticate(Action<SignInStatus> callback) { }

	// RVA: 0xCCCE84 Offset: 0xCC8E84 VA: 0xCCCE84 Slot: 6
	public bool IsAuthenticated() { }

	// RVA: 0xCCCE98 Offset: 0xCC8E98 VA: 0xCCCE98 Slot: 7
	public string GetUserId() { }

	// RVA: 0xCCCEDC Offset: 0xCC8EDC VA: 0xCCCEDC Slot: 8
	public string GetUserDisplayName() { }

	// RVA: 0xCCCF20 Offset: 0xCC8F20 VA: 0xCCCF20 Slot: 9
	public string GetUserImageUrl() { }

	// RVA: 0xCCCF34 Offset: 0xCC8F34 VA: 0xCCCF34 Slot: 10
	public void LoadAchievements(Action<Achievement[]> callback) { }

	// RVA: 0xCCCF64 Offset: 0xCC8F64 VA: 0xCCCF64 Slot: 11
	public void UnlockAchievement(string achId, Action<bool> callback) { }

	// RVA: 0xCCCF9C Offset: 0xCC8F9C VA: 0xCCCF9C Slot: 12
	public void RevealAchievement(string achId, Action<bool> callback) { }

	// RVA: 0xCCCFD4 Offset: 0xCC8FD4 VA: 0xCCCFD4 Slot: 13
	public void SetStepsAtLeast(string achId, int steps, Action<bool> callback) { }

	// RVA: 0xCCD00C Offset: 0xCC900C VA: 0xCCD00C Slot: 14
	public void ShowAchievementsUI(Action<UIStatus> callback) { }

	// RVA: 0xCCCDE4 Offset: 0xCC8DE4 VA: 0xCCCDE4
	private static void LogUsage() { }

	// RVA: 0xCC3418 Offset: 0xCBF418 VA: 0xCC3418
	public void .ctor() { }
}


// Namespace: GooglePlayGames.BasicApi
public interface IPlayGamesClient // TypeDefIndex: 7404
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Authenticate(Action<SignInStatus> callback);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void ManuallyAuthenticate(Action<SignInStatus> callback);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract bool IsAuthenticated();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract string GetUserId();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract string GetUserDisplayName();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract string GetUserImageUrl();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void LoadAchievements(Action<Achievement[]> callback);

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void UnlockAchievement(string achievementId, Action<bool> successOrFailureCalllback);

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void RevealAchievement(string achievementId, Action<bool> successOrFailureCalllback);

	// RVA: -1 Offset: -1 Slot: 9
	public abstract void SetStepsAtLeast(string achId, int steps, Action<bool> callback);

	// RVA: -1 Offset: -1 Slot: 10
	public abstract void ShowAchievementsUI(Action<UIStatus> callback);
}


// Namespace: GooglePlayGames.BasicApi
public class Player : PlayGamesUserProfile // TypeDefIndex: 7405
{
	// Methods

	// RVA: 0xCC86C8 Offset: 0xCC46C8 VA: 0xCC86C8
	internal void .ctor(string displayName, string playerId, string avatarUrl) { }
}


// Namespace: GooglePlayGames.BasicApi
public class PlayerStats // TypeDefIndex: 7406
{
	// Fields
	private static float UNSET_VALUE; // 0x0

	// Methods

	// RVA: 0xCCD048 Offset: 0xCC9048 VA: 0xCCD048
	private static void .cctor() { }
}


// Namespace: GooglePlayGames.BasicApi
public enum SignInStatus // TypeDefIndex: 7407
{
	// Fields
	public int value__; // 0x0
	public const SignInStatus Success = 0;
	public const SignInStatus InternalError = 1;
	public const SignInStatus Canceled = 2;
}


// Namespace: GooglePlayGames.BasicApi.SavedGame
public interface ISavedGameClient // TypeDefIndex: 7408
{}


// Namespace: GooglePlayGames.BasicApi.Nearby
public struct AdvertisingResult // TypeDefIndex: 7409
{
	// Fields
	private readonly ResponseStatus mStatus; // 0x0
	private readonly string mLocalEndpointName; // 0x8

	// Methods

	// RVA: 0xCC9670 Offset: 0xCC5670 VA: 0xCC9670
	public void .ctor(ResponseStatus status, string localEndpointName) { }
}


// Namespace: GooglePlayGames.BasicApi.Nearby
public struct ConnectionRequest // TypeDefIndex: 7410
{
	// Fields
	private readonly EndpointDetails mRemoteEndpoint; // 0x0
	private readonly byte[] mPayload; // 0x18

	// Methods

	// RVA: 0xCC9260 Offset: 0xCC5260 VA: 0xCC9260
	public void .ctor(string remoteEndpointId, string remoteEndpointName, string serviceId, byte[] payload) { }
}


// Namespace: 
public enum ConnectionResponse.Status // TypeDefIndex: 7411
{
	// Fields
	public int value__; // 0x0
	public const ConnectionResponse.Status Accepted = 0;
	public const ConnectionResponse.Status Rejected = 1;
	public const ConnectionResponse.Status ErrorInternal = 2;
	public const ConnectionResponse.Status ErrorNetworkNotConnected = 3;
	public const ConnectionResponse.Status ErrorEndpointNotConnected = 4;
	public const ConnectionResponse.Status ErrorAlreadyConnected = 5;
}


// Namespace: GooglePlayGames.BasicApi.Nearby
public struct ConnectionResponse // TypeDefIndex: 7412
{
	// Fields
	private static readonly byte[] EmptyPayload; // 0x0
	private readonly long mLocalClientId; // 0x0
	private readonly string mRemoteEndpointId; // 0x8
	private readonly ConnectionResponse.Status mResponseStatus; // 0x10
	private readonly byte[] mPayload; // 0x18

	// Methods

	// RVA: 0xCCD094 Offset: 0xCC9094 VA: 0xCCD094
	private void .ctor(long localClientId, string remoteEndpointId, ConnectionResponse.Status code, byte[] payload) { }

	// RVA: 0xCCA2F0 Offset: 0xCC62F0 VA: 0xCCA2F0
	public static ConnectionResponse Rejected(long localClientId, string remoteEndpointId) { }

	// RVA: 0xCCA24C Offset: 0xCC624C VA: 0xCCA24C
	public static ConnectionResponse Accepted(long localClientId, string remoteEndpointId, byte[] payload) { }

	// RVA: 0xCCA26C Offset: 0xCC626C VA: 0xCCA26C
	public static ConnectionResponse AlreadyConnected(long localClientId, string remoteEndpointId) { }

	// RVA: 0xCCD148 Offset: 0xCC9148 VA: 0xCCD148
	private static void .cctor() { }
}


// Namespace: GooglePlayGames.BasicApi.Nearby
public struct EndpointDetails // TypeDefIndex: 7413
{
	// Fields
	private readonly string mEndpointId; // 0x0
	private readonly string mName; // 0x8
	private readonly string mServiceId; // 0x10

	// Methods

	// RVA: 0xCCA7C8 Offset: 0xCC67C8 VA: 0xCCA7C8
	public void .ctor(string endpointId, string name, string serviceId) { }
}


// Namespace: GooglePlayGames.BasicApi.Nearby
public interface INearbyConnectionClient // TypeDefIndex: 7414
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void StopAdvertising();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void StopDiscovery(string serviceId);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract string GetServiceId();
}


// Namespace: GooglePlayGames.BasicApi.Nearby
public interface IMessageListener // TypeDefIndex: 7415
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnMessageReceived(string remoteEndpointId, byte[] data, bool isReliableMessage);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void OnRemoteEndpointDisconnected(string remoteEndpointId);
}


// Namespace: GooglePlayGames.BasicApi.Nearby
public interface IDiscoveryListener // TypeDefIndex: 7416
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnEndpointFound(EndpointDetails discoveredEndpoint);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void OnEndpointLost(string lostEndpointId);
}


// Namespace: GooglePlayGames.BasicApi.Events
public interface IEventsClient // TypeDefIndex: 7417
{}

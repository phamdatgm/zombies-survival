// Namespace: 
internal class <Module> // TypeDefIndex: 5933
{}


// Namespace: 
public enum aAk.A // TypeDefIndex: 5934
{
	// Fields
	public int value__; // 0x0
	public const aAk.A II = 0;
	public const aAk.A Ii = 1;
}


// Namespace: Adverty.a.A
internal static class aAk // TypeDefIndex: 5935
{
	// Fields
	[CompilerGenerated]
	private static Action<string> cW; // 0x0
	public static LinkedList<string> cw; // 0x8
	private const string cX = "Debug";
	private const string cx = "Warning";
	private const string cY = "Error";
	private const string cy = "ADVERTY:";
	private static bool cZ; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0xA6F444 Offset: 0xA6B444 VA: 0xA6F444
	public static void Os(Action<string> ) { }

	[CompilerGenerated]
	// RVA: 0xA6F534 Offset: 0xA6B534 VA: 0xA6F534
	public static void OT(Action<string> ) { }

	// RVA: 0xA6F624 Offset: 0xA6B624 VA: 0xA6F624
	private static void .cctor() { }

	// RVA: 0xA6F628 Offset: 0xA6B628 VA: 0xA6F628
	private static bool Ot(aAk.A ) { }

	// RVA: 0xA6F6FC Offset: 0xA6B6FC VA: 0xA6F6FC
	private static bool OU(LogLevel ) { }

	// RVA: 0xA6F768 Offset: 0xA6B768 VA: 0xA6F768
	public static void Ou() { }

	// RVA: 0xA6F8A4 Offset: 0xA6B8A4 VA: 0xA6F8A4
	public static void OV(string , aAk.A  = 1, object[] objs) { }

	// RVA: 0xA6FAFC Offset: 0xA6BAFC VA: 0xA6FAFC
	public static void Ov(object , aAk.A  = 1) { }

	// RVA: 0xA6FB90 Offset: 0xA6BB90 VA: 0xA6FB90
	public static void OW(object , aAk.A  = 1) { }

	// RVA: 0xA6FC24 Offset: 0xA6BC24 VA: 0xA6FC24
	public static void Ow(object , aAk.A  = 1) { }

	// RVA: 0xA6F974 Offset: 0xA6B974 VA: 0xA6F974
	private static void OX(object , aAk.A , LogLevel ) { }

	// RVA: 0xA6FCB8 Offset: 0xA6BCB8 VA: 0xA6FCB8
	private static void Ox(string , LogLevel ) { }

	// RVA: 0xA6FF98 Offset: 0xA6BF98 VA: 0xA6FF98
	public static string[] OY(int ) { }

	// RVA: 0xA70174 Offset: 0xA6C174 VA: 0xA70174
	private static void Oy(string , string , LogType ) { }

	// RVA: 0xA6FE54 Offset: 0xA6BE54 VA: 0xA6FE54
	private static void OZ(string , string ) { }

	// RVA: 0xA702BC Offset: 0xA6C2BC VA: 0xA702BC
	private static void Oz() { }

	// RVA: 0xA6FD6C Offset: 0xA6BD6C VA: 0xA6FD6C
	private static string oA(LogLevel ) { }
}


// Namespace: Adverty
public abstract class BaseUnit : MonoBehaviour, IRenderable, IIdentified, IVisible // TypeDefIndex: 5936
{
	// Fields
	private bool kP; // 0x20
	protected UnitRenderer unitRenderer; // 0x28
	protected ViewPortChecker viewportChecker; // 0x30
	protected const string ENABLE_MESSAGE = "enabled";
	protected const string DISABLE_MESSAGE = "disabled";
	private const string kp = "Adverty unit named {0} initialized with lazy load";
	private const string kQ = "Adverty unit named {0} initialized";
	protected const string UNIT_FAIL_INITIALIZATION_MESSAGE = "Adverty unit named {0} failed to initialize";
	protected const string UNIT_ENABLED_MESSAGE = "Adverty unit named {0} enabled";
	protected const string UNIT_DISABLED_MESSAGE = "Adverty unit named {0} disabled";
	protected const string UNIT_DESTROYED_MESSAGE = "Adverty unit named {0} destroyed";
	protected const string UNIT_INTERACTED_MESSAGE = "Registered interaction on unit named {0}";
	protected const string UNIT_ALREADY_INTERACTED_WARNING_MESSAGE = "Unit names {0} already registered interaction and didn\'t finish to proceed it yet.";
	private const float kq = 0.2;
	internal aaa<IVisible> kR; // 0x38
	internal Action<IRenderable> kr; // 0x48
	[CompilerGenerated]
	private Action kS; // 0x50
	[CompilerGenerated]
	private Action<Vector2> ks; // 0x58
	internal aCh kT; // 0x60
	[CompilerGenerated]
	private bool kt; // 0x68
	private aAy.a kU; // 0x6C
	[CompilerGenerated]
	private aAy.B ku; // 0x70
	protected bool isInitialized; // 0x74
	[CompilerGenerated]
	private int kV; // 0x78
	private aag kv; // 0x80
	private aBg kW; // 0x88
	private bool kw; // 0x90

	// Properties
	public bool IsRendered { get; }
	public virtual bool IsVisible { get; }
	public Material Material { get; set; }
	public int Id { get; set; }
	public abstract UnitConfiguration Configuration { get; }
	public abstract UnitType UnitType { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA70378 Offset: 0xA6C378 VA: 0xA70378
	internal void yL(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA70414 Offset: 0xA6C414 VA: 0xA70414
	internal void yl(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA704B0 Offset: 0xA6C4B0 VA: 0xA704B0
	internal void yM(Action<Vector2> ) { }

	[CompilerGenerated]
	// RVA: 0xA70560 Offset: 0xA6C560 VA: 0xA70560
	internal void ym(Action<Vector2> ) { }

	// RVA: 0xA70610 Offset: 0xA6C610 VA: 0xA70610
	internal string yN() { }

	[CompilerGenerated]
	// RVA: 0xA7063C Offset: 0xA6C63C VA: 0xA7063C
	internal bool yn() { }

	[CompilerGenerated]
	// RVA: 0xA70644 Offset: 0xA6C644 VA: 0xA70644
	internal void yO(bool ) { }

	// RVA: 0xA70650 Offset: 0xA6C650 VA: 0xA70650
	internal aAy.a yo() { }

	// RVA: 0xA70658 Offset: 0xA6C658 VA: 0xA70658
	internal void yP(aAy.a ) { }

	[CompilerGenerated]
	// RVA: 0xA707F8 Offset: 0xA6C7F8 VA: 0xA707F8
	internal aAy.B yp() { }

	[CompilerGenerated]
	// RVA: 0xA70800 Offset: 0xA6C800 VA: 0xA70800
	internal void yQ(aAy.B ) { }

	// RVA: 0xA70808 Offset: 0xA6C808 VA: 0xA70808
	internal Vector2 yq() { }

	// RVA: 0xA70830 Offset: 0xA6C830 VA: 0xA70830
	internal aCo yR() { }

	// RVA: 0xA70828 Offset: 0xA6C828 VA: 0xA70828
	internal UnitRenderer yr() { }

	// RVA: 0xA7084C Offset: 0xA6C84C VA: 0xA7084C
	internal bool yS() { }

	// RVA: 0xA707D8 Offset: 0xA6C7D8 VA: 0xA707D8
	internal void ys(bool ) { }

	// RVA: 0xA70868 Offset: 0xA6C868 VA: 0xA70868 Slot: 4
	public bool get_IsRendered() { }

	// RVA: 0xA70884 Offset: 0xA6C884 VA: 0xA70884 Slot: 7
	public virtual bool get_IsVisible() { }

	// RVA: 0xA708A4 Offset: 0xA6C8A4 VA: 0xA708A4
	public Material get_Material() { }

	// RVA: 0xA708C4 Offset: 0xA6C8C4 VA: 0xA708C4
	public void set_Material(Material value) { }

	[CompilerGenerated]
	// RVA: 0xA708E4 Offset: 0xA6C8E4 VA: 0xA708E4 Slot: 5
	public int get_Id() { }

	[CompilerGenerated]
	// RVA: 0xA708EC Offset: 0xA6C8EC VA: 0xA708EC
	public void set_Id(int value) { }

	// RVA: -1 Offset: -1 Slot: 8
	public abstract UnitConfiguration get_Configuration();

	// RVA: -1 Offset: -1 Slot: 9
	public abstract UnitType get_UnitType();

	// RVA: 0xA708F4 Offset: 0xA6C8F4 VA: 0xA708F4
	internal void yT(bool ) { }

	// RVA: 0xA70918 Offset: 0xA6C918 VA: 0xA70918
	internal bool yt() { }

	// RVA: 0xA70920 Offset: 0xA6C920 VA: 0xA70920
	internal void yU(bool ) { }

	// RVA: 0xA70950 Offset: 0xA6C950 VA: 0xA70950
	private bool yu() { }

	// RVA: 0xA709E8 Offset: 0xA6C9E8 VA: 0xA709E8
	protected void Awake() { }

	// RVA: 0xA709EC Offset: 0xA6C9EC VA: 0xA709EC
	private void yV() { }

	// RVA: 0xA70B30 Offset: 0xA6CB30 VA: 0xA70B30
	public void SetRenderer(RenderType renderType) { }

	// RVA: 0xA70C74 Offset: 0xA6CC74 VA: 0xA70C74
	internal void yv(Texture , Action , bool  = True) { }

	// RVA: 0xA70CF0 Offset: 0xA6CCF0 VA: 0xA70CF0 Slot: 10
	protected virtual void Start() { }

	// RVA: 0xA71048 Offset: 0xA6D048 VA: 0xA71048 Slot: 11
	protected virtual void SubscribeImmediately() { }

	// RVA: 0xA713E0 Offset: 0xA6D3E0 VA: 0xA713E0 Slot: 12
	protected virtual void Subscribe() { }

	// RVA: 0xA71298 Offset: 0xA6D298 VA: 0xA71298
	private void yW() { }

	// RVA: 0xA71630 Offset: 0xA6D630 VA: 0xA71630 Slot: 13
	protected virtual void Unsubscribe() { }

	// RVA: 0xA718B0 Offset: 0xA6D8B0 VA: 0xA718B0
	protected void Update() { }

	// RVA: 0xA70944 Offset: 0xA6C944 VA: 0xA70944
	protected void UpdateActiveState(bool isActive) { }

	// RVA: 0xA7190C Offset: 0xA6D90C VA: 0xA7190C
	protected void ActivateUnit() { }

	// RVA: 0xA717DC Offset: 0xA6D7DC VA: 0xA717DC
	private void yw() { }

	// RVA: 0xA719E0 Offset: 0xA6D9E0 VA: 0xA719E0 Slot: 14
	protected virtual void OnDisable() { }

	// RVA: 0xA71AEC Offset: 0xA6DAEC VA: 0xA71AEC Slot: 15
	protected virtual void OnEnable() { }

	// RVA: 0xA71C7C Offset: 0xA6DC7C VA: 0xA71C7C Slot: 16
	protected virtual void OnDestroy() { }

	// RVA: 0xA71EEC Offset: 0xA6DEEC VA: 0xA71EEC
	public void Interact() { }

	// RVA: 0xA71EF8 Offset: 0xA6DEF8 VA: 0xA71EF8
	public void Interact(Vector2 normalizedPosition) { }

	// RVA: 0xA72158 Offset: 0xA6E158 VA: 0xA72158
	private void yX() { }

	// RVA: 0xA71358 Offset: 0xA6D358 VA: 0xA71358
	private void yx() { }

	// RVA: 0xA72184 Offset: 0xA6E184 VA: 0xA72184
	protected void .ctor() { }
}


// Namespace: Adverty
public sealed class InMenuUnit : BaseUnit // TypeDefIndex: 5937
{
	// Fields
	[SerializeField]
	private InMenuUnitConfiguration configuration; // 0x98

	// Properties
	public InMenuUnitConfiguration InMenuConfiguration { get; set; }
	public override UnitConfiguration Configuration { get; }
	public override UnitType UnitType { get; }

	// Methods

	// RVA: 0xA721E4 Offset: 0xA6E1E4 VA: 0xA721E4
	public InMenuUnitConfiguration get_InMenuConfiguration() { }

	// RVA: 0xA721EC Offset: 0xA6E1EC VA: 0xA721EC
	internal void set_InMenuConfiguration(InMenuUnitConfiguration ) { }

	// RVA: 0xA721F4 Offset: 0xA6E1F4 VA: 0xA721F4 Slot: 8
	public override UnitConfiguration get_Configuration() { }

	// RVA: 0xA721FC Offset: 0xA6E1FC VA: 0xA721FC Slot: 9
	public override UnitType get_UnitType() { }

	// RVA: 0xA72204 Offset: 0xA6E204 VA: 0xA72204
	public void .ctor() { }
}


// Namespace: Adverty
public sealed class InPlayUnit : BaseUnit // TypeDefIndex: 5938
{
	// Fields
	[SerializeField]
	private InPlayUnitConfiguration configuration; // 0x98

	// Properties
	public InPlayUnitConfiguration InPlayConfiguration { get; set; }
	public override UnitConfiguration Configuration { get; }
	public override UnitType UnitType { get; }

	// Methods

	// RVA: 0xA72208 Offset: 0xA6E208 VA: 0xA72208
	public InPlayUnitConfiguration get_InPlayConfiguration() { }

	// RVA: 0xA72210 Offset: 0xA6E210 VA: 0xA72210
	internal void set_InPlayConfiguration(InPlayUnitConfiguration ) { }

	// RVA: 0xA72218 Offset: 0xA6E218 VA: 0xA72218 Slot: 8
	public override UnitConfiguration get_Configuration() { }

	// RVA: 0xA72220 Offset: 0xA6E220 VA: 0xA72220 Slot: 9
	public override UnitType get_UnitType() { }

	// RVA: 0xA72228 Offset: 0xA6E228 VA: 0xA72228
	public void .ctor() { }
}


// Namespace: 
private abstract class aAl.A // TypeDefIndex: 5939
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void nZ();

	// RVA: 0xA74DF0 Offset: 0xA70DF0 VA: 0xA74DF0
	protected void .ctor() { }
}


// Namespace: 
private class aAl.a : aAl.A // TypeDefIndex: 5940
{
	// Fields
	protected static IFactory<GameObject> kX; // 0x0
	private SessionHolder kx; // 0x10

	// Methods

	// RVA: 0xA74400 Offset: 0xA70400 VA: 0xA74400
	public void .ctor(SessionHolder ) { }

	// RVA: 0xA74DF8 Offset: 0xA70DF8 VA: 0xA74DF8 Slot: 4
	public override void nZ() { }

	// RVA: 0xA753B4 Offset: 0xA713B4 VA: 0xA753B4 Slot: 5
	protected virtual void yY() { }

	// RVA: 0xA756EC Offset: 0xA716EC VA: 0xA756EC Slot: 6
	protected virtual void yy() { }
}


// Namespace: 
private class aAl.B : aAl.A // TypeDefIndex: 5941
{
	// Fields
	private SessionHolder kY; // 0x10

	// Methods

	// RVA: 0xA74590 Offset: 0xA70590 VA: 0xA74590
	public void .ctor(SessionHolder ) { }

	// RVA: 0xA758B8 Offset: 0xA718B8 VA: 0xA758B8 Slot: 4
	public override void nZ() { }

	// RVA: 0xA75ACC Offset: 0xA71ACC VA: 0xA75ACC
	protected void yZ() { }

	// RVA: 0xA75CFC Offset: 0xA71CFC VA: 0xA75CFC
	protected void yz() { }
}


// Namespace: 
private class aAl.b : aAl.A // TypeDefIndex: 5942
{
	// Methods

	// RVA: 0xA75E54 Offset: 0xA71E54 VA: 0xA75E54 Slot: 4
	public override void nZ() { }

	// RVA: 0xA745B8 Offset: 0xA705B8 VA: 0xA745B8
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class aAl.C // TypeDefIndex: 5943
{
	// Fields
	public static readonly aAl.C IJ; // 0x0
	public static UnityAction<Scene> Ij; // 0x8
	public static UnityAction<Scene, LoadSceneMode> IK; // 0x10
	public static Action Ik; // 0x18

	// Methods

	// RVA: 0xA76184 Offset: 0xA72184 VA: 0xA76184
	private static void .cctor() { }

	// RVA: 0xA761E0 Offset: 0xA721E0 VA: 0xA761E0
	public void .ctor() { }

	// RVA: 0xA761E8 Offset: 0xA721E8 VA: 0xA761E8
	internal void vn(Scene ) { }

	// RVA: 0xA762B0 Offset: 0xA722B0 VA: 0xA762B0
	internal void vO(Scene , LoadSceneMode ) { }

	// RVA: 0xA76368 Offset: 0xA72368 VA: 0xA76368
	internal void vo() { }
}


// Namespace: Adverty.a.A
internal class aAl : aai<aAl> // TypeDefIndex: 5944
{
	// Fields
	private const string cz = "Due to incorrect behavior of some Unity {0} modules Adverty plugin may cause runtime issues.\nPlease use supported Unity versions: 2018.4.0f1+";
	private const string DA = "Initializing Adverty SDK version {0} with API version {1}";
	private const string Da = "Current Unity build with Vulkan target is not supported by Adverty SDK, Adverty SDK is disabled. Please use supported Unity versions: 2019.1.0f1+";
	private const string DB = "Compute shaders is not supported on current device";
	private const string Db = "No API key entered or key is invalid";
	private const string DC = "Adverty session started";
	private const string Dc = "Adverty sandbox session started";
	private const string DD = "Adverty session failed to activate";
	private const string Dd = "Adverty session restarted";
	private const string DE = "Adverty session destroyed";
	private const string De = "Adverty session already active with current set up";
	private const string DF = "Adverty session already terminated";
	private const string Df = "Adverty SDK initialized";
	private const string DG = "Adverty SDK failed to initialize";
	private const string Dg = "Adverty SDK doesn\'t support .Net 3.5. Please use other scripting runtime.";
	private const string DH = "Provided UserData is invalid";
	private GameObject Dh; // 0x10
	private adc DI; // 0x18
	private aDl Di; // 0x20
	private MonoBehaviorEventsManager DJ; // 0x28
	private aAm Dj; // 0x30
	private static bool DK; // 0x0
	private static SessionHolder Dk; // 0x8
	[CompilerGenerated]
	private static Action DL; // 0x10
	[CompilerGenerated]
	private static Action Dl; // 0x18
	[CompilerGenerated]
	private static Action DM; // 0x20
	[CompilerGenerated]
	private static Action Dm; // 0x28
	[CompilerGenerated]
	private static Action DN; // 0x30
	[CompilerGenerated]
	private static bool Dn; // 0x38
	[CompilerGenerated]
	private static bool DO; // 0x39

	// Methods

	[CompilerGenerated]
	// RVA: 0xA70F6C Offset: 0xA6CF6C VA: 0xA70F6C
	internal static void oa(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA711BC Offset: 0xA6D1BC VA: 0xA711BC
	internal static void oB(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA71554 Offset: 0xA6D554 VA: 0xA71554
	internal static void ob(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA71700 Offset: 0xA6D700 VA: 0xA71700
	internal static void oC(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA7222C Offset: 0xA6E22C VA: 0xA7222C
	internal static void oc(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA72308 Offset: 0xA6E308 VA: 0xA72308
	internal static void oD(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA723E4 Offset: 0xA6E3E4 VA: 0xA723E4
	internal static void od(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA724C0 Offset: 0xA6E4C0 VA: 0xA724C0
	internal static void oE(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA7259C Offset: 0xA6E59C VA: 0xA7259C
	internal static void oe(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA72678 Offset: 0xA6E678 VA: 0xA72678
	internal static void oF(Action ) { }

	// RVA: 0xA72754 Offset: 0xA6E754 VA: 0xA72754
	private static void .cctor() { }

	// RVA: 0xA72880 Offset: 0xA6E880 VA: 0xA72880
	internal static void of() { }

	// RVA: 0xA7304C Offset: 0xA6F04C VA: 0xA7304C
	internal static void oG(UserData , AdvertyLocalFeatures ) { }

	// RVA: 0xA734D4 Offset: 0xA6F4D4 VA: 0xA734D4
	internal static void og(string , AdvertySettings.Mode , bool , UserData , AdvertyLocalFeatures ) { }

	// RVA: 0xA73604 Offset: 0xA6F604 VA: 0xA73604
	internal static void oH() { }

	// RVA: 0xA738BC Offset: 0xA6F8BC VA: 0xA738BC
	internal static void oh() { }

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0xA73CE4 Offset: 0xA6FCE4 VA: 0xA73CE4
	private static void oI() { }

	// RVA: 0xA73EE0 Offset: 0xA6FEE0 VA: 0xA73EE0
	private static void oi(Scene , Scene ) { }

	// RVA: 0xA74304 Offset: 0xA70304 VA: 0xA74304
	private static void Start() { }

	// RVA: 0xA74490 Offset: 0xA70490 VA: 0xA74490
	private static void oJ() { }

	// RVA: 0xA737F8 Offset: 0xA6F7F8 VA: 0xA737F8
	private static void oj() { }

	// RVA: 0xA745C0 Offset: 0xA705C0 VA: 0xA745C0
	private static void oK() { }

	// RVA: 0xA72F24 Offset: 0xA6EF24 VA: 0xA72F24
	private static void CleanStart() { }

	// RVA: 0xA72DA8 Offset: 0xA6EDA8 VA: 0xA72DA8
	private static bool ok(string ) { }

	// RVA: 0xA72ED8 Offset: 0xA6EED8 VA: 0xA72ED8
	private static bool oL() { }

	// RVA: 0xA74A10 Offset: 0xA70A10 VA: 0xA74A10
	private static void OnApplicationQuit() { }

	// RVA: 0xA73A54 Offset: 0xA6FA54 VA: 0xA73A54
	public static GameObject ol() { }

	// RVA: 0xA73B50 Offset: 0xA6FB50 VA: 0xA73B50
	public static void oM(GameObject ) { }

	// RVA: 0xA74B58 Offset: 0xA70B58 VA: 0xA74B58
	public static SessionHolder om() { }

	// RVA: 0xA74BB0 Offset: 0xA70BB0 VA: 0xA74BB0
	public static adc oN() { }

	// RVA: 0xA74C00 Offset: 0xA70C00 VA: 0xA74C00
	private static void on(adc ) { }

	// RVA: 0xA74C54 Offset: 0xA70C54 VA: 0xA74C54
	public static aDl oO() { }

	// RVA: 0xA74CA4 Offset: 0xA70CA4 VA: 0xA74CA4
	private static void oo(aDl ) { }

	// RVA: 0xA73BF8 Offset: 0xA6FBF8 VA: 0xA73BF8
	public static MonoBehaviorEventsManager oP() { }

	// RVA: 0xA73BA4 Offset: 0xA6FBA4 VA: 0xA73BA4
	private static void op(MonoBehaviorEventsManager ) { }

	// RVA: 0xA740F8 Offset: 0xA700F8 VA: 0xA740F8
	public static aAm oQ() { }

	// RVA: 0xA74248 Offset: 0xA70248 VA: 0xA74248
	private static void oq(aAm ) { }

	[CompilerGenerated]
	// RVA: 0xA74CF8 Offset: 0xA70CF8 VA: 0xA74CF8
	public static bool oR() { }

	[CompilerGenerated]
	// RVA: 0xA7385C Offset: 0xA6F85C VA: 0xA7385C
	private static void or(bool ) { }

	[CompilerGenerated]
	// RVA: 0xA74D50 Offset: 0xA70D50 VA: 0xA74D50
	public static bool oS() { }

	[CompilerGenerated]
	// RVA: 0xA743A0 Offset: 0xA703A0 VA: 0xA743A0
	private static void os(bool value) { }

	// RVA: 0xA74DA8 Offset: 0xA70DA8 VA: 0xA74DA8
	public void .ctor() { }
}


// Namespace: Adverty
public static class AdvertyEvents // TypeDefIndex: 5945
{
	// Fields
	[CompilerGenerated]
	private static Action Do; // 0x0
	[CompilerGenerated]
	private static Action DP; // 0x8
	[CompilerGenerated]
	private static Action Dp; // 0x10
	[CompilerGenerated]
	private static Action<BaseUnit> DQ; // 0x18
	[CompilerGenerated]
	private static Action<BaseUnit> Dq; // 0x20
	[CompilerGenerated]
	private static Action<BaseUnit> DR; // 0x28
	[CompilerGenerated]
	private static Action<BaseUnit> Dr; // 0x30
	[CompilerGenerated]
	private static Action DS; // 0x38
	[CompilerGenerated]
	private static Action Ds; // 0x40
	[CompilerGenerated]
	private static Action<BaseUnit> DT; // 0x48
	[CompilerGenerated]
	private static Action<BaseUnit> Dt; // 0x50

	// Methods

	[CompilerGenerated]
	// RVA: 0xA763D4 Offset: 0xA723D4 VA: 0xA763D4
	public static void add_AdvertySessionActivationFailed(Action value) { }

	[CompilerGenerated]
	// RVA: 0xA764AC Offset: 0xA724AC VA: 0xA764AC
	public static void remove_AdvertySessionActivationFailed(Action value) { }

	[CompilerGenerated]
	// RVA: 0xA76584 Offset: 0xA72584 VA: 0xA76584
	public static void add_AdvertySessionTerminated(Action value) { }

	[CompilerGenerated]
	// RVA: 0xA76660 Offset: 0xA72660 VA: 0xA76660
	public static void remove_AdvertySessionTerminated(Action value) { }

	[CompilerGenerated]
	// RVA: 0xA7673C Offset: 0xA7273C VA: 0xA7673C
	public static void add_AdvertySessionActivated(Action value) { }

	[CompilerGenerated]
	// RVA: 0xA76818 Offset: 0xA72818 VA: 0xA76818
	public static void remove_AdvertySessionActivated(Action value) { }

	[CompilerGenerated]
	// RVA: 0xA768F4 Offset: 0xA728F4 VA: 0xA768F4
	public static void add_UnitActivated(Action<BaseUnit> value) { }

	[CompilerGenerated]
	// RVA: 0xA769E8 Offset: 0xA729E8 VA: 0xA769E8
	public static void remove_UnitActivated(Action<BaseUnit> value) { }

	[CompilerGenerated]
	// RVA: 0xA76ADC Offset: 0xA72ADC VA: 0xA76ADC
	public static void add_UnitActivationFailed(Action<BaseUnit> value) { }

	[CompilerGenerated]
	// RVA: 0xA76BD0 Offset: 0xA72BD0 VA: 0xA76BD0
	public static void remove_UnitActivationFailed(Action<BaseUnit> value) { }

	[CompilerGenerated]
	// RVA: 0xA76CC4 Offset: 0xA72CC4 VA: 0xA76CC4
	public static void add_UnitDeactivated(Action<BaseUnit> value) { }

	[CompilerGenerated]
	// RVA: 0xA76DB8 Offset: 0xA72DB8 VA: 0xA76DB8
	public static void remove_UnitDeactivated(Action<BaseUnit> value) { }

	[CompilerGenerated]
	// RVA: 0xA76EAC Offset: 0xA72EAC VA: 0xA76EAC
	public static void add_UnitViewed(Action<BaseUnit> value) { }

	[CompilerGenerated]
	// RVA: 0xA76FA0 Offset: 0xA72FA0 VA: 0xA76FA0
	public static void remove_UnitViewed(Action<BaseUnit> value) { }

	[CompilerGenerated]
	// RVA: 0xA77094 Offset: 0xA73094 VA: 0xA77094
	public static void add_WebViewOpened(Action value) { }

	[CompilerGenerated]
	// RVA: 0xA77170 Offset: 0xA73170 VA: 0xA77170
	public static void remove_WebViewOpened(Action value) { }

	[CompilerGenerated]
	// RVA: 0xA7724C Offset: 0xA7324C VA: 0xA7724C
	public static void add_WebViewClosed(Action value) { }

	[CompilerGenerated]
	// RVA: 0xA77328 Offset: 0xA73328 VA: 0xA77328
	public static void remove_WebViewClosed(Action value) { }

	[CompilerGenerated]
	// RVA: 0xA77404 Offset: 0xA73404 VA: 0xA77404
	public static void add_AdDelivered(Action<BaseUnit> value) { }

	[CompilerGenerated]
	// RVA: 0xA774F8 Offset: 0xA734F8 VA: 0xA774F8
	public static void remove_AdDelivered(Action<BaseUnit> value) { }

	[CompilerGenerated]
	// RVA: 0xA775EC Offset: 0xA735EC VA: 0xA775EC
	public static void add_AdCompleted(Action<BaseUnit> value) { }

	[CompilerGenerated]
	// RVA: 0xA776E0 Offset: 0xA736E0 VA: 0xA776E0
	public static void remove_AdCompleted(Action<BaseUnit> value) { }

	// RVA: 0xA777D4 Offset: 0xA737D4 VA: 0xA777D4
	private static void .cctor() { }

	// RVA: 0xA77AAC Offset: 0xA73AAC VA: 0xA77AAC
	private static void oT(BaseUnit ) { }

	// RVA: 0xA77B24 Offset: 0xA73B24 VA: 0xA77B24
	private static void ot() { }

	// RVA: 0xA77B80 Offset: 0xA73B80 VA: 0xA77B80
	private static void oU() { }

	// RVA: 0xA77BDC Offset: 0xA73BDC VA: 0xA77BDC
	private static void ou() { }

	// RVA: 0xA77C38 Offset: 0xA73C38 VA: 0xA77C38
	private static void oV(aCu ) { }

	// RVA: 0xA77D28 Offset: 0xA73D28 VA: 0xA77D28
	private static void ov(aCu ) { }

	// RVA: 0xA77E18 Offset: 0xA73E18 VA: 0xA77E18
	private static void oW(aCu ) { }

	// RVA: 0xA77F08 Offset: 0xA73F08 VA: 0xA77F08
	private static void ow(aCu ) { }

	// RVA: 0xA77FF8 Offset: 0xA73FF8 VA: 0xA77FF8
	private static void oX(BaseUnit ) { }
}


// Namespace: Adverty
public class AdvertyLocalFeatures // TypeDefIndex: 5946
{
	// Fields
	internal const string DU = "Feature {0} not enabled";
	internal const string Du = "EnabledCustomViewportHandling";
	private readonly Dictionary<string, bool> DV; // 0x10

	// Properties
	public bool EnabledCustomViewportHandling { get; }
	[Obsolete("Adverty SDK supports SRP now. DisableSRPCheck not using anymore.")]
	public bool DisableSRPCheck { get; }

	// Methods

	// RVA: 0xA70740 Offset: 0xA6C740 VA: 0xA70740
	public bool get_EnabledCustomViewportHandling() { }

	// RVA: 0xA78070 Offset: 0xA74070 VA: 0xA78070
	public bool get_DisableSRPCheck() { }

	// RVA: 0xA78078 Offset: 0xA74078 VA: 0xA78078
	public void .ctor() { }

	// RVA: 0xA78160 Offset: 0xA74160 VA: 0xA78160
	public void .ctor(bool enableCustomViewportHandling) { }

	[Obsolete("Adverty SDK supports SRP now. DisableSRPCheck not using anymore.")]
	// RVA: 0xA78250 Offset: 0xA74250 VA: 0xA78250
	public void .ctor(bool enableCustomViewportHandling, bool disableSRPCheck) { }

	// RVA: 0xA78258 Offset: 0xA74258 VA: 0xA78258
	internal static Dictionary<string, bool> ox(AdvertyLocalFeatures ) { }
}


// Namespace: Adverty
public static class AdvertySDK // TypeDefIndex: 5947
{
	// Methods

	// RVA: 0xA78270 Offset: 0xA74270 VA: 0xA78270
	public static void Init(UserData userData, AdvertyLocalFeatures features) { }

	// RVA: 0xA782D4 Offset: 0xA742D4 VA: 0xA782D4
	public static void Init(string apiKey, AdvertySettings.Mode platform, bool restrictUserData, UserData userData, AdvertyLocalFeatures features) { }

	// RVA: 0xA78358 Offset: 0xA74358 VA: 0xA78358
	public static void UpdateUserData(UserData userData) { }

	// RVA: 0xA783B0 Offset: 0xA743B0 VA: 0xA783B0
	public static void Terminate() { }
}


// Namespace: 
public enum AdvertySettings.Mode // TypeDefIndex: 5948
{
	// Fields
	public int value__; // 0x0
	public const AdvertySettings.Mode Mobile = 0;
	public const AdvertySettings.Mode AR = 1;
	public const AdvertySettings.Mode VR = 2;
}


// Namespace: 
public enum AdvertySettings.ClickHandlingType // TypeDefIndex: 5949
{
	// Fields
	public int value__; // 0x0
	public const AdvertySettings.ClickHandlingType Internal = 0;
	public const AdvertySettings.ClickHandlingType External = 1;
}


// Namespace: Adverty
public class AdvertySettings : SOSingleton<AdvertySettings, AdvertySettingsFactory>, IAdvertyScriptableObject // TypeDefIndex: 5950
{
	// Fields
	private const string VALIDATE_PATTERN = "^(?!undefined).*\\$\\bhttps\\b.*\\badserver\\b.*\\b.\\badverty\\b.\\b(com|internal)\\b.*$";
	[CompilerGenerated]
	private Action APIKeyChanged; // 0x18
	[CompilerGenerated]
	private Action<bool> PublicLogsStateChanged; // 0x20
	public const string VERSION = "4.1.0";
	public const string API_VERSION = "0.3";
	[SerializeField]
	private bool enableLogs; // 0x28
	[SerializeField]
	private AdvertySettings.Mode platform; // 0x2C
	[SerializeField]
	private string apiKey; // 0x30
	[SerializeField]
	private string hostUrl; // 0x38
	[SerializeField]
	private bool isLazyLoadAllowed; // 0x40
	[SerializeField]
	[Obsolete("Deprecated. Extrernal clickhandling is used by default.")]
	private AdvertySettings.ClickHandlingType clickHandling; // 0x44
	[SerializeField]
	private bool sandboxMode; // 0x48
	[SerializeField]
	private string renderPipelineType; // 0x50
	[SerializeField]
	private string renderPipelineVersion; // 0x58
	private string applicationKey; // 0x60
	private bool restrictUserData; // 0x68
	private UserData userData; // 0x70
	private HardwareModel hardwareModel; // 0x78
	private string previousAPIKey; // 0x108
	private AdvertyLocalFeatures localSettings; // 0x110
	private LogLevel advertyLogLevel; // 0x118
	[CompilerGenerated]
	private Camera <MainCamera>k__BackingField; // 0x120
	[CompilerGenerated]
	private static bool <IsModified>k__BackingField; // 0x0
	[CompilerGenerated]
	private static Assembly <ProductAssembly>k__BackingField; // 0x8
	[CompilerGenerated]
	private static Assembly <NativeAssembly>k__BackingField; // 0x10

	// Properties
	public Camera MainCamera { get; set; }
	public static string HostUrl { get; }
	public static UserData UserData { get; set; }
	public static bool RestrictUserData { get; set; }
	public static bool SandboxMode { get; set; }
	public static string APIKey { get; set; }
	public static AdvertySettings.Mode Platform { get; set; }
	public static bool EnableLogs { get; set; }
	public static LogLevel AdvertyLogLevel { get; set; }
	public static bool IsAPIKeyValid { get; }
	public static bool IsLazyLoadAllowed { get; set; }
	[Obsolete("Deprecated. Extrernal clickhandling is used by default.")]
	public static AdvertySettings.ClickHandlingType ClickHandling { get; set; }
	public static Assembly ProductAssembly { get; set; }
	public static Assembly NativeAssembly { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA783FC Offset: 0xA743FC VA: 0xA783FC
	public void add_APIKeyChanged(Action value) { }

	[CompilerGenerated]
	// RVA: 0xA78498 Offset: 0xA74498 VA: 0xA78498
	public void remove_APIKeyChanged(Action value) { }

	[CompilerGenerated]
	// RVA: 0xA78534 Offset: 0xA74534 VA: 0xA78534
	public void add_PublicLogsStateChanged(Action<bool> value) { }

	[CompilerGenerated]
	// RVA: 0xA785E4 Offset: 0xA745E4 VA: 0xA785E4
	public void remove_PublicLogsStateChanged(Action<bool> value) { }

	// RVA: 0xA78694 Offset: 0xA74694 VA: 0xA78694 Slot: 4
	public void Initialize() { }

	// RVA: 0xA786A4 Offset: 0xA746A4 VA: 0xA786A4
	public static void SetMainCamera(Camera camera) { }

	// RVA: 0xA786F8 Offset: 0xA746F8 VA: 0xA786F8
	public void ResetLogSettings() { }

	// RVA: 0xA7870C Offset: 0xA7470C VA: 0xA7870C
	internal static RenderPipelineData GetRenderPipelineData() { }

	// RVA: 0xA7878C Offset: 0xA7478C VA: 0xA7878C
	internal static void SetRenderPipelineData(string type, string version) { }

	// RVA: 0xA78844 Offset: 0xA74844 VA: 0xA78844
	private static void SetAPIKey(string key) { }

	// RVA: 0xA78D0C Offset: 0xA74D0C VA: 0xA78D0C
	public static void ClearAPIKey() { }

	// RVA: 0xA789D0 Offset: 0xA749D0 VA: 0xA789D0
	public static bool ValidateAPIKey(string key) { }

	// RVA: 0xA7340C Offset: 0xA6F40C VA: 0xA7340C
	public static void UpdateSettings(string apiKey, AdvertySettings.Mode platform, bool restrictUserData, UserData userData) { }

	// RVA: 0xA78A44 Offset: 0xA74A44 VA: 0xA78A44
	private static string[] DecodeAPIKey(string apiKey) { }

	[CompilerGenerated]
	// RVA: 0xA78FF8 Offset: 0xA74FF8 VA: 0xA78FF8
	public Camera get_MainCamera() { }

	[CompilerGenerated]
	// RVA: 0xA7869C Offset: 0xA7469C VA: 0xA7869C
	private void set_MainCamera(Camera value) { }

	// RVA: 0xA79000 Offset: 0xA75000 VA: 0xA79000
	public static string get_HostUrl() { }

	// RVA: 0xA79050 Offset: 0xA75050 VA: 0xA79050
	internal static string vP() { }

	// RVA: 0xA790A0 Offset: 0xA750A0 VA: 0xA790A0
	internal static HardwareModel vp() { }

	// RVA: 0xA79100 Offset: 0xA75100 VA: 0xA79100
	internal static void vQ(HardwareModel value) { }

	// RVA: 0xA78DB4 Offset: 0xA74DB4 VA: 0xA78DB4
	public static UserData get_UserData() { }

	// RVA: 0xA7835C Offset: 0xA7435C VA: 0xA7835C
	internal static void set_UserData(UserData value) { }

	// RVA: 0xA733BC Offset: 0xA6F3BC VA: 0xA733BC
	public static bool get_RestrictUserData() { }

	// RVA: 0xA78F5C Offset: 0xA74F5C VA: 0xA78F5C
	public static void set_RestrictUserData(bool value) { }

	// RVA: 0xA7569C Offset: 0xA7169C VA: 0xA7569C
	public static bool get_SandboxMode() { }

	// RVA: 0xA7917C Offset: 0xA7517C VA: 0xA7917C
	public static void set_SandboxMode(bool value) { }

	// RVA: 0xA7331C Offset: 0xA6F31C VA: 0xA7331C
	public static string get_APIKey() { }

	// RVA: 0xA78EB4 Offset: 0xA74EB4 VA: 0xA78EB4
	public static void set_APIKey(string value) { }

	// RVA: 0xA7336C Offset: 0xA6F36C VA: 0xA7336C
	public static AdvertySettings.Mode get_Platform() { }

	// RVA: 0xA78EB8 Offset: 0xA74EB8 VA: 0xA78EB8
	public static void set_Platform(AdvertySettings.Mode value) { }

	[CompilerGenerated]
	// RVA: 0xA79218 Offset: 0xA75218 VA: 0xA79218
	internal static bool vq() { }

	[CompilerGenerated]
	// RVA: 0xA72FFC Offset: 0xA6EFFC VA: 0xA72FFC
	internal static void vR(bool value) { }

	// RVA: 0xA6F6AC Offset: 0xA6B6AC VA: 0xA6F6AC
	public static bool get_EnableLogs() { }

	// RVA: 0xA79260 Offset: 0xA75260 VA: 0xA79260
	public static void set_EnableLogs(bool value) { }

	// RVA: 0xA6F718 Offset: 0xA6B718 VA: 0xA6F718
	public static LogLevel get_AdvertyLogLevel() { }

	// RVA: 0xA7930C Offset: 0xA7530C VA: 0xA7930C
	public static void set_AdvertyLogLevel(LogLevel value) { }

	// RVA: 0xA72D74 Offset: 0xA6ED74 VA: 0xA72D74
	public static bool get_IsAPIKeyValid() { }

	// RVA: 0xA70998 Offset: 0xA6C998 VA: 0xA70998
	public static bool get_IsLazyLoadAllowed() { }

	// RVA: 0xA79378 Offset: 0xA75378 VA: 0xA79378
	public static void set_IsLazyLoadAllowed(bool value) { }

	// RVA: 0xA793D0 Offset: 0xA753D0 VA: 0xA793D0
	public static AdvertySettings.ClickHandlingType get_ClickHandling() { }

	// RVA: 0xA79420 Offset: 0xA75420 VA: 0xA79420
	public static void set_ClickHandling(AdvertySettings.ClickHandlingType value) { }

	// RVA: 0xA706A0 Offset: 0xA6C6A0 VA: 0xA706A0
	internal static AdvertyLocalFeatures vr() { }

	// RVA: 0xA73298 Offset: 0xA6F298 VA: 0xA73298
	internal static void vS(AdvertyLocalFeatures value) { }

	// RVA: 0xA79474 Offset: 0xA75474 VA: 0xA79474
	protected void OnValidate() { }

	[CompilerGenerated]
	// RVA: 0xA794F0 Offset: 0xA754F0 VA: 0xA794F0
	public static Assembly get_ProductAssembly() { }

	[CompilerGenerated]
	// RVA: 0xA79538 Offset: 0xA75538 VA: 0xA79538
	public static void set_ProductAssembly(Assembly value) { }

	[CompilerGenerated]
	// RVA: 0xA79584 Offset: 0xA75584 VA: 0xA79584
	public static Assembly get_NativeAssembly() { }

	[CompilerGenerated]
	// RVA: 0xA795CC Offset: 0xA755CC VA: 0xA795CC
	public static void set_NativeAssembly(Assembly value) { }

	// RVA: 0xA79618 Offset: 0xA75618 VA: 0xA79618
	public void .ctor() { }
}


// Namespace: Adverty
public class AdvertySettingsFactory : SOFactory<AdvertySettings> // TypeDefIndex: 5951
{
	// Methods

	// RVA: 0xA79668 Offset: 0xA75668 VA: 0xA79668 Slot: 5
	public override AdvertySettings Create() { }

	// RVA: 0xA796D4 Offset: 0xA756D4 VA: 0xA796D4
	public void .ctor() { }
}


// Namespace: Adverty
public class AgeData // TypeDefIndex: 5952
{
	// Fields
	private readonly int Dv; // 0x10
	private readonly ushort DW; // 0x14

	// Methods

	// RVA: 0xA7971C Offset: 0xA7571C VA: 0xA7971C
	public void .ctor() { }

	// RVA: 0xA7973C Offset: 0xA7573C VA: 0xA7973C
	public void .ctor(int yearOfBirth) { }

	// RVA: 0xA79768 Offset: 0xA75768 VA: 0xA79768
	public void .ctor(ushort age) { }

	// RVA: 0xA79794 Offset: 0xA75794 VA: 0xA79794
	public int GetYearOfBirth() { }
}


// Namespace: Adverty.a.A
internal class aAm // TypeDefIndex: 5953
{
	// Fields
	private static abl Dw; // 0x0
	[CompilerGenerated]
	private static Dictionary<CameraEvent, CommandBuffer> DX; // 0x8
	[CompilerGenerated]
	private Camera Dx; // 0x10
	[CompilerGenerated]
	private Camera DY; // 0x18
	[CompilerGenerated]
	private MonoBehaviourCameraEventsManager Dy; // 0x20

	// Methods

	[CompilerGenerated]
	// RVA: 0xA7981C Offset: 0xA7581C VA: 0xA7981C
	private static Dictionary<CameraEvent, CommandBuffer> oY() { }

	[CompilerGenerated]
	// RVA: 0xA79874 Offset: 0xA75874 VA: 0xA79874
	private static void oy(Dictionary<CameraEvent, CommandBuffer> ) { }

	[CompilerGenerated]
	// RVA: 0xA798D0 Offset: 0xA758D0 VA: 0xA798D0
	private Camera oZ() { }

	[CompilerGenerated]
	// RVA: 0xA798D8 Offset: 0xA758D8 VA: 0xA798D8
	private void oz(Camera ) { }

	[CompilerGenerated]
	// RVA: 0xA798E0 Offset: 0xA758E0 VA: 0xA798E0
	private Camera PA() { }

	[CompilerGenerated]
	// RVA: 0xA798E8 Offset: 0xA758E8 VA: 0xA798E8
	private void Pa(Camera ) { }

	[CompilerGenerated]
	// RVA: 0xA798F0 Offset: 0xA758F0 VA: 0xA798F0
	internal MonoBehaviourCameraEventsManager PB() { }

	[CompilerGenerated]
	// RVA: 0xA798F8 Offset: 0xA758F8 VA: 0xA798F8
	private void Pb(MonoBehaviourCameraEventsManager ) { }

	// RVA: 0xA79900 Offset: 0xA75900 VA: 0xA79900
	internal static bool PC() { }

	// RVA: 0xA79968 Offset: 0xA75968 VA: 0xA79968
	private static void .cctor() { }

	// RVA: 0xA799D0 Offset: 0xA759D0 VA: 0xA799D0
	internal Camera Pc() { }

	// RVA: 0xA79AF0 Offset: 0xA75AF0 VA: 0xA79AF0
	internal Camera PD() { }

	// RVA: 0xA79A44 Offset: 0xA75A44 VA: 0xA79A44
	private void UpdateMain() { }

	// RVA: 0xA79D94 Offset: 0xA75D94 VA: 0xA79D94
	private void Pd() { }

	// RVA: 0xA7A338 Offset: 0xA76338 VA: 0xA7A338
	private void UpdateCamera() { }

	// RVA: 0xA74148 Offset: 0xA70148 VA: 0xA74148
	internal void PE() { }

	// RVA: 0xA7A8D4 Offset: 0xA768D4 VA: 0xA7A8D4
	internal void Pe(CameraEvent , CommandBuffer ) { }

	// RVA: 0xA7A5D4 Offset: 0xA765D4 VA: 0xA7A5D4
	internal void PF() { }

	// RVA: 0xA7A9FC Offset: 0xA769FC VA: 0xA7A9FC
	internal void Pf() { }

	// RVA: 0xA74240 Offset: 0xA70240 VA: 0xA74240
	public void .ctor() { }
}


// Namespace: Adverty.a.A
internal static class aAn // TypeDefIndex: 5954
{
	// Fields
	private const string DZ = "Multiple cameras detected with the same depth value. This is not supported by AdvertySDK!";
	private const string Dz = "Game camera is null!";
	private const string dA = "Game camera is not active!";
	private const string da = "Game camera is not enabled!";
	private const string dB = "Game camera\'s view port is not compatible!";
	private const string db = "Game camera rendering to texture is not supported!";
	private const float dC = 0.75;
	private const float dc = 0.25;

	// Methods

	// RVA: 0xA79AF8 Offset: 0xA75AF8 VA: 0xA79AF8
	public static Camera PG() { }

	// RVA: 0xA79904 Offset: 0xA75904 VA: 0xA79904
	public static bool Pg() { }

	// RVA: 0xA7AA80 Offset: 0xA76A80 VA: 0xA7AA80
	private static bool PH(Camera , bool ) { }

	// RVA: 0xA7ACA4 Offset: 0xA76CA4 VA: 0xA7ACA4
	private static void Ph(string , string , bool ) { }

	// RVA: 0xA7AD68 Offset: 0xA76D68 VA: 0xA7AD68
	private static bool PI(Camera ) { }
}


// Namespace: Adverty
public interface IAdvertyScriptableObject // TypeDefIndex: 5955
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Initialize();
}


// Namespace: 
[CompilerGenerated]
private sealed class MonoBehaviorEventsManager.A : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 5956
{
	// Fields
	private int IL; // 0x10
	private object Il; // 0x18
	public MonoBehaviorEventsManager IM; // 0x20

	// Methods

	[DebuggerHidden]
	// RVA: 0xA7BF1C Offset: 0xA77F1C VA: 0xA7BF1C
	public void .ctor(int ) { }

	[DebuggerHidden]
	// RVA: 0xA7C030 Offset: 0xA78030 VA: 0xA7C030 Slot: 5
	private void vs() { }

	// RVA: 0xA7C034 Offset: 0xA78034 VA: 0xA7C034 Slot: 6
	private bool MoveNext() { }

	[DebuggerHidden]
	// RVA: 0xA7C0DC Offset: 0xA780DC VA: 0xA7C0DC Slot: 4
	private object vT() { }

	[DebuggerHidden]
	// RVA: 0xA7C0E4 Offset: 0xA780E4 VA: 0xA7C0E4 Slot: 8
	private void vt() { }

	[DebuggerHidden]
	// RVA: 0xA7C11C Offset: 0xA7811C VA: 0xA7C11C Slot: 7
	private object vU() { }
}


// Namespace: Adverty
internal sealed class MonoBehaviorEventsManager : MonoBehaviour // TypeDefIndex: 5957
{
	// Fields
	[CompilerGenerated]
	private Action dD; // 0x20
	[CompilerGenerated]
	private Action dd; // 0x28
	[CompilerGenerated]
	private Action dE; // 0x30
	[CompilerGenerated]
	private Action de; // 0x38
	[CompilerGenerated]
	private Action<bool> dF; // 0x40
	[CompilerGenerated]
	private Action<bool> df; // 0x48
	[CompilerGenerated]
	private static Action<bool> dG; // 0x0
	[CompilerGenerated]
	private static Action<bool> dg; // 0x8
	[CompilerGenerated]
	private static Action dH; // 0x10
	internal static aAz dh; // 0x18
	private aAz dI; // 0x50
	private aAz di; // 0x58
	[CompilerGenerated]
	private static int dJ; // 0x20
	[CompilerGenerated]
	private aAz dj; // 0x60
	[CompilerGenerated]
	private aAz dK; // 0x68
	[CompilerGenerated]
	private aAz dk; // 0x70
	[CompilerGenerated]
	private aAz dL; // 0x78
	[CompilerGenerated]
	private aAz dl; // 0x80

	// Methods

	[CompilerGenerated]
	// RVA: 0xA7ADBC Offset: 0xA76DBC VA: 0xA7ADBC
	public void Pi(Action value) { }

	[CompilerGenerated]
	// RVA: 0xA7AE58 Offset: 0xA76E58 VA: 0xA7AE58
	public void PJ(Action value) { }

	[CompilerGenerated]
	// RVA: 0xA7AEF4 Offset: 0xA76EF4 VA: 0xA7AEF4
	public void Pj(Action value) { }

	[CompilerGenerated]
	// RVA: 0xA7AF90 Offset: 0xA76F90 VA: 0xA7AF90
	public void PK(Action value) { }

	[CompilerGenerated]
	// RVA: 0xA7B02C Offset: 0xA7702C VA: 0xA7B02C
	public void Pk(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA7B0C8 Offset: 0xA770C8 VA: 0xA7B0C8
	public void PL(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA73C48 Offset: 0xA6FC48 VA: 0xA73C48
	public void Pl(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA74ABC Offset: 0xA70ABC VA: 0xA74ABC
	public void PM(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA7B164 Offset: 0xA77164 VA: 0xA7B164
	public void Pm(Action<bool> ) { }

	[CompilerGenerated]
	// RVA: 0xA7B214 Offset: 0xA77214 VA: 0xA7B214
	public void PN(Action<bool> ) { }

	[CompilerGenerated]
	// RVA: 0xA7B2C4 Offset: 0xA772C4 VA: 0xA7B2C4
	public void Pn(Action<bool> ) { }

	[CompilerGenerated]
	// RVA: 0xA7B374 Offset: 0xA77374 VA: 0xA7B374
	public void PO(Action<bool> ) { }

	[CompilerGenerated]
	// RVA: 0xA7B424 Offset: 0xA77424 VA: 0xA7B424
	public static void Po(Action<bool> ) { }

	[CompilerGenerated]
	// RVA: 0xA7B4F0 Offset: 0xA774F0 VA: 0xA7B4F0
	public static void PP(Action<bool> ) { }

	[CompilerGenerated]
	// RVA: 0xA7B5BC Offset: 0xA775BC VA: 0xA7B5BC
	public static void Pp(Action<bool> ) { }

	[CompilerGenerated]
	// RVA: 0xA7B68C Offset: 0xA7768C VA: 0xA7B68C
	public static void PQ(Action<bool> ) { }

	[CompilerGenerated]
	// RVA: 0xA7B75C Offset: 0xA7775C VA: 0xA7B75C
	public static void Pq(Action value) { }

	[CompilerGenerated]
	// RVA: 0xA7B818 Offset: 0xA77818 VA: 0xA7B818
	public static void PR(Action value) { }

	// RVA: 0xA7B8D4 Offset: 0xA778D4 VA: 0xA7B8D4
	private void Awake() { }

	// RVA: 0xA7BAB8 Offset: 0xA77AB8 VA: 0xA7BAB8
	private void Start() { }

	// RVA: 0xA7BAD8 Offset: 0xA77AD8 VA: 0xA7BAD8
	private void Update() { }

	// RVA: 0xA7BC24 Offset: 0xA77C24 VA: 0xA7BC24
	private void FixedUpdate() { }

	// RVA: 0xA7BC48 Offset: 0xA77C48 VA: 0xA7BC48
	private void LateUpdate() { }

	// RVA: 0xA7BD28 Offset: 0xA77D28 VA: 0xA7BD28
	private void OnApplicationQuit() { }

	// RVA: 0xA7BD48 Offset: 0xA77D48 VA: 0xA7BD48
	private void OnDestroy() { }

	// RVA: 0xA7BDE4 Offset: 0xA77DE4 VA: 0xA7BDE4
	private void OnApplicationPause(bool pause) { }

	// RVA: 0xA7BE80 Offset: 0xA77E80 VA: 0xA7BE80
	private void OnApplicationFocus(bool focus) { }

	// RVA: 0xA7BA58 Offset: 0xA77A58 VA: 0xA7BA58
	private IEnumerator Pr() { }

	// RVA: 0xA7BF44 Offset: 0xA77F44 VA: 0xA7BF44
	private void OnRenderImage(RenderTexture source, RenderTexture destination) { }

	// RVA: 0xA7BFC4 Offset: 0xA77FC4 VA: 0xA7BFC4
	public void PS(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA7BFE0 Offset: 0xA77FE0 VA: 0xA7BFE0
	private static int Ps() { }

	[CompilerGenerated]
	// RVA: 0xA7BBD0 Offset: 0xA77BD0 VA: 0xA7BBD0
	private static void PT(int ) { }

	[CompilerGenerated]
	// RVA: 0xA7BDD4 Offset: 0xA77DD4 VA: 0xA7BDD4
	public aAz Pt() { }

	[CompilerGenerated]
	// RVA: 0xA7BA30 Offset: 0xA77A30 VA: 0xA7BA30
	private void PU(aAz ) { }

	[CompilerGenerated]
	// RVA: 0xA7BDDC Offset: 0xA77DDC VA: 0xA7BDDC
	public aAz Pu() { }

	[CompilerGenerated]
	// RVA: 0xA7BA38 Offset: 0xA77A38 VA: 0xA7BA38
	private void PV(aAz ) { }

	[CompilerGenerated]
	// RVA: 0xA7BC1C Offset: 0xA77C1C VA: 0xA7BC1C
	public aAz Pv() { }

	[CompilerGenerated]
	// RVA: 0xA7BA40 Offset: 0xA77A40 VA: 0xA7BA40
	private void PW(aAz value) { }

	[CompilerGenerated]
	// RVA: 0xA7BC40 Offset: 0xA77C40 VA: 0xA7BC40
	public aAz Pw() { }

	[CompilerGenerated]
	// RVA: 0xA7BA48 Offset: 0xA77A48 VA: 0xA7BA48
	private void PX(aAz value) { }

	[CompilerGenerated]
	// RVA: 0xA7BD20 Offset: 0xA77D20 VA: 0xA7BD20
	public aAz Px() { }

	[CompilerGenerated]
	// RVA: 0xA7BA50 Offset: 0xA77A50 VA: 0xA7BA50
	private void PY(aAz value) { }

	// RVA: 0xA7429C Offset: 0xA7029C VA: 0xA7429C
	public aAz Py() { }

	// RVA: 0xA7C028 Offset: 0xA78028 VA: 0xA7C028
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class MonoBehaviourCameraEventsManager.A : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 5958
{
	// Fields
	private int Im; // 0x10
	private object IN; // 0x18
	public MonoBehaviourCameraEventsManager In; // 0x20

	// Methods

	[DebuggerHidden]
	// RVA: 0xA7C374 Offset: 0xA78374 VA: 0xA7C374
	public void .ctor(int ) { }

	[DebuggerHidden]
	// RVA: 0xA7C3EC Offset: 0xA783EC VA: 0xA7C3EC Slot: 5
	private void vu() { }

	// RVA: 0xA7C3F0 Offset: 0xA783F0 VA: 0xA7C3F0 Slot: 6
	private bool MoveNext() { }

	[DebuggerHidden]
	// RVA: 0xA7C4B4 Offset: 0xA784B4 VA: 0xA7C4B4 Slot: 4
	private object vV() { }

	[DebuggerHidden]
	// RVA: 0xA7C4BC Offset: 0xA784BC VA: 0xA7C4BC Slot: 8
	private void vv() { }

	[DebuggerHidden]
	// RVA: 0xA7C4F4 Offset: 0xA784F4 VA: 0xA7C4F4 Slot: 7
	private object vW() { }
}


// Namespace: Adverty
[RequireComponent(typeof(Camera))]
internal class MonoBehaviourCameraEventsManager : MonoBehaviour // TypeDefIndex: 5959
{
	// Fields
	[CompilerGenerated]
	private Action dM; // 0x20
	[CompilerGenerated]
	private aAz dm; // 0x28
	[CompilerGenerated]
	private aAz dN; // 0x30

	// Methods

	[CompilerGenerated]
	// RVA: 0xA7C124 Offset: 0xA78124 VA: 0xA7C124
	public void PZ(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA7C1C0 Offset: 0xA781C0 VA: 0xA7C1C0
	public void Pz(Action ) { }

	// RVA: 0xA7C25C Offset: 0xA7825C VA: 0xA7C25C
	protected void Awake() { }

	// RVA: 0xA7C350 Offset: 0xA78350 VA: 0xA7C350
	protected void OnPreRender() { }

	// RVA: 0xA7C2F0 Offset: 0xA782F0 VA: 0xA7C2F0
	private IEnumerator pA() { }

	// RVA: 0xA7C39C Offset: 0xA7839C VA: 0xA7C39C
	protected void OnDestroy() { }

	[CompilerGenerated]
	// RVA: 0xA7C3DC Offset: 0xA783DC VA: 0xA7C3DC
	public aAz pa() { }

	[CompilerGenerated]
	// RVA: 0xA7C2E0 Offset: 0xA782E0 VA: 0xA7C2E0
	private void pB(aAz ) { }

	[CompilerGenerated]
	// RVA: 0xA7C36C Offset: 0xA7836C VA: 0xA7C36C
	public aAz pb() { }

	[CompilerGenerated]
	// RVA: 0xA7C2E8 Offset: 0xA782E8 VA: 0xA7C2E8
	private void pC(aAz ) { }

	// RVA: 0xA7C3E4 Offset: 0xA783E4 VA: 0xA7C3E4
	public void .ctor() { }
}


// Namespace: Adverty.a.A
internal abstract class aAo // TypeDefIndex: 5960
{
	// Fields
	[CompilerGenerated]
	private IntPtr dn; // 0x10
	[CompilerGenerated]
	private int dO; // 0x18

	// Methods

	[CompilerGenerated]
	// RVA: 0xA7C4FC Offset: 0xA784FC VA: 0xA7C4FC
	protected IntPtr pc() { }

	[CompilerGenerated]
	// RVA: 0xA7C504 Offset: 0xA78504 VA: 0xA7C504
	protected void pD(IntPtr ) { }

	[CompilerGenerated]
	// RVA: 0xA7C50C Offset: 0xA7850C VA: 0xA7C50C
	public int pd() { }

	[CompilerGenerated]
	// RVA: 0xA7C514 Offset: 0xA78514 VA: 0xA7C514
	protected void pE(int ) { }

	// RVA: 0xA7C51C Offset: 0xA7851C VA: 0xA7C51C
	protected void .ctor() { }
}


// Namespace: Adverty
internal class OnRenderImageOverride : MonoBehaviour // TypeDefIndex: 5961
{
	// Methods

	// RVA: 0xA7C524 Offset: 0xA78524 VA: 0xA7C524 Slot: 4
	protected virtual void OnRenderImage(RenderTexture src, RenderTexture dst) { }

	// RVA: 0xA7C528 Offset: 0xA78528 VA: 0xA7C528
	public void .ctor() { }
}


// Namespace: Adverty
public interface IAndroidNativeUtils : INativeClass // TypeDefIndex: 5962
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void RequestAdIdData(IntPtr callback);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract NativeIABData RequestIABData();
}


// Namespace: Adverty
public interface IIosNativeUtils : INativeClass // TypeDefIndex: 5963
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string GetSystemLocale();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void GetUserAgent();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void SetUnityEventListenerId(int listenerId);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void RequestAdIdData(IntPtr callback);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract NativeIABData RequestIABData();
}


// Namespace: Adverty
public interface IIosWebViewTexture : INativeClass // TypeDefIndex: 5964
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Initialize(int loadHtmlTimeout);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract IntPtr NativeAdvertyWebViewTextureCreate(IntPtr textureId, int width, int height, int eventListenerId, int scale);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void NativeAdvertyWebViewTextureUpdateTexture(IntPtr instance);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void NativeAdvertyWebViewTextureLoadUrl(IntPtr instance, string url);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void NativeAdvertyWebViewTextureLoadHtml(IntPtr instance, string html);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void NativeAdvertyWebViewTextureRunJavaScript(IntPtr instance, string javaScriptString);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void NativeAdvertyWebViewTextureDestroy(IntPtr instance);
}


// Namespace: Adverty
public interface IOsxNativeUtils : INativeClass // TypeDefIndex: 5965
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string GetSystemLocale();
}


// Namespace: Adverty.a.A
internal interface aAp // TypeDefIndex: 5966
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract aAz pe();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract aAz pF();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract aAq ms();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void UpdateSessionInfo(aAq sessionInfo);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void mT();
}


// Namespace: Adverty.a.c
internal sealed class acr : aAp // TypeDefIndex: 5967
{
	// Fields
	private readonly aAz IO; // 0x10
	private readonly aAz Io; // 0x18
	private aAq IP; // 0x20

	// Methods

	// RVA: 0xA7C530 Offset: 0xA78530 VA: 0xA7C530 Slot: 4
	private aAz vw() { }

	// RVA: 0xA7C538 Offset: 0xA78538 VA: 0xA7C538 Slot: 5
	private aAz vX() { }

	// RVA: 0xA7C540 Offset: 0xA78540 VA: 0xA7C540
	public void .ctor() { }

	// RVA: 0xA7C6DC Offset: 0xA786DC VA: 0xA7C6DC
	private void vx() { }

	// RVA: 0xA7C798 Offset: 0xA78798 VA: 0xA7C798
	private void vY() { }

	// RVA: 0xA7C92C Offset: 0xA7892C VA: 0xA7C92C Slot: 6
	public aAq ms() { }

	// RVA: 0xA7C948 Offset: 0xA78948 VA: 0xA7C948 Slot: 7
	public void UpdateSessionInfo(aAq info) { }

	// RVA: 0xA7C984 Offset: 0xA78984 VA: 0xA7C984 Slot: 8
	public void mT() { }

	// RVA: 0xA7C9BC Offset: 0xA789BC VA: 0xA7C9BC
	private void vy() { }

	// RVA: 0xA7C9E0 Offset: 0xA789E0 VA: 0xA7C9E0
	private void vZ(aBx.A ) { }

	[CompilerGenerated]
	// RVA: 0xA7CAC4 Offset: 0xA78AC4 VA: 0xA7CAC4
	private void vz() { }

	[CompilerGenerated]
	// RVA: 0xA7CDD0 Offset: 0xA78DD0 VA: 0xA7CDD0
	private void WA() { }
}


// Namespace: Adverty
public class SessionHolder // TypeDefIndex: 5968
{
	// Fields
	private readonly aAq do; // 0x10
	private aAp dP; // 0x130
	[CompilerGenerated]
	private readonly aAz dp; // 0x138
	[CompilerGenerated]
	private readonly aAz dQ; // 0x140

	// Properties
	public bool HasSession { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA75154 Offset: 0xA71154 VA: 0xA75154
	internal aAz pf() { }

	[CompilerGenerated]
	// RVA: 0xA7515C Offset: 0xA7115C VA: 0xA7515C
	internal aAz pG() { }

	// RVA: 0xA7460C Offset: 0xA7060C VA: 0xA7460C
	public bool get_HasSession() { }

	// RVA: 0xA7CF68 Offset: 0xA78F68 VA: 0xA7CF68
	public string GetAccessToken() { }

	// RVA: 0xA7A240 Offset: 0xA76240 VA: 0xA7A240
	internal SettingsData pg() { }

	// RVA: 0xA7D024 Offset: 0xA79024 VA: 0xA7D024
	internal LocalizationData pH() { }

	// RVA: 0xA70EA4 Offset: 0xA6CEA4 VA: 0xA70EA4
	internal bool ph() { }

	// RVA: 0xA75164 Offset: 0xA71164 VA: 0xA75164
	public void CreateSession() { }

	// RVA: 0xA7461C Offset: 0xA7061C VA: 0xA7461C
	public void DestroySession() { }

	// RVA: 0xA7D0E0 Offset: 0xA790E0 VA: 0xA7D0E0
	internal void UpdateSessionInfo(aAq info) { }

	// RVA: 0xA7D1C4 Offset: 0xA791C4 VA: 0xA7D1C4
	private void pI() { }

	// RVA: 0xA7D1E0 Offset: 0xA791E0 VA: 0xA7D1E0
	private void pi() { }

	// RVA: 0xA727C0 Offset: 0xA6E7C0 VA: 0xA727C0
	public void .ctor() { }
}


// Namespace: Adverty.a.A
internal struct aAq // TypeDefIndex: 5969
{
	// Fields
	public string dq; // 0x0
	public SettingsData dR; // 0x8
	public LocalizationData dr; // 0x110
	public bool dS; // 0x118
}


// Namespace: Adverty
public class UserData // TypeDefIndex: 5970
{
	// Fields
	private const string ds = "Adverty SDK failed to initialize due to missed AgeSegment";
	private const string dT = "Adverty SDK failed to initialize due to missed Gender";
	private const string dt = "Adverty SDK failed to initialize due to missed UserData. UserData is required.";
	[CompilerGenerated]
	private string dU; // 0x10
	[CompilerGenerated]
	private int du; // 0x18
	[CompilerGenerated]
	private string dV; // 0x20
	[CompilerGenerated]
	private AgeSegment dv; // 0x28
	[CompilerGenerated]
	private Gender dW; // 0x2C
	[CompilerGenerated]
	private int dw; // 0x30

	// Properties
	public bool IsChild { get; }
	public string ConsentString { get; set; }
	public int GDPR { get; set; }
	public string USPrivacyString { get; set; }
	public AgeSegment UserAgeGroup { get; set; }
	public Gender UsersGender { get; set; }
	public int YearOfBirth { get; set; }

	// Methods

	// RVA: 0xA7D1FC Offset: 0xA791FC VA: 0xA7D1FC
	public void .ctor(AgeSegment ageSegment, Gender gender) { }

	// RVA: 0xA7D324 Offset: 0xA79324 VA: 0xA7D324
	public void .ctor(string consentString) { }

	// RVA: 0xA7D394 Offset: 0xA79394 VA: 0xA7D394
	public void .ctor(string consentString, int gdprApplied, string usPrivacyString) { }

	// RVA: 0xA7D3B0 Offset: 0xA793B0 VA: 0xA7D3B0
	public void .ctor(AgeData ageData) { }

	// RVA: 0xA7D420 Offset: 0xA79420 VA: 0xA7D420
	public void .ctor(AgeSegment ageSegment, Gender gender, AgeData ageData) { }

	// RVA: 0xA7D4A0 Offset: 0xA794A0 VA: 0xA7D4A0
	public void .ctor(AgeSegment ageSegment, Gender gender, string consentString) { }

	// RVA: 0xA7D520 Offset: 0xA79520 VA: 0xA7D520
	public void .ctor(AgeData ageData, string consentString) { }

	// RVA: 0xA7D270 Offset: 0xA79270 VA: 0xA7D270
	public void .ctor(AgeSegment ageSegment, Gender gender, AgeData ageData, string consentString, int gdprApplied, string usPrivacyString) { }

	// RVA: 0xA78E04 Offset: 0xA74E04 VA: 0xA78E04
	public static bool IsTheSame(UserData source, UserData comparator) { }

	// RVA: 0xA73178 Offset: 0xA6F178 VA: 0xA73178
	public static bool IsValid(UserData userData) { }

	// RVA: 0xA7D5F4 Offset: 0xA795F4 VA: 0xA7D5F4
	internal void UpdateIABData(NativeIABData iabData) { }

	// RVA: 0xA7D680 Offset: 0xA79680 VA: 0xA7D680
	public static Dictionary<string, string> GetModel(UserData data) { }

	// RVA: 0xA7CB8C Offset: 0xA78B8C VA: 0xA7CB8C
	public bool get_IsChild() { }

	[CompilerGenerated]
	// RVA: 0xA7D5DC Offset: 0xA795DC VA: 0xA7D5DC
	public string get_ConsentString() { }

	[CompilerGenerated]
	// RVA: 0xA7D5A4 Offset: 0xA795A4 VA: 0xA7D5A4
	private void set_ConsentString(string ) { }

	[CompilerGenerated]
	// RVA: 0xA7D5E4 Offset: 0xA795E4 VA: 0xA7D5E4
	public int get_GDPR() { }

	[CompilerGenerated]
	// RVA: 0xA7D5AC Offset: 0xA795AC VA: 0xA7D5AC
	private void set_GDPR(int ) { }

	[CompilerGenerated]
	// RVA: 0xA7D5EC Offset: 0xA795EC VA: 0xA7D5EC
	public string get_USPrivacyString() { }

	[CompilerGenerated]
	// RVA: 0xA7D5B4 Offset: 0xA795B4 VA: 0xA7D5B4
	private void set_USPrivacyString(string ) { }

	[CompilerGenerated]
	// RVA: 0xA7D5CC Offset: 0xA795CC VA: 0xA7D5CC
	public AgeSegment get_UserAgeGroup() { }

	[CompilerGenerated]
	// RVA: 0xA7D594 Offset: 0xA79594 VA: 0xA7D594
	private void set_UserAgeGroup(AgeSegment ) { }

	[CompilerGenerated]
	// RVA: 0xA7D5C4 Offset: 0xA795C4 VA: 0xA7D5C4
	public Gender get_UsersGender() { }

	[CompilerGenerated]
	// RVA: 0xA7D59C Offset: 0xA7959C VA: 0xA7D59C
	private void set_UsersGender(Gender ) { }

	[CompilerGenerated]
	// RVA: 0xA7D5D4 Offset: 0xA795D4 VA: 0xA7D5D4
	public int get_YearOfBirth() { }

	[CompilerGenerated]
	// RVA: 0xA7D5BC Offset: 0xA795BC VA: 0xA7D5BC
	private void set_YearOfBirth(int ) { }
}


// Namespace: Adverty
public enum Gender // TypeDefIndex: 5971
{
	// Fields
	public int value__; // 0x0
	public const Gender Undefined = 0;
	public const Gender Male = 1;
	public const Gender Female = 2;
	public const Gender Other = 3;
	public const Gender Unknown = 4;
}


// Namespace: Adverty
public enum AgeSegment // TypeDefIndex: 5972
{
	// Fields
	public int value__; // 0x0
	public const AgeSegment Undefined = 0;
	public const AgeSegment Child = 1;
	public const AgeSegment Teen = 2;
	public const AgeSegment Adult = 3;
	public const AgeSegment Unknown = 4;
}


// Namespace: Adverty.a.A
internal class aAr : IFactory<GameObject> // TypeDefIndex: 5973
{
	// Fields
	private const string dX = "YWR2ZXJ0eQ==";

	// Methods

	// RVA: 0xA73AAC Offset: 0xA6FAAC VA: 0xA73AAC Slot: 4
	public GameObject Create() { }

	// RVA: 0xA73AA4 Offset: 0xA6FAA4 VA: 0xA73AA4
	public void .ctor() { }
}


// Namespace: Adverty.Utility
public static class AssetsManager // TypeDefIndex: 5974
{
	// Fields
	private static Dictionary<string, Object> dx; // 0x0
	private static Dictionary<string, Shader> dY; // 0x8

	// Methods

	// RVA: 0xA7D940 Offset: 0xA79940 VA: 0xA7D940
	private static void .cctor() { }

	// RVA: -1 Offset: -1
	public static T GetAsset<T>(string path) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB782A4 Offset: 0xB742A4 VA: 0xB782A4
	|-AssetsManager.GetAsset<object>
	*/

	// RVA: 0xA7DA1C Offset: 0xA79A1C VA: 0xA7DA1C
	public static Shader GetShader(string name) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class aAs.A // TypeDefIndex: 5975
{
	// Fields
	public Action Ip; // 0x10

	// Methods

	// RVA: 0xA7DC34 Offset: 0xA79C34 VA: 0xA7DC34
	public void .ctor() { }

	// RVA: 0xA7DD94 Offset: 0xA79D94 VA: 0xA7DD94
	internal void Wa(object ) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class aAs.a // TypeDefIndex: 5976
{
	// Fields
	public Action IQ; // 0x10
	public Action Iq; // 0x18

	// Methods

	// RVA: 0xA7DD20 Offset: 0xA79D20 VA: 0xA7DD20
	public void .ctor() { }

	// RVA: 0xA7DDB8 Offset: 0xA79DB8 VA: 0xA7DDB8
	internal void WB(object ) { }
}


// Namespace: Adverty.a.A
internal static class aAs // TypeDefIndex: 5977
{
	// Methods

	// RVA: 0xA7DB54 Offset: 0xA79B54 VA: 0xA7DB54
	internal static void pJ(Action , Action ) { }

	// RVA: 0xA7DC3C Offset: 0xA79C3C VA: 0xA7DC3C
	internal static void pj(Action , Action , Action ) { }

	// RVA: 0xA7DD28 Offset: 0xA79D28 VA: 0xA7DD28
	internal static void pK(Action ) { }
}


// Namespace: Adverty.a.A
internal interface aAt // TypeDefIndex: 5978
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void mt();
}


// Namespace: Adverty.Utility
public interface IFactory<T> // TypeDefIndex: 5979
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract T Create();
}


// Namespace: Adverty.Utility
public interface IFactory<T, W> // TypeDefIndex: 5980
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract T Create(W input);
}


// Namespace: Adverty.Utility
public interface IFactory<T, W, U> // TypeDefIndex: 5981
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract T Create(W a, U b);
}


// Namespace: Adverty.Utility
public interface IFactory<T, W, U, X> // TypeDefIndex: 5982
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract T Create(W a, U b, X c);
}


// Namespace: 
[CompilerGenerated]
private sealed class aAu.A<mK> // TypeDefIndex: 5983
{
	// Fields
	public string IR; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC6744 Offset: 0xBC2744 VA: 0xBC6744
	|-aAu.A<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal bool Wb(Assembly ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC674C Offset: 0xBC274C VA: 0xBC674C
	|-aAu.A<__Il2CppFullySharedGenericType>.Wb
	*/
}


// Namespace: Adverty.a.A
internal static class aAu // TypeDefIndex: 5984
{
	// Fields
	private const string dy = "LAN";
	private const string dZ = "Carrier";
	private const string dz = "No internet connection found";
	private const string EA = "Can\'t find {0} type is Adverty assemblies";
	private const string Ea = "AdvertySDK";
	private const int EB = 4;
	internal static Action Eb; // 0x0
	internal static readonly aak EC; // 0x8
	private static string Ec; // 0x10
	[CompilerGenerated]
	private static int ED; // 0x18
	[CompilerGenerated]
	private static bool Ed; // 0x1C

	// Methods

	[CompilerGenerated]
	// RVA: 0xA7DEB8 Offset: 0xA79EB8 VA: 0xA7DEB8
	public static int pk() { }

	[CompilerGenerated]
	// RVA: 0xA7DF10 Offset: 0xA79F10 VA: 0xA7DF10
	private static void pL(int ) { }

	[CompilerGenerated]
	// RVA: 0xA7DF6C Offset: 0xA79F6C VA: 0xA7DF6C
	public static bool pl() { }

	[CompilerGenerated]
	// RVA: 0xA7DFC4 Offset: 0xA79FC4 VA: 0xA7DFC4
	private static void pM(bool ) { }

	// RVA: 0xA7E024 Offset: 0xA7A024 VA: 0xA7E024
	internal static int pm() { }

	// RVA: 0xA7E1F8 Offset: 0xA7A1F8 VA: 0xA7E1F8
	private static void .cctor() { }

	// RVA: 0xA7CB9C Offset: 0xA78B9C VA: 0xA7CB9C
	internal static void pN(Action ) { }

	// RVA: 0xA7E2B0 Offset: 0xA7A2B0 VA: 0xA7E2B0
	internal static NativeIABData pn() { }

	// RVA: -1 Offset: -1
	public static My pO<My>(string ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB2800 Offset: 0xBAE800 VA: 0xBB2800
	|-aAu.pO<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0xA7E3A8 Offset: 0xA7A3A8 VA: 0xA7E3A8
	private static void po(string , bool , string ) { }

	[MonoPInvokeCallback(typeof(Action<string, int, string>))]
	// RVA: 0xA7DDE8 Offset: 0xA79DE8 VA: 0xA7DDE8
	private static void pP(string , bool , int , string ) { }

	// RVA: 0xA7E418 Offset: 0xA7A418 VA: 0xA7E418
	public static bool pp(object ) { }

	// RVA: 0xA7E424 Offset: 0xA7A424 VA: 0xA7E424
	public static bool pQ(object ) { }

	// RVA: 0xA7E430 Offset: 0xA7A430 VA: 0xA7E430
	public static int[] pq(string ) { }

	// RVA: 0xA74948 Offset: 0xA70948 VA: 0xA74948
	public static bool pR() { }

	// RVA: 0xA7E6F8 Offset: 0xA7A6F8 VA: 0xA7E6F8
	public static bool pr() { }

	// RVA: 0xA748D0 Offset: 0xA708D0 VA: 0xA748D0
	public static bool pS(string ) { }

	// RVA: 0xA72DFC Offset: 0xA6EDFC VA: 0xA72DFC
	public static bool ps() { }

	// RVA: 0xA7E764 Offset: 0xA7A764 VA: 0xA7E764
	public static string pT() { }

	// RVA: 0xA7E8B0 Offset: 0xA7A8B0 VA: 0xA7E8B0
	public static IntPtr pt(Delegate ) { }

	// RVA: -1 Offset: -1
	public static Type pU<MZ>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB2988 Offset: 0xBAE988 VA: 0xBB2988
	|-aAu.pU<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static Type pu<Mz>(string ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB2D9C Offset: 0xBAED9C VA: 0xBB2D9C
	|-aAu.pu<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static mA pV<mA>(Type ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB2B34 Offset: 0xBAEB34 VA: 0xBB2B34
	|-aAu.pV<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static ma pv<ma>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB2FCC Offset: 0xBAEFCC VA: 0xBB2FCC
	|-aAu.pv<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static mB pW<mB>(string ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB2C4C Offset: 0xBAEC4C VA: 0xBB2C4C
	|-aAu.pW<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0xA7E908 Offset: 0xA7A908 VA: 0xA7E908
	public static Type pw(Assembly , string ) { }

	// RVA: 0xA7EA04 Offset: 0xA7AA04 VA: 0xA7EA04
	public static string pX() { }
}


// Namespace: Adverty.a.A
internal class aAv // TypeDefIndex: 5985
{
	// Fields
	private Texture2D EE; // 0x10
	private int Ee; // 0x18

	// Methods

	// RVA: 0xA7EA5C Offset: 0xA7AA5C VA: 0xA7EA5C
	public void px(Texture2D ) { }

	// RVA: 0xA7EA68 Offset: 0xA7AA68 VA: 0xA7EA68
	public Texture2D pY() { }

	// RVA: 0xA7EA80 Offset: 0xA7AA80 VA: 0xA7EA80
	public void py() { }

	// RVA: 0xA7EB7C Offset: 0xA7AB7C VA: 0xA7EB7C
	public void .ctor() { }
}


// Namespace: Adverty.a.A
internal static class aAw // TypeDefIndex: 5986
{
	// Fields
	private static readonly List<aAv> EF; // 0x0

	// Methods

	// RVA: 0xA7EB84 Offset: 0xA7AB84 VA: 0xA7EB84
	private static void .cctor() { }

	// RVA: 0xA7EC10 Offset: 0xA7AC10 VA: 0xA7EC10
	internal static void pZ(aAv ) { }

	// RVA: 0xA7EAFC Offset: 0xA7AAFC VA: 0xA7EAFC
	internal static void pz(aAv ) { }
}


// Namespace: Adverty.Utility.Textures
public static class WatermarkTexture // TypeDefIndex: 5987
{
	// Fields
	private const string Ef = "Shaders/WatermarkShader";
	private const string EG = "Textures/watermarkMask";
	private static readonly Vector2 Eg; // 0x0
	private static readonly FontStyle EH; // 0x8
	private static readonly Shader Eh; // 0x10
	private static readonly Font EI; // 0x18
	private static readonly Texture Ei; // 0x20
	private static RenderTexture EJ; // 0x28

	// Methods

	// RVA: 0xA7EC90 Offset: 0xA7AC90 VA: 0xA7EC90
	private static void .cctor() { }

	// RVA: 0xA7EE9C Offset: 0xA7AE9C VA: 0xA7EE9C
	public static RenderTexture Get() { }

	// RVA: 0xA7EFF8 Offset: 0xA7AFF8 VA: 0xA7EFF8
	private static RenderTexture QA(string , Shader , Font ) { }

	// RVA: 0xA7EDD0 Offset: 0xA7ADD0 VA: 0xA7EDD0
	private static string Qa() { }

	// RVA: 0xA7F93C Offset: 0xA7B93C VA: 0xA7F93C
	private static int QB() { }

	// RVA: 0xA7FA08 Offset: 0xA7BA08 VA: 0xA7FA08
	private static float Qb() { }
}


// Namespace: Adverty.Utility.RenderPipeline
public struct RenderPipelineData // TypeDefIndex: 5988
{
	// Fields
	[CompilerGenerated]
	private string Ej; // 0x0
	[CompilerGenerated]
	private string EK; // 0x8

	// Properties
	public string pipelineType { get; set; }
	public string version { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA7FFC8 Offset: 0xA7BFC8 VA: 0xA7FFC8
	public string get_pipelineType() { }

	[CompilerGenerated]
	// RVA: 0xA7FFD0 Offset: 0xA7BFD0 VA: 0xA7FFD0
	private void set_pipelineType(string ) { }

	[CompilerGenerated]
	// RVA: 0xA7FFD8 Offset: 0xA7BFD8 VA: 0xA7FFD8
	public string get_version() { }

	[CompilerGenerated]
	// RVA: 0xA7FFE0 Offset: 0xA7BFE0 VA: 0xA7FFE0
	private void set_version(string ) { }

	// RVA: 0xA7FFE8 Offset: 0xA7BFE8 VA: 0xA7FFE8
	public void .ctor(string type, string version) { }
}


// Namespace: Adverty.Utility.RenderPipeline
public static class RenderPipelineDataCollector // TypeDefIndex: 5989
{
	// Fields
	private const string Ek = "UniversalRenderPipeline";
	private const string EL = "HDRenderPipeline";

	// Methods

	// RVA: 0xA7FFF0 Offset: 0xA7BFF0 VA: 0xA7FFF0
	public static RenderPipelineType GetRenderPipelineType() { }

	// RVA: 0xA80118 Offset: 0xA7C118 VA: 0xA80118
	public static void SaveToSettings(RenderPipelineType pipelineType, string version = "") { }
}


// Namespace: Adverty.Utility.RenderPipeline
public enum RenderPipelineType // TypeDefIndex: 5990
{
	// Fields
	public int value__; // 0x0
	public const RenderPipelineType Unknown = 0;
	public const RenderPipelineType BuiltIn = 1;
	public const RenderPipelineType URP = 2;
	public const RenderPipelineType HDRP = 3;
}


// Namespace: Adverty.a.A
internal static class aAx // TypeDefIndex: 5991
{
	// Fields
	private const int El = 10000;

	// Methods

	// RVA: 0xA80194 Offset: 0xA7C194 VA: 0xA80194
	public static int QC(float ) { }

	// RVA: 0xA8027C Offset: 0xA7C27C VA: 0xA8027C
	public static long Qc(float ) { }
}


// Namespace: 
public enum aAy.A // TypeDefIndex: 5992
{
	// Fields
	public int value__; // 0x0
	public const aAy.A Ir = 0;
	public const aAy.A IS = 1;
	public const aAy.A Is = 2;
}


// Namespace: 
public enum aAy.a // TypeDefIndex: 5993
{
	// Fields
	public int value__; // 0x0
	public const aAy.a IT = 0;
	public const aAy.a It = 1;
	public const aAy.a IU = 2;
}


// Namespace: 
internal enum aAy.B // TypeDefIndex: 5994
{
	// Fields
	public int value__; // 0x0
	public const aAy.B Iu = 0;
	public const aAy.B IV = 1;
}


// Namespace: Adverty.a.A
internal static class aAy // TypeDefIndex: 5995
{}


// Namespace: Adverty.a.a
internal class aAz // TypeDefIndex: 5996
{
	// Fields
	[CompilerGenerated]
	private Action EM; // 0x10
	[CompilerGenerated]
	private Action Em; // 0x18

	// Methods

	[CompilerGenerated]
	// RVA: 0xA80310 Offset: 0xA7C310 VA: 0xA80310
	public void QD(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA803AC Offset: 0xA7C3AC VA: 0xA803AC
	public void Qd(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA80448 Offset: 0xA7C448 VA: 0xA80448
	public void QE(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA804E4 Offset: 0xA7C4E4 VA: 0xA804E4
	public void Qe(Action ) { }

	// RVA: 0xA80580 Offset: 0xA7C580 VA: 0xA80580
	public void QF() { }

	// RVA: 0xA805E0 Offset: 0xA7C5E0 VA: 0xA805E0
	public void Qf() { }

	// RVA: 0xA805E8 Offset: 0xA7C5E8 VA: 0xA805E8
	public void .ctor() { }
}


// Namespace: Adverty.a.a
internal struct aaa<mb> // TypeDefIndex: 5997
{
	// Fields
	[CompilerGenerated]
	private Action<mb> EN; // 0x0
	[CompilerGenerated]
	private Action<mb> En; // 0x0

	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public void QG(Action<mb> ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBDCA0 Offset: 0xCB9CA0 VA: 0xCBDCA0
	|-aaa<__Il2CppFullySharedGenericType>.QG
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public void Qg(Action<mb> ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBDD60 Offset: 0xCB9D60 VA: 0xCBDD60
	|-aaa<__Il2CppFullySharedGenericType>.Qg
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public void QH(Action<mb> ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBDE20 Offset: 0xCB9E20 VA: 0xCBDE20
	|-aaa<__Il2CppFullySharedGenericType>.QH
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public void Qh(Action<mb> ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBDEE0 Offset: 0xCB9EE0 VA: 0xCBDEE0
	|-aaa<__Il2CppFullySharedGenericType>.Qh
	*/

	// RVA: -1 Offset: -1
	public void QI(mb ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBDFA0 Offset: 0xCB9FA0 VA: 0xCBDFA0
	|-aaa<__Il2CppFullySharedGenericType>.QI
	*/

	// RVA: -1 Offset: -1
	public void Qi() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBE1DC Offset: 0xCBA1DC VA: 0xCBE1DC
	|-aaa<__Il2CppFullySharedGenericType>.Qi
	*/
}


// Namespace: Adverty.a.a
internal struct aab<mC, mc> // TypeDefIndex: 5998
{
	// Fields
	[CompilerGenerated]
	private Action<mC, mc> EO; // 0x0
	[CompilerGenerated]
	private Action<mC, mc> Eo; // 0x0

	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public void QJ(Action<mC, mc> ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBE1E4 Offset: 0xCBA1E4 VA: 0xCBE1E4
	|-aab<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.QJ
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public void Qj(Action<mC, mc> ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBE2A4 Offset: 0xCBA2A4 VA: 0xCBE2A4
	|-aab<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Qj
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public void QK(Action<mC, mc> ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBE364 Offset: 0xCBA364 VA: 0xCBE364
	|-aab<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.QK
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public void Qk(Action<mC, mc> ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBE424 Offset: 0xCBA424 VA: 0xCBE424
	|-aab<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Qk
	*/

	// RVA: -1 Offset: -1
	public void QL(mC , mc ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBE4E4 Offset: 0xCBA4E4 VA: 0xCBE4E4
	|-aab<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.QL
	*/

	// RVA: -1 Offset: -1
	public void Ql() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBE8AC Offset: 0xCBA8AC VA: 0xCBE8AC
	|-aab<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Ql
	*/
}


// Namespace: Adverty.a.a
internal abstract class aac // TypeDefIndex: 5999
{
	// Fields
	[CompilerGenerated]
	private aAz EP; // 0x10
	[CompilerGenerated]
	private float Ep; // 0x18
	[CompilerGenerated]
	private float EQ; // 0x1C
	[CompilerGenerated]
	private aag Eq; // 0x20
	[CompilerGenerated]
	private float ER; // 0x28

	// Methods

	[CompilerGenerated]
	// RVA: 0xA805F0 Offset: 0xA7C5F0 VA: 0xA805F0
	public aAz QM() { }

	[CompilerGenerated]
	// RVA: 0xA805F8 Offset: 0xA7C5F8 VA: 0xA805F8
	private void Qm(aAz ) { }

	[CompilerGenerated]
	// RVA: 0xA80600 Offset: 0xA7C600 VA: 0xA80600
	protected float QN() { }

	[CompilerGenerated]
	// RVA: 0xA80608 Offset: 0xA7C608 VA: 0xA80608
	private void Qn(float ) { }

	[CompilerGenerated]
	// RVA: 0xA80610 Offset: 0xA7C610 VA: 0xA80610
	protected float QO() { }

	[CompilerGenerated]
	// RVA: 0xA80618 Offset: 0xA7C618 VA: 0xA80618
	private void Qo(float ) { }

	[CompilerGenerated]
	// RVA: 0xA80620 Offset: 0xA7C620 VA: 0xA80620
	protected aag QP() { }

	[CompilerGenerated]
	// RVA: 0xA80628 Offset: 0xA7C628 VA: 0xA80628
	private void Qp(aag ) { }

	[CompilerGenerated]
	// RVA: 0xA80630 Offset: 0xA7C630 VA: 0xA80630
	protected float QQ() { }

	[CompilerGenerated]
	// RVA: 0xA80638 Offset: 0xA7C638 VA: 0xA80638
	private void Qq(float value) { }

	// RVA: 0xA80640 Offset: 0xA7C640 VA: 0xA80640
	protected void .ctor(float , float ) { }

	// RVA: 0xA80834 Offset: 0xA7C834 VA: 0xA80834
	protected void SetStartTimeToNow() { }

	// RVA: 0xA80850 Offset: 0xA7C850 VA: 0xA80850 Slot: 4
	public virtual void Start() { }

	// RVA: 0xA8095C Offset: 0xA7C95C VA: 0xA8095C Slot: 5
	public virtual void QR() { }

	// RVA: 0xA80A34 Offset: 0xA7CA34 VA: 0xA80A34 Slot: 6
	protected virtual bool Qr() { }

	// RVA: 0xA80A60 Offset: 0xA7CA60 VA: 0xA80A60 Slot: 7
	protected virtual void QS() { }

	// RVA: -1 Offset: -1 Slot: 8
	protected abstract void Qs();
}


// Namespace: 
[CompilerGenerated]
private sealed class aad.A<mk> : IEnumerator<KeyValuePair<int, mk>>, IEnumerator, IDisposable // TypeDefIndex: 6000
{
	// Fields
	private int Iv; // 0x0
	private KeyValuePair<int, mk> IW; // 0x0
	public aad<mk> Iw; // 0x0
	private Dictionary.Enumerator<int, mk> IX; // 0x0
	private KeyValuePair<int, mk> Ix; // 0x0

	// Methods

	[DebuggerHidden]
	// RVA: -1 Offset: -1
	public void .ctor(int ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC6490 Offset: 0xBC2490 VA: 0xBC6490
	|-aad.A<object>..ctor
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 5
	private void WC() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC64B8 Offset: 0xBC24B8 VA: 0xBC64B8
	|-aad.A<object>.WC
	*/

	// RVA: -1 Offset: -1 Slot: 6
	private bool MoveNext() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC64F8 Offset: 0xBC24F8 VA: 0xBC64F8
	|-aad.A<object>.MoveNext
	*/

	// RVA: -1 Offset: -1
	private void Wc() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC66B8 Offset: 0xBC26B8 VA: 0xBC66B8
	|-aad.A<object>.Wc
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 4
	private KeyValuePair<int, mk> WD() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC66D4 Offset: 0xBC26D4 VA: 0xBC66D4
	|-aad.A<object>.WD
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 8
	private void Wd() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC66E0 Offset: 0xBC26E0 VA: 0xBC66E0
	|-aad.A<object>.Wd
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 7
	private object WE() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC6714 Offset: 0xBC2714 VA: 0xBC6714
	|-aad.A<object>.WE
	*/
}


// Namespace: Adverty.a.a
[DefaultMember("Item")]
internal class aad<mD> : IEnumerable<KeyValuePair<int, mD>>, IEnumerable // TypeDefIndex: 6001
{
	// Fields
	private int Er; // 0x0
	private Dictionary<int, mD> ES; // 0x0

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public IEnumerator<KeyValuePair<int, mD>> GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBF7A0 Offset: 0xCBB7A0 VA: 0xCBF7A0
	|-aad<object>.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 5
	private IEnumerator QT() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBF80C Offset: 0xCBB80C VA: 0xCBF80C
	|-aad<object>.QT
	*/

	// RVA: -1 Offset: -1
	public void Qt(int ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBF81C Offset: 0xCBB81C VA: 0xCBF81C
	|-aad<object>.Qt
	*/

	// RVA: -1 Offset: -1
	public int QU(mD ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBF868 Offset: 0xCBB868 VA: 0xCBF868
	|-aad<object>.QU
	*/

	// RVA: -1 Offset: -1
	public void Qu() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBF8D4 Offset: 0xCBB8D4 VA: 0xCBF8D4
	|-aad<object>.Qu
	*/

	// RVA: -1 Offset: -1
	public bool QV(int ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBF908 Offset: 0xCBB908 VA: 0xCBF908
	|-aad<object>.QV
	*/

	// RVA: -1 Offset: -1
	public bool Qv(mD ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBF958 Offset: 0xCBB958 VA: 0xCBF958
	|-aad<object>.Qv
	*/

	// RVA: -1 Offset: -1
	private Dictionary<int, mD> QW() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBF99C Offset: 0xCBB99C VA: 0xCBF99C
	|-aad<object>.QW
	*/

	// RVA: -1 Offset: -1
	public mD Qw(int ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBF9F8 Offset: 0xCBB9F8 VA: 0xCBF9F8
	|-aad<object>.Qw
	*/

	// RVA: -1 Offset: -1
	public int QX() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBFA94 Offset: 0xCBBA94 VA: 0xCBFA94
	|-aad<object>.QX
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBFAC8 Offset: 0xCBBAC8 VA: 0xCBFAC8
	|-aad<object>..ctor
	*/
}


// Namespace: Adverty.a.a
internal struct aae // TypeDefIndex: 6002
{
	// Fields
	public int Es; // 0x0
	public int ET; // 0x4

	// Methods

	// RVA: 0xA80A78 Offset: 0xA7CA78 VA: 0xA80A78
	public void .ctor(int , int ) { }

	// RVA: 0xA80A80 Offset: 0xA7CA80 VA: 0xA80A80
	public static aae op_Multiply(aae , float ) { }
}


// Namespace: Adverty.a.a
internal class aaf // TypeDefIndex: 6003
{
	// Methods

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0xA80C2C Offset: 0xA7CC2C VA: 0xA80C2C
	private static void Qx() { }

	// RVA: 0xA80CB8 Offset: 0xA7CCB8 VA: 0xA80CB8
	public void .ctor() { }
}


// Namespace: Adverty.Utility.Misc
public abstract class SOFactory<T> : IFactory<T> // TypeDefIndex: 6004
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 5
	public abstract T Create();

	// RVA: -1 Offset: -1
	protected static T Load(string path) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC57608 Offset: 0xC53608 VA: 0xC57608
	|-SOFactory<object>.Load
	*/

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC577E4 Offset: 0xC537E4 VA: 0xC577E4
	|-SOFactory<object>..ctor
	*/
}


// Namespace: Adverty.Utility.Misc
public class SOSingleton<T, W> : ScriptableObject // TypeDefIndex: 6005
{
	// Fields
	private static T Et; // 0x0

	// Properties
	public static T Instance { get; }

	// Methods

	// RVA: -1 Offset: -1
	public static T get_Instance() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC577EC Offset: 0xC537EC VA: 0xC577EC
	|-SOSingleton<object, object>.get_Instance
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC57940 Offset: 0xC53940 VA: 0xC57940
	|-SOSingleton<object, object>..ctor
	*/
}


// Namespace: 
private struct aag.A // TypeDefIndex: 6006
{
	// Fields
	public float IY; // 0x0
	public Action Iy; // 0x8
	public Func<bool> IZ; // 0x10
	public int Iz; // 0x18
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class aag.a // TypeDefIndex: 6007
{
	// Fields
	public static readonly aag.a iA; // 0x0

	// Methods

	// RVA: 0xA81184 Offset: 0xA7D184 VA: 0xA81184
	private static void .cctor() { }

	// RVA: 0xA811E0 Offset: 0xA7D1E0 VA: 0xA811E0
	public void .ctor() { }

	// RVA: 0xA811E8 Offset: 0xA7D1E8 VA: 0xA811E8
	internal bool We() { }
}


// Namespace: Adverty.a.a
internal class aag // TypeDefIndex: 6008
{
	// Fields
	private static readonly Func<bool> EU; // 0x0
	private aag.A Eu; // 0x10
	private readonly Queue<aag.A> EV; // 0x30

	// Methods

	// RVA: 0xA80734 Offset: 0xA7C734 VA: 0xA80734
	public void .ctor() { }

	// RVA: 0xA80CC0 Offset: 0xA7CCC0 VA: 0xA80CC0
	public void QY(float , Action , Func<bool> , int ) { }

	// RVA: 0xA80D50 Offset: 0xA7CD50 VA: 0xA80D50
	public void Qy(float , Action , int ) { }

	// RVA: 0xA807B4 Offset: 0xA7C7B4 VA: 0xA807B4
	public void QZ(float , Action ) { }

	// RVA: 0xA80DD8 Offset: 0xA7CDD8 VA: 0xA80DD8
	public void Qz(float , Action , Func<bool> ) { }

	// RVA: 0xA8087C Offset: 0xA7C87C VA: 0xA8087C
	public void Start() { }

	// RVA: 0xA80974 Offset: 0xA7C974 VA: 0xA80974
	public void qA() { }

	// RVA: 0xA80F90 Offset: 0xA7CF90 VA: 0xA80F90
	public void qa() { }

	// RVA: 0xA80FE8 Offset: 0xA7CFE8 VA: 0xA80FE8
	private void qB() { }

	// RVA: 0xA80E68 Offset: 0xA7CE68 VA: 0xA80E68
	private aag.A qb() { }

	// RVA: 0xA810C0 Offset: 0xA7D0C0 VA: 0xA810C0
	private static void .cctor() { }
}


// Namespace: Adverty.a.a
internal static class aah // TypeDefIndex: 6009
{
	// Fields
	private const string Ev = "yyyy-MM-ddTHH:mm:sszzz";

	// Methods

	// RVA: 0xA811F0 Offset: 0xA7D1F0 VA: 0xA811F0
	public static string qC() { }
}


// Namespace: Adverty.a.a
internal abstract class aai<md> // TypeDefIndex: 6010
{
	// Fields
	private static md EW; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	protected static md qc() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBFAD0 Offset: 0xCBBAD0 VA: 0xCBFAD0
	|-aai<object>.qc
	*/

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBFBB8 Offset: 0xCBBBB8 VA: 0xCBFBB8
	|-aai<object>..ctor
	*/
}


// Namespace: Adverty.NotifcationArgs
public interface IIdentified // TypeDefIndex: 6011
{
	// Properties
	public abstract int Id { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract int get_Id();
}


// Namespace: Adverty.NotifcationArgs
public interface IVisible : IIdentified // TypeDefIndex: 6012
{
	// Properties
	public abstract bool IsVisible { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool get_IsVisible();
}


// Namespace: Adverty.NotifcationArgs
public interface IRenderable : IIdentified // TypeDefIndex: 6013
{
	// Properties
	public abstract bool IsRendered { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool get_IsRendered();
}


// Namespace: 
[CompilerGenerated]
private sealed class acs.A // TypeDefIndex: 6014
{
	// Fields
	public IntPtr ky; // 0x10

	// Methods

	// RVA: 0xA820EC Offset: 0xA7E0EC VA: 0xA820EC
	public void .ctor() { }

	// RVA: 0xA8218C Offset: 0xA7E18C VA: 0xA8218C
	internal void ZA() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class acs.a // TypeDefIndex: 6015
{
	// Fields
	public IntPtr kZ; // 0x10

	// Methods

	// RVA: 0xA820F4 Offset: 0xA7E0F4 VA: 0xA820F4
	public void .ctor() { }

	// RVA: 0xA822C8 Offset: 0xA7E2C8 VA: 0xA822C8
	internal void <OnPageStarted>b__0() { }
}


// Namespace: Adverty.a.c
internal class acs : aax // TypeDefIndex: 6016
{
	// Fields
	public aAz ia; // 0x88

	// Methods

	// RVA: 0xA81754 Offset: 0xA7D754 VA: 0xA81754
	public void .ctor(aaz ) { }

	// RVA: 0xA8207C Offset: 0xA7E07C VA: 0xA8207C Slot: 10
	protected override IWebViewTextureBridge Nm() { }

	[MonoPInvokeCallback(typeof(Action<IntPtr>))]
	// RVA: 0xA81574 Offset: 0xA7D574 VA: 0xA81574
	private static void WF(IntPtr ) { }

	[MonoPInvokeCallback(typeof(Action<IntPtr>))]
	// RVA: 0xA81664 Offset: 0xA7D664 VA: 0xA81664
	private static void OnPageStarted(IntPtr ptr) { }

	// RVA: 0xA820FC Offset: 0xA7E0FC VA: 0xA820FC
	private void OnPageStarted() { }

	// RVA: 0xA82114 Offset: 0xA7E114 VA: 0xA82114
	private void Wf() { }

	// RVA: 0xA8212C Offset: 0xA7E12C VA: 0xA8212C Slot: 11
	public override void NN(int[] ) { }
}


// Namespace: Adverty.a.c
internal class act : aar // TypeDefIndex: 6017
{
	// Methods

	// RVA: 0xA82404 Offset: 0xA7E404 VA: 0xA82404 Slot: 4
	protected override void Nk(Action<string, string, int> ) { }

	// RVA: 0xA82408 Offset: 0xA7E408 VA: 0xA82408 Slot: 5
	protected override void NL(Action<string, string, string, int> ) { }

	// RVA: 0xA8240C Offset: 0xA7E40C VA: 0xA8240C
	public void .ctor() { }
}


// Namespace: Adverty.Native
public interface INativeClass // TypeDefIndex: 6018
{}


// Namespace: Adverty.a.a
internal interface aaj // TypeDefIndex: 6019
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void mU(int , string );

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void mu(int );
}


// Namespace: Adverty.a.a
internal interface aak // TypeDefIndex: 6020
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string mV();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract string mv();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void mW(Action );

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void mw(Action );

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void mX(Action<string, bool, int, string> );

	// RVA: -1 Offset: -1 Slot: 5
	public abstract NativeIABData mx();
}


// Namespace: Adverty.a.c
internal class acu : aax // TypeDefIndex: 6021
{
	// Methods

	// RVA: 0xA8249C Offset: 0xA7E49C VA: 0xA8249C
	public void .ctor(aaz ) { }

	// RVA: 0xA825AC Offset: 0xA7E5AC VA: 0xA825AC
	public void SetDrawAfterScreenUpdate(bool afterScreenUpdate) { }

	// RVA: 0xA826A8 Offset: 0xA7E6A8 VA: 0xA826A8 Slot: 5
	public override void NM(int ) { }

	// RVA: 0xA827A8 Offset: 0xA7E7A8 VA: 0xA827A8 Slot: 10
	protected override IWebViewTextureBridge Nm() { }

	// RVA: 0xA82818 Offset: 0xA7E818 VA: 0xA82818 Slot: 11
	public override void NN(int[] ) { }

	[CompilerGenerated]
	// RVA: 0xA829D0 Offset: 0xA7E9D0 VA: 0xA829D0
	private void WG() { }
}


// Namespace: Adverty.a.a
internal interface aal // TypeDefIndex: 6022
{
	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 0
	public abstract void mY(Action );

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 1
	public abstract void my(Action );

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 2
	public abstract void mZ(Action );

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 3
	public abstract void mz(Action );

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 4
	public abstract void NA(Action );

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 5
	public abstract void Na(Action );

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 6
	public abstract void NB(Action );

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 7
	public abstract void Nb(Action );

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 8
	public abstract void NC(Action value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 9
	public abstract void Nc(Action value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 10
	public abstract void ND(Action );

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 11
	public abstract void Nd(Action );

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 12
	public abstract void NE(Action );

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 13
	public abstract void Ne(Action );

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 14
	public abstract void NF(Action<string> );

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 15
	public abstract void Nf(Action<string> );

	// RVA: -1 Offset: -1 Slot: 16
	public abstract void Update();

	// RVA: -1 Offset: -1 Slot: 17
	public abstract void NG();

	// RVA: -1 Offset: -1 Slot: 18
	public abstract void Ng(string );

	// RVA: -1 Offset: -1 Slot: 19
	public abstract void NH();

	// RVA: -1 Offset: -1 Slot: 20
	public abstract void Nh(Vector2 );

	// RVA: -1 Offset: -1 Slot: 21
	public abstract void NI();

	// RVA: -1 Offset: -1 Slot: 22
	public abstract void Ni();

	// RVA: -1 Offset: -1 Slot: 23
	public abstract void NJ();

	// RVA: -1 Offset: -1 Slot: 24
	public abstract Texture Nj();
}


// Namespace: Adverty.a.d
internal class adk : acv // TypeDefIndex: 6023
{
	// Methods

	// RVA: 0xA829E8 Offset: 0xA7E9E8 VA: 0xA829E8 Slot: 16
	protected override void nz() { }

	// RVA: 0xA829EC Offset: 0xA7E9EC VA: 0xA829EC Slot: 17
	protected override void OA() { }

	// RVA: 0xA82A78 Offset: 0xA7EA78 VA: 0xA82A78 Slot: 18
	protected override void Oa() { }

	// RVA: 0xA82B14 Offset: 0xA7EB14 VA: 0xA82B14
	public void .ctor() { }
}


// Namespace: Adverty.a.a
internal class aam<mE> // TypeDefIndex: 6024
{
	// Fields
	private static Type Ew; // 0x0
	[CompilerGenerated]
	private mE EX; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBFBC0 Offset: 0xCBBBC0 VA: 0xCBFBC0
	|-aam<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	public void .ctor(string ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBFD04 Offset: 0xCBBD04 VA: 0xCBFD04
	|-aam<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	private static Type qD() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBFE50 Offset: 0xCBBE50 VA: 0xCBFE50
	|-aam<__Il2CppFullySharedGenericType>.qD
	*/

	// RVA: -1 Offset: -1
	private static Type qd(string ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBFEB8 Offset: 0xCBBEB8 VA: 0xCBFEB8
	|-aam<__Il2CppFullySharedGenericType>.qd
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public mE qE() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBFF30 Offset: 0xCBBF30 VA: 0xCBFF30
	|-aam<__Il2CppFullySharedGenericType>.qE
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private void qe(mE ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBFFD0 Offset: 0xCBBFD0 VA: 0xCBFFD0
	|-aam<__Il2CppFullySharedGenericType>.qe
	*/

	// RVA: -1 Offset: -1
	private static Type qF() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCC0088 Offset: 0xCBC088 VA: 0xCC0088
	|-aam<__Il2CppFullySharedGenericType>.qF
	*/
}


// Namespace: Adverty.a.a
internal static class aan<me> // TypeDefIndex: 6025
{
	// Fields
	[CompilerGenerated]
	private static aam<me> Ex; // 0x0
	[CompilerGenerated]
	private static me EY; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCC0174 Offset: 0xCBC174 VA: 0xCC0174
	|-aan<__Il2CppFullySharedGenericType>..cctor
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public static aam<me> qf() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCC0384 Offset: 0xCBC384 VA: 0xCC0384
	|-aan<__Il2CppFullySharedGenericType>.qf
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private static void qG(aam<me> ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCC03E8 Offset: 0xCBC3E8 VA: 0xCC03E8
	|-aan<__Il2CppFullySharedGenericType>.qG
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public static me qg() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCC0470 Offset: 0xCBC470 VA: 0xCC0470
	|-aan<__Il2CppFullySharedGenericType>.qg
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private static void qH(me ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCC0588 Offset: 0xCBC588 VA: 0xCC0588
	|-aan<__Il2CppFullySharedGenericType>.qH
	*/
}


// Namespace: Adverty.a.a
internal class aao // TypeDefIndex: 6026
{
	// Methods

	// RVA: 0xA82B34 Offset: 0xA7EB34 VA: 0xA82B34 Slot: 4
	internal virtual void NK() { }

	// RVA: 0xA82C18 Offset: 0xA7EC18 VA: 0xA82C18
	public void .ctor() { }
}


// Namespace: Adverty.a.a
internal class aap : IFactory<aao> // TypeDefIndex: 6027
{
	// Methods

	// RVA: 0xA82C20 Offset: 0xA7EC20 VA: 0xA82C20 Slot: 4
	public aao Create() { }

	// RVA: 0xA82DFC Offset: 0xA7EDFC VA: 0xA82DFC
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class aaq.A // TypeDefIndex: 6028
{
	// Fields
	public int iB; // 0x10
	public int ib; // 0x14

	// Methods

	// RVA: 0xA836A8 Offset: 0xA7F6A8 VA: 0xA836A8
	public void .ctor() { }

	// RVA: 0xA8390C Offset: 0xA7F90C VA: 0xA8390C
	internal void Wg() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class aaq.a // TypeDefIndex: 6029
{
	// Fields
	public int iC; // 0x10
	public int ic; // 0x14
	public string iD; // 0x18

	// Methods

	// RVA: 0xA838FC Offset: 0xA7F8FC VA: 0xA838FC
	public void .ctor() { }

	// RVA: 0xA83A14 Offset: 0xA7FA14 VA: 0xA83A14
	internal void WH() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class aaq.B // TypeDefIndex: 6030
{
	// Fields
	public int id; // 0x10
	public Action iE; // 0x18

	// Methods

	// RVA: 0xA83904 Offset: 0xA7F904 VA: 0xA83904
	public void .ctor() { }

	// RVA: 0xA83B20 Offset: 0xA7FB20 VA: 0xA83B20
	internal void Wh() { }
}


// Namespace: Adverty.a.a
internal class aaq // TypeDefIndex: 6031
{
	// Fields
	private const string Ey = "{0} platform is not implemented for Native Events";
	private const int EZ = -1;
	private static aaq Ez; // 0x0
	protected INativeMessageSystem eA; // 0x10
	private aad<aaj> ea; // 0x18

	// Methods

	// RVA: 0xA83024 Offset: 0xA7F024 VA: 0xA83024
	private static void .cctor() { }

	// RVA: 0xA834B8 Offset: 0xA7F4B8 VA: 0xA834B8
	internal void .ctor() { }

	// RVA: 0xA83544 Offset: 0xA7F544 VA: 0xA83544
	public static int qh(aaj ) { }

	// RVA: 0xA835F8 Offset: 0xA7F5F8 VA: 0xA835F8
	public static void qI(int ) { }

	// RVA: 0xA832EC Offset: 0xA7F2EC VA: 0xA832EC
	private void qi(Action<int, int> ) { }

	// RVA: 0xA833D0 Offset: 0xA7F3D0 VA: 0xA833D0
	private void qJ(Action<int, int, string> ) { }

	[MonoPInvokeCallback(typeof(Action<int, int>))]
	// RVA: 0xA82E04 Offset: 0xA7EE04 VA: 0xA82E04
	private static void qj(int , int ) { }

	[MonoPInvokeCallback(typeof(Action<int, int, string>))]
	// RVA: 0xA82F10 Offset: 0xA7EF10 VA: 0xA82F10
	private static void qK(int , int , string ) { }

	// RVA: 0xA837FC Offset: 0xA7F7FC VA: 0xA837FC
	private static void qk(Action , int ) { }

	// RVA: 0xA836B0 Offset: 0xA7F6B0 VA: 0xA836B0
	private static bool qL(int ) { }

	// RVA: 0xA83198 Offset: 0xA7F198 VA: 0xA83198
	private static aaq ql() { }
}


// Namespace: Adverty.Native
public struct NativeIABData // TypeDefIndex: 6032
{
	// Fields
	internal string eB; // 0x0
	internal string eb; // 0x8
	internal int eC; // 0x10
}


// Namespace: 
[CompilerGenerated]
private sealed class aar.A // TypeDefIndex: 6033
{
	// Fields
	public string ie; // 0x10
	public string iF; // 0x18
	public int if; // 0x20

	// Methods

	// RVA: 0xA84178 Offset: 0xA80178 VA: 0xA84178
	public void .ctor() { }

	// RVA: 0xA84188 Offset: 0xA80188 VA: 0xA84188
	internal void WI() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class aar.a // TypeDefIndex: 6034
{
	// Fields
	public string iG; // 0x10
	public string ig; // 0x18
	public string iH; // 0x20
	public int ih; // 0x28

	// Methods

	// RVA: 0xA84180 Offset: 0xA80180 VA: 0xA84180
	public void .ctor() { }

	// RVA: 0xA8421C Offset: 0xA8021C VA: 0xA8421C
	internal void Wi() { }
}


// Namespace: Adverty.a.a
internal class aar // TypeDefIndex: 6035
{
	// Fields
	private static aar ec; // 0x0
	protected INativeLogger eD; // 0x10

	// Methods

	// RVA: 0xA82410 Offset: 0xA7E410 VA: 0xA82410
	internal void .ctor() { }

	// RVA: 0xA83DE8 Offset: 0xA7FDE8 VA: 0xA83DE8
	public static void qM() { }

	// RVA: 0xA83FAC Offset: 0xA7FFAC VA: 0xA83FAC Slot: 4
	protected virtual void Nk(Action<string, string, int> ) { }

	// RVA: 0xA84090 Offset: 0xA80090 VA: 0xA84090 Slot: 5
	protected virtual void NL(Action<string, string, string, int> ) { }

	[MonoPInvokeCallback(typeof(Action<string, string, int>))]
	// RVA: 0xA83BD0 Offset: 0xA7FBD0 VA: 0xA83BD0
	private static void qm(string , string , int ) { }

	[MonoPInvokeCallback(typeof(Action<string, string, string, int>))]
	// RVA: 0xA83CD4 Offset: 0xA7FCD4 VA: 0xA83CD4
	private static void qN(string , string , string , int ) { }

	// RVA: 0xA83F0C Offset: 0xA7FF0C VA: 0xA83F0C
	private static aar qn() { }
}


// Namespace: Adverty.a.c
internal abstract class acv : aak, aaj // TypeDefIndex: 6036
{
	// Fields
	internal const CharSet iI = 4;
	protected const int ii = 1;
	protected const int iJ = 2;
	protected const int ij = 3;
	[CompilerGenerated]
	private static Action<int> iK; // 0x0
	[CompilerGenerated]
	private string ik; // 0x10
	[CompilerGenerated]
	private string iL; // 0x18
	protected int il; // 0x20
	protected Action iM; // 0x28

	// Methods

	[CompilerGenerated]
	// RVA: 0xA84294 Offset: 0xA80294 VA: 0xA84294
	public static void WJ(Action<int> ) { }

	[CompilerGenerated]
	// RVA: 0xA84360 Offset: 0xA80360 VA: 0xA84360
	public static void Wj(Action<int> ) { }

	[CompilerGenerated]
	// RVA: 0xA8442C Offset: 0xA8042C VA: 0xA8442C Slot: 4
	public string mV() { }

	[CompilerGenerated]
	// RVA: 0xA82A70 Offset: 0xA7EA70 VA: 0xA82A70
	protected void WK(string ) { }

	[CompilerGenerated]
	// RVA: 0xA84434 Offset: 0xA80434 VA: 0xA84434 Slot: 5
	public string mv() { }

	[CompilerGenerated]
	// RVA: 0xA8443C Offset: 0xA8043C VA: 0xA8443C
	protected void Wk(string ) { }

	// RVA: 0xA84444 Offset: 0xA80444 VA: 0xA84444 Slot: 12
	public virtual void mW(Action ) { }

	// RVA: 0xA84538 Offset: 0xA80538 VA: 0xA84538 Slot: 13
	public virtual void mw(Action ) { }

	// RVA: 0xA8457C Offset: 0xA8057C VA: 0xA8457C Slot: 14
	public virtual void mX(Action<string, bool, int, string> ) { }

	// RVA: 0xA84580 Offset: 0xA80580 VA: 0xA84580 Slot: 15
	public virtual NativeIABData mx() { }

	// RVA: -1 Offset: -1 Slot: 16
	protected abstract void nz();

	// RVA: -1 Offset: -1 Slot: 17
	protected abstract void OA();

	// RVA: -1 Offset: -1 Slot: 18
	protected abstract void Oa();

	// RVA: 0xA84490 Offset: 0xA80490 VA: 0xA84490
	private void WL(Action ) { }

	// RVA: 0xA82AE4 Offset: 0xA7EAE4 VA: 0xA82AE4
	protected void Wl(string ) { }

	// RVA: 0xA8458C Offset: 0xA8058C VA: 0xA8458C
	private static void WM(int ) { }

	// RVA: 0xA84604 Offset: 0xA80604 VA: 0xA84604 Slot: 11
	public void mu(int ) { }

	// RVA: 0xA84628 Offset: 0xA80628 VA: 0xA84628 Slot: 10
	public void mU(int , string ) { }

	// RVA: 0xA82B24 Offset: 0xA7EB24 VA: 0xA82B24
	protected void .ctor() { }
}


// Namespace: Adverty.a.a
internal class aas : IFactory<aak> // TypeDefIndex: 6037
{
	// Methods

	// RVA: 0xA84660 Offset: 0xA80660 VA: 0xA84660 Slot: 4
	public aak Create() { }

	// RVA: 0xA84898 Offset: 0xA80898 VA: 0xA84898
	public void .ctor() { }
}


// Namespace: Adverty.a.c
internal class acw : aao // TypeDefIndex: 6038
{
	// Methods

	// RVA: 0xA848A0 Offset: 0xA808A0 VA: 0xA848A0 Slot: 4
	internal override void NK() { }

	// RVA: 0xA82DF4 Offset: 0xA7EDF4 VA: 0xA82DF4
	public void .ctor() { }
}


// Namespace: Adverty.a.d
internal class adl : acv // TypeDefIndex: 6039
{
	// Methods

	// RVA: 0xA848A4 Offset: 0xA808A4 VA: 0xA848A4 Slot: 16
	protected override void nz() { }

	// RVA: 0xA848A8 Offset: 0xA808A8 VA: 0xA848A8 Slot: 17
	protected override void OA() { }

	// RVA: 0xA8499C Offset: 0xA8099C VA: 0xA8499C Slot: 18
	protected override void Oa() { }

	// RVA: 0xA84888 Offset: 0xA80888 VA: 0xA84888
	public void .ctor() { }
}


// Namespace: Adverty.a.d
internal class adm : acz // TypeDefIndex: 6040
{
	// Methods

	// RVA: 0xA84A08 Offset: 0xA80A08 VA: 0xA84A08
	public void .ctor() { }

	// RVA: 0xA84A68 Offset: 0xA80A68 VA: 0xA84A68
	public void .ctor(aaz ) { }

	// RVA: 0xA84B0C Offset: 0xA80B0C VA: 0xA84B0C Slot: 31
	public override void Ng(string ) { }

	// RVA: 0xA84B10 Offset: 0xA80B10 VA: 0xA84B10 Slot: 37
	public override void NH() { }

	// RVA: 0xA84B14 Offset: 0xA80B14 VA: 0xA84B14 Slot: 36
	public override void Update() { }

	// RVA: 0xA84B18 Offset: 0xA80B18 VA: 0xA84B18 Slot: 42
	public override void NG() { }

	// RVA: 0xA84B1C Offset: 0xA80B1C VA: 0xA84B1C Slot: 43
	protected override void Ob() { }
}


// Namespace: Adverty.a.a
internal interface aat // TypeDefIndex: 6041
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Nl();
}


// Namespace: Adverty.a.c
internal class acx : aat // TypeDefIndex: 6042
{
	// Fields
	private const int im = 0;
	private const int iN = 1;
	private static readonly IAndroidRenderingPlugin in; // 0x0
	private static bool iO; // 0x8

	// Methods

	// RVA: 0xA84C1C Offset: 0xA80C1C VA: 0xA84C1C
	private static void .cctor() { }

	// RVA: 0xA84EE8 Offset: 0xA80EE8 VA: 0xA84EE8
	private static void Wm() { }

	// RVA: 0xA8501C Offset: 0xA8101C VA: 0xA8501C
	private static void OnAdvertyStarted() { }

	[MonoPInvokeCallback(typeof(Action<IntPtr, int>))]
	// RVA: 0xA84B20 Offset: 0xA80B20 VA: 0xA84B20
	public static void WN(IntPtr , int ) { }

	// RVA: 0xA85184 Offset: 0xA81184 VA: 0xA85184
	public static void Wn() { }

	// RVA: 0xA852C8 Offset: 0xA812C8 VA: 0xA852C8 Slot: 4
	public void Nl() { }

	// RVA: 0xA85384 Offset: 0xA81384 VA: 0xA85384
	public void .ctor() { }
}


// Namespace: Adverty.a.c
internal class acy : aat // TypeDefIndex: 6043
{
	// Fields
	private static bool io; // 0x0

	// Methods

	// RVA: 0xA8538C Offset: 0xA8138C VA: 0xA8538C
	private static void .cctor() { }

	// RVA: 0xA854B4 Offset: 0xA814B4 VA: 0xA854B4
	private static void WO() { }

	// RVA: 0xA855E8 Offset: 0xA815E8 VA: 0xA855E8
	private static void OnAdvertyStarted() { }

	// RVA: 0xA85750 Offset: 0xA81750 VA: 0xA85750
	private static void Wo() { }

	// RVA: 0xA858B8 Offset: 0xA818B8 VA: 0xA858B8 Slot: 4
	public void Nl() { }

	// RVA: 0xA85974 Offset: 0xA81974 VA: 0xA85974
	public void .ctor() { }
}


// Namespace: Adverty.a.a
internal static class aau // TypeDefIndex: 6044
{
	// Fields
	private static aat ed; // 0x0

	// Methods

	// RVA: 0xA8597C Offset: 0xA8197C VA: 0xA8597C
	internal static void qO(aat ) { }

	// RVA: 0xA859D0 Offset: 0xA819D0 VA: 0xA859D0
	internal static void qo() { }

	// RVA: 0xA85A98 Offset: 0xA81A98 VA: 0xA85A98
	internal static bool qP() { }
}


// Namespace: Adverty.a.D
internal abstract class acz : aAo, aal // TypeDefIndex: 6045
{
	// Fields
	[CompilerGenerated]
	private Action iP; // 0x20
	[CompilerGenerated]
	private Action ip; // 0x28
	[CompilerGenerated]
	private Action iQ; // 0x30
	[CompilerGenerated]
	private Action iq; // 0x38
	[CompilerGenerated]
	private Action iR; // 0x40
	[CompilerGenerated]
	private Action ir; // 0x48
	[CompilerGenerated]
	private Action<string> iS; // 0x50
	[CompilerGenerated]
	private Action is; // 0x58
	[CompilerGenerated]
	private Texture iT; // 0x60
	[CompilerGenerated]
	private aaz it; // 0x68
	protected string iU; // 0x78
	protected string iu; // 0x80
	protected bool iV; // 0x88
	private static Dictionary<int, acz> iv; // 0x0
	private static Dictionary<int, acz> iW; // 0x8
	private const string iw = "Undefined url and adm data for loading";
	private const int iX = 0;
	private const int ix = 1;
	private const int iY = 2;
	private const int iy = 7;
	private const int iZ = 3;
	private const int iz = 4;
	private const int JA = 5;
	private const int Ja = 6;
	private const int JB = -1;
	[CompilerGenerated]
	private static int Jb; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0xA85AE8 Offset: 0xA81AE8 VA: 0xA85AE8 Slot: 4
	public void mY(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA85B84 Offset: 0xA81B84 VA: 0xA85B84 Slot: 5
	public void my(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA85C20 Offset: 0xA81C20 VA: 0xA85C20 Slot: 6
	public void mZ(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA85CBC Offset: 0xA81CBC VA: 0xA85CBC Slot: 7
	public void mz(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA85D58 Offset: 0xA81D58 VA: 0xA85D58 Slot: 14
	public void ND(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA85DF4 Offset: 0xA81DF4 VA: 0xA85DF4 Slot: 15
	public void Nd(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA85E90 Offset: 0xA81E90 VA: 0xA85E90 Slot: 8
	public void NA(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA85F2C Offset: 0xA81F2C VA: 0xA85F2C Slot: 9
	public void Na(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA85FC8 Offset: 0xA81FC8 VA: 0xA85FC8 Slot: 10
	public void NB(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA86064 Offset: 0xA82064 VA: 0xA86064 Slot: 11
	public void Nb(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA86100 Offset: 0xA82100 VA: 0xA86100 Slot: 12
	public void NC(Action value) { }

	[CompilerGenerated]
	// RVA: 0xA8619C Offset: 0xA8219C VA: 0xA8619C Slot: 13
	public void Nc(Action value) { }

	[CompilerGenerated]
	// RVA: 0xA86238 Offset: 0xA82238 VA: 0xA86238 Slot: 18
	public void NF(Action<string> ) { }

	[CompilerGenerated]
	// RVA: 0xA862E8 Offset: 0xA822E8 VA: 0xA862E8 Slot: 19
	public void Nf(Action<string> ) { }

	[CompilerGenerated]
	// RVA: 0xA86398 Offset: 0xA82398 VA: 0xA86398 Slot: 16
	public void NE(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA86434 Offset: 0xA82434 VA: 0xA86434 Slot: 17
	public void Ne(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA864D0 Offset: 0xA824D0 VA: 0xA864D0 Slot: 29
	public virtual Texture Nj() { }

	[CompilerGenerated]
	// RVA: 0xA864D8 Offset: 0xA824D8 VA: 0xA864D8 Slot: 30
	protected virtual void WP(Texture ) { }

	[CompilerGenerated]
	// RVA: 0xA864E0 Offset: 0xA824E0 VA: 0xA864E0
	public aaz Wp() { }

	[CompilerGenerated]
	// RVA: 0xA864F0 Offset: 0xA824F0 VA: 0xA864F0
	private void WQ(aaz ) { }

	[CompilerGenerated]
	// RVA: 0xA864FC Offset: 0xA824FC VA: 0xA864FC
	public static int Wq() { }

	[CompilerGenerated]
	// RVA: 0xA86554 Offset: 0xA82554 VA: 0xA86554
	protected static void WR(int ) { }

	// RVA: 0xA865B0 Offset: 0xA825B0 VA: 0xA865B0
	private static void .cctor() { }

	// RVA: 0xA84A60 Offset: 0xA80A60 VA: 0xA84A60
	protected void .ctor() { }

	// RVA: 0xA84ADC Offset: 0xA80ADC VA: 0xA84ADC
	protected void .ctor(aaz ) { }

	// RVA: 0xA8665C Offset: 0xA8265C VA: 0xA8665C Slot: 31
	public virtual void Ng(string ) { }

	// RVA: 0xA86820 Offset: 0xA82820 VA: 0xA86820 Slot: 32
	public virtual void OB() { }

	// RVA: 0xA86A9C Offset: 0xA82A9C VA: 0xA86A9C Slot: 33
	public virtual void Ni() { }

	// RVA: 0xA86AB8 Offset: 0xA82AB8 VA: 0xA86AB8 Slot: 34
	public virtual void NJ() { }

	// RVA: 0xA86AD4 Offset: 0xA82AD4 VA: 0xA86AD4 Slot: 35
	public virtual void TextureUpdateAvalable() { }

	// RVA: -1 Offset: -1 Slot: 36
	public abstract void Update();

	// RVA: -1 Offset: -1 Slot: 37
	public abstract void NH();

	// RVA: 0xA86AF0 Offset: 0xA82AF0 VA: 0xA86AF0 Slot: 38
	public virtual void Nh(Vector2 ) { }

	// RVA: 0xA86AF4 Offset: 0xA82AF4 VA: 0xA86AF4 Slot: 39
	public virtual void Wr(string ) { }

	// RVA: 0xA86B4C Offset: 0xA82B4C VA: 0xA86B4C Slot: 40
	public virtual void NI() { }

	// RVA: 0xA86B68 Offset: 0xA82B68 VA: 0xA86B68 Slot: 41
	public virtual void WS(string ) { }

	// RVA: 0xA86C5C Offset: 0xA82C5C VA: 0xA86C5C Slot: 42
	public virtual void NG() { }

	// RVA: -1 Offset: -1 Slot: 43
	protected abstract void Ob();

	// RVA: 0xA86DD4 Offset: 0xA82DD4 VA: 0xA86DD4 Slot: 44
	protected virtual void OC() { }

	// RVA: 0xA86DD8 Offset: 0xA82DD8 VA: 0xA86DD8
	protected void Ws() { }

	// RVA: 0xA86664 Offset: 0xA82664 VA: 0xA86664
	private void WT() { }

	// RVA: 0xA868D4 Offset: 0xA828D4 VA: 0xA868D4
	private void Wt() { }

	// RVA: 0xA86DF4 Offset: 0xA82DF4 VA: 0xA86DF4
	private void WU(string  = "") { }

	// RVA: 0xA868F0 Offset: 0xA828F0 VA: 0xA868F0
	private static void Wu() { }

	// RVA: 0xA86F1C Offset: 0xA82F1C VA: 0xA86F1C
	private Action WV() { }

	// RVA: 0xA86FDC Offset: 0xA82FDC VA: 0xA86FDC Slot: 45
	public void mu(int ) { }

	// RVA: 0xA8711C Offset: 0xA8311C VA: 0xA8711C Slot: 46
	public void mU(int , string ) { }
}


// Namespace: Adverty.a.a
internal class aav : IFactory<aal, aaz> // TypeDefIndex: 6046
{
	// Methods

	// RVA: 0xA87168 Offset: 0xA83168 VA: 0xA87168 Slot: 4
	public aal Create(aaz size) { }

	// RVA: 0xA87344 Offset: 0xA83344 VA: 0xA87344
	private static aal qp(aaz ) { }

	// RVA: 0xA877FC Offset: 0xA837FC VA: 0xA877FC
	public void .ctor() { }
}


// Namespace: Adverty.a.a
internal class aaw : IFactory<aax, aaz> // TypeDefIndex: 6047
{
	// Methods

	// RVA: 0xA87804 Offset: 0xA83804 VA: 0xA87804 Slot: 4
	public aax Create(aaz size) { }

	// RVA: 0xA879B0 Offset: 0xA839B0 VA: 0xA879B0
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class aax.A // TypeDefIndex: 6048
{
	// Fields
	public IntPtr JC; // 0x10

	// Methods

	// RVA: 0xA88D54 Offset: 0xA84D54 VA: 0xA88D54
	public void .ctor() { }

	// RVA: 0xA89244 Offset: 0xA85244 VA: 0xA89244
	internal void Wv() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class aax.a // TypeDefIndex: 6049
{
	// Fields
	public IntPtr Jc; // 0x10
	public int JD; // 0x18
	public string Jd; // 0x20

	// Methods

	// RVA: 0xA88D5C Offset: 0xA84D5C VA: 0xA88D5C
	public void .ctor() { }

	// RVA: 0xA8933C Offset: 0xA8533C VA: 0xA8933C
	internal void WW() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class aax.B // TypeDefIndex: 6050
{
	// Fields
	public IntPtr JE; // 0x10

	// Methods

	// RVA: 0xA88D64 Offset: 0xA84D64 VA: 0xA88D64
	public void .ctor() { }

	// RVA: 0xA8943C Offset: 0xA8543C VA: 0xA8943C
	internal void Ww() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class aax.b // TypeDefIndex: 6051
{
	// Fields
	public IntPtr Je; // 0x10
	public string JF; // 0x18

	// Methods

	// RVA: 0xA88D6C Offset: 0xA84D6C VA: 0xA88D6C
	public void .ctor() { }

	// RVA: 0xA89534 Offset: 0xA85534 VA: 0xA89534
	internal void WX() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class aax.C // TypeDefIndex: 6052
{
	// Fields
	public IntPtr Jf; // 0x10
	public string JG; // 0x18

	// Methods

	// RVA: 0xA88D74 Offset: 0xA84D74 VA: 0xA88D74
	public void .ctor() { }

	// RVA: 0xA89630 Offset: 0xA85630 VA: 0xA89630
	internal void Wx() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class aax.c // TypeDefIndex: 6053
{
	// Fields
	public IntPtr Jg; // 0x10
	public int JH; // 0x18
	public IntPtr Jh; // 0x20

	// Methods

	// RVA: 0xA88D7C Offset: 0xA84D7C VA: 0xA88D7C
	public void .ctor() { }

	// RVA: 0xA89724 Offset: 0xA85724 VA: 0xA89724
	internal void WY() { }
}


// Namespace: Adverty.a.a
internal abstract class aax // TypeDefIndex: 6054
{
	// Fields
	public aAz eE; // 0x10
	public aAz ee; // 0x18
	public aAz eF; // 0x20
	public aaa<string> ef; // 0x28
	public aaa<string> eG; // 0x38
	public aaa<float[]> eg; // 0x48
	protected static IntPtr eH; // 0x0
	private static Dictionary<IntPtr, aax> eh; // 0x8
	private static Dictionary<IntPtr, aax> eI; // 0x10
	protected static Dictionary<IntPtr, aax> ei; // 0x18
	private static Queue<aax> eJ; // 0x20
	protected IntPtr ej; // 0x58
	protected IWebViewTextureBridge eK; // 0x60
	protected string ek; // 0x68
	protected string eL; // 0x70
	protected int el; // 0x78
	protected const long eM = 100;
	[CompilerGenerated]
	private Texture em; // 0x80

	// Methods

	// RVA: 0xA857E8 Offset: 0xA817E8 VA: 0xA857E8
	public static int qQ() { }

	// RVA: 0xA87FA0 Offset: 0xA83FA0 VA: 0xA87FA0
	private static void .cctor() { }

	// RVA: 0xA81B08 Offset: 0xA7DB08 VA: 0xA81B08
	protected void .ctor(aaz ) { }

	// RVA: 0xA880CC Offset: 0xA840CC VA: 0xA880CC
	public IntPtr qq(Texture ) { }

	// RVA: 0xA882B0 Offset: 0xA842B0 VA: 0xA882B0
	public void qR(Vector2 ) { }

	// RVA: 0xA883B4 Offset: 0xA843B4 VA: 0xA883B4
	public void qr(string ) { }

	// RVA: 0xA88468 Offset: 0xA84468 VA: 0xA88468
	public void qS(string ) { }

	// RVA: 0xA85860 Offset: 0xA81860 VA: 0xA85860
	public static IntPtr qs() { }

	// RVA: 0xA8851C Offset: 0xA8451C VA: 0xA8851C Slot: 4
	public virtual void qT(string ) { }

	// RVA: 0xA886D4 Offset: 0xA846D4 VA: 0xA886D4
	public void qt(bool ) { }

	// RVA: 0xA887A8 Offset: 0xA847A8 VA: 0xA887A8 Slot: 5
	public virtual void NM(int ) { }

	// RVA: 0xA887AC Offset: 0xA847AC VA: 0xA887AC
	private void qU() { }

	// RVA: 0xA88850 Offset: 0xA84850 VA: 0xA88850
	public void qu(string ) { }

	// RVA: 0xA88A9C Offset: 0xA84A9C VA: 0xA88A9C
	public void qV() { }

	// RVA: 0xA88854 Offset: 0xA84854 VA: 0xA88854
	private void qv(string ) { }

	// RVA: 0xA88C80 Offset: 0xA84C80 VA: 0xA88C80
	public static void qW() { }

	[MonoPInvokeCallback(typeof(Action<IntPtr>))]
	// RVA: 0xA879B8 Offset: 0xA839B8 VA: 0xA879B8
	private static void qw(IntPtr ) { }

	[MonoPInvokeCallback(typeof(Action<IntPtr, int, string>))]
	// RVA: 0xA87AA8 Offset: 0xA83AA8 VA: 0xA87AA8
	private static void qX(IntPtr , int , string ) { }

	[MonoPInvokeCallback(typeof(Action<IntPtr>))]
	// RVA: 0xA87BB0 Offset: 0xA83BB0 VA: 0xA87BB0
	private static void qx(IntPtr ) { }

	[MonoPInvokeCallback(typeof(Action<IntPtr, string>))]
	// RVA: 0xA87CA0 Offset: 0xA83CA0 VA: 0xA87CA0
	private static void qY(IntPtr , string ) { }

	[MonoPInvokeCallback(typeof(Action<IntPtr, string>))]
	// RVA: 0xA87D9C Offset: 0xA83D9C VA: 0xA87D9C
	private static void qy(IntPtr , string ) { }

	[MonoPInvokeCallback(typeof(Action<IntPtr, float>))]
	// RVA: 0xA87E98 Offset: 0xA83E98 VA: 0xA87E98
	protected static void qZ(IntPtr , IntPtr , int ) { }

	// RVA: 0xA88D84 Offset: 0xA84D84 VA: 0xA88D84 Slot: 6
	protected virtual void qz() { }

	// RVA: 0xA88E20 Offset: 0xA84E20 VA: 0xA88E20 Slot: 7
	protected virtual void RA(int , string ) { }

	// RVA: 0xA88F2C Offset: 0xA84F2C VA: 0xA88F2C Slot: 8
	protected virtual void Ra() { }

	// RVA: 0xA88F44 Offset: 0xA84F44 VA: 0xA88F44 Slot: 9
	protected virtual void RB(string ) { }

	// RVA: 0xA88F9C Offset: 0xA84F9C VA: 0xA88F9C
	private void Rb(string ) { }

	// RVA: -1 Offset: -1 Slot: 10
	protected abstract IWebViewTextureBridge Nm();

	// RVA: -1 Offset: -1 Slot: 11
	public abstract void NN(int[] );

	// RVA: 0xA82134 Offset: 0xA7E134 VA: 0xA82134
	protected void RC(float[] ) { }

	// RVA: 0xA88524 Offset: 0xA84524 VA: 0xA88524
	private void Rc() { }

	// RVA: 0xA88FF4 Offset: 0xA84FF4 VA: 0xA88FF4
	private void RD() { }

	// RVA: 0xA890A8 Offset: 0xA850A8 VA: 0xA890A8
	private void Rd() { }

	// RVA: 0xA88AEC Offset: 0xA84AEC VA: 0xA88AEC
	private static void RE() { }

	// RVA: 0xA8915C Offset: 0xA8515C VA: 0xA8915C
	private Action Re() { }

	[CompilerGenerated]
	// RVA: 0xA880C4 Offset: 0xA840C4 VA: 0xA880C4
	public Texture RF() { }

	[CompilerGenerated]
	// RVA: 0xA880BC Offset: 0xA840BC VA: 0xA880BC
	private void Rf(Texture ) { }
}


// Namespace: Adverty.a.a
internal static class aay // TypeDefIndex: 6055
{
	// Fields
	private const string eN = "Unknown Unit Ratio value: {0}";
	internal static readonly aae en; // 0x0
	private static readonly aae eO; // 0x8
	private static readonly aae eo; // 0x10
	private static readonly aae eP; // 0x18

	// Methods

	// RVA: 0xA8988C Offset: 0xA8588C VA: 0xA8988C
	internal static aaz RG(aCv , aCn ) { }

	// RVA: 0xA89C8C Offset: 0xA85C8C VA: 0xA89C8C
	internal static aaz Rg(BaseUnit , aCn ) { }

	// RVA: 0xA89B5C Offset: 0xA85B5C VA: 0xA89B5C
	private static aaz RH(aae , aae ) { }

	// RVA: 0xA89B18 Offset: 0xA85B18 VA: 0xA89B18
	private static aae Rh(aCn ) { }

	// RVA: 0xA89978 Offset: 0xA85978 VA: 0xA89978
	private static aae RI(UnitRatio ) { }

	// RVA: 0xA89D98 Offset: 0xA85D98 VA: 0xA89D98
	private static bool Ri() { }

	// RVA: 0xA89E44 Offset: 0xA85E44 VA: 0xA89E44
	private static void .cctor() { }
}


// Namespace: Adverty.a.B
internal struct aaz // TypeDefIndex: 6056
{
	// Fields
	public aae ep; // 0x0
	public int eQ; // 0x8

	// Methods

	// RVA: 0xA89E30 Offset: 0xA85E30 VA: 0xA89E30
	public void .ctor(int , int , int ) { }
}


// Namespace: Adverty.a.D
internal class aDa : aao // TypeDefIndex: 6057
{
	// Methods

	// RVA: 0xA89EC4 Offset: 0xA85EC4 VA: 0xA89EC4 Slot: 4
	internal override void NK() { }

	// RVA: 0xA82DEC Offset: 0xA7EDEC VA: 0xA82DEC
	public void .ctor() { }
}


// Namespace: Adverty.a.d
internal class adn : acv // TypeDefIndex: 6058
{
	// Methods

	// RVA: 0xA89EC8 Offset: 0xA85EC8 VA: 0xA89EC8 Slot: 16
	protected override void nz() { }

	// RVA: 0xA89ECC Offset: 0xA85ECC VA: 0xA89ECC Slot: 17
	protected override void OA() { }

	// RVA: 0xA89F50 Offset: 0xA85F50 VA: 0xA89F50 Slot: 18
	protected override void Oa() { }

	// RVA: 0xA84878 Offset: 0xA80878 VA: 0xA84878
	public void .ctor() { }
}


// Namespace: Adverty.Native
public interface IAndroidRenderingPlugin : INativeClass // TypeDefIndex: 6059
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void DestroyTexture(int id);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SendTexture(IntPtr handler, int width, int height, int id, int scale);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void NativeSetGlIssuePluginEventMethod(IntPtr glIssuePluginMethod, int renderMode);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void NativeIssuePluginEvent(int eventId);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void Render(int eventId);
}


// Namespace: Adverty.Native
public interface IAndroidWebViewTextureBridge : IWebViewTextureBridge, INativeClass // TypeDefIndex: 6060
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SetOnPageStarted(IntPtr ptr, IntPtr onPageStartedDelegate);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SetOnCreate(IntPtr ptr, IntPtr onCreateDelegate);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract IntPtr GetCustomRenderEventFunc();
}


// Namespace: Adverty.Native
public interface IIosWebViewTextureBridge : IWebViewTextureBridge, INativeClass // TypeDefIndex: 6061
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SetDrawScreenAfterUpdate(IntPtr ptr, bool afterScreenUpdate);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SetFramerate(IntPtr ptr, int framesPerSecond);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void ViewabilityCheck(IntPtr ptr, IntPtr checkPoints, IntPtr viewabilityCallback);
}


// Namespace: Adverty.Native
public interface INativeDebug : INativeClass // TypeDefIndex: 6062
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Initialize();
}


// Namespace: Adverty.Native
public interface INativeLogger : INativeClass // TypeDefIndex: 6063
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SetNativeDebugCallback(IntPtr callbackDelegate);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SetNativeDebugWithStackTraceCallback(IntPtr callbackDelegate);
}


// Namespace: Adverty.Native
public interface INativeMessageSystem : INativeClass // TypeDefIndex: 6064
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SetNativeEventsCallback(IntPtr callbackDelegate);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SetNativeEventsCallbackWithData(IntPtr callbackDelegate);
}


// Namespace: Adverty.Native
public interface INativeRedirectionDialog : INativeClass // TypeDefIndex: 6065
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void ShowRedirectionDialog(string url, IntPtr callback);
}


// Namespace: Adverty.Native
public interface IWebViewTextureBridge : INativeClass // TypeDefIndex: 6066
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract IntPtr Create(IntPtr cbo, int width, int height, int loadTimeout, int scale);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SetOnClicked(IntPtr ptr, IntPtr onClickedDelegate);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void SetOnReceiveError(IntPtr ptr, IntPtr onReceivedErrorDelegate);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void SetOnPageFinished(IntPtr ptr, IntPtr onPageFinishedDelegate);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void SetOnTextureCheckPassed(IntPtr ptr, IntPtr onTextureCheckPassedDelegate);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void SetOnHtmlLoadTimeout(IntPtr ptr, IntPtr onHtmlLoadTimeoutDelegate);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void LoadData(IntPtr ptr, string data);

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void LoadURL(IntPtr ptr, string url);

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void SetRenderActive(IntPtr ptr, bool active);

	// RVA: -1 Offset: -1 Slot: 9
	public abstract void Destroy(IntPtr ptr, string data);

	// RVA: -1 Offset: -1 Slot: 10
	public abstract void Touch(IntPtr ptr, float x, float y);

	// RVA: -1 Offset: -1 Slot: 11
	public abstract void SendViewabilityData(IntPtr ptr, string data);

	// RVA: -1 Offset: -1 Slot: 12
	public abstract void TriggerViewedImpression(IntPtr ptr, string data);
}


// Namespace: Adverty.a.B
internal static class aBa // TypeDefIndex: 6067
{
	// Fields
	private const string eq = "UnityEngine.VRModule";
	private const string eR = "UnityEngine.XRModule";
	private const string er = "UnityEngine.XR.";
	private const string eS = "XRSettings";
	private const string es = "InputDevices";
	private const string eT = "XRNode";
	private const string et = "InputDevice";
	private const string eU = "GetDeviceAtXRNode";
	private const string eu = "enabled";
	private const string eV = "name";
	private const int ev = 2;
	private const string eW = "XRDevice";
	private const string ew = "model";

	// Methods

	// RVA: 0xA89FBC Offset: 0xA85FBC VA: 0xA89FBC
	internal static string RJ() { }

	// RVA: 0xA8A1B4 Offset: 0xA861B4 VA: 0xA8A1B4
	private static bool Rj() { }

	// RVA: 0xA8A3A4 Offset: 0xA863A4 VA: 0xA8A3A4
	private static string RK() { }

	// RVA: 0xA8A49C Offset: 0xA8649C VA: 0xA8A49C
	private static object Rk(Type ) { }

	// RVA: 0xA8A2B4 Offset: 0xA862B4 VA: 0xA8A2B4
	private static Type RL(string , string ) { }
}


// Namespace: Adverty.Native.Interface
public interface ISystemVersion : INativeClass // TypeDefIndex: 6068
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string GetSystemVersion();
}


// Namespace: Adverty.a.B
internal static class aBb // TypeDefIndex: 6069
{
	// Fields
	private static ISystemVersion eX; // 0x0

	// Methods

	// RVA: 0xA8A624 Offset: 0xA86624 VA: 0xA8A624
	public static ISystemVersion Rl() { }
}


// Namespace: Adverty.a.d
internal class ado : acv // TypeDefIndex: 6070
{
	// Fields
	private static readonly IIosNativeUtils kz; // 0x0

	// Methods

	// RVA: 0xA8A708 Offset: 0xA86708 VA: 0xA8A708
	private static void .cctor() { }

	// RVA: 0xA8A798 Offset: 0xA86798 VA: 0xA8A798 Slot: 16
	protected override void nz() { }

	// RVA: 0xA8A8A4 Offset: 0xA868A4 VA: 0xA8A8A4 Slot: 17
	protected override void OA() { }

	// RVA: 0xA8A978 Offset: 0xA86978 VA: 0xA8A978 Slot: 18
	protected override void Oa() { }

	// RVA: 0xA8AA44 Offset: 0xA86A44 VA: 0xA8AA44 Slot: 14
	public override void mX(Action<string, bool, int, string> ) { }

	// RVA: 0xA8AB50 Offset: 0xA86B50 VA: 0xA8AB50 Slot: 15
	public override NativeIABData mx() { }

	// RVA: 0xA84858 Offset: 0xA80858 VA: 0xA84858
	public void .ctor() { }
}


// Namespace: Adverty.a.d
internal class adp : acz, aaj // TypeDefIndex: 6071
{
	// Fields
	private const string LA = "var event = new MouseEvent(\'click\', {{\n                \'view\': window,\n                \'bubbles\': true,\n                \'cancelable\': true,\n                \'screenX\': {0},\n                \'screenY\': {1}\n            }});\n            var element = document.elementFromPoint({0}, {1});\n            element.dispatchEvent(event);";
	private IntPtr La; // 0x90
	private Texture2D LB; // 0x98

	// Methods

	// RVA: 0xA8AC48 Offset: 0xA86C48 VA: 0xA8AC48
	private static void .cctor() { }

	// RVA: 0xA874BC Offset: 0xA834BC VA: 0xA874BC
	public void .ctor(aaz ) { }

	// RVA: 0xA8AE04 Offset: 0xA86E04 VA: 0xA8AE04 Slot: 43
	protected override void Ob() { }

	// RVA: 0xA8AF08 Offset: 0xA86F08 VA: 0xA8AF08 Slot: 38
	public override void Nh(Vector2 ) { }

	// RVA: 0xA8B0C0 Offset: 0xA870C0 VA: 0xA8B0C0 Slot: 37
	public override void NH() { }

	// RVA: 0xA8B1BC Offset: 0xA871BC VA: 0xA8B1BC Slot: 36
	public override void Update() { }

	// RVA: 0xA8B1C0 Offset: 0xA871C0 VA: 0xA8B1C0 Slot: 32
	public override void OB() { }

	// RVA: 0xA8B1E8 Offset: 0xA871E8 VA: 0xA8B1E8 Slot: 42
	public override void NG() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class aBc.A // TypeDefIndex: 6072
{
	// Fields
	public Camera JI; // 0x10
	public CommandBuffer Ji; // 0x18

	// Methods

	// RVA: 0xA8B6A8 Offset: 0xA876A8 VA: 0xA8B6A8
	public void .ctor() { }

	// RVA: 0xA8B6B0 Offset: 0xA876B0 VA: 0xA8B6B0
	internal void Wy() { }
}


// Namespace: Adverty.a.B
internal static class aBc // TypeDefIndex: 6073
{
	// Fields
	private const string ex = "Shaders/AndroidExternalTextureCopy";
	private static readonly Material eY; // 0x0

	// Methods

	// RVA: 0xA8B33C Offset: 0xA8733C VA: 0xA8B33C
	private static void .cctor() { }

	// RVA: 0xA8B438 Offset: 0xA87438 VA: 0xA8B438
	public static void RM(Texture , Texture ) { }
}


// Namespace: Adverty.a.D
internal class aDb : aao // TypeDefIndex: 6074
{
	// Fields
	private const string JJ = "com.adverty.android.Debug";
	private const string Jj = "Initialize";
	private static readonly AndroidJavaClass JK; // 0x0

	// Methods

	// RVA: 0xA8B738 Offset: 0xA87738 VA: 0xA8B738
	private static void .cctor() { }

	// RVA: 0xA8B7E0 Offset: 0xA877E0 VA: 0xA8B7E0 Slot: 4
	internal override void NK() { }

	// RVA: 0xA82DE4 Offset: 0xA7EDE4 VA: 0xA82DE4
	public void .ctor() { }
}


// Namespace: Adverty.a.B
internal static class aBd // TypeDefIndex: 6075
{
	// Fields
	public const int ey = 0;
	public const int eZ = 1;

	// Methods

	// RVA: 0xA8B8AC Offset: 0xA878AC VA: 0xA8B8AC
	public static bool Rm() { }

	// RVA: 0xA8B93C Offset: 0xA8793C VA: 0xA8B93C
	public static int RN() { }
}


// Namespace: Adverty.a.d
internal class adq : acv // TypeDefIndex: 6076
{
	// Fields
	private const string Lb = "com.adverty.android.utils.SystemLocale";
	private const string LC = "com.adverty.android.utils.VolumeKeyListener";
	private const string Lc = "com.adverty.android.utils.UserAgentGenerator";
	private const string LD = "getSystemLanguage";
	private const string Ld = "Create";
	private const string LE = "GetUserAgent";
	private static readonly AndroidJavaClass Le; // 0x0
	private static readonly AndroidJavaClass LF; // 0x8
	private static readonly AndroidJavaClass Lf; // 0x10
	private static readonly IAndroidNativeUtils LG; // 0x18

	// Methods

	// RVA: 0xA8B958 Offset: 0xA87958 VA: 0xA8B958
	private static void .cctor() { }

	// RVA: 0xA8BACC Offset: 0xA87ACC VA: 0xA8BACC Slot: 16
	protected override void nz() { }

	// RVA: 0xA8BC44 Offset: 0xA87C44 VA: 0xA8BC44 Slot: 17
	protected override void OA() { }

	// RVA: 0xA8BD3C Offset: 0xA87D3C VA: 0xA8BD3C Slot: 18
	protected override void Oa() { }

	// RVA: 0xA8BE84 Offset: 0xA87E84 VA: 0xA8BE84 Slot: 14
	public override void mX(Action<string, bool, int, string> ) { }

	// RVA: 0xA8BF8C Offset: 0xA87F8C VA: 0xA8BF8C Slot: 15
	public override NativeIABData mx() { }

	// RVA: 0xA84868 Offset: 0xA80868 VA: 0xA84868
	public void .ctor() { }
}


// Namespace: Adverty.a.E
internal class aEn : adr // TypeDefIndex: 6077
{
	// Methods

	// RVA: 0xA876BC Offset: 0xA836BC VA: 0xA876BC
	public void .ctor(aaz ) { }

	// RVA: 0xA8C4F8 Offset: 0xA884F8 VA: 0xA8C4F8 Slot: 44
	protected override void OC() { }

	// RVA: 0xA8C6B0 Offset: 0xA886B0 VA: 0xA8C6B0 Slot: 36
	public override void Update() { }

	// RVA: 0xA8C730 Offset: 0xA88730 VA: 0xA8C730 Slot: 42
	public override void NG() { }
}


// Namespace: Adverty.a.B
internal static class aBe // TypeDefIndex: 6078
{
	// Fields
	private static readonly IAndroidRenderingPlugin ez; // 0x0

	// Methods

	// RVA: 0xA8C8C0 Offset: 0xA888C0 VA: 0xA8C8C0
	private static void .cctor() { }

	// RVA: 0xA8C984 Offset: 0xA88984 VA: 0xA8C984
	public static void Rn(IntPtr , int , int , int , int ) { }

	// RVA: 0xA8CA88 Offset: 0xA88A88 VA: 0xA8CA88
	public static void RO(int ) { }
}


// Namespace: Adverty.a.E
internal class aEo : adr // TypeDefIndex: 6079
{
	// Methods

	// RVA: 0xA876C8 Offset: 0xA836C8 VA: 0xA876C8
	public void .ctor(aaz ) { }

	// RVA: 0xA8CB58 Offset: 0xA88B58 VA: 0xA8CB58 Slot: 42
	public override void NG() { }

	// RVA: 0xA8CD18 Offset: 0xA88D18 VA: 0xA8CD18 Slot: 36
	public override void Update() { }
}


// Namespace: Adverty.a.d
internal abstract class adr : acz, aaj // TypeDefIndex: 6080
{
	// Fields
	protected const string Lg = "com.adverty.android.webviewtexture.AdvertyWebView";
	protected const string LH = "Initialize";
	protected const string Lh = "getTextureId";
	protected const string LI = "loadUrl";
	protected const string Li = "loadHtml";
	protected const string LJ = "draw";
	protected const string Lj = "update";
	protected const string LK = "destroy";
	protected const string Lk = "touch";
	protected AndroidJavaObject LL; // 0x90
	private bool Ll; // 0x98
	[CompilerGenerated]
	private Texture LM; // 0xA0
	[CompilerGenerated]
	private RenderTexture Lm; // 0xA8

	// Methods

	// RVA: 0xA8C084 Offset: 0xA88084 VA: 0xA8C084
	protected void .ctor(aaz , int ) { }

	// RVA: 0xA8CD1C Offset: 0xA88D1C VA: 0xA8CD1C Slot: 43
	protected override void Ob() { }

	// RVA: 0xA8CE00 Offset: 0xA88E00 VA: 0xA8CE00 Slot: 37
	public override void NH() { }

	// RVA: 0xA8CE9C Offset: 0xA88E9C VA: 0xA8CE9C Slot: 38
	public override void Nh(Vector2 ) { }

	[CompilerGenerated]
	// RVA: 0xA8C728 Offset: 0xA88728 VA: 0xA8C728
	protected Texture Za() { }

	[CompilerGenerated]
	// RVA: 0xA8C698 Offset: 0xA88698 VA: 0xA8C698
	protected void ZB(Texture ) { }

	[CompilerGenerated]
	// RVA: 0xA8C6A8 Offset: 0xA886A8 VA: 0xA8C6A8
	protected RenderTexture Zb() { }

	[CompilerGenerated]
	// RVA: 0xA8C6A0 Offset: 0xA886A0 VA: 0xA8C6A0
	protected void ZC(RenderTexture ) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class CameraPositionHolder.A // TypeDefIndex: 6081
{
	// Fields
	public static readonly CameraPositionHolder.A Jk; // 0x0
	public static Func<bool> JL; // 0x8

	// Methods

	// RVA: 0xA8D7A0 Offset: 0xA897A0 VA: 0xA8D7A0
	private static void .cctor() { }

	// RVA: 0xA8D7FC Offset: 0xA897FC VA: 0xA8D7FC
	public void .ctor() { }

	// RVA: 0xA8D804 Offset: 0xA89804 VA: 0xA8D804
	internal bool WZ() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class CameraPositionHolder.a // TypeDefIndex: 6082
{
	// Fields
	public Vector3 Jl; // 0x10

	// Methods

	// RVA: 0xA8D4A4 Offset: 0xA894A4 VA: 0xA8D4A4
	public void .ctor() { }

	// RVA: 0xA8D80C Offset: 0xA8980C VA: 0xA8D80C
	internal float Wz(Vector3 ) { }
}


// Namespace: Adverty.LazyLoad
public class CameraPositionHolder // TypeDefIndex: 6083
{
	// Fields
	private const int FA = 5;
	private const int Fa = 1;
	private readonly LinkedList<Vector3> FB; // 0x10
	private readonly aag Fb; // 0x18
	[CompilerGenerated]
	private Action FC; // 0x20

	// Methods

	[CompilerGenerated]
	// RVA: 0xA8CFFC Offset: 0xA88FFC VA: 0xA8CFFC
	internal void Ro(Action value) { }

	[CompilerGenerated]
	// RVA: 0xA8D098 Offset: 0xA89098 VA: 0xA8D098
	internal void RP(Action value) { }

	// RVA: 0xA8D134 Offset: 0xA89134 VA: 0xA8D134
	public void .ctor() { }

	// RVA: 0xA8D380 Offset: 0xA89380 VA: 0xA8D380
	public float GetMaxDistance(Vector3 sourcePosition) { }

	// RVA: 0xA8D4AC Offset: 0xA894AC VA: 0xA8D4AC
	public static bool IsObjectInTriggerArea(Vector3 position, float radius) { }

	// RVA: 0xA8D4EC Offset: 0xA894EC VA: 0xA8D4EC
	public static float GetDistanceToCamera(Vector3 position) { }

	// RVA: 0xA8D5F4 Offset: 0xA895F4 VA: 0xA8D5F4
	private static float Rp(Vector3 , Vector3 ) { }

	// RVA: 0xA8D618 Offset: 0xA89618 VA: 0xA8D618
	private void RQ() { }

	[CompilerGenerated]
	// RVA: 0xA8D770 Offset: 0xA89770 VA: 0xA8D770
	private void Rq() { }

	[CompilerGenerated]
	// RVA: 0xA8D788 Offset: 0xA89788 VA: 0xA8D788
	private void RR() { }
}


// Namespace: Adverty.a.B
internal static class aBf // TypeDefIndex: 6084
{
	// Fields
	[CompilerGenerated]
	private static aBh Fc; // 0x0
	[CompilerGenerated]
	private static CameraPositionHolder FD; // 0x8

	// Methods

	[CompilerGenerated]
	// RVA: 0xA8D838 Offset: 0xA89838 VA: 0xA8D838
	internal static aBh Rr() { }

	[CompilerGenerated]
	// RVA: 0xA8D880 Offset: 0xA89880 VA: 0xA8D880
	private static void RS(aBh ) { }

	[CompilerGenerated]
	// RVA: 0xA8D8CC Offset: 0xA898CC VA: 0xA8D8CC
	internal static CameraPositionHolder Rs() { }

	[CompilerGenerated]
	// RVA: 0xA8D914 Offset: 0xA89914 VA: 0xA8D914
	private static void RT(CameraPositionHolder ) { }

	// RVA: 0xA8D960 Offset: 0xA89960 VA: 0xA8D960
	internal static void Rt() { }
}


// Namespace: Adverty.a.B
internal class aBg // TypeDefIndex: 6085
{
	// Fields
	[CompilerGenerated]
	private float Fd; // 0x10
	private BaseUnit FE; // 0x18

	// Methods

	[CompilerGenerated]
	// RVA: 0xA8DBE8 Offset: 0xA89BE8 VA: 0xA8DBE8
	public float RU() { }

	[CompilerGenerated]
	// RVA: 0xA8DBF0 Offset: 0xA89BF0 VA: 0xA8DBF0
	private void Ru(float ) { }

	// RVA: 0xA8DBF8 Offset: 0xA89BF8 VA: 0xA8DBF8
	public void .ctor(BaseUnit ) { }

	// RVA: 0xA8DDB0 Offset: 0xA89DB0 VA: 0xA8DDB0
	public bool RV() { }

	// RVA: 0xA8DE14 Offset: 0xA89E14 VA: 0xA8DE14
	public void Start() { }

	// RVA: 0xA8DF94 Offset: 0xA89F94 VA: 0xA8DF94
	public void Rv() { }

	// RVA: 0xA8E1B8 Offset: 0xA8A1B8 VA: 0xA8E1B8
	public void RW() { }

	// RVA: 0xA8E1BC Offset: 0xA8A1BC VA: 0xA8E1BC
	private void Rw(IVisible ) { }

	// RVA: 0xA8E490 Offset: 0xA8A490 VA: 0xA8E490
	private void RX(BaseUnit ) { }

	// RVA: 0xA8E518 Offset: 0xA8A518 VA: 0xA8E518
	internal void Rx() { }

	// RVA: 0xA8E274 Offset: 0xA8A274 VA: 0xA8E274
	private void RY() { }

	// RVA: 0xA8E648 Offset: 0xA8A648 VA: 0xA8E648
	private void Ry() { }

	// RVA: 0xA8E6A8 Offset: 0xA8A6A8 VA: 0xA8E6A8
	private void RZ(float ) { }
}


// Namespace: Adverty.a.B
internal class aBh // TypeDefIndex: 6086
{
	// Fields
	private Dictionary<string, double> Fe; // 0x10
	private bool FF; // 0x18
	private const string Ff = "Adverty";
	private const string FG = "TriggerAreas_{0}{1}";
	private const string Fg = ".adv";
	private const string FH = "*.adv";
	private const int Fh = 2;
	private char[] FI; // 0x20

	// Methods

	// RVA: 0xA8E7AC Offset: 0xA8A7AC VA: 0xA8E7AC
	internal static string Rz() { }

	// RVA: 0xA8E89C Offset: 0xA8A89C VA: 0xA8E89C
	private static string rA() { }

	// RVA: 0xA8DA38 Offset: 0xA89A38 VA: 0xA8DA38
	public void .ctor() { }

	// RVA: 0xA8EC14 Offset: 0xA8AC14 VA: 0xA8EC14
	private void ra() { }

	// RVA: 0xA8E730 Offset: 0xA8A730 VA: 0xA8E730
	public void rB(string , float ) { }

	// RVA: 0xA8DD0C Offset: 0xA89D0C VA: 0xA8DD0C
	public float rb(string ) { }

	// RVA: 0xA8EC24 Offset: 0xA8AC24 VA: 0xA8EC24
	private void rC() { }

	// RVA: 0xA8E95C Offset: 0xA8A95C VA: 0xA8E95C
	private void rc() { }

	[CompilerGenerated]
	// RVA: 0xA8ED90 Offset: 0xA8AD90 VA: 0xA8ED90
	private void rD(bool ) { }
}


// Namespace: Adverty.Extensions
[Extension]
public static class ActionExtension // TypeDefIndex: 6087
{
	// Methods

	[Extension]
	// RVA: 0xA805C4 Offset: 0xA7C5C4 VA: 0xA805C4
	public static void SafeInvoke(Action action) { }

	[Extension]
	// RVA: -1 Offset: -1
	public static void SafeInvoke<T>(Action<T> action, T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6BD58 Offset: 0xB67D58 VA: 0xB6BD58
	|-ActionExtension.SafeInvoke<__Il2CppFullySharedGenericType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static void SafeInvoke<T, W>(Action<T, W> action, T aValue, W bValue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6BE28 Offset: 0xB67E28 VA: 0xB6BE28
	|-ActionExtension.SafeInvoke<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static void SafeInvoke<T, W, U>(Action<T, W, U> action, T aValue, W bValue, U cValue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6BF50 Offset: 0xB67F50 VA: 0xB6BF50
	|-ActionExtension.SafeInvoke<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static void SafeInvoke<T, W, U, V>(Action<T, W, U, V> action, T aValue, W bValue, U cValue, V dValue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6C0E0 Offset: 0xB680E0 VA: 0xB6C0E0
	|-ActionExtension.SafeInvoke<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	[Extension]
	// RVA: 0xA8EDA0 Offset: 0xA8ADA0 VA: 0xA8EDA0
	public static bool IsNull(Action action) { }

	[Extension]
	// RVA: -1 Offset: -1
	public static bool IsNull<T>(Action<T> action) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6BD34 Offset: 0xB67D34 VA: 0xB6BD34
	|-ActionExtension.IsNull<__Il2CppFullySharedGenericType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static bool IsNull<T, W>(Action<T, W> action) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6BD40 Offset: 0xB67D40 VA: 0xB6BD40
	|-ActionExtension.IsNull<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static bool IsNull<T, W, U>(Action<T, W, U> action) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6BD4C Offset: 0xB67D4C VA: 0xB6BD4C
	|-ActionExtension.IsNull<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	[Extension]
	// RVA: 0xA8EDAC Offset: 0xA8ADAC VA: 0xA8EDAC
	public static IntPtr ToIntPtr(Action action) { }

	[Extension]
	// RVA: -1 Offset: -1
	public static IntPtr ToIntPtr<T>(Action<T> action) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6C2D4 Offset: 0xB682D4 VA: 0xB6C2D4
	|-ActionExtension.ToIntPtr<__Il2CppFullySharedGenericType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static IntPtr ToIntPtr<T, W>(Action<T, W> action) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6C2DC Offset: 0xB682DC VA: 0xB6C2DC
	|-ActionExtension.ToIntPtr<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static IntPtr ToIntPtr<T, W, U>(Action<T, W, U> action) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6C2E4 Offset: 0xB682E4 VA: 0xB6C2E4
	|-ActionExtension.ToIntPtr<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class BaseUnitExtensions.A // TypeDefIndex: 6088
{
	// Fields
	public Rect JM; // 0x10

	// Methods

	// RVA: 0xA8F2D8 Offset: 0xA8B2D8 VA: 0xA8F2D8
	public void .ctor() { }

	// RVA: 0xA8F7E4 Offset: 0xA8B7E4 VA: 0xA8F7E4
	internal bool wA(Vector3 ) { }
}


// Namespace: Adverty.Extensions
[Extension]
public static class BaseUnitExtensions // TypeDefIndex: 6089
{
	// Methods

	[Extension]
	// RVA: 0xA8EDB4 Offset: 0xA8ADB4 VA: 0xA8EDB4
	internal static aAy.a rd(BaseUnit ) { }

	// RVA: 0xA8EFB8 Offset: 0xA8AFB8 VA: 0xA8EFB8
	private static aAy.a rE(UIUnitRenderer ) { }

	// RVA: 0xA8F140 Offset: 0xA8B140 VA: 0xA8F140
	private static aAy.a re(SpriteUnitRenderer ) { }

	// RVA: 0xA8F20C Offset: 0xA8B20C VA: 0xA8F20C
	private static aAy.a rF(MeshUnitRenderer ) { }

	// RVA: 0xA8F2E0 Offset: 0xA8B2E0 VA: 0xA8F2E0
	private static aAy.a rf(UnitRenderer , Camera , Vector3 ) { }

	// RVA: 0xA8F4C0 Offset: 0xA8B4C0 VA: 0xA8F4C0
	private static bool rG(Camera , Vector3 ) { }

	[Extension]
	// RVA: 0xA8F540 Offset: 0xA8B540 VA: 0xA8F540
	public static void SetViewportState(BaseUnit self, bool isInViewport) { }
}


// Namespace: Adverty.a.B
[Extension]
internal static class aBi // TypeDefIndex: 6090
{
	// Methods

	[Extension]
	// RVA: -1 Offset: -1
	public static bool rg<mF, mf>(Dictionary<mF, mf> ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB3114 Offset: 0xBAF114 VA: 0xBB3114
	|-aBi.rg<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/
}


// Namespace: Adverty.Extensions
[Extension]
public static class EnumExtension // TypeDefIndex: 6091
{
	// Methods

	[Extension]
	// RVA: -1 Offset: -1
	public static T GetAttribute<T>(Enum value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7F500 Offset: 0xB7B500 VA: 0xB7F500
	|-EnumExtension.GetAttribute<object>
	*/

	[Extension]
	// RVA: 0xA8F828 Offset: 0xA8B828 VA: 0xA8F828
	public static string ToName(Enum value) { }

	[Extension]
	// RVA: 0xA8F898 Offset: 0xA8B898 VA: 0xA8F898
	public static string[] ToStringArray(Enum value) { }
}


// Namespace: Adverty.Extensions
[Extension]
public static class FuncExtension // TypeDefIndex: 6092
{
	// Methods

	[Extension]
	// RVA: -1 Offset: -1
	public static T SafeInvoke<T>(Func<T> action) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8AFE0 Offset: 0xB86FE0 VA: 0xB8AFE0
	|-FuncExtension.SafeInvoke<__Il2CppFullySharedGenericType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static W SafeInvoke<T, W>(Func<T, W> action, T aValue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8B118 Offset: 0xB87118 VA: 0xB8B118
	|-FuncExtension.SafeInvoke<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/
}


// Namespace: Adverty.a.B
[Extension]
internal static class aBj // TypeDefIndex: 6093
{
	// Methods

	[Extension]
	// RVA: 0xA8F984 Offset: 0xA8B984 VA: 0xA8F984
	public static bool rH(int ) { }

	[Extension]
	// RVA: 0xA8F990 Offset: 0xA8B990 VA: 0xA8F990
	public static bool rh(int , int , int ) { }
}


// Namespace: Adverty.a.B
[Extension]
internal static class aBk // TypeDefIndex: 6094
{
	// Methods

	[Extension]
	// RVA: 0xA8F9A8 Offset: 0xA8B9A8 VA: 0xA8F9A8
	public static bool rI(IList ) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class MeshExtension.A // TypeDefIndex: 6095
{
	// Fields
	public static readonly MeshExtension.A Jm; // 0x0
	public static Func<Vector3, bool> JN; // 0x8
	public static Func<Vector3, bool> Jn; // 0x10

	// Methods

	// RVA: 0xA8FC44 Offset: 0xA8BC44 VA: 0xA8FC44
	private static void .cctor() { }

	// RVA: 0xA8FCA0 Offset: 0xA8BCA0 VA: 0xA8FCA0
	public void .ctor() { }

	// RVA: 0xA8FCA8 Offset: 0xA8BCA8 VA: 0xA8FCA8
	internal bool wa(Vector3 ) { }

	// RVA: 0xA8FCB4 Offset: 0xA8BCB4 VA: 0xA8FCB4
	internal bool wB(Vector3 ) { }
}


// Namespace: Adverty.Extensions
[Extension]
public static class MeshExtension // TypeDefIndex: 6096
{
	// Methods

	[Extension]
	// RVA: 0xA8FA58 Offset: 0xA8BA58 VA: 0xA8FA58
	public static bool IsMeshDoubleSided(Mesh mesh) { }
}


// Namespace: Adverty.a.B
[Extension]
internal static class aBl // TypeDefIndex: 6097
{
	// Methods

	[Extension]
	// RVA: -1 Offset: -1
	public static bool ri<mG>(Queue<mG> ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB3160 Offset: 0xBAF160 VA: 0xBB3160
	|-aBl.ri<__Il2CppFullySharedGenericType>
	*/
}


// Namespace: Adverty.a.B
internal static class aBm // TypeDefIndex: 6098
{
	// Methods

	// RVA: 0xA887B4 Offset: 0xA847B4 VA: 0xA887B4
	internal static void rJ(Object ) { }
}


// Namespace: Adverty.a.B
[Extension]
internal static class aBn // TypeDefIndex: 6099
{
	// Methods

	[Extension]
	// RVA: -1 Offset: -1
	public static mg rj<mg>(string ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB3194 Offset: 0xBAF194 VA: 0xBB3194
	|-aBn.rj<__Il2CppFullySharedGenericType>
	*/
}


// Namespace: Adverty.a.B
[Extension]
internal static class aBo // TypeDefIndex: 6100
{
	// Methods

	[Extension]
	// RVA: 0xA8FCC0 Offset: 0xA8BCC0 VA: 0xA8FCC0
	internal static aCv rK(UnitData ) { }

	// RVA: 0xA8FD4C Offset: 0xA8BD4C VA: 0xA8FD4C
	private static UnitType rk(string ) { }
}


// Namespace: Adverty.a.B
[Extension]
internal static class aBp // TypeDefIndex: 6101
{
	// Fields
	public const string Fi = "[Deleted] Unit";

	// Methods

	[Extension]
	// RVA: 0xA8F704 Offset: 0xA8B704 VA: 0xA8F704
	internal static string rL(BaseUnit ) { }
}


// Namespace: Adverty.DebugMode
[DisallowMultipleComponent]
public abstract class DebugComponent : MonoBehaviour // TypeDefIndex: 6102
{
	// Methods

	// RVA: 0xA8FDF0 Offset: 0xA8BDF0 VA: 0xA8FDF0
	protected void .ctor() { }
}


// Namespace: Adverty.DebugMode
public static class DebugModeManager // TypeDefIndex: 6103
{
	// Methods

	// RVA: -1 Offset: -1
	public static void AddComponent<T>(GameObject gameObject) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7D534 Offset: 0xB79534 VA: 0xB7D534
	|-DebugModeManager.AddComponent<object>
	*/

	// RVA: -1 Offset: -1
	public static void RemoveComponent<T>(GameObject gameObject) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7D640 Offset: 0xB79640 VA: 0xB7D640
	|-DebugModeManager.RemoveComponent<object>
	*/

	// RVA: -1 Offset: -1
	public static void AddComponentToAll<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7D574 Offset: 0xB79574 VA: 0xB7D574
	|-DebugModeManager.AddComponentToAll<object>
	*/

	// RVA: -1 Offset: -1
	public static void RemoveComponentFromAll<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7D680 Offset: 0xB79680 VA: 0xB7D680
	|-DebugModeManager.RemoveComponentFromAll<object>
	*/
}


// Namespace: Adverty.DebugMode
public static class DebugSettings // TypeDefIndex: 6104
{
	// Fields
	[CompilerGenerated]
	private static Color FJ; // 0x0
	[CompilerGenerated]
	private static Color Fj; // 0x10

	// Properties
	public static Color ImpressionColor { get; set; }
	public static Color BounceBackColor { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA8FDF8 Offset: 0xA8BDF8 VA: 0xA8FDF8
	public static Color get_ImpressionColor() { }

	[CompilerGenerated]
	// RVA: 0xA8FE54 Offset: 0xA8BE54 VA: 0xA8FE54
	public static void set_ImpressionColor(Color value) { }

	[CompilerGenerated]
	// RVA: 0xA8FED0 Offset: 0xA8BED0 VA: 0xA8FED0
	public static Color get_BounceBackColor() { }

	[CompilerGenerated]
	// RVA: 0xA8FF2C Offset: 0xA8BF2C VA: 0xA8FF2C
	public static void set_BounceBackColor(Color value) { }

	// RVA: 0xA8FFA8 Offset: 0xA8BFA8 VA: 0xA8FFA8
	private static void .cctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ImpVizComponent.A : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 6105
{
	// Fields
	private int LN; // 0x10
	private object Ln; // 0x18
	public float LO; // 0x20
	public Material Lo; // 0x28
	public Color LP; // 0x30
	private float Lp; // 0x40
	private float LQ; // 0x44
	private float Lq; // 0x48

	// Methods

	[DebuggerHidden]
	// RVA: 0xA90420 Offset: 0xA8C420 VA: 0xA90420
	public void .ctor(int ) { }

	[DebuggerHidden]
	// RVA: 0xA9051C Offset: 0xA8C51C VA: 0xA9051C Slot: 5
	private void Zc() { }

	// RVA: 0xA90520 Offset: 0xA8C520 VA: 0xA90520 Slot: 6
	private bool MoveNext() { }

	[DebuggerHidden]
	// RVA: 0xA9073C Offset: 0xA8C73C VA: 0xA9073C Slot: 4
	private object ZD() { }

	[DebuggerHidden]
	// RVA: 0xA90744 Offset: 0xA8C744 VA: 0xA90744 Slot: 8
	private void Zd() { }

	[DebuggerHidden]
	// RVA: 0xA9077C Offset: 0xA8C77C VA: 0xA9077C Slot: 7
	private object ZE() { }
}


// Namespace: Adverty.DebugMode
[RequireComponent(typeof(BaseUnit))]
public class ImpVizComponent : DebugComponent // TypeDefIndex: 6106
{
	// Fields
	private BaseUnit JO; // 0x20
	private Coroutine Jo; // 0x28
	private const string JP = "_BaseColor";
	[SerializeField]
	private Color impressionColor; // 0x30
	[SerializeField]
	private Color bounceBackColor; // 0x40

	// Methods

	// RVA: 0xA8FFD8 Offset: 0xA8BFD8 VA: 0xA8FFD8
	protected void Awake() { }

	// RVA: 0xA900CC Offset: 0xA8C0CC VA: 0xA900CC
	protected void OnDestroy() { }

	// RVA: 0xA90208 Offset: 0xA8C208 VA: 0xA90208
	private void wb(int ) { }

	// RVA: 0xA90360 Offset: 0xA8C360 VA: 0xA90360
	private void wC(int ) { }

	// RVA: 0xA902C8 Offset: 0xA8C2C8 VA: 0xA902C8
	private static IEnumerator wc(float , Material , Color ) { }

	// RVA: 0xA90190 Offset: 0xA8C190 VA: 0xA90190
	private void wD() { }

	// RVA: 0xA90448 Offset: 0xA8C448 VA: 0xA90448
	public void .ctor() { }
}


// Namespace: Adverty.a.B
internal static class aBq // TypeDefIndex: 6107
{
	// Fields
	public const string FK = "Set-Cookie";
	public const string Fk = "Cookie";
	[CompilerGenerated]
	private static string FL; // 0x0

	// Methods

	// RVA: 0xA90784 Offset: 0xA8C784 VA: 0xA90784
	public static void rl(WebClient ) { }

	// RVA: 0xA90898 Offset: 0xA8C898 VA: 0xA90898
	public static bool rM() { }

	// RVA: 0xA908E8 Offset: 0xA8C8E8 VA: 0xA908E8
	public static void rm(WebClient ) { }

	// RVA: 0xA909AC Offset: 0xA8C9AC VA: 0xA909AC
	public static void rN() { }

	[CompilerGenerated]
	// RVA: 0xA90A28 Offset: 0xA8CA28 VA: 0xA90A28
	public static string rn() { }

	[CompilerGenerated]
	// RVA: 0xA9084C Offset: 0xA8C84C VA: 0xA9084C
	private static void rO(string ) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class aBr.A // TypeDefIndex: 6108
{
	// Fields
	public UnitData Jp; // 0x10

	// Methods

	// RVA: 0xA915F4 Offset: 0xA8D5F4 VA: 0xA915F4
	public void .ctor() { }

	// RVA: 0xA9183C Offset: 0xA8D83C VA: 0xA9183C
	internal bool wd(AdModel ) { }
}


// Namespace: Adverty.a.B
internal class aBr : aBv<aDd<AdRequestModel>, AdRequestModel, AdResponseModel> // TypeDefIndex: 6109
{
	// Fields
	private const string Fl = "No ad delivered to the request with Id {0}";
	private const string FM = "Ad recieved for the request with Id {0}";
	private List<UnitData> Fm; // 0x20
	private static int FN; // 0x0
	private static aBr Fn; // 0x8
	[CompilerGenerated]
	private static Action<Dictionary<aCv, aCg>> FO; // 0x10

	// Methods

	// RVA: 0xA90A70 Offset: 0xA8CA70 VA: 0xA90A70
	internal static int ro() { }

	[CompilerGenerated]
	// RVA: 0xA90B94 Offset: 0xA8CB94 VA: 0xA90B94
	internal static void rP(Action<Dictionary<aCv, aCg>> ) { }

	[CompilerGenerated]
	// RVA: 0xA90C64 Offset: 0xA8CC64 VA: 0xA90C64
	internal static void rp(Action<Dictionary<aCv, aCg>> ) { }

	// RVA: 0xA90D34 Offset: 0xA8CD34 VA: 0xA90D34 Slot: 5
	protected override string Nn() { }

	// RVA: 0xA90B1C Offset: 0xA8CB1C VA: 0xA90B1C
	private List<UnitData> rQ() { }

	// RVA: 0xA90AB4 Offset: 0xA8CAB4 VA: 0xA90AB4
	private static aBr rq() { }

	// RVA: 0xA90DCC Offset: 0xA8CDCC VA: 0xA90DCC
	private static void rR(aBr ) { }

	// RVA: 0xA90E18 Offset: 0xA8CE18 VA: 0xA90E18
	internal static void rr(UnitConfiguration ) { }

	// RVA: 0xA90F58 Offset: 0xA8CF58 VA: 0xA90F58
	internal static void rS() { }

	// RVA: 0xA90FC4 Offset: 0xA8CFC4 VA: 0xA90FC4 Slot: 16
	protected override void NO(abg ) { }

	// RVA: 0xA91044 Offset: 0xA8D044 VA: 0xA91044 Slot: 17
	protected override void No() { }

	// RVA: 0xA910E8 Offset: 0xA8D0E8 VA: 0xA910E8 Slot: 18
	protected override void NP(AdResponseModel ) { }

	// RVA: 0xA915FC Offset: 0xA8D5FC VA: 0xA915FC
	private static void rs() { }

	// RVA: 0xA90D84 Offset: 0xA8CD84 VA: 0xA90D84
	public void .ctor() { }
}


// Namespace: Adverty.a.B
internal class aBs : aBu<abh, DebugResponseModel> // TypeDefIndex: 6110
{
	// Fields
	public static Action<bool> Fo; // 0x0
	private const string FP = "fj7867545dycj162is8xzqvx90";

	// Methods

	// RVA: 0xA91850 Offset: 0xA8D850 VA: 0xA91850 Slot: 5
	protected override string Nn() { }

	// RVA: 0xA918A0 Offset: 0xA8D8A0 VA: 0xA918A0
	public static void rT() { }

	// RVA: 0xA919C8 Offset: 0xA8D9C8 VA: 0xA919C8 Slot: 11
	protected override abg Np() { }

	// RVA: 0xA91A60 Offset: 0xA8DA60 VA: 0xA91A60 Slot: 16
	protected override void NO(abg ) { }

	// RVA: 0xA91AD4 Offset: 0xA8DAD4 VA: 0xA91AD4 Slot: 17
	protected override void No() { }

	// RVA: 0xA91AD8 Offset: 0xA8DAD8 VA: 0xA91AD8 Slot: 18
	protected override void NP(DebugResponseModel ) { }

	// RVA: 0xA91980 Offset: 0xA8D980 VA: 0xA91980
	public void .ctor() { }
}


// Namespace: Adverty.a.B
internal class aBt : aBv<aDd<ImpressionRequestModel>, ImpressionRequestModel, DefaultResponseModel> // TypeDefIndex: 6111
{
	// Methods

	// RVA: 0xA91B54 Offset: 0xA8DB54 VA: 0xA91B54 Slot: 5
	protected override string Nn() { }

	// RVA: 0xA91BA4 Offset: 0xA8DBA4 VA: 0xA91BA4
	public static void rt(aCk ) { }

	// RVA: 0xA91D1C Offset: 0xA8DD1C VA: 0xA91D1C Slot: 17
	protected override void No() { }

	// RVA: 0xA91D20 Offset: 0xA8DD20 VA: 0xA91D20 Slot: 16
	protected override void NO(abg ) { }

	// RVA: 0xA91D24 Offset: 0xA8DD24 VA: 0xA91D24 Slot: 18
	protected override void NP(DefaultResponseModel ) { }

	// RVA: 0xA91CD4 Offset: 0xA8DCD4 VA: 0xA91CD4
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class aBu.A<mL, ml> // TypeDefIndex: 6112
{
	// Fields
	public aBu<mL, ml> JQ; // 0x0
	public abg Jq; // 0x0
	public Action JR; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC678C Offset: 0xBC278C VA: 0xBC678C
	|-aBu.A<object, object>..ctor
	*/

	// RVA: -1 Offset: -1
	internal void wE() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC6794 Offset: 0xBC2794 VA: 0xBC6794
	|-aBu.A<object, object>.wE
	*/

	// RVA: -1 Offset: -1
	internal void we() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC67BC Offset: 0xBC27BC VA: 0xBC67BC
	|-aBu.A<object, object>.we
	*/

	// RVA: -1 Offset: -1
	internal void wF() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC67E4 Offset: 0xBC27E4 VA: 0xBC67E4
	|-aBu.A<object, object>.wF
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class aBu.a<mM, mm> // TypeDefIndex: 6113
{
	// Fields
	public mm Jr; // 0x0
	public aBu.A<mM, mm> JS; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBDAC4 Offset: 0xCB9AC4 VA: 0xCBDAC4
	|-aBu.a<object, object>..ctor
	*/

	// RVA: -1 Offset: -1
	internal void wf() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBDACC Offset: 0xCB9ACC VA: 0xCBDACC
	|-aBu.a<object, object>.wf
	*/
}


// Namespace: Adverty.a.B
internal abstract class aBu<mH, mh> : aDc<mH> // TypeDefIndex: 6114
{
	// Fields
	private const string Fp = "Request url is empty";

	// Methods

	// RVA: -1 Offset: -1 Slot: 10
	protected override void NQ() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBBF80 Offset: 0xCB7F80 VA: 0xCBBF80
	|-aBu<object, object>.NQ
	*/

	// RVA: -1 Offset: -1 Slot: 11
	protected override abg Np() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBC0DC Offset: 0xCB80DC VA: 0xCBC0DC
	|-aBu<object, object>.Np
	*/

	// RVA: -1 Offset: -1
	private void rU(abg , int ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBC15C Offset: 0xCB815C VA: 0xCBC15C
	|-aBu<object, object>.rU
	*/

	// RVA: -1 Offset: -1 Slot: 15
	protected virtual void ru(abg ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBC3A0 Offset: 0xCB83A0 VA: 0xCBC3A0
	|-aBu<object, object>.ru
	*/

	// RVA: -1 Offset: -1 Slot: 12
	protected override void Nq(abg ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBC3B0 Offset: 0xCB83B0 VA: 0xCBC3B0
	|-aBu<object, object>.Nq
	*/

	// RVA: -1 Offset: -1 Slot: 13
	protected override void NR(abg ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBC3C0 Offset: 0xCB83C0 VA: 0xCBC3C0
	|-aBu<object, object>.NR
	*/

	// RVA: -1 Offset: -1 Slot: 14
	protected override void Nr(abg ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBC3D0 Offset: 0xCB83D0 VA: 0xCBC3D0
	|-aBu<object, object>.Nr
	*/

	// RVA: -1 Offset: -1 Slot: 16
	protected abstract void NO(abg );

	// RVA: -1 Offset: -1 Slot: 17
	protected virtual void No() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBC3E0 Offset: 0xCB83E0 VA: 0xCBC3E0
	|-aBu<object, object>.No
	*/

	// RVA: -1 Offset: -1 Slot: 18
	protected abstract void NP(mh );

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBC3E4 Offset: 0xCB83E4 VA: 0xCBC3E4
	|-aBu<object, object>..ctor
	*/
}


// Namespace: Adverty.a.B
internal abstract class aBv<mI, mi, mJ> : aBu<mI, mJ> // TypeDefIndex: 6115
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 11
	protected override abg Np() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBC3EC Offset: 0xCB83EC VA: 0xCBC3EC
	|-aBv<object, object, object>.Np
	*/

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBC608 Offset: 0xCB8608 VA: 0xCBC608
	|-aBv<object, object, object>..ctor
	*/
}


// Namespace: Adverty.a.B
internal class aBw : aBu<abh, LogResponseModel> // TypeDefIndex: 6116
{
	// Fields
	public static Action FQ; // 0x0
	public static Action Fq; // 0x8
	private byte[] FR; // 0x20

	// Methods

	// RVA: 0xA91D28 Offset: 0xA8DD28 VA: 0xA91D28 Slot: 5
	protected override string Nn() { }

	// RVA: 0xA91D78 Offset: 0xA8DD78 VA: 0xA91D78
	public static byte[] rV() { }

	// RVA: 0xA91E7C Offset: 0xA8DE7C VA: 0xA91E7C
	public static void rv(byte[] ) { }

	// RVA: 0xA91FB0 Offset: 0xA8DFB0 VA: 0xA91FB0 Slot: 11
	protected override abg Np() { }

	// RVA: 0xA92184 Offset: 0xA8E184 VA: 0xA92184 Slot: 16
	protected override void NO(abg ) { }

	// RVA: 0xA921F4 Offset: 0xA8E1F4 VA: 0xA921F4 Slot: 17
	protected override void No() { }

	// RVA: 0xA9223C Offset: 0xA8E23C VA: 0xA9223C Slot: 18
	protected override void NP(LogResponseModel ) { }

	// RVA: 0xA91F68 Offset: 0xA8DF68 VA: 0xA91F68
	public void .ctor() { }
}


// Namespace: 
public struct aBx.A // TypeDefIndex: 6117
{
	// Fields
	public string Js; // 0x0
	public SettingsData JT; // 0x8
	public LocalizationData Jt; // 0x110
	public LogSettingsModel JU; // 0x118
}


// Namespace: Adverty.a.B
internal class aBx : aBv<aDd<LoginRequestModel>, LoginRequestModel, LoginResponseModel> // TypeDefIndex: 6118
{
	// Fields
	public static Action<aBx.A> Fr; // 0x0
	public static Action FS; // 0x8

	// Methods

	// RVA: 0xA922F0 Offset: 0xA8E2F0 VA: 0xA922F0 Slot: 5
	protected override string Nn() { }

	// RVA: 0xA92340 Offset: 0xA8E340 VA: 0xA92340 Slot: 4
	protected override void NS(abg ) { }

	// RVA: 0xA92350 Offset: 0xA8E350 VA: 0xA92350 Slot: 16
	protected override void NO(abg ) { }

	// RVA: 0xA923AC Offset: 0xA8E3AC VA: 0xA923AC
	public static void rW() { }

	// RVA: 0xA9251C Offset: 0xA8E51C VA: 0xA9251C Slot: 18
	protected override void NP(LoginResponseModel ) { }

	// RVA: 0xA924D4 Offset: 0xA8E4D4 VA: 0xA924D4
	public void .ctor() { }
}


// Namespace: Adverty.a.B
internal abstract class aBy // TypeDefIndex: 6119
{
	// Fields
	[CompilerGenerated]
	private static Action Fs; // 0x0
	[CompilerGenerated]
	private static Action FT; // 0x8

	// Methods

	[CompilerGenerated]
	// RVA: 0xA925E8 Offset: 0xA8E5E8 VA: 0xA925E8
	public static void rw(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA926A0 Offset: 0xA8E6A0 VA: 0xA926A0
	public static void rX(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA92758 Offset: 0xA8E758 VA: 0xA92758
	public static void rx(Action ) { }

	[CompilerGenerated]
	// RVA: 0xA92814 Offset: 0xA8E814 VA: 0xA92814
	public static void rY(Action ) { }

	// RVA: 0xA928D0 Offset: 0xA8E8D0 VA: 0xA928D0 Slot: 4
	protected virtual void NS(abg ) { }

	// RVA: 0xA90FE0 Offset: 0xA8CFE0 VA: 0xA90FE0
	protected static void ry() { }

	// RVA: 0xA92934 Offset: 0xA8E934 VA: 0xA92934
	protected void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class aDc.A<mo> : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 6120
{
	// Fields
	private int LR; // 0x0
	private object Lr; // 0x0
	public aDc<mo> LS; // 0x0
	private float Ls; // 0x0

	// Methods

	[DebuggerHidden]
	// RVA: -1 Offset: -1
	public void .ctor(int ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC6210 Offset: 0xBC2210 VA: 0xBC6210
	|-aDc.A<object>..ctor
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 5
	private void Ze() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC6238 Offset: 0xBC2238 VA: 0xBC6238
	|-aDc.A<object>.Ze
	*/

	// RVA: -1 Offset: -1 Slot: 6
	private bool MoveNext() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC623C Offset: 0xBC223C VA: 0xBC623C
	|-aDc.A<object>.MoveNext
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 4
	private object ZF() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC644C Offset: 0xBC244C VA: 0xBC644C
	|-aDc.A<object>.ZF
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 8
	private void Zf() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC6454 Offset: 0xBC2454 VA: 0xBC6454
	|-aDc.A<object>.Zf
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 7
	private object ZG() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC6488 Offset: 0xBC2488 VA: 0xBC6488
	|-aDc.A<object>.ZG
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class aDc.a<mP> // TypeDefIndex: 6121
{
	// Fields
	public abg LT; // 0x0
	public Action<abg> Lt; // 0x0
	public Action LU; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBD850 Offset: 0xCB9850 VA: 0xCBD850
	|-aDc.a<object>..ctor
	*/

	// RVA: -1 Offset: -1
	internal void Zg() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBD858 Offset: 0xCB9858 VA: 0xCBD858
	|-aDc.a<object>.Zg
	*/

	// RVA: -1 Offset: -1
	internal void ZH() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBD8D4 Offset: 0xCB98D4 VA: 0xCBD8D4
	|-aDc.a<object>.ZH
	*/
}


// Namespace: Adverty.a.D
internal abstract class aDc<mN> : aBy // TypeDefIndex: 6122
{
	// Fields
	protected const string Ju = "sandbox.";
	private const string JV = "adserver.";
	private const string Jv = "Location";
	[CompilerGenerated]
	private mN JW; // 0x0
	[CompilerGenerated]
	private int Jw; // 0x0

	// Methods

	// RVA: -1 Offset: -1 Slot: 5
	protected abstract string Nn();

	// RVA: -1 Offset: -1
	protected static IMockServer wG() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBC610 Offset: 0xCB8610 VA: 0xCBC610
	|-aDc<object>.wG
	*/

	// RVA: -1 Offset: -1
	protected string wg() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBC650 Offset: 0xCB8650 VA: 0xCBC650
	|-aDc<object>.wg
	*/

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBC668 Offset: 0xCB8668 VA: 0xCBC668
	|-aDc<object>..ctor
	*/

	// RVA: -1 Offset: -1
	protected void .ctor(mN ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBC670 Offset: 0xCB8670 VA: 0xCBC670
	|-aDc<object>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 6
	protected virtual void Ns(abg , Action<abg> ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBC698 Offset: 0xCB8698 VA: 0xCBC698
	|-aDc<object>.Ns
	*/

	// RVA: -1 Offset: -1 Slot: 7
	protected virtual void wH(abg , Action<abg> ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBC818 Offset: 0xCB8818 VA: 0xCBC818
	|-aDc<object>.wH
	*/

	// RVA: -1 Offset: -1
	private IEnumerator wh() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBCA00 Offset: 0xCB8A00 VA: 0xCBCA00
	|-aDc<object>.wh
	*/

	// RVA: -1 Offset: -1 Slot: 8
	protected virtual void wI(abg ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBCA6C Offset: 0xCB8A6C VA: 0xCBCA6C
	|-aDc<object>.wI
	*/

	// RVA: -1 Offset: -1 Slot: 9
	protected virtual void wi(abg ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBCFA4 Offset: 0xCB8FA4 VA: 0xCBCFA4
	|-aDc<object>.wi
	*/

	// RVA: -1 Offset: -1
	protected static string wJ(WebHeaderCollection ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBD17C Offset: 0xCB917C VA: 0xCBD17C
	|-aDc<object>.wJ
	*/

	// RVA: -1 Offset: -1
	protected static string wj(WebHeaderCollection ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBD2B0 Offset: 0xCB92B0 VA: 0xCBD2B0
	|-aDc<object>.wj
	*/

	// RVA: -1 Offset: -1
	protected static string wK(string ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBD434 Offset: 0xCB9434 VA: 0xCBD434
	|-aDc<object>.wK
	*/

	// RVA: -1 Offset: -1 Slot: 10
	protected abstract void NQ();

	// RVA: -1 Offset: -1
	protected void wk(Action<abg> ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBD560 Offset: 0xCB9560 VA: 0xCBD560
	|-aDc<object>.wk
	*/

	// RVA: -1 Offset: -1 Slot: 11
	protected abstract abg Np();

	// RVA: -1 Offset: -1 Slot: 12
	protected abstract void Nq(abg );

	// RVA: -1 Offset: -1 Slot: 13
	protected abstract void NR(abg );

	// RVA: -1 Offset: -1 Slot: 14
	protected abstract void Nr(abg );

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	protected mN wL() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBD658 Offset: 0xCB9658 VA: 0xCBD658
	|-aDc<object>.wL
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	protected void wl(mN ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBD660 Offset: 0xCB9660 VA: 0xCBD660
	|-aDc<object>.wl
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	protected int wM() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBD668 Offset: 0xCB9668 VA: 0xCBD668
	|-aDc<object>.wM
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private void wm(int ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBD670 Offset: 0xCB9670 VA: 0xCBD670
	|-aDc<object>.wm
	*/
}


// Namespace: Adverty.a.b
internal class aBz : aBv<aDd<StageActionRequestModel>, StageActionRequestModel, DefaultResponseModel> // TypeDefIndex: 6123
{
	// Methods

	// RVA: 0xA9293C Offset: 0xA8E93C VA: 0xA9293C Slot: 5
	protected override string Nn() { }

	// RVA: 0xA9298C Offset: 0xA8E98C VA: 0xA9298C
	public static void rZ(string , string , StageActionType ) { }

	// RVA: 0xA92B1C Offset: 0xA8EB1C VA: 0xA92B1C Slot: 17
	protected override void No() { }

	// RVA: 0xA92B20 Offset: 0xA8EB20 VA: 0xA92B20 Slot: 16
	protected override void NO(abg ) { }

	// RVA: 0xA92B24 Offset: 0xA8EB24 VA: 0xA92B24 Slot: 18
	protected override void NP(DefaultResponseModel ) { }

	// RVA: 0xA92AD4 Offset: 0xA8EAD4 VA: 0xA92AD4
	public void .ctor() { }
}


// Namespace: Adverty.a.b
internal class aba : aBv<aDd<SummaryRequestModel>, SummaryRequestModel, DefaultResponseModel> // TypeDefIndex: 6124
{
	// Fields
	private static Dictionary<string, SummaryData> Ft; // 0x0
	private static aag FU; // 0x8

	// Methods

	// RVA: 0xA92B28 Offset: 0xA8EB28 VA: 0xA92B28 Slot: 5
	protected override string Nn() { }

	// RVA: 0xA92B78 Offset: 0xA8EB78 VA: 0xA92B78
	private static void .cctor() { }

	// RVA: 0xA92D68 Offset: 0xA8ED68 VA: 0xA92D68
	public static void rz(aCk ) { }

	// RVA: 0xA92E9C Offset: 0xA8EE9C VA: 0xA92E9C
	private static void SA() { }

	// RVA: 0xA92F00 Offset: 0xA8EF00 VA: 0xA92F00
	private static void Sa() { }

	// RVA: 0xA9312C Offset: 0xA8F12C VA: 0xA9312C Slot: 16
	protected override void NO(abg ) { }

	// RVA: 0xA93130 Offset: 0xA8F130 VA: 0xA93130 Slot: 17
	protected override void No() { }

	// RVA: 0xA931BC Offset: 0xA8F1BC VA: 0xA931BC Slot: 18
	protected override void NP(DefaultResponseModel ) { }

	// RVA: 0xA930E4 Offset: 0xA8F0E4 VA: 0xA930E4
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class abb.A // TypeDefIndex: 6125
{
	// Fields
	public abb JX; // 0x10
	public abg Jx; // 0x18

	// Methods

	// RVA: 0xA948DC Offset: 0xA908DC VA: 0xA948DC
	public void .ctor() { }

	// RVA: 0xA948E4 Offset: 0xA908E4 VA: 0xA948E4
	internal void wN() { }

	// RVA: 0xA9490C Offset: 0xA9090C VA: 0xA9490C
	internal void wn() { }

	// RVA: 0xA94934 Offset: 0xA90934 VA: 0xA94934
	internal void wO() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class abb.a // TypeDefIndex: 6126
{
	// Fields
	public byte[] JY; // 0x10
	public abb.A Jy; // 0x18

	// Methods

	// RVA: 0xA949A4 Offset: 0xA909A4 VA: 0xA949A4
	public void .ctor() { }

	// RVA: 0xA949AC Offset: 0xA909AC VA: 0xA949AC
	internal void wo() { }
}


// Namespace: Adverty.a.b
internal class abb : aDc<abh> // TypeDefIndex: 6127
{
	// Fields
	private readonly byte[] Fu; // 0x20
	private const string FV = "Invalid image data";
	private static Dictionary<string, Action<bool, aAv>> Fv; // 0x0
	private static Dictionary<string, Action<bool, aAv>> FW; // 0x8

	// Methods

	// RVA: 0xA931C0 Offset: 0xA8F1C0 VA: 0xA931C0 Slot: 5
	protected override string Nn() { }

	// RVA: 0xA93208 Offset: 0xA8F208 VA: 0xA93208
	private static void .cctor() { }

	// RVA: 0xA932B4 Offset: 0xA8F2B4 VA: 0xA932B4 Slot: 11
	protected override abg Np() { }

	// RVA: 0xA9334C Offset: 0xA8F34C VA: 0xA9334C Slot: 10
	protected override void NQ() { }

	// RVA: 0xA933E4 Offset: 0xA8F3E4 VA: 0xA933E4
	private void SB(abg , int ) { }

	// RVA: 0xA936D8 Offset: 0xA8F6D8 VA: 0xA936D8 Slot: 6
	protected override void Ns(abg , Action<abg> ) { }

	// RVA: 0xA936F8 Offset: 0xA8F6F8 VA: 0xA936F8
	private void Sb(byte[] ) { }

	// RVA: 0xA93B60 Offset: 0xA8FB60 VA: 0xA93B60 Slot: 13
	protected override void NR(abg ) { }

	// RVA: 0xA93CC0 Offset: 0xA8FCC0 VA: 0xA93CC0 Slot: 12
	protected override void Nq(abg ) { }

	// RVA: 0xA93CC4 Offset: 0xA8FCC4 VA: 0xA93CC4 Slot: 14
	protected override void Nr(abg ) { }

	// RVA: 0xA93A58 Offset: 0xA8FA58 VA: 0xA93A58
	protected void SC(string ) { }

	// RVA: 0xA93658 Offset: 0xA8F658 VA: 0xA93658
	private static bool Sc(byte[] , byte[] ) { }

	// RVA: 0xA93834 Offset: 0xA8F834 VA: 0xA93834
	private void SD(aAv ) { }

	// RVA: 0xA93B64 Offset: 0xA8FB64 VA: 0xA93B64
	private void Sd() { }

	// RVA: 0xA93E8C Offset: 0xA8FE8C VA: 0xA93E8C
	public static void SE(string , Action<bool, aAv> ) { }

	// RVA: 0xA93CC8 Offset: 0xA8FCC8 VA: 0xA93CC8
	private void Se() { }

	// RVA: 0xA940F4 Offset: 0xA900F4 VA: 0xA940F4
	private static void SF() { }

	// RVA: 0xA945A0 Offset: 0xA905A0 VA: 0xA945A0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0xA94638 Offset: 0xA90638 VA: 0xA94638
	private void Sf(abg ) { }
}


// Namespace: Adverty.Communication
public class AdvertyWebClient : WebClient // TypeDefIndex: 6128
{
	// Methods

	// RVA: 0xA949D8 Offset: 0xA909D8 VA: 0xA949D8 Slot: 19
	protected override WebRequest GetWebRequest(Uri address) { }

	// RVA: 0xA94C34 Offset: 0xA90C34 VA: 0xA94C34
	public void .ctor() { }
}


// Namespace: Adverty.a.b
internal class abc : aBv<aDd<StageImpressionRequestModel>, StageImpressionRequestModel, DefaultResponseModel> // TypeDefIndex: 6129
{
	// Methods

	// RVA: 0xA94C8C Offset: 0xA90C8C VA: 0xA94C8C Slot: 5
	protected override string Nn() { }

	// RVA: 0xA94CDC Offset: 0xA90CDC VA: 0xA94CDC
	public static void SG(string ) { }

	// RVA: 0xA94E74 Offset: 0xA90E74 VA: 0xA94E74 Slot: 17
	protected override void No() { }

	// RVA: 0xA94E78 Offset: 0xA90E78 VA: 0xA94E78 Slot: 16
	protected override void NO(abg ) { }

	// RVA: 0xA94E80 Offset: 0xA90E80 VA: 0xA94E80 Slot: 18
	protected override void NP(DefaultResponseModel ) { }

	// RVA: 0xA94E08 Offset: 0xA90E08 VA: 0xA94E08
	public void .ctor() { }
}


// Namespace: Adverty.a.b
internal class abd : IDisposable // TypeDefIndex: 6130
{
	// Fields
	internal byte[] Fw; // 0x10

	// Methods

	// RVA: 0xA94E84 Offset: 0xA90E84 VA: 0xA94E84
	public byte[] Sg() { }

	// RVA: 0xA94E8C Offset: 0xA90E8C VA: 0xA94E8C
	public string SH() { }

	// RVA: 0xA94EC0 Offset: 0xA90EC0 VA: 0xA94EC0 Slot: 4
	public void Dispose() { }

	// RVA: 0xA94E90 Offset: 0xA90E90 VA: 0xA94E90
	internal string Sh() { }

	// RVA: 0xA94EC8 Offset: 0xA90EC8 VA: 0xA94EC8
	public void .ctor() { }
}


// Namespace: Adverty.a.b
internal class abe : IDisposable // TypeDefIndex: 6131
{
	// Fields
	[CompilerGenerated]
	private byte[] FX; // 0x10
	[CompilerGenerated]
	private string Fx; // 0x18

	// Methods

	[CompilerGenerated]
	// RVA: 0xA94ED0 Offset: 0xA90ED0 VA: 0xA94ED0
	public byte[] SI() { }

	[CompilerGenerated]
	// RVA: 0xA94ED8 Offset: 0xA90ED8 VA: 0xA94ED8
	private void Si(byte[] ) { }

	[CompilerGenerated]
	// RVA: 0xA94EE0 Offset: 0xA90EE0 VA: 0xA94EE0
	public string SJ() { }

	[CompilerGenerated]
	// RVA: 0xA94EE8 Offset: 0xA90EE8 VA: 0xA94EE8
	private void Sj(string ) { }

	// RVA: 0xA94EF0 Offset: 0xA90EF0 VA: 0xA94EF0
	public void .ctor(string ) { }

	// RVA: 0xA94F40 Offset: 0xA90F40 VA: 0xA94F40
	public void .ctor(byte[] ) { }

	// RVA: 0xA94FA8 Offset: 0xA90FA8 VA: 0xA94FA8 Slot: 4
	public void Dispose() { }
}


// Namespace: Adverty.a.b
internal enum abf // TypeDefIndex: 6132
{
	// Fields
	public int value__; // 0x0
	public const abf FY = 0;
	public const abf Fy = 1;
}


// Namespace: 
[CompilerGenerated]
private sealed class abg.A // TypeDefIndex: 6133
{
	// Fields
	public abg JZ; // 0x10
	public byte[] Jz; // 0x18

	// Methods

	// RVA: 0xA95E80 Offset: 0xA91E80 VA: 0xA95E80
	public void .ctor() { }

	// RVA: 0xA95FAC Offset: 0xA91FAC VA: 0xA95FAC
	internal void wP() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class abg.a // TypeDefIndex: 6134
{
	// Fields
	public static readonly abg.a jA; // 0x0
	public static Action ja; // 0x8

	// Methods

	// RVA: 0xA96090 Offset: 0xA92090 VA: 0xA96090
	private static void .cctor() { }

	// RVA: 0xA960EC Offset: 0xA920EC VA: 0xA960EC
	public void .ctor() { }

	// RVA: 0xA960F4 Offset: 0xA920F4 VA: 0xA960F4
	internal void wp() { }
}


// Namespace: Adverty.a.b
internal class abg : IDisposable // TypeDefIndex: 6135
{
	// Fields
	[CompilerGenerated]
	private Action<abg, int> FZ; // 0x10
	[CompilerGenerated]
	private abe Fz; // 0x18
	[CompilerGenerated]
	private abd fA; // 0x20
	[CompilerGenerated]
	private string fa; // 0x28
	[CompilerGenerated]
	private string fB; // 0x30
	[CompilerGenerated]
	private int fb; // 0x38
	[CompilerGenerated]
	private static Dictionary<string, string> fC; // 0x0
	[CompilerGenerated]
	private WebHeaderCollection fc; // 0x40
	private AdvertyWebClient fD; // 0x48
	private abf fd; // 0x50

	// Methods

	[CompilerGenerated]
	// RVA: 0xA94FB0 Offset: 0xA90FB0 VA: 0xA94FB0
	internal void SK(Action<abg, int> ) { }

	[CompilerGenerated]
	// RVA: 0xA95060 Offset: 0xA91060 VA: 0xA95060
	internal void Sk(Action<abg, int> ) { }

	[CompilerGenerated]
	// RVA: 0xA95110 Offset: 0xA91110 VA: 0xA95110
	internal abe SL() { }

	[CompilerGenerated]
	// RVA: 0xA95118 Offset: 0xA91118 VA: 0xA95118
	internal void Sl(abe ) { }

	[CompilerGenerated]
	// RVA: 0xA95120 Offset: 0xA91120 VA: 0xA95120
	internal abd SM() { }

	[CompilerGenerated]
	// RVA: 0xA95128 Offset: 0xA91128 VA: 0xA95128
	private void Sm(abd ) { }

	[CompilerGenerated]
	// RVA: 0xA95130 Offset: 0xA91130 VA: 0xA95130
	internal string SN() { }

	[CompilerGenerated]
	// RVA: 0xA95138 Offset: 0xA91138 VA: 0xA95138
	private void Sn(string ) { }

	[CompilerGenerated]
	// RVA: 0xA95140 Offset: 0xA91140 VA: 0xA95140
	internal string SO() { }

	[CompilerGenerated]
	// RVA: 0xA95148 Offset: 0xA91148 VA: 0xA95148
	private void So(string ) { }

	[CompilerGenerated]
	// RVA: 0xA95150 Offset: 0xA91150 VA: 0xA95150
	internal int SP() { }

	[CompilerGenerated]
	// RVA: 0xA95158 Offset: 0xA91158 VA: 0xA95158
	private void Sp(int ) { }

	// RVA: 0xA95160 Offset: 0xA91160 VA: 0xA95160
	internal bool SQ() { }

	// RVA: 0xA95170 Offset: 0xA91170 VA: 0xA95170
	internal bool Sq() { }

	// RVA: 0xA95180 Offset: 0xA91180 VA: 0xA95180
	internal bool SR() { }

	[CompilerGenerated]
	// RVA: 0xA9519C Offset: 0xA9119C VA: 0xA9519C
	private static Dictionary<string, string> Sr() { }

	[CompilerGenerated]
	// RVA: 0xA951F4 Offset: 0xA911F4 VA: 0xA951F4
	private static void SS(Dictionary<string, string> ) { }

	[CompilerGenerated]
	// RVA: 0xA95250 Offset: 0xA91250 VA: 0xA95250
	internal WebHeaderCollection Ss() { }

	[CompilerGenerated]
	// RVA: 0xA95258 Offset: 0xA91258 VA: 0xA95258
	private void ST(WebHeaderCollection ) { }

	// RVA: 0xA95260 Offset: 0xA91260 VA: 0xA95260
	internal WebHeaderCollection St() { }

	// RVA: 0xA9527C Offset: 0xA9127C VA: 0xA9527C
	private static void .cctor() { }

	// RVA: 0xA953A4 Offset: 0xA913A4 VA: 0xA953A4
	internal void .ctor(string , abf  = 0) { }

	// RVA: 0xA953DC Offset: 0xA913DC VA: 0xA953DC
	private void SU() { }

	// RVA: 0xA956D4 Offset: 0xA916D4 VA: 0xA956D4
	internal void Su() { }

	// RVA: 0xA9568C Offset: 0xA9168C VA: 0xA9568C
	internal void SV(string , string ) { }

	// RVA: 0xA956F0 Offset: 0xA916F0 VA: 0xA956F0
	internal void Sv() { }

	// RVA: 0xA95920 Offset: 0xA91920 VA: 0xA95920
	private void SW(WebException ) { }

	// RVA: 0xA9570C Offset: 0xA9170C VA: 0xA9570C
	private void Sw() { }

	// RVA: 0xA95ACC Offset: 0xA91ACC VA: 0xA95ACC
	private void SX(object , UploadDataCompletedEventArgs ) { }

	// RVA: 0xA9581C Offset: 0xA9181C VA: 0xA9581C
	private void Sx() { }

	// RVA: 0xA95DB0 Offset: 0xA91DB0 VA: 0xA95DB0
	private void SY(object , DownloadDataCompletedEventArgs ) { }

	// RVA: 0xA95B9C Offset: 0xA91B9C VA: 0xA95B9C
	private bool Sy(AsyncCompletedEventArgs ) { }

	// RVA: 0xA95C6C Offset: 0xA91C6C VA: 0xA95C6C
	private void SZ(byte[] ) { }

	// RVA: 0xA95E88 Offset: 0xA91E88 VA: 0xA95E88 Slot: 4
	public void Dispose() { }
}


// Namespace: Adverty.Communication
public interface IMockServer // TypeDefIndex: 6136
{
	// Properties
	public abstract bool IsMockServerEnabled { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool get_IsMockServerEnabled();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void Initialize();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void GetRequest<T>(Action<T> callback, T request, string url, Action<int, string, string> onError);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void SimulateRequest<T>(string url, byte[] inputData, Action<T> onResponse, Action<int, string, string> onError);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void SetupResponse(string requestName, string responseBody);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void SetupImageUrl(string imageUrl);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void SetupHtmlData(string htmlData);

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void ClearAllCustomResponses();
}


// Namespace: Adverty.Communication
public static class MockServerManager // TypeDefIndex: 6137
{
	// Fields
	[CompilerGenerated]
	private static IMockServer fE; // 0x0

	// Properties
	public static IMockServer MockServer { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA96180 Offset: 0xA92180 VA: 0xA96180
	public static IMockServer get_MockServer() { }

	[CompilerGenerated]
	// RVA: 0xA961C8 Offset: 0xA921C8 VA: 0xA961C8
	public static void set_MockServer(IMockServer value) { }
}


// Namespace: Adverty.a.b
internal class abh // TypeDefIndex: 6138
{
	// Fields
	[CompilerGenerated]
	private string fe; // 0x10

	// Methods

	// RVA: 0xA96214 Offset: 0xA92214 VA: 0xA96214
	public void .ctor() { }

	// RVA: 0xA9621C Offset: 0xA9221C VA: 0xA9621C
	public void .ctor(string ) { }

	[CompilerGenerated]
	// RVA: 0xA9624C Offset: 0xA9224C VA: 0xA9624C
	public string Sz() { }

	[CompilerGenerated]
	// RVA: 0xA96244 Offset: 0xA92244 VA: 0xA96244
	public void sA(string ) { }
}


// Namespace: Adverty.a.D
internal class aDd<mn> : abh // TypeDefIndex: 6139
{
	// Fields
	[CompilerGenerated]
	private mn jB; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(string , mn ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBD678 Offset: 0xCB9678 VA: 0xCBD678
	|-aDd<object>..ctor
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public mn wQ() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBD6A0 Offset: 0xCB96A0 VA: 0xCBD6A0
	|-aDd<object>.wQ
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public void wq(mn ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBD6A8 Offset: 0xCB96A8 VA: 0xCBD6A8
	|-aDd<object>.wq
	*/
}


// Namespace: Adverty.Communication.Models
internal struct AdModel // TypeDefIndex: 6140
{
	// Fields
	[CompilerGenerated]
	private int <adUnitId>k__BackingField; // 0x0
	[CompilerGenerated]
	private string <adId>k__BackingField; // 0x8
	[CompilerGenerated]
	private AdStageData[] <stages>k__BackingField; // 0x10

	// Properties
	public int adUnitId { get; set; }
	public string adId { get; set; }
	public AdStageData[] stages { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA96254 Offset: 0xA92254 VA: 0xA96254
	public int get_adUnitId() { }

	[CompilerGenerated]
	// RVA: 0xA9625C Offset: 0xA9225C VA: 0xA9625C
	public void set_adUnitId(int value) { }

	[CompilerGenerated]
	// RVA: 0xA96264 Offset: 0xA92264 VA: 0xA96264
	public string get_adId() { }

	[CompilerGenerated]
	// RVA: 0xA9626C Offset: 0xA9226C VA: 0xA9626C
	public void set_adId(string value) { }

	[CompilerGenerated]
	// RVA: 0xA96274 Offset: 0xA92274 VA: 0xA96274
	public AdStageData[] get_stages() { }

	[CompilerGenerated]
	// RVA: 0xA9627C Offset: 0xA9227C VA: 0xA9627C
	public void set_stages(AdStageData[] value) { }

	// RVA: 0xA96284 Offset: 0xA92284 VA: 0xA96284
	public bool IsEmpty() { }

	// RVA: 0xA96290 Offset: 0xA92290 VA: 0xA96290
	public aCg ToAdData() { }
}


// Namespace: Adverty.Communication.Models
internal class AdRenderedRequestModel : SignedRequestModel // TypeDefIndex: 6141
{
	// Fields
	[CompilerGenerated]
	private string <adId>k__BackingField; // 0x20

	// Properties
	public string adId { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA96460 Offset: 0xA92460 VA: 0xA96460
	public string get_adId() { }

	[CompilerGenerated]
	// RVA: 0xA96468 Offset: 0xA92468 VA: 0xA96468
	public void set_adId(string value) { }

	// RVA: 0xA96470 Offset: 0xA92470 VA: 0xA96470
	public void .ctor(string id) { }
}


// Namespace: Adverty.Communication.Models
internal class AdRequestModel : SignedRequestModel // TypeDefIndex: 6142
{
	// Fields
	[CompilerGenerated]
	private UnitData[] <adUnits>k__BackingField; // 0x20
	[CompilerGenerated]
	private HardwareModel <hardwareDescription>k__BackingField; // 0x28
	[CompilerGenerated]
	private Dictionary<string, string> <userDescription>k__BackingField; // 0xB8
	[CompilerGenerated]
	private string <sdkVersion>k__BackingField; // 0xC0

	// Properties
	public UnitData[] adUnits { get; set; }
	public HardwareModel hardwareDescription { get; set; }
	public Dictionary<string, string> userDescription { get; set; }
	public string sdkVersion { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA96584 Offset: 0xA92584 VA: 0xA96584
	public UnitData[] get_adUnits() { }

	[CompilerGenerated]
	// RVA: 0xA9658C Offset: 0xA9258C VA: 0xA9658C
	private void set_adUnits(UnitData[] value) { }

	[CompilerGenerated]
	// RVA: 0xA96594 Offset: 0xA92594 VA: 0xA96594
	public HardwareModel get_hardwareDescription() { }

	[CompilerGenerated]
	// RVA: 0xA965A4 Offset: 0xA925A4 VA: 0xA965A4
	private void set_hardwareDescription(HardwareModel value) { }

	[CompilerGenerated]
	// RVA: 0xA965BC Offset: 0xA925BC VA: 0xA965BC
	public Dictionary<string, string> get_userDescription() { }

	[CompilerGenerated]
	// RVA: 0xA965C4 Offset: 0xA925C4 VA: 0xA965C4
	private void set_userDescription(Dictionary<string, string> value) { }

	[CompilerGenerated]
	// RVA: 0xA965CC Offset: 0xA925CC VA: 0xA965CC
	public string get_sdkVersion() { }

	[CompilerGenerated]
	// RVA: 0xA965D4 Offset: 0xA925D4 VA: 0xA965D4
	private void set_sdkVersion(string value) { }

	// RVA: 0xA965DC Offset: 0xA925DC VA: 0xA965DC
	public void .ctor(UnitData[] unitModels) { }
}


// Namespace: 
public struct AdResponseModel.Data // TypeDefIndex: 6143
{
	// Fields
	[CompilerGenerated]
	private AdModel[] <ads>k__BackingField; // 0x0

	// Properties
	public AdModel[] ads { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA96CF8 Offset: 0xA92CF8 VA: 0xA96CF8
	public AdModel[] get_ads() { }

	[CompilerGenerated]
	// RVA: 0xA96D00 Offset: 0xA92D00 VA: 0xA96D00
	public void set_ads(AdModel[] value) { }
}


// Namespace: Adverty.Communication.Models
internal class AdResponseModel : ResponseModel // TypeDefIndex: 6144
{
	// Fields
	[CompilerGenerated]
	private AdResponseModel.Data <data>k__BackingField; // 0x18

	// Properties
	public AdResponseModel.Data data { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA96CD8 Offset: 0xA92CD8 VA: 0xA96CD8
	public AdResponseModel.Data get_data() { }

	[CompilerGenerated]
	// RVA: 0xA96CE0 Offset: 0xA92CE0 VA: 0xA96CE0
	public void set_data(AdResponseModel.Data value) { }

	// RVA: 0xA96CE8 Offset: 0xA92CE8 VA: 0xA96CE8
	public void .ctor() { }
}


// Namespace: Adverty.Communication.Models
internal struct AdStageData // TypeDefIndex: 6145
{
	// Fields
	[CompilerGenerated]
	private string <url>k__BackingField; // 0x0
	[CompilerGenerated]
	private string <adm>k__BackingField; // 0x8
	[CompilerGenerated]
	private string <name>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <width>k__BackingField; // 0x18
	[CompilerGenerated]
	private int <height>k__BackingField; // 0x1C

	// Properties
	public string url { get; set; }
	public string adm { get; set; }
	public string name { get; set; }
	public int width { get; set; }
	public int height { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA96D08 Offset: 0xA92D08 VA: 0xA96D08
	public string get_url() { }

	[CompilerGenerated]
	// RVA: 0xA96D10 Offset: 0xA92D10 VA: 0xA96D10
	public void set_url(string value) { }

	[CompilerGenerated]
	// RVA: 0xA96D18 Offset: 0xA92D18 VA: 0xA96D18
	public string get_adm() { }

	[CompilerGenerated]
	// RVA: 0xA96D20 Offset: 0xA92D20 VA: 0xA96D20
	public void set_adm(string value) { }

	[CompilerGenerated]
	// RVA: 0xA96D28 Offset: 0xA92D28 VA: 0xA96D28
	public string get_name() { }

	[CompilerGenerated]
	// RVA: 0xA96D30 Offset: 0xA92D30 VA: 0xA96D30
	public void set_name(string value) { }

	[CompilerGenerated]
	// RVA: 0xA96D38 Offset: 0xA92D38 VA: 0xA96D38
	public int get_width() { }

	[CompilerGenerated]
	// RVA: 0xA96D40 Offset: 0xA92D40 VA: 0xA96D40
	public void set_width(int value) { }

	[CompilerGenerated]
	// RVA: 0xA96D48 Offset: 0xA92D48 VA: 0xA96D48
	public int get_height() { }

	[CompilerGenerated]
	// RVA: 0xA96D50 Offset: 0xA92D50 VA: 0xA96D50
	public void set_height(int value) { }

	// RVA: 0xA963B4 Offset: 0xA923B4 VA: 0xA963B4
	public aCn ToAdStage() { }
}


// Namespace: Adverty.Communication.Models
internal class DebugResponseModel : ResponseModel // TypeDefIndex: 6146
{
	// Fields
	[CompilerGenerated]
	private bool <IsDebugEnabled>k__BackingField; // 0x18

	// Properties
	public bool IsDebugEnabled { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA96D58 Offset: 0xA92D58 VA: 0xA96D58
	public bool get_IsDebugEnabled() { }

	[CompilerGenerated]
	// RVA: 0xA96D60 Offset: 0xA92D60 VA: 0xA96D60
	public void set_IsDebugEnabled(bool value) { }

	// RVA: 0xA96D6C Offset: 0xA92D6C VA: 0xA96D6C
	public void .ctor() { }
}


// Namespace: Adverty.Communication.Models
internal class DefaultResponseModel : ResponseModel // TypeDefIndex: 6147
{
	// Methods

	// RVA: 0xA96D74 Offset: 0xA92D74 VA: 0xA96D74
	public void .ctor() { }
}


// Namespace: Adverty.Communication.Models
internal struct ErrorMessageModel // TypeDefIndex: 6148
{
	// Fields
	[CompilerGenerated]
	private int <code>k__BackingField; // 0x0
	[CompilerGenerated]
	private string <detail>k__BackingField; // 0x8

	// Properties
	public int code { get; set; }
	public string detail { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA96D7C Offset: 0xA92D7C VA: 0xA96D7C
	public int get_code() { }

	[CompilerGenerated]
	// RVA: 0xA96D84 Offset: 0xA92D84 VA: 0xA96D84
	public void set_code(int value) { }

	[CompilerGenerated]
	// RVA: 0xA96D8C Offset: 0xA92D8C VA: 0xA96D8C
	public string get_detail() { }

	[CompilerGenerated]
	// RVA: 0xA96D94 Offset: 0xA92D94 VA: 0xA96D94
	public void set_detail(string value) { }

	// RVA: 0xA96D9C Offset: 0xA92D9C VA: 0xA96D9C Slot: 3
	public override string ToString() { }
}


// Namespace: Adverty.Communication.Models
internal struct HardwareModel // TypeDefIndex: 6149
{
	// Fields
	[CompilerGenerated]
	private string <os>k__BackingField; // 0x0
	[CompilerGenerated]
	private string <platform>k__BackingField; // 0x8
	[CompilerGenerated]
	private string <deviceModel>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <deviceType>k__BackingField; // 0x18
	[CompilerGenerated]
	private string <graphicsAPI>k__BackingField; // 0x20
	[CompilerGenerated]
	private string <advertisingID>k__BackingField; // 0x28
	[CompilerGenerated]
	private string <deviceID>k__BackingField; // 0x30
	[CompilerGenerated]
	private bool <limitedAdTracking>k__BackingField; // 0x38
	[CompilerGenerated]
	private int <trackingAuthorizationStatus>k__BackingField; // 0x3C
	[CompilerGenerated]
	private string <hmd>k__BackingField; // 0x40
	[CompilerGenerated]
	private bool <supportsComputeShaders>k__BackingField; // 0x48
	[CompilerGenerated]
	private string <locale>k__BackingField; // 0x50
	[CompilerGenerated]
	private string <connectionType>k__BackingField; // 0x58
	[CompilerGenerated]
	private string <userAgent>k__BackingField; // 0x60
	[CompilerGenerated]
	private string <unityVersion>k__BackingField; // 0x68
	[CompilerGenerated]
	private ScreenResolution <screenResolution>k__BackingField; // 0x70
	[CompilerGenerated]
	private RenderPipelineData <renderPipelineData>k__BackingField; // 0x78
	private bool isDataShareEnabled; // 0x88

	// Properties
	public string os { get; set; }
	public string platform { get; set; }
	public string deviceModel { get; set; }
	public string deviceType { get; set; }
	public string graphicsAPI { get; set; }
	public string advertisingID { get; set; }
	public string deviceID { get; set; }
	public bool limitedAdTracking { get; set; }
	public int trackingAuthorizationStatus { get; set; }
	public string hmd { get; set; }
	public bool supportsComputeShaders { get; set; }
	public string locale { get; set; }
	public string connectionType { get; set; }
	public string userAgent { get; set; }
	public string unityVersion { get; set; }
	public ScreenResolution screenResolution { get; set; }
	public RenderPipelineData renderPipelineData { get; set; }
	private static bool IsDataShareEnabled { get; }
	private string AdvertisingId { get; }
	private string DeviceId { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA96E24 Offset: 0xA92E24 VA: 0xA96E24
	public string get_os() { }

	[CompilerGenerated]
	// RVA: 0xA96E2C Offset: 0xA92E2C VA: 0xA96E2C
	public void set_os(string value) { }

	[CompilerGenerated]
	// RVA: 0xA96E34 Offset: 0xA92E34 VA: 0xA96E34
	public string get_platform() { }

	[CompilerGenerated]
	// RVA: 0xA96E3C Offset: 0xA92E3C VA: 0xA96E3C
	public void set_platform(string value) { }

	[CompilerGenerated]
	// RVA: 0xA96E44 Offset: 0xA92E44 VA: 0xA96E44
	public string get_deviceModel() { }

	[CompilerGenerated]
	// RVA: 0xA96E4C Offset: 0xA92E4C VA: 0xA96E4C
	public void set_deviceModel(string value) { }

	[CompilerGenerated]
	// RVA: 0xA96E54 Offset: 0xA92E54 VA: 0xA96E54
	public string get_deviceType() { }

	[CompilerGenerated]
	// RVA: 0xA96E5C Offset: 0xA92E5C VA: 0xA96E5C
	public void set_deviceType(string value) { }

	[CompilerGenerated]
	// RVA: 0xA96E64 Offset: 0xA92E64 VA: 0xA96E64
	public string get_graphicsAPI() { }

	[CompilerGenerated]
	// RVA: 0xA96E6C Offset: 0xA92E6C VA: 0xA96E6C
	public void set_graphicsAPI(string value) { }

	[CompilerGenerated]
	// RVA: 0xA96E74 Offset: 0xA92E74 VA: 0xA96E74
	public string get_advertisingID() { }

	[CompilerGenerated]
	// RVA: 0xA96E7C Offset: 0xA92E7C VA: 0xA96E7C
	public void set_advertisingID(string value) { }

	[CompilerGenerated]
	// RVA: 0xA96E84 Offset: 0xA92E84 VA: 0xA96E84
	public string get_deviceID() { }

	[CompilerGenerated]
	// RVA: 0xA96E8C Offset: 0xA92E8C VA: 0xA96E8C
	public void set_deviceID(string value) { }

	[CompilerGenerated]
	// RVA: 0xA96E94 Offset: 0xA92E94 VA: 0xA96E94
	public bool get_limitedAdTracking() { }

	[CompilerGenerated]
	// RVA: 0xA96E9C Offset: 0xA92E9C VA: 0xA96E9C
	public void set_limitedAdTracking(bool value) { }

	[CompilerGenerated]
	// RVA: 0xA96EA8 Offset: 0xA92EA8 VA: 0xA96EA8
	public int get_trackingAuthorizationStatus() { }

	[CompilerGenerated]
	// RVA: 0xA96EB0 Offset: 0xA92EB0 VA: 0xA96EB0
	public void set_trackingAuthorizationStatus(int value) { }

	[CompilerGenerated]
	// RVA: 0xA96EB8 Offset: 0xA92EB8 VA: 0xA96EB8
	public string get_hmd() { }

	[CompilerGenerated]
	// RVA: 0xA96EC0 Offset: 0xA92EC0 VA: 0xA96EC0
	public void set_hmd(string value) { }

	[CompilerGenerated]
	// RVA: 0xA96EC8 Offset: 0xA92EC8 VA: 0xA96EC8
	public bool get_supportsComputeShaders() { }

	[CompilerGenerated]
	// RVA: 0xA96ED0 Offset: 0xA92ED0 VA: 0xA96ED0
	public void set_supportsComputeShaders(bool value) { }

	[CompilerGenerated]
	// RVA: 0xA96EDC Offset: 0xA92EDC VA: 0xA96EDC
	public string get_locale() { }

	[CompilerGenerated]
	// RVA: 0xA96EE4 Offset: 0xA92EE4 VA: 0xA96EE4
	public void set_locale(string value) { }

	[CompilerGenerated]
	// RVA: 0xA96EEC Offset: 0xA92EEC VA: 0xA96EEC
	public string get_connectionType() { }

	[CompilerGenerated]
	// RVA: 0xA96EF4 Offset: 0xA92EF4 VA: 0xA96EF4
	public void set_connectionType(string value) { }

	[CompilerGenerated]
	// RVA: 0xA96EFC Offset: 0xA92EFC VA: 0xA96EFC
	public string get_userAgent() { }

	[CompilerGenerated]
	// RVA: 0xA96F04 Offset: 0xA92F04 VA: 0xA96F04
	public void set_userAgent(string value) { }

	[CompilerGenerated]
	// RVA: 0xA96F0C Offset: 0xA92F0C VA: 0xA96F0C
	public string get_unityVersion() { }

	[CompilerGenerated]
	// RVA: 0xA96F14 Offset: 0xA92F14 VA: 0xA96F14
	public void set_unityVersion(string value) { }

	[CompilerGenerated]
	// RVA: 0xA96F1C Offset: 0xA92F1C VA: 0xA96F1C
	public ScreenResolution get_screenResolution() { }

	[CompilerGenerated]
	// RVA: 0xA96F24 Offset: 0xA92F24 VA: 0xA96F24
	public void set_screenResolution(ScreenResolution value) { }

	[CompilerGenerated]
	// RVA: 0xA96F2C Offset: 0xA92F2C VA: 0xA96F2C
	public RenderPipelineData get_renderPipelineData() { }

	[CompilerGenerated]
	// RVA: 0xA96F38 Offset: 0xA92F38 VA: 0xA96F38
	public void set_renderPipelineData(RenderPipelineData value) { }

	// RVA: 0xA96F40 Offset: 0xA92F40 VA: 0xA96F40
	private static bool get_IsDataShareEnabled() { }

	// RVA: 0xA97000 Offset: 0xA93000 VA: 0xA97000
	private string get_AdvertisingId() { }

	// RVA: 0xA97088 Offset: 0xA93088 VA: 0xA97088
	private string get_DeviceId() { }

	// RVA: 0xA97120 Offset: 0xA93120 VA: 0xA97120
	private static ScreenResolution GetScreenResolution() { }

	// RVA: 0xA96790 Offset: 0xA92790 VA: 0xA96790
	internal bool IsEmpty() { }

	// RVA: 0xA9679C Offset: 0xA9279C VA: 0xA9679C
	internal void Fill() { }

	// RVA: 0xA96B9C Offset: 0xA92B9C VA: 0xA96B9C
	internal void Update() { }
}


// Namespace: Adverty.Communication.Models
internal class ImpressionRequestModel : SignedRequestModel // TypeDefIndex: 6150
{
	// Fields
	[CompilerGenerated]
	private string <adId>k__BackingField; // 0x20
	[CompilerGenerated]
	private int <fovCoverage>k__BackingField; // 0x28
	[CompilerGenerated]
	private int <blockingOpacity>k__BackingField; // 0x2C
	[CompilerGenerated]
	private int <lightCondition>k__BackingField; // 0x30
	[CompilerGenerated]
	private string <adPlacementId>k__BackingField; // 0x38

	// Properties
	public string adId { get; set; }
	public int fovCoverage { get; set; }
	public int blockingOpacity { get; set; }
	public int lightCondition { get; set; }
	public string adPlacementId { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA971B8 Offset: 0xA931B8 VA: 0xA971B8
	public string get_adId() { }

	[CompilerGenerated]
	// RVA: 0xA971C0 Offset: 0xA931C0 VA: 0xA971C0
	public void set_adId(string value) { }

	[CompilerGenerated]
	// RVA: 0xA971C8 Offset: 0xA931C8 VA: 0xA971C8
	public int get_fovCoverage() { }

	[CompilerGenerated]
	// RVA: 0xA971D0 Offset: 0xA931D0 VA: 0xA971D0
	public void set_fovCoverage(int value) { }

	[CompilerGenerated]
	// RVA: 0xA971D8 Offset: 0xA931D8 VA: 0xA971D8
	public int get_blockingOpacity() { }

	[CompilerGenerated]
	// RVA: 0xA971E0 Offset: 0xA931E0 VA: 0xA971E0
	public void set_blockingOpacity(int value) { }

	[CompilerGenerated]
	// RVA: 0xA971E8 Offset: 0xA931E8 VA: 0xA971E8
	public int get_lightCondition() { }

	[CompilerGenerated]
	// RVA: 0xA971F0 Offset: 0xA931F0 VA: 0xA971F0
	public void set_lightCondition(int value) { }

	[CompilerGenerated]
	// RVA: 0xA971F8 Offset: 0xA931F8 VA: 0xA971F8
	public string get_adPlacementId() { }

	[CompilerGenerated]
	// RVA: 0xA97200 Offset: 0xA93200 VA: 0xA97200
	public void set_adPlacementId(string value) { }

	// RVA: 0xA97208 Offset: 0xA93208 VA: 0xA97208
	public void .ctor(aCk sessionData) { }
}


// Namespace: Adverty.Communication.Models
internal struct LocalizationData // TypeDefIndex: 6151
{
	// Fields
	[CompilerGenerated]
	private string <adWatermark>k__BackingField; // 0x0

	// Properties
	public string adWatermark { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA97330 Offset: 0xA93330 VA: 0xA97330
	public string get_adWatermark() { }

	[CompilerGenerated]
	// RVA: 0xA97338 Offset: 0xA93338 VA: 0xA97338
	public void set_adWatermark(string value) { }
}


// Namespace: Adverty.Communication.Models
internal class LogRequestModel : RequestModel // TypeDefIndex: 6152
{
	// Fields
	[CompilerGenerated]
	private string <accessToken>k__BackingField; // 0x10

	// Properties
	public string accessToken { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA97340 Offset: 0xA93340 VA: 0xA97340
	public string get_accessToken() { }

	[CompilerGenerated]
	// RVA: 0xA97348 Offset: 0xA93348 VA: 0xA97348
	public void set_accessToken(string value) { }

	// RVA: 0xA97350 Offset: 0xA93350 VA: 0xA97350
	public void .ctor() { }
}


// Namespace: 
public struct LogResponseModel.Data // TypeDefIndex: 6153
{
	// Fields
	[CompilerGenerated]
	private bool <allowSendingLogs>k__BackingField; // 0x0

	// Properties
	public bool allowSendingLogs { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA9741C Offset: 0xA9341C VA: 0xA9741C
	public bool get_allowSendingLogs() { }

	[CompilerGenerated]
	// RVA: 0xA97424 Offset: 0xA93424 VA: 0xA97424
	public void set_allowSendingLogs(bool value) { }
}


// Namespace: Adverty.Communication.Models
internal class LogResponseModel : ResponseModel // TypeDefIndex: 6154
{
	// Fields
	[CompilerGenerated]
	private LogResponseModel.Data <data>k__BackingField; // 0x18

	// Properties
	public LogResponseModel.Data data { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA97404 Offset: 0xA93404 VA: 0xA97404
	public LogResponseModel.Data get_data() { }

	[CompilerGenerated]
	// RVA: 0xA9740C Offset: 0xA9340C VA: 0xA9740C
	public void set_data(LogResponseModel.Data value) { }

	// RVA: 0xA97414 Offset: 0xA93414 VA: 0xA97414
	public void .ctor() { }
}


// Namespace: Adverty.Communication.Models
internal struct LogSettingsModel // TypeDefIndex: 6155
{
	// Fields
	[CompilerGenerated]
	private bool <allowSendingLogs>k__BackingField; // 0x0
	[CompilerGenerated]
	private int <maxSizeBytes>k__BackingField; // 0x4

	// Properties
	public bool allowSendingLogs { get; set; }
	public int maxSizeBytes { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA97430 Offset: 0xA93430 VA: 0xA97430
	public bool get_allowSendingLogs() { }

	[CompilerGenerated]
	// RVA: 0xA97438 Offset: 0xA93438 VA: 0xA97438
	public void set_allowSendingLogs(bool value) { }

	[CompilerGenerated]
	// RVA: 0xA97444 Offset: 0xA93444 VA: 0xA97444
	public int get_maxSizeBytes() { }

	[CompilerGenerated]
	// RVA: 0xA9744C Offset: 0xA9344C VA: 0xA9744C
	public void set_maxSizeBytes(int value) { }
}


// Namespace: Adverty.Communication.Models
internal class LoginRequestModel : RequestModel // TypeDefIndex: 6156
{
	// Fields
	[CompilerGenerated]
	private string <clientKey>k__BackingField; // 0x10
	[CompilerGenerated]
	private HardwareModel <hardwareDescription>k__BackingField; // 0x18
	[CompilerGenerated]
	private string <sdkVersion>k__BackingField; // 0xA8
	[CompilerGenerated]
	private Dictionary<string, string> <userDescription>k__BackingField; // 0xB0
	[CompilerGenerated]
	private Dictionary<string, bool> <localSettings>k__BackingField; // 0xB8

	// Properties
	public string clientKey { get; set; }
	public HardwareModel hardwareDescription { get; set; }
	public string sdkVersion { get; set; }
	public Dictionary<string, string> userDescription { get; set; }
	public Dictionary<string, bool> localSettings { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA97454 Offset: 0xA93454 VA: 0xA97454
	public string get_clientKey() { }

	[CompilerGenerated]
	// RVA: 0xA9745C Offset: 0xA9345C VA: 0xA9745C
	private void set_clientKey(string value) { }

	[CompilerGenerated]
	// RVA: 0xA97464 Offset: 0xA93464 VA: 0xA97464
	public HardwareModel get_hardwareDescription() { }

	[CompilerGenerated]
	// RVA: 0xA97474 Offset: 0xA93474 VA: 0xA97474
	private void set_hardwareDescription(HardwareModel value) { }

	[CompilerGenerated]
	// RVA: 0xA9748C Offset: 0xA9348C VA: 0xA9748C
	public string get_sdkVersion() { }

	[CompilerGenerated]
	// RVA: 0xA97494 Offset: 0xA93494 VA: 0xA97494
	private void set_sdkVersion(string value) { }

	[CompilerGenerated]
	// RVA: 0xA9749C Offset: 0xA9349C VA: 0xA9749C
	public Dictionary<string, string> get_userDescription() { }

	[CompilerGenerated]
	// RVA: 0xA974A4 Offset: 0xA934A4 VA: 0xA974A4
	private void set_userDescription(Dictionary<string, string> value) { }

	[CompilerGenerated]
	// RVA: 0xA974AC Offset: 0xA934AC VA: 0xA974AC
	public Dictionary<string, bool> get_localSettings() { }

	[CompilerGenerated]
	// RVA: 0xA974B4 Offset: 0xA934B4 VA: 0xA974B4
	private void set_localSettings(Dictionary<string, bool> value) { }

	// RVA: 0xA974BC Offset: 0xA934BC VA: 0xA974BC
	public void .ctor() { }
}


// Namespace: 
public struct LoginResponseModel.Data // TypeDefIndex: 6157
{
	// Fields
	[CompilerGenerated]
	private string <accessToken>k__BackingField; // 0x0
	[CompilerGenerated]
	private LocalizationData <localization>k__BackingField; // 0x8
	[CompilerGenerated]
	private LoginResponseModel.SettingsModel <settings>k__BackingField; // 0x10
	[CompilerGenerated]
	private LogSettingsModel <logSettings>k__BackingField; // 0x120

	// Properties
	public string accessToken { get; set; }
	public LocalizationData localization { get; set; }
	public LoginResponseModel.SettingsModel settings { get; set; }
	public LogSettingsModel logSettings { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA976C0 Offset: 0xA936C0 VA: 0xA976C0
	public string get_accessToken() { }

	[CompilerGenerated]
	// RVA: 0xA976C8 Offset: 0xA936C8 VA: 0xA976C8
	public void set_accessToken(string value) { }

	[CompilerGenerated]
	// RVA: 0xA976D0 Offset: 0xA936D0 VA: 0xA976D0
	public LocalizationData get_localization() { }

	[CompilerGenerated]
	// RVA: 0xA976D8 Offset: 0xA936D8 VA: 0xA976D8
	public void set_localization(LocalizationData value) { }

	[CompilerGenerated]
	// RVA: 0xA976E0 Offset: 0xA936E0 VA: 0xA976E0
	public LoginResponseModel.SettingsModel get_settings() { }

	[CompilerGenerated]
	// RVA: 0xA976F0 Offset: 0xA936F0 VA: 0xA976F0
	public void set_settings(LoginResponseModel.SettingsModel value) { }

	[CompilerGenerated]
	// RVA: 0xA97708 Offset: 0xA93708 VA: 0xA97708
	public LogSettingsModel get_logSettings() { }

	[CompilerGenerated]
	// RVA: 0xA97710 Offset: 0xA93710 VA: 0xA97710
	public void set_logSettings(LogSettingsModel value) { }
}


// Namespace: 
public struct LoginResponseModel.SettingsModel // TypeDefIndex: 6158
{
	// Fields
	[CompilerGenerated]
	private int <version>k__BackingField; // 0x0
	[CompilerGenerated]
	private SettingsData <fields>k__BackingField; // 0x8

	// Properties
	public int version { get; set; }
	public SettingsData fields { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA97718 Offset: 0xA93718 VA: 0xA97718
	public int get_version() { }

	[CompilerGenerated]
	// RVA: 0xA97720 Offset: 0xA93720 VA: 0xA97720
	public void set_version(int value) { }

	[CompilerGenerated]
	// RVA: 0xA97728 Offset: 0xA93728 VA: 0xA97728
	public SettingsData get_fields() { }

	[CompilerGenerated]
	// RVA: 0xA97738 Offset: 0xA93738 VA: 0xA97738
	public void set_fields(SettingsData value) { }
}


// Namespace: Adverty.Communication.Models
internal class LoginResponseModel : ResponseModel // TypeDefIndex: 6159
{
	// Fields
	[CompilerGenerated]
	private LoginResponseModel.Data <data>k__BackingField; // 0x18

	// Properties
	public LoginResponseModel.Data data { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA97690 Offset: 0xA93690 VA: 0xA97690
	public LoginResponseModel.Data get_data() { }

	[CompilerGenerated]
	// RVA: 0xA976A0 Offset: 0xA936A0 VA: 0xA976A0
	public void set_data(LoginResponseModel.Data value) { }

	// RVA: 0xA976B8 Offset: 0xA936B8 VA: 0xA976B8
	public void .ctor() { }
}


// Namespace: Adverty.Communication.Models
internal abstract class RequestModel // TypeDefIndex: 6160
{
	// Methods

	// RVA: 0xA973FC Offset: 0xA933FC VA: 0xA973FC
	protected void .ctor() { }
}


// Namespace: Adverty.Communication.Models
internal abstract class ResponseModel // TypeDefIndex: 6161
{
	// Fields
	[CompilerGenerated]
	private ErrorMessageModel[] <errors>k__BackingField; // 0x10

	// Properties
	public ErrorMessageModel[] errors { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA97750 Offset: 0xA93750 VA: 0xA97750
	public ErrorMessageModel[] get_errors() { }

	[CompilerGenerated]
	// RVA: 0xA97758 Offset: 0xA93758 VA: 0xA97758
	public void set_errors(ErrorMessageModel[] value) { }

	// RVA: 0xA97760 Offset: 0xA93760 VA: 0xA97760 Slot: 4
	public virtual bool IsError() { }

	// RVA: 0xA96CF0 Offset: 0xA92CF0 VA: 0xA96CF0
	protected void .ctor() { }
}


// Namespace: Adverty.Communication.Models
internal struct ScreenResolution // TypeDefIndex: 6162
{
	// Fields
	[CompilerGenerated]
	private int <width>k__BackingField; // 0x0
	[CompilerGenerated]
	private int <height>k__BackingField; // 0x4

	// Properties
	public int width { get; set; }
	public int height { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA97770 Offset: 0xA93770 VA: 0xA97770
	public int get_width() { }

	[CompilerGenerated]
	// RVA: 0xA97778 Offset: 0xA93778 VA: 0xA97778
	public void set_width(int value) { }

	[CompilerGenerated]
	// RVA: 0xA97780 Offset: 0xA93780 VA: 0xA97780
	public int get_height() { }

	[CompilerGenerated]
	// RVA: 0xA97788 Offset: 0xA93788 VA: 0xA97788
	public void set_height(int value) { }

	// RVA: 0xA9717C Offset: 0xA9317C VA: 0xA9717C
	public void .ctor(Resolution resolution) { }
}


// Namespace: Adverty.Communication.Models
internal struct SettingsData // TypeDefIndex: 6163
{
	// Fields
	private const int DEFAULT_ADSESSION_DURATION = 300;
	private const int DEFAULT_REFRESH_DURATION = 60;
	private const float DEFAULT_CHECK_INTERVAL = 0.125;
	private const float DEFAULT_DURATION_BEST_CASE = 1;
	private const float DEFAULT_DURATION_WORST_CASE = 3;
	private const int DEFAULT_POST_IMPRESSION_SUMMARY_DELAY = 10;
	private const float DEFAULT_STATIC_HTML_UPDATE_INTERVAL = 3;
	private const float DEFAULT_ANIMATED_HTML_UPDATE_INTERVAL = 0.2;
	private const float DEFAULT_HTML_READY_CHECK_INTERVAL = 0.5;
	private const int DEFAULT_STATIC_HTML_UPDATE_TIMES = 2;
	private const int DEFAULT_OVERLAP_TO_VISIBILITY_RATIO = 3;
	private const int DEFAULT_WEBVIEWS_LOAD_COUNT_LIMIT = 3;
	private const int DEFAULT_LOAD_HTML_DEFAULT_TIMEOUT = 40;
	private static int[] DEFAULT_HTTP_RETRY_TIMES; // 0x0
	private const float DEFAULT_IN_MENU_UNIT_GRAYSCALE_MAX_DIFF = 0.7;
	private const float DEFAULT_IN_MENU_UNIT_CHECK_INTERVAL = 0.5;
	private const int DEFAULT_AD_POOL_CAPACITY = 15;
	private const float DEFAULT_MIN_TRIGGER_SHERE_UNIT_SIZE = 0.01;
	private const int MIN_REQUESR_SIZE_FOR_COMPRESSION = 100;
	[CompilerGenerated]
	private int[] <httpRetryTimes>k__BackingField; // 0x0
	[CompilerGenerated]
	private int <adSessionDuration>k__BackingField; // 0x8
	[CompilerGenerated]
	private int <refreshDuration>k__BackingField; // 0xC
	[CompilerGenerated]
	private int <inactiveRefreshDuration>k__BackingField; // 0x10
	[CompilerGenerated]
	private double <angleSpan>k__BackingField; // 0x18
	[CompilerGenerated]
	private double <checkInterval>k__BackingField; // 0x20
	[CompilerGenerated]
	private double <durationBestCase>k__BackingField; // 0x28
	[CompilerGenerated]
	private double <durationWorstCase>k__BackingField; // 0x30
	[CompilerGenerated]
	private double <minimumAllowedBlockingOpacity>k__BackingField; // 0x38
	[CompilerGenerated]
	private double <minimumLightFactor>k__BackingField; // 0x40
	[CompilerGenerated]
	private double <maximumLightFactor>k__BackingField; // 0x48
	[CompilerGenerated]
	private double <upperBound>k__BackingField; // 0x50
	[CompilerGenerated]
	private int <overlapToVisibiltyRatio>k__BackingField; // 0x58
	[CompilerGenerated]
	private bool <visibiltyCheckIsDisabled>k__BackingField; // 0x5C
	[CompilerGenerated]
	private double <vrMinimalOverlapArea>k__BackingField; // 0x60
	[CompilerGenerated]
	private double <vrMaximumOverlapArea>k__BackingField; // 0x68
	[CompilerGenerated]
	private double <arMinimalOverlapArea>k__BackingField; // 0x70
	[CompilerGenerated]
	private double <arMaximumOverlapArea>k__BackingField; // 0x78
	[CompilerGenerated]
	private string <watermarkFontName>k__BackingField; // 0x80
	[CompilerGenerated]
	private int <watermarkFontSize>k__BackingField; // 0x88
	[CompilerGenerated]
	private double <watermarkHeightRatio>k__BackingField; // 0x90
	[CompilerGenerated]
	private double <watermarkTextPadding>k__BackingField; // 0x98
	[CompilerGenerated]
	private double <animatedHtmlUpdateInterval>k__BackingField; // 0xA0
	[CompilerGenerated]
	private double <htmlTextureReadyCheckInterval>k__BackingField; // 0xA8
	[CompilerGenerated]
	private int <staticHtmlUpdateTimes>k__BackingField; // 0xB0
	[CompilerGenerated]
	private int <loadHtmlTimeout>k__BackingField; // 0xB4
	[CompilerGenerated]
	private int <postImpressionSummaryDelay>k__BackingField; // 0xB8
	[CompilerGenerated]
	private double <staticHtmlUpdateInterval>k__BackingField; // 0xC0
	[CompilerGenerated]
	private int <webViewsLoadCountLimit>k__BackingField; // 0xC8
	[CompilerGenerated]
	private double <menuUnitGrayScaleMaxDifference>k__BackingField; // 0xD0
	[CompilerGenerated]
	private double <menuUnitCheckInterval>k__BackingField; // 0xD8
	[CompilerGenerated]
	private int <adPoolCapacity>k__BackingField; // 0xE0
	[CompilerGenerated]
	private string <destinationUrlBlackList>k__BackingField; // 0xE8
	[CompilerGenerated]
	private bool <isTextureTransitionEnabled>k__BackingField; // 0xF0
	[CompilerGenerated]
	private double <minTriggerSphereUnitSize>k__BackingField; // 0xF8
	[CompilerGenerated]
	private bool <uiVisibiltyCheckIsDisabled>k__BackingField; // 0x100
	[CompilerGenerated]
	private int <minRequestSizeForCompression>k__BackingField; // 0x104

	// Properties
	public int[] HttpRequestRetryTimes { get; }
	public int AdSessionDuration { get; }
	public int RefreshDuration { get; }
	public int InactiveRefreshDuration { get; }
	public float AnimatedHtmlUpdateInterval { get; }
	public float CheckInterval { get; }
	public float DurationBestCase { get; }
	public float DurationWorstCase { get; }
	public int LoadHtmlTimeout { get; }
	public float HtmlTextureReadyCheckInterval { get; }
	public int StaticHtmlUpdateTimes { get; }
	public bool VisibilityCheckEnabled { get; }
	public int OverlapToVisibilityRatio { get; }
	public int PostImpressionSummaryDelay { get; }
	public float StaticHtmlUpdateInterval { get; }
	public int WebViewsLoadCountLimit { get; }
	public float InMenuUnitGreyScaleMaxDifference { get; }
	public float InMenuUnitCheckInterval { get; }
	public int AdPoolCapacity { get; }
	public string DestinationUrlBlackList { get; }
	public bool IsTextureTransitionEnabled { get; }
	public float MinTriggerSphereUnitSize { get; }
	internal bool UiVisibiltyCheckIsDisabled { get; }
	internal int MinRequestSizeForCompression { get; }
	private int[] httpRetryTimes { get; set; }
	private int adSessionDuration { get; set; }
	private int refreshDuration { get; set; }
	private int inactiveRefreshDuration { get; set; }
	public double angleSpan { get; set; }
	private double checkInterval { get; set; }
	private double durationBestCase { get; set; }
	private double durationWorstCase { get; set; }
	public double minimumAllowedBlockingOpacity { get; set; }
	public double minimumLightFactor { get; set; }
	public double maximumLightFactor { get; set; }
	public double upperBound { get; set; }
	private int overlapToVisibiltyRatio { get; set; }
	private bool visibiltyCheckIsDisabled { get; set; }
	public double vrMinimalOverlapArea { get; set; }
	public double vrMaximumOverlapArea { get; set; }
	public double arMinimalOverlapArea { get; set; }
	public double arMaximumOverlapArea { get; set; }
	public string watermarkFontName { get; set; }
	public int watermarkFontSize { get; set; }
	public double watermarkHeightRatio { get; set; }
	public double watermarkTextPadding { get; set; }
	private double animatedHtmlUpdateInterval { get; set; }
	private double htmlTextureReadyCheckInterval { get; set; }
	private int staticHtmlUpdateTimes { get; set; }
	private int loadHtmlTimeout { get; set; }
	private int postImpressionSummaryDelay { get; set; }
	private double staticHtmlUpdateInterval { get; set; }
	private int webViewsLoadCountLimit { get; set; }
	private double menuUnitGrayScaleMaxDifference { get; set; }
	private double menuUnitCheckInterval { get; set; }
	private int adPoolCapacity { get; set; }
	private string destinationUrlBlackList { get; set; }
	private bool isTextureTransitionEnabled { get; set; }
	private double minTriggerSphereUnitSize { get; set; }
	private bool uiVisibiltyCheckIsDisabled { get; set; }
	private int minRequestSizeForCompression { get; set; }

	// Methods

	// RVA: 0xA97790 Offset: 0xA93790 VA: 0xA97790
	public int[] get_HttpRequestRetryTimes() { }

	// RVA: 0xA97818 Offset: 0xA93818 VA: 0xA97818
	public int get_AdSessionDuration() { }

	// RVA: 0xA97890 Offset: 0xA93890 VA: 0xA97890
	public int get_RefreshDuration() { }

	// RVA: 0xA97908 Offset: 0xA93908 VA: 0xA97908
	public int get_InactiveRefreshDuration() { }

	// RVA: 0xA9799C Offset: 0xA9399C VA: 0xA9799C
	public float get_AnimatedHtmlUpdateInterval() { }

	// RVA: 0xA97A1C Offset: 0xA93A1C VA: 0xA97A1C
	public float get_CheckInterval() { }

	// RVA: 0xA97A94 Offset: 0xA93A94 VA: 0xA97A94
	public float get_DurationBestCase() { }

	// RVA: 0xA97B10 Offset: 0xA93B10 VA: 0xA97B10
	public float get_DurationWorstCase() { }

	// RVA: 0xA97B8C Offset: 0xA93B8C VA: 0xA97B8C
	public int get_LoadHtmlTimeout() { }

	// RVA: 0xA97C04 Offset: 0xA93C04 VA: 0xA97C04
	public float get_HtmlTextureReadyCheckInterval() { }

	// RVA: 0xA97C80 Offset: 0xA93C80 VA: 0xA97C80
	public int get_StaticHtmlUpdateTimes() { }

	// RVA: 0xA97CF8 Offset: 0xA93CF8 VA: 0xA97CF8
	public bool get_VisibilityCheckEnabled() { }

	// RVA: 0xA97D6C Offset: 0xA93D6C VA: 0xA97D6C
	public int get_OverlapToVisibilityRatio() { }

	// RVA: 0xA97DE4 Offset: 0xA93DE4 VA: 0xA97DE4
	public int get_PostImpressionSummaryDelay() { }

	// RVA: 0xA97E5C Offset: 0xA93E5C VA: 0xA97E5C
	public float get_StaticHtmlUpdateInterval() { }

	// RVA: 0xA97ED8 Offset: 0xA93ED8 VA: 0xA97ED8
	public int get_WebViewsLoadCountLimit() { }

	// RVA: 0xA97F50 Offset: 0xA93F50 VA: 0xA97F50
	public float get_InMenuUnitGreyScaleMaxDifference() { }

	// RVA: 0xA97FD0 Offset: 0xA93FD0 VA: 0xA97FD0
	public float get_InMenuUnitCheckInterval() { }

	// RVA: 0xA9804C Offset: 0xA9404C VA: 0xA9804C
	public int get_AdPoolCapacity() { }

	// RVA: 0xA980C4 Offset: 0xA940C4 VA: 0xA980C4
	public string get_DestinationUrlBlackList() { }

	// RVA: 0xA98118 Offset: 0xA94118 VA: 0xA98118
	public bool get_IsTextureTransitionEnabled() { }

	// RVA: 0xA9816C Offset: 0xA9416C VA: 0xA9816C
	public float get_MinTriggerSphereUnitSize() { }

	// RVA: 0xA981EC Offset: 0xA941EC VA: 0xA981EC
	internal bool get_UiVisibiltyCheckIsDisabled() { }

	// RVA: 0xA94BB8 Offset: 0xA90BB8 VA: 0xA94BB8
	internal int get_MinRequestSizeForCompression() { }

	[CompilerGenerated]
	// RVA: 0xA98240 Offset: 0xA94240 VA: 0xA98240
	private int[] get_httpRetryTimes() { }

	[CompilerGenerated]
	// RVA: 0xA98248 Offset: 0xA94248 VA: 0xA98248
	public void set_httpRetryTimes(int[] value) { }

	[CompilerGenerated]
	// RVA: 0xA98250 Offset: 0xA94250 VA: 0xA98250
	private int get_adSessionDuration() { }

	[CompilerGenerated]
	// RVA: 0xA98258 Offset: 0xA94258 VA: 0xA98258
	public void set_adSessionDuration(int value) { }

	[CompilerGenerated]
	// RVA: 0xA98260 Offset: 0xA94260 VA: 0xA98260
	private int get_refreshDuration() { }

	[CompilerGenerated]
	// RVA: 0xA98268 Offset: 0xA94268 VA: 0xA98268
	public void set_refreshDuration(int value) { }

	[CompilerGenerated]
	// RVA: 0xA98270 Offset: 0xA94270 VA: 0xA98270
	private int get_inactiveRefreshDuration() { }

	[CompilerGenerated]
	// RVA: 0xA98278 Offset: 0xA94278 VA: 0xA98278
	public void set_inactiveRefreshDuration(int value) { }

	[CompilerGenerated]
	// RVA: 0xA98280 Offset: 0xA94280 VA: 0xA98280
	public double get_angleSpan() { }

	[CompilerGenerated]
	// RVA: 0xA98288 Offset: 0xA94288 VA: 0xA98288
	public void set_angleSpan(double value) { }

	[CompilerGenerated]
	// RVA: 0xA98290 Offset: 0xA94290 VA: 0xA98290
	private double get_checkInterval() { }

	[CompilerGenerated]
	// RVA: 0xA98298 Offset: 0xA94298 VA: 0xA98298
	public void set_checkInterval(double value) { }

	[CompilerGenerated]
	// RVA: 0xA982A0 Offset: 0xA942A0 VA: 0xA982A0
	private double get_durationBestCase() { }

	[CompilerGenerated]
	// RVA: 0xA982A8 Offset: 0xA942A8 VA: 0xA982A8
	public void set_durationBestCase(double value) { }

	[CompilerGenerated]
	// RVA: 0xA982B0 Offset: 0xA942B0 VA: 0xA982B0
	private double get_durationWorstCase() { }

	[CompilerGenerated]
	// RVA: 0xA982B8 Offset: 0xA942B8 VA: 0xA982B8
	public void set_durationWorstCase(double value) { }

	[CompilerGenerated]
	// RVA: 0xA982C0 Offset: 0xA942C0 VA: 0xA982C0
	public double get_minimumAllowedBlockingOpacity() { }

	[CompilerGenerated]
	// RVA: 0xA982C8 Offset: 0xA942C8 VA: 0xA982C8
	public void set_minimumAllowedBlockingOpacity(double value) { }

	[CompilerGenerated]
	// RVA: 0xA982D0 Offset: 0xA942D0 VA: 0xA982D0
	public double get_minimumLightFactor() { }

	[CompilerGenerated]
	// RVA: 0xA982D8 Offset: 0xA942D8 VA: 0xA982D8
	public void set_minimumLightFactor(double value) { }

	[CompilerGenerated]
	// RVA: 0xA982E0 Offset: 0xA942E0 VA: 0xA982E0
	public double get_maximumLightFactor() { }

	[CompilerGenerated]
	// RVA: 0xA982E8 Offset: 0xA942E8 VA: 0xA982E8
	public void set_maximumLightFactor(double value) { }

	[CompilerGenerated]
	// RVA: 0xA982F0 Offset: 0xA942F0 VA: 0xA982F0
	public double get_upperBound() { }

	[CompilerGenerated]
	// RVA: 0xA982F8 Offset: 0xA942F8 VA: 0xA982F8
	public void set_upperBound(double value) { }

	[CompilerGenerated]
	// RVA: 0xA98300 Offset: 0xA94300 VA: 0xA98300
	private int get_overlapToVisibiltyRatio() { }

	[CompilerGenerated]
	// RVA: 0xA98308 Offset: 0xA94308 VA: 0xA98308
	public void set_overlapToVisibiltyRatio(int value) { }

	[CompilerGenerated]
	// RVA: 0xA98310 Offset: 0xA94310 VA: 0xA98310
	private bool get_visibiltyCheckIsDisabled() { }

	[CompilerGenerated]
	// RVA: 0xA98318 Offset: 0xA94318 VA: 0xA98318
	public void set_visibiltyCheckIsDisabled(bool value) { }

	[CompilerGenerated]
	// RVA: 0xA98324 Offset: 0xA94324 VA: 0xA98324
	public double get_vrMinimalOverlapArea() { }

	[CompilerGenerated]
	// RVA: 0xA9832C Offset: 0xA9432C VA: 0xA9832C
	public void set_vrMinimalOverlapArea(double value) { }

	[CompilerGenerated]
	// RVA: 0xA98334 Offset: 0xA94334 VA: 0xA98334
	public double get_vrMaximumOverlapArea() { }

	[CompilerGenerated]
	// RVA: 0xA9833C Offset: 0xA9433C VA: 0xA9833C
	public void set_vrMaximumOverlapArea(double value) { }

	[CompilerGenerated]
	// RVA: 0xA98344 Offset: 0xA94344 VA: 0xA98344
	public double get_arMinimalOverlapArea() { }

	[CompilerGenerated]
	// RVA: 0xA9834C Offset: 0xA9434C VA: 0xA9834C
	public void set_arMinimalOverlapArea(double value) { }

	[CompilerGenerated]
	// RVA: 0xA98354 Offset: 0xA94354 VA: 0xA98354
	public double get_arMaximumOverlapArea() { }

	[CompilerGenerated]
	// RVA: 0xA9835C Offset: 0xA9435C VA: 0xA9835C
	public void set_arMaximumOverlapArea(double value) { }

	[CompilerGenerated]
	// RVA: 0xA98364 Offset: 0xA94364 VA: 0xA98364
	public string get_watermarkFontName() { }

	[CompilerGenerated]
	// RVA: 0xA9836C Offset: 0xA9436C VA: 0xA9836C
	public void set_watermarkFontName(string value) { }

	[CompilerGenerated]
	// RVA: 0xA98374 Offset: 0xA94374 VA: 0xA98374
	public int get_watermarkFontSize() { }

	[CompilerGenerated]
	// RVA: 0xA9837C Offset: 0xA9437C VA: 0xA9837C
	public void set_watermarkFontSize(int value) { }

	[CompilerGenerated]
	// RVA: 0xA98384 Offset: 0xA94384 VA: 0xA98384
	public double get_watermarkHeightRatio() { }

	[CompilerGenerated]
	// RVA: 0xA9838C Offset: 0xA9438C VA: 0xA9838C
	public void set_watermarkHeightRatio(double value) { }

	[CompilerGenerated]
	// RVA: 0xA98394 Offset: 0xA94394 VA: 0xA98394
	public double get_watermarkTextPadding() { }

	[CompilerGenerated]
	// RVA: 0xA9839C Offset: 0xA9439C VA: 0xA9839C
	public void set_watermarkTextPadding(double value) { }

	[CompilerGenerated]
	// RVA: 0xA983A4 Offset: 0xA943A4 VA: 0xA983A4
	private double get_animatedHtmlUpdateInterval() { }

	[CompilerGenerated]
	// RVA: 0xA983AC Offset: 0xA943AC VA: 0xA983AC
	public void set_animatedHtmlUpdateInterval(double value) { }

	[CompilerGenerated]
	// RVA: 0xA983B4 Offset: 0xA943B4 VA: 0xA983B4
	private double get_htmlTextureReadyCheckInterval() { }

	[CompilerGenerated]
	// RVA: 0xA983BC Offset: 0xA943BC VA: 0xA983BC
	public void set_htmlTextureReadyCheckInterval(double value) { }

	[CompilerGenerated]
	// RVA: 0xA983C4 Offset: 0xA943C4 VA: 0xA983C4
	private int get_staticHtmlUpdateTimes() { }

	[CompilerGenerated]
	// RVA: 0xA983CC Offset: 0xA943CC VA: 0xA983CC
	public void set_staticHtmlUpdateTimes(int value) { }

	[CompilerGenerated]
	// RVA: 0xA983D4 Offset: 0xA943D4 VA: 0xA983D4
	private int get_loadHtmlTimeout() { }

	[CompilerGenerated]
	// RVA: 0xA983DC Offset: 0xA943DC VA: 0xA983DC
	public void set_loadHtmlTimeout(int value) { }

	[CompilerGenerated]
	// RVA: 0xA983E4 Offset: 0xA943E4 VA: 0xA983E4
	private int get_postImpressionSummaryDelay() { }

	[CompilerGenerated]
	// RVA: 0xA983EC Offset: 0xA943EC VA: 0xA983EC
	public void set_postImpressionSummaryDelay(int value) { }

	[CompilerGenerated]
	// RVA: 0xA983F4 Offset: 0xA943F4 VA: 0xA983F4
	private double get_staticHtmlUpdateInterval() { }

	[CompilerGenerated]
	// RVA: 0xA983FC Offset: 0xA943FC VA: 0xA983FC
	public void set_staticHtmlUpdateInterval(double value) { }

	[CompilerGenerated]
	// RVA: 0xA98404 Offset: 0xA94404 VA: 0xA98404
	private int get_webViewsLoadCountLimit() { }

	[CompilerGenerated]
	// RVA: 0xA9840C Offset: 0xA9440C VA: 0xA9840C
	public void set_webViewsLoadCountLimit(int value) { }

	[CompilerGenerated]
	// RVA: 0xA98414 Offset: 0xA94414 VA: 0xA98414
	private double get_menuUnitGrayScaleMaxDifference() { }

	[CompilerGenerated]
	// RVA: 0xA9841C Offset: 0xA9441C VA: 0xA9841C
	public void set_menuUnitGrayScaleMaxDifference(double value) { }

	[CompilerGenerated]
	// RVA: 0xA98424 Offset: 0xA94424 VA: 0xA98424
	private double get_menuUnitCheckInterval() { }

	[CompilerGenerated]
	// RVA: 0xA9842C Offset: 0xA9442C VA: 0xA9842C
	public void set_menuUnitCheckInterval(double value) { }

	[CompilerGenerated]
	// RVA: 0xA98434 Offset: 0xA94434 VA: 0xA98434
	private int get_adPoolCapacity() { }

	[CompilerGenerated]
	// RVA: 0xA9843C Offset: 0xA9443C VA: 0xA9843C
	public void set_adPoolCapacity(int value) { }

	[CompilerGenerated]
	// RVA: 0xA98444 Offset: 0xA94444 VA: 0xA98444
	private string get_destinationUrlBlackList() { }

	[CompilerGenerated]
	// RVA: 0xA9844C Offset: 0xA9444C VA: 0xA9844C
	public void set_destinationUrlBlackList(string value) { }

	[CompilerGenerated]
	// RVA: 0xA98454 Offset: 0xA94454 VA: 0xA98454
	private bool get_isTextureTransitionEnabled() { }

	[CompilerGenerated]
	// RVA: 0xA9845C Offset: 0xA9445C VA: 0xA9845C
	public void set_isTextureTransitionEnabled(bool value) { }

	[CompilerGenerated]
	// RVA: 0xA98468 Offset: 0xA94468 VA: 0xA98468
	private double get_minTriggerSphereUnitSize() { }

	[CompilerGenerated]
	// RVA: 0xA98470 Offset: 0xA94470 VA: 0xA98470
	public void set_minTriggerSphereUnitSize(double value) { }

	[CompilerGenerated]
	// RVA: 0xA98478 Offset: 0xA94478 VA: 0xA98478
	private bool get_uiVisibiltyCheckIsDisabled() { }

	[CompilerGenerated]
	// RVA: 0xA98480 Offset: 0xA94480 VA: 0xA98480
	public void set_uiVisibiltyCheckIsDisabled(bool value) { }

	[CompilerGenerated]
	// RVA: 0xA9848C Offset: 0xA9448C VA: 0xA9848C
	private int get_minRequestSizeForCompression() { }

	[CompilerGenerated]
	// RVA: 0xA98494 Offset: 0xA94494 VA: 0xA98494
	public void set_minRequestSizeForCompression(int value) { }

	// RVA: 0xA9849C Offset: 0xA9449C VA: 0xA9849C
	private static void .cctor() { }
}


// Namespace: Adverty.Communication.Models
internal class SignedRequestModel : RequestModel // TypeDefIndex: 6164
{
	// Fields
	[CompilerGenerated]
	private string <accessToken>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <applicationType>k__BackingField; // 0x18

	// Properties
	public string accessToken { get; set; }
	public string applicationType { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA98530 Offset: 0xA94530 VA: 0xA98530
	public string get_accessToken() { }

	[CompilerGenerated]
	// RVA: 0xA98538 Offset: 0xA94538 VA: 0xA98538
	public void set_accessToken(string value) { }

	[CompilerGenerated]
	// RVA: 0xA98540 Offset: 0xA94540 VA: 0xA98540
	public string get_applicationType() { }

	[CompilerGenerated]
	// RVA: 0xA98548 Offset: 0xA94548 VA: 0xA98548
	public void set_applicationType(string value) { }

	// RVA: 0xA96494 Offset: 0xA92494 VA: 0xA96494
	public void .ctor() { }
}


// Namespace: Adverty.Communication.Models
internal class StageActionRequestModel : SignedRequestModel // TypeDefIndex: 6165
{
	// Fields
	[CompilerGenerated]
	private string <adId>k__BackingField; // 0x20
	[CompilerGenerated]
	private string <stageAction>k__BackingField; // 0x28
	[CompilerGenerated]
	private string <destinationUrl>k__BackingField; // 0x30

	// Properties
	public string adId { get; set; }
	public string stageAction { get; set; }
	public string destinationUrl { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA98550 Offset: 0xA94550 VA: 0xA98550
	public string get_adId() { }

	[CompilerGenerated]
	// RVA: 0xA98558 Offset: 0xA94558 VA: 0xA98558
	public void set_adId(string value) { }

	[CompilerGenerated]
	// RVA: 0xA98560 Offset: 0xA94560 VA: 0xA98560
	public string get_stageAction() { }

	[CompilerGenerated]
	// RVA: 0xA98568 Offset: 0xA94568 VA: 0xA98568
	public void set_stageAction(string value) { }

	[CompilerGenerated]
	// RVA: 0xA98570 Offset: 0xA94570 VA: 0xA98570
	public string get_destinationUrl() { }

	[CompilerGenerated]
	// RVA: 0xA98578 Offset: 0xA94578 VA: 0xA98578
	public void set_destinationUrl(string value) { }

	// RVA: 0xA98580 Offset: 0xA94580 VA: 0xA98580
	public void .ctor(string id, string url, StageActionType stageAction) { }
}


// Namespace: Adverty.Communication.Models
internal enum StageActionType // TypeDefIndex: 6166
{
	// Fields
	public int value__; // 0x0
	public const StageActionType AdInteracted = 0;
}


// Namespace: Adverty.Communication.Models
internal class StageImpressionRequestModel : SignedRequestModel // TypeDefIndex: 6167
{
	// Fields
	[CompilerGenerated]
	private string <adId>k__BackingField; // 0x20

	// Properties
	public string adId { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA98610 Offset: 0xA94610 VA: 0xA98610
	public string get_adId() { }

	[CompilerGenerated]
	// RVA: 0xA98618 Offset: 0xA94618 VA: 0xA98618
	public void set_adId(string value) { }

	// RVA: 0xA94E50 Offset: 0xA90E50 VA: 0xA94E50
	public void .ctor(string id) { }
}


// Namespace: Adverty.Communication.Models
internal struct SummaryData // TypeDefIndex: 6168
{
	// Fields
	[CompilerGenerated]
	private string <adId>k__BackingField; // 0x0
	[CompilerGenerated]
	private long <totalViewTime>k__BackingField; // 0x8
	[CompilerGenerated]
	private long <totalLiveTime>k__BackingField; // 0x10
	[CompilerGenerated]
	private long <totalRenderedOnScreenTime>k__BackingField; // 0x18
	[CompilerGenerated]
	private long <lengthOfRegisteredViewSegment>k__BackingField; // 0x20
	[CompilerGenerated]
	private long <totalTimeInWebView>k__BackingField; // 0x28
	[CompilerGenerated]
	private int <averageFOV>k__BackingField; // 0x30
	[CompilerGenerated]
	private int <maxFOV>k__BackingField; // 0x34
	[CompilerGenerated]
	private int <bounceBack>k__BackingField; // 0x38

	// Properties
	public string adId { get; set; }
	public long totalViewTime { get; set; }
	public long totalLiveTime { get; set; }
	public long totalRenderedOnScreenTime { get; set; }
	public long lengthOfRegisteredViewSegment { get; set; }
	public long totalTimeInWebView { get; set; }
	public int averageFOV { get; set; }
	public int maxFOV { get; set; }
	public int bounceBack { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA98620 Offset: 0xA94620 VA: 0xA98620
	public string get_adId() { }

	[CompilerGenerated]
	// RVA: 0xA98628 Offset: 0xA94628 VA: 0xA98628
	private void set_adId(string value) { }

	[CompilerGenerated]
	// RVA: 0xA98630 Offset: 0xA94630 VA: 0xA98630
	public long get_totalViewTime() { }

	[CompilerGenerated]
	// RVA: 0xA98638 Offset: 0xA94638 VA: 0xA98638
	private void set_totalViewTime(long value) { }

	[CompilerGenerated]
	// RVA: 0xA98640 Offset: 0xA94640 VA: 0xA98640
	public long get_totalLiveTime() { }

	[CompilerGenerated]
	// RVA: 0xA98648 Offset: 0xA94648 VA: 0xA98648
	private void set_totalLiveTime(long value) { }

	[CompilerGenerated]
	// RVA: 0xA98650 Offset: 0xA94650 VA: 0xA98650
	public long get_totalRenderedOnScreenTime() { }

	[CompilerGenerated]
	// RVA: 0xA98658 Offset: 0xA94658 VA: 0xA98658
	private void set_totalRenderedOnScreenTime(long value) { }

	[CompilerGenerated]
	// RVA: 0xA98660 Offset: 0xA94660 VA: 0xA98660
	public long get_lengthOfRegisteredViewSegment() { }

	[CompilerGenerated]
	// RVA: 0xA98668 Offset: 0xA94668 VA: 0xA98668
	private void set_lengthOfRegisteredViewSegment(long value) { }

	[CompilerGenerated]
	// RVA: 0xA98670 Offset: 0xA94670 VA: 0xA98670
	public long get_totalTimeInWebView() { }

	[CompilerGenerated]
	// RVA: 0xA98678 Offset: 0xA94678 VA: 0xA98678
	private void set_totalTimeInWebView(long value) { }

	[CompilerGenerated]
	// RVA: 0xA98680 Offset: 0xA94680 VA: 0xA98680
	public int get_averageFOV() { }

	[CompilerGenerated]
	// RVA: 0xA98688 Offset: 0xA94688 VA: 0xA98688
	private void set_averageFOV(int value) { }

	[CompilerGenerated]
	// RVA: 0xA98690 Offset: 0xA94690 VA: 0xA98690
	public int get_maxFOV() { }

	[CompilerGenerated]
	// RVA: 0xA98698 Offset: 0xA94698 VA: 0xA98698
	private void set_maxFOV(int value) { }

	[CompilerGenerated]
	// RVA: 0xA986A0 Offset: 0xA946A0 VA: 0xA986A0
	public int get_bounceBack() { }

	[CompilerGenerated]
	// RVA: 0xA986A8 Offset: 0xA946A8 VA: 0xA986A8
	private void set_bounceBack(int value) { }

	// RVA: 0xA986B0 Offset: 0xA946B0 VA: 0xA986B0
	public void .ctor(aCk sessionData) { }
}


// Namespace: Adverty.Communication.Models
internal class SummaryRequestModel : SignedRequestModel // TypeDefIndex: 6169
{
	// Fields
	[CompilerGenerated]
	private SummaryData[] <impressions>k__BackingField; // 0x20

	// Properties
	public SummaryData[] impressions { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA987A4 Offset: 0xA947A4 VA: 0xA987A4
	public SummaryData[] get_impressions() { }

	[CompilerGenerated]
	// RVA: 0xA987AC Offset: 0xA947AC VA: 0xA987AC
	private void set_impressions(SummaryData[] value) { }

	// RVA: 0xA987B4 Offset: 0xA947B4 VA: 0xA987B4
	public void .ctor(SummaryData[] dataList) { }
}


// Namespace: Adverty.Communication.Models
internal struct UnitData // TypeDefIndex: 6170
{
	// Fields
	[CompilerGenerated]
	private int <adUnitId>k__BackingField; // 0x0
	[CompilerGenerated]
	private string <adPlacementId>k__BackingField; // 0x8
	[CompilerGenerated]
	private string <unitType>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <ratioId>k__BackingField; // 0x18
	[CompilerGenerated]
	private bool <allowInteraction>k__BackingField; // 0x1C
	[CompilerGenerated]
	private bool <allowAnimation>k__BackingField; // 0x1D

	// Properties
	public int adUnitId { get; set; }
	public string adPlacementId { get; set; }
	public string unitType { get; set; }
	public int ratioId { get; set; }
	public bool allowInteraction { get; set; }
	public bool allowAnimation { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xA987D8 Offset: 0xA947D8 VA: 0xA987D8
	public int get_adUnitId() { }

	[CompilerGenerated]
	// RVA: 0xA987E0 Offset: 0xA947E0 VA: 0xA987E0
	private void set_adUnitId(int value) { }

	[CompilerGenerated]
	// RVA: 0xA987E8 Offset: 0xA947E8 VA: 0xA987E8
	public string get_adPlacementId() { }

	[CompilerGenerated]
	// RVA: 0xA987F0 Offset: 0xA947F0 VA: 0xA987F0
	private void set_adPlacementId(string value) { }

	[CompilerGenerated]
	// RVA: 0xA987F8 Offset: 0xA947F8 VA: 0xA987F8
	public string get_unitType() { }

	[CompilerGenerated]
	// RVA: 0xA98800 Offset: 0xA94800 VA: 0xA98800
	private void set_unitType(string value) { }

	[CompilerGenerated]
	// RVA: 0xA98808 Offset: 0xA94808 VA: 0xA98808
	public int get_ratioId() { }

	[CompilerGenerated]
	// RVA: 0xA98810 Offset: 0xA94810 VA: 0xA98810
	private void set_ratioId(int value) { }

	[CompilerGenerated]
	// RVA: 0xA98818 Offset: 0xA94818 VA: 0xA98818
	public bool get_allowInteraction() { }

	[CompilerGenerated]
	// RVA: 0xA98820 Offset: 0xA94820 VA: 0xA98820
	private void set_allowInteraction(bool value) { }

	[CompilerGenerated]
	// RVA: 0xA9882C Offset: 0xA9482C VA: 0xA9882C
	public bool get_allowAnimation() { }

	[CompilerGenerated]
	// RVA: 0xA98834 Offset: 0xA94834 VA: 0xA98834
	private void set_allowAnimation(bool value) { }

	// RVA: 0xA98840 Offset: 0xA94840 VA: 0xA98840
	public void .ctor(BaseUnit unit) { }

	// RVA: 0xA98978 Offset: 0xA94978 VA: 0xA98978
	public void .ctor(int adId, UnitConfiguration unitConfiguration) { }

	// RVA: 0xA9895C Offset: 0xA9495C VA: 0xA9895C
	private static int GetRatioId(UnitConfiguration unitConfiguration) { }

	// RVA: 0xA988F4 Offset: 0xA948F4 VA: 0xA988F4
	private static string GetUnitTypeString(UnitType unitType) { }
}


// Namespace: 
public enum abi.A // TypeDefIndex: 6171
{
	// Fields
	public int value__; // 0x0
	public const abi.A jb = 0;
	public const abi.A jC = 1;
	public const abi.A jc = 2;
	public const abi.A jD = 3;
	public const abi.A jd = 4;
	public const abi.A jE = 5;
	public const abi.A je = 6;
}


// Namespace: Adverty.a.b
internal abstract class abi // TypeDefIndex: 6172
{
	// Fields
	[CompilerGenerated]
	private int fF; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0xA98A18 Offset: 0xA94A18 VA: 0xA98A18
	public int sa() { }

	[CompilerGenerated]
	// RVA: 0xA98A20 Offset: 0xA94A20 VA: 0xA98A20
	public void sB(int ) { }

	// RVA: -1 Offset: -1 Slot: 4
	public abstract abi.A NT();

	// RVA: 0xA98A28 Offset: 0xA94A28 VA: 0xA98A28
	protected void .ctor() { }
}


// Namespace: Adverty.a.d
internal class ads : aDf // TypeDefIndex: 6173
{
	// Methods

	// RVA: 0xA98A30 Offset: 0xA94A30 VA: 0xA98A30 Slot: 4
	public override abi.A NT() { }

	// RVA: 0xA98A38 Offset: 0xA94A38 VA: 0xA98A38 Slot: 3
	public override string ToString() { }

	// RVA: 0xA98CF0 Offset: 0xA94CF0 VA: 0xA98CF0
	public void .ctor() { }
}


// Namespace: Adverty.a.D
internal class aDe : abi // TypeDefIndex: 6174
{
	// Fields
	[CompilerGenerated]
	private float jF; // 0x14
	[CompilerGenerated]
	private int jf; // 0x18
	[CompilerGenerated]
	private int jG; // 0x1C
	[CompilerGenerated]
	private float jg; // 0x20

	// Methods

	[CompilerGenerated]
	// RVA: 0xA98D00 Offset: 0xA94D00 VA: 0xA98D00
	public float wR() { }

	[CompilerGenerated]
	// RVA: 0xA98D08 Offset: 0xA94D08 VA: 0xA98D08
	public void wr(float ) { }

	[CompilerGenerated]
	// RVA: 0xA98D10 Offset: 0xA94D10 VA: 0xA98D10
	public int wS() { }

	[CompilerGenerated]
	// RVA: 0xA98D18 Offset: 0xA94D18 VA: 0xA98D18
	public void ws(int ) { }

	[CompilerGenerated]
	// RVA: 0xA98D20 Offset: 0xA94D20 VA: 0xA98D20
	public int wT() { }

	[CompilerGenerated]
	// RVA: 0xA98D28 Offset: 0xA94D28 VA: 0xA98D28
	public void wt(int ) { }

	[CompilerGenerated]
	// RVA: 0xA98D30 Offset: 0xA94D30 VA: 0xA98D30
	public float wU() { }

	[CompilerGenerated]
	// RVA: 0xA98D38 Offset: 0xA94D38 VA: 0xA98D38
	public void wu(float ) { }

	// RVA: 0xA98D40 Offset: 0xA94D40 VA: 0xA98D40 Slot: 4
	public override abi.A NT() { }

	// RVA: 0xA98D48 Offset: 0xA94D48 VA: 0xA98D48 Slot: 3
	public override string ToString() { }

	// RVA: 0xA98FD4 Offset: 0xA94FD4 VA: 0xA98FD4
	public void .ctor() { }
}


// Namespace: Adverty.a.D
internal abstract class aDf : abi // TypeDefIndex: 6175
{
	// Fields
	[CompilerGenerated]
	private bool jH; // 0x14
	[CompilerGenerated]
	private int jh; // 0x18
	[CompilerGenerated]
	private float jI; // 0x1C
	[CompilerGenerated]
	private float ji; // 0x20

	// Methods

	[CompilerGenerated]
	// RVA: 0xA98CD0 Offset: 0xA94CD0 VA: 0xA98CD0
	public bool wV() { }

	[CompilerGenerated]
	// RVA: 0xA98FDC Offset: 0xA94FDC VA: 0xA98FDC
	public void wv(bool ) { }

	[CompilerGenerated]
	// RVA: 0xA98CD8 Offset: 0xA94CD8 VA: 0xA98CD8
	public int wW() { }

	[CompilerGenerated]
	// RVA: 0xA98FE8 Offset: 0xA94FE8 VA: 0xA98FE8
	public void ww(int ) { }

	[CompilerGenerated]
	// RVA: 0xA98CE0 Offset: 0xA94CE0 VA: 0xA98CE0
	public float wX() { }

	[CompilerGenerated]
	// RVA: 0xA98FF0 Offset: 0xA94FF0 VA: 0xA98FF0
	public void wx(float ) { }

	[CompilerGenerated]
	// RVA: 0xA98CE8 Offset: 0xA94CE8 VA: 0xA98CE8
	public float wY() { }

	[CompilerGenerated]
	// RVA: 0xA98FF8 Offset: 0xA94FF8 VA: 0xA98FF8
	public void wy(float ) { }

	// RVA: 0xA98CF8 Offset: 0xA94CF8 VA: 0xA98CF8
	protected void .ctor() { }
}


// Namespace: Adverty.a.d
internal class adt : aDf // TypeDefIndex: 6176
{
	// Methods

	// RVA: 0xA99000 Offset: 0xA95000 VA: 0xA99000 Slot: 4
	public override abi.A NT() { }

	// RVA: 0xA99008 Offset: 0xA95008 VA: 0xA99008 Slot: 3
	public override string ToString() { }

	// RVA: 0xA99260 Offset: 0xA95260 VA: 0xA99260
	public void .ctor() { }
}


// Namespace: Adverty.a.d
internal class adu : aDf // TypeDefIndex: 6177
{
	// Methods

	// RVA: 0xA99268 Offset: 0xA95268 VA: 0xA99268 Slot: 4
	public override abi.A NT() { }

	// RVA: 0xA99270 Offset: 0xA95270 VA: 0xA99270 Slot: 3
	public override string ToString() { }

	// RVA: 0xA994C8 Offset: 0xA954C8 VA: 0xA994C8
	public void .ctor() { }
}


// Namespace: Adverty.a.D
internal class aDg : abi // TypeDefIndex: 6178
{
	// Fields
	[CompilerGenerated]
	private float[] jJ; // 0x18
	[CompilerGenerated]
	private int jj; // 0x20
	[CompilerGenerated]
	private float jK; // 0x24

	// Methods

	[CompilerGenerated]
	// RVA: 0xA994D0 Offset: 0xA954D0 VA: 0xA994D0
	public float[] wZ() { }

	[CompilerGenerated]
	// RVA: 0xA994D8 Offset: 0xA954D8 VA: 0xA994D8
	public void wz(float[] ) { }

	[CompilerGenerated]
	// RVA: 0xA994E0 Offset: 0xA954E0 VA: 0xA994E0
	public int XA() { }

	[CompilerGenerated]
	// RVA: 0xA994E8 Offset: 0xA954E8 VA: 0xA994E8
	public void Xa(int ) { }

	[CompilerGenerated]
	// RVA: 0xA994F0 Offset: 0xA954F0 VA: 0xA994F0
	public float XB() { }

	[CompilerGenerated]
	// RVA: 0xA994F8 Offset: 0xA954F8 VA: 0xA994F8
	public void Xb(float ) { }

	// RVA: 0xA99500 Offset: 0xA95500 VA: 0xA99500 Slot: 4
	public override abi.A NT() { }

	// RVA: 0xA99508 Offset: 0xA95508 VA: 0xA99508 Slot: 3
	public override string ToString() { }

	// RVA: 0xA9970C Offset: 0xA9570C VA: 0xA9970C
	public void .ctor() { }
}


// Namespace: Adverty.a.D
internal class aDh<mO> : abj // TypeDefIndex: 6179
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public override abk Nt(abi ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBD6B0 Offset: 0xCB96B0 VA: 0xCBD6B0
	|-aDh<object>.Nt
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBD848 Offset: 0xCB9848 VA: 0xCBD848
	|-aDh<object>..ctor
	*/
}


// Namespace: Adverty.a.b
internal abstract class abj // TypeDefIndex: 6180
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract abk Nt(abi );

	// RVA: 0xA99714 Offset: 0xA95714 VA: 0xA99714
	protected void .ctor() { }
}


// Namespace: Adverty.a.b
internal enum abk // TypeDefIndex: 6181
{
	// Fields
	public int value__; // 0x0
	public const abk ff = 0;
	public const abk fG = 1;
	public const abk fg = 2;
}


// Namespace: Adverty.a.D
internal class aDi : abj // TypeDefIndex: 6182
{
	// Fields
	private static int jk; // 0x0

	// Methods

	// RVA: 0xA9971C Offset: 0xA9571C VA: 0xA9971C Slot: 4
	public override abk Nt(abi ) { }

	// RVA: 0xA997E0 Offset: 0xA957E0 VA: 0xA997E0
	public void .ctor() { }

	// RVA: 0xA997E8 Offset: 0xA957E8 VA: 0xA997E8
	private static void .cctor() { }
}


// Namespace: Adverty.a.D
internal class aDj : abj // TypeDefIndex: 6183
{
	// Fields
	private static int jL; // 0x0

	// Methods

	// RVA: 0xA99834 Offset: 0xA95834 VA: 0xA99834
	private static float XC() { }

	// RVA: 0xA9990C Offset: 0xA9590C VA: 0xA9990C
	private static float Xc() { }

	// RVA: 0xA999E4 Offset: 0xA959E4 VA: 0xA999E4
	private static float XD() { }

	// RVA: 0xA99ABC Offset: 0xA95ABC VA: 0xA99ABC Slot: 4
	public override abk Nt(abi ) { }

	// RVA: 0xA99C28 Offset: 0xA95C28 VA: 0xA99C28
	public void .ctor() { }

	// RVA: 0xA99C30 Offset: 0xA95C30 VA: 0xA99C30
	private static void .cctor() { }
}


// Namespace: Adverty.a.D
internal class aDk : abj // TypeDefIndex: 6184
{
	// Methods

	// RVA: 0xA99C7C Offset: 0xA95C7C VA: 0xA99C7C Slot: 4
	public override abk Nt(abi ) { }

	// RVA: 0xA99E80 Offset: 0xA95E80 VA: 0xA99E80
	public void .ctor() { }
}


// Namespace: Adverty.a.b
internal class abl : IFactory<Camera> // TypeDefIndex: 6185
{
	// Methods

	// RVA: 0xA99E88 Offset: 0xA95E88 VA: 0xA99E88 Slot: 4
	public Camera Create() { }

	// RVA: 0xA99F80 Offset: 0xA95F80 VA: 0xA99F80
	public void .ctor() { }
}


// Namespace: Adverty.a.D
internal sealed class aDl : aAt // TypeDefIndex: 6186
{
	// Fields
	[CompilerGenerated]
	private static Action<abi> jl; // 0x0
	private readonly abt jM; // 0x10
	private readonly abt jm; // 0x18
	private readonly abt jN; // 0x20

	// Methods

	[CompilerGenerated]
	// RVA: 0xA99F88 Offset: 0xA95F88 VA: 0xA99F88
	public static void Xd(Action<abi> ) { }

	[CompilerGenerated]
	// RVA: 0xA9A054 Offset: 0xA96054 VA: 0xA9A054
	public static void XE(Action<abi> ) { }

	// RVA: 0xA9A120 Offset: 0xA96120 VA: 0xA9A120
	public void .ctor() { }

	// RVA: 0xA9A3F4 Offset: 0xA963F4 VA: 0xA9A3F4
	public void Start() { }

	// RVA: 0xA9A468 Offset: 0xA96468 VA: 0xA9A468
	public void Xe() { }

	// RVA: 0xA9A4DC Offset: 0xA964DC VA: 0xA9A4DC
	public void XF() { }

	// RVA: 0xA9A514 Offset: 0xA96514 VA: 0xA9A514 Slot: 4
	public void mt() { }

	// RVA: 0xA9A7B4 Offset: 0xA967B4 VA: 0xA9A7B4
	private void Xf(abi ) { }

	// RVA: 0xA9A824 Offset: 0xA96824 VA: 0xA9A824
	private void XG(bool ) { }
}


// Namespace: Adverty.a.b
internal class abm // TypeDefIndex: 6187
{
	// Fields
	public const int fH = 5;
	public const float fh = 0.55;
	[CompilerGenerated]
	private GameObject fI; // 0x10
	[CompilerGenerated]
	private MeshFilter fi; // 0x18
	[CompilerGenerated]
	private Transform fJ; // 0x20
	[CompilerGenerated]
	private Camera fj; // 0x28
	[CompilerGenerated]
	private bool fK; // 0x30

	// Methods

	// RVA: 0xA9A868 Offset: 0xA96868 VA: 0xA9A868
	public void .ctor(Camera , GameObject , bool ) { }

	// RVA: 0xA9A93C Offset: 0xA9693C VA: 0xA9A93C
	private static int[] sb(int ) { }

	// RVA: 0xA9AB18 Offset: 0xA96B18 VA: 0xA9AB18
	public bool sC() { }

	// RVA: 0xA9B2D0 Offset: 0xA972D0 VA: 0xA9B2D0
	private static float sc(Vector2 , Vector2 , Vector2 , Vector2 , Vector2 ) { }

	// RVA: 0xA9BA6C Offset: 0xA97A6C VA: 0xA9BA6C
	private static Vector3 sD(Vector3[] v) { }

	// RVA: 0xA9BAD0 Offset: 0xA97AD0 VA: 0xA9BAD0
	private static Vector3 sd(Vector3[] v) { }

	// RVA: 0xA9B1F0 Offset: 0xA971F0 VA: 0xA9B1F0
	private static Vector3 sE(Vector3 , Vector3 , Vector3 ) { }

	// RVA: 0xA9BB34 Offset: 0xA97B34 VA: 0xA9BB34
	public Vector2[] se() { }

	// RVA: 0xA9BC30 Offset: 0xA97C30 VA: 0xA9BC30
	private static int[] sF(int ) { }

	// RVA: 0xA9BE10 Offset: 0xA97E10 VA: 0xA9BE10
	private Vector2 sf(int , Camera ) { }

	// RVA: 0xA9BF38 Offset: 0xA97F38 VA: 0xA9BF38
	private static bool sG(Vector3 ) { }

	[CompilerGenerated]
	// RVA: 0xA9BF6C Offset: 0xA97F6C VA: 0xA9BF6C
	public GameObject sg() { }

	[CompilerGenerated]
	// RVA: 0xA9A918 Offset: 0xA96918 VA: 0xA9A918
	private void sH(GameObject ) { }

	[CompilerGenerated]
	// RVA: 0xA9B1E0 Offset: 0xA971E0 VA: 0xA9B1E0
	public MeshFilter sh() { }

	[CompilerGenerated]
	// RVA: 0xA9A928 Offset: 0xA96928 VA: 0xA9A928
	private void sI(MeshFilter ) { }

	[CompilerGenerated]
	// RVA: 0xA9B1E8 Offset: 0xA971E8 VA: 0xA9B1E8
	public Transform si() { }

	[CompilerGenerated]
	// RVA: 0xA9A920 Offset: 0xA96920 VA: 0xA9A920
	private void sJ(Transform ) { }

	[CompilerGenerated]
	// RVA: 0xA9B2C8 Offset: 0xA972C8 VA: 0xA9B2C8
	public Camera sj() { }

	[CompilerGenerated]
	// RVA: 0xA9A910 Offset: 0xA96910 VA: 0xA9A910
	private void sK(Camera ) { }

	[CompilerGenerated]
	// RVA: 0xA9B1D8 Offset: 0xA971D8 VA: 0xA9B1D8
	public bool sk() { }

	[CompilerGenerated]
	// RVA: 0xA9A930 Offset: 0xA96930 VA: 0xA9A930
	private void sL(bool ) { }
}


// Namespace: Adverty.a.d
internal abstract class adv<mp, mQ> : aDm // TypeDefIndex: 6188
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 7
	protected abstract float Nu(mQ );

	// RVA: -1 Offset: -1 Slot: 6
	protected override void OD(abi ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCC06CC Offset: 0xCBC6CC VA: 0xCC06CC
	|-adv<object, object>.OD
	*/

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCC0908 Offset: 0xCBC908 VA: 0xCC0908
	|-adv<object, object>..ctor
	*/
}


// Namespace: Adverty.a.b
internal interface abn // TypeDefIndex: 6189
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void NU(aCk , abi );
}


// Namespace: Adverty.a.b
internal class abo : adv<aDs, ads> // TypeDefIndex: 6190
{
	// Fields
	private static readonly float fk; // 0x0

	// Methods

	// RVA: 0xA9BF74 Offset: 0xA97F74 VA: 0xA9BF74
	private static void .cctor() { }

	// RVA: 0xA9C09C Offset: 0xA9809C VA: 0xA9C09C
	public void .ctor() { }

	// RVA: 0xA9C11C Offset: 0xA9811C VA: 0xA9C11C
	private static float sl(float ) { }

	// RVA: 0xA9C190 Offset: 0xA98190 VA: 0xA9C190 Slot: 7
	protected override float Nu(ads ) { }
}


// Namespace: Adverty.a.d
internal class adw : aDm // TypeDefIndex: 6191
{
	// Methods

	// RVA: 0xA9C2C0 Offset: 0xA982C0 VA: 0xA9C2C0
	public void .ctor() { }

	// RVA: 0xA9C32C Offset: 0xA9832C VA: 0xA9C32C Slot: 5
	protected override void Oc() { }

	// RVA: 0xA9C400 Offset: 0xA98400 VA: 0xA9C400 Slot: 6
	protected override void OD(abi ) { }
}


// Namespace: Adverty.a.D
internal abstract class aDm : abn // TypeDefIndex: 6192
{
	// Fields
	protected abj jn; // 0x10
	protected aCk jO; // 0x18

	// Methods

	// RVA: 0xA9C6B8 Offset: 0xA986B8 VA: 0xA9C6B8 Slot: 4
	public void NU(aCk , abi ) { }

	// RVA: 0xA9C3C4 Offset: 0xA983C4 VA: 0xA9C3C4 Slot: 5
	protected virtual void Oc() { }

	// RVA: 0xA9C698 Offset: 0xA98698 VA: 0xA9C698 Slot: 6
	protected virtual void OD(abi ) { }

	// RVA: 0xA9C324 Offset: 0xA98324 VA: 0xA9C324
	protected void .ctor() { }
}


// Namespace: Adverty.a.b
internal static class abp // TypeDefIndex: 6193
{
	// Methods

	// RVA: 0xA9C75C Offset: 0xA9875C VA: 0xA9C75C
	public static aDm sM(abi ) { }
}


// Namespace: Adverty.a.b
internal sealed class abq : adv<aDu, adt> // TypeDefIndex: 6194
{
	// Methods

	// RVA: 0xA9CA50 Offset: 0xA98A50 VA: 0xA9CA50
	public void .ctor() { }

	// RVA: 0xA9CAE4 Offset: 0xA98AE4 VA: 0xA9CAE4 Slot: 7
	protected override float Nu(adt ) { }
}


// Namespace: Adverty.a.b
internal class abr : adv<aDw, adu> // TypeDefIndex: 6195
{
	// Methods

	// RVA: 0xA9C9BC Offset: 0xA989BC VA: 0xA9C9BC
	public void .ctor() { }

	// RVA: 0xA9CBC4 Offset: 0xA98BC4 VA: 0xA9CBC4 Slot: 7
	protected override float Nu(adu ) { }
}


// Namespace: Adverty.a.d
internal class adx : aDm // TypeDefIndex: 6196
{
	// Methods

	// RVA: 0xA9C958 Offset: 0xA98958 VA: 0xA9C958
	public void .ctor() { }

	// RVA: 0xA9CCA4 Offset: 0xA98CA4 VA: 0xA9CCA4 Slot: 5
	protected override void Oc() { }

	// RVA: 0xA9CD3C Offset: 0xA98D3C VA: 0xA9CD3C Slot: 6
	protected override void OD(abi ) { }
}


// Namespace: Adverty.a.b
internal static class abs // TypeDefIndex: 6197
{
	// Fields
	private const string fL = "InMenu unit {0} doesn\'t connected to any canvas";
	private const float fl = 0.5;

	// Methods

	// RVA: 0xA9CEF0 Offset: 0xA98EF0 VA: 0xA9CEF0
	internal static int[] sm(UIUnitRenderer ) { }

	// RVA: 0xA9D384 Offset: 0xA99384 VA: 0xA9D384
	internal static int[] sN(Vector2 , bool ) { }

	// RVA: 0xA9D174 Offset: 0xA99174 VA: 0xA9D174
	private static int[] sn(RectTransform , Camera ) { }

	// RVA: 0xA9D078 Offset: 0xA99078 VA: 0xA9D078
	private static int[] sO(RectTransform ) { }

	// RVA: 0xA9DCF8 Offset: 0xA99CF8 VA: 0xA9DCF8
	private static Vector2 so(Vector2 ) { }

	// RVA: 0xA9D4C0 Offset: 0xA994C0 VA: 0xA9D4C0
	private static int[] sP(Vector2 , Vector2 , Vector2 , Vector2 , Vector2 ) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class abt.A // TypeDefIndex: 6198
{
	// Fields
	public static readonly abt.A jo; // 0x0
	public static Func<BaseUnit, UnitRenderer> jP; // 0x8
	public static Func<abi, bool> jp; // 0x10

	// Methods

	// RVA: 0xA9F6B0 Offset: 0xA9B6B0 VA: 0xA9F6B0
	private static void .cctor() { }

	// RVA: 0xA9F70C Offset: 0xA9B70C VA: 0xA9F70C
	public void .ctor() { }

	// RVA: 0xA9F714 Offset: 0xA9B714 VA: 0xA9F714
	internal UnitRenderer Xg(BaseUnit ) { }

	// RVA: 0xA9F72C Offset: 0xA9B72C VA: 0xA9F72C
	internal bool XH(abi ) { }
}


// Namespace: Adverty.a.b
internal class abt // TypeDefIndex: 6199
{
	// Fields
	[CompilerGenerated]
	private static Action<abi> fM; // 0x0
	[CompilerGenerated]
	private bool fm; // 0x10
	private RenderType fN; // 0x14
	private Func<bool> fn; // 0x18
	private Func<bool> fO; // 0x20
	private abx fo; // 0x28
	private abx fP; // 0x30
	private List<UnitRenderer> fp; // 0x38
	private aag fQ; // 0x40
	private abx fq; // 0x48
	private bool fR; // 0x50

	// Methods

	[CompilerGenerated]
	// RVA: 0xA9A328 Offset: 0xA96328 VA: 0xA9A328
	internal static void sp(Action<abi> ) { }

	[CompilerGenerated]
	// RVA: 0xA9A5B8 Offset: 0xA965B8 VA: 0xA9A5B8
	internal static void sQ(Action<abi> ) { }

	[CompilerGenerated]
	// RVA: 0xA9DD0C Offset: 0xA99D0C VA: 0xA9DD0C
	internal bool sq() { }

	[CompilerGenerated]
	// RVA: 0xA9A85C Offset: 0xA9685C VA: 0xA9A85C
	internal void sR(bool ) { }

	// RVA: 0xA9DD14 Offset: 0xA99D14 VA: 0xA9DD14
	private static List<BaseUnit> sr() { }

	// RVA: 0xA9DD9C Offset: 0xA99D9C VA: 0xA9DD9C
	private bool sS() { }

	// RVA: 0xA9DE18 Offset: 0xA99E18 VA: 0xA9DE18
	private bool ss() { }

	// RVA: 0xA9A29C Offset: 0xA9629C VA: 0xA9A29C
	internal void .ctor(RenderType ) { }

	// RVA: 0xA9DF3C Offset: 0xA99F3C VA: 0xA9DF3C
	private void sT() { }

	// RVA: 0xA9E0C8 Offset: 0xA9A0C8 VA: 0xA9E0C8
	private void st(SettingsData ) { }

	// RVA: 0xA9E4D4 Offset: 0xA9A4D4 VA: 0xA9E4D4
	private void sU(SettingsData ) { }

	// RVA: 0xA9E2F4 Offset: 0xA9A2F4 VA: 0xA9E2F4
	private void su(SettingsData ) { }

	// RVA: 0xA9A44C Offset: 0xA9644C VA: 0xA9A44C
	internal void Start() { }

	// RVA: 0xA9A4C0 Offset: 0xA964C0 VA: 0xA9A4C0
	internal void sV() { }

	// RVA: 0xA9A510 Offset: 0xA96510 VA: 0xA9A510
	internal void sv() { }

	// RVA: 0xA9EE84 Offset: 0xA9AE84 VA: 0xA9EE84
	private void sW() { }

	// RVA: 0xA9F1E0 Offset: 0xA9B1E0 VA: 0xA9F1E0
	private void sw() { }

	// RVA: 0xA9F030 Offset: 0xA9B030 VA: 0xA9F030
	private void sX(abx ) { }

	// RVA: 0xA9F1E8 Offset: 0xA9B1E8 VA: 0xA9F1E8
	private void sx(IEnumerable<abi> ) { }

	// RVA: 0xA9F5AC Offset: 0xA9B5AC VA: 0xA9F5AC
	private static void sY(abi ) { }

	// RVA: 0xA9EDD8 Offset: 0xA9ADD8 VA: 0xA9EDD8
	private void sy() { }

	// RVA: 0xA9A684 Offset: 0xA96684 VA: 0xA9A684
	internal void sZ() { }

	[CompilerGenerated]
	// RVA: 0xA9F61C Offset: 0xA9B61C VA: 0xA9F61C
	private bool sz() { }

	[CompilerGenerated]
	// RVA: 0xA9F630 Offset: 0xA9B630 VA: 0xA9F630
	private bool TA() { }

	[CompilerGenerated]
	// RVA: 0xA9F65C Offset: 0xA9B65C VA: 0xA9F65C
	private bool Ta() { }

	[CompilerGenerated]
	// RVA: 0xA9F670 Offset: 0xA9B670 VA: 0xA9F670
	private bool TB(BaseUnit ) { }
}


// Namespace: Adverty.a.b
internal abstract class abu // TypeDefIndex: 6200
{
	// Fields
	[CompilerGenerated]
	private Action<abi> fr; // 0x10
	[CompilerGenerated]
	private List<BaseUnit> fS; // 0x18
	[CompilerGenerated]
	private bool fs; // 0x20
	[CompilerGenerated]
	private Camera fT; // 0x28

	// Methods

	[CompilerGenerated]
	// RVA: 0xA9F738 Offset: 0xA9B738 VA: 0xA9F738
	public void Tb(Action<abi> ) { }

	[CompilerGenerated]
	// RVA: 0xA9F7E8 Offset: 0xA9B7E8 VA: 0xA9F7E8
	public void TC(Action<abi> ) { }

	// RVA: 0xA9F898 Offset: 0xA9B898 VA: 0xA9F898
	protected void .ctor(Camera ) { }

	// RVA: 0xA9F8C8 Offset: 0xA9B8C8 VA: 0xA9F8C8
	protected void Tc(abi ) { }

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void TD(List<BaseUnit> );

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void Td();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void TE();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void Te();

	[CompilerGenerated]
	// RVA: 0xA9F920 Offset: 0xA9B920 VA: 0xA9F920
	public List<BaseUnit> TF() { }

	[CompilerGenerated]
	// RVA: 0xA9F928 Offset: 0xA9B928 VA: 0xA9F928
	protected void Tf(List<BaseUnit> ) { }

	[CompilerGenerated]
	// RVA: 0xA9F930 Offset: 0xA9B930 VA: 0xA9F930
	public bool TG() { }

	[CompilerGenerated]
	// RVA: 0xA9F938 Offset: 0xA9B938 VA: 0xA9F938
	protected void Tg(bool ) { }

	[CompilerGenerated]
	// RVA: 0xA9F944 Offset: 0xA9B944 VA: 0xA9F944
	protected Camera TH() { }

	[CompilerGenerated]
	// RVA: 0xA9F8C0 Offset: 0xA9B8C0 VA: 0xA9F8C0
	private void Th(Camera ) { }
}


// Namespace: Adverty.Checks
[Extension]
public static class Vector3Extension // TypeDefIndex: 6201
{
	// Methods

	[Extension]
	// RVA: 0xA9F94C Offset: 0xA9B94C VA: 0xA9F94C
	public static bool InViewportStandard(Vector3 vector, Camera camera) { }

	[Extension]
	// RVA: 0xA9F9A0 Offset: 0xA9B9A0 VA: 0xA9F9A0
	public static bool InViewPortStereo(Vector3 vector, Camera camera) { }

	[Extension]
	// RVA: 0xA9FB2C Offset: 0xA9BB2C VA: 0xA9FB2C
	public static bool InViewportOverlay(Vector3 vector) { }
}


// Namespace: Adverty.a.D
internal class aDn : abv // TypeDefIndex: 6202
{
	// Fields
	[CompilerGenerated]
	private bool jQ; // 0x20

	// Methods

	[CompilerGenerated]
	// RVA: 0xA9FBB4 Offset: 0xA9BBB4 VA: 0xA9FBB4
	private bool Xh() { }

	[CompilerGenerated]
	// RVA: 0xA9FBBC Offset: 0xA9BBBC VA: 0xA9FBBC
	private void XI(bool ) { }

	// RVA: 0xA9FBC8 Offset: 0xA9BBC8 VA: 0xA9FBC8
	internal void .ctor(MeshUnitRenderer , bool ) { }

	// RVA: 0xA9FCE8 Offset: 0xA9BCE8 VA: 0xA9FCE8 Slot: 4
	protected override Vector3[] NV(UnitRenderer ) { }

	// RVA: 0xA9FFC8 Offset: 0xA9BFC8 VA: 0xA9FFC8
	private static int[] Xi(int ) { }
}


// Namespace: Adverty.a.D
internal class aDo : abv // TypeDefIndex: 6203
{
	// Methods

	// RVA: 0xAA013C Offset: 0xA9C13C VA: 0xAA013C
	public void .ctor(UnitRenderer ) { }

	// RVA: 0xAA0174 Offset: 0xA9C174 VA: 0xAA0174 Slot: 4
	protected override Vector3[] NV(UnitRenderer ) { }
}


// Namespace: Adverty.a.b
internal abstract class abv // TypeDefIndex: 6204
{
	// Fields
	private const float ft = 0.01;
	private Transform fU; // 0x10
	[CompilerGenerated]
	private Vector3[] fu; // 0x18
	[CompilerGenerated]
	private static int[] fV; // 0x0

	// Methods

	[CompilerGenerated]
	// RVA: 0xAA0374 Offset: 0xA9C374 VA: 0xAA0374
	public Vector3[] TI() { }

	[CompilerGenerated]
	// RVA: 0xA9FCE0 Offset: 0xA9BCE0 VA: 0xA9FCE0
	protected void Ti(Vector3[] ) { }

	[CompilerGenerated]
	// RVA: 0xAA037C Offset: 0xA9C37C VA: 0xAA037C
	internal static int[] TJ() { }

	[CompilerGenerated]
	// RVA: 0xAA03C4 Offset: 0xA9C3C4 VA: 0xAA03C4
	private static void Tj(int[] ) { }

	// RVA: 0xA9FC0C Offset: 0xA9BC0C VA: 0xA9FC0C
	internal void .ctor(UnitRenderer ) { }

	// RVA: -1 Offset: -1 Slot: 4
	protected abstract Vector3[] NV(UnitRenderer );

	// RVA: 0xAA0410 Offset: 0xA9C410 VA: 0xAA0410 Slot: 5
	internal virtual Rect TK(Camera ) { }

	// RVA: 0xAA0514 Offset: 0xA9C514 VA: 0xAA0514 Slot: 6
	internal virtual bool Tk(Camera ) { }

	// RVA: 0xAA0548 Offset: 0xA9C548 VA: 0xAA0548
	internal int TL(Camera ) { }

	// RVA: 0xAA05E0 Offset: 0xA9C5E0 VA: 0xAA05E0
	private bool Tl(Camera , Vector3 ) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class ady.A<mr, mS> // TypeDefIndex: 6205
{
	// Fields
	public static readonly ady.A<mr, mS> MH; // 0x0
	public static Predicate<UnitRenderer> Mh; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC681C Offset: 0xBC281C VA: 0xBC681C
	|-ady.A<object, object>..cctor
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC68D8 Offset: 0xBC28D8 VA: 0xBC68D8
	|-ady.A<object, object>..ctor
	*/

	// RVA: -1 Offset: -1
	internal bool zP(UnitRenderer ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC68E0 Offset: 0xBC28E0 VA: 0xBC68E0
	|-ady.A<object, object>.zP
	*/
}


// Namespace: Adverty.a.d
internal abstract class ady<mq, mR> : aDp // TypeDefIndex: 6206
{
	// Fields
	protected const int Lu = 4;
	protected static readonly int LV; // 0x0
	protected static Resolution Lv; // 0x0
	protected mR[] LW; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCC0910 Offset: 0xCBC910 VA: 0xCC0910
	|-ady<object, object>..cctor
	*/

	// RVA: -1 Offset: -1
	protected void Zh() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCC0A18 Offset: 0xCBCA18 VA: 0xCC0A18
	|-ady<object, object>.Zh
	*/

	// RVA: -1 Offset: -1 Slot: 10
	public override void NX(Action<IEnumerable<abi>> ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCC0C38 Offset: 0xCBCC38 VA: 0xCC0C38
	|-ady<object, object>.NX
	*/

	// RVA: -1 Offset: -1 Slot: 11
	public override void Nx() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCC1000 Offset: 0xCBD000 VA: 0xCC1000
	|-ady<object, object>.Nx
	*/

	// RVA: -1 Offset: -1 Slot: 13
	protected abstract Rect Nz(mq );

	// RVA: -1 Offset: -1 Slot: 14
	protected abstract int nA(mq );

	// RVA: -1 Offset: -1 Slot: 15
	protected abstract float NZ(mq );

	// RVA: -1 Offset: -1 Slot: 16
	protected abstract void Ny(Rect[] , mR[] );

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCC10C0 Offset: 0xCBD0C0 VA: 0xCC10C0
	|-ady<object, object>..ctor
	*/
}


// Namespace: Adverty.a.D
internal abstract class aDp : abx // TypeDefIndex: 6207
{
	// Fields
	[CompilerGenerated]
	private List<UnitRenderer> jq; // 0x10
	protected Camera jR; // 0x18
	protected Action<IEnumerable<abi>> jr; // 0x20

	// Methods

	[CompilerGenerated]
	// RVA: 0xAA0608 Offset: 0xA9C608 VA: 0xAA0608 Slot: 4
	public List<UnitRenderer> NW() { }

	[CompilerGenerated]
	// RVA: 0xAA0610 Offset: 0xA9C610 VA: 0xAA0610
	protected void XJ(List<UnitRenderer> ) { }

	// RVA: 0xAA0618 Offset: 0xA9C618 VA: 0xAA0618 Slot: 9
	public virtual void Nw(List<UnitRenderer> , Camera ) { }

	// RVA: 0xAA0620 Offset: 0xA9C620 VA: 0xAA0620 Slot: 10
	public virtual void NX(Action<IEnumerable<abi>> ) { }

	// RVA: 0xAA0628 Offset: 0xA9C628 VA: 0xAA0628
	protected void Xj(IEnumerable<abi> ) { }

	// RVA: 0xAA0688 Offset: 0xA9C688 VA: 0xAA0688 Slot: 11
	public virtual void Nx() { }

	// RVA: 0xAA0690 Offset: 0xA9C690 VA: 0xAA0690 Slot: 12
	public virtual void NY() { }

	// RVA: 0xAA0694 Offset: 0xA9C694 VA: 0xAA0694
	protected void .ctor() { }
}


// Namespace: Adverty.a.b
internal interface abw // TypeDefIndex: 6208
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Nv(int[] , Action<float[], bool> );
}


// Namespace: Adverty.a.b
internal interface abx // TypeDefIndex: 6209
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract List<UnitRenderer> NW();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void Nw(List<UnitRenderer> , Camera );

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void NX(Action<IEnumerable<abi>> );

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void Nx();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void NY();
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class adz.A // TypeDefIndex: 6210
{
	// Fields
	public static readonly adz.A MI; // 0x0
	public static Predicate<UnitRenderer> Mi; // 0x8

	// Methods

	// RVA: 0xAA1964 Offset: 0xA9D964 VA: 0xAA1964
	private static void .cctor() { }

	// RVA: 0xAA19C0 Offset: 0xA9D9C0 VA: 0xAA19C0
	public void .ctor() { }

	// RVA: 0xAA19C8 Offset: 0xA9D9C8 VA: 0xAA19C8
	internal bool zp(UnitRenderer ) { }
}


// Namespace: Adverty.a.E
internal class adz : aDp // TypeDefIndex: 6211
{
	// Fields
	protected ads[] Lw; // 0x28

	// Methods

	// RVA: 0xAA069C Offset: 0xA9C69C VA: 0xAA069C Slot: 10
	public override void NX(Action<IEnumerable<abi>> ) { }

	// RVA: 0xAA0BF0 Offset: 0xA9CBF0 VA: 0xAA0BF0 Slot: 11
	public override void Nx() { }

	// RVA: 0xAA0C0C Offset: 0xA9CC0C VA: 0xAA0C0C Slot: 13
	protected virtual float OO(Transform ) { }

	// RVA: 0xAA0C10 Offset: 0xA9CC10 VA: 0xAA0C10
	protected float ZI(Transform ) { }

	// RVA: 0xAA106C Offset: 0xA9D06C VA: 0xAA106C Slot: 14
	protected virtual float Oo(Vector3[] , Transform ) { }

	// RVA: 0xAA12AC Offset: 0xA9D2AC VA: 0xAA12AC Slot: 15
	protected virtual void Zi(Rect[] , ads[] ) { }

	// RVA: 0xAA1188 Offset: 0xA9D188 VA: 0xAA1188
	protected static float ZJ(Vector2[] ) { }

	// RVA: 0xAA177C Offset: 0xA9D77C VA: 0xAA177C
	private static float Zj(Vector2 , Vector2 , Vector2 ) { }

	// RVA: 0xAA0A70 Offset: 0xA9CA70 VA: 0xAA0A70
	private void ZK() { }

	// RVA: 0xAA0EBC Offset: 0xA9CEBC VA: 0xAA0EBC
	protected static double Zk() { }

	// RVA: 0xAA0F94 Offset: 0xA9CF94 VA: 0xAA0F94
	protected static double ZL() { }

	// RVA: 0xAA17AC Offset: 0xA9D7AC VA: 0xAA17AC Slot: 16
	public virtual float OP() { }

	// RVA: 0xAA1884 Offset: 0xA9D884 VA: 0xAA1884 Slot: 17
	public virtual float Op() { }

	// RVA: 0xAA195C Offset: 0xA9D95C VA: 0xAA195C
	public void .ctor() { }
}


// Namespace: Adverty.a.b
internal static class aby // TypeDefIndex: 6212
{
	// Methods

	// RVA: 0xA9E5D8 Offset: 0xA9A5D8 VA: 0xA9E5D8
	public static abx TM() { }
}


// Namespace: Adverty.a.E
internal class aEp : adz // TypeDefIndex: 6213
{
	// Fields
	private const float MJ = 1.05;
	private const float Mj = 0.7;
	private const float MK = 0.35;
	private const float Mk = 1.5;
	private const float ML = 2.3;
	private const float Ml = 0.034;

	// Methods

	// RVA: 0xAA1A2C Offset: 0xA9DA2C VA: 0xAA1A2C Slot: 13
	protected override float OO(Transform ) { }

	// RVA: 0xAA1A68 Offset: 0xA9DA68 VA: 0xAA1A68
	private float zQ(Transform ) { }

	// RVA: 0xAA1C50 Offset: 0xA9DC50 VA: 0xAA1C50 Slot: 14
	protected override float Oo(Vector3[] , Transform ) { }

	// RVA: 0xAA1FB4 Offset: 0xA9DFB4 VA: 0xAA1FB4
	private static float zq(float ) { }

	// RVA: 0xAA1FD0 Offset: 0xA9DFD0 VA: 0xAA1FD0 Slot: 16
	public override float OP() { }

	// RVA: 0xAA20A8 Offset: 0xA9E0A8 VA: 0xAA20A8 Slot: 17
	public override float Op() { }

	// RVA: 0xAA1A24 Offset: 0xA9DA24 VA: 0xAA1A24
	public void .ctor() { }
}


// Namespace: 
private struct aEa.A // TypeDefIndex: 6214
{
	// Fields
	[CompilerGenerated]
	private Vector2[] MM; // 0x0

	// Methods

	[CompilerGenerated]
	// RVA: 0xAA2A38 Offset: 0xA9EA38 VA: 0xAA2A38
	public Vector2[] zR() { }

	[CompilerGenerated]
	// RVA: 0xAA2EAC Offset: 0xA9EEAC VA: 0xAA2EAC
	public void zr(Vector2[] ) { }
}


// Namespace: 
private enum aEa.a // TypeDefIndex: 6215
{
	// Fields
	public int value__; // 0x0
	public const aEa.a Mm = 0;
	public const aEa.a MN = 1;
	public const aEa.a Mn = 2;
	public const aEa.a MO = 3;
	public const aEa.a Mo = 4;
	public const aEa.a MP = 5;
}


// Namespace: Adverty.a.E
internal class aEa : aDp // TypeDefIndex: 6216
{
	// Fields
	private const string LX = "Shaders/VisibilityCheckStencilShader";
	private const string Lx = "ComputeShaders/VisibilityCheckCS";
	private const string LY = "lightTexture";
	private const int Ly = 0;
	private const int LZ = 2449;
	private const int Lz = 4;
	private const float lA = 1;
	private const string la = "_GrayFactor";
	private const string lB = "textureWorld";
	private const string lb = "_StencilWriteMaskID";
	private const int lC = 4;
	private const int lc = 8;
	private const float lD = 128;
	private const float ld = 0;
	private const string lE = "_Temp";
	private const int le = 5;
	private const string lF = "bufferOut";
	private const string lf = "bufferIn";
	private const string lG = "bufferWorld";
	private static Material lg; // 0x0
	private static ComputeShader lH; // 0x8
	private static ComputeBuffer[] lh; // 0x10
	private static CommandBuffer[] lI; // 0x18
	private static aCd li; // 0x20
	private static aEa.a lJ; // 0x28
	private aDe[] lj; // 0x28

	// Methods

	// RVA: 0xA9E650 Offset: 0xA9A650 VA: 0xA9E650
	internal void .ctor() { }

	// RVA: 0xAA2180 Offset: 0xA9E180 VA: 0xAA2180 Slot: 10
	public override void NX(Action<IEnumerable<abi>> ) { }

	// RVA: 0xAA2D3C Offset: 0xA9ED3C VA: 0xAA2D3C Slot: 11
	public override void Nx() { }

	// RVA: 0xAA2E4C Offset: 0xA9EE4C VA: 0xAA2E4C Slot: 12
	public override void NY() { }

	// RVA: 0xAA25E0 Offset: 0xA9E5E0 VA: 0xAA25E0
	private aEa.A Zl(List<UnitRenderer> ) { }

	// RVA: 0xAA2EB4 Offset: 0xA9EEB4 VA: 0xAA2EB4
	private void ZM() { }

	// RVA: 0xAA2FD0 Offset: 0xA9EFD0 VA: 0xAA2FD0
	private void Zm() { }

	// RVA: 0xAA30C0 Offset: 0xA9F0C0 VA: 0xAA30C0
	private void ZN(float[] , bool ) { }

	// RVA: 0xAA2A40 Offset: 0xA9EA40 VA: 0xAA2A40
	private static void Zn(List<UnitRenderer> ) { }

	// RVA: 0xAA33BC Offset: 0xA9F3BC VA: 0xAA33BC
	private static void ZO() { }

	// RVA: 0xAA2DD0 Offset: 0xA9EDD0 VA: 0xAA2DD0
	private void Zo() { }
}


// Namespace: Adverty.a.C
internal sealed class abz : ady<SpriteUnitRenderer, adt> // TypeDefIndex: 6217
{
	// Methods

	// RVA: 0xAA3450 Offset: 0xA9F450 VA: 0xAA3450 Slot: 16
	protected override void Ny(Rect[] , adt[] ) { }

	// RVA: 0xAA358C Offset: 0xA9F58C VA: 0xAA358C Slot: 15
	protected override float NZ(SpriteUnitRenderer ) { }

	// RVA: 0xAA36F0 Offset: 0xA9F6F0 VA: 0xAA36F0 Slot: 13
	protected override Rect Nz(SpriteUnitRenderer ) { }

	// RVA: 0xAA3724 Offset: 0xA9F724 VA: 0xAA3724 Slot: 14
	protected override int nA(SpriteUnitRenderer ) { }

	// RVA: 0xA9ED6C Offset: 0xA9AD6C VA: 0xA9ED6C
	public void .ctor() { }
}


// Namespace: Adverty.a.C
internal sealed class aCa : ady<UIUnitRenderer, adu> // TypeDefIndex: 6218
{
	// Methods

	// RVA: 0xAA3750 Offset: 0xA9F750 VA: 0xAA3750 Slot: 16
	protected override void Ny(Rect[] , adu[] ) { }

	// RVA: 0xAA3A20 Offset: 0xA9FA20 VA: 0xAA3A20 Slot: 14
	protected override int nA(UIUnitRenderer ) { }

	// RVA: 0xAA3C24 Offset: 0xA9FC24 VA: 0xAA3C24 Slot: 15
	protected override float NZ(UIUnitRenderer ) { }

	// RVA: 0xAA3D54 Offset: 0xA9FD54 VA: 0xAA3D54 Slot: 13
	protected override Rect Nz(UIUnitRenderer ) { }

	// RVA: 0xAA3E10 Offset: 0xA9FE10 VA: 0xAA3E10
	public void .ctor() { }
}


// Namespace: Adverty.a.E
internal class aEb : aDp // TypeDefIndex: 6219
{
	// Fields
	private const int lK = 3;
	private aDg[] lk; // 0x28
	private int[] lL; // 0x30
	private int ll; // 0x38
	private UIUnitRenderer lM; // 0x40

	// Methods

	// RVA: 0xAA3E7C Offset: 0xA9FE7C VA: 0xAA3E7C
	public void .ctor() { }

	// RVA: 0xAA3EFC Offset: 0xA9FEFC VA: 0xAA3EFC Slot: 10
	public override void NX(Action<IEnumerable<abi>> ) { }

	// RVA: 0xAA4150 Offset: 0xAA0150 VA: 0xAA4150
	private abw ZP() { }

	// RVA: 0xAA3F8C Offset: 0xA9FF8C VA: 0xAA3F8C
	private void Zp() { }

	// RVA: 0xAA43D8 Offset: 0xAA03D8 VA: 0xAA43D8
	private void ZQ(abw ) { }

	// RVA: 0xAA45A4 Offset: 0xAA05A4 VA: 0xAA45A4
	private static bool Zq(int[] ) { }

	// RVA: 0xAA4674 Offset: 0xAA0674 VA: 0xAA4674
	private void ZR(float[] , bool ) { }

	// RVA: 0xAA47C0 Offset: 0xAA07C0 VA: 0xAA47C0 Slot: 11
	public override void Nx() { }

	// RVA: 0xAA427C Offset: 0xAA027C VA: 0xAA427C
	private void Zr() { }

	// RVA: 0xAA42CC Offset: 0xAA02CC VA: 0xAA42CC
	private void ZS() { }
}


// Namespace: Adverty.a.C
internal enum aCb // TypeDefIndex: 6220
{
	// Fields
	public int value__; // 0x0
	public const aCb fv = 0;
	public const aCb fW = 1;
	public const aCb fw = 2;
}


// Namespace: Adverty.Checks.UnitChecks
public class ViewPortChecker // TypeDefIndex: 6221
{
	// Fields
	[CompilerGenerated]
	private static Action<BaseUnit> fX; // 0x0
	[CompilerGenerated]
	private static Action<BaseUnit> fx; // 0x8
	private BaseUnit fY; // 0x10
	private aag fy; // 0x18
	private const float fZ = 1;

	// Methods

	[CompilerGenerated]
	// RVA: 0xAA487C Offset: 0xAA087C VA: 0xAA487C
	internal static void Tm(Action<BaseUnit> ) { }

	[CompilerGenerated]
	// RVA: 0xAA4948 Offset: 0xAA0948 VA: 0xAA4948
	internal static void TN(Action<BaseUnit> ) { }

	[CompilerGenerated]
	// RVA: 0xAA4A14 Offset: 0xAA0A14 VA: 0xAA4A14
	internal static void Tn(Action<BaseUnit> ) { }

	[CompilerGenerated]
	// RVA: 0xAA4AE4 Offset: 0xAA0AE4 VA: 0xAA4AE4
	internal static void TO(Action<BaseUnit> ) { }

	// RVA: 0xAA4BB4 Offset: 0xAA0BB4 VA: 0xAA4BB4
	internal void .ctor(BaseUnit ) { }

	// RVA: 0xAA4CEC Offset: 0xAA0CEC VA: 0xAA4CEC
	internal void To() { }

	// RVA: 0xAA4D14 Offset: 0xAA0D14 VA: 0xAA4D14
	internal void Start() { }

	// RVA: 0xAA4D28 Offset: 0xAA0D28 VA: 0xAA4D28
	internal void TP() { }

	// RVA: 0xAA4D3C Offset: 0xAA0D3C VA: 0xAA4D3C
	private void Tp() { }

	[CompilerGenerated]
	// RVA: 0xAA4E6C Offset: 0xAA0E6C VA: 0xAA4E6C
	private bool TQ() { }
}


// Namespace: Adverty.a.C
internal static class aCc // TypeDefIndex: 6222
{
	// Methods

	// RVA: 0xAA4F08 Offset: 0xAA0F08 VA: 0xAA4F08
	internal static extern IntPtr Tq() { }

	// RVA: 0xAA4F70 Offset: 0xAA0F70 VA: 0xAA4F70
	internal static extern IntPtr TR() { }

	// RVA: 0xAA4FD8 Offset: 0xAA0FD8 VA: 0xAA4FD8
	internal static extern IntPtr Tr() { }

	// RVA: 0xAA5040 Offset: 0xAA1040 VA: 0xAA5040
	internal static extern void TS(IntPtr , IntPtr , int , IntPtr ) { }

	// RVA: 0xAA50DC Offset: 0xAA10DC VA: 0xAA50DC
	internal static extern void Ts() { }
}


// Namespace: 
private enum aDq.A // TypeDefIndex: 6223
{
	// Fields
	public int value__; // 0x0
	public const aDq.A lm = 0;
	public const aDq.A lN = 1;
	public const aDq.A ln = 2;
	public const aDq.A lO = 3;
}


// Namespace: 
[CompilerGenerated]
private sealed class aDq.a // TypeDefIndex: 6224
{
	// Fields
	public aDq.A lo; // 0x10

	// Methods

	// RVA: 0xAA56B8 Offset: 0xAA16B8 VA: 0xAA56B8
	public void .ctor() { }

	// RVA: 0xAA57E8 Offset: 0xAA17E8 VA: 0xAA57E8
	internal void Zs() { }
}


// Namespace: Adverty.a.D
internal class aDq : aCd // TypeDefIndex: 6225
{
	// Fields
	private static GCHandle jS; // 0x0
	private static float[] js; // 0x8
	private static bool jT; // 0x10
	private static bool jt; // 0x11

	// Methods

	// RVA: 0xAA5334 Offset: 0xAA1334 VA: 0xAA5334
	public void .ctor() { }

	// RVA: 0xAA53A0 Offset: 0xAA13A0 VA: 0xAA53A0 Slot: 4
	internal override void na(ComputeBuffer , Action<float[], bool> ) { }

	// RVA: 0xAA55AC Offset: 0xAA15AC VA: 0xAA55AC Slot: 5
	internal override void nB() { }

	// RVA: 0xAA5630 Offset: 0xAA1630 VA: 0xAA5630
	private static void XK() { }

	[MonoPInvokeCallback(typeof(Action))]
	// RVA: 0xAA5140 Offset: 0xAA1140 VA: 0xAA5140
	private static void Xk(aDq.A ) { }

	// RVA: 0xAA56C0 Offset: 0xAA16C0 VA: 0xAA56C0
	private static void XL(aDq.A ) { }

	// RVA: 0xAA5740 Offset: 0xAA1740 VA: 0xAA5740
	private static void Xl(float[] , bool ) { }
}


// Namespace: 
protected enum aCd.A // TypeDefIndex: 6226
{
	// Fields
	public int value__; // 0x0
	public const aCd.A jU = 0;
	public const aCd.A ju = 1;
	public const aCd.A jV = 2;
}


// Namespace: Adverty.a.C
internal abstract class aCd // TypeDefIndex: 6227
{
	// Fields
	protected static aCd.A fz; // 0x0
	protected static Action<float[], bool> GA; // 0x8

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	internal abstract void na(ComputeBuffer , Action<float[], bool> );

	// RVA: -1 Offset: -1 Slot: 5
	internal abstract void nB();

	// RVA: 0xAA5398 Offset: 0xAA1398 VA: 0xAA5398
	protected void .ctor() { }
}


// Namespace: Adverty.a.D
internal class aDr : aCd // TypeDefIndex: 6228
{
	// Methods

	// RVA: 0xAA57F0 Offset: 0xAA17F0 VA: 0xAA57F0 Slot: 4
	internal override void na(ComputeBuffer , Action<float[], bool> ) { }

	// RVA: 0xAA5954 Offset: 0xAA1954 VA: 0xAA5954 Slot: 5
	internal override void nB() { }

	// RVA: 0xAA5A44 Offset: 0xAA1A44 VA: 0xAA5A44
	private void XM(AsyncGPUReadbackRequest ) { }

	// RVA: 0xAA59BC Offset: 0xAA19BC VA: 0xAA59BC
	private static void Xm(float[] , bool ) { }

	// RVA: 0xAA5B68 Offset: 0xAA1B68 VA: 0xAA5B68
	public void .ctor() { }
}


// Namespace: Adverty.a.C
internal static class aCe // TypeDefIndex: 6229
{
	// Methods

	// RVA: 0xAA5B70 Offset: 0xAA1B70 VA: 0xAA5B70
	internal static aCd TT() { }
}


// Namespace: Adverty.Checks.WebAnalytics
internal class RawSummaryData // TypeDefIndex: 6230
{
	// Methods

	// RVA: 0xAA5C4C Offset: 0xAA1C4C VA: 0xAA5C4C
	public void .ctor() { }
}


// Namespace: Adverty.Checks.WebAnalytics
internal struct VisibilityCheckData // TypeDefIndex: 6231
{
	// Fields
	public bool isVisible; // 0x0
	public double viewedSize; // 0x8
	public double exposedArea; // 0x10
	public double qualityFactor; // 0x18
	public double timestamp; // 0x20
	public VisibleRect visibleRect; // 0x28
}


// Namespace: Adverty.a.C
internal class aCf // TypeDefIndex: 6232
{
	// Fields
	private List<VisibilityCheckData> Ga; // 0x10
	private DateTime GB; // 0x18

	// Methods

	// RVA: 0xAA5C54 Offset: 0xAA1C54 VA: 0xAA5C54
	internal void .ctor() { }

	// RVA: 0xAA5D04 Offset: 0xAA1D04 VA: 0xAA5D04
	internal void Tt(VisibilityCheckData ) { }

	// RVA: 0xAA5E14 Offset: 0xAA1E14 VA: 0xAA5E14
	internal void TU() { }

	// RVA: 0xAA5EB0 Offset: 0xAA1EB0 VA: 0xAA5EB0
	internal string Tu() { }
}


// Namespace: Adverty.Checks.WebAnalytics
internal struct VisibleRect // TypeDefIndex: 6233
{
	// Fields
	public int x; // 0x0
	public int y; // 0x4
	public int width; // 0x8
	public int height; // 0xC
}


// Namespace: Adverty.AdUnit
public struct AdConfiguration // TypeDefIndex: 6234
{
	// Fields
	public bool Interactable; // 0x0
	public bool Animated; // 0x1

	// Methods

	// RVA: 0xAA5F0C Offset: 0xAA1F0C VA: 0xAA5F0C
	public void .ctor(bool interactable, bool animated) { }
}


// Namespace: 
public enum aCg.AdType // TypeDefIndex: 6235
{
	// Fields
	public int value__; // 0x0
	public const aCg.AdType Image = 0;
	public const aCg.AdType Html = 1;
	public const aCg.AdType ClickableHTML = 2;
	public const aCg.AdType Video = 3;
	public const aCg.AdType Application = 4;
	public const aCg.AdType WebPage = 5;
	public const aCg.AdType VideoBanner = 6;
	public const aCg.AdType AnimatedHTML = 7;
	public const aCg.AdType AnimatedClickableHTML = 8;
}


// Namespace: Adverty.a.C
internal class aCg // TypeDefIndex: 6236
{
	// Fields
	[CompilerGenerated]
	private string Gb; // 0x10
	[CompilerGenerated]
	private aCn[] GC; // 0x18

	// Methods

	[CompilerGenerated]
	// RVA: 0xAA5F20 Offset: 0xAA1F20 VA: 0xAA5F20
	public string TV() { }

	[CompilerGenerated]
	// RVA: 0xAA5F28 Offset: 0xAA1F28 VA: 0xAA5F28
	private void Tv(string ) { }

	[CompilerGenerated]
	// RVA: 0xAA5F30 Offset: 0xAA1F30 VA: 0xAA5F30
	public aCn[] TW() { }

	[CompilerGenerated]
	// RVA: 0xAA5F38 Offset: 0xAA1F38 VA: 0xAA5F38
	private void Tw(aCn[] ) { }

	// RVA: 0xAA5F40 Offset: 0xAA1F40 VA: 0xAA5F40
	public void .ctor(string , aCn[] ) { }

	// RVA: 0xAA5F6C Offset: 0xAA1F6C VA: 0xAA5F6C
	public AdConfiguration TX() { }

	// RVA: 0xAA5FA4 Offset: 0xAA1FA4 VA: 0xAA5FA4
	private bool Tx() { }

	// RVA: 0xAA5FF8 Offset: 0xAA1FF8 VA: 0xAA5FF8
	private bool TY() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class aCh.A // TypeDefIndex: 6237
{
	// Fields
	public static readonly aCh.A jv; // 0x0
	public static UnityAction<Scene, LoadSceneMode> jW; // 0x8

	// Methods

	// RVA: 0xAA6494 Offset: 0xAA2494 VA: 0xAA6494
	private static void .cctor() { }

	// RVA: 0xAA64F0 Offset: 0xAA24F0 VA: 0xAA64F0
	public void .ctor() { }

	// RVA: 0xAA64F8 Offset: 0xAA24F8 VA: 0xAA64F8
	internal void XN(Scene , LoadSceneMode ) { }
}


// Namespace: Adverty.a.C
internal class aCh // TypeDefIndex: 6238
{
	// Fields
	private static int Gc; // 0x0
	private static HashSet<string> GD; // 0x8
	private string Gd; // 0x10
	private string GE; // 0x18

	// Methods

	// RVA: 0xAA604C Offset: 0xAA204C VA: 0xAA604C
	private static void .cctor() { }

	// RVA: 0xAA60D8 Offset: 0xAA20D8 VA: 0xAA60D8
	public void .ctor() { }

	// RVA: 0xAA61E0 Offset: 0xAA21E0 VA: 0xAA61E0
	public string Ty(string ) { }

	// RVA: 0xAA6414 Offset: 0xAA2414 VA: 0xAA6414
	public void TZ() { }
}


// Namespace: Adverty.a.C
internal struct aCi // TypeDefIndex: 6239
{
	// Fields
	internal int Ge; // 0x0
	internal string GF; // 0x8
	internal string Gf; // 0x10

	// Methods

	// RVA: 0xAA6550 Offset: 0xAA2550 VA: 0xAA6550
	internal void .ctor(int , string , string ) { }
}


// Namespace: Adverty.a.C
internal class aCj : IFactory<aCk, RenderType, aCi> // TypeDefIndex: 6240
{
	// Methods

	// RVA: 0xAA655C Offset: 0xAA255C VA: 0xAA655C Slot: 4
	public aCk Create(RenderType renderType, aCi adSessionDataDescription) { }

	// RVA: 0xAA6910 Offset: 0xAA2910 VA: 0xAA6910
	public void .ctor() { }
}


// Namespace: Adverty.a.C
internal abstract class aCk // TypeDefIndex: 6241
{
	// Fields
	[CompilerGenerated]
	private int GG; // 0x10
	[CompilerGenerated]
	private string Gg; // 0x18
	[CompilerGenerated]
	private string GH; // 0x20
	[CompilerGenerated]
	private float Gh; // 0x28
	[CompilerGenerated]
	private int GI; // 0x2C
	[CompilerGenerated]
	private bool Gi; // 0x30
	[CompilerGenerated]
	private int GJ; // 0x34
	[CompilerGenerated]
	private bool Gj; // 0x38
	[CompilerGenerated]
	private bool GK; // 0x39
	[CompilerGenerated]
	private float Gk; // 0x3C
	[CompilerGenerated]
	private float GL; // 0x40
	[CompilerGenerated]
	private float Gl; // 0x44
	[CompilerGenerated]
	private bool GM; // 0x48
	[CompilerGenerated]
	private float Gm; // 0x4C
	[CompilerGenerated]
	private int GN; // 0x50
	[CompilerGenerated]
	private int Gn; // 0x54
	[CompilerGenerated]
	private aCl GO; // 0x58

	// Methods

	[CompilerGenerated]
	// RVA: 0xAA6918 Offset: 0xAA2918 VA: 0xAA6918
	public int Tz() { }

	[CompilerGenerated]
	// RVA: 0xAA6920 Offset: 0xAA2920 VA: 0xAA6920
	public void tA(int ) { }

	[CompilerGenerated]
	// RVA: 0xAA6928 Offset: 0xAA2928 VA: 0xAA6928
	public string ta() { }

	[CompilerGenerated]
	// RVA: 0xAA6930 Offset: 0xAA2930 VA: 0xAA6930
	public void tB(string ) { }

	[CompilerGenerated]
	// RVA: 0xAA6938 Offset: 0xAA2938 VA: 0xAA6938
	public string tb() { }

	[CompilerGenerated]
	// RVA: 0xAA6940 Offset: 0xAA2940 VA: 0xAA6940
	public void tC(string ) { }

	[CompilerGenerated]
	// RVA: 0xAA6948 Offset: 0xAA2948 VA: 0xAA6948
	public float tc() { }

	[CompilerGenerated]
	// RVA: 0xAA6950 Offset: 0xAA2950 VA: 0xAA6950
	public void tD(float value) { }

	[CompilerGenerated]
	// RVA: 0xAA6958 Offset: 0xAA2958 VA: 0xAA6958
	protected int td() { }

	[CompilerGenerated]
	// RVA: 0xAA6960 Offset: 0xAA2960 VA: 0xAA6960
	protected void tE(int ) { }

	[CompilerGenerated]
	// RVA: 0xAA6968 Offset: 0xAA2968 VA: 0xAA6968
	protected bool te() { }

	[CompilerGenerated]
	// RVA: 0xAA6970 Offset: 0xAA2970 VA: 0xAA6970
	protected void tF(bool ) { }

	[CompilerGenerated]
	// RVA: 0xAA697C Offset: 0xAA297C VA: 0xAA697C
	public int tf() { }

	[CompilerGenerated]
	// RVA: 0xAA6984 Offset: 0xAA2984 VA: 0xAA6984
	public void tG(int ) { }

	[CompilerGenerated]
	// RVA: 0xAA698C Offset: 0xAA298C VA: 0xAA698C
	public bool tg() { }

	[CompilerGenerated]
	// RVA: 0xAA6994 Offset: 0xAA2994 VA: 0xAA6994
	public void tH(bool ) { }

	[CompilerGenerated]
	// RVA: 0xAA69A0 Offset: 0xAA29A0 VA: 0xAA69A0
	public bool th() { }

	[CompilerGenerated]
	// RVA: 0xAA69A8 Offset: 0xAA29A8 VA: 0xAA69A8
	public void tI(bool ) { }

	[CompilerGenerated]
	// RVA: 0xAA69B4 Offset: 0xAA29B4 VA: 0xAA69B4
	public float ti() { }

	[CompilerGenerated]
	// RVA: 0xAA69BC Offset: 0xAA29BC VA: 0xAA69BC
	public void tJ(float ) { }

	[CompilerGenerated]
	// RVA: 0xAA69C4 Offset: 0xAA29C4 VA: 0xAA69C4
	public float tj() { }

	[CompilerGenerated]
	// RVA: 0xAA69CC Offset: 0xAA29CC VA: 0xAA69CC
	public void tK(float ) { }

	[CompilerGenerated]
	// RVA: 0xAA69D4 Offset: 0xAA29D4 VA: 0xAA69D4
	public float tk() { }

	[CompilerGenerated]
	// RVA: 0xAA69DC Offset: 0xAA29DC VA: 0xAA69DC
	public void tL(float ) { }

	[CompilerGenerated]
	// RVA: 0xAA69E4 Offset: 0xAA29E4 VA: 0xAA69E4
	public bool tl() { }

	[CompilerGenerated]
	// RVA: 0xAA69EC Offset: 0xAA29EC VA: 0xAA69EC
	public void tM(bool ) { }

	[CompilerGenerated]
	// RVA: 0xAA69F8 Offset: 0xAA29F8 VA: 0xAA69F8
	public float tm() { }

	[CompilerGenerated]
	// RVA: 0xAA6A00 Offset: 0xAA2A00 VA: 0xAA6A00
	private void tN(float ) { }

	[CompilerGenerated]
	// RVA: 0xAA6A08 Offset: 0xAA2A08 VA: 0xAA6A08
	protected int tn() { }

	[CompilerGenerated]
	// RVA: 0xAA6A10 Offset: 0xAA2A10 VA: 0xAA6A10
	protected void tO(int ) { }

	[CompilerGenerated]
	// RVA: 0xAA6A18 Offset: 0xAA2A18 VA: 0xAA6A18
	protected int to() { }

	[CompilerGenerated]
	// RVA: 0xAA6A20 Offset: 0xAA2A20 VA: 0xAA6A20
	protected void tP(int ) { }

	[CompilerGenerated]
	// RVA: 0xAA6A28 Offset: 0xAA2A28 VA: 0xAA6A28
	public aCl tp() { }

	[CompilerGenerated]
	// RVA: 0xAA6A30 Offset: 0xAA2A30 VA: 0xAA6A30
	protected void tQ(aCl ) { }

	// RVA: 0xAA6A38 Offset: 0xAA2A38 VA: 0xAA6A38 Slot: 4
	public virtual float nb() { }

	// RVA: 0xAA6A40 Offset: 0xAA2A40 VA: 0xAA6A40 Slot: 5
	public virtual float nC() { }

	// RVA: 0xAA6A48 Offset: 0xAA2A48 VA: 0xAA6A48 Slot: 6
	public virtual float nc() { }

	// RVA: 0xAA6A50 Offset: 0xAA2A50 VA: 0xAA6A50 Slot: 7
	public virtual float nD() { }

	// RVA: 0xAA6A58 Offset: 0xAA2A58 VA: 0xAA6A58
	public int tq() { }

	// RVA: 0xAA6AA4 Offset: 0xAA2AA4 VA: 0xAA6AA4
	public int tR() { }

	// RVA: 0xAA6AF0 Offset: 0xAA2AF0 VA: 0xAA6AF0
	public float tr() { }

	// RVA: 0xAA6B38 Offset: 0xAA2B38 VA: 0xAA6B38
	public float tS() { }

	// RVA: 0xAA6B7C Offset: 0xAA2B7C VA: 0xAA6B7C
	public float ts() { }

	// RVA: 0xAA6BC8 Offset: 0xAA2BC8 VA: 0xAA6BC8
	public int tT() { }

	// RVA: 0xAA6C04 Offset: 0xAA2C04 VA: 0xAA6C04
	public bool tt() { }

	// RVA: 0xAA6C6C Offset: 0xAA2C6C VA: 0xAA6C6C
	public float tU() { }

	// RVA: 0xAA6C8C Offset: 0xAA2C8C VA: 0xAA6C8C
	public float tu() { }

	// RVA: 0xAA6CCC Offset: 0xAA2CCC VA: 0xAA6CCC
	protected void .ctor(aCi ) { }

	// RVA: 0xAA6D14 Offset: 0xAA2D14 VA: 0xAA6D14
	public void UpdateTimeInWebView(float lifetime) { }

	// RVA: 0xAA6D24 Offset: 0xAA2D24 VA: 0xAA6D24
	public void tV() { }

	// RVA: -1 Offset: -1 Slot: 8
	protected abstract void nd();

	// RVA: 0xAA6D94 Offset: 0xAA2D94 VA: 0xAA6D94
	private void tv() { }
}


// Namespace: Adverty.a.D
internal class aDs : aCk // TypeDefIndex: 6242
{
	// Methods

	// RVA: 0xAA6DD4 Offset: 0xAA2DD4 VA: 0xAA6DD4 Slot: 4
	public override float nb() { }

	// RVA: 0xAA6EFC Offset: 0xAA2EFC VA: 0xAA6EFC Slot: 5
	public override float nC() { }

	// RVA: 0xAA6F3C Offset: 0xAA2F3C VA: 0xAA6F3C Slot: 6
	public override float nc() { }

	// RVA: 0xAA6F7C Offset: 0xAA2F7C VA: 0xAA6F7C Slot: 7
	public override float nD() { }

	// RVA: 0xAA6690 Offset: 0xAA2690 VA: 0xAA6690
	public void .ctor(aCi ) { }

	// RVA: 0xAA7198 Offset: 0xAA3198 VA: 0xAA7198 Slot: 8
	protected override void nd() { }
}


// Namespace: Adverty.a.D
internal class aDt : aCl // TypeDefIndex: 6243
{
	// Methods

	// RVA: 0xAA71FC Offset: 0xAA31FC VA: 0xAA71FC Slot: 5
	public override bool nE() { }

	// RVA: 0xAA733C Offset: 0xAA333C VA: 0xAA733C
	public void .ctor() { }
}


// Namespace: Adverty.a.D
internal sealed class aDu : aCk // TypeDefIndex: 6244
{
	// Methods

	// RVA: 0xAA739C Offset: 0xAA339C VA: 0xAA739C Slot: 4
	public override float nb() { }

	// RVA: 0xAA74C4 Offset: 0xAA34C4 VA: 0xAA74C4 Slot: 7
	public override float nD() { }

	// RVA: 0xAA6834 Offset: 0xAA2834 VA: 0xAA6834
	public void .ctor(aCi ) { }

	// RVA: 0xAA75E8 Offset: 0xAA35E8 VA: 0xAA75E8 Slot: 8
	protected override void nd() { }
}


// Namespace: Adverty.a.D
internal sealed class aDv : aCl // TypeDefIndex: 6245
{
	// Methods

	// RVA: 0xAA764C Offset: 0xAA364C VA: 0xAA764C Slot: 5
	public override bool nE() { }

	// RVA: 0xAA765C Offset: 0xAA365C VA: 0xAA765C
	public void .ctor() { }
}


// Namespace: Adverty.a.D
internal class aDw : aCk // TypeDefIndex: 6246
{
	// Methods

	// RVA: 0xAA76B4 Offset: 0xAA36B4 VA: 0xAA76B4 Slot: 4
	public override float nb() { }

	// RVA: 0xAA77DC Offset: 0xAA37DC VA: 0xAA77DC Slot: 7
	public override float nD() { }

	// RVA: 0xAA6788 Offset: 0xAA2788 VA: 0xAA6788
	public void .ctor(aCi ) { }

	// RVA: 0xAA7900 Offset: 0xAA3900 VA: 0xAA7900 Slot: 8
	protected override void nd() { }
}


// Namespace: Adverty.a.C
internal class aCl // TypeDefIndex: 6247
{
	// Fields
	public static readonly double Go; // 0x0
	[CompilerGenerated]
	private int GP; // 0x10
	[CompilerGenerated]
	private int Gp; // 0x14
	[CompilerGenerated]
	private float GQ; // 0x18
	[CompilerGenerated]
	private float Gq; // 0x1C
	[CompilerGenerated]
	private float GR; // 0x20
	[CompilerGenerated]
	private float Gr; // 0x24
	[CompilerGenerated]
	private int GS; // 0x28
	[CompilerGenerated]
	private float Gs; // 0x2C
	[CompilerGenerated]
	private bool GT; // 0x30
	[CompilerGenerated]
	private bool Gt; // 0x31

	// Methods

	// RVA: 0xAA7964 Offset: 0xAA3964 VA: 0xAA7964
	private static void .cctor() { }

	// RVA: 0xAA7A7C Offset: 0xAA3A7C VA: 0xAA7A7C Slot: 4
	public virtual void tW() { }

	[CompilerGenerated]
	// RVA: 0xAA6A9C Offset: 0xAA2A9C VA: 0xAA6A9C
	public int tw() { }

	[CompilerGenerated]
	// RVA: 0xAA7A8C Offset: 0xAA3A8C VA: 0xAA7A8C
	public void tX(int ) { }

	[CompilerGenerated]
	// RVA: 0xAA6AE8 Offset: 0xAA2AE8 VA: 0xAA6AE8
	public int tx() { }

	[CompilerGenerated]
	// RVA: 0xAA7AA0 Offset: 0xAA3AA0 VA: 0xAA7AA0
	public void tY(int ) { }

	[CompilerGenerated]
	// RVA: 0xAA6B30 Offset: 0xAA2B30 VA: 0xAA6B30
	public float ty() { }

	[CompilerGenerated]
	// RVA: 0xAA7AA8 Offset: 0xAA3AA8 VA: 0xAA7AA8
	public void tZ(float ) { }

	[CompilerGenerated]
	// RVA: 0xAA6BC0 Offset: 0xAA2BC0 VA: 0xAA6BC0
	public float tz() { }

	[CompilerGenerated]
	// RVA: 0xAA7AB0 Offset: 0xAA3AB0 VA: 0xAA7AB0
	public void UA(float ) { }

	[CompilerGenerated]
	// RVA: 0xAA6F34 Offset: 0xAA2F34 VA: 0xAA6F34
	public float Ua() { }

	[CompilerGenerated]
	// RVA: 0xAA7AD4 Offset: 0xAA3AD4 VA: 0xAA7AD4
	public void UB(float ) { }

	[CompilerGenerated]
	// RVA: 0xAA6F74 Offset: 0xAA2F74 VA: 0xAA6F74
	public float Ub() { }

	[CompilerGenerated]
	// RVA: 0xAA7ADC Offset: 0xAA3ADC VA: 0xAA7ADC
	public void UC(float ) { }

	[CompilerGenerated]
	// RVA: 0xAA6BFC Offset: 0xAA2BFC VA: 0xAA6BFC
	public int Uc() { }

	[CompilerGenerated]
	// RVA: 0xAA7AB8 Offset: 0xAA3AB8 VA: 0xAA7AB8
	public void UD(int ) { }

	[CompilerGenerated]
	// RVA: 0xAA6CC4 Offset: 0xAA2CC4 VA: 0xAA6CC4
	public float Ud() { }

	[CompilerGenerated]
	// RVA: 0xAA7AC0 Offset: 0xAA3AC0 VA: 0xAA7AC0
	public void UE(float ) { }

	[CompilerGenerated]
	// RVA: 0xAA6C64 Offset: 0xAA2C64 VA: 0xAA6C64
	public bool Ue() { }

	[CompilerGenerated]
	// RVA: 0xAA7AC8 Offset: 0xAA3AC8 VA: 0xAA7AC8
	public void UF(bool ) { }

	// RVA: 0xAA7AE4 Offset: 0xAA3AE4 VA: 0xAA7AE4 Slot: 5
	public virtual bool nE() { }

	// RVA: 0xAA6BF4 Offset: 0xAA2BF4 VA: 0xAA6BF4
	public bool Uf() { }

	// RVA: 0xAA6DCC Offset: 0xAA2DCC VA: 0xAA6DCC
	public bool UG() { }

	// RVA: 0xAA732C Offset: 0xAA332C VA: 0xAA732C
	public bool Ug() { }

	// RVA: 0xAA7B0C Offset: 0xAA3B0C VA: 0xAA7B0C Slot: 6
	public virtual bool UH() { }

	// RVA: 0xAA7B1C Offset: 0xAA3B1C VA: 0xAA7B1C Slot: 7
	public virtual bool Uh() { }

	[CompilerGenerated]
	// RVA: 0xAA7B04 Offset: 0xAA3B04 VA: 0xAA7B04
	public bool UI() { }

	[CompilerGenerated]
	// RVA: 0xAA7A94 Offset: 0xAA3A94 VA: 0xAA7A94
	public void Ui(bool ) { }

	// RVA: 0xAA7394 Offset: 0xAA3394 VA: 0xAA7394
	public void .ctor() { }
}


// Namespace: Adverty.a.C
internal class aCm : IFactory<aCl, RenderType> // TypeDefIndex: 6248
{
	// Methods

	// RVA: 0xAA70A8 Offset: 0xAA30A8 VA: 0xAA70A8 Slot: 4
	public aCl Create(RenderType renderType) { }

	// RVA: 0xAA70A0 Offset: 0xAA30A0 VA: 0xAA70A0
	public void .ctor() { }
}


// Namespace: Adverty.a.E
internal class aEc : aDx, abn // TypeDefIndex: 6249
{
	// Fields
	[CompilerGenerated]
	private static Action<int> lP; // 0x0
	[CompilerGenerated]
	private static Action<int> lp; // 0x8
	[CompilerGenerated]
	private static Action<int> lQ; // 0x10
	private aDm lq; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0xAA7BB0 Offset: 0xAA3BB0 VA: 0xAA7BB0
	public static void ZT(Action<int> ) { }

	[CompilerGenerated]
	// RVA: 0xAA7C7C Offset: 0xAA3C7C VA: 0xAA7C7C
	public static void Zt(Action<int> ) { }

	[CompilerGenerated]
	// RVA: 0xAA7D48 Offset: 0xAA3D48 VA: 0xAA7D48
	public static void ZU(Action<int> ) { }

	[CompilerGenerated]
	// RVA: 0xAA7E18 Offset: 0xAA3E18 VA: 0xAA7E18
	public static void Zu(Action<int> ) { }

	[CompilerGenerated]
	// RVA: 0xAA7EE8 Offset: 0xAA3EE8 VA: 0xAA7EE8
	public static void ZV(Action<int> ) { }

	[CompilerGenerated]
	// RVA: 0xAA7FB8 Offset: 0xAA3FB8 VA: 0xAA7FB8
	public static void Zv(Action<int> ) { }

	// RVA: 0xAA8088 Offset: 0xAA4088 VA: 0xAA8088 Slot: 4
	public void Od(aDm ) { }

	// RVA: 0xAA8090 Offset: 0xAA4090 VA: 0xAA8090 Slot: 8
	public void NU(aCk , abi ) { }

	// RVA: 0xAA80AC Offset: 0xAA40AC VA: 0xAA80AC Slot: 9
	public virtual void OE(aCk ) { }

	// RVA: 0xAA80F8 Offset: 0xAA40F8 VA: 0xAA80F8 Slot: 10
	protected virtual void ZW(aCk ) { }

	// RVA: 0xAA8238 Offset: 0xAA4238 VA: 0xAA8238 Slot: 11
	public virtual void Oe(bool , aCk ) { }

	// RVA: 0xAA8254 Offset: 0xAA4254 VA: 0xAA8254 Slot: 7
	public void OF(aCk ) { }

	// RVA: 0xAA82C4 Offset: 0xAA42C4 VA: 0xAA82C4
	public void .ctor() { }
}


// Namespace: Adverty.a.C
internal class aCn // TypeDefIndex: 6250
{
	// Fields
	[CompilerGenerated]
	private aCg.AdType GU; // 0x10
	[CompilerGenerated]
	private string Gu; // 0x18
	[CompilerGenerated]
	private string GV; // 0x20
	[CompilerGenerated]
	private int Gv; // 0x28
	[CompilerGenerated]
	private int GW; // 0x2C

	// Methods

	[CompilerGenerated]
	// RVA: 0xAA6044 Offset: 0xAA2044 VA: 0xAA6044
	public aCg.AdType UJ() { }

	[CompilerGenerated]
	// RVA: 0xAA82CC Offset: 0xAA42CC VA: 0xAA82CC
	private void Uj(aCg.AdType ) { }

	[CompilerGenerated]
	// RVA: 0xAA82D4 Offset: 0xAA42D4 VA: 0xAA82D4
	public string UK() { }

	[CompilerGenerated]
	// RVA: 0xAA82DC Offset: 0xAA42DC VA: 0xAA82DC
	private void Uk(string ) { }

	[CompilerGenerated]
	// RVA: 0xAA82E4 Offset: 0xAA42E4 VA: 0xAA82E4
	public string UL() { }

	[CompilerGenerated]
	// RVA: 0xAA82EC Offset: 0xAA42EC VA: 0xAA82EC
	private void Ul(string ) { }

	[CompilerGenerated]
	// RVA: 0xAA82F4 Offset: 0xAA42F4 VA: 0xAA82F4
	public int UM() { }

	[CompilerGenerated]
	// RVA: 0xAA82FC Offset: 0xAA42FC VA: 0xAA82FC
	private void Um(int ) { }

	[CompilerGenerated]
	// RVA: 0xAA8304 Offset: 0xAA4304 VA: 0xAA8304
	public int UN() { }

	[CompilerGenerated]
	// RVA: 0xAA830C Offset: 0xAA430C VA: 0xAA830C
	private void Un(int ) { }

	// RVA: 0xAA8314 Offset: 0xAA4314 VA: 0xAA8314
	public bool UO() { }

	// RVA: 0xAA8334 Offset: 0xAA4334 VA: 0xAA8334
	public void .ctor(aCg.AdType , string , string , int , int ) { }
}


// Namespace: 
public enum BendSettings.BendAxis // TypeDefIndex: 6251
{
	// Fields
	public int value__; // 0x0
	public const BendSettings.BendAxis X = 0;
	public const BendSettings.BendAxis Y = 1;
}


// Namespace: 
public enum BendSettings.ConcaveConvex // TypeDefIndex: 6252
{
	// Fields
	public int value__; // 0x0
	public const BendSettings.ConcaveConvex Concave = 0;
	public const BendSettings.ConcaveConvex Convex = 1;
}


// Namespace: Adverty.AdUnit
[Serializable]
public class BendSettings // TypeDefIndex: 6253
{
	// Fields
	[SerializeField]
	public bool BuildState; // 0x10
	[SerializeField]
	public float Radius; // 0x14
	[SerializeField]
	public BendSettings.ConcaveConvex ConcaveOrConvex; // 0x18
	[SerializeField]
	public BendSettings.BendAxis Axis; // 0x1C
	[SerializeField]
	public bool Bend; // 0x20

	// Methods

	// RVA: 0xAA8384 Offset: 0xAA4384 VA: 0xAA8384
	public void .ctor() { }
}


// Namespace: Adverty.AdUnit
[Serializable]
public sealed class InMenuUnitConfiguration : UnitConfiguration // TypeDefIndex: 6254
{
	// Methods

	// RVA: 0xAA838C Offset: 0xAA438C VA: 0xAA838C Slot: 4
	internal override UnitType ne() { }

	// RVA: 0xAA8394 Offset: 0xAA4394 VA: 0xAA8394
	public void .ctor() { }

	// RVA: 0xAA83DC Offset: 0xAA43DC VA: 0xAA83DC
	public void .ctor(RenderType renderType) { }
}


// Namespace: Adverty.AdUnit
[Serializable]
public class InPlayUnitConfiguration : UnitConfiguration // TypeDefIndex: 6255
{
	// Methods

	// RVA: 0xAA8404 Offset: 0xAA4404 VA: 0xAA8404 Slot: 4
	internal override UnitType ne() { }

	// RVA: 0xAA840C Offset: 0xAA440C VA: 0xAA840C
	public void .ctor() { }

	// RVA: 0xAA8428 Offset: 0xAA4428 VA: 0xAA8428
	public void .ctor(RenderType renderType) { }
}


// Namespace: 
[Obsolete("Deprecated")]
public enum SceneContext.UnitSize // TypeDefIndex: 6256
{
	// Fields
	public int value__; // 0x0
	public const SceneContext.UnitSize S = 1;
	public const SceneContext.UnitSize M = 2;
	public const SceneContext.UnitSize L = 3;
	public const SceneContext.UnitSize Other = 4;
}


// Namespace: 
[Obsolete("Deprecated")]
public enum SceneContext.TimePeriod // TypeDefIndex: 6257
{
	// Fields
	public int value__; // 0x0
	[Description(null)]
	public const SceneContext.TimePeriod Unspecified = 0;
	[Description("Past")]
	public const SceneContext.TimePeriod Past = 1;
	[Description("Present")]
	public const SceneContext.TimePeriod Present = 2;
	[Description("Future")]
	public const SceneContext.TimePeriod Future = 3;
	[Description("Other")]
	public const SceneContext.TimePeriod Other = 4;
}


// Namespace: 
[Obsolete("Deprecated")]
public enum SceneContext.AdSetting // TypeDefIndex: 6258
{
	// Fields
	public int value__; // 0x0
	[Description(null)]
	public const SceneContext.AdSetting Unspecified = 0;
	[Description("Indoor")]
	public const SceneContext.AdSetting Indoor = 1;
	[Description("Outdoor")]
	public const SceneContext.AdSetting Outdoor = 2;
	[Description("Other")]
	public const SceneContext.AdSetting Other = 3;
}


// Namespace: 
[Obsolete("Deprecated")]
public enum SceneContext.SceneLighting // TypeDefIndex: 6259
{
	// Fields
	public int value__; // 0x0
	[Description(null)]
	public const SceneContext.SceneLighting Unspecified = 0;
	[Description("Light")]
	public const SceneContext.SceneLighting Light = 1;
	[Description("Dark")]
	public const SceneContext.SceneLighting Dark = 2;
	[Description("Other")]
	public const SceneContext.SceneLighting Other = 3;
}


// Namespace: 
[Obsolete("Deprecated")]
public enum SceneContext.SceneTime // TypeDefIndex: 6260
{
	// Fields
	public int value__; // 0x0
	[Description(null)]
	public const SceneContext.SceneTime Unspecified = 0;
	[Description("Day")]
	public const SceneContext.SceneTime Day = 1;
	[Description("Night")]
	public const SceneContext.SceneTime Night = 2;
	[Description("Other")]
	public const SceneContext.SceneTime Other = 3;
}


// Namespace: 
[Obsolete("Deprecated")]
[Flags]
public enum SceneContext.Location // TypeDefIndex: 6261
{
	// Fields
	public int value__; // 0x0
	public const SceneContext.Location None = 0;
	public const SceneContext.Location Forest = 1;
	public const SceneContext.Location Dessert = 2;
	public const SceneContext.Location City = 4;
	public const SceneContext.Location Suburb = 8;
	public const SceneContext.Location Industrial = 16;
	public const SceneContext.Location Space = 32;
	public const SceneContext.Location Ocean = 64;
	public const SceneContext.Location Arena = 128;
	public const SceneContext.Location Other = 256;
}


// Namespace: Adverty.AdUnit
[Obsolete("Deprecated")]
[Serializable]
public struct SceneContext // TypeDefIndex: 6262
{
	// Fields
	[SerializeField]
	internal string Graphics; // 0x0
	[SerializeField]
	public SceneContext.SceneLighting Lighting; // 0x8
	[SerializeField]
	public SceneContext.Location Locations; // 0xC
	[SerializeField]
	public SceneContext.AdSetting Setting; // 0x10
	[SerializeField]
	public SceneContext.UnitSize Size; // 0x14
	[SerializeField]
	public SceneContext.SceneTime Time; // 0x18
	[SerializeField]
	public SceneContext.TimePeriod Period; // 0x1C

	// Methods

	// RVA: 0xAA8450 Offset: 0xAA4450 VA: 0xAA8450
	public void AddLocation(SceneContext.Location location) { }

	// RVA: 0xAA8460 Offset: 0xAA4460 VA: 0xAA8460
	public void RemoveLocation(SceneContext.Location location) { }

	// RVA: 0xAA8470 Offset: 0xAA4470 VA: 0xAA8470
	public string[] LocationToStringArray() { }
}


// Namespace: Adverty.AdUnit
public enum ShaderType // TypeDefIndex: 6263
{
	// Fields
	public int value__; // 0x0
	public const ShaderType Unlit = 0;
	public const ShaderType Lit = 1;
}


// Namespace: Adverty.AdUnit
[Serializable]
public struct UnitBehavior // TypeDefIndex: 6264
{
	// Fields
	[SerializeField]
	public bool AllowInteraction; // 0x0
	[SerializeField]
	public bool AllowAnimation; // 0x1
	[SerializeField]
	public bool LazyLoadDisabled; // 0x2
}


// Namespace: Adverty.AdUnit
[Serializable]
public abstract class UnitConfiguration // TypeDefIndex: 6265
{
	// Fields
	[SerializeField]
	public ViewData ViewData; // 0x10
	[SerializeField]
	[Obsolete("Deprecated")]
	public SceneContext SceneContext; // 0x28
	[SerializeField]
	public UnitBehavior Behavior; // 0x48
	[SerializeField]
	private ShaderType shaderType; // 0x4C
	[SerializeField]
	private RenderType renderType; // 0x50

	// Properties
	public WidthHeight MatchWidthOrHeight { get; }
	public ShaderType ShaderType { get; set; }
	public UnitRatio Ratio { get; }
	public RenderType RenderType { get; }

	// Methods

	// RVA: 0xAA855C Offset: 0xAA455C VA: 0xAA855C
	public WidthHeight get_MatchWidthOrHeight() { }

	// RVA: 0xAA8564 Offset: 0xAA4564 VA: 0xAA8564
	public ShaderType get_ShaderType() { }

	// RVA: 0xAA8588 Offset: 0xAA4588 VA: 0xAA8588
	public void set_ShaderType(ShaderType value) { }

	// RVA: 0xAA8590 Offset: 0xAA4590 VA: 0xAA8590
	public UnitRatio get_Ratio() { }

	// RVA: 0xAA8580 Offset: 0xAA4580 VA: 0xAA8580
	public RenderType get_RenderType() { }

	// RVA: 0xAA8598 Offset: 0xAA4598 VA: 0xAA8598
	internal bool Uo() { }

	// RVA: -1 Offset: -1 Slot: 4
	internal abstract UnitType ne();

	// RVA: 0xAA85BC Offset: 0xAA45BC VA: 0xAA85BC
	internal bool UP(aCv ) { }

	// RVA: 0xAA83B4 Offset: 0xAA43B4 VA: 0xAA83B4
	protected void .ctor(RenderType renderType) { }
}


// Namespace: Adverty.AdUnit
public enum UnitRatio // TypeDefIndex: 6266
{
	// Fields
	public int value__; // 0x0
	public const UnitRatio Box = 0;
	public const UnitRatio Portrait = 1;
	public const UnitRatio Landscape = 2;
	public const UnitRatio WideLandscape = 3;
}


// Namespace: Adverty.AdUnit
[Serializable]
public struct ViewData // TypeDefIndex: 6267
{
	// Fields
	[SerializeField]
	public float Size; // 0x0
	[SerializeField]
	public WidthHeight MatchWidthOrHeight; // 0x4
	[SerializeField]
	public UnitRatio Ratio; // 0x8
	[SerializeField]
	public bool DoubleSided; // 0xC
	[SerializeField]
	private BendSettings bendSettings; // 0x10

	// Methods

	// RVA: 0xAA8644 Offset: 0xAA4644 VA: 0xAA8644
	internal BendSettings Up() { }
}


// Namespace: Adverty.AdUnit
public enum WidthHeight // TypeDefIndex: 6268
{
	// Fields
	public int value__; // 0x0
	public const WidthHeight Width = 0;
	public const WidthHeight Height = 1;
}


// Namespace: Adverty.AdUnit
public static class UnitFactory // TypeDefIndex: 6269
{
	// Fields
	private const string Gw = "Impossible to set texture to {0} render type";
	private const string GX = "Impossible to set mesh to {0} render type";
	private const string Gx = "Default texture did not pass validation";
	private const string GY = "AdUnit-{0}";
	private static int Gy; // 0x0
	private const float GZ = 100;
	private const uint Gz = 0;
	private static Vector2 gA; // 0x4

	// Methods

	// RVA: 0xAA86A8 Offset: 0xAA46A8 VA: 0xAA86A8
	private static void .cctor() { }

	// RVA: 0xAA86F4 Offset: 0xAA46F4 VA: 0xAA86F4
	public static GameObject Create(UnitConfiguration config) { }

	// RVA: 0xAA8A48 Offset: 0xAA4A48 VA: 0xAA8A48
	public static GameObject Create(UnitConfiguration config, string gameObjectName) { }

	// RVA: 0xAA8B10 Offset: 0xAA4B10 VA: 0xAA8B10
	public static GameObject Create(UnitConfiguration config, Mesh mesh) { }

	// RVA: 0xAA8BF8 Offset: 0xAA4BF8 VA: 0xAA8BF8
	public static GameObject Create(UnitConfiguration config, Mesh mesh, string gameObjectName) { }

	// RVA: 0xAA8F64 Offset: 0xAA4F64 VA: 0xAA8F64
	public static GameObject Create(UnitConfiguration config, Texture2D defaultTexture) { }

	// RVA: 0xAA904C Offset: 0xAA504C VA: 0xAA904C
	public static GameObject Create(UnitConfiguration config, Texture2D defaultTexture, string gameObjectName) { }

	// RVA: 0xAA956C Offset: 0xAA556C VA: 0xAA956C
	public static GameObject Create(UnitConfiguration config, Sprite defaultSprite) { }

	// RVA: 0xAA9654 Offset: 0xAA5654 VA: 0xAA9654
	public static GameObject Create(UnitConfiguration config, Sprite defaultSprite, string gameObjectName) { }
}


// Namespace: Adverty.a.D
internal interface aDx : abn // TypeDefIndex: 6270
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Od(aDm );

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void OE(aCk );

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void Oe(bool , aCk );

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void OF(aCk );
}


// Namespace: Adverty.a.C
internal class aCo // TypeDefIndex: 6271
{
	// Fields
	internal const string ga = "Shaders/AdShader";
	internal const string gB = "Shaders/AdUnlitShader";
	private const float gb = 1.5;
	private const float gC = 0.1;
	private const float gc = 0.5;
	private const float gD = 1.2;
	private const string gd = "_WatermarkTex";
	private const string gE = "_WatermarkUvSize";
	private const string ge = "_WatermarkIsVisible";
	protected const string gF = "_TransitionProgress";
	protected const string gf = "_FadeTexture";
	protected const string gG = "_FadeTexUVFactor";
	protected const string gg = "_MainTexUVFactor";
	private const string gH = "ADVERTY_URP_COMPAT";
	private static float gh; // 0x0
	private bool gI; // 0x10
	protected float gi; // 0x14
	protected Action gJ; // 0x18
	protected UnitRenderer gj; // 0x20
	protected Texture gK; // 0x28
	protected Material gk; // 0x30

	// Methods

	// RVA: 0xAA99B8 Offset: 0xAA59B8 VA: 0xAA99B8
	protected static bool UQ() { }

	// RVA: 0xAA9AB0 Offset: 0xAA5AB0 VA: 0xAA9AB0
	private void Uq(bool ) { }

	// RVA: 0xAA9AD8 Offset: 0xAA5AD8 VA: 0xAA9AD8
	private bool UR() { }

	// RVA: 0xAA9AEC Offset: 0xAA5AEC VA: 0xAA9AEC
	public void .ctor() { }

	// RVA: 0xAA9B10 Offset: 0xAA5B10 VA: 0xAA9B10
	public void .ctor(BaseUnit ) { }

	// RVA: 0xAA9D4C Offset: 0xAA5D4C VA: 0xAA9D4C
	protected void Ur() { }

	// RVA: 0xAA9DE4 Offset: 0xAA5DE4 VA: 0xAA9DE4
	public void US() { }

	// RVA: 0xAA9E58 Offset: 0xAA5E58 VA: 0xAA9E58
	public void Us(Vector2 , WidthHeight ) { }

	// RVA: 0xAAA30C Offset: 0xAA630C VA: 0xAAA30C
	public void UT(Vector2 , WidthHeight ) { }

	// RVA: 0xAAA074 Offset: 0xAA6074 VA: 0xAAA074
	private Vector2 Ut(Texture , Vector2 , WidthHeight ) { }

	// RVA: 0xAAA41C Offset: 0xAA641C VA: 0xAAA41C Slot: 4
	internal virtual void TextureTransitionUpdate() { }

	// RVA: 0xAAA544 Offset: 0xAA6544 VA: 0xAAA544
	private void UU(bool ) { }

	// RVA: 0xAAA6A4 Offset: 0xAA66A4 VA: 0xAAA6A4
	private void Uu() { }

	// RVA: 0xAAA73C Offset: 0xAA673C VA: 0xAAA73C
	public void UV(Texture , Action , bool  = True) { }

	// RVA: 0xAAA848 Offset: 0xAA6848 VA: 0xAAA848 Slot: 5
	public virtual void nF() { }

	// RVA: 0xAAA870 Offset: 0xAA6870 VA: 0xAAA870 Slot: 6
	protected virtual void nf(Texture ) { }

	// RVA: 0xAAA88C Offset: 0xAA688C VA: 0xAAA88C
	internal void Uv(bool ) { }

	// RVA: 0xAA9C7C Offset: 0xAA5C7C VA: 0xAA9C7C
	private void UW() { }
}


// Namespace: Adverty.a.C
internal class aCp : IFactory<aCo, BaseUnit> // TypeDefIndex: 6272
{
	// Methods

	// RVA: 0xAAA984 Offset: 0xAA6984 VA: 0xAAA984 Slot: 4
	public aCo Create(BaseUnit unit) { }

	// RVA: 0xAAAEDC Offset: 0xAA6EDC VA: 0xAAAEDC
	public void .ctor() { }
}


// Namespace: Adverty.a.D
internal class aDy : aCo // TypeDefIndex: 6273
{
	// Fields
	private const string jw = "Shaders/AdSpriteLitShader";
	private const string jX = "Shaders/AdSpriteUnlitShader";
	private Sprite jx; // 0x38
	private SpriteUnitRenderer jY; // 0x40

	// Methods

	// RVA: 0xAAAABC Offset: 0xAA6ABC VA: 0xAAAABC
	public void .ctor(BaseUnit ) { }

	// RVA: 0xAAB00C Offset: 0xAA700C VA: 0xAAB00C Slot: 6
	protected override void nf(Texture ) { }

	// RVA: 0xAAAEE4 Offset: 0xAA6EE4 VA: 0xAAAEE4
	private static Sprite Xn(Texture2D ) { }
}


// Namespace: Adverty.a.d
internal class aDz : aCo // TypeDefIndex: 6274
{
	// Fields
	private const string jy = "Shaders/AdUIShader";

	// Methods

	// RVA: 0xAAAD30 Offset: 0xAA6D30 VA: 0xAAAD30
	public void .ctor(BaseUnit ) { }

	// RVA: 0xAAB0FC Offset: 0xAA70FC VA: 0xAAB0FC Slot: 5
	public override void nF() { }

	// RVA: 0xAAB124 Offset: 0xAA7124 VA: 0xAAB124 Slot: 6
	protected override void nf(Texture ) { }
}


// Namespace: Adverty.AdUnit
public enum RenderType // TypeDefIndex: 6275
{
	// Fields
	public int value__; // 0x0
	public const RenderType Mesh = 0;
	public const RenderType UI = 1;
	public const RenderType Sprite = 2;
}


// Namespace: Adverty.AdUnit
public class MeshSizeConfigurator : SizeConfigurator // TypeDefIndex: 6276
{
	// Methods

	// RVA: 0xAAB1DC Offset: 0xAA71DC VA: 0xAAB1DC Slot: 4
	public override void MaintainRatio(GameObject gameObject, ViewData viewData) { }

	// RVA: 0xAAB42C Offset: 0xAA742C VA: 0xAAB42C Slot: 5
	protected override float GetXValue(ViewData viewData, float parentScale) { }

	// RVA: 0xAAB574 Offset: 0xAA7574 VA: 0xAAB574 Slot: 6
	protected override float GetYValue(ViewData viewData, float parentScale) { }

	// RVA: 0xAAB5D0 Offset: 0xAA75D0 VA: 0xAAB5D0 Slot: 7
	protected override float GetZValue(ViewData viewData, Vector3 vector, float parentScale) { }

	// RVA: 0xAAB620 Offset: 0xAA7620 VA: 0xAAB620
	public void .ctor() { }
}


// Namespace: Adverty.AdUnit
public abstract class SizeConfigurator // TypeDefIndex: 6277
{
	// Fields
	private const string gL = "Unknown Unit Ratio value: {0}";
	private const float gl = 1.7777778;
	private const float gM = 3.88;
	private const float gm = 0.5;
	private const float gN = 1.2;
	protected const float ZERO = 0;
	protected const float ONE = 1;
	private static SizeConfigurator gn; // 0x0
	private static RenderType gO; // 0x8

	// Methods

	// RVA: 0xAAB630 Offset: 0xAA7630 VA: 0xAAB630
	public static void Configurate(GameObject gameObject, ViewData viewData, RenderType renderType) { }

	// RVA: 0xAA940C Offset: 0xAA540C VA: 0xAA940C
	public static bool IsSizeSuitsAnyRatio(int width, int height) { }

	// RVA: 0xAAB784 Offset: 0xAA7784 VA: 0xAAB784
	public static bool IsSizeSuitsTargetRatio(int width, int height, UnitRatio ratio) { }

	// RVA: 0xAAB484 Offset: 0xAA7484 VA: 0xAAB484
	protected static float GetRatioValue(UnitRatio ratio) { }

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void MaintainRatio(GameObject gameObject, ViewData viewData);

	// RVA: -1 Offset: -1 Slot: 5
	protected abstract float GetXValue(ViewData viewData, float parentScale);

	// RVA: -1 Offset: -1 Slot: 6
	protected abstract float GetYValue(ViewData viewData, float parentScale);

	// RVA: -1 Offset: -1 Slot: 7
	protected abstract float GetZValue(ViewData viewData, Vector3 vector, float parentScale);

	// RVA: 0xAAB628 Offset: 0xAA7628 VA: 0xAAB628
	protected void .ctor() { }
}


// Namespace: Adverty.AdUnit
public class SpriteSizeConfigurator : SizeConfigurator // TypeDefIndex: 6278
{
	// Methods

	// RVA: 0xAAB82C Offset: 0xAA782C VA: 0xAAB82C Slot: 4
	public override void MaintainRatio(GameObject gameObject, ViewData viewData) { }

	// RVA: 0xAAB9E4 Offset: 0xAA79E4 VA: 0xAAB9E4 Slot: 5
	protected override float GetXValue(ViewData viewData, float parentScale) { }

	// RVA: 0xAABA04 Offset: 0xAA7A04 VA: 0xAABA04 Slot: 6
	protected override float GetYValue(ViewData viewData, float parentScale) { }

	// RVA: 0xAABA24 Offset: 0xAA7A24 VA: 0xAABA24 Slot: 7
	protected override float GetZValue(ViewData viewData, Vector3 vector, float parentScale) { }

	// RVA: 0xAAB77C Offset: 0xAA777C VA: 0xAAB77C
	public void .ctor() { }
}


// Namespace: Adverty.AdUnit
public class UISizeConfigurator : SizeConfigurator // TypeDefIndex: 6279
{
	// Fields
	private const float jZ = 300;
	private const float jz = 250;

	// Methods

	// RVA: 0xAABA2C Offset: 0xAA7A2C VA: 0xAABA2C Slot: 4
	public override void MaintainRatio(GameObject gameObject, ViewData viewData) { }

	// RVA: 0xAABC90 Offset: 0xAA7C90 VA: 0xAABC90 Slot: 5
	protected override float GetXValue(ViewData viewData, float parentScale) { }

	// RVA: 0xAABCE8 Offset: 0xAA7CE8 VA: 0xAABCE8 Slot: 6
	protected override float GetYValue(ViewData viewData, float parentScale) { }

	// RVA: 0xAABD44 Offset: 0xAA7D44 VA: 0xAABD44 Slot: 7
	protected override float GetZValue(ViewData viewData, Vector3 vector, float parentScale) { }

	// RVA: 0xAAB774 Offset: 0xAA7774 VA: 0xAAB774
	public void .ctor() { }
}


// Namespace: Adverty.AdUnit
public static class UnitConfigurationValidator // TypeDefIndex: 6280
{
	// Fields
	public const float MINIMUM_SCALE = 0.0001;
	public const int BASE_UNIT_VERTEX_COUNT = 50;
	public const int BEND_UNIT_VERTEX_COUNT = 242;
	public const int ONE_SIDED_UNIT_VERTEX_COUNT = 25;
	internal const string go = "Adverty generated mesh is required";
	internal const string gP = "Size setting is invalid";

	// Methods

	// RVA: 0xAA8A08 Offset: 0xAA4A08 VA: 0xAA8A08
	public static bool IsSizeValid(float meshSize) { }

	// RVA: 0xAA8E9C Offset: 0xAA4E9C VA: 0xAA8E9C
	public static bool IsValidMesh(Mesh mesh) { }
}


// Namespace: Adverty.AdUnit
public enum UnitType // TypeDefIndex: 6281
{
	// Fields
	public int value__; // 0x0
	public const UnitType InPlay = 0;
	public const UnitType InMenu = 1;
}


// Namespace: Adverty.a.C
internal static class aCq // TypeDefIndex: 6282
{
	// Fields
	private const string gp = "Textures/ad_placeholder";
	private static Texture gQ; // 0x0

	// Methods

	// RVA: 0xAA9F64 Offset: 0xAA5F64 VA: 0xAA9F64
	public static Texture Uw() { }
}


// Namespace: Adverty.AdUnit.Renderer
public class MeshUnitRenderer : UnitRenderer // TypeDefIndex: 6283
{
	// Fields
	[CompilerGenerated]
	private MeshRenderer KA; // 0x50
	[CompilerGenerated]
	private MeshFilter Ka; // 0x58

	// Methods

	[CompilerGenerated]
	// RVA: 0xAABD4C Offset: 0xAA7D4C VA: 0xAABD4C
	internal MeshRenderer XO() { }

	[CompilerGenerated]
	// RVA: 0xAABD54 Offset: 0xAA7D54 VA: 0xAABD54
	private void Xo(MeshRenderer ) { }

	[CompilerGenerated]
	// RVA: 0xAABD5C Offset: 0xAA7D5C VA: 0xAABD5C
	internal MeshFilter XP() { }

	[CompilerGenerated]
	// RVA: 0xAABD64 Offset: 0xAA7D64 VA: 0xAABD64
	private void Xp(MeshFilter ) { }

	// RVA: 0xAABD6C Offset: 0xAA7D6C VA: 0xAABD6C Slot: 4
	internal override RenderType nG() { }

	// RVA: 0xAABD74 Offset: 0xAA7D74 VA: 0xAABD74 Slot: 5
	internal override Material ng() { }

	// RVA: 0xAABD90 Offset: 0xAA7D90 VA: 0xAABD90 Slot: 6
	internal override void nH(Material ) { }

	// RVA: 0xAABDAC Offset: 0xAA7DAC VA: 0xAABDAC Slot: 7
	internal override bool nh() { }

	// RVA: 0xAABDF0 Offset: 0xAA7DF0 VA: 0xAABDF0 Slot: 9
	internal override void ni(BaseUnit ) { }

	// RVA: 0xAABF70 Offset: 0xAA7F70 VA: 0xAABF70 Slot: 10
	internal override void nJ(bool ) { }

	// RVA: 0xAABF90 Offset: 0xAA7F90 VA: 0xAABF90 Slot: 11
	internal override bool nj() { }

	// RVA: 0xAAC170 Offset: 0xAA8170 VA: 0xAAC170 Slot: 12
	internal override void nK() { }

	// RVA: 0xAAC1EC Offset: 0xAA81EC VA: 0xAAC1EC Slot: 8
	internal override Vector2 nI() { }

	// RVA: 0xAAC248 Offset: 0xAA8248 VA: 0xAAC248
	public void .ctor() { }
}


// Namespace: Adverty.AdUnit.Renderer
public class SpriteUnitRenderer : UnitRenderer // TypeDefIndex: 6284
{
	// Fields
	[CompilerGenerated]
	private SpriteRenderer KB; // 0x50

	// Methods

	[CompilerGenerated]
	// RVA: 0xAAB0F4 Offset: 0xAA70F4 VA: 0xAAB0F4
	internal SpriteRenderer XQ() { }

	[CompilerGenerated]
	// RVA: 0xAAC258 Offset: 0xAA8258 VA: 0xAAC258
	private void Xq(SpriteRenderer ) { }

	// RVA: 0xAAC260 Offset: 0xAA8260 VA: 0xAAC260 Slot: 4
	internal override RenderType nG() { }

	// RVA: 0xAAC268 Offset: 0xAA8268 VA: 0xAAC268 Slot: 5
	internal override Material ng() { }

	// RVA: 0xAAC284 Offset: 0xAA8284 VA: 0xAAC284 Slot: 6
	internal override void nH(Material ) { }

	// RVA: 0xAAC2A0 Offset: 0xAA82A0 VA: 0xAAC2A0 Slot: 7
	internal override bool nh() { }

	// RVA: 0xAAC2DC Offset: 0xAA82DC VA: 0xAAC2DC Slot: 9
	internal override void ni(BaseUnit ) { }

	// RVA: 0xAAC384 Offset: 0xAA8384 VA: 0xAAC384 Slot: 10
	internal override void nJ(bool ) { }

	// RVA: 0xAAC3A4 Offset: 0xAA83A4 VA: 0xAAC3A4 Slot: 11
	internal override bool nj() { }

	// RVA: 0xAAC4E4 Offset: 0xAA84E4 VA: 0xAAC4E4 Slot: 12
	internal override void nK() { }

	// RVA: 0xAAC534 Offset: 0xAA8534 VA: 0xAAC534 Slot: 8
	internal override Vector2 nI() { }

	// RVA: 0xAAC590 Offset: 0xAA8590 VA: 0xAAC590
	public void .ctor() { }
}


// Namespace: Adverty.AdUnit.Renderer
public class UIUnitRenderer : UnitRenderer // TypeDefIndex: 6285
{
	// Fields
	[CompilerGenerated]
	private RawImage Kb; // 0x50
	[CompilerGenerated]
	private RectTransform KC; // 0x58

	// Methods

	[CompilerGenerated]
	// RVA: 0xAAB1D4 Offset: 0xAA71D4 VA: 0xAAB1D4
	internal RawImage XR() { }

	[CompilerGenerated]
	// RVA: 0xAAC598 Offset: 0xAA8598 VA: 0xAAC598
	private void Xr(RawImage ) { }

	[CompilerGenerated]
	// RVA: 0xAA3A18 Offset: 0xA9FA18 VA: 0xAA3A18
	internal RectTransform XS() { }

	[CompilerGenerated]
	// RVA: 0xAAC5A0 Offset: 0xAA85A0 VA: 0xAAC5A0
	private void Xs(RectTransform ) { }

	// RVA: 0xAAC5A8 Offset: 0xAA85A8 VA: 0xAAC5A8 Slot: 4
	internal override RenderType nG() { }

	// RVA: 0xAAC5B0 Offset: 0xAA85B0 VA: 0xAAC5B0 Slot: 5
	internal override Material ng() { }

	// RVA: 0xAAC5D4 Offset: 0xAA85D4 VA: 0xAAC5D4 Slot: 6
	internal override void nH(Material ) { }

	// RVA: 0xAAC5F8 Offset: 0xAA85F8 VA: 0xAAC5F8 Slot: 7
	internal override bool nh() { }

	// RVA: 0xAAC68C Offset: 0xAA868C VA: 0xAAC68C Slot: 9
	internal override void ni(BaseUnit ) { }

	// RVA: 0xAAC730 Offset: 0xAA8730 VA: 0xAAC730 Slot: 10
	internal override void nJ(bool ) { }

	// RVA: 0xAAC750 Offset: 0xAA8750 VA: 0xAAC750 Slot: 11
	internal override bool nj() { }

	// RVA: 0xAAC758 Offset: 0xAA8758 VA: 0xAAC758
	internal void XT(Texture ) { }

	// RVA: 0xAAC790 Offset: 0xAA8790 VA: 0xAAC790 Slot: 12
	internal override void nK() { }

	// RVA: 0xAAC838 Offset: 0xAA8838 VA: 0xAAC838 Slot: 8
	internal override Vector2 nI() { }

	// RVA: 0xAAC854 Offset: 0xAA8854 VA: 0xAAC854
	public void .ctor() { }
}


// Namespace: Adverty.AdUnit.Renderer
public abstract class UnitRenderer : MonoBehaviour // TypeDefIndex: 6286
{
	// Fields
	internal const string gq = "Adverty unit named {0} became visible by camera";
	internal const string gR = "Adverty unit named {0} became not visible by camera";
	protected const string INVALID_MESSAGE_BASE = "Adverty unit named {0} validation error. {1}";
	[CompilerGenerated]
	private static Action<BaseUnit> gr; // 0x0
	protected BaseUnit owner; // 0x20
	protected bool isVisible; // 0x28
	[CompilerGenerated]
	private aAy.A gS; // 0x2C
	[CompilerGenerated]
	private bool gs; // 0x30
	[CompilerGenerated]
	private aCo gT; // 0x38
	[CompilerGenerated]
	private abv gt; // 0x40
	private bool gU; // 0x48

	// Methods

	[CompilerGenerated]
	// RVA: 0xAAC85C Offset: 0xAA885C VA: 0xAAC85C
	internal static void UX(Action<BaseUnit> ) { }

	[CompilerGenerated]
	// RVA: 0xAAC928 Offset: 0xAA8928 VA: 0xAAC928
	internal static void Ux(Action<BaseUnit> ) { }

	[CompilerGenerated]
	// RVA: 0xAAC9F4 Offset: 0xAA89F4 VA: 0xAAC9F4
	private aAy.A UY() { }

	[CompilerGenerated]
	// RVA: 0xAAC9FC Offset: 0xAA89FC VA: 0xAAC9FC
	private void Uy(aAy.A ) { }

	[CompilerGenerated]
	// RVA: 0xAABDE8 Offset: 0xAA7DE8 VA: 0xAABDE8
	internal bool UZ() { }

	[CompilerGenerated]
	// RVA: 0xAACA04 Offset: 0xAA8A04 VA: 0xAACA04
	internal void Uz(bool ) { }

	// RVA: 0xAA4258 Offset: 0xAA0258 VA: 0xAA4258
	internal int uA() { }

	// RVA: 0xAACA10 Offset: 0xAA8A10 VA: 0xAACA10
	internal string ua() { }

	// RVA: 0xAACA1C Offset: 0xAA8A1C VA: 0xAACA1C
	internal bool uB() { }

	// RVA: 0xAACA48 Offset: 0xAA8A48 VA: 0xAACA48
	internal bool ub() { }

	// RVA: -1 Offset: -1 Slot: 4
	internal abstract RenderType nG();

	// RVA: -1 Offset: -1 Slot: 5
	internal abstract Material ng();

	// RVA: -1 Offset: -1 Slot: 6
	internal abstract void nH(Material );

	// RVA: -1 Offset: -1 Slot: 7
	internal abstract bool nh();

	// RVA: -1 Offset: -1 Slot: 8
	internal abstract Vector2 nI();

	[CompilerGenerated]
	// RVA: 0xAACA58 Offset: 0xAA8A58 VA: 0xAACA58
	internal aCo uC() { }

	[CompilerGenerated]
	// RVA: 0xAACA60 Offset: 0xAA8A60 VA: 0xAACA60
	private void uc(aCo ) { }

	[CompilerGenerated]
	// RVA: 0xAACA68 Offset: 0xAA8A68 VA: 0xAACA68
	internal abv uD() { }

	[CompilerGenerated]
	// RVA: 0xAABEE8 Offset: 0xAA7EE8 VA: 0xAABEE8
	internal void ud(abv ) { }

	// RVA: 0xAABEF0 Offset: 0xAA7EF0 VA: 0xAABEF0 Slot: 9
	internal virtual void ni(BaseUnit ) { }

	// RVA: -1 Offset: -1 Slot: 10
	internal abstract void nJ(bool );

	// RVA: -1 Offset: -1 Slot: 11
	internal abstract bool nj();

	// RVA: -1 Offset: -1 Slot: 12
	internal abstract void nK();

	// RVA: 0xAACA70 Offset: 0xAA8A70 VA: 0xAACA70
	internal void UpdateHandleRendering() { }

	// RVA: 0xAACB20 Offset: 0xAA8B20 VA: 0xAACB20
	protected void OnWillRenderObject() { }

	// RVA: 0xAACB58 Offset: 0xAA8B58 VA: 0xAACB58
	protected void OnBecameVisible() { }

	// RVA: 0xAACC7C Offset: 0xAA8C7C VA: 0xAACC7C
	protected void OnBecameInvisible() { }

	// RVA: 0xAACDE8 Offset: 0xAA8DE8 VA: 0xAACDE8
	protected void Update() { }

	// RVA: 0xAACE9C Offset: 0xAA8E9C VA: 0xAACE9C
	protected void LateUpdate() { }

	// RVA: 0xAACA80 Offset: 0xAA8A80 VA: 0xAACA80
	private void HandleRenderingStart() { }

	// RVA: 0xAACDEC Offset: 0xAA8DEC VA: 0xAACDEC
	private void uE() { }

	// RVA: 0xAACEAC Offset: 0xAA8EAC VA: 0xAACEAC
	internal void HandleRenderingOnDisable() { }

	// RVA: -1 Offset: -1
	protected static void RemoveComponent<T>(T component) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAF064 Offset: 0xBAB064 VA: 0xBAF064
	|-UnitRenderer.RemoveComponent<object>
	*/

	// RVA: 0xAAC250 Offset: 0xAA8250 VA: 0xAAC250
	protected void .ctor() { }
}


// Namespace: Adverty.AdUnit.Renderer
public static class UnitRendererFactory // TypeDefIndex: 6287
{
	// Methods

	// RVA: 0xAA8A1C Offset: 0xAA4A1C VA: 0xAA8A1C
	public static UnitRenderer Create(GameObject owner, ViewData viewData, ShaderType shaderType, RenderType renderType) { }
}


// Namespace: Adverty.a.C
internal static class aCr // TypeDefIndex: 6288
{
	// Fields
	private const string gu = "Meshes/SimpleUnit";
	private const string gV = "Meshes/SimpleUnitOneSided";
	private const string gv = "Materials/Lit/";
	private const string gW = "Materials/Unlit/";
	private const string gw = "BoxUnitMaterial";
	private const string gX = "PortraitUnitMaterial";
	private const string gx = "LandscapeUnitMaterial";
	private const string gY = "WideLandscapeUnitMaterial";
	private const string gy = "SpriteMaterial";

	// Methods

	// RVA: 0xAACF28 Offset: 0xAA8F28 VA: 0xAACF28
	internal static UnitRenderer ue(GameObject , ViewData , ShaderType , RenderType ) { }

	// RVA: 0xAAD0E4 Offset: 0xAA90E4 VA: 0xAAD0E4
	private static UnitRenderer uF(GameObject , ViewData , ShaderType , Mesh ) { }

	// RVA: 0xAAD248 Offset: 0xAA9248 VA: 0xAAD248
	private static UnitRenderer uf(GameObject , ViewData , ShaderType ) { }

	// RVA: 0xAAD364 Offset: 0xAA9364 VA: 0xAAD364
	private static UnitRenderer uG(GameObject , ViewData , ShaderType ) { }

	// RVA: 0xAAD484 Offset: 0xAA9484 VA: 0xAAD484
	private static string ug(UnitRatio , ShaderType ) { }

	// RVA: 0xAAD5A4 Offset: 0xAA95A4 VA: 0xAAD5A4
	private static string uH(ShaderType , string ) { }

	// RVA: -1 Offset: -1
	private static mj uh<mj>(GameObject ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB3368 Offset: 0xBAF368 VA: 0xBB3368
	|-aCr.uh<object>
	*/

	// RVA: 0xAAD068 Offset: 0xAA9068 VA: 0xAAD068
	private static Mesh uI(bool ) { }
}


// Namespace: Adverty.a.d
internal abstract class ada : aCs // TypeDefIndex: 6289
{
	// Fields
	[CompilerGenerated]
	private static Action<BaseUnit> Kc; // 0x0
	[CompilerGenerated]
	private static Action<BaseUnit> KD; // 0x8
	[CompilerGenerated]
	private Func<string, bool> Kd; // 0x10
	[CompilerGenerated]
	private Action<float> KE; // 0x18
	private BaseUnit Ke; // 0x20
	private INativeRedirectionDialog KF; // 0x28
	private bool Kf; // 0x30
	private const string KG = "Failed to retrieve destination URL";
	private const string Kg = "{0} is in black list";
	private const string KH = "Destination Url black list pattern is corrupted: {0}";
	private const string Kh = "\\bhttps\\b.*\\badverty\\b.*\\b(com|internal)\\b.*";
	private static DateTime KI; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0xAAD694 Offset: 0xAA9694 VA: 0xAAD694
	internal static void Xt(Action<BaseUnit> ) { }

	[CompilerGenerated]
	// RVA: 0xAAD760 Offset: 0xAA9760 VA: 0xAAD760
	internal static void XU(Action<BaseUnit> ) { }

	[CompilerGenerated]
	// RVA: 0xAAD82C Offset: 0xAA982C VA: 0xAAD82C
	internal static void Xu(Action<BaseUnit> ) { }

	[CompilerGenerated]
	// RVA: 0xAAD8FC Offset: 0xAA98FC VA: 0xAAD8FC
	internal static void XV(Action<BaseUnit> ) { }

	[CompilerGenerated]
	// RVA: 0xAAD9CC Offset: 0xAA99CC VA: 0xAAD9CC Slot: 4
	public void nk(Func<string, bool> ) { }

	[CompilerGenerated]
	// RVA: 0xAADA7C Offset: 0xAA9A7C VA: 0xAADA7C Slot: 5
	public void nL(Func<string, bool> ) { }

	[CompilerGenerated]
	// RVA: 0xAADB2C Offset: 0xAA9B2C VA: 0xAADB2C Slot: 6
	public void nl(Action<float> ) { }

	[CompilerGenerated]
	// RVA: 0xAADBDC Offset: 0xAA9BDC VA: 0xAADBDC Slot: 7
	public void nM(Action<float> ) { }

	// RVA: 0xAADC8C Offset: 0xAA9C8C VA: 0xAADC8C
	protected void .ctor(BaseUnit ) { }

	// RVA: 0xAADD20 Offset: 0xAA9D20 VA: 0xAADD20 Slot: 11
	public virtual void nm() { }

	// RVA: -1 Offset: -1 Slot: 12
	public abstract void nn(Vector2 );

	// RVA: 0xAADD44 Offset: 0xAA9D44 VA: 0xAADD44 Slot: 13
	public virtual void nN() { }

	// RVA: 0xAADD48 Offset: 0xAA9D48 VA: 0xAADD48
	protected void Xv(string ) { }

	// RVA: 0xAAE37C Offset: 0xAAA37C VA: 0xAAE37C
	private void XW(string ) { }

	// RVA: 0xAAE05C Offset: 0xAAA05C VA: 0xAAE05C
	private static bool Xw(string ) { }

	// RVA: 0xAAE4D0 Offset: 0xAAA4D0 VA: 0xAAE4D0
	private void XX(bool ) { }

	// RVA: 0xAAE0EC Offset: 0xAAA0EC VA: 0xAAE0EC
	private static bool Xx(string ) { }

	[MonoPInvokeCallback(typeof(Action<bool, string>))]
	// RVA: 0xAAD624 Offset: 0xAA9624 VA: 0xAAD624
	private static void XY(bool , string ) { }
}


// Namespace: Adverty.a.E
internal class aEd : ada // TypeDefIndex: 6290
{
	// Fields
	private aal lR; // 0x38

	// Methods

	// RVA: 0xAAE688 Offset: 0xAAA688 VA: 0xAAE688
	public void .ctor(BaseUnit , aal ) { }

	// RVA: 0xAAE6AC Offset: 0xAAA6AC VA: 0xAAE6AC Slot: 11
	public override void nm() { }

	// RVA: 0xAAE7A8 Offset: 0xAAA7A8 VA: 0xAAE7A8 Slot: 13
	public override void nN() { }

	// RVA: 0xAAE89C Offset: 0xAAA89C VA: 0xAAE89C Slot: 12
	public override void nn(Vector2 ) { }
}


// Namespace: Adverty.a.C
internal interface aCs // TypeDefIndex: 6291
{
	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 0
	public abstract void nk(Func<string, bool> );

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 1
	public abstract void nL(Func<string, bool> );

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 2
	public abstract void nl(Action<float> );

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 3
	public abstract void nM(Action<float> );

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void nm();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void nN();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void nn(Vector2 );
}


// Namespace: Adverty.a.E
internal class aEe : ada // TypeDefIndex: 6292
{
	// Fields
	private aax lr; // 0x38

	// Methods

	// RVA: 0xAAE958 Offset: 0xAAA958 VA: 0xAAE958
	public void .ctor(BaseUnit , aax ) { }

	// RVA: 0xAAE97C Offset: 0xAAA97C VA: 0xAAE97C Slot: 11
	public override void nm() { }

	// RVA: 0xAAEA2C Offset: 0xAAAA2C VA: 0xAAEA2C Slot: 13
	public override void nN() { }

	// RVA: 0xAAEAD4 Offset: 0xAAAAD4 VA: 0xAAEAD4 Slot: 12
	public override void nn(Vector2 ) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class aCt.A // TypeDefIndex: 6293
{
	// Fields
	public static readonly aCt.A Ki; // 0x0
	public static Func<KeyValuePair<int, adb>, bool> KJ; // 0x8
	public static Predicate<add> Kj; // 0x10
	public static Func<add, UnitType> KK; // 0x18
	public static Func<IGrouping<UnitType, add>, int> Kk; // 0x20
	public static Func<add, UnitRatio> KL; // 0x28
	public static Func<IGrouping<UnitRatio, add>, int> Kl; // 0x30

	// Methods

	// RVA: 0xAB06EC Offset: 0xAAC6EC VA: 0xAB06EC
	private static void .cctor() { }

	// RVA: 0xAB0748 Offset: 0xAAC748 VA: 0xAB0748
	public void .ctor() { }

	// RVA: 0xAB0750 Offset: 0xAAC750 VA: 0xAB0750
	internal bool Xy(KeyValuePair<int, adb> ) { }

	// RVA: 0xAB07DC Offset: 0xAAC7DC VA: 0xAB07DC
	internal bool XZ(add ) { }

	// RVA: 0xAB07F4 Offset: 0xAAC7F4 VA: 0xAB07F4
	internal UnitType Xz(add ) { }

	// RVA: 0xAB0828 Offset: 0xAAC828 VA: 0xAB0828
	internal int xA(IGrouping<UnitType, add> ) { }

	// RVA: 0xAB0870 Offset: 0xAAC870 VA: 0xAB0870
	internal UnitRatio xa(add ) { }

	// RVA: 0xAB08A4 Offset: 0xAAC8A4 VA: 0xAB08A4
	internal int xB(IGrouping<UnitRatio, add> ) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class aCt.a // TypeDefIndex: 6294
{
	// Fields
	public UnitConfiguration KM; // 0x10

	// Methods

	// RVA: 0xAAF8D0 Offset: 0xAAB8D0 VA: 0xAAF8D0
	public void .ctor() { }

	// RVA: 0xAB08EC Offset: 0xAAC8EC VA: 0xAB08EC
	internal bool xb(add ) { }
}


// Namespace: Adverty.a.C
internal static class aCt // TypeDefIndex: 6295
{
	// Fields
	private const string gZ = "Maximum amount of active ads has been reached";
	[CompilerGenerated]
	private static Action gz; // 0x0
	[CompilerGenerated]
	private static Action<BaseUnit> HA; // 0x8
	private static List<add> Ha; // 0x10
	private static aCx HB; // 0x18
	private static int Hb; // 0x20

	// Methods

	[CompilerGenerated]
	// RVA: 0xAAEAF0 Offset: 0xAAAAF0 VA: 0xAAEAF0
	internal static void ui(Action ) { }

	[CompilerGenerated]
	// RVA: 0xAAEBC8 Offset: 0xAAABC8 VA: 0xAAEBC8
	internal static void uJ(Action ) { }

	[CompilerGenerated]
	// RVA: 0xAAECA0 Offset: 0xAAACA0 VA: 0xAAECA0
	internal static void uj(Action<BaseUnit> ) { }

	[CompilerGenerated]
	// RVA: 0xAAED94 Offset: 0xAAAD94 VA: 0xAAED94
	internal static void uK(Action<BaseUnit> ) { }

	// RVA: 0xAAEE88 Offset: 0xAAAE88 VA: 0xAAEE88
	private static bool uk() { }

	// RVA: 0xAAF118 Offset: 0xAAB118 VA: 0xAAF118
	private static void .cctor() { }

	// RVA: 0xAAF3A8 Offset: 0xAAB3A8 VA: 0xAAF3A8
	internal static add uL(UnitConfiguration , bool ) { }

	// RVA: 0xAAFA58 Offset: 0xAABA58 VA: 0xAAFA58
	internal static void ul(add ) { }

	// RVA: 0xAAFB24 Offset: 0xAABB24 VA: 0xAAFB24
	internal static void uM() { }

	// RVA: 0xAAFBE8 Offset: 0xAABBE8 VA: 0xAAFBE8
	internal static void um() { }

	// RVA: 0xAAFC40 Offset: 0xAABC40 VA: 0xAAFC40
	private static void uN(aCz ) { }

	// RVA: 0xAAF8D8 Offset: 0xAAB8D8 VA: 0xAAF8D8
	internal static void un(UnitConfiguration ) { }

	// RVA: 0xAB02CC Offset: 0xAAC2CC VA: 0xAB02CC
	private static void uO(Dictionary<aCv, aCg> ) { }

	// RVA: 0xAB0608 Offset: 0xAAC608 VA: 0xAB0608
	private static void uo(aCz ) { }

	// RVA: 0xAAFC9C Offset: 0xAABC9C VA: 0xAAFC9C
	private static bool uP() { }
}


// Namespace: Adverty.a.C
internal interface aCu // TypeDefIndex: 6296
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract BaseUnit nO();
}


// Namespace: Adverty.a.d
internal class adb : aCu // TypeDefIndex: 6297
{
	// Fields
	[CompilerGenerated]
	private static Action<aCu> Km; // 0x0
	[CompilerGenerated]
	private static Action<aCu> KN; // 0x8
	[CompilerGenerated]
	private static Action<aCu> Kn; // 0x10
	[CompilerGenerated]
	private static Action<aCu> KO; // 0x18
	[CompilerGenerated]
	private static Action<aCu> Ko; // 0x20
	private const string KP = "Ad destroyed for unit named {0}";
	private const string Kp = "Ad expired for unit named {0}";
	private const string KQ = "Ad deactivated for unit named {0}";
	private const string Kq = "Ad loaded and activated for unit named {0}";
	[CompilerGenerated]
	private BaseUnit KR; // 0x10
	[CompilerGenerated]
	private bool Kr; // 0x18
	[CompilerGenerated]
	private add KS; // 0x20
	private add Ks; // 0x28

	// Methods

	[CompilerGenerated]
	// RVA: 0xAB0958 Offset: 0xAAC958 VA: 0xAB0958
	internal static void xC(Action<aCu> ) { }

	[CompilerGenerated]
	// RVA: 0xAB0A24 Offset: 0xAACA24 VA: 0xAB0A24
	internal static void xc(Action<aCu> ) { }

	[CompilerGenerated]
	// RVA: 0xAB0AF0 Offset: 0xAACAF0 VA: 0xAB0AF0
	internal static void xD(Action<aCu> ) { }

	[CompilerGenerated]
	// RVA: 0xAB0BC0 Offset: 0xAACBC0 VA: 0xAB0BC0
	internal static void xd(Action<aCu> ) { }

	[CompilerGenerated]
	// RVA: 0xAB0C90 Offset: 0xAACC90 VA: 0xAB0C90
	internal static void xE(Action<aCu> ) { }

	[CompilerGenerated]
	// RVA: 0xAB0D60 Offset: 0xAACD60 VA: 0xAB0D60
	internal static void xe(Action<aCu> ) { }

	[CompilerGenerated]
	// RVA: 0xAB0E30 Offset: 0xAACE30 VA: 0xAB0E30
	internal static void xF(Action<aCu> ) { }

	[CompilerGenerated]
	// RVA: 0xAB0F00 Offset: 0xAACF00 VA: 0xAB0F00
	internal static void xf(Action<aCu> ) { }

	[CompilerGenerated]
	// RVA: 0xAB0FD0 Offset: 0xAACFD0 VA: 0xAB0FD0
	internal static void xG(Action<aCu> ) { }

	[CompilerGenerated]
	// RVA: 0xAB10A0 Offset: 0xAAD0A0 VA: 0xAB10A0
	internal static void xg(Action<aCu> ) { }

	[CompilerGenerated]
	// RVA: 0xAB1170 Offset: 0xAAD170 VA: 0xAB1170 Slot: 4
	public BaseUnit nO() { }

	[CompilerGenerated]
	// RVA: 0xAB1178 Offset: 0xAAD178 VA: 0xAB1178
	private void xH(BaseUnit ) { }

	// RVA: 0xAB1180 Offset: 0xAAD180 VA: 0xAB1180
	internal bool xh() { }

	[CompilerGenerated]
	// RVA: 0xAB1190 Offset: 0xAAD190 VA: 0xAB1190
	internal bool xI() { }

	[CompilerGenerated]
	// RVA: 0xAB1198 Offset: 0xAAD198 VA: 0xAB1198
	private void xi(bool ) { }

	// RVA: 0xAB07C8 Offset: 0xAAC7C8 VA: 0xAB07C8
	internal bool xJ() { }

	[CompilerGenerated]
	// RVA: 0xAA4274 Offset: 0xAA0274 VA: 0xAA4274
	internal add xj() { }

	[CompilerGenerated]
	// RVA: 0xAB11A4 Offset: 0xAAD1A4 VA: 0xAB11A4
	private void xK(add ) { }

	// RVA: 0xAB11AC Offset: 0xAAD1AC VA: 0xAB11AC
	internal void .ctor(BaseUnit ) { }

	// RVA: 0xAB123C Offset: 0xAAD23C VA: 0xAB123C
	internal void xk(add ) { }

	// RVA: 0xAB1414 Offset: 0xAAD414 VA: 0xAB1414
	internal void xL() { }

	// RVA: 0xAB1654 Offset: 0xAAD654 VA: 0xAB1654
	internal add xl() { }

	// RVA: 0xAB1810 Offset: 0xAAD810 VA: 0xAB1810
	protected void xM() { }

	// RVA: 0xAB17F8 Offset: 0xAAD7F8 VA: 0xAB17F8
	private static void xm(add , bool  = False) { }

	// RVA: 0xAB1248 Offset: 0xAAD248 VA: 0xAB1248
	private void xN(add ) { }

	// RVA: 0xAB1880 Offset: 0xAAD880 VA: 0xAB1880
	private void xn() { }

	// RVA: 0xAB1A44 Offset: 0xAADA44 VA: 0xAB1A44
	private void xO(Vector2 ) { }

	// RVA: 0xAB1648 Offset: 0xAAD648 VA: 0xAB1648
	private string xo() { }

	// RVA: 0xAB1B00 Offset: 0xAADB00 VA: 0xAB1B00
	private void xP(int ) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class adc.A // TypeDefIndex: 6298
{
	// Fields
	public static readonly adc.A lS; // 0x0
	public static Func<KeyValuePair<int, adb>, adb> ls; // 0x8
	public static Func<adb, bool> lT; // 0x10
	public static Func<KeyValuePair<int, adb>, bool> lt; // 0x18
	public static Func<KeyValuePair<int, adb>, bool> lU; // 0x20

	// Methods

	// RVA: 0xAB5C70 Offset: 0xAB1C70 VA: 0xAB5C70
	private static void .cctor() { }

	// RVA: 0xAB5CCC Offset: 0xAB1CCC VA: 0xAB5CCC
	public void .ctor() { }

	// RVA: 0xAB5CD4 Offset: 0xAB1CD4 VA: 0xAB5CD4
	internal adb Zw(KeyValuePair<int, adb> ) { }

	// RVA: 0xAB5D2C Offset: 0xAB1D2C VA: 0xAB5D2C
	internal bool ZX(adb ) { }

	// RVA: 0xAB5D44 Offset: 0xAB1D44 VA: 0xAB5D44
	internal bool Zx(KeyValuePair<int, adb> ) { }

	// RVA: 0xAB5DB4 Offset: 0xAB1DB4 VA: 0xAB5DB4
	internal bool ZY(KeyValuePair<int, adb> ) { }
}


// Namespace: Adverty.a.d
internal class adc : aAt // TypeDefIndex: 6299
{
	// Fields
	private const string KT = "{0} deactivated";
	[CompilerGenerated]
	private static bool Kt; // 0x0
	[CompilerGenerated]
	private static aad<adb> KU; // 0x8
	[CompilerGenerated]
	private static List<int> Ku; // 0x10
	[CompilerGenerated]
	private static List<BaseUnit> KV; // 0x18
	[CompilerGenerated]
	private static aDx Kv; // 0x20
	private aag KW; // 0x10
	private aag Kw; // 0x18

	// Methods

	[CompilerGenerated]
	// RVA: 0xAB1BF0 Offset: 0xAADBF0 VA: 0xAB1BF0
	internal static bool xp() { }

	[CompilerGenerated]
	// RVA: 0xAB1C48 Offset: 0xAADC48 VA: 0xAB1C48
	private static void xQ(bool ) { }

	[CompilerGenerated]
	// RVA: 0xAB1CA8 Offset: 0xAADCA8 VA: 0xAB1CA8
	internal static aad<adb> xq() { }

	[CompilerGenerated]
	// RVA: 0xAB1D00 Offset: 0xAADD00 VA: 0xAB1D00
	private static void xR(aad<adb> ) { }

	[CompilerGenerated]
	// RVA: 0xAB1D5C Offset: 0xAADD5C VA: 0xAB1D5C
	internal static List<int> xr() { }

	[CompilerGenerated]
	// RVA: 0xAB1DB4 Offset: 0xAADDB4 VA: 0xAB1DB4
	private static void xS(List<int> ) { }

	[CompilerGenerated]
	// RVA: 0xAB1E10 Offset: 0xAADE10 VA: 0xAB1E10
	internal static List<BaseUnit> xs() { }

	[CompilerGenerated]
	// RVA: 0xAB1E68 Offset: 0xAADE68 VA: 0xAB1E68
	private static void xT(List<BaseUnit> ) { }

	[CompilerGenerated]
	// RVA: 0xAB1EC4 Offset: 0xAADEC4 VA: 0xAB1EC4
	private static aDx xt() { }

	[CompilerGenerated]
	// RVA: 0xAB1F1C Offset: 0xAADF1C VA: 0xAB1F1C
	private static void xU(aDx ) { }

	// RVA: 0xAB1F78 Offset: 0xAADF78 VA: 0xAB1F78
	private static void .cctor() { }

	// RVA: 0xAB2078 Offset: 0xAAE078 VA: 0xAB2078
	internal void .ctor() { }

	// RVA: 0xAB2390 Offset: 0xAAE390 VA: 0xAB2390
	internal static void xu(BaseUnit ) { }

	// RVA: 0xAB259C Offset: 0xAAE59C VA: 0xAB259C
	internal static void xV(BaseUnit ) { }

	// RVA: 0xAB235C Offset: 0xAAE35C VA: 0xAB235C
	internal void Start() { }

	// RVA: 0xAB2CC4 Offset: 0xAAECC4 VA: 0xAB2CC4
	internal void xv() { }

	// RVA: 0xAB2F58 Offset: 0xAAEF58 VA: 0xAB2F58
	internal static void xW() { }

	// RVA: 0xAB29E4 Offset: 0xAAE9E4 VA: 0xAB29E4
	private static void xw(adb ) { }

	// RVA: 0xAB327C Offset: 0xAAF27C VA: 0xAB327C
	private static void xX() { }

	// RVA: 0xAB2A64 Offset: 0xAAEA64 VA: 0xAB2A64
	private void xx() { }

	// RVA: 0xAB2CF8 Offset: 0xAAECF8 VA: 0xAB2CF8
	private void xY() { }

	// RVA: 0xAB37F8 Offset: 0xAAF7F8 VA: 0xAB37F8
	private void xy() { }

	// RVA: 0xAB3B64 Offset: 0xAAFB64 VA: 0xAB3B64
	private static void xZ() { }

	// RVA: 0xAB3FA4 Offset: 0xAAFFA4 VA: 0xAB3FA4
	private static void xz() { }

	// RVA: 0xAB4310 Offset: 0xAB0310 VA: 0xAB4310
	private static void YA(add ) { }

	// RVA: 0xAB4378 Offset: 0xAB0378 VA: 0xAB4378 Slot: 4
	public void mt() { }

	// RVA: 0xAB47B4 Offset: 0xAB07B4 VA: 0xAB47B4
	private void Ya(aCu ) { }

	// RVA: 0xAB4B38 Offset: 0xAB0B38 VA: 0xAB4B38
	private void YB(aCu ) { }

	// RVA: 0xAB4BFC Offset: 0xAB0BFC VA: 0xAB4BFC
	private static void Yb(aCu ) { }

	// RVA: 0xAB4D84 Offset: 0xAB0D84 VA: 0xAB4D84
	private void YC(aCu ) { }

	// RVA: 0xAB24F0 Offset: 0xAAE4F0 VA: 0xAB24F0
	private static void Yc(adb , bool ) { }

	// RVA: 0xAB4944 Offset: 0xAB0944 VA: 0xAB4944
	private static void YD(BaseUnit ) { }

	// RVA: 0xAB273C Offset: 0xAAE73C VA: 0xAB273C
	private static void Yd(BaseUnit ) { }

	// RVA: 0xAB5080 Offset: 0xAB1080 VA: 0xAB5080
	private static void YE(IRenderable ) { }

	// RVA: 0xAB55AC Offset: 0xAB15AC VA: 0xAB55AC
	private void Ye(abi ) { }

	// RVA: 0xAB5A0C Offset: 0xAB1A0C VA: 0xAB5A0C
	private void YF(BaseUnit ) { }
}


// Namespace: Adverty.a.C
internal class aCv // TypeDefIndex: 6300
{
	// Fields
	[CompilerGenerated]
	private UnitRatio HC; // 0x10
	[CompilerGenerated]
	private bool Hc; // 0x14
	[CompilerGenerated]
	private bool HD; // 0x15
	[CompilerGenerated]
	private UnitType Hd; // 0x18

	// Methods

	[CompilerGenerated]
	// RVA: 0xAB5E28 Offset: 0xAB1E28 VA: 0xAB5E28
	internal UnitRatio up() { }

	[CompilerGenerated]
	// RVA: 0xAB5E30 Offset: 0xAB1E30 VA: 0xAB5E30
	private void uQ(UnitRatio ) { }

	[CompilerGenerated]
	// RVA: 0xAB5E38 Offset: 0xAB1E38 VA: 0xAB5E38
	internal bool uq() { }

	[CompilerGenerated]
	// RVA: 0xAB5E40 Offset: 0xAB1E40 VA: 0xAB5E40
	private void uR(bool ) { }

	[CompilerGenerated]
	// RVA: 0xAB5E4C Offset: 0xAB1E4C VA: 0xAB5E4C
	internal bool ur() { }

	[CompilerGenerated]
	// RVA: 0xAB5E54 Offset: 0xAB1E54 VA: 0xAB5E54
	private void uS(bool ) { }

	[CompilerGenerated]
	// RVA: 0xAB5E60 Offset: 0xAB1E60 VA: 0xAB5E60
	internal UnitType us() { }

	[CompilerGenerated]
	// RVA: 0xAB5E68 Offset: 0xAB1E68 VA: 0xAB5E68
	private void uT(UnitType ) { }

	// RVA: 0xAB5E70 Offset: 0xAB1E70 VA: 0xAB5E70
	internal void .ctor(UnitRatio , bool , bool , UnitType ) { }
}


// Namespace: Adverty.a.C
internal class aCw // TypeDefIndex: 6301
{
	// Fields
	[CompilerGenerated]
	private aCv HE; // 0x10
	[CompilerGenerated]
	private aCg He; // 0x18

	// Methods

	[CompilerGenerated]
	// RVA: 0xAB5EC0 Offset: 0xAB1EC0 VA: 0xAB5EC0
	internal aCv ut() { }

	[CompilerGenerated]
	// RVA: 0xAB5EC8 Offset: 0xAB1EC8 VA: 0xAB5EC8
	internal void uU(aCv ) { }

	[CompilerGenerated]
	// RVA: 0xAB5ED0 Offset: 0xAB1ED0 VA: 0xAB5ED0
	internal aCg uu() { }

	[CompilerGenerated]
	// RVA: 0xAB5ED8 Offset: 0xAB1ED8 VA: 0xAB5ED8
	internal void uV(aCg ) { }

	// RVA: 0xAB5EE0 Offset: 0xAB1EE0 VA: 0xAB5EE0
	public void .ctor() { }
}


// Namespace: Adverty.a.d
internal abstract class add : aCz // TypeDefIndex: 6302
{
	// Fields
	internal static Action<aCz> KX; // 0x0
	internal static Action<aCz> Kx; // 0x8
	private const string KY = "Ad failed to activate for unit named {0}";
	protected const string Ky = "Ad failed to activate for unit named {0}. Reason: {1}";
	protected const string KZ = "failed to create webcontent";
	protected const string Kz = "failed to load webcontent";
	protected const string kA = "failed to validate texture";
	protected const string ka = "failed to load image";
	[CompilerGenerated]
	private BaseUnit kB; // 0x10
	[CompilerGenerated]
	private aCy kb; // 0x18
	[CompilerGenerated]
	private aCw kC; // 0x20
	[CompilerGenerated]
	private aCk kc; // 0x28
	[CompilerGenerated]
	private aCn kD; // 0x30
	[CompilerGenerated]
	private int kd; // 0x38
	[CompilerGenerated]
	private bool kE; // 0x3C
	[CompilerGenerated]
	private bool ke; // 0x3D
	protected Action kF; // 0x40
	[CompilerGenerated]
	private Texture kf; // 0x48
	[CompilerGenerated]
	private add kG; // 0x50
	private float kg; // 0x58

	// Methods

	[CompilerGenerated]
	// RVA: 0xAB5EE8 Offset: 0xAB1EE8 VA: 0xAB5EE8 Slot: 4
	public BaseUnit no() { }

	[CompilerGenerated]
	// RVA: 0xAB5EF0 Offset: 0xAB1EF0 VA: 0xAB5EF0
	private void Yf(BaseUnit ) { }

	[CompilerGenerated]
	// RVA: 0xAB5EF8 Offset: 0xAB1EF8 VA: 0xAB5EF8
	internal aCy YG() { }

	[CompilerGenerated]
	// RVA: 0xAB5F00 Offset: 0xAB1F00 VA: 0xAB5F00
	private void Yg(aCy ) { }

	[CompilerGenerated]
	// RVA: 0xAB5F08 Offset: 0xAB1F08 VA: 0xAB5F08
	internal aCw YH() { }

	[CompilerGenerated]
	// RVA: 0xAB5F10 Offset: 0xAB1F10 VA: 0xAB5F10
	private void Yh(aCw ) { }

	[CompilerGenerated]
	// RVA: 0xAB4D7C Offset: 0xAB0D7C VA: 0xAB4D7C
	internal aCk YI() { }

	[CompilerGenerated]
	// RVA: 0xAB5F18 Offset: 0xAB1F18 VA: 0xAB5F18
	private void Yi(aCk ) { }

	[CompilerGenerated]
	// RVA: 0xAB5F20 Offset: 0xAB1F20 VA: 0xAB5F20
	internal aCn YJ() { }

	[CompilerGenerated]
	// RVA: 0xAB5F28 Offset: 0xAB1F28 VA: 0xAB5F28
	private void Yj(aCn ) { }

	[CompilerGenerated]
	// RVA: 0xAB5F30 Offset: 0xAB1F30 VA: 0xAB5F30
	internal int YK() { }

	[CompilerGenerated]
	// RVA: 0xAB5F38 Offset: 0xAB1F38 VA: 0xAB5F38
	private void Yk(int ) { }

	[CompilerGenerated]
	// RVA: 0xAB5F40 Offset: 0xAB1F40 VA: 0xAB5F40
	internal bool YL() { }

	[CompilerGenerated]
	// RVA: 0xAB5F48 Offset: 0xAB1F48 VA: 0xAB5F48
	private void Yl(bool ) { }

	[CompilerGenerated]
	// RVA: 0xAB5F54 Offset: 0xAB1F54 VA: 0xAB5F54
	internal bool YM() { }

	[CompilerGenerated]
	// RVA: 0xAB5F5C Offset: 0xAB1F5C VA: 0xAB5F5C
	private void Ym(bool ) { }

	// RVA: 0xAB5F68 Offset: 0xAB1F68 VA: 0xAB5F68
	internal bool YN() { }

	// RVA: 0xAB5FC8 Offset: 0xAB1FC8 VA: 0xAB5FC8
	internal bool Yn() { }

	// RVA: 0xAB5598 Offset: 0xAB1598 VA: 0xAB5598
	internal bool YO() { }

	// RVA: 0xAB37DC Offset: 0xAAF7DC VA: 0xAB37DC
	internal bool Yo() { }

	// RVA: 0xAB5FD8 Offset: 0xAB1FD8 VA: 0xAB5FD8
	internal bool YP() { }

	// RVA: 0xAB5FFC Offset: 0xAB1FFC VA: 0xAB5FFC
	internal bool Yp() { }

	// RVA: 0xAB6020 Offset: 0xAB2020 VA: 0xAB6020
	internal bool YQ() { }

	// RVA: 0xAB37C4 Offset: 0xAAF7C4 VA: 0xAB37C4
	internal bool Yq() { }

	[CompilerGenerated]
	// RVA: 0xAB6154 Offset: 0xAB2154 VA: 0xAB6154
	protected Texture YR() { }

	[CompilerGenerated]
	// RVA: 0xAB615C Offset: 0xAB215C VA: 0xAB615C
	protected void Yr(Texture ) { }

	[CompilerGenerated]
	// RVA: 0xAB6164 Offset: 0xAB2164 VA: 0xAB6164
	protected add YS() { }

	[CompilerGenerated]
	// RVA: 0xAB616C Offset: 0xAB216C VA: 0xAB616C
	private void Ys(add ) { }

	// RVA: 0xAB6174 Offset: 0xAB2174 VA: 0xAB6174
	internal void .ctor(aCw ) { }

	// RVA: 0xAB6180 Offset: 0xAB2180 VA: 0xAB6180
	protected void .ctor(int , aCw ) { }

	// RVA: 0xAB643C Offset: 0xAB243C VA: 0xAB643C Slot: 5
	internal virtual void Of() { }

	// RVA: 0xAB6458 Offset: 0xAB2458 VA: 0xAB6458 Slot: 6
	internal virtual void OG(BaseUnit , Action ) { }

	// RVA: 0xAB659C Offset: 0xAB259C VA: 0xAB659C Slot: 7
	internal virtual void YT() { }

	// RVA: 0xAB65B4 Offset: 0xAB25B4 VA: 0xAB65B4 Slot: 8
	internal virtual void Og(bool  = False) { }

	// RVA: 0xAB6628 Offset: 0xAB2628 VA: 0xAB6628 Slot: 9
	internal virtual void OH() { }

	// RVA: 0xAB6664 Offset: 0xAB2664 VA: 0xAB6664 Slot: 10
	internal virtual void Oh() { }

	// RVA: 0xAB6670 Offset: 0xAB2670 VA: 0xAB6670 Slot: 11
	internal virtual void Yt() { }

	// RVA: 0xAB66A0 Offset: 0xAB26A0 VA: 0xAB66A0 Slot: 12
	internal virtual void YU() { }

	// RVA: 0xAB66A4 Offset: 0xAB26A4 VA: 0xAB66A4 Slot: 13
	internal virtual void OI(abi ) { }

	// RVA: 0xAB66A8 Offset: 0xAB26A8 VA: 0xAB66A8 Slot: 14
	internal virtual void Oi() { }

	// RVA: 0xAB66AC Offset: 0xAB26AC VA: 0xAB66AC Slot: 15
	protected virtual void OJ() { }

	// RVA: 0xAB66E0 Offset: 0xAB26E0 VA: 0xAB66E0 Slot: 16
	protected virtual void Yu() { }

	// RVA: 0xAB6788 Offset: 0xAB2788 VA: 0xAB6788 Slot: 17
	protected virtual void Oj(string  = "") { }

	// RVA: 0xAB6BB8 Offset: 0xAB2BB8 VA: 0xAB6BB8 Slot: 18
	protected virtual void YV() { }

	// RVA: 0xAB6D1C Offset: 0xAB2D1C VA: 0xAB6D1C Slot: 19
	protected virtual void OK() { }

	// RVA: 0xAB6D20 Offset: 0xAB2D20 VA: 0xAB6D20 Slot: 20
	protected virtual void Ok() { }

	// RVA: 0xAB68E4 Offset: 0xAB28E4 VA: 0xAB68E4
	private void Yv(string ) { }
}


// Namespace: Adverty.a.C
internal class aCx : IFactory<add, aCw> // TypeDefIndex: 6303
{
	// Fields
	private const int HF = 10;

	// Methods

	// RVA: 0xAB6E94 Offset: 0xAB2E94 VA: 0xAB6E94 Slot: 4
	public add Create(aCw item) { }

	// RVA: 0xAB6248 Offset: 0xAB2248 VA: 0xAB6248
	internal static add uv(int , aCw ) { }

	// RVA: 0xAB6F34 Offset: 0xAB2F34 VA: 0xAB6F34
	private static bool uW() { }

	// RVA: 0xAB6FA8 Offset: 0xAB2FA8 VA: 0xAB6FA8
	private static bool uw() { }

	// RVA: 0xAB702C Offset: 0xAB302C VA: 0xAB702C
	private static bool uX() { }

	// RVA: 0xAB6EA8 Offset: 0xAB2EA8 VA: 0xAB6EA8
	private static add ux(aCw ) { }

	// RVA: 0xAB75A4 Offset: 0xAB35A4 VA: 0xAB75A4
	public void .ctor() { }
}


// Namespace: Adverty.a.C
internal enum aCy // TypeDefIndex: 6304
{
	// Fields
	public int value__; // 0x0
	public const aCy Hf = -1;
	public const aCy HG = 0;
	public const aCy Hg = 1;
	public const aCy HH = 2;
	public const aCy Hh = 3;
	public const aCy HI = 4;
	public const aCy Hi = 5;
}


// Namespace: Adverty.a.E
internal abstract class aEf : add // TypeDefIndex: 6305
{
	// Fields
	protected aCs lu; // 0x60

	// Methods

	// RVA: 0xAB75AC Offset: 0xAB35AC VA: 0xAB75AC
	protected void .ctor(aCw ) { }

	// RVA: 0xAB75B8 Offset: 0xAB35B8 VA: 0xAB75B8 Slot: 15
	protected override void OJ() { }

	// RVA: 0xAB78F0 Offset: 0xAB38F0 VA: 0xAB78F0
	private bool Zy(string ) { }

	// RVA: 0xAB7954 Offset: 0xAB3954 VA: 0xAB7954
	private void ZZ(float ) { }

	// RVA: 0xAB7970 Offset: 0xAB3970 VA: 0xAB7970 Slot: 20
	protected override void Ok() { }

	// RVA: 0xAB7CB0 Offset: 0xAB3CB0 VA: 0xAB7CB0
	private void Zz(Vector2 ) { }

	// RVA: 0xAB7CBC Offset: 0xAB3CBC VA: 0xAB7CBC
	protected void zA(Vector2 ) { }
}


// Namespace: Adverty.a.E
internal class aEq : aEf, abw // TypeDefIndex: 6306
{
	// Fields
	private const float Mp = 5;
	private bool MQ; // 0x68
	private aag Mq; // 0x70
	private Action<float[], bool> MR; // 0x78
	private bool Mr; // 0x80
	private aCf MS; // 0x88
	[CompilerGenerated]
	private aax Ms; // 0x90

	// Methods

	// RVA: 0xAB7D78 Offset: 0xAB3D78 VA: 0xAB7D78
	private bool zS() { }

	// RVA: 0xAB7DB4 Offset: 0xAB3DB4 VA: 0xAB7DB4
	private bool zs() { }

	// RVA: 0xAB7DE0 Offset: 0xAB3DE0 VA: 0xAB7DE0
	private bool zT() { }

	[CompilerGenerated]
	// RVA: 0xAB7E0C Offset: 0xAB3E0C VA: 0xAB7E0C
	public aax zt() { }

	[CompilerGenerated]
	// RVA: 0xAB7E14 Offset: 0xAB3E14 VA: 0xAB7E14
	protected void zU(aax ) { }

	// RVA: 0xAB7E1C Offset: 0xAB3E1C VA: 0xAB7E1C
	private int zu() { }

	// RVA: 0xAB7FA0 Offset: 0xAB3FA0 VA: 0xAB7FA0 Slot: 5
	internal override void Of() { }

	// RVA: 0xAB8134 Offset: 0xAB4134 VA: 0xAB8134 Slot: 6
	internal override void OG(BaseUnit , Action ) { }

	// RVA: 0xAB8378 Offset: 0xAB4378 VA: 0xAB8378 Slot: 13
	internal override void OI(abi ) { }

	// RVA: 0xAB852C Offset: 0xAB452C VA: 0xAB852C Slot: 14
	internal override void Oi() { }

	// RVA: 0xAB8564 Offset: 0xAB4564 VA: 0xAB8564
	private static void .cctor() { }

	// RVA: 0xAB7208 Offset: 0xAB3208 VA: 0xAB7208
	public void .ctor(aCw ) { }

	// RVA: 0xAB85BC Offset: 0xAB45BC VA: 0xAB85BC Slot: 10
	internal override void Oh() { }

	// RVA: 0xAB85D4 Offset: 0xAB45D4 VA: 0xAB85D4
	private void zV() { }

	// RVA: 0xAB8688 Offset: 0xAB4688 VA: 0xAB8688 Slot: 9
	internal override void OH() { }

	// RVA: 0xAB86C8 Offset: 0xAB46C8 VA: 0xAB86C8 Slot: 8
	internal override void Og(bool  = False) { }

	// RVA: 0xAB8750 Offset: 0xAB4750 VA: 0xAB8750 Slot: 19
	protected override void OK() { }

	// RVA: 0xAB8990 Offset: 0xAB4990 VA: 0xAB8990 Slot: 20
	protected override void Ok() { }

	// RVA: 0xAB8C90 Offset: 0xAB4C90 VA: 0xAB8C90
	private void zv() { }

	// RVA: 0xAB8CCC Offset: 0xAB4CCC VA: 0xAB8CCC
	private void zW() { }

	// RVA: 0xAB8DDC Offset: 0xAB4DDC VA: 0xAB8DDC
	private void zw() { }

	// RVA: 0xAB8E3C Offset: 0xAB4E3C VA: 0xAB8E3C
	private void zX(string ) { }

	// RVA: 0xAB8E4C Offset: 0xAB4E4C VA: 0xAB8E4C
	private void zx(IVisible ) { }

	// RVA: 0xAB8FB0 Offset: 0xAB4FB0 VA: 0xAB8FB0
	private void zY(bool ) { }

	// RVA: 0xAB8FE4 Offset: 0xAB4FE4 VA: 0xAB8FE4 Slot: 21
	public void Nv(int[] , Action<float[], bool> ) { }

	// RVA: 0xAB90B0 Offset: 0xAB50B0 VA: 0xAB90B0
	private void zy(float[] ) { }

	// RVA: 0xAB82A4 Offset: 0xAB42A4 VA: 0xAB82A4
	private void zZ() { }

	// RVA: 0xAB90E4 Offset: 0xAB50E4 VA: 0xAB90E4
	private void zz() { }

	// RVA: 0xAB8110 Offset: 0xAB4110 VA: 0xAB8110
	private void aAA() { }
}


// Namespace: Adverty.a.c
internal interface aCz // TypeDefIndex: 6307
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract BaseUnit no();
}


// Namespace: Adverty.a.E
internal class aEg : add // TypeDefIndex: 6308
{
	// Fields
	private aAv lV; // 0x60
	private bool lv; // 0x68
	private bool lW; // 0x69

	// Methods

	// RVA: 0xAB6E9C Offset: 0xAB2E9C VA: 0xAB6E9C
	internal void .ctor(aCw ) { }

	// RVA: 0xAB9120 Offset: 0xAB5120 VA: 0xAB9120 Slot: 10
	internal override void Oh() { }

	// RVA: 0xAB91F0 Offset: 0xAB51F0 VA: 0xAB91F0 Slot: 15
	protected override void OJ() { }

	// RVA: 0xAB92AC Offset: 0xAB52AC VA: 0xAB92AC Slot: 8
	internal override void Og(bool  = False) { }

	// RVA: 0xAB92F4 Offset: 0xAB52F4 VA: 0xAB92F4
	private void za(bool , aAv ) { }
}


// Namespace: Adverty.a.E
internal class aEr : aEf // TypeDefIndex: 6309
{
	// Fields
	[CompilerGenerated]
	private aal MT; // 0x68
	private readonly aag Mt; // 0x70
	private bool MU; // 0x78
	private bool Mu; // 0x79
	private bool MV; // 0x7A

	// Methods

	[CompilerGenerated]
	// RVA: 0xAB93CC Offset: 0xAB53CC VA: 0xAB93CC
	public aal aAa() { }

	[CompilerGenerated]
	// RVA: 0xAB93D4 Offset: 0xAB53D4 VA: 0xAB93D4
	protected void aAB(aal ) { }

	// RVA: 0xAB93DC Offset: 0xAB53DC VA: 0xAB93DC Slot: 5
	internal override void Of() { }

	// RVA: 0xAB9418 Offset: 0xAB5418 VA: 0xAB9418 Slot: 6
	internal override void OG(BaseUnit , Action ) { }

	// RVA: 0xAB97B0 Offset: 0xAB57B0 VA: 0xAB97B0
	private static void .cctor() { }

	// RVA: 0xAB7374 Offset: 0xAB3374 VA: 0xAB7374
	internal void .ctor(aCw ) { }

	// RVA: 0xAB9808 Offset: 0xAB5808 VA: 0xAB9808 Slot: 10
	internal override void Oh() { }

	// RVA: 0xAB992C Offset: 0xAB592C VA: 0xAB992C Slot: 17
	protected override void Oj(string  = "") { }

	// RVA: 0xAB9964 Offset: 0xAB5964 VA: 0xAB9964 Slot: 9
	internal override void OH() { }

	// RVA: 0xAB9A58 Offset: 0xAB5A58 VA: 0xAB9A58 Slot: 8
	internal override void Og(bool  = False) { }

	// RVA: 0xAB9998 Offset: 0xAB5998 VA: 0xAB9998
	private void aAb() { }

	// RVA: 0xAB9A80 Offset: 0xAB5A80 VA: 0xAB9A80 Slot: 19
	protected override void OK() { }

	// RVA: 0xAB9F14 Offset: 0xAB5F14 VA: 0xAB9F14 Slot: 20
	protected override void Ok() { }

	// RVA: 0xAB9674 Offset: 0xAB5674 VA: 0xAB9674
	protected float aAC() { }

	// RVA: 0xABA3C8 Offset: 0xAB63C8 VA: 0xABA3C8
	private void aAc() { }

	// RVA: 0xABA434 Offset: 0xAB6434 VA: 0xABA434
	private void aAD() { }

	// RVA: 0xABA440 Offset: 0xAB6440 VA: 0xABA440
	private void aAd() { }

	// RVA: 0xABA588 Offset: 0xAB6588 VA: 0xABA588
	private void OnTextureUpdateAvailable() { }

	// RVA: 0xABA658 Offset: 0xAB6658 VA: 0xABA658
	private void UpdateTextureFromNative() { }

	// RVA: 0xABA71C Offset: 0xAB671C VA: 0xABA71C
	private void aAE() { }

	// RVA: 0xABA7D0 Offset: 0xAB67D0 VA: 0xABA7D0
	private void aAe() { }

	// RVA: 0xABA83C Offset: 0xAB683C VA: 0xABA83C
	private void aAF() { }

	[CompilerGenerated]
	// RVA: 0xABA940 Offset: 0xAB6940 VA: 0xABA940
	private bool aAf() { }

	[CompilerGenerated]
	// RVA: 0xABA960 Offset: 0xAB6960 VA: 0xABA960
	private bool aAG() { }

	[CompilerGenerated]
	// RVA: 0xABA9EC Offset: 0xAB69EC VA: 0xABA9EC
	private void aAg() { }
}


// Namespace: Adverty.a.d
internal abstract class ade : ace // TypeDefIndex: 6310
{
	// Fields
	[CompilerGenerated]
	private bool kH; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0xABAA90 Offset: 0xAB6A90 VA: 0xABAA90 Slot: 5
	public bool np() { }

	[CompilerGenerated]
	// RVA: 0xABAA98 Offset: 0xAB6A98 VA: 0xABAA98
	protected void YW(bool ) { }

	// RVA: -1 Offset: -1 Slot: 9
	public abstract string nP();

	// RVA: 0xABAAA4 Offset: 0xAB6AA4 VA: 0xABAAA4 Slot: 10
	public virtual void nQ() { }

	// RVA: 0xABAAC8 Offset: 0xAB6AC8 VA: 0xABAAC8 Slot: 11
	public virtual void nq() { }

	// RVA: 0xABAACC Offset: 0xAB6ACC VA: 0xABAACC Slot: 12
	public virtual void nR() { }

	// RVA: 0xABAAD0 Offset: 0xAB6AD0 VA: 0xABAAD0
	protected void .ctor() { }
}


// Namespace: Adverty.a.E
internal class aEh : ade // TypeDefIndex: 6311
{
	// Fields
	private readonly DebugConsoleView lw; // 0x18
	private readonly ConsoleLogView lX; // 0x20
	private readonly ConsoleLogView lx; // 0x28
	private ConsoleLogView lY; // 0x30

	// Methods

	// RVA: 0xABAAD8 Offset: 0xAB6AD8 VA: 0xABAAD8 Slot: 9
	public override string nP() { }

	// RVA: 0xABAB28 Offset: 0xAB6B28 VA: 0xABAB28
	public void .ctor() { }

	// RVA: 0xABAC50 Offset: 0xAB6C50 VA: 0xABAC50 Slot: 11
	public override void nq() { }

	// RVA: 0xABAEB8 Offset: 0xAB6EB8 VA: 0xABAEB8 Slot: 12
	public override void nR() { }

	// RVA: 0xABB084 Offset: 0xAB7084 VA: 0xABB084
	private void zB() { }

	// RVA: 0xABAD88 Offset: 0xAB6D88 VA: 0xABAD88
	private void zb() { }

	// RVA: 0xABB130 Offset: 0xAB7130 VA: 0xABB130
	private void zC(string ) { }
}


// Namespace: Adverty.a.c
internal static class aca // TypeDefIndex: 6312
{
	// Fields
	private static acd HJ; // 0x0
	private static aEi Hj; // 0x8
	private static bool HK; // 0x10

	// Methods

	// RVA: 0xABB150 Offset: 0xAB7150 VA: 0xABB150
	public static void uY() { }

	// RVA: 0xABB248 Offset: 0xAB7248 VA: 0xABB248
	private static void uy() { }

	// RVA: 0xABB444 Offset: 0xAB7444 VA: 0xABB444
	private static void uZ() { }

	// RVA: 0xABB73C Offset: 0xAB773C VA: 0xABB73C
	private static void uz() { }

	// RVA: 0xABB7A0 Offset: 0xAB77A0 VA: 0xABB7A0
	private static void VA() { }

	// RVA: 0xABB898 Offset: 0xAB7898 VA: 0xABB898
	private static void Va(bool ) { }

	// RVA: 0xABBCC0 Offset: 0xAB7CC0 VA: 0xABBCC0
	private static void VB() { }

	// RVA: 0xABBC54 Offset: 0xAB7C54 VA: 0xABBC54
	private static void Vb() { }

	// RVA: 0xABBED0 Offset: 0xAB7ED0 VA: 0xABBED0
	private static void VC() { }
}


// Namespace: Adverty.a.c
internal enum acb // TypeDefIndex: 6313
{
	// Fields
	public int value__; // 0x0
	public const acb Hk = 0;
	public const acb HL = 1;
	public const acb Hl = 2;
}


// Namespace: Adverty.a.c
internal static class acc // TypeDefIndex: 6314
{
	// Fields
	private const string HM = "Arial.ttf";
	private const string Hm = "#000";
	private const string HN = "#CCCCFF4D";
	private const string Hn = "#E6E6E64D";
	private const string HO = "#FFFFFF1A";
	private const string Ho = "#808080FF";
	private const string HP = "#E6E6E6FF";
	private const string Hp = "#F00";
	private const string HQ = "#FFF";
	private const string Hq = "#0F0";
	private const string HR = "#FF0";
	public const int Hr = 32;
	public const int HS = 32;
	public const int Hs = 12;
	public const int HT = 80;
	public const int Ht = 80;
	public const int HU = 64;
	public const int Hu = 64;
	public const int HV = 32;
	public const int Hv = 5;
	public const int HW = 5;
	public const int Hw = 5;
	public const int HX = 5;
	public const int Hx = 5;
	public const int HY = 15;
	public const float Hy = 4.4;
	public const float HZ = 7;
	public const double Hz = 1.5;
	public const double hA = 0.15;
	public static readonly Color ha; // 0x0
	public static readonly Color hB; // 0x10
	public static readonly Color hb; // 0x20
	public static readonly Color hC; // 0x30
	public static readonly Color hc; // 0x40
	public static readonly Color hD; // 0x50
	public static readonly Color hd; // 0x60
	public static readonly Color hE; // 0x70
	public static readonly Color he; // 0x80
	public static readonly Color hF; // 0x90
	public const int hf = 3;
	public const int hG = 30;
	public const int hg = 1000;
	public static readonly Font hH; // 0xA0
	public static readonly List<int> hh; // 0xA8

	// Methods

	// RVA: 0xABBF8C Offset: 0xAB7F8C VA: 0xABBF8C
	private static void .cctor() { }

	// RVA: 0xABC330 Offset: 0xAB8330 VA: 0xABC330
	private static Color Vc(string ) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class aEi.A // TypeDefIndex: 6315
{
	// Fields
	public ace Mv; // 0x10
	public DebugButton MW; // 0x18

	// Methods

	// RVA: 0xABCAA0 Offset: 0xAB8AA0 VA: 0xABCAA0
	public void .ctor() { }

	// RVA: 0xABCE34 Offset: 0xAB8E34 VA: 0xABCE34
	internal void aAH() { }
}


// Namespace: Adverty.a.E
internal class aEi : ade // TypeDefIndex: 6316
{
	// Fields
	[CompilerGenerated]
	private Action ly; // 0x18
	private const string lZ = "Debug Panel";
	private const string lz = "SDK version: {0}; API version: {1}";
	private readonly DebugCanvasView MA; // 0x20
	private readonly List<ace> Ma; // 0x28

	// Methods

	[CompilerGenerated]
	// RVA: 0xABB6A0 Offset: 0xAB76A0 VA: 0xABB6A0
	public void zc(Action ) { }

	[CompilerGenerated]
	// RVA: 0xABC374 Offset: 0xAB8374 VA: 0xABC374
	public void zD(Action ) { }

	// RVA: 0xABC410 Offset: 0xAB8410 VA: 0xABC410 Slot: 9
	public override string nP() { }

	// RVA: 0xABB52C Offset: 0xAB752C VA: 0xABB52C
	public void .ctor() { }

	// RVA: 0xABC5E0 Offset: 0xAB85E0 VA: 0xABC5E0 Slot: 11
	public override void nq() { }

	// RVA: 0xABC710 Offset: 0xAB8710 VA: 0xABC710 Slot: 12
	public override void nR() { }

	// RVA: 0xABC70C Offset: 0xAB870C VA: 0xABC70C
	private void zd() { }

	// RVA: 0xABC840 Offset: 0xAB8840 VA: 0xABC840
	private void zE() { }

	// RVA: 0xABC47C Offset: 0xAB847C VA: 0xABC47C
	private void ze() { }

	// RVA: 0xABC90C Offset: 0xAB890C VA: 0xABC90C
	private void zF(ace ) { }

	// RVA: 0xABCC64 Offset: 0xAB8C64 VA: 0xABCC64
	private static void zf(ace , DebugButton ) { }
}


// Namespace: Adverty.a.c
internal class acd // TypeDefIndex: 6317
{
	// Fields
	[CompilerGenerated]
	private Action hI; // 0x10
	[CompilerGenerated]
	private Action hi; // 0x18
	protected acb hJ; // 0x20
	private int hj; // 0x24
	private int hK; // 0x28

	// Methods

	[CompilerGenerated]
	// RVA: 0xABB3A8 Offset: 0xAB73A8 VA: 0xABB3A8
	public void VD(Action ) { }

	[CompilerGenerated]
	// RVA: 0xABBB1C Offset: 0xAB7B1C VA: 0xABBB1C
	public void Vd(Action ) { }

	[CompilerGenerated]
	// RVA: 0xABBBB8 Offset: 0xAB7BB8 VA: 0xABBBB8
	public void VE(Action ) { }

	[CompilerGenerated]
	// RVA: 0xABBE34 Offset: 0xAB7E34 VA: 0xABBE34
	public void Ve(Action ) { }

	// RVA: 0xABB31C Offset: 0xAB731C VA: 0xABB31C
	public void .ctor() { }

	// RVA: 0xABCE40 Offset: 0xAB8E40 VA: 0xABCE40
	private void VF(int ) { }

	// RVA: 0xABB794 Offset: 0xAB7794 VA: 0xABB794
	public void Vf() { }

	// RVA: 0xABBF20 Offset: 0xAB7F20 VA: 0xABBF20
	public void VG() { }

	// RVA: 0xABCE78 Offset: 0xAB8E78 VA: 0xABCE78
	protected void Vg() { }

	// RVA: 0xABCE84 Offset: 0xAB8E84 VA: 0xABCE84 Slot: 4
	protected virtual void VH() { }

	// RVA: 0xABCFE8 Offset: 0xAB8FE8 VA: 0xABCFE8 Slot: 5
	protected virtual void Vh() { }

	// RVA: 0xABCF3C Offset: 0xAB8F3C VA: 0xABCF3C
	protected void VI() { }

	// RVA: 0xABD0A8 Offset: 0xAB90A8 VA: 0xABD0A8
	protected void Vi() { }

	// RVA: 0xABD0C0 Offset: 0xAB90C0 VA: 0xABD0C0 Slot: 6
	protected virtual void VJ() { }
}


// Namespace: Adverty.a.c
internal interface ace // TypeDefIndex: 6318
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string nP();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract bool np();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void nQ();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void nq();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void nR();
}


// Namespace: Adverty.a.E
internal class aEj : ade // TypeDefIndex: 6319
{
	// Methods

	// RVA: 0xABD0D4 Offset: 0xAB90D4 VA: 0xABD0D4 Slot: 9
	public override string nP() { }

	// RVA: 0xABC460 Offset: 0xAB8460 VA: 0xABC460
	public void .ctor() { }

	// RVA: 0xABD124 Offset: 0xAB9124 VA: 0xABD124 Slot: 10
	public override void nQ() { }

	// RVA: 0xABD16C Offset: 0xAB916C VA: 0xABD16C
	private static void zG() { }

	// RVA: 0xABD284 Offset: 0xAB9284 VA: 0xABD284
	private static void zg() { }

	// RVA: 0xABD384 Offset: 0xAB9384 VA: 0xABD384
	private static BaseUnit[] zH() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class acf.A // TypeDefIndex: 6320
{
	// Fields
	public static readonly acf.A kh; // 0x0
	public static Func<FileInfo, bool> kI; // 0x8

	// Methods

	// RVA: 0xABE4FC Offset: 0xABA4FC VA: 0xABE4FC
	private static void .cctor() { }

	// RVA: 0xABE558 Offset: 0xABA558 VA: 0xABE558
	public void .ctor() { }

	// RVA: 0xABE560 Offset: 0xABA560 VA: 0xABE560
	internal bool Yw(FileInfo ) { }
}


// Namespace: Adverty.a.c
internal static class acf // TypeDefIndex: 6321
{
	// Fields
	private const string hk = "Adverty";
	private const string hL = "logFile_";
	private const string hl = ".log";
	private static readonly char[] hM; // 0x0
	private static readonly string hm; // 0x8
	private const string hN = "dd-MM-yyyy HH-mm-ss";
	private const string hn = "Sending file doesn\'t exist";
	[CompilerGenerated]
	private static string hO; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0xABD3E8 Offset: 0xAB93E8 VA: 0xABD3E8
	internal static string Vj() { }

	[CompilerGenerated]
	// RVA: 0xABD440 Offset: 0xAB9440 VA: 0xABD440
	private static void VK(string ) { }

	// RVA: 0xABD49C Offset: 0xAB949C VA: 0xABD49C
	private static void .cctor() { }

	// RVA: 0xABD5E0 Offset: 0xAB95E0 VA: 0xABD5E0
	private static string Vk(string ) { }

	// RVA: 0xABD670 Offset: 0xAB9670 VA: 0xABD670
	internal static string VL() { }

	// RVA: 0xABDA9C Offset: 0xAB9A9C VA: 0xABDA9C
	internal static string Vl() { }

	// RVA: 0xABD9A4 Offset: 0xAB99A4 VA: 0xABD9A4
	internal static string VM() { }

	// RVA: 0xABE094 Offset: 0xABA094 VA: 0xABE094
	internal static void Vm(string ) { }

	// RVA: 0xABE2F4 Offset: 0xABA2F4 VA: 0xABE2F4
	internal static bool VN(long , ref bool ) { }

	// RVA: 0xABD8A8 Offset: 0xAB98A8 VA: 0xABD8A8
	private static string Vn() { }

	// RVA: 0xABDBE0 Offset: 0xAB9BE0 VA: 0xABDBE0
	private static string VO() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class acg.A // TypeDefIndex: 6322
{
	// Fields
	public static readonly acg.A ki; // 0x0
	public static Action kJ; // 0x8

	// Methods

	// RVA: 0xABED18 Offset: 0xABAD18 VA: 0xABED18
	private static void .cctor() { }

	// RVA: 0xABED74 Offset: 0xABAD74 VA: 0xABED74
	public void .ctor() { }

	// RVA: 0xABED7C Offset: 0xABAD7C VA: 0xABED7C
	internal void YX() { }
}


// Namespace: Adverty.a.c
internal static class acg // TypeDefIndex: 6323
{
	// Fields
	private const int ho = 125;
	private static byte[] hP; // 0x0

	// Methods

	// RVA: 0xABE5E0 Offset: 0xABA5E0 VA: 0xABE5E0
	public static void Vo(string ) { }

	// RVA: 0xABE878 Offset: 0xABA878 VA: 0xABE878
	private static void VP(IAsyncResult ) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ach.A // TypeDefIndex: 6324
{
	// Fields
	public string kj; // 0x10

	// Methods

	// RVA: 0xABEFB0 Offset: 0xABAFB0 VA: 0xABEFB0
	public void .ctor() { }

	// RVA: 0xABEFB8 Offset: 0xABAFB8 VA: 0xABEFB8
	internal bool Yx(string ) { }
}


// Namespace: Adverty.a.c
internal static class ach // TypeDefIndex: 6325
{
	// Fields
	private const string hp = "OnRenderImage()";
	private static readonly List<string> hQ; // 0x0

	// Methods

	// RVA: 0xABEDC8 Offset: 0xABADC8 VA: 0xABEDC8
	private static void .cctor() { }

	// RVA: 0xABEEAC Offset: 0xABAEAC VA: 0xABEEAC
	internal static bool Vp(string ) { }
}


// Namespace: Adverty.AdDebug
[Serializable]
internal struct Log // TypeDefIndex: 6326
{
	// Fields
	public string level; // 0x0
	public string logger; // 0x8
	public string value; // 0x10
	public string createdAt; // 0x18
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class aci.A // TypeDefIndex: 6327
{
	// Fields
	public static readonly aci.A kK; // 0x0
	public static Action<bool> kk; // 0x8
	public static Func<bool> kL; // 0x10

	// Methods

	// RVA: 0xAC0F18 Offset: 0xABCF18 VA: 0xAC0F18
	private static void .cctor() { }

	// RVA: 0xAC0F74 Offset: 0xABCF74 VA: 0xAC0F74
	public void .ctor() { }

	// RVA: 0xAC0F7C Offset: 0xABCF7C VA: 0xAC0F7C
	internal void YY(bool ) { }

	// RVA: 0xAC0FE0 Offset: 0xABCFE0 VA: 0xAC0FE0
	internal bool Yy() { }
}


// Namespace: Adverty.a.c
internal static class aci // TypeDefIndex: 6328
{
	// Fields
	private static readonly LogLevel hq; // 0x0
	private static string hR; // 0x8
	private static string hr; // 0x10
	private static aag hS; // 0x18
	private static bool hs; // 0x20
	private static bool hT; // 0x21
	private const float ht = 60;
	private const string hU = "\nStacktrace:\n";
	private const string hu = "Adverty";
	private const string hV = "Unity SDK";
	private const string hv = ",{";
	private const int hW = 2;
	private static Func<bool> hw; // 0x28
	private static string[] hX; // 0x30

	// Methods

	// RVA: 0xABEFD4 Offset: 0xABAFD4 VA: 0xABEFD4
	private static void .cctor() { }

	// RVA: 0xABF020 Offset: 0xABB020 VA: 0xABF020
	internal static void VQ() { }

	// RVA: 0xABF490 Offset: 0xABB490 VA: 0xABF490
	internal static void Vq() { }

	// RVA: 0xABF730 Offset: 0xABB730 VA: 0xABF730
	private static void VR(string , string , LogType ) { }

	// RVA: 0xABF8E8 Offset: 0xABB8E8 VA: 0xABF8E8
	private static LogLevel Vr(LogType ) { }

	// RVA: 0xABF908 Offset: 0xABB908 VA: 0xABF908
	private static bool VS(string ) { }

	// RVA: 0xABF974 Offset: 0xABB974 VA: 0xABF974
	private static void Vs() { }

	// RVA: 0xABFC18 Offset: 0xABBC18 VA: 0xABFC18
	private static void VT() { }

	// RVA: 0xABFAB8 Offset: 0xABBAB8 VA: 0xABFAB8
	private static void Vt() { }

	// RVA: 0xABFCA0 Offset: 0xABBCA0 VA: 0xABFCA0
	private static void VU(string , string , string , LogLevel ) { }

	// RVA: 0xAB6D24 Offset: 0xAB2D24 VA: 0xAB6D24
	internal static void Vu(string , string , string , LogLevel ) { }

	// RVA: 0xABF5A8 Offset: 0xABB5A8 VA: 0xABF5A8
	private static bool VV() { }

	// RVA: 0xAC0BBC Offset: 0xABCBBC VA: 0xAC0BBC
	private static bool Vv(string , bool  = True) { }

	// RVA: 0xAC0928 Offset: 0xABC928 VA: 0xAC0928
	private static bool VW(List<Log> , bool  = True) { }

	// RVA: 0xAC02D4 Offset: 0xABC2D4 VA: 0xAC02D4
	private static bool Vw(string ) { }

	// RVA: 0xAC00F8 Offset: 0xABC0F8 VA: 0xAC00F8
	private static bool VX() { }

	// RVA: 0xAC0E18 Offset: 0xABCE18 VA: 0xAC0E18
	private static bool Vx() { }

	// RVA: 0xAC0708 Offset: 0xABC708 VA: 0xAC0708
	private static void VY() { }

	// RVA: 0xAC0050 Offset: 0xABC050 VA: 0xAC0050
	private static string Vy(LogLevel , string ) { }
}


// Namespace: Adverty.AdDebug
[Flags]
public enum LogLevel // TypeDefIndex: 6329
{
	// Fields
	public int value__; // 0x0
	public const LogLevel None = 0;
	public const LogLevel Debug = 1;
	public const LogLevel Warning = 2;
	public const LogLevel Error = 4;
}


// Namespace: Adverty.a.c
internal static class acj // TypeDefIndex: 6330
{
	// Fields
	private const int hx = 131072;
	private static int hY; // 0x0
	private static bool hy; // 0x4
	[CompilerGenerated]
	private static Action<bool> hZ; // 0x8

	// Methods

	[CompilerGenerated]
	// RVA: 0xABF39C Offset: 0xABB39C VA: 0xABF39C
	internal static void VZ(Action<bool> ) { }

	[CompilerGenerated]
	// RVA: 0xAC1070 Offset: 0xABD070 VA: 0xAC1070
	internal static void Vz(Action<bool> ) { }

	// RVA: 0xABE4A4 Offset: 0xABA4A4 VA: 0xABE4A4
	internal static int vA() { }

	// RVA: 0xAC1164 Offset: 0xABD164 VA: 0xAC1164
	internal static void va(int ) { }

	// RVA: 0xAC08D0 Offset: 0xABC8D0 VA: 0xAC08D0
	internal static bool vB() { }

	// RVA: 0xABFA28 Offset: 0xABBA28 VA: 0xABFA28
	internal static void vb(bool ) { }

	// RVA: 0xAC11F0 Offset: 0xABD1F0 VA: 0xAC11F0
	private static void .cctor() { }
}


// Namespace: Adverty.AdDebug
public class VRInputModule : BaseInputModule // TypeDefIndex: 6331
{
	// Fields
	private VRButton hz; // 0x58
	private Vector2 IA; // 0x60
	private PointerEventData Ia; // 0x68

	// Methods

	// RVA: 0xAC11F8 Offset: 0xABD1F8 VA: 0xAC11F8 Slot: 6
	protected override void Start() { }

	// RVA: 0xAC1264 Offset: 0xABD264 VA: 0xAC1264 Slot: 17
	public override void Process() { }

	// RVA: 0xAC137C Offset: 0xABD37C VA: 0xAC137C
	private void vC() { }

	// RVA: 0xAC1420 Offset: 0xABD420 VA: 0xAC1420
	private void vc() { }

	// RVA: 0xAC1570 Offset: 0xABD570 VA: 0xAC1570
	private void vD() { }

	// RVA: 0xAC15F4 Offset: 0xABD5F4 VA: 0xAC15F4
	public void .ctor() { }
}


// Namespace: Adverty.AdDebug
internal class VRCursor : MonoBehaviour // TypeDefIndex: 6332
{
	// Methods

	// RVA: 0xAC15FC Offset: 0xABD5FC VA: 0xAC15FC
	protected void Update() { }

	// RVA: 0xAC17A8 Offset: 0xABD7A8 VA: 0xAC17A8
	public void .ctor() { }
}


// Namespace: Adverty.AdDebug.Views
internal abstract class BaseDebugView : MonoBehaviour, acl // TypeDefIndex: 6333
{
	// Methods

	// RVA: 0xAC17B0 Offset: 0xABD7B0 VA: 0xAC17B0 Slot: 6
	public virtual void nS() { }

	// RVA: 0xAC17D4 Offset: 0xABD7D4 VA: 0xAC17D4 Slot: 7
	public virtual void ns() { }

	// RVA: 0xAC17F8 Offset: 0xABD7F8 VA: 0xAC17F8
	protected void .ctor() { }
}


// Namespace: Adverty.AdDebug.Views
internal class CollapsedConsoleView : ConsoleLogView // TypeDefIndex: 6334
{
	// Methods

	// RVA: 0xAC1800 Offset: 0xABD800 VA: 0xAC1800 Slot: 8
	public override int OQ() { }

	// RVA: 0xAC1808 Offset: 0xABD808 VA: 0xAC1808
	public void .ctor() { }
}


// Namespace: Adverty.AdDebug.Views
internal abstract class ConsoleLogView : BaseDebugView // TypeDefIndex: 6335
{
	// Fields
	private VerticalLayoutGroup MB; // 0x20
	protected LinkedList<Text> Mb; // 0x28

	// Methods

	// RVA: -1 Offset: -1 Slot: 8
	public abstract int OQ();

	// RVA: 0xAC180C Offset: 0xABD80C VA: 0xAC180C
	protected void .ctor() { }

	// RVA: 0xAC188C Offset: 0xABD88C VA: 0xAC188C
	public void zh(VerticalLayoutGroup ) { }

	// RVA: 0xAC1894 Offset: 0xABD894 VA: 0xAC1894 Slot: 9
	public virtual void Oq(string[] ) { }

	// RVA: 0xAC1C04 Offset: 0xABDC04 VA: 0xAC1C04 Slot: 10
	public virtual void OR(string ) { }

	// RVA: 0xAC1CE8 Offset: 0xABDCE8 VA: 0xAC1CE8 Slot: 11
	protected virtual void Or() { }

	// RVA: 0xAC1B84 Offset: 0xABDB84 VA: 0xAC1B84
	protected static void zI(LinkedListNode<Text> , string ) { }

	// RVA: 0xAC19FC Offset: 0xABD9FC VA: 0xAC19FC
	private LinkedListNode<Text> zi() { }

	// RVA: 0xAC1C88 Offset: 0xABDC88 VA: 0xAC1C88
	protected bool zJ() { }
}


// Namespace: Adverty.AdDebug.Views
internal class DebugButton : Button // TypeDefIndex: 6336
{
	// Fields
	[CompilerGenerated]
	private Image IB; // 0x108
	[CompilerGenerated]
	private Text Ib; // 0x110
	protected Color IC; // 0x118
	protected bool Ic; // 0x128

	// Methods

	[CompilerGenerated]
	// RVA: 0xAC1DB8 Offset: 0xABDDB8 VA: 0xAC1DB8
	public Image vd() { }

	[CompilerGenerated]
	// RVA: 0xAC1DC0 Offset: 0xABDDC0 VA: 0xAC1DC0
	protected void vE(Image ) { }

	[CompilerGenerated]
	// RVA: 0xAC1DC8 Offset: 0xABDDC8 VA: 0xAC1DC8
	public Text ve() { }

	[CompilerGenerated]
	// RVA: 0xAC1DD0 Offset: 0xABDDD0 VA: 0xAC1DD0
	protected void vF(Text ) { }

	// RVA: 0xAC1DD8 Offset: 0xABDDD8 VA: 0xAC1DD8 Slot: 6
	protected override void Start() { }

	// RVA: 0xAC1E14 Offset: 0xABDE14 VA: 0xAC1E14
	public void vf(Image , Text ) { }

	// RVA: 0xAC1E24 Offset: 0xABDE24 VA: 0xAC1E24 Slot: 43
	public virtual void nr() { }

	// RVA: 0xAC1E48 Offset: 0xABDE48 VA: 0xAC1E48 Slot: 44
	public virtual void vG() { }

	// RVA: 0xABCD74 Offset: 0xAB8D74 VA: 0xABCD74
	public void vg(bool ) { }

	// RVA: 0xAC1E6C Offset: 0xABDE6C VA: 0xAC1E6C
	public void .ctor() { }
}


// Namespace: Adverty.AdDebug.Views
internal class DebugCanvasView : BaseDebugView // TypeDefIndex: 6337
{
	// Fields
	[CompilerGenerated]
	private Action MC; // 0x20
	[CompilerGenerated]
	private RectTransform Mc; // 0x28
	protected Canvas MD; // 0x30
	private Button Md; // 0x38
	private Text ME; // 0x40

	// Methods

	[CompilerGenerated]
	// RVA: 0xABC670 Offset: 0xAB8670 VA: 0xABC670
	public void zj(Action ) { }

	[CompilerGenerated]
	// RVA: 0xABC7A4 Offset: 0xAB87A4 VA: 0xABC7A4
	public void zK(Action ) { }

	[CompilerGenerated]
	// RVA: 0xABCAA8 Offset: 0xAB8AA8 VA: 0xABCAA8
	public RectTransform zk() { }

	[CompilerGenerated]
	// RVA: 0xAC1E74 Offset: 0xABDE74 VA: 0xAC1E74
	private void zL(RectTransform ) { }

	// RVA: 0xAC1E7C Offset: 0xABDE7C VA: 0xAC1E7C Slot: 8
	public virtual void OS(Canvas , Button , Text , RectTransform ) { }

	// RVA: 0xAC1E90 Offset: 0xABDE90 VA: 0xAC1E90 Slot: 6
	public override void nS() { }

	// RVA: 0xAC1F8C Offset: 0xABDF8C VA: 0xAC1F8C Slot: 7
	public override void ns() { }

	// RVA: 0xABC8E8 Offset: 0xAB88E8 VA: 0xABC8E8
	public void zl(string ) { }

	// RVA: 0xAC2024 Offset: 0xABE024 VA: 0xAC2024 Slot: 9
	protected virtual void Start() { }

	// RVA: 0xAC1F30 Offset: 0xABDF30 VA: 0xAC1F30
	private void UpdateLayout() { }

	// RVA: 0xAC2028 Offset: 0xABE028 VA: 0xAC2028
	private void zM() { }

	// RVA: 0xAC2034 Offset: 0xABE034 VA: 0xAC2034
	public void .ctor() { }
}


// Namespace: Adverty.AdDebug.Views
internal class DebugConsoleView : BaseDebugView // TypeDefIndex: 6338
{
	// Fields
	private DebugButton Me; // 0x20
	private Text MF; // 0x28
	[CompilerGenerated]
	private Action Mf; // 0x30

	// Methods

	[CompilerGenerated]
	// RVA: 0xABAE1C Offset: 0xAB6E1C VA: 0xABAE1C
	public void zm(Action ) { }

	[CompilerGenerated]
	// RVA: 0xABAFE8 Offset: 0xAB6FE8 VA: 0xABAFE8
	public void zN(Action ) { }

	// RVA: 0xAC203C Offset: 0xABE03C VA: 0xAC203C
	public void zn(DebugButton ) { }

	// RVA: 0xAC20C0 Offset: 0xABE0C0 VA: 0xAC20C0 Slot: 6
	public override void nS() { }

	// RVA: 0xAC2170 Offset: 0xABE170 VA: 0xAC2170 Slot: 7
	public override void ns() { }

	// RVA: 0xAC2220 Offset: 0xABE220 VA: 0xAC2220
	private void zO() { }

	// RVA: 0xAC2304 Offset: 0xABE304 VA: 0xAC2304
	public void .ctor() { }
}


// Namespace: Adverty.a.c
internal static class ack // TypeDefIndex: 6339
{
	// Fields
	[CompilerGenerated]
	private static DebugCanvasView ID; // 0x0
	[CompilerGenerated]
	private static DebugConsoleView Id; // 0x8
	[CompilerGenerated]
	private static CollapsedConsoleView IE; // 0x10
	[CompilerGenerated]
	private static ExpandedConsoleView Ie; // 0x18

	// Methods

	[CompilerGenerated]
	// RVA: 0xAC230C Offset: 0xABE30C VA: 0xAC230C
	public static DebugCanvasView vH() { }

	[CompilerGenerated]
	// RVA: 0xAC2364 Offset: 0xABE364 VA: 0xAC2364
	private static void vh(DebugCanvasView ) { }

	[CompilerGenerated]
	// RVA: 0xAC23C0 Offset: 0xABE3C0 VA: 0xAC23C0
	public static DebugConsoleView vI() { }

	[CompilerGenerated]
	// RVA: 0xAC2418 Offset: 0xABE418 VA: 0xAC2418
	private static void vi(DebugConsoleView ) { }

	[CompilerGenerated]
	// RVA: 0xAC2474 Offset: 0xABE474 VA: 0xAC2474
	public static CollapsedConsoleView vJ() { }

	[CompilerGenerated]
	// RVA: 0xAC24CC Offset: 0xABE4CC VA: 0xAC24CC
	private static void vj(CollapsedConsoleView ) { }

	[CompilerGenerated]
	// RVA: 0xAC2528 Offset: 0xABE528 VA: 0xAC2528
	public static ExpandedConsoleView vK() { }

	[CompilerGenerated]
	// RVA: 0xAC2580 Offset: 0xABE580 VA: 0xAC2580
	private static void vk(ExpandedConsoleView ) { }

	// RVA: 0xAC25DC Offset: 0xABE5DC VA: 0xAC25DC
	private static void .cctor() { }

	// RVA: 0xABCAB0 Offset: 0xAB8AB0 VA: 0xABCAB0
	public static DebugButton vL(GameObject , string ) { }
}


// Namespace: Adverty.AdDebug.Views
internal class ExpandedConsoleView : ConsoleLogView // TypeDefIndex: 6340
{
	// Fields
	protected ScrollRect Mw; // 0x30

	// Methods

	// RVA: 0xAC2B00 Offset: 0xABEB00 VA: 0xAC2B00 Slot: 8
	public override int OQ() { }

	// RVA: 0xAC2B08 Offset: 0xABEB08 VA: 0xAC2B08
	public void aAh(ScrollRect ) { }

	// RVA: 0xAC2B10 Offset: 0xABEB10 VA: 0xAC2B10 Slot: 9
	public override void Oq(string[] ) { }

	// RVA: 0xAC2B38 Offset: 0xABEB38 VA: 0xAC2B38 Slot: 11
	protected override void Or() { }

	// RVA: 0xAC2B8C Offset: 0xABEB8C VA: 0xAC2B8C Slot: 10
	public override void OR(string ) { }

	// RVA: 0xAC2BFC Offset: 0xABEBFC VA: 0xAC2BFC
	public void .ctor() { }
}


// Namespace: Adverty.a.c
internal interface acl // TypeDefIndex: 6341
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void nS();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void ns();
}


// Namespace: Adverty.AdDebug.Views
internal class VRButton : DebugButton // TypeDefIndex: 6342
{
	// Fields
	[CompilerGenerated]
	private Action kl; // 0x130
	private DateTime kM; // 0x138
	private DateTime km; // 0x140
	private bool kN; // 0x148

	// Methods

	[CompilerGenerated]
	// RVA: 0xAC2C00 Offset: 0xABEC00 VA: 0xAC2C00
	public void YZ(Action ) { }

	[CompilerGenerated]
	// RVA: 0xAC2CA0 Offset: 0xABECA0 VA: 0xAC2CA0
	public void Yz(Action ) { }

	// RVA: 0xAC15EC Offset: 0xABD5EC VA: 0xAC15EC
	public void yA() { }

	// RVA: 0xAC15F0 Offset: 0xABD5F0 VA: 0xAC15F0
	public void ya() { }

	// RVA: 0xAC2EB8 Offset: 0xABEEB8 VA: 0xAC2EB8
	private void StartClick() { }

	// RVA: 0xAC2D40 Offset: 0xABED40 VA: 0xAC2D40
	private void yB() { }

	// RVA: 0xAC2F78 Offset: 0xABEF78 VA: 0xAC2F78
	private void yb() { }

	// RVA: 0xAC2E48 Offset: 0xABEE48 VA: 0xAC2E48
	private void yC() { }

	// RVA: 0xAC3034 Offset: 0xABF034 VA: 0xAC3034
	private void yc() { }

	// RVA: 0xAC30AC Offset: 0xABF0AC VA: 0xAC30AC
	private void yD() { }

	// RVA: 0xAC3114 Offset: 0xABF114 VA: 0xAC3114 Slot: 43
	public override void nr() { }

	// RVA: 0xAC311C Offset: 0xABF11C VA: 0xAC311C
	public void .ctor() { }
}


// Namespace: Adverty.AdDebug.Views
internal class VRCanvasView : DebugCanvasView // TypeDefIndex: 6343
{
	// Fields
	private RectTransform MX; // 0x48

	// Methods

	// RVA: 0xAC3124 Offset: 0xABF124 VA: 0xAC3124 Slot: 8
	public override void OS(Canvas , Button , Text , RectTransform ) { }

	// RVA: 0xAC31BC Offset: 0xABF1BC VA: 0xAC31BC Slot: 6
	public override void nS() { }

	// RVA: 0xAC34B4 Offset: 0xABF4B4 VA: 0xAC34B4
	protected void Update() { }

	// RVA: 0xAC335C Offset: 0xABF35C VA: 0xAC335C
	private void aAI() { }

	// RVA: 0xAC34DC Offset: 0xABF4DC VA: 0xAC34DC
	private void aAi() { }

	// RVA: 0xAC38DC Offset: 0xABF8DC VA: 0xAC38DC
	public void .ctor() { }
}


// Namespace: Adverty.a.d
internal class adf : aco // TypeDefIndex: 6344
{
	// Methods

	// RVA: 0xAC2AAC Offset: 0xABEAAC VA: 0xAC2AAC
	public static aco yd() { }

	// RVA: 0xAC38EC Offset: 0xABF8EC VA: 0xAC38EC Slot: 4
	public acl ny(GameObject ) { }

	// RVA: 0xAC38F4 Offset: 0xABF8F4 VA: 0xAC38F4
	private static CollapsedConsoleView yE(GameObject ) { }

	// RVA: 0xAC38E4 Offset: 0xABF8E4 VA: 0xAC38E4
	public void .ctor() { }
}


// Namespace: Adverty.a.d
internal class adg : aco // TypeDefIndex: 6345
{
	// Methods

	// RVA: 0xAC29D0 Offset: 0xABE9D0 VA: 0xAC29D0
	public static aco ye() { }

	// RVA: 0xAC3C00 Offset: 0xABFC00 VA: 0xAC3C00 Slot: 5
	public virtual acl ny(GameObject ) { }

	// RVA: 0xAC3ECC Offset: 0xABFECC VA: 0xAC3ECC Slot: 6
	protected virtual Canvas OL(GameObject ) { }

	// RVA: 0xAC4170 Offset: 0xAC0170 VA: 0xAC4170 Slot: 7
	protected virtual CanvasScaler Ol(GameObject ) { }

	// RVA: 0xAC41C0 Offset: 0xAC01C0 VA: 0xAC41C0
	protected static GameObject yF(Canvas ) { }

	// RVA: 0xAC3E30 Offset: 0xABFE30 VA: 0xAC3E30
	protected acl yf(Canvas ) { }

	// RVA: 0xAC4C88 Offset: 0xAC0C88 VA: 0xAC4C88 Slot: 8
	protected virtual DebugCanvasView OM(GameObject ) { }

	// RVA: 0xAC49DC Offset: 0xAC09DC VA: 0xAC49DC
	private static Button yG(GameObject ) { }

	// RVA: 0xAC43FC Offset: 0xAC03FC VA: 0xAC43FC
	private static RectTransform yg(GameObject ) { }

	// RVA: 0xAC47DC Offset: 0xAC07DC VA: 0xAC47DC
	private static Text yH(GameObject ) { }

	// RVA: 0xAC3BF8 Offset: 0xABFBF8 VA: 0xAC3BF8
	public void .ctor() { }
}


// Namespace: Adverty.a.d
internal class adh : aco // TypeDefIndex: 6346
{
	// Methods

	// RVA: 0xAC2A58 Offset: 0xABEA58 VA: 0xAC2A58
	public static aco yh() { }

	// RVA: 0xAC4CE0 Offset: 0xAC0CE0 VA: 0xAC4CE0 Slot: 4
	public acl ny(GameObject ) { }

	// RVA: 0xAC4CE8 Offset: 0xAC0CE8 VA: 0xAC4CE8
	private static DebugConsoleView yI(GameObject ) { }

	// RVA: 0xAC4F78 Offset: 0xAC0F78 VA: 0xAC4F78
	private static DebugButton yi(GameObject ) { }

	// RVA: 0xAC4CD8 Offset: 0xAC0CD8 VA: 0xAC4CD8
	public void .ctor() { }
}


// Namespace: Adverty.a.d
internal class adi : acn // TypeDefIndex: 6347
{
	// Fields
	[CompilerGenerated]
	private Text kn; // 0x10
	protected Material kO; // 0x18
	protected Material ko; // 0x20

	// Methods

	[CompilerGenerated]
	// RVA: 0xAC5230 Offset: 0xAC1230 VA: 0xAC5230 Slot: 5
	public Text nt() { }

	[CompilerGenerated]
	// RVA: 0xAC5238 Offset: 0xAC1238 VA: 0xAC5238
	private void yJ(Text ) { }

	// RVA: 0xAC5240 Offset: 0xAC1240 VA: 0xAC5240 Slot: 4
	public Camera nT() { }

	// RVA: 0xAC5318 Offset: 0xAC1318 VA: 0xAC5318 Slot: 6
	public GameObject nU(string , GameObject ) { }

	// RVA: 0xAC544C Offset: 0xAC144C VA: 0xAC544C Slot: 12
	public VerticalLayoutGroup nX(GameObject ) { }

	// RVA: 0xAC57DC Offset: 0xAC17DC VA: 0xAC57DC Slot: 14
	public VerticalLayoutGroup nY(GameObject ) { }

	// RVA: 0xAC5D14 Offset: 0xAC1D14 VA: 0xAC5D14 Slot: 15
	protected virtual Scrollbar yj(GameObject ) { }

	// RVA: 0xAC6380 Offset: 0xAC2380 VA: 0xAC6380 Slot: 16
	public virtual void nu(GameObject ) { }

	// RVA: 0xAC63D0 Offset: 0xAC23D0 VA: 0xAC63D0 Slot: 8
	public void nV(GameObject ) { }

	// RVA: 0xAC6488 Offset: 0xAC2488 VA: 0xAC6488 Slot: 17
	public virtual DebugButton nW(GameObject , string ) { }

	// RVA: 0xAC6628 Offset: 0xAC2628 VA: 0xAC6628 Slot: 18
	public virtual Image nv(GameObject ) { }

	// RVA: 0xAC66BC Offset: 0xAC26BC VA: 0xAC66BC Slot: 19
	public virtual Text nw(GameObject , string ) { }

	// RVA: 0xAC6A00 Offset: 0xAC2A00 VA: 0xAC6A00 Slot: 13
	public void nx(GameObject ) { }

	// RVA: 0xAC6BF0 Offset: 0xAC2BF0 VA: 0xAC6BF0 Slot: 20
	protected virtual Material Om(Image ) { }

	// RVA: 0xAC6BF8 Offset: 0xAC2BF8 VA: 0xAC6BF8 Slot: 21
	protected virtual Material ON(Text ) { }

	// RVA: 0xAC6C00 Offset: 0xAC2C00 VA: 0xAC6C00
	public void .ctor() { }
}


// Namespace: Adverty.a.c
internal abstract class acm // TypeDefIndex: 6348
{
	// Fields
	public static readonly acn IF; // 0x0

	// Methods

	// RVA: 0xAC6C08 Offset: 0xAC2C08 VA: 0xAC6C08
	private static void .cctor() { }

	// RVA: 0xAC6DB8 Offset: 0xAC2DB8 VA: 0xAC6DB8
	protected void .ctor() { }
}


// Namespace: Adverty.a.d
internal class adj : aco // TypeDefIndex: 6349
{
	// Methods

	// RVA: 0xAC6DC0 Offset: 0xAC2DC0 VA: 0xAC6DC0
	public static aco yK() { }

	// RVA: 0xAC6E48 Offset: 0xAC2E48 VA: 0xAC6E48 Slot: 4
	public acl ny(GameObject ) { }

	// RVA: 0xAC6E4C Offset: 0xAC2E4C VA: 0xAC6E4C
	protected ExpandedConsoleView yk(GameObject ) { }

	// RVA: 0xAC722C Offset: 0xAC322C VA: 0xAC722C Slot: 5
	protected virtual ExpandedConsoleView On(GameObject ) { }

	// RVA: 0xAC6E40 Offset: 0xAC2E40 VA: 0xAC6E40
	public void .ctor() { }
}


// Namespace: Adverty.a.c
internal interface acn // TypeDefIndex: 6350
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract Camera nT();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract Text nt();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract GameObject nU(string , GameObject );

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void nu(GameObject );

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void nV(GameObject );

	// RVA: -1 Offset: -1 Slot: 5
	public abstract Image nv(GameObject );

	// RVA: -1 Offset: -1 Slot: 6
	public abstract DebugButton nW(GameObject , string );

	// RVA: -1 Offset: -1 Slot: 7
	public abstract Text nw(GameObject , string );

	// RVA: -1 Offset: -1 Slot: 8
	public abstract VerticalLayoutGroup nX(GameObject );

	// RVA: -1 Offset: -1 Slot: 9
	public abstract void nx(GameObject );

	// RVA: -1 Offset: -1 Slot: 10
	public abstract VerticalLayoutGroup nY(GameObject );
}


// Namespace: Adverty.a.c
internal interface aco // TypeDefIndex: 6351
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract acl ny(GameObject );
}


// Namespace: Adverty.a.E
internal class aEk : adg // TypeDefIndex: 6352
{
	// Fields
	private GameObject MG; // 0x10

	// Methods

	// RVA: 0xAC727C Offset: 0xAC327C VA: 0xAC727C Slot: 5
	public override acl ny(GameObject ) { }

	// RVA: 0xAC72C0 Offset: 0xAC32C0 VA: 0xAC72C0 Slot: 6
	protected override Canvas OL(GameObject ) { }

	// RVA: 0xAC760C Offset: 0xAC360C VA: 0xAC760C Slot: 7
	protected override CanvasScaler Ol(GameObject ) { }

	// RVA: 0xAC7638 Offset: 0xAC3638 VA: 0xAC7638 Slot: 8
	protected override DebugCanvasView OM(GameObject ) { }

	// RVA: 0xAC73CC Offset: 0xAC33CC VA: 0xAC73CC
	private void zo(GameObject ) { }

	// RVA: 0xAC7780 Offset: 0xAC3780 VA: 0xAC7780
	public void .ctor() { }
}


// Namespace: Adverty.a.E
internal class aEl : adi // TypeDefIndex: 6353
{
	// Fields
	private const string Mg = "Shaders/UIDrawOnTop";

	// Methods

	// RVA: 0xAC6CB0 Offset: 0xAC2CB0 VA: 0xAC6CB0
	public void .ctor() { }

	// RVA: 0xAC7828 Offset: 0xAC3828 VA: 0xAC7828 Slot: 16
	public override void nu(GameObject ) { }

	// RVA: 0xAC7878 Offset: 0xAC3878 VA: 0xAC7878 Slot: 17
	public override DebugButton nW(GameObject , string ) { }

	// RVA: 0xAC79E4 Offset: 0xAC39E4 VA: 0xAC79E4 Slot: 20
	protected override Material Om(Image ) { }

	// RVA: 0xAC79EC Offset: 0xAC39EC VA: 0xAC79EC Slot: 21
	protected override Material ON(Text ) { }
}


// Namespace: Adverty.a.E
internal class aEm : adj // TypeDefIndex: 6354
{
	// Methods

	// RVA: 0xAC79F4 Offset: 0xAC39F4 VA: 0xAC79F4 Slot: 5
	protected override ExpandedConsoleView On(GameObject ) { }

	// RVA: 0xAC6E38 Offset: 0xAC2E38 VA: 0xAC6E38
	public void .ctor() { }
}


// Namespace: Adverty.a.c
internal class acp // TypeDefIndex: 6355
{
	// Fields
	[CompilerGenerated]
	private Text If; // 0x10
	[CompilerGenerated]
	private Image IG; // 0x18

	// Methods

	[CompilerGenerated]
	// RVA: 0xAC8310 Offset: 0xAC4310 VA: 0xAC8310
	public Text vl() { }

	[CompilerGenerated]
	// RVA: 0xAC8318 Offset: 0xAC4318 VA: 0xAC8318
	private void vM(Text ) { }

	[CompilerGenerated]
	// RVA: 0xAC8320 Offset: 0xAC4320 VA: 0xAC8320
	public Image vm() { }

	[CompilerGenerated]
	// RVA: 0xAC8328 Offset: 0xAC4328 VA: 0xAC8328
	private void vN(Image ) { }

	// RVA: 0xAC8330 Offset: 0xAC4330 VA: 0xAC8330
	public void .ctor() { }
}


// Namespace: Adverty.AdDebug.UIBuilder
internal class VRExpandedConsoleView : ExpandedConsoleView // TypeDefIndex: 6356
{
	// Fields
	private VRButton Mx; // 0x38
	private VRButton MY; // 0x40

	// Methods

	// RVA: 0xAC80BC Offset: 0xAC40BC VA: 0xAC80BC
	public void aAJ(DebugButton , DebugButton ) { }

	// RVA: 0xAC8338 Offset: 0xAC4338 VA: 0xAC8338
	private void aAj() { }

	// RVA: 0xAC8370 Offset: 0xAC4370 VA: 0xAC8370
	private void aAK() { }

	// RVA: 0xAC83A8 Offset: 0xAC43A8 VA: 0xAC83A8
	public void .ctor() { }
}


// Namespace: 
private struct acq.A // TypeDefIndex: 6357
{}


// Namespace: 
private struct acq.a // TypeDefIndex: 6358
{}


// Namespace: Adverty.a.c
[CompilerGenerated]
internal sealed class acq // TypeDefIndex: 6359
{
	// Fields
	internal static readonly acq.A Ig /*Metadata offset 0x38C748*/; // 0x0
	internal static readonly acq.a IH /*Metadata offset 0x38C760*/; // 0x10
	internal static readonly acq.A Ih /*Metadata offset 0x38C798*/; // 0x40
}


// Namespace: 
private struct 5CBE45AC-7D1F-4FD2-A4B3-AF12068BCA5D. // TypeDefIndex: 6360
{}


// Namespace: <PrivateImplementationDetails>{7125345A-6343-4E1D-9E08-73C865607734}
internal class 5CBE45AC-7D1F-4FD2-A4B3-AF12068BCA5D // TypeDefIndex: 6361
{
	// Fields
	internal static 5CBE45AC-7D1F-4FD2-A4B3-AF12068BCA5D.  /*Metadata offset 0x38C7B0*/; // 0x0
	internal static byte[] ; // 0x1E10
	internal static string[] ; // 0x1E18

	// Methods

	// RVA: 0xAC83B0 Offset: 0xAC43B0 VA: 0xAC83B0
	private static string (int , int , int ) { }

	// RVA: 0xAC8478 Offset: 0xAC4478 VA: 0xAC8478
	public static string A() { }

	// RVA: 0xAC8514 Offset: 0xAC4514 VA: 0xAC8514
	public static string a() { }

	// RVA: 0xAC85B4 Offset: 0xAC45B4 VA: 0xAC85B4
	public static string B() { }

	// RVA: 0xAC8654 Offset: 0xAC4654 VA: 0xAC8654
	public static string b() { }

	// RVA: 0xAC86F4 Offset: 0xAC46F4 VA: 0xAC86F4
	public static string C() { }

	// RVA: 0xAC8794 Offset: 0xAC4794 VA: 0xAC8794
	public static string c() { }

	// RVA: 0xAC8834 Offset: 0xAC4834 VA: 0xAC8834
	public static string D() { }

	// RVA: 0xAC88D4 Offset: 0xAC48D4 VA: 0xAC88D4
	public static string d() { }

	// RVA: 0xAC8974 Offset: 0xAC4974 VA: 0xAC8974
	public static string E() { }

	// RVA: 0xAC8A14 Offset: 0xAC4A14 VA: 0xAC8A14
	public static string e() { }

	// RVA: 0xAC8AB4 Offset: 0xAC4AB4 VA: 0xAC8AB4
	public static string F() { }

	// RVA: 0xAC8B54 Offset: 0xAC4B54 VA: 0xAC8B54
	public static string f() { }

	// RVA: 0xAC8BF4 Offset: 0xAC4BF4 VA: 0xAC8BF4
	public static string G() { }

	// RVA: 0xAC8C94 Offset: 0xAC4C94 VA: 0xAC8C94
	public static string g() { }

	// RVA: 0xAC8D34 Offset: 0xAC4D34 VA: 0xAC8D34
	public static string H() { }

	// RVA: 0xAC8DD4 Offset: 0xAC4DD4 VA: 0xAC8DD4
	public static string h() { }

	// RVA: 0xAC8E74 Offset: 0xAC4E74 VA: 0xAC8E74
	public static string I() { }

	// RVA: 0xAC8F14 Offset: 0xAC4F14 VA: 0xAC8F14
	public static string i() { }

	// RVA: 0xAC8FB4 Offset: 0xAC4FB4 VA: 0xAC8FB4
	public static string J() { }

	// RVA: 0xAC9054 Offset: 0xAC5054 VA: 0xAC9054
	public static string j() { }

	// RVA: 0xAC90F4 Offset: 0xAC50F4 VA: 0xAC90F4
	public static string K() { }

	// RVA: 0xAC9194 Offset: 0xAC5194 VA: 0xAC9194
	public static string k() { }

	// RVA: 0xAC9234 Offset: 0xAC5234 VA: 0xAC9234
	public static string L() { }

	// RVA: 0xAC92D4 Offset: 0xAC52D4 VA: 0xAC92D4
	public static string l() { }

	// RVA: 0xAC9374 Offset: 0xAC5374 VA: 0xAC9374
	public static string M() { }

	// RVA: 0xAC9414 Offset: 0xAC5414 VA: 0xAC9414
	public static string m() { }

	// RVA: 0xAC94B4 Offset: 0xAC54B4 VA: 0xAC94B4
	public static string N() { }

	// RVA: 0xAC9554 Offset: 0xAC5554 VA: 0xAC9554
	public static string n() { }

	// RVA: 0xAC95F4 Offset: 0xAC55F4 VA: 0xAC95F4
	public static string O() { }

	// RVA: 0xAC9694 Offset: 0xAC5694 VA: 0xAC9694
	public static string o() { }

	// RVA: 0xAC9734 Offset: 0xAC5734 VA: 0xAC9734
	public static string P() { }

	// RVA: 0xAC97D4 Offset: 0xAC57D4 VA: 0xAC97D4
	public static string p() { }

	// RVA: 0xAC9874 Offset: 0xAC5874 VA: 0xAC9874
	public static string Q() { }

	// RVA: 0xAC9914 Offset: 0xAC5914 VA: 0xAC9914
	public static string q() { }

	// RVA: 0xAC99B4 Offset: 0xAC59B4 VA: 0xAC99B4
	public static string R() { }

	// RVA: 0xAC9A54 Offset: 0xAC5A54 VA: 0xAC9A54
	public static string r() { }

	// RVA: 0xAC9AF4 Offset: 0xAC5AF4 VA: 0xAC9AF4
	public static string S() { }

	// RVA: 0xAC9B94 Offset: 0xAC5B94 VA: 0xAC9B94
	public static string s() { }

	// RVA: 0xAC9C34 Offset: 0xAC5C34 VA: 0xAC9C34
	public static string T() { }

	// RVA: 0xAC9CD4 Offset: 0xAC5CD4 VA: 0xAC9CD4
	public static string t() { }

	// RVA: 0xAC9D74 Offset: 0xAC5D74 VA: 0xAC9D74
	public static string U() { }

	// RVA: 0xAC9E14 Offset: 0xAC5E14 VA: 0xAC9E14
	public static string u() { }

	// RVA: 0xAC9EB4 Offset: 0xAC5EB4 VA: 0xAC9EB4
	public static string V() { }

	// RVA: 0xAC9F54 Offset: 0xAC5F54 VA: 0xAC9F54
	public static string v() { }

	// RVA: 0xAC9FF4 Offset: 0xAC5FF4 VA: 0xAC9FF4
	public static string W() { }

	// RVA: 0xACA094 Offset: 0xAC6094 VA: 0xACA094
	public static string w() { }

	// RVA: 0xACA134 Offset: 0xAC6134 VA: 0xACA134
	public static string X() { }

	// RVA: 0xACA1D4 Offset: 0xAC61D4 VA: 0xACA1D4
	public static string x() { }

	// RVA: 0xACA274 Offset: 0xAC6274 VA: 0xACA274
	public static string Y() { }

	// RVA: 0xACA314 Offset: 0xAC6314 VA: 0xACA314
	public static string y() { }

	// RVA: 0xACA3B4 Offset: 0xAC63B4 VA: 0xACA3B4
	public static string Z() { }

	// RVA: 0xACA454 Offset: 0xAC6454 VA: 0xACA454
	public static string z() { }

	// RVA: 0xACA4F4 Offset: 0xAC64F4 VA: 0xACA4F4
	public static string aA() { }

	// RVA: 0xACA594 Offset: 0xAC6594 VA: 0xACA594
	public static string aa() { }

	// RVA: 0xACA634 Offset: 0xAC6634 VA: 0xACA634
	public static string aB() { }

	// RVA: 0xACA6D4 Offset: 0xAC66D4 VA: 0xACA6D4
	public static string ab() { }

	// RVA: 0xACA774 Offset: 0xAC6774 VA: 0xACA774
	public static string aC() { }

	// RVA: 0xACA814 Offset: 0xAC6814 VA: 0xACA814
	public static string ac() { }

	// RVA: 0xACA8B4 Offset: 0xAC68B4 VA: 0xACA8B4
	public static string aD() { }

	// RVA: 0xACA954 Offset: 0xAC6954 VA: 0xACA954
	public static string ad() { }

	// RVA: 0xACA9F4 Offset: 0xAC69F4 VA: 0xACA9F4
	public static string aE() { }

	// RVA: 0xACAA94 Offset: 0xAC6A94 VA: 0xACAA94
	public static string ae() { }

	// RVA: 0xACAB34 Offset: 0xAC6B34 VA: 0xACAB34
	public static string aF() { }

	// RVA: 0xACABD4 Offset: 0xAC6BD4 VA: 0xACABD4
	public static string af() { }

	// RVA: 0xACAC74 Offset: 0xAC6C74 VA: 0xACAC74
	public static string aG() { }

	// RVA: 0xACAD14 Offset: 0xAC6D14 VA: 0xACAD14
	public static string ag() { }

	// RVA: 0xACADB4 Offset: 0xAC6DB4 VA: 0xACADB4
	public static string aH() { }

	// RVA: 0xACAE54 Offset: 0xAC6E54 VA: 0xACAE54
	public static string ah() { }

	// RVA: 0xACAEF4 Offset: 0xAC6EF4 VA: 0xACAEF4
	public static string aI() { }

	// RVA: 0xACAF94 Offset: 0xAC6F94 VA: 0xACAF94
	public static string ai() { }

	// RVA: 0xACB034 Offset: 0xAC7034 VA: 0xACB034
	public static string aJ() { }

	// RVA: 0xACB0D4 Offset: 0xAC70D4 VA: 0xACB0D4
	public static string aj() { }

	// RVA: 0xACB174 Offset: 0xAC7174 VA: 0xACB174
	public static string aK() { }

	// RVA: 0xACB214 Offset: 0xAC7214 VA: 0xACB214
	public static string ak() { }

	// RVA: 0xACB2B4 Offset: 0xAC72B4 VA: 0xACB2B4
	public static string aL() { }

	// RVA: 0xACB354 Offset: 0xAC7354 VA: 0xACB354
	public static string al() { }

	// RVA: 0xACB3F4 Offset: 0xAC73F4 VA: 0xACB3F4
	public static string aM() { }

	// RVA: 0xACB494 Offset: 0xAC7494 VA: 0xACB494
	public static string am() { }

	// RVA: 0xACB534 Offset: 0xAC7534 VA: 0xACB534
	public static string aN() { }

	// RVA: 0xACB5D4 Offset: 0xAC75D4 VA: 0xACB5D4
	public static string an() { }

	// RVA: 0xACB674 Offset: 0xAC7674 VA: 0xACB674
	public static string aO() { }

	// RVA: 0xACB714 Offset: 0xAC7714 VA: 0xACB714
	public static string ao() { }

	// RVA: 0xACB7B4 Offset: 0xAC77B4 VA: 0xACB7B4
	public static string aP() { }

	// RVA: 0xACB854 Offset: 0xAC7854 VA: 0xACB854
	public static string ap() { }

	// RVA: 0xACB8F4 Offset: 0xAC78F4 VA: 0xACB8F4
	public static string aQ() { }

	// RVA: 0xACB994 Offset: 0xAC7994 VA: 0xACB994
	public static string aq() { }

	// RVA: 0xACBA34 Offset: 0xAC7A34 VA: 0xACBA34
	public static string aR() { }

	// RVA: 0xACBAD4 Offset: 0xAC7AD4 VA: 0xACBAD4
	public static string ar() { }

	// RVA: 0xACBB74 Offset: 0xAC7B74 VA: 0xACBB74
	public static string aS() { }

	// RVA: 0xACBC14 Offset: 0xAC7C14 VA: 0xACBC14
	public static string as() { }

	// RVA: 0xACBCB4 Offset: 0xAC7CB4 VA: 0xACBCB4
	public static string aT() { }

	// RVA: 0xACBD54 Offset: 0xAC7D54 VA: 0xACBD54
	public static string at() { }

	// RVA: 0xACBDF4 Offset: 0xAC7DF4 VA: 0xACBDF4
	public static string aU() { }

	// RVA: 0xACBE94 Offset: 0xAC7E94 VA: 0xACBE94
	public static string au() { }

	// RVA: 0xACBF34 Offset: 0xAC7F34 VA: 0xACBF34
	public static string aV() { }

	// RVA: 0xACBFD4 Offset: 0xAC7FD4 VA: 0xACBFD4
	public static string av() { }

	// RVA: 0xACC074 Offset: 0xAC8074 VA: 0xACC074
	public static string aW() { }

	// RVA: 0xACC114 Offset: 0xAC8114 VA: 0xACC114
	public static string aw() { }

	// RVA: 0xACC1B4 Offset: 0xAC81B4 VA: 0xACC1B4
	public static string aX() { }

	// RVA: 0xACC254 Offset: 0xAC8254 VA: 0xACC254
	public static string ax() { }

	// RVA: 0xACC2F4 Offset: 0xAC82F4 VA: 0xACC2F4
	public static string aY() { }

	// RVA: 0xACC394 Offset: 0xAC8394 VA: 0xACC394
	public static string ay() { }

	// RVA: 0xACC434 Offset: 0xAC8434 VA: 0xACC434
	public static string aZ() { }

	// RVA: 0xACC4D4 Offset: 0xAC84D4 VA: 0xACC4D4
	public static string az() { }

	// RVA: 0xACC574 Offset: 0xAC8574 VA: 0xACC574
	public static string BA() { }

	// RVA: 0xACC614 Offset: 0xAC8614 VA: 0xACC614
	public static string Ba() { }

	// RVA: 0xACC6B4 Offset: 0xAC86B4 VA: 0xACC6B4
	public static string BB() { }

	// RVA: 0xACC754 Offset: 0xAC8754 VA: 0xACC754
	public static string Bb() { }

	// RVA: 0xACC7F4 Offset: 0xAC87F4 VA: 0xACC7F4
	public static string BC() { }

	// RVA: 0xACC894 Offset: 0xAC8894 VA: 0xACC894
	public static string Bc() { }

	// RVA: 0xACC934 Offset: 0xAC8934 VA: 0xACC934
	public static string BD() { }

	// RVA: 0xACC9D4 Offset: 0xAC89D4 VA: 0xACC9D4
	public static string Bd() { }

	// RVA: 0xACCA74 Offset: 0xAC8A74 VA: 0xACCA74
	public static string BE() { }

	// RVA: 0xACCB14 Offset: 0xAC8B14 VA: 0xACCB14
	public static string Be() { }

	// RVA: 0xACCBB4 Offset: 0xAC8BB4 VA: 0xACCBB4
	public static string BF() { }

	// RVA: 0xACCC54 Offset: 0xAC8C54 VA: 0xACCC54
	public static string Bf() { }

	// RVA: 0xACCCF4 Offset: 0xAC8CF4 VA: 0xACCCF4
	public static string BG() { }

	// RVA: 0xACCD94 Offset: 0xAC8D94 VA: 0xACCD94
	public static string Bg() { }

	// RVA: 0xACCE34 Offset: 0xAC8E34 VA: 0xACCE34
	public static string BH() { }

	// RVA: 0xACCED4 Offset: 0xAC8ED4 VA: 0xACCED4
	public static string Bh() { }

	// RVA: 0xACCF74 Offset: 0xAC8F74 VA: 0xACCF74
	public static string BI() { }

	// RVA: 0xACD014 Offset: 0xAC9014 VA: 0xACD014
	public static string Bi() { }

	// RVA: 0xACD0B4 Offset: 0xAC90B4 VA: 0xACD0B4
	public static string BJ() { }

	// RVA: 0xACD154 Offset: 0xAC9154 VA: 0xACD154
	public static string Bj() { }

	// RVA: 0xACD1F4 Offset: 0xAC91F4 VA: 0xACD1F4
	public static string BK() { }

	// RVA: 0xACD294 Offset: 0xAC9294 VA: 0xACD294
	public static string Bk() { }

	// RVA: 0xACD334 Offset: 0xAC9334 VA: 0xACD334
	public static string BL() { }

	// RVA: 0xACD3D4 Offset: 0xAC93D4 VA: 0xACD3D4
	public static string Bl() { }

	// RVA: 0xACD474 Offset: 0xAC9474 VA: 0xACD474
	public static string BM() { }

	// RVA: 0xACD514 Offset: 0xAC9514 VA: 0xACD514
	public static string Bm() { }

	// RVA: 0xACD5B4 Offset: 0xAC95B4 VA: 0xACD5B4
	public static string BN() { }

	// RVA: 0xACD654 Offset: 0xAC9654 VA: 0xACD654
	public static string Bn() { }

	// RVA: 0xACD6F4 Offset: 0xAC96F4 VA: 0xACD6F4
	public static string BO() { }

	// RVA: 0xACD794 Offset: 0xAC9794 VA: 0xACD794
	public static string Bo() { }

	// RVA: 0xACD834 Offset: 0xAC9834 VA: 0xACD834
	public static string BP() { }

	// RVA: 0xACD8D4 Offset: 0xAC98D4 VA: 0xACD8D4
	public static string Bp() { }

	// RVA: 0xACD974 Offset: 0xAC9974 VA: 0xACD974
	public static string BQ() { }

	// RVA: 0xACDA14 Offset: 0xAC9A14 VA: 0xACDA14
	public static string Bq() { }

	// RVA: 0xACDAB4 Offset: 0xAC9AB4 VA: 0xACDAB4
	public static string BR() { }

	// RVA: 0xACDB54 Offset: 0xAC9B54 VA: 0xACDB54
	public static string Br() { }

	// RVA: 0xACDBF4 Offset: 0xAC9BF4 VA: 0xACDBF4
	public static string BS() { }

	// RVA: 0xACDC94 Offset: 0xAC9C94 VA: 0xACDC94
	public static string Bs() { }

	// RVA: 0xACDD34 Offset: 0xAC9D34 VA: 0xACDD34
	public static string BT() { }

	// RVA: 0xACDDD4 Offset: 0xAC9DD4 VA: 0xACDDD4
	public static string Bt() { }

	// RVA: 0xACDE74 Offset: 0xAC9E74 VA: 0xACDE74
	public static string BU() { }

	// RVA: 0xACDF14 Offset: 0xAC9F14 VA: 0xACDF14
	public static string Bu() { }

	// RVA: 0xACDFB4 Offset: 0xAC9FB4 VA: 0xACDFB4
	public static string BV() { }

	// RVA: 0xACE054 Offset: 0xACA054 VA: 0xACE054
	public static string Bv() { }

	// RVA: 0xACE0F4 Offset: 0xACA0F4 VA: 0xACE0F4
	public static string BW() { }

	// RVA: 0xACE194 Offset: 0xACA194 VA: 0xACE194
	public static string Bw() { }

	// RVA: 0xACE234 Offset: 0xACA234 VA: 0xACE234
	public static string BX() { }

	// RVA: 0xACE2D4 Offset: 0xACA2D4 VA: 0xACE2D4
	public static string Bx() { }

	// RVA: 0xACE374 Offset: 0xACA374 VA: 0xACE374
	public static string BY() { }

	// RVA: 0xACE414 Offset: 0xACA414 VA: 0xACE414
	public static string By() { }

	// RVA: 0xACE4B4 Offset: 0xACA4B4 VA: 0xACE4B4
	public static string BZ() { }

	// RVA: 0xACE554 Offset: 0xACA554 VA: 0xACE554
	public static string Bz() { }

	// RVA: 0xACE5F4 Offset: 0xACA5F4 VA: 0xACE5F4
	public static string bA() { }

	// RVA: 0xACE694 Offset: 0xACA694 VA: 0xACE694
	public static string ba() { }

	// RVA: 0xACE734 Offset: 0xACA734 VA: 0xACE734
	public static string bB() { }

	// RVA: 0xACE7D4 Offset: 0xACA7D4 VA: 0xACE7D4
	public static string bb() { }

	// RVA: 0xACE874 Offset: 0xACA874 VA: 0xACE874
	public static string bC() { }

	// RVA: 0xACE914 Offset: 0xACA914 VA: 0xACE914
	public static string bc() { }

	// RVA: 0xACE9B4 Offset: 0xACA9B4 VA: 0xACE9B4
	public static string bD() { }

	// RVA: 0xACEA54 Offset: 0xACAA54 VA: 0xACEA54
	public static string bd() { }

	// RVA: 0xACEAF4 Offset: 0xACAAF4 VA: 0xACEAF4
	public static string bE() { }

	// RVA: 0xACEB94 Offset: 0xACAB94 VA: 0xACEB94
	public static string be() { }

	// RVA: 0xACEC34 Offset: 0xACAC34 VA: 0xACEC34
	public static string bF() { }

	// RVA: 0xACECD4 Offset: 0xACACD4 VA: 0xACECD4
	public static string bf() { }

	// RVA: 0xACED74 Offset: 0xACAD74 VA: 0xACED74
	public static string bG() { }

	// RVA: 0xACEE14 Offset: 0xACAE14 VA: 0xACEE14
	public static string bg() { }

	// RVA: 0xACEEB4 Offset: 0xACAEB4 VA: 0xACEEB4
	public static string bH() { }

	// RVA: 0xACEF54 Offset: 0xACAF54 VA: 0xACEF54
	public static string bh() { }

	// RVA: 0xACEFF4 Offset: 0xACAFF4 VA: 0xACEFF4
	public static string bI() { }

	// RVA: 0xACF094 Offset: 0xACB094 VA: 0xACF094
	public static string bi() { }

	// RVA: 0xACF134 Offset: 0xACB134 VA: 0xACF134
	public static string bJ() { }

	// RVA: 0xACF1D4 Offset: 0xACB1D4 VA: 0xACF1D4
	public static string bj() { }

	// RVA: 0xACF274 Offset: 0xACB274 VA: 0xACF274
	public static string bK() { }

	// RVA: 0xACF314 Offset: 0xACB314 VA: 0xACF314
	public static string bk() { }

	// RVA: 0xACF3B4 Offset: 0xACB3B4 VA: 0xACF3B4
	public static string bL() { }

	// RVA: 0xACF454 Offset: 0xACB454 VA: 0xACF454
	public static string bl() { }

	// RVA: 0xACF4F4 Offset: 0xACB4F4 VA: 0xACF4F4
	public static string bM() { }

	// RVA: 0xACF594 Offset: 0xACB594 VA: 0xACF594
	public static string bm() { }

	// RVA: 0xACF634 Offset: 0xACB634 VA: 0xACF634
	public static string bN() { }

	// RVA: 0xACF6D4 Offset: 0xACB6D4 VA: 0xACF6D4
	public static string bn() { }

	// RVA: 0xACF774 Offset: 0xACB774 VA: 0xACF774
	public static string bO() { }

	// RVA: 0xACF814 Offset: 0xACB814 VA: 0xACF814
	public static string bo() { }

	// RVA: 0xACF8B4 Offset: 0xACB8B4 VA: 0xACF8B4
	public static string bP() { }

	// RVA: 0xACF954 Offset: 0xACB954 VA: 0xACF954
	public static string bp() { }

	// RVA: 0xACF9F4 Offset: 0xACB9F4 VA: 0xACF9F4
	public static string bQ() { }

	// RVA: 0xACFA94 Offset: 0xACBA94 VA: 0xACFA94
	public static string bq() { }

	// RVA: 0xACFB34 Offset: 0xACBB34 VA: 0xACFB34
	public static string bR() { }

	// RVA: 0xACFBD4 Offset: 0xACBBD4 VA: 0xACFBD4
	public static string br() { }

	// RVA: 0xACFC74 Offset: 0xACBC74 VA: 0xACFC74
	public static string bS() { }

	// RVA: 0xACFD14 Offset: 0xACBD14 VA: 0xACFD14
	public static string bs() { }

	// RVA: 0xACFDB4 Offset: 0xACBDB4 VA: 0xACFDB4
	public static string bT() { }

	// RVA: 0xACFE54 Offset: 0xACBE54 VA: 0xACFE54
	public static string bt() { }

	// RVA: 0xACFEF4 Offset: 0xACBEF4 VA: 0xACFEF4
	public static string bU() { }

	// RVA: 0xACFF94 Offset: 0xACBF94 VA: 0xACFF94
	public static string bu() { }

	// RVA: 0xAD0034 Offset: 0xACC034 VA: 0xAD0034
	public static string bV() { }

	// RVA: 0xAD00D4 Offset: 0xACC0D4 VA: 0xAD00D4
	public static string bv() { }

	// RVA: 0xAD0174 Offset: 0xACC174 VA: 0xAD0174
	public static string bW() { }

	// RVA: 0xAD0214 Offset: 0xACC214 VA: 0xAD0214
	public static string bw() { }

	// RVA: 0xAD02B4 Offset: 0xACC2B4 VA: 0xAD02B4
	public static string bX() { }

	// RVA: 0xAD0354 Offset: 0xACC354 VA: 0xAD0354
	public static string bx() { }

	// RVA: 0xAD03F4 Offset: 0xACC3F4 VA: 0xAD03F4
	public static string bY() { }

	// RVA: 0xAD0494 Offset: 0xACC494 VA: 0xAD0494
	public static string by() { }

	// RVA: 0xAD0534 Offset: 0xACC534 VA: 0xAD0534
	public static string bZ() { }

	// RVA: 0xAD05D4 Offset: 0xACC5D4 VA: 0xAD05D4
	public static string bz() { }

	// RVA: 0xAD0674 Offset: 0xACC674 VA: 0xAD0674
	public static string CA() { }

	// RVA: 0xAD0714 Offset: 0xACC714 VA: 0xAD0714
	public static string Ca() { }

	// RVA: 0xAD07B4 Offset: 0xACC7B4 VA: 0xAD07B4
	public static string CB() { }

	// RVA: 0xAD0854 Offset: 0xACC854 VA: 0xAD0854
	public static string Cb() { }

	// RVA: 0xAD08F4 Offset: 0xACC8F4 VA: 0xAD08F4
	public static string CC() { }

	// RVA: 0xAD0994 Offset: 0xACC994 VA: 0xAD0994
	public static string Cc() { }

	// RVA: 0xAD0A34 Offset: 0xACCA34 VA: 0xAD0A34
	public static string CD() { }

	// RVA: 0xAD0AD4 Offset: 0xACCAD4 VA: 0xAD0AD4
	public static string Cd() { }

	// RVA: 0xAD0B74 Offset: 0xACCB74 VA: 0xAD0B74
	public static string CE() { }

	// RVA: 0xAD0C14 Offset: 0xACCC14 VA: 0xAD0C14
	public static string Ce() { }

	// RVA: 0xAD0CB4 Offset: 0xACCCB4 VA: 0xAD0CB4
	public static string CF() { }

	// RVA: 0xAD0D54 Offset: 0xACCD54 VA: 0xAD0D54
	public static string Cf() { }

	// RVA: 0xAD0DF4 Offset: 0xACCDF4 VA: 0xAD0DF4
	public static string CG() { }

	// RVA: 0xAD0E94 Offset: 0xACCE94 VA: 0xAD0E94
	public static string Cg() { }

	// RVA: 0xAD0F34 Offset: 0xACCF34 VA: 0xAD0F34
	public static string CH() { }

	// RVA: 0xAD0FD4 Offset: 0xACCFD4 VA: 0xAD0FD4
	public static string Ch() { }

	// RVA: 0xAD1074 Offset: 0xACD074 VA: 0xAD1074
	public static string CI() { }

	// RVA: 0xAD1114 Offset: 0xACD114 VA: 0xAD1114
	public static string Ci() { }

	// RVA: 0xAD11B4 Offset: 0xACD1B4 VA: 0xAD11B4
	public static string CJ() { }

	// RVA: 0xAD1254 Offset: 0xACD254 VA: 0xAD1254
	public static string Cj() { }

	// RVA: 0xAD12F4 Offset: 0xACD2F4 VA: 0xAD12F4
	public static string CK() { }

	// RVA: 0xAD1394 Offset: 0xACD394 VA: 0xAD1394
	public static string Ck() { }

	// RVA: 0xAD1434 Offset: 0xACD434 VA: 0xAD1434
	public static string CL() { }

	// RVA: 0xAD14D4 Offset: 0xACD4D4 VA: 0xAD14D4
	public static string Cl() { }

	// RVA: 0xAD1574 Offset: 0xACD574 VA: 0xAD1574
	public static string CM() { }

	// RVA: 0xAD1614 Offset: 0xACD614 VA: 0xAD1614
	public static string Cm() { }

	// RVA: 0xAD16B4 Offset: 0xACD6B4 VA: 0xAD16B4
	public static string CN() { }

	// RVA: 0xAD1754 Offset: 0xACD754 VA: 0xAD1754
	public static string Cn() { }

	// RVA: 0xAD17F4 Offset: 0xACD7F4 VA: 0xAD17F4
	public static string CO() { }

	// RVA: 0xAD1894 Offset: 0xACD894 VA: 0xAD1894
	public static string Co() { }

	// RVA: 0xAD1934 Offset: 0xACD934 VA: 0xAD1934
	public static string CP() { }

	// RVA: 0xAD19D4 Offset: 0xACD9D4 VA: 0xAD19D4
	public static string Cp() { }

	// RVA: 0xAC573C Offset: 0xAC173C VA: 0xAC573C
	public static string CQ() { }

	// RVA: 0xAC5BD4 Offset: 0xAC1BD4 VA: 0xAC5BD4
	public static string Cq() { }

	// RVA: 0xAC5C74 Offset: 0xAC1C74 VA: 0xAC5C74
	public static string CR() { }

	// RVA: 0xAC61A0 Offset: 0xAC21A0 VA: 0xAC61A0
	public static string Cr() { }

	// RVA: 0xAC6240 Offset: 0xAC2240 VA: 0xAC6240
	public static string CS() { }

	// RVA: 0xAC62E0 Offset: 0xAC22E0 VA: 0xAC62E0
	public static string Cs() { }

	// RVA: 0xAC6588 Offset: 0xAC2588 VA: 0xAC6588
	public static string CT() { }

	// RVA: 0xAC6960 Offset: 0xAC2960 VA: 0xAC6960
	public static string Ct() { }

	// RVA: 0xAC6B50 Offset: 0xAC2B50 VA: 0xAC6B50
	public static string CU() { }

	// RVA: 0xAC718C Offset: 0xAC318C VA: 0xAC718C
	public static string Cu() { }

	// RVA: 0xAD1A74 Offset: 0xACDA74 VA: 0xAD1A74
	public static string CV() { }

	// RVA: 0xAD1B14 Offset: 0xACDB14 VA: 0xAD1B14
	public static string Cv() { }

	// RVA: 0xAD1BB4 Offset: 0xACDBB4 VA: 0xAD1BB4
	public static string CW() { }

	// RVA: 0xAD1C54 Offset: 0xACDC54 VA: 0xAD1C54
	public static string Cw() { }

	// RVA: 0xAD1CF4 Offset: 0xACDCF4 VA: 0xAD1CF4
	public static string CX() { }

	// RVA: 0xAD1D94 Offset: 0xACDD94 VA: 0xAD1D94
	public static string Cx() { }

	// RVA: 0xAD1E34 Offset: 0xACDE34 VA: 0xAD1E34
	public static string CY() { }

	// RVA: 0xAD1ED4 Offset: 0xACDED4 VA: 0xAD1ED4
	public static string Cy() { }

	// RVA: 0xAD1F74 Offset: 0xACDF74 VA: 0xAD1F74
	public static string CZ() { }

	// RVA: 0xAD2014 Offset: 0xACE014 VA: 0xAD2014
	public static string Cz() { }

	// RVA: 0xAD20B4 Offset: 0xACE0B4 VA: 0xAD20B4
	public static string cA() { }

	// RVA: 0xAD2154 Offset: 0xACE154 VA: 0xAD2154
	public static string ca() { }

	// RVA: 0xAD21F4 Offset: 0xACE1F4 VA: 0xAD21F4
	public static string cB() { }

	// RVA: 0xAD2294 Offset: 0xACE294 VA: 0xAD2294
	public static string cb() { }

	// RVA: 0xAD2334 Offset: 0xACE334 VA: 0xAD2334
	public static string cC() { }

	// RVA: 0xAD23D4 Offset: 0xACE3D4 VA: 0xAD23D4
	public static string cc() { }

	// RVA: 0xAD2474 Offset: 0xACE474 VA: 0xAD2474
	public static string cD() { }

	// RVA: 0xAD2514 Offset: 0xACE514 VA: 0xAD2514
	public static string cd() { }

	// RVA: 0xAD25B4 Offset: 0xACE5B4 VA: 0xAD25B4
	public static string cE() { }

	// RVA: 0xAD2654 Offset: 0xACE654 VA: 0xAD2654
	public static string ce() { }

	// RVA: 0xAD26F4 Offset: 0xACE6F4 VA: 0xAD26F4
	public static string cF() { }

	// RVA: 0xAD2794 Offset: 0xACE794 VA: 0xAD2794
	public static string cf() { }

	// RVA: 0xAD2834 Offset: 0xACE834 VA: 0xAD2834
	public static string cG() { }

	// RVA: 0xAD28D4 Offset: 0xACE8D4 VA: 0xAD28D4
	public static string cg() { }

	// RVA: 0xAD2974 Offset: 0xACE974 VA: 0xAD2974
	public static string cH() { }

	// RVA: 0xAD2A14 Offset: 0xACEA14 VA: 0xAD2A14
	public static string ch() { }

	// RVA: 0xAD2AB4 Offset: 0xACEAB4 VA: 0xAD2AB4
	public static string cI() { }

	// RVA: 0xAD2B54 Offset: 0xACEB54 VA: 0xAD2B54
	public static string ci() { }

	// RVA: 0xAD2BF4 Offset: 0xACEBF4 VA: 0xAD2BF4
	public static string cJ() { }

	// RVA: 0xAD2C94 Offset: 0xACEC94 VA: 0xAD2C94
	public static string cj() { }

	// RVA: 0xAD2D34 Offset: 0xACED34 VA: 0xAD2D34
	public static string cK() { }

	// RVA: 0xAD2DD4 Offset: 0xACEDD4 VA: 0xAD2DD4
	public static string ck() { }

	// RVA: 0xAD2E74 Offset: 0xACEE74 VA: 0xAD2E74
	public static string cL() { }

	// RVA: 0xAD2F14 Offset: 0xACEF14 VA: 0xAD2F14
	public static string cl() { }

	// RVA: 0xAD2FB4 Offset: 0xACEFB4 VA: 0xAD2FB4
	public static string cM() { }

	// RVA: 0xAD3054 Offset: 0xACF054 VA: 0xAD3054
	public static string cm() { }

	// RVA: 0xAD30F4 Offset: 0xACF0F4 VA: 0xAD30F4
	public static string cN() { }

	// RVA: 0xAD3194 Offset: 0xACF194 VA: 0xAD3194
	public static string cn() { }

	// RVA: 0xAD3234 Offset: 0xACF234 VA: 0xAD3234
	public static string cO() { }

	// RVA: 0xAD32D4 Offset: 0xACF2D4 VA: 0xAD32D4
	public static string co() { }

	// RVA: 0xAD3374 Offset: 0xACF374 VA: 0xAD3374
	public static string cP() { }

	// RVA: 0xAD3414 Offset: 0xACF414 VA: 0xAD3414
	public static string cp() { }

	// RVA: 0xAD34B4 Offset: 0xACF4B4 VA: 0xAD34B4
	public static string cQ() { }

	// RVA: 0xAD3554 Offset: 0xACF554 VA: 0xAD3554
	public static string cq() { }

	// RVA: 0xAD35F4 Offset: 0xACF5F4 VA: 0xAD35F4
	public static string cR() { }

	// RVA: 0xAC76E0 Offset: 0xAC36E0 VA: 0xAC76E0
	public static string cr() { }

	// RVA: 0xAC7788 Offset: 0xAC3788 VA: 0xAC7788
	public static string cS() { }

	// RVA: 0xAC7F7C Offset: 0xAC3F7C VA: 0xAC7F7C
	public static string cs() { }

	// RVA: 0xAC801C Offset: 0xAC401C VA: 0xAC801C
	public static string cT() { }

	// RVA: 0xAD3694 Offset: 0xACF694 VA: 0xAD3694
	public static string ct() { }

	// RVA: 0xAD3734 Offset: 0xACF734 VA: 0xAD3734
	public static string cU() { }

	// RVA: 0xAD37D4 Offset: 0xACF7D4 VA: 0xAD37D4
	public static string cu() { }

	// RVA: 0xAD3874 Offset: 0xACF874 VA: 0xAD3874
	public static string cV() { }

	// RVA: 0xAD3914 Offset: 0xACF914 VA: 0xAD3914
	public static string cv() { }

	// RVA: 0xAD39B4 Offset: 0xACF9B4 VA: 0xAD39B4
	private static void .cctor() { }
}

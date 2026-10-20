using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class GUIGarage : MonoBehaviour
{
	private enum GDKKPEEJJAO
	{
		Show = 0,
		Hide = 1
	}

	private sealed class FIGMLAAMNLF : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public Vector2 start_pos;

		public RectTransform animate_trans;

		public GUIGarage _003C_003E4__this;

		public Vector2 end_pos;

		public float speed;

		public bool is_activate_button_for_tutorial;

		private float _003Ct_003E5__2;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public FIGMLAAMNLF(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	private sealed class DJJFFDPEJKB : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public GUIGarage _003C_003E4__this;

		public GDKKPEEJJAO type;

		private float _003Ct_003E5__2;

		private Vector2 _003Cpos_003E5__3;

		private float _003CinitX_003E5__4;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public DJJFFDPEJKB(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	private sealed class OMJCFLCPGDB : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public GUIGarage _003C_003E4__this;

		private Image _003Cimage_003E5__2;

		private Color _003Cnew_color_003E5__3;

		private Color _003Cstart_color_003E5__4;

		private float _003Canim_length_003E5__5;

		private float _003CpauseEndTime_003E5__6;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public OMJCFLCPGDB(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	private sealed class POKBOGKBJMK : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public GUIGarage _003C_003E4__this;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public POKBOGKBJMK(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	private sealed class NPNKOHCAMIG : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public ShopItem it;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public NPNKOHCAMIG(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	public Transform IGGGGOCBLFF;

	public CanvasScaler ALPGNDDCLBF;

	public GameObject OBKKLLDALBI;

	public StandaloneInputModule FFJIEKJNHMO;

	public RatingController FILJCIIBHOL;

	public RatingEventController FPEFCPLEPIF;

	public RateMe KNPLGJJKMEM;

	public EncyclopediaController PIIFOJPCFOB;

	public GUIWindow AEBAFCEJDPO;

	public GameObject JPHKBMCMAIE;

	public GUIWindow HBNCEIHGBOO;

	public GUIWindow CNBICALJOKA;

	public GUIWindow OPGKDNBHDEE;

	public GUIWindow ENMGCHMFDEK;

	public GUIWindow ECKPNMBJDNG;

	public GUIWindow KAMLPJJDEGP;

	public GUIWindow HBGNOHGKEMO;

	public GUIWindow EMFGDIEMNMI;

	public RectTransform BIOLCNBFDKO;

	public GUIWindow JANLDKBJBOA;

	public GUIWindow LHPJIPFJNJP;

	public GUIWindow BJJAAMMGMMK;

	public GUIWindow EOMEKIJKEHM;

	public GUIWindow IODBIFFEAGJ;

	public GUIWindow HNGMMGHABAF;

	public RectTransform CFEKMMPPBGD;

	public GUIWindow KACKJBMEKAM;

	public GUIWindow INAJOCMMLCH;

	public GUIWindow PBLIBEMMMEM;

	public GUIWindow KEDNPBGBCMC;

	public GUIWindow IEDNLOCLBLL;

	public GUIWindow FJJHGKDGGKJ;

	public GUIWindow HKAEDPOIJOK;

	public GUIWindow CNHMFGBAALP;

	public GUIWindow DKKPPBLPDLO;

	public GUIWindow KPCJNNKNICI;

	public GUIWindow OHMIPJBNEOC;

	public GUIWindow KNAMHOFOPMD;

	public GUIWindow OJDABDMEHKF;

	public GUIWindow DCMJGKMCPNH;

	public GUIWindow BHNPGBNOJNK;

	public GUIWindow IDJBOKLKFNF;

	public GUIWindow NKAPHLHNCEO;

	public GUIWindow GGJDKFFDFLH;

	public GUIWindow IMNFHIEGOAK;

	public RectTransform DMNAOMLMJEA;

	public GUIWindow KGNDDLBADOD;

	public GUIWindow MIADMDOHFDP;

	public Text IBDJCNLNILJ;

	public GameObject CLIELOHAOHI;

	public GameObject EJKPAICDHGA;

	public RectTransform IKFFMKPIMMM;

	public Image KHGDDKNPJEP;

	private IEnumerator PILHKCFDJIH;

	public GameObject DBENLFCCNNE;

	public objDestructorHints HDECNMCMLOD;

	public GUIProgressBarWWW IPBMHBINBCM;

	public Text GJKCLADOEEL;

	public GameObject IIAMMNMHEFE;

	public Text LPLIALOMOAP;

	public GameObject[] NECGDEDIKDD;

	public Text[] EKGDHPBABME;

	public GUIAchievement[] OEBHPCMKCAL;

	public Text CIHPAJBCADG;

	public RectTransform FCOEJMNAHPG;

	public GameObject EILOJNEBFLD;

	public GameObject KMFCFHAAAPK;

	public GUILevel[] AMBAJOCCFJE;

	private bool GBAJAFLKFEN;

	public Sprite[] DKPNEJGJOMD;

	private bool HBMBJIDJGCB;

	private IEnumerator ANFGNAMMLGO;

	private int GNIEPJFKLBH;

	private int IECPAMOAJNN;

	public Button ONMEPHBPCPB;

	public GameObject FNPBFIGLJMM;

	public RectTransform NDFMIKKMKLM;

	public RectTransform CIMJLLEAMME;

	public Image NELBIAEBLHN;

	public Text HDBCADCDLEO;

	public Text GJHKACJELLM;

	public Text KPNIHPCCLPJ;

	public Image[] FCLLFMPIBIL;

	public Sprite OAPNJIEJIIB;

	public Sprite BPKEOMIBAPD;

	public LevelTaskGUI[] BFJGLAKDHEE;

	public Image KILLDNAMMPA;

	public Text GHLPCELJKJO;

	public Text PKDHECDDICC;

	public Text GEMBFLPGNEK;

	private float BKPMKNLDPCK;

	public static float LOICFFJDFGG;

	public GameObject EGFPPEFNCKK;

	public GameObject DOIAFGKPDIH;

	public GameObject HLBJENKIAMO;

	public GameObject ILNKNCEHNMH;

	public GameObject PANNIHBLFGK;

	public Text MMGIEEPAEBH;

	public Text ELJOIIPPCOM;

	public Text LDOGIFLACKA;

	public GameObject IMDMNNHICGB;

	public Text FIKDJBCPHEK;

	public Text LGLACKHIEPI;

	private float FGNDGHEOHOI;

	public GameObject NICPCMGAMHC;

	public Sprite KHECNBDLAGA;

	public Sprite NFHAHGLCLOM;

	public GameObject JGPMKBGLFGG;

	private DJKGLJOCFCE OIACPHOMODK;

	public Sprite PILGKKBHOKH;

	public Sprite ENNCCLHLGNM;

	public Sprite JFAFPOPHHGD;

	public Sprite HKCMPHEMEAA;

	public Text BCPIBADECAN;

	public Image EEMEEEJOONK;

	public Image FEANMPPFEHB;

	public GUICoins BOOLBGPMGAD;

	public GUICoins GLDCKDIFKBM;

	public GUICoins GCLMMBKIJGD;

	public GUICoins KEJGEBEGCKH;

	public GUICoins DINKFHPBEIN;

	public GUICoins HCAKLLPDEGK;

	public GameObject NNMCGAKENMI;

	public Text KENPKAMCIDN;

	public GUICoins FICCHPBBBPG;

	public Image NFFOABJNEOO;

	public RectTransform HAAFPOENHKN;

	public GameObject CIDLDJLEIAN;

	private int DKEAJKJNACK;

	public Text PKGIEEDLLJK;

	public GameObject LBHGGEEHNFE;

	public GameObject KFCDHBFEINJ;

	public GameObject ACNGBCIFNMH;

	public GameObject KNBPALOJGPE;

	private Image EDCKCCHPNGF;

	private Image EJEFCJEKIEM;

	public Color OKHBJKAEOKD;

	public Color HEKGOIIFANL;

	public bool JMKLCODKLKP;

	public bool NAODFOEKCOJ;

	public GameObject FPDPLAOHJAM;

	public GameObject ADCFEPAEDOC;

	public Text GGOIHMHHECI;

	public GameObject HEODMEACEKE;

	public GameObject NLGDGEAKJCC;

	public GameObject MCGCFCLNFON;

	public Text MAJEPAAFIJD;

	public Image HONOIJNCNNE;

	public GameObject AIDOHDMINEH;

	public GameObject JEAAGGCBOJJ;

	public Text CONPFEDLMBH;

	public Text FLABKOMKHJA;

	private bool MANLAIBDMNI;

	public GameObject LGDFJPCENPE;

	public Text KHLAEOFAKML;

	public RectTransform[] LNPGGEIIFDM;

	public Vector2[] ILFHJNPGEIN;

	public RectTransform[] AOIBPBEMNEP;

	public Vector2[] EPGDKJOJCCA;

	private int EMBCBNMEIAI;

	public GameObject CJCNNNGMHEL;

	public GameObject KNJDCCCEPNC;

	public GameObject BCDIGJJNKFP;

	public GameObject[] EIDOKKNIAKC;

	public GameObject[] MAEDALAOHKM;

	public GameObject[] NEDPPFADBGI;

	public GameObject AGEKKCPFPFN;

	public Transform EJBIGKJFOBO;

	public RectTransform GGKNELJPGCE;

	public ShopItem[] OFEKNLMPBPH;

	private ShopItem FFPMBLIFMHF;

	public GameObject OIDDCINIOLN;

	public Button KPMCHFNCPFG;

	public GameObject OOHINAGEDGO;

	public Color KCKKNJPMLHE;

	public Color LOBHALACIBE;

	public Image PJIFPNKDLCB;

	public Text AGJBJDANKNA;

	public Text DGEDCIAGNAA;

	public Text GKOPBEECLPA;

	public Image MLLELOLGNHK;

	public Text NIBMDHKACGO;

	public RectTransform NLHBMIGPANC;

	public GameObject KKHIBNLPMAM;

	public GameObject NFCHHLHPKHM;

	public Text KFGPLPMLNNM;

	public Text JEEFEKPCHAL;

	public Image OEANCNFCMFE;

	public Text LNOCLCBEIAB;

	public Image CLKMIHHBLGC;

	public Sprite PHJDHGDAELD;

	public Sprite CEPBDIGBMLD;

	private IEnumerator JNFJMJBMEJK;

	private bool OKIBLCCCPJH;

	public RectTransform FAEGPLJFMLG;

	public RectTransform HIKLLDFIJNJ;

	public RectTransform DCDCELBOOJK;

	public static int MNNPLDKPNBA;

	public DonateItem[] CPLLOEGKNHP;

	public ToggleGroup HBCLCBHAHBE;

	public Toggle[] ODJODAONEOG;

	public ScrollRect MHJAEPDEPHE;

	public GameObject DIHCPLMELEF;

	public Text CNEDNDJPDFK;

	public Material MGKHHPLEIKC;

	public Button PFGLLCNOALM;

	public GameObject BEGGBANPHAO;

	public Text KLEGDOJMIBL;

	public Button BJBAIHKNGEP;

	public GameObject EGJKLCNFMEP;

	public Text COGIJGJLABH;

	private int DKOFFJBJPED;

	private int CJBFLCDDAGL;

	private int JFDCOOMGBEO;

	private int AFPDKDHGGCE;

	private APJHDPJBJLL EMPMIBCIGPA;

	private bool LIFHKGNEIJE;

	private int HOPCDPIPGHI;

	private bool PBCBAIIEMPM;

	public GameObject[] NKJNLNDFDHI;

	public RectTransform[] GCGAAMHEENO;

	private int JJNDLKGGGMJ;

	public GameObject[] HIKGPFKONAB;

	public TranslateLabel[] GDNLGBEHIPK;

	public Text GAGBCIIJONL;

	public Text NCPLBJDGKKG;

	public Sprite FEECOBGLAFK;

	public Sprite HDDHNNPHKKE;

	public Button FNHNMCHNKBC;

	public Sprite HFOJHALHDBO;

	public Sprite AOEDCPLGJMC;

	public Button PODOCABGIOL;

	public Sprite HINHELAMJBO;

	public Sprite FEKHKLCPNMI;

	public Image JPOHMLGIDJI;

	public Image KBPGOADPCEF;

	public Image JIOODENOBLJ;

	public Sprite NDFECGCJLGE;

	public Sprite OOOLDCGCCAC;

	public Image FPBIJPNMOEL;

	public Sprite BFFDMCNIJHJ;

	public Sprite HFKCHLONOGF;

	public Sprite EPGENIDKCAP;

	public Text GLLCNLBEPFD;

	public Image FCKJIBDPNGO;

	public Text BMDLNNBFHIM;

	public Image PIKMCOCLBLK;

	public Text JOAMAALLDGB;

	public Sprite PHELJJJIPDP;

	public Sprite MIPFKBBNOHC;

	public Image EBHNDMKGDMF;

	public Text JCAEGDCOFKG;

	public Sprite MHKBDADOEDF;

	public Sprite ALCLKPAIBGJ;

	public GameObject KJOHFICNMKL;

	public GameObject EJHKBAIIMEH;

	public Text MJDNGGPFNAH;

	public GameObject OOCJCAGILIM;

	public Image GEPIPHEBECC;

	public Text PJEFIEPMGIF;

	public Text JBNGNJADBGB;

	public Text OCHNNHBHINH;

	public Text FBIMNNHIJKB;

	public Button CMBIIIEHJEB;

	public Text KOMPLOLAKAL;

	public Text NOFIBCAKIGA;

	public Text HOHLFOBJEKO;

	public Text JHEDGNCMGEE;

	public Button HNDPICEFOAL;

	public Sprite MKFHPBPIINI;

	public Sprite IOALMJHLDCJ;

	public Text OHKKGMLBLCL;

	private bool DOOGGCKFICL;

	public Toggle[] KNGHPGOKNIM;

	public GameObject[] GOBLNKDCNPG;

	public Text JCFKHDAECDD;

	public Text CMAECICIFPN;

	public Text BEAPIFAOFLG;

	public Text NDKGBBCFKBK;

	public Button GJLPOLHMCOH;

	public Button PBFDNMEDLNJ;

	public Button FPFFENBMAPJ;

	public Button LEGJKABBKBD;

	public Button JEFFFPAJCNG;

	private float DLCFJBKGCHO;

	private int NBNHENIBKNK;

	public GameObject KLHBEPGKIKD;

	public GameObject[] GOPFDHJAAEB;

	public GameObject[] MKBNEBMFCAB;

	private void KNHFEOEMGNL()
	{
	}

	public void ButtonCheatEraseMoney()
	{
	}

	public void DonateWindowGold()
	{
	}

	public void GOKBDNDJPBA(bool MHJLKCIBEPG, bool DLCMLDLHLLC, bool GBCADCAJDEN)
	{
	}

	public int BGHFPDCINFC()
	{
		return 0;
	}

	public void ButtonEasterEgg1()
	{
	}

	public void EOGBHKMFBGE()
	{
	}

	public void ButtonCheatRestoreHP()
	{
	}

	private void MKJAANBPFJH()
	{
	}

	private void DHADIHGJCCE(APJHDPJBJLL FHOFNGHGNGF)
	{
	}

	public void ButtonCarNext()
	{
	}

	public void ButtonCheatHideBanner()
	{
	}

	public IEnumerator KEPPKPEAEOO()
	{
		return null;
	}

	public void ButtonCloseWindow()
	{
	}

	public void ButtonBuyColorReward()
	{
	}

	private IEnumerator ILOEHAPOFHA(GDKKPEEJJAO FHOFNGHGNGF)
	{
		return null;
	}

	public void HJMGNJDAJJJ()
	{
	}

	private void KMDEAFLJMND()
	{
	}

	public void ButtonAchievementsGPGS()
	{
	}

	private void MIAENKOOLAI()
	{
	}

	private void MFHPABKGJEH()
	{
	}

	public void ButtonSettings()
	{
	}

	public void ButtonCheatUnlockAllLevels()
	{
	}

	public void ButtonBuyUpgradeConfirm(bool is_free)
	{
	}

	public void ButtonFullScreenToggle()
	{
	}

	public void ButtonChangeSound()
	{
	}

	public void ButtonMapHidePanel(bool is_anim)
	{
	}

	private void MNIKOMAODMK()
	{
	}

	public void JANLLKKBNAM(int FHOFNGHGNGF)
	{
	}

	public void DonateWindowSilver()
	{
	}

	public void ButtonBuyCar()
	{
	}

	public void ButtonRateMeNow()
	{
	}

	public void HGHFFNAJALJ()
	{
	}

	public void ButtonGoToTheStore()
	{
	}

	public void ButtonMainMenu()
	{
	}

	public void ButtonEncyclopedia()
	{
	}

	public IEnumerator OFMEDMJLPNE(RectTransform NPAAJPIIBCI, Vector2 EDPJENMOOGC, Vector2 OGEOBBHMHEP, float NBCLGLJCBAP, bool NDDOMFGGEAI)
	{
		return null;
	}

	public void AGFKGLDJDLE()
	{
	}

	public void ButtonZD2GoToStore()
	{
	}

	private void FKANPAEENNP()
	{
	}

	public void MAKGMMFFGPG()
	{
	}

	public void ButtonCheatRestoreFuel()
	{
	}

	public void ButtonSwitchUpgradesOrColors()
	{
	}

	public void ButtonCarPrev()
	{
	}

	public void ButtonStartRaceGoWithLowHP()
	{
	}

	public void ButtonCredits()
	{
	}

	public void ButtonCheatShowInterstitial()
	{
	}

	public void ButtonCheatUnlockOneMoreLevel()
	{
	}

	public void ButtonShowOffers(int type)
	{
	}

	public void ButtonCheatShowRewarded(GameObject _go)
	{
	}

	public void ButtonSettingsGooglePlay()
	{
	}

	public void ButtonPlay()
	{
	}

	private void NFDIHKCAIKE()
	{
	}

	public void EGEFDJDCKDJ()
	{
	}

	private void KFELMMODBGC()
	{
	}

	private void BCDFPFLJKPJ(APJHDPJBJLL GIHDNMOMBIG, bool BKIACHLBBFA)
	{
	}

	public void DonateWindowAfterNoMoney()
	{
	}

	private void LLAEHJGOFLG()
	{
	}

	public void ButtonRepairCar()
	{
	}

	public void ButtonSETSaves()
	{
	}

	public void ButtonCheatTestAccount()
	{
	}

	public void MGBNHDCJAMK()
	{
	}

	public void NJHAGLAALCJ(bool MDIDBDKGGJI)
	{
	}

	public bool AEBFNHHILNI()
	{
		return false;
	}

	public void DonateItem(DonateItem item)
	{
	}

	public void MLEEOPKCMBP()
	{
	}

	public void NFPFKDAHPNE()
	{
	}

	private void Update()
	{
	}

	public void DOODAKOKCBN(int IGMIJBAAHLA, int ABAIGEJPJIE)
	{
	}

	public void ButtonMainFacebook()
	{
	}

	private void ButtonLogsShow()
	{
	}

	public void DonateOnChangeToggle(int type)
	{
	}

	private void IMJEJKHBIMO()
	{
	}

	public void DAOLEOLDHGN(string FJBLHMNOPEP)
	{
	}

	public void ButtonBuyUpgradeReward()
	{
	}

	public void PHKCLDLDABM(bool MDIDBDKGGJI)
	{
	}

	private void PIHABGKNPDI(GDKKPEEJJAO FHOFNGHGNGF)
	{
	}

	public void MIFJGEDDEML()
	{
	}

	private void AFHIOFKDNLD(IDNANBIKFMM KFMJHIOHBEE, int EGDACNEEGEK)
	{
	}

	public void ButtonGDPRAgree()
	{
	}

	public void ButtonCheatRemoveCar()
	{
	}

	public void ButtonCheatAddSilver()
	{
	}

	public void EOFBGHALHON()
	{
	}

	public void LKBAGBIEFJE(Resolution PAHFHOJCFEJ)
	{
	}

	public void ButtonGDPRTerms()
	{
	}

	public void ANCCFOEBAGI()
	{
	}

	public void ButtonZD2Adv()
	{
	}

	public void ButtonCheatAddGold()
	{
	}

	public void FHCEPLEAMGA()
	{
	}

	public void ButtonConfirmSaves(bool is_server)
	{
	}

	private void Start()
	{
	}

	public void ButtonCheatTestNotification()
	{
	}

	public void ButtonSettingsNotifications()
	{
	}

	private IEnumerator APCBBBDNHKG(ShopItem MJGEGAFFIPG)
	{
		return null;
	}

	public void KBINLNMDLEC()
	{
	}

	public void PDCIBBDKCLN()
	{
	}

	public void HAGKNGONJFM(Level ACLJCGMKGNP, bool MBHJAOIDNMK)
	{
	}

	private bool DCFAACLJPKH()
	{
		return false;
	}

	public bool ABAHNKCPCFA()
	{
		return false;
	}

	public void PGEEGDGGHLL(Level ACLJCGMKGNP, bool MBHJAOIDNMK)
	{
	}

	public void ButtonChangeMusic()
	{
	}

	private IEnumerator IHHAEHDPGIC()
	{
		return null;
	}

	public void FJCMAMFOKNL()
	{
	}

	public void ButtonSettingsRestorePurchases()
	{
	}

	private void DHHCOENABGM()
	{
	}

	public void ButtonCheatWindow()
	{
	}

	public void ButtonShowStarHint(int type)
	{
	}

	public void ButtonBuyUpgrade(ShopItem item)
	{
	}

	public void ButtonRateMeLater()
	{
	}

	public void ButtonExit()
	{
	}

	public void CGHIGIBEHAE()
	{
	}

	public void ButtonCheatShowOffer(int type)
	{
	}

	public void ButtonRateMeNever()
	{
	}

	public void ButtonHpInfo()
	{
	}

	public void ButtonColorPreview(ShopItem item)
	{
	}

	public void NFJNJCLENFD()
	{
	}

	public void ButtonSettingsAccelerometer()
	{
	}

	public void OHFNNEHCIEH()
	{
	}

	public void ButtonSettingsLanguage()
	{
	}

	public void ButtonMapLevelSelect(GUILevel lvl)
	{
	}

	public void DKIFODMOFNO()
	{
	}

	public void OFMPCPHEGKB(string ADNJPEELPAD, bool KDKDKFMKIBN)
	{
	}

	public void ButtonAchievements()
	{
	}

	public void ButtonLogsHide()
	{
	}

	public void ToggleCheatGroup(int type)
	{
	}

	public void ButtonSettingsFPS()
	{
	}

	public void GMHOEBNFADN(int LGFLDFKKJMG, int OCLFIENGKFJ, bool AMIPFFMEHBP)
	{
	}

	private void Awake()
	{
	}

	public void PCLHPNHIHMO()
	{
	}

	public void ButtonCheatAds()
	{
	}

	public void ButtonMainTwitter()
	{
	}

	public void GFNKMDJEDBD()
	{
	}

	public void ButtonSettingsGFX()
	{
	}

	public void ButtonResetProfile()
	{
	}

	public void EEOMMEJNEOF(bool FJDCALHGHCI)
	{
	}

	public void ButtonCheatShowBanner()
	{
	}

	private void ODHAOMJKKAE()
	{
	}

	public void ButtonSettingsGameCenter()
	{
	}

	private void DGGEFHKGJCD()
	{
	}

	public void ButtonStartRaceGo()
	{
	}

	public void CDFFAINFEDD()
	{
	}

	public void DonateWindowFuel()
	{
	}

	public void BECFMMKIPHJ()
	{
	}

	public void ButtonRating()
	{
	}

	public void CIGPFNEMEDJ()
	{
	}

	private void HHOKAGMFIHE(Image NCIMDMCDMIK)
	{
	}

	private void ADMNOIMMGGA(bool FANNHKPHPHC)
	{
	}

	public void OCLHKDAFKLI()
	{
	}

	private void HMJFKIDHNDE()
	{
	}

	public void ButtonMap()
	{
	}

	public void ButtonMainVK()
	{
	}
}

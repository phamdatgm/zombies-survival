using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class GUIGameplay : MonoBehaviour
{
	public enum POFCDOMOIBH
	{
		none = -1,
		accel = 0,
		fire = 1,
		nitro = 2,
		tilt = 3,
		hp = 4,
		tramplin = 5,
		zombie_boss = 6
	}

	[Serializable]
	public class ResultsHint
	{
		public string translate_key;

		public int lvl_id;

		public bool is_only_free2play;
	}

	[Serializable]
	public class HelpItem
	{
		public POFCDOMOIBH type;

		public GameObject go;

		public GameObject go_pc;

		public GameObject go_gamepad;

		public GameObject go_nintendo;

		public GameObject go_playstation;

		public Text desc;

		public GameObject arrow_go;

		public Transform[] elements_for_active;

		public bool is_repeatability;
	}

	private sealed class EDNODNGHHMJ : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public GUICoins tm;

		public GUIGameplay _003C_003E4__this;

		private int _003Cstart_value_003E5__2;

		private float _003Canim_length_003E5__3;

		private int _003Cfinal_value_003E5__4;

		private float _003CpauseEndTime_003E5__5;

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
		public EDNODNGHHMJ(int _003C_003E1__state)
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

	private sealed class GHHIIAGLDMN : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public int count_stars;

		public GUIGameplay _003C_003E4__this;

		public bool is_new_record;

		private int _003Ci_003E5__2;

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
		public GHHIIAGLDMN(int _003C_003E1__state)
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

	private sealed class IKFEHJCMKKN : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public GUIGameplay _003C_003E4__this;

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
		public IKFEHJCMKKN(int _003C_003E1__state)
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

	public CarController EGEINPCIEON;

	public Transform IGGGGOCBLFF;

	public RectTransform JEFNJEAGADE;

	public CanvasScaler ALPGNDDCLBF;

	public GameObject OBKKLLDALBI;

	public StandaloneInputModule FFJIEKJNHMO;

	public GUIWindow OJFNCOLKMHP;

	public GUIWindow HKPNHDAKHHO;

	public RectTransform HLEGFLDLKFF;

	public GUIWindow BKLILPKICFN;

	public RectTransform EOGGGDGBLKC;

	public GUIWindow MPPPAPJNCNE;

	public GUIWindow EPLFFONIKMG;

	public GUIWindow OKGEEPNFNDE;

	public GUIWindow OAEENEPDLMI;

	public GameObject EJKPAICDHGA;

	public GUIProgressBarWWW IPBMHBINBCM;

	public GameObject NMBPJAJCLOF;

	public Text CDEEEFCAPHE;

	public bool FOHPLEABHNI;

	public bool INBDLOCDCPO;

	public bool NOACPEOHILF;

	public bool FLKNGDJHKHJ;

	public bool OGPFKPJIEFH;

	public GameObject[] IPCCBOEGLEN;

	public GameObject[] PPNPMLICJCO;

	public RectTransform ELLAKLLBBLL;

	public Button LGHJCLBMOAN;

	public Button ECBEBEJKHKM;

	public Button BNOMDMCBNNL;

	public GameObject KBDLCJAJFOA;

	public Text NBCLGLJCBAP;

	public Image ANNCDBDHLPK;

	public Image MAIMEJBHPCL;

	public Image ENEGCNGBBJJ;

	public Image LOAJLCHCJKG;

	public float CGMBBHGDFCM;

	public Text NGMFAKIBAGI;

	public RectTransform IDHJODIGPEI;

	private int EAECEJLMABP;

	public GUICoins EMKMCEPMMBG;

	public GUICoins PHKPMGOICOM;

	public GUICoins GJNFHBJBIBC;

	public Color KOEMFOMPNLD;

	public Color ODECDCJMJJN;

	public GameObject BHMJELHKMGP;

	public RectTransform PONHGGANEAH;

	public static int OIJKDGMLHPL;

	public Image GECOFGCABNE;

	public Sprite JEFMLMOHCAG;

	public GameObject MLINJBBONGA;

	public GameObject OCAJKFEMEJN;

	private Transform DJACPOHIGAL;

	private Transform GBIDOPEHPMA;

	private CarReplay GOIEMIHMIHN;

	private HorizontalLayoutGroup KKMEFLDDIKA;

	private Image NAIPLKPCPMM;

	private Text LICIFMIGJNB;

	private Vector3 FJGPEHPBLFE;

	private float MIBGMHKNGON;

	private Color JEBFHMDIDMC;

	public objDestructorHints[] PGAKIIBDNMB;

	public Color ADOBHNMDNKJ;

	public Color EODAFKHFALO;

	public Color CKLNOCJDLMG;

	public Color DOBBELIOBEL;

	public GameObject KINNGMPNOHN;

	public RectTransform LAGFGMNBBJA;

	public Image[] GCDJJBJHGJK;

	public GUICoins[] LFAKFIIKAEP;

	public Sprite EOHKIKEBFIF;

	public Sprite IDPHMIMGPEP;

	public Text FCDFNPIANKN;

	public GUICoins FCKDGOFOOJB;

	public Text IADDBKJFDJJ;

	public Text KKNMPJFFGKA;

	public Text PJJEKBOGJPH;

	public Text PFPPAOMNDKA;

	public Text IGMEOLEHCAE;

	public Text NAFFJNBOAFC;

	public GameObject FDAKFHOCFAE;

	public RectTransform DCIBJEIKCFL;

	public RectTransform COLHCBFKIKF;

	public GUICoins DFJFDBEEMGN;

	public GUICoins KMOAKPCBBGM;

	public Button LDDBLLPFPOO;

	public Button FKLEEIKNJEL;

	public Button INNIIHAJAOB;

	public RectTransform JEDAALOAGBO;

	public Text EAEJMMLMKPD;

	public Color GIGKPJAGDKM;

	public GUICoins JFILDBBMPAP;

	public GUICoins OANFCFDBHNH;

	public RectTransform[] MMHPAJAHJDJ;

	public GameObject IANIIDCPJGN;

	public ResultsHint[] JHDHHJCLDEK;

	public GameObject MCPJMFNBDOD;

	public GameObject[] NDIPPJKDMIK;

	public Text NBLCIBNCLIB;

	public Text LEIAFIEOPEP;

	public Text CFFNHNOABBF;

	public GameObject OANINFFKBGA;

	public Button FNHNMCHNKBC;

	public Sprite HFOJHALHDBO;

	public Sprite AOEDCPLGJMC;

	public Button PODOCABGIOL;

	public Sprite HINHELAMJBO;

	public Sprite FEKHKLCPNMI;

	public Image JIOODENOBLJ;

	public Sprite NDFECGCJLGE;

	public Sprite OOOLDCGCCAC;

	public Image FPBIJPNMOEL;

	public Sprite BFFDMCNIJHJ;

	public Sprite HFKCHLONOGF;

	public Sprite EPGENIDKCAP;

	public Text GLLCNLBEPFD;

	private GameObject HNJFGLCDBEE;

	public GameObject PKFPNDGFDDB;

	public GameObject ICOFFEKCFNJ;

	private bool AJLAGMJLOLB;

	public bool OHOEPDMOLBN;

	public Text PFOEPIPBOOE;

	public Text PDPPNCCAAGA;

	public VerticalLayoutGroup OAMFIMLAAHF;

	public HelpItem[] LMNKADFDPMO;

	public GameObject KKLMBPAMPPJ;

	public Text FKONEONAPDF;

	public static POFCDOMOIBH DEDOFFIOEFO;

	public static POFCDOMOIBH AOFDLCGLMDI;

	public static float NMHIDJLMFKC;

	public static float JHDLBMMDEDG;

	public static float JBJJABGHCMB;

	private bool KPLDFEGLOMA;

	private POFCDOMOIBH BLCAMEJJNEM;

	private POFCDOMOIBH FLNIONGLMLC;

	public GameObject PCDLAJMCNNP;

	public GameObject KDKIHEEJFLC;

	public GameObject BKNBKCNMCEG;

	public GameObject IGFONDDELJI;

	public GameObject CMAKCPNKPFF;

	public GameObject ENABOEHPDPP;

	public GameObject PJOOEBPEMOH;

	public GameObject EJOLFKNPEAJ;

	public GameObject BEEHNDABCIO;

	public GameObject MECADKFKCJP;

	public GameObject NBIBNHGNAIL;

	public GameObject DEMMDBGAKAM;

	public GameObject MKFMBAFKAAF;

	public Sprite PILGKKBHOKH;

	public Text IOKLGCJLABO;

	public Image FJGFDCLFJDE;

	public Text IFIIGHKOFMO;

	public RectTransform HLNMJFFLMIG;

	public Text AKBGGFCPHMI;

	public Image ADKNEJNMICG;

	public GameObject JLBGKECAOGP;

	public Text DNGGLFMIDOJ;

	public Image LMLFKPPLELK;

	public Transform MMNGEHDKKDK;

	private float KDPPODAJELB;

	private float PFEJOCMFKJE;

	private CPFPFGOIDDO DBDGDLIENJA;

	private GameObject AONILDNKNCB;

	private Transform DELDDEDKHHE;

	public float PEAOLDCNLIK;

	private bool GDLDOBJNKJP;

	private bool LJAIJDPPOIP;

	public void DHFMPHMAMBF()
	{
	}

	public void ButtonPauseHelpShow()
	{
	}

	public IEnumerator GGKBDJCHHOE()
	{
		return null;
	}

	public void ButtonRewardEncyclopediaItem(bool is_adv)
	{
	}

	public void ButtonPauseHelpRight()
	{
	}

	public void FNOJDNIIENN()
	{
	}

	public void CBFONCCJIEE()
	{
	}

	public void CCDFIOJMHGC()
	{
	}

	public void MGNNDFEFHAH(POFCDOMOIBH LMIFACAEINI, bool LCEMDCJMCPF = false)
	{
	}

	private void OOABHKFNLEJ()
	{
	}

	public void PEDBEOIPIIB(string FJBLHMNOPEP)
	{
	}

	public void ButtonSettingsGFX()
	{
	}

	public void ButtonChangeSound()
	{
	}

	public void EHHBPPDPGIK()
	{
	}

	public void ButtonTutorialCrashCancel()
	{
	}

	private void LLAEHJGOFLG()
	{
	}

	private void BEGHDNNLEDG()
	{
	}

	public void ButtonPause(bool is_tutorial)
	{
	}

	private void JMMJMDCMDHI()
	{
	}

	public void POCPBLEDNJH()
	{
	}

	public void ButtonSilverRewarded()
	{
	}

	public void ButtonFire(bool value)
	{
	}

	public void ButtonPauseHelpClose()
	{
	}

	public void LJNIGKAEGON(Vector3 LBFLGOOEOCE, Camera AGHABKFGCLN, bool OFDBLGCLFPL)
	{
	}

	public void ButtonReviveCancel()
	{
	}

	public void ButtonRestart(bool _use_fuel)
	{
	}

	public void IKDCPJNHOKJ(int JJDDCKDBCIL)
	{
	}

	public void ButtonTiltLeft(bool value)
	{
	}

	public void ShowResultResourcesHints(string translate_key)
	{
	}

	public void LPFPLIJJJHJ()
	{
	}

	public IEnumerator JLHJOJHINPC(GUICoins NBBKILHLACJ)
	{
		return null;
	}

	public void HNKHJLDJMHB(string FJBLHMNOPEP, JLPFNIPEELJ FHOFNGHGNGF, bool PAPICKFLEMM, bool KNLLEGFOMII = false)
	{
	}

	public void ButtonContinue()
	{
	}

	public void CEFDKCEFHAK()
	{
	}

	public void NLBALNDOEFG()
	{
	}

	public void DMFIDCENMJF()
	{
	}

	public void ButtonTiltRight(bool value)
	{
	}

	public void ButtonPauseHelpLeft()
	{
	}

	public void ButtonSettingsAccelerometer()
	{
	}

	public void HNINFAKLAJH()
	{
	}

	private void ODHAOMJKKAE()
	{
	}

	public void ButtonToGarage()
	{
	}

	public void ButtonReviveStart()
	{
	}

	private void HLIGHGDJECN(GUIRating BKBKLJKDINA, string DIKNHCJJBBC, string FMBLJPEOKMC, int ONBPMGJNDOC, int OKKCFECENJB, int CDKFEFCGMKE, PMJPCDJMHPK JODFAOFGNDK, bool FJDCALHGHCI)
	{
	}

	public void PIHHDKCEMGD()
	{
	}

	public void AGGPLIPJHPI()
	{
	}

	private void LFOIDHBMEMK()
	{
	}

	public void OKIGBJNMOOP()
	{
	}

	public void ButtonNitro(bool value)
	{
	}

	public void ButtonAccel(bool value)
	{
	}

	public void ButtonRewardEncyclopediaShowAdv()
	{
	}

	public bool NNOEOMKNGJL(CPFPFGOIDDO BAMPGHJACCL)
	{
		return false;
	}

	public void ButtonBrake(bool value)
	{
	}

	public void KLIPHOLINEP()
	{
	}

	public void MFOBEMEHKEO(bool JCEDJOALMDL, int FECKNINKJBG, int GHGELIHOKND)
	{
	}

	private void IMJEJKHBIMO()
	{
	}

	public void ButtonChangeMusic()
	{
	}

	private void Awake()
	{
	}

	public IEnumerator OJHKPPIFCLM(bool JPPCOPEIOGH, int DMPKPEPDOKI)
	{
		return null;
	}

	public void PKECIKMIECO(CPFPFGOIDDO BAMPGHJACCL, GameObject MIPKEALMBHI)
	{
	}
}

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using CodeStage.AntiCheat.ObscuredTypes;
using ReadySprings;
using UnityEngine;

public class CarController : MonoBehaviour
{
	[Serializable]
	public class CarColor
	{
		public Color col_preview;

		public Color col;

		public int hue;

		public float saturation;

		public float brightest;
	}

	public class CILHKIPDPMN
	{
		public Transform CCLKEPFMBEA;

		public GameObject MIPKEALMBHI;

		public WheelCollider EFOGAOHIGOE;

		public Transform CLFCMHAEIED;

		public Vector3 CFPBHBGGNMF;

		public Vector3 BNEEFDKFEHI;

		public float EIBJLBMILIG;

		public GNOCGPDGKAE PLPKOBBAAJM;

		public bool GFGJNJIHPHP;
	}

	private sealed class HAGOCAHBNPJ : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public CarController _003C_003E4__this;

		public bool _is_finished;

		private int _003Ccompleted_stars_003E5__2;

		private bool _003Cis_show_stamp_record_003E5__3;

		private FinishAnimator _003CfinishAnimator_003E5__4;

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
		public HAGOCAHBNPJ(int _003C_003E1__state)
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

	private sealed class MMNGFIDILCC : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public CarController _003C_003E4__this;

		public int count;

		private Transform _003Ckey_003E5__2;

		private string _003Cfinal_target_tag_003E5__3;

		private bool _003Cis_destroy_target_003E5__4;

		private Vector3 _003Cfire_end_point_003E5__5;

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
		public MMNGFIDILCC(int _003C_003E1__state)
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

	private sealed class PDLEABDDJAE : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public CarController _003C_003E4__this;

		public bool isTutorialLevel;

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
		public PDLEABDDJAE(int _003C_003E1__state)
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

	private sealed class NDBGEGFNJMP : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public CarController _003C_003E4__this;

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
		public NDBGEGFNJMP(int _003C_003E1__state)
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

	private sealed class DNCIEMHODPI : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public CarController _003C_003E4__this;

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
		public DNCIEMHODPI(int _003C_003E1__state)
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

	public static CarController KECGFPHIEHF;

	public CarCollision NEJKJHMFBMJ;

	public CarCamera ECBLNBNGONF;

	public GUIGameplay CDDOBCENBOG;

	public Transform BHDKJIINJNL;

	public Rigidbody NIIFDMDCOCF;

	public AudioSource ECNAMAJCDGI;

	public GameObject PLFPPECDCLG;

	private MoveBackground NCMHCOHPOOB;

	public const int PONMLHAPFEG = 50;

	public const int MAAIJIBJOPB = 30;

	public const int LJJPODOIAPD = 5;

	public bool IBOHFAOLGDH;

	public bool KFMKBHIDIAK;

	public bool OJDANPGPKPB;

	private ObscuredInt EMKMCEPMMBG;

	public ObscuredInt NFDOKGHMLFP;

	public ObscuredInt DMPPOBLLDBE;

	public static int GLGHPCHBONI;

	public int HCBODNKILEA;

	private Transform CIALNADBDDB;

	private Transform MFILOBNJBLD;

	private Transform MIAMAMEGMHK;

	private Transform HALOAIOMEPG;

	private Transform NLNCKBKJAJG;

	private Transform EIAOHIJBDEN;

	private Transform LIELODIPKNE;

	private Transform OLDKKPPKHJI;

	public GameObject[] NNGMCDMNECH;

	public GameObject[] JHFGLELIKAO;

	public GameObject[] HDNABFFKLAJ;

	public GameObject[] HKKILOJNCPG;

	public GameObject[] OFDMBDCMKEH;

	private List<GameObject> EFJBAPKGMLA;

	private bool[] GEIPPLHMEMP;

	private int ELCJDFHCLBG;

	private int GKOPGBKHNCM;

	public float AGKFMCFFBHB;

	public float NDPILGPNEFL;

	public float JMFFPEBJCCE;

	public float LNJIDPJNMJH;

	public float CHGMPFEHCDF;

	public float EHPJLJCBMIJ;

	public float JCKILBMALPM;

	public float JIPIHNCHBPP;

	public ObscuredFloat CABOCNMMFEK;

	private float ANIFIACMGHD;

	private int OGGEMMINMMO;

	private float PHFKCFOILGD;

	private float NHDFFBKLKLP;

	private float ONLPPKCMCDJ;

	public float FINKJLKLFIG;

	public float ILHEBLCMAIJ;

	public Vector3 EOMPPDDACJM;

	private float HEGAKOHMBEN;

	public ObscuredInt PHKPMGOICOM;

	private ObscuredInt FJOFMMAGAPG;

	public const float DLOIBCICDLP = 0.2f;

	private ObscuredInt CFMHHPIGJHD;

	public static int IMEIEFHABHH;

	public int OHMALICOCHK;

	private ObscuredFloat EKNIOGDJDEJ;

	private ObscuredInt PBDCHMBBDHO;

	private ObscuredInt ICNCDKDODHO;

	private const float JJCFJLNNJEJ = 1.02f;

	private float FJGENGBOJPA;

	private float JFIDMPAHEAM;

	private const float GEAPDPCNFGD = 1.1f;

	public bool EMAKNGFOILF;

	private bool IJACHFMOLCD;

	private bool IONAFPBDCCF;

	public static float HCILEAABENL;

	private float HHDCACBMPJK;

	private float IENMIKJADJF;

	[SerializeField]
	private SerializableSprings.SpringDirVec3 HEEHBDDACOJ;

	private int OFNPMLGJIHJ;

	public ObscuredInt GEHAGJMADEG;

	private ObscuredInt KPMJLCMMNDN;

	private ObscuredInt CNPMBEMNNCN;

	public ObscuredInt CBMGIBJFILD;

	public bool FPJINMILBPP;

	private float EMDKNNFHHMF;

	private Vector3 DFNKEBHDOIH;

	private Dictionary<Transform, RaycastHit> NELMAJDILND;

	public static int GGDLOPNIKOB;

	private objDestructorTrail EGJHCGOHGOG;

	private objDestructorTrail GBDIFNCLMCC;

	private AutoDestructShuriken CHGPLACBKLE;

	private AutoDestructShuriken POHGDMCOHFA;

	private AutoDestructShuriken FBHBHHFCLDA;

	public Transform LIJODOABDGG;

	public Transform FNEIDBGLFIH;

	private GameObject CABFBDCALLA;

	private GameObject JCLBMEFDDPM;

	public GameObject EOJFKBECPPD;

	public GameObject JHDGBAALBMP;

	private ObscuredInt NFMJGGFDDMH;

	public int[] HOFKAPIGLGA;

	private bool GJIPCFLKJFG;

	private bool LGLBCDCKGBI;

	private bool NHIHKCCBING;

	private bool GMLHNFBOEGK;

	private bool KKCECHKCJGO;

	private bool KAMKFAFOMNP;

	private bool ODNLEFBNKAE;

	private const float HEICGCIDNME = 30f;

	public static float AKFEPAADAIM;

	private float JDOJFKOCKFL;

	public GameObject GBLNJIKLCLP;

	public ParticleSystem[] FNLHPDCIFMG;

	private Color BNMFJFGALEJ;

	private float JHNCCMPDHFA;

	private bool BLBEANOECBB;

	private bool MMIFMGIJPJH;

	private bool KCLGACJMMIA;

	private float COMEHJFGEML;

	public GameObject[] CFLLLIOJOBD;

	public EHKCLJKMBLO[] KEGLIKDGCNC;

	public Transform KNOBHBDEKAK;

	private float OJKKICLLELI;

	public static Vector3 BOAPLCDFEEF;

	public static Vector3 MDLICIBKOGE;

	public Transform NLGGAKACCMC;

	public Transform FJGKIKPJBME;

	private ParticleSystem KJOJAFKDHNH;

	private ParticleSystem PCMEAFEIBBC;

	private ParticleSystem.EmissionModule PKCLOKOFBCA;

	private ParticleSystem.EmissionModule DPEHNPPFHMD;

	public Transform IFLDCKJMFND;

	public ParticleSystem DHJMCFBENCP;

	public ParticleSystem ICNPJPLFCBA;

	public Vector3 AILDJLHIGKI;

	private float CEOJAIIMKBO;

	public bool MFEELNHEKHF;

	public bool ODFPBGGPPDK;

	public float MHDBPCGFFDO;

	public bool CBPOPFMFNFF;

	private int PKNGKDDKNIM;

	private float KHDKNJAGGHH;

	private float PCAMLKIMMPM;

	private int FPHFKCCPAEF;

	private float EMJNOGDABPK;

	private float IHKGIAPDLHD;

	private Vector3 CKGABDBFDIH;

	private int IAPFLMGHKIM;

	public bool ECBFJDOEKMJ;

	public bool KJDJKLPNCHI;

	public static bool LCJOMOHFJDI;

	public static Vector3 EPDJPJLHCDL;

	public static bool MKEGHDPIIFK;

	public bool EFJKMEHHMAJ;

	private GameObject LKPOMFJNLBM;

	public static bool LNNMJCIFMGH;

	public static bool FNHOMMPGFHK;

	public static int GLBOHAGOBFH;

	public int FJFNDGAMPHH;

	private float CHANMFBMCDE;

	private float GJLAJGCPBEF;

	public bool GJFMGCNOHEP;

	private SpringParams ABPKOOLKPCL;

	private SpringParams NEMMHHMHLEO;

	private float DBBGNMLGOAO;

	private float JMNDKKCCFML;

	public Transform HJLPGGPNDKA;

	private SpringParams LJJPJHDCOBJ;

	private float PDGPHDOPDDF;

	private float DEMOMIOFOIC;

	private float NGFEBDMLKLC;

	public bool GLEPFMJIDHF;

	private SpringFloat OLGPOCHECAF;

	private SpringDirVec3 EBMKKIEGJCP;

	private SpringAngVec3 NHKLKMICMOB;

	private float ANMJHACFFFH;

	public CarColor[] GNDOHJDDLAG;

	public Renderer[] NHEKIOLEIDI;

	public ParticleSystem ILNODOPHGCL;

	public Transform[] CCHOFMFMCJL;

	public GameObject EGAAKMKKMGA;

	public int IICGKJFAHFB;

	private CNMOHEHJDBF KEEAFACOAJO;

	private ObscuredInt ODPJLHICABM;

	private ObscuredInt IOKMCIGOMNI;

	private float IIIAKHJPNOH;

	private float LOCDELNAGPO;

	private ObscuredFloat KKBLFPCHEIH;

	public const float MMNJLFJIOHI = 4.2f;

	public float FIMKCLOEDGC;

	public float DLCLMFKJHGL;

	public float NNPCIJCJJLA;

	private bool GGGBCBPICJN;

	private Vector3 IBNAOLDEMOB;

	public bool FPLDMGGFKED;

	private bool HDMBHIMJKBI;

	private float CFFNHNOABBF;

	private Dictionary<MeshRenderer, Material[]> EDFNCPFNAKE;

	private List<GameObject> GKMDDGOBFAF;

	public CILHKIPDPMN[] OLHONOOFKPP;

	public float CHBHHNLILIP => AGKGCILIANE();

	private int OKFAJHNCEKN
	{
		get
		{
			return DLFDOEBINCP();
		}
		set
		{
			NDIMMLBIFCI(value);
		}
	}

	private void Awake()
	{
	}

	private bool DADAHEFJBFC(int FECKNINKJBG, int JGBFJILJCMN, int OCMLDOHHNJI, int HGCIDJKHPLN)
	{
		return false;
	}

	public void IBDIAPCKNDO()
	{
	}

	public void GCHFPNMJHCA(float GFDIKJLIBPM, bool FLKHNKPAHGK)
	{
	}

	private void KIHGPFPOIHP()
	{
	}

	public void MNMBFIBHFBB()
	{
	}

	private float GGPLBFNGFAP()
	{
		return 0f;
	}

	private void NDIMMLBIFCI(int ALLBGCHDGNC)
	{
	}

	public void HBLIIBFNKIE(float HCILEAABENL)
	{
	}

	private void OFLMLGPBOBL()
	{
	}

	private void PPIBCCLIDMH(int GJHGNOEOAAG)
	{
	}

	private CILHKIPDPMN DCPJJNIFCBM(Transform DDHKDIEBPDH, GNOCGPDGKAE PLPKOBBAAJM)
	{
		return null;
	}

	private void EHLPBKIEJAL(string FAEEKPCAEHE, Transform DNEMDNHLGAP)
	{
	}

	private IEnumerator JMCGEKEOJHD(bool BKMLEMNMGPJ)
	{
		return null;
	}

	private void OJOPPNIEGLL()
	{
	}

	public void KIPCFFHJBPB()
	{
	}

	public void PFANBJGLEJO()
	{
	}

	private void GAODICJFPIP(float IILDBBGLAKH)
	{
	}

	public void ENFNKCGHPPG()
	{
	}

	private int BBONKOLGOKE()
	{
		return 0;
	}

	public void LOPCCLDAPAE()
	{
	}

	private void KKMPDCAMDGN(GUIGameplay.POFCDOMOIBH MPCJLJAJKMF, int NAGJFGEHKIK, int HFDKNJFKOJO = 0)
	{
	}

	private void CHPDPBCCBJP(float HHEOPDJMPBH)
	{
	}

	private void NCBPCHPNCII()
	{
	}

	private void FKBDELMHMJD(ref ObscuredInt FJOKKOFPECG, ref ObscuredInt HLOKKFLPPBA)
	{
	}

	private void Start()
	{
	}

	private void OPEHNMHCDAJ()
	{
	}

	public void FPLOKMKMFLL()
	{
	}

	private void CEKLNGNBGLP()
	{
	}

	private void IODIAKMIMDD()
	{
	}

	private IEnumerator FNDOKMIBKCA()
	{
		return null;
	}

	private void ENIIFAAKJKN()
	{
	}

	public void AEFMMNHIGLH()
	{
	}

	private void KDHHDKMBELG(GameObject DEPIBMKFMDA, bool CCMGNIDEBKP)
	{
	}

	public bool JMAEOBLLHHN()
	{
		return false;
	}

	private void FixedUpdate()
	{
	}

	public void HCBBKPNEMLE()
	{
	}

	private IEnumerator ENFNKCGHPPG(int LKEBAMJFFKH)
	{
		return null;
	}

	private void JBBIBEPIODK()
	{
	}

	private void OAMJAHGGKEI()
	{
	}

	private void DBHKFBLNNPF()
	{
	}

	private void HOKDBNFEOCB()
	{
	}

	private void PCDOLLHPMJE()
	{
	}

	private int DLFDOEBINCP()
	{
		return 0;
	}

	public void KPFMJNAJAIJ()
	{
	}

	private void KIGCLEFNGIH(ref ObscuredInt ALLBGCHDGNC, string DGGEHNEECCD, int CHNHFDOHLKB, int FPMAPKMIPKO)
	{
	}

	public void AFPLNBDNJHM()
	{
	}

	public void DPKGKJMAPLO()
	{
	}

	public void EDHBFCLPHCO(bool LKKLGPDFCHB)
	{
	}

	public IEnumerator HAPAIKKJNCN()
	{
		return null;
	}

	public bool CDEJPMCFIHK()
	{
		return false;
	}

	private void PKLGNADJLIG()
	{
	}

	public IEnumerator FIOKLNLIDNH(bool CDJLOBFNINN)
	{
		return null;
	}

	private void EFIBCONCDIM()
	{
	}

	public void FGIKMGFJJDM()
	{
	}

	public float AGKGCILIANE()
	{
		return 0f;
	}

	public void IKOEIGDJPEK(int ALLBGCHDGNC, bool MIBLBGHDLFH = false)
	{
	}

	public void GFAPIMNKMLG(int LIJPNHADLDP)
	{
	}

	public void AKNFDJKEDOC(Material PLBEPEHAFMO)
	{
	}

	public void JHMJACIPINH()
	{
	}

	public void FIGLBMANNKF()
	{
	}

	private void Update()
	{
	}

	public void EGGPODAIEBC(GameObject MIPKEALMBHI)
	{
	}

	private void OIDKCBOGMIJ()
	{
	}

	private void BALBOFMAKKO()
	{
	}

	public void EKOHIKFFBFC(int IKOBFEOAKCI, bool FLKHNKPAHGK)
	{
	}

	public bool HECJKCAMLHJ(GameObject OPBPCFOOBHD)
	{
		return false;
	}

	private void AOOHMIALOJP(Transform CIIGBEPKIOD, int HPHMPIOMFAC, int KBBIGFDPBHP, bool HOGDOEAMJFA, bool MNCAFCICFGD)
	{
	}

	private void OENKDDLNKCJ(bool POOJPMFNDMP)
	{
	}

	public void FALNNMMGIDA()
	{
	}
}

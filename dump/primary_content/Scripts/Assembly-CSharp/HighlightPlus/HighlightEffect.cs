using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

namespace HighlightPlus;

[ExecuteInEditMode]
public class HighlightEffect : MonoBehaviour
{
	private struct IENBCEHONPE
	{
		public bool JJAODNBHNFE;

		public Transform CCLKEPFMBEA;

		public bool CMIBMFOFEEL;

		public Vector3 KBKLBFJAGHA;

		public Vector3 FFBHCLECEHJ;

		public Vector3 DMJPMPBPGNA;

		public bool HCOEPCINJAB;

		public Mesh EEFAAGALFPO;

		public Mesh BGOOBHECOFB;

		public Renderer DJABKIAKBPB;

		public bool PFNJAEBEAMB;

		public Material[] OELDAKOMCHE;

		public Material[] DMMNBOPAEFB;

		public Matrix4x4 NKCNBKIIPCI;
	}

	private enum OMKEBFHHCNG
	{
		FadingOut = -1,
		NoFading = 0,
		FadingIn = 1
	}

	public bool PLAFEGNBAOP;

	public IGEGINMCKHD FFIBIDEBCBK;

	public LayerMask ACCIGIIGFCA;

	public float ABKNBHGMOGD;

	public bool FMJLLMPNKCN;

	public bool HFKNAMDFCMJ;

	public bool MIPIGEACAPI;

	public bool KINMMJCHCBO;

	[SerializeField]
	private bool AAMOOIIENFC;

	public float ELAADMKNFCH;

	public float JCNFHJDNMCF;

	public bool LILPEEEHNKD;

	public bool IPDDFIMEHOP;

	public float BKKPNHCHMAG;

	public Color HBPBKBAOBDI;

	public float EPEAHGPHCJG;

	public float IECMPDPLHMJ;

	public float AMAMNJFBKNC;

	public float PNGGIFHNBDL;

	public Color JMEEMOBBIJE;

	public float EALMKEANKHJ;

	public FEDIFLCFOPF MKMICAPBGOD;

	public int PBBFKNFOKJN;

	public IFEMCDPNHFB JKOJDFGNDGI;

	public bool NABHHLLIMLH;

	public bool IAPLCDJEBMJ;

	private LPHEHJBLEPI MLMEIBJIGNH__BackingField;

	private NPKMMHOGALO GKFGGIMOHJJ__BackingField;

	private AKDPAMOBCFP FHMKIODJICM__BackingField;

	[SerializeField]
	private IENBCEHONPE[] LDEDHKMPMJF;

	[SerializeField]
	private int HIACIOLACOL;

	[NonSerialized]
	public Transform MBKPLBGFAHF;

	[NonSerialized]
	public float JPPGCGKGILI;

	private const string DPEOIABJAMP = "HP_ALPHACLIP";

	private const string LKMKBIIMNAA = "_CutOff";

	private const float ICJFPKMFGED = 0.70711f;

	private static Material OELDAKOMCHE;

	private static Material DMMNBOPAEFB;

	private Material DJPNCJGKJIF;

	private static Vector3[] DHLADFENMPB;

	private float FLJEICNCIGP;

	private OMKEBFHHCNG CGDEHLPONCC;

	private CommandBuffer MJAPEBOICNM;

	private CommandBuffer JBIIKLFHEKP;

	private CommandBuffer KIONEAPGBGB;

	private CommandBuffer GCCMGNMEIJN;

	private CommandBuffer FNHHKGKFCKO;

	private CommandBuffer PJNJCEMJMHE;

	private CommandBuffer ODCILGGBNCA;

	private int[] HDCNOLBFNCN;

	private int[] CDANNABJHHB;

	private int EIHLEMDMPOF;

	private int JAHHEKDHIHK;

	private static Mesh CANOFDCBKAB;

	private int LCJJPNCKALM;

	private Matrix4x4 IPGALBDBMCM;

	private Matrix4x4 FPPDLOPIJPG;

	private Vector3[] JHBLDBLOCOH;

	private RenderTextureDescriptor CKMCMAHHNDK;

	private Color IBMLAJLBBDO;

	private Color PAOEPFFGOGH;

	private IFEMCDPNHFB DMAOHOIMGDH;

	private bool KJDKINPKMHJ;

	private List<Renderer> CPJCCLCACCP;

	private static Vector3[] CGOILCPDLLP;

	private static int[] ICLEKJOAJFM;

	private static Dictionary<Vector3, int> HICMFLIJEFJ;

	public bool LFKOLHHIDPO
	{
		get
		{
			return EIMIKELIDBO();
		}
		set
		{
			FAKKPJLILLL(value);
		}
	}

	public event LPHEHJBLEPI MLMEIBJIGNH
	{
		add
		{
			JBHFDGKOKHL(value);
		}
		remove
		{
			POFNNJJNFFN(value);
		}
	}

	public event NPKMMHOGALO GKFGGIMOHJJ
	{
		add
		{
			EKMNKKLHHHM(value);
		}
		remove
		{
			HJODLBHJKAI(value);
		}
	}

	public event AKDPAMOBCFP FHMKIODJICM
	{
		add
		{
			DBGOFJEBCAC(value);
		}
		remove
		{
			JKLPPMCLJJI(value);
		}
	}

	public void DBGOFJEBCAC(AKDPAMOBCFP ALLBGCHDGNC)
	{
	}

	private void IPOKCNBINMN()
	{
	}

	private void LMBLEGHLDPO(int NMPBHHIPPHP, bool EJJMIFBJEBK)
	{
	}

	private void OMJKNLLLGFP(ScriptableRenderContext DNLCHODDKHP, Camera EIKILFDFMFB)
	{
	}

	public void FAKKPJLILLL(bool ALLBGCHDGNC)
	{
	}

	private void LJHPMNOJKCJ()
	{
	}

	private bool MFEKLJLDMNM(Camera EIKILFDFMFB, Bounds GFPLEBPBHJC)
	{
		return false;
	}

	private void OnEnable()
	{
	}

	private void DHNEPGKAOEB()
	{
	}

	private void CKAECDAMLEE(Camera EIKILFDFMFB, Vector3 IOPIECLKGBK, Vector3 PNHOAFDLNJF, int GOCHMNLCEPE, ref Matrix4x4 GGPKILKEBBM)
	{
	}

	private void NIOEPGCGHOO()
	{
	}

	public void HJODLBHJKAI(NPKMMHOGALO ALLBGCHDGNC)
	{
	}

	private void IKKIOPLABDD()
	{
	}

	private int GEMAKGCGACE(IFEMCDPNHFB OBNIBOKFMLM)
	{
		return 0;
	}

	private void KBIGMFEDJKH(Camera EIKILFDFMFB)
	{
	}

	public void MNGFBBNHKMK()
	{
	}

	private void OnDisable()
	{
	}

	public void EKMNKKLHHHM(NPKMMHOGALO ALLBGCHDGNC)
	{
	}

	public void POFNNJJNFFN(LPHEHJBLEPI ALLBGCHDGNC)
	{
	}

	public void KGMPKNIGPBG()
	{
	}

	public void JKLPPMCLJJI(AKDPAMOBCFP ALLBGCHDGNC)
	{
	}

	public void JBHFDGKOKHL(LPHEHJBLEPI ALLBGCHDGNC)
	{
	}

	private Renderer[] MBLILGODLLD(LayerMask CFBIMLFGMND)
	{
		return null;
	}

	public bool EIMIKELIDBO()
	{
		return false;
	}

	private void Reset()
	{
	}

	private Material[] HFOBHOCHGAG(Material PLBEPEHAFMO, Mesh EEFAAGALFPO)
	{
		return null;
	}

	private void OnRenderObject()
	{
	}

	private Renderer[] OOAODFPDJAL(LayerMask CFBIMLFGMND)
	{
		return null;
	}

	private void DEPLEABAEPJ(ref Material JFDOIOKFPGG, string BDNPGCFGOLG)
	{
	}

	public void KPABICCDIIP(bool PGAPMNLLMHM)
	{
	}

	private void FOOMPJKOKED(int NMPBHHIPPHP)
	{
	}
}

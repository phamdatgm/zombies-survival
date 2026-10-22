using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Menu : MonoBehaviour
{
	private sealed class CDBPKEDALNC : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public GameObject go;

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
		public CDBPKEDALNC(int _003C_003E1__state)
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

	private sealed class GOCBIMNHIEI : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		private float _003Cwait_length_003E5__2;

		private float _003CpauseEndTime_003E5__3;

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
		public GOCBIMNHIEI(int _003C_003E1__state)
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

	private sealed class IGIGAHEKBHB : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public Menu _003C_003E4__this;

		public bool is_start_with_low_hp;

		private bool _003CisMainMenu_003E5__2;

		private float _003Ct_003E5__3;

		private Image _003Cimage_003E5__4;

		private Color _003Cnew_color_003E5__5;

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
		public IGIGAHEKBHB(int _003C_003E1__state)
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

	public static Menu KECGFPHIEHF;

	public GUIGarage ALPCPBBNEBA;

	public FuelManager LCCECGFFBGC;

	public NotificationsManager JJCNCKIDDKN;

	public AdvController ANIMNONMFFH;

	public AnalyticsController OJJAEEGGHJM;

	public Purchaser LDPFGAGNBEI;

	public BridgePHP DGKLJGCAGBJ;

	public GamePadController ONNBLPAKJHK;

	public GameObject FKLKNBMKDEK;

	public GameObject PPIFMMPACNC;

	public ConsoleTipsBottom HNAPOCNADJP;

	private const int EDEIMBMNPEK = 0;

	public static bool CCCHHLJEBKK;

	public static bool NAHIIOCLEMH;

	public static bool EDICJCHCNCB;

	public static bool OLFGGHMPPCK;

	public static bool MDLMIEDLJMC;

	public static bool NDMIIEOKFGB;

	public static bool DHDINHBJPFH;

	public static bool MCGFPLMDEKJ;

	public static int DPDMJEDMEDK;

	public static float ENGJPOMIPFI;

	public static bool JNJPCFMBDIB;

	public static bool FDPCJJJDGNH;

	public static bool BOAENEJELJP;

	public static float GCDHNMAHOEP;

	public static bool LLBGFMMKKHJ;

	public static bool GKEKNNOODHM;

	public bool OLLGOBJFFDI;

	private bool NIKKHEDGOBB;

	private bool HBKNDNGHNDI;

	public bool LADJPNBMCBN;

	public const int BKPLPHAFFJM = 180;

	public ShopItem GPGANGNBJLL;

	private bool LFGJCCPJGNK;

	public KKMHKJEGDLA CGHGJEECHDM;

	private IEnumerator EMCBONCDHGN;

	private bool KEFNAKGDLHF;

	private bool BBMHNGJMKNL;

	private int AALDIFOPHHP;

	public AccelerometerFix FKKGIALDFNG;

	public void OBLKMKHMBEA()
	{
	}

	private void LAFACBFLFLF()
	{
	}

	public void CBHHIGMKCJC()
	{
	}

	public static int HAPFNAIFOMA(int HFDKNJFKOJO, bool MAOJKHKLIKN)
	{
		return 0;
	}

	public static void BGKFMDFJFMA(CanvasScaler MEDNKCPCMIO, float MOJPAJIHNKI)
	{
	}

	public bool CLJDAMIIAKE()
	{
		return false;
	}

	private bool PNMOPPJFFDF()
	{
		return false;
	}

	private void OnApplicationFocus(bool BBOGLNPKKGI)
	{
	}

	public void EIABBDMGLHD()
	{
	}

	public void KLGOLHHGBKP()
	{
	}

	public void FPPIKAMLPDC()
	{
	}

	public void IKMGHNEEKFG()
	{
	}

	public void OCCACLIDKCM()
	{
	}

	public void JPGHCLJLKDC()
	{
	}

	private void PJEHMAFCMLI()
	{
	}

	public bool HMCFLJKHPAI()
	{
		return false;
	}

	public void NLDJOFLJDKJ(bool FJDCALHGHCI)
	{
	}

	public void FMEHJALLGBK()
	{
	}

	public void GDEFDCOIDNM()
	{
	}

	public void PPBIOKBJGPG()
	{
	}

	public void AJGHCKKKEGE()
	{
	}

	public void EFBCOMMLAGE()
	{
	}

	public void BMIIEMFFFEO()
	{
	}

	public void EDKJPDKMJGB(GameObject MIPKEALMBHI)
	{
	}

	private IEnumerator HNBGLFPDGMH()
	{
		return null;
	}

	public bool CEFAHBMMKCD()
	{
		return false;
	}

	public void CDFHCNMGCFI()
	{
	}

	public void AFPLNBDNJHM()
	{
	}

	public void JGDPPFPNOLB()
	{
	}

	public void NHEEMPFMAHD()
	{
	}

	public void ABLANDDDMOF()
	{
	}

	private void Start()
	{
	}

	public bool POLNAJBPECM(int EIGKFINFICB)
	{
		return false;
	}

	public IEnumerator ACJNNGIEIIJ(GameObject MIPKEALMBHI)
	{
		return null;
	}

	public void BOBGEDIMPGG(int HKGEOJPHLAN)
	{
	}

	public static bool JOPJDMLGDEF()
	{
		return false;
	}

	public void CGIIKCKFFLE()
	{
	}

	private void MAFIGMGAHCJ()
	{
	}

	public void IKGBHGHCJCL()
	{
	}

	public void MNGOIBGJMMG(bool EBOKAPAKELF)
	{
	}

	private bool JLEEACEPDIE()
	{
		return false;
	}

	public void NPHCCBBGINI()
	{
	}

	public bool OIDILFECPNP()
	{
		return false;
	}

	public void MEHOMCOOPFM()
	{
	}

	private void Awake()
	{
	}

	public IEnumerator LBKMBBLLINK(bool IIDDLPGHBHD)
	{
		return null;
	}

	private void EKMAFPGBHDL()
	{
	}

	public bool LDBOEHFLNFA(ShopItem MDBCFHDDHHA)
	{
		return false;
	}

	private void Update()
	{
	}

	public void DEIAOEOJDGI()
	{
	}

	public void PDCEALBDDHD()
	{
	}

	public void IKFJEPCBKJB()
	{
	}

	public void KJDAFBPKLLF()
	{
	}

	public void CKPDEIAFHEC()
	{
	}

	public void OLOGKIHIIEL()
	{
	}

	public void AFBPIADEOPC()
	{
	}

	public void LJDEGMJCOIG()
	{
	}

	public void CheatDetect()
	{
	}

	public void OOFKKAKFKEL(bool EIIDHBCJNNO)
	{
	}

	private bool LFLFCEGDBPJ()
	{
		return false;
	}

	private void LLEALPBNEEN()
	{
	}

	public void EKNLDPBPLDC()
	{
	}

	private void OnApplicationPause(bool HNCPGIHKOML)
	{
	}

	public void OODBEAHDBMH()
	{
	}

	private void IKHLIHGCCHH()
	{
	}

	public void AOJCIOLIMHF()
	{
	}

	public void INMDNKGHGEO()
	{
	}

	public void DEEFHDJMBAC()
	{
	}

	private void ANEDMKOIIOO()
	{
	}

	private void PHJCEJEOECH(Scene ODGHBELBCEK, LoadSceneMode CFNJMFOGJNA)
	{
	}
}

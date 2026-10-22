using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class RatingController : MonoBehaviour
{
	[Serializable]
	public class RatingWrapperData
	{
		public Rating[] rating;
	}

	public enum DBDHJONGNMF
	{
		GrandTotal = 0,
		ZombiesKilled = 1,
		BirdsKilled = 2,
		Flips = 3
	}

	public enum OCCMNGMHGHP
	{
		all_world = 0,
		local = 1
	}

	private sealed class MPMOFDOCDBD : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public RatingController _003C_003E4__this;

		private string _003Cerror_text_003E5__2;

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
		public MPMOFDOCDBD(int _003C_003E1__state)
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

	public GameObject PIGLJNICEDO;

	public RectTransform BLBKMHDKFMD;

	public bool HKGHDDMDBFB;

	private Vector3 LEFJDPLCJAP;

	public ScrollRect LAJILLAKKIB;

	private DBDHJONGNMF JCCEIMEKCAF;

	public Toggle[] BAOOLCOELKG;

	public GameObject EIBBOOMANFB;

	private OCCMNGMHGHP HPNJNACEFCF;

	public Toggle[] LLINMDNNPNH;

	public Image AEDPLPECPFB;

	public RectTransform ELDBJHKKDLO;

	public GameObject[] NOEHEKOMHAJ;

	public Transform GFJIPFFBPLJ;

	public GameObject JAOGBDHEDJO;

	public Color AJIIIPHJOGH;

	public RatingWrapperData PHJOHEFGKBK;

	public Rating[,][] PCFHJOFJFFJ;

	private float[,] PFGOKOLBIOO;

	public Text PFDNIPGDOLB;

	public Text ACACAIHBMIP;

	private UnityWebRequest DJCILMGNFHC;

	private IEnumerator PLFMLGHIKAK;

	public void EKGEIOGPKIJ()
	{
	}

	private void HIPELCKHJCI()
	{
	}

	public void BPPPAAMEJAF()
	{
	}

	public void BKGEGFOEGEO()
	{
	}

	private void PLCDDDDLCBB()
	{
	}

	public void MEDLEEIBALB()
	{
	}

	public void RatingOnChangeToggle(int type)
	{
	}

	public void JIGMJDHGBCJ()
	{
	}

	public IEnumerator LDGNMLFKAKM()
	{
		return null;
	}

	public void PAHDFNGJABH(DBDHJONGNMF GIHDNMOMBIG)
	{
	}

	public void BEGHPCPPIBK(int JEIDCHDLOGG, int LIJCAJCAIMC, Rating[] LAHMEIEJLEN)
	{
	}

	public void KFHMEBCIBOA()
	{
	}

	private void GGOIKHNAIJB(bool MDIDBDKGGJI)
	{
	}

	public void SegmentOnChangeToggle(int type)
	{
	}

	public void OJBAJGILIJN(int PCFMDDLGOIK, int LIJCAJCAIMC)
	{
	}

	private void HPAFDOMPACP()
	{
	}

	private void ALNNLEHPENN()
	{
	}

	public void LDNINGMNDLE()
	{
	}

	public void IELAOINFAPI()
	{
	}

	private string EDCLKAIGBGF(bool PGFNFDFOJKL)
	{
		return null;
	}

	public void PGHILJEKJEJ()
	{
	}
}

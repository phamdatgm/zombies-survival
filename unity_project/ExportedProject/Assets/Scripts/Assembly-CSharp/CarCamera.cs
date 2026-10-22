using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;

public class CarCamera : MonoBehaviour
{
	public enum FEGMKACGKGN
	{
		Auto = 0,
		Minimum = 1,
		Maximum = 2,
		Nitro = 3
	}

	private sealed class FPKDIMHPBPM : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public CarCamera _003C_003E4__this;

		private float _003Clast_max_delta_003E5__2;

		private float _003ChitTime_003E5__3;

		private int _003CshakeCounter_003E5__4;

		private float _003CshakeDistance_003E5__5;

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
		public FPKDIMHPBPM(int _003C_003E1__state)
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

	public Transform LIEHBGFFHFF;

	public Camera PEOBIGGOKBF;

	public CarController PEEMAHNEIHI;

	public FEGMKACGKGN PGAPMNLLMHM;

	private bool MEHDJFDHKNE;

	private float GNPJEBABCEJ;

	public float MMCJPAFDKPO;

	private Vector3 DPHNLFKANKO;

	public float KCMGAOBDAIL;

	public float MMHKIPHOHOK;

	private float AGPDPHGLLNO;

	public static float OLIEHFBNIEF;

	public float BJMMLAKPLCF;

	public float JOGMDOOMPBN;

	public float NLELOMCJOHP;

	public float DLHADBLLICJ;

	public int AHPLNGFAPLP;

	public int FKBDBHDDINH;

	public int GMGHOBHANGK;

	public int MINFEKLCEAI;

	public Vector3 LNDBDGLKMLD;

	private float LBMCAJJOMIL;

	private float JGHBJBCBFMN;

	private float BEOOOAFPGIK;

	public float GLFGDGFAEBK;

	public float KADAKHHDKKD;

	public float JFGADDLBHEO;

	public float DPKMLEDEBID;

	private int AKEFMNGNIFJ;

	private int PCIELBPDKBH;

	private float PCNOCPKGJEI;

	private int BMDLDAOAFAB;

	private float LFJDBFFFCFJ;

	private bool ACLOPJDHIJK;

	private Transform IPAJNEKEJEA;

	private float PGNMPLDJELM;

	public void OHIFDCBAEFL()
	{
	}

	public void IDBHFAEMGOB()
	{
	}

	public void KHDFDGMBOIJ()
	{
	}

	public Vector3 AAPGENGOABC()
	{
		return default;
	}

	public void BGKJCAIHANB()
	{
	}

	private void GFOMIMMNDBH()
	{
	}

	public IEnumerator OIKFBMHJDBN()
	{
		return null;
	}

	private void Update()
	{
	}

	public void IBOCKKJLDDJ(Transform BPEGLMBNNME)
	{
	}

	private void Start()
	{
	}
}

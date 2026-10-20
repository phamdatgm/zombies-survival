using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.Purchasing;
using UnityEngine.Purchasing.Security;

public class Purchaser : MonoBehaviour, IStoreListener
{
	[StructLayout((LayoutKind)3)]
	private struct EGHDFLLEDAF : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public Purchaser _003C_003E4__this;

		private TaskAwaiter _003C_003Eu__1;

		private void MoveNext()
		{
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	public string CPKEHBIPNGJ;

	public static bool PBCPPFALIJJ;

	private bool MCJPHMJFONO;

	private bool KOEBBIOEINO;

	private string HDONDELGHBK;

	public const string KADAPHLKJHN = "goldpack_1";

	public const string JIEMFBFFIBM = "goldpack_2";

	public const string JJKLLNBIJCC = "goldpack_3";

	public const string DFEHMFEDNBK = "goldpack_4";

	public const string EMCLEKPKENF = "goldpack_5";

	public const string JNGPDCLJKJN = "specialoffer_1";

	public const string KGJKAAKAMBA = "specialoffer_2";

	public const string GBMNAICIJAO = "specialoffer_3";

	public const string HPNONKOBNKN = "specialoffer_4";

	public const string IHGCKJNLBGM = "specialoffer_5";

	private static IStoreController FBFHOHCBLHM;

	private static IExtensionProvider LBKDBMGHJLI;

	public string GGADCIPGKOL;

	private CrossPlatformValidator NMCDBIEKCMM;

	private bool GAMMKMFMNJB;

	public void OnInitializeFailed(InitializationFailureReason AKEODMCLILB)
	{
	}

	private void AGBLHKIPEKA()
	{
	}

	public void KHDFDGMBOIJ()
	{
	}

	private void JCHHHBFEOBD(bool GDMHLJECAJK)
	{
	}

	[AsyncStateMachine(typeof(EGHDFLLEDAF))]
	private void CDCHAPHGJOJ()
	{
	}

	public void GFBPGOLOCCK()
	{
	}

	public void OnInitializeFailed(InitializationFailureReason AKEODMCLILB, string NGLPJEMCGCD)
	{
	}

	public void AEEDBGLDLIN(string CICIFFFOBLK)
	{
	}

	public void OnInitialized(IStoreController DLNBEHFJBGB, IExtensionProvider FNANHEPAKIO)
	{
	}

	public void EHGPGMBHPKL()
	{
	}

	private void MCDMAJGFBLE()
	{
	}

	public bool FGJALJLPMEN()
	{
		return false;
	}

	public void OnPurchaseFailed(Product PMCDAMDANFC, PurchaseFailureReason CDNGEEFJBHH)
	{
	}

	private void PKMJJHKCJAM()
	{
	}

	public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs OHOAJCLLPDH)
	{
		return PurchaseProcessingResult.Complete;
	}
}

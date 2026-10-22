using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;

namespace Unity.Services.Core.Internal;

internal class UnityServicesInternal : IUnityServices
{
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass33_0
	{
		public DependencyTree dependencyTree;

		public List<int> sortedPackageTypeHashes;

		public UnityServicesInternal _003C_003E4__this;

		public Stopwatch initStopwatch;
	}

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	private struct _003CEnableInitializationAsync_003Ed__36 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder _003C_003Et__builder;

		public UnityServicesInternal _003C_003E4__this;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	private struct _003CInitializeAsync_003Ed__27 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder _003C_003Et__builder;

		public InitializationOptions options;

		public UnityServicesInternal _003C_003E4__this;

		private TaskAwaiter<object> _003C_003Eu__1;

		private TaskAwaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	private struct _003CInitializeServicesAsync_003Ed__33 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder _003C_003Et__builder;

		public UnityServicesInternal _003C_003E4__this;

		private _003C_003Ec__DisplayClass33_0 _003C_003E8__1;

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

	[CompilerGenerated]
	private Action Initialized;

	[CompilerGenerated]
	private Action<Exception> InitializeFailed;

	internal bool CanInitialize;

	private TaskCompletionSource<object> m_Initialization;

	private readonly CoreMetrics Metrics;

	private readonly CoreDiagnostics Diagnostics;

	public ServicesInitializationState State { get; private set; }

	internal CoreRegistry Registry { get; }

	public UnityServicesInternal(CoreRegistry registry, CoreMetrics coreMetrics, CoreDiagnostics coreDiagnostics)
	{
	}

	[AsyncStateMachine(typeof(_003CInitializeAsync_003Ed__27))]
	public Task InitializeAsync(InitializationOptions options)
	{
		return null;
	}

	private void TriggerInitializeSuccess()
	{
	}

	private void TriggerInitializeFailed(Exception initException)
	{
	}

	private bool HasRequestedInitialization()
	{
		return false;
	}

	[AsyncStateMachine(typeof(_003CInitializeServicesAsync_003Ed__33))]
	private Task InitializeServicesAsync()
	{
		return null;
	}

	internal void EnableInitialization()
	{
	}

	[AsyncStateMachine(typeof(_003CEnableInitializationAsync_003Ed__36))]
	internal Task EnableInitializationAsync()
	{
		return null;
	}
}

using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;

namespace UnityEngine.UIElements;

public sealed class EventDispatcher
{
	private struct EventRecord
	{
		public EventBase m_Event;

		public IPanel m_Panel;
	}

	private struct DispatchContext
	{
		public uint m_GateCount;

		public Queue<EventRecord> m_Queue;
	}

	internal ClickDetector m_ClickDetector;

	private List<IEventDispatchingStrategy> m_DispatchingStrategies;

	private static readonly ObjectPool<Queue<EventRecord>> k_EventQueuePool;

	private Queue<EventRecord> m_Queue;

	private uint m_GateCount;

	private uint m_GateDepth;

	internal const int k_MaxGateDepth = 500;

	internal const int k_NumberOfEventsWithStackInfo = 10;

	internal const int k_NumberOfEventsWithEventInfo = 100;

	private int m_DispatchStackFrame;

	private EventBase m_CurrentEvent;

	private Stack<DispatchContext> m_DispatchContexts;

	private static readonly IEventDispatchingStrategy[] s_EditorStrategies;

	private bool m_Immediate;

	internal PointerDispatchState pointerState { get; }

	private bool dispatchImmediately => false;

	private bool processingEvents { set; }

	internal static EventDispatcher CreateForRuntime(IList<IEventDispatchingStrategy> strategies)
	{
		return null;
	}

	[Obsolete("Please use EventDispatcher.CreateDefault().")]
	internal EventDispatcher()
	{
	}

	private EventDispatcher(IList<IEventDispatchingStrategy> strategies)
	{
	}

	internal void Dispatch(EventBase evt, IPanel panel, DispatchMode dispatchMode)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	private bool HandleRecursiveState(EventBase evt)
	{
		return false;
	}

	internal void CloseGate()
	{
	}

	internal void OpenGate()
	{
	}

	private void ProcessEventQueue()
	{
	}

	private void ProcessEvent(EventBase evt, IPanel panel)
	{
	}

	private void ApplyDispatchingStrategies(EventBase evt, IPanel panel, bool imguiEventIsInitiallyUsed)
	{
	}
}

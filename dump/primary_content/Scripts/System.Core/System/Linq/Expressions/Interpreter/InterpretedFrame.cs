using System.Collections.Generic;
using System.Runtime.CompilerServices;

namespace System.Linq.Expressions.Interpreter;

internal sealed class InterpretedFrame
{
	[ThreadStatic]
	private static InterpretedFrame s_currentFrame;

	internal readonly Interpreter Interpreter;

	internal InterpretedFrame _parent;

	private readonly int[] _continuations;

	private int _continuationIndex;

	private int _pendingContinuation;

	private object _pendingValue;

	public readonly object[] Data;

	public readonly IStrongBox[] Closure;

	public int StackIndex;

	public int InstructionIndex;

	public string Name => null;

	internal InterpretedFrame(Interpreter interpreter, IStrongBox[] closure)
	{
	}

	public DebugInfo GetDebugInfo(int instructionIndex)
	{
		return null;
	}

	public void Push(object value)
	{
	}

	public void Push(bool value)
	{
	}

	public void Push(int value)
	{
	}

	public void Push(byte value)
	{
	}

	public void Push(sbyte value)
	{
	}

	public void Push(short value)
	{
	}

	public void Push(ushort value)
	{
	}

	public object Pop()
	{
		return null;
	}

	internal void SetStackDepth(int depth)
	{
	}

	public object Peek()
	{
		return null;
	}

	public void Dup()
	{
	}

	public IEnumerable<InterpretedFrameInfo> GetStackTraceDebugInfo()
	{
		return null;
	}

	internal void SaveTraceToException(Exception exception)
	{
	}

	internal InterpretedFrame Enter()
	{
		return null;
	}

	internal void Leave(InterpretedFrame prevFrame)
	{
	}

	internal bool IsJumpHappened()
	{
		return false;
	}

	public void RemoveContinuation()
	{
	}

	public void PushContinuation(int continuation)
	{
	}

	public int YieldToCurrentContinuation()
	{
		return 0;
	}

	public int YieldToPendingContinuation()
	{
		return 0;
	}

	internal void PushPendingContinuation()
	{
	}

	internal void PopPendingContinuation()
	{
	}

	public int Goto(int labelIndex, object value, bool gotoExceptionHandler)
	{
		return 0;
	}
}

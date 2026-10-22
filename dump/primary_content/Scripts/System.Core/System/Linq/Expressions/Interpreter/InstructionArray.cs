using System.Collections.Generic;

namespace System.Linq.Expressions.Interpreter;

internal struct InstructionArray
{
	internal sealed class DebugView
	{
		private readonly InstructionArray _array;

		public DebugView(InstructionArray array)
		{
		}

		public InstructionList.DebugView.InstructionView[] GetInstructionViews(bool includeDebugCookies = false)
		{
			return null;
		}
	}

	internal readonly int MaxStackDepth = 0;

	internal readonly int MaxContinuationDepth = 0;

	internal readonly Instruction[] Instructions = null;

	internal readonly object[] Objects = null;

	internal readonly RuntimeLabel[] Labels = null;

	internal readonly List<KeyValuePair<int, object>> DebugCookies = null;

	internal InstructionArray(int maxStackDepth, int maxContinuationDepth, Instruction[] instructions, object[] objects, RuntimeLabel[] labels, List<KeyValuePair<int, object>> debugCookies)
	{
	}
}

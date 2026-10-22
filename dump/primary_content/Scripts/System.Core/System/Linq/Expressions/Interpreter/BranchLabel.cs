using System.Collections.Generic;

namespace System.Linq.Expressions.Interpreter;

internal sealed class BranchLabel
{
	private int _targetIndex;

	private int _stackDepth;

	private int _continuationStackDepth;

	private List<int> _forwardBranchFixups;

	private int LabelIndex;

	internal bool HasRuntimeLabel => false;

	internal RuntimeLabel ToRuntimeLabel()
	{
		return default;
	}

	internal void Mark(InstructionList instructions)
	{
	}

	internal void AddBranch(InstructionList instructions, int branchIndex)
	{
	}

	internal void FixupBranch(InstructionList instructions, int branchIndex)
	{
	}
}

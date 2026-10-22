using System.Collections;

namespace System.Data;

internal class ConstraintEnumerator
{
	private IEnumerator _tables;

	private IEnumerator _constraints;

	private Constraint _currentObject;

	public ConstraintEnumerator(DataSet dataSet)
	{
	}

	public bool GetNext()
	{
		return false;
	}

	protected virtual bool IsValidCandidate(Constraint constraint)
	{
		return false;
	}
}

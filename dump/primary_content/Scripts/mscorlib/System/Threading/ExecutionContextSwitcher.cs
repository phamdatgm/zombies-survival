namespace System.Threading;

internal struct ExecutionContextSwitcher
{
	internal ExecutionContext.Reader outerEC;

	internal bool outerECBelongsToScope;

	internal object hecsw;

	internal Thread thread;

	internal bool UndoNoThrow()
	{
		return false;
	}

	internal void Undo()
	{
	}
}

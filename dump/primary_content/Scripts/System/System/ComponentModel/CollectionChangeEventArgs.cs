namespace System.ComponentModel;

/// <summary>Provides data for the <see cref="E:System.Data.DataColumnCollection.CollectionChanged" /> event.</summary>
public class CollectionChangeEventArgs : EventArgs
{
	private readonly CollectionChangeAction Action;

	private readonly object Element;

	/// <summary>Initializes a new instance of the <see cref="T:System.ComponentModel.CollectionChangeEventArgs" /> class.</summary>
	/// <param name="action">One of the <see cref="T:System.ComponentModel.CollectionChangeAction" /> values that specifies how the collection changed.</param>
	/// <param name="element">An <see cref="T:System.Object" /> that specifies the instance of the collection where the change occurred.</param>
	public CollectionChangeEventArgs(CollectionChangeAction action, object element)
	{
	}
}

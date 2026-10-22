namespace System.Data;

internal abstract class AutoIncrementValue
{
	private bool Auto;

	internal abstract object Current { get; set; }

	internal abstract long Seed { get; set; }

	internal abstract long Step { get; set; }

	internal abstract Type DataType { get; }

	internal abstract void SetCurrent(object value, IFormatProvider formatProvider);

	internal abstract void SetCurrentAndIncrement(object value);

	internal abstract void MoveAfter();

	internal AutoIncrementValue Clone()
	{
		return null;
	}
}

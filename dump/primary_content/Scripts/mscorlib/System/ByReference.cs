namespace System;

internal ref struct ByReference<T>(ref T value)
{
	private IntPtr _value = (IntPtr)0;

	public ref T Value
	{
		get
		{
			throw null;
		}
	}
}

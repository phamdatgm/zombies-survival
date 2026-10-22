namespace System.Data;

internal struct Range(int min, int max)
{
	private int _min = 0;

	private int _max = 0;

	private bool _isNotNull = false;

	public int Count => 0;

	public bool IsNull => false;

	public int Min => 0;

	internal void CheckNull()
	{
	}
}

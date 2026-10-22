namespace UnityEngine.TextCore.Text;

internal struct TextBackingContainer
{
	private uint[] m_Array = null;

	private int m_Count = 0;

	public int Capacity => 0;

	public int Count
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public uint this[int index]
	{
		get
		{
			return 0u;
		}
		set
		{
		}
	}

	public TextBackingContainer(int size)
	{
	}

	public void Resize(int size)
	{
	}
}

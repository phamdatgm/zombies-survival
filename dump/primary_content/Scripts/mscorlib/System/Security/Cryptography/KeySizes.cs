namespace System.Security.Cryptography;

/// <summary>Determines the set of valid key sizes for the symmetric cryptographic algorithms.</summary>
public sealed class KeySizes
{
	private int m_minSize;

	private int m_maxSize;

	private int m_skipSize;

	/// <summary>Initializes a new instance of the <see cref="T:System.Security.Cryptography.KeySizes" /> class with the specified key values.</summary>
	/// <param name="minSize">The minimum valid key size.</param>
	/// <param name="maxSize">The maximum valid key size.</param>
	/// <param name="skipSize">The interval between valid key sizes.</param>
	public KeySizes(int minSize, int maxSize, int skipSize)
	{
	}

	internal bool IsLegal(int keySize)
	{
		return false;
	}

	internal static bool IsLegalKeySize(KeySizes[] legalKeys, int size)
	{
		return false;
	}
}

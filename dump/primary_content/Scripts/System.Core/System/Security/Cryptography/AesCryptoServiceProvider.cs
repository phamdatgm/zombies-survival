namespace System.Security.Cryptography;

public sealed class AesCryptoServiceProvider : Aes
{
	public override byte[] IV
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public override byte[] Key
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public override int KeySize
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public override int FeedbackSize => 0;

	public override CipherMode Mode
	{
		get
		{
			return (CipherMode)0;
		}
		set
		{
		}
	}

	public override PaddingMode Padding
	{
		get
		{
			return (PaddingMode)0;
		}
		set
		{
		}
	}

	public override void GenerateIV()
	{
	}

	public override void GenerateKey()
	{
	}

	public override ICryptoTransform CreateDecryptor(byte[] key, byte[] iv)
	{
		return null;
	}

	public override ICryptoTransform CreateEncryptor(byte[] key, byte[] iv)
	{
		return null;
	}

	public override ICryptoTransform CreateDecryptor()
	{
		return null;
	}

	public override ICryptoTransform CreateEncryptor()
	{
		return null;
	}

	protected override void Dispose(bool disposing)
	{
	}
}

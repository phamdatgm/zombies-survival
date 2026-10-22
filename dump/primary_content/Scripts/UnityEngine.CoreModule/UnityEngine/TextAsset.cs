using System.Collections.Generic;
using System.Text;

namespace UnityEngine;

public class TextAsset : Object
{
	internal enum CreateOptions
	{
		None = 0,
		CreateNativeObject = 1
	}

	private static class EncodingUtility
	{
		internal static readonly KeyValuePair<byte[], Encoding>[] encodingLookup;

		internal static readonly Encoding targetEncoding;

		static EncodingUtility()
		{
		}
	}

	public byte[] bytes => null;

	public string text => null;

	private static void Internal_CreateInstance(TextAsset self, string text)
	{
	}

	public override string ToString()
	{
		return null;
	}

	public TextAsset()
	{
	}

	internal TextAsset(CreateOptions options, string text)
	{
	}

	internal static string DecodeString(byte[] bytes)
	{
		return null;
	}
}

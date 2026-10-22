using System.IO;
using System.Text;

namespace UnityEngine;

internal class UnityLogWriter : TextWriter
{
	public override Encoding Encoding => null;

	public static void WriteStringToUnityLog(string s)
	{
	}

	private static void WriteStringToUnityLogImpl(string s)
	{
	}

	public static void Init()
	{
	}

	public override void Write(char value)
	{
	}

	public override void Write(string s)
	{
	}

	public override void Write(char[] buffer, int index, int count)
	{
	}
}

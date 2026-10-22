using System;

namespace UnityEngine;

public struct JNINativeMethod
{
	public string name;

	public string signature;

	public IntPtr fnPtr;
}

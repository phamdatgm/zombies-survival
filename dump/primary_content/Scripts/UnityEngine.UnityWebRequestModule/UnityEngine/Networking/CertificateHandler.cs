using System;
using System.Runtime.InteropServices;
using UnityEngine.Scripting;

namespace UnityEngine.Networking;

[StructLayout((LayoutKind)0)]
public class CertificateHandler : IDisposable
{
	[NonSerialized]
	internal IntPtr m_Ptr;

	private static IntPtr Create(CertificateHandler obj)
	{
		return (IntPtr)0;
	}

	private void Release()
	{
	}

	protected CertificateHandler()
	{
	}

	~CertificateHandler()
	{
	}

	protected virtual bool ValidateCertificate(byte[] certificateData)
	{
		return false;
	}

	[RequiredByNativeCode]
	internal bool ValidateCertificateNative(byte[] certificateData)
	{
		return false;
	}

	public void Dispose()
	{
	}
}

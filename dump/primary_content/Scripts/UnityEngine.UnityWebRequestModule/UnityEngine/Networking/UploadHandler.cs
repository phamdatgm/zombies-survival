using System;
using System.Runtime.InteropServices;

namespace UnityEngine.Networking;

[StructLayout((LayoutKind)0)]
public class UploadHandler : IDisposable
{
	[NonSerialized]
	internal IntPtr m_Ptr;

	public string contentType
	{
		set
		{
		}
	}

	private void Release()
	{
	}

	internal UploadHandler()
	{
	}

	~UploadHandler()
	{
	}

	public virtual void Dispose()
	{
	}

	internal virtual void SetContentType(string newContentType)
	{
	}

	private void InternalSetContentType(string newContentType)
	{
	}
}

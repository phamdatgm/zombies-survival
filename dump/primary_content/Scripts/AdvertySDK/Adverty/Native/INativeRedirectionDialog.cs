using System;

namespace Adverty.Native;

public interface INativeRedirectionDialog : INativeClass
{
	void ShowRedirectionDialog(string url, IntPtr callback);
}

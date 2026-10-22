using System;

namespace Mono;

internal struct RuntimeEventHandle
{
	private IntPtr value;

	public override bool Equals(object obj)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}
}

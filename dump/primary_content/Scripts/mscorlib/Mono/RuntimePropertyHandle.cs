using System;

namespace Mono;

internal struct RuntimePropertyHandle
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

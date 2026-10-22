using System;
using System.Runtime.CompilerServices;

namespace Unity.Services.Core;

internal class ExternalUserIdProperty
{
	[CompilerGenerated]
	private Action<string> m_UserIdChanged;

	private string m_UserId;

	public string UserId
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public event Action<string> UserIdChanged
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}
}

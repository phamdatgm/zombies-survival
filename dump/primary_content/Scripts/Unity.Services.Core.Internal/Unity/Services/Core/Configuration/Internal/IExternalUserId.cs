using System;
using Unity.Services.Core.Internal;

namespace Unity.Services.Core.Configuration.Internal;

public interface IExternalUserId : IServiceComponent
{
	string UserId { get; }

	event Action<string> UserIdChanged;
}

using System.Collections.Generic;
using Unity.Services.Core.Configuration.Internal;
using Unity.Services.Core.Internal;
using Unity.Services.Core.Internal.Serialization;

namespace Unity.Services.Core.Configuration;

internal class ProjectConfiguration : IProjectConfiguration, IServiceComponent
{
	private readonly IReadOnlyDictionary<string, ConfigurationEntry> m_ConfigValues;

	private readonly IJsonSerializer Serializer;

	public ProjectConfiguration(IReadOnlyDictionary<string, ConfigurationEntry> configValues, IJsonSerializer serializer)
	{
	}

	public string GetString(string key, string defaultValue = null)
	{
		return null;
	}
}

namespace Unity.Services.Core;

internal static class UnityServicesBuilder
{
	internal delegate IUnityServices CreationDelegate(string servicesId);

	internal static CreationDelegate InstanceCreationDelegate { set; }
}

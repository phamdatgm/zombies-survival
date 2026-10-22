namespace System.ComponentModel;

/// <summary>Enables attribute redirection. This class cannot be inherited.</summary>
[AttributeUsage(AttributeTargets.Property)]
public class AttributeProviderAttribute : Attribute
{
	private readonly string TypeName;

	private readonly string PropertyName;
}

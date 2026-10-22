namespace System.ComponentModel;

/// <summary>Specifies the custom type description provider for a class. This class cannot be inherited.</summary>
[AttributeUsage(AttributeTargets.Class, Inherited = true)]
public sealed class TypeDescriptionProviderAttribute : Attribute
{
	private readonly string TypeName;

	/// <summary>Initializes a new instance of the <see cref="T:System.ComponentModel.TypeDescriptionProviderAttribute" /> class using the specified type name.</summary>
	/// <param name="typeName">The qualified name of the type.</param>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="typeName" /> is <see langword="null" />.</exception>
	public TypeDescriptionProviderAttribute(string typeName)
	{
	}
}

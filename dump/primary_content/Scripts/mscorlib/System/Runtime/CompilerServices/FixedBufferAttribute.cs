namespace System.Runtime.CompilerServices;

/// <summary>Indicates that a field should be treated as containing a fixed number of elements of the specified primitive type. This class cannot be inherited.</summary>
[AttributeUsage(AttributeTargets.Field, Inherited = false)]
public sealed class FixedBufferAttribute : Attribute
{
	private readonly Type ElementType;

	private readonly int Length;

	/// <summary>Initializes a new instance of the <see cref="T:System.Runtime.CompilerServices.FixedBufferAttribute" /> class.</summary>
	/// <param name="elementType">The type of the elements contained in the buffer.</param>
	/// <param name="length">The number of elements in the buffer.</param>
	public FixedBufferAttribute(Type elementType, int length)
	{
	}
}

namespace System.Security.AccessControl;

/// <summary>Controls access to objects without direct manipulation of access control lists (ACLs). This class is the abstract base class for the <see cref="T:System.Security.AccessControl.NativeObjectSecurity" /> class.</summary>
public abstract class CommonObjectSecurity : ObjectSecurity
{
	/// <summary>Initializes a new instance of the <see cref="T:System.Security.AccessControl.CommonObjectSecurity" /> class.</summary>
	/// <param name="isContainer">
	///   <see langword="true" /> if the new object is a container object.</param>
	protected CommonObjectSecurity(bool isContainer)
	{
	}
}

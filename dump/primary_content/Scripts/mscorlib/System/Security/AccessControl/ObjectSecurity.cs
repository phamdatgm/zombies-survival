using System.Threading;

namespace System.Security.AccessControl;

/// <summary>Provides the ability to control access to objects without direct manipulation of Access Control Lists (ACLs). This class is the abstract base class for the <see cref="T:System.Security.AccessControl.CommonObjectSecurity" /> and <see cref="T:System.Security.AccessControl.DirectoryObjectSecurity" /> classes.</summary>
public abstract class ObjectSecurity
{
	internal CommonSecurityDescriptor descriptor;

	private AccessControlSections sections_modified;

	private ReaderWriterLock rw_lock;

	/// <summary>Initializes a new instance of the <see cref="T:System.Security.AccessControl.ObjectSecurity" /> class.</summary>
	protected ObjectSecurity()
	{
	}

	/// <summary>Initializes a new instance of the <see cref="T:System.Security.AccessControl.ObjectSecurity" /> class.</summary>
	/// <param name="securityDescriptor">The <see cref="T:System.Security.AccessControl.CommonSecurityDescriptor" /> of the new <see cref="T:System.Security.AccessControl.CommonObjectSecurity" /> instance.</param>
	protected ObjectSecurity(CommonSecurityDescriptor securityDescriptor)
	{
	}

	/// <summary>Initializes a new instance of the <see cref="T:System.Security.AccessControl.ObjectSecurity" /> class.</summary>
	/// <param name="isContainer">
	///   <see langword="true" /> if the new <see cref="T:System.Security.AccessControl.ObjectSecurity" /> object is a container object.</param>
	/// <param name="isDS">True if the new <see cref="T:System.Security.AccessControl.ObjectSecurity" /> object is a directory object.</param>
	protected ObjectSecurity(bool isContainer, bool isDS)
	{
	}
}

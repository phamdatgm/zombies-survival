namespace System.ComponentModel;

/// <summary>Provides functionality required by all components.</summary>
[TypeConverter(typeof(ComponentConverter))]
public interface IComponent : IDisposable
{
	/// <summary>Gets or sets the <see cref="T:System.ComponentModel.ISite" /> associated with the <see cref="T:System.ComponentModel.IComponent" />.</summary>
	/// <returns>The <see cref="T:System.ComponentModel.ISite" /> object associated with the component; or <see langword="null" />, if the component does not have a site.</returns>
	ISite Site { get; }
}

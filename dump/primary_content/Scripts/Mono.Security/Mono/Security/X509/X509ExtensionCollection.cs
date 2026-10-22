using System.Collections;

namespace Mono.Security.X509;

public sealed class X509ExtensionCollection : CollectionBase, IEnumerable
{
	private bool readOnly;

	public X509Extension this[string oid] => null;

	public X509ExtensionCollection()
	{
	}

	public X509ExtensionCollection(ASN1 asn1)
	{
	}

	public int IndexOf(string oid)
	{
		return 0;
	}

	IEnumerator IEnumerable.GetEnumerator()
	{
		return null;
	}
}

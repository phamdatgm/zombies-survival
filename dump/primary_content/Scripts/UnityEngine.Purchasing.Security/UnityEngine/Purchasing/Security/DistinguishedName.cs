using LipingShare.LCLib.Asn1Processor;

namespace UnityEngine.Purchasing.Security;

internal class DistinguishedName
{
	public string Country { get; set; }

	public string Organization { get; set; }

	public string OrganizationalUnit { get; set; }

	public string Dnq { get; set; }

	public string State { get; set; }

	public string CommonName { get; set; }

	public string SerialNumber { set; }

	public DistinguishedName(Asn1Node n)
	{
	}

	public bool Equals(DistinguishedName n2)
	{
		return false;
	}

	public override string ToString()
	{
		return null;
	}
}

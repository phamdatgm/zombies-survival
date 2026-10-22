namespace Adverty.Communication.Models;

internal struct ErrorMessageModel
{
	public int code { get; set; }

	public string detail { get; set; }

	public override string ToString()
	{
		return null;
	}
}

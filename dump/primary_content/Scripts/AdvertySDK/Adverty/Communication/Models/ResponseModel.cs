namespace Adverty.Communication.Models;

internal abstract class ResponseModel
{
	public ErrorMessageModel[] errors { get; set; }

	public virtual bool IsError()
	{
		return false;
	}
}

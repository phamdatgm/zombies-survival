using System.Collections.Generic;

public class MaxCmpError
{
	public enum ErrorCode
	{
		Unspecified = -1,
		IntegrationError = 1,
		FormUnavailable = 2,
		FormNotRequired = 3
	}

	private ErrorCode Code { set; }

	private string Message { set; }

	private int CmpCode { set; }

	private string CmpMessage { set; }

	public static MaxCmpError Create(IDictionary<string, object> error)
	{
		return null;
	}

	private static ErrorCode GetCode(int code)
	{
		return (ErrorCode)0;
	}

	private MaxCmpError()
	{
	}
}

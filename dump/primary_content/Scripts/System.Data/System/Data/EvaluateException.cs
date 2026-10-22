using System.Runtime.Serialization;

namespace System.Data;

[Serializable]
public class EvaluateException : InvalidExpressionException
{
	protected EvaluateException(SerializationInfo info, StreamingContext context)
		: base(null, default)
	{
	}

	public EvaluateException()
		: base(null, default)
	{
	}

	public EvaluateException(string s)
		: base(null, default)
	{
	}
}

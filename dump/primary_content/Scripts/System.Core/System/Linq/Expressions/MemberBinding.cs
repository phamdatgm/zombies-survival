using System.Reflection;

namespace System.Linq.Expressions;

public abstract class MemberBinding
{
	private readonly MemberBindingType BindingType;

	private readonly MemberInfo Member;
}

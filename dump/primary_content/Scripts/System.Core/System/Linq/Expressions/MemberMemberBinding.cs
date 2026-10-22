using System.Collections.ObjectModel;

namespace System.Linq.Expressions;

public sealed class MemberMemberBinding : MemberBinding
{
	private readonly ReadOnlyCollection<MemberBinding> Bindings;
}

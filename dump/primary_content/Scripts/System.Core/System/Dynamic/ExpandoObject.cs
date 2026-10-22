using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq.Expressions;
using System.Reflection;

namespace System.Dynamic;

public sealed class ExpandoObject : IDynamicMetaObjectProvider, IDictionary<string, object>, ICollection<KeyValuePair<string, object>>, IEnumerable<KeyValuePair<string, object>>, IEnumerable
{
	private class KeyCollection : ICollection<string>, IEnumerable<string>, IEnumerable
	{
		private readonly ExpandoObject _expando;

		private readonly int _expandoVersion;

		private readonly int _expandoCount;

		private readonly ExpandoData _expandoData;

		public int Count => 0;

		public bool IsReadOnly => false;

		internal KeyCollection(ExpandoObject expando)
		{
		}

		private void CheckVersion()
		{
		}

		public void Add(string item)
		{
		}

		public void Clear()
		{
		}

		public bool Contains(string item)
		{
			return false;
		}

		public void CopyTo(string[] array, int arrayIndex)
		{
		}

		public bool Remove(string item)
		{
			return false;
		}

		public IEnumerator<string> GetEnumerator()
		{
			return null;
		}

		IEnumerator IEnumerable.GetEnumerator()
		{
			return null;
		}
	}

	private class ValueCollection : ICollection<object>, IEnumerable<object>, IEnumerable
	{
		private readonly ExpandoObject _expando;

		private readonly int _expandoVersion;

		private readonly int _expandoCount;

		private readonly ExpandoData _expandoData;

		public int Count => 0;

		public bool IsReadOnly => false;

		internal ValueCollection(ExpandoObject expando)
		{
		}

		private void CheckVersion()
		{
		}

		public void Add(object item)
		{
		}

		public void Clear()
		{
		}

		public bool Contains(object item)
		{
			return false;
		}

		public void CopyTo(object[] array, int arrayIndex)
		{
		}

		public bool Remove(object item)
		{
			return false;
		}

		public IEnumerator<object> GetEnumerator()
		{
			return null;
		}

		IEnumerator IEnumerable.GetEnumerator()
		{
			return null;
		}
	}

	private class MetaExpando : DynamicMetaObject
	{
		public new ExpandoObject Value => null;

		public MetaExpando(Expression expression, ExpandoObject value)
			: base(null, null)
		{
		}

		private DynamicMetaObject BindGetOrInvokeMember(DynamicMetaObjectBinder binder, string name, bool ignoreCase, DynamicMetaObject fallback, Func<DynamicMetaObject, DynamicMetaObject> fallbackInvoke)
		{
			return null;
		}

		public override DynamicMetaObject BindGetMember(GetMemberBinder binder)
		{
			return null;
		}

		public override DynamicMetaObject BindInvokeMember(InvokeMemberBinder binder, DynamicMetaObject[] args)
		{
			return null;
		}

		public override DynamicMetaObject BindSetMember(SetMemberBinder binder, DynamicMetaObject value)
		{
			return null;
		}

		public override DynamicMetaObject BindDeleteMember(DeleteMemberBinder binder)
		{
			return null;
		}

		public override IEnumerable<string> GetDynamicMemberNames()
		{
			return null;
		}

		private DynamicMetaObject AddDynamicTestAndDefer(DynamicMetaObjectBinder binder, ExpandoClass klass, ExpandoClass originalClass, DynamicMetaObject succeeds)
		{
			return null;
		}

		private ExpandoClass GetClassEnsureIndex(string name, bool caseInsensitive, ExpandoObject obj, out ExpandoClass klass, out int index)
		{
			klass = null;
			index = default;
			return null;
		}

		private Expression GetLimitedSelf()
		{
			return null;
		}

		private BindingRestrictions GetRestrictions()
		{
			return null;
		}
	}

	private class ExpandoData
	{
		internal static ExpandoData Empty;

		internal readonly ExpandoClass Class;

		private readonly object[] _dataArray;

		private int _version;

		internal object this[int index]
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		internal int Length => 0;

		private ExpandoData()
		{
		}

		internal ExpandoData(ExpandoClass klass, object[] data, int version)
		{
		}

		internal ExpandoData UpdateClass(ExpandoClass newClass)
		{
			return null;
		}

		private static int GetAlignedSize(int len)
		{
			return 0;
		}
	}

	private static readonly MethodInfo s_expandoTryGetValue;

	private static readonly MethodInfo s_expandoTrySetValue;

	private static readonly MethodInfo s_expandoTryDeleteValue;

	private static readonly MethodInfo s_expandoPromoteClass;

	private static readonly MethodInfo s_expandoCheckVersion;

	internal readonly object LockObject;

	private ExpandoData _data;

	private int _count;

	internal static readonly object Uninitialized;

	private PropertyChangedEventHandler _propertyChanged;

	internal ExpandoClass Class => null;

	ICollection<string> IDictionary<string, object>.Keys => null;

	ICollection<object> IDictionary<string, object>.Values => null;

	object IDictionary<string, object>.this[string key]
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	int ICollection<KeyValuePair<string, object>>.Count => 0;

	bool ICollection<KeyValuePair<string, object>>.IsReadOnly => false;

	internal bool TryGetValue(object indexClass, int index, string name, bool ignoreCase, out object value)
	{
		value = null;
		return false;
	}

	internal void TrySetValue(object indexClass, int index, object value, string name, bool ignoreCase, bool add)
	{
	}

	internal bool TryDeleteValue(object indexClass, int index, string name, bool ignoreCase, object deleteValue)
	{
		return false;
	}

	internal bool IsDeletedMember(int index)
	{
		return false;
	}

	private ExpandoData PromoteClassCore(ExpandoClass oldClass, ExpandoClass newClass)
	{
		return null;
	}

	internal void PromoteClass(object oldClass, object newClass)
	{
	}

	DynamicMetaObject IDynamicMetaObjectProvider.GetMetaObject(Expression parameter)
	{
		return null;
	}

	private void TryAddMember(string key, object value)
	{
	}

	private bool TryGetValueForKey(string key, out object value)
	{
		value = null;
		return false;
	}

	private bool ExpandoContainsKey(string key)
	{
		return false;
	}

	void IDictionary<string, object>.Add(string key, object value)
	{
	}

	bool IDictionary<string, object>.ContainsKey(string key)
	{
		return false;
	}

	bool IDictionary<string, object>.Remove(string key)
	{
		return false;
	}

	bool IDictionary<string, object>.TryGetValue(string key, out object value)
	{
		value = null;
		return false;
	}

	void ICollection<KeyValuePair<string, object>>.Add(KeyValuePair<string, object> item)
	{
	}

	void ICollection<KeyValuePair<string, object>>.Clear()
	{
	}

	bool ICollection<KeyValuePair<string, object>>.Contains(KeyValuePair<string, object> item)
	{
		return false;
	}

	void ICollection<KeyValuePair<string, object>>.CopyTo(KeyValuePair<string, object>[] array, int arrayIndex)
	{
	}

	bool ICollection<KeyValuePair<string, object>>.Remove(KeyValuePair<string, object> item)
	{
		return false;
	}

	IEnumerator<KeyValuePair<string, object>> IEnumerable<KeyValuePair<string, object>>.GetEnumerator()
	{
		return null;
	}

	IEnumerator IEnumerable.GetEnumerator()
	{
		return null;
	}

	private IEnumerator<KeyValuePair<string, object>> GetExpandoEnumerator(ExpandoData data, int version)
	{
		return null;
	}
}

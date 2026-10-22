using System;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine.Scripting;

namespace Unity.Properties.Internal;

internal class ReflectedPropertyBagProvider
{
	private readonly MethodInfo m_CreatePropertyMethod;

	private readonly MethodInfo m_CreatePropertyBagMethod;

	private readonly MethodInfo m_CreateIndexedCollectionPropertyBagMethod;

	private readonly MethodInfo m_CreateSetPropertyBagMethod;

	private readonly MethodInfo m_CreateKeyValueCollectionPropertyBagMethod;

	private readonly MethodInfo m_CreateKeyValuePairPropertyBagMethod;

	private readonly MethodInfo m_CreateArrayPropertyBagMethod;

	private readonly MethodInfo m_CreateListPropertyBagMethod;

	private readonly MethodInfo m_CreateHashSetPropertyBagMethod;

	private readonly MethodInfo m_CreateDictionaryPropertyBagMethod;

	public IPropertyBag CreatePropertyBag(Type type)
	{
		return null;
	}

	public IPropertyBag<TContainer> CreatePropertyBag<TContainer>()
	{
		return null;
	}

	[Preserve]
	private void CreateProperty<TContainer, TValue>(IMemberInfo member, ReflectedPropertyBag<TContainer> propertyBag)
	{
	}

	[Preserve]
	private IPropertyBag<TList> CreateIndexedCollectionPropertyBag<TList, TElement>() where TList : IList<TElement>
	{
		return null;
	}

	[Preserve]
	private IPropertyBag<TSet> CreateSetPropertyBag<TSet, TValue>() where TSet : ISet<TValue>
	{
		return null;
	}

	[Preserve]
	private IPropertyBag<TDictionary> CreateKeyValueCollectionPropertyBag<TDictionary, TKey, TValue>() where TDictionary : IDictionary<TKey, TValue>
	{
		return null;
	}

	[Preserve]
	private IPropertyBag<KeyValuePair<TKey, TValue>> CreateKeyValuePairPropertyBag<TKey, TValue>()
	{
		return null;
	}

	[Preserve]
	private IPropertyBag<TElement[]> CreateArrayPropertyBag<TElement>()
	{
		return null;
	}

	[Preserve]
	private IPropertyBag<List<TElement>> CreateListPropertyBag<TElement>()
	{
		return null;
	}

	[Preserve]
	private IPropertyBag<HashSet<TElement>> CreateHashSetPropertyBag<TElement>()
	{
		return null;
	}

	[Preserve]
	private IPropertyBag<Dictionary<TKey, TValue>> CreateDictionaryPropertyBag<TKey, TValue>()
	{
		return null;
	}

	private static IEnumerable<MemberInfo> GetPropertyMembers(Type type)
	{
		return null;
	}

	private static bool IsValidMember(MemberInfo memberInfo)
	{
		return false;
	}

	private static bool IsValidPropertyType(Type type)
	{
		return false;
	}
}

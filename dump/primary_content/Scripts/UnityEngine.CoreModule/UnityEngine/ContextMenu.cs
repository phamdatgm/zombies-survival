using System;
using UnityEngine.Scripting;

namespace UnityEngine;

[RequiredByNativeCode]
[AttributeUsage(AttributeTargets.Method, AllowMultiple = true)]
public sealed class ContextMenu : Attribute
{
}

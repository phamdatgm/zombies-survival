/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[CompilerGenerated]
private sealed class GUIGarage.POKBOGKBJMK : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 5154
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	public GUIGarage <>4__this; // 0x20

	// Properties
	private object System.Collections.Generic.IEnumerator<System.Object>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	public void .ctor(int <>1__state) { }

	[DebuggerHidden]
	private void System.IDisposable.Dispose() { }

	private bool MoveNext() { }

	[DebuggerHidden]
	private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

	[DebuggerHidden]
	private void System.Collections.IEnumerator.Reset() { }

	[DebuggerHidden]
	private object System.Collections.IEnumerator.get_Current() { }
}
*/

// ==== public void .ctor(int <>1__state) { }   @0xb13b5c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage_POKBOGKBJMK___ctor(void *__this,int __1__state)

{
  System_Object___ctor(__this,0);
  *(int *)((long)__this + 0x10) = __1__state;
  return;
}


// ==== private void System.IDisposable.Dispose() { }   @0xb18a78

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage_POKBOGKBJMK__System_IDisposable_Dispose(void *__this)

{
  return;
}


// ==== private bool MoveNext() { }   @0xb18a7c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GUIGarage_POKBOGKBJMK__MoveNext(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam0000000001916fd5 & 1) == 0) {
    func_0x00a67900(&UnityEngine_WaitForSeconds_TypeInfo);
    bRam0000000001916fd5 = 1;
  }
  if (*(int *)((long)__this + 0x10) == 1) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (*(long *)((long)__this + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    GUIGarage__BECFMMKIPHJ();
  }
  else if (*(int *)((long)__this + 0x10) == 0) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    uVar1 = func_0x00a67b44(_UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(0x3f000000,uVar1,0);
    *(undefined8 *)((long)__this + 0x18) = uVar1;
    *(undefined4 *)((long)__this + 0x10) = 1;
    return true;
  }
  return false;
}


// ==== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }   @0xb18b18

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGarage_POKBOGKBJMK__System_Collections_Generic_IEnumerator_System_Object__get_Current
                 (void *__this)

{
  return *(void **)((long)__this + 0x18);
}


// ==== private void System.Collections.IEnumerator.Reset() { }   @0xb18b20

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage_POKBOGKBJMK__System_Collections_IEnumerator_Reset(void *__this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00a67914(&System_NotSupportedException_TypeInfo);
  uVar1 = func_0x00a67b44();
  System_NotSupportedException___ctor(uVar1,0);
  uVar2 = func_0x00a67914(&Method_GUIGarage_POKBOGKBJMK_System_Collections_IEnumerator_Reset__);
  func_0x00a67a20(uVar1,uVar2);
  return;
}


// ==== private object System.Collections.IEnumerator.get_Current() { }   @0xb18b58

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGarage_POKBOGKBJMK__System_Collections_IEnumerator_get_Current(void *__this)

{
  return *(void **)((long)__this + 0x18);
}



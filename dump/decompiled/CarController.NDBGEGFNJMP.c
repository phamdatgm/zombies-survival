/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[CompilerGenerated]
private sealed class CarController.NDBGEGFNJMP : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 5182
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	public CarController <>4__this; // 0x20

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

// ==== public void .ctor(int <>1__state) { }   @0xb2e248

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController_NDBGEGFNJMP___ctor(void *__this,int __1__state)

{
  System_Object___ctor(__this,0);
  *(int *)((long)__this + 0x10) = __1__state;
  return;
}


// ==== private void System.IDisposable.Dispose() { }   @0xb2e270

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController_NDBGEGFNJMP__System_IDisposable_Dispose(void *__this)

{
  return;
}


// ==== private bool MoveNext() { }   @0xb2e274

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool CarController_NDBGEGFNJMP__MoveNext(void *__this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam000000000191704f & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_WaitForSeconds_TypeInfo);
    bRam000000000191704f = 1;
  }
  lVar3 = *(long *)((long)__this + 0x20);
  if (*(int *)((long)__this + 0x10) == 1) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (((lVar3 == 0) || (*(long *)(lVar3 + 0x30) == 0)) ||
       (lVar3 = *(long *)(*(long *)(lVar3 + 0x30) + 0x80), lVar3 == 0)) goto LAB_00c2e3e8;
    GUIWindow__HEGIHOAJOKK(lVar3,0,0);
  }
  else if (*(int *)((long)__this + 0x10) == 0) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    CarController.MKEGHDPIIFK = 1;
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar1 = Main.FBDDKIOEKDM;
    if (lVar1 != 0) {
      DAFNMLEKHAD__JJAPPMFCNFA(lVar1,1,0);
      CarController.HCILEAABENL = 0;
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x218) = 0;
        uVar2 = func_0x00a67b44(_UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(0x40400000,uVar2,0);
        *(undefined8 *)((long)__this + 0x18) = uVar2;
        *(undefined4 *)((long)__this + 0x10) = 1;
        return true;
      }
    }
LAB_00c2e3e8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  return false;
}


// ==== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }   @0xb2e3ec

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * CarController_NDBGEGFNJMP__System_Collections_Generic_IEnumerator_System_Object__get_Current
                 (void *__this)

{
  return *(void **)((long)__this + 0x18);
}


// ==== private void System.Collections.IEnumerator.Reset() { }   @0xb2e3f4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController_NDBGEGFNJMP__System_Collections_IEnumerator_Reset(void *__this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00a67914(&System_NotSupportedException_TypeInfo);
  uVar1 = func_0x00a67b44();
  System_NotSupportedException___ctor(uVar1,0);
  uVar2 = func_0x00a67914(&Method_CarController_NDBGEGFNJMP_System_Collections_IEnumerator_Reset__);
  func_0x00a67a20(uVar1,uVar2);
  return;
}


// ==== private object System.Collections.IEnumerator.get_Current() { }   @0xb2e42c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * CarController_NDBGEGFNJMP__System_Collections_IEnumerator_get_Current(void *__this)

{
  return *(void **)((long)__this + 0x18);
}



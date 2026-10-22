/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[CompilerGenerated]
private sealed class Menu.GOCBIMNHIEI : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 5197
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	private float <wait_length>5__2; // 0x20
	private float <pauseEndTime>5__3; // 0x24

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

// ==== public void .ctor(int <>1__state) { }   @0xb36db0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu_GOCBIMNHIEI___ctor(void *__this,int __1__state)

{
  System_Object___ctor(__this,0);
  *(int *)((long)__this + 0x10) = __1__state;
  return;
}


// ==== private void System.IDisposable.Dispose() { }   @0xb3b900

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu_GOCBIMNHIEI__System_IDisposable_Dispose(void *__this)

{
  return;
}


// ==== private bool MoveNext() { }   @0xb3b904

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Menu_GOCBIMNHIEI__MoveNext(void *__this)

{
  float fVar1;
  
  if ((bRam000000000191710a & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_CheatDetectCloseGame);
    bRam000000000191710a = 1;
  }
  if (*(int *)((long)__this + 0x10) == 1) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)((long)__this + 0x10) != 0) {
      return false;
    }
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    *(undefined4 *)((long)__this + 0x20) = 0x40400000;
    fVar1 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
    *(float *)((long)__this + 0x24) = fVar1 + *(float *)((long)__this + 0x20);
  }
  fVar1 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
  if (*(float *)((long)__this + 0x24) <= fVar1) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__EEKNCFLMGDP(_Str_CheatDetectCloseGame,0);
    if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Application__Quit(0);
    return false;
  }
  UnityEngine_Time__get_realtimeSinceStartup(0);
  *(undefined8 *)((long)__this + 0x18) = 0;
  *(undefined4 *)((long)__this + 0x10) = 1;
  return true;
}


// ==== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }   @0xb3ba10

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Menu_GOCBIMNHIEI__System_Collections_Generic_IEnumerator_System_Object__get_Current
                 (void *__this)

{
  return *(void **)((long)__this + 0x18);
}


// ==== private void System.Collections.IEnumerator.Reset() { }   @0xb3ba18

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu_GOCBIMNHIEI__System_Collections_IEnumerator_Reset(void *__this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00a67914(&System_NotSupportedException_TypeInfo);
  uVar1 = func_0x00a67b44();
  System_NotSupportedException___ctor(uVar1,0);
  uVar2 = func_0x00a67914(&Method_Menu_GOCBIMNHIEI_System_Collections_IEnumerator_Reset__);
  func_0x00a67a20(uVar1,uVar2);
  return;
}


// ==== private object System.Collections.IEnumerator.get_Current() { }   @0xb3ba50

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Menu_GOCBIMNHIEI__System_Collections_IEnumerator_get_Current(void *__this)

{
  return *(void **)((long)__this + 0x18);
}



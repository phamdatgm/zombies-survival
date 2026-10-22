/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[CompilerGenerated]
private sealed class GUIGameplay.IKFEHJCMKKN : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 5297
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	public GUIGameplay <>4__this; // 0x20

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

// ==== public void .ctor(int <>1__state) { }   @0xb60660

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay_IKFEHJCMKKN___ctor(void *__this,int __1__state)

{
  System_Object___ctor(__this,0);
  *(int *)((long)__this + 0x10) = __1__state;
  return;
}


// ==== private void System.IDisposable.Dispose() { }   @0xb67720

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay_IKFEHJCMKKN__System_IDisposable_Dispose(void *__this)

{
  return;
}


// ==== private bool MoveNext() { }   @0xb67724

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GUIGameplay_IKFEHJCMKKN__MoveNext(void *__this)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((bRam0000000001917241 & 1) == 0) {
    func_0x00a67900(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    func_0x00a67900(&Str_2);
    func_0x00a67900(&Str_1);
    bRam0000000001917241 = 1;
  }
  if (*(uint *)((long)__this + 0x10) < 4) {
    lVar2 = *(long *)((long)__this + 0x20);
    switch(*(uint *)((long)__this + 0x10)) {
    case 0:
      *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
      if ((lVar2 != 0) && (*(long *)(lVar2 + 0x88) != 0)) {
        GUIWindow__JGDCBENNDFO(*(long *)(lVar2 + 0x88),0,0);
        uVar3 = func_0x00a67b44(_UnityEngine_WaitForSecondsRealtime_TypeInfo);
        UnityEngine_WaitForSecondsRealtime___ctor(0x3e99999a,uVar3,0);
        *(undefined8 *)((long)__this + 0x18) = uVar3;
        *(undefined4 *)((long)__this + 0x10) = 1;
        return true;
      }
code_r0x00c678a0:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    case 1:
      *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
      if (lVar2 == 0) goto code_r0x00c678a0;
      GUIGameplay__PEDBEOIPIIB(lVar2,_Str_2);
      uVar3 = func_0x00a67b44(_UnityEngine_WaitForSecondsRealtime_TypeInfo);
      UnityEngine_WaitForSecondsRealtime___ctor(0x3f800000,uVar3,0);
      uVar4 = 2;
      *(undefined8 *)((long)__this + 0x18) = uVar3;
      break;
    case 2:
      *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
      if (lVar2 == 0) goto code_r0x00c678a0;
      GUIGameplay__PEDBEOIPIIB(lVar2,_Str_1);
      uVar3 = func_0x00a67b44(_UnityEngine_WaitForSecondsRealtime_TypeInfo);
      UnityEngine_WaitForSecondsRealtime___ctor(0x3f800000,uVar3,0);
      *(undefined8 *)((long)__this + 0x18) = uVar3;
      uVar4 = 3;
      break;
    case 3:
      *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
      if (lVar2 == 0) goto code_r0x00c678a0;
      GUIGameplay__ButtonRewardEncyclopediaItem(lVar2,1);
      goto LAB_00c67890;
    }
    *(undefined4 *)((long)__this + 0x10) = uVar4;
    bVar1 = true;
  }
  else {
LAB_00c67890:
    bVar1 = false;
  }
  return bVar1;
}


// ==== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }   @0xb678a4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGameplay_IKFEHJCMKKN__System_Collections_Generic_IEnumerator_System_Object__get_Current
                 (void *__this)

{
  return *(void **)((long)__this + 0x18);
}


// ==== private void System.Collections.IEnumerator.Reset() { }   @0xb678ac

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay_IKFEHJCMKKN__System_Collections_IEnumerator_Reset(void *__this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00a67914(&System_NotSupportedException_TypeInfo);
  uVar1 = func_0x00a67b44();
  System_NotSupportedException___ctor(uVar1,0);
  uVar2 = func_0x00a67914(&Method_GUIGameplay_IKFEHJCMKKN_System_Collections_IEnumerator_Reset__);
  func_0x00a67a20(uVar1,uVar2);
  return;
}


// ==== private object System.Collections.IEnumerator.get_Current() { }   @0xb678e4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGameplay_IKFEHJCMKKN__System_Collections_IEnumerator_get_Current(void *__this)

{
  return *(void **)((long)__this + 0x18);
}



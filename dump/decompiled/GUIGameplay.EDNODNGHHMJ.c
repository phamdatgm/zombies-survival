/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[CompilerGenerated]
private sealed class GUIGameplay.EDNODNGHHMJ : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 5295
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	public GUICoins tm; // 0x20
	public GUIGameplay <>4__this; // 0x28
	private int <start_value>5__2; // 0x30
	private float <anim_length>5__3; // 0x34
	private int <final_value>5__4; // 0x38
	private float <pauseEndTime>5__5; // 0x3C

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

// ==== public void .ctor(int <>1__state) { }   @0xb632fc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay_EDNODNGHHMJ___ctor(void *__this,int __1__state)

{
  System_Object___ctor(__this,0);
  *(int *)((long)__this + 0x10) = __1__state;
  return;
}


// ==== private void System.IDisposable.Dispose() { }   @0xb670e8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay_EDNODNGHHMJ__System_IDisposable_Dispose(void *__this)

{
  return;
}


// ==== private bool MoveNext() { }   @0xb670ec

/* WARNING: Removing unreachable block (ram,0x00c67210) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GUIGameplay_EDNODNGHHMJ__MoveNext(void *__this)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  int iStack_34;
  
  if ((bRam000000000191723f & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    bRam000000000191723f = 1;
  }
  lVar5 = *(long *)((long)__this + 0x28);
  if (*(int *)((long)__this + 0x10) == 1) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)((long)__this + 0x10) != 0) {
      return false;
    }
    *(undefined4 *)((long)__this + 0x30) = 0;
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if ((this.tm == 0) ||
       (plVar2 = this.tm.CIDKMFLFJEJ, plVar2 == (long *)0x0))
    goto LAB_00c6731c;
    uVar3 = (**(code **)(*plVar2 + 0x598))(plVar2,*(undefined8 *)(*plVar2 + 0x5a0));
    uVar4 = System_Int32__TryParse(uVar3,(undefined4 *)((long)__this + 0x30),0);
    if ((uVar4 & 1) == 0) {
      return false;
    }
    *(undefined4 *)((long)__this + 0x34) = 0x3f000000;
    iVar1 = *(int *)((long)__this + 0x30);
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(int *)((long)__this + 0x38) = CarController.GLGHPCHBONI + iVar1;
    fVar6 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
    *(float *)((long)__this + 0x3c) = fVar6 + *(float *)((long)__this + 0x34);
  }
  fVar6 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
  fVar7 = *(float *)((long)__this + 0x3c);
  if (fVar6 < fVar7) {
    fVar6 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
    if (this.tm != 0) {
      plVar2 = this.tm.CIDKMFLFJEJ;
      fVar6 = 1.0 - (fVar7 - fVar6) / *(float *)((long)__this + 0x34);
      if (fVar6 < 0.0) {
        fVar6 = 0.0;
      }
      fVar6 = fVar6 * ((float)*(int *)((long)__this + 0x38) - (float)*(int *)((long)__this + 0x30))
              + (float)*(int *)((long)__this + 0x30);
      iStack_34 = -0x80000000;
      if (fVar6 != INFINITY) {
        iStack_34 = (int)fVar6;
      }
      uVar3 = System_Int32__ToString(&iStack_34,0);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x5a8))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x5b0));
        *(undefined8 *)((long)__this + 0x18) = 0;
        *(undefined4 *)((long)__this + 0x10) = 1;
        return true;
      }
    }
  }
  else if (((this.tm != 0) && (lVar5 != 0)) &&
          (plVar2 = this.tm.CIDKMFLFJEJ, plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x2a8))
              (*(undefined4 *)(lVar5 + 0x300),*(undefined4 *)(lVar5 + 0x304),
               *(undefined4 *)(lVar5 + 0x308),*(undefined4 *)(lVar5 + 0x30c),plVar2,
               *(undefined8 *)(*plVar2 + 0x2b0));
    if (this.tm != 0) {
      GUICoins__ICMOCEHIFOI(this.tm,0);
      if (this.tm != 0) {
        plVar2 = this.tm.CIDKMFLFJEJ;
        uVar3 = System_Int32__ToString((long)__this + 0x38,0);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x5a8))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x5b0));
          return false;
        }
      }
    }
  }
LAB_00c6731c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }   @0xb67320

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGameplay_EDNODNGHHMJ__System_Collections_Generic_IEnumerator_System_Object__get_Current
                 (void *__this)

{
  return *(void **)((long)__this + 0x18);
}


// ==== private void System.Collections.IEnumerator.Reset() { }   @0xb67328

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay_EDNODNGHHMJ__System_Collections_IEnumerator_Reset(void *__this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00a67914(&System_NotSupportedException_TypeInfo);
  uVar1 = func_0x00a67b44();
  System_NotSupportedException___ctor(uVar1,0);
  uVar2 = func_0x00a67914(&Method_GUIGameplay_EDNODNGHHMJ_System_Collections_IEnumerator_Reset__);
  func_0x00a67a20(uVar1,uVar2);
  return;
}


// ==== private object System.Collections.IEnumerator.get_Current() { }   @0xb67360

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGameplay_EDNODNGHHMJ__System_Collections_IEnumerator_get_Current(void *__this)

{
  return *(void **)((long)__this + 0x18);
}



/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[CompilerGenerated]
private sealed class Main.NEFHOJFJODH : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 5289
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	public MCBLACFGKKK fadeType; // 0x20
	public AudioSource _audio; // 0x28
	public float timer; // 0x30
	private float <start>5__2; // 0x34
	private float <end>5__3; // 0x38
	private float <i>5__4; // 0x3C
	private float <step>5__5; // 0x40

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

// ==== public void .ctor(int <>1__state) { }   @0xb5e37c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Main_NEFHOJFJODH___ctor(void *__this,int __1__state)

{
  System_Object___ctor(__this,0);
  *(int *)((long)__this + 0x10) = __1__state;
  return;
}


// ==== private void System.IDisposable.Dispose() { }   @0xb5eb7c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Main_NEFHOJFJODH__System_IDisposable_Dispose(void *__this)

{
  return;
}


// ==== private bool MoveNext() { }   @0xb5eb80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Main_NEFHOJFJODH__MoveNext(void *__this)

{
  bool bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam0000000001917211 & 1) == 0) {
    func_0x00a67900(&UnityEngine_WaitForSeconds_TypeInfo);
    bRam0000000001917211 = 1;
  }
  if (*(int *)((long)__this + 0x10) == 1) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)((long)__this + 0x10) != 0) {
      return false;
    }
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (this.fadeType == 0) {
      bVar1 = true;
      uVar3 = 0;
    }
    else {
      if (this._audio == 0) goto LAB_00c5ed10;
      uVar3 = UnityEngine_AudioSource__get_volume(this._audio,0);
      bVar1 = this.fadeType == 0;
    }
    uVar5 = 0x3f333333;
    if (!bVar1) {
      uVar5 = 0;
    }
    *(undefined4 *)((long)__this + 0x3c) = 0;
    *(undefined4 *)((long)__this + 0x34) = uVar3;
    *(undefined4 *)((long)__this + 0x38) = uVar5;
    *(float *)((long)__this + 0x40) = 1.0 / this.timer;
    if (bVar1) {
      if (this._audio == 0) goto LAB_00c5ed10;
      UnityEngine_AudioSource__Play(this._audio,0);
    }
  }
  fVar6 = *(float *)((long)__this + 0x3c);
  if (fVar6 <= 1.0) {
    fVar7 = *(float *)((long)__this + 0x40);
    fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar6 = fVar6 + fVar7 * fVar4;
    *(float *)((long)__this + 0x3c) = fVar6;
    if (this._audio != 0) {
      bVar1 = fVar6 < 0.0;
      if (1.0 < fVar6) {
        fVar6 = 1.0;
      }
      if (bVar1) {
        fVar6 = 0.0;
      }
      UnityEngine_AudioSource__set_volume
                (*(float *)((long)__this + 0x34) +
                 fVar6 * (*(float *)((long)__this + 0x38) - *(float *)((long)__this + 0x34)),
                 this._audio,0);
      fVar4 = *(float *)((long)__this + 0x40);
      fVar6 = (float)UnityEngine_Time__get_deltaTime(0);
      uVar2 = func_0x00a67b44(_UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(fVar4 * fVar6,uVar2,0);
      *(undefined8 *)((long)__this + 0x18) = uVar2;
      *(undefined4 *)((long)__this + 0x10) = 1;
      return true;
    }
LAB_00c5ed10:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (this.fadeType == 1) {
    if (this._audio == 0) goto LAB_00c5ed10;
    UnityEngine_AudioSource__Stop(this._audio,0);
  }
  return false;
}


// ==== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }   @0xb5ed14

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Main_NEFHOJFJODH__System_Collections_Generic_IEnumerator_System_Object__get_Current
                 (void *__this)

{
  return *(void **)((long)__this + 0x18);
}


// ==== private void System.Collections.IEnumerator.Reset() { }   @0xb5ed1c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Main_NEFHOJFJODH__System_Collections_IEnumerator_Reset(void *__this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00a67914(&System_NotSupportedException_TypeInfo);
  uVar1 = func_0x00a67b44();
  System_NotSupportedException___ctor(uVar1,0);
  uVar2 = func_0x00a67914(&Method_Main_NEFHOJFJODH_System_Collections_IEnumerator_Reset__);
  func_0x00a67a20(uVar1,uVar2);
  return;
}


// ==== private object System.Collections.IEnumerator.get_Current() { }   @0xb5ed54

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Main_NEFHOJFJODH__System_Collections_IEnumerator_get_Current(void *__this)

{
  return *(void **)((long)__this + 0x18);
}



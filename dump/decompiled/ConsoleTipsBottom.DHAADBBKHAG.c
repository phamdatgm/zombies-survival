/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[CompilerGenerated]
private sealed class ConsoleTipsBottom.DHAADBBKHAG : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 5240
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	public ConsoleTipsBottom <>4__this; // 0x20
	public bool isShow; // 0x28
	private Vector3 <pos>5__2; // 0x2C
	private float <final_pos_y>5__3; // 0x38
	private float <initY>5__4; // 0x3C
	private float <anim_length>5__5; // 0x40
	private float <pauseEndTime>5__6; // 0x44

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

// ==== public void .ctor(int <>1__state) { }   @0xb4be14

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ConsoleTipsBottom_DHAADBBKHAG___ctor(void *__this,int __1__state)

{
  System_Object___ctor(__this,0);
  *(int *)((long)__this + 0x10) = __1__state;
  return;
}


// ==== private void System.IDisposable.Dispose() { }   @0xb4be3c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ConsoleTipsBottom_DHAADBBKHAG__System_IDisposable_Dispose(void *__this)

{
  return;
}


// ==== private bool MoveNext() { }   @0xb4be40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool ConsoleTipsBottom_DHAADBBKHAG__MoveNext(void *__this)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 in_s1;
  float fVar6;
  float fVar7;
  float HPHJFKDLPKG;
  float JGBIHEGEMJP;
  
  if ((bRam000000000191716e & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam000000000191716e = 1;
  }
  lVar3 = *(long *)((long)__this + 0x20);
  if (*(int *)((long)__this + 0x10) == 1) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)((long)__this + 0x10) != 0) {
      return false;
    }
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (lVar3 == 0) goto LAB_00c4c038;
    *(undefined1 *)(lVar3 + 0x70) = 1;
    if (this.isShow != '\0') {
      *(undefined1 *)(lVar3 + 0x71) = 1;
    }
    if (*(long *)(lVar3 + 0x60) == 0) goto LAB_00c4c038;
    uVar4 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar3 + 0x60),0);
    *(undefined4 *)((long)__this + 0x2c) = uVar4;
    *(undefined4 *)((long)__this + 0x30) = in_s1;
    *(undefined4 *)((long)__this + 0x34) = 0;
    if (this.isShow == '\0') {
      *(undefined4 *)((long)__this + 0x38) = 0xc27c0000;
    }
    else {
      *(undefined4 *)((long)__this + 0x30) = 0xc27c0000;
      *(undefined4 *)((long)__this + 0x38) = 0;
      lVar2 = UnityEngine_Component__get_gameObject(lVar3,0);
      if (lVar2 == 0) goto LAB_00c4c038;
      UnityEngine_GameObject__SetActive(lVar2,1,0);
      in_s1 = *(undefined4 *)((long)__this + 0x30);
    }
    *(undefined4 *)((long)__this + 0x3c) = in_s1;
    if (*(long *)(lVar3 + 0x60) == 0) goto LAB_00c4c038;
    UnityEngine_RectTransform__set_anchoredPosition
              (*(undefined4 *)((long)__this + 0x2c),*(long *)(lVar3 + 0x60),0);
    *(undefined4 *)((long)__this + 0x40) = 0x3f000000;
    fVar5 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
    *(float *)((long)__this + 0x44) = fVar5 + *(float *)((long)__this + 0x40);
  }
  fVar5 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
  fVar7 = *(float *)((long)__this + 0x44);
  if (fVar7 <= fVar5) {
    *(undefined4 *)((long)__this + 0x30) = *(undefined4 *)((long)__this + 0x38);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x60) == 0)) goto LAB_00c4c038;
    UnityEngine_RectTransform__set_anchoredPosition
              (*(undefined4 *)((long)__this + 0x2c),*(long *)(lVar3 + 0x60),0);
    if (this.isShow == '\0') {
      lVar2 = UnityEngine_Component__get_gameObject(lVar3,0);
      if (lVar2 == 0) goto LAB_00c4c038;
      UnityEngine_GameObject__SetActive(lVar2,0,0);
    }
    bVar1 = false;
    *(undefined2 *)(lVar3 + 0x70) = 0;
  }
  else {
    fVar5 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
    JGBIHEGEMJP = *(float *)((long)__this + 0x3c);
    fVar6 = *(float *)((long)__this + 0x40);
    HPHJFKDLPKG = *(float *)((long)__this + 0x38);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    fVar5 = Main__BKPNLKDKAKA(JGBIHEGEMJP,HPHJFKDLPKG,1.0 - (fVar7 - fVar5) / fVar6);
    *(float *)((long)__this + 0x30) = fVar5;
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x60) == 0)) {
LAB_00c4c038:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (*(undefined4 *)((long)__this + 0x2c),fVar5,*(long *)(lVar3 + 0x60),0);
    bVar1 = true;
    *(undefined8 *)((long)__this + 0x18) = 0;
    *(undefined4 *)((long)__this + 0x10) = 1;
  }
  return bVar1;
}


// ==== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }   @0xb4c03c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * ConsoleTipsBottom_DHAADBBKHAG__System_Collections_Generic_IEnumerator_System_Object__get_Current
                 (void *__this)

{
  return *(void **)((long)__this + 0x18);
}


// ==== private void System.Collections.IEnumerator.Reset() { }   @0xb4c044

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ConsoleTipsBottom_DHAADBBKHAG__System_Collections_IEnumerator_Reset(void *__this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00a67914(&System_NotSupportedException_TypeInfo);
  uVar1 = func_0x00a67b44();
  System_NotSupportedException___ctor(uVar1,0);
  uVar2 = func_0x00a67914(&
                          Method_ConsoleTipsBottom_DHAADBBKHAG_System_Collections_IEnumerator_Reset__
                         );
  func_0x00a67a20(uVar1,uVar2);
  return;
}


// ==== private object System.Collections.IEnumerator.get_Current() { }   @0xb4c07c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * ConsoleTipsBottom_DHAADBBKHAG__System_Collections_IEnumerator_get_Current(void *__this)

{
  return *(void **)((long)__this + 0x18);
}



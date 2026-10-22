/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[CompilerGenerated]
private sealed class objDestructorHints.LJPKMOGKGGM : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 5064
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	public objDestructorHints <>4__this; // 0x20
	private float <startTime>5__2; // 0x28
	private float <lastTimeReal>5__3; // 0x2C

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

// ==== public void .ctor(int <>1__state) { }   @0xad9240

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void objDestructorHints_LJPKMOGKGGM___ctor(void *__this,int __1__state)

{
  System_Object___ctor(__this,0);
  *(int *)((long)__this + 0x10) = __1__state;
  return;
}


// ==== private void System.IDisposable.Dispose() { }   @0xad9514

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void objDestructorHints_LJPKMOGKGGM__System_IDisposable_Dispose(void *__this)

{
  return;
}


// ==== private bool MoveNext() { }   @0xad9518

/* WARNING: Removing unreachable block (ram,0x00bd961c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool objDestructorHints_LJPKMOGKGGM__MoveNext(void *__this)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((bRam0000000001916e0a & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916e0a = 1;
  }
  lVar3 = *(long *)((long)__this + 0x20);
  if (*(int *)((long)__this + 0x10) == 1) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    fVar6 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
    if (lVar3 == 0) goto LAB_00bd9734;
  }
  else {
    if (*(int *)((long)__this + 0x10) != 0) {
      return false;
    }
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (lVar3 == 0) goto LAB_00bd9734;
    UnityEngine_Behaviour__set_enabled(lVar3,0,0);
    *(undefined4 *)(lVar3 + 0x24) = 0x3f733333;
    uVar5 = UnityEngine_Time__get_realtimeSinceStartup(0);
    *(undefined4 *)((long)__this + 0x28) = uVar5;
    *(undefined4 *)((long)__this + 0x2c) = 0;
    fVar6 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
  }
  if (fVar6 < *(float *)((long)__this + 0x28) + *(float *)(lVar3 + 0x24)) {
    fVar6 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
    if (*(long *)(lVar3 + 0x70) != 0) {
      fVar6 = fVar6 - *(float *)((long)__this + 0x28);
      fVar10 = fVar6 - *(float *)((long)__this + 0x2c);
      fVar7 = (float)UnityEngine_Transform__get_localScale(*(long *)(lVar3 + 0x70),0);
      fVar8 = *(float *)(lVar3 + 0x90) * 1.4;
      if (0.2 <= fVar6) {
        fVar8 = *(float *)(lVar3 + 0x90);
      }
      fVar9 = fVar10 * 10.0;
      if (fVar9 < 0.0) {
        fVar9 = 0.0;
      }
      if (*(long *)(lVar3 + 0x70) != 0) {
        fVar7 = fVar7 + fVar9 * (fVar8 - fVar7);
        UnityEngine_Transform__set_localScale(fVar7,fVar7,0x3f800000,*(long *)(lVar3 + 0x70),0);
        if (0.3 < fVar6 / *(float *)(lVar3 + 0x24)) {
          plVar1 = *(long **)(lVar3 + 0x88);
          *(float *)(lVar3 + 0x4c) = *(float *)(lVar3 + 0x4c) + fVar10 * -3.0;
          if (plVar1 == (long *)0x0) goto LAB_00bd9734;
          (**(code **)(*plVar1 + 0x2a8))
                    (*(undefined4 *)(lVar3 + 0x40),*(undefined4 *)(lVar3 + 0x44),
                     *(undefined4 *)(lVar3 + 0x48),plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
          uVar4 = *(undefined8 *)(lVar3 + 0x78);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
          if ((uVar2 & 1) != 0) {
            plVar1 = *(long **)(lVar3 + 0x78);
            *(undefined4 *)(lVar3 + 0x3c) = *(undefined4 *)(lVar3 + 0x4c);
            if (plVar1 == (long *)0x0) goto LAB_00bd9734;
            (**(code **)(*plVar1 + 0x2a8))
                      (*(undefined4 *)(lVar3 + 0x30),*(undefined4 *)(lVar3 + 0x34),
                       *(undefined4 *)(lVar3 + 0x38),plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
          }
        }
        *(float *)((long)__this + 0x2c) = fVar6;
        *(undefined8 *)((long)__this + 0x18) = 0;
        *(undefined4 *)((long)__this + 0x10) = 1;
        return true;
      }
    }
  }
  else {
    lVar3 = UnityEngine_Component__get_gameObject(lVar3,0);
    if (lVar3 != 0) {
      UnityEngine_GameObject__SetActive(lVar3,0,0);
      return false;
    }
  }
LAB_00bd9734:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }   @0xad9738

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * objDestructorHints_LJPKMOGKGGM__System_Collections_Generic_IEnumerator_System_Object__get_Current
                 (void *__this)

{
  return *(void **)((long)__this + 0x18);
}


// ==== private void System.Collections.IEnumerator.Reset() { }   @0xad9740

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void objDestructorHints_LJPKMOGKGGM__System_Collections_IEnumerator_Reset(void *__this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00a67914(&System_NotSupportedException_TypeInfo);
  uVar1 = func_0x00a67b44();
  System_NotSupportedException___ctor(uVar1,0);
  uVar2 = func_0x00a67914(&
                          Method_objDestructorHints_LJPKMOGKGGM_System_Collections_IEnumerator_Reset__
                         );
  func_0x00a67a20(uVar1,uVar2);
  return;
}


// ==== private object System.Collections.IEnumerator.get_Current() { }   @0xad9778

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * objDestructorHints_LJPKMOGKGGM__System_Collections_IEnumerator_get_Current(void *__this)

{
  return *(void **)((long)__this + 0x18);
}



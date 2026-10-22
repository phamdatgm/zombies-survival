/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[CompilerGenerated]
private sealed class GUIGarage.OMJCFLCPGDB : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 5153
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	public GUIGarage <>4__this; // 0x20
	private Image <image>5__2; // 0x28
	private Color <new_color>5__3; // 0x30
	private Color <start_color>5__4; // 0x40
	private float <anim_length>5__5; // 0x50
	private float <pauseEndTime>5__6; // 0x54

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

// ==== public void .ctor(int <>1__state) { }   @0xb08ea0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage_OMJCFLCPGDB___ctor(void *__this,int __1__state)

{
  System_Object___ctor(__this,0);
  *(int *)((long)__this + 0x10) = __1__state;
  return;
}


// ==== private void System.IDisposable.Dispose() { }   @0xb187e0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage_OMJCFLCPGDB__System_IDisposable_Dispose(void *__this)

{
  return;
}


// ==== private bool MoveNext() { }   @0xb187e4

/* WARNING: Removing unreachable block (ram,0x00c18948) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GUIGarage_OMJCFLCPGDB__MoveNext(void *__this)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  float fVar8;
  
  if ((bRam0000000001916fd4 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916fd4 = 1;
  }
  if (*(int *)((long)__this + 0x10) == 1) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
LAB_00c18900:
    fVar7 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
    fVar8 = *(float *)((long)__this + 0x54);
    if (fVar8 <= fVar7) {
      uVar5 = *(undefined8 *)((long)__this + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar2 & 1) != 0) {
        plVar3 = *(long **)((long)__this + 0x28);
        if (plVar3 == (long *)0x0) goto LAB_00c18a2c;
        (**(code **)(*plVar3 + 0x2a8))
                  (*(undefined4 *)((long)__this + 0x40),*(undefined4 *)((long)__this + 0x44),
                   *(undefined4 *)((long)__this + 0x48),*(undefined4 *)((long)__this + 0x4c),plVar3,
                   *(undefined8 *)(*plVar3 + 0x2b0));
      }
      bVar1 = false;
      *(undefined8 *)((long)__this + 0x38) = 0;
      *(undefined8 *)((long)__this + 0x30) = 0;
      *(undefined8 *)((long)__this + 0x48) = 0;
      *(undefined8 *)((long)__this + 0x40) = 0;
    }
    else {
      fVar7 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
      fVar8 = (1.0 - (fVar8 - fVar7) / *(float *)((long)__this + 0x50)) * 2.5;
      fVar7 = fVar8 * 0.6 + 0.2;
      if (fVar8 < 0.0) {
        fVar7 = 0.2;
      }
      *(float *)((long)__this + 0x3c) = fVar7;
      uVar5 = *(undefined8 *)((long)__this + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar2 & 1) != 0) {
        plVar3 = *(long **)((long)__this + 0x28);
        if (plVar3 == (long *)0x0) {
LAB_00c18a2c:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        (**(code **)(*plVar3 + 0x2a8))
                  (*(undefined4 *)((long)__this + 0x30),*(undefined4 *)((long)__this + 0x34),
                   *(undefined4 *)((long)__this + 0x38),*(undefined4 *)((long)__this + 0x3c),plVar3,
                   *(undefined8 *)(*plVar3 + 0x2b0));
      }
      bVar1 = true;
      *(undefined8 *)((long)__this + 0x18) = 0;
      *(undefined4 *)((long)__this + 0x10) = 1;
    }
  }
  else {
    if (*(int *)((long)__this + 0x10) == 0) {
      *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
      if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c18a2c;
      uVar5 = *(undefined8 *)(*(long *)((long)__this + 0x20) + 0x1c0);
      *(undefined8 *)((long)__this + 0x28) = uVar5;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar2 & 1) != 0) {
        plVar3 = *(long **)((long)__this + 0x28);
        if (plVar3 == (long *)0x0) goto LAB_00c18a2c;
        uVar6 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
        *(undefined4 *)((long)__this + 0x30) = uVar6;
        *(undefined4 *)((long)__this + 0x34) = in_s1;
        *(undefined4 *)((long)__this + 0x38) = in_s2;
        *(undefined4 *)((long)__this + 0x3c) = in_s3;
        plVar3 = *(long **)((long)__this + 0x28);
        *(undefined4 *)((long)__this + 0x3c) = 0;
        *(undefined8 *)((long)__this + 0x48) = *(undefined8 *)((long)__this + 0x38);
        *(undefined8 *)((long)__this + 0x40) = *(undefined8 *)((long)__this + 0x30);
        if (plVar3 == (long *)0x0) goto LAB_00c18a2c;
        (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
        if ((*(long *)((long)__this + 0x28) == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x28),0),
           lVar4 == 0)) goto LAB_00c18a2c;
        UnityEngine_GameObject__SetActive(lVar4,1,0);
        *(undefined4 *)((long)__this + 0x50) = 0x3f000000;
        fVar7 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
        *(float *)((long)__this + 0x54) = fVar7 + *(float *)((long)__this + 0x50);
        goto LAB_00c18900;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}


// ==== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }   @0xb18a30

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGarage_OMJCFLCPGDB__System_Collections_Generic_IEnumerator_System_Object__get_Current
                 (void *__this)

{
  return *(void **)((long)__this + 0x18);
}


// ==== private void System.Collections.IEnumerator.Reset() { }   @0xb18a38

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage_OMJCFLCPGDB__System_Collections_IEnumerator_Reset(void *__this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00a67914(&System_NotSupportedException_TypeInfo);
  uVar1 = func_0x00a67b44();
  System_NotSupportedException___ctor(uVar1,0);
  uVar2 = func_0x00a67914(&Method_GUIGarage_OMJCFLCPGDB_System_Collections_IEnumerator_Reset__);
  func_0x00a67a20(uVar1,uVar2);
  return;
}


// ==== private object System.Collections.IEnumerator.get_Current() { }   @0xb18a70

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGarage_OMJCFLCPGDB__System_Collections_IEnumerator_get_Current(void *__this)

{
  return *(void **)((long)__this + 0x18);
}



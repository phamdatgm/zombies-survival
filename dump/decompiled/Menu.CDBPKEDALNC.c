/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[CompilerGenerated]
private sealed class Menu.CDBPKEDALNC : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 5196
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	public GameObject go; // 0x20
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

// ==== public void .ctor(int <>1__state) { }   @0xb37db8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu_CDBPKEDALNC___ctor(void *__this,int __1__state)

{
  System_Object___ctor(__this,0);
  *(int *)((long)__this + 0x10) = __1__state;
  return;
}


// ==== private void System.IDisposable.Dispose() { }   @0xb3b68c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu_CDBPKEDALNC__System_IDisposable_Dispose(void *__this)

{
  return;
}


// ==== private bool MoveNext() { }   @0xb3b690

/* WARNING: Removing unreachable block (ram,0x00c3b7d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Menu_CDBPKEDALNC__MoveNext(void *__this)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  float fVar6;
  long *plStack_28;
  
  if ((bRam0000000001917109 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Image___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917109 = 1;
  }
  if (*(int *)((long)__this + 0x10) == 1) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)((long)__this + 0x10) != 0) {
      return false;
    }
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (this.go == 0) goto LAB_00c3b8b4;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (this.go,&plStack_28,
               _Method_UnityEngine_GameObject_GetComponent_Image___);
    *(long **)((long)__this + 0x28) = plStack_28;
    if (plStack_28 == (long *)0x0) goto LAB_00c3b8b4;
    uVar4 = (**(code **)(*plStack_28 + 0x298))(plStack_28,*(undefined8 *)(*plStack_28 + 0x2a0));
    *(undefined4 *)((long)__this + 0x30) = uVar4;
    *(undefined4 *)((long)__this + 0x34) = in_s1;
    *(undefined4 *)((long)__this + 0x38) = in_s2;
    *(undefined4 *)((long)__this + 0x3c) = in_s3;
    plVar1 = *(long **)((long)__this + 0x28);
    *(undefined4 *)((long)__this + 0x3c) = 0;
    *(undefined8 *)((long)__this + 0x48) = *(undefined8 *)((long)__this + 0x38);
    *(undefined8 *)((long)__this + 0x40) = *(undefined8 *)((long)__this + 0x30);
    if (plVar1 == (long *)0x0) goto LAB_00c3b8b4;
    (**(code **)(*plVar1 + 0x2a8))(plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
    if (this.go == 0) goto LAB_00c3b8b4;
    UnityEngine_GameObject__SetActive(this.go,1,0);
    *(undefined4 *)((long)__this + 0x50) = 0x3ecccccd;
    fVar5 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
    *(float *)((long)__this + 0x54) = fVar5 + *(float *)((long)__this + 0x50);
  }
  fVar5 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
  fVar6 = *(float *)((long)__this + 0x54);
  if (fVar5 < fVar6) {
    fVar5 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
    fVar6 = (1.0 - (fVar6 - fVar5) / *(float *)((long)__this + 0x50)) * 2.5;
    fVar5 = fVar6 * 0.5 + 0.3;
    if (fVar6 < 0.0) {
      fVar5 = 0.3;
    }
    *(float *)((long)__this + 0x3c) = fVar5;
    uVar3 = *(undefined8 *)((long)__this + 0x28);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      plVar1 = *(long **)((long)__this + 0x28);
      if (plVar1 == (long *)0x0) {
LAB_00c3b8b4:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      (**(code **)(*plVar1 + 0x2a8))
                (*(undefined4 *)((long)__this + 0x30),*(undefined4 *)((long)__this + 0x34),
                 *(undefined4 *)((long)__this + 0x38),*(undefined4 *)((long)__this + 0x3c),plVar1,
                 *(undefined8 *)(*plVar1 + 0x2b0));
    }
    *(undefined8 *)((long)__this + 0x18) = 0;
    *(undefined4 *)((long)__this + 0x10) = 1;
    return true;
  }
  uVar3 = *(undefined8 *)((long)__this + 0x28);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    plVar1 = *(long **)((long)__this + 0x28);
    if (plVar1 == (long *)0x0) goto LAB_00c3b8b4;
    (**(code **)(*plVar1 + 0x2a8))
              (*(undefined4 *)((long)__this + 0x40),*(undefined4 *)((long)__this + 0x44),
               *(undefined4 *)((long)__this + 0x48),*(undefined4 *)((long)__this + 0x4c),plVar1,
               *(undefined8 *)(*plVar1 + 0x2b0));
  }
  return false;
}


// ==== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }   @0xb3b8b8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Menu_CDBPKEDALNC__System_Collections_Generic_IEnumerator_System_Object__get_Current
                 (void *__this)

{
  return *(void **)((long)__this + 0x18);
}


// ==== private void System.Collections.IEnumerator.Reset() { }   @0xb3b8c0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu_CDBPKEDALNC__System_Collections_IEnumerator_Reset(void *__this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00a67914(&System_NotSupportedException_TypeInfo);
  uVar1 = func_0x00a67b44();
  System_NotSupportedException___ctor(uVar1,0);
  uVar2 = func_0x00a67914(&Method_Menu_CDBPKEDALNC_System_Collections_IEnumerator_Reset__);
  func_0x00a67a20(uVar1,uVar2);
  return;
}


// ==== private object System.Collections.IEnumerator.get_Current() { }   @0xb3b8f8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Menu_CDBPKEDALNC__System_Collections_IEnumerator_get_Current(void *__this)

{
  return *(void **)((long)__this + 0x18);
}



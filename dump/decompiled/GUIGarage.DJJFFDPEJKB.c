/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[CompilerGenerated]
private sealed class GUIGarage.DJJFFDPEJKB : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 5152
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	public GUIGarage <>4__this; // 0x20
	public GUIGarage.GDKKPEEJJAO type; // 0x28
	private float <t>5__2; // 0x2C
	private Vector2 <pos>5__3; // 0x30
	private float <initX>5__4; // 0x38

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

// ==== public void .ctor(int <>1__state) { }   @0xb0900c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage_DJJFFDPEJKB___ctor(void *__this,int __1__state)

{
  System_Object___ctor(__this,0);
  *(int *)((long)__this + 0x10) = __1__state;
  return;
}


// ==== private void System.IDisposable.Dispose() { }   @0xb18584

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage_DJJFFDPEJKB__System_IDisposable_Dispose(void *__this)

{
  return;
}


// ==== private bool MoveNext() { }   @0xb18588

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GUIGarage_DJJFFDPEJKB__MoveNext(void *__this)

{
  long lVar1;
  void *__this_00;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  undefined4 in_s1;
  float fVar5;
  
  if ((bRam0000000001916fd3 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916fd3 = 1;
  }
  __this_00 = *(void **)((long)__this + 0x20);
  if (*(int *)((long)__this + 0x10) == 1) {
    fVar5 = *(float *)((long)__this + 0x2c);
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar5 = fVar5 + fVar4 * 2.8;
    *(float *)((long)__this + 0x2c) = fVar5;
  }
  else {
    if (*(int *)((long)__this + 0x10) != 0) {
      return false;
    }
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (__this_00 == (void *)0x0) goto LAB_00c18794;
    *(undefined1 *)((long)__this_00 + 0x250) = 1;
    *(undefined4 *)((long)__this + 0x2c) = 0;
    if ((*(long *)((long)__this_00 + 0x278) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject(*(long *)((long)__this_00 + 0x278),0),
       lVar1 == 0)) goto LAB_00c18794;
    UnityEngine_GameObject__SetActive(lVar1,1,0);
    if (this.type == 1) {
      GUIGarage__NJHAGLAALCJ(__this_00,false);
    }
    if (*(long *)((long)__this_00 + 0x278) == 0) goto LAB_00c18794;
    uVar2 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)((long)__this_00 + 0x278),0);
    *(undefined4 *)((long)__this + 0x30) = uVar2;
    *(undefined4 *)((long)__this + 0x34) = in_s1;
    lVar1 = 0x260;
    if (this.type != 0) {
      lVar1 = 0x264;
    }
    iVar3 = *(int *)((long)__this_00 + lVar1);
    *(float *)((long)__this + 0x30) = (float)iVar3;
    *(float *)((long)__this + 0x38) = (float)iVar3;
    if (*(long *)((long)__this_00 + 0x278) == 0) goto LAB_00c18794;
    UnityEngine_RectTransform__set_anchoredPosition(*(long *)((long)__this_00 + 0x278),0);
    fVar5 = *(float *)((long)__this + 0x2c);
  }
  iVar3 = this.type;
  if (1.0 <= fVar5) {
    if (iVar3 == 1) {
      if (((__this_00 == (void *)0x0) || (*(long *)((long)__this_00 + 0x278) == 0)) ||
         (lVar1 = UnityEngine_Component__get_gameObject(*(long *)((long)__this_00 + 0x278),0),
         lVar1 == 0)) goto LAB_00c18794;
      UnityEngine_GameObject__SetActive(lVar1,0,0);
      iVar3 = this.type;
    }
    if (iVar3 == 0) {
      if (__this_00 != (void *)0x0) {
        GUIGarage__NJHAGLAALCJ(__this_00,true);
        goto LAB_00c18764;
      }
    }
    else if (__this_00 != (void *)0x0) {
LAB_00c18764:
      *(undefined1 *)((long)__this_00 + 0x250) = 0;
      if (this.type == 1) {
        GUIGarage__BECFMMKIPHJ(__this_00);
        return false;
      }
      return false;
    }
  }
  else if (__this_00 != (void *)0x0) {
    if (iVar3 == 0) {
      iVar3 = *(int *)((long)__this_00 + 0x264);
    }
    else {
      iVar3 = *(int *)((long)__this_00 + 0x260);
    }
    uVar2 = *(undefined4 *)((long)__this + 0x38);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = Main__BKPNLKDKAKA((float)iVar3,uVar2,fVar5,0);
    *(undefined4 *)((long)__this + 0x30) = uVar2;
    if (*(long *)((long)__this_00 + 0x278) != 0) {
      UnityEngine_RectTransform__set_anchoredPosition
                (uVar2,*(undefined4 *)((long)__this + 0x34),*(long *)((long)__this_00 + 0x278),0);
      *(undefined8 *)((long)__this + 0x18) = 0;
      *(undefined4 *)((long)__this + 0x10) = 1;
      return true;
    }
  }
LAB_00c18794:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }   @0xb18798

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGarage_DJJFFDPEJKB__System_Collections_Generic_IEnumerator_System_Object__get_Current
                 (void *__this)

{
  return *(void **)((long)__this + 0x18);
}


// ==== private void System.Collections.IEnumerator.Reset() { }   @0xb187a0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage_DJJFFDPEJKB__System_Collections_IEnumerator_Reset(void *__this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00a67914(&System_NotSupportedException_TypeInfo);
  uVar1 = func_0x00a67b44();
  System_NotSupportedException___ctor(uVar1,0);
  uVar2 = func_0x00a67914(&Method_GUIGarage_DJJFFDPEJKB_System_Collections_IEnumerator_Reset__);
  func_0x00a67a20(uVar1,uVar2);
  return;
}


// ==== private object System.Collections.IEnumerator.get_Current() { }   @0xb187d8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGarage_DJJFFDPEJKB__System_Collections_IEnumerator_get_Current(void *__this)

{
  return *(void **)((long)__this + 0x18);
}



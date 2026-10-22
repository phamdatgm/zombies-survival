/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[CompilerGenerated]
private sealed class GUIGarage.FIGMLAAMNLF : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 5151
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	public Vector2 start_pos; // 0x20
	public RectTransform animate_trans; // 0x28
	public GUIGarage <>4__this; // 0x30
	public Vector2 end_pos; // 0x38
	public float speed; // 0x40
	public bool is_activate_button_for_tutorial; // 0x44
	private float <t>5__2; // 0x48

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

// ==== public void .ctor(int <>1__state) { }   @0xb0bfec

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage_FIGMLAAMNLF___ctor(void *__this,int __1__state)

{
  System_Object___ctor(__this,0);
  *(int *)((long)__this + 0x10) = __1__state;
  return;
}


// ==== private void System.IDisposable.Dispose() { }   @0xb17d3c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage_FIGMLAAMNLF__System_IDisposable_Dispose(void *__this)

{
  return;
}


// ==== private bool MoveNext() { }   @0xb17d40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GUIGarage_FIGMLAAMNLF__MoveNext(void *__this)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *__this_00;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long lStack_78;
  
  if ((bRam0000000001916fd2 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Button___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916fd2 = 1;
  }
  lVar8 = *(long *)((long)__this + 0x30);
  if (*(int *)((long)__this + 0x10) == 1) {
    fVar12 = *(float *)((long)__this + 0x48);
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    fVar13 = (float)UnityEngine_Time__get_deltaTime(0);
    *(float *)((long)__this + 0x48) = fVar12 + fVar13 * this.speed;
  }
  else {
    if (*(int *)((long)__this + 0x10) != 0) {
      return false;
    }
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    *(undefined4 *)((long)__this + 0x48) = 0;
    if ((this.animate_trans == 0) ||
       (UnityEngine_RectTransform__set_anchoredPosition
                  (this.start_pos,*(undefined4 *)((long)__this + 0x24),
                   this.animate_trans,0), lVar8 == 0)) goto LAB_00c18534;
    uVar9 = this.animate_trans;
    uVar10 = *(undefined8 *)(lVar8 + 0x638);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar9,uVar10,0);
    if (((uVar5 & 1) != 0) && (*(float *)((long)__this + 0x3c) == 0.0)) {
      if ((*(long *)(lVar8 + 0x638) == 0) ||
         (lVar6 = UnityEngine_Component__get_gameObject(*(long *)(lVar8 + 0x638),0), lVar6 == 0))
      goto LAB_00c18534;
      UnityEngine_GameObject__SetActive(lVar6,1,0);
    }
  }
  fVar13 = *(float *)((long)__this + 0x48);
  if (fVar13 < 1.0) {
    uVar14 = this.start_pos;
    uVar15 = this.end_pos;
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = Main__BKPNLKDKAKA(uVar14,uVar15,fVar13,0);
    uVar10 = Main__BKPNLKDKAKA(*(undefined4 *)((long)__this + 0x24),
                               *(undefined4 *)((long)__this + 0x3c),
                               *(undefined4 *)((long)__this + 0x48),0);
    if (this.animate_trans != 0) {
      UnityEngine_RectTransform__set_anchoredPosition(uVar9,uVar10,this.animate_trans,0)
      ;
      *(undefined8 *)((long)__this + 0x18) = 0;
      *(undefined4 *)((long)__this + 0x10) = 1;
      return true;
    }
    goto LAB_00c18534;
  }
  if (lVar8 == 0) goto LAB_00c18534;
  uVar9 = this.animate_trans;
  uVar10 = *(undefined8 *)(lVar8 + 0x640);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Equality(uVar9,uVar10,0);
  if ((uVar5 & 1) == 0) {
    uVar9 = this.animate_trans;
    uVar10 = *(undefined8 *)(lVar8 + 0x648);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar9,uVar10,0);
    if ((uVar5 & 1) != 0) goto LAB_00c17f60;
  }
  else {
LAB_00c17f60:
    uVar14 = UnityEngine_Time__get_realtimeSinceStartup(0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main.LNHNCBOIGOF = uVar14;
  }
  if (this.animate_trans == 0) goto LAB_00c18534;
  UnityEngine_RectTransform__set_anchoredPosition
            (this.end_pos,*(undefined4 *)((long)__this + 0x3c),
             this.animate_trans,0);
  if (this.is_activate_button_for_tutorial != '\0') {
    if (*(long *)(lVar8 + 0x1b0) == 0) goto LAB_00c18534;
    uVar5 = UnityEngine_GameObject__get_activeInHierarchy(*(long *)(lVar8 + 0x1b0),0);
    if ((uVar5 & 1) != 0) {
      if ((*(long *)(lVar8 + 0x80) == 0) ||
         (lVar6 = UnityEngine_Component__get_gameObject(*(long *)(lVar8 + 0x80),0), lVar6 == 0))
      goto LAB_00c18534;
      uVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar6,0);
      if ((uVar5 & 1) == 0) {
        if ((*(long *)(lVar8 + 0x88) == 0) ||
           (lVar6 = UnityEngine_Component__get_gameObject(*(long *)(lVar8 + 0x88),0), lVar6 == 0))
        goto LAB_00c18534;
        uVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar6,0);
        if ((uVar5 & 1) == 0) goto LAB_00c184b4;
      }
      lVar6 = *(long *)(lVar8 + 0x560);
      if (lVar6 == 0) goto LAB_00c18534;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar1) {
        uVar11 = 0;
        bVar2 = false;
        do {
          if (uVar1 <= uVar11) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          __this_00 = *(void **)(lVar6 + (long)(int)uVar11 * 8 + 0x20);
          if (__this_00 == (void *)0x0) goto LAB_00c18534;
          if ((*(char *)((long)__this_00 + 0x70) == '\0') &&
             (*(char *)((long)__this_00 + 0x68) != '\0')) {
            if ((*(long *)(lVar8 + 0x80) == 0) ||
               (lVar7 = UnityEngine_Component__get_gameObject(*(long *)(lVar8 + 0x80),0), lVar7 == 0
               )) goto LAB_00c18534;
            uVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar7,0);
            if ((uVar5 & 1) == 0) {
LAB_00c18168:
              if (*(int *)((long)__this_00 + 0x28) == 4) {
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
                lVar7 = Main.FBDDKIOEKDM;
                if ((lVar7 == 0) ||
                   (lVar7 = DAFNMLEKHAD__DKJLCJPBPPN(lVar7,0xffffffff,1,0), lVar7 == 0))
                goto LAB_00c18534;
                iVar4 = MKCBGHDANLA__IDOHKCCDGDG(lVar7,4,0);
                if (iVar4 < 5) {
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
                  lVar7 = Main.FBDDKIOEKDM;
                  if ((lVar7 == 0) ||
                     (lVar7 = DAFNMLEKHAD__DKJLCJPBPPN(lVar7,0xffffffff,1,0), lVar7 == 0))
                  goto LAB_00c18534;
                  iVar4 = MKCBGHDANLA__IDOHKCCDGDG(lVar7,3,0);
                  if (iVar4 == 5) goto LAB_00c18274;
                }
              }
              if ((*(long *)(lVar8 + 0x88) == 0) ||
                 (lVar7 = UnityEngine_Component__get_gameObject(*(long *)(lVar8 + 0x88),0),
                 lVar7 == 0)) goto LAB_00c18534;
              uVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar7,0);
              if ((uVar5 & 1) == 0) goto LAB_00c18050;
            }
            else {
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
              lVar7 = Main.FBDDKIOEKDM;
              if (lVar7 == 0) goto LAB_00c18534;
              lVar7 = DAFNMLEKHAD__DKJLCJPBPPN(lVar7,0xffffffff,1,0);
              if ((lVar7 == 0) || (*(int *)((long)__this_00 + 0x28) != 3)) goto LAB_00c18168;
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
              lVar7 = Main.FBDDKIOEKDM;
              if ((lVar7 == 0) ||
                 (lVar7 = DAFNMLEKHAD__DKJLCJPBPPN(lVar7,0xffffffff,1,0), lVar7 == 0))
              goto LAB_00c18534;
              iVar4 = MKCBGHDANLA__IDOHKCCDGDG(lVar7,3,0);
              if (iVar4 != 0) goto LAB_00c18168;
            }
LAB_00c18274:
            ShopItem__BGNPJIHMIMI(__this_00,true);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = Main__KCHOEBEIOCE(0);
            if ((uVar5 & 1) == 0) {
LAB_00c182d8:
              if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              iVar4 = BridgePHP.sn;
              if (iVar4 != 0xb) {
                if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                  iVar4 = BridgePHP.sn;
                }
                if (iVar4 != 0xc) {
                  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                    iVar4 = BridgePHP.sn;
                  }
                  if (iVar4 != 0xd) goto LAB_00c18050;
                }
              }
            }
            else {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((Menu.KECGFPHIEHF == 0) ||
                 (lVar7 = Menu.KECGFPHIEHF.ONNBLPAKJHK, lVar7 == 0))
              goto LAB_00c18534;
              if (*(char *)(lVar7 + 0x30) == '\0') goto LAB_00c182d8;
            }
            if ((*(long *)((long)__this_00 + 0x60) == 0) ||
               (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                          (*(long *)((long)__this_00 + 0x60),&lStack_78,
                           _Method_UnityEngine_Component_GetComponent_Button___), lStack_78 == 0))
            goto LAB_00c18534;
            UnityEngine_UI_Selectable__set_interactable(lStack_78,1,0);
            bVar3 = !bVar2;
            bVar2 = true;
            if (bVar3) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((Menu.KECGFPHIEHF == 0) ||
                 (*(long *)((long)__this_00 + 0x60) == 0)) goto LAB_00c18534;
              lVar7 = Menu.KECGFPHIEHF.ONNBLPAKJHK;
              uVar9 = UnityEngine_Component__get_gameObject(*(long *)((long)__this_00 + 0x60),0);
              if (lVar7 == 0) goto LAB_00c18534;
              GamePadController__FJJJEMJAMGO(lVar7,uVar9,0);
              bVar2 = true;
            }
          }
LAB_00c18050:
          uVar1 = *(uint *)(lVar6 + 0x18);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar1);
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = Main__KCHOEBEIOCE(0);
      if ((uVar5 & 1) == 0) {
LAB_00c1843c:
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        iVar4 = BridgePHP.sn;
        if (iVar4 != 0xb) {
          if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            iVar4 = BridgePHP.sn;
          }
          if (iVar4 != 0xc) {
            if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              iVar4 = BridgePHP.sn;
            }
            if (iVar4 != 0xd) goto LAB_00c184b4;
          }
        }
      }
      else {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((Menu.KECGFPHIEHF == 0) ||
           (lVar6 = Menu.KECGFPHIEHF.ONNBLPAKJHK, lVar6 == 0))
        goto LAB_00c18534;
        if (*(char *)(lVar6 + 0x30) == '\0') goto LAB_00c1843c;
      }
      GUIGarage__EEOMMEJNEOF(lVar8,0);
    }
  }
LAB_00c184b4:
  uVar9 = this.animate_trans;
  uVar10 = *(undefined8 *)(lVar8 + 0x638);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Equality(uVar9,uVar10,0);
  if (((uVar5 & 1) != 0) && (*(float *)((long)__this + 0x3c) < 0.0)) {
    if ((*(long *)(lVar8 + 0x638) == 0) ||
       (lVar8 = UnityEngine_Component__get_gameObject(*(long *)(lVar8 + 0x638),0), lVar8 == 0)) {
LAB_00c18534:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    UnityEngine_GameObject__SetActive(lVar8,0,0);
  }
  return false;
}


// ==== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }   @0xb1853c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGarage_FIGMLAAMNLF__System_Collections_Generic_IEnumerator_System_Object__get_Current
                 (void *__this)

{
  return *(void **)((long)__this + 0x18);
}


// ==== private void System.Collections.IEnumerator.Reset() { }   @0xb18544

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage_FIGMLAAMNLF__System_Collections_IEnumerator_Reset(void *__this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00a67914(&System_NotSupportedException_TypeInfo);
  uVar1 = func_0x00a67b44();
  System_NotSupportedException___ctor(uVar1,0);
  uVar2 = func_0x00a67914(&Method_GUIGarage_FIGMLAAMNLF_System_Collections_IEnumerator_Reset__);
  func_0x00a67a20(uVar1,uVar2);
  return;
}


// ==== private object System.Collections.IEnumerator.get_Current() { }   @0xb1857c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGarage_FIGMLAAMNLF__System_Collections_IEnumerator_get_Current(void *__this)

{
  return *(void **)((long)__this + 0x18);
}



/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[CompilerGenerated]
private sealed class Menu.IGIGAHEKBHB : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 5198
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	public Menu <>4__this; // 0x20
	public bool is_start_with_low_hp; // 0x28
	private bool <isMainMenu>5__2; // 0x29
	private float <t>5__3; // 0x2C
	private Image <image>5__4; // 0x30
	private Color <new_color>5__5; // 0x38

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

// ==== public void .ctor(int <>1__state) { }   @0xb38f1c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu_IGIGAHEKBHB___ctor(void *__this,int __1__state)

{
  System_Object___ctor(__this,0);
  *(int *)((long)__this + 0x10) = __1__state;
  return;
}


// ==== private void System.IDisposable.Dispose() { }   @0xb3ba58

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu_IGIGAHEKBHB__System_IDisposable_Dispose(void *__this)

{
  return;
}


// ==== private bool MoveNext() { }   @0xb3ba5c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Menu_IGIGAHEKBHB__MoveNext(void *__this)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  long *plVar9;
  void *pvVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 in_s1;
  float fVar17;
  undefined4 in_s2;
  long *plStack_48;
  
  if ((bRam000000000191710b & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Image___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Str_This_car_is_not_available___);
    bRam000000000191710b = 1;
  }
  pvVar10 = *(void **)((long)__this + 0x20);
  if (*(int *)((long)__this + 0x10) == 1) {
    fVar16 = *(float *)((long)__this + 0x2c);
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    fVar14 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar16 = fVar16 + fVar14;
    *(float *)((long)__this + 0x2c) = fVar16;
  }
  else {
    if (*(int *)((long)__this + 0x10) != 0) {
      return false;
    }
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (pvVar10 == (void *)0x0) goto LAB_00c3c3c0;
    uVar11 = *(undefined8 *)((long)pvVar10 + 0x28);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar6 & 1) == 0) {
LAB_00c3bdf0:
      lVar7 = *(long *)((long)pvVar10 + 0x40);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      if (lVar7 != 0) {
        AnalyticsController__ABPGNFKMKAF
                  (lVar7,Main.LCFFGBBHMPH,0);
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        SoundScript__GIGBLEBBIEK(SoundScript.IGAGBIKPOMH);
        uVar11 = *(undefined8 *)((long)pvVar10 + 0x20);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if ((uVar6 & 1) == 0) {
          return false;
        }
        if (*(long *)((long)pvVar10 + 0x20) != 0) {
          GUIGarage__DonateWindowFuel(*(long *)((long)pvVar10 + 0x20),0);
          return false;
        }
      }
      goto LAB_00c3c3c0;
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar7 = Main.FBDDKIOEKDM;
    if (lVar7 == 0) goto LAB_00c3c3c0;
    iVar3 = DAFNMLEKHAD__HDABOKNLKGK(lVar7,0);
    if ((iVar3 < 1) && (FuelManager.ONOJBFNLIJI == '\0')) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      lVar7 = Main.NMDEEOMHAGP;
      if (lVar7 == 0) goto LAB_00c3c3c0;
      if (*(int *)(lVar7 + 0x10) < 100) goto LAB_00c3bdf0;
    }
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
    if (lVar7 == 0) goto LAB_00c3c3c0;
    lVar7 = DAFNMLEKHAD__DKJLCJPBPPN(lVar7,0xffffffff,1,0);
    if (lVar7 == 0) {
LAB_00c3beec:
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar11 = System_Int32__ToString(Main.<statics> + 0x2c,0);
      pvVar10 = (void *)System_String__Concat(_Str_This_car_is_not_available___,uVar11,0);
      Main__GEMDEAMAGPG(pvVar10,false);
      return false;
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar11 = CarController.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar6 & 1) == 0) goto LAB_00c3beec;
    Menu__MNGOIBGJMMG(uVar6,0);
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
       (pvVar8 = (void *)DAFNMLEKHAD__DKJLCJPBPPN(lVar7,0xffffffff,1,0), pvVar8 == (void *)0x0))
    goto LAB_00c3c3c0;
    uVar4 = MKCBGHDANLA__IDOHKCCDGDG(pvVar8,4);
    plVar9 = *(long **)(_Main_TypeInfo + 0xb8);
    lVar7 = *plVar9;
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x28) == 0)) goto LAB_00c3c3c0;
    if (*(int *)((long)plVar9 + 0x2c) < *(int *)(*(long *)(lVar7 + 0x28) + 0x18)) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
        plVar9 = *(long **)(_Main_TypeInfo + 0xb8);
        lVar7 = *plVar9;
        if (lVar7 == 0) goto LAB_00c3c3c0;
      }
      lVar7 = *(long *)(lVar7 + 0x28);
      if (lVar7 == 0) goto LAB_00c3c3c0;
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)((long)plVar9 + 0x2c)) {
LAB_00c3c3c4:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      lVar7 = *(long *)(lVar7 + (long)(int)*(uint *)((long)plVar9 + 0x2c) * 8 + 0x20);
      if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x38), lVar7 == 0)) goto LAB_00c3c3c0;
      if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_00c3c3c4;
      iVar3 = *(int *)(lVar7 + (long)(int)uVar4 * 4 + 0x20);
    }
    else {
      iVar3 = 0;
    }
    bVar1 = Menu__LFLFCEGDBPJ(pvVar10);
    if (bVar1) {
      Menu__KJDAFBPKLLF(pvVar10);
      return false;
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar7 = Main.NMDEEOMHAGP;
    if (lVar7 == 0) goto LAB_00c3c3c0;
    if (*(int *)(lVar7 + 0x10) == 0) {
LAB_00c3c070:
      bVar1 = true;
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
      if ((lVar7 == 0) ||
         (pvVar8 = (void *)DAFNMLEKHAD__DKJLCJPBPPN(lVar7,0xffffffff,1,0), pvVar8 == (void *)0x0))
      goto LAB_00c3c3c0;
      iVar5 = MKCBGHDANLA__EAEAJMKGDPD(pvVar8);
      if (iVar5 == iVar3) goto LAB_00c3c070;
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
         (pvVar8 = (void *)DAFNMLEKHAD__DKJLCJPBPPN(lVar7,0xffffffff,1,0), pvVar8 == (void *)0x0))
      goto LAB_00c3c3c0;
      iVar3 = MKCBGHDANLA__EAEAJMKGDPD(pvVar8);
      bVar1 = iVar3 == -1;
    }
    if (!bVar1 && this.is_start_with_low_hp == '\0') {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar7 = Main.NMDEEOMHAGP;
      if (lVar7 == 0) goto LAB_00c3c3c0;
      if (*(int *)(lVar7 + 0x10) < 100) {
        if (*(void **)((long)pvVar10 + 0x20) != (void *)0x0) {
          GUIGarage__PCLHPNHIHMO(*(void **)((long)pvVar10 + 0x20));
          return false;
        }
        goto LAB_00c3c3c0;
      }
    }
    Menu__LLEALPBNEEN();
    if (*(long *)((long)pvVar10 + 0x38) == 0) goto LAB_00c3c3c0;
    AdvController__JJDJIEJLCFM(*(long *)((long)pvVar10 + 0x38),0);
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    SoundScript__GIGBLEBBIEK(SoundScript.JJMBOCJABEL);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar7 = Main.NMDEEOMHAGP;
    if (lVar7 == 0) goto LAB_00c3c3c0;
    if (0 < *(int *)(lVar7 + 0x10)) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar7 = Main.NMDEEOMHAGP;
        if (lVar7 == 0) goto LAB_00c3c3c0;
      }
      if (*(int *)(lVar7 + 0x10) < 100) {
        if (*(void **)((long)pvVar10 + 0x28) == (void *)0x0) goto LAB_00c3c3c0;
        FuelManager__OBAELOECFBH(*(void **)((long)pvVar10 + 0x28));
      }
    }
    lVar7 = *(long *)((long)pvVar10 + 0x20);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x60) == 0)) goto LAB_00c3c3c0;
    lVar12 = *(long *)(lVar7 + 0x68);
    lVar7 = UnityEngine_Component__get_gameObject(*(long *)(lVar7 + 0x60),0);
    if (lVar7 == 0) goto LAB_00c3c3c0;
    bVar2 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
    *(byte *)((long)__this + 0x29) = bVar2 & 1;
    if ((bVar2 & 1) != 0) {
      lVar7 = *(long *)((long)pvVar10 + 0x20);
      if (lVar7 == 0) goto LAB_00c3c3c0;
      uVar11 = *(undefined8 *)(lVar7 + 0x1b0);
      uVar13 = *(undefined8 *)(lVar7 + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar12 = UnityEngine_Object__Instantiate_object_
                         (uVar11,uVar13,_Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    if (*(char *)((long)pvVar10 + 0x7b) != '\0') {
      if (((*(long *)((long)pvVar10 + 0x20) == 0) ||
          (lVar7 = *(long *)(*(long *)((long)pvVar10 + 0x20) + 0x90), lVar7 == 0)) ||
         (lVar7 = UnityEngine_Component__get_gameObject(lVar7,0), lVar7 == 0)) goto LAB_00c3c3c0;
      uVar6 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
      if ((uVar6 & 1) != 0) {
        if ((*(long *)((long)pvVar10 + 0x20) == 0) ||
           (lVar7 = *(long *)(*(long *)((long)pvVar10 + 0x20) + 0x90), lVar7 == 0))
        goto LAB_00c3c3c0;
        GUIWindow__JGDCBENNDFO(lVar7,0,0);
      }
      *(undefined1 *)((long)pvVar10 + 0x7b) = 0;
    }
    if (((*(long *)((long)pvVar10 + 0x20) == 0) ||
        (lVar7 = *(long *)(*(long *)((long)pvVar10 + 0x20) + 0xd0), lVar7 == 0)) ||
       (lVar7 = UnityEngine_Component__get_gameObject(lVar7,0), lVar7 == 0)) goto LAB_00c3c3c0;
    uVar6 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
    if ((uVar6 & 1) != 0) {
      if ((*(long *)((long)pvVar10 + 0x20) == 0) ||
         (lVar7 = *(long *)(*(long *)((long)pvVar10 + 0x20) + 0xd0), lVar7 == 0)) goto LAB_00c3c3c0;
      GUIWindow__JGDCBENNDFO(lVar7,0,0);
      if ((*(long *)((long)pvVar10 + 0x20) == 0) ||
         (lVar7 = *(long *)(*(long *)((long)pvVar10 + 0x20) + 0x1b0), lVar7 == 0))
      goto LAB_00c3c3c0;
      UnityEngine_GameObject__SetActive(lVar7,0,0);
    }
    if ((*(long *)((long)pvVar10 + 0x20) == 0) ||
       (lVar7 = *(long *)(*(long *)((long)pvVar10 + 0x20) + 0x30), lVar7 == 0)) goto LAB_00c3c3c0;
    UnityEngine_GameObject__SetActive(lVar7,0,0);
    *(undefined4 *)((long)__this + 0x2c) = 0;
    if ((lVar12 == 0) || (lVar7 = UnityEngine_GameObject__get_gameObject(lVar12,0), lVar7 == 0))
    goto LAB_00c3c3c0;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar7,&plStack_48,_Method_UnityEngine_GameObject_GetComponent_Image___);
    *(long **)((long)__this + 0x30) = plStack_48;
    if (*(char *)((long)__this + 0x29) == '\0') {
      uVar15 = 0x3f800000;
      in_s1 = 0x3f800000;
      in_s2 = 0x3f800000;
    }
    else {
      if (plStack_48 == (long *)0x0) goto LAB_00c3c3c0;
      uVar15 = (**(code **)(*plStack_48 + 0x298))(plStack_48,*(undefined8 *)(*plStack_48 + 0x2a0));
    }
    plVar9 = *(long **)((long)__this + 0x30);
    *(undefined4 *)((long)__this + 0x38) = uVar15;
    *(undefined4 *)((long)__this + 0x3c) = in_s1;
    *(undefined4 *)((long)__this + 0x40) = in_s2;
    *(undefined4 *)((long)__this + 0x44) = 0;
    if (plVar9 == (long *)0x0) goto LAB_00c3c3c0;
    (**(code **)(*plVar9 + 0x2a8))(plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
    lVar7 = UnityEngine_GameObject__get_gameObject(lVar12,0);
    if (lVar7 == 0) goto LAB_00c3c3c0;
    UnityEngine_GameObject__SetActive(lVar7,1,0);
    fVar16 = *(float *)((long)__this + 0x2c);
  }
  if (0.7 <= fVar16) {
    if (((pvVar10 != (void *)0x0) && (*(long *)((long)pvVar10 + 0x20) != 0)) &&
       (lVar7 = *(long *)(*(long *)((long)pvVar10 + 0x20) + 0x30), lVar7 != 0)) {
      UnityEngine_GameObject__SetActive(lVar7,1,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Main.NMDEEOMHAGP != 0) {
        pvVar10 = (void *)Level__get_SceneId();
        Main__EBIEJDOBOCP(pvVar10);
        *(undefined8 *)((long)__this + 0x30) = 0;
        *(undefined8 *)((long)__this + 0x38) = 0;
        *(undefined8 *)((long)__this + 0x40) = 0;
        return false;
      }
    }
  }
  else if ((pvVar10 != (void *)0x0) && (lVar7 = *(long *)((long)pvVar10 + 0x20), lVar7 != 0)) {
    if (*(char *)((long)__this + 0x29) == '\0') {
      GUIGarage__EOFBGHALHON(lVar7,0);
      fVar14 = 0.3;
    }
    else {
      GUIGarage__CIGPFNEMEDJ(lVar7,0);
      fVar14 = 0.0;
    }
    plVar9 = *(long **)((long)__this + 0x30);
    fVar17 = *(float *)((long)__this + 0x2c) * 3.5;
    fVar16 = fVar17;
    if (1.0 < fVar17) {
      fVar16 = 1.0;
    }
    fVar16 = fVar16 * 0.7 + fVar14;
    if (fVar17 < 0.0) {
      fVar16 = fVar14;
    }
    *(float *)((long)__this + 0x44) = fVar16;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x2a8))
                (*(undefined4 *)((long)__this + 0x38),*(undefined4 *)((long)__this + 0x3c),
                 *(undefined4 *)((long)__this + 0x40),plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
      *(undefined8 *)((long)__this + 0x18) = 0;
      *(undefined4 *)((long)__this + 0x10) = 1;
      return true;
    }
  }
LAB_00c3c3c0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }   @0xb3c3c8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Menu_IGIGAHEKBHB__System_Collections_Generic_IEnumerator_System_Object__get_Current
                 (void *__this)

{
  return *(void **)((long)__this + 0x18);
}


// ==== private void System.Collections.IEnumerator.Reset() { }   @0xb3c3d0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu_IGIGAHEKBHB__System_Collections_IEnumerator_Reset(void *__this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00a67914(&System_NotSupportedException_TypeInfo);
  uVar1 = func_0x00a67b44();
  System_NotSupportedException___ctor(uVar1,0);
  uVar2 = func_0x00a67914(&Method_Menu_IGIGAHEKBHB_System_Collections_IEnumerator_Reset__);
  func_0x00a67a20(uVar1,uVar2);
  return;
}


// ==== private object System.Collections.IEnumerator.get_Current() { }   @0xb3c408

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Menu_IGIGAHEKBHB__System_Collections_IEnumerator_get_Current(void *__this)

{
  return *(void **)((long)__this + 0x18);
}



/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[CompilerGenerated]
private sealed class GUIGarage.NPNKOHCAMIG : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 5155
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	public ShopItem it; // 0x20

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

// ==== public void .ctor(int <>1__state) { }   @0xb18b60

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage_NPNKOHCAMIG___ctor(void *__this,int __1__state)

{
  System_Object___ctor(__this,0);
  *(int *)((long)__this + 0x10) = __1__state;
  return;
}


// ==== private void System.IDisposable.Dispose() { }   @0xb18b88

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage_NPNKOHCAMIG__System_IDisposable_Dispose(void *__this)

{
  return;
}


// ==== private bool MoveNext() { }   @0xb18b8c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GUIGarage_NPNKOHCAMIG__MoveNext(void *__this)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  
  if ((bRam0000000001916fd6 & 1) == 0) {
    func_0x00a67900(&CameraGarage_TypeInfo);
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_WaitForSeconds_TypeInfo);
    bRam0000000001916fd6 = 1;
  }
  iVar2 = *(int *)((long)__this + 0x10);
  if (iVar2 != 2) {
    if (iVar2 != 1) {
      if (iVar2 != 0) {
        return false;
      }
      *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
      uVar4 = func_0x00a67b44(_UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(0x3dcccccd,uVar4,0);
      *(undefined8 *)((long)__this + 0x18) = uVar4;
      *(undefined4 *)((long)__this + 0x10) = 1;
      return true;
    }
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = CarController.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar5 & 1) == 0) goto LAB_00c1911c;
    pvVar6 = this.it;
    if (pvVar6 == (void *)0x0) goto LAB_00c19164;
    switch(pvVar6/*ShopItem*/.FHOFNGHGNGF) {
    case 1:
      if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = 3;
      break;
    case 2:
      if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = 1;
      break;
    case 3:
      if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = 2;
      break;
    case 4:
      iVar2 = ShopItem__HJICMDCENKN(pvVar6,-1);
      uVar1 = iVar2 - 1;
      if ((int)uVar1 < 0) goto LAB_00c1911c;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar8 = CarController.KECGFPHIEHF;
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x358) == 0)) goto LAB_00c19164;
      if (*(int *)(*(long *)(lVar8 + 0x358) + 0x18) <= (int)uVar1) goto LAB_00c1911c;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar8 = CarController.KECGFPHIEHF;
        if (lVar8 == 0) goto LAB_00c19164;
      }
      lVar8 = *(long *)(lVar8 + 0x358);
      if (lVar8 == 0) goto LAB_00c19164;
      if (*(uint *)(lVar8 + 0x18) <= uVar1) goto code_r0x00c19168;
      uVar3 = *(undefined4 *)(lVar8 + (ulong)uVar1 * 4 + 0x20);
      if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      break;
    default:
      goto LAB_00c1911c;
    }
    CameraGarage__IKDKLJMPOKM(uVar3,0);
LAB_00c1911c:
    uVar4 = func_0x00a67b44(_UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(0x3e99999a,uVar4,0);
    *(undefined8 *)((long)__this + 0x18) = uVar4;
    *(undefined4 *)((long)__this + 0x10) = 2;
    return true;
  }
  *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF == 0) {
LAB_00c19164:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  Menu__OLOGKIHIIEL(Menu.KECGFPHIEHF,0);
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = CarController.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar5 & 1) == 0) {
    return false;
  }
  pvVar6 = this.it;
  if (pvVar6 == (void *)0x0) goto LAB_00c19164;
  switch(pvVar6/*ShopItem*/.FHOFNGHGNGF) {
  case 1:
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((CarController.KECGFPHIEHF != 0) &&
       (lVar8 = CarController.KECGFPHIEHF.NNGMCDMNECH, lVar8 != 0)) {
      if ((int)*(ulong *)(lVar8 + 0x18) < 1) {
        return false;
      }
      uVar5 = 0;
      uVar7 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
      while (uVar5 < uVar7) {
        uVar4 = *(undefined8 *)(lVar8 + 0x20 + uVar5 * 8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar4,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (CarController.KECGFPHIEHF == 0) goto LAB_00c19164;
          CarController__EGGPODAIEBC(_CarController_TypeInfo,uVar4);
        }
        uVar7 = (ulong)*(uint *)(lVar8 + 0x18);
        uVar5 = uVar5 + 1;
        if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar5) {
          return false;
        }
      }
code_r0x00c19168:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    goto LAB_00c19164;
  case 2:
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF == 0) goto LAB_00c19164;
    uVar4 = CarController.KECGFPHIEHF.EOJFKBECPPD;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (CarController.KECGFPHIEHF == 0) goto LAB_00c19164;
      CarController__EGGPODAIEBC
                (_CarController_TypeInfo,
                 CarController.KECGFPHIEHF.EOJFKBECPPD);
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF == 0) goto LAB_00c19164;
    uVar4 = CarController.KECGFPHIEHF.JHDGBAALBMP;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar5 & 1) == 0) {
      return false;
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF == 0) goto LAB_00c19164;
    uVar4 = CarController.KECGFPHIEHF.JHDGBAALBMP;
    break;
  case 3:
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF == 0) goto LAB_00c19164;
    uVar4 = CarController.KECGFPHIEHF.GBLNJIKLCLP;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar5 & 1) == 0) {
      return false;
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF == 0) goto LAB_00c19164;
    uVar4 = CarController.KECGFPHIEHF.GBLNJIKLCLP;
    break;
  case 4:
    iVar2 = ShopItem__HJICMDCENKN(pvVar6,-1);
    uVar1 = iVar2 - 1;
    if ((int)uVar1 < 0) {
      return false;
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((CarController.KECGFPHIEHF == 0) ||
       (lVar8 = CarController.KECGFPHIEHF.CFLLLIOJOBD, lVar8 == 0))
    goto LAB_00c19164;
    if (*(int *)(lVar8 + 0x18) <= (int)uVar1) {
      return false;
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((CarController.KECGFPHIEHF == 0) ||
       (lVar8 = CarController.KECGFPHIEHF.CFLLLIOJOBD, lVar8 == 0))
    goto LAB_00c19164;
    if (*(uint *)(lVar8 + 0x18) <= uVar1) goto code_r0x00c19168;
    uVar4 = *(undefined8 *)(lVar8 + (ulong)uVar1 * 8 + 0x20);
    break;
  default:
    goto LAB_00c19030;
  }
  CarController__EGGPODAIEBC(_CarController_TypeInfo,uVar4);
LAB_00c19030:
  return false;
}


// ==== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }   @0xb191bc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGarage_NPNKOHCAMIG__System_Collections_Generic_IEnumerator_System_Object__get_Current
                 (void *__this)

{
  return *(void **)((long)__this + 0x18);
}


// ==== private void System.Collections.IEnumerator.Reset() { }   @0xb191c4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage_NPNKOHCAMIG__System_Collections_IEnumerator_Reset(void *__this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00a67914(&System_NotSupportedException_TypeInfo);
  uVar1 = func_0x00a67b44();
  System_NotSupportedException___ctor(uVar1,0);
  uVar2 = func_0x00a67914(&Method_GUIGarage_NPNKOHCAMIG_System_Collections_IEnumerator_Reset__);
  func_0x00a67a20(uVar1,uVar2);
  return;
}


// ==== private object System.Collections.IEnumerator.get_Current() { }   @0xb191fc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGarage_NPNKOHCAMIG__System_Collections_IEnumerator_get_Current(void *__this)

{
  return *(void **)((long)__this + 0x18);
}



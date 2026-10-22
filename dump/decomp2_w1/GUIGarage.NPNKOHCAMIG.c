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
    uVar4 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar5 & 1) == 0) goto LAB_00c1911c;
    pvVar6 = *(void **)((long)__this + 0x20);
    if (pvVar6 == (void *)0x0) goto LAB_00c19164;
    switch(*(undefined4 *)((long)pvVar6 + 0x28)) {
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
      lVar8 = **(long **)(_CarController_TypeInfo + 0xb8);
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x358) == 0)) goto LAB_00c19164;
      if (*(int *)(*(long *)(lVar8 + 0x358) + 0x18) <= (int)uVar1) goto LAB_00c1911c;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar8 = **(long **)(_CarController_TypeInfo + 0xb8);
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
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
LAB_00c19164:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar5 & 1) == 0) {
    return false;
  }
  pvVar6 = *(void **)((long)__this + 0x20);
  if (pvVar6 == (void *)0x0) goto LAB_00c19164;
  switch(*(undefined4 *)((long)pvVar6 + 0x28)) {
  case 1:
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
       (lVar8 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0xe8), lVar8 != 0)) {
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
          if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c19164;
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
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c19164;
    uVar4 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x2e0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c19164;
      CarController__EGGPODAIEBC
                (_CarController_TypeInfo,
                 *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x2e0));
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c19164;
    uVar4 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x2e8);
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
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c19164;
    uVar4 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x2e8);
    break;
  case 3:
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c19164;
    uVar4 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 800);
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
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c19164;
    uVar4 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 800);
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
    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
       (lVar8 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x350), lVar8 == 0))
    goto LAB_00c19164;
    if (*(int *)(lVar8 + 0x18) <= (int)uVar1) {
      return false;
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
       (lVar8 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x350), lVar8 == 0))
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



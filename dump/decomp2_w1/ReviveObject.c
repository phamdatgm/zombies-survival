// ==== public float IBINGNLOHNJ() { }   @0xaf855c

/* WARNING: Removing unreachable block (ram,0x00bf8a78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float ReviveObject__IBINGNLOHNJ(void *__this)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 in_d2;
  float fVar11;
  undefined1 auVar12 [12];
  
  if ((bRam0000000001916eec & 1) == 0) {
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&UnityEngine_Transform_TypeInfo);
    func_0x00a67900(&Str_Collider);
    func_0x00a67900(&Str_road_razlom_end);
    bRam0000000001916eec = 1;
  }
  lVar1 = UnityEngine_Component__get_transform(__this,0);
  if ((lVar1 == 0) || (lVar1 = UnityEngine_Transform__get_parent(lVar1,0), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  plVar2 = (long *)UnityEngine_Transform__GetEnumerator(lVar1,0);
  do {
    fVar11 = 0.0;
    if (plVar2 == (long *)0x0) {
LAB_00bf89dc:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    lVar1 = *plVar2;
    uVar9 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == _System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_00bf8670;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)func_0x00a9e6c4(plVar2,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00bf8670:
    uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar9 & 1) == 0) goto LAB_00bf893c;
    lVar1 = *plVar2;
    uVar9 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == _System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar1 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_00bf86d0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)func_0x00a9e6c4(plVar2,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00bf86d0:
    plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) +
                  (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8) !=
        _UnityEngine_Transform_TypeInfo)) {
      func_0x00a67eec(plVar4);
      goto LAB_00bf89dc;
    }
    uVar5 = UnityEngine_Object__get_name(plVar4,0);
    uVar9 = System_String__op_Equality(uVar5,_Str_road_razlom_end,0);
  } while ((uVar9 & 1) == 0);
  plVar4 = (long *)UnityEngine_Transform__GetEnumerator(plVar4,0);
  uVar5 = 0;
  do {
    fVar11 = (float)uVar5;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    lVar1 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == _System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_00bf8790;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)func_0x00a9e6c4(plVar4,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00bf8790:
    uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar9 & 1) == 0) {
      plVar4 = (long *)func_0x00a67a34(plVar4,_System_IDisposable_TypeInfo);
      if (plVar4 == (long *)0x0) goto LAB_00bf893c;
      lVar1 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar9 == 0) goto LAB_00bf88b0;
      piVar10 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      break;
    }
    lVar1 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == _System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar1 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_00bf87f0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)func_0x00a9e6c4(plVar4,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00bf87f0:
    plVar6 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) +
                  (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8) !=
        _UnityEngine_Transform_TypeInfo)) {
      auVar12 = func_0x00a67eec(plVar6);
      plVar4 = (long *)func_0x00a67a34(plVar4,_System_IDisposable_TypeInfo);
      if (plVar4 == (long *)0x0) goto LAB_00bf8a5c;
      lVar1 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar9 == 0) goto LAB_00bf8a30;
      piVar10 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      goto LAB_00bf8a18;
    }
    uVar7 = UnityEngine_Object__get_name(plVar6,0);
    uVar9 = System_String__op_Equality(uVar7,_Str_Collider,0);
    if ((uVar9 & 1) != 0) {
      UnityEngine_Transform__get_position(plVar6,0);
      uVar5 = in_d2;
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == _System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar1 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_00bf88cc;
    }
  }
LAB_00bf88b0:
  puVar3 = (undefined8 *)func_0x00a9e6c4(plVar4,_System_IDisposable_TypeInfo,0);
LAB_00bf88cc:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_00bf893c:
  lVar1 = 0;
  goto LAB_00bf8940;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_00bf8a18:
    if (*(long *)(piVar10 + -2) == _System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar1 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_00bf8a50;
    }
  }
LAB_00bf8a30:
  puVar3 = (undefined8 *)func_0x00a9e6c4(plVar4,_System_IDisposable_TypeInfo,0);
LAB_00bf8a50:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_00bf8a5c:
  if (plVar6 != (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b48(plVar6);
  }
  if (auVar12._8_4_ != 1) {
    plVar2 = (long *)func_0x00a67a34(plVar2,_System_IDisposable_TypeInfo);
    if (plVar2 != (long *)0x0) {
      lVar1 = *plVar2;
      uVar9 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == _System_IDisposable_TypeInfo) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_00bf8b38;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)func_0x00a9e6c4(plVar2,_System_IDisposable_TypeInfo,0);
LAB_00bf8b38:
      (*(code *)*puVar3)(plVar2,puVar3[1]);
    }
    func_0x00b65214(auVar12._0_8_);
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b48(0);
  }
  plVar4 = (long *)func_0x016dec50();
  lVar1 = *plVar4;
  func_0x016dec60();
LAB_00bf8940:
  plVar2 = (long *)func_0x00a67a34(plVar2,_System_IDisposable_TypeInfo);
  if (plVar2 != (long *)0x0) {
    lVar8 = *plVar2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == _System_IDisposable_TypeInfo) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_00bf89a0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)func_0x00a9e6c4(plVar2,_System_IDisposable_TypeInfo,0);
LAB_00bf89a0:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  if (lVar1 == 0) {
    return fVar11;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b48(lVar1);
}



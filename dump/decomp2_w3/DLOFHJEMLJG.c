// ==== public string[] AOJEFKDJBNK(string HNJBEDNKJFJ) { }   @0xae7194

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DLOFHJEMLJG__AOJEFKDJBNK(void *__this,void *HNJBEDNKJFJ)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  void *pvVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined1 auVar12 [12];
  
  if ((bRam0000000001916e4d & 1) == 0) {
    func_0x00a67900(&System_Collections_ArrayList_TypeInfo);
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&DLOFHJEMLJG_ODHHFNEAGPM_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&string_var);
    func_0x00a67900(&System_Type_TypeInfo);
    bRam0000000001916e4d = 1;
  }
  plVar2 = (long *)func_0x00a67b44(_System_Collections_ArrayList_TypeInfo);
  System_Collections_ArrayList___ctor(plVar2,0);
  if (HNJBEDNKJFJ != (void *)0x0) {
    uVar3 = System_String__ToUpper(HNJBEDNKJFJ,0);
    plVar7 = *(long **)((long)__this + 0x10);
    if ((plVar7 != (long *)0x0) &&
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x368))(plVar7,*(undefined8 *)(*plVar7 + 0x370)),
       plVar7 != (long *)0x0)) {
      lVar8 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == _System_Collections_IEnumerable_TypeInfo) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_00be72c8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)func_0x00a9e6c4(plVar7,_System_Collections_IEnumerable_TypeInfo,0);
LAB_00be72c8:
      plVar7 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      do {
        lVar8 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == _System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_00be7340;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)func_0x00a9e6c4(plVar7,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00be7340:
        uVar10 = (*(code *)*puVar4)(plVar7,puVar4[1]);
        if ((uVar10 & 1) == 0) {
          lVar8 = 0;
          goto LAB_00be7408;
        }
        lVar8 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == _System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_00be73a0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)func_0x00a9e6c4(plVar7,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00be73a0:
        plVar5 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        if (*(long *)(*plVar5 + 0x40) != *(long *)(_DLOFHJEMLJG_ODHHFNEAGPM_TypeInfo + 0x40)) {
          func_0x00a67eec();
LAB_00be7500:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        puVar4 = (undefined8 *)func_0x00a67a3c();
        uVar1 = puVar4[1];
        uVar10 = System_String__op_Equality(*puVar4,uVar3,0);
        if ((uVar10 & 1) != 0) {
          if (plVar2 == (long *)0x0) goto LAB_00be7500;
          (**(code **)(*plVar2 + 0x308))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x310));
        }
      } while( true );
    }
  }
LAB_00be7504:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
LAB_00be7408:
  plVar7 = (long *)func_0x00a67a34(plVar7,_System_IDisposable_TypeInfo);
  if (plVar7 != (long *)0x0) {
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == _System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_00be7468;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)func_0x00a9e6c4(plVar7,_System_IDisposable_TypeInfo,0);
LAB_00be7468:
    (*(code *)*puVar4)(plVar7,puVar4[1]);
  }
  uVar3 = _string_var;
  if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b48(lVar8);
  }
  if (*(int *)(_System_Type_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
  if (plVar2 == (long *)0x0) goto LAB_00be7504;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x428))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x430));
  plVar7 = _string___TypeInfo;
  pvVar6 = (void *)0x0;
  if ((plVar2 == (long *)0x0) ||
     (pvVar6 = (void *)func_0x00a67a34(plVar2,_string___TypeInfo), pvVar6 != (void *)0x0)) {
    return pvVar6;
  }
  auVar12 = func_0x00a67eec(plVar2,plVar7);
  if (auVar12._8_4_ != 1) goto LAB_00be7560;
  plVar5 = (long *)func_0x016dec50();
  lVar8 = *plVar5;
  func_0x016dec60();
  goto LAB_00be7408;
LAB_00be7560:
  plVar2 = (long *)func_0x00a67a34(plVar7,_System_IDisposable_TypeInfo);
  if (plVar2 != (long *)0x0) {
    lVar8 = *plVar2;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == _System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_00be75c0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)func_0x00a9e6c4(plVar2,_System_IDisposable_TypeInfo,0);
LAB_00be75c0:
    (*(code *)*puVar4)(plVar2,puVar4[1]);
  }
  func_0x00b65214(auVar12._0_8_);
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b48(0);
}



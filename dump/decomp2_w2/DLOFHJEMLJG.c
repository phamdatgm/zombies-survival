// ==== public string KGCOIHNNBDJ(string HNJBEDNKJFJ, string OLINJKAMCPG) { }   @0xae70dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DLOFHJEMLJG__KGCOIHNNBDJ(void *__this,void *HNJBEDNKJFJ,void *OLINJKAMCPG)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  void *pvStack_40;
  void *pvStack_38;
  
  if ((bRam0000000001916e4c & 1) == 0) {
    func_0x00a67900(&DLOFHJEMLJG_ODHHFNEAGPM_TypeInfo);
    func_0x00a67900(&string_TypeInfo);
    bRam0000000001916e4c = 1;
  }
  plVar11 = *(long **)((long)__this + 0x10);
  pvStack_40 = HNJBEDNKJFJ;
  pvStack_38 = OLINJKAMCPG;
  uVar2 = func_0x00a67a38(_DLOFHJEMLJG_ODHHFNEAGPM_TypeInfo,&pvStack_40);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  plVar11 = (long *)(**(code **)(*plVar11 + 0x2f8))(plVar11,uVar2,*(undefined8 *)(*plVar11 + 0x300))
  ;
  if ((plVar11 == (long *)0x0) || (*plVar11 == _string_TypeInfo)) {
    return plVar11;
  }
  auVar12 = func_0x00a67eec();
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
  plVar11 = (long *)func_0x00a67b44(_System_Collections_ArrayList_TypeInfo);
  System_Collections_ArrayList___ctor(plVar11,0);
  if (auVar12._8_8_ != 0) {
    uVar2 = System_String__ToUpper(auVar12._8_8_,0);
    plVar6 = *(long **)(auVar12._0_8_ + 0x10);
    if ((plVar6 != (long *)0x0) &&
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x368))(plVar6,*(undefined8 *)(*plVar6 + 0x370)),
       plVar6 != (long *)0x0)) {
      lVar7 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == _System_Collections_IEnumerable_TypeInfo) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_00be72c8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)func_0x00a9e6c4(plVar6,_System_Collections_IEnumerable_TypeInfo,0);
LAB_00be72c8:
      plVar6 = (long *)(*(code *)*puVar3)(plVar6,puVar3[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      do {
        lVar7 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == _System_Collections_IEnumerator_TypeInfo) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_00be7340;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00a9e6c4(plVar6,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00be7340:
        uVar9 = (*(code *)*puVar3)(plVar6,puVar3[1]);
        if ((uVar9 & 1) == 0) {
          lVar7 = 0;
          goto LAB_00be7408;
        }
        lVar7 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == _System_Collections_IEnumerator_TypeInfo) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_00be73a0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00a9e6c4(plVar6,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00be73a0:
        plVar4 = (long *)(*(code *)*puVar3)(plVar6,puVar3[1]);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        if (*(long *)(*plVar4 + 0x40) != *(long *)(_DLOFHJEMLJG_ODHHFNEAGPM_TypeInfo + 0x40)) {
          func_0x00a67eec();
LAB_00be7500:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        puVar3 = (undefined8 *)func_0x00a67a3c();
        uVar1 = puVar3[1];
        uVar9 = System_String__op_Equality(*puVar3,uVar2,0);
        if ((uVar9 & 1) != 0) {
          if (plVar11 == (long *)0x0) goto LAB_00be7500;
          (**(code **)(*plVar11 + 0x308))(plVar11,uVar1,*(undefined8 *)(*plVar11 + 0x310));
        }
      } while( true );
    }
  }
LAB_00be7504:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
LAB_00be7408:
  plVar6 = (long *)func_0x00a67a34(plVar6,_System_IDisposable_TypeInfo);
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == _System_IDisposable_TypeInfo) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_00be7468;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)func_0x00a9e6c4(plVar6,_System_IDisposable_TypeInfo,0);
LAB_00be7468:
    (*(code *)*puVar3)(plVar6,puVar3[1]);
  }
  uVar2 = _string_var;
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b48(lVar7);
  }
  if (*(int *)(_System_Type_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  if (plVar11 == (long *)0x0) goto LAB_00be7504;
  plVar11 = (long *)(**(code **)(*plVar11 + 0x428))(plVar11,uVar2,*(undefined8 *)(*plVar11 + 0x430))
  ;
  plVar6 = _string___TypeInfo;
  pvVar5 = (void *)0x0;
  if ((plVar11 == (long *)0x0) ||
     (pvVar5 = (void *)func_0x00a67a34(plVar11,_string___TypeInfo), pvVar5 != (void *)0x0)) {
    return pvVar5;
  }
  auVar13 = func_0x00a67eec(plVar11,plVar6);
  if (auVar13._8_4_ != 1) goto LAB_00be7560;
  plVar4 = (long *)func_0x016dec50();
  lVar7 = *plVar4;
  func_0x016dec60();
  goto LAB_00be7408;
LAB_00be7560:
  plVar11 = (long *)func_0x00a67a34(plVar6,_System_IDisposable_TypeInfo);
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == _System_IDisposable_TypeInfo) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_00be75c0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)func_0x00a9e6c4(plVar11,_System_IDisposable_TypeInfo,0);
LAB_00be75c0:
    (*(code *)*puVar3)(plVar11,puVar3[1]);
  }
  func_0x00b65214(auVar13._0_8_);
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b48(0);
}



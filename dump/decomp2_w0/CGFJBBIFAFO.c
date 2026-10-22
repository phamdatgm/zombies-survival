// ==== public static byte[] OEFNJAFHKFK() { }   @0xae43c8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * CGFJBBIFAFO__OEFNJAFHKFK(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  undefined8 *puVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  uint uVar25;
  undefined8 *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  long lStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  void *pvStack_b8;
  long lStack_b0;
  long lStack_a8;
  code *pcStack_98;
  long lStack_70;
  long lStack_68;
  
  if ((bRam0000000001916e2a & 1) == 0) {
    func_0x00a67900(&CGFJBBIFAFO_TypeInfo);
    bRam0000000001916e2a = 1;
  }
  if (*(int *)(_CGFJBBIFAFO_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar14 = *(long **)(_CGFJBBIFAFO_TypeInfo + 0xb8);
  if (*(char *)((long)plVar14 + 0x14) == '\0') {
    return (void *)0x0;
  }
  if (*(int *)(_CGFJBBIFAFO_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    plVar14 = *(long **)(_CGFJBBIFAFO_TypeInfo + 0xb8);
  }
  lVar18 = *plVar14;
  lVar12 = plVar14[1];
  lVar10 = plVar14[2];
  if ((bRam000000000191d6b4 & 1) == 0) {
    func_0x00a67900(&byte___TypeInfo,lVar12,(int)lVar10,0);
    func_0x00a67900(&Method_System_Linq_Enumerable_Select_byte__byte___);
    func_0x00a67900(&Method_System_Linq_Enumerable_Skip_byte___);
    func_0x00a67900(&Method_System_Linq_Enumerable_Take_byte___);
    func_0x00a67900(&Method_System_Linq_Enumerable_ToArray_byte___);
    func_0x00a67900(&System_Func_byte__byte__TypeInfo);
    func_0x00a67900(&
                    Method_UnityEngine_Purchasing_Security_Obfuscator___c__DisplayClass0_0__DeObfusc
                   );
    func_0x00a67900(&UnityEngine_Purchasing_Security_Obfuscator___c__DisplayClass0_0_TypeInfo);
    bRam000000000191d6b4 = 1;
  }
  lVar7 = func_0x00a67b44(_UnityEngine_Purchasing_Security_Obfuscator___c__DisplayClass0_0_TypeInfo)
  ;
  System_Object___ctor(lVar7,0);
  if ((lVar7 == 0) || (*(int *)(lVar7 + 0x10) = (int)lVar10, lVar18 == 0)) {
LAB_014ea5f4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar8 = func_0x00a679a0(_byte___TypeInfo,*(undefined4 *)(lVar18 + 0x18));
  iVar1 = *(int *)(lVar18 + 0x18);
  lStack_68 = lVar18;
  System_Array__Copy(lVar18,uVar8,iVar1,0);
  if (lVar12 == 0) goto LAB_014ea5f4;
  uVar13 = (uint)*(undefined8 *)(lVar12 + 0x18);
  uVar25 = uVar13 - 1;
  lStack_70 = lVar7;
  if (-1 < (int)uVar25) {
    if (uVar25 < uVar13) {
      iVar20 = uVar13 * 0x14;
      do {
        iVar20 = iVar20 + -0x14;
        iVar2 = *(int *)(lVar12 + (ulong)uVar25 * 4 + 0x20);
        iVar21 = 0x14;
        if ((iVar1 % 0x14 != 0) && (iVar2 == iVar1 / 0x14)) {
          iVar21 = *(int *)(lStack_68 + 0x18) % 0x14;
        }
        uVar9 = System_Linq_Enumerable__Skip___Il2CppFullySharedGenericType_
                          (uVar8,iVar20,_Method_System_Linq_Enumerable_Skip_byte___);
        uVar9 = System_Linq_Enumerable__Take___Il2CppFullySharedGenericType_
                          (uVar9,iVar21,_Method_System_Linq_Enumerable_Take_byte___);
        uVar9 = System_Linq_Enumerable__ToArray___Il2CppFullySharedGenericType_
                          (uVar9,_Method_System_Linq_Enumerable_ToArray_byte___);
        iVar2 = iVar2 * 0x14;
        System_Array__Copy(uVar8,iVar2,uVar8,iVar20,iVar21,0);
        System_Array__Copy(uVar9,0,uVar8,iVar2,iVar21,0);
        uVar25 = uVar25 - 1;
        if ((int)uVar25 < 0) goto code_r0x00c861cc;
      } while (uVar25 < *(uint *)(lVar12 + 0x18));
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
code_r0x00c861cc:
  uVar9 = func_0x00a67b44(_System_Func_byte__byte__TypeInfo);
  System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar9,lStack_70,
             _Method_UnityEngine_Purchasing_Security_Obfuscator___c__DisplayClass0_0__DeObfusc,0);
  lVar12 = _Method_System_Linq_Enumerable_Select_byte__byte___;
  lVar10 = System_Linq_Enumerable__Select___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
                     (uVar8,uVar9);
  lVar18 = _Method_System_Linq_Enumerable_ToArray_byte___;
  if (*(long *)(_Method_System_Linq_Enumerable_ToArray_byte___ + 0x38) == 0) {
    func_0x00a9e42c(_Method_System_Linq_Enumerable_ToArray_byte___);
  }
  if (lVar10 != 0) {
    System_Linq_Buffer___Il2CppFullySharedGenericType____ctor
              (&stack0xffffffffffffffc0,lVar10,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x10));
    pvVar3 = (void *)System_Linq_Buffer___Il2CppFullySharedGenericType___ToArray
                               (&stack0xffffffffffffffd0,
                                *(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x18));
    return pvVar3;
  }
  uVar8 = func_0x00a67914(&Str_source);
  uVar8 = System_Linq_Error__ArgumentNull(uVar8,0);
  auVar27 = func_0x00a67a20(uVar8,lVar18);
  lVar18 = auVar27._8_8_;
  plVar14 = auVar27._0_8_;
  lVar10 = *(long *)(lVar12 + 0x38);
  if (lVar10 == 0) {
    func_0x00a9e42c(lVar12);
    lVar10 = *(long *)(lVar12 + 0x38);
  }
  lStack_c0 = System_Linq_IdentityFunction___Il2CppFullySharedGenericType___get_Instance
                        (*(undefined8 *)(lVar10 + 0x10));
  lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x28);
  pcStack_98 = 
  System_Linq_Enumerable__ToDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
  ;
  pvStack_b8 = (void *)0x0;
  lStack_d0 = tpidr_el0;
  lStack_a8 = *(long *)(lStack_d0 + 0x28);
  lVar10 = *(long *)(lVar12 + 0x38);
  if (lVar10 == 0) {
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    lVar10 = *(long *)(lVar12 + 0x38);
    if (lVar10 == 0) {
      func_0x00a9e42c(lVar12);
      lVar10 = *(long *)(lVar12 + 0x38);
    }
  }
  uVar22 = (ulong)*(uint *)(*(long *)(lVar10 + 0x48) + 0xfc);
  uVar16 = uVar22 + 0xf & 0x1fffffff0;
  lVar7 = (long)&lStack_d0 - uVar16;
  puStack_c8 = (undefined8 *)(lVar7 - uVar16);
  puVar24 = (undefined8 *)((long)puStack_c8 - uVar16);
  puVar26 = (undefined8 *)
            ((long)puVar24 - ((ulong)*(uint *)(*(long *)(lVar10 + 0x58) + 0xfc) + 0xf & 0x1fffffff0)
            );
  puVar19 = (undefined8 *)
            ((long)puVar26 - ((ulong)*(uint *)(*(long *)(lVar10 + 0x68) + 0xfc) + 0xf & 0x1fffffff0)
            );
  lVar23 = (long)puVar19 - uVar16;
  func_0x016decb0(lVar23,0,uVar22);
  if (plVar14 == (long *)0x0) {
    puVar5 = &Str_source;
  }
  else if (lVar18 == 0) {
    puVar5 = &Str_keySelector;
  }
  else {
    if (lStack_c0 != 0) {
      if ((*(byte *)(*(long *)(lVar10 + 0x20) + 0x135) & 1) == 0) {
        func_0x00a9e3d0();
      }
      pvVar3 = pvStack_b8;
      pvStack_b8 = (void *)func_0x00a67b44();
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                (pvStack_b8,pvVar3,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x28));
      lVar10 = **(long **)(lVar12 + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x00a9e3d0(lVar10);
      }
      lVar15 = *plVar14;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar10) {
            puVar4 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_00c8649c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar4 = (undefined8 *)func_0x00a9e6c4(plVar14,lVar10,0);
LAB_00c8649c:
      plVar14 = (long *)(*(code *)*puVar4)(plVar14,puVar4[1]);
      if (plVar14 != (long *)0x0) {
        do {
          lVar10 = *plVar14;
          uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                puVar4 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_00c86504;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar4 = (undefined8 *)func_0x00a9e6c4(plVar14,_System_Collections_IEnumerator_TypeInfo,0)
          ;
LAB_00c86504:
          uVar16 = (*(code *)*puVar4)(plVar14,puVar4[1]);
          if ((uVar16 & 1) == 0) {
            lVar18 = 0;
            goto LAB_00c86674;
          }
          lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x38);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = func_0x00a9e3d0(lVar10);
          }
          lVar15 = *plVar14;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar10) {
                lVar10 = lVar15 + (long)*piVar17 * 0x10 + 0x138;
                goto LAB_00c86578;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          lVar10 = func_0x00a9e6c4(plVar14,lVar10,0);
LAB_00c86578:
          lVar10 = *(long *)(lVar10 + 8);
          lStack_b0 = lVar7;
          (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar14,&lStack_b0,lVar7);
          func_0x016decc0(lVar23,lVar7,uVar22);
          puVar4 = puStack_c8;
          func_0x016decc0(puStack_c8,lVar23,uVar22);
          if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0x38) + 0x48) + 0x28)) {
            puVar4 = (undefined8 *)*puVar4;
          }
          (**(code **)(lVar18 + 0x18))
                    (*(undefined8 *)(lVar18 + 0x40),puVar4,puVar26,*(undefined8 *)(lVar18 + 0x28));
          func_0x016decc0(puVar24,lVar23,uVar22);
          puVar4 = puVar24;
          if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0x38) + 0x48) + 0x28)) {
            puVar4 = (undefined8 *)*puVar24;
          }
          (**(code **)(lStack_c0 + 0x18))
                    (*(undefined8 *)(lStack_c0 + 0x40),puVar4,puVar19,
                     *(undefined8 *)(lStack_c0 + 0x28));
          if (pvStack_b8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          lVar10 = *(long *)(lVar12 + 0x38);
          puVar4 = puVar26;
          if (-1 < *(int *)(*(long *)(lVar10 + 0x58) + 0x28)) {
            puVar4 = (undefined8 *)*puVar26;
          }
          puVar11 = puVar19;
          if (-1 < *(int *)(*(long *)(lVar10 + 0x68) + 0x28)) {
            puVar11 = (undefined8 *)*puVar19;
          }
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                    (pvStack_b8,puVar4,puVar11,*(undefined8 *)(lVar10 + 0x70));
        } while( true );
      }
      goto LAB_00c8674c;
    }
    puVar5 = &Str_elementSelector;
  }
  uVar8 = func_0x00a67914(puVar5);
  uVar8 = System_Linq_Error__ArgumentNull(uVar8,0);
  func_0x00a67a20(uVar8,lVar12);
LAB_00c8674c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
LAB_00c86674:
  if (plVar14 != (long *)0x0) {
    lVar12 = *plVar14;
    uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == _System_IDisposable_TypeInfo) {
          puVar19 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_00c866cc;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar19 = (undefined8 *)func_0x00a9e6c4(plVar14,_System_IDisposable_TypeInfo,0);
LAB_00c866cc:
    (*(code *)*puVar19)(plVar14,puVar19[1]);
  }
  if (lVar18 != 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b48(lVar18);
  }
  if (*(long *)(lStack_d0 + 0x28) == lStack_a8) {
    return pvStack_b8;
  }
  auVar28 = func_0x016dec70();
  if (auVar28._8_4_ != 1) goto LAB_00c8679c;
  plVar6 = (long *)func_0x016dec50(auVar28._0_8_);
  lVar18 = *plVar6;
  func_0x016dec60();
  goto LAB_00c86674;
LAB_00c8679c:
  if (plVar14 != (long *)0x0) {
    lVar18 = *plVar14;
    uVar16 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == _System_IDisposable_TypeInfo) {
          puVar19 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_00c867f4;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar19 = (undefined8 *)func_0x00a9e6c4(plVar14,_System_IDisposable_TypeInfo,0);
LAB_00c867f4:
    (*(code *)*puVar19)(plVar14,puVar19[1]);
  }
  func_0x00b65214(auVar28._0_8_);
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b48(0);
}



// ==== public static List<int> LNCHNOCKCAN() { }   @0xb583a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * KKDJDGPGFPN__LNCHNOCKCAN(void)

{
  undefined1 auVar1 [16];
  code **ppcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong unaff_x21;
  undefined8 uVar13;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  code *pcVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  code *pcStack_40;
  ulong uStack_38;
  
  if ((bRam00000000019171c8 & 1) == 0) {
    func_0x00a67900(&Method_System_Linq_Enumerable_Select_string__int___);
    func_0x00a67900(&Method_System_Linq_Enumerable_ToList_int___);
    func_0x00a67900(&Method_System_Linq_Enumerable_Where_string___);
    func_0x00a67900(&System_Func_string__bool__TypeInfo);
    func_0x00a67900(&System_Func_string__int__TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_int___ctor__);
    func_0x00a67900(&System_Collections_Generic_List_int__TypeInfo);
    func_0x00a67900(&Method_KKDJDGPGFPN___c_FLOGGLDBLIP__);
    func_0x00a67900(&Method_KKDJDGPGFPN___c_NGEHJLMOFHG__);
    func_0x00a67900(&KKDJDGPGFPN___c_TypeInfo);
    func_0x00a67900(&Str_NotificationHelper_Scheduled);
    bRam00000000019171c8 = 1;
  }
  uVar3 = UnityEngine_PlayerPrefs__HasKey(_Str_NotificationHelper_Scheduled,0);
  if ((uVar3 & 1) == 0) {
    pvVar7 = (void *)func_0x00a67b44(_System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
              (pvVar7,_Method_System_Collections_Generic_List_int___ctor__);
    return pvVar7;
  }
  lVar4 = UnityEngine_PlayerPrefs__GetString(_Str_NotificationHelper_Scheduled,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  lVar11 = 0;
  uVar5 = System_String__Split(lVar4,0x7c,0);
  if (*(int *)(_KKDJDGPGFPN___c_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_KKDJDGPGFPN___c_TypeInfo);
  }
  lVar4 = *(long *)(*(long *)(_KKDJDGPGFPN___c_TypeInfo + 0xb8) + 8);
  if (lVar4 == 0) {
    if (*(int *)(_KKDJDGPGFPN___c_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_KKDJDGPGFPN___c_TypeInfo);
    }
    uVar13 = **(undefined8 **)(_KKDJDGPGFPN___c_TypeInfo + 0xb8);
    lVar4 = func_0x00a67b44(_System_Func_string__bool__TypeInfo);
    lVar11 = 0;
    System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (lVar4,uVar13,_Method_KKDJDGPGFPN___c_FLOGGLDBLIP__);
    *(long *)(*(long *)(_KKDJDGPGFPN___c_TypeInfo + 0xb8) + 8) = lVar4;
  }
  uVar5 = System_Linq_Enumerable__Where___Il2CppFullySharedGenericType_
                    (uVar5,lVar4,_Method_System_Linq_Enumerable_Where_string___);
  if (*(int *)(_KKDJDGPGFPN___c_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_KKDJDGPGFPN___c_TypeInfo);
  }
  lVar4 = *(long *)(*(long *)(_KKDJDGPGFPN___c_TypeInfo + 0xb8) + 0x10);
  if (lVar4 == 0) {
    if (*(int *)(_KKDJDGPGFPN___c_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_KKDJDGPGFPN___c_TypeInfo);
    }
    uVar13 = **(undefined8 **)(_KKDJDGPGFPN___c_TypeInfo + 0xb8);
    lVar4 = func_0x00a67b44(_System_Func_string__int__TypeInfo);
    lVar11 = 0;
    System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (lVar4,uVar13,_Method_KKDJDGPGFPN___c_NGEHJLMOFHG__);
    *(long *)(*(long *)(_KKDJDGPGFPN___c_TypeInfo + 0xb8) + 0x10) = lVar4;
  }
  lVar10 = _Method_System_Linq_Enumerable_Select_string__int___;
  lVar6 = System_Linq_Enumerable__Select___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
                    (uVar5,lVar4);
  lVar4 = _Method_System_Linq_Enumerable_ToList_int___;
  if (*(long *)(_Method_System_Linq_Enumerable_ToList_int___ + 0x38) == 0) {
    func_0x00a9e42c(_Method_System_Linq_Enumerable_ToList_int___);
  }
  if (lVar6 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x00a9e3d0();
    }
    pvVar7 = (void *)func_0x00a67b44();
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
              (pvVar7,lVar6,*(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x10));
    return pvVar7;
  }
  uVar5 = func_0x00a67914(&Str_source);
  uVar5 = System_Linq_Error__ArgumentNull(uVar5,0);
  auVar15 = func_0x00a67a20(uVar5,lVar4);
  ppcVar2 = &pcStack_40;
  pcStack_40 = System_Linq_Enumerable__Union___Il2CppFullySharedGenericType_;
  lVar6 = lVar10;
  uStack_38 = unaff_x21;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x00a9e42c(lVar10);
  }
  if (auVar15._0_8_ == 0) {
    puVar8 = &Str_first;
  }
  else {
    if (auVar15._8_8_ != 0) {
      lVar11 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
      lVar6 = 0;
      ppcVar2 = (code **)&stack0xffffffffffffffe0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uStack_38;
      lVar10 = lVar4;
      pcVar14 = pcStack_40;
      auVar16 = auVar15;
      auVar15 = auVar1;
      goto code_r0x00c86908;
    }
    puVar8 = &Str_second;
  }
  uVar5 = func_0x00a67914(puVar8);
  uVar5 = System_Linq_Error__ArgumentNull(uVar5,0);
  pcVar14 = System_Linq_Enumerable__UnionIterator___Il2CppFullySharedGenericType_;
  auVar16 = func_0x00a67a20(uVar5,lVar10);
code_r0x00c86908:
  *(code **)((long)ppcVar2 + -0x40) = pcVar14;
  *(undefined8 *)((long)ppcVar2 + -0x30) = unaff_x24;
  *(undefined8 *)((long)ppcVar2 + -0x28) = unaff_x23;
  *(undefined8 *)((long)ppcVar2 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)ppcVar2 + -0x18) = auVar15;
  *(long *)((long)ppcVar2 + -8) = lVar10;
  plVar12 = *(long **)(lVar11 + 0x38);
  if (plVar12 == (long *)0x0) {
    func_0x00a9e42c(lVar11);
    plVar12 = *(long **)(lVar11 + 0x38);
  }
  if ((*(byte *)(*plVar12 + 0x135) & 1) == 0) {
    func_0x00a9e3d0();
  }
  pvVar7 = (void *)func_0x00a67b44();
  System_Linq_Enumerable__UnionIterator_d__71___Il2CppFullySharedGenericType____ctor
            (pvVar7,0xfffffffe,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 8));
  if (pvVar7 != (void *)0x0) {
    lVar4 = *(long *)(**(long **)(lVar11 + 0x38) + 0x80) + 0xc0;
    func_0x00a515d8(lVar4,8);
    puVar9 = (undefined8 *)func_0x00a67920(pvVar7,lVar4);
    *puVar9 = auVar16._0_8_;
    lVar4 = *(long *)(**(long **)(lVar11 + 0x38) + 0x80) + 0x100;
    func_0x00a515d8(lVar4,8);
    puVar9 = (undefined8 *)func_0x00a67920(pvVar7,lVar4);
    *puVar9 = auVar16._8_8_;
    lVar4 = *(long *)(**(long **)(lVar11 + 0x38) + 0x80) + 0x80;
    func_0x00a515d8(lVar4,8);
    plVar12 = (long *)func_0x00a67920(pvVar7,lVar4);
    *plVar12 = lVar6;
    return pvVar7;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



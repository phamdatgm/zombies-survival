/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public static class KKDJDGPGFPN // TypeDefIndex: 5282
{
	// Methods

	public static List<int> LNCHNOCKCAN() { }

	public static void HOALPEDGMOI(int JNAMDIJNMKE) { }

	public static void EAKBEPCAPKE() { }

	public static void FIMDPBJGCNP(List<int> NMNPBPDBCEB) { }

	public static void PCPJMOGFDCH(int HKGEOJPHLAN) { }
}
*/

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
  lVar4 = *(long *)(KKDJDGPGFPN___c.<statics> + 8);
  if (lVar4 == 0) {
    if (*(int *)(_KKDJDGPGFPN___c_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_KKDJDGPGFPN___c_TypeInfo);
    }
    uVar13 = **(undefined8 **)(_KKDJDGPGFPN___c_TypeInfo + 0xb8);
    lVar4 = func_0x00a67b44(_System_Func_string__bool__TypeInfo);
    lVar11 = 0;
    System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (lVar4,uVar13,_Method_KKDJDGPGFPN___c_FLOGGLDBLIP__);
    *(long *)(KKDJDGPGFPN___c.<statics> + 8) = lVar4;
  }
  uVar5 = System_Linq_Enumerable__Where___Il2CppFullySharedGenericType_
                    (uVar5,lVar4,_Method_System_Linq_Enumerable_Where_string___);
  if (*(int *)(_KKDJDGPGFPN___c_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_KKDJDGPGFPN___c_TypeInfo);
  }
  lVar4 = *(long *)(KKDJDGPGFPN___c.<statics> + 0x10);
  if (lVar4 == 0) {
    if (*(int *)(_KKDJDGPGFPN___c_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_KKDJDGPGFPN___c_TypeInfo);
    }
    uVar13 = **(undefined8 **)(_KKDJDGPGFPN___c_TypeInfo + 0xb8);
    lVar4 = func_0x00a67b44(_System_Func_string__int__TypeInfo);
    lVar11 = 0;
    System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (lVar4,uVar13,_Method_KKDJDGPGFPN___c_NGEHJLMOFHG__);
    *(long *)(KKDJDGPGFPN___c.<statics> + 0x10) = lVar4;
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


// ==== public static void HOALPEDGMOI(int JNAMDIJNMKE) { }   @0xb58604

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void KKDJDGPGFPN__HOALPEDGMOI(int JNAMDIJNMKE)

{
  long lVar1;
  int iStack_14;
  
  if ((bRam00000000019171c9 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_int__Add__);
    bRam00000000019171c9 = 1;
  }
  lVar1 = KKDJDGPGFPN__LNCHNOCKCAN();
  if (lVar1 != 0) {
    iStack_14 = JNAMDIJNMKE;
    func_0x00b7fe44(lVar1,&iStack_14,_Method_System_Collections_Generic_List_int__Add__);
    KKDJDGPGFPN__FIMDPBJGCNP(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public static void FIMDPBJGCNP(List<int> NMNPBPDBCEB) { }   @0xb5866c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void KKDJDGPGFPN__FIMDPBJGCNP(void *NMNPBPDBCEB)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam00000000019171cb & 1) == 0) {
    func_0x00a67900(&Method_System_Linq_Enumerable_Select_int__string___);
    func_0x00a67900(&Method_System_Linq_Enumerable_ToArray_string___);
    func_0x00a67900(&System_Func_int__string__TypeInfo);
    func_0x00a67900(&Method_KKDJDGPGFPN___c_CJKGILBADPI__);
    func_0x00a67900(&KKDJDGPGFPN___c_TypeInfo);
    func_0x00a67900(&Str_NotificationHelper_Scheduled);
    func_0x00a67900(&Str__);
    bRam00000000019171cb = 1;
  }
  if (*(int *)(_KKDJDGPGFPN___c_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = _Str__;
  uVar3 = _Str_NotificationHelper_Scheduled;
  lVar4 = *(long *)(KKDJDGPGFPN___c.<statics> + 0x18);
  if (lVar4 == 0) {
    if (*(int *)(_KKDJDGPGFPN___c_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = **(undefined8 **)(_KKDJDGPGFPN___c_TypeInfo + 0xb8);
    lVar4 = func_0x00a67b44(_System_Func_int__string__TypeInfo);
    System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (lVar4,uVar5,_Method_KKDJDGPGFPN___c_CJKGILBADPI__,0);
    *(long *)(KKDJDGPGFPN___c.<statics> + 0x18) = lVar4;
  }
  uVar5 = System_Linq_Enumerable__Select___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
                    (NMNPBPDBCEB,lVar4,_Method_System_Linq_Enumerable_Select_int__string___);
  uVar5 = System_Linq_Enumerable__ToArray___Il2CppFullySharedGenericType_
                    (uVar5,_Method_System_Linq_Enumerable_ToArray_string___);
  uVar1 = System_String__Join(uVar1,uVar5,0);
  if (pcRam000000000191c270 == (code *)0x0) {
    pcRam000000000191c270 = (code *)func_0x00a678c4(&UNK_005a189a,uVar1,0);
  }
  uVar2 = (*pcRam000000000191c270)(uVar3,uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  func_0x00a67914(&UnityEngine_PlayerPrefsException_TypeInfo);
  uVar3 = func_0x00a67b44();
  uVar1 = func_0x00a67914(&Str_Could_not_store_preference_value);
  UnityEngine_PlayerPrefsException___ctor(uVar3,uVar1);
  uVar1 = func_0x00a67914(&Method_UnityEngine_PlayerPrefs_SetString__);
  auVar6 = func_0x00a67a20(uVar3,uVar1);
  if (pcRam000000000191c280 == (code *)0x0) {
    pcRam000000000191c280 = (code *)func_0x00a678c4(&UNK_005a8fe2);
  }
                    /* WARNING: Could not recover jumptable at 0x01486e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c280)(auVar6._0_8_,auVar6._8_8_);
  return;
}


// ==== public static void EAKBEPCAPKE() { }   @0xb587d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void KKDJDGPGFPN__EAKBEPCAPKE(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam00000000019171ca & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_int___ctor__);
    func_0x00a67900(&System_Collections_Generic_List_int__TypeInfo);
    bRam00000000019171ca = 1;
  }
  uVar2 = func_0x00a67b44(_System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
            (uVar2,_Method_System_Collections_Generic_List_int___ctor__);
  if ((bRam00000000019171cb & 1) == 0) {
    func_0x00a67900(&Method_System_Linq_Enumerable_Select_int__string___);
    func_0x00a67900(&Method_System_Linq_Enumerable_ToArray_string___);
    func_0x00a67900(&System_Func_int__string__TypeInfo);
    func_0x00a67900(&Method_KKDJDGPGFPN___c_CJKGILBADPI__);
    func_0x00a67900(&KKDJDGPGFPN___c_TypeInfo);
    func_0x00a67900(&Str_NotificationHelper_Scheduled);
    func_0x00a67900(&Str__);
    bRam00000000019171cb = 1;
  }
  if (*(int *)(_KKDJDGPGFPN___c_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = _Str__;
  uVar4 = _Str_NotificationHelper_Scheduled;
  lVar5 = *(long *)(KKDJDGPGFPN___c.<statics> + 0x18);
  if (lVar5 == 0) {
    if (*(int *)(_KKDJDGPGFPN___c_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = **(undefined8 **)(_KKDJDGPGFPN___c_TypeInfo + 0xb8);
    lVar5 = func_0x00a67b44(_System_Func_int__string__TypeInfo);
    System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (lVar5,uVar6,_Method_KKDJDGPGFPN___c_CJKGILBADPI__,0);
    *(long *)(KKDJDGPGFPN___c.<statics> + 0x18) = lVar5;
  }
  uVar2 = System_Linq_Enumerable__Select___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
                    (uVar2,lVar5,_Method_System_Linq_Enumerable_Select_int__string___);
  uVar2 = System_Linq_Enumerable__ToArray___Il2CppFullySharedGenericType_
                    (uVar2,_Method_System_Linq_Enumerable_ToArray_string___);
  uVar2 = System_String__Join(uVar1,uVar2,0);
  if (pcRam000000000191c270 == (code *)0x0) {
    pcRam000000000191c270 = (code *)func_0x00a678c4(&UNK_005a189a,uVar2,0);
  }
  uVar3 = (*pcRam000000000191c270)(uVar4,uVar2);
  if ((uVar3 & 1) != 0) {
    return;
  }
  func_0x00a67914(&UnityEngine_PlayerPrefsException_TypeInfo);
  uVar2 = func_0x00a67b44();
  uVar4 = func_0x00a67914(&Str_Could_not_store_preference_value);
  UnityEngine_PlayerPrefsException___ctor(uVar2,uVar4);
  uVar4 = func_0x00a67914(&Method_UnityEngine_PlayerPrefs_SetString__);
  auVar7 = func_0x00a67a20(uVar2,uVar4);
  if (pcRam000000000191c280 == (code *)0x0) {
    pcRam000000000191c280 = (code *)func_0x00a678c4(&UNK_005a8fe2);
  }
                    /* WARNING: Could not recover jumptable at 0x01486e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c280)(auVar7._0_8_,auVar7._8_8_);
  return;
}


// ==== public static void PCPJMOGFDCH(int HKGEOJPHLAN) { }   @0xb58840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void KKDJDGPGFPN__PCPJMOGFDCH(int HKGEOJPHLAN)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam00000000019171cc & 1) == 0) {
    func_0x00a67900(&Method_KKDJDGPGFPN_JLCBOCNCEOJ_ODEGCPJFCNL__);
    func_0x00a67900(&KKDJDGPGFPN_JLCBOCNCEOJ_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_int__RemoveAll__);
    func_0x00a67900(&System_Predicate_int__TypeInfo);
    bRam00000000019171cc = 1;
  }
  lVar2 = func_0x00a67b44(_KKDJDGPGFPN_JLCBOCNCEOJ_TypeInfo);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x10) = HKGEOJPHLAN;
    lVar3 = KKDJDGPGFPN__LNCHNOCKCAN();
    uVar4 = func_0x00a67b44(_System_Predicate_int__TypeInfo);
    System_Predicate___Il2CppFullySharedGenericType____ctor
              (uVar4,lVar2,_Method_KKDJDGPGFPN_JLCBOCNCEOJ_ODEGCPJFCNL__,0);
    if (lVar3 != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___RemoveAll
                (lVar3,uVar4,_Method_System_Collections_Generic_List_int__RemoveAll__);
      if ((bRam00000000019171cb & 1) == 0) {
        func_0x00a67900(&Method_System_Linq_Enumerable_Select_int__string___);
        func_0x00a67900(&Method_System_Linq_Enumerable_ToArray_string___);
        func_0x00a67900(&System_Func_int__string__TypeInfo);
        func_0x00a67900(&Method_KKDJDGPGFPN___c_CJKGILBADPI__);
        func_0x00a67900(&KKDJDGPGFPN___c_TypeInfo);
        func_0x00a67900(&Str_NotificationHelper_Scheduled);
        func_0x00a67900(&Str__);
        bRam00000000019171cb = 1;
      }
      if (*(int *)(_KKDJDGPGFPN___c_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = _Str__;
      uVar4 = _Str_NotificationHelper_Scheduled;
      lVar2 = *(long *)(KKDJDGPGFPN___c.<statics> + 0x18);
      if (lVar2 == 0) {
        if (*(int *)(_KKDJDGPGFPN___c_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = **(undefined8 **)(_KKDJDGPGFPN___c_TypeInfo + 0xb8);
        lVar2 = func_0x00a67b44(_System_Func_int__string__TypeInfo);
        System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                  (lVar2,uVar6,_Method_KKDJDGPGFPN___c_CJKGILBADPI__,0);
        *(long *)(KKDJDGPGFPN___c.<statics> + 0x18) = lVar2;
      }
      uVar6 = System_Linq_Enumerable__Select___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
                        (lVar3,lVar2,_Method_System_Linq_Enumerable_Select_int__string___);
      uVar6 = System_Linq_Enumerable__ToArray___Il2CppFullySharedGenericType_
                        (uVar6,_Method_System_Linq_Enumerable_ToArray_string___);
      uVar1 = System_String__Join(uVar1,uVar6,0);
      if (pcRam000000000191c270 == (code *)0x0) {
        pcRam000000000191c270 = (code *)func_0x00a678c4(&UNK_005a189a,uVar1,0);
      }
      uVar5 = (*pcRam000000000191c270)(uVar4,uVar1);
      if ((uVar5 & 1) != 0) {
        return;
      }
      func_0x00a67914(&UnityEngine_PlayerPrefsException_TypeInfo);
      uVar4 = func_0x00a67b44();
      uVar1 = func_0x00a67914(&Str_Could_not_store_preference_value);
      UnityEngine_PlayerPrefsException___ctor(uVar4,uVar1);
      uVar1 = func_0x00a67914(&Method_UnityEngine_PlayerPrefs_SetString__);
      auVar7 = func_0x00a67a20(uVar4,uVar1);
      if (pcRam000000000191c280 == (code *)0x0) {
        pcRam000000000191c280 = (code *)func_0x00a678c4(&UNK_005a8fe2);
      }
                    /* WARNING: Could not recover jumptable at 0x01486e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c280)(auVar7._0_8_,auVar7._8_8_);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



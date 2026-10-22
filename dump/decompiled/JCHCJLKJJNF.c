/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public static class JCHCJLKJJNF // TypeDefIndex: 5267
{
	// Properties
	private static AndroidJavaClass GAGHCNEGJNJ { get; }

	// Methods

	public static void JHEDFDCJBDE(int HKGEOJPHLAN) { }

	public static void HMHJLCKJCAN() { }

	public static int PKKNJHMEIKJ(BFECKMLPMOK BPNNLKAFIGF) { }

	public static void AEPHMLOMPBG() { }

	private static int GCDEMFCDPPG(Color ONFEABADDFB) { }

	private static string LIOLOMKELPJ(FPKBDOPAFGP DJAGPKMAACN) { }

	private static AndroidJavaClass AFJAAIMFNDF() { }
}
*/

// ==== public static void JHEDFDCJBDE(int HKGEOJPHLAN) { }   @0xb5200c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void JCHCJLKJJNF__JHEDFDCJBDE(int HKGEOJPHLAN)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iStack_24;
  
  if ((bRam0000000001917196 & 1) == 0) {
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_CancelNotification);
    bRam0000000001917196 = 1;
  }
  lVar1 = JCHCJLKJJNF__AFJAAIMFNDF();
  plVar2 = (long *)func_0x00a679a0(_object___TypeInfo,1);
  iStack_24 = HKGEOJPHLAN;
  lVar3 = func_0x00a67a38(_int_TypeInfo,&iStack_24);
  if (plVar2 != (long *)0x0) {
    if ((lVar3 != 0) && (lVar4 = func_0x00a67a34(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)
       ) {
      uVar5 = func_0x00a67b74();
      func_0x00a67a20(uVar5,0);
      if ((bRam000000000191719b & 1) == 0) {
        func_0x00a67900(&UnityEngine_AndroidJavaClass_TypeInfo);
        func_0x00a67900(&Str_com_hippogames_simpleandroidnotification);
        bRam000000000191719b = 1;
      }
      uVar5 = func_0x00a67b44(_UnityEngine_AndroidJavaClass_TypeInfo);
      UnityEngine_AndroidJavaClass___ctor(uVar5,_Str_com_hippogames_simpleandroidnotification,0);
      return;
    }
    if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar2[4] = lVar3;
    if (lVar1 != 0) {
      UnityEngine_AndroidJavaObject__CallStatic(lVar1,_Str_CancelNotification,plVar2,0);
      KKDJDGPGFPN__PCPJMOGFDCH(HKGEOJPHLAN,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private static AndroidJavaClass AFJAAIMFNDF() { }   @0xb5210c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * JCHCJLKJJNF__AFJAAIMFNDF(void)

{
  void *pvVar1;
  
  if ((bRam000000000191719b & 1) == 0) {
    func_0x00a67900(&UnityEngine_AndroidJavaClass_TypeInfo);
    func_0x00a67900(&Str_com_hippogames_simpleandroidnotification);
    bRam000000000191719b = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(pvVar1,_Str_com_hippogames_simpleandroidnotification,0);
  return pvVar1;
}


// ==== public static void HMHJLCKJCAN() { }   @0xb52178

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void JCHCJLKJJNF__HMHJLCKJCAN(void)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000001917197 & 1) == 0) {
    func_0x00a67900(&Method_System_Array_Empty_object___);
    func_0x00a67900(&Str_CancelAllDisplayedNotifications);
    bRam0000000001917197 = 1;
  }
  pvVar2 = JCHCJLKJJNF__AFJAAIMFNDF();
  lVar3 = _Method_System_Array_Empty_object___;
  lVar7 = *(long *)(_Method_System_Array_Empty_object___ + 0x38);
  if (lVar7 == 0) {
    func_0x00a9e42c(_Method_System_Array_Empty_object___);
    lVar7 = *(long *)(lVar3 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = func_0x00a9e3d0();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = func_0x00a9e3d0();
  }
  if (pvVar2 != (void *)0x0) {
    UnityEngine_AndroidJavaObject__CallStatic
              (pvVar2,_Str_CancelAllDisplayedNotifications,**(undefined8 **)(lVar3 + 0xb8),0);
    if ((bRam00000000019171ca & 1) == 0) {
      func_0x00a67900(&Method_System_Collections_Generic_List_int___ctor__);
      func_0x00a67900(&System_Collections_Generic_List_int__TypeInfo);
      bRam00000000019171ca = 1;
    }
    uVar4 = func_0x00a67b44(_System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
              (uVar4,_Method_System_Collections_Generic_List_int___ctor__);
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
    uVar6 = _Str_NotificationHelper_Scheduled;
    lVar3 = *(long *)(KKDJDGPGFPN___c.<statics> + 0x18);
    if (lVar3 == 0) {
      if (*(int *)(_KKDJDGPGFPN___c_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = **(undefined8 **)(_KKDJDGPGFPN___c_TypeInfo + 0xb8);
      lVar3 = func_0x00a67b44(_System_Func_int__string__TypeInfo);
      System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                (lVar3,uVar8,_Method_KKDJDGPGFPN___c_CJKGILBADPI__,0);
      *(long *)(KKDJDGPGFPN___c.<statics> + 0x18) = lVar3;
    }
    uVar4 = System_Linq_Enumerable__Select___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
                      (uVar4,lVar3,_Method_System_Linq_Enumerable_Select_int__string___);
    uVar4 = System_Linq_Enumerable__ToArray___Il2CppFullySharedGenericType_
                      (uVar4,_Method_System_Linq_Enumerable_ToArray_string___);
    uVar4 = System_String__Join(uVar1,uVar4,0);
    if (pcRam000000000191c270 == (code *)0x0) {
      pcRam000000000191c270 = (code *)func_0x00a678c4(&UNK_005a189a,uVar4,0);
    }
    uVar5 = (*pcRam000000000191c270)(uVar6,uVar4);
    if ((uVar5 & 1) != 0) {
      return;
    }
    func_0x00a67914(&UnityEngine_PlayerPrefsException_TypeInfo);
    uVar4 = func_0x00a67b44();
    uVar6 = func_0x00a67914(&Str_Could_not_store_preference_value);
    UnityEngine_PlayerPrefsException___ctor(uVar4,uVar6);
    uVar6 = func_0x00a67914(&Method_UnityEngine_PlayerPrefs_SetString__);
    auVar9 = func_0x00a67a20(uVar4,uVar6);
    if (pcRam000000000191c280 == (code *)0x0) {
      pcRam000000000191c280 = (code *)func_0x00a678c4(&UNK_005a8fe2);
    }
                    /* WARNING: Could not recover jumptable at 0x01486e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c280)(auVar9._0_8_,auVar9._8_8_);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public static int PKKNJHMEIKJ(BFECKMLPMOK BPNNLKAFIGF) { }   @0xb5223c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int JCHCJLKJJNF__PKKNJHMEIKJ(void *BPNNLKAFIGF)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  uint *puVar13;
  double dVar14;
  long lStack_88;
  uint uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  undefined4 uStack_6c;
  long lStack_68;
  
  if ((bRam0000000001917198 & 1) == 0) {
    func_0x00a67900(&System_Convert_TypeInfo);
    func_0x00a67900(&Method_System_Linq_Enumerable_Select_int__string___);
    func_0x00a67900(&Method_System_Linq_Enumerable_ToArray_string___);
    func_0x00a67900(&System_Func_int__string__TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&long_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&System_TimeSpan_TypeInfo);
    func_0x00a67900(&Method_JCHCJLKJJNF___c_DIECIEPEIHN__);
    func_0x00a67900(&JCHCJLKJJNF___c_TypeInfo);
    func_0x00a67900(&Str_SetNotification);
    func_0x00a67900(&Str_com_unity3d_player_UnityPlayerActivity);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_);
    bRam0000000001917198 = 1;
  }
  if (BPNNLKAFIGF == (void *)0x0) goto LAB_00c52bb0;
  if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  dVar14 = (double)System_TimeSpan__get_TotalMilliseconds((long)BPNNLKAFIGF + 0x38,0);
  lVar9 = -0x8000000000000000;
  if (dVar14 != INFINITY) {
    lVar9 = (long)dVar14;
  }
  if (*(char *)((long)BPNNLKAFIGF + 0xc0) == '\0') {
    lStack_88 = 0;
  }
  else {
    if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    dVar14 = (double)System_TimeSpan__get_TotalMilliseconds((long)BPNNLKAFIGF + 200,0);
    lStack_88 = -0x8000000000000000;
    if (dVar14 != INFINITY) {
      lStack_88 = (long)dVar14;
    }
  }
  uVar10 = *(undefined8 *)((long)BPNNLKAFIGF + 0x70);
  if (*(int *)(_JCHCJLKJJNF___c_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = _Str__;
  lVar11 = *(long *)(JCHCJLKJJNF___c.<statics> + 8);
  if (lVar11 == 0) {
    if (*(int *)(_JCHCJLKJJNF___c_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar12 = **(undefined8 **)(_JCHCJLKJJNF___c_TypeInfo + 0xb8);
    lVar11 = func_0x00a67b44(_System_Func_int__string__TypeInfo);
    System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (lVar11,uVar12,_Method_JCHCJLKJJNF___c_DIECIEPEIHN__,0);
    *(long *)(JCHCJLKJJNF___c.<statics> + 8) = lVar11;
  }
  uVar10 = System_Linq_Enumerable__Select___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
                     (uVar10,lVar11,_Method_System_Linq_Enumerable_Select_int__string___);
  uVar10 = System_Linq_Enumerable__ToArray___Il2CppFullySharedGenericType_
                     (uVar10,_Method_System_Linq_Enumerable_ToArray_string___);
  lVar11 = System_String__Join(uVar2,uVar10,0);
  lVar5 = JCHCJLKJJNF__AFJAAIMFNDF();
  plVar6 = (long *)func_0x00a679a0(_object___TypeInfo,0x1b);
  lStack_68 = CONCAT44(lStack_68._4_4_,*(undefined4 *)((long)BPNNLKAFIGF + 0x10));
  lVar7 = func_0x00a67a38(_int_TypeInfo,&lStack_68);
  if (plVar6 == (long *)0x0) goto LAB_00c52bb0;
  if ((lVar7 == 0) || (lVar8 = func_0x00a67a34(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 != 0))
  {
    puVar13 = (uint *)(plVar6 + 3);
    uVar4 = *puVar13;
    if (uVar4 == 0) goto LAB_00c52ba0;
    plVar6[4] = lVar7;
    uVar10 = _Str_SetNotification;
    lVar7 = _Str_;
    if (*(long *)((long)BPNNLKAFIGF + 0x18) != 0) {
      lVar7 = *(long *)((long)BPNNLKAFIGF + 0x18);
    }
    if (lVar7 != 0) {
      lVar8 = func_0x00a67a34(lVar7,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar8 == 0) goto LAB_00c52ba4;
      uVar4 = *puVar13;
    }
    if (uVar4 < 2) goto LAB_00c52ba0;
    plVar6[5] = lVar7;
    lVar7 = _Str_;
    if (*(long *)((long)BPNNLKAFIGF + 0x20) != 0) {
      lVar7 = *(long *)((long)BPNNLKAFIGF + 0x20);
    }
    if (lVar7 != 0) {
      lVar8 = func_0x00a67a34(lVar7,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar8 == 0) goto LAB_00c52ba4;
      uVar4 = *puVar13;
    }
    if (uVar4 < 3) goto LAB_00c52ba0;
    plVar6[6] = lVar7;
    lVar7 = *(long *)((long)BPNNLKAFIGF + 0x28);
    if (lVar7 != 0) {
      lVar8 = func_0x00a67a34(lVar7,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar8 == 0) goto LAB_00c52ba4;
      uVar4 = *puVar13;
    }
    if (uVar4 < 4) goto LAB_00c52ba0;
    plVar6[7] = lVar7;
    lVar7 = *(long *)((long)BPNNLKAFIGF + 0x30);
    if (lVar7 != 0) {
      lVar8 = func_0x00a67a34(lVar7,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar8 == 0) goto LAB_00c52ba4;
      uVar4 = *puVar13;
    }
    if (uVar4 < 5) goto LAB_00c52ba0;
    plVar6[8] = lVar7;
    lStack_68 = lVar9;
    lVar9 = func_0x00a67a38(_long_TypeInfo,&lStack_68);
    if ((lVar9 == 0) || (lVar7 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 != 0)
       ) {
      if (*puVar13 < 6) goto LAB_00c52ba0;
      plVar6[9] = lVar9;
      cVar1 = *(char *)((long)BPNNLKAFIGF + 0xc0);
      if (*(int *)(_System_Convert_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uStack_6c = System_Convert__ToInt32(cVar1 != '\0',0);
      lVar9 = func_0x00a67a38(_int_TypeInfo,&uStack_6c);
      if ((lVar9 == 0) ||
         (lVar7 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 != 0)) {
        if (*puVar13 < 7) goto LAB_00c52ba0;
        plVar6[10] = lVar9;
        lStack_78 = lStack_88;
        lVar9 = func_0x00a67a38(_long_TypeInfo,&lStack_78);
        if ((lVar9 == 0) ||
           (lVar7 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 != 0)) {
          uVar4 = *puVar13;
          if (uVar4 < 8) goto LAB_00c52ba0;
          plVar6[0xb] = lVar9;
          lVar9 = *(long *)((long)BPNNLKAFIGF + 0x40);
          if (lVar9 != 0) {
            lVar7 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40));
            if (lVar7 == 0) goto LAB_00c52ba4;
            uVar4 = *puVar13;
          }
          if (uVar4 < 9) goto LAB_00c52ba0;
          plVar6[0xc] = lVar9;
          lVar9 = *(long *)((long)BPNNLKAFIGF + 0x48);
          if (lVar9 != 0) {
            lVar7 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40));
            if (lVar7 == 0) goto LAB_00c52ba4;
            uVar4 = *puVar13;
          }
          if (uVar4 < 10) goto LAB_00c52ba0;
          plVar6[0xd] = lVar9;
          lVar9 = *(long *)((long)BPNNLKAFIGF + 0x50);
          if (lVar9 != 0) {
            lVar7 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40));
            if (lVar7 == 0) goto LAB_00c52ba4;
            uVar4 = *puVar13;
          }
          if (uVar4 < 0xb) goto LAB_00c52ba0;
          plVar6[0xe] = lVar9;
          uStack_7c = System_Convert__ToInt32(*(undefined1 *)((long)BPNNLKAFIGF + 0x58),0);
          lVar9 = func_0x00a67a38(_int_TypeInfo,&uStack_7c);
          if ((lVar9 == 0) ||
             (lVar7 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 != 0)) {
            if (*puVar13 < 0xc) goto LAB_00c52ba0;
            plVar6[0xf] = lVar9;
            uStack_80 = System_Convert__ToInt32(*(undefined1 *)((long)BPNNLKAFIGF + 0x59),0);
            lVar9 = func_0x00a67a38(_int_TypeInfo,&uStack_80);
            if ((lVar9 == 0) ||
               (lVar7 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 != 0)) {
              uVar4 = *puVar13;
              if (uVar4 < 0xd) goto LAB_00c52ba0;
              plVar6[0x10] = lVar9;
              lVar9 = _Str_;
              if (*(long *)((long)BPNNLKAFIGF + 0x60) != 0) {
                lVar9 = *(long *)((long)BPNNLKAFIGF + 0x60);
              }
              if (lVar9 != 0) {
                lVar7 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40));
                if (lVar7 == 0) goto LAB_00c52ba4;
                uVar4 = *puVar13;
              }
              if (uVar4 < 0xe) goto LAB_00c52ba0;
              plVar6[0x11] = lVar9;
              cVar1 = *(char *)((long)BPNNLKAFIGF + 0x68);
              if (*(int *)(_System_Convert_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar3 = System_Convert__ToInt32(cVar1 != '\0',0);
              lStack_68 = CONCAT44(lStack_68._4_4_,uVar3);
              lVar9 = func_0x00a67a38(_int_TypeInfo,&lStack_68);
              if ((lVar9 == 0) ||
                 (lVar7 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 != 0)) {
                uVar4 = *puVar13;
                if (uVar4 < 0xf) goto LAB_00c52ba0;
                plVar6[0x12] = lVar9;
                if (lVar11 != 0) {
                  lVar9 = func_0x00a67a34(lVar11,*(undefined8 *)(*plVar6 + 0x40));
                  if (lVar9 == 0) goto LAB_00c52ba4;
                  uVar4 = *puVar13;
                }
                if (uVar4 < 0x10) goto LAB_00c52ba0;
                plVar6[0x13] = lVar11;
                uVar3 = System_Convert__ToInt32(*(undefined1 *)((long)BPNNLKAFIGF + 0x78),0);
                lStack_78 = CONCAT44(lStack_78._4_4_,uVar3);
                lVar9 = func_0x00a67a38(_int_TypeInfo,&lStack_78);
                if ((lVar9 == 0) ||
                   (lVar11 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar11 != 0)) {
                  if (*puVar13 < 0x11) goto LAB_00c52ba0;
                  plVar6[0x14] = lVar9;
                  uStack_6c = *(undefined4 *)((long)BPNNLKAFIGF + 0x7c);
                  lVar9 = func_0x00a67a38(_int_TypeInfo,&uStack_6c);
                  if ((lVar9 == 0) ||
                     (lVar11 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar11 != 0))
                  {
                    if (*puVar13 < 0x12) goto LAB_00c52ba0;
                    plVar6[0x15] = lVar9;
                    uStack_7c = *(undefined4 *)((long)BPNNLKAFIGF + 0x80);
                    lVar9 = func_0x00a67a38(_int_TypeInfo,&uStack_7c);
                    if ((lVar9 == 0) ||
                       (lVar11 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar11 != 0
                       )) {
                      if (*puVar13 < 0x13) goto LAB_00c52ba0;
                      plVar6[0x16] = lVar9;
                      uVar4 = func_0x00c5716c(*(undefined4 *)((long)BPNNLKAFIGF + 0x84),
                                              *(undefined4 *)((long)BPNNLKAFIGF + 0x88),
                                              *(undefined4 *)((long)BPNNLKAFIGF + 0x8c),
                                              *(undefined4 *)((long)BPNNLKAFIGF + 0x90),0);
                      uStack_80 = uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10 | uVar4 >> 0x10 & 0xff;
                      lVar9 = func_0x00a67a38(_int_TypeInfo,&uStack_80);
                      if ((lVar9 == 0) ||
                         (lVar11 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar11 != 0)) {
                        uVar4 = *puVar13;
                        if (uVar4 < 0x14) goto LAB_00c52ba0;
                        plVar6[0x17] = lVar9;
                        lVar9 = _Str_;
                        if (*(long *)((long)BPNNLKAFIGF + 0xa8) != 0) {
                          lVar9 = *(long *)((long)BPNNLKAFIGF + 0xa8);
                        }
                        if (lVar9 != 0) {
                          lVar11 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40));
                          if (lVar11 == 0) goto LAB_00c52ba4;
                          uVar4 = *puVar13;
                        }
                        if (uVar4 < 0x15) goto LAB_00c52ba0;
                        plVar6[0x18] = lVar9;
                        lVar9 = JCHCJLKJJNF__LIOLOMKELPJ(*(undefined4 *)((long)BPNNLKAFIGF + 0x94));
                        if ((lVar9 == 0) ||
                           (lVar11 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar11 != 0)) {
                          if (*puVar13 < 0x16) goto LAB_00c52ba0;
                          plVar6[0x19] = lVar9;
                          uVar4 = func_0x00c5716c(*(undefined4 *)((long)BPNNLKAFIGF + 0x98),
                                                  *(undefined4 *)((long)BPNNLKAFIGF + 0x9c),
                                                  *(undefined4 *)((long)BPNNLKAFIGF + 0xa0),
                                                  *(undefined4 *)((long)BPNNLKAFIGF + 0xa4),0);
                          lStack_68 = CONCAT44(lStack_68._4_4_,
                                               uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10 |
                                               uVar4 >> 0x10 & 0xff);
                          lVar9 = func_0x00a67a38(_int_TypeInfo,&lStack_68);
                          if ((lVar9 == 0) ||
                             (lVar11 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)),
                             lVar11 != 0)) {
                            if (*puVar13 < 0x17) goto LAB_00c52ba0;
                            plVar6[0x1a] = lVar9;
                            lStack_78 = CONCAT44(lStack_78._4_4_,
                                                 *(undefined4 *)((long)BPNNLKAFIGF + 0xb0));
                            lVar9 = func_0x00a67a38(_int_TypeInfo,&lStack_78);
                            if ((lVar9 == 0) ||
                               (lVar11 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)),
                               lVar11 != 0)) {
                              if (*puVar13 < 0x18) goto LAB_00c52ba0;
                              plVar6[0x1b] = lVar9;
                              uStack_6c = *(undefined4 *)((long)BPNNLKAFIGF + 0xb4);
                              lVar9 = func_0x00a67a38(_int_TypeInfo,&uStack_6c);
                              if ((lVar9 == 0) ||
                                 (lVar11 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)),
                                 lVar11 != 0)) {
                                uVar4 = *puVar13;
                                if (uVar4 < 0x19) goto LAB_00c52ba0;
                                plVar6[0x1c] = lVar9;
                                lVar9 = *(long *)((long)BPNNLKAFIGF + 0xb8);
                                if (lVar9 != 0) {
                                  lVar11 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40));
                                  if (lVar11 == 0) goto LAB_00c52ba4;
                                  uVar4 = *puVar13;
                                }
                                if (uVar4 < 0x1a) goto LAB_00c52ba0;
                                plVar6[0x1d] = lVar9;
                                if (_Str_com_unity3d_player_UnityPlayerActivity != 0) {
                                  lVar9 = func_0x00a67a34(
                                                  _Str_com_unity3d_player_UnityPlayerActivity,
                                                  *(undefined8 *)(*plVar6 + 0x40));
                                  if (lVar9 == 0) goto LAB_00c52ba4;
                                  uVar4 = *puVar13;
                                }
                                if (uVar4 < 0x1b) {
LAB_00c52ba0:
                    /* WARNING: Subroutine does not return */
                                  il2cpp_throw_967b58();
                                }
                                plVar6[0x1e] = _Str_com_unity3d_player_UnityPlayerActivity;
                                if (lVar5 != 0) {
                                  UnityEngine_AndroidJavaObject__CallStatic(lVar5,uVar10,plVar6,0);
                                  KKDJDGPGFPN__HOALPEDGMOI
                                            (*(undefined4 *)((long)BPNNLKAFIGF + 0x10),0);
                                  return *(int *)((long)BPNNLKAFIGF + 0x10);
                                }
                                goto LAB_00c52bb0;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00c52ba4:
  uVar10 = func_0x00a67b74();
  func_0x00a67a20(uVar10,0);
LAB_00c52bb0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private static int GCDEMFCDPPG(Color ONFEABADDFB) { }   @0xb52bb4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int JCHCJLKJJNF__GCDEMFCDPPG
              (float ONFEABADDFB_r,float ONFEABADDFB_g,float ONFEABADDFB_b,float ONFEABADDFB_a)

{
  uint uVar1;
  
  uVar1 = func_0x00c5716c(0);
  return uVar1 & 0xff00 | (uVar1 & 0xff) << 0x10 | uVar1 >> 0x10 & 0xff;
}


// ==== private static string LIOLOMKELPJ(FPKBDOPAFGP DJAGPKMAACN) { }   @0xb52bd8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * JCHCJLKJJNF__LIOLOMKELPJ(int DJAGPKMAACN)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  int iStack_28;
  
  if ((bRam000000000191719a & 1) == 0) {
    func_0x00a67900(&FPKBDOPAFGP_TypeInfo);
    func_0x00a67900(&Str_anp_);
    bRam000000000191719a = 1;
  }
  uStack_38 = _FPKBDOPAFGP_TypeInfo;
  uStack_30 = 0xffffffffffffffff;
  iStack_28 = DJAGPKMAACN;
  lVar1 = System_Enum__ToString(&uStack_38,0);
  if (lVar1 != 0) {
    uVar2 = System_String__ToLower(lVar1,0);
    pvVar3 = (void *)System_String__Concat(_Str_anp_,uVar2,0);
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public static void AEPHMLOMPBG() { }   @0xb52c74

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void JCHCJLKJJNF__AEPHMLOMPBG(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000001917199 & 1) == 0) {
    func_0x00a67900(&Method_System_Array_Empty_object___);
    func_0x00a67900(&Str_CancelAllNotifications);
    bRam0000000001917199 = 1;
  }
  lVar2 = JCHCJLKJJNF__AFJAAIMFNDF();
  lVar3 = _Method_System_Array_Empty_object___;
  lVar7 = *(long *)(_Method_System_Array_Empty_object___ + 0x38);
  if (lVar7 == 0) {
    func_0x00a9e42c(_Method_System_Array_Empty_object___);
    lVar7 = *(long *)(lVar3 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = func_0x00a9e3d0();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = func_0x00a9e3d0();
  }
  if (lVar2 != 0) {
    UnityEngine_AndroidJavaObject__CallStatic
              (lVar2,_Str_CancelAllNotifications,**(undefined8 **)(lVar3 + 0xb8),0);
    if ((bRam00000000019171ca & 1) == 0) {
      func_0x00a67900(&Method_System_Collections_Generic_List_int___ctor__);
      func_0x00a67900(&System_Collections_Generic_List_int__TypeInfo);
      bRam00000000019171ca = 1;
    }
    uVar4 = func_0x00a67b44(_System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
              (uVar4,_Method_System_Collections_Generic_List_int___ctor__);
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
    uVar6 = _Str_NotificationHelper_Scheduled;
    lVar3 = *(long *)(KKDJDGPGFPN___c.<statics> + 0x18);
    if (lVar3 == 0) {
      if (*(int *)(_KKDJDGPGFPN___c_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = **(undefined8 **)(_KKDJDGPGFPN___c_TypeInfo + 0xb8);
      lVar3 = func_0x00a67b44(_System_Func_int__string__TypeInfo);
      System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                (lVar3,uVar8,_Method_KKDJDGPGFPN___c_CJKGILBADPI__,0);
      *(long *)(KKDJDGPGFPN___c.<statics> + 0x18) = lVar3;
    }
    uVar4 = System_Linq_Enumerable__Select___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
                      (uVar4,lVar3,_Method_System_Linq_Enumerable_Select_int__string___);
    uVar4 = System_Linq_Enumerable__ToArray___Il2CppFullySharedGenericType_
                      (uVar4,_Method_System_Linq_Enumerable_ToArray_string___);
    uVar4 = System_String__Join(uVar1,uVar4,0);
    if (pcRam000000000191c270 == (code *)0x0) {
      pcRam000000000191c270 = (code *)func_0x00a678c4(&UNK_005a189a,uVar4,0);
    }
    uVar5 = (*pcRam000000000191c270)(uVar6,uVar4);
    if ((uVar5 & 1) != 0) {
      return;
    }
    func_0x00a67914(&UnityEngine_PlayerPrefsException_TypeInfo);
    uVar4 = func_0x00a67b44();
    uVar6 = func_0x00a67914(&Str_Could_not_store_preference_value);
    UnityEngine_PlayerPrefsException___ctor(uVar4,uVar6);
    uVar6 = func_0x00a67914(&Method_UnityEngine_PlayerPrefs_SetString__);
    auVar9 = func_0x00a67a20(uVar4,uVar6);
    if (pcRam000000000191c280 == (code *)0x0) {
      pcRam000000000191c280 = (code *)func_0x00a678c4(&UNK_005a8fe2);
    }
                    /* WARNING: Could not recover jumptable at 0x01486e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c280)(auVar9._0_8_,auVar9._8_8_);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



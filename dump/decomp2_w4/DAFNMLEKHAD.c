// ==== public int FACCCNLHFLJ() { }   @0xaf9c38

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DAFNMLEKHAD__FACCCNLHFLJ(void *__this)

{
  return *(int *)((long)__this + 0xf0);
}


// ==== public string MAIJGLMACBD() { }   @0xaf9e04

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DAFNMLEKHAD__MAIJGLMACBD(void *__this)

{
  return *(void **)((long)__this + 0x20);
}


// ==== public void PCCIBHKKPAP(DateTime ALLBGCHDGNC) { }   @0xafaf24

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__PCCIBHKKPAP(void *__this,void *ALLBGCHDGNC)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000001916ef6 & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&Str_urt);
    bRam0000000001916ef6 = 1;
  }
  *(void **)((long)__this + 0xe8) = ALLBGCHDGNC;
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = System_DateTime__ToString((long)__this + 0xe8,0);
  uVar3 = _Str_urt;
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
  auVar4 = func_0x00a67a20(uVar3,uVar1);
  if (pcRam000000000191c280 == (code *)0x0) {
    pcRam000000000191c280 = (code *)func_0x00a678c4(&UNK_005a8fe2);
  }
                    /* WARNING: Could not recover jumptable at 0x01486e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c280)(auVar4._0_8_,auVar4._8_8_);
  return;
}


// ==== public int BHMFJBCOKOA(KKMHKJEGDLA AHMFCANPAJC) { }   @0xaf46cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DAFNMLEKHAD__BHMFJBCOKOA(void *__this,int AHMFCANPAJC)

{
  ulong uVar1;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  if ((bRam0000000001916efa & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__ContainsKey__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__get_Item__);
    bRam0000000001916efa = 1;
  }
  if (*(long *)((long)__this + 0x138) != 0) {
    iStack_2c = AHMFCANPAJC;
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                      (*(long *)((long)__this + 0x138),&iStack_2c,
                       _Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__ContainsKey__
                      );
    if ((uVar1 & 1) == 0) {
      iStack_28 = 0;
    }
    else {
      if (*(long *)((long)__this + 0x138) == 0) goto LAB_00bf4770;
      iStack_24 = AHMFCANPAJC;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item
                (*(long *)((long)__this + 0x138),&iStack_24,&iStack_28,
                 _Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__get_Item__);
    }
    return iStack_28;
  }
LAB_00bf4770:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void MAGBBGBDPDJ(int ALLBGCHDGNC) { }   @0xafe340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__MAGBBGBDPDJ(void *__this,int ALLBGCHDGNC)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000001916eff & 1) == 0) {
    func_0x00a67900(&Str_st);
    bRam0000000001916eff = 1;
  }
  *(int *)((long)__this + 0x108) = ALLBGCHDGNC;
  uVar2 = _Str_st;
  if (pcRam000000000191c268 == (code *)0x0) {
    pcRam000000000191c268 = (code *)func_0x00a678c4(&UNK_005aab16,ALLBGCHDGNC,0);
  }
  uVar1 = (*pcRam000000000191c268)(uVar2,ALLBGCHDGNC);
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00a67914(&UnityEngine_PlayerPrefsException_TypeInfo);
  uVar2 = func_0x00a67b44();
  uVar3 = func_0x00a67914(&Str_Could_not_store_preference_value);
  UnityEngine_PlayerPrefsException___ctor(uVar2,uVar3);
  uVar3 = func_0x00a67914(&Method_UnityEngine_PlayerPrefs_SetInt__);
  auVar4 = func_0x00a67a20(uVar2,uVar3);
  if (pcRam000000000191c278 == (code *)0x0) {
    pcRam000000000191c278 = (code *)func_0x00a678c4(&UNK_005a5615);
  }
                    /* WARNING: Could not recover jumptable at 0x01486d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c278)(auVar4._0_8_,auVar4._8_8_ & 0xffffffff);
  return;
}


// ==== public void CJPCGGCLNCK(bool ALLBGCHDGNC) { }   @0xafe5f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__CJPCGGCLNCK(void *__this,bool ALLBGCHDGNC)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uStack_24;
  
  if ((bRam0000000001916f03 & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str_so1);
    bRam0000000001916f03 = 1;
  }
  if (__this != (void *)0x0) {
    uVar3 = (uint)ALLBGCHDGNC;
    *(uint *)((long)__this + 0xc4) = uVar3;
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = _Str_so1;
    if ((bRam000000000191673e & 1) == 0) {
      func_0x00a67900(&Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___,uVar3,0)
      ;
      func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      bRam000000000191673e = 1;
    }
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptKey(uVar2);
    uStack_24 = uVar3;
    uVar2 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptValue___Il2CppFullySharedGenericType_
                      (uVar2,&uStack_24,
                       _Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___);
    UnityEngine_PlayerPrefs__SetString(uVar1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void GKCLIHIJGIE(bool MNJOMLPPAJL, bool MBKCEECENJN) { }   @0xafea94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__GKCLIHIJGIE(void *__this,bool MNJOMLPPAJL,bool MBKCEECENJN)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int ALLBGCHDGNC;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  void *pvVar32;
  long lVar33;
  undefined8 *puVar34;
  int iVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  void *pvVar38;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000001916f06 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__)
    ;
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current
                   );
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    func_0x00a67900(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    func_0x00a67900(&Level_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&string_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_sd);
    func_0x00a67900(&Str_lang);
    func_0x00a67900(&Str_fst);
    func_0x00a67900(&Str_ifs);
    func_0x00a67900(&Str_islogs);
    func_0x00a67900(&Str_so1);
    func_0x00a67900(&Str_idi);
    func_0x00a67900(&Str_im);
    func_0x00a67900(&Str_ia);
    func_0x00a67900(&Str_in);
    func_0x00a67900(&Str_is);
    func_0x00a67900(&Str_xbox_sid);
    func_0x00a67900(&Str_rm);
    func_0x00a67900(&Str_fuel);
    func_0x00a67900(&Str_gdpr);
    func_0x00a67900(&Str_fps);
    func_0x00a67900(&Str_gfx);
    bRam0000000001916f06 = 1;
  }
  uStack_70 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  iVar27 = *(int *)((long)__this + 0x78);
  uVar12 = UnityEngine_PlayerPrefs__HasKey(_Str_is,0);
  iVar1 = *(int *)((long)__this + 0x7c);
  uVar13 = UnityEngine_PlayerPrefs__HasKey(_Str_im,0);
  iVar2 = *(int *)((long)__this + 0x100);
  uVar14 = UnityEngine_PlayerPrefs__HasKey(_Str_gdpr,0);
  iVar3 = *(int *)((long)__this + 0x88);
  uVar15 = UnityEngine_PlayerPrefs__HasKey(_Str_in,0);
  uStack_c0 = *(undefined4 *)((long)__this + 0xd8);
  uStack_c8 = *(undefined8 *)((long)__this + 0xd0);
  uStack_d0 = *(ulong *)((long)__this + 200);
  iVar16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_d0,0);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  uVar17 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_idi,0);
  iVar4 = *(int *)((long)__this + 0x8c);
  uVar18 = UnityEngine_PlayerPrefs__HasKey(_Str_ia,0);
  uVar5 = *(undefined4 *)((long)__this + 0x90);
  uVar19 = UnityEngine_PlayerPrefs__HasKey(_Str_gfx,0);
  ALLBGCHDGNC = *(int *)((long)__this + 0x94);
  uVar20 = UnityEngine_PlayerPrefs__HasKey(_Str_lang,0);
  iVar6 = *(int *)((long)__this + 0x84);
  uVar21 = UnityEngine_PlayerPrefs__HasKey(_Str_islogs,0);
  iVar7 = *(int *)((long)__this + 0x80);
  uVar22 = UnityEngine_PlayerPrefs__HasKey(_Str_fps,0);
  uStack_c0 = *(undefined4 *)((long)__this + 0xc0);
  uStack_c8 = *(undefined8 *)((long)__this + 0xb8);
  uStack_d0 = *(ulong *)((long)__this + 0xb0);
  iVar23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_d0,0);
  uVar24 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_sd,0);
  iVar8 = *(int *)((long)__this + 0xc4);
  uVar25 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_so1,0);
  uVar9 = *(undefined4 *)((long)__this + 0xdc);
  uVar26 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_rm,0);
  iVar10 = *(int *)((long)__this + 0x98);
  uVar28 = UnityEngine_PlayerPrefs__HasKey(_Str_ifs,0);
  pvVar38 = *(void **)((long)__this + 0xa0);
  uVar29 = UnityEngine_PlayerPrefs__HasKey(_Str_fst,0);
  uVar36 = **(undefined8 **)(_string_TypeInfo + 0xb8);
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_BridgePHP_TypeInfo);
  }
  iVar35 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
  if (iVar35 == 8) {
LAB_00bfef30:
    uVar36 = UnityEngine_PlayerPrefs__GetString(_Str_xbox_sid,0);
  }
  else {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_BridgePHP_TypeInfo);
      iVar35 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
    }
    if (iVar35 == 9) goto LAB_00bfef30;
  }
  UnityEngine_PlayerPrefs__DeleteAll(0);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  CodeStage_AntiCheat_Storage_ObscuredPrefs__DeleteAll(0);
  if (MBKCEECENJN) {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar30 = *(long *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x48);
    if (lVar30 == 0) goto LAB_00bffbb0;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator
              (lVar30,&uStack_d0,
               _Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    uStack_80 = CONCAT44(uStack_bc,uStack_c0);
    uStack_88 = uStack_c8;
    uStack_90 = uStack_d0;
    uStack_78 = uStack_b8;
    uStack_70 = uStack_b0;
    while (uVar31 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext
                              (&uStack_90,
                               _Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__
                              ), (uVar31 & 1) != 0) {
      func_0x00b7fb78(&uStack_90,&uStack_d0,
                      _Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current
                     );
      uStack_a0 = uStack_d0;
      uStack_98 = uStack_c8;
      func_0x00b7fc68(&uStack_a0,&uStack_d0,
                      _Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
      uVar31 = uStack_d0;
      func_0x00b7fd54(&uStack_a0,&uStack_d0,
                      _Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
      uVar11 = uStack_d0;
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar31,uVar11 & 0xffffffff,0);
    }
    System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose
              (&uStack_90,
               _Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Main_TypeInfo + 0xb8) == 0) goto LAB_00bffbb0;
    Main__IJMHKMJLFIL(**(long **)(_Main_TypeInfo + 0xb8),0);
    DAFNMLEKHAD__GPJCLNDGBCO();
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar37 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar31 = UnityEngine_Object__op_Inequality(uVar37,0,0);
    if ((uVar31 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00bffbb0;
      uVar37 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar31 = UnityEngine_Object__op_Inequality(uVar37,0,0);
      if ((uVar31 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar30 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), lVar30 == 0))
        goto LAB_00bffbb0;
        BridgePHP__UpdateNickNameAndCountry(lVar30,0);
      }
    }
  }
  else {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Main_TypeInfo + 0xb8) == 0) goto LAB_00bffbb0;
    Main__IJMHKMJLFIL(**(long **)(_Main_TypeInfo + 0xb8),0);
  }
  if (MNJOMLPPAJL) {
    if ((uVar12 & 1) != 0) {
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
      lVar30 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar30 == 0) goto LAB_00bffbb0;
      DAFNMLEKHAD__MCDGKFFGABE(lVar30,iVar27 == 1);
    }
    if ((uVar13 & 1) != 0) {
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
      pvVar32 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (pvVar32 == (void *)0x0) goto LAB_00bffbb0;
      DAFNMLEKHAD__FCHNCOPLHGH(pvVar32,iVar1 == 1);
    }
    if ((uVar14 & 1) != 0) {
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
      lVar30 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar30 == 0) goto LAB_00bffbb0;
      DAFNMLEKHAD__AFFJMPIGCNC(lVar30,iVar2 == 1);
    }
    if ((uVar15 & 1) != 0) {
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
      lVar30 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar30 == 0) goto LAB_00bffbb0;
      DAFNMLEKHAD__IEECMAPKMJI(lVar30,iVar3 == 1);
    }
    if ((uVar17 & 1) != 0) {
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
      lVar30 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar30 == 0) goto LAB_00bffbb0;
      DAFNMLEKHAD__NMKDDNOGEIJ(lVar30,iVar16 == 1);
    }
    if ((uVar18 & 1) != 0) {
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
      lVar30 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar30 == 0) goto LAB_00bffbb0;
      DAFNMLEKHAD__KHIFJCACGNC(lVar30,iVar4 == 1);
    }
    if ((uVar19 & 1) != 0) {
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
      lVar30 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar30 == 0) goto LAB_00bffbb0;
      DAFNMLEKHAD__EMKKNFNKNBH(lVar30,uVar5);
    }
    if ((uVar20 & 1) != 0) {
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
      pvVar32 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (pvVar32 == (void *)0x0) goto LAB_00bffbb0;
      DAFNMLEKHAD__DGAGHJIDJEM(pvVar32,ALLBGCHDGNC);
    }
    if ((uVar21 & 1) != 0) {
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
      lVar30 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar30 == 0) goto LAB_00bffbb0;
      DAFNMLEKHAD__MEOGODPDIOO(lVar30,iVar6 == 1);
    }
    if ((uVar22 & 1) != 0) {
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
      pvVar32 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (pvVar32 == (void *)0x0) goto LAB_00bffbb0;
      DAFNMLEKHAD__HCIDDAGOLGK(pvVar32,iVar7 == 1);
    }
    if ((uVar24 & 1) != 0) {
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
      lVar30 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar30 == 0) goto LAB_00bffbb0;
      DAFNMLEKHAD__BDKMDDIBAAD(lVar30,iVar23 == 1);
    }
    if ((uVar25 & 1) != 0) {
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
      pvVar32 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (pvVar32 == (void *)0x0) goto LAB_00bffbb0;
      DAFNMLEKHAD__CJPCGGCLNCK(pvVar32,iVar8 == 1);
    }
    if ((uVar26 & 1) != 0) {
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
      lVar30 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar30 == 0) goto LAB_00bffbb0;
      DAFNMLEKHAD__DCLEGMOJBPN(lVar30,uVar9);
    }
    uVar31 = System_String__op_Inequality(uVar36,**(undefined8 **)(_string_TypeInfo + 0xb8),0);
    if ((uVar31 & 1) != 0) {
      UnityEngine_PlayerPrefs__SetString(_Str_xbox_sid,uVar36,0);
    }
  }
  if ((uVar28 & 1) != 0) {
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
    lVar30 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar30 == 0) goto LAB_00bffbb0;
    DAFNMLEKHAD__MJIAJNKPEAL(lVar30,iVar10 == 1);
  }
  if ((uVar29 & 1) != 0) {
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
    pvVar32 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (pvVar32 == (void *)0x0) goto LAB_00bffbb0;
    DAFNMLEKHAD__PGHAPGLHFPH(pvVar32,pvVar38);
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar30 = *(long *)(_Main_TypeInfo + 0xb8);
  *(undefined4 *)(lVar30 + 0x2c) = 0xc;
  *(undefined8 *)(lVar30 + 0x40) = 0;
  if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  **(undefined4 **)(_Level_TypeInfo + 0xb8) = 0xffffffff;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar30 = *(long *)(_Menu_TypeInfo + 0xb8);
  *(undefined4 *)(lVar30 + 8) = 0;
  *(undefined1 *)(lVar30 + 0xc) = 1;
  *(undefined2 *)(lVar30 + 0xe) = 0;
  *(undefined4 *)(lVar30 + 0x10) = 0;
  *(undefined1 *)(lVar30 + 0x18) = 0;
  puVar34 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  *puVar34 = 0;
  puVar34[1] = 0;
  puVar34[2] = 0;
  if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
     (pvVar38 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar38 != (void *)0x0)) {
    GUIGarage__EGEFDJDCKDJ(pvVar38);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
       ((lVar30 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar30 != 0 &&
        (lVar30 = *(long *)(lVar30 + 0x58), lVar30 != 0)))) {
      EncyclopediaController__FHBDLLGMOFN(lVar30,0);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
        Translate__CCHEMMCPAOO(**(long **)(_Translate_TypeInfo + 0xb8),0);
        if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
          Translate__OGEJCBEMJLE(**(long **)(_Translate_TypeInfo + 0xb8),0);
          if ((**(long **)(_Main_TypeInfo + 0xb8) != 0) &&
             (lVar30 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x38), lVar30 != 0)) {
            uVar12 = *(uint *)(lVar30 + 0x18);
            if (0 < (int)uVar12) {
              uVar13 = 0;
              do {
                if (uVar12 <= uVar13) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                lVar33 = *(long *)(lVar30 + (long)(int)uVar13 * 8 + 0x20);
                if (lVar33 == 0) goto LAB_00bffbb0;
                Level__POIIKNJOHOP(lVar33,0);
                uVar12 = *(uint *)(lVar30 + 0x18);
                uVar13 = uVar13 + 1;
              } while ((int)uVar13 < (int)uVar12);
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
            if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8) != 0) {
              iVar27 = DAFNMLEKHAD__HDABOKNLKGK();
              if (iVar27 != -1) {
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
                lVar30 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                if (lVar30 == 0) goto LAB_00bffbb0;
                DAFNMLEKHAD__OPFBHOGMKNG(lVar30,0xffffffff);
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
                uVar36 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x28);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar28 = UnityEngine_Object__op_Inequality(uVar36,0,0);
                if ((uVar28 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar30 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x28), lVar30 == 0))
                  goto LAB_00bffbb0;
                  FuelManager__CPLMJMFGLMB(lVar30,0);
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
                  uVar36 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x30);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar28 = UnityEngine_Object__op_Inequality(uVar36,0,0);
                  if ((uVar28 & 1) != 0) {
                    if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (**(char **)(_NotificationsManager_TypeInfo + 0xb8) == '\0') {
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                         (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x30) == 0))
                      goto LAB_00bffbb0;
                      NotificationsManager__KHDFDGMBOIJ();
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
                      lVar30 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                      if (lVar30 == 0) goto LAB_00bffbb0;
                      if (*(int *)(lVar30 + 0x88) == 1) {
                        if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        NotificationsManager__LLFJNKAPDIM(_Str_fuel,3,true);
                      }
                    }
                  }
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) != (void *)0x0) {
                    Menu__OLOGKIHIIEL((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
                    if (!MBKCEECENJN) {
                      DAFNMLEKHAD__BJKKICMFANH();
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00bffbb0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ADNEGLENKMO(DateTime ALLBGCHDGNC) { }   @0xb00848

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__ADNEGLENKMO(void *__this,void *ALLBGCHDGNC)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000001916f0a & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&Str_grt);
    bRam0000000001916f0a = 1;
  }
  *(void **)((long)__this + 0xe0) = ALLBGCHDGNC;
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = System_DateTime__ToString((long)__this + 0xe0,0);
  uVar3 = _Str_grt;
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
  auVar4 = func_0x00a67a20(uVar3,uVar1);
  if (pcRam000000000191c280 == (code *)0x0) {
    pcRam000000000191c280 = (code *)func_0x00a678c4(&UNK_005a8fe2);
  }
                    /* WARNING: Could not recover jumptable at 0x01486e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c280)(auVar4._0_8_,auVar4._8_8_);
  return;
}


// ==== public void HCIDDAGOLGK(bool ALLBGCHDGNC) { }   @0xb001ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__HCIDDAGOLGK(void *__this,bool ALLBGCHDGNC)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000001916f0d & 1) == 0) {
    func_0x00a67900(&Str_fps);
    bRam0000000001916f0d = 1;
  }
  if (__this == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  *(uint *)((long)__this + 0x80) = (uint)ALLBGCHDGNC;
  uVar2 = _Str_fps;
  if (pcRam000000000191c268 == (code *)0x0) {
    pcRam000000000191c268 = (code *)func_0x00a678c4(&UNK_005aab16,ALLBGCHDGNC,0);
  }
  uVar1 = (*pcRam000000000191c268)(uVar2,(uint)ALLBGCHDGNC);
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00a67914(&UnityEngine_PlayerPrefsException_TypeInfo);
  uVar2 = func_0x00a67b44();
  uVar3 = func_0x00a67914(&Str_Could_not_store_preference_value);
  UnityEngine_PlayerPrefsException___ctor(uVar2,uVar3);
  uVar3 = func_0x00a67914(&Method_UnityEngine_PlayerPrefs_SetInt__);
  auVar4 = func_0x00a67a20(uVar2,uVar3);
  if (pcRam000000000191c278 == (code *)0x0) {
    pcRam000000000191c278 = (code *)func_0x00a678c4(&UNK_005a5615);
  }
                    /* WARNING: Could not recover jumptable at 0x01486d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c278)(auVar4._0_8_,auVar4._8_8_ & 0xffffffff);
  return;
}


// ==== public void FCHNCOPLHGH(bool ALLBGCHDGNC) { }   @0xafffa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__FCHNCOPLHGH(void *__this,bool ALLBGCHDGNC)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000001916f11 & 1) == 0) {
    func_0x00a67900(&Str_im);
    bRam0000000001916f11 = 1;
  }
  if (__this == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  *(uint *)((long)__this + 0x7c) = (uint)ALLBGCHDGNC;
  uVar2 = _Str_im;
  if (pcRam000000000191c268 == (code *)0x0) {
    pcRam000000000191c268 = (code *)func_0x00a678c4(&UNK_005aab16,ALLBGCHDGNC,0);
  }
  uVar1 = (*pcRam000000000191c268)(uVar2,(uint)ALLBGCHDGNC);
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00a67914(&UnityEngine_PlayerPrefsException_TypeInfo);
  uVar2 = func_0x00a67b44();
  uVar3 = func_0x00a67914(&Str_Could_not_store_preference_value);
  UnityEngine_PlayerPrefsException___ctor(uVar2,uVar3);
  uVar3 = func_0x00a67914(&Method_UnityEngine_PlayerPrefs_SetInt__);
  auVar4 = func_0x00a67a20(uVar2,uVar3);
  if (pcRam000000000191c278 == (code *)0x0) {
    pcRam000000000191c278 = (code *)func_0x00a678c4(&UNK_005a5615);
  }
                    /* WARNING: Could not recover jumptable at 0x01486d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c278)(auVar4._0_8_,auVar4._8_8_ & 0xffffffff);
  return;
}


// ==== public int KKEOALHODAJ() { }   @0xb00e10

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DAFNMLEKHAD__KKEOALHODAJ(void *__this)

{
  return *(int *)((long)__this + 0xdc);
}


// ==== public void GBNPKHOGCBB(DateTime ALLBGCHDGNC) { }   @0xb00e7c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__GBNPKHOGCBB(void *__this,void *ALLBGCHDGNC)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_48 [8];
  code *pcStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000001916f17 & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str_fut);
    bRam0000000001916f17 = 1;
  }
  *(undefined8 *)((long)__this + 0x70) = ALLBGCHDGNC;
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = System_DateTime__ToString((undefined8 *)((long)__this + 0x70),0);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  lVar1 = _Str_fut;
  if ((bRam0000000001916741 & 1) == 0) {
    func_0x00a67900(&Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_string___,lVar4,0
                   );
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&string_TypeInfo);
    bRam0000000001916741 = 1;
  }
  if (lVar1 == 0) {
    func_0x00a67914(&System_ArgumentNullException_TypeInfo);
    uVar2 = func_0x00a67b44();
    uVar3 = func_0x00a67914(&Str_key);
    System_ArgumentNullException___ctor(uVar2,uVar3,0);
    uVar3 = func_0x00a67914(&Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_SetString__);
    auVar6 = func_0x00a67a20(uVar2,uVar3);
    uVar2 = auVar6._0_8_;
    uStack_38 = 0x1916000;
    if ((bRam0000000001916742 & 1) == 0) {
      func_0x00a67900(&Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_DecryptValue_string___);
      func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      bRam0000000001916742 = 1;
    }
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptKey(uVar2);
    uVar5 = UnityEngine_PlayerPrefs__HasKey(uVar3,0);
    if ((uVar5 & 1) == 0) {
      uVar5 = UnityEngine_PlayerPrefs__HasKey(uVar2,0);
      if ((uVar5 & 1) != 0) {
        uVar3 = UnityEngine_PlayerPrefs__GetString(uVar2,auVar6._8_8_,0);
        if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
        }
        if (*(char *)(*(long *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xb8) + 0x38)
            != '\0') {
          return;
        }
        if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
        }
        CodeStage_AntiCheat_Storage_ObscuredPrefs__SetString(uVar2,uVar3);
        UnityEngine_PlayerPrefs__DeleteKey(uVar2,0);
        return;
      }
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      CodeStage_AntiCheat_Storage_ObscuredPrefs__MigrateFromACTkV1Internal
                (uVar2,*(undefined8 *)
                        (*(long *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xb8) +
                        0x10));
    }
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    CodeStage_AntiCheat_Storage_ObscuredPrefs__DecryptValue___Il2CppFullySharedGenericType_
              (uVar2,uVar3,auVar6._8_8_,0,auStack_48,
               _Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_DecryptValue_string___);
    return;
  }
  if (lVar4 == 0) {
    lVar4 = **(long **)(_string_TypeInfo + 0xb8);
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptKey(lVar1);
  uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptValue___Il2CppFullySharedGenericType_
                    (lVar1,lVar4,
                     _Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_string___);
  if (pcRam000000000191c270 == (code *)0x0) {
    pcRam000000000191c270 = (code *)func_0x00a678c4(&UNK_005a189a,uVar3,0);
  }
  uVar5 = (*pcRam000000000191c270)(uVar2,uVar3);
  if ((uVar5 & 1) == 0) {
    func_0x00a67914(&UnityEngine_PlayerPrefsException_TypeInfo);
    uVar2 = func_0x00a67b44();
    uVar3 = func_0x00a67914(&Str_Could_not_store_preference_value);
    UnityEngine_PlayerPrefsException___ctor(uVar2,uVar3);
    uVar3 = func_0x00a67914(&Method_UnityEngine_PlayerPrefs_SetString__);
    auVar6 = func_0x00a67a20(uVar2,uVar3);
    pcStack_40 = UnityEngine_PlayerPrefs__GetString;
    uStack_38 = 0x191c000;
    if (pcRam000000000191c280 == (code *)0x0) {
      pcRam000000000191c280 = (code *)func_0x00a678c4(&UNK_005a8fe2);
    }
                    /* WARNING: Could not recover jumptable at 0x01486e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c280)(auVar6._0_8_,auVar6._8_8_);
    return;
  }
  return;
}


// ==== public void PGHAPGLHFPH(DateTime ALLBGCHDGNC) { }   @0xaf146c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__PGHAPGLHFPH(void *__this,void *ALLBGCHDGNC)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000001916f19 & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&Str_fst);
    bRam0000000001916f19 = 1;
  }
  *(void **)((long)__this + 0xa0) = ALLBGCHDGNC;
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = System_DateTime__ToString((long)__this + 0xa0,0);
  uVar3 = _Str_fst;
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
  auVar4 = func_0x00a67a20(uVar3,uVar1);
  if (pcRam000000000191c280 == (code *)0x0) {
    pcRam000000000191c280 = (code *)func_0x00a678c4(&UNK_005a8fe2);
  }
                    /* WARNING: Could not recover jumptable at 0x01486e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c280)(auVar4._0_8_,auVar4._8_8_);
  return;
}


// ==== public bool LKKDIBOKNMJ() { }   @0xaffc48

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool DAFNMLEKHAD__LKKDIBOKNMJ(void *__this)

{
  return *(int *)((long)__this + 0x7c) == 1;
}


// ==== public void DGAGHJIDJEM(int ALLBGCHDGNC) { }   @0xb00134

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__DGAGHJIDJEM(void *__this,int ALLBGCHDGNC)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000001916f1f & 1) == 0) {
    func_0x00a67900(&Str_lang);
    bRam0000000001916f1f = 1;
  }
  *(int *)((long)__this + 0x94) = ALLBGCHDGNC;
  uVar2 = _Str_lang;
  if (pcRam000000000191c268 == (code *)0x0) {
    pcRam000000000191c268 = (code *)func_0x00a678c4(&UNK_005aab16,ALLBGCHDGNC,0);
  }
  uVar1 = (*pcRam000000000191c268)(uVar2,ALLBGCHDGNC);
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00a67914(&UnityEngine_PlayerPrefsException_TypeInfo);
  uVar2 = func_0x00a67b44();
  uVar3 = func_0x00a67914(&Str_Could_not_store_preference_value);
  UnityEngine_PlayerPrefsException___ctor(uVar2,uVar3);
  uVar3 = func_0x00a67914(&Method_UnityEngine_PlayerPrefs_SetInt__);
  auVar4 = func_0x00a67a20(uVar2,uVar3);
  if (pcRam000000000191c278 == (code *)0x0) {
    pcRam000000000191c278 = (code *)func_0x00a678c4(&UNK_005a5615);
  }
                    /* WARNING: Could not recover jumptable at 0x01486d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c278)(auVar4._0_8_,auVar4._8_8_ & 0xffffffff);
  return;
}


// ==== public void DIMKKHJDHFJ(int ALLBGCHDGNC) { }   @0xaecb20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__DIMKKHJDHFJ(void *__this,int ALLBGCHDGNC)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam0000000001916f23 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str_g);
    bRam0000000001916f23 = 1;
  }
  uStack_50 = *(undefined4 *)((long)__this + 0x4c);
  uStack_58 = *(undefined8 *)((long)__this + 0x44);
  uStack_60 = *(undefined8 *)((long)__this + 0x3c);
  uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_60,0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,ALLBGCHDGNC,0);
  uStack_70 = uStack_88;
  uStack_78 = uStack_90;
  uStack_80 = uStack_98;
  *(undefined4 *)((long)__this + 0x4c) = uStack_88;
  *(undefined8 *)((long)__this + 0x44) = uStack_90;
  *(undefined8 *)((long)__this + 0x3c) = uStack_98;
  uStack_a0 = uStack_88;
  uStack_a8 = uStack_90;
  uStack_b0 = uStack_98;
  uVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_b0,0);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(_Str_g,uVar2,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
      goto LAB_00becd9c;
      GUIGarage__GMHOEBNFADN(lVar4,uVar1,ALLBGCHDGNC,0,0);
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
      uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
        uStack_c0 = *(undefined4 *)((long)__this + 0x4c);
        uStack_c8 = *(undefined8 *)((long)__this + 0x44);
        uStack_d0 = *(undefined8 *)((long)__this + 0x3c);
        lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_d0,0);
        if (lVar4 != 0) {
          return;
        }
      }
    }
  }
LAB_00becd9c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void EIGEDMABAKJ(int ALLBGCHDGNC) { }   @0xb010e8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__EIGEDMABAKJ(void *__this,int ALLBGCHDGNC)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000001916f27 & 1) == 0) {
    func_0x00a67900(&Str_uri);
    bRam0000000001916f27 = 1;
  }
  *(int *)((long)__this + 0xf0) = ALLBGCHDGNC;
  uVar2 = _Str_uri;
  if (pcRam000000000191c268 == (code *)0x0) {
    pcRam000000000191c268 = (code *)func_0x00a678c4(&UNK_005aab16,ALLBGCHDGNC,0);
  }
  uVar1 = (*pcRam000000000191c268)(uVar2,ALLBGCHDGNC);
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00a67914(&UnityEngine_PlayerPrefsException_TypeInfo);
  uVar2 = func_0x00a67b44();
  uVar3 = func_0x00a67914(&Str_Could_not_store_preference_value);
  UnityEngine_PlayerPrefsException___ctor(uVar2,uVar3);
  uVar3 = func_0x00a67914(&Method_UnityEngine_PlayerPrefs_SetInt__);
  auVar4 = func_0x00a67a20(uVar2,uVar3);
  if (pcRam000000000191c278 == (code *)0x0) {
    pcRam000000000191c278 = (code *)func_0x00a678c4(&UNK_005a5615);
  }
                    /* WARNING: Could not recover jumptable at 0x01486d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c278)(auVar4._0_8_,auVar4._8_8_ & 0xffffffff);
  return;
}


// ==== public bool AIMCLDENEOB() { }   @0xaffc58

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool DAFNMLEKHAD__AIMCLDENEOB(void *__this)

{
  return *(int *)((long)__this + 0x100) == 1;
}


// ==== public DateTime FOMCIPLCAFE() { }   @0xb01430

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DAFNMLEKHAD__FOMCIPLCAFE(void *__this)

{
  return *(void **)((long)__this + 0xf8);
}



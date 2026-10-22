// ==== public void MJIAJNKPEAL(bool ALLBGCHDGNC) { }   @0xaf1410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__MJIAJNKPEAL(void *__this,bool ALLBGCHDGNC)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000001916ef0 & 1) == 0) {
    func_0x00a67900(&Str_ifs);
    bRam0000000001916ef0 = 1;
  }
  if (__this == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  *(uint *)((long)__this + 0x98) = (uint)ALLBGCHDGNC;
  uVar2 = _Str_ifs;
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


// ==== public bool KHJGIDLMPLJ() { }   @0xaf9c50

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool DAFNMLEKHAD__KHJGIDLMPLJ(void *__this)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_20 = *(undefined4 *)((long)__this + 0xc0);
  uStack_28 = *(undefined8 *)((long)__this + 0xb8);
  uStack_30 = *(undefined8 *)((long)__this + 0xb0);
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_30,0);
  return iVar1 == 1;
}


// ==== public void NODNJNKEFKM(bool BMMAIFGNBCD, int HCBODNKILEA = -1) { }   @0xaf9e0c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__NODNJNKEFKM(void *__this,bool BMMAIFGNBCD,int HCBODNKILEA)

{
  int HCBODNKILEA_00;
  long lVar1;
  undefined8 uVar2;
  void *__this_00;
  ulong uVar3;
  int iStack_24;
  
  iStack_24 = HCBODNKILEA;
  if ((bRam0000000001916ef4 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_MKCBGHDANLA__Add__);
    func_0x00a67900(&MKCBGHDANLA_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str_c);
    bRam0000000001916ef4 = 1;
  }
  if (HCBODNKILEA == -1) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iStack_24 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
    HCBODNKILEA = iStack_24;
  }
  lVar1 = DAFNMLEKHAD__DKJLCJPBPPN(__this,HCBODNKILEA,1);
  if (lVar1 != 0) {
    return;
  }
  uVar2 = System_Int32__ToString(&iStack_24,0);
  uVar2 = System_String__Concat(_Str_c,uVar2,0);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar2,1,0);
  HCBODNKILEA_00 = iStack_24;
  __this_00 = (void *)func_0x00a67b44(_MKCBGHDANLA_TypeInfo);
  MKCBGHDANLA___ctor(__this_00,HCBODNKILEA_00);
  if (*(long *)((long)__this + 0x118) != 0) {
    func_0x00b7fe44(*(long *)((long)__this + 0x118),__this_00,
                    _Method_System_Collections_Generic_List_MKCBGHDANLA__Add__);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (!BMMAIFGNBCD) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
       (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40) != 0)) {
      AnalyticsController__GJEJLEDIILK(_Menu_TypeInfo,iStack_24);
      if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
        Menu__BOBGEDIMPGG(**(long **)(_Menu_TypeInfo + 0xb8),iStack_24,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private string OPNCDNBIAEN(GUIGameplay.POFCDOMOIBH MPCJLJAJKMF) { }   @0xafafb4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DAFNMLEKHAD__OPNCDNBIAEN(void *__this,int MPCJLJAJKMF)

{
  undefined8 uVar1;
  void *pvVar2;
  int iStack_24;
  
  if ((bRam0000000001916ef7 & 1) == 0) {
    func_0x00a67900(&Str_h);
    bRam0000000001916ef7 = 1;
  }
  iStack_24 = MPCJLJAJKMF;
  uVar1 = System_Int32__ToString(&iStack_24,0);
  pvVar2 = (void *)System_String__Concat(_Str_h,uVar1,0);
  return pvVar2;
}


// ==== public void JMNEPHGKIPE(int EGCBHPKONII, string PFLOEJOJJAP, string AJFBHMKJHJD) { }   @0xafe1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__JMNEPHGKIPE(void *__this,int EGCBHPKONII,void *PFLOEJOJJAP,void *AJFBHMKJHJD)

{
  int iVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam0000000001916efc & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916efc = 1;
  }
  uStack_50 = *(undefined4 *)((long)__this + 0x4c);
  uStack_58 = *(undefined8 *)((long)__this + 0x44);
  uStack_60 = *(undefined8 *)((long)__this + 0x3c);
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_60,0);
  DAFNMLEKHAD__DIMKKHJDHFJ(__this,iVar1 - EGCBHPKONII);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
     (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40) != 0)) {
    AnalyticsController__NLMEEFHDKMH(_Menu_TypeInfo,EGCBHPKONII,PFLOEJOJJAP,AJFBHMKJHJD);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public bool OFOJMCJAGFD(KKMHKJEGDLA AHMFCANPAJC) { }   @0xaf3bb4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool DAFNMLEKHAD__OFOJMCJAGFD(void *__this,int AHMFCANPAJC)

{
  bool bVar1;
  ulong uVar2;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  if ((bRam0000000001916f01 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__ContainsKey__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__get_Item__);
    bRam0000000001916f01 = 1;
  }
  if (*(long *)((long)__this + 0x130) != 0) {
    iStack_2c = AHMFCANPAJC;
    uVar2 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                      (*(long *)((long)__this + 0x130),&iStack_2c,
                       _Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__ContainsKey__
                      );
    if ((uVar2 & 1) == 0) {
      bVar1 = false;
    }
    else {
      if (*(long *)((long)__this + 0x130) == 0) goto LAB_00bf3c60;
      iStack_24 = AHMFCANPAJC;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item
                (*(long *)((long)__this + 0x130),&iStack_24,&iStack_28,
                 _Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__get_Item__);
      bVar1 = iStack_28 == 2;
    }
    return bVar1;
  }
LAB_00bf3c60:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public DateTime MOCMIDFLJBL() { }   @0xafe68c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DAFNMLEKHAD__MOCMIDFLJBL(void *__this)

{
  return *(void **)((long)__this + 0xe8);
}


// ==== private void ELENJDEAEDD() { }   @0xafce28

/* WARNING: Removing unreachable block (ram,0x00bfd154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__ELENJDEAEDD(void *__this)

{
  int MPCJLJAJKMF;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  int *piVar7;
  void *pvVar8;
  ulong uVar9;
  int iStack_54;
  
  if ((bRam0000000001916f08 & 1) == 0) {
    func_0x00a67900(&System_Enum_TypeInfo);
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_GUIGameplay_POFCDOMOIBH__Add__);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&GUIGameplay_POFCDOMOIBH_var);
    func_0x00a67900(&GUIGameplay_POFCDOMOIBH_TypeInfo);
    func_0x00a67900(&System_Type_TypeInfo);
    bRam0000000001916f08 = 1;
  }
  uVar2 = _GUIGameplay_POFCDOMOIBH_var;
  if (*(int *)(_System_Type_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  if (*(int *)(_System_Enum_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_System_Enum_TypeInfo);
  }
  lVar3 = System_Enum__GetValues(uVar2,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  plVar4 = (long *)System_Array__GetEnumerator(lVar3,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  do {
    lVar3 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar9 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_00bfcf9c;
        }
        uVar9 = uVar9 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)func_0x00a9e6c4(plVar4,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00bfcf9c:
    uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      plVar4 = (long *)func_0x00a67a34(plVar4,_System_IDisposable_TypeInfo);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar3 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar9 == 0) goto LAB_00bfd0f8;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar9 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_00bfcffc;
        }
        uVar9 = uVar9 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)func_0x00a9e6c4(plVar4,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00bfcffc:
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*(long *)(*plVar6 + 0x40) != *(long *)(_GUIGameplay_POFCDOMOIBH_TypeInfo + 0x40)) {
      func_0x00a67eec();
LAB_00bfd148:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    piVar7 = (int *)func_0x00a67a3c();
    MPCJLJAJKMF = *piVar7;
    if (MPCJLJAJKMF != -1) {
      pvVar8 = DAFNMLEKHAD__OPNCDNBIAEN(piVar7,MPCJLJAJKMF);
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      pvVar8 = (void *)CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(pvVar8,0);
      if (((ulong)pvVar8 & 1) != 0) {
        pvVar8 = DAFNMLEKHAD__OPNCDNBIAEN(pvVar8,MPCJLJAJKMF);
        if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        iVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(pvVar8,0,0);
        if (iVar1 == 1) {
          if (*(long *)((long)__this + 0x128) == 0) goto LAB_00bfd148;
          iStack_54 = MPCJLJAJKMF;
          func_0x00b7fe44(*(long *)((long)__this + 0x128),&iStack_54,
                          _Method_System_Collections_Generic_List_GUIGameplay_POFCDOMOIBH__Add__);
        }
      }
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar7 = piVar7 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_00bfd114;
    }
  }
LAB_00bfd0f8:
  puVar5 = (undefined8 *)func_0x00a9e6c4(plVar4,_System_IDisposable_TypeInfo,0);
LAB_00bfd114:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


// ==== public void KGEAALNFELC(string ALLBGCHDGNC) { }   @0xb00994

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__KGEAALNFELC(void *__this,void *ALLBGCHDGNC)

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
  
  if ((bRam0000000001916f0c & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str_ft);
    bRam0000000001916f0c = 1;
  }
  uVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(ALLBGCHDGNC,0);
  *(undefined8 *)((long)__this + 0x68) = uVar3;
  lVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(uVar3,0);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  lVar1 = _Str_ft;
  if ((bRam0000000001916741 & 1) == 0) {
    func_0x00a67900(&Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_string___,lVar4,0
                   );
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&string_TypeInfo);
    bRam0000000001916741 = 1;
  }
  if (lVar1 == 0) {
    func_0x00a67914(&System_ArgumentNullException_TypeInfo);
    uVar3 = func_0x00a67b44();
    uVar2 = func_0x00a67914(&Str_key);
    System_ArgumentNullException___ctor(uVar3,uVar2,0);
    uVar2 = func_0x00a67914(&Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_SetString__);
    auVar6 = func_0x00a67a20(uVar3,uVar2);
    uVar3 = auVar6._0_8_;
    uStack_38 = 0x1916000;
    if ((bRam0000000001916742 & 1) == 0) {
      func_0x00a67900(&Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_DecryptValue_string___);
      func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      bRam0000000001916742 = 1;
    }
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptKey(uVar3);
    uVar5 = UnityEngine_PlayerPrefs__HasKey(uVar2,0);
    if ((uVar5 & 1) == 0) {
      uVar5 = UnityEngine_PlayerPrefs__HasKey(uVar3,0);
      if ((uVar5 & 1) != 0) {
        uVar2 = UnityEngine_PlayerPrefs__GetString(uVar3,auVar6._8_8_,0);
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
        CodeStage_AntiCheat_Storage_ObscuredPrefs__SetString(uVar3,uVar2);
        UnityEngine_PlayerPrefs__DeleteKey(uVar3,0);
        return;
      }
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      CodeStage_AntiCheat_Storage_ObscuredPrefs__MigrateFromACTkV1Internal
                (uVar3,*(undefined8 *)
                        (*(long *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xb8) +
                        0x10));
    }
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    CodeStage_AntiCheat_Storage_ObscuredPrefs__DecryptValue___Il2CppFullySharedGenericType_
              (uVar3,uVar2,auVar6._8_8_,0,auStack_48,
               _Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_DecryptValue_string___);
    return;
  }
  if (lVar4 == 0) {
    lVar4 = **(long **)(_string_TypeInfo + 0xb8);
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptKey(lVar1);
  uVar2 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptValue___Il2CppFullySharedGenericType_
                    (lVar1,lVar4,
                     _Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_string___);
  if (pcRam000000000191c270 == (code *)0x0) {
    pcRam000000000191c270 = (code *)func_0x00a678c4(&UNK_005a189a,uVar2,0);
  }
  uVar5 = (*pcRam000000000191c270)(uVar3,uVar2);
  if ((uVar5 & 1) == 0) {
    func_0x00a67914(&UnityEngine_PlayerPrefsException_TypeInfo);
    uVar3 = func_0x00a67b44();
    uVar2 = func_0x00a67914(&Str_Could_not_store_preference_value);
    UnityEngine_PlayerPrefsException___ctor(uVar3,uVar2);
    uVar2 = func_0x00a67914(&Method_UnityEngine_PlayerPrefs_SetString__);
    auVar6 = func_0x00a67a20(uVar3,uVar2);
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


// ==== public void AKHLCOADEAA(bool ALLBGCHDGNC) { }   @0xb00a38

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__AKHLCOADEAA(void *__this,bool ALLBGCHDGNC)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000001916f0f & 1) == 0) {
    func_0x00a67900(&Str_itc2);
    bRam0000000001916f0f = 1;
  }
  if (__this == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  *(uint *)((long)__this + 0xac) = (uint)ALLBGCHDGNC;
  uVar2 = _Str_itc2;
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


// ==== public void EMKKNFNKNBH(DHLBGHCGAKB ALLBGCHDGNC) { }   @0xb000d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__EMKKNFNKNBH(void *__this,int ALLBGCHDGNC)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000001916f12 & 1) == 0) {
    func_0x00a67900(&Str_gfx);
    bRam0000000001916f12 = 1;
  }
  *(int *)((long)__this + 0x90) = ALLBGCHDGNC;
  uVar2 = _Str_gfx;
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


// ==== public bool DPJPKMHLGMO() { }   @0xaffca0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool DAFNMLEKHAD__DPJPKMHLGMO(void *__this)

{
  return *(int *)((long)__this + 0x8c) == 1;
}


// ==== public DHLBGHCGAKB GCKBANCJJAK() { }   @0xb00f34

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DAFNMLEKHAD__GCKBANCJJAK(void *__this)

{
  return *(int *)((long)__this + 0x90);
}


// ==== public void BDKMDDIBAAD(bool ALLBGCHDGNC) { }   @0xb00248

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__BDKMDDIBAAD(void *__this,bool ALLBGCHDGNC)

{
  undefined4 uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if ((bRam0000000001916f1b & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str_sd);
    bRam0000000001916f1b = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_58,ALLBGCHDGNC,0);
  uStack_38 = uStack_50;
  uStack_40 = uStack_58;
  uStack_30 = uStack_48;
  if (__this != (void *)0x0) {
    *(undefined4 *)((long)__this + 0xc0) = uStack_48;
    *(undefined8 *)((long)__this + 0xb8) = uStack_50;
    *(undefined8 *)((long)__this + 0xb0) = uStack_58;
    uStack_68 = uStack_50;
    uStack_70 = uStack_58;
    uStack_60 = uStack_48;
    uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_70,0);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    }
    CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(_Str_sd,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public string AFDIIKEDILD() { }   @0xb00f4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DAFNMLEKHAD__AFDIIKEDILD(void *__this)

{
  undefined8 uVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uStack_18;
  
  if ((bRam0000000001916f1d & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    bRam0000000001916f1d = 1;
  }
  uStack_18 = 0;
  uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit
                    (*(undefined8 *)((long)__this + 0x68),0);
  uVar2 = System_String__IsNullOrEmpty(uVar1,0);
  if ((uVar2 & 1) == 0) {
    uVar1 = *(undefined8 *)((long)__this + 0x68);
  }
  else {
    if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uStack_18 = System_DateTime__get_Now(0);
    uVar1 = System_DateTime__ToString(&uStack_18,0);
    uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(uVar1,0);
    *(undefined8 *)((long)__this + 0x68) = uVar1;
  }
  pvVar3 = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(uVar1,0);
  return pvVar3;
}


// ==== public void CHGBPDAONOH(CPFPFGOIDDO BAMPGHJACCL, ECNOJHCNLAL POOJPMFNDMP) { }   @0xaf99a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__CHGBPDAONOH(void *__this,int BAMPGHJACCL,int POOJPMFNDMP)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uStack_34;
  
  if ((bRam0000000001916f21 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str_e);
    bRam0000000001916f21 = 1;
  }
  uVar4 = 0;
  lVar2 = _Main_TypeInfo;
  while( true ) {
    uStack_34 = uVar4;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      func_0x00a67a30();
      lVar2 = _Main_TypeInfo;
    }
    if ((**(long **)(lVar2 + 0xb8) == 0) ||
       (lVar3 = *(long *)(**(long **)(lVar2 + 0xb8) + 0x48), lVar3 == 0)) break;
    if (*(int *)(lVar3 + 0x18) <= (int)uVar4) {
      return;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      func_0x00a67a30();
      lVar2 = _Main_TypeInfo;
    }
    if ((**(long **)(lVar2 + 0xb8) == 0) ||
       (lVar3 = *(long *)(**(long **)(lVar2 + 0xb8) + 0x48), lVar3 == 0)) break;
    if (*(uint *)(lVar3 + 0x18) <= uStack_34) {
LAB_00bf9ba0:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar3 = *(long *)(lVar3 + (long)(int)uStack_34 * 8 + 0x20);
    if (lVar3 == 0) break;
    if (*(int *)(lVar3 + 0x10) == BAMPGHJACCL) {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        func_0x00a67a30();
        lVar2 = _Main_TypeInfo;
      }
      if ((**(long **)(lVar2 + 0xb8) == 0) ||
         (lVar3 = *(long *)(**(long **)(lVar2 + 0xb8) + 0x48), lVar3 == 0)) break;
      if (*(uint *)(lVar3 + 0x18) <= uStack_34) goto LAB_00bf9ba0;
      lVar3 = *(long *)(lVar3 + (long)(int)uStack_34 * 8 + 0x20);
      if (lVar3 == 0) break;
      if (*(int *)(lVar3 + 0x3c) < POOJPMFNDMP) {
        uVar1 = System_Int32__ToString(&uStack_34,0);
        uVar1 = System_String__Concat(_Str_e,uVar1,0);
        if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
        }
        CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar1,POOJPMFNDMP,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar2 = _Main_TypeInfo;
        if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
           (lVar3 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x48), lVar3 == 0)) break;
        if (*(uint *)(lVar3 + 0x18) <= uStack_34) goto LAB_00bf9ba0;
        lVar3 = *(long *)(lVar3 + (long)(int)uStack_34 * 8 + 0x20);
        if (lVar3 == 0) break;
        *(int *)(lVar3 + 0x3c) = POOJPMFNDMP;
      }
    }
    uVar4 = uStack_34 + 1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public DateTime OMKMIDCOGDM() { }   @0xb01050

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DAFNMLEKHAD__OMKMIDCOGDM(void *__this)

{
  return *(void **)((long)__this + 0x70);
}


// ==== public void BDCGLLCPKMK(int ALLBGCHDGNC) { }   @0xb01144

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__BDCGLLCPKMK(void *__this,int ALLBGCHDGNC)

{
  *(int *)((long)__this + 0x14) = ALLBGCHDGNC;
  return;
}


// ==== public bool HDBOCJPHJDD() { }   @0xaffcb0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool DAFNMLEKHAD__HDBOCJPHJDD(void *__this)

{
  return *(int *)((long)__this + 0xc4) == 1;
}


// ==== public void OPFBHOGMKNG(int ALLBGCHDGNC) { }   @0xb00324

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__OPFBHOGMKNG(void *__this,int ALLBGCHDGNC)

{
  undefined4 uVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam0000000001916f2d & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str_f);
    bRam0000000001916f2d = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_68,ALLBGCHDGNC,0);
  uStack_40 = uStack_58;
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  *(undefined4 *)((long)__this + 0x60) = uStack_58;
  *(undefined8 *)((long)__this + 0x58) = uStack_60;
  *(undefined8 *)((long)__this + 0x50) = uStack_68;
  uStack_70 = uStack_58;
  uStack_78 = uStack_60;
  uStack_80 = uStack_68;
  uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_80,0);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(_Str_f,uVar1,0);
  return;
}



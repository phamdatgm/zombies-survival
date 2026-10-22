// ==== public bool EFDKHACIIEC() { }   @0xaf9c40

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool DAFNMLEKHAD__EFDKHACIIEC(void *__this)

{
  return *(int *)((long)__this + 0x80) == 1;
}


// ==== public void DCLEGMOJBPN(int ALLBGCHDGNC) { }   @0xaec034

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__DCLEGMOJBPN(void *__this,int ALLBGCHDGNC)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iStack_24;
  
  if ((bRam0000000001916ef3 & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str_rm);
    bRam0000000001916ef3 = 1;
  }
  *(int *)((long)__this + 0xdc) = ALLBGCHDGNC;
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = _Str_rm;
  if ((bRam000000000191673e & 1) == 0) {
    func_0x00a67900(&Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___,
                    ALLBGCHDGNC,0);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam000000000191673e = 1;
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptKey(uVar2);
  iStack_24 = ALLBGCHDGNC;
  uVar2 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptValue___Il2CppFullySharedGenericType_
                    (uVar2,&iStack_24,
                     _Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___);
  UnityEngine_PlayerPrefs__SetString(uVar1,uVar2,0);
  return;
}


// ==== public bool IEINALFJIPJ() { }   @0xaf1400

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool DAFNMLEKHAD__IEINALFJIPJ(void *__this)

{
  return *(int *)((long)__this + 0x98) == 1;
}


// ==== public void EBANJKOABAL(KKMHKJEGDLA AHMFCANPAJC, int BEPBGMKPPJK) { }   @0xaf4c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__EBANJKOABAL(void *__this,int AHMFCANPAJC,int BEPBGMKPPJK)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  int iStack_34;
  int iStack_28;
  int iStack_24;
  
  if ((bRam0000000001916efb & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__ContainsKey__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__set_Item__);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str_a);
    bRam0000000001916efb = 1;
  }
  iStack_34 = 0;
  if (*(long *)((long)__this + 0x130) != 0) {
    iStack_24 = AHMFCANPAJC;
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                      (*(long *)((long)__this + 0x130),&iStack_24,
                       _Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__ContainsKey__
                      );
    lVar2 = *(long *)((long)__this + 0x130);
    if (lVar2 != 0) {
      iStack_28 = BEPBGMKPPJK;
      if ((uVar1 & 1) == 0) {
        iStack_24 = AHMFCANPAJC;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                  (lVar2,&iStack_24,&iStack_28,
                   _Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__Add__);
      }
      else {
        iStack_24 = AHMFCANPAJC;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item
                  (lVar2,&iStack_24,&iStack_28,
                   _Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__set_Item__);
      }
      if (BEPBGMKPPJK == 1) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00bf4e00;
        uVar3 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if ((uVar1 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40) == 0)) goto LAB_00bf4e00;
        }
      }
      iStack_34 = AHMFCANPAJC;
      uVar3 = System_Int32__ToString(&iStack_34,0);
      uVar3 = System_String__Concat(_Str_a,uVar3,0);
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      }
      CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar3,BEPBGMKPPJK,0);
      return;
    }
  }
LAB_00bf4e00:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void BHPNOGJCDKD(int HCBODNKILEA = -1) { }   @0xafe39c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__BHPNOGJCDKD(void *__this,int HCBODNKILEA)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  int iStack_34;
  
  iStack_34 = HCBODNKILEA;
  if ((bRam0000000001916f00 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_MKCBGHDANLA__Remove__);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str_c);
    bRam0000000001916f00 = 1;
  }
  if (HCBODNKILEA == -1) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iStack_34 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
    HCBODNKILEA = iStack_34;
  }
  lVar1 = DAFNMLEKHAD__DKJLCJPBPPN(__this,HCBODNKILEA,1);
  if (lVar1 != 0) {
    MKCBGHDANLA__DDPLLMLFICC(lVar1,0xffffffff,0);
    MKCBGHDANLA__ACDFKIBBJGP(lVar1,0,0);
    MKCBGHDANLA__ACDFKIBBJGP(lVar1,1,0);
    MKCBGHDANLA__ACDFKIBBJGP(lVar1,2,0);
    MKCBGHDANLA__ACDFKIBBJGP(lVar1,3,0);
    MKCBGHDANLA__ACDFKIBBJGP(lVar1,4,0);
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      iVar4 = 1;
      while( true ) {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar3 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x470), lVar3 == 0))
        goto LAB_00bfe5f4;
        if (*(int *)(lVar3 + 0x18) <= iVar4) break;
        MKCBGHDANLA__CFMKDKAGFMA(lVar1,iVar4,0);
        iVar4 = iVar4 + 1;
      }
    }
    MKCBGHDANLA__EJLALLODBKM(lVar1,0,0);
    if (HCBODNKILEA != 0) {
      uVar5 = System_Int32__ToString(&iStack_34,0);
      uVar5 = System_String__Concat(_Str_c,uVar5,0);
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      }
      CodeStage_AntiCheat_Storage_ObscuredPrefs__DeleteKey(uVar5,0);
      if (*(long *)((long)__this + 0x118) == 0) {
LAB_00bfe5f4:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___Remove
                (*(long *)((long)__this + 0x118),lVar1,
                 _Method_System_Collections_Generic_List_MKCBGHDANLA__Remove__);
    }
  }
  return;
}


// ==== public bool GDGPFCLJEIL() { }   @0xafe67c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool DAFNMLEKHAD__GDGPFCLJEIL(void *__this)

{
  return *(int *)((long)__this + 0xa8) == 1;
}


// ==== public void AIDICNFBHKK(bool ALLBGCHDGNC) { }   @0xb00634

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__AIDICNFBHKK(void *__this,bool ALLBGCHDGNC)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000001916f07 & 1) == 0) {
    func_0x00a67900(&Str_ifsync);
    bRam0000000001916f07 = 1;
  }
  if (__this == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  *(uint *)((long)__this + 0x18) = (uint)ALLBGCHDGNC;
  uVar2 = _Str_ifsync;
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


// ==== public void NLPCIABIEIC(GUIGameplay.POFCDOMOIBH MPCJLJAJKMF) { }   @0xb008d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__NLPCIABIEIC(void *__this,int MPCJLJAJKMF)

{
  ulong uVar1;
  undefined8 uVar2;
  int iStack_24;
  
  if ((bRam0000000001916f0b & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_GUIGameplay_POFCDOMOIBH__Add__);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001916f0b = 1;
  }
  uVar1 = DAFNMLEKHAD__BLGOKNOOEEO(__this,MPCJLJAJKMF);
  if ((uVar1 & 1) == 0) {
    if (*(long *)((long)__this + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    iStack_24 = MPCJLJAJKMF;
    uVar2 = func_0x00b7fe44(*(long *)((long)__this + 0x128),&iStack_24,
                            _Method_System_Collections_Generic_List_GUIGameplay_POFCDOMOIBH__Add__);
    uVar2 = DAFNMLEKHAD__OPNCDNBIAEN(uVar2,MPCJLJAJKMF);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    }
    CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar2,1,0);
  }
  return;
}


// ==== private void OODFJCLDFNI() { }   @0xafd85c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__OODFJCLDFNI(void *__this)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  uint uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int iStack_64;
  uint uStack_58;
  uint uStack_54;
  
  if ((bRam0000000001916f0e & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_CPFPFGOIDDO__Dispose__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_CPFPFGOIDDO__MoveNext__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_CPFPFGOIDDO__get_Current__);
    func_0x00a67900(&Method_System_Collections_Generic_List_CPFPFGOIDDO__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_List_CPFPFGOIDDO__GetEnumerator__);
    func_0x00a67900(&Method_System_Collections_Generic_List_CPFPFGOIDDO___ctor__);
    func_0x00a67900(&System_Collections_Generic_List_CPFPFGOIDDO__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str___encyclopedia_id__);
    func_0x00a67900(&Str_e);
    func_0x00a67900(&Str_LastCompletedLvl__);
    func_0x00a67900(&Str_Wrong_status__);
    bRam0000000001916f0e = 1;
  }
  uStack_58 = 0;
  iStack_64 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_84 = 0;
  lVar3 = func_0x00a67b44(_System_Collections_Generic_List_CPFPFGOIDDO__TypeInfo);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
            (lVar3,_Method_System_Collections_Generic_List_CPFPFGOIDDO___ctor__);
  uVar11 = 0;
  bVar1 = false;
  while( true ) {
    uStack_54 = uVar11;
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
       (lVar9 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x48), lVar9 == 0))
    goto LAB_00bfe0d8;
    if (*(int *)(lVar9 + 0x18) <= (int)uVar11) break;
    uVar4 = System_Int32__ToString(&uStack_54,0);
    uVar4 = System_String__Concat(_Str_e,uVar4,0);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    }
    uVar5 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar4,0);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar9 = **(long **)(_Main_TypeInfo + 0xb8);
      if ((lVar9 == 0) || (lVar10 = *(long *)(lVar9 + 0x48), lVar10 == 0)) goto LAB_00bfe0d8;
      if (*(uint *)(lVar10 + 0x18) <= uStack_54) goto LAB_00bfe0fc;
      lVar10 = *(long *)(lVar10 + (long)(int)uStack_54 * 8 + 0x20);
      if (lVar10 == 0) goto LAB_00bfe0d8;
      lVar7 = _Main_TypeInfo;
      if (*(char *)(lVar10 + 0x38) == '\0') {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar9 = **(long **)(_Main_TypeInfo + 0xb8);
          if (lVar9 == 0) goto LAB_00bfe0d8;
        }
        lVar7 = _Main_TypeInfo;
        lVar9 = *(long *)(lVar9 + 0x48);
        if (lVar9 == 0) goto LAB_00bfe0d8;
        if (*(uint *)(lVar9 + 0x18) <= uStack_54) goto LAB_00bfe0fc;
        lVar9 = *(long *)(lVar9 + (long)(int)uStack_54 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_00bfe0d8;
        *(undefined4 *)(lVar9 + 0x3c) = 0;
      }
    }
    else {
      uVar4 = System_Int32__ToString(&uStack_54,0);
      uVar4 = System_String__Concat(_Str_e,uVar4,0);
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      }
      uStack_58 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar4,0,0);
      if (uStack_58 < 3) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar7 = _Main_TypeInfo;
        if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
           (lVar9 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x48), lVar9 == 0))
        goto LAB_00bfe0d8;
        if (*(uint *)(lVar9 + 0x18) <= uStack_54) goto LAB_00bfe0fc;
        lVar9 = *(long *)(lVar9 + (long)(int)uStack_54 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_00bfe0d8;
        bVar1 = true;
        *(uint *)(lVar9 + 0x3c) = uStack_58;
      }
      else {
        uVar4 = System_Int32__ToString(&uStack_58,0);
        uVar6 = System_Int32__ToString(&uStack_54,0);
        uVar4 = System_String__Concat(_Str_Wrong_status__,uVar4,_Str___encyclopedia_id__,uVar6,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        Main__EEKNCFLMGDP(uVar4,0);
        lVar7 = _Main_TypeInfo;
      }
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x00a67a30();
      lVar7 = _Main_TypeInfo;
    }
    lVar9 = **(long **)(lVar7 + 0xb8);
    if ((lVar9 == 0) || (lVar10 = *(long *)(lVar9 + 0x48), lVar10 == 0)) goto LAB_00bfe0d8;
    if (*(uint *)(lVar10 + 0x18) <= uStack_54) {
LAB_00bfe0fc:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar10 = *(long *)(lVar10 + (long)(int)uStack_54 * 8 + 0x20);
    if (lVar10 == 0) goto LAB_00bfe0d8;
    if (*(char *)(lVar10 + 0x38) != '\0') {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        func_0x00a67a30();
        lVar9 = **(long **)(_Main_TypeInfo + 0xb8);
        lVar7 = _Main_TypeInfo;
        if (lVar9 == 0) goto LAB_00bfe0d8;
      }
      lVar10 = *(long *)(lVar9 + 0x48);
      if (lVar10 == 0) goto LAB_00bfe0d8;
      if (*(uint *)(lVar10 + 0x18) <= uStack_54) goto LAB_00bfe0fc;
      lVar10 = *(long *)(lVar10 + (long)(int)uStack_54 * 8 + 0x20);
      if (lVar10 == 0) goto LAB_00bfe0d8;
      if (*(int *)(lVar10 + 0x3c) == 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          func_0x00a67a30();
          lVar9 = **(long **)(_Main_TypeInfo + 0xb8);
          if (lVar9 == 0) goto LAB_00bfe0d8;
        }
        lVar9 = *(long *)(lVar9 + 0x48);
        if (lVar9 == 0) goto LAB_00bfe0d8;
        if (*(uint *)(lVar9 + 0x18) <= uStack_54) goto LAB_00bfe0fc;
        lVar9 = *(long *)(lVar9 + (long)(int)uStack_54 * 8 + 0x20);
        if ((lVar9 == 0) || (*(undefined4 *)(lVar9 + 0x3c) = 1, lVar3 == 0)) goto LAB_00bfe0d8;
        iStack_a0 = *(int *)(lVar9 + 0x10);
        func_0x00b7fe44(lVar3,&iStack_a0,_Method_System_Collections_Generic_List_CPFPFGOIDDO__Add__)
        ;
      }
    }
    uVar11 = uStack_54 + 1;
  }
  if (bVar1) {
    return;
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
  pvVar8 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (pvVar8 != (void *)0x0) {
    pvVar8 = DAFNMLEKHAD__DCOOPMCEMNE(pvVar8);
    if (pvVar8 == (void *)0x0) {
      return;
    }
    iStack_64 = *(int *)((long)pvVar8 + 0x10) + -1;
    uVar4 = System_Int32__ToString(&iStack_64,0);
    uVar4 = System_String__Concat(_Str_LastCompletedLvl__,uVar4,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__GEMDEAMAGPG(uVar4,0,0);
    if (iStack_64 < 1) {
      return;
    }
    if (lVar3 != 0) {
      iStack_a0 = 0x10;
      func_0x00b7fe44(lVar3,&iStack_a0,_Method_System_Collections_Generic_List_CPFPFGOIDDO__Add__);
      iStack_a0 = 3;
      func_0x00b7fe44(lVar3,&iStack_a0,_Method_System_Collections_Generic_List_CPFPFGOIDDO__Add__);
      iStack_a0 = 0xb;
      func_0x00b7fe44(lVar3,&iStack_a0,_Method_System_Collections_Generic_List_CPFPFGOIDDO__Add__);
      iStack_a0 = 0x12;
      func_0x00b7fe44(lVar3,&iStack_a0,_Method_System_Collections_Generic_List_CPFPFGOIDDO__Add__);
      if (1 < iStack_64) {
        iStack_a0 = 2;
        func_0x00b7fe44(lVar3,&iStack_a0,_Method_System_Collections_Generic_List_CPFPFGOIDDO__Add__)
        ;
        iStack_a0 = 0xe;
        func_0x00b7fe44(lVar3,&iStack_a0,_Method_System_Collections_Generic_List_CPFPFGOIDDO__Add__)
        ;
        iStack_a0 = 0xc;
        func_0x00b7fe44(lVar3,&iStack_a0,_Method_System_Collections_Generic_List_CPFPFGOIDDO__Add__)
        ;
        iStack_a0 = 0xd;
        func_0x00b7fe44(lVar3,&iStack_a0,_Method_System_Collections_Generic_List_CPFPFGOIDDO__Add__)
        ;
        if (2 < iStack_64) {
          iStack_a0 = 4;
          func_0x00b7fe44(lVar3,&iStack_a0,
                          _Method_System_Collections_Generic_List_CPFPFGOIDDO__Add__);
          iStack_a0 = 5;
          func_0x00b7fe44(lVar3,&iStack_a0,
                          _Method_System_Collections_Generic_List_CPFPFGOIDDO__Add__);
          if (3 < iStack_64) {
            iStack_a0 = 0x11;
            func_0x00b7fe44(lVar3,&iStack_a0,
                            _Method_System_Collections_Generic_List_CPFPFGOIDDO__Add__);
            iStack_a0 = 8;
            func_0x00b7fe44(lVar3,&iStack_a0,
                            _Method_System_Collections_Generic_List_CPFPFGOIDDO__Add__);
            iStack_a0 = 7;
            func_0x00b7fe44(lVar3,&iStack_a0,
                            _Method_System_Collections_Generic_List_CPFPFGOIDDO__Add__);
            if (4 < iStack_64) {
              iStack_a0 = 9;
              func_0x00b7fe44(lVar3,&iStack_a0,
                              _Method_System_Collections_Generic_List_CPFPFGOIDDO__Add__);
              iStack_a0 = 6;
              func_0x00b7fe44(lVar3,&iStack_a0,
                              _Method_System_Collections_Generic_List_CPFPFGOIDDO__Add__);
            }
          }
        }
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                (lVar3,&iStack_a0,
                 _Method_System_Collections_Generic_List_CPFPFGOIDDO__GetEnumerator__);
      uStack_80 = CONCAT44(uStack_9c,iStack_a0);
      uStack_78 = uStack_98;
      uStack_70 = uStack_90;
      do {
        uVar5 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                          (&uStack_80,
                           _Method_System_Collections_Generic_List_Enumerator_CPFPFGOIDDO__MoveNext__
                          );
        if ((uVar5 & 1) == 0) {
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                    (&uStack_80,
                     _Method_System_Collections_Generic_List_Enumerator_CPFPFGOIDDO__Dispose__);
          return;
        }
        func_0x00b947ec(&uStack_80,&iStack_a0,
                        _Method_System_Collections_Generic_List_Enumerator_CPFPFGOIDDO__get_Current__
                       );
        iVar2 = iStack_a0;
        uVar11 = 0;
        while( true ) {
          uStack_84 = uVar11;
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Main_TypeInfo);
          }
          lVar3 = **(long **)(_Main_TypeInfo + 0xb8);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          if (*(long *)(lVar3 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          if (*(int *)(*(long *)(lVar3 + 0x48) + 0x18) <= (int)uVar11) break;
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Main_TypeInfo);
            lVar3 = **(long **)(_Main_TypeInfo + 0xb8);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
          }
          lVar9 = *(long *)(lVar3 + 0x48);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          if (*(uint *)(lVar9 + 0x18) <= uStack_84) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar9 = *(long *)(lVar9 + (long)(int)uStack_84 * 8 + 0x20);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          if (*(int *)(lVar9 + 0x10) == iVar2) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_Main_TypeInfo);
              lVar3 = **(long **)(_Main_TypeInfo + 0xb8);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
            }
            lVar3 = *(long *)(lVar3 + 0x48);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            if (*(uint *)(lVar3 + 0x18) <= uStack_84) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            lVar3 = *(long *)(lVar3 + (long)(int)uStack_84 * 8 + 0x20);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            *(undefined4 *)(lVar3 + 0x3c) = 2;
            uVar4 = System_Int32__ToString(&uStack_84,0);
            uVar4 = System_String__Concat(_Str_e,uVar4,0);
            if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar4,2,0);
          }
          uVar11 = uStack_84 + 1;
        }
      } while( true );
    }
  }
LAB_00bfe0d8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public int ODKIECNJILP() { }   @0xb00e08

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DAFNMLEKHAD__ODKIECNJILP(void *__this)

{
  return *(int *)((long)__this + 0x94);
}


// ==== public void FLDGADKLBMI(int ALLBGCHDGNC) { }   @0xb00e18

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__FLDGADKLBMI(void *__this,int ALLBGCHDGNC)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000001916f15 & 1) == 0) {
    func_0x00a67900(&Str_urc);
    bRam0000000001916f15 = 1;
  }
  *(int *)((long)__this + 0xf4) = ALLBGCHDGNC;
  uVar2 = _Str_urc;
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


// ==== private string OIJFMLKNKKD() { }   @0xafe6f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DAFNMLEKHAD__OIJFMLKNKKD(void *__this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int ALLBGCHDGNC;
  int iVar10;
  ulong uVar11;
  void *pvVar12;
  void *pvVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  long *plVar32;
  undefined8 *puVar33;
  ulong uVar34;
  undefined8 *puVar35;
  ulong uVar36;
  ulong uVar37;
  uint uVar38;
  undefined8 uVar39;
  long lVar40;
  int iVar41;
  void *pvVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined1 auVar45 [12];
  ulong uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  void *pvStack_38;
  
  if ((bRam0000000001916f18 & 1) == 0) {
    func_0x00a67900(&UnityEngine_AndroidJavaClass_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_AndroidJavaObject_CallStatic_string___);
    func_0x00a67900(&Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject___);
    func_0x00a67900(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    func_0x00a67900(&Method_UnityEngine_AndroidJavaObject_GetStatic_string___);
    func_0x00a67900(&Method_System_Array_Empty_object___);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&string_TypeInfo);
    func_0x00a67900(&Str_com_unity3d_player_UnityPlayer);
    func_0x00a67900(&Str_getString);
    func_0x00a67900(&Str_getContentResolver);
    func_0x00a67900(&Str_android_provider_Settings_Secure);
    func_0x00a67900(&Str_ANDROID_ID);
    func_0x00a67900(&Str_currentActivity);
    bRam0000000001916f18 = 1;
  }
  pvVar42 = (void *)**(undefined8 **)(_string_TypeInfo + 0xb8);
  lVar30 = func_0x00a67b44(_UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(lVar30,_Str_com_unity3d_player_UnityPlayer,0);
  if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  UnityEngine_AndroidJavaObject__GetStatic___Il2CppFullySharedGenericType_
            (lVar30,_Str_currentActivity,&pvStack_38,
             _Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  pvVar12 = pvStack_38;
  lVar30 = func_0x00a67b44(_UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(lVar30,_Str_android_provider_Settings_Secure,0);
  if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  UnityEngine_AndroidJavaObject__GetStatic___Il2CppFullySharedGenericType_
            (lVar30,_Str_ANDROID_ID,&pvStack_38,
             _Method_UnityEngine_AndroidJavaObject_GetStatic_string___);
  pvVar13 = pvStack_38;
  lVar31 = _Method_System_Array_Empty_object___;
  lVar40 = *(long *)(_Method_System_Array_Empty_object___ + 0x38);
  if (lVar40 == 0) {
    func_0x00a9e42c(_Method_System_Array_Empty_object___);
    lVar40 = *(long *)(lVar31 + 0x38);
  }
  lVar40 = *(long *)(lVar40 + 0x10);
  if ((*(byte *)(lVar40 + 0x135) & 1) == 0) {
    lVar40 = func_0x00a9e3d0();
  }
  if (*(int *)(lVar40 + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar31 = *(long *)(*(long *)(lVar31 + 0x38) + 0x10);
  if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
    lVar31 = func_0x00a9e3d0();
  }
  if (pvVar12 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar39 = **(undefined8 **)(lVar31 + 0xb8);
  UnityEngine_AndroidJavaObject__Call___Il2CppFullySharedGenericType_
            (pvVar12,_Str_getContentResolver,uVar39,&pvStack_38,
             _Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject___);
  pvVar12 = pvStack_38;
  uVar38 = (uint)uVar39;
  plVar32 = (long *)func_0x00a679a0(_object___TypeInfo,2);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((pvVar12 == (void *)0x0) ||
     (lVar31 = func_0x00a67a34(pvVar12,*(undefined8 *)(*plVar32 + 0x40)), lVar31 != 0)) {
    uVar14 = *(uint *)(plVar32 + 3);
    if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar32[4] = (long)pvVar12;
    if (pvVar13 == (void *)0x0) {
LAB_00bfe950:
      if (1 < uVar14) {
        plVar32[5] = (long)pvVar13;
        UnityEngine_AndroidJavaObject__CallStatic___Il2CppFullySharedGenericType_
                  (lVar30,_Str_getString,plVar32,&pvStack_38,
                   _Method_UnityEngine_AndroidJavaObject_CallStatic_string___);
        return pvStack_38;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar31 = func_0x00a67a34(pvVar13,*(undefined8 *)(*plVar32 + 0x40));
    if (lVar31 != 0) {
      uVar14 = *(uint *)(plVar32 + 3);
      goto LAB_00bfe950;
    }
  }
  else {
    uVar39 = func_0x00a67b74();
    func_0x00a67a20(uVar39,0);
  }
  uVar39 = func_0x00a67b74();
  auVar45 = func_0x00a67a20(uVar39,0);
  uVar39 = auVar45._0_8_;
  if (auVar45._8_4_ == 1) {
    puVar33 = (undefined8 *)func_0x016dec50(uVar39);
    uVar39 = func_0x00a67914(&object_TypeInfo);
    uVar34 = func_0x00a67f7c(uVar39,*(undefined8 *)*puVar33);
    if ((uVar34 & 1) != 0) {
      func_0x016dec60();
      lVar30 = func_0x00a67914(&Main_TypeInfo);
      if (*(int *)(lVar30 + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar39 = func_0x00a67914(&Str_Android_ID___Error);
      Main__EEKNCFLMGDP(uVar39,0);
      return pvVar42;
    }
    puVar35 = (undefined8 *)func_0x016dec80(8);
    *puVar35 = *puVar33;
    uVar38 = 0;
    uVar39 = func_0x016dec90(puVar35,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__016e4f48);
    func_0x016dec60();
  }
  func_0x00b65214(uVar39);
  auVar45 = func_0x009bbf58();
  lVar30 = auVar45._0_8_;
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
  uStack_b0 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  iVar29 = *(int *)(lVar30 + 0x78);
  uVar14 = UnityEngine_PlayerPrefs__HasKey(_Str_is,0);
  iVar1 = *(int *)(lVar30 + 0x7c);
  uVar15 = UnityEngine_PlayerPrefs__HasKey(_Str_im,0);
  iVar2 = *(int *)(lVar30 + 0x100);
  uVar16 = UnityEngine_PlayerPrefs__HasKey(_Str_gdpr,0);
  iVar3 = *(int *)(lVar30 + 0x88);
  uVar17 = UnityEngine_PlayerPrefs__HasKey(_Str_in,0);
  uStack_100 = *(undefined4 *)(lVar30 + 0xd8);
  uStack_108 = *(undefined8 *)(lVar30 + 0xd0);
  uStack_110 = *(ulong *)(lVar30 + 200);
  iVar18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_110,0);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  uVar19 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_idi,0);
  iVar4 = *(int *)(lVar30 + 0x8c);
  uVar20 = UnityEngine_PlayerPrefs__HasKey(_Str_ia,0);
  uVar5 = *(undefined4 *)(lVar30 + 0x90);
  uVar21 = UnityEngine_PlayerPrefs__HasKey(_Str_gfx,0);
  uVar6 = *(undefined4 *)(lVar30 + 0x94);
  uVar22 = UnityEngine_PlayerPrefs__HasKey(_Str_lang,0);
  iVar7 = *(int *)(lVar30 + 0x84);
  uVar23 = UnityEngine_PlayerPrefs__HasKey(_Str_islogs,0);
  iVar8 = *(int *)(lVar30 + 0x80);
  uVar24 = UnityEngine_PlayerPrefs__HasKey(_Str_fps,0);
  uStack_100 = *(undefined4 *)(lVar30 + 0xc0);
  uStack_108 = *(undefined8 *)(lVar30 + 0xb8);
  uStack_110 = *(ulong *)(lVar30 + 0xb0);
  iVar25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_110,0);
  uVar26 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_sd,0);
  iVar9 = *(int *)(lVar30 + 0xc4);
  uVar27 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_so1,0);
  ALLBGCHDGNC = *(int *)(lVar30 + 0xdc);
  uVar28 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_rm,0);
  iVar10 = *(int *)(lVar30 + 0x98);
  uVar34 = UnityEngine_PlayerPrefs__HasKey(_Str_ifs,0);
  uVar44 = *(undefined8 *)(lVar30 + 0xa0);
  uVar36 = UnityEngine_PlayerPrefs__HasKey(_Str_fst,0);
  uVar39 = **(undefined8 **)(_string_TypeInfo + 0xb8);
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_BridgePHP_TypeInfo);
  }
  iVar41 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
  if (iVar41 == 8) {
LAB_00bfef30:
    uVar39 = UnityEngine_PlayerPrefs__GetString(_Str_xbox_sid,0);
  }
  else {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_BridgePHP_TypeInfo);
      iVar41 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
    }
    if (iVar41 == 9) goto LAB_00bfef30;
  }
  UnityEngine_PlayerPrefs__DeleteAll(0);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  CodeStage_AntiCheat_Storage_ObscuredPrefs__DeleteAll(0);
  if ((uVar38 & 1) == 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Main_TypeInfo + 0xb8) == 0) goto LAB_00bffbb0;
    Main__IJMHKMJLFIL(**(long **)(_Main_TypeInfo + 0xb8),0);
  }
  else {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar30 = *(long *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x48);
    if (lVar30 == 0) goto LAB_00bffbb0;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator
              (lVar30,&uStack_110,
               _Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    uStack_c0 = CONCAT44(uStack_fc,uStack_100);
    uStack_c8 = uStack_108;
    uStack_d0 = uStack_110;
    uStack_b8 = uStack_f8;
    uStack_b0 = uStack_f0;
    while (uVar37 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext
                              (&uStack_d0,
                               _Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__
                              ), (uVar37 & 1) != 0) {
      func_0x00b7fb78(&uStack_d0,&uStack_110,
                      _Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current
                     );
      uStack_e0 = uStack_110;
      uStack_d8 = uStack_108;
      func_0x00b7fc68(&uStack_e0,&uStack_110,
                      _Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
      uVar37 = uStack_110;
      func_0x00b7fd54(&uStack_e0,&uStack_110,
                      _Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
      uVar11 = uStack_110;
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar37,uVar11 & 0xffffffff,0);
    }
    System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose
              (&uStack_d0,
               _Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Main_TypeInfo + 0xb8) == 0) goto LAB_00bffbb0;
    pvVar42 = (void *)Main__IJMHKMJLFIL(**(long **)(_Main_TypeInfo + 0xb8),0);
    DAFNMLEKHAD__GPJCLNDGBCO(pvVar42);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar43 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar37 = UnityEngine_Object__op_Inequality(uVar43,0,0);
    if ((uVar37 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00bffbb0;
      uVar43 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar37 = UnityEngine_Object__op_Inequality(uVar43,0,0);
      if ((uVar37 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (pvVar42 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), pvVar42 == (void *)0x0)
           ) goto LAB_00bffbb0;
        BridgePHP__UpdateNickNameAndCountry(pvVar42);
      }
    }
  }
  if ((auVar45._8_4_ & 1) != 0) {
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
      DAFNMLEKHAD__MCDGKFFGABE(lVar30,iVar29 == 1);
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
      DAFNMLEKHAD__FCHNCOPLHGH(lVar30,iVar1 == 1);
    }
    if ((uVar16 & 1) != 0) {
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
      DAFNMLEKHAD__IEECMAPKMJI(lVar30,iVar3 == 1);
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
      DAFNMLEKHAD__NMKDDNOGEIJ(lVar30,iVar18 == 1);
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
      lVar30 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar30 == 0) goto LAB_00bffbb0;
      DAFNMLEKHAD__KHIFJCACGNC(lVar30,iVar4 == 1);
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
      DAFNMLEKHAD__EMKKNFNKNBH(lVar30,uVar5);
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
      lVar30 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar30 == 0) goto LAB_00bffbb0;
      DAFNMLEKHAD__DGAGHJIDJEM(lVar30,uVar6);
    }
    if ((uVar23 & 1) != 0) {
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
      DAFNMLEKHAD__MEOGODPDIOO(lVar30,iVar7 == 1);
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
      DAFNMLEKHAD__HCIDDAGOLGK(lVar30,iVar8 == 1);
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
      DAFNMLEKHAD__BDKMDDIBAAD(lVar30,iVar25 == 1);
    }
    if ((uVar27 & 1) != 0) {
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
      DAFNMLEKHAD__CJPCGGCLNCK(lVar30,iVar9 == 1);
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
      pvVar42 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (pvVar42 == (void *)0x0) goto LAB_00bffbb0;
      DAFNMLEKHAD__DCLEGMOJBPN(pvVar42,ALLBGCHDGNC);
    }
    uVar37 = System_String__op_Inequality(uVar39,**(undefined8 **)(_string_TypeInfo + 0xb8),0);
    if ((uVar37 & 1) != 0) {
      UnityEngine_PlayerPrefs__SetString(_Str_xbox_sid,uVar39,0);
    }
  }
  if ((uVar34 & 1) != 0) {
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
  if ((uVar36 & 1) != 0) {
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
    DAFNMLEKHAD__PGHAPGLHFPH(lVar30,uVar44);
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
  puVar33 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  *puVar33 = 0;
  puVar33[1] = 0;
  puVar33[2] = 0;
  if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
     (lVar30 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar30 != 0)) {
    GUIGarage__EGEFDJDCKDJ(lVar30,0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
       ((lVar30 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar30 != 0 &&
        (lVar30 = *(long *)(lVar30 + 0x58), lVar30 != 0)))) {
      EncyclopediaController__FHBDLLGMOFN(lVar30,0);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
        Translate__CCHEMMCPAOO(**(long **)(_Translate_TypeInfo + 0xb8),0);
        if ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) != (void *)0x0) {
          Translate__OGEJCBEMJLE((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8));
          if ((**(long **)(_Main_TypeInfo + 0xb8) != 0) &&
             (lVar30 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x38), lVar30 != 0)) {
            uVar14 = *(uint *)(lVar30 + 0x18);
            if (0 < (int)uVar14) {
              uVar15 = 0;
              do {
                if (uVar14 <= uVar15) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                lVar31 = *(long *)(lVar30 + (long)(int)uVar15 * 8 + 0x20);
                if (lVar31 == 0) goto LAB_00bffbb0;
                Level__POIIKNJOHOP(lVar31,0);
                uVar14 = *(uint *)(lVar30 + 0x18);
                uVar15 = uVar15 + 1;
              } while ((int)uVar15 < (int)uVar14);
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
            pvVar42 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
            if (pvVar42 != (void *)0x0) {
              iVar29 = DAFNMLEKHAD__HDABOKNLKGK(pvVar42);
              if (iVar29 != -1) {
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
                uVar39 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x28);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar34 = UnityEngine_Object__op_Inequality(uVar39,0,0);
                if ((uVar34 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (pvVar42 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x28),
                     pvVar42 == (void *)0x0)) goto LAB_00bffbb0;
                  FuelManager__CPLMJMFGLMB(pvVar42);
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
                  uVar39 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x30);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar34 = UnityEngine_Object__op_Inequality(uVar39,0,0);
                  if ((uVar34 & 1) != 0) {
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
                        NotificationsManager__LLFJNKAPDIM(_Str_fuel,3,1);
                      }
                    }
                  }
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
                    pvVar42 = (void *)Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
                    if ((uVar38 & 1) == 0) {
                      pvVar42 = (void *)DAFNMLEKHAD__BJKKICMFANH();
                    }
                    return pvVar42;
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


// ==== private void KKEBEMDKOHM() { }   @0xafd22c

/* WARNING: Removing unreachable block (ram,0x00bfd720) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__KKEBEMDKOHM(void *__this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 *puVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if ((bRam0000000001916f1a & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__ContainsKey__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__set_Item__);
    func_0x00a67900(&System_Enum_TypeInfo);
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&KKMHKJEGDLA_var);
    func_0x00a67900(&KKMHKJEGDLA_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&System_Type_TypeInfo);
    func_0x00a67900(&Str_a);
    func_0x00a67900(&Str_c);
    bRam0000000001916f1a = 1;
  }
  uVar3 = _KKMHKJEGDLA_var;
  uStack_6c = 0;
  if (*(int *)(_System_Type_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
  if (*(int *)(_System_Enum_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_System_Enum_TypeInfo);
  }
  lVar4 = System_Enum__GetValues(uVar3,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  plVar5 = (long *)System_Array__GetEnumerator(lVar4,0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  do {
    lVar4 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == _System_Collections_IEnumerator_TypeInfo) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_00bfd3e8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)func_0x00a9e6c4(plVar5,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00bfd3e8:
    uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar9 & 1) == 0) {
      plVar5 = (long *)func_0x00a67a34(plVar5,_System_IDisposable_TypeInfo);
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar9 == 0) goto LAB_00bfd6ac;
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == _System_Collections_IEnumerator_TypeInfo) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_00bfd448;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)func_0x00a9e6c4(plVar5,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00bfd448:
    plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (plVar7 == (long *)0x0) {
LAB_00bfd6fc:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*(long *)(*plVar7 + 0x40) != *(long *)(_KKMHKJEGDLA_TypeInfo + 0x40)) {
      func_0x00a67eec();
      goto LAB_00bfd6fc;
    }
    puVar8 = (undefined4 *)func_0x00a67a3c();
    uVar1 = *puVar8;
    uStack_6c = uVar1;
    uVar3 = System_Int32__ToString(&uStack_6c,0);
    uVar3 = System_String__Concat(_Str_a,uVar3,0);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
    if ((uVar9 & 1) != 0) {
      uStack_6c = uVar1;
      uVar3 = System_Int32__ToString(&uStack_6c,0);
      uVar3 = System_String__Concat(_Str_a,uVar3,0);
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
      if (*(long *)((long)__this + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uStack_64 = uVar1;
      uVar9 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                        (*(long *)((long)__this + 0x130),&uStack_64,
                         _Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__ContainsKey__
                        );
      lVar4 = *(long *)((long)__this + 0x130);
      if ((uVar9 & 1) == 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uStack_68 = uVar2;
        uStack_64 = uVar1;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                  (lVar4,&uStack_64,&uStack_68,
                   _Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__Add__);
      }
      else {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uStack_68 = uVar2;
        uStack_64 = uVar1;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item
                  (lVar4,&uStack_64,&uStack_68,
                   _Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__set_Item__);
      }
    }
    uStack_6c = uVar1;
    uVar3 = System_Int32__ToString(&uStack_6c,0);
    uVar3 = System_String__Concat(_Str_a,uVar3,_Str_c,0);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
    if ((uVar9 & 1) != 0) {
      uStack_6c = uVar1;
      uVar3 = System_Int32__ToString(&uStack_6c,0);
      uVar3 = System_String__Concat(_Str_a,uVar3,_Str_c,0);
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
      if (*(long *)((long)__this + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uStack_64 = uVar1;
      uVar9 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                        (*(long *)((long)__this + 0x138),&uStack_64,
                         _Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__ContainsKey__
                        );
      lVar4 = *(long *)((long)__this + 0x138);
      if ((uVar9 & 1) == 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uStack_68 = uVar2;
        uStack_64 = uVar1;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                  (lVar4,&uStack_64,&uStack_68,
                   _Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__Add__);
      }
      else {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uStack_68 = uVar2;
        uStack_64 = uVar1;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item
                  (lVar4,&uStack_64,&uStack_68,
                   _Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__set_Item__);
      }
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == _System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_00bfd6c8;
    }
  }
LAB_00bfd6ac:
  puVar6 = (undefined8 *)func_0x00a9e6c4(plVar5,_System_IDisposable_TypeInfo,0);
LAB_00bfd6c8:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


// ==== public int HDABOKNLKGK() { }   @0xafc7e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DAFNMLEKHAD__HDABOKNLKGK(void *__this)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if ((bRam0000000001916f1c & 1) == 0) {
    func_0x00a67900(&FuelManager_TypeInfo);
    bRam0000000001916f1c = 1;
  }
  uStack_30 = *(undefined4 *)((long)__this + 0x60);
  puVar2 = (undefined8 *)((long)__this + 0x50);
  uStack_38 = *(undefined8 *)((long)__this + 0x58);
  uStack_40 = *puVar2;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_40,0);
  if (iVar1 == -1) {
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_78,0x18,0);
    uStack_50 = uStack_68;
    uStack_58 = uStack_70;
    uStack_60 = uStack_78;
    *(undefined4 *)((long)__this + 0x60) = uStack_68;
    *(undefined8 *)((long)__this + 0x58) = uStack_70;
    *puVar2 = uStack_78;
  }
  if (**(char **)(_FuelManager_TypeInfo + 0xb8) != '\0') {
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_78,999,0);
    uStack_50 = uStack_68;
    uStack_58 = uStack_70;
    uStack_60 = uStack_78;
    *(undefined4 *)((long)__this + 0x60) = uStack_68;
    *(undefined8 *)((long)__this + 0x58) = uStack_70;
    *puVar2 = uStack_78;
  }
  uStack_80 = *(undefined4 *)((long)__this + 0x60);
  uStack_88 = *(undefined8 *)((long)__this + 0x58);
  uStack_90 = *puVar2;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_90,0);
  return iVar1;
}


// ==== public void EMADJEPNIKK(string ALLBGCHDGNC) { }   @0xb00ff4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__EMADJEPNIKK(void *__this,void *ALLBGCHDGNC)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000001916f20 & 1) == 0) {
    func_0x00a67900(&Str_n);
    bRam0000000001916f20 = 1;
  }
  *(void **)((long)__this + 0x20) = ALLBGCHDGNC;
  uVar2 = _Str_n;
  if (pcRam000000000191c270 == (code *)0x0) {
    pcRam000000000191c270 = (code *)func_0x00a678c4(&UNK_005a189a,ALLBGCHDGNC,0);
  }
  uVar1 = (*pcRam000000000191c270)(uVar2,ALLBGCHDGNC);
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00a67914(&UnityEngine_PlayerPrefsException_TypeInfo);
  uVar2 = func_0x00a67b44();
  uVar3 = func_0x00a67914(&Str_Could_not_store_preference_value);
  UnityEngine_PlayerPrefsException___ctor(uVar2,uVar3);
  uVar3 = func_0x00a67914(&Method_UnityEngine_PlayerPrefs_SetString__);
  auVar4 = func_0x00a67a20(uVar2,uVar3);
  if (pcRam000000000191c280 == (code *)0x0) {
    pcRam000000000191c280 = (code *)func_0x00a678c4(&UNK_005a8fe2);
  }
                    /* WARNING: Could not recover jumptable at 0x01486e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c280)(auVar4._0_8_,auVar4._8_8_);
  return;
}


// ==== public DJKGLJOCFCE DCOOPMCEMNE() { }   @0xaf19a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DAFNMLEKHAD__DCOOPMCEMNE(void *__this)

{
  int HKGEOJPHLAN;
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  void *pvStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000001916f24 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__get_Current__);
    func_0x00a67900(&Level_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_DJKGLJOCFCE__GetEnumerator__);
    bRam0000000001916f24 = 1;
  }
  pvStack_60 = (void *)0x0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (*(long *)((long)__this + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
            (*(long *)((long)__this + 0x120),&pvStack_78,
             _Method_System_Collections_Generic_List_DJKGLJOCFCE__GetEnumerator__);
  uStack_58 = uStack_70;
  pvStack_60 = pvStack_78;
  uStack_50 = uStack_68;
  pvVar3 = (void *)0x0;
  do {
    uVar1 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                      (&pvStack_60,
                       _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__);
    pvVar4 = pvVar3;
    if ((uVar1 & 1) == 0) break;
    func_0x00b947ec(&pvStack_60,&pvStack_78,
                    _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__get_Current__);
    pvVar4 = pvStack_78;
    if (pvStack_78 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    HKGEOJPHLAN = *(int *)((long)pvStack_78 + 0x10);
    if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    pvVar2 = Level__FHMGLDDPEDJ(HKGEOJPHLAN);
  } while (((pvVar2 != (void *)0x0) && (uVar1 = Level__get_IsEvent(pvVar2,0), (uVar1 & 1) != 0)) ||
          (uVar1 = DJKGLJOCFCE__MCDLFBJCNNA(pvVar4,0), pvVar3 = pvVar4, (uVar1 & 1) != 0));
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
            (&pvStack_60,_Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__);
  return pvVar4;
}


// ==== public int HPDEBBJNCIK() { }   @0xaecaf0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DAFNMLEKHAD__HPDEBBJNCIK(void *__this)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_20 = *(undefined4 *)((long)__this + 0x4c);
  uStack_28 = *(undefined8 *)((long)__this + 0x44);
  uStack_30 = *(undefined8 *)((long)__this + 0x3c);
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_30,0);
  return iVar1;
}


// ==== public void AFIOLIDLHAH(int ALLBGCHDGNC) { }   @0xb01154

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__AFIOLIDLHAH(void *__this,int ALLBGCHDGNC)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000001916f29 & 1) == 0) {
    func_0x00a67900(&Str_lc);
    bRam0000000001916f29 = 1;
  }
  *(int *)((long)__this + 0x104) = ALLBGCHDGNC;
  uVar2 = _Str_lc;
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


// ==== private void GPJCLNDGBCO() { }   @0xaffcc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__GPJCLNDGBCO(void *__this)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iStack_34;
  
  if ((bRam0000000001916f2c & 1) == 0) {
    func_0x00a67900(&Level_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str___Attempts_);
    func_0x00a67900(&Str_Lvl__);
    func_0x00a67900(&Str_lastPlayerLevel__);
    bRam0000000001916f2c = 1;
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
  pvVar2 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (pvVar2 != (void *)0x0) {
    pvVar2 = DAFNMLEKHAD__DCOOPMCEMNE(pvVar2);
    if (pvVar2 != (void *)0x0) {
      iVar1 = *(int *)((long)pvVar2 + 0x10);
      iStack_34 = iVar1;
      uVar3 = System_Int32__ToString(&iStack_34,0);
      uVar3 = System_String__Concat(_Str_lastPlayerLevel__,uVar3,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      Main__GEMDEAMAGPG(uVar3,0,0);
      if (0 < iVar1) {
        if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (iVar1 <= *(int *)(*(long *)(_Level_TypeInfo + 0xb8) + 4)) {
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
          lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if ((lVar4 != 0) && (lVar4 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar4,iVar1), lVar4 != 0)) {
            iStack_34 = *(int *)(lVar4 + 0x10);
            uVar3 = System_Int32__ToString(&iStack_34,0);
            iStack_34 = *(int *)(lVar4 + 0x3c);
            uVar5 = System_Int32__ToString(&iStack_34,0);
            uVar3 = System_String__Concat(_Str_Lvl__,uVar3,_Str___Attempts_,uVar5,0);
            Main__GEMDEAMAGPG(uVar3,0,0);
            if (0 < *(int *)(lVar4 + 0x3c)) {
              iVar1 = iVar1 + 1;
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
            lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
            if (lVar4 != 0) {
              DAFNMLEKHAD__MAGBBGBDPDJ(lVar4,iVar1);
              return;
            }
          }
          goto LAB_00bfff40;
        }
      }
    }
    return;
  }
LAB_00bfff40:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



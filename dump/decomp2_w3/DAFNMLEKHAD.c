// ==== public void JJAPPMFCNFA(bool ALLBGCHDGNC) { }   @0xaf9bdc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__JJAPPMFCNFA(void *__this,bool ALLBGCHDGNC)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000001916ef1 & 1) == 0) {
    func_0x00a67900(&Str_itc);
    bRam0000000001916ef1 = 1;
  }
  if (__this == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  *(uint *)((long)__this + 0xa8) = (uint)ALLBGCHDGNC;
  uVar2 = _Str_itc;
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


// ==== public DateTime CBEMFPCGMCN() { }   @0xaf9dfc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DAFNMLEKHAD__CBEMFPCGMCN(void *__this)

{
  return *(void **)((long)__this + 0xe0);
}


// ==== public void BJHLLKHDOJP() { }   @0xafa034

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__BJHLLKHDOJP(void *__this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *__this_00;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  
  if ((bRam0000000001916ef5 & 1) == 0) {
    func_0x00a67900(&System_Globalization_CultureInfo_TypeInfo);
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_MKCBGHDANLA__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_List_MKCBGHDANLA__Remove__);
    func_0x00a67900(&Method_System_Collections_Generic_List_GUIGameplay_POFCDOMOIBH___ctor__);
    func_0x00a67900(&Method_System_Collections_Generic_List_MKCBGHDANLA___ctor__);
    func_0x00a67900(&Method_System_Collections_Generic_List_DJKGLJOCFCE___ctor__);
    func_0x00a67900(&System_Collections_Generic_List_DJKGLJOCFCE__TypeInfo);
    func_0x00a67900(&System_Collections_Generic_List_GUIGameplay_POFCDOMOIBH__TypeInfo);
    func_0x00a67900(&System_Collections_Generic_List_MKCBGHDANLA__TypeInfo);
    func_0x00a67900(&MKCBGHDANLA_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str_sd);
    func_0x00a67900(&Str_lc);
    func_0x00a67900(&Str_lang);
    func_0x00a67900(&Str_Car_Classic_added_);
    func_0x00a67900(&Str_g);
    func_0x00a67900(&Str_f);
    func_0x00a67900(&Str_G);
    func_0x00a67900(&Str_n);
    func_0x00a67900(&Str_islogs);
    func_0x00a67900(&Str_so1);
    func_0x00a67900(&Str_idi);
    func_0x00a67900(&Str_c);
    func_0x00a67900(&Str_im);
    func_0x00a67900(&Str_st);
    func_0x00a67900(&Str_l0a);
    func_0x00a67900(&Str_ft);
    func_0x00a67900(&Str_Car_Classic_removed_);
    func_0x00a67900(&Str_fut);
    func_0x00a67900(&Str_in);
    func_0x00a67900(&Str_is);
    func_0x00a67900(&Str_rm);
    func_0x00a67900(&Str_);
    func_0x00a67900(&Str_s);
    func_0x00a67900(&Str_gdpr);
    func_0x00a67900(&Str_gfx);
    bRam0000000001916ef5 = 1;
  }
  uStack_68 = 0;
  iStack_6c = 0;
  uVar4 = UnityEngine_PlayerPrefs__HasKey(_Str_islogs,0);
  if ((uVar4 & 1) != 0) {
    uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_islogs,0);
    *(undefined4 *)((long)__this + 0x84) = uVar1;
  }
  uVar4 = UnityEngine_PlayerPrefs__HasKey(_Str_is,0);
  if ((uVar4 & 1) != 0) {
    uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_is,0);
    *(undefined4 *)((long)__this + 0x78) = uVar1;
  }
  uVar4 = UnityEngine_PlayerPrefs__HasKey(_Str_im,0);
  if ((uVar4 & 1) != 0) {
    uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_im,0);
    *(undefined4 *)((long)__this + 0x7c) = uVar1;
  }
  uVar4 = UnityEngine_PlayerPrefs__HasKey(_Str_in,0);
  if ((uVar4 & 1) != 0) {
    uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_in,0);
    *(undefined4 *)((long)__this + 0x88) = uVar1;
  }
  uVar4 = UnityEngine_PlayerPrefs__HasKey(_Str_n,0);
  if ((uVar4 & 1) != 0) {
    uVar5 = UnityEngine_PlayerPrefs__GetString(_Str_n,0);
    *(undefined8 *)((long)__this + 0x20) = uVar5;
  }
  uVar4 = UnityEngine_PlayerPrefs__HasKey(_Str_gfx,0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = Main__ECDNDENGEOH(0);
  }
  else {
    uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_gfx,0);
  }
  *(undefined4 *)((long)__this + 0x90) = uVar1;
  uVar4 = UnityEngine_PlayerPrefs__HasKey(_Str_gdpr,0);
  if ((uVar4 & 1) != 0) {
    uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_gdpr,0);
    *(undefined4 *)((long)__this + 0x100) = uVar1;
  }
  uVar4 = UnityEngine_PlayerPrefs__HasKey(_Str_lang,0);
  if ((uVar4 & 1) != 0) {
    uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_lang,0);
    *(undefined4 *)((long)__this + 0x94) = uVar1;
  }
  uVar4 = UnityEngine_PlayerPrefs__HasKey(_Str_st,0);
  if ((uVar4 & 1) != 0) {
    uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_st,0);
    *(undefined4 *)((long)__this + 0x108) = uVar1;
  }
  uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_lc,0xc,0);
  *(undefined4 *)((long)__this + 0x104) = uVar1;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = uVar1;
  DAFNMLEKHAD__BABJKNFMIOD(__this);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00bfad4c;
    uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (__this_00 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20),
         __this_00 == (void *)0x0)) goto LAB_00bfad4c;
      GUIGarage__OCLHKDAFKLI(__this_00);
    }
  }
  uVar5 = func_0x00a67b44(_System_Collections_Generic_List_MKCBGHDANLA__TypeInfo);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
            (uVar5,_Method_System_Collections_Generic_List_MKCBGHDANLA___ctor__);
  *(undefined8 *)((long)__this + 0x118) = uVar5;
  uVar5 = func_0x00a67b44(_System_Collections_Generic_List_DJKGLJOCFCE__TypeInfo);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
            (uVar5,_Method_System_Collections_Generic_List_DJKGLJOCFCE___ctor__);
  *(undefined8 *)((long)__this + 0x120) = uVar5;
  uVar5 = func_0x00a67b44(_System_Collections_Generic_List_GUIGameplay_POFCDOMOIBH__TypeInfo);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
            (uVar5,_Method_System_Collections_Generic_List_GUIGameplay_POFCDOMOIBH___ctor__);
  *(undefined8 *)((long)__this + 0x128) = uVar5;
  uVar5 = func_0x00a67b44(_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar5,_Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int___ctor__);
  *(undefined8 *)((long)__this + 0x130) = uVar5;
  uVar5 = func_0x00a67b44(_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar5,_Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int___ctor__);
  *(undefined8 *)((long)__this + 0x138) = uVar5;
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_s,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(_Str_s,0,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,uVar5,0);
    uStack_70 = uStack_88;
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    *(undefined4 *)((long)__this + 0x38) = uStack_88;
    *(undefined8 *)((long)__this + 0x30) = uStack_90;
    *(undefined8 *)((long)__this + 0x28) = uStack_98;
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_g,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(_Str_g,0,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,uVar5,0);
    uStack_70 = uStack_88;
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    *(undefined4 *)((long)__this + 0x4c) = uStack_88;
    *(undefined8 *)((long)__this + 0x44) = uStack_90;
    *(undefined8 *)((long)__this + 0x3c) = uStack_98;
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_f,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(_Str_f,0,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,uVar5,0);
    uStack_70 = uStack_88;
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    *(undefined4 *)((long)__this + 0x60) = uStack_88;
    *(undefined8 *)((long)__this + 0x58) = uStack_90;
    *(undefined8 *)((long)__this + 0x50) = uStack_98;
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_ft,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetString(_Str_ft,_Str_,0);
    uVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(uVar5,0);
    *(undefined8 *)((long)__this + 0x68) = uVar5;
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_fut,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uStack_68 = *(undefined8 *)(*(long *)(_System_DateTime_TypeInfo + 0xb8) + 0x10);
    uVar5 = System_DateTime__ToString(&uStack_68,0);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    }
    uVar5 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetString(_Str_fut,uVar5,0);
    if (*(int *)(_System_Globalization_CultureInfo_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_System_Globalization_CultureInfo_TypeInfo);
    }
    uVar6 = System_Globalization_CultureInfo__get_CurrentCulture(0);
    uVar5 = System_DateTime__ParseExact(uVar5,_Str_G,uVar6,0);
    *(undefined8 *)((long)__this + 0x70) = uVar5;
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_sd,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(_Str_sd,0,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,uVar5,0);
    uStack_70 = uStack_88;
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    *(undefined4 *)((long)__this + 0xc0) = uStack_88;
    *(undefined8 *)((long)__this + 0xb8) = uStack_90;
    *(undefined8 *)((long)__this + 0xb0) = uStack_98;
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_so1,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(_Str_so1,0,0);
    *(undefined4 *)((long)__this + 0xc4) = uVar1;
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_idi,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(_Str_idi,0,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,uVar5,0);
    uStack_70 = uStack_88;
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    *(undefined4 *)((long)__this + 0xd8) = uStack_88;
    *(undefined8 *)((long)__this + 0xd0) = uStack_90;
    *(undefined8 *)((long)__this + 200) = uStack_98;
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_rm,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(_Str_rm,0,0);
    *(undefined4 *)((long)__this + 0xdc) = uVar1;
  }
  iVar3 = 0;
  while( true ) {
    iStack_6c = iVar3;
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
       (lVar7 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar7 == 0))
    goto LAB_00bfad4c;
    if (*(int *)(lVar7 + 0x18) <= iVar3) break;
    uVar5 = System_Int32__ToString(&iStack_6c,0);
    uVar5 = System_String__Concat(_Str_c,uVar5,0);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    }
    uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar5,0);
    if ((uVar4 & 1) == 0) {
LAB_00bfaaac:
      if (iStack_6c == 0) {
        iVar3 = 0;
        goto LAB_00bfaab8;
      }
    }
    else {
      uVar5 = System_Int32__ToString(&iStack_6c,0);
      uVar5 = System_String__Concat(_Str_c,uVar5,0);
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      }
      iVar2 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar5,0,0);
      iVar3 = iStack_6c;
      if (iVar2 != 1) goto LAB_00bfaaac;
LAB_00bfaab8:
      uVar5 = func_0x00a67b44(_MKCBGHDANLA_TypeInfo);
      MKCBGHDANLA___ctor(uVar5,iVar3,0);
      if (*(long *)((long)__this + 0x118) == 0) goto LAB_00bfad4c;
      func_0x00b7fe44(*(long *)((long)__this + 0x118),uVar5,
                      _Method_System_Collections_Generic_List_MKCBGHDANLA__Add__);
    }
    if (iStack_6c == 1) {
      uVar5 = System_Int32__ToString(&iStack_6c,0);
      uVar5 = System_String__Concat(_Str_c,uVar5,0);
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      }
      uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar5,0);
      iVar3 = iStack_6c;
      if ((uVar4 & 1) == 0) {
        lVar7 = func_0x00a67b44(_MKCBGHDANLA_TypeInfo);
        MKCBGHDANLA___ctor(lVar7,iVar3,0);
        if ((*(long *)((long)__this + 0x118) == 0) ||
           (func_0x00b7fe44(*(long *)((long)__this + 0x118),lVar7,
                            _Method_System_Collections_Generic_List_MKCBGHDANLA__Add__), lVar7 == 0)
           ) goto LAB_00bfad4c;
        iVar3 = MKCBGHDANLA__IDOHKCCDGDG(lVar7,1,0);
        if ((iVar3 < 2) &&
           (((iVar3 = MKCBGHDANLA__IDOHKCCDGDG(lVar7,0,0), iVar3 < 2 &&
             (iVar3 = MKCBGHDANLA__IDOHKCCDGDG(lVar7,2,0), iVar3 < 2)) &&
            (iVar3 = MKCBGHDANLA__IDOHKCCDGDG(lVar7,3,0), iVar3 < 2)))) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          Main__GEMDEAMAGPG(_Str_Car_Classic_removed_,0,0);
          if (*(long *)((long)__this + 0x118) == 0) goto LAB_00bfad4c;
          System_Collections_Generic_List___Il2CppFullySharedGenericType___Remove
                    (*(long *)((long)__this + 0x118),lVar7,
                     _Method_System_Collections_Generic_List_MKCBGHDANLA__Remove__);
          if (*(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) == 1) {
            if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_l0a,0);
            if ((uVar4 & 1) == 0) {
              *(undefined4 *)((long)__this + 0x104) = 0xc;
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = 0xc;
            }
            else {
              *(undefined4 *)((long)__this + 0x104) = 0;
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = 0;
            }
          }
        }
        else {
          uVar5 = System_Int32__ToString(&iStack_6c,0);
          uVar5 = System_String__Concat(_Str_c,uVar5,0);
          if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
          }
          CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar5,1,0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          Main__GEMDEAMAGPG(_Str_Car_Classic_added_,0,0);
        }
      }
    }
    iVar3 = iStack_6c + 1;
  }
  uVar5 = func_0x00a67b44(_MKCBGHDANLA_TypeInfo);
  MKCBGHDANLA___ctor(uVar5,0xc,0);
  if (*(long *)((long)__this + 0x118) != 0) {
    func_0x00b7fe44(*(long *)((long)__this + 0x118),uVar5,
                    _Method_System_Collections_Generic_List_MKCBGHDANLA__Add__);
    return;
  }
LAB_00bfad4c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void LKLNJILJNIA() { }   @0xafc8c8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__LKLNJILJNIA(void *__this)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *__this_00;
  long lVar5;
  void *GDJDPNDHBNN;
  undefined8 uStack_58;
  
  if ((bRam0000000001916ef9 & 1) == 0) {
    func_0x00a67900(&System_Globalization_CultureInfo_TypeInfo);
    func_0x00a67900(&DJKGLJOCFCE_TypeInfo);
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_DJKGLJOCFCE__Add__);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_uri);
    func_0x00a67900(&Str_itc);
    func_0x00a67900(&Str_fst);
    func_0x00a67900(&Str_ifs);
    func_0x00a67900(&Str_G);
    func_0x00a67900(&Str_urt);
    func_0x00a67900(&Str_itc2);
    func_0x00a67900(&Str_ifsync);
    func_0x00a67900(&Str_lrt);
    func_0x00a67900(&Str_urc);
    func_0x00a67900(&Str_ia);
    func_0x00a67900(&Str_grt);
    func_0x00a67900(&Str_fps);
    bRam0000000001916ef9 = 1;
  }
  uStack_58 = 0;
  uVar2 = UnityEngine_PlayerPrefs__HasKey(_Str_ifsync,0);
  if ((uVar2 & 1) != 0) {
    uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_ifsync,0);
    *(undefined4 *)((long)__this + 0x18) = uVar1;
  }
  uVar2 = UnityEngine_PlayerPrefs__HasKey(_Str_fps,0);
  if ((uVar2 & 1) != 0) {
    uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_fps,0);
    *(undefined4 *)((long)__this + 0x80) = uVar1;
  }
  uVar2 = UnityEngine_PlayerPrefs__HasKey(_Str_ia,0);
  if ((uVar2 & 1) != 0) {
    uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_ia,0);
    *(undefined4 *)((long)__this + 0x8c) = uVar1;
  }
  uVar2 = UnityEngine_PlayerPrefs__HasKey(_Str_ifs,0);
  if ((uVar2 & 1) != 0) {
    uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_ifs,0);
    *(undefined4 *)((long)__this + 0x98) = uVar1;
    if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uStack_58 = System_DateTime__get_Now(0);
    uVar3 = System_DateTime__ToString(&uStack_58,0);
    uVar3 = UnityEngine_PlayerPrefs__GetString(_Str_fst,uVar3,0);
    if (*(int *)(_System_Globalization_CultureInfo_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_System_Globalization_CultureInfo_TypeInfo);
    }
    uVar4 = System_Globalization_CultureInfo__get_CurrentCulture(0);
    uVar3 = System_DateTime__ParseExact(uVar3,_Str_G,uVar4,0);
    *(undefined8 *)((long)__this + 0xa0) = uVar3;
  }
  uVar2 = UnityEngine_PlayerPrefs__HasKey(_Str_grt,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uStack_58 = *(undefined8 *)(*(long *)(_System_DateTime_TypeInfo + 0xb8) + 0x10);
    uVar3 = System_DateTime__ToString(&uStack_58,0);
    uVar3 = UnityEngine_PlayerPrefs__GetString(_Str_grt,uVar3,0);
    if (*(int *)(_System_Globalization_CultureInfo_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_System_Globalization_CultureInfo_TypeInfo);
    }
    uVar4 = System_Globalization_CultureInfo__get_CurrentCulture(0);
    uVar3 = System_DateTime__ParseExact(uVar3,_Str_G,uVar4,0);
    *(undefined8 *)((long)__this + 0xe0) = uVar3;
  }
  uVar2 = UnityEngine_PlayerPrefs__HasKey(_Str_uri,0);
  if ((uVar2 & 1) != 0) {
    uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_uri,0);
    *(undefined4 *)((long)__this + 0xf0) = uVar1;
    if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uStack_58 = *(undefined8 *)(*(long *)(_System_DateTime_TypeInfo + 0xb8) + 0x10);
    uVar3 = System_DateTime__ToString(&uStack_58,0);
    uVar3 = UnityEngine_PlayerPrefs__GetString(_Str_urt,uVar3,0);
    if (*(int *)(_System_Globalization_CultureInfo_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_System_Globalization_CultureInfo_TypeInfo);
    }
    uVar4 = System_Globalization_CultureInfo__get_CurrentCulture(0);
    uVar3 = System_DateTime__ParseExact(uVar3,_Str_G,uVar4,0);
    *(undefined8 *)((long)__this + 0xe8) = uVar3;
  }
  uVar2 = UnityEngine_PlayerPrefs__HasKey(_Str_urc,0);
  if ((uVar2 & 1) != 0) {
    uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_urc,0);
    *(undefined4 *)((long)__this + 0xf4) = uVar1;
  }
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uStack_58 = System_DateTime__get_Now(0);
  uVar3 = System_DateTime__ToString(&uStack_58,0);
  uVar3 = UnityEngine_PlayerPrefs__GetString(_Str_lrt,uVar3,0);
  if (*(int *)(_System_Globalization_CultureInfo_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_System_Globalization_CultureInfo_TypeInfo);
  }
  uVar4 = System_Globalization_CultureInfo__get_CurrentCulture(0);
  uVar3 = System_DateTime__ParseExact(uVar3,_Str_G,uVar4,0);
  uVar2 = 0;
  *(undefined8 *)((long)__this + 0xf8) = uVar3;
  while( true ) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar5 = **(long **)(_Main_TypeInfo + 0xb8);
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x38) == 0)) break;
    if ((long)*(int *)(*(long *)(lVar5 + 0x38) + 0x18) <= (long)uVar2) {
      uVar2 = UnityEngine_PlayerPrefs__HasKey(_Str_itc,0);
      if ((uVar2 & 1) != 0) {
        uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_itc,0);
        *(undefined4 *)((long)__this + 0xa8) = uVar1;
      }
      uVar2 = UnityEngine_PlayerPrefs__HasKey(_Str_itc2,0);
      if ((uVar2 & 1) != 0) {
        uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_itc2,0);
        *(undefined4 *)((long)__this + 0xac) = uVar1;
      }
      DAFNMLEKHAD__ELENJDEAEDD(__this);
      DAFNMLEKHAD__KKEBEMDKOHM(__this);
      DAFNMLEKHAD__OODFJCLDFNI();
      return;
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar5 = **(long **)(_Main_TypeInfo + 0xb8);
      if (lVar5 == 0) break;
    }
    lVar5 = *(long *)(lVar5 + 0x38);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    GDJDPNDHBNN = *(void **)(lVar5 + uVar2 * 8 + 0x20);
    __this_00 = (void *)func_0x00a67b44(_DJKGLJOCFCE_TypeInfo);
    DJKGLJOCFCE___ctor(__this_00,GDJDPNDHBNN);
    if (*(long *)((long)__this + 0x120) == 0) break;
    func_0x00b7fe44(*(long *)((long)__this + 0x120),__this_00,
                    _Method_System_Collections_Generic_List_DJKGLJOCFCE__Add__);
    uVar2 = uVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public bool BLGOKNOOEEO(GUIGameplay.POFCDOMOIBH MPCJLJAJKMF) { }   @0xafe2d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool DAFNMLEKHAD__BLGOKNOOEEO(void *__this,int MPCJLJAJKMF)

{
  byte bVar1;
  int iStack_24;
  
  if ((bRam0000000001916efe & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_GUIGameplay_POFCDOMOIBH__Contains__);
    bRam0000000001916efe = 1;
  }
  if (*(long *)((long)__this + 0x128) != 0) {
    iStack_24 = MPCJLJAJKMF;
    bVar1 = System_Collections_Generic_List___Il2CppFullySharedGenericType___Contains
                      (*(long *)((long)__this + 0x128),&iStack_24,
                       _Method_System_Collections_Generic_List_GUIGameplay_POFCDOMOIBH__Contains__);
    return (bool)(bVar1 & 1);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public int ADDNPHMAFBA() { }   @0xaf4774

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DAFNMLEKHAD__ADDNPHMAFBA(void *__this)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  if ((bRam0000000001916f02 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__get_Current__);
    func_0x00a67900(&Method_System_Collections_Generic_List_DJKGLJOCFCE__GetEnumerator__);
    bRam0000000001916f02 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (*(long *)((long)__this + 0x120) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
              (*(long *)((long)__this + 0x120),&uStack_48,
               _Method_System_Collections_Generic_List_DJKGLJOCFCE__GetEnumerator__);
    iVar3 = 0;
    while( true ) {
      uVar2 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                        (&uStack_48,
                         _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__)
      ;
      if ((uVar2 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                  (&uStack_48,
                   _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__);
        return iVar3;
      }
      func_0x00b947ec(&uStack_48,&lStack_28,
                      _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__get_Current__)
      ;
      if (lStack_28 == 0) break;
      iVar1 = DJKGLJOCFCE__NIDLADCDMOH(lStack_28,0);
      iVar3 = iVar1 + iVar3;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void BABJKNFMIOD() { }   @0xafad50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__BABJKNFMIOD(void *__this)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  if ((bRam0000000001916f05 & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_DeviceLockLevel_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str___lockToDevice__);
    func_0x00a67900(&Str_DeviceId__);
    bRam0000000001916f05 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = *(long *)(_Main_TypeInfo + 0xb8);
  if (*(char *)(lVar4 + 0x10) != '\0') {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    lVar4 = *(long *)(_Main_TypeInfo + 0xb8);
  }
  *(undefined1 *)(lVar4 + 0x10) = 1;
  uVar1 = DAFNMLEKHAD__OIJFMLKNKKD();
  uVar2 = System_String__IsNullOrEmpty(uVar1,0);
  lVar4 = _CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo;
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    lVar4 = _CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo;
  }
  _CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo = lVar4;
  if ((uVar2 & 1) == 0) {
    if (cRam0000000001916f35 == '\0') {
      func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      cRam0000000001916f35 = '\x01';
    }
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar4 = _CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo;
    lVar5 = *(long *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xb8);
    uVar6 = 2;
    *(undefined8 *)(lVar5 + 8) = uVar1;
  }
  else {
    uVar6 = 0;
    lVar5 = *(long *)(lVar4 + 0xb8);
  }
  *(undefined1 *)(lVar5 + 0x39) = uVar6;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    func_0x00a67a30();
    lVar4 = _CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo;
  }
  uStack_48 = _CodeStage_AntiCheat_Storage_ObscuredPrefs_DeviceLockLevel_TypeInfo;
  uStack_40 = 0xffffffffffffffff;
  uStack_38 = *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x39);
  uVar3 = System_Enum__ToString(&uStack_48,0);
  uVar1 = System_String__Concat(_Str_DeviceId__,uVar1,_Str___lockToDevice__,uVar3,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0,0);
  return;
}


// ==== public void FJPEKKHDOAK(KKMHKJEGDLA AHMFCANPAJC, int CBPKPDPCJBB) { }   @0xb00690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__FJPEKKHDOAK(void *__this,int AHMFCANPAJC,int CBPKPDPCJBB)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int iStack_44;
  int iStack_38;
  int iStack_34;
  
  if ((bRam0000000001916f09 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__ContainsKey__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__get_Item__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__set_Item__);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str_a);
    func_0x00a67900(&Str_c);
    bRam0000000001916f09 = 1;
  }
  if (CBPKPDPCJBB == 0) {
    return;
  }
  iStack_44 = AHMFCANPAJC;
  uVar2 = System_Int32__ToString(&iStack_44,0);
  uVar2 = System_String__Concat(_Str_a,uVar2,_Str_c,0);
  iVar1 = DAFNMLEKHAD__BHMFJBCOKOA(__this,AHMFCANPAJC);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar2,iVar1 + CBPKPDPCJBB,0);
  if (*(long *)((long)__this + 0x138) != 0) {
    iStack_34 = AHMFCANPAJC;
    uVar3 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                      (*(long *)((long)__this + 0x138),&iStack_34,
                       _Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__ContainsKey__
                      );
    lVar4 = *(long *)((long)__this + 0x138);
    if (lVar4 != 0) {
      if ((uVar3 & 1) != 0) {
        iStack_34 = AHMFCANPAJC;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item
                  (lVar4,&iStack_34,&iStack_38,
                   _Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__get_Item__);
        iStack_38 = iStack_38 + CBPKPDPCJBB;
        iStack_34 = AHMFCANPAJC;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item
                  (lVar4,&iStack_34,&iStack_38,
                   _Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__set_Item__);
        return;
      }
      iStack_38 = CBPKPDPCJBB;
      iStack_34 = AHMFCANPAJC;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                (lVar4,&iStack_34,&iStack_38,
                 _Method_System_Collections_Generic_Dictionary_KKMHKJEGDLA__int__Add__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public int JIEOAACILIL() { }   @0xb00a30

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DAFNMLEKHAD__JIEOAACILIL(void *__this)

{
  return *(int *)((long)__this + 0x108);
}


// ==== public List<DJKGLJOCFCE> OEOBBCHGGMM() { }   @0xb00e00

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DAFNMLEKHAD__OEOBBCHGGMM(void *__this)

{
  return *(void **)((long)__this + 0x120);
}


// ==== private void BJKKICMFANH() { }   @0xb003f8

/* WARNING: Removing unreachable block (ram,0x00c634cc) */
/* WARNING: Removing unreachable block (ram,0x00c634d0) */
/* WARNING: Removing unreachable block (ram,0x00c6350c) */
/* WARNING: Removing unreachable block (ram,0x00c63514) */
/* WARNING: Removing unreachable block (ram,0x00c63520) */
/* WARNING: Removing unreachable block (ram,0x00c63524) */
/* WARNING: Removing unreachable block (ram,0x00c63548) */
/* WARNING: Removing unreachable block (ram,0x00c63580) */
/* WARNING: Removing unreachable block (ram,0x00c63554) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__BJKKICMFANH(void *__this)

{
  ulong uVar1;
  void *__this_00;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001916f14 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001916f14 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar4 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
       (__this_00 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), __this_00 != (void *)0x0)
       ) {
      GUIGarage__DKIFODMOFNO(__this_00);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
         ((lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar3 != 0 &&
          (lVar3 = *(long *)(lVar3 + 0x60), lVar3 != 0)))) {
        GUIWindow__HEGIHOAJOKK(lVar3,0,0);
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
        lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar3 != 0) {
          if (*(int *)(lVar3 + 0x7c) != 1) {
            return;
          }
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
            return;
          }
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar3 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
          if (lVar3 != 0) {
            uVar1 = UnityEngine_AudioSource__get_isPlaying(lVar3,0);
            if ((uVar1 & 1) != 0) {
              return;
            }
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar3 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if ((bRam000000000191724a & 1) == 0) {
              func_0x00a67900(&Main_TypeInfo,0,0);
              func_0x00a67900(&UnityEngine_Object_TypeInfo);
              func_0x00a67900(&System_Random_TypeInfo);
              func_0x00a67900(&SoundScript_TypeInfo);
              bRam000000000191724a = 1;
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
            lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
            if (lVar2 == 0) goto LAB_00c6357c;
            uVar1 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar2,0);
            if ((uVar1 & 1) != 0) {
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar1 = UnityEngine_Object__op_Inequality(lVar3,0,0);
              if ((uVar1 & 1) != 0) {
                if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar4 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                }
                uVar1 = UnityEngine_Object__op_Equality(lVar3,uVar4,0);
                if ((uVar1 & 1) == 0) {
                  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar4 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                  }
                  UnityEngine_Object__op_Equality(lVar3,uVar4,0);
                  if (lVar3 == 0) goto LAB_00c6357c;
                }
                else {
                  if (lVar3 == 0) {
LAB_00c6357c:
                    /* WARNING: Subroutine does not return */
                    il2cpp_throw_967b50();
                  }
                  UnityEngine_AudioSource__set_volume(0x3f4ccccd,lVar3,0);
                }
                if (pcRam000000000191b620 == (code *)0x0) {
                  pcRam000000000191b620 = (code *)func_0x00a678c4(&UNK_005a4326,0);
                }
                    /* WARNING: Could not recover jumptable at 0x01464c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam000000000191b620)(lVar3,0);
                return;
              }
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public DateTime MMEJKGELKMI() { }   @0xb00e74

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DAFNMLEKHAD__MMEJKGELKMI(void *__this)

{
  return *(void **)((long)__this + 0xa0);
}


// ==== public void CKJLNDAOKFC(int ALLBGCHDGNC) { }   @0xb00f3c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__CKJLNDAOKFC(void *__this,int ALLBGCHDGNC)

{
  *(int *)((long)__this + 0x10) = ALLBGCHDGNC;
  return;
}


// ==== public int DKEJAGOLKGP() { }   @0xb00f44

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DAFNMLEKHAD__DKEJAGOLKGP(void *__this)

{
  return *(int *)((long)__this + 0x104);
}


// ==== public void MCDGKFFGABE(bool ALLBGCHDGNC) { }   @0xafff44

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__MCDGKFFGABE(void *__this,bool ALLBGCHDGNC)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000001916f1e & 1) == 0) {
    func_0x00a67900(&Str_is);
    bRam0000000001916f1e = 1;
  }
  if (__this == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  *(uint *)((long)__this + 0x78) = (uint)ALLBGCHDGNC;
  uVar2 = _Str_is;
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


// ==== public DJKGLJOCFCE PJDAAMCNMHJ(int HFDKNJFKOJO = -1) { }   @0xaee82c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DAFNMLEKHAD__PJDAAMCNMHJ(void *__this,int HFDKNJFKOJO)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  void *pvStack_38;
  
  if ((bRam0000000001916f22 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__get_Current__);
    func_0x00a67900(&Method_System_Collections_Generic_List_DJKGLJOCFCE__GetEnumerator__);
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916f22 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (HFDKNJFKOJO == -1) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if (lVar3 == 0) {
      HFDKNJFKOJO = -1;
    }
    else {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar3 == 0) goto LAB_00bee98c;
      }
      HFDKNJFKOJO = *(int *)(lVar3 + 0x10);
    }
  }
  if (*(long *)((long)__this + 0x120) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
              (*(long *)((long)__this + 0x120),&uStack_50,
               _Method_System_Collections_Generic_List_DJKGLJOCFCE__GetEnumerator__);
    pvVar1 = (void *)0x0;
    while( true ) {
      pvVar4 = pvVar1;
      uVar2 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                        (&uStack_50,
                         _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__)
      ;
      if ((uVar2 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                  (&uStack_50,
                   _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__);
        return pvVar4;
      }
      func_0x00b947ec(&uStack_50,&pvStack_38,
                      _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__get_Current__)
      ;
      if (pvStack_38 == (void *)0x0) break;
      pvVar1 = pvStack_38;
      if (*(int *)((long)pvStack_38 + 0x10) != HFDKNJFKOJO) {
        pvVar1 = pvVar4;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
LAB_00bee98c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void IEECMAPKMJI(bool ALLBGCHDGNC) { }   @0xaee7d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__IEECMAPKMJI(void *__this,bool ALLBGCHDGNC)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000001916f26 & 1) == 0) {
    func_0x00a67900(&Str_in);
    bRam0000000001916f26 = 1;
  }
  if (__this == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  *(uint *)((long)__this + 0x88) = (uint)ALLBGCHDGNC;
  uVar2 = _Str_in;
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


// ==== public MKCBGHDANLA DKJLCJPBPPN(int HCBODNKILEA = -1, bool OAPBNMFPAEC = True) { }   @0xaefbf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DAFNMLEKHAD__DKJLCJPBPPN(void *__this,int HCBODNKILEA,bool OAPBNMFPAEC)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  void *pvVar9;
  void *pvStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  void *pvStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000001916f28 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MKCBGHDANLA__Dispose__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MKCBGHDANLA__MoveNext__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MKCBGHDANLA__get_Current__);
    func_0x00a67900(&Method_System_Collections_Generic_List_MKCBGHDANLA__GetEnumerator__);
    func_0x00a67900(&MKCBGHDANLA_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916f28 = 1;
  }
  pvStack_60 = (void *)0x0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (HCBODNKILEA == -1) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    HCBODNKILEA = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
  }
  if (*(long *)((long)__this + 0x118) == 0) goto LAB_00beff50;
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
            (*(long *)((long)__this + 0x118),&pvStack_78,
             _Method_System_Collections_Generic_List_MKCBGHDANLA__GetEnumerator__);
  uStack_58 = uStack_70;
  pvStack_60 = pvStack_78;
  uStack_50 = uStack_68;
  pvVar5 = (void *)0x0;
  while (pvVar9 = pvVar5,
        uVar3 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                          (&pvStack_60,
                           _Method_System_Collections_Generic_List_Enumerator_MKCBGHDANLA__MoveNext__
                          ), (uVar3 & 1) != 0) {
    func_0x00b947ec(&pvStack_60,&pvStack_78,
                    _Method_System_Collections_Generic_List_Enumerator_MKCBGHDANLA__get_Current__);
    if (pvStack_78 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    pvVar5 = pvStack_78;
    if (*(int *)((long)pvStack_78 + 0x10) != HCBODNKILEA) {
      pvVar5 = pvVar9;
    }
  }
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
            (&pvStack_60,_Method_System_Collections_Generic_List_Enumerator_MKCBGHDANLA__Dispose__);
  if ((pvVar9 == (void *)0x0) && (OAPBNMFPAEC)) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    pvVar5 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if (pvVar5 != (void *)0x0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        pvVar5 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (pvVar5 == (void *)0x0) goto LAB_00beff50;
      }
      bVar2 = Level__get_IsEvent(pvVar5);
      if (!bVar2) {
        return (void *)0x0;
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0x50) == 0)) goto LAB_00beff50;
      if (*(int *)(*(long *)(lVar6 + 0x50) + 0x1c) == 1) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if (lVar6 == 0) goto LAB_00beff50;
        }
        if (*(long *)(lVar6 + 0x50) == 0) {
LAB_00beff50:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar1 = *(uint *)(*(long *)(lVar6 + 0x50) + 0x18);
        if (7 < uVar1) {
          return (void *)0x0;
        }
        if ((1 << (ulong)(uVar1 & 0x1f) & 0xc2U) == 0) {
          return (void *)0x0;
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if (lVar6 == 0) goto LAB_00beff50;
        }
        if (*(long *)(lVar6 + 0x50) == 0) goto LAB_00beff50;
        uVar1 = *(int *)(*(long *)(lVar6 + 0x50) + 0x18) - 1;
        if (uVar1 < 7) {
          iVar7 = *(int *)(&UNK_005b9f5c + (long)(int)uVar1 * 4);
        }
        else {
          iVar7 = -1;
        }
        if (iVar7 == HCBODNKILEA) {
          if (*(long *)((long)__this + 0x110) != 0) {
            iVar7 = *(int *)(*(long *)((long)__this + 0x110) + 0x10);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
              if (lVar6 == 0) goto LAB_00beff50;
            }
            if (*(long *)(lVar6 + 0x50) == 0) goto LAB_00beff50;
            uVar1 = *(int *)(*(long *)(lVar6 + 0x50) + 0x18) - 1;
            if (uVar1 < 7) {
              iVar4 = *(int *)(&UNK_005b9f5c + (long)(int)uVar1 * 4);
            }
            else {
              iVar4 = -1;
            }
            if (iVar7 == iVar4) {
              return *(void **)((long)__this + 0x110);
            }
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x50), lVar6 != 0)) {
            uVar1 = *(int *)(lVar6 + 0x18) - 1;
            if (uVar1 < 7) {
              uVar8 = *(undefined4 *)(&UNK_005b9f5c + (long)(int)uVar1 * 4);
            }
            else {
              uVar8 = 0xffffffff;
            }
            pvVar5 = (void *)func_0x00a67b44(_MKCBGHDANLA_TypeInfo);
            MKCBGHDANLA___ctor(pvVar5,uVar8,0);
            *(void **)((long)__this + 0x110) = pvVar5;
            return pvVar5;
          }
          goto LAB_00beff50;
        }
      }
    }
    pvVar9 = (void *)0x0;
  }
  return pvVar9;
}


// ==== public void NMKDDNOGEIJ(bool ALLBGCHDGNC) { }   @0xaffffc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DAFNMLEKHAD__NMKDDNOGEIJ(void *__this,bool ALLBGCHDGNC)

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
  
  if ((bRam0000000001916f2b & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str_idi);
    bRam0000000001916f2b = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_58,ALLBGCHDGNC,0);
  uStack_38 = uStack_50;
  uStack_40 = uStack_58;
  uStack_30 = uStack_48;
  if (__this != (void *)0x0) {
    *(undefined4 *)((long)__this + 0xd8) = uStack_48;
    *(undefined8 *)((long)__this + 0xd0) = uStack_50;
    *(undefined8 *)((long)__this + 200) = uStack_58;
    uStack_68 = uStack_50;
    uStack_70 = uStack_58;
    uStack_60 = uStack_48;
    uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_70,0);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    }
    CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(_Str_idi,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



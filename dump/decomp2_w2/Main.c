// ==== private void EJFCDFJEDKJ() { }   @0xb5d96c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Main__EJFCDFJEDKJ(void *__this)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *(long *)((long)__this + 0x28);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (1 < (int)uVar1) {
      uVar4 = 1;
      do {
        if (uVar1 <= uVar4) {
LAB_00c5da14:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar5 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_00c5da10;
        iVar2 = *(int *)(lVar5 + 0x24);
        if ((0 < iVar2) && (iVar2 < *(int *)(lVar5 + 0x20))) {
          *(int *)(lVar5 + 0x20) = iVar2;
        }
        if ((*(float *)(lVar5 + 0x28) != 1.0) &&
           (*(float *)(lVar5 + 0x30) != *(float *)(lVar5 + 0x28))) {
          *(float *)(lVar5 + 0x28) = *(float *)(lVar5 + 0x30);
        }
        if (0 < *(int *)(lVar5 + 0x40)) {
          lVar6 = *(long *)(lVar5 + 0x38);
          if (lVar6 == 0) goto LAB_00c5da10;
          if (*(uint *)(lVar6 + 0x18) < 6) goto LAB_00c5da14;
          *(int *)(lVar6 + 0x34) = *(int *)(lVar5 + 0x40);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
    return;
  }
LAB_00c5da10:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public static void EEKNCFLMGDP(string CIDKMFLFJEJ) { }   @0xb5d634

/* WARNING: Removing unreachable block (ram,0x00c16680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Main__EEKNCFLMGDP(void *CIDKMFLFJEJ)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *__this;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uStack_3c;
  long *plStack_38;
  
  if ((bRam0000000001917204 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Debug_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917204 = 1;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__LogError(CIDKMFLFJEJ,0);
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
  __this = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (__this == (void *)0x0) {
LAB_00c5d818:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  bVar2 = DAFNMLEKHAD__LLEFEIHEJDE(__this);
  if (!bVar2) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c5d818;
  uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (CIDKMFLFJEJ == (void *)0x0)) goto LAB_00c5d818;
  lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar8 = (**(code **)(*(long *)CIDKMFLFJEJ + 0x168))
                    (CIDKMFLFJEJ,*(undefined8 *)(*(long *)CIDKMFLFJEJ + 0x170));
  if (lVar9 == 0) goto LAB_00c5d818;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar8,1,0);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&float_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str____color___);
    func_0x00a67900(&Str__FF4E4A);
    func_0x00a67900(&Str__0_f2_);
    func_0x00a67900(&Str___);
    func_0x00a67900(&Str__78e938);
    func_0x00a67900(&Str_);
    func_0x00a67900(&Str__color_);
    bRam0000000001916fbb = 1;
  }
  plVar3 = *(long **)(lVar9 + 0x1e8);
  if ((plVar3 == (long *)0x0) ||
     (lVar4 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0)), lVar4 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar4 + 0x10)) {
    if (*(long *)(lVar9 + 0x1e8) == 0) goto LAB_00c16768;
    uVar5 = UnityEngine_Component__get_gameObject(*(long *)(lVar9 + 0x1e8),0);
    if ((*(long *)(lVar9 + 0x1e8) == 0) ||
       (lVar4 = UnityEngine_Component__get_transform(*(long *)(lVar9 + 0x1e8),0), lVar4 == 0))
    goto LAB_00c16768;
    uVar6 = UnityEngine_Transform__get_parent(lVar4,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar4 = UnityEngine_Object__Instantiate_object_
                      (uVar5,uVar6,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar4 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar4,&plStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar9 + 0x1e8) = plStack_38;
    if (plStack_38 == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*plStack_38 + 0x5a8))(plStack_38,_Str_,*(undefined8 *)(*plStack_38 + 0x5b0));
  }
  plVar3 = *(long **)(lVar9 + 0x1e8);
  lVar9 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar3 != (long *)0x0) &&
     (uVar5 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0)), lVar9 != 0))
  {
    uVar1 = *(uint *)(lVar9 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar9 + 0x20) = uVar5, uVar1 != 1 &&
         (*(undefined8 *)(lVar9 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar9 + 0x30) = _Str__FF4E4A, uVar1 != 3)))) {
      *(undefined8 *)(lVar9 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar5 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar5 = System_String__Format(_Str__0_f2_,uVar5,0);
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar9 + 0x40) = uVar5, uVar1 != 5)) &&
         (*(undefined8 *)(lVar9 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar9 + 0x50) = uVar8;
        uVar8 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar9 + 0x18)) {
          *(undefined8 *)(lVar9 + 0x58) = uVar8;
          uVar8 = System_String__Concat(lVar9,0);
          (**(code **)(*plVar3 + 0x5a8))(plVar3,uVar8,*(undefined8 *)(*plVar3 + 0x5b0));
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
LAB_00c16768:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void IJMHKMJLFIL() { }   @0xb5e254

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Main__IJMHKMJLFIL(void *__this)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *__this_00;
  long lVar5;
  long lVar6;
  undefined8 auStack_58 [2];
  
  if ((bRam0000000001917209 & 1) == 0) {
    func_0x00a67900(&DAFNMLEKHAD_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001917209 = 1;
  }
  __this_00 = (void *)func_0x00a67b44(_DAFNMLEKHAD_TypeInfo);
  DAFNMLEKHAD___ctor(__this_00);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8) = __this_00;
  if (__this_00 != (void *)0x0) {
    DAFNMLEKHAD__BJHLLKHDOJP(__this_00,0);
    lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar5 != 0) {
      if ((bRam0000000001916ef9 & 1) == 0) {
        func_0x00a67900(&System_Globalization_CultureInfo_TypeInfo,0);
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
      auStack_58[0] = 0;
      uVar2 = UnityEngine_PlayerPrefs__HasKey(_Str_ifsync,0);
      if ((uVar2 & 1) != 0) {
        uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_ifsync,0);
        *(undefined4 *)(lVar5 + 0x18) = uVar1;
      }
      uVar2 = UnityEngine_PlayerPrefs__HasKey(_Str_fps,0);
      if ((uVar2 & 1) != 0) {
        uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_fps,0);
        *(undefined4 *)(lVar5 + 0x80) = uVar1;
      }
      uVar2 = UnityEngine_PlayerPrefs__HasKey(_Str_ia,0);
      if ((uVar2 & 1) != 0) {
        uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_ia,0);
        *(undefined4 *)(lVar5 + 0x8c) = uVar1;
      }
      uVar2 = UnityEngine_PlayerPrefs__HasKey(_Str_ifs,0);
      if ((uVar2 & 1) != 0) {
        uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_ifs,0);
        *(undefined4 *)(lVar5 + 0x98) = uVar1;
        if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        auStack_58[0] = System_DateTime__get_Now(0);
        uVar3 = System_DateTime__ToString(auStack_58,0);
        uVar3 = UnityEngine_PlayerPrefs__GetString(_Str_fst,uVar3,0);
        if (*(int *)(_System_Globalization_CultureInfo_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_System_Globalization_CultureInfo_TypeInfo);
        }
        uVar4 = System_Globalization_CultureInfo__get_CurrentCulture(0);
        uVar3 = System_DateTime__ParseExact(uVar3,_Str_G,uVar4,0);
        *(undefined8 *)(lVar5 + 0xa0) = uVar3;
      }
      uVar2 = UnityEngine_PlayerPrefs__HasKey(_Str_grt,0);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        auStack_58[0] = *(undefined8 *)(*(long *)(_System_DateTime_TypeInfo + 0xb8) + 0x10);
        uVar3 = System_DateTime__ToString(auStack_58,0);
        uVar3 = UnityEngine_PlayerPrefs__GetString(_Str_grt,uVar3,0);
        if (*(int *)(_System_Globalization_CultureInfo_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_System_Globalization_CultureInfo_TypeInfo);
        }
        uVar4 = System_Globalization_CultureInfo__get_CurrentCulture(0);
        uVar3 = System_DateTime__ParseExact(uVar3,_Str_G,uVar4,0);
        *(undefined8 *)(lVar5 + 0xe0) = uVar3;
      }
      uVar2 = UnityEngine_PlayerPrefs__HasKey(_Str_uri,0);
      if ((uVar2 & 1) != 0) {
        uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_uri,0);
        *(undefined4 *)(lVar5 + 0xf0) = uVar1;
        if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        auStack_58[0] = *(undefined8 *)(*(long *)(_System_DateTime_TypeInfo + 0xb8) + 0x10);
        uVar3 = System_DateTime__ToString(auStack_58,0);
        uVar3 = UnityEngine_PlayerPrefs__GetString(_Str_urt,uVar3,0);
        if (*(int *)(_System_Globalization_CultureInfo_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_System_Globalization_CultureInfo_TypeInfo);
        }
        uVar4 = System_Globalization_CultureInfo__get_CurrentCulture(0);
        uVar3 = System_DateTime__ParseExact(uVar3,_Str_G,uVar4,0);
        *(undefined8 *)(lVar5 + 0xe8) = uVar3;
      }
      uVar2 = UnityEngine_PlayerPrefs__HasKey(_Str_urc,0);
      if ((uVar2 & 1) != 0) {
        uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_urc,0);
        *(undefined4 *)(lVar5 + 0xf4) = uVar1;
      }
      if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      auStack_58[0] = System_DateTime__get_Now(0);
      uVar3 = System_DateTime__ToString(auStack_58,0);
      uVar3 = UnityEngine_PlayerPrefs__GetString(_Str_lrt,uVar3,0);
      if (*(int *)(_System_Globalization_CultureInfo_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_System_Globalization_CultureInfo_TypeInfo);
      }
      uVar4 = System_Globalization_CultureInfo__get_CurrentCulture(0);
      uVar3 = System_DateTime__ParseExact(uVar3,_Str_G,uVar4,0);
      uVar2 = 0;
      *(undefined8 *)(lVar5 + 0xf8) = uVar3;
      while( true ) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar6 = **(long **)(_Main_TypeInfo + 0xb8);
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x38) == 0)) break;
        if ((long)*(int *)(*(long *)(lVar6 + 0x38) + 0x18) <= (long)uVar2) {
          uVar2 = UnityEngine_PlayerPrefs__HasKey(_Str_itc,0);
          if ((uVar2 & 1) != 0) {
            uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_itc,0);
            *(undefined4 *)(lVar5 + 0xa8) = uVar1;
          }
          uVar2 = UnityEngine_PlayerPrefs__HasKey(_Str_itc2,0);
          if ((uVar2 & 1) != 0) {
            uVar1 = UnityEngine_PlayerPrefs__GetInt(_Str_itc2,0);
            *(undefined4 *)(lVar5 + 0xac) = uVar1;
          }
          DAFNMLEKHAD__ELENJDEAEDD(lVar5);
          DAFNMLEKHAD__KKEBEMDKOHM(lVar5);
          DAFNMLEKHAD__OODFJCLDFNI();
          return;
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar6 = **(long **)(_Main_TypeInfo + 0xb8);
          if (lVar6 == 0) break;
        }
        lVar6 = *(long *)(lVar6 + 0x38);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        uVar4 = *(undefined8 *)(lVar6 + uVar2 * 8 + 0x20);
        uVar3 = func_0x00a67b44(_DJKGLJOCFCE_TypeInfo);
        DJKGLJOCFCE___ctor(uVar3,uVar4,0);
        if (*(long *)(lVar5 + 0x120) == 0) break;
        func_0x00b7fe44(*(long *)(lVar5 + 0x120),uVar3,
                        _Method_System_Collections_Generic_List_DJKGLJOCFCE__Add__);
        uVar2 = uVar2 + 1;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public static float ACIOEKHCEOE(float JGBIHEGEMJP, float HPHJFKDLPKG, float ALLBGCHDGNC) { }   @0xb5e76c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float Main__ACIOEKHCEOE(float JGBIHEGEMJP,float HPHJFKDLPKG,float ALLBGCHDGNC)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  bVar1 = ALLBGCHDGNC < 0.0;
  if (1.0 < ALLBGCHDGNC) {
    ALLBGCHDGNC = 1.0;
  }
  if (bVar1) {
    ALLBGCHDGNC = 0.0;
  }
  fVar2 = (float)func_0x016ded20(ALLBGCHDGNC * 3.1415927 *
                                 (ALLBGCHDGNC * ALLBGCHDGNC * ALLBGCHDGNC * 2.5 + 0.2));
  fVar3 = (float)func_0x016ded40(1.0 - ALLBGCHDGNC,0x400ccccd);
  return (HPHJFKDLPKG - JGBIHEGEMJP) *
         ((1.0 - ALLBGCHDGNC) * 1.2 + 1.0) * (ALLBGCHDGNC + fVar3 * fVar2) + JGBIHEGEMJP;
}


// ==== public static bool MMAOMJMAENM() { }   @0xb5ea38

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Main__MMAOMJMAENM(void)

{
  int iVar1;
  
  if ((bRam000000000191720f & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Old_device_detected__Tenjin_disabled_);
    bRam000000000191720f = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  iVar1 = Main__FAOGGIELDDF();
  if ((iVar1 != -1) && (iVar1 < 0x15)) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__GEMDEAMAGPG(_Str_Old_device_detected__Tenjin_disabled_,0);
  }
  return iVar1 == -1 || 0x14 < iVar1;
}



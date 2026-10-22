// ==== public static void NDFIFEGNEGA() { }   @0xb5d3e8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Main__NDFIFEGNEGA(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined4 uStack_24;
  
  if ((bRam00000000019171ff & 1) == 0) {
    func_0x00a67900(&GUIMenu_var);
    func_0x00a67900(&GUIMenu_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&System_Type_TypeInfo);
    func_0x00a67900(&Str_2val_3__4);
    func_0x00a67900(&Str_GUIMenu);
    bRam00000000019171ff = 1;
  }
  uVar1 = _Str_2val_3__4;
  uVar2 = _GUIMenu_var;
  uStack_24 = 0;
  if (*(int *)(_System_Type_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  plVar3 = (long *)UnityEngine_Resources__Load(_Str_GUIMenu,uVar2,0);
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(_GUIMenu_TypeInfo + 0x130) <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(_GUIMenu_TypeInfo + 0x130) * 8 + -8)
        == _GUIMenu_TypeInfo)) {
      lVar4 = plVar3[4];
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      uStack_24 = 0x24;
      uVar2 = System_Int32__ToString(&uStack_24,0);
      uVar2 = System_String__Concat(lVar4,uVar1,uVar2,0);
      *(undefined8 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x18) = uVar2;
      return;
    }
    func_0x00a67eec();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public static string HIIJGDANAIK(int EMKMCEPMMBG, MDGGLDMKCFB KDPCGPECCLA) { }   @0xb5ddf8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Main__HIIJGDANAIK(int EMKMCEPMMBG,int KDPCGPECCLA)

{
  void *pvVar1;
  float fStack_28;
  int iStack_24;
  
  iStack_24 = EMKMCEPMMBG;
  if ((bRam0000000001917202 & 1) == 0) {
    func_0x00a67900(&Str_F1);
    bRam0000000001917202 = 1;
  }
  fStack_28 = 0.0;
  if (KDPCGPECCLA == 5) {
    fStack_28 = (float)EMKMCEPMMBG / 10.0;
    pvVar1 = (void *)System_Single__ToString(&fStack_28,_Str_F1,0);
  }
  else {
    pvVar1 = (void *)System_Int32__ToString(&iStack_24,0);
  }
  return pvVar1;
}


// ==== public static void GEMDEAMAGPG(object CIDKMFLFJEJ, bool ODGJCMJLLEA = False) { }   @0xb58edc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Main__GEMDEAMAGPG(void *CIDKMFLFJEJ,bool ODGJCMJLLEA)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 uStack_3c;
  long *plStack_38;
  
  if ((bRam0000000001917206 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Debug_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917206 = 1;
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
  lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar6 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = DAFNMLEKHAD__LLEFEIHEJDE(lVar6,0);
  if (((uVar7 & 1) == 0) && (!ODGJCMJLLEA)) {
    return;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__Log(CIDKMFLFJEJ,0);
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
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c590c8;
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
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (CIDKMFLFJEJ == (void *)0x0)) goto LAB_00c590c8;
  lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar8 = (**(code **)(*(long *)CIDKMFLFJEJ + 0x168))
                    (CIDKMFLFJEJ,*(undefined8 *)(*(long *)CIDKMFLFJEJ + 0x170));
  if (lVar6 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar8,0,0);
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
  plVar2 = *(long **)(lVar6 + 0x1e8);
  if ((plVar2 == (long *)0x0) ||
     (lVar3 = (**(code **)(*plVar2 + 0x598))(plVar2,*(undefined8 *)(*plVar2 + 0x5a0)), lVar3 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar3 + 0x10)) {
    if (*(long *)(lVar6 + 0x1e8) == 0) goto LAB_00c16768;
    uVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar6 + 0x1e8),0);
    if ((*(long *)(lVar6 + 0x1e8) == 0) ||
       (lVar3 = UnityEngine_Component__get_transform(*(long *)(lVar6 + 0x1e8),0), lVar3 == 0))
    goto LAB_00c16768;
    uVar5 = UnityEngine_Transform__get_parent(lVar3,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar3 = UnityEngine_Object__Instantiate_object_
                      (uVar4,uVar5,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar3 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar3,&plStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar6 + 0x1e8) = plStack_38;
    if (plStack_38 == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*plStack_38 + 0x5a8))(plStack_38,_Str_,*(undefined8 *)(*plStack_38 + 0x5b0));
  }
  plVar2 = *(long **)(lVar6 + 0x1e8);
  lVar6 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar2 != (long *)0x0) &&
     (uVar4 = (**(code **)(*plVar2 + 0x598))(plVar2,*(undefined8 *)(*plVar2 + 0x5a0)), lVar6 != 0))
  {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar6 + 0x20) = uVar4, uVar1 != 1 &&
         (*(undefined8 *)(lVar6 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar6 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar6 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar4 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar4 = System_String__Format(_Str__0_f2_,uVar4,0);
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar6 + 0x40) = uVar4, uVar1 != 5)) &&
         (*(undefined8 *)(lVar6 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar6 + 0x50) = uVar8;
        uVar8 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x58) = uVar8;
          uVar8 = System_String__Concat(lVar6,0);
          (**(code **)(*plVar2 + 0x5a8))(plVar2,uVar8,*(undefined8 *)(*plVar2 + 0x5b0));
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


// ==== public static void EBIEJDOBOCP(string MEKGFADMHKJ) { }   @0xb5e3a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Main__EBIEJDOBOCP(void *MEKGFADMHKJ)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 auStack_28 [2];
  
  if ((bRam000000000191720b & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam000000000191720b = 1;
  }
  if (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  auStack_28[0] = UnityEngine_SceneManagement_SceneManager__GetActiveScene(0);
  iVar1 = UnityEngine_SceneManagement_Scene__get_buildIndex(auStack_28,0);
  if (iVar1 == 0) {
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
    if (lVar3 == 0) goto LAB_00c5e61c;
    uVar2 = UnityEngine_AudioSource__get_isPlaying(lVar3,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar3 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
      if (lVar3 == 0) goto LAB_00c5e61c;
      UnityEngine_AudioSource__Stop(lVar3,0);
    }
  }
  else {
    if (iVar1 < 1) goto LAB_00c5e5f0;
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar3 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x70);
      if (lVar3 == 0) goto LAB_00c5e61c;
      UnityEngine_AudioSource__Pause(lVar3,0);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar3 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x48), lVar3 == 0))
      goto LAB_00c5e61c;
      UnityEngine_AudioSource__Stop(lVar3,0);
    }
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
    if (lVar3 == 0) {
LAB_00c5e61c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar2 = UnityEngine_AudioSource__get_isPlaying(lVar3,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      auStack_28[0] = UnityEngine_SceneManagement_SceneManager__GetActiveScene(0);
      uVar4 = UnityEngine_SceneManagement_Scene__get_name(auStack_28,0);
      uVar2 = System_String__op_Inequality(uVar4,MEKGFADMHKJ,0);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar3 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
        if (lVar3 == 0) goto LAB_00c5e61c;
        UnityEngine_AudioSource__Stop(lVar3,0);
      }
    }
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    SoundScript__HCPNLKMMKFA();
  }
LAB_00c5e5f0:
  if (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_SceneManagement_SceneManager__LoadScene(MEKGFADMHKJ,0);
  return;
}


// ==== public static string CHJONPOFGFA(int FPHFKCCPAEF) { }   @0xb5e824

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Main__CHJONPOFGFA(int FPHFKCCPAEF)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  float fVar4;
  undefined4 uStack_28;
  int iStack_24;
  
  if ((bRam000000000191720d & 1) == 0) {
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&float_TypeInfo);
    func_0x00a67900(&Str______);
    func_0x00a67900(&Str__0___1_00_00_);
    bRam000000000191720d = 1;
  }
  pvVar3 = _Str______;
  if (FPHFKCCPAEF != 0) {
    fVar4 = (float)FPHFKCCPAEF / 100.0;
    iStack_24 = -0x2222222;
    if (fVar4 != INFINITY) {
      iStack_24 = (int)fVar4 / 0x3c;
    }
    uVar1 = func_0x00a67a38(_int_TypeInfo,&iStack_24);
    uStack_28 = func_0x016ded30(fVar4,0x42700000);
    uVar2 = func_0x00a67a38(_float_TypeInfo,&uStack_28);
    pvVar3 = (void *)System_String__Format(_Str__0___1_00_00_,uVar1,uVar2,0);
  }
  return pvVar3;
}



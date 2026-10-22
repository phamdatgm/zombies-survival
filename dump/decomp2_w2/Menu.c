// ==== public static void BGKFMDFJFMA(CanvasScaler MEDNKCPCMIO, float MOJPAJIHNKI) { }   @0xb32d2c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__BGKFMDFJFMA(void *MEDNKCPCMIO,float MOJPAJIHNKI)

{
  int iVar1;
  int iVar2;
  
  iVar1 = UnityEngine_Screen__get_width(0);
  iVar2 = UnityEngine_Screen__get_height(0);
  if (1.95 < (float)iVar1 / (float)iVar2) {
    if (MEDNKCPCMIO == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    *(float *)((long)MEDNKCPCMIO + 0x38) = MOJPAJIHNKI;
  }
  return;
}


// ==== public void KLGOLHHGBKP() { }   @0xb33688

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__KLGOLHHGBKP(void *__this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if ((bRam00000000019170d5 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam00000000019170d5 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Main_TypeInfo + 0xb8) != 0) &&
     (lVar3 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x40), lVar3 != 0)) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar2 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_00c3372c;
        Achievement__PPHJGAMIKLM(lVar2,0);
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
    return;
  }
LAB_00c3372c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void PJEHMAFCMLI() { }   @0xb34444

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__PJEHMAFCMLI(void *__this)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uStack_44;
  
  if ((bRam00000000019170d8 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_FindObjectOfType_GUIGarage___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Str_RateMe__);
    func_0x00a67900(&Str_Garage);
    bRam00000000019170d8 = 1;
  }
  uStack_44 = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
    uVar7 = *(undefined8 *)((long)__this + 0x28);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c34d78;
      UnityEngine_Behaviour__set_enabled(*(long *)((long)__this + 0x28),0,0);
    }
    Menu__CKPDEIAFHEC();
    return;
  }
  uVar7 = *(undefined8 *)((long)__this + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__FindObjectOfType_object_
                      (_Method_UnityEngine_Object_FindObjectOfType_GUIGarage___);
    *(undefined8 *)((long)__this + 0x20) = uVar7;
  }
  uVar7 = *(undefined8 *)((long)__this + 0x28);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c34d78;
    uVar4 = UnityEngine_Behaviour__get_enabled(*(long *)((long)__this + 0x28),0);
    if ((uVar4 & 1) == 0) {
      if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c34d78;
      UnityEngine_Behaviour__set_enabled(*(long *)((long)__this + 0x28),1,0);
    }
    if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c34d78;
    FuelManager__NGBCNBFIMFC(*(long *)((long)__this + 0x28),0xffffffff,0);
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xd) == '\0') {
    Menu__OCCACLIDKCM(__this);
    if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c34d78;
    GUIGarage__EGEFDJDCKDJ(*(long *)((long)__this + 0x20),0);
    if ((*(long *)((long)__this + 0x20) == 0) ||
       (lVar5 = *(long *)(*(long *)((long)__this + 0x20) + 0x58), lVar5 == 0)) goto LAB_00c34d78;
    EncyclopediaController__FHBDLLGMOFN(lVar5,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = Main__KCHOEBEIOCE(0);
    if ((uVar4 & 1) != 0) {
      lVar5 = *(long *)((long)__this + 0x58);
      if (lVar5 == 0) goto LAB_00c34d78;
      if (*(char *)(lVar5 + 0x30) != '\0') {
        GamePadController__FKBCEHJHEBP(lVar5,0);
        lVar5 = *(long *)((long)__this + 0x58);
        if (lVar5 == 0) goto LAB_00c34d78;
      }
      GamePadController__AGMBMNONINL(lVar5,0);
    }
    uVar4 = Menu__HMCFLJKHPAI();
    if ((uVar4 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 8) == '\0') {
        if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c34d78;
        lVar5 = *(long *)(*(long *)((long)__this + 0x20) + 0x78);
      }
      else {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar5 == 0) {
LAB_00c34818:
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          *(undefined8 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) = 0;
        }
        else {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
            if (lVar5 == 0) goto LAB_00c34d78;
          }
          if (*(int *)(lVar5 + 0x10) < 100) goto LAB_00c34818;
          lVar6 = *(long *)((long)__this + 0x20);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
            if (lVar5 == 0) goto LAB_00c34d78;
          }
          uVar7 = Level__get_gui(lVar5);
          if (lVar6 == 0) goto LAB_00c34d78;
          GUIGarage__ButtonMapLevelSelect(lVar6,uVar7,0);
        }
        if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c34d78;
        GUIGarage__PDCIBBDKCLN(*(long *)((long)__this + 0x20),0);
        if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c34d78;
        lVar5 = *(long *)(*(long *)((long)__this + 0x20) + 0x70);
      }
    }
    else {
      if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c34d78;
      lVar5 = *(long *)(*(long *)((long)__this + 0x20) + 0x60);
    }
    if (lVar5 == 0) goto LAB_00c34d78;
    GUIWindow__HEGIHOAJOKK(lVar5,0,0);
    uVar7 = *(undefined8 *)((long)__this + 0x48);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)((long)__this + 0x48) == 0) goto LAB_00c34d78;
      Purchaser__EHGPGMBHPKL(*(long *)((long)__this + 0x48),0);
    }
    Menu__PPBIOKBJGPG(__this);
    uVar7 = *(undefined8 *)((long)__this + 0x38);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if (((uVar4 & 1) == 0) || (uVar4 = Menu__PNMOPPJFFDF(__this), (uVar4 & 1) != 0)) {
LAB_00c34904:
      uVar3 = 0;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 9) != '\0') goto LAB_00c34904;
      if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c34d78;
      uVar3 = AdvController__NKNJOFHCDIF(*(long *)((long)__this + 0x38),_Str_Garage,0);
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar5 = *(long *)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(lVar5 + 0x10) < 1) {
LAB_00c34988:
      bVar2 = false;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar5 = *(long *)(_Menu_TypeInfo + 0xb8);
      }
      if (*(char *)(lVar5 + 0xf) == '\0') goto LAB_00c34988;
      lVar5 = *(long *)((long)__this + 0x20);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (lVar5 == 0) goto LAB_00c34d78;
      GUIGarage__ButtonShowOffers(lVar5,*(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x10),0);
      bVar2 = true;
      *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xf) = 0;
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
    lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_00c34d78;
    uStack_44 = *(undefined4 *)(lVar5 + 0xdc);
    uVar7 = System_Int32__ToString(&uStack_44,0);
    uVar7 = System_String__Concat(_Str_RateMe__,uVar7,0);
    Main__GEMDEAMAGPG(uVar7,0,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x18) == '\0') {
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
      lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar5 == 0) goto LAB_00c34d78;
      if (0 < *(int *)(lVar5 + 0xdc)) {
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
        lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar5 == 0) goto LAB_00c34d78;
        iVar1 = *(int *)(lVar5 + 0xdc);
        if ((iVar1 * -0x33333333 + 0x19999998U >> 1 | iVar1 * -0x80000000) < 0x19999999) {
          if (bVar2 || (uVar3 & 1) != 0) {
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
            lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
            if (lVar5 == 0) goto LAB_00c34d78;
            DAFNMLEKHAD__DCLEGMOJBPN(lVar5,0xfffffff6,0);
          }
          else {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x18) = 1;
            if ((*(long *)((long)__this + 0x20) == 0) ||
               (lVar5 = *(long *)(*(long *)((long)__this + 0x20) + 0x50), lVar5 == 0))
            goto LAB_00c34d78;
            RateMe__ACPIOHNDIID(lVar5,0);
          }
        }
      }
    }
LAB_00c34a34:
    Menu__OLOGKIHIIEL(__this);
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
    lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_00c34d78;
    uVar4 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar5,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar5 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
        if (lVar5 == 0) goto LAB_00c34d78;
        uVar4 = UnityEngine_AudioSource__get_isPlaying(lVar5,0);
        if ((uVar4 & 1) == 0) {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          SoundScript__HCEFONCADKE
                    (*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98),0,0);
        }
      }
    }
  }
  else {
    uVar8 = UnityEngine_AudioListener__get_volume(0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x14) = uVar8;
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
    lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_00c34d78;
    uVar4 = DAFNMLEKHAD__AIMCLDENEOB(lVar5,0);
    lVar5 = *(long *)((long)__this + 0x20);
    if (lVar5 == 0) goto LAB_00c34d78;
    if ((uVar4 & 1) == 0) {
      if (*(long *)(lVar5 + 0x60) == 0) goto LAB_00c34d78;
      GUIWindow__HEGIHOAJOKK(*(long *)(lVar5 + 0x60),0,0);
      goto LAB_00c34a34;
    }
    if (*(long *)(lVar5 + 0x138) == 0) goto LAB_00c34d78;
    GUIWindow__HEGIHOAJOKK(*(long *)(lVar5 + 0x138),0,0);
    Menu__OLOGKIHIIEL(__this);
  }
  lVar5 = *(long *)((long)__this + 0x20);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (lVar5 != 0) {
    GUIGarage__GOKBDNDJPBA(lVar5,1,*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xd) == '\0',0,0);
    lVar6 = *(long *)(_Menu_TypeInfo + 0xb8);
    lVar5 = _Menu_TypeInfo;
    if (*(char *)(lVar6 + 0xd) != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar6 = *(long *)(_Menu_TypeInfo + 0xb8);
      }
      lVar5 = _Menu_TypeInfo;
      *(undefined1 *)(lVar6 + 0xd) = 0;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x00a67a30();
      lVar5 = _Menu_TypeInfo;
    }
    lVar6 = *(long *)(lVar5 + 0xb8);
    if (*(char *)(lVar6 + 9) != '\0') {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        func_0x00a67a30();
        lVar6 = *(long *)(_Menu_TypeInfo + 0xb8);
      }
      *(undefined1 *)(lVar6 + 9) = 0;
    }
    return;
  }
LAB_00c34d78:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void GDEFDCOIDNM() { }   @0xb33ee8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__GDEFDCOIDNM(void *__this)

{
  return;
}


// ==== public void EDKJPDKMJGB(GameObject MIPKEALMBHI) { }   @0xb36c8c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__EDKJPDKMJGB(void *__this,void *MIPKEALMBHI)

{
  void *pvVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if (MIPKEALMBHI == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  pvVar1 = (void *)UnityEngine_GameObject__get_activeSelf(MIPKEALMBHI,0);
  if (((ulong)pvVar1 & 1) != 0) {
    return;
  }
  if (*(long *)((long)__this + 0x90) != 0) {
    pvVar1 = (void *)UnityEngine_MonoBehaviour__StopCoroutine
                               (__this,*(long *)((long)__this + 0x90),0);
  }
  pvVar1 = Menu__ACJNNGIEIIJ(pvVar1,MIPKEALMBHI);
  *(void **)((long)__this + 0x90) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
    uVar3 = func_0x00a67b44();
    uVar4 = func_0x00a67914(&Str_routine_is_null);
    System_NullReferenceException___ctor(uVar3,uVar4,0);
  }
  else {
    if (pcRam000000000191c478 == (code *)0x0) {
      pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
    }
    uVar2 = (*pcRam000000000191c478)(__this);
    if ((uVar2 & 1) != 0) {
      if (pcRam000000000191c488 == (code *)0x0) {
        pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
      }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c488)(__this,pvVar1);
      return;
    }
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar3 = func_0x00a67b44();
    uVar4 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
    System_ArgumentException___ctor(uVar3,uVar4,0);
  }
  uVar4 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
  auVar5 = func_0x00a67a20(uVar3,uVar4);
  if (pcRam000000000191c488 == (code *)0x0) {
    pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
  }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c488)(auVar5._0_8_,auVar5._8_8_);
  return;
}


// ==== public void JGDPPFPNOLB() { }   @0xb37714

/* WARNING: Removing unreachable block (ram,0x00c0a00c) */
/* WARNING: Removing unreachable block (ram,0x00c0a018) */
/* WARNING: Removing unreachable block (ram,0x00c0a01c) */
/* WARNING: Removing unreachable block (ram,0x00c0a024) */
/* WARNING: Removing unreachable block (ram,0x00c0a038) */
/* WARNING: Removing unreachable block (ram,0x00c0a044) */
/* WARNING: Removing unreachable block (ram,0x00c0a04c) */
/* WARNING: Removing unreachable block (ram,0x00c0a058) */
/* WARNING: Removing unreachable block (ram,0x00c0a2b4) */
/* WARNING: Removing unreachable block (ram,0x00c0a2c0) */
/* WARNING: Removing unreachable block (ram,0x00c0a2c4) */
/* WARNING: Removing unreachable block (ram,0x00c0a2cc) */
/* WARNING: Removing unreachable block (ram,0x00c0a2e0) */
/* WARNING: Removing unreachable block (ram,0x00c0a2ec) */
/* WARNING: Removing unreachable block (ram,0x00c0a2f4) */
/* WARNING: Removing unreachable block (ram,0x00c0a300) */
/* WARNING: Removing unreachable block (ram,0x00c0a130) */
/* WARNING: Removing unreachable block (ram,0x00c0a138) */
/* WARNING: Removing unreachable block (ram,0x00c0a148) */
/* WARNING: Removing unreachable block (ram,0x00c0a14c) */
/* WARNING: Removing unreachable block (ram,0x00c0a154) */
/* WARNING: Removing unreachable block (ram,0x00c0a168) */
/* WARNING: Removing unreachable block (ram,0x00c0a174) */
/* WARNING: Removing unreachable block (ram,0x00c0a17c) */
/* WARNING: Removing unreachable block (ram,0x00c0a184) */
/* WARNING: Removing unreachable block (ram,0x00c0a320) */
/* WARNING: Removing unreachable block (ram,0x00c0a350) */
/* WARNING: Removing unreachable block (ram,0x00c0a378) */
/* WARNING: Removing unreachable block (ram,0x00c0a3b4) */
/* WARNING: Removing unreachable block (ram,0x00c0a190) */
/* WARNING: Removing unreachable block (ram,0x00c0a1bc) */
/* WARNING: Removing unreachable block (ram,0x00c0a3c4) */
/* WARNING: Removing unreachable block (ram,0x00c0a080) */
/* WARNING: Removing unreachable block (ram,0x00c0a08c) */
/* WARNING: Removing unreachable block (ram,0x00c0a090) */
/* WARNING: Removing unreachable block (ram,0x00c0a098) */
/* WARNING: Removing unreachable block (ram,0x00c0a0ac) */
/* WARNING: Removing unreachable block (ram,0x00c0a0b8) */
/* WARNING: Removing unreachable block (ram,0x00c0a0c0) */
/* WARNING: Removing unreachable block (ram,0x00c0a0cc) */
/* WARNING: Removing unreachable block (ram,0x00c0a0e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__JGDPPFPNOLB(void *__this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)((long)__this + 0x20);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam0000000001916f6b & 1) == 0) {
    func_0x00a67900(&MGACAOGOMPM_TypeInfo,1,0);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Str_color);
    bRam0000000001916f6b = 1;
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
  lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar5 == 0) goto LAB_00c0a774;
  lVar5 = DAFNMLEKHAD__DKJLCJPBPPN(lVar5,0xffffffff,1,0);
  if (lVar5 == 0) {
    return;
  }
  uVar9 = *(undefined8 *)(lVar8 + 0x568);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  uVar6 = UnityEngine_Input__GetKey(0x7f,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(lVar8 + 0x568) == 0) goto LAB_00c0a774;
    iVar2 = ShopItem__HJICMDCENKN(*(long *)(lVar8 + 0x568),0xffffffff,0);
    if (0 < iVar2) {
      if (*(long *)(lVar8 + 0x568) != 0) {
        cVar1 = *(char *)(*(long *)(lVar8 + 0x568) + 0x70);
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
        lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar5 != 0) {
          pvVar7 = (void *)DAFNMLEKHAD__DKJLCJPBPPN(lVar5,0xffffffff,1,0);
          lVar8 = *(long *)(lVar8 + 0x568);
          if (lVar8 != 0) {
            if (cVar1 == '\0') {
              if (pvVar7 == (void *)0x0) goto LAB_00c0a774;
              MKCBGHDANLA__ACDFKIBBJGP(pvVar7,*(undefined4 *)(lVar8 + 0x28),0);
            }
            else {
              if (pvVar7 == (void *)0x0) goto LAB_00c0a774;
              MKCBGHDANLA__CFMKDKAGFMA(pvVar7,*(int *)(lVar8 + 0x74));
            }
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
              Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
              return;
            }
          }
        }
      }
      goto LAB_00c0a774;
    }
  }
  if (*(long *)(lVar8 + 0x568) != 0) {
    iVar2 = ShopItem__HJICMDCENKN(*(long *)(lVar8 + 0x568),0xffffffff,0);
    if (*(long *)(lVar8 + 0x568) != 0) {
      iVar3 = ShopItem__EKBFKEBGGOP(*(long *)(lVar8 + 0x568),0);
      if (iVar3 <= iVar2) {
        return;
      }
      lVar5 = *(long *)(lVar8 + 0x568);
      if (lVar5 != 0) {
        uVar4 = ShopItem__HJICMDCENKN(lVar5,0xffffffff,0);
        ShopItem__OKADMIPJHCA(lVar5,uVar4,0);
        lVar5 = *(long *)(lVar8 + 0x568);
        if (lVar5 != 0) {
          uVar4 = ShopItem__HJICMDCENKN(lVar5,0xffffffff,0);
          uVar6 = ShopItem__MLHKDEGPJGI(lVar5,uVar4,0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Main_TypeInfo);
          }
          if (cRam0000000001916e67 == '\0') {
            func_0x00a67900(&Main_TypeInfo);
            cRam0000000001916e67 = '\x01';
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          pvVar7 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if (pvVar7 != (void *)0x0) {
            if ((uVar6 & 1) == 0) {
              DAFNMLEKHAD__LOCFCFJIAIH(pvVar7);
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0a774;
              uVar9 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x80);
              uVar10 = *(undefined8 *)(lVar8 + 0x568);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar6 = UnityEngine_Object__op_Equality(uVar9,uVar10,0);
              if ((uVar6 & 1) != 0) {
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                iVar2 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
                if (cRam0000000001916e67 == '\0') {
                  func_0x00a67900(&Main_TypeInfo);
                  cRam0000000001916e67 = '\x01';
                }
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                if (lVar5 == 0) goto LAB_00c0a774;
                if (iVar2 == *(int *)(lVar5 + 0xf4)) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0a774;
                  Menu__OOFKKAKFKEL(**(long **)(_Menu_TypeInfo + 0xb8),1,0);
                }
              }
            }
            else {
              DAFNMLEKHAD__HPDEBBJNCIK(pvVar7,0);
            }
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            SoundScript__GIGBLEBBIEK
                      (*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x60),0);
            if (*(long *)(lVar8 + 0x568) != 0) {
              cVar1 = *(char *)(*(long *)(lVar8 + 0x568) + 0x70);
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (cVar1 == '\0') {
                iVar2 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
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
                lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                if (lVar5 == 0) goto LAB_00c0a774;
                pvVar7 = (void *)DAFNMLEKHAD__DKJLCJPBPPN(lVar5,0xffffffff,1,0);
                lVar5 = *(long *)(lVar8 + 0x568);
                if (lVar5 == 0) goto LAB_00c0a774;
                iVar3 = *(int *)(lVar5 + 0x28);
                if (iVar2 == 0) {
                  iVar2 = ShopItem__EKBFKEBGGOP(lVar5,0);
                  if (pvVar7 == (void *)0x0) goto LAB_00c0a774;
                  MKCBGHDANLA__CMFJICHIMAH(pvVar7,iVar3,iVar2);
                  if (*(long *)(lVar8 + 0x568) == 0) goto LAB_00c0a774;
                  if (*(int *)(*(long *)(lVar8 + 0x568) + 0x28) == 3) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0a774;
                    *(undefined1 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x7b) = 1;
                  }
                }
                else {
                  if (pvVar7 == (void *)0x0) goto LAB_00c0a774;
                  MKCBGHDANLA__IFGGBDCPJDF(pvVar7,iVar3);
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0a774;
                uVar9 = Menu__INMDNKGHGEO(**(long **)(_Menu_TypeInfo + 0xb8),0);
                uVar9 = GUIGarage__APCBBBDNHKG(uVar9,*(undefined8 *)(lVar8 + 0x568));
                UnityEngine_MonoBehaviour__StartCoroutine(lVar8,uVar9,0);
              }
              else {
                if (cRam0000000001916e67 == '\0') {
                  func_0x00a67900(&Main_TypeInfo);
                  cRam0000000001916e67 = '\x01';
                }
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                if (lVar5 == 0) goto LAB_00c0a774;
                lVar5 = DAFNMLEKHAD__DKJLCJPBPPN(lVar5,0xffffffff,1,0);
                if ((*(long *)(lVar8 + 0x568) == 0) || (lVar5 == 0)) goto LAB_00c0a774;
                MKCBGHDANLA__LPHCCLPECIA(lVar5,*(undefined4 *)(*(long *)(lVar8 + 0x568) + 0x74),0);
                GUIGarage__ButtonColorPreview(lVar8,*(undefined8 *)(lVar8 + 0x568));
                uVar6 = Main__KCHOEBEIOCE(0);
                if ((uVar6 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (pvVar7 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58),
                     pvVar7 == (void *)0x0)) goto LAB_00c0a774;
                  GamePadController__KCAHLEAKNNK(pvVar7);
                }
              }
              lVar5 = *(long *)(lVar8 + 0x568);
              if (lVar5 != 0) {
                if (*(char *)(lVar5 + 0x70) == '\0') {
                  iVar2 = ShopItem__HJICMDCENKN(lVar5,0xffffffff,0);
                  if (*(long *)(lVar8 + 0x568) == 0) goto LAB_00c0a774;
                  iVar3 = ShopItem__EKBFKEBGGOP(*(long *)(lVar8 + 0x568),0);
                  if (iVar2 == iVar3) {
                    GUIGarage__KFELMMODBGC(lVar8);
                  }
                }
                if ((*(long *)(lVar8 + 0x98) != 0) &&
                   (lVar5 = UnityEngine_Component__get_gameObject(*(long *)(lVar8 + 0x98),0),
                   lVar5 != 0)) {
                  uVar6 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
                  if ((uVar6 & 1) == 0) {
                    return;
                  }
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                     (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 != 0)) {
                    AdvController__JJDJIEJLCFM(lVar5,0);
                    if (*(void **)(lVar8 + 0x98) != (void *)0x0) {
                      GUIWindow__JGDCBENNDFO(*(void **)(lVar8 + 0x98),true);
                      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar6 = Main__KCHOEBEIOCE(0);
                      if ((uVar6 & 1) == 0) {
                        return;
                      }
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      lVar8 = **(long **)(_Menu_TypeInfo + 0xb8);
                      if ((lVar8 != 0) && (*(long *)(lVar8 + 0x58) != 0)) {
                        if (*(char *)(*(long *)(lVar8 + 0x58) + 0x30) == '\0') {
                          return;
                        }
                        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                          lVar8 = **(long **)(_Menu_TypeInfo + 0xb8);
                          if (lVar8 == 0) goto LAB_00c0a774;
                        }
                        if (*(void **)(lVar8 + 0x58) != (void *)0x0) {
                          GamePadController__OJPBPDDLDGB(*(void **)(lVar8 + 0x58));
                          if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                             (pvVar7 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58),
                             pvVar7 != (void *)0x0)) {
                            GamePadController__KCAHLEAKNNK(pvVar7);
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
        }
      }
    }
  }
LAB_00c0a774:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public IEnumerator ACJNNGIEIIJ(GameObject MIPKEALMBHI) { }   @0xb36cf8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Menu__ACJNNGIEIIJ(void *__this,void *MIPKEALMBHI)

{
  void *pvVar1;
  
  if ((bRam00000000019170e7 & 1) == 0) {
    func_0x00a67900(&Menu_CDBPKEDALNC_TypeInfo);
    bRam00000000019170e7 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_Menu_CDBPKEDALNC_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x20) = MIPKEALMBHI;
  return pvVar1;
}


// ==== public void IKGBHGHCJCL() { }   @0xb38040

/* WARNING: Removing unreachable block (ram,0x00c0a00c) */
/* WARNING: Removing unreachable block (ram,0x00c0a018) */
/* WARNING: Removing unreachable block (ram,0x00c0a01c) */
/* WARNING: Removing unreachable block (ram,0x00c0a024) */
/* WARNING: Removing unreachable block (ram,0x00c0a038) */
/* WARNING: Removing unreachable block (ram,0x00c0a044) */
/* WARNING: Removing unreachable block (ram,0x00c0a04c) */
/* WARNING: Removing unreachable block (ram,0x00c0a058) */
/* WARNING: Removing unreachable block (ram,0x00c0a2b4) */
/* WARNING: Removing unreachable block (ram,0x00c0a2c0) */
/* WARNING: Removing unreachable block (ram,0x00c0a2c4) */
/* WARNING: Removing unreachable block (ram,0x00c0a2cc) */
/* WARNING: Removing unreachable block (ram,0x00c0a2e0) */
/* WARNING: Removing unreachable block (ram,0x00c0a2ec) */
/* WARNING: Removing unreachable block (ram,0x00c0a2f4) */
/* WARNING: Removing unreachable block (ram,0x00c0a300) */
/* WARNING: Removing unreachable block (ram,0x00c0a130) */
/* WARNING: Removing unreachable block (ram,0x00c0a138) */
/* WARNING: Removing unreachable block (ram,0x00c0a148) */
/* WARNING: Removing unreachable block (ram,0x00c0a14c) */
/* WARNING: Removing unreachable block (ram,0x00c0a154) */
/* WARNING: Removing unreachable block (ram,0x00c0a168) */
/* WARNING: Removing unreachable block (ram,0x00c0a174) */
/* WARNING: Removing unreachable block (ram,0x00c0a17c) */
/* WARNING: Removing unreachable block (ram,0x00c0a184) */
/* WARNING: Removing unreachable block (ram,0x00c0a320) */
/* WARNING: Removing unreachable block (ram,0x00c0a350) */
/* WARNING: Removing unreachable block (ram,0x00c0a378) */
/* WARNING: Removing unreachable block (ram,0x00c0a3b4) */
/* WARNING: Removing unreachable block (ram,0x00c0a190) */
/* WARNING: Removing unreachable block (ram,0x00c0a1bc) */
/* WARNING: Removing unreachable block (ram,0x00c0a3c4) */
/* WARNING: Removing unreachable block (ram,0x00c0a080) */
/* WARNING: Removing unreachable block (ram,0x00c0a08c) */
/* WARNING: Removing unreachable block (ram,0x00c0a090) */
/* WARNING: Removing unreachable block (ram,0x00c0a098) */
/* WARNING: Removing unreachable block (ram,0x00c0a0ac) */
/* WARNING: Removing unreachable block (ram,0x00c0a0b8) */
/* WARNING: Removing unreachable block (ram,0x00c0a0c0) */
/* WARNING: Removing unreachable block (ram,0x00c0a0cc) */
/* WARNING: Removing unreachable block (ram,0x00c0a0e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__IKGBHGHCJCL(void *__this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  Menu__CGIIKCKFFLE();
  lVar8 = *(long *)((long)__this + 0x20);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam0000000001916f6b & 1) == 0) {
    func_0x00a67900(&MGACAOGOMPM_TypeInfo,1,0);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Str_color);
    bRam0000000001916f6b = 1;
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
  lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar5 == 0) goto LAB_00c0a774;
  lVar5 = DAFNMLEKHAD__DKJLCJPBPPN(lVar5,0xffffffff,1,0);
  if (lVar5 == 0) {
    return;
  }
  uVar9 = *(undefined8 *)(lVar8 + 0x568);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  uVar6 = UnityEngine_Input__GetKey(0x7f,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(lVar8 + 0x568) == 0) goto LAB_00c0a774;
    iVar2 = ShopItem__HJICMDCENKN(*(long *)(lVar8 + 0x568),0xffffffff,0);
    if (0 < iVar2) {
      if (*(long *)(lVar8 + 0x568) != 0) {
        cVar1 = *(char *)(*(long *)(lVar8 + 0x568) + 0x70);
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
        lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar5 != 0) {
          pvVar7 = (void *)DAFNMLEKHAD__DKJLCJPBPPN(lVar5,0xffffffff,1,0);
          lVar8 = *(long *)(lVar8 + 0x568);
          if (lVar8 != 0) {
            if (cVar1 == '\0') {
              if (pvVar7 == (void *)0x0) goto LAB_00c0a774;
              MKCBGHDANLA__ACDFKIBBJGP(pvVar7,*(undefined4 *)(lVar8 + 0x28),0);
            }
            else {
              if (pvVar7 == (void *)0x0) goto LAB_00c0a774;
              MKCBGHDANLA__CFMKDKAGFMA(pvVar7,*(int *)(lVar8 + 0x74));
            }
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
              Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
              return;
            }
          }
        }
      }
      goto LAB_00c0a774;
    }
  }
  if (*(long *)(lVar8 + 0x568) != 0) {
    iVar2 = ShopItem__HJICMDCENKN(*(long *)(lVar8 + 0x568),0xffffffff,0);
    if (*(long *)(lVar8 + 0x568) != 0) {
      iVar3 = ShopItem__EKBFKEBGGOP(*(long *)(lVar8 + 0x568),0);
      if (iVar3 <= iVar2) {
        return;
      }
      lVar5 = *(long *)(lVar8 + 0x568);
      if (lVar5 != 0) {
        uVar4 = ShopItem__HJICMDCENKN(lVar5,0xffffffff,0);
        ShopItem__OKADMIPJHCA(lVar5,uVar4,0);
        lVar5 = *(long *)(lVar8 + 0x568);
        if (lVar5 != 0) {
          uVar4 = ShopItem__HJICMDCENKN(lVar5,0xffffffff,0);
          uVar6 = ShopItem__MLHKDEGPJGI(lVar5,uVar4,0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Main_TypeInfo);
          }
          if (cRam0000000001916e67 == '\0') {
            func_0x00a67900(&Main_TypeInfo);
            cRam0000000001916e67 = '\x01';
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          pvVar7 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if (pvVar7 != (void *)0x0) {
            if ((uVar6 & 1) == 0) {
              DAFNMLEKHAD__LOCFCFJIAIH(pvVar7);
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0a774;
              uVar9 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x80);
              uVar10 = *(undefined8 *)(lVar8 + 0x568);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar6 = UnityEngine_Object__op_Equality(uVar9,uVar10,0);
              if ((uVar6 & 1) != 0) {
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                iVar2 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
                if (cRam0000000001916e67 == '\0') {
                  func_0x00a67900(&Main_TypeInfo);
                  cRam0000000001916e67 = '\x01';
                }
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                if (lVar5 == 0) goto LAB_00c0a774;
                if (iVar2 == *(int *)(lVar5 + 0xf4)) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0a774;
                  Menu__OOFKKAKFKEL(**(long **)(_Menu_TypeInfo + 0xb8),1,0);
                }
              }
            }
            else {
              DAFNMLEKHAD__HPDEBBJNCIK(pvVar7,0);
            }
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            SoundScript__GIGBLEBBIEK
                      (*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x60),0);
            if (*(long *)(lVar8 + 0x568) != 0) {
              cVar1 = *(char *)(*(long *)(lVar8 + 0x568) + 0x70);
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (cVar1 == '\0') {
                iVar2 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
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
                lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                if (lVar5 == 0) goto LAB_00c0a774;
                pvVar7 = (void *)DAFNMLEKHAD__DKJLCJPBPPN(lVar5,0xffffffff,1,0);
                lVar5 = *(long *)(lVar8 + 0x568);
                if (lVar5 == 0) goto LAB_00c0a774;
                iVar3 = *(int *)(lVar5 + 0x28);
                if (iVar2 == 0) {
                  iVar2 = ShopItem__EKBFKEBGGOP(lVar5,0);
                  if (pvVar7 == (void *)0x0) goto LAB_00c0a774;
                  MKCBGHDANLA__CMFJICHIMAH(pvVar7,iVar3,iVar2);
                  if (*(long *)(lVar8 + 0x568) == 0) goto LAB_00c0a774;
                  if (*(int *)(*(long *)(lVar8 + 0x568) + 0x28) == 3) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0a774;
                    *(undefined1 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x7b) = 1;
                  }
                }
                else {
                  if (pvVar7 == (void *)0x0) goto LAB_00c0a774;
                  MKCBGHDANLA__IFGGBDCPJDF(pvVar7,iVar3);
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0a774;
                uVar9 = Menu__INMDNKGHGEO(**(long **)(_Menu_TypeInfo + 0xb8),0);
                uVar9 = GUIGarage__APCBBBDNHKG(uVar9,*(undefined8 *)(lVar8 + 0x568));
                UnityEngine_MonoBehaviour__StartCoroutine(lVar8,uVar9,0);
              }
              else {
                if (cRam0000000001916e67 == '\0') {
                  func_0x00a67900(&Main_TypeInfo);
                  cRam0000000001916e67 = '\x01';
                }
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                if (lVar5 == 0) goto LAB_00c0a774;
                lVar5 = DAFNMLEKHAD__DKJLCJPBPPN(lVar5,0xffffffff,1,0);
                if ((*(long *)(lVar8 + 0x568) == 0) || (lVar5 == 0)) goto LAB_00c0a774;
                MKCBGHDANLA__LPHCCLPECIA(lVar5,*(undefined4 *)(*(long *)(lVar8 + 0x568) + 0x74),0);
                GUIGarage__ButtonColorPreview(lVar8,*(undefined8 *)(lVar8 + 0x568));
                uVar6 = Main__KCHOEBEIOCE(0);
                if ((uVar6 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (pvVar7 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58),
                     pvVar7 == (void *)0x0)) goto LAB_00c0a774;
                  GamePadController__KCAHLEAKNNK(pvVar7);
                }
              }
              lVar5 = *(long *)(lVar8 + 0x568);
              if (lVar5 != 0) {
                if (*(char *)(lVar5 + 0x70) == '\0') {
                  iVar2 = ShopItem__HJICMDCENKN(lVar5,0xffffffff,0);
                  if (*(long *)(lVar8 + 0x568) == 0) goto LAB_00c0a774;
                  iVar3 = ShopItem__EKBFKEBGGOP(*(long *)(lVar8 + 0x568),0);
                  if (iVar2 == iVar3) {
                    GUIGarage__KFELMMODBGC(lVar8);
                  }
                }
                if ((*(long *)(lVar8 + 0x98) != 0) &&
                   (lVar5 = UnityEngine_Component__get_gameObject(*(long *)(lVar8 + 0x98),0),
                   lVar5 != 0)) {
                  uVar6 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
                  if ((uVar6 & 1) == 0) {
                    return;
                  }
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                     (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 != 0)) {
                    AdvController__JJDJIEJLCFM(lVar5,0);
                    if (*(void **)(lVar8 + 0x98) != (void *)0x0) {
                      GUIWindow__JGDCBENNDFO(*(void **)(lVar8 + 0x98),true);
                      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar6 = Main__KCHOEBEIOCE(0);
                      if ((uVar6 & 1) == 0) {
                        return;
                      }
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      lVar8 = **(long **)(_Menu_TypeInfo + 0xb8);
                      if ((lVar8 != 0) && (*(long *)(lVar8 + 0x58) != 0)) {
                        if (*(char *)(*(long *)(lVar8 + 0x58) + 0x30) == '\0') {
                          return;
                        }
                        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                          lVar8 = **(long **)(_Menu_TypeInfo + 0xb8);
                          if (lVar8 == 0) goto LAB_00c0a774;
                        }
                        if (*(void **)(lVar8 + 0x58) != (void *)0x0) {
                          GamePadController__OJPBPDDLDGB(*(void **)(lVar8 + 0x58));
                          if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                             (pvVar7 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58),
                             pvVar7 != (void *)0x0)) {
                            GamePadController__KCAHLEAKNNK(pvVar7);
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
        }
      }
    }
  }
LAB_00c0a774:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void MEHOMCOOPFM() { }   @0xb38a48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__MEHOMCOOPFM(void *__this)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  double dVar7;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_28;
  
  if ((bRam00000000019170ef & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&System_TimeSpan_TypeInfo);
    func_0x00a67900(&Str__0___1_00___2_00_);
    bRam00000000019170ef = 1;
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
    uVar6 = *(undefined8 *)(lVar4 + 0xe0);
    if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = System_DateTime__get_Now(0);
    uStack_28 = System_DateTime__op_Subtraction(uVar6,uVar1,0);
    if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_System_TimeSpan_TypeInfo);
    }
    dVar7 = (double)System_TimeSpan__get_TotalSeconds(&uStack_28,0);
    lVar4 = *(long *)((long)__this + 0x20);
    if (lVar4 != 0) {
      if (0.0 <= dVar7) {
        plVar5 = *(long **)(lVar4 + 0x698);
        if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uStack_34 = System_TimeSpan__get_Hours(&uStack_28,0);
        uVar6 = func_0x00a67a38(_int_TypeInfo,&uStack_34);
        uStack_38 = System_TimeSpan__get_Minutes(&uStack_28,0);
        uVar1 = func_0x00a67a38(_int_TypeInfo,&uStack_38);
        uStack_3c = System_TimeSpan__get_Seconds(&uStack_28,0);
        uVar3 = func_0x00a67a38(_int_TypeInfo,&uStack_3c);
        uVar6 = System_String__Format(_Str__0___1_00___2_00_,uVar6,uVar1,uVar3,0);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x5b0));
          return;
        }
      }
      else if ((*(long *)(lVar4 + 0x688) != 0) &&
              (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar4 + 0x688),0), lVar4 != 0
              )) {
        uVar2 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
        if ((uVar2 & 1) == 0) {
          Menu__PPBIOKBJGPG(__this);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Update() { }   @0xb39298

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__Update(void *__this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  void *__this_00;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined4 uVar12;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_64;
  
  if ((bRam00000000019170f4 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170f4 = 1;
  }
  uVar9 = *(undefined8 *)((long)__this + 0x30);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(void **)((long)__this + 0x30) == (void *)0x0) goto LAB_00c393dc;
    NotificationsManager__HCLOPHBLMOI(*(void **)((long)__this + 0x30));
  }
  uVar9 = *(undefined8 *)((long)__this + 0x38);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)((long)__this + 0x38) == 0) {
LAB_00c393dc:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    AdvController__BDHEBIMMJNF(*(long *)((long)__this + 0x38),0);
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
    return;
  }
  Menu__IKHLIHGCCHH(__this);
  uVar7 = UnityEngine_Input__GetKeyDown(0x1b,0);
  if ((uVar7 & 1) != 0) {
    Menu__AFPLNBDNJHM(__this);
  }
  uVar7 = UnityEngine_Input__GetKeyDown(0x113,0);
  if ((uVar7 & 1) == 0) {
    uVar7 = UnityEngine_Input__GetKeyDown(0x114,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if ((bRam00000000019170fb & 1) == 0) {
      func_0x00a67900(&Main_TypeInfo);
      func_0x00a67900(&UnityEngine_Object_TypeInfo);
      bRam00000000019170fb = 1;
    }
    uVar9 = *(undefined8 *)((long)__this + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar9,0,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (((*(long *)((long)__this + 0x20) == 0) ||
        (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x78), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) {
LAB_00c398e8:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if ((*(long *)((long)__this + 0x20) == 0) ||
       (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x430), lVar6 == 0)) goto LAB_00c398e8;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) < 1) {
      return;
    }
    uVar7 = UnityEngine_Input__GetKey(0x130,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    if ((uVar7 & 1) == 0) {
      iVar2 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) + -1;
    }
    else {
      iVar2 = 0;
    }
    *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = iVar2;
    uVar12 = UnityEngine_Time__get_realtimeSinceStartup(0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar12;
  }
  else {
    if ((bRam00000000019170df & 1) == 0) {
      func_0x00a67900(&Main_TypeInfo);
      func_0x00a67900(&UnityEngine_Object_TypeInfo);
      bRam00000000019170df = 1;
    }
    uVar9 = *(undefined8 *)((long)__this + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar9,0,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (((*(long *)((long)__this + 0x20) == 0) ||
        (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x78), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) {
LAB_00c36c88:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if ((*(long *)((long)__this + 0x20) == 0) ||
       (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x1b0), lVar6 == 0)) goto LAB_00c36c88;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
    if ((*(long *)((long)__this + 0x20) == 0) ||
       (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x30), lVar6 == 0)) goto LAB_00c36c88;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar6 == 0))
    goto LAB_00c36c88;
    uVar7 = Car__NBMGBADFACE(0);
    iVar2 = -3;
    if ((uVar7 & 1) != 0) {
      iVar2 = -2;
    }
    iVar2 = iVar2 + *(int *)(lVar6 + 0x18);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (iVar2 <= *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c)) {
      return;
    }
    uVar7 = UnityEngine_Input__GetKey(0x130,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    if ((uVar7 & 1) == 0) {
      iVar2 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) + 1;
    }
    *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = iVar2;
    uVar12 = UnityEngine_Time__get_realtimeSinceStartup(0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar12;
  }
  if ((bRam00000000019170fa & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__get_Current__);
    func_0x00a67900(&Method_System_Collections_Generic_List_DJKGLJOCFCE__GetEnumerator__);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_EVENT_CAR_UNLOCK);
    func_0x00a67900(&Str_RefreshGarage);
    func_0x00a67900(&Str_LOCK_CAR_TEXT);
    func_0x00a67900(&Str_LOCK_CAR_IN_THIS_MODE);
    func_0x00a67900(&Str_CLAIM);
    func_0x00a67900(&Str___color_);
    func_0x00a67900(&Str__x_);
    func_0x00a67900(&Str__color__faaf32_);
    func_0x00a67900(&Str_EVENT_);
    bRam00000000019170fa = 1;
  }
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_64 = 0;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_RefreshGarage,0,0);
  if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
     (lVar6 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar6 == 0)) goto LAB_00c35de4;
  iVar2 = *(int *)(lVar6 + 0x18);
  plVar11 = (long *)((long)__this + 0x20);
  if (*plVar11 == 0) goto LAB_00c35de4;
  uVar9 = *(undefined8 *)(*plVar11 + 0x430);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar7 & 1) != 0) {
    if (*plVar11 == 0) goto LAB_00c35de4;
    lVar6 = *(long *)(*plVar11 + 0x430);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (lVar6 == 0) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive
              (lVar6,*(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) != 0,0);
  }
  if (*plVar11 == 0) goto LAB_00c35de4;
  uVar9 = *(undefined8 *)(*plVar11 + 0x420);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar7 & 1) != 0) {
    if (*plVar11 == 0) goto LAB_00c35de4;
    lVar6 = *(long *)(*plVar11 + 0x420);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iVar3 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
    uVar1 = Car__NBMGBADFACE(0);
    if (lVar6 == 0) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar6,iVar3 < (int)((iVar2 - (~uVar1 & 1)) + -2),0);
  }
  if ((*plVar11 == 0) || (lVar6 = *(long *)(*plVar11 + 0x428), lVar6 == 0)) goto LAB_00c35de4;
  UnityEngine_GameObject__SetActive(lVar6,0,0);
  if ((*plVar11 == 0) || (lVar6 = *(long *)(*plVar11 + 0x438), lVar6 == 0)) goto LAB_00c35de4;
  UnityEngine_GameObject__SetActive(lVar6,0,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = *(long *)(_Main_TypeInfo + 0xb8);
  lVar8 = *(long *)(lVar6 + 0x40);
  if (lVar8 != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar6 = *(long *)(_Main_TypeInfo + 0xb8);
      lVar8 = *(long *)(lVar6 + 0x40);
      if (lVar8 == 0) goto LAB_00c35de4;
    }
    if (*(int *)(lVar8 + 0x10) == 1) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar6 = *(long *)(_Main_TypeInfo + 0xb8);
      }
      if (*(int *)(lVar6 + 0x2c) == 1) {
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
        if (lVar6 == 0) goto LAB_00c35de4;
        lVar6 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar6,1,0);
        if (lVar6 != 0) {
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
          if ((lVar6 == 0) || (lVar6 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar6,1,0), lVar6 == 0))
          goto LAB_00c35de4;
          uVar7 = DJKGLJOCFCE__MCDLFBJCNNA(lVar6,0);
          if ((uVar7 & 1) == 0) {
            if ((*plVar11 == 0) || (lVar6 = *(long *)(*plVar11 + 0x430), lVar6 == 0))
            goto LAB_00c35de4;
            UnityEngine_GameObject__SetActive(lVar6,0,0);
          }
        }
      }
    }
  }
  if (*plVar11 == 0) goto LAB_00c35de4;
  GUIGarage__OHFNNEHCIEH(*plVar11,0);
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
  if (lVar6 == 0) goto LAB_00c35de4;
  iVar2 = -1;
  lVar6 = DAFNMLEKHAD__DKJLCJPBPPN(lVar6,0xffffffff,1,0);
  lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar8 == 0) {
LAB_00c35438:
    iVar3 = iVar2;
    if (lVar6 != 0) goto LAB_00c35448;
LAB_00c354c0:
    if ((*plVar11 == 0) || (lVar6 = *(long *)(*plVar11 + 0x478), lVar6 == 0)) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar6,1,0);
    if (*plVar11 == 0) goto LAB_00c35de4;
    GUIGarage__PHKCLDLDABM(*plVar11,0,0);
    if (iVar2 == -1) {
      lVar6 = Car__get_Current(0);
      if (lVar6 == 0) goto LAB_00c35de4;
      if (*(int *)(lVar6 + 0x44) != 0) goto LAB_00c3550c;
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
      if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x120), lVar6 == 0)) goto LAB_00c35de4;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                (lVar6,&lStack_a8,
                 _Method_System_Collections_Generic_List_DJKGLJOCFCE__GetEnumerator__);
      uStack_88 = uStack_a0;
      lStack_90 = lStack_a8;
      uStack_80 = uStack_98;
      uVar1 = 0;
      while (uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                               (&lStack_90,
                                _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__
                               ), (uVar7 & 1) != 0) {
        func_0x00b947ec(&lStack_90,&lStack_a8,
                        _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__get_Current__
                       );
        lVar6 = lStack_a8;
        if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        iVar3 = *(int *)(lStack_a8 + 0x10);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (iVar3 == *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) + -1) {
          uVar4 = DJKGLJOCFCE__MCDLFBJCNNA(lVar6,0);
          uVar1 = uVar1 | uVar4;
        }
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                (&lStack_90,
                 _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__);
      if ((uVar1 & 1) != 0) {
        uVar12 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar12;
        lVar6 = Car__get_Current(0);
        if ((lVar6 == 0) || (*plVar11 == 0)) goto LAB_00c35de4;
        plVar5 = *(long **)(*plVar11 + 0x488);
        if (*(int *)(lVar6 + 0x20) < 1) {
          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
             (uVar9 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_CLAIM), plVar5 == (long *)0x0)
             ) goto LAB_00c35de4;
          (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar9,*(undefined8 *)(*plVar5 + 0x5b0));
          if ((*plVar11 == 0) || (lVar6 = *(long *)(*plVar11 + 0x490), lVar6 == 0))
          goto LAB_00c35de4;
          UnityEngine_GameObject__SetActive(lVar6,0,0);
        }
        else {
          lVar6 = Car__get_Current(0);
          if ((lVar6 == 0) ||
             (uVar9 = System_Int32__ToString(lVar6 + 0x20,0), plVar5 == (long *)0x0))
          goto LAB_00c35de4;
          (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar9,*(undefined8 *)(*plVar5 + 0x5b0));
        }
        if ((*plVar11 == 0) || (lVar6 = *(long *)(*plVar11 + 0x480), lVar6 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar6,1,0);
        if ((*plVar11 == 0) || (lVar6 = *(long *)(*plVar11 + 0x4c0), lVar6 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar6,1,0);
        if ((*plVar11 == 0) || (lVar6 = *(long *)(*plVar11 + 0x498), lVar6 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar6,0,0);
        if ((*plVar11 == 0) || (lVar6 = *(long *)(*plVar11 + 0x4a0), lVar6 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar6,0,0);
        if ((*plVar11 == 0) || (lVar6 = *(long *)(*plVar11 + 0x4b8), lVar6 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar6,0,0);
        goto LAB_00c35704;
      }
      lVar6 = *plVar11;
      if (lVar6 == 0) goto LAB_00c35de4;
      *(undefined1 *)(lVar6 + 0x470) = 1;
      if (*(long *)(lVar6 + 0x480) == 0) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(*(long *)(lVar6 + 0x480),0,0);
      if ((*plVar11 == 0) || (lVar6 = *(long *)(*plVar11 + 0x498), lVar6 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar6,0,0);
      if ((*plVar11 == 0) || (lVar6 = *(long *)(*plVar11 + 0x4a0), lVar6 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar6,0,0);
      if ((*plVar11 == 0) || (lVar6 = *(long *)(*plVar11 + 0x4c0), lVar6 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar6,1,0);
      if ((*plVar11 == 0) || (lVar6 = *(long *)(*plVar11 + 0x4b8), lVar6 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar6,1,0);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c35de4;
      lVar6 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_LOCK_CAR_TEXT);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      uVar9 = System_Int32__ToString(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c,0);
LAB_00c35640:
      uVar9 = System_String__Concat(_Str__color__faaf32_,uVar9,_Str___color_,0);
      if (lVar6 == 0) goto LAB_00c35de4;
      uVar9 = System_String__Replace(lVar6,_Str__x_,uVar9,0);
      if ((*plVar11 == 0) || (plVar5 = *(long **)(*plVar11 + 0x4c8), plVar5 == (long *)0x0))
      goto LAB_00c35de4;
      lVar6 = *plVar5;
    }
    else {
LAB_00c3550c:
      lVar6 = Car__get_Current(0);
      if (((lVar6 == 0) || (*plVar11 == 0)) || (lVar8 = *(long *)(*plVar11 + 0x480), lVar8 == 0))
      goto LAB_00c35de4;
      iVar3 = *(int *)(lVar6 + 0x44);
      UnityEngine_GameObject__SetActive(lVar8,0,0);
      if ((*plVar11 == 0) || (lVar6 = *(long *)(*plVar11 + 0x498), lVar6 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar6,0,0);
      if ((*plVar11 == 0) || (lVar6 = *(long *)(*plVar11 + 0x4a0), lVar6 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar6,0,0);
      if ((*plVar11 == 0) || (lVar6 = *(long *)(*plVar11 + 0x4c0), lVar6 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar6,1,0);
      if ((*plVar11 == 0) || (lVar6 = *(long *)(*plVar11 + 0x4b8), lVar6 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar6,1,0);
      if (iVar3 != 0) {
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c35de4;
        lVar6 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_EVENT_CAR_UNLOCK);
        lVar10 = **(long **)(_Translate_TypeInfo + 0xb8);
        lVar8 = Car__get_Current(0);
        if (lVar8 == 0) goto LAB_00c35de4;
        uStack_64 = *(undefined4 *)(lVar8 + 0x44);
        uVar9 = System_Int32__ToString(&uStack_64,0);
        uVar9 = System_String__Concat(_Str_EVENT_,uVar9,0);
        if (lVar10 == 0) goto LAB_00c35de4;
        uVar9 = Translate__JJJNIPAKLJF(uVar9,uVar9);
        goto LAB_00c35640;
      }
      if (*plVar11 == 0) goto LAB_00c35de4;
      plVar5 = *(long **)(*plVar11 + 0x4c8);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
         (uVar9 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_LOCK_CAR_IN_THIS_MODE),
         plVar5 == (long *)0x0)) goto LAB_00c35de4;
      lVar6 = *plVar5;
    }
    (**(code **)(lVar6 + 0x5a8))(plVar5,uVar9,*(undefined8 *)(lVar6 + 0x5b0));
  }
  else {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
      lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar8 == 0) goto LAB_00c35de4;
    }
    if (99 < *(int *)(lVar8 + 0x10)) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
        lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar8 == 0) goto LAB_00c35de4;
      }
      if (*(long *)(lVar8 + 0x50) == 0) goto LAB_00c35de4;
      iVar2 = EventContest__get_car_id(*(long *)(lVar8 + 0x50),0);
      if (-1 < iVar2) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x50), lVar8 == 0)) goto LAB_00c35de4;
        iVar2 = EventContest__get_car_id(lVar8,0);
        goto LAB_00c35438;
      }
    }
    iVar2 = -1;
    iVar3 = -1;
    if (lVar6 == 0) goto LAB_00c354c0;
LAB_00c35448:
    iVar2 = iVar3;
    if (iVar2 != -1) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x50), lVar8 == 0)) goto LAB_00c35de4;
      iVar3 = EventContest__get_car_id(lVar8,0);
      if (iVar3 != *(int *)(lVar6 + 0x10)) goto LAB_00c354c0;
    }
    if ((*plVar11 == 0) || (lVar6 = *(long *)(*plVar11 + 0x478), lVar6 == 0)) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar6,0,0);
    if (*plVar11 == 0) goto LAB_00c35de4;
    GUIGarage__PHKCLDLDABM(*plVar11,1,0);
  }
LAB_00c35704:
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = *(long *)(_Main_TypeInfo + 0xb8);
  if (*(long *)(lVar6 + 0x40) != 0) {
    if (iVar2 == -1) {
      lVar6 = Car__get_Current(0);
      if (lVar6 == 0) goto LAB_00c35de4;
      if (*(int *)(lVar6 + 0x44) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        plVar5 = *(long **)(_Main_TypeInfo + 0xb8);
        lVar6 = plVar5[8];
        if (lVar6 == 0) goto LAB_00c35de4;
        if (0 < *(int *)(lVar6 + 0x10)) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            plVar5 = *(long **)(_Main_TypeInfo + 0xb8);
            lVar6 = plVar5[8];
            if (lVar6 == 0) goto LAB_00c35de4;
          }
          if ((*plVar5 == 0) || (lVar8 = *(long *)(*plVar5 + 0x28), lVar8 == 0)) goto LAB_00c35de4;
          if (*(int *)(lVar6 + 0x10) < *(int *)(lVar8 + 0x18)) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              plVar5 = *(long **)(_Main_TypeInfo + 0xb8);
              lVar6 = plVar5[8];
              if (lVar6 == 0) goto LAB_00c35de4;
            }
            if (*(int *)((long)plVar5 + 0x2c) != *(int *)(lVar6 + 0x10)) {
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
              lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
              if ((lVar6 == 0) ||
                 (lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar8 == 0))
              goto LAB_00c35de4;
              lVar6 = DAFNMLEKHAD__DKJLCJPBPPN(lVar8,*(undefined4 *)(lVar6 + 0x10),1,0);
              if (lVar6 == 0) {
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
                __this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                if (__this_00 == (void *)0x0) goto LAB_00c35de4;
                iVar2 = DAFNMLEKHAD__LOCFCFJIAIH(__this_00);
                plVar5 = *(long **)(_Main_TypeInfo + 0xb8);
                if (((*plVar5 == 0) || (lVar6 = plVar5[8], lVar6 == 0)) ||
                   (lVar8 = *(long *)(*plVar5 + 0x28), lVar8 == 0)) goto LAB_00c35de4;
                if (*(uint *)(lVar8 + 0x18) <= *(uint *)(lVar6 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                lVar8 = *(long *)(lVar8 + (long)(int)*(uint *)(lVar6 + 0x10) * 8 + 0x20);
                if (lVar8 == 0) goto LAB_00c35de4;
                if (*(int *)(lVar8 + 0x20) <= iVar2) {
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_Main_TypeInfo);
                    plVar5 = *(long **)(_Main_TypeInfo + 0xb8);
                    lVar6 = plVar5[8];
                    if (lVar6 == 0) goto LAB_00c35de4;
                  }
                  lVar8 = *plVar11;
                  if (lVar8 == 0) goto LAB_00c35de4;
                  if (*(int *)(lVar6 + 0x10) < *(int *)((long)plVar5 + 0x2c)) {
                    lVar6 = *(long *)(lVar8 + 0x438);
                    *(undefined1 *)(lVar8 + 0x470) = 1;
                  }
                  else {
                    lVar6 = *(long *)(lVar8 + 0x428);
                    *(undefined1 *)(lVar8 + 0x471) = 1;
                  }
                  if (lVar6 == 0) goto LAB_00c35de4;
                  UnityEngine_GameObject__SetActive(lVar6,1,0);
                }
              }
            }
          }
        }
      }
    }
    else {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar6 = *(long *)(_Main_TypeInfo + 0xb8);
      }
      if (iVar2 != *(int *)(lVar6 + 0x2c)) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar6 = *plVar11;
        if (lVar6 == 0) goto LAB_00c35de4;
        if (iVar2 < *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c)) {
          *(undefined1 *)(lVar6 + 0x470) = 1;
        }
        else {
          *(undefined1 *)(lVar6 + 0x471) = 1;
        }
      }
    }
  }
  if (*plVar11 != 0) {
    plVar5 = *(long **)(*plVar11 + 1000);
    lVar6 = Car__get_Current(0);
    if ((lVar6 != 0) && (plVar5 != (long *)0x0)) {
      (**(code **)(*plVar5 + 0x5a8))
                (plVar5,*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(*plVar5 + 0x5b0));
      if (*plVar11 != 0) {
        GUIGarage__FJCMAMFOKNL(*plVar11,0);
        Menu__CKPDEIAFHEC();
        Menu__CDFHCNMGCFI(__this);
        Menu__INMDNKGHGEO(__this);
        Menu__FMEHJALLGBK(__this);
        uVar9 = *(undefined8 *)((long)__this + 0x70);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar9,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(long *)((long)__this + 0x70) == 0) goto LAB_00c35de4;
          ConsoleTipsBottom__ABIEFKKDOGK(*(long *)((long)__this + 0x70),0);
        }
        return;
      }
    }
  }
LAB_00c35de4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void KJDAFBPKLLF() { }   @0xb39bf8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__KJDAFBPKLLF(void *__this)

{
  long lVar1;
  
  if (*(long *)((long)__this + 0x20) != 0) {
    GUIGarage__GOKBDNDJPBA(*(long *)((long)__this + 0x20),1,1,1,0);
    if ((*(long *)((long)__this + 0x20) != 0) &&
       (lVar1 = *(long *)(*(long *)((long)__this + 0x20) + 0x88), lVar1 != 0)) {
      GUIWindow__HEGIHOAJOKK(lVar1,1,0);
      *(undefined1 *)((long)__this + 0x7a) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void CheatDetect() { }   @0xb39f28

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__CheatDetect(void *__this)

{
  void *FJBLHMNOPEP;
  ulong uVar1;
  void *__this_00;
  undefined8 uVar2;
  long lVar3;
  undefined4 auStack_38 [2];
  
  if ((bRam00000000019170fc & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    func_0x00a67900(&Str_Shit__Cheater_is_here_);
    bRam00000000019170fc = 1;
  }
  auStack_38[0] = 0;
  if (*(char *)((long)__this + 0x99) == '\0') {
    *(undefined1 *)((long)__this + 0x99) = 1;
    uVar2 = *(undefined8 *)((long)__this + 0x40);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)((long)__this + 0x40);
      if (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      auStack_38[0] = UnityEngine_SceneManagement_SceneManager__GetActiveScene(0);
      uVar2 = UnityEngine_SceneManagement_Scene__get_name(auStack_38,0);
      if (lVar3 == 0) goto LAB_00c3a154;
      AnalyticsController__DCAKJGANLFG(lVar3,uVar2,0);
    }
    FJBLHMNOPEP = _Str_Shit__Cheater_is_here_;
    uVar2 = *(undefined8 *)((long)__this + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) {
LAB_00c3a154:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar2 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
        if ((uVar1 & 1) != 0) {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (__this_00 = *(void **)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
             __this_00 == (void *)0x0)) goto LAB_00c3a154;
          GUIGameplay__HNKHJLDJMHB(__this_00,FJBLHMNOPEP,1,false,true);
        }
      }
    }
    else {
      if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c3a154;
      GUIGarage__DAOLEOLDHGN(*(long *)((long)__this + 0x20),FJBLHMNOPEP,0);
    }
    uVar2 = Menu__HNBGLFPDGMH();
    UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar2,0);
  }
  return;
}


// ==== private void OnApplicationPause(bool HNCPGIHKOML) { }   @0xb3aac0

/* WARNING: Removing unreachable block (ram,0x00c60f74) */
/* WARNING: Removing unreachable block (ram,0x00c60f88) */
/* WARNING: Removing unreachable block (ram,0x00c60f90) */
/* WARNING: Removing unreachable block (ram,0x00c60f9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__OnApplicationPause(void *__this,bool HNCPGIHKOML)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  void *__this_00;
  undefined8 uVar8;
  long lVar9;
  byte bVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 uVar13;
  
  if ((bRam0000000001917101 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917101 = 1;
  }
  if (!HNCPGIHKOML) {
    uVar8 = *(undefined8 *)((long)__this + 0x28);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c3ac3c;
      FuelManager__AFCKJABEJKI(*(long *)((long)__this + 0x28),0);
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
    pvVar5 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (pvVar5 != (void *)0x0) {
      bVar2 = DAFNMLEKHAD__PHOGLOAEGLO(pvVar5);
      if (bVar2) {
        if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        NotificationsManager__CMOPLEDPKKH(0,0);
      }
      uVar8 = *(undefined8 *)((long)__this + 0xa0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      lVar9 = *(long *)((long)__this + 0xa0);
      if (lVar9 != 0) {
        *(undefined1 *)(lVar9 + 0x2c) = 1;
        *(undefined4 *)(lVar9 + 0x30) = 0;
        if (pcRam000000000191c328 == (code *)0x0) {
          pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
        }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191c328)(lVar9,1);
        return;
      }
    }
LAB_00c3ac3c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam0000000001917106 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917106 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) {
LAB_00c335c0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar8 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) != '\0') {
    return;
  }
  fVar12 = (float)UnityEngine_Time__get_timeScale(0);
  if (fVar12 <= 0.0) {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
     (pvVar5 = *(void **)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), pvVar5 == (void *)0x0
     )) goto LAB_00c335c0;
  *(undefined1 *)((long)pvVar5 + 0x3f1) = 1;
  if ((bRam000000000191721e & 1) == 0) {
    func_0x00a67900(&AdvController_TypeInfo,0,0);
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&GUIGameplay_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam000000000191721e = 1;
  }
  *(undefined1 *)((long)pvVar5 + 0xbc) = 0;
  *(undefined4 *)((long)pvVar5 + 0xb8) = 0;
  fVar12 = (float)UnityEngine_Time__get_timeScale(0);
  if (0.0 < fVar12) {
    UnityEngine_Time__set_timeScale(0,0);
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) != 0) {
    uVar8 = *(undefined8 *)((long)pvVar5 + 0x3d8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar8,0,0);
    if ((uVar4 & 1) != 0) {
      uVar8 = *(undefined8 *)((long)pvVar5 + 0x3e0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)((long)pvVar5 + 0x3e0) == 0) goto LAB_00c6153c;
        uVar4 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)pvVar5 + 0x3e0),0);
        if ((uVar4 & 1) != 0) {
          *(undefined8 *)((long)pvVar5 + 0x3d8) = *(undefined8 *)((long)pvVar5 + 0x3e0);
        }
      }
      uVar8 = *(undefined8 *)((long)pvVar5 + 1000);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)((long)pvVar5 + 1000) == 0) goto LAB_00c6153c;
        uVar4 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)pvVar5 + 1000),0);
        if ((uVar4 & 1) != 0) {
          *(undefined8 *)((long)pvVar5 + 0x3d8) = *(undefined8 *)((long)pvVar5 + 1000);
        }
      }
    }
    uVar8 = *(undefined8 *)((long)pvVar5 + 0x3d8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar4 & 1) != 0) {
      uVar8 = *(undefined8 *)((long)pvVar5 + 0x3d8);
      uVar11 = *(undefined8 *)((long)pvVar5 + 0x3e0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Equality(uVar8,uVar11,0);
      if ((uVar4 & 1) == 0) {
        bVar10 = 1;
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        bVar10 = *(byte *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x34);
      }
      lVar9 = *(long *)((long)pvVar5 + 0x3d8);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar6 == 0) goto LAB_00c6153c;
      bVar1 = Level__get_IsEvent(lVar6,0);
      bVar10 = bVar10 & (bVar1 ^ 0xff);
      lVar6 = lVar9;
      if ((bVar10 & 1) != 0) {
        lVar6 = 0;
      }
      if ((bVar10 & 1) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar7 == 0) goto LAB_00c6153c;
        uVar4 = Level__get_IsEvent(lVar7,0);
        if ((uVar4 & 1) == 0) {
          bVar2 = false;
          lVar6 = lVar9;
        }
        else {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if (lVar9 == 0) goto LAB_00c6153c;
          if (*(long *)(lVar9 + 0x50) == 0) {
            bVar2 = false;
          }
          else {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
              if (lVar9 == 0) goto LAB_00c6153c;
            }
            if (*(long *)(lVar9 + 0x50) == 0) goto LAB_00c6153c;
            iVar3 = EventContest__get_TimeLeft(*(long *)(lVar9 + 0x50),0);
            bVar2 = 300 < iVar3;
          }
        }
      }
      else {
        bVar2 = true;
        lVar6 = lVar9;
      }
      if (lVar6 == 0) goto LAB_00c6153c;
      UnityEngine_GameObject__SetActive(lVar6,bVar2,0);
    }
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
  __this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (__this_00 == (void *)0x0) goto LAB_00c6153c;
  bVar2 = DAFNMLEKHAD__BMMOMBGDEKF(__this_00);
  if (bVar2) {
    if ((*(long *)((long)pvVar5 + 0x20) == 0) ||
       (lVar9 = *(long *)(*(long *)((long)pvVar5 + 0x20) + 0x48), lVar9 == 0)) goto LAB_00c6153c;
    uVar4 = UnityEngine_AudioSource__get_isPlaying(lVar9,0);
    if ((uVar4 & 1) != 0) {
      if ((*(long *)((long)pvVar5 + 0x20) == 0) ||
         (lVar9 = *(long *)(*(long *)((long)pvVar5 + 0x20) + 0x48), lVar9 == 0)) goto LAB_00c6153c;
      UnityEngine_AudioSource__Pause(lVar9,0);
    }
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
  lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar9 == 0) goto LAB_00c6153c;
  uVar4 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar9,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar9 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
    if (lVar9 == 0) goto LAB_00c6153c;
    uVar4 = UnityEngine_AudioSource__get_isPlaying(lVar9,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar9 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
      if (lVar9 == 0) goto LAB_00c6153c;
      UnityEngine_AudioSource__Pause(lVar9,0);
    }
  }
  if (*(char *)(*(long *)(_AdvController_TypeInfo + 0xb8) + 8) == '\0') {
    if (*(long *)((long)pvVar5 + 0x438) == 0) goto LAB_00c6153c;
    uVar4 = UnityEngine_GameObject__get_activeInHierarchy(*(long *)((long)pvVar5 + 0x438),0);
    if ((uVar4 & 1) == 0) {
      uVar13 = UnityEngine_AudioListener__get_volume(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x14) = uVar13;
      UnityEngine_AudioListener__set_volume(0,0);
    }
  }
  if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(long *)((long)pvVar5 + 0x410) == 0) goto LAB_00c6153c;
  iVar3 = *(int *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4);
  if (iVar3 < *(int *)(*(long *)((long)pvVar5 + 0x410) + 0x18)) {
    if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      if (-1 < *(int *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4)) goto LAB_00c61404;
      goto LAB_00c6147c;
    }
    if (iVar3 < 0) goto LAB_00c6147c;
LAB_00c61404:
    if ((*(long *)((long)pvVar5 + 0x50) == 0) ||
       (lVar9 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar5 + 0x50),0), lVar9 == 0)
       ) goto LAB_00c6153c;
    uVar4 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
    if ((uVar4 & 1) == 0) goto LAB_00c6147c;
    if ((*(long *)((long)pvVar5 + 0x78) == 0) ||
       (lVar9 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar5 + 0x78),0), lVar9 == 0)
       ) goto LAB_00c6153c;
    uVar4 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
    if ((uVar4 & 1) == 0) goto LAB_00c6147c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xb) = 1;
    if (*(void **)((long)pvVar5 + 0x50) == (void *)0x0) goto LAB_00c6153c;
    GUIWindow__JGDCBENNDFO(*(void **)((long)pvVar5 + 0x50),false);
  }
  else {
LAB_00c6147c:
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xb) = 0;
  }
  GUIGameplay__CBFONCCJIEE(pvVar5);
  GUIGameplay__LLAEHJGOFLG(pvVar5);
  GUIGameplay__IMJEJKHBIMO(pvVar5);
  GUIGameplay__ODHAOMJKKAE(pvVar5);
  lVar9 = *(long *)((long)pvVar5 + 0x68);
  if (*(char *)((long)pvVar5 + 0x3f1) == '\0') {
    if (lVar9 == 0) goto LAB_00c6153c;
  }
  else {
    if (lVar9 == 0) goto LAB_00c6153c;
    *(undefined1 *)(lVar9 + 0x21) = 0;
    *(undefined1 *)(lVar9 + 0x23) = 0;
  }
  GUIWindow__HEGIHOAJOKK(lVar9,0,0);
  if (*(char *)((long)pvVar5 + 0x3f1) != '\0') {
    lVar9 = *(long *)((long)pvVar5 + 0x68);
    if (lVar9 == 0) {
LAB_00c6153c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    *(undefined1 *)(lVar9 + 0x21) = 1;
    *(undefined1 *)(lVar9 + 0x23) = 1;
  }
  *(undefined1 *)((long)pvVar5 + 0x3f1) = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 10) = 1;
  return;
}


// ==== public void DEEFHDJMBAC() { }   @0xb3343c

/* WARNING: Removing unreachable block (ram,0x00c60f74) */
/* WARNING: Removing unreachable block (ram,0x00c60f88) */
/* WARNING: Removing unreachable block (ram,0x00c60f90) */
/* WARNING: Removing unreachable block (ram,0x00c60f9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__DEEFHDJMBAC(void *__this)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  void *__this_00;
  long lVar5;
  long lVar6;
  void *__this_01;
  undefined8 uVar7;
  long lVar8;
  byte bVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  
  if ((bRam0000000001917106 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917106 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) {
LAB_00c335c0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) != '\0') {
    return;
  }
  fVar11 = (float)UnityEngine_Time__get_timeScale(0);
  if (fVar11 <= 0.0) {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
     (__this_00 = *(void **)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
     __this_00 == (void *)0x0)) goto LAB_00c335c0;
  *(undefined1 *)((long)__this_00 + 0x3f1) = 1;
  if ((bRam000000000191721e & 1) == 0) {
    func_0x00a67900(&AdvController_TypeInfo,0,0);
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&GUIGameplay_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam000000000191721e = 1;
  }
  *(undefined1 *)((long)__this_00 + 0xbc) = 0;
  *(undefined4 *)((long)__this_00 + 0xb8) = 0;
  fVar11 = (float)UnityEngine_Time__get_timeScale(0);
  if (0.0 < fVar11) {
    UnityEngine_Time__set_timeScale(0,0);
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) != 0) {
    uVar7 = *(undefined8 *)((long)__this_00 + 0x3d8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar7,0,0);
    if ((uVar4 & 1) != 0) {
      uVar7 = *(undefined8 *)((long)__this_00 + 0x3e0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)((long)__this_00 + 0x3e0) == 0) goto LAB_00c6153c;
        uVar4 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this_00 + 0x3e0),0);
        if ((uVar4 & 1) != 0) {
          *(undefined8 *)((long)__this_00 + 0x3d8) = *(undefined8 *)((long)__this_00 + 0x3e0);
        }
      }
      uVar7 = *(undefined8 *)((long)__this_00 + 1000);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)((long)__this_00 + 1000) == 0) goto LAB_00c6153c;
        uVar4 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this_00 + 1000),0);
        if ((uVar4 & 1) != 0) {
          *(undefined8 *)((long)__this_00 + 0x3d8) = *(undefined8 *)((long)__this_00 + 1000);
        }
      }
    }
    uVar7 = *(undefined8 *)((long)__this_00 + 0x3d8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar4 & 1) != 0) {
      uVar7 = *(undefined8 *)((long)__this_00 + 0x3d8);
      uVar10 = *(undefined8 *)((long)__this_00 + 0x3e0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Equality(uVar7,uVar10,0);
      if ((uVar4 & 1) == 0) {
        bVar9 = 1;
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        bVar9 = *(byte *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x34);
      }
      lVar8 = *(long *)((long)__this_00 + 0x3d8);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar5 == 0) goto LAB_00c6153c;
      bVar1 = Level__get_IsEvent(lVar5,0);
      bVar9 = bVar9 & (bVar1 ^ 0xff);
      lVar5 = lVar8;
      if ((bVar9 & 1) != 0) {
        lVar5 = 0;
      }
      if ((bVar9 & 1) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar6 == 0) goto LAB_00c6153c;
        uVar4 = Level__get_IsEvent(lVar6,0);
        if ((uVar4 & 1) == 0) {
          bVar2 = false;
          lVar5 = lVar8;
        }
        else {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if (lVar8 == 0) goto LAB_00c6153c;
          if (*(long *)(lVar8 + 0x50) == 0) {
            bVar2 = false;
          }
          else {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
              if (lVar8 == 0) goto LAB_00c6153c;
            }
            if (*(long *)(lVar8 + 0x50) == 0) goto LAB_00c6153c;
            iVar3 = EventContest__get_TimeLeft(*(long *)(lVar8 + 0x50),0);
            bVar2 = 300 < iVar3;
          }
        }
      }
      else {
        bVar2 = true;
        lVar5 = lVar8;
      }
      if (lVar5 == 0) goto LAB_00c6153c;
      UnityEngine_GameObject__SetActive(lVar5,bVar2,0);
    }
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
  __this_01 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (__this_01 == (void *)0x0) goto LAB_00c6153c;
  bVar2 = DAFNMLEKHAD__BMMOMBGDEKF(__this_01);
  if (bVar2) {
    if ((*(long *)((long)__this_00 + 0x20) == 0) ||
       (lVar8 = *(long *)(*(long *)((long)__this_00 + 0x20) + 0x48), lVar8 == 0)) goto LAB_00c6153c;
    uVar4 = UnityEngine_AudioSource__get_isPlaying(lVar8,0);
    if ((uVar4 & 1) != 0) {
      if ((*(long *)((long)__this_00 + 0x20) == 0) ||
         (lVar8 = *(long *)(*(long *)((long)__this_00 + 0x20) + 0x48), lVar8 == 0))
      goto LAB_00c6153c;
      UnityEngine_AudioSource__Pause(lVar8,0);
    }
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
  lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar8 == 0) goto LAB_00c6153c;
  uVar4 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar8,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar8 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
    if (lVar8 == 0) goto LAB_00c6153c;
    uVar4 = UnityEngine_AudioSource__get_isPlaying(lVar8,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar8 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
      if (lVar8 == 0) goto LAB_00c6153c;
      UnityEngine_AudioSource__Pause(lVar8,0);
    }
  }
  if (*(char *)(*(long *)(_AdvController_TypeInfo + 0xb8) + 8) == '\0') {
    if (*(long *)((long)__this_00 + 0x438) == 0) goto LAB_00c6153c;
    uVar4 = UnityEngine_GameObject__get_activeInHierarchy(*(long *)((long)__this_00 + 0x438),0);
    if ((uVar4 & 1) == 0) {
      uVar12 = UnityEngine_AudioListener__get_volume(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x14) = uVar12;
      UnityEngine_AudioListener__set_volume(0,0);
    }
  }
  if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(long *)((long)__this_00 + 0x410) == 0) goto LAB_00c6153c;
  iVar3 = *(int *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4);
  if (iVar3 < *(int *)(*(long *)((long)__this_00 + 0x410) + 0x18)) {
    if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      if (-1 < *(int *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4)) goto LAB_00c61404;
      goto LAB_00c6147c;
    }
    if (iVar3 < 0) goto LAB_00c6147c;
LAB_00c61404:
    if ((*(long *)((long)__this_00 + 0x50) == 0) ||
       (lVar8 = UnityEngine_Component__get_gameObject(*(long *)((long)__this_00 + 0x50),0),
       lVar8 == 0)) goto LAB_00c6153c;
    uVar4 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
    if ((uVar4 & 1) == 0) goto LAB_00c6147c;
    if ((*(long *)((long)__this_00 + 0x78) == 0) ||
       (lVar8 = UnityEngine_Component__get_gameObject(*(long *)((long)__this_00 + 0x78),0),
       lVar8 == 0)) goto LAB_00c6153c;
    uVar4 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
    if ((uVar4 & 1) == 0) goto LAB_00c6147c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xb) = 1;
    if (*(void **)((long)__this_00 + 0x50) == (void *)0x0) goto LAB_00c6153c;
    GUIWindow__JGDCBENNDFO(*(void **)((long)__this_00 + 0x50),false);
  }
  else {
LAB_00c6147c:
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xb) = 0;
  }
  GUIGameplay__CBFONCCJIEE(__this_00);
  GUIGameplay__LLAEHJGOFLG(__this_00);
  GUIGameplay__IMJEJKHBIMO(__this_00);
  GUIGameplay__ODHAOMJKKAE(__this_00);
  lVar8 = *(long *)((long)__this_00 + 0x68);
  if (*(char *)((long)__this_00 + 0x3f1) == '\0') {
    if (lVar8 == 0) goto LAB_00c6153c;
  }
  else {
    if (lVar8 == 0) goto LAB_00c6153c;
    *(undefined1 *)(lVar8 + 0x21) = 0;
    *(undefined1 *)(lVar8 + 0x23) = 0;
  }
  GUIWindow__HEGIHOAJOKK(lVar8,0,0);
  if (*(char *)((long)__this_00 + 0x3f1) != '\0') {
    lVar8 = *(long *)((long)__this_00 + 0x68);
    if (lVar8 == 0) {
LAB_00c6153c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    *(undefined1 *)(lVar8 + 0x21) = 1;
    *(undefined1 *)(lVar8 + 0x23) = 1;
  }
  *(undefined1 *)((long)__this_00 + 0x3f1) = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 10) = 1;
  return;
}



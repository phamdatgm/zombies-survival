// ==== private void LAFACBFLFLF() { }   @0xb32920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__LAFACBFLFLF(void *__this)

{
  void *__this_00;
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam00000000019170d0 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    bRam00000000019170d0 = 1;
  }
  if ((*(long *)((long)__this + 0x20) != 0) &&
     (__this_00 = *(void **)(*(long *)((long)__this + 0x20) + 0x90), __this_00 != (void *)0x0)) {
    GUIWindow__HEGIHOAJOKK(__this_00,true);
    if ((*(long *)((long)__this + 0x20) != 0) &&
       (lVar1 = *(long *)(*(long *)((long)__this + 0x20) + 0x580), lVar1 != 0)) {
      UnityEngine_GameObject__SetActive(lVar1,1,0);
      if (((*(long *)((long)__this + 0x20) != 0) &&
          (lVar1 = *(long *)(*(long *)((long)__this + 0x20) + 0x550), lVar1 != 0)) &&
         (lVar1 = UnityEngine_Component__get_gameObject(lVar1,0), lVar1 != 0)) {
        UnityEngine_GameObject__SetActive(lVar1,1,0);
        lVar1 = *(long *)((long)__this + 0x20);
        if ((lVar1 != 0) && (*(long *)(lVar1 + 0x78) != 0)) {
          UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                    (*(long *)(lVar1 + 0x78),&uStack_18,
                     _Method_UnityEngine_Component_GetComponent_RectTransform___);
          *(undefined8 *)(lVar1 + 0x558) = uStack_18;
          if ((*(long *)((long)__this + 0x20) != 0) &&
             (lVar1 = *(long *)(*(long *)((long)__this + 0x20) + 0x578), lVar1 != 0)) {
            lVar1 = UnityEngine_Component__get_transform(lVar1,0);
            if ((*(long *)((long)__this + 0x20) != 0) && (lVar1 != 0)) {
              UnityEngine_Transform__SetParent
                        (lVar1,*(undefined8 *)(*(long *)((long)__this + 0x20) + 0x550),0);
              if (*(long *)((long)__this + 0x20) != 0) {
                GUIGarage__EEOMMEJNEOF(*(long *)((long)__this + 0x20),0,0);
                if ((*(long *)((long)__this + 0x20) != 0) &&
                   (lVar1 = *(long *)(*(long *)((long)__this + 0x20) + 0x578), lVar1 != 0)) {
                  UnityEngine_UI_Selectable__set_interactable(lVar1,1,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private bool PNMOPPJFFDF() { }   @0xb33150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Menu__PNMOPPJFFDF(void *__this)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  void *__this_00;
  long lVar7;
  ulong uVar8;
  void *__this_01;
  bool bVar9;
  uint uVar10;
  
  if ((bRam00000000019170d3 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_is_garage_tutorial_already_completed);
    bRam00000000019170d3 = 1;
  }
  cVar2 = *(char *)((long)__this + 0x79);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (cVar2 != '\0') {
    Main__GEMDEAMAGPG(_Str_is_garage_tutorial_already_completed,false);
    return false;
  }
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar6 != 0) {
    __this_00 = (void *)DAFNMLEKHAD__DKJLCJPBPPN(lVar6,0xffffffff,1,0);
    if (__this_00 == (void *)0x0) {
      return false;
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) != 0) {
      return false;
    }
    if ((*(long *)((long)__this + 0x20) != 0) &&
       (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x560), lVar6 != 0)) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if ((int)uVar1 < 1) {
        return false;
      }
      uVar10 = 0;
      bVar9 = false;
      do {
        if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        __this_01 = *(void **)(lVar6 + (long)(int)uVar10 * 8 + 0x20);
        if (__this_01 == (void *)0x0) break;
        if (*(int *)((long)__this_01 + 0x28) == 3) {
LAB_00c33324:
          iVar3 = ShopItem__HJICMDCENKN(__this_01,0xffffffff,0);
          if (iVar3 == 5) {
            if (*(int *)((long)__this_01 + 0x28) == 4) {
              *(undefined1 *)((long)__this + 0x79) = 1;
              return bVar9;
            }
          }
          else {
            uVar4 = ShopItem__HJICMDCENKN(__this_01,0xffffffff,0);
            uVar8 = ShopItem__MLHKDEGPJGI(__this_01,uVar4,0);
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
            lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
            if (lVar7 == 0) break;
            if ((uVar8 & 1) == 0) {
              iVar3 = DAFNMLEKHAD__LOCFCFJIAIH(lVar7,0);
            }
            else {
              iVar3 = DAFNMLEKHAD__HPDEBBJNCIK();
            }
            iVar5 = ShopItem__HJICMDCENKN(__this_01,0xffffffff,0);
            iVar5 = ShopItem__OKADMIPJHCA(__this_01,iVar5);
            if (iVar5 <= iVar3) {
              bVar9 = true;
            }
          }
        }
        else if ((*(int *)((long)__this_01 + 0x28) == 4) &&
                (iVar3 = MKCBGHDANLA__IDOHKCCDGDG(__this_00,3), iVar3 == 5)) {
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
          lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if (lVar7 == 0) break;
          uVar8 = DAFNMLEKHAD__JHCIANGHEAK(lVar7,0);
          if ((uVar8 & 1) != 0) goto LAB_00c33324;
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar10 = uVar10 + 1;
        if ((int)uVar1 <= (int)uVar10) {
          return bVar9;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void IKMGHNEEKFG() { }   @0xb337ac

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__IKMGHNEEKFG(void *__this)

{
  *(undefined4 *)((long)__this + 0x9c) = 0;
  return;
}


// ==== public void NLDJOFLJDKJ(bool FJDCALHGHCI) { }   @0xb36314

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__NLDJOFLJDKJ(void *__this,bool FJDCALHGHCI)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((bRam00000000019170da & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    bRam00000000019170da = 1;
  }
  bVar4 = !FJDCALHGHCI;
  uVar1 = 0x3f800000;
  if (bVar4) {
    uVar1 = 0x3f0ccccd;
  }
  uVar2 = 0x3f800000;
  if (bVar4) {
    uVar2 = 0x3f170a3d;
  }
  uVar3 = 0x3f800000;
  if (bVar4) {
    uVar3 = 0x3f28f5c3;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
      (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 != 0)) &&
     (plVar5 = *(long **)(lVar9 + 0x2f8), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x2a8))
              (uVar1,uVar2,uVar3,0x3f800000,plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
    if (((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
        (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 != 0)) &&
       (lVar9 = *(long *)(lVar9 + 0x2e8), lVar9 != 0)) {
      if ((bRam000000000191ee9a & 1) == 0) {
        func_0x00a67900(&UnityEngine_EventSystems_EventSystem_TypeInfo,FJDCALHGHCI,0);
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        func_0x00a67900(&Method_UnityEngine_UI_SetPropertyUtility_SetStruct_bool___);
        bRam000000000191ee9a = 1;
      }
      uVar6 = UnityEngine_UI_SetPropertyUtility__SetStruct___Il2CppFullySharedGenericStructType_
                        ((char *)(lVar9 + 0xd8),&stack0xffffffffffffffdc,
                         _Method_UnityEngine_UI_SetPropertyUtility_SetStruct_bool___);
      if ((uVar6 & 1) != 0) {
        if (*(char *)(lVar9 + 0xd8) == '\0') {
          if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_EventSystems_EventSystem__get_current(0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar8 = UnityEngine_EventSystems_EventSystem__get_current(0);
            if (lVar8 == 0) {
LAB_016bdcf8:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            uVar10 = *(undefined8 *)(lVar8 + 0x40);
            uVar7 = UnityEngine_Component__get_gameObject(lVar9,0);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            uVar6 = UnityEngine_Object__op_Equality(uVar10,uVar7,0);
            if ((uVar6 & 1) != 0) {
              if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              lVar8 = UnityEngine_EventSystems_EventSystem__get_current(0);
              if (lVar8 == 0) goto LAB_016bdcf8;
              UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(lVar8,0,0);
            }
          }
        }
        UnityEngine_UI_Selectable__OnSetProperty(lVar9);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void AJGHCKKKEGE() { }   @0xb36694

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__AJGHCKKKEGE(void *__this)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam00000000019170dd & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170dd = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_CarController_TypeInfo + 0xb8) != 0) {
    uVar4 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
       (uVar2 = *(ulong *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), uVar2 != 0)) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar2;
      lVar5 = *(long *)(uVar2 + 0xc0);
      if (lVar5 == 0) {
LAB_00c60df8:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar1) {
        uVar6 = 0;
        do {
          if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58(auVar7._0_8_,auVar7._8_8_);
          }
          lVar3 = *(long *)(lVar5 + (long)(int)uVar6 * 8 + 0x20);
          if (lVar3 == 0) goto LAB_00c60df8;
          auVar7 = UnityEngine_GameObject__SetActive(lVar3,1,0);
          uVar1 = *(uint *)(lVar5 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar1);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public bool CEFAHBMMKCD() { }   @0xb36dd8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Menu__CEFAHBMMKCD(void *__this)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  void *__this_00;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam00000000019170e1 & 1) == 0) {
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170e1 = 1;
  }
  lVar4 = **(long **)(_GUIWindow_TypeInfo + 0xb8);
  lVar1 = (*(long **)(_GUIWindow_TypeInfo + 0xb8))[1];
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(lVar1,0,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(lVar4,0,0);
  if ((uVar3 & 1) == 0) {
LAB_00c36f10:
    bVar2 = false;
  }
  else {
    if (lVar4 == 0) goto LAB_00c36f0c;
    uVar5 = *(undefined8 *)(lVar4 + 0x28);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar3 & 1) == 0) {
      uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar3 & 1) == 0) goto LAB_00c36f10;
    }
    uVar5 = *(undefined8 *)(lVar4 + 0x28);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar3 & 1) == 0) {
      __this_00 = *(void **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    }
    else {
      __this_00 = *(void **)(lVar4 + 0x28);
    }
    if (__this_00 == (void *)0x0) {
LAB_00c36f0c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    GUIWindow__HEGIHOAJOKK(__this_00,false);
    bVar2 = true;
  }
  return bVar2;
}


// ==== public void ABLANDDDMOF() { }   @0xb379c4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__ABLANDDDMOF(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((bRam00000000019170e5 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170e5 = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = **(long **)(_CarController_TypeInfo + 0xb8);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x30) != 0)) {
      plVar4 = *(long **)(*(long *)(lVar2 + 0x30) + 0x2f8);
      uVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(lVar2 + 0x8c,0);
      if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c37aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x5a8))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x5b0));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  return;
}


// ==== public static bool JOPJDMLGDEF() { }   @0xb37f54

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Menu__JOPJDMLGDEF(void)

{
  return false;
}


// ==== private bool JLEEACEPDIE() { }   @0xb38684

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Menu__JLEEACEPDIE(void *__this)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uStack_18;
  
  if ((bRam00000000019170ec & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&System_TimeSpan_TypeInfo);
    bRam00000000019170ec = 1;
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
  lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0xe8);
    if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = System_DateTime__get_Now(0);
    uStack_18 = System_DateTime__op_Subtraction(uVar4,uVar2,0);
    if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_System_TimeSpan_TypeInfo);
    }
    dVar5 = (double)System_TimeSpan__get_TotalMinutes(&uStack_18,0);
    if (dVar5 < 0.0) {
      bVar1 = 1;
    }
    else {
      if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      bVar1 = UnityEngine_Application__get_isEditor(0);
    }
    return (bool)(bVar1 & 1);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public IEnumerator LBKMBBLLINK(bool IIDDLPGHBHD) { }   @0xb38ea8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Menu__LBKMBBLLINK(void *__this,bool IIDDLPGHBHD)

{
  void *pvVar1;
  
  if ((bRam00000000019170f1 & 1) == 0) {
    func_0x00a67900(&Menu_IGIGAHEKBHB_TypeInfo);
    bRam00000000019170f1 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_Menu_IGIGAHEKBHB_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x20) = __this;
  *(bool *)((long)pvVar1 + 0x28) = IIDDLPGHBHD;
  return pvVar1;
}


// ==== private static void .cctor() { }   @0xb39ac4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu___cctor(void)

{
  long lVar1;
  
  if ((bRam00000000019170f6 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam00000000019170f6 = 1;
  }
  lVar1 = *(long *)(_Menu_TypeInfo + 0xb8);
  *(undefined8 *)(lVar1 + 8) = 0x10100000000;
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined1 *)(lVar1 + 0x1a) = 0;
  *(undefined4 *)(lVar1 + 0x1c) = 0;
  *(undefined2 *)(lVar1 + 0x20) = 0x100;
  return;
}


// ==== public void OLOGKIHIIEL() { }   @0xb34f4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__OLOGKIHIIEL(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  uint uVar13;
  undefined4 uVar14;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_64;
  
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
  Main__GEMDEAMAGPG(_Str_RefreshGarage,false);
  if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
     (lVar9 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar9 == 0)) goto LAB_00c35de4;
  iVar2 = *(int *)(lVar9 + 0x18);
  plVar12 = (long *)((long)__this + 0x20);
  if (*plVar12 == 0) goto LAB_00c35de4;
  uVar11 = *(undefined8 *)(*plVar12 + 0x430);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if ((uVar5 & 1) != 0) {
    if (*plVar12 == 0) goto LAB_00c35de4;
    lVar9 = *(long *)(*plVar12 + 0x430);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (lVar9 == 0) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive
              (lVar9,*(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) != 0,0);
  }
  if (*plVar12 == 0) goto LAB_00c35de4;
  uVar11 = *(undefined8 *)(*plVar12 + 0x420);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if ((uVar5 & 1) != 0) {
    if (*plVar12 == 0) goto LAB_00c35de4;
    lVar9 = *(long *)(*plVar12 + 0x420);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iVar3 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
    bVar1 = Car__NBMGBADFACE();
    if (lVar9 == 0) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar9,iVar3 < (int)((iVar2 - (~(uint)bVar1 & 1)) + -2),0);
  }
  if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x428), lVar9 == 0)) goto LAB_00c35de4;
  UnityEngine_GameObject__SetActive(lVar9,0,0);
  if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x438), lVar9 == 0)) goto LAB_00c35de4;
  UnityEngine_GameObject__SetActive(lVar9,0,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar9 = *(long *)(_Main_TypeInfo + 0xb8);
  lVar10 = *(long *)(lVar9 + 0x40);
  if (lVar10 != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar9 = *(long *)(_Main_TypeInfo + 0xb8);
      lVar10 = *(long *)(lVar9 + 0x40);
      if (lVar10 == 0) goto LAB_00c35de4;
    }
    if (*(int *)(lVar10 + 0x10) == 1) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar9 = *(long *)(_Main_TypeInfo + 0xb8);
      }
      if (*(int *)(lVar9 + 0x2c) == 1) {
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
        if (lVar9 == 0) goto LAB_00c35de4;
        lVar9 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar9,1,0);
        if (lVar9 != 0) {
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
          if ((lVar9 == 0) || (lVar9 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar9,1,0), lVar9 == 0))
          goto LAB_00c35de4;
          uVar5 = DJKGLJOCFCE__MCDLFBJCNNA(lVar9,0);
          if ((uVar5 & 1) == 0) {
            if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x430), lVar9 == 0))
            goto LAB_00c35de4;
            UnityEngine_GameObject__SetActive(lVar9,0,0);
          }
        }
      }
    }
  }
  if (*plVar12 == 0) goto LAB_00c35de4;
  GUIGarage__OHFNNEHCIEH(*plVar12,0);
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
  if (lVar9 == 0) goto LAB_00c35de4;
  iVar2 = -1;
  lVar9 = DAFNMLEKHAD__DKJLCJPBPPN(lVar9,0xffffffff,1,0);
  lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar10 == 0) {
LAB_00c35438:
    iVar3 = iVar2;
    if (lVar9 != 0) goto LAB_00c35448;
LAB_00c354c0:
    if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x478), lVar9 == 0)) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar9,1,0);
    if (*plVar12 == 0) goto LAB_00c35de4;
    GUIGarage__PHKCLDLDABM(*plVar12,0,0);
    if (iVar2 == -1) {
      lVar9 = Car__get_Current(0);
      if (lVar9 == 0) goto LAB_00c35de4;
      if (*(int *)(lVar9 + 0x44) != 0) goto LAB_00c3550c;
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
      if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x120), lVar9 == 0)) goto LAB_00c35de4;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                (lVar9,&lStack_a8,
                 _Method_System_Collections_Generic_List_DJKGLJOCFCE__GetEnumerator__);
      uStack_88 = uStack_a0;
      lStack_90 = lStack_a8;
      uStack_80 = uStack_98;
      uVar13 = 0;
      while (uVar5 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                               (&lStack_90,
                                _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__
                               ), (uVar5 & 1) != 0) {
        func_0x00b947ec(&lStack_90,&lStack_a8,
                        _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__get_Current__
                       );
        lVar9 = lStack_a8;
        if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        iVar3 = *(int *)(lStack_a8 + 0x10);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (iVar3 == *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) + -1) {
          uVar4 = DJKGLJOCFCE__MCDLFBJCNNA(lVar9,0);
          uVar13 = uVar13 | uVar4;
        }
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                (&lStack_90,
                 _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__);
      if ((uVar13 & 1) != 0) {
        uVar14 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar14;
        lVar9 = Car__get_Current(0);
        if ((lVar9 == 0) || (*plVar12 == 0)) goto LAB_00c35de4;
        plVar8 = *(long **)(*plVar12 + 0x488);
        if (*(int *)(lVar9 + 0x20) < 1) {
          if (*(int *)((long)_Translate_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)((long)_Translate_TypeInfo + 0xb8) == 0) ||
             (pvVar6 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_CLAIM), plVar8 == (long *)0x0
             )) goto LAB_00c35de4;
          (**(code **)(*plVar8 + 0x5a8))(plVar8,pvVar6,*(undefined8 *)(*plVar8 + 0x5b0));
          if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x490), lVar9 == 0))
          goto LAB_00c35de4;
          UnityEngine_GameObject__SetActive(lVar9,0,0);
        }
        else {
          lVar9 = Car__get_Current(0);
          if ((lVar9 == 0) ||
             (uVar11 = System_Int32__ToString(lVar9 + 0x20,0), plVar8 == (long *)0x0))
          goto LAB_00c35de4;
          (**(code **)(*plVar8 + 0x5a8))(plVar8,uVar11,*(undefined8 *)(*plVar8 + 0x5b0));
        }
        if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x480), lVar9 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar9,1,0);
        if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x4c0), lVar9 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar9,1,0);
        if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x498), lVar9 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar9,0,0);
        if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x4a0), lVar9 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar9,0,0);
        if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x4b8), lVar9 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar9,0,0);
        goto LAB_00c35704;
      }
      lVar9 = *plVar12;
      if (lVar9 == 0) goto LAB_00c35de4;
      *(undefined1 *)(lVar9 + 0x470) = 1;
      if (*(long *)(lVar9 + 0x480) == 0) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(*(long *)(lVar9 + 0x480),0,0);
      if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x498), lVar9 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar9,0,0);
      if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x4a0), lVar9 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar9,0,0);
      if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x4c0), lVar9 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar9,1,0);
      if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x4b8), lVar9 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar9,1,0);
      if (*(int *)((long)_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)((long)_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c35de4;
      pvVar6 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_LOCK_CAR_TEXT);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      pvVar7 = (void *)System_Int32__ToString(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c,0);
LAB_00c35640:
      uVar11 = System_String__Concat(_Str__color__faaf32_,pvVar7,_Str___color_,0);
      if (pvVar6 == (void *)0x0) goto LAB_00c35de4;
      pvVar6 = (void *)System_String__Replace(pvVar6,_Str__x_,uVar11,0);
      if ((*plVar12 == 0) || (plVar8 = *(long **)(*plVar12 + 0x4c8), plVar8 == (long *)0x0))
      goto LAB_00c35de4;
      lVar9 = *plVar8;
    }
    else {
LAB_00c3550c:
      lVar9 = Car__get_Current(0);
      if (((lVar9 == 0) || (*plVar12 == 0)) || (lVar10 = *(long *)(*plVar12 + 0x480), lVar10 == 0))
      goto LAB_00c35de4;
      iVar3 = *(int *)(lVar9 + 0x44);
      UnityEngine_GameObject__SetActive(lVar10,0,0);
      if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x498), lVar9 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar9,0,0);
      if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x4a0), lVar9 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar9,0,0);
      if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x4c0), lVar9 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar9,1,0);
      if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x4b8), lVar9 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar9,1,0);
      if (iVar3 != 0) {
        if (*(int *)((long)_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)((long)_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c35de4;
        pvVar6 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_EVENT_CAR_UNLOCK);
        lVar10 = **(long **)((long)_Translate_TypeInfo + 0xb8);
        lVar9 = Car__get_Current(0);
        if (lVar9 == 0) goto LAB_00c35de4;
        uStack_64 = *(undefined4 *)(lVar9 + 0x44);
        uVar11 = System_Int32__ToString(&uStack_64,0);
        pvVar7 = (void *)System_String__Concat(_Str_EVENT_,uVar11,0);
        if (lVar10 == 0) goto LAB_00c35de4;
        pvVar7 = Translate__JJJNIPAKLJF(pvVar7,pvVar7);
        goto LAB_00c35640;
      }
      if (*plVar12 == 0) goto LAB_00c35de4;
      plVar8 = *(long **)(*plVar12 + 0x4c8);
      if (*(int *)((long)_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)((long)_Translate_TypeInfo + 0xb8) == 0) ||
         (pvVar6 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_LOCK_CAR_IN_THIS_MODE),
         plVar8 == (long *)0x0)) goto LAB_00c35de4;
      lVar9 = *plVar8;
    }
    (**(code **)(lVar9 + 0x5a8))(plVar8,pvVar6,*(undefined8 *)(lVar9 + 0x5b0));
  }
  else {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
      lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar10 == 0) goto LAB_00c35de4;
    }
    if (99 < *(int *)(lVar10 + 0x10)) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
        lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar10 == 0) goto LAB_00c35de4;
      }
      if (*(long *)(lVar10 + 0x50) == 0) goto LAB_00c35de4;
      iVar2 = EventContest__get_car_id(*(long *)(lVar10 + 0x50),0);
      if (-1 < iVar2) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x50), lVar10 == 0)) goto LAB_00c35de4;
        iVar2 = EventContest__get_car_id(lVar10,0);
        goto LAB_00c35438;
      }
    }
    iVar2 = -1;
    iVar3 = -1;
    if (lVar9 == 0) goto LAB_00c354c0;
LAB_00c35448:
    iVar2 = iVar3;
    if (iVar2 != -1) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x50), lVar10 == 0)) goto LAB_00c35de4;
      iVar3 = EventContest__get_car_id(lVar10,0);
      if (iVar3 != *(int *)(lVar9 + 0x10)) goto LAB_00c354c0;
    }
    if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x478), lVar9 == 0)) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar9,0,0);
    if (*plVar12 == 0) goto LAB_00c35de4;
    GUIGarage__PHKCLDLDABM(*plVar12,1,0);
  }
LAB_00c35704:
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar9 = *(long *)(_Main_TypeInfo + 0xb8);
  if (*(long *)(lVar9 + 0x40) != 0) {
    if (iVar2 == -1) {
      lVar9 = Car__get_Current(0);
      if (lVar9 == 0) goto LAB_00c35de4;
      if (*(int *)(lVar9 + 0x44) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        plVar8 = *(long **)(_Main_TypeInfo + 0xb8);
        lVar9 = plVar8[8];
        if (lVar9 == 0) goto LAB_00c35de4;
        if (0 < *(int *)(lVar9 + 0x10)) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            plVar8 = *(long **)(_Main_TypeInfo + 0xb8);
            lVar9 = plVar8[8];
            if (lVar9 == 0) goto LAB_00c35de4;
          }
          if ((*plVar8 == 0) || (lVar10 = *(long *)(*plVar8 + 0x28), lVar10 == 0))
          goto LAB_00c35de4;
          if (*(int *)(lVar9 + 0x10) < *(int *)(lVar10 + 0x18)) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              plVar8 = *(long **)(_Main_TypeInfo + 0xb8);
              lVar9 = plVar8[8];
              if (lVar9 == 0) goto LAB_00c35de4;
            }
            if (*(int *)((long)plVar8 + 0x2c) != *(int *)(lVar9 + 0x10)) {
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
              lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
              if ((lVar9 == 0) ||
                 (lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar10 == 0))
              goto LAB_00c35de4;
              lVar9 = DAFNMLEKHAD__DKJLCJPBPPN(lVar10,*(undefined4 *)(lVar9 + 0x10),1,0);
              if (lVar9 == 0) {
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
                if (lVar9 == 0) goto LAB_00c35de4;
                iVar2 = DAFNMLEKHAD__LOCFCFJIAIH(lVar9,0);
                plVar8 = *(long **)(_Main_TypeInfo + 0xb8);
                if (((*plVar8 == 0) || (lVar9 = plVar8[8], lVar9 == 0)) ||
                   (lVar10 = *(long *)(*plVar8 + 0x28), lVar10 == 0)) goto LAB_00c35de4;
                if (*(uint *)(lVar10 + 0x18) <= *(uint *)(lVar9 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                lVar10 = *(long *)(lVar10 + (long)(int)*(uint *)(lVar9 + 0x10) * 8 + 0x20);
                if (lVar10 == 0) goto LAB_00c35de4;
                if (*(int *)(lVar10 + 0x20) <= iVar2) {
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_Main_TypeInfo);
                    plVar8 = *(long **)(_Main_TypeInfo + 0xb8);
                    lVar9 = plVar8[8];
                    if (lVar9 == 0) goto LAB_00c35de4;
                  }
                  lVar10 = *plVar12;
                  if (lVar10 == 0) goto LAB_00c35de4;
                  if (*(int *)(lVar9 + 0x10) < *(int *)((long)plVar8 + 0x2c)) {
                    lVar9 = *(long *)(lVar10 + 0x438);
                    *(undefined1 *)(lVar10 + 0x470) = 1;
                  }
                  else {
                    lVar9 = *(long *)(lVar10 + 0x428);
                    *(undefined1 *)(lVar10 + 0x471) = 1;
                  }
                  if (lVar9 == 0) goto LAB_00c35de4;
                  UnityEngine_GameObject__SetActive(lVar9,1,0);
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
        lVar9 = *(long *)(_Main_TypeInfo + 0xb8);
      }
      if (iVar2 != *(int *)(lVar9 + 0x2c)) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar9 = *plVar12;
        if (lVar9 == 0) goto LAB_00c35de4;
        if (iVar2 < *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c)) {
          *(undefined1 *)(lVar9 + 0x470) = 1;
        }
        else {
          *(undefined1 *)(lVar9 + 0x471) = 1;
        }
      }
    }
  }
  if (*plVar12 != 0) {
    plVar8 = *(long **)(*plVar12 + 1000);
    lVar9 = Car__get_Current(0);
    if ((lVar9 != 0) && (plVar8 != (long *)0x0)) {
      (**(code **)(*plVar8 + 0x5a8))
                (plVar8,*(undefined8 *)(lVar9 + 0x10),*(undefined8 *)(*plVar8 + 0x5b0));
      if (*plVar12 != 0) {
        GUIGarage__FJCMAMFOKNL(*plVar12,0);
        Menu__CKPDEIAFHEC();
        Menu__CDFHCNMGCFI(__this);
        Menu__INMDNKGHGEO(__this);
        Menu__FMEHJALLGBK(__this);
        uVar11 = *(undefined8 *)((long)__this + 0x70);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(void **)((long)__this + 0x70) == (void *)0x0) goto LAB_00c35de4;
          ConsoleTipsBottom__ABIEFKKDOGK(*(void **)((long)__this + 0x70));
        }
        return;
      }
    }
  }
LAB_00c35de4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private bool LFLFCEGDBPJ() { }   @0xb3a158

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Menu__LFLFCEGDBPJ(void *__this)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  if ((bRam00000000019170fe & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam00000000019170fe = 1;
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
    lVar4 = DAFNMLEKHAD__DKJLCJPBPPN(lVar4,0xffffffff,1,0);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar5 != 0) {
      lVar5 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar5,0xffffffff,0);
      if (lVar4 != 0) {
        iVar1 = *(int *)(lVar4 + 0x10);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (iVar1 == *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c)) {
          uVar6 = MKCBGHDANLA__JOEMNOABHDF(lVar4,0xffffffff,0);
          if (lVar5 == 0) {
            return false;
          }
          if ((uVar6 & 1) == 0) {
            return false;
          }
          uVar6 = DJKGLJOCFCE__MCDLFBJCNNA(lVar5,0);
          if ((uVar6 & 1) == 0) {
            if (((*(long *)((long)__this + 0x20) != 0) &&
                (lVar4 = *(long *)(*(long *)((long)__this + 0x20) + 0x78), lVar4 != 0)) &&
               (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 != 0)) {
              uVar6 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
              if ((uVar6 & 1) == 0) {
                return false;
              }
              if ((*(long *)((long)__this + 0x20) != 0) &&
                 (lVar4 = *(long *)(*(long *)((long)__this + 0x20) + 0x560), lVar4 != 0)) {
                uVar2 = *(uint *)(lVar4 + 0x18);
                if ((int)uVar2 < 1) {
                  return false;
                }
                uVar7 = 0;
                while( true ) {
                  if (uVar2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_throw_967b58();
                  }
                  lVar5 = *(long *)(lVar4 + (long)(int)uVar7 * 8 + 0x20);
                  if (lVar5 == 0) break;
                  if ((*(char *)(lVar5 + 0x70) == '\0') && (*(char *)(lVar5 + 0x68) != '\0')) {
                    uVar3 = ShopItem__HJICMDCENKN(lVar5,0xffffffff,0);
                    uVar6 = ShopItem__MLHKDEGPJGI(lVar5,uVar3,0);
                    if ((uVar6 & 1) == 0) {
                      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if (*(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) != 0) {
                        return *(char *)((long)__this + 0x7a) != '\0';
                      }
                    }
                  }
                  uVar2 = *(uint *)(lVar4 + 0x18);
                  uVar7 = uVar7 + 1;
                  if ((int)uVar2 <= (int)uVar7) {
                    return false;
                  }
                }
              }
            }
            goto LAB_00c3a388;
          }
        }
      }
      return false;
    }
  }
LAB_00c3a388:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void IKHLIHGCCHH() { }   @0xb393e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__IKHLIHGCCHH(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001917103 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917103 = 1;
  }
  if (*(int *)((long)__this + 0x9c) < 0x1f) {
    switch(*(int *)((long)__this + 0x9c)) {
    case 2:
      uVar3 = *(undefined8 *)((long)__this + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(long *)((long)__this + 0x50) == 0) goto code_r0x00c39778;
        BridgePHP__CheckProtocolForMobile(*(long *)((long)__this + 0x50),0);
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
      if (lVar2 == 0) goto code_r0x00c39778;
      DAFNMLEKHAD__LKLNJILJNIA(lVar2,0);
      break;
    case 3:
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Main_TypeInfo + 0xb8) == 0) goto code_r0x00c39778;
      uVar3 = *(undefined8 *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
           (lVar2 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x20), lVar2 == 0))
        goto code_r0x00c39778;
        uVar3 = *(undefined8 *)(lVar2 + 0x30);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if ((uVar1 & 1) != 0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
              (lVar2 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x20), lVar2 == 0)) ||
             (lVar2 = *(long *)(lVar2 + 0x30), lVar2 == 0)) goto code_r0x00c39778;
          SoundScript__DPJAADHMLIA(lVar2,0);
          if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
             (*(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x20) == 0)) goto code_r0x00c39778;
          Translate__OGEJCBEMJLE();
        }
      }
      if (*(void **)((long)__this + 0x20) == (void *)0x0) {
code_r0x00c39778:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      GUIGarage__EGEFDJDCKDJ(*(void **)((long)__this + 0x20));
      if ((*(long *)((long)__this + 0x20) == 0) ||
         (lVar2 = *(long *)(*(long *)((long)__this + 0x20) + 0x58), lVar2 == 0))
      goto code_r0x00c39778;
      EncyclopediaController__FHBDLLGMOFN(lVar2,0);
      uVar3 = *(undefined8 *)((long)__this + 0x40);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(long *)((long)__this + 0x40) == 0) goto code_r0x00c39778;
        AnalyticsController__KHDFDGMBOIJ(*(long *)((long)__this + 0x40),0);
      }
      break;
    case 4:
      uVar3 = *(undefined8 *)((long)__this + 0x30);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(long *)((long)__this + 0x30) == 0) goto code_r0x00c39778;
        NotificationsManager__KHDFDGMBOIJ(*(long *)((long)__this + 0x30),0);
      }
      uVar3 = *(undefined8 *)((long)__this + 0x38);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(long *)((long)__this + 0x38) == 0) goto code_r0x00c39778;
        AdvController__KHDFDGMBOIJ(*(long *)((long)__this + 0x38),0);
      }
      break;
    case 5:
      uVar3 = *(undefined8 *)((long)__this + 0x48);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(void **)((long)__this + 0x48) == (void *)0x0) goto code_r0x00c39778;
        Purchaser__KHDFDGMBOIJ(*(void **)((long)__this + 0x48));
      }
      Menu__NHEEMPFMAHD();
      break;
    case 6:
      uVar3 = *(undefined8 *)((long)__this + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(long *)((long)__this + 0x50) == 0) goto code_r0x00c39778;
        BridgePHP__Login(*(long *)((long)__this + 0x50),0);
      }
      Menu__OCCACLIDKCM(__this);
    }
    *(int *)((long)__this + 0x9c) = *(int *)((long)__this + 0x9c) + 1;
  }
  return;
}


// ==== private void PHJCEJEOECH(Scene ODGHBELBCEK, LoadSceneMode CFNJMFOGJNA) { }   @0xb3b398

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__PHJCEJEOECH(void *__this,void *ODGHBELBCEK,int CFNJMFOGJNA)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  void *CIDKMFLFJEJ;
  undefined4 uVar4;
  float fVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  int iStack_48;
  undefined4 uStack_3c;
  undefined4 auStack_38 [2];
  
  auStack_38[0] = SUB84(ODGHBELBCEK,0);
  if ((bRam0000000001917108 & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&UnityEngine_SceneManagement_LoadSceneMode_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str___is_first_load_garage__);
    func_0x00a67900(&Str_garage);
    func_0x00a67900(&Str__in_mode__);
    func_0x00a67900(&Str_Scene_loaded__);
    bRam0000000001917108 = 1;
  }
  uStack_3c = 0;
  lVar2 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = _Str_Scene_loaded__;
    uStack_3c = UnityEngine_SceneManagement_Scene__get_buildIndex(auStack_38,0);
    uVar3 = System_Int32__ToString(&uStack_3c,0);
    if ((1 < *(uint *)(lVar2 + 0x18)) &&
       (*(undefined8 *)(lVar2 + 0x28) = uVar3, *(uint *)(lVar2 + 0x18) != 2)) {
      *(undefined8 *)(lVar2 + 0x30) = _Str__in_mode__;
      uStack_58 = _UnityEngine_SceneManagement_LoadSceneMode_TypeInfo;
      uStack_50 = 0xffffffffffffffff;
      iStack_48 = CFNJMFOGJNA;
      uVar3 = System_Enum__ToString(&uStack_58,0);
      if ((3 < *(uint *)(lVar2 + 0x18)) &&
         (*(undefined8 *)(lVar2 + 0x38) = uVar3, *(uint *)(lVar2 + 0x18) != 4)) {
        *(undefined8 *)(lVar2 + 0x40) = _Str___is_first_load_garage__;
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = System_Boolean__ToString(*(long *)(_Menu_TypeInfo + 0xb8) + 0xd,0);
        if (5 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x48) = uVar3;
          CIDKMFLFJEJ = (void *)System_String__Concat(lVar2,0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Main_TypeInfo);
          }
          Main__GEMDEAMAGPG(CIDKMFLFJEJ,false);
          uVar3 = UnityEngine_SceneManagement_Scene__get_name(auStack_38,0);
          bVar1 = System_String__op_Equality(uVar3,_Str_garage,0);
          lVar2 = *(long *)(_Menu_TypeInfo + 0xb8);
          *(byte *)(lVar2 + 0xc) = bVar1 & 1;
          *(undefined1 *)(lVar2 + 0xb) = 0;
          *(undefined1 *)((long)__this + 0x7a) = 1;
          uVar4 = UnityEngine_Time__get_time(0);
          *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar4;
          fVar5 = (float)UnityEngine_Time__get_timeScale(0);
          if (fVar5 < 1.0) {
            UnityEngine_Time__set_timeScale(0x3f800000,0);
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            UnityEngine_AudioListener__set_volume
                      (*(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x14),0);
          }
          Menu__PJEHMAFCMLI(__this);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (*(char *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x11) == '\0') {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            UnityEngine_Behaviour__set_enabled
                      (__this,*(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc),0);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}



/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class GUIEncyclopediaItem : MonoBehaviour // TypeDefIndex: 5122
{
	// Fields
	public CPFPFGOIDDO BAMPGHJACCL; // 0x20
	public Image DJAGPKMAACN; // 0x28
	public GameObject HCKDPJNCODA; // 0x30

	// Methods

	public void ButtonShowItem(bool is_can_change_status) { }

	public void .ctor() { }
}
*/

// ==== public void ButtonShowItem(bool is_can_change_status) { }   @0xaf908c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIEncyclopediaItem__ButtonShowItem(void *__this,bool is_can_change_status)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  if ((bRam0000000001916eef & 1) == 0) {
    func_0x00a67900(&CPFPFGOIDDO_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str___);
    func_0x00a67900(&Str_SILVER);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_DAMAGE);
    func_0x00a67900(&Str__NAME);
    func_0x00a67900(&Str__DESC);
    func_0x00a67900(&Str_);
    bRam0000000001916eef = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF == 0) goto LAB_00bf99a0;
  uVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  pvVar3 = Encyclopedia__EILIOBHFJNB(this.BAMPGHJACCL);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)((long)pvVar3 + 0x3c) < 1) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (((Menu.KECGFPHIEHF == 0) ||
      (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 == 0)) ||
     (lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0)) goto LAB_00bf99a0;
  plVar7 = *(long **)(lVar5 + 0x30);
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar8 = Translate.KECGFPHIEHF;
  uStack_78 = _CPFPFGOIDDO_TypeInfo;
  uStack_70 = 0xffffffffffffffff;
  uStack_68 = this.BAMPGHJACCL;
  lVar5 = System_Enum__ToString(&uStack_78,0);
  if (lVar5 == 0) goto LAB_00bf99a0;
  uVar6 = System_String__ToUpper(lVar5,0);
  uVar6 = System_String__Concat(uVar6,_Str__NAME,0);
  if ((lVar8 == 0) || (uVar6 = Translate__JJJNIPAKLJF(lVar8,uVar6,0), plVar7 == (long *)0x0))
  goto LAB_00bf99a0;
  (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x5b0));
  if (this.BAMPGHJACCL == 0xc) {
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
    lVar5 = Main.FBDDKIOEKDM;
    if (lVar5 == 0) goto LAB_00bf99a0;
    if (*(int *)(lVar5 + 0x94) != 10) goto LAB_00bf939c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((Menu.KECGFPHIEHF == 0) ||
        (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 == 0)) ||
       ((lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0 ||
        (lVar5 = *(long *)(lVar5 + 0x48), lVar5 == 0)))) goto LAB_00bf99a0;
    uVar6 = 0x32;
LAB_00bf9420:
    UnityEngine_UI_Text__set_fontSize(lVar5,uVar6,0);
  }
  else {
LAB_00bf939c:
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((Menu.KECGFPHIEHF == 0) ||
        (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 == 0)) ||
       ((lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0 ||
        (lVar5 = *(long *)(lVar5 + 0x48), lVar5 == 0)))) goto LAB_00bf99a0;
    iVar1 = UnityEngine_UI_Text__get_fontSize(lVar5,0);
    if (iVar1 != 0x34) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((((Menu.KECGFPHIEHF == 0) ||
           (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 == 0)) ||
          (lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0)) ||
         (lVar5 = *(long *)(lVar5 + 0x48), lVar5 == 0)) goto LAB_00bf99a0;
      uVar6 = 0x34;
      goto LAB_00bf9420;
    }
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uStack_78 = _CPFPFGOIDDO_TypeInfo;
  lVar8 = Translate.KECGFPHIEHF;
  uStack_70 = 0xffffffffffffffff;
  uStack_68 = this.BAMPGHJACCL;
  lVar5 = System_Enum__ToString(&uStack_78,0);
  if (lVar5 == 0) goto LAB_00bf99a0;
  uVar6 = System_String__ToUpper(lVar5,0);
  uVar6 = System_String__Concat(uVar6,_Str__DESC,0);
  if (lVar8 == 0) goto LAB_00bf99a0;
  lVar5 = Translate__JJJNIPAKLJF(lVar8,uVar6,0);
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
  lVar8 = Main.FBDDKIOEKDM;
  if (lVar8 == 0) goto LAB_00bf99a0;
  if (*(int *)(lVar8 + 0x94) == 10) {
LAB_00bf95a8:
    if (lVar5 == 0) goto LAB_00bf99a0;
    lVar5 = System_String__Replace(lVar5,_Str__,_Str_,0);
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
    lVar8 = Main.FBDDKIOEKDM;
    if (lVar8 == 0) goto LAB_00bf99a0;
    if (*(int *)(lVar8 + 0x94) == 0xb) goto LAB_00bf95a8;
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
    lVar8 = Main.FBDDKIOEKDM;
    if (lVar8 == 0) goto LAB_00bf99a0;
    if (*(int *)(lVar8 + 0x94) == 0xc) goto LAB_00bf95a8;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (((Menu.KECGFPHIEHF != 0) &&
      (lVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar8 != 0)) &&
     ((lVar8 = *(long *)(lVar8 + 0x58), lVar8 != 0 &&
      (plVar7 = *(long **)(lVar8 + 0x48), plVar7 != (long *)0x0)))) {
    (**(code **)(*plVar7 + 0x5a8))(plVar7,lVar5,*(undefined8 *)(*plVar7 + 0x5b0));
    if ((((Menu.KECGFPHIEHF != 0) &&
         (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 != 0)) &&
        (lVar5 = *(long *)(lVar5 + 0x58), lVar5 != 0)) &&
       ((this.DJAGPKMAACN != 0 && (lVar5 = *(long *)(lVar5 + 0x38), lVar5 != 0)))) {
      UnityEngine_UI_Image__set_sprite
                (lVar5,*(undefined8 *)(this.DJAGPKMAACN + 0xd8),0);
      if ((Menu.KECGFPHIEHF != 0) &&
         ((lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 != 0 &&
          (lVar5 = *(long *)(lVar5 + 0x58), lVar5 != 0)))) {
        plVar7 = *(long **)(lVar5 + 0x40);
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Translate.KECGFPHIEHF != 0) {
          uVar6 = Translate__JJJNIPAKLJF(Translate.KECGFPHIEHF,_Str_DAMAGE,0);
          uVar4 = System_Int32__ToString((long)pvVar3 + 0x14,0);
          uVar6 = System_String__Concat(uVar6,_Str___,uVar4,0);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x5b0));
            if (0 < *(int *)((long)pvVar3 + 0x18)) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (((Menu.KECGFPHIEHF == 0) ||
                  (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 == 0)) ||
                 (lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0)) goto LAB_00bf99a0;
              plVar7 = *(long **)(lVar5 + 0x40);
              lVar5 = func_0x00a679a0(_string___TypeInfo,5);
              if ((plVar7 == (long *)0x0) ||
                 (uVar6 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0)),
                 lVar5 == 0)) goto LAB_00bf99a0;
              if (*(int *)(lVar5 + 0x18) == 0) {
LAB_00bf99a4:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              *(undefined8 *)(lVar5 + 0x20) = uVar6;
              uVar6 = System_Environment__get_NewLine(0);
              if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_00bf99a4;
              *(undefined8 *)(lVar5 + 0x28) = uVar6;
              if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (Translate.KECGFPHIEHF == 0) goto LAB_00bf99a0;
              uVar6 = Translate__JJJNIPAKLJF(Translate.KECGFPHIEHF,_Str_SILVER,0);
              if ((*(uint *)(lVar5 + 0x18) < 3) ||
                 (*(undefined8 *)(lVar5 + 0x30) = uVar6, *(uint *)(lVar5 + 0x18) == 3))
              goto LAB_00bf99a4;
              *(undefined8 *)(lVar5 + 0x38) = _Str___;
              uVar6 = System_Int32__ToString((int *)((long)pvVar3 + 0x18),0);
              if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_00bf99a4;
              *(undefined8 *)(lVar5 + 0x40) = uVar6;
              uVar6 = System_String__Concat(lVar5,0);
              (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x5b0));
            }
            if ((is_can_change_status) && (*(int *)((long)pvVar3 + 0x3c) == 1)) {
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
              if (Main.FBDDKIOEKDM == 0) goto LAB_00bf99a0;
              DAFNMLEKHAD__CHGBPDAONOH(_Main_TypeInfo,*(undefined4 *)((long)pvVar3 + 0x10),2);
            }
            if (this.HCKDPJNCODA != 0) {
              UnityEngine_GameObject__SetActive
                        (this.HCKDPJNCODA,*(int *)((long)pvVar3 + 0x3c) == 1,0);
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar6 = Menu.KECGFPHIEHF;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_UnityEngine_Object_TypeInfo);
              }
              uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
              if ((uVar2 & 1) != 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 == 0))
                goto LAB_00bf99a0;
                uVar6 = *(undefined8 *)(lVar5 + 0x58);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
                if ((uVar2 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((Menu.KECGFPHIEHF == 0) ||
                      (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 == 0)) ||
                     (lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0)) goto LAB_00bf99a0;
                  EncyclopediaController__FHBDLLGMOFN(lVar5,0);
                }
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_00bf99a0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xaf9ba4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIEncyclopediaItem___ctor(void *__this)

{
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



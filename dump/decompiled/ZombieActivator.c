/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class ZombieActivator : MonoBehaviour // TypeDefIndex: 5245
{
	// Fields
	private bool DIFNGFMLPMP; // 0x20
	public Zombie ILANJMBJGGL; // 0x28
	public Animator NFABKCAPLMG; // 0x30
	public Collider EFOGAOHIGOE; // 0x38

	// Methods

	private void OnBecameVisible() { }

	public void .ctor() { }
}
*/

// ==== private void OnBecameVisible() { }   @0xb4c648

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ZombieActivator__OnBecameVisible(void *__this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  
  if ((bRam0000000001917171 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917171 = 1;
  }
  if (this.DIFNGFMLPMP == '\0') {
    this.DIFNGFMLPMP = 1;
    uVar4 = this.NFABKCAPLMG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if (this.NFABKCAPLMG == 0) goto LAB_00c4c900;
      UnityEngine_Behaviour__set_enabled(this.NFABKCAPLMG,1,0);
    }
    uVar4 = this.EFOGAOHIGOE;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if (this.EFOGAOHIGOE == 0) goto LAB_00c4c900;
      UnityEngine_Collider__set_enabled(this.EFOGAOHIGOE,1,0);
    }
    uVar4 = this.ILANJMBJGGL;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if (this.ILANJMBJGGL != 0) {
        UnityEngine_Behaviour__set_enabled(this.ILANJMBJGGL,1,0);
        if (this.ILANJMBJGGL != (void *)0x0) {
          Zombie__LJLGIPJCHFC(this.ILANJMBJGGL,false);
          if (this.ILANJMBJGGL != 0) {
            uVar4 = this.ILANJMBJGGL.ABNPNOKAMEB;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
            if ((uVar2 & 1) != 0) {
              lVar3 = this.ILANJMBJGGL;
              if (lVar3 == 0) goto LAB_00c4c900;
              if (*(int *)(lVar3 + 0x30) != 6) {
                if (*(long *)(lVar3 + 0x98) == 0) goto LAB_00c4c900;
                UnityEngine_GameObject__SetActive(*(long *)(lVar3 + 0x98),1,0);
              }
            }
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = CarController.KECGFPHIEHF;
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
            if (CarController.KECGFPHIEHF != 0) {
              uVar4 = CarController.KECGFPHIEHF.CDDOBCENBOG;
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
              if (((CarController.KECGFPHIEHF != 0) &&
                  (this.ILANJMBJGGL != 0)) &&
                 (lVar3 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar3 != 0)
                 ) {
                uVar2 = GUIGameplay__NNOEOMKNGJL
                                  (lVar3,this.ILANJMBJGGL.CPFPFGOIDDO,0);
                if ((uVar2 & 1) == 0) {
                  return;
                }
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((CarController.KECGFPHIEHF != 0) &&
                   (this.ILANJMBJGGL != 0)) {
                  lVar5 = CarController.KECGFPHIEHF.CDDOBCENBOG;
                  iVar1 = this.ILANJMBJGGL.CPFPFGOIDDO;
                  lVar3 = UnityEngine_Component__get_gameObject(__this,0);
                  if (lVar5 != 0) {
                    if (lVar5/*GUIGameplay*/.GDLDOBJNKJP == '\0') {
                      lVar5/*GUIGameplay*/.DBDGDLIENJA = iVar1;
                      lVar5/*GUIGameplay*/.GDLDOBJNKJP = 1;
                      lVar5/*GUIGameplay*/.AONILDNKNCB = lVar3;
                      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_throw_967b50();
                      }
                      uVar4 = UnityEngine_GameObject__get_transform(lVar3,0);
                      lVar5/*GUIGameplay*/.DELDDEDKHHE = uVar4;
                      switch(iVar1) {
                      case 0xb:
                      case 0xe:
                        uVar6 = 0x3fd9999a;
                        break;
                      case 0xc:
                        uVar6 = 0x40200000;
                        break;
                      case 0xd:
                        uVar6 = 0x40966666;
                        break;
                      default:
                        if (iVar1 == 0) {
                          uVar6 = 0x3f800000;
                        }
                        else {
                          uVar6 = 0x40000000;
                        }
                        break;
                      case 0x11:
                        uVar6 = 0x3fc00000;
                      }
                      lVar5/*GUIGameplay*/.PEAOLDCNLIK = uVar6;
                      uVar6 = UnityEngine_Time__get_realtimeSinceStartup(0);
                      lVar5/*GUIGameplay*/.KDPPODAJELB = uVar6;
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
LAB_00c4c900:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
}


// ==== public void .ctor() { }   @0xb4c904

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ZombieActivator___ctor(void *__this)

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



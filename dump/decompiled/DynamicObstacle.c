/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class DynamicObstacle : MonoBehaviour // TypeDefIndex: 5109
{
	// Fields
	private Rigidbody NIIFDMDCOCF; // 0x20
	public bool JOLDJOCODON; // 0x28
	public bool PNJKMBJCENA; // 0x29
	public CPFPFGOIDDO CPFPFGOIDDO; // 0x2C
	public GameObject CMOHHKDHFGA; // 0x30
	private static Collider ODHELBFAFAC; // 0x0

	// Methods

	private void OnEnable() { }

	private void OnBecameVisible() { }

	private void OnTriggerEnter(Collider GLKAJMJEIEM) { }

	public void .ctor() { }
}
*/

// ==== private void OnEnable() { }   @0xaf59cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DynamicObstacle__OnEnable(void *__this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lStack_28;
  
  if ((bRam0000000001916edd & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Collider___);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_car);
    func_0x00a67900(&Str_dynamic_obstacle);
    bRam0000000001916edd = 1;
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
            (__this,&lStack_28,_Method_UnityEngine_Component_GetComponent_Collider___);
  lVar7 = lStack_28;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Equality(lVar7,0,0);
  if ((uVar4 & 1) != 0) {
    uVar5 = UnityEngine_Component__get_gameObject(__this,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy(uVar5,0);
    return;
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
            (__this,&lStack_28,_Method_UnityEngine_Component_GetComponent_Rigidbody___);
  this.NIIFDMDCOCF = lStack_28;
  lVar6 = UnityEngine_Component__get_gameObject(__this,0);
  if (lVar6 != 0) {
    iVar1 = UnityEngine_GameObject__get_layer(lVar6,0);
    iVar2 = UnityEngine_LayerMask__NameToLayer(_Str_car,0);
    if (iVar1 == iVar2) {
      lVar7 = UnityEngine_Component__get_gameObject(__this,0);
      uVar3 = UnityEngine_LayerMask__NameToLayer(_Str_dynamic_obstacle,0);
      if (lVar7 != 0) {
        UnityEngine_GameObject__set_layer(lVar7,uVar3,0);
        return;
      }
    }
    else {
      uVar5 = this.NIIFDMDCOCF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar4 & 1) != 0) {
        if (this.NIIFDMDCOCF == 0) goto LAB_00bf5ba0;
        UnityEngine_Rigidbody__Sleep(this.NIIFDMDCOCF,0);
      }
      if (lVar7 != 0) {
        UnityEngine_Collider__set_enabled(lVar7,0,0);
        return;
      }
    }
  }
LAB_00bf5ba0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void OnBecameVisible() { }   @0xaf5ba4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DynamicObstacle__OnBecameVisible(void *__this)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_28;
  
  if ((bRam0000000001916ede & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Collider___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916ede = 1;
  }
  UnityEngine_Behaviour__set_enabled(__this,1,0);
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
            (__this,&lStack_28,_Method_UnityEngine_Component_GetComponent_Collider___);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(lStack_28,0,0);
  if ((uVar2 & 1) != 0) {
    if (lStack_28 == 0) goto LAB_00bf5dd0;
    UnityEngine_Collider__set_enabled(lStack_28,1,0);
  }
  if (this.JOLDJOCODON != '\0') {
    if (this.NIIFDMDCOCF == 0) goto LAB_00bf5dd0;
    UnityEngine_Rigidbody__WakeUp(this.NIIFDMDCOCF,0);
  }
  if (this.PNJKMBJCENA != '\0') {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = CarController.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
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
        if ((CarController.KECGFPHIEHF != 0) &&
           (lVar3 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar3 != 0)) {
          uVar2 = GUIGameplay__NNOEOMKNGJL(lVar3,this.CPFPFGOIDDO,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (CarController.KECGFPHIEHF != 0) {
            lVar3 = CarController.KECGFPHIEHF.CDDOBCENBOG;
            uVar1 = this.CPFPFGOIDDO;
            uVar4 = this.CMOHHKDHFGA;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
            if ((uVar2 & 1) == 0) {
              uVar4 = UnityEngine_Component__get_gameObject(__this,0);
            }
            else {
              uVar4 = this.CMOHHKDHFGA;
            }
            if (lVar3 != 0) {
              GUIGameplay__PKECIKMIECO(lVar3,uVar1,uVar4,0);
              return;
            }
          }
        }
      }
LAB_00bf5dd0:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
}


// ==== private void OnTriggerEnter(Collider GLKAJMJEIEM) { }   @0xaf5dd4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DynamicObstacle__OnTriggerEnter(void *__this,void *GLKAJMJEIEM)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *OPBPCFOOBHD;
  void *HAKKOAADCOE;
  void *__this_00;
  float fVar5;
  float in_s1;
  float in_s2;
  
  if ((bRam0000000001916edf & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&DynamicObstacle_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_wood_box);
    func_0x00a67900(&Str_metal_box);
    func_0x00a67900(&Str_barrel);
    func_0x00a67900(&Str_zombie);
    func_0x00a67900(&Str_zombie_sidewalk);
    bRam0000000001916edf = 1;
  }
  if (this.NIIFDMDCOCF != 0) {
    fVar5 = (float)UnityEngine_Rigidbody__get_velocity(this.NIIFDMDCOCF,0);
    if (in_s2 * in_s2 + fVar5 * fVar5 + in_s1 * in_s1 <= 1.0) {
      return;
    }
    if ((GLKAJMJEIEM != (void *)0x0) &&
       (lVar1 = UnityEngine_Component__get_gameObject(GLKAJMJEIEM,0), lVar1 != 0)) {
      uVar2 = UnityEngine_GameObject__get_tag(lVar1,0);
      uVar3 = System_String__op_Equality(uVar2,_Str_zombie,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar1 = UnityEngine_Component__get_gameObject(GLKAJMJEIEM,0);
      if ((lVar1 != 0) && (lVar1 = UnityEngine_Object__get_name(lVar1,0), lVar1 != 0)) {
        uVar3 = System_String__Contains(lVar1,_Str_zombie_sidewalk,0);
        if ((uVar3 & 1) != 0) {
          return;
        }
        UnityEngine_Collider__set_enabled(GLKAJMJEIEM,0,0);
        lVar1 = UnityEngine_Component__get_gameObject(__this,0);
        if (lVar1 != 0) {
          uVar2 = UnityEngine_GameObject__get_tag(lVar1,0);
          uVar3 = System_String__op_Equality(uVar2,_Str_barrel,0);
          if ((uVar3 & 1) == 0) {
            uVar3 = System_String__op_Equality(uVar2,_Str_wood_box,0);
            if (((uVar3 & 1) != 0) ||
               (uVar3 = System_String__op_Equality(uVar2,_Str_metal_box,0), (uVar3 & 1) != 0)) {
              uVar2 = UnityEngine_Component__get_gameObject(__this,0);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_UnityEngine_Object_TypeInfo);
              }
              UnityEngine_Object__Destroy(uVar2,0);
            }
          }
          else {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar2 = CarController.KECGFPHIEHF;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
            if ((uVar3 & 1) != 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (CarController.KECGFPHIEHF == 0) goto LAB_00bf6168;
              lVar1 = CarController.KECGFPHIEHF.NEJKJHMFBMJ;
              uVar2 = UnityEngine_Component__get_gameObject(__this,0);
              uVar4 = UnityEngine_Component__get_transform(GLKAJMJEIEM,0);
              if (lVar1 == 0) goto LAB_00bf6168;
              CarCollision__GLBHMAKJKHB(lVar1,2,uVar2,uVar4,0);
            }
          }
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar2 = CarController.KECGFPHIEHF;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = DynamicObstacle.ODHELBFAFAC;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar3 = UnityEngine_Object__op_Inequality(uVar2,GLKAJMJEIEM,0);
            if ((uVar3 & 1) != 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (CarController.KECGFPHIEHF != 0) {
                __this_00 = CarController.KECGFPHIEHF.NEJKJHMFBMJ;
                OPBPCFOOBHD = (void *)UnityEngine_Component__get_gameObject(GLKAJMJEIEM,0);
                HAKKOAADCOE = (void *)UnityEngine_Component__get_transform(GLKAJMJEIEM,0);
                if (__this_00 != (void *)0x0) {
                  CarCollision__JDLKLAGFELO(__this_00,2,OPBPCFOOBHD,HAKKOAADCOE);
                  goto LAB_00bf6144;
                }
              }
              goto LAB_00bf6168;
            }
          }
LAB_00bf6144:
          DynamicObstacle.ODHELBFAFAC = GLKAJMJEIEM;
          return;
        }
      }
    }
  }
LAB_00bf6168:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xaf616c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DynamicObstacle___ctor(void *__this)

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



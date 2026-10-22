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
  if (*(char *)((long)__this + 0x28) != '\0') {
    if (*(long *)((long)__this + 0x20) == 0) goto LAB_00bf5dd0;
    UnityEngine_Rigidbody__WakeUp(*(long *)((long)__this + 0x20),0);
  }
  if (*(char *)((long)__this + 0x29) != '\0') {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
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
           (lVar3 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar3 != 0)) {
          uVar2 = GUIGameplay__NNOEOMKNGJL(lVar3,*(undefined4 *)((long)__this + 0x2c),0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_CarController_TypeInfo + 0xb8) != 0) {
            lVar3 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
            uVar1 = *(undefined4 *)((long)__this + 0x2c);
            uVar4 = *(undefined8 *)((long)__this + 0x30);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
            if ((uVar2 & 1) == 0) {
              uVar4 = UnityEngine_Component__get_gameObject(__this,0);
            }
            else {
              uVar4 = *(undefined8 *)((long)__this + 0x30);
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



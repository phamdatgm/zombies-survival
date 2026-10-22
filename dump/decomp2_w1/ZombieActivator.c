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
  if (*(char *)((long)__this + 0x20) == '\0') {
    *(undefined1 *)((long)__this + 0x20) = 1;
    uVar4 = *(undefined8 *)((long)__this + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c4c900;
      UnityEngine_Behaviour__set_enabled(*(long *)((long)__this + 0x30),1,0);
    }
    uVar4 = *(undefined8 *)((long)__this + 0x38);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c4c900;
      UnityEngine_Collider__set_enabled(*(long *)((long)__this + 0x38),1,0);
    }
    uVar4 = *(undefined8 *)((long)__this + 0x28);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)((long)__this + 0x28) != 0) {
        UnityEngine_Behaviour__set_enabled(*(long *)((long)__this + 0x28),1,0);
        if (*(void **)((long)__this + 0x28) != (void *)0x0) {
          Zombie__LJLGIPJCHFC(*(void **)((long)__this + 0x28),false);
          if (*(long *)((long)__this + 0x28) != 0) {
            uVar4 = *(undefined8 *)(*(long *)((long)__this + 0x28) + 0x98);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
            if ((uVar2 & 1) != 0) {
              lVar3 = *(long *)((long)__this + 0x28);
              if (lVar3 == 0) goto LAB_00c4c900;
              if (*(int *)(lVar3 + 0x30) != 6) {
                if (*(long *)(lVar3 + 0x98) == 0) goto LAB_00c4c900;
                UnityEngine_GameObject__SetActive(*(long *)(lVar3 + 0x98),1,0);
              }
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
              if (((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
                  (*(long *)((long)__this + 0x28) != 0)) &&
                 (lVar3 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar3 != 0)
                 ) {
                uVar2 = GUIGameplay__NNOEOMKNGJL
                                  (lVar3,*(undefined4 *)(*(long *)((long)__this + 0x28) + 0x38),0);
                if ((uVar2 & 1) == 0) {
                  return;
                }
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
                   (*(long *)((long)__this + 0x28) != 0)) {
                  lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
                  iVar1 = *(int *)(*(long *)((long)__this + 0x28) + 0x38);
                  lVar3 = UnityEngine_Component__get_gameObject(__this,0);
                  if (lVar5 != 0) {
                    if (*(char *)(lVar5 + 0x51c) == '\0') {
                      *(int *)(lVar5 + 0x500) = iVar1;
                      *(undefined1 *)(lVar5 + 0x51c) = 1;
                      *(long *)(lVar5 + 0x508) = lVar3;
                      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_throw_967b50();
                      }
                      uVar4 = UnityEngine_GameObject__get_transform(lVar3,0);
                      *(undefined8 *)(lVar5 + 0x510) = uVar4;
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
                      *(undefined4 *)(lVar5 + 0x518) = uVar6;
                      uVar6 = UnityEngine_Time__get_realtimeSinceStartup(0);
                      *(undefined4 *)(lVar5 + 0x4f8) = uVar6;
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



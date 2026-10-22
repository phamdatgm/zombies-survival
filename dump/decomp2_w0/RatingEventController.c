// ==== private void AMNLEOOJDKP(int MILPOCHJNHH, int GCKKLCLGEDO) { }   @0xb40c14

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__AMNLEOOJDKP(void *__this,int MILPOCHJNHH,int GCKKLCLGEDO)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iStack_3c;
  long lStack_38;
  
  iStack_3c = MILPOCHJNHH;
  if ((bRam000000000191712a & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_GUIReward___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_101_);
    func_0x00a67900(&Str_100);
    func_0x00a67900(&Str_10);
    func_0x00a67900(&Str_Fail_SetRewardLine__);
    func_0x00a67900(&Str_5);
    func_0x00a67900(&Str_50);
    bRam000000000191712a = 1;
  }
  if (((uint)MILPOCHJNHH < 0x33) &&
     ((1L << ((ulong)(uint)MILPOCHJNHH & 0x3f) & 0x4000000000421U) != 0)) {
    if (0 < MILPOCHJNHH - GCKKLCLGEDO) {
      uVar6 = *(undefined8 *)((long)__this + 0x80);
      uVar7 = *(undefined8 *)((long)__this + 0x70);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      UnityEngine_Object__Instantiate_object_
                (uVar6,uVar7,_Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    uVar6 = *(undefined8 *)((long)__this + 0x88);
    uVar7 = *(undefined8 *)((long)__this + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = UnityEngine_Object__Instantiate_object_
                      (uVar6,uVar7,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar3 == 0) goto LAB_00c40fdc;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar3,&lStack_38,_Method_UnityEngine_GameObject_GetComponent_GUIReward___);
    uVar4 = UnityEngine_Object__op_Inequality(lStack_38,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar3 == 0) goto LAB_00c40fdc;
      if (*(long *)(lVar3 + 0x50) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if (lVar3 == 0) goto LAB_00c40fdc;
        }
        if (*(long *)(lVar3 + 0x50) == 0) goto LAB_00c40fdc;
        if (*(long *)(*(long *)(lVar3 + 0x50) + 0x20) != 0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
            if (lVar3 == 0) goto LAB_00c40fdc;
          }
          if ((*(long *)(lVar3 + 0x50) == 0) ||
             (lVar3 = *(long *)(*(long *)(lVar3 + 0x50) + 0x20), lVar3 == 0)) {
LAB_00c40fdc:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          if (*(int *)(lVar3 + 0x18) == 5) {
            iVar1 = iStack_3c + 1;
            if (iVar1 < 0) {
              uVar5 = 4;
            }
            else if (iVar1 < 6) {
              uVar5 = 0;
            }
            else if (iVar1 < 0xb) {
              uVar5 = 1;
            }
            else if (iVar1 < 0x33) {
              uVar5 = 2;
            }
            else {
              uVar5 = 3;
              if (100 < iVar1) {
                uVar5 = 4;
              }
            }
            lVar3 = func_0x00a679a0(_string___TypeInfo,5);
            if (lVar3 != 0) {
              uVar2 = *(uint *)(lVar3 + 0x18);
              if ((((uVar2 == 0) || (*(undefined8 *)(lVar3 + 0x20) = _Str_5, uVar2 == 1)) ||
                  (*(undefined8 *)(lVar3 + 0x28) = _Str_10, uVar2 < 3)) ||
                 ((*(undefined8 *)(lVar3 + 0x30) = _Str_50, uVar2 == 3 ||
                  (*(undefined8 *)(lVar3 + 0x38) = _Str_100, uVar2 < 5)))) {
LAB_00c40fe0:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              *(undefined8 *)(lVar3 + 0x40) = _Str_101_;
              if (uVar5 != 0) {
                lVar3 = *(long *)((long)__this + 0x58);
                if (lVar3 == 0) goto LAB_00c40fdc;
                if ((int)uVar5 < (int)*(uint *)(lVar3 + 0x18)) {
                  if (lStack_38 == 0) goto LAB_00c40fdc;
                  if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_00c40fe0;
                  if (*(long *)(lStack_38 + 0x28) == 0) goto LAB_00c40fdc;
                  UnityEngine_UI_Image__set_sprite
                            (*(long *)(lStack_38 + 0x28),
                             *(undefined8 *)(lVar3 + (ulong)uVar5 * 8 + 0x20),0);
                }
              }
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
              if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x50), lVar3 != 0)) {
                RatingEventController__DGFCAMFFCMH
                          (_Main_TypeInfo,lStack_38,*(undefined8 *)(lVar3 + 0x20),uVar5,1);
                return;
              }
            }
            goto LAB_00c40fdc;
          }
        }
      }
    }
    uVar6 = System_Int32__ToString(&iStack_3c,0);
    uVar6 = System_String__Concat(_Str_Fail_SetRewardLine__,uVar6,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__EEKNCFLMGDP(uVar6,0);
  }
  return;
}


// ==== private void MKACNHEOJKP(GUIRating BKBKLJKDINA, bool FJDCALHGHCI, int CGBCBOKAMBP = -1) { }   @0xb417c4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__MKACNHEOJKP
               (void *__this,void *BKBKLJKDINA,bool FJDCALHGHCI,int CGBCBOKAMBP)

{
  long *plVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (BKBKLJKDINA != (void *)0x0) {
    plVar1 = *(long **)((long)BKBKLJKDINA + 0x20);
    if (FJDCALHGHCI) {
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x2a8))
                  (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar1,
                   *(undefined8 *)(*plVar1 + 0x2b0));
        if (*(long *)((long)BKBKLJKDINA + 0x20) != 0) {
          UnityEngine_Behaviour__set_enabled(*(long *)((long)BKBKLJKDINA + 0x20),1,0);
          plVar1 = *(long **)((long)BKBKLJKDINA + 0x50);
          if (plVar1 != (long *)0x0) {
            plVar3 = *(long **)((long)BKBKLJKDINA + 0x28);
            plVar4 = *(long **)((long)BKBKLJKDINA + 0x38);
            plVar5 = *(long **)((long)BKBKLJKDINA + 0x60);
            (**(code **)(*plVar1 + 0x2a8))(0,0,0,0x3f800000,plVar1,*(undefined8 *)(*plVar1 + 0x2b0))
            ;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x2a8))
                        (0,0,0,0x3f800000,plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x2a8))
                          (0,0,0,0x3f800000,plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
                if (plVar3 != (long *)0x0) {
                  (**(code **)(*plVar3 + 0x2a8))
                            (0,0,0,0x3f800000,plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
                  plVar1 = *(long **)((long)BKBKLJKDINA + 0x40);
                  if (plVar1 != (long *)0x0) {
                    uVar6 = 0x3f000000;
                    uVar7 = 0x3f000000;
                    uVar8 = 0x3f000000;
                    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x2a8);
                    uVar2 = *(undefined8 *)(*plVar1 + 0x2b0);
LAB_00c419fc:
                    /* WARNING: Could not recover jumptable at 0x00c41a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*UNRECOVERED_JUMPTABLE)(uVar6,uVar7,uVar8,0x3f800000,plVar1,uVar2);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    else if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x2a8))
                (*(undefined4 *)((long)__this + 0xe0),*(undefined4 *)((long)__this + 0xe4),
                 *(undefined4 *)((long)__this + 0xe8),*(undefined4 *)((long)__this + 0xec),plVar1,
                 *(undefined8 *)(*plVar1 + 0x2b0));
      if (*(long *)((long)BKBKLJKDINA + 0x20) != 0) {
        UnityEngine_Behaviour__set_enabled
                  (*(long *)((long)BKBKLJKDINA + 0x20),(CGBCBOKAMBP & 1U) == 0,0);
        plVar1 = *(long **)((long)BKBKLJKDINA + 0x50);
        if (plVar1 != (long *)0x0) {
          plVar3 = *(long **)((long)BKBKLJKDINA + 0x28);
          plVar4 = *(long **)((long)BKBKLJKDINA + 0x38);
          plVar5 = *(long **)((long)BKBKLJKDINA + 0x60);
          (**(code **)(*plVar1 + 0x2a8))
                    (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar1,
                     *(undefined8 *)(*plVar1 + 0x2b0));
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x2a8))
                      (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar5,
                       *(undefined8 *)(*plVar5 + 0x2b0));
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x2a8))
                        (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar4,
                         *(undefined8 *)(*plVar4 + 0x2b0));
              if (plVar3 != (long *)0x0) {
                (**(code **)(*plVar3 + 0x2a8))
                          (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar3,
                           *(undefined8 *)(*plVar3 + 0x2b0));
                plVar1 = *(long **)((long)BKBKLJKDINA + 0x40);
                if (plVar1 != (long *)0x0) {
                  uVar6 = 0x3f4ccccd;
                  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x2a8);
                  uVar2 = *(undefined8 *)(*plVar1 + 0x2b0);
                  uVar7 = 0x3f4ccccd;
                  uVar8 = 0x3f4ccccd;
                  goto LAB_00c419fc;
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


// ==== public void ELGNLGIIIAJ(string LCEEABHFOLE) { }   @0xb42b84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__ELGNLGIIIAJ(void *__this,void *LCEEABHFOLE)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_24 [4];
  
  if ((*(long *)((long)__this + 0xa0) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0xa0),0), lVar1 != 0))
  {
    UnityEngine_GameObject__SetActive(lVar1,1,0);
    plVar2 = *(long **)((long)__this + 0xa0);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x5a8))(plVar2,LCEEABHFOLE,*(undefined8 *)(*plVar2 + 0x5b0));
      lVar1 = *(long *)((long)__this + 0xc0);
      if (lVar1 != 0) {
        if ((bRam000000000191ee9a & 1) == 0) {
          func_0x00a67900(&UnityEngine_EventSystems_EventSystem_TypeInfo,1,0);
          func_0x00a67900(&UnityEngine_Object_TypeInfo);
          func_0x00a67900(&Method_UnityEngine_UI_SetPropertyUtility_SetStruct_bool___);
          bRam000000000191ee9a = 1;
        }
        auStack_24[0] = 1;
        uVar3 = UnityEngine_UI_SetPropertyUtility__SetStruct___Il2CppFullySharedGenericStructType_
                          ((char *)(lVar1 + 0xd8),auStack_24,
                           _Method_UnityEngine_UI_SetPropertyUtility_SetStruct_bool___);
        if ((uVar3 & 1) != 0) {
          if (*(char *)(lVar1 + 0xd8) == '\0') {
            if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = UnityEngine_EventSystems_EventSystem__get_current(0);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            uVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
            if ((uVar3 & 1) != 0) {
              if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              lVar5 = UnityEngine_EventSystems_EventSystem__get_current(0);
              if (lVar5 == 0) {
LAB_016bdcf8:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              uVar6 = *(undefined8 *)(lVar5 + 0x40);
              uVar4 = UnityEngine_Component__get_gameObject(lVar1,0);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_UnityEngine_Object_TypeInfo);
              }
              uVar3 = UnityEngine_Object__op_Equality(uVar6,uVar4,0);
              if ((uVar3 & 1) != 0) {
                if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                lVar5 = UnityEngine_EventSystems_EventSystem__get_current(0);
                if (lVar5 == 0) goto LAB_016bdcf8;
                UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(lVar5,0,0);
              }
            }
          }
          UnityEngine_UI_Selectable__OnSetProperty(lVar1);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



// ==== public string GetCountryNameFromID(int id) { }   @0xada0e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * BridgePHP__GetCountryNameFromID(void *__this,int id)

{
  long lVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000001916e0e & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Str_);
    bRam0000000001916e0e = 1;
  }
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar1 = *(long *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 8);
  if (lVar1 != 0) {
    if (id < *(int *)(lVar1 + 0x18)) {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar1 = *(long *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 8);
        if (lVar1 == 0) goto LAB_00bda198;
      }
      if (*(uint *)(lVar1 + 0x18) <= (uint)id) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      puVar2 = (undefined8 *)(lVar1 + (long)id * 8 + 0x20);
    }
    else {
      puVar2 = (undefined8 *)&Str_;
    }
    return (void *)*puVar2;
  }
LAB_00bda198:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void SyncAchievements() { }   @0xadac50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__SyncAchievements(void *__this)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001916e13 & 1) == 0) {
    func_0x00a67900(&System_Action_IAchievement____TypeInfo);
    func_0x00a67900(&Method_BridgePHP__SyncAchievements_b__54_0__);
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&UnityEngine_SocialPlatforms_ILocalUser_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_SyncAchievements);
    bRam0000000001916e13 = 1;
  }
  if (*(char *)((long)__this + 0x40) == '\0') {
    plVar2 = (long *)UnityEngine_Social__get_localUser(0);
    if (plVar2 == (long *)0x0) goto LAB_00bdaed8;
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _UnityEngine_SocialPlatforms_ILocalUser_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_00bdad40;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)
             func_0x00a9e6c4(plVar2,_UnityEngine_SocialPlatforms_ILocalUser_TypeInfo,0);
LAB_00bdad40:
    uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2b) != '\0') {
        *(undefined1 *)((long)__this + 0x40) = 1;
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__GEMDEAMAGPG(_Str_SyncAchievements,0,0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
LAB_00bdaed8:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
            goto LAB_00bdaed8;
            iVar1 = GUIGarage__BGHFPDCINFC(lVar4,0);
            if (0 < iVar1) {
              uVar7 = func_0x00a67b44(_System_Action_IAchievement____TypeInfo);
              System_Action___Il2CppFullySharedGenericType____ctor
                        (uVar7,__this,_Method_BridgePHP__SyncAchievements_b__54_0__,0);
              if ((bRam000000000191cc8d & 1) == 0) {
                func_0x00a67900(&UnityEngine_SocialPlatforms_ISocialPlatform_TypeInfo,0);
                bRam000000000191cc8d = 1;
              }
              plVar2 = (long *)UnityEngine_SocialPlatforms_ActivePlatform__get_Instance();
              if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              lVar4 = *plVar2;
              uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) ==
                      _UnityEngine_SocialPlatforms_ISocialPlatform_TypeInfo) {
                    puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                    goto LAB_014a5b88;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              puVar3 = (undefined8 *)
                       func_0x00a9e6c4(plVar2,_UnityEngine_SocialPlatforms_ISocialPlatform_TypeInfo,
                                       2);
LAB_014a5b88:
                    /* WARNING: Could not recover jumptable at 0x014a5b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar3)(plVar2,uVar7,puVar3[1]);
              return;
            }
          }
        }
      }
    }
  }
  return;
}


// ==== public IEnumerator ServerConnect(IINFOGDGDHA mode, object[] param) { }   @0xadb1a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * BridgePHP__ServerConnect(void *__this,int mode,void *param)

{
  void *pvVar1;
  
  if ((bRam0000000001916e17 & 1) == 0) {
    func_0x00a67900(&BridgePHP__ServerConnect_d__59_TypeInfo);
    bRam0000000001916e17 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_BridgePHP__ServerConnect_d__59_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x20) = __this;
  *(int *)((long)pvVar1 + 0x28) = mode;
  *(void **)((long)pvVar1 + 0x30) = param;
  return pvVar1;
}


// ==== public void UpdateNickNameAndCountry() { }   @0xadb914

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__UpdateNickNameAndCountry(void *__this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *__this_00;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uStack_34;
  
  if ((bRam0000000001916e1c & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Nicknames__);
    func_0x00a67900(&Str_Player_id__);
    func_0x00a67900(&Str_Countries__);
    func_0x00a67900(&Str__and_);
    bRam0000000001916e1c = 1;
  }
  if (*(long *)((long)__this + 0x50) == 0) {
    return;
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
    uStack_34 = *(undefined4 *)(lVar4 + 0x10);
    uVar1 = System_Int32__ToString(&uStack_34,0);
    if ((*(long *)((long)__this + 0x50) != 0) &&
       (lVar4 = *(long *)(*(long *)((long)__this + 0x50) + 0x10), lVar4 != 0)) {
      uVar2 = System_Int32__ToString(lVar4 + 0x10,0);
      uVar1 = System_String__Concat(_Str_Player_id__,uVar1,_Str__and_,uVar2,0);
      Main__GEMDEAMAGPG(uVar1,0,0);
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (((lVar4 != 0) && (*(long *)((long)__this + 0x50) != 0)) &&
         (lVar5 = *(long *)(*(long *)((long)__this + 0x50) + 0x10), lVar5 != 0)) {
        uVar1 = System_String__Concat
                          (_Str_Nicknames__,*(undefined8 *)(lVar4 + 0x20),_Str__and_,
                           *(undefined8 *)(lVar5 + 0x18),0);
        Main__GEMDEAMAGPG(uVar1,0,0);
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar4 != 0) {
          uStack_34 = *(undefined4 *)(lVar4 + 0x14);
          uVar1 = System_Int32__ToString(&uStack_34,0);
          if ((*(long *)((long)__this + 0x50) != 0) &&
             (lVar4 = *(long *)(*(long *)((long)__this + 0x50) + 0x10), lVar4 != 0)) {
            uVar2 = System_Int32__ToString(lVar4 + 0x28,0);
            uVar1 = System_String__Concat(_Str_Countries__,uVar1,_Str__and_,uVar2,0);
            Main__GEMDEAMAGPG(uVar1,0,0);
            if (cRam0000000001916e67 == '\0') {
              func_0x00a67900(&Main_TypeInfo);
              cRam0000000001916e67 = '\x01';
            }
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar4 = _Main_TypeInfo;
            if (((*(long *)((long)__this + 0x50) != 0) &&
                (lVar5 = *(long *)(*(long *)((long)__this + 0x50) + 0x10), lVar5 != 0)) &&
               (lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar6 != 0)) {
              *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(lVar5 + 0x10);
              if (cRam0000000001916e67 == '\0') {
                func_0x00a67900(&Main_TypeInfo);
                cRam0000000001916e67 = '\x01';
                lVar4 = _Main_TypeInfo;
              }
              if (*(int *)(lVar4 + 0xe0) == 0) {
                func_0x00a67a30();
                lVar4 = _Main_TypeInfo;
              }
              if (((*(long *)((long)__this + 0x50) != 0) &&
                  (lVar5 = *(long *)(*(long *)((long)__this + 0x50) + 0x10), lVar5 != 0)) &&
                 (__this_00 = *(void **)(*(long *)(lVar4 + 0xb8) + 8), __this_00 != (void *)0x0)) {
                DAFNMLEKHAD__EMADJEPNIKK(__this_00,*(void **)(lVar5 + 0x18));
                if (cRam0000000001916e67 == '\0') {
                  func_0x00a67900(&Main_TypeInfo);
                  cRam0000000001916e67 = '\x01';
                }
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (((*(long *)((long)__this + 0x50) != 0) &&
                    (lVar4 = *(long *)(*(long *)((long)__this + 0x50) + 0x10), lVar4 != 0)) &&
                   (lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar5 != 0)) {
                  *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(lVar4 + 0x28);
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
                    uVar1 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
                    if ((uVar3 & 1) != 0) {
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
                        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                           (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 != 0
                           )) {
                          GUIGarage__CDFFAINFEDD(lVar4,0);
                          if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                             (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20),
                             lVar4 != 0)) {
                            GUIGarage__EOGBHKMFBGE(lVar4,0);
                            return;
                          }
                        }
                        goto LAB_00bdbd48;
                      }
                    }
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
LAB_00bdbd48:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private string GenerateRandomMd5() { }   @0xadc74c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * BridgePHP__GenerateRandomMd5(void *__this)

{
  if ((bRam0000000001916e21 & 1) == 0) {
    func_0x00a67900(&string_TypeInfo);
    bRam0000000001916e21 = 1;
  }
  return (void *)**(undefined8 **)(_string_TypeInfo + 0xb8);
}



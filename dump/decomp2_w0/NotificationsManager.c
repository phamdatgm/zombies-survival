// ==== public static void MLGGDIOEMLH() { }   @0xaed964

/* WARNING: Removing unreachable block (ram,0x0146288c) */
/* WARNING: Removing unreachable block (ram,0x014628a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager__MLGGDIOEMLH(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar10;
  int *piVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined1 auVar15 [12];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000001916ea7 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&UnityEngine_Debug_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Permission_POST_NOTIFICATIONS__true);
    func_0x00a67900(&Str_android_permission_POST_NOTIFICATIONS);
    func_0x00a67900(&Str_Permission_POST_NOTIFICATIONS__false___T);
    bRam0000000001916ea7 = 1;
  }
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Application__get_isEditor(0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iVar1 = Main__FAOGGIELDDF(0);
    if (0x20 < iVar1) {
      uVar2 = UnityEngine_Android_Permission__HasUserAuthorizedPermission
                        (_Str_android_permission_POST_NOTIFICATIONS,0);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = _Str_Permission_POST_NOTIFICATIONS__true;
        uVar9 = 0;
        if ((bRam000000000191b9d8 & 1) == 0) {
          func_0x00a67900(&UnityEngine_Debug_TypeInfo,0);
          func_0x00a67900(&UnityEngine_ILogger_TypeInfo);
          bRam000000000191b9d8 = 1;
          uVar9 = extraout_x1;
        }
        if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          uVar9 = extraout_x1_00;
        }
        if (cRam000000000191aefe == '\0') {
          func_0x00a67900(&UnityEngine_Debug_TypeInfo,uVar9);
          cRam000000000191aefe = '\x01';
        }
        if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        plVar12 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo + 0xb8) + 8);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        lVar10 = *plVar12;
        uVar2 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar2 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == _UnityEngine_ILogger_TypeInfo) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar11 + 3) * 0x10 + 0x138);
              goto LAB_0146a1ec;
            }
            uVar2 = uVar2 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar2 != 0);
        }
        puVar8 = (undefined8 *)func_0x00a9e6c4(plVar12,_UnityEngine_ILogger_TypeInfo,3);
LAB_0146a1ec:
                    /* WARNING: Could not recover jumptable at 0x0146a204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar8)(plVar12,3,uVar3,puVar8[1]);
        return;
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(_Str_Permission_POST_NOTIFICATIONS__false___T,0,0);
      lVar10 = _Str_android_permission_POST_NOTIFICATIONS;
      if ((bRam000000000191b578 & 1) == 0) {
        func_0x00a67900(&string___TypeInfo,0);
        bRam000000000191b578 = 1;
      }
      if (lVar10 == 0) {
        return;
      }
      lVar5 = func_0x00a679a0(_string___TypeInfo,1);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      *(long *)(lVar5 + 0x20) = lVar10;
      if ((bRam000000000191b579 & 1) == 0) {
        func_0x00a67900(&object___TypeInfo);
        func_0x00a67900(&Str_requestUserPermissions);
        bRam000000000191b579 = 1;
      }
      if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) == 0)) {
        return;
      }
      lVar10 = UnityEngine_Android_Permission__GetUnityPermissions();
      plVar12 = (long *)func_0x00a679a0(_object___TypeInfo,3);
      lVar6 = UnityEngine_Android_AndroidApp__get_Activity();
      if (plVar12 != (long *)0x0) {
        if ((lVar6 == 0) ||
           (lVar7 = func_0x00a67a34(lVar6,*(undefined8 *)(*plVar12 + 0x40)), lVar7 != 0)) {
          if ((int)plVar12[3] == 0) {
LAB_014628e8:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          plVar12[4] = lVar6;
          lVar6 = func_0x00a67a34(lVar5,*(undefined8 *)(*plVar12 + 0x40));
          if (lVar6 != 0) {
            if ((1 < *(uint *)(plVar12 + 3)) && (plVar12[5] = lVar5, 2 < *(uint *)(plVar12 + 3))) {
              plVar12[6] = 0;
              uVar3 = _Str_requestUserPermissions;
              if (lVar10 != 0) {
                if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b50();
                }
                uVar13 = *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x18);
                uVar9 = UnityEngine__AndroidJNIHelper__GetSignature(plVar12);
                uVar3 = UnityEngine__AndroidJNIHelper__GetMethodID(uVar13,uVar3,uVar9,1);
                lVar5 = tpidr_el0;
                lStack_48 = *(long *)(lVar5 + 0x28);
                if ((bRam000000000191b543 & 1) == 0) {
                  func_0x00a67900(&Method_UnityEngine_AndroidJavaObject__CallStatic__);
                  func_0x00a67900(&Method_System_Span_jvalue___ctor__);
                  bRam000000000191b543 = 1;
                }
                if ((plVar12 == (long *)0x0) || (uVar2 = plVar12[3], uVar2 == 0)) {
                  uVar9 = 0;
                  uVar13 = 0;
                }
                else {
                  if ((uVar2 & 0xffffffff) == 0) {
                    puVar14 = (undefined1 *)0x0;
                  }
                  else {
                    puVar14 = auStack_60 +
                              -((-(uVar2 >> 0x1f & 1) & 0xfffffff800000000 |
                                (uVar2 & 0xffffffff) << 3) + 0xf & 0xfffffffffffffff0);
                  }
                  func_0x016decb0(puVar14,0);
                  uStack_58 = 0;
                  uStack_50 = 0;
                  func_0x00c90098(&uStack_58,puVar14,uVar2 & 0xffffffff,
                                  _Method_System_Span_jvalue___ctor__);
                  uVar9 = uStack_58;
                  uVar13 = uStack_50;
                }
                UnityEngine_AndroidJNIHelper__CreateJNIArgArray(plVar12,uVar9,uVar13);
                if (*(long *)(lVar10 + 0x18) != 0) {
                  UnityEngine_AndroidJNISafe__CallStaticVoidMethod
                            (*(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x18),uVar3,uVar9,uVar13);
                  UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar12,uVar9,uVar13);
                  while( true ) {
                    if (*(long *)(lVar5 + 0x28) == lStack_48) {
                      return;
                    }
                    auVar15 = func_0x016dec70();
                    if (auVar15._8_4_ != 1) break;
                    plVar4 = (long *)func_0x016dec50(auVar15._0_8_);
                    lVar10 = *plVar4;
                    func_0x016dec60();
                    UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar12,uVar9,uVar13);
                    if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_throw_967b48(lVar10);
                    }
                  }
                  UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar12,uVar9,uVar13);
                  func_0x00b65214(auVar15._0_8_);
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b48(0);
                }
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              goto LAB_014628f8;
            }
            goto LAB_014628e8;
          }
        }
        uVar3 = func_0x00a67b74();
        func_0x00a67a20(uVar3,0);
      }
LAB_014628f8:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
}


// ==== public static void BLNLJPJIGHC() { }   @0xaee348

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager__BLNLJPJIGHC(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_28;
  
  if ((bRam0000000001916eab & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_3days);
    func_0x00a67900(&Str_NOTIF_1);
    func_0x00a67900(&Str_NOTIF_2);
    func_0x00a67900(&Str_7days);
    bRam0000000001916eab = 1;
  }
  uStack_28 = 0;
  if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(char **)(_NotificationsManager_TypeInfo + 0xb8) == '\0') {
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
  lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x88) != 1) {
      return;
    }
    if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uStack_28 = System_DateTime__get_Now(0);
    uVar1 = System_DateTime__AddDays(0x4008000000000000,&uStack_28,0);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Translate_TypeInfo);
    }
    if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
      uVar2 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_NOTIF_1,0);
      if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_NotificationsManager_TypeInfo);
      }
      NotificationsManager__KJLOEDMCBNA(uVar1,uVar2,_Str_3days,1);
      uStack_28 = System_DateTime__get_Now(0);
      uVar1 = System_DateTime__AddDays(0x401c000000000000,&uStack_28,0);
      if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
        uVar2 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_NOTIF_2,0);
        NotificationsManager__KJLOEDMCBNA(uVar1,uVar2,_Str_7days,2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



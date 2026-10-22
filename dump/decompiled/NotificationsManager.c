/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class NotificationsManager : MonoBehaviour // TypeDefIndex: 5098
{
	// Fields
	public static bool DIFNGFMLPMP; // 0x0
	public static bool NCGIJLIIMNI; // 0x1
	private float LJFJMBBDNGJ; // 0x20
	private float MMBNLNPNHHB; // 0x24
	public static Dictionary<string, NotificationsManager.KNHJLFNENAL> AOEAAKHNCPB; // 0x8

	// Methods

	public static void CMOPLEDPKKH(bool PODMFKIIGJD) { }

	public static void LLFJNKAPDIM(string DJBBLEPCHOA, int HGOAMHBFBIH, bool EKONHEEHPBE) { }

	public static void MLGGDIOEMLH() { }

	public static void NINLDPJFMPD() { }

	public void HCLOPHBLMOI() { }

	public void .ctor() { }

	public static void HLMKMIFKIBM() { }

	public static void BLNLJPJIGHC() { }

	public void KHDFDGMBOIJ() { }

	public static void HFGMIIHKBPC(EventContest FMJNFPDPLGM) { }

	private static void .cctor() { }

	public static void KJLOEDMCBNA(DateTime FELHOKFDBBD, string NGLPJEMCGCD, string DJBBLEPCHOA, int HGOAMHBFBIH) { }
}
*/

// ==== public static void CMOPLEDPKKH(bool PODMFKIIGJD) { }   @0xaed6ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager__CMOPLEDPKKH(bool PODMFKIIGJD)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000001916ea5 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                   );
    func_0x00a67900(&NotificationsManager_TypeInfo);
    bRam0000000001916ea5 = 1;
  }
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Application__get_isEditor(0);
  if ((uVar2 & 1) == 0) {
    JCHCJLKJJNF__HMHJLCKJCAN();
    JCHCJLKJJNF__AEPHMLOMPBG(0);
  }
  if (PODMFKIIGJD) {
    if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = NotificationsManager.AOEAAKHNCPB;
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0x20);
      if (0 < iVar1) {
        lVar4 = *(long *)(lVar3 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50(0,
                              _Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                             );
        }
        System_Array__Clear(lVar4,0,*(undefined4 *)(lVar4 + 0x18),0);
        *(undefined8 *)(lVar3 + 0x20) = 0xffffffff00000000;
        *(undefined4 *)(lVar3 + 0x28) = 0;
        System_Array__Clear(*(undefined8 *)(lVar3 + 0x18),0,iVar1,0);
      }
      *(int *)(lVar3 + 0x2c) = *(int *)(lVar3 + 0x2c) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  return;
}


// ==== public static void LLFJNKAPDIM(string DJBBLEPCHOA, int HGOAMHBFBIH, bool EKONHEEHPBE) { }   @0xaed7b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager__LLFJNKAPDIM(void *DJBBLEPCHOA,int HGOAMHBFBIH,bool EKONHEEHPBE)

{
  ulong uVar1;
  long lVar2;
  void *CIDKMFLFJEJ;
  byte *pbVar3;
  long lStack_38;
  
  if ((bRam0000000001916ea6 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                   );
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&Str_PushLocalDelete_with_key__);
    bRam0000000001916ea6 = 1;
  }
  if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  pbVar3 = *(byte **)(_NotificationsManager_TypeInfo + 0xb8);
  if ((EKONHEEHPBE & *pbVar3) != 0) {
    if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      pbVar3 = *(byte **)(_NotificationsManager_TypeInfo + 0xb8);
    }
    if (*(long *)(pbVar3 + 8) != 0) {
      uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                        (*(long *)(pbVar3 + 8),DJBBLEPCHOA,
                         _Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                        );
      if ((uVar1 & 1) == 0) goto LAB_00bed8d4;
      if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar2 = NotificationsManager.AOEAAKHNCPB;
      if (lVar2 != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item
                  (lVar2,DJBBLEPCHOA,&lStack_38,
                   _Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                  );
        if (lStack_38 != 0) {
          *(undefined1 *)(lStack_38 + 0x10) = 0;
          goto LAB_00bed8d4;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
LAB_00bed8d4:
  CIDKMFLFJEJ = (void *)System_String__Concat(_Str_PushLocalDelete_with_key__,DJBBLEPCHOA,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(CIDKMFLFJEJ,false);
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Application__get_isEditor(0);
  if ((uVar1 & 1) == 0) {
    JCHCJLKJJNF__JHEDFDCJBDE(HGOAMHBFBIH,0);
  }
  return;
}


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
        plVar12 = *(long **)(UnityEngine_Debug.<statics> + 8);
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


// ==== public static void NINLDPJFMPD() { }   @0xaedaa8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager__NINLDPJFMPD(void)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_68;
  
  if ((bRam0000000001916ea8 & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_Enumerator_string__NotificationsMan
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_Enumerator_string__NotificationsMan
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_Enumerator_string__NotificationsMan
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                   );
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&System_TimeSpan_TypeInfo);
    func_0x00a67900(&Str_Delete_NOTIFICATION__);
    bRam0000000001916ea8 = 1;
  }
  uStack_80 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  uStack_68 = 0;
  if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = NotificationsManager.AOEAAKHNCPB;
  if (lVar2 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator
              (lVar2,&lStack_d8,
               _Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF);
    uStack_98 = uStack_d0;
    lStack_a0 = lStack_d8;
    uStack_88 = uStack_c0;
    uStack_90 = uStack_c8;
    uStack_80 = uStack_b8;
    while( true ) {
      uVar3 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext
                        (&lStack_a0,
                         _Method_System_Collections_Generic_Dictionary_Enumerator_string__NotificationsMan
                        );
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose
                  (&lStack_a0,
                   _Method_System_Collections_Generic_Dictionary_Enumerator_string__NotificationsMan
                  );
        return;
      }
      func_0x00b7fb78(&lStack_a0,&lStack_d8,
                      _Method_System_Collections_Generic_Dictionary_Enumerator_string__NotificationsMan
                     );
      lStack_b0 = lStack_d8;
      uStack_a8 = uStack_d0;
      func_0x00b7fd54(&lStack_b0,&lStack_d8,
                      _Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                     );
      if (lStack_d8 == 0) break;
      uVar5 = *(undefined8 *)(lStack_d8 + 0x18);
      if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = System_DateTime__get_Now(0);
      uStack_68 = System_DateTime__op_Subtraction(uVar5,uVar4,0);
      func_0x00b7fd54(&lStack_b0,&lStack_d8,
                      _Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                     );
      if (lStack_d8 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if (*(char *)(lStack_d8 + 0x10) != '\0') {
        if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        dVar6 = (double)System_TimeSpan__get_TotalSeconds(&uStack_68,0);
        if (dVar6 < 15.0) {
          func_0x00b7fc68(&lStack_b0,&lStack_d8,
                          _Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                         );
          uVar5 = System_String__Concat(_Str_Delete_NOTIFICATION__,lStack_d8,0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          Main__GEMDEAMAGPG(uVar5,0,0);
          func_0x00b7fc68(&lStack_b0,&lStack_d8,
                          _Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                         );
          lVar2 = lStack_d8;
          func_0x00b7fd54(&lStack_b0,&lStack_d8,
                          _Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                         );
          if (lStack_d8 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          uVar1 = *(undefined4 *)(lStack_d8 + 0x20);
          if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          NotificationsManager__LLFJNKAPDIM(lVar2,uVar1,1);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void HCLOPHBLMOI() { }   @0xaede4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager__HCLOPHBLMOI(void *__this)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  
  if ((bRam0000000001916ea9 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    bRam0000000001916ea9 = 1;
  }
  fVar2 = (float)UnityEngine_Time__get_unscaledTime(0);
  if (this.LJFJMBBDNGJ < fVar2 - this.MMBNLNPNHHB) {
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
    lVar1 = Main.FBDDKIOEKDM;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (lVar1/*DAFNMLEKHAD*/.HDLOJBHJCEJ == 1) {
      if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      NotificationsManager__NINLDPJFMPD();
    }
    uVar3 = UnityEngine_Time__get_unscaledTime(0);
    this.MMBNLNPNHHB = uVar3;
  }
  return;
}


// ==== public void .ctor() { }   @0xaedf48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager___ctor(void *__this)

{
  this.LJFJMBBDNGJ = 0x40a00000;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public static void HLMKMIFKIBM() { }   @0xaedf58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager__HLMKMIFKIBM(void)

{
  void *FELHOKFDBBD;
  undefined8 uStack_28;
  
  if ((bRam0000000001916eaa & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&Str_Bla_bla__test_notifications_);
    func_0x00a67900(&Str_test);
    bRam0000000001916eaa = 1;
  }
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uStack_28 = System_DateTime__get_Now(0);
  FELHOKFDBBD = (void *)System_DateTime__AddSeconds(0x403e000000000000,&uStack_28,0);
  if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_NotificationsManager_TypeInfo);
  }
  NotificationsManager__KJLOEDMCBNA(FELHOKFDBBD,_Str_Bla_bla__test_notifications_,_Str_test,1);
  return;
}


// ==== public static void KJLOEDMCBNA(DateTime FELHOKFDBBD, string NGLPJEMCGCD, string DJBBLEPCHOA, int HGOAMHBFBIH) { }   @0xaee030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager__KJLOEDMCBNA
               (void *FELHOKFDBBD,void *NGLPJEMCGCD,void *DJBBLEPCHOA,int HGOAMHBFBIH)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  char *pcVar5;
  long lVar6;
  void *pvStack_48;
  
  pvStack_48 = FELHOKFDBBD;
  if ((bRam0000000001916eaf & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&BFECKMLPMOK_TypeInfo);
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                   );
    func_0x00a67900(&NotificationsManager_KNHJLFNENAL_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&Str___key__);
    func_0x00a67900(&Str_Zombie_Derby__Pixel_Survival);
    func_0x00a67900(&Str_app_icon);
    func_0x00a67900(&Str_PushLocalStart__);
    bRam0000000001916eaf = 1;
  }
  if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  pcVar5 = *(char **)(_NotificationsManager_TypeInfo + 0xb8);
  if (*pcVar5 == '\0') {
    return;
  }
  if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    pcVar5 = *(char **)(_NotificationsManager_TypeInfo + 0xb8);
  }
  if (*(long *)(pcVar5 + 8) != 0) {
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                      (*(long *)(pcVar5 + 8),DJBBLEPCHOA,
                       _Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                      );
    if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_NotificationsManager_TypeInfo);
    }
    lVar6 = NotificationsManager.AOEAAKHNCPB;
    lVar2 = func_0x00a67b44(_NotificationsManager_KNHJLFNENAL_TypeInfo);
    *(undefined1 *)(lVar2 + 0x10) = 1;
    System_Object___ctor(lVar2,0);
    *(void **)(lVar2 + 0x18) = FELHOKFDBBD;
    *(int *)(lVar2 + 0x20) = HGOAMHBFBIH;
    if (lVar6 != 0) {
      if ((uVar1 & 1) == 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                  (lVar6,DJBBLEPCHOA,lVar2,
                   _Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                  );
      }
      else {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item
                  (lVar6,DJBBLEPCHOA,lVar2,
                   _Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                  );
      }
      if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Application__get_isEditor(0);
      if ((uVar1 & 1) == 0) {
        if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = System_DateTime__get_Now(0);
        uVar3 = System_DateTime__op_Subtraction(FELHOKFDBBD,uVar3,0);
        pvVar4 = (void *)func_0x00a67b44(_BFECKMLPMOK_TypeInfo);
        BFECKMLPMOK___ctor(pvVar4,0);
        if (pvVar4 == (void *)0x0) goto LAB_00bee344;
        *(int *)((long)pvVar4 + 0x10) = HGOAMHBFBIH;
        *(undefined8 *)((long)pvVar4 + 0x38) = uVar3;
        uVar3 = _Str_Zombie_Derby__Pixel_Survival;
        *(undefined1 *)((long)pvVar4 + 0x59) = 1;
        *(undefined4 *)((long)pvVar4 + 0x94) = 1;
        *(undefined8 *)((long)pvVar4 + 0x40) = uVar3;
        *(void **)((long)pvVar4 + 0x48) = NGLPJEMCGCD;
        *(undefined8 *)((long)pvVar4 + 0x50) = uVar3;
        *(undefined8 *)((long)pvVar4 + 0xa8) = _Str_app_icon;
        JCHCJLKJJNF__PKKNJHMEIKJ(pvVar4);
      }
      if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = System_DateTime__ToString(&pvStack_48,0);
      pvVar4 = (void *)System_String__Concat(_Str_PushLocalStart__,uVar3,_Str___key__,DJBBLEPCHOA,0)
      ;
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      Main__GEMDEAMAGPG(pvVar4,false);
      return;
    }
  }
LAB_00bee344:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
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
  if (NotificationsManager.DIFNGFMLPMP == '\0') {
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
  lVar3 = Main.FBDDKIOEKDM;
  if (lVar3 != 0) {
    if (lVar3/*DAFNMLEKHAD*/.HDLOJBHJCEJ != 1) {
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
    if (Translate.KECGFPHIEHF != 0) {
      uVar2 = Translate__JJJNIPAKLJF(Translate.KECGFPHIEHF,_Str_NOTIF_1,0);
      if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_NotificationsManager_TypeInfo);
      }
      NotificationsManager__KJLOEDMCBNA(uVar1,uVar2,_Str_3days,1);
      uStack_28 = System_DateTime__get_Now(0);
      uVar1 = System_DateTime__AddDays(0x401c000000000000,&uStack_28,0);
      if (Translate.KECGFPHIEHF != 0) {
        uVar2 = Translate__JJJNIPAKLJF(Translate.KECGFPHIEHF,_Str_NOTIF_2,0);
        NotificationsManager__KJLOEDMCBNA(uVar1,uVar2,_Str_7days,2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void KHDFDGMBOIJ() { }   @0xaee57c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager__KHDFDGMBOIJ(void *__this)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((bRam0000000001916eac & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&Str_Notifications_Manager__Init);
    bRam0000000001916eac = 1;
  }
  if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (NotificationsManager.DIFNGFMLPMP != '\0') {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  iVar1 = Main__FAOGGIELDDF(0);
  if (iVar1 < 0x21) {
LAB_00bee75c:
    if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    NotificationsManager.DIFNGFMLPMP = 1;
    UnityEngine_Behaviour__set_enabled(__this,1,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__GEMDEAMAGPG(_Str_Notifications_Manager__Init,0,0);
    NotificationsManager__CMOPLEDPKKH(1);
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
    if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (NotificationsManager.DIFNGFMLPMP == '\0') {
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
    lVar4 = Main.FBDDKIOEKDM;
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x88) != 1) {
        return;
      }
      if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      System_DateTime__get_Now(0);
      uVar2 = System_DateTime__AddDays(0x4008000000000000,&stack0xffffffffffffffd8,0);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Translate_TypeInfo);
      }
      if (Translate.KECGFPHIEHF != 0) {
        uVar3 = Translate__JJJNIPAKLJF(Translate.KECGFPHIEHF,_Str_NOTIF_1,0);
        if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_NotificationsManager_TypeInfo);
        }
        NotificationsManager__KJLOEDMCBNA(uVar2,uVar3,_Str_3days,1);
        System_DateTime__get_Now(0);
        uVar2 = System_DateTime__AddDays(0x401c000000000000,&stack0xffffffffffffffd8,0);
        if (Translate.KECGFPHIEHF != 0) {
          uVar3 = Translate__JJJNIPAKLJF(Translate.KECGFPHIEHF,_Str_NOTIF_2,0);
          NotificationsManager__KJLOEDMCBNA(uVar2,uVar3,_Str_7days,2);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
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
  lVar4 = Main.FBDDKIOEKDM;
  if (lVar4 != 0) {
    DAFNMLEKHAD__IEECMAPKMJI(lVar4,1);
    if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    NotificationsManager.NCGIJLIIMNI = 1;
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar4 = Main.FBDDKIOEKDM;
    if (lVar4 != 0) {
      lVar4 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar4,0);
      if (lVar4 != 0) {
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
        lVar4 = Main.FBDDKIOEKDM;
        if ((lVar4 == 0) || (lVar4 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar4,0), lVar4 == 0))
        goto LAB_00bee7cc;
        uVar5 = DJKGLJOCFCE__MCDLFBJCNNA(lVar4,0);
        if ((uVar5 & 1) == 0) {
          return;
        }
      }
      if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      NotificationsManager__MLGGDIOEMLH();
      goto LAB_00bee75c;
    }
  }
LAB_00bee7cc:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public static void HFGMIIHKBPC(EventContest FMJNFPDPLGM) { }   @0xaeea0c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager__HFGMIIHKBPC(void *FMJNFPDPLGM)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  void *CIDKMFLFJEJ;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  byte abStack_60 [4];
  undefined4 uStack_5c;
  undefined8 uStack_58;
  
  if ((bRam0000000001916ead & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&Level_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_EVENT_NOTIFICATION_ENDING);
    func_0x00a67900(&Str___Att__);
    func_0x00a67900(&Str___lvl_id__);
    func_0x00a67900(&Str_ev_reward);
    func_0x00a67900(&Str_Error_in_StartEventNotifications__lvl__);
    func_0x00a67900(&Str___HaveResults__);
    func_0x00a67900(&Str_Ev_ID__);
    func_0x00a67900(&Str_EVENT_NOTIFICATON_START);
    func_0x00a67900(&Str_StartEventNotifications__);
    func_0x00a67900(&Str_EVENT_NOTIFICATON_REWARD);
    func_0x00a67900(&Str___playerLevel_EventId__);
    func_0x00a67900(&Str___playerLevel__);
    func_0x00a67900(&Str___TimeLeft__);
    func_0x00a67900(&Str_ev_ending);
    func_0x00a67900(&Str_ev_start);
    bRam0000000001916ead = 1;
  }
  uStack_58 = 0;
  uStack_5c = 0;
  abStack_60[0] = 0;
  if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (NotificationsManager.DIFNGFMLPMP == '\0') {
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
  lVar11 = Main.FBDDKIOEKDM;
  if (lVar11 == 0) goto LAB_00bef304;
  if (*(int *)(lVar11 + 0x88) != 1) {
    return;
  }
  if (FMJNFPDPLGM == (void *)0x0) goto LAB_00bef304;
  if ((*(uint *)((long)FMJNFPDPLGM + 0x18) & 0xfffffffe) == 6) {
    return;
  }
  piVar2 = (int *)((long)FMJNFPDPLGM + 0x10);
  uVar4 = System_Int32__ToString(piVar2,0);
  uVar4 = System_String__Concat(_Str_StartEventNotifications__,uVar4,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar4,0,0);
  iVar1 = *(int *)((long)FMJNFPDPLGM + 0x10) + 10;
  if (*(int *)((long)FMJNFPDPLGM + 0x1c) != 1) {
    if (*(int *)((long)FMJNFPDPLGM + 0x1c) != 0) {
      return;
    }
    if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uStack_58 = System_DateTime__get_Now(0);
    iVar3 = EventContest__get_TimeLeft(FMJNFPDPLGM);
    uVar4 = System_DateTime__AddSeconds((double)iVar3,&uStack_58,0);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Translate_TypeInfo);
    }
    if (Translate.KECGFPHIEHF == 0) goto LAB_00bef304;
    uVar5 = Translate__JJJNIPAKLJF
                      (Translate.KECGFPHIEHF,_Str_EVENT_NOTIFICATON_START,0);
    uVar6 = System_Int32__ToString(piVar2,0);
    puVar12 = (undefined8 *)&Str_ev_start;
    goto LAB_00beecf4;
  }
  iVar3 = *(int *)((long)FMJNFPDPLGM + 0x14) + 100;
  if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar7 = (long *)Level__FHMGLDDPEDJ(iVar3,0);
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
  lVar11 = Main.FBDDKIOEKDM;
  if (lVar11 == 0) goto LAB_00bef304;
  plVar8 = (long *)DAFNMLEKHAD__PJDAAMCNMHJ(lVar11,iVar3);
  uVar4 = _Str_Error_in_StartEventNotifications__lvl__;
  if ((plVar7 == (long *)0x0) || (plVar8 == (long *)0x0)) {
    if (plVar7 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    }
    uVar6 = _Str___playerLevel__;
    if (plVar8 == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    }
    CIDKMFLFJEJ = (void *)System_String__Concat(uVar4,uVar5,uVar6,uVar9,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__EEKNCFLMGDP(CIDKMFLFJEJ);
    return;
  }
  lVar11 = func_0x00a679a0(_string___TypeInfo,0xc);
  if (lVar11 == 0) goto LAB_00bef304;
  if (*(int *)(lVar11 + 0x18) == 0) {
LAB_00bef308:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar11 + 0x20) = _Str_Ev_ID__;
  uVar4 = System_Int32__ToString(piVar2,0);
  if ((*(uint *)(lVar11 + 0x18) < 2) ||
     (*(undefined8 *)(lVar11 + 0x28) = uVar4, *(uint *)(lVar11 + 0x18) == 2)) goto LAB_00bef308;
  *(undefined8 *)(lVar11 + 0x30) = _Str___lvl_id__;
  if (plVar7[10] == 0) goto LAB_00bef304;
  uVar4 = System_Int32__ToString(plVar7[10] + 0x10,0);
  if ((*(uint *)(lVar11 + 0x18) < 4) ||
     (*(undefined8 *)(lVar11 + 0x38) = uVar4, *(uint *)(lVar11 + 0x18) == 4)) goto LAB_00bef308;
  *(undefined8 *)(lVar11 + 0x40) = _Str___playerLevel_EventId__;
  uStack_5c = DJKGLJOCFCE__EECPDELFCIL(plVar8,0);
  uVar4 = System_Int32__ToString(&uStack_5c,0);
  if ((*(uint *)(lVar11 + 0x18) < 6) ||
     (*(undefined8 *)(lVar11 + 0x48) = uVar4, *(uint *)(lVar11 + 0x18) == 6)) goto LAB_00bef308;
  *(undefined8 *)(lVar11 + 0x50) = _Str___Att__;
  uStack_5c = *(undefined4 *)((long)plVar8 + 0x3c);
  uVar4 = System_Int32__ToString(&uStack_5c,0);
  if ((*(uint *)(lVar11 + 0x18) < 8) ||
     (*(undefined8 *)(lVar11 + 0x58) = uVar4, *(uint *)(lVar11 + 0x18) == 8)) goto LAB_00bef308;
  *(undefined8 *)(lVar11 + 0x60) = _Str___TimeLeft__;
  uStack_5c = EventContest__get_TimeLeft(FMJNFPDPLGM);
  uVar4 = System_Int32__ToString(&uStack_5c,0);
  if ((*(uint *)(lVar11 + 0x18) < 10) ||
     (*(undefined8 *)(lVar11 + 0x68) = uVar4, *(uint *)(lVar11 + 0x18) == 10)) goto LAB_00bef308;
  *(undefined8 *)(lVar11 + 0x70) = _Str___HaveResults__;
  abStack_60[0] = DJKGLJOCFCE__EDAGFIGCPAE(plVar8,0);
  abStack_60[0] = abStack_60[0] & 1;
  if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_bool_TypeInfo);
  }
  uVar4 = System_Boolean__ToString(abStack_60,0);
  if (*(uint *)(lVar11 + 0x18) < 0xc) goto LAB_00bef308;
  *(undefined8 *)(lVar11 + 0x78) = uVar4;
  uVar4 = System_String__Concat(lVar11,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar4,0,0);
  iVar3 = EventContest__get_TimeLeft(FMJNFPDPLGM);
  if (iVar3 < 0x1c21) {
LAB_00bef014:
    iVar3 = DJKGLJOCFCE__EECPDELFCIL(plVar8,0);
    if ((iVar3 == *piVar2) && (0 < *(int *)((long)plVar8 + 0x3c))) {
      uVar4 = System_Int32__ToString(piVar2,0);
      uVar4 = System_String__Concat(_Str_ev_ending,uVar4,0);
      if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_NotificationsManager_TypeInfo);
      }
      NotificationsManager__LLFJNKAPDIM(uVar4,iVar1,0);
    }
  }
  else {
    if (plVar7[10] == 0) goto LAB_00bef304;
    if ((((*(int *)(plVar7[10] + 0x10) != *piVar2) ||
         (iVar3 = DJKGLJOCFCE__EECPDELFCIL(plVar8,0), iVar3 != *piVar2)) ||
        (*(int *)((long)plVar8 + 0x3c) != 0)) &&
       (iVar3 = DJKGLJOCFCE__EECPDELFCIL(plVar8,0), iVar3 == *piVar2)) goto LAB_00bef014;
    if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uStack_58 = System_DateTime__get_Now(0);
    iVar3 = EventContest__get_TimeLeft(FMJNFPDPLGM);
    uVar4 = System_DateTime__AddSeconds((double)(iVar3 + -0x1c20),&uStack_58,0);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Translate_TypeInfo);
    }
    if (Translate.KECGFPHIEHF == 0) goto LAB_00bef304;
    uVar5 = Translate__JJJNIPAKLJF
                      (Translate.KECGFPHIEHF,_Str_EVENT_NOTIFICATION_ENDING,0);
    uVar6 = System_Int32__ToString(piVar2,0);
    uVar6 = System_String__Concat(_Str_ev_ending,uVar6,0);
    if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_NotificationsManager_TypeInfo);
    }
    NotificationsManager__KJLOEDMCBNA(uVar4,uVar5,uVar6,iVar1);
  }
  if (plVar7[10] != 0) {
    if (*(int *)(plVar7[10] + 0x10) != *piVar2) {
      return;
    }
    iVar3 = DJKGLJOCFCE__EECPDELFCIL(plVar8,0);
    if (iVar3 != *piVar2) {
      return;
    }
    if (*(int *)((long)plVar8 + 0x3c) < 1) {
      return;
    }
    uVar10 = DJKGLJOCFCE__EDAGFIGCPAE(plVar8,0);
    if ((uVar10 & 1) == 0) {
      return;
    }
    if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uStack_58 = System_DateTime__get_Now(0);
    iVar3 = EventContest__get_TimeLeft(FMJNFPDPLGM);
    uVar4 = System_DateTime__AddSeconds((double)iVar3,&uStack_58,0);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Translate_TypeInfo);
    }
    if (Translate.KECGFPHIEHF != 0) {
      uVar5 = Translate__JJJNIPAKLJF
                        (Translate.KECGFPHIEHF,_Str_EVENT_NOTIFICATON_REWARD,0);
      uVar6 = System_Int32__ToString(piVar2,0);
      puVar12 = (undefined8 *)&Str_ev_reward;
LAB_00beecf4:
      uVar6 = System_String__Concat(*puVar12,uVar6,0);
      if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_NotificationsManager_TypeInfo);
      }
      NotificationsManager__KJLOEDMCBNA(uVar4,uVar5,uVar6,iVar1);
      return;
    }
  }
LAB_00bef304:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private static void .cctor() { }   @0xaef3a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000001916eae & 1) == 0) {
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                   );
    func_0x00a67900(&
                    System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLFNENAL__
                   );
    func_0x00a67900(&NotificationsManager_TypeInfo);
    bRam0000000001916eae = 1;
  }
  NotificationsManager.DIFNGFMLPMP = 0;
  uVar1 = func_0x00a67b44(
                         _System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLFNENAL__
                         );
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar1,_Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
            );
  NotificationsManager.AOEAAKHNCPB = uVar1;
  return;
}



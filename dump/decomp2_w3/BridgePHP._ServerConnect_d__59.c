// ==== private bool MoveNext() { }   @0xae0934

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool BridgePHP__ServerConnect_d__59__MoveNext(void *__this)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  void *pvVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  long *plVar23;
  byte bVar24;
  float fVar25;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  int iStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint uStack_74;
  
  if ((bRam0000000001916e29 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&BridgeData_var);
    func_0x00a67900(&BridgeData_TypeInfo);
    func_0x00a67900(&BridgePHP_BridgeError_TypeInfo);
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&CarReplay_TypeInfo);
    func_0x00a67900(&UnityEngine_Debug_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose_
                   );
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext
                   );
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Curr
                   );
    func_0x00a67900(&IINFOGDGDHA_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    func_0x00a67900(&Level_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_string__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    func_0x00a67900(&Method_System_Collections_Generic_List_string__Sort__);
    func_0x00a67900(&Method_System_Collections_Generic_List_string___ctor__);
    func_0x00a67900(&System_Collections_Generic_List_string__TypeInfo);
    func_0x00a67900(&MDGGLDMKCFB_TypeInfo);
    func_0x00a67900(&MMOCGEKHBKE_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&RatingEventController_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&System_Type_TypeInfo);
    func_0x00a67900(&UnityEngine_WWWForm_TypeInfo);
    func_0x00a67900(&UnityEngine_WaitForSeconds_TypeInfo);
    func_0x00a67900(&Str_auth_key);
    func_0x00a67900(&Str_ERROR_INTERNET);
    func_0x00a67900(&Str_Bridge_end);
    func_0x00a67900(&Str_is_can_save_lower);
    func_0x00a67900(&Str_points);
    func_0x00a67900(&Str___Replays__);
    func_0x00a67900(&Str___Time__);
    func_0x00a67900(&Str_sid);
    func_0x00a67900(&Str_ERROR_SECURITY);
    func_0x00a67900(&Str_save);
    func_0x00a67900(&Str_is_error_for_wwww__);
    func_0x00a67900(&Str____Mode_);
    func_0x00a67900(&Str_403);
    func_0x00a67900(&Str_hash);
    func_0x00a67900(&Str_Set_Event__Id__);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_sn);
    func_0x00a67900(&Str_500);
    func_0x00a67900(&Str_email);
    func_0x00a67900(&Str_time);
    func_0x00a67900(&Str_null);
    func_0x00a67900(&Str_bridge_php);
    func_0x00a67900(&Str_wwwBridge_is_busy);
    func_0x00a67900(&Str_frame_url);
    func_0x00a67900(&Str_503);
    func_0x00a67900(&Str_kill_zombies);
    func_0x00a67900(&Str_ERROR_UNAVAILABLE);
    func_0x00a67900(&Str_HASH_ERROR__);
    func_0x00a67900(&Str_gold);
    func_0x00a67900(&Str_is_first_sync__1);
    func_0x00a67900(&Str___lvl__);
    func_0x00a67900(&Str_rnd_key);
    func_0x00a67900(&Str_back_flips);
    func_0x00a67900(&Str_id);
    func_0x00a67900(&Str_silver);
    func_0x00a67900(&Str_v);
    func_0x00a67900(&Str_Bridge_start__);
    func_0x00a67900(&Str_is_delay_for_wwww);
    func_0x00a67900(&Str_SKIP_Event__Id__);
    func_0x00a67900(&Str_grand_total);
    func_0x00a67900(&Str_UpdateParams___);
    func_0x00a67900(&Str_parent_url);
    func_0x00a67900(&Str_mode);
    func_0x00a67900(&Str_____);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str___hash_);
    func_0x00a67900(&Str_is_need_update_game___);
    func_0x00a67900(&Str_event_id);
    func_0x00a67900(&Str_Local);
    func_0x00a67900(&Str_404);
    func_0x00a67900(&Str_name);
    func_0x00a67900(&Str_front_flips);
    func_0x00a67900(&Str_lvl_id);
    func_0x00a67900(&Str_Events__Id__);
    func_0x00a67900(&Str_bridge_data_save__);
    func_0x00a67900(&Str_);
    func_0x00a67900(&Str_car_id);
    func_0x00a67900(&Str_is_can_save_lower_progress_to_server___f);
    func_0x00a67900(&Str_kill_birds);
    func_0x00a67900(&Str_1);
    func_0x00a67900(&Str___Status__);
    func_0x00a67900(&Str_is_first_sync);
    func_0x00a67900(&Str_BRIDGE_ERROR__);
    func_0x00a67900(&Str_path);
    func_0x00a67900(&Str____);
    bRam0000000001916e29 = 1;
  }
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  iStack_d4 = 0;
  if (3 < *(uint *)((long)__this + 0x10)) {
    return false;
  }
  lVar20 = *(long *)((long)__this + 0x20);
  switch(*(uint *)((long)__this + 0x10)) {
  case 0:
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (lVar20 == 0) goto code_r0x00be409c;
    if (((*(long *)(lVar20 + 0x28) != 0) &&
        (uVar7 = UnityEngine_Networking_UnityWebRequest__get_isDone(*(long *)(lVar20 + 0x28),0),
        (uVar7 & 1) == 0)) && (*(long *)(lVar20 + 0x28) != 0)) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(_Str_wwwBridge_is_busy,0,0);
      return false;
    }
    uStack_100 = _IINFOGDGDHA_TypeInfo;
    uStack_f8 = 0xffffffffffffffff;
    uStack_f0 = *(undefined4 *)((long)__this + 0x28);
    uVar21 = System_Enum__ToString(&uStack_100,0);
    uVar21 = System_String__Concat(_Str_Bridge_start__,uVar21,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__GEMDEAMAGPG(uVar21,0,0);
    *(undefined1 *)(lVar20 + 0x7b) = 1;
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    piVar16 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
    lVar8 = _BridgePHP_TypeInfo;
    if (*piVar16 != 5) {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        piVar16 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
      }
      lVar8 = _BridgePHP_TypeInfo;
      *(undefined1 *)(piVar16 + 10) = 1;
    }
    *(undefined8 *)((long)__this + 0x38) = 0;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      func_0x00a67a30();
      lVar8 = _BridgePHP_TypeInfo;
    }
    uVar21 = System_String__Concat
                       (*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x20),_Str_bridge_php,0);
    lVar8 = func_0x00a67b44(_UnityEngine_WWWForm_TypeInfo);
    UnityEngine_WWWForm___ctor(lVar8,0);
    lVar17 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__string__TypeInfo);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (lVar17,_Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    uStack_74 = *(uint *)((long)__this + 0x28);
    uVar9 = System_Int32__ToString(&uStack_74,0);
    if (lVar17 == 0) goto code_r0x00be409c;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
              (lVar17,_Str_mode,uVar9,
               _Method_System_Collections_Generic_Dictionary_string__string__Add__);
    if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    plVar23 = (long *)UnityEngine_Application__get_version(0);
    if (plVar23 == (long *)0x0) goto code_r0x00be409c;
    uVar9 = (**(code **)(*plVar23 + 0x168))(plVar23,*(undefined8 *)(*plVar23 + 0x170));
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
              (lVar17,_Str_v,uVar9,
               _Method_System_Collections_Generic_Dictionary_string__string__Add__);
    plVar23 = (long *)UnityEngine_Application__get_version(0);
    if (plVar23 == (long *)0x0) goto code_r0x00be409c;
    uVar9 = (**(code **)(*plVar23 + 0x168))(plVar23,*(undefined8 *)(*plVar23 + 0x170));
    if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log(uVar9,0);
    iVar5 = *(int *)((long)__this + 0x28);
    if (-1 < iVar5) {
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
      lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar18 == 0) goto code_r0x00be409c;
      if (*(int *)(lVar18 + 0x10) == 0) {
code_r0x00be1638:
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                  (lVar17,_Str_sid,*(undefined8 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x10),
                   _Method_System_Collections_Generic_Dictionary_string__string__Add__);
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
        lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar18 == 0) goto code_r0x00be409c;
        uStack_74 = DAFNMLEKHAD__BHMFJBCOKOA(lVar18,1,0);
        uVar9 = System_Int32__ToString(&uStack_74,0);
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                  (lVar17,_Str_kill_zombies,uVar9,
                   _Method_System_Collections_Generic_Dictionary_string__string__Add__);
        uVar7 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar20 + 0x48),0);
        if ((uVar7 & 1) == 0) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                    (lVar17,_Str_name,*(undefined8 *)(lVar20 + 0x48),
                     _Method_System_Collections_Generic_Dictionary_string__string__Add__);
        }
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uStack_74 = **(uint **)(_BridgePHP_TypeInfo + 0xb8);
        uVar9 = System_Int32__ToString(&uStack_74,0);
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                  (lVar17,_Str_sn,uVar9,
                   _Method_System_Collections_Generic_Dictionary_string__string__Add__);
        if (**(int **)(_BridgePHP_TypeInfo + 0xb8) == 3) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                    (lVar17,_Str_frame_url,*(undefined8 *)(lVar20 + 0x80),
                     _Method_System_Collections_Generic_Dictionary_string__string__Add__);
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                    (lVar17,_Str_parent_url,*(undefined8 *)(lVar20 + 0x88),
                     _Method_System_Collections_Generic_Dictionary_string__string__Add__);
        }
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        piVar16 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
        if (*piVar16 == 6) {
          if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            piVar16 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
          }
          if (*(long *)(piVar16 + 6) == 0) goto code_r0x00be409c;
          if (*(int *)(*(long *)(piVar16 + 6) + 0x10) == 0x20) {
            if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              piVar16 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
            }
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                      (lVar17,_Str_auth_key,*(undefined8 *)(piVar16 + 6),
                       _Method_System_Collections_Generic_Dictionary_string__string__Add__);
          }
        }
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(int **)(_BridgePHP_TypeInfo + 0xb8) == 7) {
          uVar9 = *(undefined8 *)(lVar20 + 0x30);
          puVar15 = (undefined8 *)&Str_email;
          goto code_r0x00be185c;
        }
      }
      else {
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(int *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2c) < 1) goto code_r0x00be1638;
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
        lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar18 == 0) goto code_r0x00be409c;
        uStack_74 = *(uint *)(lVar18 + 0x10);
        uVar9 = System_Int32__ToString(&uStack_74,0);
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                  (lVar17,_Str_id,uVar9,
                   _Method_System_Collections_Generic_Dictionary_string__string__Add__);
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar9 = System_Int32__ToString(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2c,0);
        puVar15 = (undefined8 *)&Str_rnd_key;
code_r0x00be185c:
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                  (lVar17,*puVar15,uVar9,
                   _Method_System_Collections_Generic_Dictionary_string__string__Add__);
      }
      iVar5 = *(int *)((long)__this + 0x28);
      if (iVar5 == 0) {
code_r0x00be18a0:
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        iVar5 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
        if (iVar5 != 8) {
          if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            iVar5 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
          }
          if (iVar5 != 9) {
            if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              iVar5 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
            }
            if (iVar5 != 0xb) {
              if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
                iVar5 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
              }
              if (iVar5 != 0xc) {
                if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                  iVar5 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
                }
                if (iVar5 != 0xd) {
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
                  lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                  if (lVar18 == 0) goto code_r0x00be409c;
                  uVar7 = DAFNMLEKHAD__LFPAENMPMDF(lVar18,0);
                  if ((uVar7 & 1) == 0) {
                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                              (lVar17,_Str_is_first_sync,_Str_1,
                               _Method_System_Collections_Generic_Dictionary_string__string__Add__);
                    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    Main__GEMDEAMAGPG(_Str_is_first_sync__1,0,0);
                  }
                }
              }
            }
          }
        }
      }
      else {
        if (iVar5 != 3) goto code_r0x00be19ec;
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') goto code_r0x00be18a0;
      }
      iVar5 = *(int *)((long)__this + 0x28);
    }
code_r0x00be19ec:
    if (iVar5 == 4) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      pvVar10 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (pvVar10 != (void *)0x0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          pvVar10 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if (pvVar10 == (void *)0x0) goto code_r0x00be409c;
        }
        bVar4 = Level__get_IsEvent(pvVar10);
        if (bVar4) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if (lVar18 == 0) goto code_r0x00be409c;
          uStack_74 = Level__get_EventId(lVar18,0);
          uVar9 = System_Int32__ToString(&uStack_74,0);
          puVar15 = (undefined8 *)&Str_lvl_id;
code_r0x00be219c:
          uVar14 = *puVar15;
code_r0x00be21a8:
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                    (lVar17,uVar14,uVar9,
                     _Method_System_Collections_Generic_Dictionary_string__string__Add__);
        }
      }
    }
    else {
      if (iVar5 != 3) {
        if (iVar5 == 2) {
          lVar18 = *(long *)((long)__this + 0x30);
          if (lVar18 == 0) goto code_r0x00be409c;
          if (*(long *)(lVar18 + 0x18) != 0) {
            if ((int)*(long *)(lVar18 + 0x18) == 0) goto code_r0x00be3ea0;
            plVar23 = *(long **)(lVar18 + 0x20);
            if (plVar23 == (long *)0x0) goto code_r0x00be409c;
            uVar9 = (**(code **)(*plVar23 + 0x168))(plVar23,*(undefined8 *)(*plVar23 + 0x170));
            puVar15 = (undefined8 *)&Str_name;
            goto code_r0x00be219c;
          }
        }
        goto code_r0x00be21b0;
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
      lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar18 == 0) goto code_r0x00be409c;
      uStack_74 = DAFNMLEKHAD__LOCFCFJIAIH(lVar18,0);
      uVar9 = System_Int32__ToString(&uStack_74,0);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                (lVar17,_Str_silver,uVar9,
                 _Method_System_Collections_Generic_Dictionary_string__string__Add__);
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar18 == 0) goto code_r0x00be409c;
      uStack_74 = DAFNMLEKHAD__HPDEBBJNCIK(lVar18,0);
      uVar9 = System_Int32__ToString(&uStack_74,0);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                (lVar17,_Str_gold,uVar9,
                 _Method_System_Collections_Generic_Dictionary_string__string__Add__);
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      pvVar10 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (pvVar10 == (void *)0x0) goto code_r0x00be409c;
      uStack_74 = DAFNMLEKHAD__ADDNPHMAFBA(pvVar10);
      uVar9 = System_Int32__ToString(&uStack_74,0);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                (lVar17,_Str_grand_total,uVar9,
                 _Method_System_Collections_Generic_Dictionary_string__string__Add__);
      uVar7 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                        (lVar17,_Str_kill_zombies,
                         _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__
                        );
      if ((uVar7 & 1) == 0) {
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
        lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar18 == 0) goto code_r0x00be409c;
        uStack_74 = DAFNMLEKHAD__BHMFJBCOKOA(lVar18,1,0);
        uVar9 = System_Int32__ToString(&uStack_74,0);
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                  (lVar17,_Str_kill_zombies,uVar9,
                   _Method_System_Collections_Generic_Dictionary_string__string__Add__);
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
      lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar18 == 0) goto code_r0x00be409c;
      uStack_74 = DAFNMLEKHAD__BHMFJBCOKOA(lVar18,5,0);
      uVar9 = System_Int32__ToString(&uStack_74,0);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                (lVar17,_Str_kill_birds,uVar9,
                 _Method_System_Collections_Generic_Dictionary_string__string__Add__);
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar18 == 0) goto code_r0x00be409c;
      uStack_74 = DAFNMLEKHAD__BHMFJBCOKOA(lVar18,2,0);
      uVar9 = System_Int32__ToString(&uStack_74,0);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                (lVar17,_Str_back_flips,uVar9,
                 _Method_System_Collections_Generic_Dictionary_string__string__Add__);
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar18 == 0) goto code_r0x00be409c;
      uStack_74 = DAFNMLEKHAD__BHMFJBCOKOA(lVar18,3,0);
      uVar9 = System_Int32__ToString(&uStack_74,0);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                (lVar17,_Str_front_flips,uVar9,
                 _Method_System_Collections_Generic_Dictionary_string__string__Add__);
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar18 == 0) goto code_r0x00be409c;
      uVar9 = DAFNMLEKHAD__MDLHADOKJGN(lVar18,0);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                (lVar17,_Str_save,uVar9,
                 _Method_System_Collections_Generic_Dictionary_string__string__Add__);
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x41) == '\0') {
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        iVar5 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
        if (iVar5 == 8) goto code_r0x00be1ec8;
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          iVar5 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
        }
        if (iVar5 == 9) goto code_r0x00be1ec8;
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          iVar5 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
        }
        if (iVar5 == 0xb) goto code_r0x00be1ec8;
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          iVar5 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
        }
        if (iVar5 == 0xc) goto code_r0x00be1ec8;
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          iVar5 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
        }
        if (iVar5 == 0xd) goto code_r0x00be1ec8;
      }
      else {
code_r0x00be1ec8:
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                  (lVar17,_Str_is_can_save_lower,_Str_1,
                   _Method_System_Collections_Generic_Dictionary_string__string__Add__);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__GEMDEAMAGPG(_Str_is_can_save_lower,0,0);
      }
      if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar18 = **(long **)(_CarReplay_TypeInfo + 0xb8);
      if (lVar18 != 0) {
        if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar18 = **(long **)(_CarReplay_TypeInfo + 0xb8);
          if (lVar18 == 0) goto code_r0x00be409c;
        }
        if (0 < *(int *)(lVar18 + 0x10)) {
          if (*(long *)((long)__this + 0x30) == 0) goto code_r0x00be409c;
          if (*(long *)(*(long *)((long)__this + 0x30) + 0x18) != 0) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
            if (lVar18 == 0) goto code_r0x00be409c;
            if (*(long *)(lVar18 + 0x50) != 0) {
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
                lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                if (lVar18 == 0) goto code_r0x00be409c;
              }
              if (*(long *)(lVar18 + 0x50) == 0) goto code_r0x00be409c;
              if (0 < *(int *)(*(long *)(lVar18 + 0x50) + 0x10)) {
                lVar18 = *(long *)((long)__this + 0x30);
                if (lVar18 == 0) goto code_r0x00be409c;
                if (*(long *)(lVar18 + 0x18) != 0) {
                  if ((int)*(long *)(lVar18 + 0x18) == 0) {
code_r0x00be3ea0:
                    /* WARNING: Subroutine does not return */
                    il2cpp_throw_967b58();
                  }
                  plVar23 = *(long **)(lVar18 + 0x20);
                  if (plVar23 == (long *)0x0) goto code_r0x00be409c;
                  uVar9 = (**(code **)(*plVar23 + 0x168))(plVar23,*(undefined8 *)(*plVar23 + 0x170))
                  ;
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                            (lVar17,_Str_time,uVar9,
                             _Method_System_Collections_Generic_Dictionary_string__string__Add__);
                  lVar18 = *(long *)((long)__this + 0x30);
                  if (lVar18 == 0) goto code_r0x00be409c;
                }
                if (1 < *(int *)(lVar18 + 0x18)) {
                  plVar23 = *(long **)(lVar18 + 0x28);
                  if (plVar23 == (long *)0x0) goto code_r0x00be409c;
                  uVar9 = (**(code **)(*plVar23 + 0x168))(plVar23,*(undefined8 *)(*plVar23 + 0x170))
                  ;
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                            (lVar17,_Str_points,uVar9,
                             _Method_System_Collections_Generic_Dictionary_string__string__Add__);
                  lVar18 = *(long *)((long)__this + 0x30);
                  if (lVar18 == 0) goto code_r0x00be409c;
                }
                if (2 < *(int *)(lVar18 + 0x18)) {
                  plVar23 = *(long **)(lVar18 + 0x30);
                  if (plVar23 == (long *)0x0) goto code_r0x00be409c;
                  uVar9 = (**(code **)(*plVar23 + 0x168))(plVar23,*(undefined8 *)(*plVar23 + 0x170))
                  ;
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                            (lVar17,_Str_car_id,uVar9,
                             _Method_System_Collections_Generic_Dictionary_string__string__Add__);
                }
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x50), lVar18 == 0))
                goto code_r0x00be409c;
                uVar9 = System_Int32__ToString(lVar18 + 0x10,0);
                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                          (lVar17,_Str_event_id,uVar9,
                           _Method_System_Collections_Generic_Dictionary_string__string__Add__);
                if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar9 = **(undefined8 **)(_CarReplay_TypeInfo + 0xb8);
                uVar14 = _Str_path;
                goto code_r0x00be21a8;
              }
            }
          }
        }
      }
    }
code_r0x00be21b0:
    lVar18 = func_0x00a67b44(_System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
              (lVar18,_Method_System_Collections_Generic_List_string___ctor__);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = *(undefined8 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x18);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator
              (lVar17,&uStack_100,
               _Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    uStack_90 = CONCAT44(uStack_ec,uStack_f0);
    uStack_98 = uStack_f8;
    uStack_a0 = uStack_100;
    uStack_88 = uStack_e8;
    uStack_80 = uStack_e0;
    while (uVar7 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext
                             (&uStack_a0,
                              _Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext
                             ), (uVar7 & 1) != 0) {
      func_0x00b7fb78(&uStack_a0,&uStack_118,
                      _Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Curr
                     );
      uStack_b0 = uStack_118;
      uStack_a8 = uStack_110;
      func_0x00b7fc68(&uStack_b0,&uStack_118,
                      _Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      func_0x00b7fe44(lVar18,uStack_118,_Method_System_Collections_Generic_List_string__Add__);
    }
    System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose
              (&uStack_a0,
               _Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose_);
    if (lVar18 == 0) goto code_r0x00be409c;
    System_Collections_Generic_List___Il2CppFullySharedGenericType___Sort
              (lVar18,_Method_System_Collections_Generic_List_string__Sort__);
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
              (lVar18,&uStack_100,_Method_System_Collections_Generic_List_string__GetEnumerator__);
    uStack_c0 = CONCAT44(uStack_ec,uStack_f0);
    uStack_c8 = uStack_f8;
    uStack_d0 = uStack_100;
    while (uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                             (&uStack_d0,
                              _Method_System_Collections_Generic_List_Enumerator_string__MoveNext__)
          , (uVar7 & 1) != 0) {
      func_0x00b947ec(&uStack_d0,&uStack_100,
                      _Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
      uVar14 = uStack_100;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item
                (lVar17,uStack_100,&uStack_100,
                 _Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      UnityEngine_WWWForm__AddField(lVar8,uVar14,uStack_100,0);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item
                (lVar17,uVar14,&uStack_100,
                 _Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      uVar9 = System_String__Concat(uVar9,uStack_100,0);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
              (&uStack_d0,_Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = BridgePHP__Md5Sum(uVar9);
    if (lVar8 == 0) goto code_r0x00be409c;
    UnityEngine_WWWForm__AddField(lVar8,_Str_hash,uVar9,0);
    if (*(char *)(lVar20 + 0x7a) != '\0') {
      uVar21 = func_0x00a67b44(_UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(0x3f800000,uVar21,0);
      *(undefined8 *)((long)__this + 0x18) = uVar21;
      *(undefined4 *)((long)__this + 0x10) = 1;
      return true;
    }
    uVar21 = UnityEngine_Networking_UnityWebRequest__Post(uVar21,lVar8,0);
    *(undefined8 *)(lVar20 + 0x28) = uVar21;
    break;
  case 1:
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (lVar20 == 0) goto code_r0x00be409c;
    *(undefined8 *)(lVar20 + 0x28) = 0;
    *(undefined1 *)(lVar20 + 0x7a) = 0;
    break;
  case 2:
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (lVar20 == 0) goto code_r0x00be409c;
    *(undefined1 *)(lVar20 + 0x78) = 0;
    goto code_r0x00be2474;
  case 3:
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar21 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar21,0,0);
    if ((uVar7 & 1) == 0) {
code_r0x00be132c:
      bVar24 = 0;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto code_r0x00be409c;
      uVar21 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar21,0,0);
      if ((uVar7 & 1) == 0) goto code_r0x00be132c;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      bVar24 = *(byte *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc);
    }
    if (lVar20 == 0) goto code_r0x00be409c;
    if (*(char *)(lVar20 + 0x79) != '\0') {
code_r0x00be136c:
      uStack_100 = _IINFOGDGDHA_TypeInfo;
      uStack_f8 = 0xffffffffffffffff;
      uStack_f0 = *(undefined4 *)((long)__this + 0x28);
      uVar21 = System_Enum__ToString(&uStack_100,0);
      uVar21 = System_String__Concat(_Str_is_error_for_wwww__,uVar21,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      Main__GEMDEAMAGPG(uVar21,0,0);
      goto code_r0x00be13e0;
    }
    if (*(long *)(lVar20 + 0x28) == 0) goto code_r0x00be409c;
    uVar7 = UnityEngine_Networking_UnityWebRequest__get_isNetworkError(*(long *)(lVar20 + 0x28),0);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(lVar20 + 0x28) == 0) goto code_r0x00be409c;
      uVar7 = UnityEngine_Networking_UnityWebRequest__get_isHttpError(*(long *)(lVar20 + 0x28),0);
      if ((uVar7 & 1) != 0) goto code_r0x00be1364;
      *(undefined1 *)(lVar20 + 0x7b) = 0;
      if ((*(long *)(lVar20 + 0x28) == 0) ||
         (lVar8 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler
                            (*(long *)(lVar20 + 0x28),0), lVar8 == 0)) goto code_r0x00be409c;
      puVar15 = (undefined8 *)UnityEngine_Networking_DownloadHandler__get_text(lVar8,0);
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
      lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar8 == 0) goto code_r0x00be409c;
      uVar7 = DAFNMLEKHAD__LLEFEIHEJDE(lVar8,0);
      if ((uVar7 & 1) != 0) {
        if (puVar15 == (undefined8 *)0x0) goto code_r0x00be409c;
        if (*(int *)(puVar15 + 2) < 0x3ea) {
          puVar13 = puVar15;
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
        }
        else {
          uVar21 = System_String__Substring(puVar15,0,1000,0);
          puVar13 = (undefined8 *)System_String__Concat(uVar21,_Str____,0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Main_TypeInfo);
          }
        }
        Main__GEMDEAMAGPG(puVar13,0,0);
      }
      plVar23 = (long *)(lVar20 + 0x50);
      *plVar23 = 0;
      uVar21 = _BridgeData_var;
      if (*(int *)(_System_Type_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar21 = System_Type__GetTypeFromHandle(uVar21,0);
      plVar11 = (long *)UnityEngine_JsonUtility__FromJson(puVar15,uVar21,0);
      lVar8 = _BridgeData_TypeInfo;
      if (plVar11 == (long *)0x0) {
        *plVar23 = 0;
code_r0x00be2828:
        uVar22 = *(undefined4 *)((long)__this + 0x28);
        lVar8 = func_0x00a67b44(_BridgePHP_BridgeError_TypeInfo);
        uVar21 = _Str_ERROR_UNAVAILABLE;
        System_Object___ctor(lVar8,0);
        *(undefined8 *)(lVar8 + 0x10) = uVar21;
        *(undefined4 *)(lVar8 + 0x18) = uVar22;
        *(long *)((long)__this + 0x38) = lVar8;
      }
      else {
        bVar3 = *(byte *)(_BridgeData_TypeInfo + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar11 + 200) + ((ulong)bVar3 - 1) * 8) != _BridgeData_TypeInfo))
        {
          func_0x00a67eec();
code_r0x00be3ea8:
          func_0x00a67eec();
          puVar13 = (undefined8 *)func_0x016dec80(8);
          *puVar13 = *puVar15;
          uVar21 = func_0x016dec90(puVar13,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__016e4f48,0
                                  );
          func_0x016dec60();
          func_0x00b65214(uVar21);
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b48(plVar23);
        }
        *plVar23 = (long)plVar11;
        if ((*(byte *)(*plVar11 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar11 + 200) + ((ulong)bVar3 - 1) * 8) != lVar8))
        goto code_r0x00be3ea8;
        if (plVar11 == (long *)0x0) goto code_r0x00be2828;
        if (puVar15 == (undefined8 *)0x0) goto code_r0x00be409c;
        iVar5 = System_String__IndexOf(puVar15,_Str___hash_,0);
        uVar21 = _Str_;
        if (0 < iVar5) {
          uVar21 = System_String__Remove(puVar15,iVar5,0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Main_TypeInfo);
          }
          uVar21 = System_String__Concat
                             (uVar21,_Str__,*(undefined8 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x18)
                              ,0);
          if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_BridgePHP_TypeInfo);
          }
          uVar21 = BridgePHP__Md5Sum(uVar21);
        }
        if (*plVar23 == 0) goto code_r0x00be409c;
        uVar7 = System_String__op_Inequality(uVar21,*(undefined8 *)(*plVar23 + 0x28),0);
        if ((uVar7 & 1) == 0) {
          if (*plVar23 == 0) goto code_r0x00be409c;
          if (*(long *)(*plVar23 + 0x10) != 0) {
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
            lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
            if (lVar8 == 0) goto code_r0x00be409c;
            if (*(int *)(lVar8 + 0x10) == 0) {
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
              if (*plVar23 == 0) goto code_r0x00be409c;
              lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              uVar6 = System_String__IsNullOrEmpty(*(undefined8 *)(*plVar23 + 0x20),0);
              if (lVar8 == 0) goto code_r0x00be409c;
              DAFNMLEKHAD__AIDICNFBHKK(lVar8,uVar6 & 1,0);
            }
            if ((*plVar23 == 0) || (lVar8 = *(long *)(*plVar23 + 0x10), lVar8 == 0))
            goto code_r0x00be409c;
            if (*(int *)(lVar8 + 0x30) == 1) {
              if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              *(undefined1 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2a) = 1;
              if (bVar24 != 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0))
                goto code_r0x00be409c;
                uVar21 = *(undefined8 *)(lVar8 + 0x48);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Inequality(uVar21,0,0);
                if ((uVar7 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                      (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0)) ||
                     (pvVar10 = *(void **)(lVar8 + 0x48), pvVar10 == (void *)0x0))
                  goto code_r0x00be409c;
                  RatingEventController__CAHNMGGBGBK(pvVar10);
                }
              }
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              Main__GEMDEAMAGPG(_Str_is_need_update_game___,0,0);
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
            if (((*plVar23 == 0) || (lVar8 = *(long *)(*plVar23 + 0x10), lVar8 == 0)) ||
               (lVar17 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar17 == 0))
            goto code_r0x00be409c;
            *(undefined4 *)(lVar17 + 0x10) = *(undefined4 *)(lVar8 + 0x10);
            if (*(char *)(lVar20 + 0x60) == '\0') {
              BridgePHP__UpdateNickNameAndCountry(lVar20);
              *(undefined1 *)(lVar20 + 0x60) = 1;
              if (bVar24 != 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0))
                goto code_r0x00be409c;
                uVar21 = *(undefined8 *)(lVar8 + 0x40);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Inequality(uVar21,0,0);
                if ((uVar7 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0))
                      || (lVar8 = *(long *)(lVar8 + 0x100), lVar8 == 0)) ||
                     (lVar8 = UnityEngine_Component__get_gameObject(lVar8,0), lVar8 == 0))
                  goto code_r0x00be409c;
                  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
                  if ((uVar7 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                        (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0))
                       || (lVar8 = *(long *)(lVar8 + 0x40), lVar8 == 0)) goto code_r0x00be409c;
                    RatingController__EKGEIOGPKIJ(lVar8,0);
                  }
                }
              }
            }
            if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar17 = *(long *)(_BridgePHP_TypeInfo + 0xb8);
            lVar8 = _BridgePHP_TypeInfo;
            if (*(int *)(lVar17 + 0x2c) == -1) {
              if ((*plVar23 == 0) || (lVar18 = *(long *)(*plVar23 + 0x10), lVar18 == 0))
              goto code_r0x00be409c;
              iVar5 = *(int *)(lVar18 + 0x2c);
              if (0 < iVar5) {
                if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                  lVar17 = *(long *)(_BridgePHP_TypeInfo + 0xb8);
                }
                lVar8 = _BridgePHP_TypeInfo;
                *(int *)(lVar17 + 0x2c) = iVar5;
              }
            }
            if (*(int *)((long)__this + 0x28) == 3) {
              if (*(int *)(lVar8 + 0xe0) == 0) {
                func_0x00a67a30();
                lVar8 = _BridgePHP_TypeInfo;
              }
              piVar16 = *(int **)(lVar8 + 0xb8);
              iVar5 = *piVar16;
              if (iVar5 != 3) {
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  func_0x00a67a30();
                  piVar16 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
                  iVar5 = *piVar16;
                  lVar8 = _BridgePHP_TypeInfo;
                }
                if (iVar5 != 4) {
                  if (*(int *)(lVar8 + 0xe0) == 0) {
                    func_0x00a67a30();
                    piVar16 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
                    iVar5 = *piVar16;
                    lVar8 = _BridgePHP_TypeInfo;
                  }
                  if (iVar5 != 8) {
                    if (*(int *)(lVar8 + 0xe0) == 0) {
                      func_0x00a67a30();
                      piVar16 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
                      iVar5 = *piVar16;
                      lVar8 = _BridgePHP_TypeInfo;
                    }
                    if (iVar5 != 9) {
                      if (*(int *)(lVar8 + 0xe0) == 0) {
                        func_0x00a67a30();
                        piVar16 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
                        iVar5 = *piVar16;
                        lVar8 = _BridgePHP_TypeInfo;
                      }
                      if (iVar5 != 0xb) {
                        if (*(int *)(lVar8 + 0xe0) == 0) {
                          func_0x00a67a30();
                          piVar16 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
                          iVar5 = *piVar16;
                          lVar8 = _BridgePHP_TypeInfo;
                        }
                        if (iVar5 != 0xc) {
                          if (*(int *)(lVar8 + 0xe0) == 0) {
                            func_0x00a67a30();
                            piVar16 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
                            iVar5 = *piVar16;
                            lVar8 = _BridgePHP_TypeInfo;
                          }
                          if (iVar5 != 0xd) {
                            if (*(int *)(lVar8 + 0xe0) == 0) {
                              func_0x00a67a30();
                              piVar16 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
                              lVar8 = _BridgePHP_TypeInfo;
                            }
                            if (*(char *)((long)piVar16 + 0x41) != '\0') {
                              if (*(int *)(lVar8 + 0xe0) == 0) {
                                func_0x00a67a30();
                                piVar16 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
                              }
                              *(undefined1 *)((long)piVar16 + 0x41) = 0;
                              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                                 (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40),
                                 lVar8 == 0)) goto code_r0x00be409c;
                              AnalyticsController__LNJAADGHIHB(lVar8,_Str_Local,0);
                              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              Main__GEMDEAMAGPG(_Str_is_can_save_lower_progress_to_server___f,0,0);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (*plVar23 == 0) goto code_r0x00be409c;
          uVar7 = System_String__IsNullOrEmpty(*(undefined8 *)(*plVar23 + 0x20),0);
          if ((uVar7 & 1) == 0) {
            if ((*plVar23 == 0) || (lVar8 = *(long *)(*plVar23 + 0x20), lVar8 == 0))
            goto code_r0x00be409c;
            if (5 < *(int *)(lVar8 + 0x10)) {
              if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              piVar16 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
              iVar5 = *piVar16;
              if (iVar5 != 3) {
                if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                  piVar16 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
                  iVar5 = *piVar16;
                }
                if (iVar5 != 4) {
                  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                    piVar16 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
                    iVar5 = *piVar16;
                  }
                  if (iVar5 != 8) {
                    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                      piVar16 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
                      iVar5 = *piVar16;
                    }
                    if (iVar5 != 9) {
                      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                        piVar16 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
                        iVar5 = *piVar16;
                      }
                      if (iVar5 != 0xb) {
                        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                          piVar16 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
                          iVar5 = *piVar16;
                        }
                        if (iVar5 != 0xc) {
                          if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                            piVar16 = *(int **)(_BridgePHP_TypeInfo + 0xb8);
                            iVar5 = *piVar16;
                          }
                          if (iVar5 != 0xd) {
                            lVar8 = *plVar23;
                            if (lVar8 == 0) goto code_r0x00be409c;
                            uVar21 = *(undefined8 *)(lVar8 + 0x20);
                            if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                              lVar8 = *plVar23;
                              *(undefined8 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x30) = uVar21
                              ;
                              if (lVar8 == 0) goto code_r0x00be409c;
                            }
                            else {
                              *(undefined8 *)(piVar16 + 0xc) = uVar21;
                            }
                            if (*(long *)(lVar8 + 0x10) == 0) goto code_r0x00be409c;
                            uVar7 = System_String__IsNullOrEmpty
                                              (*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x20),0);
                            uVar21 = _Str_;
                            if ((uVar7 & 1) == 0) {
                              if (((*plVar23 == 0) ||
                                  (lVar8 = *(long *)(*plVar23 + 0x10), lVar8 == 0)) ||
                                 (lVar8 = *(long *)(lVar8 + 0x20), lVar8 == 0))
                              goto code_r0x00be409c;
                              if (5 < *(int *)(lVar8 + 0x10)) {
                                uVar21 = System_String__Substring
                                                   (lVar8,0,*(int *)(lVar8 + 0x10) + -3,0);
                              }
                            }
                            if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                            }
                            lVar8 = *(long *)(_BridgePHP_TypeInfo + 0xb8);
                            *(undefined8 *)(lVar8 + 0x38) = uVar21;
                            *(undefined1 *)(lVar8 + 0x40) = 1;
                            if (bVar24 != 0) {
                              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                                  (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20),
                                  lVar8 == 0)) ||
                                 ((lVar8 = *(long *)(lVar8 + 0x138), lVar8 == 0 ||
                                  (lVar8 = UnityEngine_Component__get_gameObject(lVar8,0),
                                  lVar8 == 0)))) goto code_r0x00be409c;
                              uVar7 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
                              if ((uVar7 & 1) == 0) {
                                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                                  func_0x00a67a30();
                                }
                                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                                   (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20),
                                   lVar8 == 0)) goto code_r0x00be409c;
                                GUIGarage__ABAHNKCPCFA(lVar8,0);
                              }
                            }
                            if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                            }
                            uVar7 = UnityEngine_Application__get_isEditor(0);
                            if ((uVar7 & 1) != 0) {
                              if (*plVar23 == 0) goto code_r0x00be409c;
                              uVar21 = System_String__Concat
                                                 (_Str_bridge_data_save__,
                                                  *(undefined8 *)(*plVar23 + 0x20),0);
                              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30(_Main_TypeInfo);
                              }
                              Main__GEMDEAMAGPG(uVar21,0,0);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (*plVar23 == 0) goto code_r0x00be409c;
          if (*(long *)(*plVar23 + 0x18) != 0) {
            if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (*(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2a) == '\0') {
              if (bVar24 != 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0))
                goto code_r0x00be409c;
                uVar21 = *(undefined8 *)(lVar8 + 0x48);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Inequality(uVar21,0,0);
                if ((uVar7 & 1) != 0) {
                  if (*plVar23 == 0) goto code_r0x00be409c;
                  lVar8 = *(long *)(*plVar23 + 0x18);
                  **(long **)(_RatingEventController_TypeInfo + 0xb8) = lVar8;
                  if (lVar8 == 0) goto code_r0x00be409c;
                  if (*(long *)(lVar8 + 0x18) == 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                        (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0))
                       || (pvVar10 = *(void **)(lVar8 + 0x48), pvVar10 == (void *)0x0))
                    goto code_r0x00be409c;
                    RatingEventController__CAHNMGGBGBK(pvVar10);
                  }
                }
              }
              fVar25 = (float)UnityEngine_Time__get_unscaledTime(0);
              if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              lVar8 = *(long *)(_BridgePHP_TypeInfo + 0xb8);
              iVar5 = -0x80000000;
              if (fVar25 != INFINITY) {
                iVar5 = (int)fVar25;
              }
              *(int *)(lVar8 + 0x50) = iVar5;
              *(undefined1 *)(lVar8 + 0x5c) = 0;
              if (*plVar23 == 0) goto code_r0x00be409c;
              lVar8 = *(long *)(*plVar23 + 0x18);
              uStack_74 = 0;
              if (lVar8 == 0) goto code_r0x00be409c;
              uVar6 = *(uint *)(lVar8 + 0x18);
              if (0 < (int)uVar6) {
                do {
                  if (uVar6 <= uStack_74) goto code_r0x00be3ea0;
                  lVar17 = *(long *)(lVar8 + (long)(int)uStack_74 * 8 + 0x20);
                  if (lVar17 == 0) goto code_r0x00be409c;
                  piVar16 = (int *)(lVar17 + 0x14);
                  iVar5 = *piVar16;
                  if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  lVar18 = Level__FHMGLDDPEDJ(iVar5 + 100,0);
                  lVar12 = func_0x00a679a0(_string___TypeInfo,0xc);
                  if (lVar12 == 0) goto code_r0x00be409c;
                  if (*(int *)(lVar12 + 0x18) == 0) goto code_r0x00be3ea0;
                  piVar1 = (int *)(lVar17 + 0x10);
                  *(undefined8 *)(lVar12 + 0x20) = _Str_Events__Id__;
                  uVar21 = System_Int32__ToString(piVar1,0);
                  if ((*(uint *)(lVar12 + 0x18) < 2) ||
                     (*(undefined8 *)(lVar12 + 0x28) = uVar21, *(uint *)(lVar12 + 0x18) == 2))
                  goto code_r0x00be3ea0;
                  *(undefined8 *)(lVar12 + 0x30) = _Str___lvl__;
                  uVar21 = System_Int32__ToString(piVar16,0);
                  if ((*(uint *)(lVar12 + 0x18) < 4) ||
                     (*(undefined8 *)(lVar12 + 0x38) = uVar21, *(uint *)(lVar12 + 0x18) == 4))
                  goto code_r0x00be3ea0;
                  *(undefined8 *)(lVar12 + 0x40) = _Str____Mode_;
                  uStack_100 = _MDGGLDMKCFB_TypeInfo;
                  uStack_f8 = 0xffffffffffffffff;
                  uStack_f0 = *(undefined4 *)(lVar17 + 0x18);
                  uVar21 = System_Enum__ToString(&uStack_100,0);
                  if ((*(uint *)(lVar12 + 0x18) < 6) ||
                     (*(undefined8 *)(lVar12 + 0x48) = uVar21, *(uint *)(lVar12 + 0x18) == 6))
                  goto code_r0x00be3ea0;
                  *(undefined8 *)(lVar12 + 0x50) = _Str___Status__;
                  uStack_118 = _MMOCGEKHBKE_TypeInfo;
                  uStack_110 = 0xffffffffffffffff;
                  uStack_108 = *(undefined4 *)(lVar17 + 0x1c);
                  uVar21 = System_Enum__ToString(&uStack_118,0);
                  if ((*(uint *)(lVar12 + 0x18) < 8) ||
                     (*(undefined8 *)(lVar12 + 0x58) = uVar21, *(uint *)(lVar12 + 0x18) == 8))
                  goto code_r0x00be3ea0;
                  piVar2 = (int *)(lVar17 + 0x28);
                  *(undefined8 *)(lVar12 + 0x60) = _Str___Time__;
                  uVar21 = System_Int32__ToString(piVar2,0);
                  uVar6 = *(uint *)(lVar12 + 0x18);
                  if ((uVar6 < 10) || (*(undefined8 *)(lVar12 + 0x68) = uVar21, uVar6 == 10))
                  goto code_r0x00be3ea0;
                  *(undefined8 *)(lVar12 + 0x70) = _Str___Replays__;
                  uVar21 = _Str_null;
                  if (*(long *)(lVar17 + 0x30) != 0) {
                    iStack_d4 = (int)*(undefined8 *)(*(long *)(lVar17 + 0x30) + 0x18);
                    uVar21 = System_Int32__ToString(&iStack_d4,0);
                    uVar6 = *(uint *)(lVar12 + 0x18);
                  }
                  if (uVar6 < 0xc) goto code_r0x00be3ea0;
                  *(undefined8 *)(lVar12 + 0x78) = uVar21;
                  uVar21 = System_String__Concat(lVar12,0);
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_Main_TypeInfo);
                  }
                  Main__GEMDEAMAGPG(uVar21,0,0);
                  if (lVar18 != 0) {
                    uVar6 = *(uint *)(lVar17 + 0x1c);
                    if (uVar6 == 4) {
                      *(undefined1 *)(lVar18 + 0x68) = 0;
                      RatingEventController__MDGLEPOJOAM(lVar18,0);
code_r0x00be3550:
                      uVar6 = *(uint *)(lVar17 + 0x1c);
                    }
                    else if (uVar6 == 3) {
                      *(undefined1 *)(lVar18 + 0x68) = 1;
                      goto code_r0x00be3550;
                    }
                    if ((uVar6 < 2) && (-1 < *piVar2)) {
                      if (*plVar23 == 0) goto code_r0x00be409c;
                      lVar12 = *(long *)(*plVar23 + 0x18);
                      iStack_d4 = 0;
                      if (lVar12 == 0) goto code_r0x00be409c;
                      iVar5 = *(int *)(lVar12 + 0x18);
                      if (0 < iVar5) {
                        bVar4 = true;
                        do {
                          if (iVar5 == iStack_d4) goto code_r0x00be3ea0;
                          lVar19 = *(long *)(lVar12 + (long)iStack_d4 * 8 + 0x20);
                          if (lVar19 == 0) goto code_r0x00be409c;
                          if (*piVar16 == *(int *)(lVar19 + 0x14)) {
                            if (uVar6 == 0) {
                              if (*(int *)(lVar19 + 0x1c) == 1) {
code_r0x00be35ec:
                                bVar4 = false;
                              }
                              else if (*(int *)(lVar19 + 0x1c) == 0) goto code_r0x00be35e0;
                            }
                            else if ((uVar6 == 1) && (*(int *)(lVar19 + 0x1c) == 1)) {
code_r0x00be35e0:
                              if (*(int *)(lVar19 + 0x28) < *piVar2) goto code_r0x00be35ec;
                            }
                          }
                          iStack_d4 = iStack_d4 + 1;
                        } while (iVar5 != iStack_d4);
                        if (!bVar4) goto code_r0x00be3c2c;
                      }
                      lVar12 = *(long *)(lVar18 + 0x50);
                      bVar4 = false;
                      if (lVar12 != 0) {
                        if (*(int *)(lVar12 + 0x10) == *piVar1) {
                          bVar4 = false;
                          if (*(long *)(lVar12 + 0x30) != 0) {
                            bVar4 = *(long *)(lVar17 + 0x30) == 0;
                          }
                        }
                        else {
                          bVar4 = false;
                        }
                      }
                      if ((bVar4 & bVar24) != 0) {
                        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                           (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20),
                           lVar12 == 0)) goto code_r0x00be409c;
                        uVar21 = *(undefined8 *)(lVar12 + 0x48);
                        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        uVar7 = UnityEngine_Object__op_Inequality(uVar21,0,0);
                        if ((uVar7 & 1) != 0) {
                          fVar25 = (float)UnityEngine_Time__get_time(0);
                          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                              (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20),
                              lVar12 == 0)) || (lVar12 = *(long *)(lVar12 + 0x48), lVar12 == 0))
                          goto code_r0x00be409c;
                          lVar12 = *(long *)(lVar12 + 0xd8);
                          uVar6 = Level__get_EventId(lVar18,0);
                          if (lVar12 == 0) goto code_r0x00be409c;
                          if (*(uint *)(lVar12 + 0x18) <= uVar6) goto code_r0x00be3ea0;
                          if (fVar25 - *(float *)(lVar12 + (long)(int)uVar6 * 4 + 0x20) < 30.0) {
                            lVar12 = func_0x00a679a0(_string___TypeInfo,5);
                            if (lVar12 != 0) {
                              if (*(int *)(lVar12 + 0x18) != 0) {
                                *(undefined8 *)(lVar12 + 0x20) = _Str_SKIP_Event__Id__;
                                uVar21 = System_Int32__ToString(piVar1,0);
                                if ((1 < *(uint *)(lVar12 + 0x18)) &&
                                   (*(undefined8 *)(lVar12 + 0x28) = uVar21,
                                   *(uint *)(lVar12 + 0x18) != 2)) {
                                  *(undefined8 *)(lVar12 + 0x30) = _Str___lvl__;
                                  uVar21 = System_Int32__ToString(piVar16,0);
                                  if ((3 < *(uint *)(lVar12 + 0x18)) &&
                                     (*(undefined8 *)(lVar12 + 0x38) = uVar21,
                                     *(uint *)(lVar12 + 0x18) != 4)) {
                                    *(undefined8 *)(lVar12 + 0x40) = _Str__;
                                    uVar21 = System_String__Concat(lVar12,0);
                                    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                                      func_0x00a67a30(_Main_TypeInfo);
                                    }
                                    Main__GEMDEAMAGPG(uVar21,0,0);
                                    if (*(long *)(lVar18 + 0x50) != 0) {
                                      *(int *)(*(long *)(lVar18 + 0x50) + 0x28) = *piVar2;
                                      goto code_r0x00be3c2c;
                                    }
                                    goto code_r0x00be409c;
                                  }
                                }
                              }
                              goto code_r0x00be3ea0;
                            }
                            goto code_r0x00be409c;
                          }
                        }
                      }
                      *(long *)(lVar18 + 0x50) = lVar17;
                      lVar12 = func_0x00a679a0(_string___TypeInfo,5);
                      if (lVar12 == 0) goto code_r0x00be409c;
                      if (*(int *)(lVar12 + 0x18) == 0) goto code_r0x00be3ea0;
                      *(undefined8 *)(lVar12 + 0x20) = _Str_Set_Event__Id__;
                      uVar21 = System_Int32__ToString(piVar1,0);
                      if ((*(uint *)(lVar12 + 0x18) < 2) ||
                         (*(undefined8 *)(lVar12 + 0x28) = uVar21, *(uint *)(lVar12 + 0x18) == 2))
                      goto code_r0x00be3ea0;
                      *(undefined8 *)(lVar12 + 0x30) = _Str___lvl__;
                      uVar21 = System_Int32__ToString(piVar16,0);
                      if ((*(uint *)(lVar12 + 0x18) < 4) ||
                         (*(undefined8 *)(lVar12 + 0x38) = uVar21, *(uint *)(lVar12 + 0x18) == 4))
                      goto code_r0x00be3ea0;
                      *(undefined8 *)(lVar12 + 0x40) = _Str__;
                      uVar21 = System_String__Concat(lVar12,0);
                      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30(_Main_TypeInfo);
                      }
                      Main__GEMDEAMAGPG(uVar21,0,0);
                      if ((*(int *)(lVar17 + 0x1c) == 1) &&
                         ((bVar24 & *(long *)(lVar17 + 0x30) != 0) != 0)) {
                        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                           (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20),
                           lVar12 == 0)) goto code_r0x00be409c;
                        uVar21 = *(undefined8 *)(lVar12 + 0x48);
                        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        uVar7 = UnityEngine_Object__op_Inequality(uVar21,0,0);
                        if ((uVar7 & 1) != 0) {
                          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
                            il2cpp_throw_967b50();
                          }
                          lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
                          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                            il2cpp_throw_967b50();
                          }
                          lVar12 = *(long *)(lVar12 + 0x48);
                          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                            il2cpp_throw_967b50();
                          }
                          RatingEventController__BEGHPCPPIBK
                                    (lVar12,lVar18,*(undefined8 *)(lVar17 + 0x30),0);
                        }
                      }
                    }
code_r0x00be3c2c:
                    if (bVar24 != 0) {
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                           (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20),
                           lVar12 == 0)) || (lVar12 = *(long *)(lVar12 + 0x70), lVar12 == 0)) ||
                         (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0))
                      goto code_r0x00be409c;
                      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
                      if ((uVar7 & 1) != 0) {
                        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        Main__GEMDEAMAGPG(_Str_UpdateParams___,0,0);
                        Level__HMPEMADOAAL(lVar18,0);
                        pvVar10 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                        if (pvVar10 != (void *)0x0) {
                          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30(_Main_TypeInfo);
                            pvVar10 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                            if (pvVar10 == (void *)0x0) goto code_r0x00be409c;
                          }
                          bVar4 = Level__get_IsEvent(pvVar10);
                          if (bVar4) {
                            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                            }
                            if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == lVar18) {
                              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                                 (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20),
                                 lVar12 == 0)) goto code_r0x00be409c;
                              GUIGarage__PGEEGDGGHLL
                                        (lVar12,lVar18,*(int *)((long)__this + 0x28) != 4,0);
                            }
                          }
                        }
                      }
                    }
                    uVar7 = Level__get_IsAvailable(lVar18,0);
                    if (((uVar7 & 1) != 0) && (*(uint *)(lVar17 + 0x1c) < 2)) {
                      if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      NotificationsManager__HFGMIIHKBPC(lVar17,0);
                    }
                  }
                  uStack_74 = uStack_74 + 1;
                  uVar6 = *(uint *)(lVar8 + 0x18);
                } while ((int)uStack_74 < (int)uVar6);
              }
              if (bVar24 != 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0))
                goto code_r0x00be409c;
                uVar21 = *(undefined8 *)(lVar8 + 0x70);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Inequality(uVar21,0,0);
                if ((uVar7 & 1) != 0) {
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  pvVar10 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                  if (pvVar10 != (void *)0x0) {
                    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                      pvVar10 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                      if (pvVar10 == (void *)0x0) goto code_r0x00be409c;
                    }
                    bVar4 = Level__get_IsEvent(pvVar10);
                    if (bVar4) {
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                          (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0)
                          ) || (lVar8 = *(long *)(lVar8 + 0x48), lVar8 == 0)) goto code_r0x00be409c;
                      RatingEventController__MLPOBPBMBHG(lVar8,0);
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if (*(long *)((long)__this + 0x38) == 0) {
            uVar22 = *(undefined4 *)((long)__this + 0x28);
            lVar8 = func_0x00a67b44(_BridgePHP_BridgeError_TypeInfo);
            uVar9 = _Str_ERROR_SECURITY;
            System_Object___ctor(lVar8,0);
            *(undefined8 *)(lVar8 + 0x10) = uVar9;
            *(undefined4 *)(lVar8 + 0x18) = uVar22;
            *(long *)((long)__this + 0x38) = lVar8;
          }
          if (*plVar23 == 0) goto code_r0x00be409c;
          uVar21 = System_String__Concat
                             (_Str_HASH_ERROR__,uVar21,_Str_____,*(undefined8 *)(*plVar23 + 0x28),0)
          ;
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Main_TypeInfo);
          }
          Main__EEKNCFLMGDP(uVar21,0);
        }
      }
    }
    else {
code_r0x00be1364:
      if (*(char *)(lVar20 + 0x79) != '\0') goto code_r0x00be136c;
      if (*(long *)(lVar20 + 0x28) == 0) goto code_r0x00be409c;
      uVar21 = UnityEngine_Networking_UnityWebRequest__get_error(*(long *)(lVar20 + 0x28),0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      Main__GEMDEAMAGPG(uVar21,0,0);
      if ((*(long *)(lVar20 + 0x28) == 0) ||
         (lVar8 = UnityEngine_Networking_UnityWebRequest__get_error(*(long *)(lVar20 + 0x28),0),
         lVar8 == 0)) goto code_r0x00be409c;
      uVar7 = System_String__Contains(lVar8,_Str_403,0);
      if ((uVar7 & 1) == 0) {
        if ((*(long *)(lVar20 + 0x28) == 0) ||
           (lVar8 = UnityEngine_Networking_UnityWebRequest__get_error(*(long *)(lVar20 + 0x28),0),
           lVar8 == 0)) goto code_r0x00be409c;
        uVar7 = System_String__Contains(lVar8,_Str_404,0);
        if ((uVar7 & 1) != 0) goto code_r0x00be13e0;
        if ((*(long *)(lVar20 + 0x28) == 0) ||
           (lVar8 = UnityEngine_Networking_UnityWebRequest__get_error(*(long *)(lVar20 + 0x28),0),
           lVar8 == 0)) goto code_r0x00be409c;
        uVar7 = System_String__Contains(lVar8,_Str_500,0);
        if ((uVar7 & 1) != 0) goto code_r0x00be13e0;
        if ((*(long *)(lVar20 + 0x28) == 0) ||
           (lVar8 = UnityEngine_Networking_UnityWebRequest__get_error(*(long *)(lVar20 + 0x28),0),
           lVar8 == 0)) goto code_r0x00be409c;
        uVar7 = System_String__Contains(lVar8,_Str_503,0);
        if ((uVar7 & 1) != 0) goto code_r0x00be13e0;
        uVar22 = *(undefined4 *)((long)__this + 0x28);
        lVar8 = func_0x00a67b44(_BridgePHP_BridgeError_TypeInfo);
        puVar15 = (undefined8 *)&Str_ERROR_INTERNET;
      }
      else {
code_r0x00be13e0:
        uVar22 = *(undefined4 *)((long)__this + 0x28);
        lVar8 = func_0x00a67b44(_BridgePHP_BridgeError_TypeInfo);
        puVar15 = (undefined8 *)&Str_ERROR_UNAVAILABLE;
      }
      uVar21 = *puVar15;
      System_Object___ctor(lVar8,0);
      *(undefined8 *)(lVar8 + 0x10) = uVar21;
      *(undefined4 *)(lVar8 + 0x18) = uVar22;
      *(long *)((long)__this + 0x38) = lVar8;
      *(undefined1 *)(lVar20 + 0x79) = 0;
      BridgePHP__ResetCheckEventTimer();
    }
    lVar8 = *(long *)((long)__this + 0x38);
    if (lVar8 == 0) {
      *(undefined8 *)(lVar20 + 0x58) = 0;
      BridgePHP__SetServerStatusIcon(0x3f000000,0x3f68f5c3,0x3e0f5c29,0x3f800000,lVar20);
code_r0x00be15d4:
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar20 = *(long *)(_BridgePHP_TypeInfo + 0xb8);
      *(undefined1 *)(lVar20 + 0x28) = 0;
      *(undefined1 *)(lVar20 + 0x5c) = 0;
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(_Str_Bridge_end,0,0);
      *(undefined8 *)((long)__this + 0x38) = 0;
      return false;
    }
    *(long *)(lVar20 + 0x58) = lVar8;
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar8 = *(long *)(lVar20 + 0x58);
      if (lVar8 == 0) goto code_r0x00be409c;
    }
    if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
      uVar21 = Translate__JJJNIPAKLJF
                         (**(long **)(_Translate_TypeInfo + 0xb8),*(undefined8 *)(lVar8 + 0x10),0);
      BridgePHP__SetServerStatusIcon(0x3f6a3d71,0x3e23d70a,0x3db851ec,0x3f800000,lVar20);
      uVar9 = System_String__Concat(_Str_BRIDGE_ERROR__,uVar21,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      Main__GEMDEAMAGPG(uVar9,0,0);
      if (bVar24 != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar20 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar20 == 0))
        goto code_r0x00be409c;
        uVar9 = *(undefined8 *)(lVar20 + 0x48);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar9,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)((long)__this + 0x28) == 5) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                (lVar20 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar20 == 0)) ||
               (lVar20 = *(long *)(lVar20 + 0x48), lVar20 == 0)) goto code_r0x00be409c;
            RatingEventController__ELGNLGIIIAJ(lVar20,uVar21,0);
          }
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
              (lVar20 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar20 == 0)) ||
             (pvVar10 = *(void **)(lVar20 + 0x48), pvVar10 == (void *)0x0)) goto code_r0x00be409c;
          RatingEventController__CAHNMGGBGBK(pvVar10);
        }
      }
      goto code_r0x00be15d4;
    }
    goto code_r0x00be409c;
  }
  if (*(char *)(lVar20 + 0x78) == '\0') {
code_r0x00be2474:
    if (*(long *)(lVar20 + 0x28) == 0) {
code_r0x00be409c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar21 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(*(long *)(lVar20 + 0x28),0);
    uVar22 = 3;
    *(undefined8 *)((long)__this + 0x18) = uVar21;
  }
  else {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__GEMDEAMAGPG(_Str_is_delay_for_wwww,0,0);
    uVar21 = func_0x00a67b44(_UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(0x40400000,uVar21,0);
    *(undefined8 *)((long)__this + 0x18) = uVar21;
    uVar22 = 2;
  }
  *(undefined4 *)((long)__this + 0x10) = uVar22;
  return true;
}



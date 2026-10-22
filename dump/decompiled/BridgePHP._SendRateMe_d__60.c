/* ---- class definition (Il2CppDumper) ----
(not found)
*/

// ==== public void .ctor(int <>1__state) { }   @0xadb2e4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__SendRateMe_d__60___ctor(void *__this,int __1__state)

{
  System_Object___ctor(__this,0);
  *(int *)((long)__this + 0x10) = __1__state;
  return;
}


// ==== private void System.IDisposable.Dispose() { }   @0xadfae4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__SendRateMe_d__60__System_IDisposable_Dispose(void *__this)

{
  return;
}


// ==== private bool MoveNext() { }   @0xadfae8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool BridgePHP__SendRateMe_d__60__MoveNext(void *__this)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000001916e28 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&BridgePHP_BridgeError_TypeInfo);
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
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
    func_0x00a67900(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    func_0x00a67900(&Method_System_Collections_Generic_List_string__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    func_0x00a67900(&Method_System_Collections_Generic_List_string__Sort__);
    func_0x00a67900(&Method_System_Collections_Generic_List_string___ctor__);
    func_0x00a67900(&System_Collections_Generic_List_string__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&UnityEngine_WWWForm_TypeInfo);
    func_0x00a67900(&UnityEngine_WaitForSeconds_TypeInfo);
    func_0x00a67900(&Str_stars);
    func_0x00a67900(&Str_Send_review_end);
    func_0x00a67900(&Str_ERROR_INTERNET);
    func_0x00a67900(&Str_sid);
    func_0x00a67900(&Str_rate_me_php);
    func_0x00a67900(&Str_ok);
    func_0x00a67900(&Str_403);
    func_0x00a67900(&Str_hash);
    func_0x00a67900(&Str_500);
    func_0x00a67900(&Str_ERROR_UNKNOWN);
    func_0x00a67900(&Str_comment);
    func_0x00a67900(&Str_503);
    func_0x00a67900(&Str_ERROR_UNAVAILABLE);
    func_0x00a67900(&Str_is_delay_for_wwww);
    func_0x00a67900(&Str_404);
    func_0x00a67900(&Str_name);
    func_0x00a67900(&Str_version);
    func_0x00a67900(&Str_);
    bRam0000000001916e28 = 1;
  }
  uStack_80 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_c0 = 0;
  iVar1 = *(int *)((long)__this + 0x10);
  lVar11 = *(long *)((long)__this + 0x30);
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
      if (lVar11 == 0) goto LAB_00be07e0;
      *(undefined1 *)(lVar11 + 0x78) = 0;
      lVar7 = *(long *)((long)__this + 0x40);
    }
    else {
      if (iVar1 != 0) {
        return false;
      }
      *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar7 = BridgePHP.<statics>;
      if (*(char *)(lVar7 + 0x29) != '\0') {
        return false;
      }
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar7 = BridgePHP.<statics>;
      }
      *(undefined1 *)(lVar7 + 0x29) = 1;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.KECGFPHIEHF == 0) goto LAB_00be07e0;
      uVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar9,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((((Menu.KECGFPHIEHF == 0) ||
             (lVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar7 == 0)) ||
            (lVar7 = *(long *)(lVar7 + 0x50), lVar7 == 0)) ||
           (lVar7 = *(long *)(lVar7 + 0x38), lVar7 == 0)) goto LAB_00be07e0;
        UnityEngine_UI_Selectable__set_interactable(lVar7,0,0);
        if (((Menu.KECGFPHIEHF == 0) ||
            (lVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar7 == 0)) ||
           (lVar7 = *(long *)(lVar7 + 0x50), lVar7 == 0)) goto LAB_00be07e0;
        RateMe__MDLHHGNHEOP(lVar7,_Str_,0);
      }
      *(undefined8 *)((long)__this + 0x38) = 0;
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar9 = System_String__Concat
                        (BridgePHP.domen,
                         _Str_rate_me_php,0);
      lVar7 = func_0x00a67b44(_UnityEngine_WWWForm_TypeInfo);
      UnityEngine_WWWForm___ctor(lVar7,0);
      lVar4 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__string__TypeInfo);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                (lVar4,_Method_System_Collections_Generic_Dictionary_string__string___ctor__);
      uVar5 = System_Int32__ToString((long)__this + 0x20,0);
      if (lVar4 == 0) goto LAB_00be07e0;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                (lVar4,_Str_stars,uVar5,
                 _Method_System_Collections_Generic_Dictionary_string__string__Add__);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                (lVar4,_Str_comment,*(undefined8 *)((long)__this + 0x28),
                 _Method_System_Collections_Generic_Dictionary_string__string__Add__);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                (lVar4,_Str_sid,BridgePHP.sid,
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
      lVar8 = Main.FBDDKIOEKDM;
      if (lVar8 == 0) goto LAB_00be07e0;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                (lVar4,_Str_name,*(undefined8 *)(lVar8 + 0x20),
                 _Method_System_Collections_Generic_Dictionary_string__string__Add__);
      if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      plVar6 = (long *)UnityEngine_Application__get_version(0);
      if (plVar6 == (long *)0x0) goto LAB_00be07e0;
      uVar5 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                (lVar4,_Str_version,uVar5,
                 _Method_System_Collections_Generic_Dictionary_string__string__Add__);
      lVar8 = func_0x00a67b44(_System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
                (lVar8,_Method_System_Collections_Generic_List_string___ctor__);
      uVar5 = Main.MEJFDBADHDD;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator
                (lVar4,&uStack_f8,
                 _Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
      uStack_98 = uStack_f0;
      uStack_a0 = uStack_f8;
      uStack_88 = uStack_e0;
      uStack_90 = uStack_e8;
      uStack_80 = uStack_d8;
      while (uVar3 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext
                               (&uStack_a0,
                                _Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext
                               ), (uVar3 & 1) != 0) {
        func_0x00b7fb78(&uStack_a0,&uStack_70,
                        _Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Curr
                       );
        uStack_b0 = uStack_70;
        uStack_a8 = uStack_68;
        func_0x00b7fc68(&uStack_b0,&uStack_70,
                        _Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        func_0x00b7fe44(lVar8,uStack_70,_Method_System_Collections_Generic_List_string__Add__);
      }
      System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose
                (&uStack_a0,
                 _Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose_);
      if (lVar8 == 0) goto LAB_00be07e0;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___Sort
                (lVar8,_Method_System_Collections_Generic_List_string__Sort__);
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                (lVar8,&uStack_f8,_Method_System_Collections_Generic_List_string__GetEnumerator__);
      uStack_c8 = uStack_f0;
      uStack_d0 = uStack_f8;
      uStack_c0 = uStack_e8;
      while (uVar3 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                               (&uStack_d0,
                                _Method_System_Collections_Generic_List_Enumerator_string__MoveNext__
                               ), (uVar3 & 1) != 0) {
        func_0x00b947ec(&uStack_d0,&uStack_f8,
                        _Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
        uVar2 = uStack_f8;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item
                  (lVar4,uStack_f8,&uStack_f8,
                   _Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        UnityEngine_WWWForm__AddField(lVar7,uVar2,uStack_f8,0);
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item
                  (lVar4,uVar2,&uStack_f8,
                   _Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        uVar5 = System_String__Concat(uVar5,uStack_f8,0);
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                (&uStack_d0,_Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = BridgePHP__Md5Sum(uVar5);
      if (lVar7 == 0) goto LAB_00be07e0;
      UnityEngine_WWWForm__AddField(lVar7,_Str_hash,uVar5,0);
      lVar7 = UnityEngine_Networking_UnityWebRequest__Post(uVar9,lVar7,0);
      *(long *)((long)__this + 0x40) = lVar7;
      if (lVar11 == 0) goto LAB_00be07e0;
      if (*(char *)(lVar11 + 0x78) != '\0') {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__GEMDEAMAGPG(_Str_is_delay_for_wwww,0,0);
        uVar9 = func_0x00a67b44(_UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(0x40400000,uVar9,0);
        *(undefined8 *)((long)__this + 0x18) = uVar9;
        *(undefined4 *)((long)__this + 0x10) = 1;
        return true;
      }
    }
    if (lVar7 != 0) {
      uVar9 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(lVar7,0);
      *(undefined8 *)((long)__this + 0x18) = uVar9;
      *(undefined4 *)((long)__this + 0x10) = 2;
      return true;
    }
    goto LAB_00be07e0;
  }
  *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
  if (lVar11 == 0) goto LAB_00be07e0;
  if (*(char *)(lVar11 + 0x79) != '\0') goto LAB_00be020c;
  if (*(long *)((long)__this + 0x40) == 0) goto LAB_00be07e0;
  uVar3 = UnityEngine_Networking_UnityWebRequest__get_isNetworkError
                    (*(long *)((long)__this + 0x40),0);
  if ((uVar3 & 1) == 0) {
    if (*(long *)((long)__this + 0x40) == 0) goto LAB_00be07e0;
    uVar3 = UnityEngine_Networking_UnityWebRequest__get_isHttpError
                      (*(long *)((long)__this + 0x40),0);
    if ((uVar3 & 1) != 0) goto LAB_00be016c;
    if (((*(long *)((long)__this + 0x40) == 0) ||
        (lVar11 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler
                            (*(long *)((long)__this + 0x40),0), lVar11 == 0)) ||
       (lVar11 = UnityEngine_Networking_DownloadHandler__get_text(lVar11,0), lVar11 == 0))
    goto LAB_00be07e0;
    uVar3 = System_String__Contains(lVar11,_Str_ok,0);
    lVar7 = lVar11;
    if ((uVar3 & 1) == 0) {
      lVar7 = 0;
    }
    if ((uVar3 & 1) == 0) {
      lVar7 = func_0x00a67b44(_BridgePHP_BridgeError_TypeInfo);
      uVar9 = _Str_ERROR_UNKNOWN;
      System_Object___ctor(lVar7,0);
      *(undefined8 *)(lVar7 + 0x10) = uVar9;
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(long *)((long)__this + 0x38) = lVar7;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.KECGFPHIEHF == 0) goto LAB_00be07e0;
      uVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar9,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((Menu.KECGFPHIEHF == 0) ||
           (lVar11 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar11 == 0))
        goto LAB_00be07e0;
        uVar9 = *(undefined8 *)(lVar11 + 0x50);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar9,0,0);
        lVar11 = lVar7;
        if ((uVar3 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (((Menu.KECGFPHIEHF == 0) ||
              (lVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar7 == 0)) ||
             (lVar7 = *(long *)(lVar7 + 0x50), lVar7 == 0)) goto LAB_00be07e0;
          RateMe__KKDHMPMOJCB(lVar7,0);
        }
      }
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__GEMDEAMAGPG(lVar11,0,0);
  }
  else {
LAB_00be016c:
    if (*(char *)(lVar11 + 0x79) != '\0') goto LAB_00be020c;
    if (*(long *)((long)__this + 0x40) == 0) goto LAB_00be07e0;
    uVar9 = UnityEngine_Networking_UnityWebRequest__get_error(*(long *)((long)__this + 0x40),0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__GEMDEAMAGPG(uVar9,0,0);
    if ((*(long *)((long)__this + 0x40) == 0) ||
       (lVar7 = UnityEngine_Networking_UnityWebRequest__get_error(*(long *)((long)__this + 0x40),0),
       lVar7 == 0)) goto LAB_00be07e0;
    uVar3 = System_String__Contains(lVar7,_Str_403,0);
    if ((uVar3 & 1) == 0) {
      if ((*(long *)((long)__this + 0x40) == 0) ||
         (lVar7 = UnityEngine_Networking_UnityWebRequest__get_error
                            (*(long *)((long)__this + 0x40),0), lVar7 == 0)) goto LAB_00be07e0;
      uVar3 = System_String__Contains(lVar7,_Str_404,0);
      if ((uVar3 & 1) != 0) goto LAB_00be020c;
      if ((*(long *)((long)__this + 0x40) == 0) ||
         (lVar7 = UnityEngine_Networking_UnityWebRequest__get_error
                            (*(long *)((long)__this + 0x40),0), lVar7 == 0)) goto LAB_00be07e0;
      uVar3 = System_String__Contains(lVar7,_Str_500,0);
      puVar10 = (undefined8 *)&Str_ERROR_UNAVAILABLE;
      if ((uVar3 & 1) == 0) {
        if ((*(long *)((long)__this + 0x40) == 0) ||
           (lVar7 = UnityEngine_Networking_UnityWebRequest__get_error
                              (*(long *)((long)__this + 0x40),0), lVar7 == 0)) goto LAB_00be07e0;
        uVar3 = System_String__Contains(lVar7,_Str_503,0);
        if ((uVar3 & 1) == 0) {
          puVar10 = (undefined8 *)&Str_ERROR_INTERNET;
        }
      }
    }
    else {
LAB_00be020c:
      puVar10 = (undefined8 *)&Str_ERROR_UNAVAILABLE;
    }
    lVar7 = func_0x00a67b44(_BridgePHP_BridgeError_TypeInfo);
    uVar9 = *puVar10;
    System_Object___ctor(lVar7,0);
    *(undefined8 *)(lVar7 + 0x10) = uVar9;
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(long *)((long)__this + 0x38) = lVar7;
    *(undefined1 *)(lVar11 + 0x79) = 0;
    BridgePHP__ResetCheckEventTimer();
  }
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  BridgePHP.is_loading_rate_me = 0;
  if (*(long *)((long)__this + 0x38) == 0) {
LAB_00be03cc:
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__GEMDEAMAGPG(_Str_Send_review_end,0,0);
    return false;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF != 0) {
    uVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar9,0,0);
    if ((uVar3 & 1) == 0) goto LAB_00be03cc;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF != 0) &&
       (lVar11 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar11 != 0)) {
      uVar9 = *(undefined8 *)(lVar11 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar9,0,0);
      if ((uVar3 & 1) == 0) goto LAB_00be03cc;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF != 0) &&
         (lVar11 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar11 != 0)) {
        lVar11 = *(long *)(lVar11 + 0x50);
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (((*(long *)((long)__this + 0x38) != 0) && (Translate.KECGFPHIEHF != 0)
            ) && (uVar9 = Translate__JJJNIPAKLJF
                                    (Translate.KECGFPHIEHF,
                                     *(undefined8 *)(*(long *)((long)__this + 0x38) + 0x10),0),
                 lVar11 != 0)) {
          RateMe__MDLHHGNHEOP(lVar11,uVar9,0);
          if (((Menu.KECGFPHIEHF != 0) &&
              (lVar11 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar11 != 0)) &&
             ((lVar11 = *(long *)(lVar11 + 0x50), lVar11 != 0 &&
              (lVar11 = *(long *)(lVar11 + 0x38), lVar11 != 0)))) {
            UnityEngine_UI_Selectable__set_interactable(lVar11,1,0);
            goto LAB_00be03cc;
          }
        }
      }
    }
  }
LAB_00be07e0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }   @0xae08e8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * BridgePHP__SendRateMe_d__60__System_Collections_Generic_IEnumerator_System_Object__get_Current
                 (void *__this)

{
  return *(void **)((long)__this + 0x18);
}


// ==== private void System.Collections.IEnumerator.Reset() { }   @0xae08f0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__SendRateMe_d__60__System_Collections_IEnumerator_Reset(void *__this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00a67914(&System_NotSupportedException_TypeInfo);
  uVar1 = func_0x00a67b44();
  System_NotSupportedException___ctor(uVar1,0);
  uVar2 = func_0x00a67914(&Method_BridgePHP__SendRateMe_d__60_System_Collections_IEnumerator_Reset__
                         );
  func_0x00a67a20(uVar1,uVar2);
  return;
}


// ==== private object System.Collections.IEnumerator.get_Current() { }   @0xae0928

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * BridgePHP__SendRateMe_d__60__System_Collections_IEnumerator_get_Current(void *__this)

{
  return *(void **)((long)__this + 0x18);
}



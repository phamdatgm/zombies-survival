/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[CompilerGenerated]
private sealed class RatingController.MPMOFDOCDBD : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 5114
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	public RatingController <>4__this; // 0x20
	private string <error_text>5__2; // 0x28

	// Properties
	private object System.Collections.Generic.IEnumerator<System.Object>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	public void .ctor(int <>1__state) { }

	[DebuggerHidden]
	private void System.IDisposable.Dispose() { }

	private bool MoveNext() { }

	[DebuggerHidden]
	private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

	[DebuggerHidden]
	private void System.Collections.IEnumerator.Reset() { }

	[DebuggerHidden]
	private object System.Collections.IEnumerator.get_Current() { }
}
*/

// ==== public void .ctor(int <>1__state) { }   @0xaf72e0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController_MPMOFDOCDBD___ctor(void *__this,int __1__state)

{
  System_Object___ctor(__this,0);
  *(int *)((long)__this + 0x10) = __1__state;
  return;
}


// ==== private void System.IDisposable.Dispose() { }   @0xaf7930

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController_MPMOFDOCDBD__System_IDisposable_Dispose(void *__this)

{
  return;
}


// ==== private bool MoveNext() { }   @0xaf7934

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool RatingController_MPMOFDOCDBD__MoveNext(void *__this)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  void *__this_00;
  undefined1 auVar11 [12];
  undefined4 uStack_44;
  
  if ((bRam0000000001916eea & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&RatingController_RatingWrapperData_var);
    func_0x00a67900(&RatingController_RatingWrapperData_TypeInfo);
    func_0x00a67900(&string_TypeInfo);
    func_0x00a67900(&System_Type_TypeInfo);
    func_0x00a67900(&UnityEngine_WWWForm_TypeInfo);
    func_0x00a67900(&Str___rating__);
    func_0x00a67900(&Str_wwwRating_error_);
    func_0x00a67900(&Str_wwwRating_start);
    func_0x00a67900(&Str_wwwRating_end_);
    func_0x00a67900(&Str_rating_php);
    func_0x00a67900(&Str_wwwRating_is_busy);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_sn);
    func_0x00a67900(&Str_rnd_key);
    func_0x00a67900(&Str_id);
    func_0x00a67900(&Str_segment_id);
    func_0x00a67900(&Str_rating_id);
    func_0x00a67900(&Str_country_id);
    func_0x00a67900(&Str____);
    bRam0000000001916eea = 1;
  }
  uStack_44 = 0;
  __this_00 = *(void **)((long)__this + 0x20);
  if (*(int *)((long)__this + 0x10) != 1) {
    if (*(int *)((long)__this + 0x10) != 0) {
      return false;
    }
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (__this_00 != (void *)0x0) {
      if (((*(long *)((long)__this_00 + 0xd0) != 0) &&
          (uVar3 = UnityEngine_Networking_UnityWebRequest__get_isDone
                             (*(long *)((long)__this_00 + 0xd0),0), (uVar3 & 1) == 0)) &&
         (*(long *)((long)__this_00 + 0xd0) != 0)) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__GEMDEAMAGPG(_Str_wwwRating_is_busy,0,0);
        return false;
      }
      *(undefined8 *)((long)__this + 0x28) = **(undefined8 **)(_string_TypeInfo + 0xb8);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(_Str_wwwRating_start,0,0);
      *(undefined1 *)((long)__this_00 + 0x30) = 1;
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = System_String__Concat
                        (BridgePHP.domen,
                         _Str_rating_php,0);
      lVar6 = func_0x00a67b44(_UnityEngine_WWWForm_TypeInfo);
      UnityEngine_WWWForm___ctor(lVar6,0);
      if (lVar6 != 0) {
        UnityEngine_WWWForm__AddField(lVar6,_Str_sn,BridgePHP.sn,0)
        ;
        UnityEngine_WWWForm__AddField
                  (lVar6,_Str_rating_id,*(undefined4 *)((long)__this_00 + 0x48),0);
        UnityEngine_WWWForm__AddField
                  (lVar6,_Str_segment_id,*(undefined4 *)((long)__this_00 + 0x60),0);
        if (*(int *)((long)__this_00 + 0x60) == 1) {
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
          lVar10 = Main.FBDDKIOEKDM;
          if (lVar10 == 0) goto LAB_00bf8464;
          if (0 < *(int *)(lVar10 + 0x14)) {
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
            lVar10 = Main.FBDDKIOEKDM;
            if (lVar10 == 0) goto LAB_00bf8464;
            iVar1 = *(int *)(lVar10 + 0x14);
            if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar10 = BridgePHP.countries;
            if (lVar10 == 0) goto LAB_00bf8464;
            if (iVar1 < *(int *)(lVar10 + 0x18)) {
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
              lVar10 = Main.FBDDKIOEKDM;
              if (lVar10 == 0) goto LAB_00bf8464;
              UnityEngine_WWWForm__AddField(lVar6,_Str_country_id,*(undefined4 *)(lVar10 + 0x14),0);
            }
          }
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
        lVar10 = Main.FBDDKIOEKDM;
        if (lVar10 != 0) {
          if (*(int *)(lVar10 + 0x10) != 0) {
            if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (0 < BridgePHP.rnd_key) {
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
              lVar10 = Main.FBDDKIOEKDM;
              if (lVar10 == 0) goto LAB_00bf8464;
              UnityEngine_WWWForm__AddField(lVar6,_Str_id,*(undefined4 *)(lVar10 + 0x10),0);
              if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              UnityEngine_WWWForm__AddField
                        (lVar6,_Str_rnd_key,
                         BridgePHP.rnd_key,0);
            }
          }
          lVar6 = UnityEngine_Networking_UnityWebRequest__Post(uVar5,lVar6,0);
          *(long *)((long)__this_00 + 0xd0) = lVar6;
          if (lVar6 != 0) {
            uVar5 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(lVar6,0);
            *(undefined8 *)((long)__this + 0x18) = uVar5;
            *(undefined4 *)((long)__this + 0x10) = 1;
            return true;
          }
        }
      }
    }
    goto LAB_00bf8464;
  }
  *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
  if ((__this_00 == (void *)0x0) || (*(long *)((long)__this_00 + 0xd0) == 0)) goto LAB_00bf8464;
  uVar3 = UnityEngine_Networking_UnityWebRequest__get_isNetworkError
                    (*(long *)((long)__this_00 + 0xd0),0);
  if ((uVar3 & 1) == 0) {
    if (*(long *)((long)__this_00 + 0xd0) == 0) goto LAB_00bf8464;
    uVar3 = UnityEngine_Networking_UnityWebRequest__get_isHttpError
                      (*(long *)((long)__this_00 + 0xd0),0);
    if ((uVar3 & 1) != 0) goto LAB_00bf7b0c;
    if ((*(long *)((long)__this_00 + 0xd0) == 0) ||
       (lVar6 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler
                          (*(long *)((long)__this_00 + 0xd0),0), lVar6 == 0)) goto LAB_00bf8464;
    lVar6 = UnityEngine_Networking_DownloadHandler__get_text(lVar6,0);
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
    lVar10 = Main.FBDDKIOEKDM;
    if (lVar10 == 0) goto LAB_00bf8464;
    if (*(int *)(lVar10 + 0x84) == 1) {
      if (lVar6 == 0) goto LAB_00bf8464;
      if (*(int *)(lVar6 + 0x10) < 0x3ea) {
        lVar10 = lVar6;
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
      }
      else {
        uVar5 = System_String__Substring(lVar6,0,1000,0);
        lVar10 = System_String__Concat(uVar5,_Str____,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
      }
      Main__GEMDEAMAGPG(lVar10,0,0);
    }
    uVar7 = System_String__Concat(_Str___rating__,lVar6,_Str__,0);
    uVar5 = _RatingController_RatingWrapperData_var;
    if (*(int *)(_System_Type_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
    plVar4 = (long *)UnityEngine_JsonUtility__FromJson(uVar7,uVar5,0);
    lVar6 = _RatingController_RatingWrapperData_TypeInfo;
    if (plVar4 == (long *)0x0) {
      *(undefined8 *)((long)__this_00 + 0xa8) = 0;
LAB_00bf80c0:
      uVar5 = 0;
      goto LAB_00bf80c4;
    }
    bVar2 = *(byte *)(_RatingController_RatingWrapperData_TypeInfo + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar4 + 200) + ((ulong)bVar2 - 1) * 8) !=
        _RatingController_RatingWrapperData_TypeInfo)) {
      func_0x00a67eec();
    }
    else {
      *(long **)((long)__this_00 + 0xa8) = plVar4;
      if ((bVar2 <= *(byte *)(*plVar4 + 0x130)) &&
         (*(long *)(*(long *)(*plVar4 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) {
        if ((plVar4 == (long *)0x0) || ((void *)plVar4[2] == (void *)0x0)) goto LAB_00bf80c0;
        RatingController__BEGHPCPPIBK
                  (__this_00,*(int *)((long)__this_00 + 0x48),*(int *)((long)__this_00 + 0x60),
                   (void *)plVar4[2]);
        goto LAB_00bf80cc;
      }
    }
    auVar11 = func_0x00a67eec();
    uVar5 = auVar11._0_8_;
    if (auVar11._8_4_ != 1) {
LAB_00bf8490:
      func_0x00b65214(uVar5);
      lVar6 = func_0x009bbf58();
      return *(int *)(lVar6 + 0x84) == 1;
    }
    puVar8 = (undefined8 *)func_0x016dec50(uVar5);
    uVar5 = func_0x00a67914(&System_Exception_TypeInfo);
    uVar3 = func_0x00a67f7c(uVar5,*(undefined8 *)*puVar8);
    if ((uVar3 & 1) == 0) {
      puVar9 = (undefined8 *)func_0x016dec80(8);
      *puVar9 = *puVar8;
      uVar5 = func_0x016dec90(puVar9,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__016e4f48,0);
      func_0x016dec60();
      goto LAB_00bf8490;
    }
    plVar4 = (long *)*puVar8;
    uVar5 = func_0x016dec60();
    uVar5 = RatingController__EDCLKAIGBGF(uVar5,0);
    *(undefined8 *)((long)__this + 0x28) = uVar5;
    if (plVar4 == (long *)0x0) goto LAB_00bf8464;
    uVar5 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
    uVar7 = func_0x00a67914(&Str_ERROR_GET_INFORMATION_Rating__);
    uVar5 = System_String__Concat(uVar7,uVar5,0);
    lVar6 = func_0x00a67914(&Main_TypeInfo);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__EEKNCFLMGDP(uVar5,0);
    uVar5 = func_0x00a67914(&string___TypeInfo);
    lVar6 = func_0x00a679a0(uVar5,6);
    if (lVar6 == 0) goto LAB_00bf8464;
    uVar5 = func_0x00a67914(&Str_ERROR_GET_INFORMATION_Rating_param_0___);
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_00bf8358:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    *(undefined8 *)(lVar6 + 0x20) = uVar5;
    uStack_44 = *(undefined4 *)((long)__this_00 + 0x48);
    uVar5 = System_Int32__ToString(&uStack_44,0);
    if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_00bf8358;
    *(undefined8 *)(lVar6 + 0x28) = uVar5;
    uVar5 = func_0x00a67914(&Str___param_1___);
    if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_00bf8358;
    *(undefined8 *)(lVar6 + 0x30) = uVar5;
    uStack_44 = *(undefined4 *)((long)__this_00 + 0x60);
    uVar5 = System_Int32__ToString(&uStack_44,0);
    if (*(uint *)(lVar6 + 0x18) < 4) goto LAB_00bf8358;
    *(undefined8 *)(lVar6 + 0x38) = uVar5;
    uVar5 = func_0x00a67914(&Str___len__);
    if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_00bf8358;
    *(undefined8 *)(lVar6 + 0x40) = uVar5;
    if ((*(long *)((long)__this_00 + 0xa8) == 0) ||
       (lVar10 = *(long *)(*(long *)((long)__this_00 + 0xa8) + 0x10), lVar10 == 0))
    goto LAB_00bf8464;
    uStack_44 = (undefined4)*(undefined8 *)(lVar10 + 0x18);
    uVar5 = System_Int32__ToString(&uStack_44,0);
    if (*(uint *)(lVar6 + 0x18) < 6) goto LAB_00bf8358;
    *(undefined8 *)(lVar6 + 0x48) = uVar5;
    uVar5 = System_String__Concat(lVar6,0);
    Main__EEKNCFLMGDP(uVar5,0);
  }
  else {
LAB_00bf7b0c:
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    plVar4 = (long *)Main__EEKNCFLMGDP(_Str_wwwRating_error_,0);
    uVar5 = 1;
LAB_00bf80c4:
    uVar5 = RatingController__EDCLKAIGBGF(plVar4,uVar5);
    *(undefined8 *)((long)__this + 0x28) = uVar5;
  }
LAB_00bf80cc:
  uVar3 = System_String__op_Inequality
                    (*(undefined8 *)((long)__this + 0x28),**(undefined8 **)(_string_TypeInfo + 0xb8)
                     ,0);
  if ((uVar3 & 1) == 0) {
    if ((*(long *)((long)__this_00 + 200) != 0) &&
       (lVar6 = UnityEngine_Component__get_gameObject(*(long *)((long)__this_00 + 200),0),
       lVar6 != 0)) {
      UnityEngine_GameObject__SetActive(lVar6,0,0);
LAB_00bf815c:
      *(undefined1 *)((long)__this_00 + 0x30) = 0;
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(_Str_wwwRating_end_,0,0);
      *(undefined8 *)((long)__this + 0x28) = 0;
      return false;
    }
  }
  else {
    RatingController__GGOIKHNAIJB(__this_00,0);
    if ((*(long *)((long)__this_00 + 200) != 0) &&
       (lVar6 = UnityEngine_Component__get_gameObject(*(long *)((long)__this_00 + 200),0),
       lVar6 != 0)) {
      UnityEngine_GameObject__SetActive(lVar6,1,0);
      plVar4 = *(long **)((long)__this_00 + 200);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x5a8))
                  (plVar4,*(undefined8 *)((long)__this + 0x28),*(undefined8 *)(*plVar4 + 0x5b0));
        goto LAB_00bf815c;
      }
    }
  }
LAB_00bf8464:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }   @0xaf84ac

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * RatingController_MPMOFDOCDBD__System_Collections_Generic_IEnumerator_System_Object__get_Current
                 (void *__this)

{
  return *(void **)((long)__this + 0x18);
}


// ==== private void System.Collections.IEnumerator.Reset() { }   @0xaf84b4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController_MPMOFDOCDBD__System_Collections_IEnumerator_Reset(void *__this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00a67914(&System_NotSupportedException_TypeInfo);
  uVar1 = func_0x00a67b44();
  System_NotSupportedException___ctor(uVar1,0);
  uVar2 = func_0x00a67914(&
                          Method_RatingController_MPMOFDOCDBD_System_Collections_IEnumerator_Reset__
                         );
  func_0x00a67a20(uVar1,uVar2);
  return;
}


// ==== private object System.Collections.IEnumerator.get_Current() { }   @0xaf84ec

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * RatingController_MPMOFDOCDBD__System_Collections_IEnumerator_get_Current(void *__this)

{
  return *(void **)((long)__this + 0x18);
}



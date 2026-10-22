// ==== public EventContest JGMFIPCELEF() { }   @0xb3fb84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * RatingEventController__JGMFIPCELEF(void *__this)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  
  if ((bRam0000000001917126 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&RatingEventController_TypeInfo);
    bRam0000000001917126 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (((*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) ||
      (lVar7 = **(long **)(_RatingEventController_TypeInfo + 0xb8), lVar7 == 0)) ||
     (uVar1 = *(uint *)(lVar7 + 0x18), (int)uVar1 < 1)) {
    pvVar6 = (void *)0x0;
  }
  else {
    lVar8 = 0;
    lVar3 = _Main_TypeInfo;
    pvVar5 = (void *)0x0;
    do {
      if (uVar1 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      pvVar9 = *(void **)(lVar7 + 0x20 + lVar8 * 8);
      if (pvVar9 == (void *)0x0) {
LAB_00c3fc94:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      iVar2 = *(int *)((long)pvVar9 + 0x14);
      if (*(int *)(lVar3 + 0xe0) == 0) {
        func_0x00a67a30();
        lVar3 = _Main_TypeInfo;
      }
      lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x40);
      if (lVar4 == 0) goto LAB_00c3fc94;
      pvVar6 = pvVar5;
      if ((iVar2 == *(int *)(lVar4 + 0x10) + -100) &&
         (pvVar6 = pvVar9, *(int *)((long)pvVar9 + 0x1c) != 3)) {
        pvVar6 = pvVar5;
      }
      uVar1 = *(uint *)(lVar7 + 0x18);
      lVar8 = lVar8 + 1;
      pvVar5 = pvVar6;
    } while ((int)lVar8 < (int)uVar1);
  }
  return pvVar6;
}


// ==== private void HPAFDOMPACP() { }   @0xb40fe4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__HPAFDOMPACP(void *__this)

{
  long *plVar1;
  long lStack_18;
  
  if ((bRam000000000191712b & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    bRam000000000191712b = 1;
  }
  plVar1 = *(long **)((long)__this + 0x50);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x3c8))(plVar1,*(undefined8 *)(*plVar1 + 0x3d0));
    if (*(long *)((long)__this + 0x70) != 0) {
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (*(long *)((long)__this + 0x70),&lStack_18,
                 _Method_UnityEngine_Component_GetComponent_RectTransform___);
      if (lStack_18 != 0) {
        UnityEngine_RectTransform__set_anchoredPosition(0,0,lStack_18,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void MLPOBPBMBHG() { }   @0xb41a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__MLPOBPBMBHG(void *__this)

{
  void *pvVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined4 uStack_24;
  
  if ((bRam000000000191712e & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_EVENT_);
    bRam000000000191712e = 1;
  }
  if (*(int *)((long)_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (((*(char *)(*(long *)((long)_BridgePHP_TypeInfo + 0xb8) + 0x40) == '\0') &&
      (pvVar1 = RatingEventController__JGMFIPCELEF(_BridgePHP_TypeInfo), pvVar1 != (void *)0x0)) &&
     (*(long *)((long)pvVar1 + 0x30) != 0)) {
    RatingEventController__HIPELCKHJCI(pvVar1,*(undefined8 *)((long)__this + 0xb0));
    RatingEventController__PLCDDDDLCBB(__this,0);
    plVar3 = *(long **)((long)__this + 0xa8);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uStack_24 = *(undefined4 *)((long)pvVar1 + 0x18);
    lVar4 = **(long **)(_Translate_TypeInfo + 0xb8);
    uVar2 = System_Int32__ToString(&uStack_24,0);
    uVar2 = System_String__Concat(_Str_EVENT_,uVar2,0);
    if ((lVar4 != 0) && (uVar2 = Translate__JJJNIPAKLJF(uVar2,uVar2), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x5a8))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x5b0));
      if (*(long *)((long)__this + 0xc0) != 0) {
        UnityEngine_UI_Selectable__set_interactable(*(long *)((long)__this + 0xc0),1,0);
        if ((*(long *)((long)__this + 0xc0) != 0) &&
           (lVar4 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0xc0),0),
           lVar4 != 0)) {
          UnityEngine_GameObject__SetActive(lVar4,1,0);
          if (*(long *)((long)__this + 0x40) != 0) {
            UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x40),0,0);
            if (*(long *)((long)__this + 0xb8) != 0) {
              UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0xb8),0,0);
              if (*(long *)((long)__this + 200) != 0) {
                UnityEngine_GameObject__SetActive(*(long *)((long)__this + 200),0,0);
                if ((*(long *)((long)__this + 0xa0) != 0) &&
                   (lVar4 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0xa0),0),
                   lVar4 != 0)) {
                  UnityEngine_GameObject__SetActive(lVar4,0,0);
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                      (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 != 0)) &&
                     (lVar4 = *(long *)(lVar4 + 0x170), lVar4 != 0)) {
                    GUIWindow__HEGIHOAJOKK(lVar4,1,0);
                    return;
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
  return;
}


// ==== public void JIGMJDHGBCJ() { }   @0xb42bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__JIGMJDHGBCJ(void *__this)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  
  if ((bRam0000000001917131 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    bRam0000000001917131 = 1;
  }
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(long *)((long)__this + 0x20) != 0) {
    cVar1 = *(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x28);
    uVar2 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 0x20),0);
    if (cVar1 == '\0') {
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(long *)((long)__this + 0x20) != 0) {
        UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x20),0,0);
        lVar3 = *(long *)((long)__this + 0x40);
        if (lVar3 != 0) {
          uVar8 = 0;
LAB_00c42dc0:
          if (pcRam000000000191c3f8 == (code *)0x0) {
            pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
          }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191c3f8)(lVar3,uVar8);
          return;
        }
      }
    }
    else if ((uVar2 & 1) == 0) {
      if (*(long *)((long)__this + 0x20) != 0) {
        UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x20),1,0);
        if (*(long *)((long)__this + 0xc0) != 0) {
          if (*(char *)(*(long *)((long)__this + 0xc0) + 0xd8) != '\0') {
            return;
          }
          lVar3 = *(long *)((long)__this + 0x40);
          if (lVar3 != 0) {
            uVar8 = 1;
            goto LAB_00c42dc0;
          }
        }
      }
    }
    else {
      uVar8 = *(undefined8 *)((long)__this + 0x30);
      fVar9 = *(float *)((long)__this + 0x38);
      if (cRam0000000001916e65 == '\0') {
        func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
        cRam0000000001916e65 = '\x01';
      }
      uVar6 = *(undefined8 *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x48);
      fVar7 = *(float *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x50);
      fVar5 = (float)UnityEngine_Time__get_deltaTime(0);
      lVar3 = *(long *)((long)__this + 0x28);
      lVar4 = *(long *)((long)__this + 0x48);
      *(ulong *)((long)__this + 0x30) =
           CONCAT44((float)((ulong)uVar8 >> 0x20) + (float)((ulong)uVar6 >> 0x20) * -50.0 * fVar5,
                    (float)uVar8 + (float)uVar6 * -50.0 * fVar5);
      *(float *)((long)__this + 0x38) = fVar9 + fVar7 * -50.0 * fVar5;
      UnityEngine_Quaternion__Internal_FromEulerRad(0);
      if ((lVar4 != 0) && (UnityEngine_Transform__set_rotation(lVar4,0), lVar3 != 0)) {
        if (pcRam000000000191c8a0 == (code *)0x0) {
          pcRam000000000191c8a0 = (code *)func_0x00a678c4(&UNK_005b89bb,0);
        }
        (*pcRam000000000191c8a0)(lVar3,&stack0xffffffffffffffd0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



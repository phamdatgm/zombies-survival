// ==== public void BKGEGFOEGEO() { }   @0xaf6894

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__BKGEGFOEGEO(void *__this)

{
  uint uVar1;
  long lVar2;
  
  if (*(char *)((long)__this + 0x30) == '\0') {
    if (*(long *)((long)__this + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*(int *)((long)__this + 0x48) < *(int *)(*(long *)((long)__this + 0x50) + 0x18) + -1) {
      uVar1 = *(int *)((long)__this + 0x48) + 1;
      lVar2 = *(long *)((long)__this + 0x50);
      if (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar2 = *(long *)(lVar2 + (long)(int)uVar1 * 8 + 0x20);
        if (lVar2 != 0) {
          UnityEngine_UI_Toggle__set_isOn(lVar2,1,0);
          *(uint *)((long)__this + 0x48) = uVar1;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
}


// ==== public void JIGMJDHGBCJ() { }   @0xaf7140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__JIGMJDHGBCJ(void *__this)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  
  if (*(long *)((long)__this + 0x20) != 0) {
    cVar1 = *(char *)((long)__this + 0x30);
    uVar2 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 0x20),0);
    if (cVar1 == '\0') {
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *(long *)((long)__this + 0x20);
      if (lVar3 != 0) {
        uVar7 = 0;
LAB_00bf7250:
        if (pcRam000000000191c3f8 == (code *)0x0) {
          pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
        }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191c3f8)(lVar3,uVar7);
        return;
      }
    }
    else if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)((long)__this + 0x20);
      if (lVar3 != 0) {
        uVar7 = 1;
        goto LAB_00bf7250;
      }
    }
    else {
      uVar7 = *(undefined8 *)((long)__this + 0x34);
      fVar8 = *(float *)((long)__this + 0x3c);
      if (cRam0000000001916e65 == '\0') {
        func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
        cRam0000000001916e65 = '\x01';
      }
      uVar5 = *(undefined8 *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x48);
      fVar6 = *(float *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x50);
      fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
      lVar3 = *(long *)((long)__this + 0x28);
      *(ulong *)((long)__this + 0x34) =
           CONCAT44((float)((ulong)uVar7 >> 0x20) + (float)((ulong)uVar5 >> 0x20) * -50.0 * fVar4,
                    (float)uVar7 + (float)uVar5 * -50.0 * fVar4);
      *(float *)((long)__this + 0x3c) = fVar8 + fVar6 * -50.0 * fVar4;
      UnityEngine_Quaternion__Internal_FromEulerRad(0);
      if (lVar3 != 0) {
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


// ==== private void GGOIKHNAIJB(bool MDIDBDKGGJI) { }   @0xaf6d8c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__GGOIKHNAIJB(void *__this,bool MDIDBDKGGJI)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = *(long *)((long)__this + 0x80);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar2 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_00bf6df0;
        UnityEngine_GameObject__SetActive(lVar2,MDIDBDKGGJI,0);
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
    return;
  }
LAB_00bf6df0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void LDNINGMNDLE() { }   @0xaf765c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__LDNINGMNDLE(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916ee8 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916ee8 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar4 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    RatingController__GGOIKHNAIJB(__this,false);
    RatingController__ALNNLEHPENN(__this);
    RatingController__EKGEIOGPKIJ(__this);
    RatingController__PAHDFNGJABH(__this,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
        (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar3 != 0)) &&
       (lVar3 = *(long *)(lVar3 + 0x100), lVar3 != 0)) {
      GUIWindow__HEGIHOAJOKK(lVar3,0,0);
      RatingController__HPAFDOMPACP(__this);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
         (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40) != 0)) {
        if ((bRam0000000001916ec4 & 1) == 0) {
          func_0x00a67900(&Main_TypeInfo);
          func_0x00a67900(&Str_RatingOpen);
          func_0x00a67900(&Str_ANALYTICS__RatingOpen);
          bRam0000000001916ec4 = 1;
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__GEMDEAMAGPG(_Str_ANALYTICS__RatingOpen,0,0);
        uVar4 = _Str_RatingOpen;
        uVar1 = System_String__IsNullOrEmpty(_Str_RatingOpen,0);
        if ((uVar1 & 1) == 0) {
          if (pcRam000000000191f018 == (code *)0x0) {
            pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
          }
          uVar1 = (*pcRam000000000191f018)();
          if ((uVar1 & 1) == 0) {
            return;
          }
          if (pcRam000000000191f028 == (code *)0x0) {
            pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
          }
                    /* WARNING: Could not recover jumptable at 0x016d8fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191f028)(uVar4);
          return;
        }
        func_0x00a67914(&System_ArgumentException_TypeInfo);
        uVar4 = func_0x00a67b44();
        uVar2 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
        System_ArgumentException___ctor(uVar4,uVar2,0);
        uVar2 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
        auVar5 = func_0x00a67a20(uVar4,uVar2);
        uVar4 = auVar5._0_8_;
        if ((bRam000000000191f039 & 1) == 0) {
          func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo);
          bRam000000000191f039 = 1;
        }
        uVar1 = System_String__IsNullOrEmpty(uVar4,0);
        if ((uVar1 & 1) != 0) {
          func_0x00a67914(&System_ArgumentException_TypeInfo);
          uVar4 = func_0x00a67b44();
          uVar2 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
          System_ArgumentException___ctor(uVar4,uVar2,0);
          uVar2 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
          func_0x00a67a20(uVar4,uVar2);
LAB_016d9194:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        if (pcRam000000000191f018 == (code *)0x0) {
          pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
        }
        uVar1 = (*pcRam000000000191f018)();
        if ((uVar1 & 1) != 0) {
          if (auVar5._8_8_ == 0) {
            if (pcRam000000000191f028 == (code *)0x0) {
              pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
            }
                    /* WARNING: Could not recover jumptable at 0x016d9148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam000000000191f028)(uVar4);
            return;
          }
          lVar3 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
          UnityEngine_Analytics_CustomEventData___ctor(lVar3,uVar4);
          if (lVar3 == 0) goto LAB_016d9194;
          UnityEngine_Analytics_CustomEventData__AddDictionary(lVar3,auVar5._8_8_);
          if (pcRam000000000191f030 == (code *)0x0) {
            pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
          }
          (*pcRam000000000191f030)(lVar3);
          UnityEngine_Analytics_CustomEventData__Dispose(lVar3);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



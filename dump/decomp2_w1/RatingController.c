// ==== public void BPPPAAMEJAF() { }   @0xaf6824

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__BPPPAAMEJAF(void *__this)

{
  uint uVar1;
  long lVar2;
  
  if (*(char *)((long)__this + 0x30) == '\0') {
    uVar1 = *(int *)((long)__this + 0x48) - 1;
    if (0 < *(int *)((long)__this + 0x48)) {
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


// ==== public void RatingOnChangeToggle(int type) { }   @0xaf6f5c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__RatingOnChangeToggle(void *__this,int type)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(char *)((long)__this + 0x30) == '\0') {
    lVar6 = *(long *)((long)__this + 0x50);
    if (lVar6 == 0) {
LAB_00bf705c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      uVar9 = 0;
      do {
        if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar5 = *(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
        if ((lVar5 == 0) || (plVar4 = *(long **)(lVar5 + 0xe0), plVar4 == (long *)0x0))
        goto LAB_00bf705c;
        uVar8 = uVar9;
        uVar2 = uVar9;
        uVar3 = uVar9;
        if (*(char *)(lVar5 + 0x120) != '\0') {
          uVar8 = 0x3f22a2a2;
          uVar2 = 0x3f038384;
          uVar3 = 0x3eb4b4b5;
        }
        (**(code **)(*plVar4 + 0x2a8))
                  (uVar3,uVar2,uVar8,0x3f800000,plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
        if ((type == uVar7) && (*(char *)(lVar5 + 0x120) != '\0')) {
          lVar5 = UnityEngine_Component__get_transform(lVar5,0);
          if (lVar5 == 0) goto LAB_00bf705c;
          UnityEngine_Transform__SetAsLastSibling(lVar5,0);
          *(int *)((long)__this + 0x48) = type;
          RatingController__OJBAJGILIJN(__this,type,*(undefined4 *)((long)__this + 0x60));
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar1);
    }
  }
  return;
}


// ==== public void KFHMEBCIBOA() { }   @0xaf73e8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__KFHMEBCIBOA(void *__this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if (*(long *)((long)__this + 0xd8) != 0) {
    *(undefined8 *)((long)__this + 0xd0) = 0;
    RatingController__MEDLEEIBALB(__this);
  }
  lVar1 = RatingController__LDGNMLFKAKM(__this);
  *(long *)((long)__this + 0xd8) = lVar1;
  if (lVar1 == 0) {
    func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
    uVar3 = func_0x00a67b44();
    uVar4 = func_0x00a67914(&Str_routine_is_null);
    System_NullReferenceException___ctor(uVar3,uVar4,0);
  }
  else {
    if (pcRam000000000191c478 == (code *)0x0) {
      pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
    }
    uVar2 = (*pcRam000000000191c478)(__this);
    if ((uVar2 & 1) != 0) {
      if (pcRam000000000191c488 == (code *)0x0) {
        pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
      }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c488)(__this,lVar1);
      return;
    }
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar3 = func_0x00a67b44();
    uVar4 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
    System_ArgumentException___ctor(uVar3,uVar4,0);
  }
  uVar4 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
  auVar5 = func_0x00a67a20(uVar3,uVar4);
  if (pcRam000000000191c488 == (code *)0x0) {
    pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
  }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c488)(auVar5._0_8_,auVar5._8_8_);
  return;
}


// ==== private void ALNNLEHPENN() { }   @0xaf75f8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__ALNNLEHPENN(void *__this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = *(long *)((long)__this + 0x50);
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
        if (lVar2 == 0) goto LAB_00bf7658;
        UnityEngine_UI_Toggle__set_isOn(lVar2,0,0);
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
    return;
  }
LAB_00bf7658:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



// ==== public void EGAHKHBBFEM(bool NOBGKIBHCEN) { }   @0xb4bcf4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ConsoleTipsBottom__EGAHKHBBFEM(void *__this,bool NOBGKIBHCEN)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float in_s1;
  undefined1 auVar5 [16];
  
  if ((NOBGKIBHCEN) && (*(char *)((long)__this + 0x71) != '\0')) {
    if (*(long *)((long)__this + 0x60) == 0) goto LAB_00c4bd94;
    UnityEngine_RectTransform__get_anchoredPosition(*(long *)((long)__this + 0x60),0);
    if (-60.0 <= in_s1) {
      return;
    }
  }
  if (*(long *)((long)__this + 0x68) != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(__this,*(long *)((long)__this + 0x68),0);
  }
  uVar1 = ConsoleTipsBottom__GEMPILJFGGI(__this,NOBGKIBHCEN);
  *(undefined8 *)((long)__this + 0x68) = uVar1;
  lVar2 = UnityEngine_Component__get_gameObject(__this,0);
  if (lVar2 != 0) {
    UnityEngine_GameObject__SetActive(lVar2,1,0);
    lVar2 = *(long *)((long)__this + 0x68);
    if (lVar2 == 0) {
      func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
      uVar4 = func_0x00a67b44();
      uVar1 = func_0x00a67914(&Str_routine_is_null);
      System_NullReferenceException___ctor(uVar4,uVar1,0);
    }
    else {
      if (pcRam000000000191c478 == (code *)0x0) {
        pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
      }
      uVar3 = (*pcRam000000000191c478)(__this);
      if ((uVar3 & 1) != 0) {
        if (pcRam000000000191c488 == (code *)0x0) {
          pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
        }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191c488)(__this,lVar2);
        return;
      }
      func_0x00a67914(&System_ArgumentException_TypeInfo);
      uVar4 = func_0x00a67b44();
      uVar1 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
      System_ArgumentException___ctor(uVar4,uVar1,0);
    }
    uVar1 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
    auVar5 = func_0x00a67a20(uVar4,uVar1);
    if (pcRam000000000191c488 == (code *)0x0) {
      pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
    }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c488)(auVar5._0_8_,auVar5._8_8_);
    return;
  }
LAB_00c4bd94:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



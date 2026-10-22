// ==== public void JGDCBENNDFO() { }   @0xb49d3c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Assets_SimpleAndroidNotifications_Helpers_Popup__JGDCBENNDFO(void *__this)

{
  long lVar1;
  
  if (*(long *)((long)__this + 0x20) != 0) {
    UnityEngine_CanvasGroup__set_blocksRaycasts(*(long *)((long)__this + 0x20),0,0);
    lVar1 = *(long *)((long)__this + 0x20);
    if (lVar1 != 0) {
      if (pcRam000000000191ebe0 == (code *)0x0) {
        pcRam000000000191ebe0 = (code *)func_0x00a678c4(&UNK_0059ee37);
      }
                    /* WARNING: Could not recover jumptable at 0x016a8ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191ebe0)(0,lVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



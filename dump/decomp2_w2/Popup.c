// ==== public void GLNFGKNJBHH(string HOGMBEOJKPM, object[] OHOAJCLLPDH) { }   @0xb49c78

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Assets_SimpleAndroidNotifications_Helpers_Popup__GLNFGKNJBHH
               (void *__this,void *HOGMBEOJKPM,void *OHOAJCLLPDH)

{
  long *plVar1;
  long lVar2;
  
  if (OHOAJCLLPDH != (void *)0x0) {
    if (*(long *)((long)OHOAJCLLPDH + 0x18) != 0) {
      HOGMBEOJKPM = (void *)System_String__Format(HOGMBEOJKPM,OHOAJCLLPDH,0);
    }
    plVar1 = *(long **)((long)__this + 0x28);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x5a8))(plVar1,HOGMBEOJKPM,*(undefined8 *)(*plVar1 + 0x5b0));
      if (*(long *)((long)__this + 0x20) != 0) {
        UnityEngine_CanvasGroup__set_blocksRaycasts(*(long *)((long)__this + 0x20),1,0);
        lVar2 = *(long *)((long)__this + 0x20);
        if (lVar2 != 0) {
          if (pcRam000000000191ebe0 == (code *)0x0) {
            pcRam000000000191ebe0 = (code *)func_0x00a678c4(&UNK_0059ee37);
          }
                    /* WARNING: Could not recover jumptable at 0x016a8ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191ebe0)(0x3f800000,lVar2);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



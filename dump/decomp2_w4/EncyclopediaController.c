// ==== private void HPAFDOMPACP() { }   @0xb1a03c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void EncyclopediaController__HPAFDOMPACP(void *__this)

{
  long lStack_18;
  
  if ((bRam0000000001916fdc & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    bRam0000000001916fdc = 1;
  }
  if (*(long *)((long)__this + 0x28) != 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
              (*(long *)((long)__this + 0x28),&lStack_18,
               _Method_UnityEngine_Component_GetComponent_RectTransform___);
    if (lStack_18 != 0) {
      UnityEngine_RectTransform__set_anchoredPosition(0,0,lStack_18,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



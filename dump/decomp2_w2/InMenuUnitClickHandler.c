// ==== private Vector2 KDGCLHPEMGO(Vector2 CIGEHLOPCJP) { }   @0xad3c88

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * InMenuUnitClickHandler__KDGCLHPEMGO(void *__this,float CIGEHLOPCJP_x,float CIGEHLOPCJP_y)

{
  void *pvVar1;
  
  if (*(long *)((long)__this + 0x28) != 0) {
    CIGEHLOPCJP_x =
         (float)UnityEngine_RectTransform__get_sizeDelta(*(long *)((long)__this + 0x28),0);
    if (*(long *)((long)__this + 0x28) != 0) {
      CIGEHLOPCJP_x = (float)UnityEngine_RectTransform__get_pivot(*(long *)((long)__this + 0x28),0);
      if (*(long *)((long)__this + 0x28) != 0) {
        pvVar1 = (void *)UnityEngine_RectTransform__get_pivot(*(long *)((long)__this + 0x28),0);
        return pvVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50(CIGEHLOPCJP_x);
}



// ==== public bool MLHKDEGPJGI(int LGAALFBLPLP) { }   @0xad5b10

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool ShopItem__MLHKDEGPJGI(void *__this,int LGAALFBLPLP)

{
  if ((*(char *)((long)__this + 0x70) == '\0') && (*(int *)((long)__this + 0x28) == 4)) {
    if (*(long *)((long)__this + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*(int *)(*(long *)((long)__this + 0x30) + 0x18) + -1 == LGAALFBLPLP) {
      return true;
    }
  }
  return *(char *)((long)__this + 0x70) != '\0';
}


// ==== public int EKBFKEBGGOP() { }   @0xad5b5c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ShopItem__EKBFKEBGGOP(void *__this)

{
  if (*(long *)((long)__this + 0x30) != 0) {
    return *(int *)(*(long *)((long)__this + 0x30) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



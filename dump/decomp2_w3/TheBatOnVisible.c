// ==== private void OnBecameVisible() { }   @0xb43008

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TheBatOnVisible__OnBecameVisible(void *__this)

{
  long lVar1;
  
  lVar1 = *(long *)((long)__this + 0x20);
  if (lVar1 != 0) {
    if (pcRam000000000191c328 == (code *)0x0) {
      pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
    }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c328)(lVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



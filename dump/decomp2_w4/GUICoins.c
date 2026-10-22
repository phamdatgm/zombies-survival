// ==== public void LEOCFHHFANH() { }   @0xaf5760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUICoins__LEOCFHHFANH(void *__this)

{
  long *plVar1;
  
  if ((bRam0000000001916edb & 1) == 0) {
    func_0x00a67900(&string_TypeInfo);
    bRam0000000001916edb = 1;
  }
  plVar1 = *(long **)((long)__this + 0x28);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00bf57bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x5a8))
              (plVar1,**(undefined8 **)(_string_TypeInfo + 0xb8),*(undefined8 *)(*plVar1 + 0x5b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



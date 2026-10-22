// ==== public void NNIADFNMHGB() { }   @0xb323f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TramplinBarrel__NNIADFNMHGB(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam00000000019170cd & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Tramplin_error_1_);
    bRam00000000019170cd = 1;
  }
  uVar2 = *(undefined8 *)((long)__this + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__EEKNCFLMGDP(_Str_Tramplin_error_1_,0);
    uVar2 = 0;
  }
  else {
    __this = *(void **)((long)__this + 0x20);
    if (__this == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar2 = 1;
  }
  if (pcRam000000000191c328 == (code *)0x0) {
    pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
  }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c328)(__this,uVar2);
  return;
}



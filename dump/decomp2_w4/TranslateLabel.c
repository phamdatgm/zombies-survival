// ==== public void JJJNIPAKLJF() { }   @0xb07550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TranslateLabel__JJJNIPAKLJF(void *__this)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001916f51 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    bRam0000000001916f51 = 1;
  }
  uVar4 = *(undefined8 *)((long)__this + 0x28);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) != (void *)0x0) {
      pvVar2 = Translate__JJJNIPAKLJF
                         ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8),
                          *(void **)((long)__this + 0x20));
      plVar3 = *(long **)((long)__this + 0x28);
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c07610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x5a8))(plVar3,pvVar2,*(undefined8 *)(*plVar3 + 0x5b0));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  return;
}



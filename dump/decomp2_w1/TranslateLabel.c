// ==== private void OnEnable() { }   @0xb0762c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TranslateLabel__OnEnable(void *__this)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001916f52 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    bRam0000000001916f52 = 1;
  }
  uVar3 = *(undefined8 *)((long)__this + 0x28);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = **(undefined8 **)(_Translate_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if ((bRam0000000001916f51 & 1) == 0) {
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        func_0x00a67900(&Translate_TypeInfo);
        bRam0000000001916f51 = 1;
      }
      uVar3 = *(undefined8 *)((long)__this + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
          uVar3 = Translate__JJJNIPAKLJF
                            (**(long **)(_Translate_TypeInfo + 0xb8),
                             *(undefined8 *)((long)__this + 0x20),0);
          plVar2 = *(long **)((long)__this + 0x28);
          if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c07610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar2 + 0x5a8))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x5b0));
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      return;
    }
  }
  return;
}



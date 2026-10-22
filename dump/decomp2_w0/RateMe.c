// ==== public void .ctor() { }   @0xaec0b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RateMe___ctor(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam0000000001916e9b & 1) == 0) {
    func_0x00a67900(&UnityEngine_UI_Image___TypeInfo);
    bRam0000000001916e9b = 1;
  }
  uVar1 = func_0x00a679a0(_UnityEngine_UI_Image___TypeInfo,6);
  *(undefined8 *)((long)__this + 0x28) = uVar1;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== private void LACBJDFDOLF(bool FJDCALHGHCI) { }   @0xaec2c4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RateMe__LACBJDFDOLF(void *__this,bool FJDCALHGHCI)

{
  long *plVar1;
  undefined4 uVar2;
  
  if (*(long *)((long)__this + 0x38) != 0) {
    UnityEngine_UI_Selectable__set_interactable(*(long *)((long)__this + 0x38),FJDCALHGHCI,0);
    plVar1 = *(long **)((long)__this + 0x40);
    if (plVar1 != (long *)0x0) {
      uVar2 = 0x3f800000;
      if (!FJDCALHGHCI) {
        uVar2 = 0x3f000000;
      }
                    /* WARNING: Could not recover jumptable at 0x00bec320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x2a8))
                (0x3f800000,0x3f800000,0x3f800000,uVar2,plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



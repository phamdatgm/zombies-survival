// ==== private bool MoveNext() { }   @0xb18a7c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GUIGarage_POKBOGKBJMK__MoveNext(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam0000000001916fd5 & 1) == 0) {
    func_0x00a67900(&UnityEngine_WaitForSeconds_TypeInfo);
    bRam0000000001916fd5 = 1;
  }
  if (*(int *)((long)__this + 0x10) == 1) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (*(long *)((long)__this + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    GUIGarage__BECFMMKIPHJ();
  }
  else if (*(int *)((long)__this + 0x10) == 0) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    uVar1 = func_0x00a67b44(_UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(0x3f000000,uVar1,0);
    *(undefined8 *)((long)__this + 0x18) = uVar1;
    *(undefined4 *)((long)__this + 0x10) = 1;
    return true;
  }
  return false;
}



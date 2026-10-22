// ==== public void FHBDLLGMOFN() { }   @0xb1a0ac

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void EncyclopediaController__FHBDLLGMOFN(void *__this)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  int iStack_14;
  
  iStack_14 = Encyclopedia__DFJMLAIHNDC(0,0);
  if (iStack_14 < 1) {
    lVar2 = *(long *)((long)__this + 0x68);
    if (lVar2 != 0) {
      uVar1 = 0;
LAB_00c1a118:
      UnityEngine_GameObject__SetActive(lVar2,uVar1,0);
      return;
    }
  }
  else {
    plVar3 = *(long **)((long)__this + 0x70);
    uVar1 = System_Int32__ToString(&iStack_14,0);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x5a8))(plVar3,uVar1,*(undefined8 *)(*plVar3 + 0x5b0));
      lVar2 = *(long *)((long)__this + 0x68);
      if (lVar2 != 0) {
        uVar1 = 1;
        goto LAB_00c1a118;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



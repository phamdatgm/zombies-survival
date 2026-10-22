// ==== public void APFABOGFKED() { }   @0xb430c8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIProgressBarWWW__APFABOGFKED(void *__this)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  
  if (*(char *)((long)__this + 0x35) == '\0') {
    plVar1 = *(long **)((long)__this + 0x28);
    if (plVar1 == (long *)0x0) goto LAB_00c43134;
    uVar2 = (**(code **)(*plVar1 + 0x298))(plVar1,*(undefined8 *)(*plVar1 + 0x2a0));
    *(undefined4 *)((long)__this + 0x3c) = uVar2;
    *(undefined4 *)((long)__this + 0x40) = in_s1;
    *(undefined4 *)((long)__this + 0x44) = in_s2;
    *(undefined4 *)((long)__this + 0x48) = in_s3;
    *(undefined1 *)((long)__this + 0x35) = 1;
  }
  plVar1 = *(long **)((long)__this + 0x28);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x298))(plVar1,*(undefined8 *)(*plVar1 + 0x2a0));
    *(undefined4 *)((long)__this + 0x4c) = uVar2;
    *(undefined4 *)((long)__this + 0x50) = in_s1;
    *(undefined4 *)((long)__this + 0x54) = in_s2;
    *(undefined4 *)((long)__this + 0x58) = in_s3;
    *(undefined1 *)((long)__this + 0x34) = 1;
    *(undefined4 *)((long)__this + 0x38) = 0;
    return;
  }
LAB_00c43134:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



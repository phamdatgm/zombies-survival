// ==== public void .ctor() { }   @0xb02928

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BFECKMLPMOK___ctor(void *__this)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000001916f37 & 1) == 0) {
    func_0x00a67900(&int___TypeInfo);
    func_0x00a67900(&Str__0__new_notifications);
    bRam0000000001916f37 = 1;
  }
  uVar1 = _Str__0__new_notifications;
  *(undefined1 *)((long)__this + 0x59) = 1;
  *(undefined1 *)((long)__this + 0x68) = 1;
  *(undefined8 *)((long)__this + 0x20) = uVar1;
  lVar2 = func_0x00a679a0(_int___TypeInfo,2);
  if (lVar2 != 0) {
    if ((*(int *)(lVar2 + 0x18) != 0) &&
       (*(undefined4 *)(lVar2 + 0x20) = 1000, *(int *)(lVar2 + 0x18) != 1)) {
      *(undefined4 *)(lVar2 + 0x24) = 1000;
      *(long *)((long)__this + 0x70) = lVar2;
      *(undefined1 *)((long)__this + 0x78) = 1;
      *(undefined8 *)((long)__this + 0x7c) = 0xbb800000bb8;
      *(undefined8 *)((long)__this + 0x8c) = 0x3f80000000000000;
      *(undefined8 *)((long)__this + 0x84) = 0x3f80000000000000;
      *(undefined8 *)((long)__this + 0xb0) = 0x300000001;
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



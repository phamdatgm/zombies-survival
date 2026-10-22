// ==== private static void .cctor() { }   @0xb58a14

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ELDCILMPNCD___cctor(void)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam00000000019171cf & 1) == 0) {
    func_0x00a67900(&System_Convert_TypeInfo);
    func_0x00a67900(&ELDCILMPNCD_TypeInfo);
    func_0x00a67900(&int___TypeInfo);
    func_0x00a67900(&Str_);
    bRam00000000019171cf = 1;
  }
  if (*(int *)(_System_Convert_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = System_Convert__FromBase64String(_Str_,0);
  **(undefined8 **)(_ELDCILMPNCD_TypeInfo + 0xb8) = uVar1;
  uVar1 = func_0x00a679a0(_int___TypeInfo,0);
  lVar2 = *(long *)(_ELDCILMPNCD_TypeInfo + 0xb8);
  *(undefined8 *)(lVar2 + 8) = uVar1;
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined1 *)(lVar2 + 0x14) = 0;
  return;
}



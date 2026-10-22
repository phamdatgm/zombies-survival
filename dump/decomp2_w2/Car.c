// ==== public void .ctor() { }   @0xb44b88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car___ctor(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam0000000001917140 & 1) == 0) {
    func_0x00a67900(&int___TypeInfo);
    bRam0000000001917140 = 1;
  }
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)((long)__this + 0x28) = uVar1;
  *(undefined4 *)((long)__this + 0x30) = 0x3f800000;
  uVar1 = func_0x00a679a0(_int___TypeInfo,6);
  *(undefined8 *)((long)__this + 0x38) = uVar1;
  return;
}



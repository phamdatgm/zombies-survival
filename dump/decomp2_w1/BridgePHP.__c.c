// ==== private static void .cctor() { }   @0xadf468

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP___c___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000001916e25 & 1) == 0) {
    func_0x00a67900(&BridgePHP___c_TypeInfo);
    bRam0000000001916e25 = 1;
  }
  uVar1 = func_0x00a67b44(_BridgePHP___c_TypeInfo);
  System_Object___ctor(uVar1,0);
  **(undefined8 **)(_BridgePHP___c_TypeInfo + 0xb8) = uVar1;
  return;
}



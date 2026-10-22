// ==== private static void .cctor() { }   @0xb58980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void KKDJDGPGFPN___c___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam00000000019171ce & 1) == 0) {
    func_0x00a67900(&KKDJDGPGFPN___c_TypeInfo);
    bRam00000000019171ce = 1;
  }
  uVar1 = func_0x00a67b44(_KKDJDGPGFPN___c_TypeInfo);
  System_Object___ctor(uVar1,0);
  **(undefined8 **)(_KKDJDGPGFPN___c_TypeInfo + 0xb8) = uVar1;
  return;
}



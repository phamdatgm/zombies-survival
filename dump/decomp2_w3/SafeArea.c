// ==== private static void .cctor() { }   @0xb01898

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Crystal_SafeArea___cctor(void)

{
  if ((bRam0000000001916f30 & 1) == 0) {
    func_0x00a67900(&Crystal_SafeArea_TypeInfo);
    bRam0000000001916f30 = 1;
  }
  **(undefined4 **)(_Crystal_SafeArea_TypeInfo + 0xb8) = 1;
  return;
}



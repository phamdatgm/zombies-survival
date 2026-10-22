// ==== private static void .cctor() { }   @0xb49b4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ButtonClickSound___c___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam000000000191715a & 1) == 0) {
    func_0x00a67900(&ButtonClickSound___c_TypeInfo);
    bRam000000000191715a = 1;
  }
  uVar1 = func_0x00a67b44(_ButtonClickSound___c_TypeInfo);
  System_Object___ctor(uVar1,0);
  **(undefined8 **)(_ButtonClickSound___c_TypeInfo + 0xb8) = uVar1;
  return;
}



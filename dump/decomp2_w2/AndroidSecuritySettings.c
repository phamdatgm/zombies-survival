// ==== public string get_error() { }   @0xad4014

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * FSG_AndroidSecuritySettings__get_error(void *__this)

{
  if ((bRam0000000001916dce & 1) == 0) {
    func_0x00a67900(&string_TypeInfo);
    bRam0000000001916dce = 1;
  }
  return (void *)**(undefined8 **)(_string_TypeInfo + 0xb8);
}



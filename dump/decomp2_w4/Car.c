// ==== public static bool NBMGBADFACE() { }   @0xb44ccc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Car__NBMGBADFACE(void)

{
  if ((bRam0000000001917142 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001917142 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return *(char *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x12) == '\0';
}



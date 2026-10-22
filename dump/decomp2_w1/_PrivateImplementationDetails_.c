// ==== internal static uint ComputeStringHash(string s) { }   @0xb19424

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint _PrivateImplementationDetails___ComputeStringHash(void *s)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (s == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x811c9dc5;
    if (0 < *(int *)((long)s + 0x10)) {
      iVar3 = 0;
      do {
        uVar1 = System_String__get_Chars(s,iVar3,0);
        iVar3 = iVar3 + 1;
        uVar2 = (uVar2 ^ uVar1 & 0xffff) * 0x1000193;
      } while (iVar3 < *(int *)((long)s + 0x10));
    }
  }
  return uVar2;
}



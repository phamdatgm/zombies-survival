// ==== public void .ctor() { }   @0xb018e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIMenu___ctor(void *__this)

{
  if ((bRam000000000191c4b8 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c4b8 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  System_Object___ctor(__this,0);
  if (pcRam000000000191c4c0 == (code *)0x0) {
    pcRam000000000191c4c0 = (code *)func_0x00a678c4(&UNK_005b8838);
  }
                    /* WARNING: Could not recover jumptable at 0x0148ca18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c4c0)(__this);
  return;
}



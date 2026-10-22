// ==== public void .ctor() { }   @0xb49e14

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MapClouds___ctor(void *__this)

{
  *(undefined4 *)((long)__this + 0x28) = 0x640;
  *(undefined4 *)((long)__this + 0x30) = 0x3f800000;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



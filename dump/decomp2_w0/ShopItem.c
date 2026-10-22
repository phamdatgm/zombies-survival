// ==== public void .ctor() { }   @0xad5d00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ShopItem___ctor(void *__this)

{
  *(undefined4 *)((long)__this + 0x88) = 0x42880000;
  *(undefined8 *)((long)__this + 0x80) = 0x41700000430c0000;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



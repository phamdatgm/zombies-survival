// ==== public void .ctor() { }   @0xad91c4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void objDestructorHints___ctor(void *__this)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)((long)__this + 0x24) = 0x3dcccccd;
  *(long *)((long)__this + 0x38) = auVar1._8_8_;
  *(long *)((long)__this + 0x30) = auVar1._0_8_;
  *(long *)((long)__this + 0x48) = auVar1._8_8_;
  *(long *)((long)__this + 0x40) = auVar1._0_8_;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



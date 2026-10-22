// ==== public void .ctor() { }   @0xaf905c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ZombieParts___ctor(void *__this)

{
  *(undefined4 *)((long)__this + 0x20) = 0x40800000;
  *(undefined8 *)((long)__this + 0x38) = 0xfa0000001e;
  *(undefined8 *)((long)__this + 0x40) = 0x3f66666600000000;
  *(undefined4 *)((long)__this + 0x48) = 0xbf333333;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



// ==== public void .ctor() { }   @0xad6d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Zombie___ctor(void *__this)

{
  *(undefined8 *)((long)__this + 0x24) = 0x100000001;
  *(undefined8 *)((long)__this + 0x74) = 0x53e99999a;
  *(undefined8 *)((long)__this + 0x7c) = 0x451c40003d4ccccd;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



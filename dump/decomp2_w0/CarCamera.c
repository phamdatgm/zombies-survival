// ==== public void .ctor() { }   @0xb01d58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCamera___ctor(void *__this)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)((long)__this + 0x44) = 0x41200000;
  if (cRam0000000001916789 == '\0') {
    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
    cRam0000000001916789 = '\x01';
  }
  lVar1 = _UnityEngine_Vector3_TypeInfo;
  uVar2 = **(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
  uVar3 = *(undefined4 *)(*(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 1);
  *(undefined8 *)((long)__this + 0x5c) = 0x3f99999a41700000;
  *(undefined8 *)((long)__this + 0x54) = 0x4130000040c00000;
  *(undefined8 *)((long)__this + 100) = 0x3fa0000040800000;
  *(undefined8 *)((long)__this + 0x78) = 0xffffffc5ffffffbf;
  *(undefined8 *)((long)__this + 0x70) = 0xa00000003;
  *(undefined8 *)((long)__this + 0x48) = uVar2;
  *(undefined4 *)((long)__this + 0x50) = uVar3;
  uVar2 = **(undefined8 **)(lVar1 + 0xb8);
  uVar3 = *(undefined4 *)(*(undefined8 **)(lVar1 + 0xb8) + 1);
  *(undefined4 *)((long)__this + 0x90) = 0x40000000;
  *(undefined8 *)((long)__this + 0x80) = uVar2;
  *(undefined4 *)((long)__this + 0x88) = uVar3;
  *(undefined8 *)((long)__this + 0xb4) = 0x3f80000000000008;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public void IBOCKKJLDDJ(Transform BPEGLMBNNME) { }   @0xb0264c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCamera__IBOCKKJLDDJ(void *__this,void *BPEGLMBNNME)

{
  *(void **)((long)__this + 0xc0) = BPEGLMBNNME;
  *(undefined1 *)((long)__this + 0xbc) = 1;
  return;
}



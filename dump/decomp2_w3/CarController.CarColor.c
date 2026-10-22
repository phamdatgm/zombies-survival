// ==== public void .ctor() { }   @0xb29290

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController_CarColor___ctor(void *__this)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  auVar1 = NEON_fmov(0x3f800000,4);
  uVar2 = NEON_fmov(0x3f800000,4);
  *(long *)((long)__this + 0x18) = auVar1._8_8_;
  *(long *)((long)__this + 0x10) = auVar1._0_8_;
  *(long *)((long)__this + 0x28) = auVar1._8_8_;
  *(long *)((long)__this + 0x20) = auVar1._0_8_;
  *(undefined8 *)((long)__this + 0x34) = uVar2;
  return;
}



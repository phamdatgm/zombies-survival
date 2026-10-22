// ==== public void Initialize() { }   @0xb02b7c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_NativeDebug__Initialize(void *__this)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  if (pcRam0000000001916f38 == (code *)0x0) {
    uStack_18 = 0;
    puStack_40 = &UNK_0059cb7a;
    uStack_38 = 8;
    puStack_30 = &UNK_005aa6fa;
    uStack_28 = 0x16;
    uStack_20 = 0x200000000;
    uStack_14 = 0;
    pcRam0000000001916f38 = (code *)func_0x00a67fa8(&puStack_40);
  }
  (*pcRam0000000001916f38)();
  return;
}



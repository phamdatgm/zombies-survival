// ==== private static extern void DestroyNativeTexture(int textureId) { }   @0xaebc1c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_AndroidRenderingPlugin__DestroyNativeTexture(int textureId)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001916e90 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005a8c35;
    uStack_38 = 0x14;
    uStack_28 = 4;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001916e90 = (code *)func_0x00a67fa8(&puStack_50);
  }
  (*pcRam0000000001916e90)(textureId);
  return;
}


// ==== public void DestroyTexture(int id) { }   @0xaebccc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_AndroidRenderingPlugin__DestroyTexture(void *__this,int id)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001916e90 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005a8c35;
    uStack_38 = 0x14;
    uStack_28 = 4;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001916e90 = (code *)func_0x00a67fa8(&puStack_50);
  }
  (*pcRam0000000001916e90)(id);
  return;
}



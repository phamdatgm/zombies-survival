// ==== private static extern void SetNativeTexture(IntPtr handler, int width, int height, int id, int scale) { }   @0xaebb70

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_AndroidRenderingPlugin__SetNativeTexture
               (long handler,int width,int height,int id,int scale)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  if (pcRam0000000001916e88 == (code *)0x0) {
    puStack_70 = &UNK_0059cb7a;
    uStack_68 = 8;
    puStack_60 = &UNK_005a7125;
    uStack_58 = 0x10;
    uStack_48 = 0x18;
    uStack_50 = 0x200000000;
    uStack_44 = 0;
    pcRam0000000001916e88 = (code *)func_0x00a67fa8(&puStack_70,width,height,id,scale);
  }
  (*pcRam0000000001916e88)(handler,width,height,id,scale);
  return;
}


// ==== public void SendTexture(IntPtr handler, int width, int height, int id, int scale) { }   @0xaebcb4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_AndroidRenderingPlugin__SendTexture
               (void *__this,long handler,int width,int height,int id,int scale)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  if (pcRam0000000001916e88 == (code *)0x0) {
    puStack_70 = &UNK_0059cb7a;
    uStack_68 = 8;
    puStack_60 = &UNK_005a7125;
    uStack_58 = 0x10;
    uStack_48 = 0x18;
    uStack_50 = 0x200000000;
    uStack_44 = 0;
    pcRam0000000001916e88 = (code *)func_0x00a67fa8(&puStack_70,width,height,id,scale);
  }
  (*pcRam0000000001916e88)(handler,width,height,id,scale);
  return;
}



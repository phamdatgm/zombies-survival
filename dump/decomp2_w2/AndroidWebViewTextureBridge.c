// ==== private static extern IntPtr create(int cbo, int width, int height, int loadTimeout, int scale) { }   @0xad59f0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long Adverty_PlatformSpecific_AndroidWebViewTextureBridge__create
               (int cbo,int width,int height,int loadTimeout,int scale)

{
  long lVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  if (pcRam0000000001916df8 == (code *)0x0) {
    puStack_70 = &UNK_0059cb7a;
    uStack_68 = 8;
    puStack_60 = &UNK_005b83b1;
    uStack_58 = 6;
    uStack_48 = 0x14;
    uStack_50 = 0x200000000;
    uStack_44 = 0;
    pcRam0000000001916df8 = (code *)func_0x00a67fa8(&puStack_70,width,height,loadTimeout,scale);
  }
  lVar1 = (*pcRam0000000001916df8)(cbo,width,height,loadTimeout,scale);
  return lVar1;
}


// ==== public void .ctor() { }   @0xad5b08

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_AndroidWebViewTextureBridge___ctor(void *__this)

{
  return;
}



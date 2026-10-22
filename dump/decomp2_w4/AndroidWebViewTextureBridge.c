// ==== private static extern IntPtr getCustomRenderEventFunc() { }   @0xad5884

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long Adverty_PlatformSpecific_AndroidWebViewTextureBridge__getCustomRenderEventFunc(void)

{
  long lVar1;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  if (pcRam0000000001916de0 == (code *)0x0) {
    uStack_18 = 0;
    puStack_40 = &UNK_0059cb7a;
    uStack_38 = 8;
    puStack_30 = &UNK_005a52b5;
    uStack_28 = 0x18;
    uStack_20 = 0x200000000;
    uStack_14 = 0;
    pcRam0000000001916de0 = (code *)func_0x00a67fa8(&puStack_40);
  }
  lVar1 = (*pcRam0000000001916de0)();
  return lVar1;
}


// ==== public override IntPtr Create(IntPtr cbo, int width, int height, int loadTimeout, int scale) { }   @0xad5aa0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long Adverty_PlatformSpecific_AndroidWebViewTextureBridge__Create
               (void *__this,long cbo,int width,int height,int loadTimeout,int scale)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_28;
  
  lStack_28 = cbo;
  uVar1 = System_IntPtr__ToInt32(&lStack_28,0,width,height,loadTimeout,scale);
  lVar2 = Adverty_PlatformSpecific_AndroidWebViewTextureBridge__create
                    (uVar1,width,height,loadTimeout,scale);
  return lVar2;
}



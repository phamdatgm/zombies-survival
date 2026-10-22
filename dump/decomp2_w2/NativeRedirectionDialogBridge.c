// ==== public void ShowRedirectionDialog(string url, IntPtr callback) { }   @0xb5838c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_NativeRedirectionDialogBridge__ShowRedirectionDialog
               (void *__this,void *url,long callback)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam00000000019171c0 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005a03e8;
    uStack_38 = 0x1c;
    uStack_28 = 0x10;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam00000000019171c0 = (code *)func_0x00a67fa8(&puStack_50);
  }
  uVar1 = func_0x00a67f88(url);
  (*pcRam00000000019171c0)(uVar1,callback);
  func_0x00a67fa0(uVar1);
  return;
}



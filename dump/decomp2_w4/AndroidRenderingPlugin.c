// ==== private static extern void IssuePluginEvent(int eventId) { }   @0xaeba78

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_AndroidRenderingPlugin__IssuePluginEvent(int eventId)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001916e78 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005ae2dc;
    uStack_38 = 0x10;
    uStack_28 = 4;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001916e78 = (code *)func_0x00a67fa8(&puStack_50);
  }
  (*pcRam0000000001916e78)(eventId);
  return;
}


// ==== public void NativeIssuePluginEvent(int eventId) { }   @0xaebca4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_AndroidRenderingPlugin__NativeIssuePluginEvent
               (void *__this,int eventId)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001916e78 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005ae2dc;
    uStack_38 = 0x10;
    uStack_28 = 4;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001916e78 = (code *)func_0x00a67fa8(&puStack_50);
  }
  (*pcRam0000000001916e78)(eventId);
  return;
}



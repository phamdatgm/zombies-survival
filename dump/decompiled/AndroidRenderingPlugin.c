/* ---- class definition (Il2CppDumper) ----

// Namespace: Adverty.PlatformSpecific
public class AndroidRenderingPlugin : IAndroidRenderingPlugin, INativeClass // TypeDefIndex: 5089
{
	// Methods

	private static extern void SetGlIssuePluginEventMethod(IntPtr glIssuePluginMethod, int renderMode) { }

	private static extern void IssuePluginEvent(int eventId) { }

	private static extern void CustomRenderEvent(int eventId) { }

	private static extern void SetNativeTexture(IntPtr handler, int width, int height, int id, int scale) { }

	private static extern void DestroyNativeTexture(int textureId) { }

	public void NativeSetGlIssuePluginEventMethod(IntPtr glIssuePluginMethod, int renderMode) { }

	public void NativeIssuePluginEvent(int eventId) { }

	public void Render(int eventId) { }

	public void SendTexture(IntPtr handler, int width, int height, int id, int scale) { }

	public void DestroyTexture(int id) { }

	public void .ctor() { }
}
*/

// ==== private static extern void SetGlIssuePluginEventMethod(IntPtr glIssuePluginMethod, int renderMode) { }   @0xaeb9f4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_AndroidRenderingPlugin__SetGlIssuePluginEventMethod
               (long glIssuePluginMethod,int renderMode)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001916e70 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005b1a49;
    uStack_38 = 0x1b;
    uStack_28 = 0xc;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001916e70 = (code *)func_0x00a67fa8(&puStack_50);
  }
  (*pcRam0000000001916e70)(glIssuePluginMethod,renderMode);
  return;
}


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


// ==== private static extern void CustomRenderEvent(int eventId) { }   @0xaebaf4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_AndroidRenderingPlugin__CustomRenderEvent(int eventId)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001916e80 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_0059e653;
    uStack_38 = 0x11;
    uStack_28 = 4;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001916e80 = (code *)func_0x00a67fa8(&puStack_50);
  }
  (*pcRam0000000001916e80)(eventId);
  return;
}


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


// ==== public void NativeSetGlIssuePluginEventMethod(IntPtr glIssuePluginMethod, int renderMode) { }   @0xaebc98

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_AndroidRenderingPlugin__NativeSetGlIssuePluginEventMethod
               (void *__this,long glIssuePluginMethod,int renderMode)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001916e70 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005b1a49;
    uStack_38 = 0x1b;
    uStack_28 = 0xc;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001916e70 = (code *)func_0x00a67fa8(&puStack_50);
  }
  (*pcRam0000000001916e70)(glIssuePluginMethod,renderMode);
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


// ==== public void Render(int eventId) { }   @0xaebcac

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_AndroidRenderingPlugin__Render(void *__this,int eventId)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001916e80 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_0059e653;
    uStack_38 = 0x11;
    uStack_28 = 4;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001916e80 = (code *)func_0x00a67fa8(&puStack_50);
  }
  (*pcRam0000000001916e80)(eventId);
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


// ==== public void .ctor() { }   @0xaebcd4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_AndroidRenderingPlugin___ctor(void *__this)

{
  return;
}



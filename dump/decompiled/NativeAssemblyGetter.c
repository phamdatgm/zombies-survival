/* ---- class definition (Il2CppDumper) ----

// Namespace: Adverty.PlatformSpecific
internal class NativeAssemblyGetter // TypeDefIndex: 5229
{
	// Methods

	[RuntimeInitializeOnLoadMethod(1)]
	private static void OnBeforeSceneLoad() { }

	public void .ctor() { }
}
*/

// ==== private static void OnBeforeSceneLoad() { }   @0xb497a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_NativeAssemblyGetter__OnBeforeSceneLoad(void)

{
  long *plVar1;
  undefined8 uVar2;
  
  if ((bRam0000000001917157 & 1) == 0) {
    func_0x00a67900(&Adverty_PlatformSpecific_NativeAssemblyGetter_var);
    func_0x00a67900(&System_Type_TypeInfo);
    bRam0000000001917157 = 1;
  }
  uVar2 = _Adverty_PlatformSpecific_NativeAssemblyGetter_var;
  if (*(int *)(_System_Type_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar1 = (long *)System_Type__GetTypeFromHandle(uVar2,0);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x2e8))(plVar1,*(undefined8 *)(*plVar1 + 0x2f0));
    if ((bRam0000000001916833 & 1) == 0) {
      func_0x00a67900(&Adverty_AdvertySettings_TypeInfo,0);
      bRam0000000001916833 = 1;
    }
    *(undefined8 *)(Adverty_AdvertySettings.<statics> + 0x10) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb49830

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_NativeAssemblyGetter___ctor(void *__this)

{
  return;
}



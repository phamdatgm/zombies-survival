/* ---- class definition (Il2CppDumper) ----
(not found)
*/

// ==== private static void .cctor() { }   @0xadf468

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP___c___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000001916e25 & 1) == 0) {
    func_0x00a67900(&BridgePHP___c_TypeInfo);
    bRam0000000001916e25 = 1;
  }
  uVar1 = func_0x00a67b44(_BridgePHP___c_TypeInfo);
  System_Object___ctor(uVar1,0);
  **(undefined8 **)(_BridgePHP___c_TypeInfo + 0xb8) = uVar1;
  return;
}


// ==== public void .ctor() { }   @0xadf4c4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP___c___ctor(void *__this)

{
  return;
}


// ==== internal void <UnlockAchievement>b__52_0(bool success) { }   @0xadf4cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP___c___UnlockAchievement_b__52_0(void *__this,bool success)

{
  undefined8 uVar1;
  undefined1 auStack_14 [4];
  
  auStack_14[0] = success;
  if ((bRam0000000001916e26 & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_UnlockAchievement__);
    bRam0000000001916e26 = 1;
  }
  if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = System_Boolean__ToString(auStack_14,0);
  uVar1 = System_String__Concat(_Str_UnlockAchievement__,uVar1,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0,0);
  return;
}



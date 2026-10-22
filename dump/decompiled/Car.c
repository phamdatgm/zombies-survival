/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[Serializable]
public class Car // TypeDefIndex: 5220
{
	// Fields
	public string name; // 0x10
	public string prefab_name; // 0x18
	public int price; // 0x20
	public int price_premium; // 0x24
	public float upgrades_coefficient; // 0x28
	public float upgrades_coefficient_premium; // 0x2C
	public float upgrades_coefficient_premium_pc; // 0x30
	public int upgrade_price_last_armor; // 0x34
	public int[] health_array; // 0x38
	public int health_5lvl_premium; // 0x40
	public MDGGLDMKCFB event_race_mode; // 0x44
	public int free_color_id; // 0x48

	// Properties
	public static Car Current { get; }

	// Methods

	public static Car get_Current() { }

	public void .ctor() { }

	public static string DBJBMIGLBNF(int NBOMPJEGJMP) { }

	public static bool NBMGBADFACE() { }
}
*/

// ==== public static Car get_Current() { }   @0xb44b04

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Car__get_Current(void)

{
  uint uVar1;
  long lVar2;
  
  if ((bRam000000000191713f & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam000000000191713f = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = Main.KECGFPHIEHF;
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
    uVar1 = *(uint *)((long)*(long **)(_Main_TypeInfo + 0xb8) + 0x2c);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      return *(void **)(lVar2 + (long)(int)uVar1 * 8 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb44b88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Car___ctor(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam0000000001917140 & 1) == 0) {
    func_0x00a67900(&int___TypeInfo);
    bRam0000000001917140 = 1;
  }
  uVar1 = NEON_fmov(0x3f800000,4);
  this.upgrades_coefficient = uVar1;
  this.upgrades_coefficient_premium_pc = 0x3f800000;
  uVar1 = func_0x00a679a0(_int___TypeInfo,6);
  this.health_array = uVar1;
  return;
}


// ==== public static string DBJBMIGLBNF(int NBOMPJEGJMP) { }   @0xb44bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Car__DBJBMIGLBNF(int NBOMPJEGJMP)

{
  void *pvVar1;
  long lVar2;
  
  if ((bRam0000000001917141 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str____);
    bRam0000000001917141 = 1;
  }
  pvVar1 = _Str____;
  if (NBOMPJEGJMP < 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Main.KECGFPHIEHF == 0) ||
       (lVar2 = Main.KECGFPHIEHF.GDPCMIGAPOM, lVar2 == 0))
    goto LAB_00c44cc4;
    if (*(int *)(lVar2 + 0x18) <= NBOMPJEGJMP) {
      return pvVar1;
    }
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((Main.KECGFPHIEHF != 0) &&
     (lVar2 = Main.KECGFPHIEHF.GDPCMIGAPOM, lVar2 != 0)) {
    if (*(uint *)(lVar2 + 0x18) <= (uint)NBOMPJEGJMP) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar2 = *(long *)(lVar2 + (long)NBOMPJEGJMP * 8 + 0x20);
    if (lVar2 != 0) {
      return *(void **)(lVar2 + 0x10);
    }
  }
LAB_00c44cc4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public static bool NBMGBADFACE() { }   @0xb44ccc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Car__NBMGBADFACE(void)

{
  if ((bRam0000000001917142 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001917142 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return Main.OJDDINBFCNH == '\0';
}



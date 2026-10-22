/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[Serializable]
public class CarController.CarColor // TypeDefIndex: 5177
{
	// Fields
	public Color col_preview; // 0x10
	public Color col; // 0x20
	public int hue; // 0x30
	public float saturation; // 0x34
	public float brightest; // 0x38

	// Methods

	public void .ctor() { }
}
*/

// ==== public void .ctor() { }   @0xb29290

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController_CarColor___ctor(void *__this)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  auVar1 = NEON_fmov(0x3f800000,4);
  uVar2 = NEON_fmov(0x3f800000,4);
  *(long *)((long)__this + 0x18) = auVar1._8_8_;
  this.col_preview = auVar1._0_8_;
  *(long *)((long)__this + 0x28) = auVar1._8_8_;
  this.col = auVar1._0_8_;
  this.saturation = uVar2;
  return;
}



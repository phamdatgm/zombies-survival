/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[Serializable]
public sealed class SerializableSprings.SpringFloat : SpringFloat // TypeDefIndex: 5253
{
	// Methods

	public void .ctor() { }
}
*/

// ==== public void .ctor() { }   @0xb4d68c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void SerializableSprings_SpringFloat___ctor(void *__this)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001916eeb & 1) == 0) {
    func_0x00a67900(&Method_Spring_float___ctor__,0);
    bRam0000000001916eeb = 1;
  }
  lVar2 = _Method_Spring_float___ctor__;
  uVar5 = *(undefined8 *)
           (**(long **)(*(long *)(_Method_Spring_float___ctor__ + 0x20) + 0xc0) + 0x80);
  func_0x00a515d8(uVar5,4);
  puVar3 = (undefined4 *)func_0x00a67920(__this,uVar5);
  *puVar3 = 0x42c80000;
  lVar1 = *(long *)(**(long **)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x80) + 0x20;
  func_0x00a515d8(lVar1,4);
  puVar3 = (undefined4 *)func_0x00a67920(__this,lVar1);
  *puVar3 = 0x41c80000;
  lVar1 = *(long *)(**(long **)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x80) + 0x40;
  func_0x00a515d8(lVar1,1);
  puVar4 = (undefined1 *)func_0x00a67920(__this,lVar1);
  *puVar4 = 1;
  return;
}



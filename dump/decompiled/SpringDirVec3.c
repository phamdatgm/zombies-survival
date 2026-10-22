/* ---- class definition (Il2CppDumper) ----

// Namespace: ReadySprings
public class SpringDirVec3 : SpringVec3 // TypeDefIndex: 5212
{
	// Methods

	public void .ctor() { }

	protected override Vector3 KMLFNMGOELP(Vector3 KFCCMCBGKEA, Vector3 MOEHNCAFHCO) { }
}
*/

// ==== public void .ctor() { }   @0xb42f54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ReadySprings_SpringDirVec3___ctor(void *__this)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001917135 & 1) == 0) {
    func_0x00a67900(&Method_Spring_Vector3___ctor__);
    bRam0000000001917135 = 1;
  }
  lVar2 = _Method_Spring_Vector3___ctor__;
  uVar5 = *(undefined8 *)
           (**(long **)(*(long *)(_Method_Spring_Vector3___ctor__ + 0x20) + 0xc0) + 0x80);
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


// ==== protected override Vector3 KMLFNMGOELP(Vector3 KFCCMCBGKEA, Vector3 MOEHNCAFHCO) { }   @0xb42fa0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * ReadySprings_SpringDirVec3__KMLFNMGOELP
                 (void *__this,float KFCCMCBGKEA_x,float KFCCMCBGKEA_y,float KFCCMCBGKEA_z,
                 float MOEHNCAFHCO_x,float MOEHNCAFHCO_y,float MOEHNCAFHCO_z)

{
  return __this;
}



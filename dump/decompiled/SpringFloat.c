/* ---- class definition (Il2CppDumper) ----

// Namespace: ReadySprings
public class SpringFloat : Spring<float> // TypeDefIndex: 5116
{
	// Methods

	protected override float JLDDFKPHBAB(float INHGHFGNDIO, float CEECPPMLPAE) { }

	public void .ctor() { }

	protected override float DLEHLHGOOKB(float INHGHFGNDIO, float CEECPPMLPAE) { }

	protected override float CFAJGEJFJDD(float INHGHFGNDIO, float CEECPPMLPAE) { }
}
*/

// ==== protected override float JLDDFKPHBAB(float INHGHFGNDIO, float CEECPPMLPAE) { }   @0xaf84f4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float ReadySprings_SpringFloat__JLDDFKPHBAB(void *__this,float INHGHFGNDIO,float CEECPPMLPAE)

{
  return INHGHFGNDIO - CEECPPMLPAE;
}


// ==== public void .ctor() { }   @0xaf84fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ReadySprings_SpringFloat___ctor(void *__this)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001916eeb & 1) == 0) {
    func_0x00a67900(&Method_Spring_float___ctor__);
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


// ==== protected override float DLEHLHGOOKB(float INHGHFGNDIO, float CEECPPMLPAE) { }   @0xaf8544

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float ReadySprings_SpringFloat__DLEHLHGOOKB(void *__this,float INHGHFGNDIO,float CEECPPMLPAE)

{
  return INHGHFGNDIO + CEECPPMLPAE;
}


// ==== protected override float CFAJGEJFJDD(float INHGHFGNDIO, float CEECPPMLPAE) { }   @0xaf854c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float ReadySprings_SpringFloat__CFAJGEJFJDD(void *__this,float INHGHFGNDIO,float CEECPPMLPAE)

{
  return INHGHFGNDIO * CEECPPMLPAE;
}



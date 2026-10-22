/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class destroyMe : MonoBehaviour // TypeDefIndex: 5228
{
	// Fields
	private float GMFAMFJABMJ; // 0x20
	public float DPGCLIMCLPI; // 0x24

	// Methods

	private void Update() { }

	public void .ctor() { }
}
*/

// ==== private void Update() { }   @0xb496f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void destroyMe__Update(void *__this)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  if ((bRam0000000001917156 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917156 = 1;
  }
  fVar3 = this.GMFAMFJABMJ;
  fVar2 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar3 = fVar3 + fVar2;
  this.GMFAMFJABMJ = fVar3;
  if (fVar3 < this.DPGCLIMCLPI) {
    return;
  }
  uVar1 = UnityEngine_Component__get_gameObject(__this,0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  if ((bRam000000000191c518 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c518 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (pcRam000000000191c510 == (code *)0x0) {
    pcRam000000000191c510 = (code *)func_0x00a678c4(&UNK_005ae57b);
  }
                    /* WARNING: Could not recover jumptable at 0x0148f1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c510)(0,uVar1);
  return;
}


// ==== public void .ctor() { }   @0xb49794

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void destroyMe___ctor(void *__this)

{
  this.DPGCLIMCLPI = 0x41200000;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



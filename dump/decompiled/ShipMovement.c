/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class ShipMovement : MonoBehaviour // TypeDefIndex: 5195
{
	// Fields
	private Transform LIEHBGFFHFF; // 0x20
	public float NBCLGLJCBAP; // 0x28

	// Methods

	private void Start() { }

	private void Update() { }

	public void .ctor() { }
}
*/

// ==== private void Start() { }   @0xb325dc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ShipMovement__Start(void *__this)

{
  undefined8 uVar1;
  
  uVar1 = UnityEngine_Component__get_transform(__this,0);
  this.LIEHBGFFHFF = uVar1;
  return;
}


// ==== private void Update() { }   @0xb325f8

/* WARNING: Removing unreachable block (ram,0x014947c8) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ShipMovement__Update(void *__this)

{
  long lVar1;
  
  lVar1 = this.LIEHBGFFHFF;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  UnityEngine_Transform__get_forward(lVar1,0);
  UnityEngine_Time__get_deltaTime(0);
  UnityEngine_Transform__get_position(lVar1,0,0);
  if (pcRam000000000191c880 == (code *)0x0) {
    pcRam000000000191c880 = (code *)func_0x00a678c4(&UNK_005a8531);
  }
  (*pcRam000000000191c880)(lVar1,&stack0xffffffffffffffd0);
  return;
}


// ==== public void .ctor() { }   @0xb32660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ShipMovement___ctor(void *__this)

{
  this.NBCLGLJCBAP = 0x41200000;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



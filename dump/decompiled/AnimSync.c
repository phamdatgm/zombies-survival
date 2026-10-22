/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class AnimSync : MonoBehaviour // TypeDefIndex: 5284
{
	// Fields
	public Animator NHCBFENCDBJ; // 0x20
	private float BDFJBJIHBKA; // 0x28
	private float FJAIJOLCJMA; // 0x2C

	// Methods

	private void FixedUpdate() { }

	private void Update() { }

	public void .ctor() { }
}
*/

// ==== private void FixedUpdate() { }   @0xb58adc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnimSync__FixedUpdate(void *__this)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)UnityEngine_Time__get_time(0);
  if (this.NHCBFENCDBJ != 0) {
    fVar1 = fVar1 - this.BDFJBJIHBKA;
    UnityEngine_Animator__Update(fVar1,this.NHCBFENCDBJ,0);
    this.FJAIJOLCJMA = fVar1 + this.FJAIJOLCJMA;
    uVar2 = UnityEngine_Time__get_time(0);
    this.BDFJBJIHBKA = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Update() { }   @0xb58b34

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnimSync__Update(void *__this)

{
  undefined4 uVar1;
  
  if (this.NHCBFENCDBJ != 0) {
    UnityEngine_Animator__Update(-this.FJAIJOLCJMA,this.NHCBFENCDBJ,0);
    this.FJAIJOLCJMA = 0;
    uVar1 = UnityEngine_Time__get_time(0);
    this.BDFJBJIHBKA = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb58b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnimSync___ctor(void *__this)

{
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



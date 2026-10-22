/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class TheBat : MonoBehaviour // TypeDefIndex: 5081
{
	// Fields
	public Transform LIEHBGFFHFF; // 0x20
	public Animator NFABKCAPLMG; // 0x28
	private float GMFAMFJABMJ; // 0x30

	// Methods

	private void Update() { }

	public void .ctor() { }
}
*/

// ==== private void Update() { }   @0xae4550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TheBat__Update(void *__this)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  
  if (this.GMFAMFJABMJ <= 7.0) {
    lVar1 = this.LIEHBGFFHFF;
    if (cRam0000000001916e68 == '\0') {
      func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
      cRam0000000001916e68 = '\x01';
    }
    uVar4 = *(undefined8 *)(UnityEngine_Vector3.<statics> + 0x18);
    fVar5 = *(float *)(UnityEngine_Vector3.<statics> + 0x20);
    fVar2 = (float)UnityEngine_Time__get_deltaTime(0);
    if (lVar1 != 0) {
      uVar3 = NEON_fmov(0x40400000,4);
      UnityEngine_Transform__Translate
                ((float)uVar4 * (float)uVar3 * fVar2,
                 (float)((ulong)uVar4 >> 0x20) * (float)((ulong)uVar3 >> 0x20) * fVar2,
                 fVar5 * 3.0 * fVar2,lVar1,0);
      fVar5 = this.GMFAMFJABMJ;
      fVar2 = (float)UnityEngine_Time__get_deltaTime(0);
      this.GMFAMFJABMJ = fVar5 + fVar2;
      return;
    }
  }
  else {
    lVar1 = UnityEngine_Component__get_gameObject(__this,0);
    if (lVar1 != 0) {
      UnityEngine_GameObject__SetActive(lVar1,0,0);
      if (pcRam000000000191c328 == (code *)0x0) {
        pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
      }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c328)(__this,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xae4640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TheBat___ctor(void *__this)

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



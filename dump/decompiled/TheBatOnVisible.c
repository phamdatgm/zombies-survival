/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class TheBatOnVisible : MonoBehaviour // TypeDefIndex: 5216
{
	// Fields
	public Animator NFABKCAPLMG; // 0x20

	// Methods

	private void OnBecameVisible() { }

	public void .ctor() { }
}
*/

// ==== private void OnBecameVisible() { }   @0xb43008

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TheBatOnVisible__OnBecameVisible(void *__this)

{
  long lVar1;
  
  lVar1 = this.NFABKCAPLMG;
  if (lVar1 != 0) {
    if (pcRam000000000191c328 == (code *)0x0) {
      pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
    }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c328)(lVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb43028

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TheBatOnVisible___ctor(void *__this)

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



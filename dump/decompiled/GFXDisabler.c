/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class GFXDisabler : MonoBehaviour // TypeDefIndex: 5225
{
	// Fields
	public GameObject[] EBBMJFBACIN; // 0x20

	// Methods

	public void .ctor() { }

	public void DHEEBAEOLGF(bool MDIDBDKGGJI) { }
}
*/

// ==== public void .ctor() { }   @0xb462c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GFXDisabler___ctor(void *__this)

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


// ==== public void DHEEBAEOLGF(bool MDIDBDKGGJI) { }   @0xb462c8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GFXDisabler__DHEEBAEOLGF(void *__this,bool MDIDBDKGGJI)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if ((bRam000000000191714e & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191714e = 1;
  }
  lVar3 = this.EBBMJFBACIN;
  if (lVar3 != 0) {
    if (0 < (int)lVar3.Length) {
      uVar4 = 0;
      uVar1 = lVar3.Length & 0xffffffff;
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar2 = *(long *)(lVar3 + 0x20 + uVar4 * 8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = UnityEngine_Object__op_Inequality(lVar2,0,0);
        if ((uVar1 & 1) != 0) {
          if (lVar2 == 0) goto LAB_00c46398;
          UnityEngine_GameObject__SetActive(lVar2,MDIDBDKGGJI,0);
        }
        uVar1 = (ulong)lVar3.Length;
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)lVar3.Length);
    }
    return;
  }
LAB_00c46398:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



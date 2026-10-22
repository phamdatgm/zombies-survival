/* ---- class definition (Il2CppDumper) ----

// Namespace: Crystal
public class SafeArea : MonoBehaviour // TypeDefIndex: 5132
{
	// Fields
	public static SafeArea.FCEBFJCINOI OIFALEJNHIC; // 0x0
	private Rect[] IJIBNLOCNJF; // 0x20
	private Rect[] ALCEELDOKOA; // 0x28
	private Rect[] KOPGOECAOLK; // 0x30
	private Rect[] KGCFOALOKPO; // 0x38
	private RectTransform LPHFPMLAIJK; // 0x40
	private Rect NEKFCGJEMNC; // 0x48
	private Vector2Int FGNMNFOKEIM; // 0x58
	private ScreenOrientation HJKNEHDAEJI; // 0x60
	[SerializeField]
	private bool DOHDGFGOGPN; // 0x64
	[SerializeField]
	private bool MKIMLHAFIOL; // 0x65

	// Methods

	public void .ctor() { }

	private static void .cctor() { }
}
*/

// ==== public void .ctor() { }   @0xb01738

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Crystal_SafeArea___ctor(void *__this)

{
  long lVar1;
  
  if ((bRam0000000001916f2f & 1) == 0) {
    func_0x00a67900(&UnityEngine_Rect___TypeInfo);
    bRam0000000001916f2f = 1;
  }
  lVar1 = func_0x00a679a0(_UnityEngine_Rect___TypeInfo,2);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x28) = 0x3f6768ac3f800000;
      *(undefined8 *)(lVar1 + 0x20) = 0x3d2b81e400000000;
      if (*(int *)(lVar1 + 0x18) != 1) {
        *(undefined8 *)(lVar1 + 0x38) = 0x3f71a9fc3f644194;
        *(undefined8 *)(lVar1 + 0x30) = 0x3d6560423d5df364;
        this.IJIBNLOCNJF = lVar1;
        lVar1 = func_0x00a679a0(_UnityEngine_Rect___TypeInfo,2);
        if (lVar1 == 0) goto LAB_00c01894;
        if (*(int *)(lVar1 + 0x18) != 0) {
          *(undefined8 *)(lVar1 + 0x28) = 0x3f69b6db3f800000;
          *(undefined8 *)(lVar1 + 0x20) = 0x3d1b6db700000000;
          if (*(int *)(lVar1 + 0x18) != 1) {
            *(undefined8 *)(lVar1 + 0x38) = 0x3f7303b63f66db6e;
            *(undefined8 *)(lVar1 + 0x30) = 0x3d4fc4a33d492492;
            this.ALCEELDOKOA = lVar1;
            lVar1 = func_0x00a679a0(_UnityEngine_Rect___TypeInfo,2);
            if (lVar1 == 0) goto LAB_00c01894;
            if (*(int *)(lVar1 + 0x18) != 0) {
              *(undefined8 *)(lVar1 + 0x28) = 0x3f7135f83f800000;
              *(undefined8 *)(lVar1 + 0x20) = 0;
              if (*(int *)(lVar1 + 0x18) != 1) {
                *(undefined8 *)(lVar1 + 0x38) = 0x3f8000003f7135f8;
                *(undefined8 *)(lVar1 + 0x30) = 0;
                this.KOPGOECAOLK = lVar1;
                lVar1 = func_0x00a679a0(_UnityEngine_Rect___TypeInfo,2);
                if (lVar1 == 0) goto LAB_00c01894;
                if (*(int *)(lVar1 + 0x18) != 0) {
                  *(undefined8 *)(lVar1 + 0x28) = 0x3f7135f83f800000;
                  *(undefined8 *)(lVar1 + 0x20) = 0;
                  if (*(int *)(lVar1 + 0x18) != 1) {
                    *(undefined8 *)(lVar1 + 0x38) = 0x3f8000003f7135f8;
                    *(undefined8 *)(lVar1 + 0x30) = 0x3d6ca085;
                    this.KGCFOALOKPO = lVar1;
                    *(undefined8 *)((long)__this + 0x50) = 0;
                    this.FGNMNFOKEIM = 0;
                    this.NEKFCGJEMNC = 0;
                    this.HJKNEHDAEJI = 5;
                    *(undefined1 *)((long)__this + 100) = 1;
                    if ((bRam000000000191c370 & 1) == 0) {
                      func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
                      bRam000000000191c370 = 1;
                    }
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
LAB_00c01894:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private static void .cctor() { }   @0xb01898

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Crystal_SafeArea___cctor(void)

{
  if ((bRam0000000001916f30 & 1) == 0) {
    func_0x00a67900(&Crystal_SafeArea_TypeInfo);
    bRam0000000001916f30 = 1;
  }
  **(undefined4 **)(_Crystal_SafeArea_TypeInfo + 0xb8) = 1;
  return;
}



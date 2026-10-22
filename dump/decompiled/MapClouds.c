/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class MapClouds : MonoBehaviour // TypeDefIndex: 5237
{
	// Fields
	public RectTransform[] PDAOOLHEMCB; // 0x20
	private int LJLKALOLHMN; // 0x28
	private float BDHPFNMFDKB; // 0x2C
	private float CENHPPKIMHH; // 0x30

	// Methods

	private void Start() { }

	public void .ctor() { }

	private void LateUpdate() { }

	private void GNKKKBEHJOH(RectTransform HAKKOAADCOE) { }
}
*/

// ==== private void Start() { }   @0xb49de4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MapClouds__Start(void *__this)

{
  int iVar1;
  
  iVar1 = UnityEngine_Random__Range(0,100,0);
  if (iVar1 < 0x32) {
    this.CENHPPKIMHH = 0xbf800000;
  }
  return;
}


// ==== public void .ctor() { }   @0xb49e14

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MapClouds___ctor(void *__this)

{
  this.LJLKALOLHMN = 0x640;
  this.CENHPPKIMHH = 0x3f800000;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== private void LateUpdate() { }   @0xb49e2c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MapClouds__LateUpdate(void *__this)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack_18;
  float fStack_14;
  
  fVar3 = (float)UnityEngine_Time__get_deltaTime(0);
  lVar2 = this.PDAOOLHEMCB;
  this.BDHPFNMFDKB = fVar3 * 20.0;
  if (lVar2 == 0) {
LAB_00c49e88:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    MapClouds__GNKKKBEHJOH(__this,*(undefined8 *)(lVar2 + 0x20));
    lVar2 = this.PDAOOLHEMCB;
    if (lVar2 == 0) goto LAB_00c49e88;
    if (1 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = *(long *)(lVar2 + 0x28);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      fVar3 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
      fVar4 = this.BDHPFNMFDKB;
      fVar5 = this.CENHPPKIMHH;
      UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
      UnityEngine_RectTransform__set_anchoredPosition(fVar3 - fVar4 * fVar5,lVar2,0);
      fVar4 = this.CENHPPKIMHH;
      fVar3 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
      iVar1 = this.LJLKALOLHMN;
      if (fVar4 == 1.0) {
        fVar4 = (float)-iVar1;
        if (fVar4 <= fVar3) {
          return;
        }
        UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
      }
      else {
        fVar4 = (float)iVar1;
        if (fVar3 <= fVar4) {
          return;
        }
        UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
        iVar1 = -iVar1;
      }
      _fStack_18 = CONCAT44(fVar4,(float)iVar1);
      if (pcRam000000000191c800 == (code *)0x0) {
        pcRam000000000191c800 = (code *)func_0x00a678c4(&UNK_005a0a0c,0);
      }
      (*pcRam000000000191c800)(lVar2,&fStack_18);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


// ==== private void GNKKKBEHJOH(RectTransform HAKKOAADCOE) { }   @0xb49e90

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MapClouds__GNKKKBEHJOH(void *__this,void *HAKKOAADCOE)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (HAKKOAADCOE == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  fVar1 = (float)UnityEngine_RectTransform__get_anchoredPosition(HAKKOAADCOE,0);
  fVar2 = this.BDHPFNMFDKB;
  fVar3 = this.CENHPPKIMHH;
  UnityEngine_RectTransform__get_anchoredPosition(HAKKOAADCOE,0);
  UnityEngine_RectTransform__set_anchoredPosition(fVar1 - fVar2 * fVar3,HAKKOAADCOE,0);
  fVar2 = this.CENHPPKIMHH;
  fVar1 = (float)UnityEngine_RectTransform__get_anchoredPosition(HAKKOAADCOE,0);
  if (fVar2 == 1.0) {
    if ((float)-this.LJLKALOLHMN <= fVar1) {
      return;
    }
    UnityEngine_RectTransform__get_anchoredPosition(HAKKOAADCOE,0);
  }
  else {
    if (fVar1 <= (float)this.LJLKALOLHMN) {
      return;
    }
    UnityEngine_RectTransform__get_anchoredPosition(HAKKOAADCOE,0);
  }
  if (pcRam000000000191c800 == (code *)0x0) {
    pcRam000000000191c800 = (code *)func_0x00a678c4(&UNK_005a0a0c,0);
  }
  (*pcRam000000000191c800)(HAKKOAADCOE,&stack0xffffffffffffffe8);
  return;
}



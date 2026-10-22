/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class GUIProgressBarWWW : MonoBehaviour // TypeDefIndex: 5217
{
	// Fields
	public GameObject MIPKEALMBHI; // 0x20
	public Image ECNDCPJBEHP; // 0x28
	public float ACBDHBLLEEK; // 0x30
	public bool DLCMLDLHLLC; // 0x34
	private bool DIFNGFMLPMP; // 0x35
	private float CNAGLGLEJMC; // 0x38
	private Color IEDLIFLBMCE; // 0x3C
	private Color FJDBNMAHHLA; // 0x4C

	// Methods

	private void Update() { }

	public void APFABOGFKED() { }

	public void .ctor() { }

	private void OnEnable() { }
}
*/

// ==== private void Update() { }   @0xb43030

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIProgressBarWWW__Update(void *__this)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if (this.DLCMLDLHLLC == '\0') {
    return;
  }
  fVar4 = *(float *)((long)__this + 0x58);
  fVar3 = (float)UnityEngine_Time__get_deltaTime(0);
  plVar1 = this.ECNDCPJBEHP;
  *(float *)((long)__this + 0x58) = fVar4 - fVar3;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x2a8))
              (this.FJDBNMAHHLA,*(undefined4 *)((long)__this + 0x50),
               *(undefined4 *)((long)__this + 0x54),plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
    fVar4 = this.CNAGLGLEJMC;
    fVar3 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar4 = fVar4 + fVar3;
    this.CNAGLGLEJMC = fVar4;
    if (fVar4 <= this.ACBDHBLLEEK) {
      return;
    }
    lVar2 = this.MIPKEALMBHI;
    this.DLCMLDLHLLC = 0;
    if (lVar2 != 0) {
      if (pcRam000000000191c3f8 == (code *)0x0) {
        pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
      }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c3f8)(lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void APFABOGFKED() { }   @0xb430c8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIProgressBarWWW__APFABOGFKED(void *__this)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  
  if (this.DIFNGFMLPMP == '\0') {
    plVar1 = this.ECNDCPJBEHP;
    if (plVar1 == (long *)0x0) goto LAB_00c43134;
    uVar2 = (**(code **)(*plVar1 + 0x298))(plVar1,*(undefined8 *)(*plVar1 + 0x2a0));
    this.IEDLIFLBMCE = uVar2;
    *(undefined4 *)((long)__this + 0x40) = in_s1;
    *(undefined4 *)((long)__this + 0x44) = in_s2;
    *(undefined4 *)((long)__this + 0x48) = in_s3;
    this.DIFNGFMLPMP = 1;
  }
  plVar1 = this.ECNDCPJBEHP;
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x298))(plVar1,*(undefined8 *)(*plVar1 + 0x2a0));
    this.FJDBNMAHHLA = uVar2;
    *(undefined4 *)((long)__this + 0x50) = in_s1;
    *(undefined4 *)((long)__this + 0x54) = in_s2;
    *(undefined4 *)((long)__this + 0x58) = in_s3;
    this.DLCMLDLHLLC = 1;
    this.CNAGLGLEJMC = 0;
    return;
  }
LAB_00c43134:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb43138

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIProgressBarWWW___ctor(void *__this)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  this.ACBDHBLLEEK = 0x3f800000;
  *(long *)((long)__this + 0x54) = auVar1._8_8_;
  this.FJDBNMAHHLA = auVar1._0_8_;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== private void OnEnable() { }   @0xb43150

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIProgressBarWWW__OnEnable(void *__this)

{
  long *plVar1;
  
  if (this.DIFNGFMLPMP == '\0') {
    return;
  }
  plVar1 = this.ECNDCPJBEHP;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c43180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2a8))
              (this.IEDLIFLBMCE,*(undefined4 *)((long)__this + 0x40),
               *(undefined4 *)((long)__this + 0x44),*(undefined4 *)((long)__this + 0x48),plVar1,
               *(undefined8 *)(*plVar1 + 0x2b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class CatGarage : MonoBehaviour // TypeDefIndex: 5086
{
	// Fields
	public Animator NFABKCAPLMG; // 0x20
	private float GCHEMKAKNOI; // 0x28
	public Vector3[] FPIDNOJBMHO; // 0x30
	public int[] GDOHMECHLAM; // 0x38

	// Methods

	public void KHDFDGMBOIJ() { }

	public void .ctor() { }

	private void BJOLPLBELIA() { }

	public void DPMNCABIAJA() { }
}
*/

// ==== public void KHDFDGMBOIJ() { }   @0xae75e4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CatGarage__KHDFDGMBOIJ(void *__this)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  fVar5 = (float)UnityEngine_Time__get_time(0);
  iVar1 = UnityEngine_Random__Range(5,0x14,0);
  this.GCHEMKAKNOI = fVar5 + (float)iVar1;
  if ((this.FPIDNOJBMHO != 0) && (this.GDOHMECHLAM != 0)) {
    iVar1 = this.FPIDNOJBMHO.Length;
    if (iVar1 != this.GDOHMECHLAM.Length) {
      return;
    }
    uVar2 = UnityEngine_Random__Range(0,iVar1,0);
    lVar3 = UnityEngine_Component__get_transform(__this,0);
    lVar4 = this.FPIDNOJBMHO;
    if (lVar4 != 0) {
      if (*(uint *)(lVar4 + 0x18) <= uVar2) {
LAB_00be7748:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      if (lVar3 != 0) {
        lVar4 = lVar4 + (long)(int)uVar2 * 0xc;
        UnityEngine_Transform__set_position
                  (*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),lVar3,0);
        lVar3 = UnityEngine_Component__get_transform(__this,0);
        lVar4 = UnityEngine_Component__get_transform(__this,0);
        if (lVar4 != 0) {
          fVar5 = (float)UnityEngine_Transform__get_rotation(lVar4,0);
          if (this.GDOHMECHLAM != 0) {
            if (this.GDOHMECHLAM.Length <= uVar2) goto LAB_00be7748;
            lVar4 = UnityEngine_Component__get_transform(__this,0);
            if (lVar4 != 0) {
              UnityEngine_Transform__get_rotation(lVar4,0);
              UnityEngine_Quaternion__Internal_FromEulerRad(fVar5 * 0.017453292,0);
              if (lVar3 != 0) {
                if (pcRam000000000191c8a0 == (code *)0x0) {
                  pcRam000000000191c8a0 = (code *)func_0x00a678c4(&UNK_005b89bb,0);
                }
                (*pcRam000000000191c8a0)(lVar3,&stack0xffffffffffffffd0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void BJOLPLBELIA() { }   @0xae774c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CatGarage__BJOLPLBELIA(void *__this)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (float)UnityEngine_Time__get_time(0);
  iVar1 = UnityEngine_Random__Range(5,0x14,0);
  this.GCHEMKAKNOI = fVar2 + (float)iVar1;
  return;
}


// ==== public void .ctor() { }   @0xae778c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CatGarage___ctor(void *__this)

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


// ==== public void DPMNCABIAJA() { }   @0xae7794

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CatGarage__DPMNCABIAJA(void *__this)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
  if ((bRam0000000001916e4e & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_wash);
    bRam0000000001916e4e = 1;
  }
  fVar6 = (float)UnityEngine_Time__get_time(0);
  if (this.GCHEMKAKNOI < fVar6) {
    fVar6 = (float)UnityEngine_Time__get_time(0);
    iVar1 = UnityEngine_Random__Range(5,0x14,0);
    this.GCHEMKAKNOI = fVar6 + (float)iVar1;
    uVar5 = this.NFABKCAPLMG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    uVar5 = _Str_wash;
    if ((uVar3 & 1) != 0) {
      lVar4 = this.NFABKCAPLMG;
      if (lVar4 != 0) {
        if (pcRam000000000191b598 == (code *)0x0) {
          pcRam000000000191b598 = (code *)func_0x00a678c4(&UNK_005a13ae,_Str_wash,0xffffffff);
        }
        uVar2 = (*pcRam000000000191b598)(uVar5);
        if (pcRam000000000191b588 == (code *)0x0) {
          pcRam000000000191b588 = (code *)func_0x00a678c4(&UNK_005a80d8);
        }
                    /* WARNING: Could not recover jumptable at 0x01462c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191b588)(0xff800000,lVar4,uVar2,0xffffffff);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
}



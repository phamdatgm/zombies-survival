/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class ZombieParts : MonoBehaviour // TypeDefIndex: 5121
{
	// Fields
	public float ACBDHBLLEEK; // 0x20
	private float CNAGLGLEJMC; // 0x24
	public Rigidbody[] BHLBGKKHGGA; // 0x28
	public Rigidbody[] GAOMHGNIBFP; // 0x30
	public int JPMPPOGJDGI; // 0x38
	public int BGGMAHPKBFK; // 0x3C
	public Vector3 GHJKKMELFOL; // 0x40
	public bool AJFNIDFDGNA; // 0x4C
	public bool DBCICKPGKNH; // 0x4D

	// Methods

	private void OnEnable() { }

	private void Update() { }

	public void .ctor() { }
}
*/

// ==== private void OnEnable() { }   @0xaf8b78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ZombieParts__OnEnable(void *__this)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_s1;
  float fVar13;
  float in_s2;
  ulong uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fStack_d8;
  float fStack_d4;
  
  if ((bRam0000000001916eed & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    bRam0000000001916eed = 1;
  }
  if (this.BHLBGKKHGGA != 0) {
    if (this.BHLBGKKHGGA.Length == 0) {
      return;
    }
    lVar3 = UnityEngine_Component__get_transform(__this,0);
    if (lVar3 != 0) {
      fVar10 = (float)UnityEngine_Transform__get_position(lVar3,0);
      if (cRam0000000001916e68 == '\0') {
        func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
        cRam0000000001916e68 = '\x01';
      }
      fVar11 = *(float *)((long)__this + 0x44);
      uVar16 = *(undefined8 *)(UnityEngine_Vector3.<statics> + 0x18);
      fVar17 = *(float *)(UnityEngine_Vector3.<statics> + 0x20);
      lVar3 = UnityEngine_Component__get_transform(__this,0);
      if (lVar3 != 0) {
        fVar13 = (float)uVar16 * fVar11;
        uVar14 = CONCAT44(in_s1,fVar10);
        fVar10 = fVar10 + fVar13;
        fVar12 = (float)UnityEngine_Transform__get_forward(lVar3,0);
        fVar15 = *(float *)((long)__this + 0x48);
        lVar3 = this.BHLBGKKHGGA;
        this.GHJKKMELFOL =
             CONCAT44(in_s1 + (float)((ulong)uVar16 >> 0x20) * fVar11 + fVar13 * fVar15,
                      fVar10 + fVar12 * fVar15);
        *(float *)((long)__this + 0x48) = in_s2 + fVar17 * fVar11 + (float)uVar14 * fVar15;
        if (lVar3 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (0 < (int)uVar1) {
            uVar8 = 0;
            do {
              if (uVar1 <= uVar8) goto LAB_00bf8fb4;
              lVar6 = *(long *)(lVar3 + (long)(int)uVar8 * 8 + 0x20);
              iVar2 = UnityEngine_Random__Range
                                (this.JPMPPOGJDGI,
                                 this.BGGMAHPKBFK,0);
              if (lVar6 == 0) goto LAB_00bf8fb0;
              uVar14 = (ulong)*(uint *)((long)__this + 0x44);
              UnityEngine_Rigidbody__AddExplosionForce
                        ((float)iVar2,this.GHJKKMELFOL,uVar14,
                         *(undefined4 *)((long)__this + 0x48),0x42c80000,lVar6,0);
              uVar1 = *(uint *)(lVar3 + 0x18);
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < (int)uVar1);
          }
          if (this.AJFNIDFDGNA != '\0') {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (CarController.MKEGHDPIIFK == '\0') {
              lVar3 = this.GAOMHGNIBFP;
              if (lVar3 == 0) goto LAB_00bf8fb0;
              if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
                lVar6 = 0;
                fStack_d8 = 1.1;
                uVar9 = 0;
                uVar4 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
                fStack_d4 = 0.8;
                do {
                  fVar10 = (float)uVar14;
                  if (uVar4 <= uVar9) {
LAB_00bf8fb4:
                    /* WARNING: Subroutine does not return */
                    il2cpp_throw_967b58();
                  }
                  lVar7 = *(long *)(lVar3 + 0x20 + uVar9 * 8);
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((void *)CarController.KECGFPHIEHF == (void *)0x0)
                  goto LAB_00bf8fb0;
                  fVar11 = CarController__AGKGCILIANE
                                     ((void *)CarController.KECGFPHIEHF);
                  if (fVar11 <= 60.0) {
                    lVar6 = lVar7;
                  }
                  fVar12 = 15.0;
                  fVar17 = fStack_d8;
                  if (fVar11 <= 60.0) {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((void *)CarController.KECGFPHIEHF == (void *)0x0)
                    goto LAB_00bf8fb0;
                    fVar11 = CarController__AGKGCILIANE
                                       ((void *)CarController.KECGFPHIEHF);
                    if (fVar11 <= 45.0) {
                      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if ((void *)CarController.KECGFPHIEHF == (void *)0x0)
                      goto LAB_00bf8fb0;
                      fVar11 = CarController__AGKGCILIANE
                                         ((void *)CarController.KECGFPHIEHF)
                      ;
                      fVar12 = 0.0;
                      lVar7 = lVar6;
                      fVar17 = 0.9;
                      if (15.0 < fVar11) {
                        fVar12 = 5.0;
                        fVar17 = 0.9;
                      }
                    }
                    else {
                      fVar12 = 10.0;
                      fVar17 = 1.0;
                    }
                  }
                  fVar11 = 0.8;
                  if (this.DBCICKPGKNH != '\0') {
                    fVar17 = fStack_d4;
                  }
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    fVar11 = 0.8;
                    func_0x00a67a30();
                  }
                  if (((CarController.KECGFPHIEHF == 0) ||
                      (lVar5 = CarController.KECGFPHIEHF.ECBLNBNGONF,
                      lVar5 == 0)) || (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0))
                  goto LAB_00bf8fb0;
                  fVar13 = (float)UnityEngine_Transform__get_position(lVar5,0);
                  if (cRam0000000001916e65 == '\0') {
                    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                    cRam0000000001916e65 = '\x01';
                  }
                  lVar5 = UnityEngine_Vector3.<statics>;
                  uVar16 = *(undefined8 *)(lVar5 + 0x48);
                  fVar15 = *(float *)(lVar5 + 0x50);
                  if (cRam0000000001916e68 == '\0') {
                    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                    cRam0000000001916e68 = '\x01';
                    lVar5 = UnityEngine_Vector3.<statics>;
                  }
                  uVar22 = *(undefined8 *)(lVar5 + 0x18);
                  fVar19 = *(float *)(lVar5 + 0x20);
                  uVar20 = this.GHJKKMELFOL;
                  fVar18 = *(float *)((long)__this + 0x48);
                  fVar17 = (float)UnityEngine_Random__Range(fVar17 * 0.5,fVar17,0);
                  if (lVar7 == 0) goto LAB_00bf8fb0;
                  fVar21 = (float)uVar22;
                  fVar23 = (float)((ulong)uVar22 >> 0x20);
                  uVar14 = (ulong)(uint)(((fVar10 + fVar12 * fVar15 + fVar19 + fVar19) - fVar18) *
                                        fVar17);
                  UnityEngine_Rigidbody__AddForce
                            (((fVar13 + (float)uVar16 * fVar12 + fVar21 + fVar21) - (float)uVar20) *
                             fVar17,((fVar11 + (float)((ulong)uVar16 >> 0x20) * fVar12 +
                                     fVar23 + fVar23) - (float)((ulong)uVar20 >> 0x20)) * fVar17,
                             uVar14,lVar7,1,0);
                  uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
                  uVar9 = uVar9 + 1;
                } while ((long)uVar9 < (long)(int)*(uint *)(lVar3 + 0x18));
              }
            }
          }
          return;
        }
      }
    }
  }
LAB_00bf8fb0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Update() { }   @0xaf8fb8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ZombieParts__Update(void *__this)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  if ((bRam0000000001916eee & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916eee = 1;
  }
  fVar3 = this.CNAGLGLEJMC;
  fVar2 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar3 = fVar3 + fVar2;
  this.CNAGLGLEJMC = fVar3;
  if (this.ACBDHBLLEEK < fVar3) {
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
  return;
}


// ==== public void .ctor() { }   @0xaf905c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ZombieParts___ctor(void *__this)

{
  this.ACBDHBLLEEK = 0x40800000;
  this.JPMPPOGJDGI = 0xfa0000001e;
  this.GHJKKMELFOL = 0x3f66666600000000;
  *(undefined4 *)((long)__this + 0x48) = 0xbf333333;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



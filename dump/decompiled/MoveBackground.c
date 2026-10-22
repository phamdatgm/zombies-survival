/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class MoveBackground : MonoBehaviour // TypeDefIndex: 5244
{
	// Fields
	public float NBCLGLJCBAP; // 0x20
	private Transform LIEHBGFFHFF; // 0x28
	private Vector3 EDPJENMOOGC; // 0x30
	private Vector3 IPHIIEPHGCC; // 0x3C
	public Transform[] HLOMPCBOBAJ; // 0x48
	public Vector3[] NLLLAJAECNI; // 0x50
	private float[] BKOMAHBJNAH; // 0x58
	private int LHMHEIBADPF; // 0x60

	// Methods

	public void .ctor() { }

	public void CKHDANMOBCL(Vector3 KCNOMBKCNBM) { }

	private void Awake() { }
}
*/

// ==== public void .ctor() { }   @0xb4c388

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MoveBackground___ctor(void *__this)

{
  this.LHMHEIBADPF = 0xc;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public void CKHDANMOBCL(Vector3 KCNOMBKCNBM) { }   @0xb4c398

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MoveBackground__CKHDANMOBCL
               (void *__this,float KCNOMBKCNBM_x,float KCNOMBKCNBM_y,float KCNOMBKCNBM_z)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  if (this.LIEHBGFFHFF != 0) {
    KCNOMBKCNBM_x = (float)UnityEngine_Transform__get_position(this.LIEHBGFFHFF,0);
    this.IPHIIEPHGCC = KCNOMBKCNBM_x;
    *(float *)((long)__this + 0x40) = KCNOMBKCNBM_y;
    *(float *)((long)__this + 0x44) =
         this.NBCLGLJCBAP * (KCNOMBKCNBM_z + *(float *)((long)__this + 0x38) + 9.0);
    if (this.LIEHBGFFHFF != 0) {
      UnityEngine_Transform__set_position(this.LIEHBGFFHFF,0);
      fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
      lVar1 = this.HLOMPCBOBAJ;
      if (((lVar1 != 0) && (uVar2 = *(ulong *)(lVar1 + 0x18), uVar2 != 0)) && (0 < (int)uVar2)) {
        uVar7 = 0;
        KCNOMBKCNBM_x = fVar8;
        do {
          lVar3 = this.NLLLAJAECNI;
          if (lVar3 == 0) goto LAB_00c4c4cc;
          if (*(uint *)(lVar3 + 0x18) <= uVar7) {
LAB_00c4c4d0:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar4 = (long)(int)uVar7;
          pfVar5 = (float *)(lVar3 + lVar4 * 0xc + 0x28);
          KCNOMBKCNBM_x = *pfVar5;
          lVar6 = this.BKOMAHBJNAH;
          if (lVar6 == 0) goto LAB_00c4c4cc;
          if (lVar6.Length <= uVar7) goto LAB_00c4c4d0;
          fVar9 = KCNOMBKCNBM_x + fVar8 * *(float *)(lVar6 + lVar4 * 4 + 0x20);
          *pfVar5 = fVar9;
          KCNOMBKCNBM_x = (float)this.LHMHEIBADPF;
          if (KCNOMBKCNBM_x < fVar9) {
            *pfVar5 = fVar9 * -1.8;
          }
          if ((uint)uVar2 <= uVar7) goto LAB_00c4c4d0;
          lVar1 = *(long *)(lVar1 + lVar4 * 8 + 0x20);
          if (lVar1 == 0) goto LAB_00c4c4cc;
          lVar3 = lVar3 + lVar4 * 0xc;
          KCNOMBKCNBM_x =
               (float)UnityEngine_Transform__set_localPosition
                                (*(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x24),lVar1,0
                                );
          lVar1 = this.HLOMPCBOBAJ;
          if (lVar1 == 0) goto LAB_00c4c4cc;
          uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)*(uint *)(lVar1 + 0x18));
      }
      return;
    }
  }
LAB_00c4c4cc:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50(KCNOMBKCNBM_x);
}


// ==== private void Awake() { }   @0xb4c4d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MoveBackground__Awake(void *__this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_s1;
  undefined4 in_s2;
  
  if ((bRam0000000001917170 & 1) == 0) {
    func_0x00a67900(&float___TypeInfo);
    func_0x00a67900(&UnityEngine_Vector3___TypeInfo);
    bRam0000000001917170 = 1;
  }
  lVar1 = UnityEngine_Component__get_transform(__this,0);
  this.LIEHBGFFHFF = lVar1;
  if (lVar1 != 0) {
    uVar7 = UnityEngine_Transform__get_position(lVar1,0);
    this.EDPJENMOOGC = uVar7;
    *(undefined4 *)((long)__this + 0x34) = in_s1;
    *(undefined4 *)((long)__this + 0x38) = in_s2;
    if (this.HLOMPCBOBAJ != 0) {
      uVar2 = func_0x00a679a0(_UnityEngine_Vector3___TypeInfo,
                              this.HLOMPCBOBAJ.Length);
      this.NLLLAJAECNI = uVar2;
      if (this.HLOMPCBOBAJ != 0) {
        uVar2 = func_0x00a679a0(_float___TypeInfo,
                                this.HLOMPCBOBAJ.Length);
        lVar1 = this.HLOMPCBOBAJ;
        this.BKOMAHBJNAH = uVar2;
        if (lVar1 != 0) {
          lVar3 = 0;
          lVar5 = 0;
          do {
            uVar4 = (uint)lVar5;
            if (*(int *)(lVar1 + 0x18) <= (int)uVar4) {
              return;
            }
            lVar1 = this.BKOMAHBJNAH;
            uVar7 = 0x3dcccccd;
            uVar8 = UnityEngine_Random__Range(0x3cf5c28f,0);
            if (lVar1 == 0) break;
            if (*(uint *)(lVar1 + 0x18) <= uVar4) {
LAB_00c4c644:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            *(undefined4 *)(lVar1 + lVar5 * 4 + 0x20) = uVar8;
            lVar1 = this.HLOMPCBOBAJ;
            if (lVar1 == 0) break;
            if (*(uint *)(lVar1 + 0x18) <= uVar4) goto LAB_00c4c644;
            lVar1 = *(long *)(lVar1 + lVar5 * 8 + 0x20);
            if (lVar1 == 0) break;
            lVar6 = this.NLLLAJAECNI;
            uVar8 = UnityEngine_Transform__get_localPosition(lVar1,0);
            if (lVar6 == 0) break;
            lVar5 = lVar5 + 1;
            if (*(uint *)(lVar6 + 0x18) <= (int)lVar5 - 1U) goto LAB_00c4c644;
            lVar6 = lVar6 + lVar3;
            *(undefined4 *)(lVar6 + 0x20) = uVar8;
            *(undefined4 *)(lVar6 + 0x24) = uVar7;
            *(undefined4 *)(lVar6 + 0x28) = in_s2;
            lVar1 = this.HLOMPCBOBAJ;
            lVar3 = lVar3 + 0xc;
          } while (lVar1 != 0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



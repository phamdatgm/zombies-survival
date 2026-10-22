/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class CarCamera : MonoBehaviour // TypeDefIndex: 5137
{
	// Fields
	public Transform LIEHBGFFHFF; // 0x20
	public Camera PEOBIGGOKBF; // 0x28
	public CarController PEEMAHNEIHI; // 0x30
	public CarCamera.FEGMKACGKGN PGAPMNLLMHM; // 0x38
	private bool MEHDJFDHKNE; // 0x3C
	private float GNPJEBABCEJ; // 0x40
	public float MMCJPAFDKPO; // 0x44
	private Vector3 DPHNLFKANKO; // 0x48
	public float KCMGAOBDAIL; // 0x54
	public float MMHKIPHOHOK; // 0x58
	private float AGPDPHGLLNO; // 0x5C
	public static float OLIEHFBNIEF; // 0x0
	public float BJMMLAKPLCF; // 0x60
	public float JOGMDOOMPBN; // 0x64
	public float NLELOMCJOHP; // 0x68
	public float DLHADBLLICJ; // 0x6C
	public int AHPLNGFAPLP; // 0x70
	public int FKBDBHDDINH; // 0x74
	public int GMGHOBHANGK; // 0x78
	public int MINFEKLCEAI; // 0x7C
	public Vector3 LNDBDGLKMLD; // 0x80
	private float LBMCAJJOMIL; // 0x8C
	private float JGHBJBCBFMN; // 0x90
	private float BEOOOAFPGIK; // 0x94
	public float GLFGDGFAEBK; // 0x98
	public float KADAKHHDKKD; // 0x9C
	public float JFGADDLBHEO; // 0xA0
	public float DPKMLEDEBID; // 0xA4
	private int AKEFMNGNIFJ; // 0xA8
	private int PCIELBPDKBH; // 0xAC
	private float PCNOCPKGJEI; // 0xB0
	private int BMDLDAOAFAB; // 0xB4
	private float LFJDBFFFCFJ; // 0xB8
	private bool ACLOPJDHIJK; // 0xBC
	private Transform IPAJNEKEJEA; // 0xC0
	private float PGNMPLDJELM; // 0xC8

	// Methods

	public void OHIFDCBAEFL() { }

	public void IDBHFAEMGOB() { }

	public void KHDFDGMBOIJ() { }

	public Vector3 AAPGENGOABC() { }

	public void .ctor() { }

	public void BGKJCAIHANB() { }

	private void GFOMIMMNDBH() { }

	public IEnumerator OIKFBMHJDBN() { }

	private void Update() { }

	public void IBOCKKJLDDJ(Transform BPEGLMBNNME) { }

	private void Start() { }
}
*/

// ==== public void OHIFDCBAEFL() { }   @0xb018ec

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCamera__OHIFDCBAEFL(void *__this)

{
  this.LBMCAJJOMIL = 0;
  this.JGHBJBCBFMN = 0;
  return;
}


// ==== public void IDBHFAEMGOB() { }   @0xb018f4

/* WARNING: Removing unreachable block (ram,0x00c01930) */
/* WARNING: Removing unreachable block (ram,0x00c01958) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCamera__IDBHFAEMGOB(void *__this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  fVar3 = this.KCMGAOBDAIL;
  fVar4 = this.MMCJPAFDKPO - fVar3;
  fVar2 = 0.0;
  if (fVar3 != this.AGPDPHGLLNO) {
    fVar6 = fVar4 / (this.AGPDPHGLLNO - fVar3);
    fVar2 = 0.0;
    if (0.0 <= fVar6) {
      fVar2 = fVar6;
    }
  }
  this.GLFGDGFAEBK = fVar2;
  fVar6 = 0.0;
  if ((fVar3 != this.MMHKIPHOHOK) &&
     (fVar4 = fVar4 / (this.MMHKIPHOHOK - fVar3), 0.0 <= fVar4)) {
    fVar6 = fVar4;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar5 = (float)this.GMGHOBHANGK;
  this.KADAKHHDKKD = fVar6;
  this.JFGADDLBHEO =
       this.BJMMLAKPLCF +
       fVar2 * (*(float *)((long)__this + 100) - this.BJMMLAKPLCF);
  fVar3 = fVar6 * ((float)this.FKBDBHDDINH - (float)this.AHPLNGFAPLP) +
          (float)this.AHPLNGFAPLP;
  lVar1 = this.LIEHBGFFHFF;
  this.DPKMLEDEBID =
       this.NLELOMCJOHP +
       fVar2 * (this.DLHADBLLICJ - this.NLELOMCJOHP);
  fVar2 = fVar6 * ((float)this.MINFEKLCEAI - fVar5) + fVar5;
  this.LNDBDGLKMLD = fVar3;
  *(float *)((long)__this + 0x84) = fVar2;
  fVar2 = fVar2 * 0.017453292;
  fVar4 = *(float *)((long)__this + 0x88) * 0.017453292;
  uStack_30 = UnityEngine_Quaternion__Internal_FromEulerRad(fVar3 * 0.017453292,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  fStack_2c = fVar2;
  fStack_28 = fVar4;
  fStack_24 = fVar5;
  if (pcRam000000000191c8a0 == (code *)0x0) {
    pcRam000000000191c8a0 = (code *)func_0x00a678c4(&UNK_005b89bb,0);
  }
  (*pcRam000000000191c8a0)(lVar1,&uStack_30);
  return;
}


// ==== public void KHDFDGMBOIJ() { }   @0xb01a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCamera__KHDFDGMBOIJ(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  float in_s1;
  float in_s2;
  undefined8 uStack_28;
  
  if ((bRam0000000001916f31 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Camera___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f31 = 1;
  }
  uVar2 = this.LIEHBGFFHFF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = UnityEngine_Component__get_transform(__this,0);
    this.LIEHBGFFHFF = uVar2;
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
              (__this,&uStack_28,_Method_UnityEngine_Component_GetComponent_Camera___);
    this.PEOBIGGOKBF = uStack_28;
    if (this.LIEHBGFFHFF == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    UnityEngine_Transform__get_rotation(this.LIEHBGFFHFF,0);
    fVar3 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(0);
    in_s1 = in_s1 * 57.29578;
    in_s2 = in_s2 * 57.29578;
    uVar4 = UnityEngine_Quaternion__Internal_MakePositive(fVar3 * 57.29578,0);
    this.LNDBDGLKMLD = uVar4;
    *(float *)((long)__this + 0x84) = in_s1;
    *(float *)((long)__this + 0x88) = in_s2;
    CarCamera__GFOMIMMNDBH(__this);
    uVar4 = UnityEngine_Screen__get_height(0);
    this.AKEFMNGNIFJ = uVar4;
    uVar4 = UnityEngine_Screen__get_width(0);
    this.PCIELBPDKBH = uVar4;
  }
  return;
}


// ==== private void GFOMIMMNDBH() { }   @0xb01b0c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCamera__GFOMIMMNDBH(void *__this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar1 = UnityEngine_Screen__get_width(0);
  iVar2 = UnityEngine_Screen__get_height(0);
  fVar3 = (float)iVar1 / (float)iVar2;
  if (fVar3 <= 1.26) {
    this.LFJDBFFFCFJ = 0x3fd9999a;
    this.KCMGAOBDAIL = 0x4180000041200000;
    this.NLELOMCJOHP = 0x40866666402ccccd;
    this.BJMMLAKPLCF = 0x4089999a40000000;
    this.GMGHOBHANGK = 0xffffffcaffffffc8;
    this.AHPLNGFAPLP = 0x300000003;
    uVar4 = 0x41a00000;
  }
  else if (fVar3 <= 1.34) {
    this.KCMGAOBDAIL = 0x4168000041100000;
    this.NLELOMCJOHP = 0x4020000040066666;
    this.BJMMLAKPLCF = 0x408666663fc00000;
    this.GMGHOBHANGK = 0xffffffc8ffffffc6;
    this.AHPLNGFAPLP = 0x500000003;
    this.LFJDBFFFCFJ = 0x40000000;
    uVar4 = 0x41940000;
  }
  else if (fVar3 <= 1.51) {
    this.LFJDBFFFCFJ = 0x3fc00000;
    this.KCMGAOBDAIL = 0x4150000040e00000;
    this.NLELOMCJOHP = 0x400000003fb9999a;
    this.BJMMLAKPLCF = 0x407333333fa00000;
    this.GMGHOBHANGK = 0xffffffc8ffffffc3;
    this.AHPLNGFAPLP = 0x700000003;
    uVar4 = 0x41880000;
  }
  else if (1.61 <= fVar3) {
    if (1.8 <= fVar3) {
      if (2.0 <= fVar3) {
        uVar4 = 0x416b3333;
        this.KCMGAOBDAIL = 0x412b333340c9999a;
        this.NLELOMCJOHP = 0xbf0000003f000000;
        this.BJMMLAKPLCF = 0x406000003faccccd;
        this.GMGHOBHANGK = 0xffffffbfffffffb9;
        this.AHPLNGFAPLP = 0xa00000007;
        goto LAB_00c01cc0;
      }
      uVar5 = 0x4130000040d00000;
      uVar7 = 0xbf0000003f000000;
      uVar6 = 0x406000003faccccd;
      uVar9 = 0xffffffbfffffffb9;
      uVar8 = 0xa00000007;
    }
    else {
      uVar5 = 0x4130000040c00000;
      uVar7 = 0x3fa00000;
      uVar6 = 0x408000003f99999a;
      uVar9 = 0xffffffc5ffffffbf;
      uVar8 = 0xa00000003;
    }
    this.KCMGAOBDAIL = uVar5;
    this.NLELOMCJOHP = uVar7;
    this.BJMMLAKPLCF = uVar6;
    this.GMGHOBHANGK = uVar9;
    this.AHPLNGFAPLP = uVar8;
    uVar4 = 0x41700000;
  }
  else {
    this.KCMGAOBDAIL = 0x4140000040e00000;
    uVar4 = 0x41800000;
    this.NLELOMCJOHP = 0x3f19999a3fa00000;
    this.BJMMLAKPLCF = 0x4084cccd3fa00000;
    this.GMGHOBHANGK = 0xffffffc7ffffffc2;
    this.AHPLNGFAPLP = 0xa00000003;
  }
LAB_00c01cc0:
  this.AGPDPHGLLNO = uVar4;
  return;
}


// ==== public Vector3 AAPGENGOABC() { }   @0xb01cd0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * CarCamera__AAPGENGOABC(void *__this)

{
  long lVar1;
  void *pvVar2;
  
  if ((this.PEEMAHNEIHI != 0) &&
     (lVar1 = this.PEEMAHNEIHI.BHDKJIINJNL, lVar1 != 0)) {
    UnityEngine_Transform__get_position(lVar1,0);
    if ((this.PEEMAHNEIHI != 0) &&
       (lVar1 = this.PEEMAHNEIHI.BHDKJIINJNL, lVar1 != 0)) {
      pvVar2 = (void *)UnityEngine_Transform__get_position(lVar1,0);
      if (this.PEEMAHNEIHI != 0) {
        return pvVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb01d58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCamera___ctor(void *__this)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  this.MMCJPAFDKPO = 0x41200000;
  if (cRam0000000001916789 == '\0') {
    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
    cRam0000000001916789 = '\x01';
  }
  lVar1 = _UnityEngine_Vector3_TypeInfo;
  uVar2 = **(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
  uVar3 = *(undefined4 *)(*(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 1);
  this.AGPDPHGLLNO = 0x3f99999a41700000;
  this.KCMGAOBDAIL = 0x4130000040c00000;
  *(undefined8 *)((long)__this + 100) = 0x3fa0000040800000;
  this.GMGHOBHANGK = 0xffffffc5ffffffbf;
  this.AHPLNGFAPLP = 0xa00000003;
  this.DPHNLFKANKO = uVar2;
  *(undefined4 *)((long)__this + 0x50) = uVar3;
  uVar2 = **(undefined8 **)(lVar1 + 0xb8);
  uVar3 = *(undefined4 *)(*(undefined8 **)(lVar1 + 0xb8) + 1);
  this.JGHBJBCBFMN = 0x40000000;
  this.LNDBDGLKMLD = uVar2;
  *(undefined4 *)((long)__this + 0x88) = uVar3;
  this.BMDLDAOAFAB = 0x3f80000000000008;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public void BGKJCAIHANB() { }   @0xb01e0c

/* WARNING: Removing unreachable block (ram,0x00c020bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCamera__BGKJCAIHANB(void *__this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_s1;
  float fVar9;
  float fVar10;
  
  if ((bRam0000000001916f32 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    bRam0000000001916f32 = 1;
  }
  if (this.PEEMAHNEIHI == 0) {
LAB_00c02100:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  fVar5 = (float)CarController__AGKGCILIANE(this.PEEMAHNEIHI,0);
  fVar9 = this.PCNOCPKGJEI;
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((this.PEEMAHNEIHI == 0) ||
     (lVar3 = this.PEEMAHNEIHI.BHDKJIINJNL, lVar3 == 0)) goto LAB_00c02100;
  cVar1 = CarController.MKEGHDPIIFK;
  UnityEngine_Transform__get_position(lVar3,0);
  if (in_s1 <= (float)this.BMDLDAOAFAB) {
    fVar6 = this.PCNOCPKGJEI;
    fVar7 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar6 = fVar6 + fVar7 * -300.0;
    fVar7 = 1.0;
  }
  else {
    if (this.PEEMAHNEIHI == 0) goto LAB_00c02100;
    fVar6 = (float)CarController__AGKGCILIANE(this.PEEMAHNEIHI,0);
    fVar10 = 10.0;
    fVar8 = 1.0;
    fVar7 = 1.0;
    if (10.0 <= fVar6) {
      if (this.PEEMAHNEIHI == 0) goto LAB_00c02100;
      fVar6 = (float)CarController__AGKGCILIANE(this.PEEMAHNEIHI,0);
      fVar10 = 20.0;
      fVar7 = fVar8;
      if (15.0 <= fVar6) {
        if (this.PEEMAHNEIHI == 0) goto LAB_00c02100;
        fVar6 = (float)CarController__AGKGCILIANE(this.PEEMAHNEIHI,0);
        fVar10 = 30.0;
        if (25.0 <= fVar6) {
          if (this.PEEMAHNEIHI == 0) goto LAB_00c02100;
          fVar6 = (float)CarController__AGKGCILIANE(this.PEEMAHNEIHI,0);
          if (33.0 <= fVar6) {
            if (this.PEEMAHNEIHI == 0) goto LAB_00c02100;
            fVar6 = (float)CarController__AGKGCILIANE(this.PEEMAHNEIHI,0);
            if (40.0 <= fVar6) {
              fVar10 = 500.0;
              fVar7 = 0.5;
            }
            else {
              fVar10 = 100.0;
            }
          }
          else {
            fVar10 = 75.0;
            fVar7 = 1.0;
          }
        }
      }
    }
    fVar6 = this.PCNOCPKGJEI;
    fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar6 = fVar6 + fVar10 * fVar8;
  }
  bVar2 = fVar6 < 0.0;
  if (150.0 < fVar6) {
    fVar6 = 150.0;
  }
  if (bVar2) {
    fVar6 = 0.0;
  }
  this.PCNOCPKGJEI = fVar6;
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  fVar6 = 1.0;
  if (CarController.HCILEAABENL <= 1.0) {
    if ((this.PEEMAHNEIHI == 0) ||
       (lVar3 = this.PEEMAHNEIHI.BHDKJIINJNL, lVar3 == 0)) goto LAB_00c02100;
    UnityEngine_Transform__get_position(lVar3,0);
    if ((float)this.BMDLDAOAFAB < fVar6) goto LAB_00c0200c;
    pfVar4 = (float *)(&this.MMHKIPHOHOK);
  }
  else {
LAB_00c0200c:
    pfVar4 = (float *)(&this.AGPDPHGLLNO);
  }
  fVar6 = this.KCMGAOBDAIL;
  fVar5 = (fVar5 + fVar9) / 3.0;
  if (cVar1 != '\0') {
    fVar5 = 15.0;
  }
  fVar9 = *pfVar4;
  if (fVar5 <= *pfVar4) {
    fVar9 = fVar5;
  }
  if (fVar5 < fVar6) {
    fVar9 = fVar6;
  }
  switch(this.PGAPMNLLMHM) {
  case 0:
    fVar6 = this.MMCJPAFDKPO;
    fVar5 = (float)UnityEngine_Time__get_deltaTime(0);
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    fVar7 = (fVar5 / *(float *)(&UNK_0059ca60 +
                               (ulong)(0.0 < *(float *)(CarController.<statics> +
                                                       0x10)) * 4)) / fVar7;
    if (fVar7 < 0.0) {
      fVar7 = 0.0;
    }
    fVar6 = fVar6 + (fVar9 - fVar6) * fVar7;
    break;
  case 1:
    break;
  case 2:
    fVar6 = this.MMHKIPHOHOK;
    break;
  case 3:
    fVar6 = this.AGPDPHGLLNO;
    break;
  default:
    goto LAB_00c020e8;
  }
  this.MMCJPAFDKPO = fVar6;
LAB_00c020e8:
  return;
}


// ==== public IEnumerator OIKFBMHJDBN() { }   @0xb02104

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * CarCamera__OIKFBMHJDBN(void *__this)

{
  void *pvVar1;
  
  if ((bRam0000000001916f33 & 1) == 0) {
    func_0x00a67900(&CarCamera_FPKDIMHPBPM_TypeInfo);
    bRam0000000001916f33 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_CarCamera_FPKDIMHPBPM_TypeInfo);
  CarCamera_FPKDIMHPBPM___ctor(pvVar1,0,0);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)pvVar1 + 0x20) = __this;
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Update() { }   @0xb0216c

/* WARNING: Removing unreachable block (ram,0x00c02540) */
/* WARNING: Removing unreachable block (ram,0x00c02298) */
/* WARNING: Removing unreachable block (ram,0x00c023bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCamera__Update(void *__this)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  ulong extraout_d0;
  ulong in_d1;
  ulong uVar16;
  undefined8 uVar17;
  float in_s2;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  
  if ((bRam0000000001916f34 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f34 = 1;
  }
  uVar7 = this.PEEMAHNEIHI;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar6 & 1) != 0) {
    if (this.PEEMAHNEIHI == 0) goto LAB_00c02648;
    uVar7 = this.PEEMAHNEIHI.NIIFDMDCOCF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.FNHOMMPGFHK == '\0') {
      CarCamera__BGKJCAIHANB(__this);
      CarCamera__IDBHFAEMGOB(__this);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (CarController.MKEGHDPIIFK == '\0') {
        CarCamera__AAPGENGOABC(__this);
        uVar6 = extraout_d0;
      }
      else {
        if (this.LBMCAJJOMIL == 0.0) {
          if (this.LIEHBGFFHFF == 0) goto LAB_00c02648;
          UnityEngine_Transform__get_position(this.LIEHBGFFHFF,0);
          if ((this.PEEMAHNEIHI == 0) ||
             (lVar8 = this.PEEMAHNEIHI.NIIFDMDCOCF, lVar8 == 0))
          goto LAB_00c02648;
          fVar9 = in_s2;
          UnityEngine_Rigidbody__get_velocity(lVar8,0);
          fVar9 = fVar9 * 0.5;
          fVar12 = fVar9;
          if (fVar9 < -3.0) {
            fVar12 = -3.0;
          }
          this.LBMCAJJOMIL = in_s2 + fVar12;
          if (this.LIEHBGFFHFF == 0) goto LAB_00c02648;
          UnityEngine_Transform__get_position(this.LIEHBGFFHFF,0);
          in_d1 = (ulong)(uint)(fVar9 + 2.0);
          this.JGHBJBCBFMN = fVar9 + 2.0;
          this.BEOOOAFPGIK = this.MMCJPAFDKPO;
        }
        fVar9 = (float)in_d1;
        if (this.LIEHBGFFHFF == 0) goto LAB_00c02648;
        UnityEngine_Transform__get_position(this.LIEHBGFFHFF,0);
        fVar14 = this.JGHBJBCBFMN;
        uVar6 = (ulong)this.BEOOOAFPGIK;
        fVar10 = (float)UnityEngine_Time__get_deltaTime(0);
        fVar10 = fVar10 * 0.5;
        fVar12 = fVar10;
        if (1.0 < fVar10) {
          fVar12 = 1.0;
        }
        if (fVar10 < 0.0) {
          fVar12 = 0.0;
        }
        in_d1 = (ulong)(uint)(fVar9 + (fVar14 - fVar9) * fVar12);
        UnityEngine_Time__get_deltaTime(0);
      }
      if (this.LIEHBGFFHFF == 0) goto LAB_00c02648;
      UnityEngine_Transform__set_position(uVar6,in_d1,this.LIEHBGFFHFF,0);
    }
    else if (this.ACLOPJDHIJK == '\0') {
      this.MMCJPAFDKPO = this.MMHKIPHOHOK;
      CarCamera__IDBHFAEMGOB(__this);
      fVar9 = (float)in_d1;
      if (this.LBMCAJJOMIL == 0.0) {
        if (this.LIEHBGFFHFF == 0) goto LAB_00c02648;
        UnityEngine_Transform__get_position(this.LIEHBGFFHFF,0);
        this.LBMCAJJOMIL = in_s2 + 42.0;
      }
      fVar12 = (float)UnityEngine_Time__get_deltaTime(0);
      if (this.LIEHBGFFHFF == 0) goto LAB_00c02648;
      fVar10 = *(float *)((long)__this + 200);
      fVar13 = (float)UnityEngine_Transform__get_position(this.LIEHBGFFHFF,0);
      fVar24 = this.MMCJPAFDKPO;
      fVar11 = (float)UnityEngine_Time__get_deltaTime(0);
      fVar25 = *(float *)((long)__this + 100);
      fVar14 = (float)UnityEngine_Time__get_deltaTime(0);
      if (this.LIEHBGFFHFF == 0) goto LAB_00c02648;
      fVar14 = fVar14 * 5.0;
      fVar10 = fVar12 / 3.0 + fVar10;
      fVar12 = 0.0;
      bVar2 = fVar10 < 0.0;
      if (1.0 < fVar10) {
        fVar10 = 1.0;
      }
      if (bVar2) {
        fVar10 = fVar12;
      }
      bVar2 = fVar14 < 0.0;
      if (1.0 < fVar14) {
        fVar14 = 1.0;
      }
      if (bVar2) {
        fVar14 = fVar12;
      }
      fVar1 = fVar11 * 5.0;
      if (fVar11 * 5.0 < 0.0) {
        fVar1 = fVar12;
      }
      UnityEngine_Transform__set_position
                (fVar13 + (fVar24 - fVar13) * fVar1,fVar9 + (fVar25 - fVar9) * fVar14,
                 in_s2 + fVar10 * ((this.LBMCAJJOMIL +
                                   this.GNPJEBABCEJ * 100.0) - in_s2),
                 this.LIEHBGFFHFF,0);
      fVar12 = *(float *)((long)__this + 200);
      fVar9 = (float)UnityEngine_Time__get_deltaTime(0);
      *(float *)((long)__this + 200) = fVar12 + fVar9 * 0.0005;
    }
    else {
      fVar9 = (float)UnityEngine_Time__get_deltaTime(0);
      fVar12 = (float)in_d1;
      lVar8 = this.LIEHBGFFHFF;
      if (lVar8 == 0) {
LAB_00c02648:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      fVar10 = (float)UnityEngine_Transform__get_position(lVar8,0);
      if (this.IPAJNEKEJEA == 0) goto LAB_00c02648;
      fVar9 = fVar9 * 0.25;
      fVar14 = fVar12;
      fVar13 = in_s2;
      fVar11 = (float)UnityEngine_Transform__get_position(this.IPAJNEKEJEA,0);
      if (fVar9 < 0.0) {
        fVar9 = 0.0;
      }
      uVar22 = (ulong)(uint)fVar9;
      uVar6 = (ulong)(uint)(fVar12 + fVar9 * (fVar14 - fVar12));
      uVar19 = (ulong)(uint)(in_s2 + fVar9 * (fVar13 - in_s2));
      UnityEngine_Transform__set_position(fVar10 + fVar9 * (fVar11 - fVar10),uVar6,uVar19,lVar8,0);
      lVar8 = this.LIEHBGFFHFF;
      if (lVar8 == 0) goto LAB_00c02648;
      uVar7 = UnityEngine_Transform__get_rotation(lVar8,0);
      if (this.IPAJNEKEJEA == 0) goto LAB_00c02648;
      uVar16 = uVar6;
      uVar20 = uVar19;
      uVar23 = uVar22;
      uVar15 = UnityEngine_Transform__get_rotation(this.IPAJNEKEJEA,0);
      UnityEngine_Quaternion__Lerp(uVar7,uVar6,uVar19,uVar22,uVar15,uVar16,uVar20,uVar23,0);
      UnityEngine_Transform__set_rotation(lVar8,0);
    }
    iVar3 = this.PCIELBPDKBH;
    iVar4 = UnityEngine_Screen__get_width(0);
    if ((iVar3 != iVar4) ||
       (iVar3 = this.AKEFMNGNIFJ, iVar4 = UnityEngine_Screen__get_height(0),
       iVar3 != iVar4)) {
      uVar5 = UnityEngine_Screen__get_height(0);
      this.AKEFMNGNIFJ = uVar5;
      uVar5 = UnityEngine_Screen__get_width(0);
      this.PCIELBPDKBH = uVar5;
      iVar3 = UnityEngine_Screen__get_width(0);
      iVar4 = UnityEngine_Screen__get_height(0);
      fVar9 = (float)iVar3 / (float)iVar4;
      if (fVar9 <= 1.26) {
        this.LFJDBFFFCFJ = 0x3fd9999a;
        this.KCMGAOBDAIL = 0x4180000041200000;
        this.NLELOMCJOHP = 0x40866666402ccccd;
        this.BJMMLAKPLCF = 0x4089999a40000000;
        this.GMGHOBHANGK = 0xffffffcaffffffc8;
        this.AHPLNGFAPLP = 0x300000003;
        uVar5 = 0x41a00000;
      }
      else if (fVar9 <= 1.34) {
        this.KCMGAOBDAIL = 0x4168000041100000;
        this.NLELOMCJOHP = 0x4020000040066666;
        this.BJMMLAKPLCF = 0x408666663fc00000;
        this.GMGHOBHANGK = 0xffffffc8ffffffc6;
        this.AHPLNGFAPLP = 0x500000003;
        this.LFJDBFFFCFJ = 0x40000000;
        uVar5 = 0x41940000;
      }
      else if (fVar9 <= 1.51) {
        this.LFJDBFFFCFJ = 0x3fc00000;
        this.KCMGAOBDAIL = 0x4150000040e00000;
        this.NLELOMCJOHP = 0x400000003fb9999a;
        this.BJMMLAKPLCF = 0x407333333fa00000;
        this.GMGHOBHANGK = 0xffffffc8ffffffc3;
        this.AHPLNGFAPLP = 0x700000003;
        uVar5 = 0x41880000;
      }
      else if (1.61 <= fVar9) {
        if (1.8 <= fVar9) {
          if (2.0 <= fVar9) {
            uVar5 = 0x416b3333;
            this.KCMGAOBDAIL = 0x412b333340c9999a;
            this.NLELOMCJOHP = 0xbf0000003f000000;
            this.BJMMLAKPLCF = 0x406000003faccccd;
            this.GMGHOBHANGK = 0xffffffbfffffffb9;
            this.AHPLNGFAPLP = 0xa00000007;
            goto LAB_00c01cc0;
          }
          uVar7 = 0x4130000040d00000;
          uVar17 = 0xbf0000003f000000;
          uVar15 = 0x406000003faccccd;
          uVar21 = 0xffffffbfffffffb9;
          uVar18 = 0xa00000007;
        }
        else {
          uVar7 = 0x4130000040c00000;
          uVar17 = 0x3fa00000;
          uVar15 = 0x408000003f99999a;
          uVar21 = 0xffffffc5ffffffbf;
          uVar18 = 0xa00000003;
        }
        this.KCMGAOBDAIL = uVar7;
        this.NLELOMCJOHP = uVar17;
        this.BJMMLAKPLCF = uVar15;
        this.GMGHOBHANGK = uVar21;
        this.AHPLNGFAPLP = uVar18;
        uVar5 = 0x41700000;
      }
      else {
        this.KCMGAOBDAIL = 0x4140000040e00000;
        uVar5 = 0x41800000;
        this.NLELOMCJOHP = 0x3f19999a3fa00000;
        this.BJMMLAKPLCF = 0x4084cccd3fa00000;
        this.GMGHOBHANGK = 0xffffffc7ffffffc2;
        this.AHPLNGFAPLP = 0xa00000003;
      }
LAB_00c01cc0:
      this.AGPDPHGLLNO = uVar5;
      return;
    }
  }
  return;
}


// ==== public void IBOCKKJLDDJ(Transform BPEGLMBNNME) { }   @0xb0264c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCamera__IBOCKKJLDDJ(void *__this,void *BPEGLMBNNME)

{
  this.IPAJNEKEJEA = BPEGLMBNNME;
  this.ACLOPJDHIJK = 1;
  return;
}


// ==== private void Start() { }   @0xb0265c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCamera__Start(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  float in_s1;
  float in_s2;
  undefined8 uStack_28;
  
  if ((bRam0000000001916f31 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Camera___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f31 = 1;
  }
  uVar2 = this.LIEHBGFFHFF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = UnityEngine_Component__get_transform(__this,0);
    this.LIEHBGFFHFF = uVar2;
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
              (__this,&uStack_28,_Method_UnityEngine_Component_GetComponent_Camera___);
    this.PEOBIGGOKBF = uStack_28;
    if (this.LIEHBGFFHFF == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    UnityEngine_Transform__get_rotation(this.LIEHBGFFHFF,0);
    fVar3 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(0);
    in_s1 = in_s1 * 57.29578;
    in_s2 = in_s2 * 57.29578;
    uVar4 = UnityEngine_Quaternion__Internal_MakePositive(fVar3 * 57.29578,0);
    this.LNDBDGLKMLD = uVar4;
    *(float *)((long)__this + 0x84) = in_s1;
    *(float *)((long)__this + 0x88) = in_s2;
    CarCamera__GFOMIMMNDBH(__this);
    uVar4 = UnityEngine_Screen__get_height(0);
    this.AKEFMNGNIFJ = uVar4;
    uVar4 = UnityEngine_Screen__get_width(0);
    this.PCIELBPDKBH = uVar4;
  }
  return;
}



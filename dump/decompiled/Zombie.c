/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class Zombie : MonoBehaviour // TypeDefIndex: 5063
{
	// Fields
	public bool HDDHKFDFPIK; // 0x20
	public int PHKPMGOICOM; // 0x24
	public int IKOBFEOAKCI; // 0x28
	public int KJHIDPMAFFF; // 0x2C
	public GBLIKCKFCBH FHOFNGHGNGF; // 0x30
	public EONPOEEAEOK ELAGCAKJDAN; // 0x34
	public CPFPFGOIDDO CPFPFGOIDDO; // 0x38
	public RaycastHit IJEOCIBFOHB; // 0x3C
	private Vector3 NOEIMOPFFND; // 0x68
	public float NBCLGLJCBAP; // 0x74
	public int AGFPLMAAMKG; // 0x78
	public float MDDKLMGCHML; // 0x7C
	public float IFNKAAPBPPB; // 0x80
	public float PCKPDBGGOPK; // 0x84
	public Animator NFABKCAPLMG; // 0x88
	public Transform LIEHBGFFHFF; // 0x90
	public GameObject ABNPNOKAMEB; // 0x98
	public Collider JIDEOGBJAOO; // 0xA0
	public Transform OAHDDLELAPF; // 0xA8
	public int EPEPDEHGJHM; // 0xB0
	private float PCAMLKIMMPM; // 0xB4
	private bool DGEEAODMLBA; // 0xB8
	private bool JJBIDGDHLBH; // 0xB9

	// Methods

	public void .ctor() { }

	private void Start() { }

	public void HMEFLNGHPDI() { }

	private void Update() { }

	public void LJLGIPJCHFC(bool LPGJFJBOIHE) { }
}
*/

// ==== public void .ctor() { }   @0xad6d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Zombie___ctor(void *__this)

{
  this.PHKPMGOICOM = 0x100000001;
  this.NBCLGLJCBAP = 0x53e99999a;
  this.MDDKLMGCHML = 0x451c40003d4ccccd;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== private void Start() { }   @0xad6d5c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Zombie__Start(void *__this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001916e03 & 1) == 0) {
    func_0x00a67900(&Str_Run);
    func_0x00a67900(&Str_WalkBarrel);
    func_0x00a67900(&Str_TankIdle);
    func_0x00a67900(&Str_Crawl);
    func_0x00a67900(&Str_Idle);
    func_0x00a67900(&Str_Zombie_Walk);
    bRam0000000001916e03 = 1;
  }
  switch(this.FHOFNGHGNGF) {
  case 1:
    lVar4 = this.NFABKCAPLMG;
    if (lVar4 == 0) {
LAB_00bd6eb4:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    puVar3 = (undefined8 *)&Str_WalkBarrel;
    goto code_r0x00bd6e54;
  case 2:
    lVar4 = this.NFABKCAPLMG;
    uVar5 = UnityEngine_Random__get_value(0);
    if (lVar4 == 0) goto LAB_00bd6eb4;
    puVar3 = (undefined8 *)&Str_Crawl;
    break;
  case 3:
  case 4:
    lVar4 = this.NFABKCAPLMG;
    uVar5 = UnityEngine_Random__get_value(0);
    if (lVar4 == 0) goto LAB_00bd6eb4;
    puVar3 = (undefined8 *)&Str_Run;
    break;
  default:
    lVar4 = this.NFABKCAPLMG;
    if (this.FHOFNGHGNGF != 6) {
      uVar5 = UnityEngine_Random__get_value(0);
      if (lVar4 == 0) goto LAB_00bd6eb4;
      puVar3 = (undefined8 *)&Str_Zombie_Walk;
      break;
    }
    if (lVar4 == 0) goto LAB_00bd6eb4;
    puVar3 = (undefined8 *)&Str_TankIdle;
code_r0x00bd6e54:
    uVar2 = *puVar3;
    uVar5 = 0xff800000;
    goto UnityEngine_Animator__Play;
  case 9:
    lVar4 = this.NFABKCAPLMG;
    uVar5 = UnityEngine_Random__get_value(0);
    if (lVar4 == 0) goto LAB_00bd6eb4;
    puVar3 = (undefined8 *)&Str_Idle;
  }
  uVar2 = *puVar3;
UnityEngine_Animator__Play:
  if (pcRam000000000191b598 == (code *)0x0) {
    pcRam000000000191b598 = (code *)func_0x00a678c4(&UNK_005a13ae,uVar2,0xffffffff);
  }
  uVar1 = (*pcRam000000000191b598)(uVar2);
  if (pcRam000000000191b588 == (code *)0x0) {
    pcRam000000000191b588 = (code *)func_0x00a678c4(&UNK_005a80d8);
  }
                    /* WARNING: Could not recover jumptable at 0x01462c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191b588)(uVar5,lVar4,uVar1,0xffffffff);
  return;
}


// ==== public void HMEFLNGHPDI() { }   @0xad6eb8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Zombie__HMEFLNGHPDI(void *__this)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000001916e04 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_zombie_parts);
    bRam0000000001916e04 = 1;
  }
  uVar4 = this.ABNPNOKAMEB;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = this.OAHDDLELAPF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      uVar4 = this.JIDEOGBJAOO;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      if ((uVar3 & 1) != 0) {
        lVar5 = this.ABNPNOKAMEB;
        uVar2 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
        if (lVar5 != 0) {
          UnityEngine_GameObject__set_layer(lVar5,uVar2,0);
          if (this.JIDEOGBJAOO != 0) {
            UnityEngine_Collider__set_enabled(this.JIDEOGBJAOO,1,0);
            if (this.OAHDDLELAPF != 0) {
              UnityEngine_Transform__set_parent(this.OAHDDLELAPF,0,0);
              if (this.ABNPNOKAMEB != 0) {
                lVar5 = UnityEngine_GameObject__AddComponent_object_
                                  (this.ABNPNOKAMEB,
                                   _Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                }
                uVar3 = UnityEngine_Object__op_Inequality(lVar5,0,0);
                if ((uVar3 & 1) != 0) {
                  if (lVar5 == 0) goto LAB_00bd7198;
                  UnityEngine_Rigidbody__set_interpolation(lVar5,1,0);
                }
                iVar1 = this.EPEPDEHGJHM;
                if (iVar1 < 1) {
                  return;
                }
                if (this.LIEHBGFFHFF != 0) {
                  UnityEngine_Transform__get_position(this.LIEHBGFFHFF,0);
                  if (cRam0000000001916e66 == '\0') {
                    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                    cRam0000000001916e66 = '\x01';
                  }
                  if (cRam0000000001916e68 == '\0') {
                    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                    cRam0000000001916e68 = '\x01';
                  }
                  if (cRam0000000001916e65 == '\0') {
                    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                    cRam0000000001916e65 = '\x01';
                  }
                  if (lVar5 != 0) {
                    NEON_fmov(0x40800000,4);
                    NEON_fmov(0xc0400000,4);
                    if (pcRam000000000191d4f8 == (code *)0x0) {
                      pcRam000000000191d4f8 = (code *)func_0x00a678c4(&UNK_005b14e9,0);
                    }
                    (*pcRam000000000191d4f8)
                              ((float)iVar1,0x42c80000,0,lVar5,&stack0xffffffffffffffb0,0);
                    return;
                  }
                }
              }
            }
          }
        }
LAB_00bd7198:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
  }
  return;
}


// ==== private void Update() { }   @0xad719c

/* WARNING: Removing unreachable block (ram,0x00bd8ae4) */
/* WARNING: Removing unreachable block (ram,0x00bd8af8) */
/* WARNING: Removing unreachable block (ram,0x00bd8b00) */
/* WARNING: Removing unreachable block (ram,0x00bd80d8) */
/* WARNING: Removing unreachable block (ram,0x00bd8058) */
/* WARNING: Removing unreachable block (ram,0x00bd8050) */
/* WARNING: Removing unreachable block (ram,0x00bd8204) */
/* WARNING: Removing unreachable block (ram,0x00bd7fb4) */
/* WARNING: Removing unreachable block (ram,0x00bd7fb8) */
/* WARNING: Removing unreachable block (ram,0x00bd80e0) */
/* WARNING: Removing unreachable block (ram,0x00bd8140) */
/* WARNING: Removing unreachable block (ram,0x00bd7fdc) */
/* WARNING: Removing unreachable block (ram,0x00bd8008) */
/* WARNING: Removing unreachable block (ram,0x00bd8010) */
/* WARNING: Removing unreachable block (ram,0x00bd8544) */
/* WARNING: Removing unreachable block (ram,0x00bd855c) */
/* WARNING: Removing unreachable block (ram,0x00bd8560) */
/* WARNING: Removing unreachable block (ram,0x00bd8564) */
/* WARNING: Removing unreachable block (ram,0x00bd8578) */
/* WARNING: Removing unreachable block (ram,0x00bd8580) */
/* WARNING: Removing unreachable block (ram,0x00bd8594) */
/* WARNING: Removing unreachable block (ram,0x00bd85a8) */
/* WARNING: Removing unreachable block (ram,0x00bd85b0) */
/* WARNING: Removing unreachable block (ram,0x00bd85c8) */
/* WARNING: Removing unreachable block (ram,0x00bd85d0) */
/* WARNING: Removing unreachable block (ram,0x00bd85dc) */
/* WARNING: Removing unreachable block (ram,0x00bd85f4) */
/* WARNING: Removing unreachable block (ram,0x00bd7878) */
/* WARNING: Removing unreachable block (ram,0x00bd853c) */
/* WARNING: Removing unreachable block (ram,0x00bd8adc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Zombie__Update(void *__this)

{
  int iVar1;
  bool bVar2;
  void *__this_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  undefined8 uVar9;
  long lVar10;
  float *pfVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float in_s2;
  float fVar21;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  void *pvStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  void *pvStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  void *pvStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  long in_stack_ffffffffffffffd8;
  
  if ((bRam0000000001916e05 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    func_0x00a67900(&Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Jump);
    func_0x00a67900(&Str_TankThrow);
    func_0x00a67900(&Str_ThrowBarrel);
    bRam0000000001916e05 = 1;
  }
  fVar15 = (float)UnityEngine_Time__get_timeScale(0);
  fVar18 = 1.0;
  if (fVar15 != 1.0) {
    return;
  }
  Zombie__LJLGIPJCHFC(__this,false);
  lVar13 = this.LIEHBGFFHFF;
  if (lVar13 == 0) {
LAB_00bd7a44:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  fVar15 = (float)UnityEngine_Transform__get_position(lVar13,0);
  if (this.LIEHBGFFHFF == 0) goto LAB_00bd7a44;
  fVar20 = fVar18;
  fVar21 = in_s2;
  fVar16 = (float)UnityEngine_Transform__get_forward(this.LIEHBGFFHFF,0);
  fVar24 = this.NBCLGLJCBAP;
  fVar17 = (float)UnityEngine_Time__get_deltaTime(0);
  in_s2 = in_s2 + fVar21 * fVar24 * fVar17;
  UnityEngine_Transform__set_position
            (fVar15 + fVar16 * fVar24 * fVar17,fVar18 + fVar20 * fVar24 * fVar17,lVar13,0);
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar14 = CarController.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (CarController.MKEGHDPIIFK != '\0') {
    return;
  }
  iVar1 = this.FHOFNGHGNGF;
  if (iVar1 == 9) {
    fVar15 = in_s2;
    if (this.DGEEAODMLBA == '\0') {
      if (this.LIEHBGFFHFF == 0) goto LAB_00bd7a44;
      UnityEngine_Transform__get_position(this.LIEHBGFFHFF,0);
      fVar18 = in_s2;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((CarController.KECGFPHIEHF == 0) ||
         (lVar13 = CarController.KECGFPHIEHF.BHDKJIINJNL, lVar13 == 0))
      goto LAB_00bd7a44;
      UnityEngine_Transform__get_position(lVar13,0);
      if (CarController.KECGFPHIEHF == 0) goto LAB_00bd7a44;
      fVar21 = (float)CarController__AGKGCILIANE(CarController.KECGFPHIEHF,0);
      fVar15 = 17.0;
      fVar20 = (fVar21 / 70.0) * 17.0 + 3.0;
      if (fVar21 / 70.0 < 0.0) {
        fVar20 = 3.0;
      }
      if (in_s2 - fVar18 < fVar20) {
        lVar13 = this.NFABKCAPLMG;
        this.DGEEAODMLBA = 1;
        this.NBCLGLJCBAP = 0x40800000;
        uVar14 = _Str_Jump;
        if (lVar13 != 0) {
          if (pcRam000000000191b598 == (code *)0x0) {
            pcRam000000000191b598 = (code *)func_0x00a678c4(&UNK_005a13ae,_Str_Jump,0xffffffff);
          }
          uVar19 = (*pcRam000000000191b598)(uVar14);
          if (pcRam000000000191b580 == (code *)0x0) {
            pcRam000000000191b580 = (code *)func_0x00a678c4(&UNK_005ae444);
          }
                    /* WARNING: Could not recover jumptable at 0x01462b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191b580)(0x3d4ccccd,0xff800000,0,lVar13,uVar19,0xffffffff);
          return;
        }
        goto LAB_00bd7a44;
      }
      if (this.DGEEAODMLBA == '\0') {
        return;
      }
    }
    if (this.JJBIDGDHLBH != '\0') {
      return;
    }
    if (this.LIEHBGFFHFF != 0) {
      UnityEngine_Transform__get_position(this.LIEHBGFFHFF,0);
      fVar18 = fVar15;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((CarController.KECGFPHIEHF != 0) &&
         (lVar13 = CarController.KECGFPHIEHF.BHDKJIINJNL, lVar13 != 0)) {
        UnityEngine_Transform__get_position(lVar13,0);
        if (5.0 <= fVar15 - fVar18) {
          return;
        }
        this.JJBIDGDHLBH = 1;
        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                  (__this,&stack0xffffffffffffffd8,
                   _Method_UnityEngine_Component_GetComponent_BoxCollider___);
        if (in_stack_ffffffffffffffd8 != 0) {
          UnityEngine_BoxCollider__get_size(in_stack_ffffffffffffffd8,0);
          UnityEngine_BoxCollider__set_size(in_stack_ffffffffffffffd8,0);
          UnityEngine_BoxCollider__get_center(in_stack_ffffffffffffffd8,0);
          UnityEngine_BoxCollider__set_center(0,in_stack_ffffffffffffffd8,0);
          return;
        }
      }
    }
    goto LAB_00bd7a44;
  }
  if (iVar1 != 6) {
    if (iVar1 != 1) {
      return;
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF == 0) goto LAB_00bd7a44;
    fVar15 = (float)CarController__AGKGCILIANE(CarController.KECGFPHIEHF,0);
    if (this.DGEEAODMLBA == '\0') {
      if (this.LIEHBGFFHFF == 0) goto LAB_00bd7a44;
      UnityEngine_Transform__get_position(this.LIEHBGFFHFF,0);
      fVar18 = in_s2;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((CarController.KECGFPHIEHF == 0) ||
         (lVar13 = CarController.KECGFPHIEHF.BHDKJIINJNL, lVar13 == 0))
      goto LAB_00bd7a44;
      fVar15 = (fVar15 / 70.0) * 20.0;
      if (fVar15 <= 10.0) {
        fVar15 = 10.0;
      }
      UnityEngine_Transform__get_position(lVar13,0);
      if (in_s2 - fVar18 < fVar15) {
        this.DGEEAODMLBA = 1;
        this.NBCLGLJCBAP = 0;
        if (this.NFABKCAPLMG == 0) goto LAB_00bd7a44;
        UnityEngine_Animator__CrossFade
                  (0x3e19999a,this.NFABKCAPLMG,_Str_ThrowBarrel,0);
LAB_00bd7980:
        uVar19 = UnityEngine_Time__get_time(0);
        this.PCAMLKIMMPM = uVar19;
        return;
      }
      if (this.DGEEAODMLBA == '\0') {
        return;
      }
    }
    if (this.JJBIDGDHLBH == '\0') {
      fVar18 = (float)UnityEngine_Time__get_time(0);
      fVar20 = this.PCAMLKIMMPM;
      fVar15 = 0.4;
      if (0.4 < fVar18 - fVar20) {
        this.JJBIDGDHLBH = 1;
        this.NBCLGLJCBAP = 0x3e800000;
        uVar14 = this.JIDEOGBJAOO;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          fVar15 = 0.4;
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar14,0,0);
        if ((uVar6 & 1) != 0) {
          if (this.JIDEOGBJAOO == 0) goto LAB_00bd7a44;
          UnityEngine_Collider__set_enabled(this.JIDEOGBJAOO,1,0);
          if (this.JIDEOGBJAOO == 0) goto LAB_00bd7a44;
          UnityEngine_Collider__set_isTrigger(this.JIDEOGBJAOO,1,0);
        }
        uVar14 = this.ABNPNOKAMEB;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar14,0,0);
        if ((uVar6 & 1) != 0) {
          if ((this.ABNPNOKAMEB == 0) ||
             (lVar13 = UnityEngine_GameObject__get_transform(this.ABNPNOKAMEB,0),
             lVar13 == 0)) goto LAB_00bd7a44;
          UnityEngine_Transform__set_parent(lVar13,0,0);
          if ((this.ABNPNOKAMEB == 0) ||
             (lVar13 = UnityEngine_GameObject__AddComponent_object_
                                 (this.ABNPNOKAMEB,
                                  _Method_UnityEngine_GameObject_AddComponent_Rigidbody___),
             lVar13 == 0)) goto LAB_00bd7a44;
          UnityEngine_Rigidbody__set_interpolation(lVar13,1,0);
          UnityEngine_Rigidbody__set_mass(0x41a00000,lVar13,0);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((CarController.KECGFPHIEHF == 0) ||
             (lVar7 = CarController.KECGFPHIEHF.BHDKJIINJNL, lVar7 == 0))
          goto LAB_00bd7a44;
          fVar18 = (float)UnityEngine_Transform__get_position(lVar7,0);
          if ((this.ABNPNOKAMEB == 0) ||
             (fVar21 = fVar20, fVar16 = fVar15,
             lVar7 = UnityEngine_GameObject__get_transform(this.ABNPNOKAMEB,0),
             lVar7 == 0)) goto LAB_00bd7a44;
          fVar17 = (float)UnityEngine_Transform__get_position(lVar7,0);
          if (cRam0000000001916aa5 == '\0') {
            func_0x00a67900(&System_Math_TypeInfo);
            cRam0000000001916aa5 = '\x01';
          }
          fVar18 = fVar18 - fVar17;
          fVar20 = fVar20 - fVar21;
          fVar15 = fVar15 - fVar16;
          if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          fVar21 = SQRT(fVar15 * fVar15 + fVar18 * fVar18 + fVar20 * fVar20);
          if (fVar21 <= 1e-05) {
            if (cRam0000000001916789 == '\0') {
              func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
              cRam0000000001916789 = '\x01';
            }
            pfVar11 = *(float **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
            fVar18 = *pfVar11;
            fVar20 = pfVar11[1];
            fVar15 = pfVar11[2];
          }
          else {
            fVar18 = fVar18 / fVar21;
            fVar20 = fVar20 / fVar21;
            fVar15 = fVar15 / fVar21;
          }
          UnityEngine_Rigidbody__AddForce(fVar18 * 300.0,fVar20 * 300.0,fVar15 * 300.0,lVar13,1,0);
        }
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((CarController.KECGFPHIEHF == 0) ||
           (lVar13 = CarController.KECGFPHIEHF.NEJKJHMFBMJ, lVar13 == 0))
        goto LAB_00bd7a44;
        *(undefined8 *)(lVar13 + 0x38) = this.LIEHBGFFHFF;
      }
    }
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (CarController.KECGFPHIEHF == 0) goto LAB_00bd7a44;
  fVar15 = (float)CarController__AGKGCILIANE(CarController.KECGFPHIEHF,0);
  fVar18 = 20.0;
  if (fVar15 <= 50.0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF == 0) goto LAB_00bd7a44;
    fVar15 = (float)CarController__AGKGCILIANE(CarController.KECGFPHIEHF,0);
    fVar18 = 30.0;
    if (30.0 < fVar15) {
      fVar18 = 24.0;
    }
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (CarController.KECGFPHIEHF == 0) goto LAB_00bd7a44;
  fVar15 = (float)CarController__AGKGCILIANE(CarController.KECGFPHIEHF,0);
  if (this.DGEEAODMLBA == '\0') {
    if (this.LIEHBGFFHFF == 0) goto LAB_00bd7a44;
    UnityEngine_Transform__get_position(this.LIEHBGFFHFF,0);
    fVar20 = in_s2;
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((CarController.KECGFPHIEHF == 0) ||
       (lVar13 = CarController.KECGFPHIEHF.BHDKJIINJNL, lVar13 == 0))
    goto LAB_00bd7a44;
    fVar18 = fVar18 * (fVar15 / 70.0);
    if (fVar18 <= 5.0) {
      fVar18 = 5.0;
    }
    UnityEngine_Transform__get_position(lVar13,0);
    if (in_s2 - fVar20 < fVar18) {
      if (this.NFABKCAPLMG != 0) {
        UnityEngine_Animator__CrossFade(0x3d4ccccd,this.NFABKCAPLMG,_Str_TankThrow,0);
        this.DGEEAODMLBA = 1;
        goto LAB_00bd7980;
      }
      goto LAB_00bd7a44;
    }
    if (this.DGEEAODMLBA == '\0') {
      return;
    }
  }
  if (this.JJBIDGDHLBH != '\0') {
    return;
  }
  fVar18 = (float)UnityEngine_Time__get_time(0);
  fVar15 = 0.9;
  if (fVar18 - this.PCAMLKIMMPM <= 0.9) {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    fVar15 = 0.9;
    func_0x00a67a30();
  }
  if (CarController.KECGFPHIEHF == 0) goto LAB_00bd7a44;
  lVar7 = CarController.KECGFPHIEHF.NEJKJHMFBMJ;
  lVar13 = UnityEngine_Component__get_gameObject(__this,0);
  if (lVar7 == 0) goto LAB_00bd7a44;
  lVar10 = this.LIEHBGFFHFF;
  if ((bRam0000000001916e62 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Zombie___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_Physics_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&string_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_EXTRA_STYLE_BONUS_2);
    func_0x00a67900(&Str_SPLATTER_BONUS);
    func_0x00a67900(&Str_ground);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str___x);
    func_0x00a67900(&Str_EXTRA_STYLE_BONUS);
    func_0x00a67900(&Str_Zombie_script_problem);
    bRam0000000001916e62 = 1;
  }
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Equality(lVar13,0,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (lVar13 == 0) goto LAB_00bd8c10;
  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
            (lVar13,&pvStack_100,_Method_UnityEngine_GameObject_GetComponent_Zombie___);
  __this_00 = pvStack_100;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Equality(__this_00,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__EEKNCFLMGDP(_Str_Zombie_script_problem,0);
    return;
  }
  if (__this_00 == (void *)0x0) goto LAB_00bd8c10;
  iVar1 = *(int *)((long)__this_00 + 0x30);
  if (iVar1 == 6) {
    if (lVar10 == 0) goto LAB_00bd8c10;
    UnityEngine_Transform__get_position(lVar10,0);
    CarCollision__NDLJJLDOHIA(lVar7,0);
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    SoundScript__GIGBLEBBIEK(SoundScript.LGDEFJKJLJD,0);
    if ((*(long *)(lVar7 + 0x20) == 0) ||
       (pvVar8 = *(void **)(*(long *)(lVar7 + 0x20) + 0x28), pvVar8 == (void *)0x0))
    goto LAB_00bd8c10;
    pvVar8 = CarCamera__OIKFBMHJDBN(pvVar8);
    UnityEngine_MonoBehaviour__StartCoroutine(lVar7,pvVar8,0);
    goto LAB_00bd80d4;
  }
  switch(iVar1) {
  case 1:
    uVar14 = *(undefined8 *)((long)__this_00 + 0x98);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar6 & 1) != 0) {
      if (lVar10 == 0) goto LAB_00bd8c10;
      UnityEngine_Transform__get_position(lVar10,0);
      CarCollision__NDLJJLDOHIA(lVar7,0);
      if (*(long *)(lVar7 + 0x20) == 0) goto LAB_00bd8c10;
      if (*(char *)(*(long *)(lVar7 + 0x20) + 0x3c9) == '\0') {
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        SoundScript__GIGBLEBBIEK(SoundScript.LGDEFJKJLJD,0);
      }
      uVar14 = *(undefined8 *)((long)__this_00 + 0x98);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      UnityEngine_Object__Destroy(uVar14,0);
    }
    break;
  case 3:
  case 8:
    goto LAB_00bd82a4;
  case 4:
    if (lVar10 == 0) goto LAB_00bd8c10;
    UnityEngine_Transform__get_position(lVar10,0);
    CarCollision__NDLJJLDOHIA(lVar7,0);
    lVar12 = *(long *)(lVar7 + 0x20);
    if (lVar12 == 0) goto LAB_00bd8c10;
    if (*(char *)(lVar12 + 0x3c9) == '\0') {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      SoundScript__GIGBLEBBIEK(SoundScript.LGDEFJKJLJD,0);
      lVar12 = *(long *)(lVar7 + 0x20);
      if (lVar12 == 0) goto LAB_00bd8c10;
    }
    if (*(void **)(lVar12 + 0x28) == (void *)0x0) goto LAB_00bd8c10;
    pvVar8 = CarCamera__OIKFBMHJDBN(*(void **)(lVar12 + 0x28));
    UnityEngine_MonoBehaviour__StartCoroutine(lVar7,pvVar8,0);
    goto LAB_00bd82a4;
  case 7:
    Zombie__HMEFLNGHPDI(__this_00);
  }
LAB_00bd80d4:
LAB_00bd82a4:
  if (*(long *)(lVar7 + 0x20) == 0) goto LAB_00bd8c10;
  fVar20 = (float)CarController__AGKGCILIANE(*(long *)(lVar7 + 0x20),0);
  fVar18 = 25.0;
  if (fVar20 <= 25.0) {
LAB_00bd82f0:
    if (iVar1 != 6) goto LAB_00bd834c;
LAB_00bd82fc:
    uVar14 = 1;
  }
  else {
    fVar18 = 25.0;
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      fVar18 = 25.0;
      func_0x00a67a30();
    }
    lVar12 = CarController.KECGFPHIEHF;
    if (lVar12 == 0) goto LAB_00bd8c10;
    if (*(char *)(lVar12 + 0x3c8) != '\0') goto LAB_00bd82f0;
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar12 = CarController.KECGFPHIEHF;
      if (lVar12 == 0) goto LAB_00bd8c10;
    }
    lVar12 = *(long *)(lVar12 + 0x520);
    if (lVar12 == 0) goto LAB_00bd8c10;
    if (*(int *)(lVar12 + 0x18) == 0) goto LAB_00bd8c14;
    if (*(long *)(lVar12 + 0x20) == 0) goto LAB_00bd8c10;
    if ((iVar1 == 6) || (*(char *)(*(long *)(lVar12 + 0x20) + 0x50) != '\0')) goto LAB_00bd82fc;
LAB_00bd834c:
    uVar14 = 0;
  }
  CarCollision__ELLMIFLLMNM(lVar7,*(undefined4 *)((long)__this_00 + 0x34),lVar10,uVar14);
  if (lVar10 == 0) goto LAB_00bd8c10;
  fVar16 = (float)UnityEngine_Transform__get_position(lVar10,0);
  fVar20 = fVar18;
  fVar21 = fVar15;
  fVar17 = (float)UnityEngine_Transform__get_up(lVar10,0);
  fVar24 = *(float *)((long)__this_00 + 0x84);
  uVar6 = (ulong)(uint)(fVar20 * fVar24);
  uVar22 = (ulong)(uint)(fVar21 * fVar24);
  uVar23 = (ulong)(uint)(fVar15 + fVar21 * fVar24);
  uVar14 = UnityEngine_RaycastHit__get_normal((long)__this_00 + 0x3c,0);
  CarCollision__EJHCIMAAIKB
            (fVar16 + fVar17 * fVar24,fVar18 + fVar20 * fVar24,uVar23,uVar14,uVar6,uVar22,lVar7,1);
  if (*(long *)(lVar7 + 0x20) == 0) goto LAB_00bd8c10;
  uVar14 = *(undefined8 *)(*(long *)(lVar7 + 0x20) + 0x480);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  if ((uVar6 & 1) != 0) {
    if ((*(long *)(lVar7 + 0x20) == 0) ||
       (lVar10 = *(long *)(*(long *)(lVar7 + 0x20) + 0x480), lVar10 == 0)) goto LAB_00bd8c10;
    UnityEngine_ParticleSystem__Play(lVar10,0);
  }
  if (*(long *)(lVar7 + 0x20) == 0) goto LAB_00bd8c10;
  fVar15 = (float)CarController__AGKGCILIANE(*(long *)(lVar7 + 0x20),0);
  fVar18 = (float)*(int *)(lVar7 + 0x68);
  if (fVar15 <= fVar18) {
LAB_00bd861c:
    uVar6 = (ulong)(uint)fVar18;
    iVar4 = 5;
  }
  else {
    fVar15 = (float)UnityEngine_Time__get_time(0);
    fVar18 = *(float *)(lVar7 + 0x6c);
    if (fVar15 <= fVar18) goto LAB_00bd861c;
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    SoundScript__FIGKLLNAMLG(SoundScript.AIDAFCHLFPO,0);
    fVar15 = (float)UnityEngine_Time__get_time(0);
    uVar6 = 0x41000000;
    *(float *)(lVar7 + 0x6c) = fVar15 + 8.0;
    if (*(long *)(lVar7 + 0x20) == 0) goto LAB_00bd8c10;
    lVar10 = *(long *)(*(long *)(lVar7 + 0x20) + 0x30);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Translate.KECGFPHIEHF == 0) ||
       (uVar14 = Translate__JJJNIPAKLJF
                           (Translate.KECGFPHIEHF,_Str_SPLATTER_BONUS,0),
       lVar10 == 0)) goto LAB_00bd8c10;
    GUIGameplay__HNKHJLDJMHB(lVar10,uVar14,0,0,1,0);
    if ((*(long *)(lVar7 + 0x20) == 0) ||
       (lVar10 = *(long *)(*(long *)(lVar7 + 0x20) + 0x30), lVar10 == 0)) goto LAB_00bd8c10;
    GUIGameplay__HNKHJLDJMHB(lVar10,**(undefined8 **)(_string_TypeInfo + 0xb8),4,0,0,0);
    iVar4 = 10;
  }
  lVar10 = *(long *)(lVar7 + 0x20);
  if (lVar10 == 0) goto LAB_00bd8c10;
  if (*(char *)(lVar10 + 0x3c8) != '\0') goto LAB_00bd8864;
  lVar12 = *(long *)(lVar10 + 0x520);
  if (lVar12 == 0) goto LAB_00bd8c10;
  if (*(uint *)(lVar12 + 0x18) == 0) {
LAB_00bd8c14:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  if (*(long *)(lVar12 + 0x20) == 0) goto LAB_00bd8c10;
  if (*(char *)(*(long *)(lVar12 + 0x20) + 0x50) != '\0') goto LAB_00bd8864;
  if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_00bd8c14;
  if (*(long *)(lVar12 + 0x30) == 0) goto LAB_00bd8c10;
  if (*(char *)(*(long *)(lVar12 + 0x30) + 0x50) != '\0') goto LAB_00bd8864;
  if (*(long *)(lVar10 + 0x38) == 0) goto LAB_00bd8c10;
  uVar14 = UnityEngine_Transform__get_position(*(long *)(lVar10 + 0x38),0);
  if (cRam0000000001916e68 == '\0') {
    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
    cRam0000000001916e68 = '\x01';
  }
  lVar10 = UnityEngine_Vector3.<statics>;
  fVar15 = *(float *)(lVar10 + 0x18);
  fVar18 = *(float *)(lVar10 + 0x1c);
  fVar20 = *(float *)(lVar10 + 0x20);
  uVar3 = UnityEngine_LayerMask__NameToLayer(_Str_ground,0);
  if (*(int *)(_UnityEngine_Physics_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Physics_TypeInfo);
  }
  uVar6 = UnityEngine_Physics__Raycast
                    (uVar14,uVar6,uVar23,-fVar15,-fVar18,-fVar20,0x40a00000,&uStack_c0,
                     1 << (ulong)(uVar3 & 0x1f),0);
  if ((uVar6 & 1) == 0) {
LAB_00bd8864:
    bVar2 = false;
  }
  else {
    fVar15 = (float)UnityEngine_RaycastHit__get_distance(&uStack_c0,0);
    fVar18 = 0.4;
    if (iVar1 != 2) {
      fVar18 = 0.0;
    }
    if (fVar15 <= *(float *)(lVar7 + 0x88) - fVar18) goto LAB_00bd8864;
    fVar15 = (float)UnityEngine_Time__get_time(0);
    if (0.5 <= fVar15 - *(float *)(lVar7 + 0x84)) {
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&pvStack_120,1,0);
      uStack_f0 = uStack_110;
      uStack_f8 = uStack_118;
      pvStack_100 = pvStack_120;
      *(undefined4 *)(lVar7 + 0x80) = uStack_110;
      *(undefined8 *)(lVar7 + 0x78) = uStack_118;
      *(void **)(lVar7 + 0x70) = pvStack_120;
      if (*(long *)(lVar7 + 0x20) == 0) goto LAB_00bd8c10;
      lVar10 = *(long *)(*(long *)(lVar7 + 0x20) + 0x30);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Translate.KECGFPHIEHF == 0) ||
         (uVar14 = Translate__JJJNIPAKLJF
                             (Translate.KECGFPHIEHF,_Str_EXTRA_STYLE_BONUS,0),
         lVar10 == 0)) goto LAB_00bd8c10;
      uVar9 = 0;
    }
    else {
      uStack_130 = *(undefined4 *)(lVar7 + 0x80);
      uStack_138 = *(undefined8 *)(lVar7 + 0x78);
      uStack_140 = *(undefined8 *)(lVar7 + 0x70);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Increment(&pvStack_120,&uStack_140,0);
      uStack_f0 = uStack_110;
      uStack_f8 = uStack_118;
      pvStack_100 = pvStack_120;
      *(undefined4 *)(lVar7 + 0x80) = uStack_110;
      *(undefined8 *)(lVar7 + 0x78) = uStack_118;
      *(void **)(lVar7 + 0x70) = pvStack_120;
      if (*(long *)(lVar7 + 0x20) == 0) goto LAB_00bd8c10;
      lVar10 = *(long *)(*(long *)(lVar7 + 0x20) + 0x30);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Translate.KECGFPHIEHF == 0) goto LAB_00bd8c10;
      uVar14 = Translate__JJJNIPAKLJF
                         (Translate.KECGFPHIEHF,_Str_EXTRA_STYLE_BONUS,0);
      uStack_d8 = *(undefined8 *)(lVar7 + 0x78);
      uStack_e0 = *(undefined8 *)(lVar7 + 0x70);
      uStack_d0 = *(undefined4 *)(lVar7 + 0x80);
      uVar9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(&uStack_e0,0);
      uVar14 = System_String__Concat(uVar14,_Str___x,uVar9,_Str__,0);
      if (lVar10 == 0) goto LAB_00bd8c10;
      uVar9 = 1;
    }
    GUIGameplay__HNKHJLDJMHB(lVar10,uVar14,0,uVar9,0,0);
    uStack_150 = *(undefined4 *)(lVar7 + 0x80);
    uStack_158 = *(undefined8 *)(lVar7 + 0x78);
    uStack_160 = *(undefined8 *)(lVar7 + 0x70);
    iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_160,0);
    iVar4 = iVar5 * 5 + iVar4;
    uVar19 = UnityEngine_Time__get_time(0);
    bVar2 = true;
    *(undefined4 *)(lVar7 + 0x84) = uVar19;
  }
  iVar5 = CarCollision__EKCHOFEOEKM(lVar7);
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (CarController.MKEGHDPIIFK == '\0') {
    lVar10 = *(long *)(lVar7 + 0x20);
    if (lVar10 == 0) goto LAB_00bd8c10;
    uStack_170 = *(undefined4 *)(lVar10 + 0x23c);
    uStack_178 = *(undefined8 *)(lVar10 + 0x234);
    uStack_180 = *(undefined8 *)(lVar10 + 0x22c);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Increment(&pvStack_120,&uStack_180,0);
    uStack_f0 = uStack_110;
    uStack_f8 = uStack_118;
    pvStack_100 = pvStack_120;
    *(undefined4 *)(lVar10 + 0x23c) = uStack_110;
    *(undefined8 *)(lVar10 + 0x234) = uStack_118;
    *(undefined8 *)(lVar10 + 0x22c) = pvStack_120;
    if (*(void **)(lVar7 + 0x20) == (void *)0x0) goto LAB_00bd8c10;
    CarController__IKOEIGDJPEK(*(void **)(lVar7 + 0x20),iVar5 + iVar4,false);
    lVar10 = *(long *)(lVar7 + 0x20);
    if (lVar10 == 0) goto LAB_00bd8c10;
    uStack_190 = *(undefined4 *)(lVar10 + 0x88);
    uStack_198 = *(undefined8 *)(lVar10 + 0x80);
    uStack_1a0 = *(undefined8 *)(lVar10 + 0x78);
    iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_1a0,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit
              (&pvStack_1b8,*(int *)((long)__this_00 + 0x2c) + iVar4,0);
    uStack_110 = uStack_1a8;
    uStack_118 = uStack_1b0;
    pvStack_120 = pvStack_1b8;
    *(undefined4 *)(lVar10 + 0x88) = uStack_1a8;
    *(undefined8 *)(lVar10 + 0x80) = uStack_1b0;
    *(void **)(lVar10 + 0x78) = pvStack_1b8;
    if (bVar2) goto LAB_00bd8964;
    if (iVar1 != 1) {
LAB_00bd8a34:
      if (*(long *)(lVar7 + 0x20) == 0) goto LAB_00bd8c10;
      CarController__EKOHIKFFBFC
                (*(long *)(lVar7 + 0x20),*(undefined4 *)((long)__this_00 + 0x28),1,0);
      goto LAB_00bd8964;
    }
    uVar14 = *(undefined8 *)((long)__this_00 + 0x98);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar14,0,0);
    if ((uVar6 & 1) == 0) goto LAB_00bd8a34;
    if (*(long *)(lVar7 + 0x20) == 0) goto LAB_00bd8c10;
    CarController__EKOHIKFFBFC(*(long *)(lVar7 + 0x20),*(int *)((long)__this_00 + 0x28) / 5,1,0);
  }
  else {
LAB_00bd8964:
    if ((iVar1 == 8) || (iVar1 == 3)) {
      if (*(long *)(lVar7 + 0x20) == 0) goto LAB_00bd8c10;
      uVar14 = *(undefined8 *)(*(long *)(lVar7 + 0x20) + 0x3a8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar14,0,0);
      if ((uVar6 & 1) != 0) {
        if ((*(long *)(lVar7 + 0x20) == 0) ||
           (lVar10 = *(long *)(*(long *)(lVar7 + 0x20) + 0x3a8), lVar10 == 0)) goto LAB_00bd8c10;
        UnityEngine_ParticleSystem__Play(lVar10,0);
        if (*(long *)(lVar7 + 0x20) == 0) goto LAB_00bd8c10;
        CarController__KIPCFFHJBPB(*(long *)(lVar7 + 0x20),0);
      }
    }
  }
  if (*(long *)(lVar7 + 0x20) != 0) {
    if (*(char *)(*(long *)(lVar7 + 0x20) + 0x3c9) == '\0') {
      iVar1 = *(int *)((long)__this_00 + 0x34);
      if (iVar1 == 9) {
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        SoundScript__NEOEGHNJJNF(0);
      }
      else {
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (iVar1 == 10) {
          SoundScript__ONLLENOAJLH(0);
        }
        else {
          SoundScript__FJCLBOAMFFN(0);
        }
      }
    }
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Object__Destroy(lVar13,0);
    return;
  }
LAB_00bd8c10:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void LJLGIPJCHFC(bool LPGJFJBOIHE) { }   @0xad7a48

/* WARNING: Removing unreachable block (ram,0x00bd7d44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Zombie__LJLGIPJCHFC(void *__this,bool LPGJFJBOIHE)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float in_s1;
  undefined8 uVar7;
  float in_s2;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((bRam0000000001916e06 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Physics_TypeInfo);
    func_0x00a67900(&Str___error_);
    bRam0000000001916e06 = 1;
  }
  if (this.LIEHBGFFHFF != 0) {
    fVar5 = (float)UnityEngine_Transform__get_up(this.LIEHBGFFHFF,0);
    if (this.LIEHBGFFHFF != 0) {
      fVar10 = in_s1;
      fVar11 = in_s2;
      fVar6 = (float)UnityEngine_Transform__get_position(this.LIEHBGFFHFF,0);
      lVar3 = &this.IJEOCIBFOHB;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = CarController.GGDLOPNIKOB;
      fVar10 = in_s1 * 0.3 + fVar10;
      fVar11 = in_s2 * 0.3 + fVar11;
      if (*(int *)(_UnityEngine_Physics_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Physics_TypeInfo);
      }
      uVar2 = UnityEngine_Physics__Raycast
                        (fVar5 * 0.3 + fVar6,fVar10,fVar11,-fVar5,-in_s1,-in_s2,0x41200000,lVar3,
                         1 << (ulong)(uVar1 & 0x1f),0);
      if ((uVar2 & 1) == 0) {
        if (LPGJFJBOIHE) {
          return;
        }
        lVar3 = this.LIEHBGFFHFF;
        if (lVar3 != 0) {
          uVar9 = UnityEngine_Object__get_name(lVar3,0);
          uVar9 = System_String__Concat(_Str___error_,uVar9,0);
          UnityEngine_Object__set_name(lVar3,uVar9,0);
          if (pcRam000000000191c328 == (code *)0x0) {
            pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
          }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191c328)(__this,0);
          return;
        }
      }
      else {
        lVar4 = this.LIEHBGFFHFF;
        fVar6 = (float)UnityEngine_RaycastHit__get_point(lVar3,0);
        if (lVar4 != 0) {
          fVar8 = this.MDDKLMGCHML;
          UnityEngine_Transform__set_position
                    (fVar6 + fVar5 * fVar8,fVar10 + in_s1 * fVar8,fVar11 + in_s2 * fVar8,lVar4,0);
          if (10 < this.FHOFNGHGNGF) {
            return;
          }
          if ((1 << (ulong)(this.FHOFNGHGNGF & 0x1f) & 0x41cU) == 0) {
            return;
          }
          fVar5 = this.NOEIMOPFFND;
          uVar9 = *(undefined8 *)((long)__this + 0x6c);
          if (cRam0000000001916789 == '\0') {
            func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
            cRam0000000001916789 = '\x01';
          }
          uVar7 = *(undefined8 *)(*(float **)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 1);
          fVar6 = 9.9999994e-11;
          fVar5 = fVar5 - **(float **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
          fVar10 = (float)uVar9 - (float)uVar7;
          fVar11 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar7 >> 0x20);
          fVar11 = fVar11 * fVar11;
          if (9.9999994e-11 <= fVar11 + fVar5 * fVar5 + fVar10 * fVar10) {
            fVar8 = this.NOEIMOPFFND;
            fVar12 = *(float *)((long)__this + 0x6c);
            fVar13 = *(float *)((long)__this + 0x70);
            fVar5 = (float)UnityEngine_RaycastHit__get_normal(lVar3,0);
            fVar10 = (float)UnityEngine_Time__get_deltaTime(0);
            fVar10 = fVar10 * (float)this.AGFPLMAAMKG;
            if (fVar10 < 0.0) {
              fVar10 = 0.0;
            }
            fVar8 = fVar8 + (fVar5 - fVar8) * fVar10;
            fVar11 = fVar12 + (fVar11 - fVar12) * fVar10;
            fVar6 = fVar13 + (fVar6 - fVar13) * fVar10;
          }
          else {
            fVar8 = (float)UnityEngine_RaycastHit__get_normal(lVar3,0);
          }
          lVar3 = this.LIEHBGFFHFF;
          this.NOEIMOPFFND = fVar8;
          *(float *)((long)__this + 0x6c) = fVar11;
          *(float *)((long)__this + 0x70) = fVar6;
          if (lVar3 != 0) {
            UnityEngine_Transform__get_right(lVar3,0);
            UnityEngine_Quaternion__LookRotation
                      (fVar11 * *(float *)((long)__this + 0x70) -
                       fVar6 * *(float *)((long)__this + 0x6c),lVar3,0);
            if (pcRam000000000191c8a0 == (code *)0x0) {
              pcRam000000000191c8a0 = (code *)func_0x00a678c4(&UNK_005b89bb);
            }
            (*pcRam000000000191c8a0)(lVar3,&stack0xffffffffffffffd0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



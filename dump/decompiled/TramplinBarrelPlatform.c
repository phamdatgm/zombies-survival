/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class TramplinBarrelPlatform : MonoBehaviour // TypeDefIndex: 5265
{
	// Fields
	public TramplinBarrel MAAIDMGLMAD; // 0x20
	public Transform PGBNDEOPBEH; // 0x28
	private Vector3 NCGFBDBFEOO; // 0x30
	public int HKNEBOHOKCI; // 0x3C
	private float DIDHMFHPPBF; // 0x40
	private bool PCLEHDHHBIN; // 0x44
	public Transform IDLKGCBIGEB; // 0x48
	private float DGCPHHKOBIF; // 0x50
	public Transform APLIHFFEANG; // 0x58

	// Methods

	public void LNNIKMAEIEI() { }

	private void Update() { }

	private void Start() { }

	public void BPABDCCIAGL(int DBHAEOFNOKO) { }

	public void .ctor() { }

	private void OnCollisionEnter(Collision PNKAOOKHBAI) { }
}
*/

// ==== public void LNNIKMAEIEI() { }   @0xb51b5c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TramplinBarrelPlatform__LNNIKMAEIEI(void *__this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  float in_s1;
  float fVar4;
  
  lVar2 = this.IDLKGCBIGEB;
  if (lVar2 != 0) {
    uVar3 = UnityEngine_Transform__get_position(lVar2,0);
    if (this.IDLKGCBIGEB != 0) {
      UnityEngine_Transform__get_position(this.IDLKGCBIGEB,0);
      if (this.APLIHFFEANG != 0) {
        fVar4 = in_s1;
        UnityEngine_Transform__get_position(this.APLIHFFEANG,0);
        if (this.IDLKGCBIGEB != 0) {
          UnityEngine_Transform__get_position(this.IDLKGCBIGEB,0);
          UnityEngine_Transform__set_position(uVar3,(in_s1 + fVar4) / 2.5,lVar2,0);
          iVar1 = this.HKNEBOHOKCI;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          this.HKNEBOHOKCI = iVar1 >> 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Update() { }   @0xb51c08

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TramplinBarrelPlatform__Update(void *__this)

{
  long lVar1;
  float in_s1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  int iVar8;
  
  lVar1 = this.IDLKGCBIGEB;
  if (this.PCLEHDHHBIN == '\0') {
    if (lVar1 == 0) {
LAB_00c51dac:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    UnityEngine_Transform__get_position(lVar1,0);
    if (this.APLIHFFEANG == 0) goto LAB_00c51dac;
    fVar5 = in_s1;
    UnityEngine_Transform__get_position(this.APLIHFFEANG,0);
    if (in_s1 <= fVar5) {
      UnityEngine_Behaviour__set_enabled(__this,0,0);
      goto LAB_00c51d58;
    }
    lVar1 = this.PGBNDEOPBEH;
    if (cRam0000000001916e66 == '\0') {
      func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
      cRam0000000001916e66 = '\x01';
    }
    iVar8 = this.HKNEBOHOKCI;
    uVar6 = *(undefined8 *)(UnityEngine_Vector3.<statics> + 0x3c);
    fVar7 = *(float *)(UnityEngine_Vector3.<statics> + 0x44);
    fVar5 = (float)UnityEngine_Time__get_deltaTime(0);
    if (lVar1 == 0) goto LAB_00c51dac;
    fVar3 = -20.0;
    uVar4 = NEON_fmov(0xc1a00000,4);
  }
  else {
    if (lVar1 == 0) goto LAB_00c51dac;
    fVar5 = this.DGCPHHKOBIF;
    UnityEngine_Transform__get_position(lVar1,0);
    if (fVar5 <= in_s1) goto LAB_00c51d58;
    lVar1 = this.PGBNDEOPBEH;
    if (cRam0000000001916e66 == '\0') {
      func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
      cRam0000000001916e66 = '\x01';
    }
    iVar8 = this.HKNEBOHOKCI;
    uVar6 = *(undefined8 *)(UnityEngine_Vector3.<statics> + 0x3c);
    fVar7 = *(float *)(UnityEngine_Vector3.<statics> + 0x44);
    fVar5 = (float)UnityEngine_Time__get_deltaTime(0);
    if (lVar1 == 0) goto LAB_00c51dac;
    fVar3 = 10.0;
    uVar4 = NEON_fmov(0x41200000,4);
  }
  fVar2 = (float)iVar8;
  UnityEngine_Transform__Rotate
            ((float)uVar6 * fVar2 * (float)uVar4 * fVar5,
             (float)((ulong)uVar6 >> 0x20) * fVar2 * (float)((ulong)uVar4 >> 0x20) * fVar5,
             fVar5 * fVar7 * fVar2 * fVar3,lVar1,0);
LAB_00c51d58:
  fVar7 = this.DIDHMFHPPBF;
  fVar5 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar7 = fVar7 + fVar5;
  this.DIDHMFHPPBF = fVar7;
  if (3.0 < fVar7) {
    if (pcRam000000000191c328 == (code *)0x0) {
      pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
    }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c328)(__this,0);
    return;
  }
  return;
}


// ==== private void Start() { }   @0xb51db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TramplinBarrelPlatform__Start(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  float in_s1;
  float in_s2;
  
  if ((bRam0000000001917194 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Tramplin_error_2_);
    bRam0000000001917194 = 1;
  }
  uVar2 = this.MAAIDMGLMAD;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__EEKNCFLMGDP(_Str_Tramplin_error_2_,0);
    UnityEngine_Behaviour__set_enabled(__this,0,0);
  }
  else {
    if (this.MAAIDMGLMAD == 0) goto LAB_00c51ed4;
    if (this.MAAIDMGLMAD.KPCMPKFIJDA == 2) {
      if (this.IDLKGCBIGEB == 0) goto LAB_00c51ed4;
      UnityEngine_Transform__get_position(this.IDLKGCBIGEB,0);
      this.DGCPHHKOBIF = in_s1;
    }
  }
  if (this.PGBNDEOPBEH != 0) {
    UnityEngine_Transform__get_localRotation(this.PGBNDEOPBEH,0);
    fVar3 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(0);
    in_s1 = in_s1 * 57.29578;
    in_s2 = in_s2 * 57.29578;
    uVar4 = UnityEngine_Quaternion__Internal_MakePositive(fVar3 * 57.29578,0);
    this.NCGFBDBFEOO = uVar4;
    *(float *)((long)__this + 0x34) = in_s1;
    *(float *)((long)__this + 0x38) = in_s2;
    return;
  }
LAB_00c51ed4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void BPABDCCIAGL(int DBHAEOFNOKO) { }   @0xb51ed8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TramplinBarrelPlatform__BPABDCCIAGL(void *__this,int DBHAEOFNOKO)

{
  long lVar1;
  float fVar2;
  float in_s1;
  float in_s2;
  undefined4 uVar3;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  if (this.PGBNDEOPBEH != 0) {
    UnityEngine_Transform__get_rotation(this.PGBNDEOPBEH,0);
    fVar2 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(0);
    in_s1 = in_s1 * 57.29578;
    in_s2 = in_s2 * 57.29578;
    fVar2 = (float)UnityEngine_Quaternion__Internal_MakePositive(fVar2 * 57.29578,0);
    uVar3 = 0x3c8efa35;
    lVar1 = this.PGBNDEOPBEH;
    in_s1 = in_s1 * 0.017453292;
    in_s2 = in_s2 * 0.017453292;
    uStack_30 = UnityEngine_Quaternion__Internal_FromEulerRad
                          ((fVar2 - (float)DBHAEOFNOKO) * 0.017453292,0);
    if (lVar1 != 0) {
      fStack_2c = in_s1;
      fStack_28 = in_s2;
      uStack_24 = uVar3;
      if (pcRam000000000191c8a0 == (code *)0x0) {
        pcRam000000000191c8a0 = (code *)func_0x00a678c4(&UNK_005b89bb,0);
      }
      (*pcRam000000000191c8a0)(lVar1,&uStack_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb51f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TramplinBarrelPlatform___ctor(void *__this)

{
  this.HKNEBOHOKCI = 3;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== private void OnCollisionEnter(Collision PNKAOOKHBAI) { }   @0xb51f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TramplinBarrelPlatform__OnCollisionEnter(void *__this,void *PNKAOOKHBAI)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if ((bRam0000000001917195 & 1) == 0) {
    func_0x00a67900(&Str_car);
    bRam0000000001917195 = 1;
  }
  if (this.MAAIDMGLMAD != 0) {
    if (this.MAAIDMGLMAD.KPCMPKFIJDA == 2) {
      if ((PNKAOOKHBAI == (void *)0x0) ||
         (lVar3 = UnityEngine_Collision__get_gameObject(PNKAOOKHBAI,0), lVar3 == 0))
      goto LAB_00c52008;
      iVar1 = UnityEngine_GameObject__get_layer(lVar3,0);
      iVar2 = UnityEngine_LayerMask__NameToLayer(_Str_car,0);
      if (iVar1 == iVar2) {
        this.PCLEHDHHBIN = 1;
      }
    }
    return;
  }
LAB_00c52008:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



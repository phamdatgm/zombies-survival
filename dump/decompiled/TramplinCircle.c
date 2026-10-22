/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class TramplinCircle : MonoBehaviour // TypeDefIndex: 5168
{
	// Fields
	public int KPCMPKFIJDA; // 0x20
	public Transform KCNPGOJGCIE; // 0x28
	public GameObject ANAELILPEOF; // 0x30
	public Transform BLKHKILOPDL; // 0x38
	private float DIDHMFHPPBF; // 0x40
	private float DHFFBFFPOFN; // 0x44

	// Methods

	private void Update() { }

	public void MPLPGOBGOJA() { }

	public void .ctor() { }
}
*/

// ==== private void Update() { }   @0xb194a0

/* WARNING: Removing unreachable block (ram,0x00c19540) */
/* WARNING: Removing unreachable block (ram,0x00c19584) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TramplinCircle__Update(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  
  if ((bRam0000000001916fd9 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916fd9 = 1;
  }
  uVar2 = this.KCNPGOJGCIE;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    fVar4 = this.DIDHMFHPPBF;
    fVar5 = this.DHFFBFFPOFN;
    if (fVar5 < fVar4) {
      if (this.KPCMPKFIJDA == 2) {
        lVar3 = this.KCNPGOJGCIE;
        fVar7 = ((fVar4 - fVar5) * -96.3 + 47.5) * 0.017453292;
        if (fVar4 - fVar5 < 0.0) {
          fVar7 = 0.8290314;
        }
        uVar6 = 0x3fc90fdb;
        fVar4 = 0.0;
      }
      else {
        if (this.KPCMPKFIJDA != 1) goto LAB_00c195d4;
        fVar5 = (fVar4 - fVar5) * 3.0;
        lVar3 = this.KCNPGOJGCIE;
        fVar4 = (fVar5 * 90.0 + 0.0) * 0.017453292;
        if (fVar5 < 0.0) {
          fVar4 = 0.0;
        }
        uVar6 = 0;
        fVar7 = 0.0;
      }
      UnityEngine_Quaternion__Internal_FromEulerRad(fVar4,uVar6,fVar7,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      UnityEngine_Transform__set_rotation(lVar3,0);
    }
  }
LAB_00c195d4:
  fVar5 = this.DIDHMFHPPBF;
  fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar5 = fVar5 + fVar4;
  this.DIDHMFHPPBF = fVar5;
  if (fVar5 <= 2.0) {
    return;
  }
  if (pcRam000000000191c328 == (code *)0x0) {
    pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
  }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c328)(__this,0);
  return;
}


// ==== public void MPLPGOBGOJA() { }   @0xb19624

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TramplinCircle__MPLPGOBGOJA(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000001916fda & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001916fda = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = CarController.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((CarController.KECGFPHIEHF != 0) && (this.BLKHKILOPDL != 0))
    {
      lVar3 = CarController.KECGFPHIEHF.NEJKJHMFBMJ;
      UnityEngine_Transform__get_position(this.BLKHKILOPDL,0);
      if (lVar3 != 0) {
        CarCollision__NDLJJLDOHIA(lVar3,0,0);
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        SoundScript__GIGBLEBBIEK(SoundScript.LGDEFJKJLJD,0);
        goto LAB_00c19734;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
LAB_00c19734:
  UnityEngine_Behaviour__set_enabled(__this,1,0);
  uVar2 = this.ANAELILPEOF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
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
  (*pcRam000000000191c510)(0,uVar2);
  return;
}


// ==== public void .ctor() { }   @0xb19774

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TramplinCircle___ctor(void *__this)

{
  this.KPCMPKFIJDA = 1;
  this.DHFFBFFPOFN = 0x3d4ccccd;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class objDestructorTrail : MonoBehaviour // TypeDefIndex: 5100
{
	// Fields
	public float ACBDHBLLEEK; // 0x20
	private float CNAGLGLEJMC; // 0x24
	public Transform LIEHBGFFHFF; // 0x28
	public Rigidbody NIIFDMDCOCF; // 0x30
	private Vector3 ECLAFDPIDLP; // 0x38

	// Methods

	public void .ctor() { }

	public void EPHPBNKKJLE(Vector3 EDPJENMOOGC, Vector3 PACCGKKFCDM) { }

	private void Update() { }
}
*/

// ==== public void .ctor() { }   @0xaf3164

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void objDestructorTrail___ctor(void *__this)

{
  this.ACBDHBLLEEK = 0x3ecccccd;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public void EPHPBNKKJLE(Vector3 EDPJENMOOGC, Vector3 PACCGKKFCDM) { }   @0xaf3178

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void objDestructorTrail__EPHPBNKKJLE
               (void *__this,float EDPJENMOOGC_x,float EDPJENMOOGC_y,float EDPJENMOOGC_z,
               float PACCGKKFCDM_x,float PACCGKKFCDM_y,float PACCGKKFCDM_z)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  undefined4 in_register_00005044;
  
  if ((bRam0000000001916ece & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    bRam0000000001916ece = 1;
  }
  lVar3 = this.LIEHBGFFHFF;
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar1 = CarController.<statics>;
  UnityEngine_Quaternion__LookRotation
            (*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x2c),
             *(undefined4 *)(lVar1 + 0x30),0);
  if (lVar3 != 0) {
    UnityEngine_Transform__set_rotation(lVar3,0);
    if (this.LIEHBGFFHFF != 0) {
      UnityEngine_Transform__set_position
                (CONCAT44(in_register_00005004,EDPJENMOOGC_x),
                 CONCAT44(in_register_00005024,EDPJENMOOGC_y),
                 CONCAT44(in_register_00005044,EDPJENMOOGC_z),this.LIEHBGFFHFF,0);
      this.ECLAFDPIDLP = PACCGKKFCDM_x;
      *(float *)((long)__this + 0x3c) = PACCGKKFCDM_y;
      *(float *)((long)__this + 0x40) = PACCGKKFCDM_z;
      this.CNAGLGLEJMC = 0;
      lVar3 = UnityEngine_Component__get_gameObject(__this,0);
      if (lVar3 != 0) {
        UnityEngine_GameObject__SetActive(lVar3,1,0);
        lVar3 = this.NIIFDMDCOCF;
        if (cRam0000000001916789 == '\0') {
          func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
          cRam0000000001916789 = '\x01';
        }
        if (lVar3 != 0) {
          puVar2 = *(undefined4 **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
          UnityEngine_Rigidbody__set_velocity(*puVar2,puVar2[1],puVar2[2],lVar3,0);
          lVar3 = this.NIIFDMDCOCF;
          UnityEngine_Random__Range(0x12c0,0x13ec,0);
          if (lVar3 != 0) {
            if (pcRam000000000191d4e0 == (code *)0x0) {
              pcRam000000000191d4e0 = (code *)func_0x00a678c4(&UNK_005b1494,0);
            }
            (*pcRam000000000191d4e0)(lVar3,&stack0xffffffffffffffd0,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Update() { }   @0xaf3300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void objDestructorTrail__Update(void *__this)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float in_s2;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001916ecf & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    bRam0000000001916ecf = 1;
  }
  fVar6 = this.CNAGLGLEJMC;
  fVar2 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar6 = fVar6 + fVar2;
  this.CNAGLGLEJMC = fVar6;
  if (fVar6 <= this.ACBDHBLLEEK) {
    if (this.LIEHBGFFHFF == 0) goto LAB_00bf3468;
    UnityEngine_Transform__get_position(this.LIEHBGFFHFF,0);
    if (in_s2 <= *(float *)((long)__this + 0x40)) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      fVar2 = CarController.BOAPLCDFEEF;
      uVar7 = *(undefined8 *)(CarController.<statics> + 0x20);
      if (cRam0000000001916789 == '\0') {
        func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
        cRam0000000001916789 = '\x01';
      }
      uVar3 = *(undefined8 *)(*(float **)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 1);
      fVar5 = 9.9999994e-11;
      fVar2 = fVar2 - **(float **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
      fVar6 = (float)uVar7 - (float)uVar3;
      fVar4 = (float)((ulong)uVar7 >> 0x20) - (float)((ulong)uVar3 >> 0x20);
      if (fVar4 * fVar4 + fVar2 * fVar2 + fVar6 * fVar6 < 9.9999994e-11) {
        return;
      }
      if (this.LIEHBGFFHFF == 0) goto LAB_00bf3468;
      UnityEngine_Transform__get_position(this.LIEHBGFFHFF,0);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (fVar5 <= *(float *)(CarController.<statics> + 0x24)) {
        return;
      }
    }
  }
  lVar1 = UnityEngine_Component__get_gameObject(__this,0);
  if (lVar1 != 0) {
    if (pcRam000000000191c3f8 == (code *)0x0) {
      pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
    }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c3f8)(lVar1,0);
    return;
  }
LAB_00bf3468:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



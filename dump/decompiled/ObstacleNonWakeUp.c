/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class ObstacleNonWakeUp : MonoBehaviour // TypeDefIndex: 5273
{
	// Fields
	public Transform LIEHBGFFHFF; // 0x20
	public Collider EFOGAOHIGOE; // 0x28
	public Rigidbody NIIFDMDCOCF; // 0x30
	public float HEOMHPJFNLA; // 0x38

	// Methods

	private void OnBecameVisible() { }

	private void Update() { }

	public void .ctor() { }
}
*/

// ==== private void OnBecameVisible() { }   @0xb57640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ObstacleNonWakeUp__OnBecameVisible(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam00000000019171b6 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171b6 = 1;
  }
  UnityEngine_Behaviour__set_enabled(__this,1,0);
  uVar3 = this.EFOGAOHIGOE;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = this.EFOGAOHIGOE;
    if (lVar2 != 0) {
      if (pcRam000000000191d500 == (code *)0x0) {
        pcRam000000000191d500 = (code *)func_0x00a678c4(&UNK_005a79ad);
      }
                    /* WARNING: Could not recover jumptable at 0x014ceec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191d500)(lVar2,1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  return;
}


// ==== private void Update() { }   @0xb576d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ObstacleNonWakeUp__Update(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float in_s2;
  float fVar4;
  
  if ((bRam00000000019171b7 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171b7 = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = CarController.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (CarController.KECGFPHIEHF != 0) {
    uVar3 = CarController.KECGFPHIEHF.IFLDCKJMFND;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (this.LIEHBGFFHFF != 0) {
      UnityEngine_Transform__get_position(this.LIEHBGFFHFF,0);
      fVar4 = in_s2;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((CarController.KECGFPHIEHF != 0) &&
         (lVar2 = CarController.KECGFPHIEHF.IFLDCKJMFND, lVar2 != 0)) {
        UnityEngine_Transform__get_position(lVar2,0);
        if (this.HEOMHPJFNLA <= in_s2 - fVar4) {
          return;
        }
        if (this.NIIFDMDCOCF != 0) {
          UnityEngine_Rigidbody__set_isKinematic(this.NIIFDMDCOCF,0,0);
          if (this.NIIFDMDCOCF != 0) {
            UnityEngine_Rigidbody__Sleep(this.NIIFDMDCOCF,0);
            if (pcRam000000000191c328 == (code *)0x0) {
              pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
            }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam000000000191c328)(__this,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb57864

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ObstacleNonWakeUp___ctor(void *__this)

{
  this.HEOMHPJFNLA = 0x3f800000;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



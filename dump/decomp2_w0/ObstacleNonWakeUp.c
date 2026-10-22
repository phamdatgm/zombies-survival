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
  uVar3 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
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
  if (**(long **)(_CarController_TypeInfo + 0xb8) != 0) {
    uVar3 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x3a0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(long *)((long)__this + 0x20) != 0) {
      UnityEngine_Transform__get_position(*(long *)((long)__this + 0x20),0);
      fVar4 = in_s2;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
         (lVar2 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x3a0), lVar2 != 0)) {
        UnityEngine_Transform__get_position(lVar2,0);
        if (*(float *)((long)__this + 0x38) <= in_s2 - fVar4) {
          return;
        }
        if (*(long *)((long)__this + 0x30) != 0) {
          UnityEngine_Rigidbody__set_isKinematic(*(long *)((long)__this + 0x30),0,0);
          if (*(long *)((long)__this + 0x30) != 0) {
            UnityEngine_Rigidbody__Sleep(*(long *)((long)__this + 0x30),0);
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



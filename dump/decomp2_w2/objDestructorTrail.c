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
  fVar6 = *(float *)((long)__this + 0x24);
  fVar2 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar6 = fVar6 + fVar2;
  *(float *)((long)__this + 0x24) = fVar6;
  if (fVar6 <= *(float *)((long)__this + 0x20)) {
    if (*(long *)((long)__this + 0x28) == 0) goto LAB_00bf3468;
    UnityEngine_Transform__get_position(*(long *)((long)__this + 0x28),0);
    if (in_s2 <= *(float *)((long)__this + 0x40)) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      fVar2 = *(float *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x1c);
      uVar7 = *(undefined8 *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x20);
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
      if (*(long *)((long)__this + 0x28) == 0) goto LAB_00bf3468;
      UnityEngine_Transform__get_position(*(long *)((long)__this + 0x28),0);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (fVar5 <= *(float *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x24)) {
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



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
  
  lVar1 = *(long *)((long)__this + 0x48);
  if (*(char *)((long)__this + 0x44) == '\0') {
    if (lVar1 == 0) {
LAB_00c51dac:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    UnityEngine_Transform__get_position(lVar1,0);
    if (*(long *)((long)__this + 0x58) == 0) goto LAB_00c51dac;
    fVar5 = in_s1;
    UnityEngine_Transform__get_position(*(long *)((long)__this + 0x58),0);
    if (in_s1 <= fVar5) {
      UnityEngine_Behaviour__set_enabled(__this,0,0);
      goto LAB_00c51d58;
    }
    lVar1 = *(long *)((long)__this + 0x28);
    if (cRam0000000001916e66 == '\0') {
      func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
      cRam0000000001916e66 = '\x01';
    }
    iVar8 = *(int *)((long)__this + 0x3c);
    uVar6 = *(undefined8 *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x3c);
    fVar7 = *(float *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x44);
    fVar5 = (float)UnityEngine_Time__get_deltaTime(0);
    if (lVar1 == 0) goto LAB_00c51dac;
    fVar3 = -20.0;
    uVar4 = NEON_fmov(0xc1a00000,4);
  }
  else {
    if (lVar1 == 0) goto LAB_00c51dac;
    fVar5 = *(float *)((long)__this + 0x50);
    UnityEngine_Transform__get_position(lVar1,0);
    if (fVar5 <= in_s1) goto LAB_00c51d58;
    lVar1 = *(long *)((long)__this + 0x28);
    if (cRam0000000001916e66 == '\0') {
      func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
      cRam0000000001916e66 = '\x01';
    }
    iVar8 = *(int *)((long)__this + 0x3c);
    uVar6 = *(undefined8 *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x3c);
    fVar7 = *(float *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x44);
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
  fVar7 = *(float *)((long)__this + 0x40);
  fVar5 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar7 = fVar7 + fVar5;
  *(float *)((long)__this + 0x40) = fVar7;
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



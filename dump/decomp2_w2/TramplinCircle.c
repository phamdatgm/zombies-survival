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
  uVar2 = *(undefined8 *)((long)__this + 0x28);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    fVar4 = *(float *)((long)__this + 0x40);
    fVar5 = *(float *)((long)__this + 0x44);
    if (fVar5 < fVar4) {
      if (*(int *)((long)__this + 0x20) == 2) {
        lVar3 = *(long *)((long)__this + 0x28);
        fVar7 = ((fVar4 - fVar5) * -96.3 + 47.5) * 0.017453292;
        if (fVar4 - fVar5 < 0.0) {
          fVar7 = 0.8290314;
        }
        uVar6 = 0x3fc90fdb;
        fVar4 = 0.0;
      }
      else {
        if (*(int *)((long)__this + 0x20) != 1) goto LAB_00c195d4;
        fVar5 = (fVar4 - fVar5) * 3.0;
        lVar3 = *(long *)((long)__this + 0x28);
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
  fVar5 = *(float *)((long)__this + 0x40);
  fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar5 = fVar5 + fVar4;
  *(float *)((long)__this + 0x40) = fVar5;
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



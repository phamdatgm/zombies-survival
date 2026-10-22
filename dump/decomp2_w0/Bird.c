// ==== private void Update() { }   @0xb01490

/* WARNING: Removing unreachable block (ram,0x00c015cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Bird__Update(void *__this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_s2;
  float fVar8;
  
  if ((bRam0000000001916f2e & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f2e = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar1 & 1) == 0) {
LAB_00c016b0:
    fVar5 = *(float *)((long)__this + 0x24);
    fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar5 = fVar5 + fVar8;
    *(float *)((long)__this + 0x24) = fVar5;
    if (fVar5 <= *(float *)((long)__this + 0x20)) {
      return;
    }
    uVar4 = UnityEngine_Component__get_gameObject(__this,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
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
    (*pcRam000000000191c510)(0,uVar4);
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
     (lVar2 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x38), lVar2 != 0)) {
    UnityEngine_Transform__get_position(lVar2,0);
    if (*(long *)((long)__this + 0x30) != 0) {
      fVar8 = in_s2;
      UnityEngine_Transform__get_position(*(long *)((long)__this + 0x30),0);
      if (in_s2 <= fVar8) {
        lVar2 = *(long *)((long)__this + 0x30);
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c01724;
        lVar2 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x38);
      }
      if (lVar2 != 0) {
        UnityEngine_Transform__get_position(lVar2,0);
        fVar5 = *(float *)((long)__this + 0x24);
        fVar7 = 0.0;
        if (fVar5 < 1.1) {
          fVar8 = 4.0;
          fVar7 = 4.0 - fVar5 * 4.0;
          if (fVar5 < 0.0) {
            fVar7 = 4.0;
          }
        }
        if (7.0 < fVar5) {
          fVar8 = 0.5;
          fVar6 = (fVar5 + -7.0) * 0.5;
          fVar5 = fVar6;
          if (1.0 < fVar6) {
            fVar5 = 1.0;
          }
          fVar7 = fVar5 * 15.0 + 0.0;
          if (fVar6 < 0.0) {
            fVar7 = 0.0;
          }
        }
        lVar2 = *(long *)((long)__this + 0x30);
        fVar5 = *(float *)((long)__this + 0x38);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
            (lVar3 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x38), lVar3 != 0)) &&
           (UnityEngine_Transform__get_position(lVar3,0), lVar2 != 0)) {
          UnityEngine_Transform__set_position
                    (0,fVar7 + fVar5,fVar8 + *(float *)((long)__this + 0x28),lVar2,0);
          if (**(long **)(_CarController_TypeInfo + 0xb8) != 0) {
            fVar8 = (float)CarController__AGKGCILIANE(**(long **)(_CarController_TypeInfo + 0xb8),0)
            ;
            if (fVar8 < 10.0) {
              fVar5 = *(float *)((long)__this + 0x28);
              fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
              *(float *)((long)__this + 0x28) = fVar5 + fVar8 + fVar8;
            }
            goto LAB_00c016b0;
          }
        }
      }
    }
  }
LAB_00c01724:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



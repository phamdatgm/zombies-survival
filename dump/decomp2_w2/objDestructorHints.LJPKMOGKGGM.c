// ==== private bool MoveNext() { }   @0xad9518

/* WARNING: Removing unreachable block (ram,0x00bd961c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool objDestructorHints_LJPKMOGKGGM__MoveNext(void *__this)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((bRam0000000001916e0a & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916e0a = 1;
  }
  lVar3 = *(long *)((long)__this + 0x20);
  if (*(int *)((long)__this + 0x10) == 1) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    fVar6 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
    if (lVar3 == 0) goto LAB_00bd9734;
  }
  else {
    if (*(int *)((long)__this + 0x10) != 0) {
      return false;
    }
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (lVar3 == 0) goto LAB_00bd9734;
    UnityEngine_Behaviour__set_enabled(lVar3,0,0);
    *(undefined4 *)(lVar3 + 0x24) = 0x3f733333;
    uVar5 = UnityEngine_Time__get_realtimeSinceStartup(0);
    *(undefined4 *)((long)__this + 0x28) = uVar5;
    *(undefined4 *)((long)__this + 0x2c) = 0;
    fVar6 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
  }
  if (fVar6 < *(float *)((long)__this + 0x28) + *(float *)(lVar3 + 0x24)) {
    fVar6 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
    if (*(long *)(lVar3 + 0x70) != 0) {
      fVar6 = fVar6 - *(float *)((long)__this + 0x28);
      fVar10 = fVar6 - *(float *)((long)__this + 0x2c);
      fVar7 = (float)UnityEngine_Transform__get_localScale(*(long *)(lVar3 + 0x70),0);
      fVar8 = *(float *)(lVar3 + 0x90) * 1.4;
      if (0.2 <= fVar6) {
        fVar8 = *(float *)(lVar3 + 0x90);
      }
      fVar9 = fVar10 * 10.0;
      if (fVar9 < 0.0) {
        fVar9 = 0.0;
      }
      if (*(long *)(lVar3 + 0x70) != 0) {
        fVar7 = fVar7 + fVar9 * (fVar8 - fVar7);
        UnityEngine_Transform__set_localScale(fVar7,fVar7,0x3f800000,*(long *)(lVar3 + 0x70),0);
        if (0.3 < fVar6 / *(float *)(lVar3 + 0x24)) {
          plVar1 = *(long **)(lVar3 + 0x88);
          *(float *)(lVar3 + 0x4c) = *(float *)(lVar3 + 0x4c) + fVar10 * -3.0;
          if (plVar1 == (long *)0x0) goto LAB_00bd9734;
          (**(code **)(*plVar1 + 0x2a8))
                    (*(undefined4 *)(lVar3 + 0x40),*(undefined4 *)(lVar3 + 0x44),
                     *(undefined4 *)(lVar3 + 0x48),plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
          uVar4 = *(undefined8 *)(lVar3 + 0x78);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
          if ((uVar2 & 1) != 0) {
            plVar1 = *(long **)(lVar3 + 0x78);
            *(undefined4 *)(lVar3 + 0x3c) = *(undefined4 *)(lVar3 + 0x4c);
            if (plVar1 == (long *)0x0) goto LAB_00bd9734;
            (**(code **)(*plVar1 + 0x2a8))
                      (*(undefined4 *)(lVar3 + 0x30),*(undefined4 *)(lVar3 + 0x34),
                       *(undefined4 *)(lVar3 + 0x38),plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
          }
        }
        *(float *)((long)__this + 0x2c) = fVar6;
        *(undefined8 *)((long)__this + 0x18) = 0;
        *(undefined4 *)((long)__this + 0x10) = 1;
        return true;
      }
    }
  }
  else {
    lVar3 = UnityEngine_Component__get_gameObject(lVar3,0);
    if (lVar3 != 0) {
      UnityEngine_GameObject__SetActive(lVar3,0,0);
      return false;
    }
  }
LAB_00bd9734:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



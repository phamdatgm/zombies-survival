// ==== private bool MoveNext() { }   @0xb0268c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool CarCamera_FPKDIMHPBPM__MoveNext(void *__this)

{
  bool bVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float in_s2;
  float fVar7;
  float fVar8;
  
  if ((bRam0000000001916f36 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    bRam0000000001916f36 = 1;
  }
  lVar4 = *(long *)((long)__this + 0x20);
  if (*(int *)((long)__this + 0x10) == 1) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (*(int *)((long)__this + 0x30) < 1) {
      if (lVar4 != 0) {
        *(undefined4 *)(lVar4 + 0x40) = 0;
        UnityEngine_Time__set_maximumDeltaTime(*(undefined4 *)((long)__this + 0x28),0);
        *(undefined1 *)(lVar4 + 0x3c) = 0;
        return false;
      }
      goto LAB_00c028d4;
    }
LAB_00c027a4:
    fVar6 = (float)UnityEngine_Time__get_time(0);
    if (lVar4 == 0) goto LAB_00c028d4;
    fVar8 = *(float *)((long)__this + 0x34);
    fVar2 = 55.0;
    fVar7 = (fVar6 - *(float *)((long)__this + 0x2c)) * 55.0;
    fVar6 = (float)func_0x016ded20(fVar7);
    *(float *)(lVar4 + 0x40) = fVar6 * fVar8;
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x46) == '\0') {
      if ((*(long *)(lVar4 + 0x30) == 0) ||
         (lVar3 = *(long *)(*(long *)(lVar4 + 0x30) + 0x38), lVar3 == 0)) {
LAB_00c028d4:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar5 = *(undefined4 *)(lVar4 + 0x44);
      UnityEngine_Transform__get_position(lVar3,0);
      if ((*(long *)(lVar4 + 0x30) == 0) ||
         (lVar3 = *(long *)(*(long *)(lVar4 + 0x30) + 0x38), lVar3 == 0)) goto LAB_00c028d4;
      fVar6 = *(float *)(lVar4 + 0xa0);
      UnityEngine_Transform__get_position(lVar3,0);
      if ((*(long *)(lVar4 + 0x30) == 0) || (*(long *)(lVar4 + 0x20) == 0)) goto LAB_00c028d4;
      UnityEngine_Transform__set_position
                (uVar5,fVar2 + fVar6,
                 *(float *)(lVar4 + 0x40) +
                 ((in_s2 - *(float *)(lVar4 + 0xa4)) -
                 *(float *)(*(long *)(lVar4 + 0x30) + 0x128) * *(float *)(lVar4 + 0xb8)),
                 *(long *)(lVar4 + 0x20),0);
    }
    if (6.2831855 < fVar7) {
      uVar5 = UnityEngine_Time__get_time(0);
      *(undefined4 *)((long)__this + 0x2c) = uVar5;
      *(float *)((long)__this + 0x34) = *(float *)((long)__this + 0x34) * 0.5;
      *(int *)((long)__this + 0x30) = *(int *)((long)__this + 0x30) + -1;
    }
    bVar1 = true;
    *(undefined8 *)((long)__this + 0x18) = 0;
    *(undefined4 *)((long)__this + 0x10) = 1;
  }
  else {
    if (*(int *)((long)__this + 0x10) == 0) {
      *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
      if (lVar4 == 0) goto LAB_00c028d4;
      if (*(char *)(lVar4 + 0x3c) == '\0') {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar3 = *(long *)(_CarController_TypeInfo + 0xb8);
        if (*(char *)(lVar3 + 0x44) != '\0') {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar3 = *(long *)(_CarController_TypeInfo + 0xb8);
          }
          if (*(char *)(lVar3 + 0x46) == '\0') goto LAB_00c026e8;
        }
        *(undefined1 *)(lVar4 + 0x3c) = 1;
        uVar5 = UnityEngine_Time__get_maximumDeltaTime(0);
        *(undefined4 *)((long)__this + 0x28) = uVar5;
        UnityEngine_Time__set_maximumDeltaTime(0x3ca3d70a,0);
        uVar5 = UnityEngine_Time__get_time(0);
        *(undefined4 *)((long)__this + 0x2c) = uVar5;
        *(undefined8 *)((long)__this + 0x30) = 0x3f80000000000003;
        goto LAB_00c027a4;
      }
    }
LAB_00c026e8:
    bVar1 = false;
  }
  return bVar1;
}



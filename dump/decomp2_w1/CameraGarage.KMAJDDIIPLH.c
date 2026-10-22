// ==== private bool MoveNext() { }   @0xb3f948

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool CameraGarage_KMAJDDIIPLH__MoveNext(void *__this)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar1 = *(long *)((long)__this + 0x20);
  if (*(int *)((long)__this + 0x10) == 1) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (*(int *)((long)__this + 0x30) < 1) {
      UnityEngine_Time__set_maximumDeltaTime(*(undefined4 *)((long)__this + 0x28),0);
      if (lVar1 != 0) {
        *(undefined1 *)(lVar1 + 0x61) = 0;
        return false;
      }
      goto LAB_00c3fb38;
    }
  }
  else {
    if (*(int *)((long)__this + 0x10) != 0) {
      return false;
    }
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (lVar1 == 0) goto LAB_00c3fb38;
    if (*(char *)(lVar1 + 0x61) != '\0') {
      return false;
    }
    *(undefined1 *)(lVar1 + 0x61) = 1;
    uVar2 = UnityEngine_Time__get_maximumDeltaTime(0);
    *(undefined4 *)((long)__this + 0x28) = uVar2;
    UnityEngine_Time__set_maximumDeltaTime(0x3ca3d70a,0);
    uVar2 = UnityEngine_Time__get_time(0);
    *(undefined4 *)((long)__this + 0x2c) = uVar2;
    *(undefined8 *)((long)__this + 0x30) = 0x3f80000000000003;
  }
  fVar3 = (float)UnityEngine_Time__get_time(0);
  fVar13 = (fVar3 - *(float *)((long)__this + 0x2c)) * 55.0;
  fVar3 = (float)func_0x016ded20(fVar13);
  if (lVar1 != 0) {
    fVar14 = *(float *)((long)__this + 0x34);
    fVar7 = *(float *)(lVar1 + 0x48) * 0.017453292;
    fVar10 = 0.0;
    UnityEngine_Quaternion__Internal_FromEulerRad(*(float *)(lVar1 + 0x4c) * 0.017453292,fVar7,0,0);
    fVar4 = (float)UnityEngine_Quaternion__op_Multiply(0);
    if (*(long *)(lVar1 + 0x28) != 0) {
      fVar8 = fVar7;
      fVar11 = fVar10;
      fVar5 = (float)UnityEngine_Transform__get_position(*(long *)(lVar1 + 0x28),0);
      if (*(long *)(lVar1 + 0x20) != 0) {
        fVar9 = fVar8;
        fVar12 = fVar11;
        fVar6 = (float)UnityEngine_Transform__get_right(*(long *)(lVar1 + 0x20),0);
        if (*(long *)(lVar1 + 0x20) != 0) {
          fVar14 = fVar14 * fVar3;
          UnityEngine_Transform__set_position
                    (fVar4 + fVar5 + fVar14 * fVar6,fVar7 + fVar8 + fVar14 * fVar9,
                     fVar10 + fVar11 + fVar14 * fVar12,*(long *)(lVar1 + 0x20),0);
          if (6.2831855 < fVar13) {
            uVar2 = UnityEngine_Time__get_time(0);
            *(undefined4 *)((long)__this + 0x2c) = uVar2;
            *(float *)((long)__this + 0x34) = *(float *)((long)__this + 0x34) * 0.5;
            *(int *)((long)__this + 0x30) = *(int *)((long)__this + 0x30) + -1;
          }
          *(undefined8 *)((long)__this + 0x18) = 0;
          *(undefined4 *)((long)__this + 0x10) = 1;
          return true;
        }
      }
    }
  }
LAB_00c3fb38:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



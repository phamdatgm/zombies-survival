// ==== public void LJLGIPJCHFC(bool LPGJFJBOIHE) { }   @0xad7a48

/* WARNING: Removing unreachable block (ram,0x00bd7d44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Zombie__LJLGIPJCHFC(void *__this,bool LPGJFJBOIHE)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float in_s1;
  undefined8 uVar7;
  float in_s2;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((bRam0000000001916e06 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Physics_TypeInfo);
    func_0x00a67900(&Str___error_);
    bRam0000000001916e06 = 1;
  }
  if (*(long *)((long)__this + 0x90) != 0) {
    fVar5 = (float)UnityEngine_Transform__get_up(*(long *)((long)__this + 0x90),0);
    if (*(long *)((long)__this + 0x90) != 0) {
      fVar10 = in_s1;
      fVar11 = in_s2;
      fVar6 = (float)UnityEngine_Transform__get_position(*(long *)((long)__this + 0x90),0);
      lVar3 = (long)__this + 0x3c;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = *(uint *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x14);
      fVar10 = in_s1 * 0.3 + fVar10;
      fVar11 = in_s2 * 0.3 + fVar11;
      if (*(int *)(_UnityEngine_Physics_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Physics_TypeInfo);
      }
      uVar2 = UnityEngine_Physics__Raycast
                        (fVar5 * 0.3 + fVar6,fVar10,fVar11,-fVar5,-in_s1,-in_s2,0x41200000,lVar3,
                         1 << (ulong)(uVar1 & 0x1f),0);
      if ((uVar2 & 1) == 0) {
        if (LPGJFJBOIHE) {
          return;
        }
        lVar3 = *(long *)((long)__this + 0x90);
        if (lVar3 != 0) {
          uVar9 = UnityEngine_Object__get_name(lVar3,0);
          uVar9 = System_String__Concat(_Str___error_,uVar9,0);
          UnityEngine_Object__set_name(lVar3,uVar9,0);
          if (pcRam000000000191c328 == (code *)0x0) {
            pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
          }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191c328)(__this,0);
          return;
        }
      }
      else {
        lVar4 = *(long *)((long)__this + 0x90);
        fVar6 = (float)UnityEngine_RaycastHit__get_point(lVar3,0);
        if (lVar4 != 0) {
          fVar8 = *(float *)((long)__this + 0x7c);
          UnityEngine_Transform__set_position
                    (fVar6 + fVar5 * fVar8,fVar10 + in_s1 * fVar8,fVar11 + in_s2 * fVar8,lVar4,0);
          if (10 < *(uint *)((long)__this + 0x30)) {
            return;
          }
          if ((1 << (ulong)(*(uint *)((long)__this + 0x30) & 0x1f) & 0x41cU) == 0) {
            return;
          }
          fVar5 = *(float *)((long)__this + 0x68);
          uVar9 = *(undefined8 *)((long)__this + 0x6c);
          if (cRam0000000001916789 == '\0') {
            func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
            cRam0000000001916789 = '\x01';
          }
          uVar7 = *(undefined8 *)(*(float **)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 1);
          fVar6 = 9.9999994e-11;
          fVar5 = fVar5 - **(float **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
          fVar10 = (float)uVar9 - (float)uVar7;
          fVar11 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar7 >> 0x20);
          fVar11 = fVar11 * fVar11;
          if (9.9999994e-11 <= fVar11 + fVar5 * fVar5 + fVar10 * fVar10) {
            fVar8 = *(float *)((long)__this + 0x68);
            fVar12 = *(float *)((long)__this + 0x6c);
            fVar13 = *(float *)((long)__this + 0x70);
            fVar5 = (float)UnityEngine_RaycastHit__get_normal(lVar3,0);
            fVar10 = (float)UnityEngine_Time__get_deltaTime(0);
            fVar10 = fVar10 * (float)*(int *)((long)__this + 0x78);
            if (fVar10 < 0.0) {
              fVar10 = 0.0;
            }
            fVar8 = fVar8 + (fVar5 - fVar8) * fVar10;
            fVar11 = fVar12 + (fVar11 - fVar12) * fVar10;
            fVar6 = fVar13 + (fVar6 - fVar13) * fVar10;
          }
          else {
            fVar8 = (float)UnityEngine_RaycastHit__get_normal(lVar3,0);
          }
          lVar3 = *(long *)((long)__this + 0x90);
          *(float *)((long)__this + 0x68) = fVar8;
          *(float *)((long)__this + 0x6c) = fVar11;
          *(float *)((long)__this + 0x70) = fVar6;
          if (lVar3 != 0) {
            UnityEngine_Transform__get_right(lVar3,0);
            UnityEngine_Quaternion__LookRotation
                      (fVar11 * *(float *)((long)__this + 0x70) -
                       fVar6 * *(float *)((long)__this + 0x6c),lVar3,0);
            if (pcRam000000000191c8a0 == (code *)0x0) {
              pcRam000000000191c8a0 = (code *)func_0x00a678c4(&UNK_005b89bb);
            }
            (*pcRam000000000191c8a0)(lVar3,&stack0xffffffffffffffd0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



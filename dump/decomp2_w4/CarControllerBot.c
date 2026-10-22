// ==== private void Update() { }   @0xb44014

/* WARNING: Removing unreachable block (ram,0x00c44120) */
/* WARNING: Removing unreachable block (ram,0x01494090) */
/* WARNING: Removing unreachable block (ram,0x014940b4) */
/* WARNING: Removing unreachable block (ram,0x014940c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarControllerBot__Update(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float in_s2;
  float fVar10;
  float fVar11;
  
  if ((bRam000000000191713a & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam000000000191713a = 1;
  }
  if (*(char *)((long)__this + 0xaa) == '\0') {
    if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c444a0;
    fVar4 = (float)UnityEngine_Transform__get_position(*(long *)((long)__this + 0x20),0);
    fVar9 = 14.0;
    if (fVar4 < 14.0) {
      CarControllerBot__HMMPAIOPBJI(__this);
      *(undefined1 *)((long)__this + 0xaa) = 1;
      uVar5 = UnityEngine_Time__get_time(0);
      *(undefined4 *)((long)__this + 0xac) = uVar5;
    }
  }
  else {
    fVar4 = (float)UnityEngine_Time__get_time(0);
    fVar9 = *(float *)((long)__this + 0xac);
    in_s2 = 1.2;
    fVar4 = fVar4 - fVar9;
    if (fVar4 < 1.2) {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x70);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar2 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x70);
        if (lVar2 == 0) goto LAB_00c444a0;
        in_s2 = 0.8;
        fVar9 = fVar4;
        if (fVar4 < 0.0) {
          fVar9 = 0.0;
        }
        UnityEngine_AudioSource__set_volume
                  (fVar9 * *(float *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x78) * 0.8 + 0.0,
                   lVar2,0);
      }
    }
  }
  if ((*(char *)((long)__this + 0xa9) == '\0') && (0.0 < *(float *)((long)__this + 0xb0))) {
    fVar4 = (float)UnityEngine_Time__get_time(0);
    fVar9 = *(float *)((long)__this + 0xb0);
    if (fVar9 < fVar4) {
      if (*(long *)((long)__this + 0x60) == 0) goto LAB_00c444a0;
      UnityEngine_ParticleSystem__Play(*(long *)((long)__this + 0x60),0);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar2 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x3b0), lVar2 == 0))
      goto LAB_00c444a0;
      UnityEngine_ParticleSystem__set_startSize(0x3f800000,lVar2,0);
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar2 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x3b0), lVar2 == 0))
      goto LAB_00c444a0;
      UnityEngine_ParticleSystem__set_startLifetime(0x40400000,lVar2,0);
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar2 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x3b0), lVar2 == 0))
      goto LAB_00c444a0;
      UnityEngine_ParticleSystem__Play(lVar2,0);
      *(undefined4 *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x10) = 0xbf800000;
      *(undefined1 *)((long)__this + 0xa9) = 1;
    }
  }
  if (*(char *)((long)__this + 0xb8) != '\0') {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if (((uVar1 & 1) != 0) && (0.0 < *(float *)((long)__this + 0xb0))) {
      if (cRam0000000001916e66 == '\0') {
        func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
        cRam0000000001916e66 = '\x01';
      }
      lVar2 = *(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8);
      fVar10 = *(float *)(lVar2 + 0x3c);
      fVar11 = *(float *)(lVar2 + 0x40);
      fVar4 = *(float *)(lVar2 + 0x44);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar2 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x38), lVar2 == 0)) {
LAB_00c444a0:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      fVar6 = (float)UnityEngine_Transform__get_forward(lVar2,0);
      if (cRam0000000001916aa2 == '\0') {
        func_0x00a67900(&System_Math_TypeInfo);
        cRam0000000001916aa2 = '\x01';
      }
      if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      fVar7 = SQRT((fVar4 * fVar4 + fVar10 * fVar10 + fVar11 * fVar11) *
                   (in_s2 * in_s2 + fVar6 * fVar6 + fVar9 * fVar9));
      if (1e-15 <= fVar7) {
        fVar7 = ((fVar9 * -fVar11 - fVar10 * fVar6) - fVar4 * in_s2) / fVar7;
        fVar9 = fVar7;
        if (1.0 < fVar7) {
          fVar9 = 1.0;
        }
        if (fVar7 < -1.0) {
          fVar9 = -1.0;
        }
        if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        dVar8 = (double)func_0x016decf0((double)fVar9);
        if (40.0 < (float)dVar8 * 57.29578) {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
             (lVar2 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x38), lVar2 != 0)) {
            fVar9 = (float)UnityEngine_Transform__get_up(lVar2,0);
            fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
            UnityEngine_Quaternion__Internal_FromEulerRad(fVar4 * fVar9 * -70.0 * 0.017453292);
            UnityEngine_Transform__get_localRotation();
            if (pcRam000000000191c8b0 == (code *)0x0) {
              pcRam000000000191c8b0 = (code *)func_0x00a678c4(&UNK_005abcc5);
            }
            (*pcRam000000000191c8b0)(lVar2,&stack0xffffffffffffffd0);
            return;
          }
          goto LAB_00c444a0;
        }
      }
      *(undefined1 *)((long)__this + 0xb8) = 0;
    }
  }
  return;
}


// ==== private void DFNPFBNJGBF(int OMDEMNKOGIG) { }   @0xb44a00

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarControllerBot__DFNPFBNJGBF(void *__this,int OMDEMNKOGIG)

{
  long lVar1;
  float fVar2;
  
  if (*(long *)((long)__this + 0x20) != 0) {
    UnityEngine_Transform__get_rotation(*(long *)((long)__this + 0x20),0);
    fVar2 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(0);
    fVar2 = (float)UnityEngine_Quaternion__Internal_MakePositive(fVar2 * 57.29578,0);
    UnityEngine_Time__get_deltaTime(0);
    lVar1 = *(long *)((long)__this + 0x20);
    UnityEngine_Quaternion__Internal_FromEulerRad(fVar2 * 0.017453292,0);
    if (lVar1 != 0) {
      if (pcRam000000000191c8a0 == (code *)0x0) {
        pcRam000000000191c8a0 = (code *)func_0x00a678c4(&UNK_005b89bb,0);
      }
      (*pcRam000000000191c8a0)(lVar1,&stack0xffffffffffffffd0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



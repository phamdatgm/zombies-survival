// ==== public void GCHFPNMJHCA(float GFDIKJLIBPM, bool FLKHNKPAHGK) { }   @0xb1c244

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__GCHFPNMJHCA(void *__this,float GFDIKJLIBPM,bool FLKHNKPAHGK)

{
  long lVar1;
  
  lVar1 = *(long *)((long)__this + 0x40);
  if (lVar1 != 0) {
    UnityEngine_Rigidbody__get_velocity(lVar1,0);
    if (*(long *)((long)__this + 0x38) != 0) {
      UnityEngine_Transform__get_forward(*(long *)((long)__this + 0x38),0);
      if (*(long *)((long)__this + 0x40) != 0) {
        UnityEngine_Rigidbody__get_velocity(*(long *)((long)__this + 0x40),0);
        if (*(long *)((long)__this + 0x38) != 0) {
          UnityEngine_Transform__get_forward(*(long *)((long)__this + 0x38),0);
          if (pcRam000000000191d490 == (code *)0x0) {
            pcRam000000000191d490 = (code *)func_0x00a678c4(&UNK_0059df4e,0);
          }
          (*pcRam000000000191d490)(lVar1,&stack0xffffffffffffffd0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void HBLIIBFNKIE(float HCILEAABENL) { }   @0xb1cc9c

/* WARNING: Removing unreachable block (ram,0x00c1ce00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__HBLIIBFNKIE(void *__this,float HCILEAABENL)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  float in_s2;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  float fVar9;
  
  if ((bRam0000000001917015 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001917015 = 1;
  }
  uStack_a0 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_f8 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_100 = 0;
  if (*(char *)((long)__this + 0x3c8) != '\0') {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((1.02 < HCILEAABENL) && (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) == '\0'))
  {
    return;
  }
  fVar7 = (float)CarController__AGKGCILIANE(__this);
  iVar21 = *(int *)((long)__this + 0x164) + 10;
  if (HCILEAABENL <= 1.0) {
    iVar21 = *(int *)((long)__this + 0x164);
  }
  fVar17 = (float)iVar21;
  fVar9 = 0.0;
  if (fVar7 <= fVar17) {
    fVar9 = HCILEAABENL;
  }
  fVar8 = (float)UnityEngine_Time__get_fixedDeltaTime(0);
  fVar7 = fVar9;
  if (fVar9 < 0.0) {
    uStack_110 = *(undefined8 *)((long)__this + 0x158);
    uStack_118 = *(undefined8 *)((long)__this + 0x150);
    uStack_120 = *(undefined8 *)((long)__this + 0x148);
    fVar7 = (float)CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_120,0);
    fVar17 = 0.5;
    *(float *)((long)__this + 0x170) = fVar7 * 0.5;
    fVar7 = 0.0;
  }
  if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c1d158;
  fVar10 = (float)UnityEngine_Transform__get_up(*(long *)((long)__this + 0x38),0);
  lVar4 = *(long *)((long)__this + 0x520);
  if (lVar4 == 0) goto LAB_00c1d158;
  uVar1 = *(uint *)(lVar4 + 0x18);
  fVar23 = 0.0;
  fVar24 = fVar8 * 3.0;
  if (fVar8 * 3.0 < 0.0) {
    fVar24 = 0.0;
  }
  if (0 < (int)uVar1) {
    uVar5 = 0;
    fVar23 = 0.0;
    do {
      if (uVar1 <= uVar5) goto LAB_00c1d15c;
      lVar6 = *(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
      if ((lVar6 == 0) || (lVar3 = *(long *)(lVar6 + 0x20), lVar3 == 0)) goto LAB_00c1d158;
      UnityEngine_WheelCollider__GetWorldPose(lVar3,&uStack_100,&uStack_f0,0);
      if (*(long *)(lVar6 + 0x10) == 0) goto LAB_00c1d158;
      fVar18 = (float)(uStack_f0 >> 0x20);
      fVar15 = (float)uStack_e8;
      UnityEngine_Transform__set_rotation
                (uStack_f0 & 0xffffffff,uStack_f0 >> 0x20,(float)uStack_e8,uStack_e8._4_4_,
                 *(long *)(lVar6 + 0x10),0);
      fVar11 = (float)UnityEngine_WheelCollider__get_rpm(lVar3,0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
        uVar2 = UnityEngine_WheelCollider__GetGroundHit(lVar3,&uStack_e0,0);
        if ((uVar2 & 1) == 0) {
          fVar15 = *(float *)((long)__this + 0x130);
          *(undefined1 *)(lVar6 + 0x50) = 0;
          *(float *)(lVar6 + 0x34) =
               *(float *)(lVar6 + 0x34) +
               fVar24 * ((*(float *)(lVar6 + 0x40) - fVar15) - *(float *)(lVar6 + 0x34));
        }
        else {
          if (*(long *)(lVar6 + 0x10) == 0) goto LAB_00c1d158;
          fVar12 = (float)UnityEngine_Transform__get_position(*(long *)(lVar6 + 0x10),0);
          fVar22 = fVar15;
          fVar19 = fVar18;
          fVar13 = (float)UnityEngine_WheelHit__get_point(&uStack_e0,0);
          fVar25 = *(float *)(lVar6 + 0x34);
          fVar14 = (float)UnityEngine_WheelCollider__get_radius(lVar3,0);
          fVar20 = *(float *)((long)__this + 0x130);
          fVar14 = (in_s2 * (fVar15 - fVar22) +
                   fVar10 * (fVar12 - fVar13) + fVar17 * (fVar18 - fVar19)) - fVar14;
          fVar15 = fVar20;
          if (fVar14 <= fVar20) {
            fVar15 = fVar14;
          }
          if (fVar14 < -fVar20) {
            fVar15 = -fVar20;
          }
          *(float *)(lVar6 + 0x34) = fVar25 - fVar15;
          *(undefined1 *)(lVar6 + 0x50) = 1;
          fVar15 = (float)UnityEngine_WheelHit__get_forwardSlip(&uStack_e0,0);
          CarController__GAODICJFPIP(__this,fVar15);
        }
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_00c1d158;
        UnityEngine_Transform__set_localPosition
                  (*(undefined4 *)(lVar6 + 0x30),*(undefined4 *)(lVar6 + 0x34),
                   *(undefined4 *)(lVar6 + 0x38),*(long *)(lVar6 + 0x10),0);
      }
      uVar1 = *(uint *)(lVar4 + 0x18);
      uVar5 = uVar5 + 1;
      fVar23 = fVar23 + fVar11;
    } while ((int)uVar5 < (int)uVar1);
    fVar23 = fVar23 * 10.0;
  }
  uStack_130 = *(undefined8 *)((long)__this + 0x4e0);
  uStack_138 = *(undefined8 *)((long)__this + 0x4d8);
  uStack_140 = *(undefined8 *)((long)__this + 0x4d0);
  fVar23 = ABS(fVar23);
  fVar10 = (float)CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_140,0);
  uStack_158 = *(undefined8 *)((long)__this + 0x4d8);
  uStack_160 = *(undefined8 *)((long)__this + 0x4d0);
  uStack_150 = *(undefined8 *)((long)__this + 0x4e0);
  fVar24 = *(float *)((long)__this + 0x4cc);
  fVar17 = (float)CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_160,0);
  fVar17 = fVar17 + fVar8 * *(float *)((long)__this + 0x4c8);
  fVar10 = fVar10 - fVar8 * fVar24;
  if (fVar23 <= fVar17) {
    fVar17 = fVar23;
  }
  if (fVar23 < fVar10) {
    fVar17 = fVar10;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_198,fVar17,0);
  uStack_170 = uStack_188;
  uStack_178 = uStack_190;
  uStack_180 = uStack_198;
  fVar8 = *(float *)((long)__this + 0x160);
  *(undefined8 *)((long)__this + 0x4e0) = uStack_188;
  *(undefined8 *)((long)__this + 0x4d8) = uStack_190;
  *(undefined8 *)((long)__this + 0x4d0) = uStack_198;
  fVar17 = (float)CarController__AGKGCILIANE(__this);
  if (10.0 <= fVar17) {
    fVar17 = (float)CarController__AGKGCILIANE(__this);
    if (fVar17 < 20.0) {
      fVar17 = 0.8;
      goto LAB_00c1d088;
    }
  }
  else {
    fVar17 = 0.6;
LAB_00c1d088:
    fVar8 = fVar8 * fVar17;
  }
  lVar4 = *(long *)((long)__this + 0x520);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      iVar21 = *(int *)((long)__this + 0x120);
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
LAB_00c1d15c:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar6 = *(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x20) == 0)) goto LAB_00c1d158;
        UnityEngine_WheelCollider__set_motorTorque
                  (fVar7 * ((fVar7 * ((fVar8 * 3040.0) / 5000.0)) / (float)iVar21),
                   *(long *)(lVar6 + 0x20),0);
        uVar16 = 0;
        if (fVar9 < 0.0) {
          uVar16 = *(undefined4 *)((long)__this + 0x170);
        }
        if (*(long *)(lVar6 + 0x20) == 0) goto LAB_00c1d158;
        UnityEngine_WheelCollider__set_brakeTorque(uVar16,*(long *)(lVar6 + 0x20),0);
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
    return;
  }
LAB_00c1d158:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void EHLPBKIEJAL(string FAEEKPCAEHE, Transform DNEMDNHLGAP) { }   @0xb1e5d0

/* WARNING: Removing unreachable block (ram,0x00c28de8) */
/* WARNING: Removing unreachable block (ram,0x00bd8ae4) */
/* WARNING: Removing unreachable block (ram,0x00bd8af8) */
/* WARNING: Removing unreachable block (ram,0x00bd8b00) */
/* WARNING: Removing unreachable block (ram,0x00bd8064) */
/* WARNING: Removing unreachable block (ram,0x00bd8068) */
/* WARNING: Removing unreachable block (ram,0x00bd8094) */
/* WARNING: Removing unreachable block (ram,0x00bd809c) */
/* WARNING: Removing unreachable block (ram,0x00bd80b4) */
/* WARNING: Removing unreachable block (ram,0x00bd80bc) */
/* WARNING: Removing unreachable block (ram,0x00bd8218) */
/* WARNING: Removing unreachable block (ram,0x00bea0c4) */
/* WARNING: Removing unreachable block (ram,0x00bea0e4) */
/* WARNING: Removing unreachable block (ram,0x00be89e8) */
/* WARNING: Removing unreachable block (ram,0x00be89ec) */
/* WARNING: Removing unreachable block (ram,0x00be8a0c) */
/* WARNING: Removing unreachable block (ram,0x00be8a14) */
/* WARNING: Removing unreachable block (ram,0x00be8a28) */
/* WARNING: Removing unreachable block (ram,0x00be8a30) */
/* WARNING: Removing unreachable block (ram,0x00be8a40) */
/* WARNING: Removing unreachable block (ram,0x00be8a54) */
/* WARNING: Removing unreachable block (ram,0x00be8a58) */
/* WARNING: Removing unreachable block (ram,0x00be8a68) */
/* WARNING: Removing unreachable block (ram,0x00be8a9c) */
/* WARNING: Removing unreachable block (ram,0x00be8aac) */
/* WARNING: Removing unreachable block (ram,0x00be8acc) */
/* WARNING: Removing unreachable block (ram,0x00be8adc) */
/* WARNING: Removing unreachable block (ram,0x00be8afc) */
/* WARNING: Removing unreachable block (ram,0x00be8b0c) */
/* WARNING: Removing unreachable block (ram,0x00be8b2c) */
/* WARNING: Removing unreachable block (ram,0x00be8b3c) */
/* WARNING: Removing unreachable block (ram,0x00be8b54) */
/* WARNING: Removing unreachable block (ram,0x00be8b64) */
/* WARNING: Removing unreachable block (ram,0x00be8b84) */
/* WARNING: Removing unreachable block (ram,0x00be8b94) */
/* WARNING: Removing unreachable block (ram,0x00be8bb0) */
/* WARNING: Removing unreachable block (ram,0x00be8b7c) */
/* WARNING: Removing unreachable block (ram,0x00be8b24) */
/* WARNING: Removing unreachable block (ram,0x00be8af4) */
/* WARNING: Removing unreachable block (ram,0x00be8ac4) */
/* WARNING: Removing unreachable block (ram,0x00be8bb4) */
/* WARNING: Removing unreachable block (ram,0x00be8a8c) */
/* WARNING: Removing unreachable block (ram,0x00be8a94) */
/* WARNING: Removing unreachable block (ram,0x00be8bbc) */
/* WARNING: Removing unreachable block (ram,0x00bd8224) */
/* WARNING: Removing unreachable block (ram,0x00bd8228) */
/* WARNING: Removing unreachable block (ram,0x00bd8248) */
/* WARNING: Removing unreachable block (ram,0x00bd8250) */
/* WARNING: Removing unreachable block (ram,0x00bd8264) */
/* WARNING: Removing unreachable block (ram,0x00bd826c) */
/* WARNING: Removing unreachable block (ram,0x00bd8284) */
/* WARNING: Removing unreachable block (ram,0x00bd828c) */
/* WARNING: Removing unreachable block (ram,0x00bd82a4) */
/* WARNING: Removing unreachable block (ram,0x00bd82ac) */
/* WARNING: Removing unreachable block (ram,0x00bd82b8) */
/* WARNING: Removing unreachable block (ram,0x00bd82bc) */
/* WARNING: Removing unreachable block (ram,0x00bd82c0) */
/* WARNING: Removing unreachable block (ram,0x00bd82d4) */
/* WARNING: Removing unreachable block (ram,0x00bd82dc) */
/* WARNING: Removing unreachable block (ram,0x00bd82e8) */
/* WARNING: Removing unreachable block (ram,0x00bd82f0) */
/* WARNING: Removing unreachable block (ram,0x00bd8304) */
/* WARNING: Removing unreachable block (ram,0x00bd830c) */
/* WARNING: Removing unreachable block (ram,0x00bd8320) */
/* WARNING: Removing unreachable block (ram,0x00bd8328) */
/* WARNING: Removing unreachable block (ram,0x00bd8330) */
/* WARNING: Removing unreachable block (ram,0x00bd8338) */
/* WARNING: Removing unreachable block (ram,0x00bd8344) */
/* WARNING: Removing unreachable block (ram,0x00bd8544) */
/* WARNING: Removing unreachable block (ram,0x00bd855c) */
/* WARNING: Removing unreachable block (ram,0x00bd8560) */
/* WARNING: Removing unreachable block (ram,0x00bd8564) */
/* WARNING: Removing unreachable block (ram,0x00bd8578) */
/* WARNING: Removing unreachable block (ram,0x00bd8580) */
/* WARNING: Removing unreachable block (ram,0x00bd8594) */
/* WARNING: Removing unreachable block (ram,0x00bd85a8) */
/* WARNING: Removing unreachable block (ram,0x00bd85b0) */
/* WARNING: Removing unreachable block (ram,0x00bd85c8) */
/* WARNING: Removing unreachable block (ram,0x00bd85d0) */
/* WARNING: Removing unreachable block (ram,0x00bd85dc) */
/* WARNING: Removing unreachable block (ram,0x00bd85f4) */
/* WARNING: Removing unreachable block (ram,0x00be9da0) */
/* WARNING: Removing unreachable block (ram,0x00be9da8) */
/* WARNING: Removing unreachable block (ram,0x00be9db0) */
/* WARNING: Removing unreachable block (ram,0x00be9dc4) */
/* WARNING: Removing unreachable block (ram,0x00be9dcc) */
/* WARNING: Removing unreachable block (ram,0x00be9de4) */
/* WARNING: Removing unreachable block (ram,0x00c28d18) */
/* WARNING: Removing unreachable block (ram,0x00c28d2c) */
/* WARNING: Removing unreachable block (ram,0x00c28d38) */
/* WARNING: Removing unreachable block (ram,0x00c28d40) */
/* WARNING: Removing unreachable block (ram,0x00c28d6c) */
/* WARNING: Removing unreachable block (ram,0x00c28d94) */
/* WARNING: Removing unreachable block (ram,0x00c28dbc) */
/* WARNING: Removing unreachable block (ram,0x00c28dc0) */
/* WARNING: Removing unreachable block (ram,0x00c28df4) */
/* WARNING: Removing unreachable block (ram,0x00c28e08) */
/* WARNING: Removing unreachable block (ram,0x00c28e0c) */
/* WARNING: Removing unreachable block (ram,0x00c28e10) */
/* WARNING: Removing unreachable block (ram,0x00c28e18) */
/* WARNING: Removing unreachable block (ram,0x00c28e1c) */
/* WARNING: Removing unreachable block (ram,0x00c28e24) */
/* WARNING: Removing unreachable block (ram,0x00c28e2c) */
/* WARNING: Removing unreachable block (ram,0x00c28e34) */
/* WARNING: Removing unreachable block (ram,0x00c28e3c) */
/* WARNING: Removing unreachable block (ram,0x00c28e44) */
/* WARNING: Removing unreachable block (ram,0x00c28ea4) */
/* WARNING: Removing unreachable block (ram,0x00c28eac) */
/* WARNING: Removing unreachable block (ram,0x00c28eb4) */
/* WARNING: Removing unreachable block (ram,0x00c28ebc) */
/* WARNING: Removing unreachable block (ram,0x00c28e6c) */
/* WARNING: Removing unreachable block (ram,0x00c28e74) */
/* WARNING: Removing unreachable block (ram,0x00c28e7c) */
/* WARNING: Removing unreachable block (ram,0x00c28ee0) */
/* WARNING: Removing unreachable block (ram,0x00c28ef8) */
/* WARNING: Removing unreachable block (ram,0x00c28f00) */
/* WARNING: Removing unreachable block (ram,0x00c28f10) */
/* WARNING: Removing unreachable block (ram,0x00c28f18) */
/* WARNING: Removing unreachable block (ram,0x00c28f6c) */
/* WARNING: Removing unreachable block (ram,0x00c28f74) */
/* WARNING: Removing unreachable block (ram,0x00c28d4c) */
/* WARNING: Removing unreachable block (ram,0x00c28f80) */
/* WARNING: Removing unreachable block (ram,0x00bd8964) */
/* WARNING: Removing unreachable block (ram,0x00bd896c) */
/* WARNING: Removing unreachable block (ram,0x00bd8974) */
/* WARNING: Removing unreachable block (ram,0x00bd897c) */
/* WARNING: Removing unreachable block (ram,0x00bd898c) */
/* WARNING: Removing unreachable block (ram,0x00bd8990) */
/* WARNING: Removing unreachable block (ram,0x00bd89a4) */
/* WARNING: Removing unreachable block (ram,0x00bd89ac) */
/* WARNING: Removing unreachable block (ram,0x00bd89b4) */
/* WARNING: Removing unreachable block (ram,0x00bd89c4) */
/* WARNING: Removing unreachable block (ram,0x00bd83d8) */
/* WARNING: Removing unreachable block (ram,0x00bd83e0) */
/* WARNING: Removing unreachable block (ram,0x00bd83f0) */
/* WARNING: Removing unreachable block (ram,0x00bd83f4) */
/* WARNING: Removing unreachable block (ram,0x00bd8408) */
/* WARNING: Removing unreachable block (ram,0x00bd8410) */
/* WARNING: Removing unreachable block (ram,0x00bd8418) */
/* WARNING: Removing unreachable block (ram,0x00bd8420) */
/* WARNING: Removing unreachable block (ram,0x00bd8428) */
/* WARNING: Removing unreachable block (ram,0x00bd8438) */
/* WARNING: Removing unreachable block (ram,0x00bd843c) */
/* WARNING: Removing unreachable block (ram,0x00bd8440) */
/* WARNING: Removing unreachable block (ram,0x00bd844c) */
/* WARNING: Removing unreachable block (ram,0x00bd8450) */
/* WARNING: Removing unreachable block (ram,0x00bd861c) */
/* WARNING: Removing unreachable block (ram,0x00bd8454) */
/* WARNING: Removing unreachable block (ram,0x00bd8468) */
/* WARNING: Removing unreachable block (ram,0x00bd8470) */
/* WARNING: Removing unreachable block (ram,0x00bd849c) */
/* WARNING: Removing unreachable block (ram,0x00bd84b4) */
/* WARNING: Removing unreachable block (ram,0x00bd84bc) */
/* WARNING: Removing unreachable block (ram,0x00bd84c8) */
/* WARNING: Removing unreachable block (ram,0x00bd84e0) */
/* WARNING: Removing unreachable block (ram,0x00bd8504) */
/* WARNING: Removing unreachable block (ram,0x00bd850c) */
/* WARNING: Removing unreachable block (ram,0x00bd8620) */
/* WARNING: Removing unreachable block (ram,0x00bd8628) */
/* WARNING: Removing unreachable block (ram,0x00bd8630) */
/* WARNING: Removing unreachable block (ram,0x00bd8638) */
/* WARNING: Removing unreachable block (ram,0x00bd8640) */
/* WARNING: Removing unreachable block (ram,0x00bd8648) */
/* WARNING: Removing unreachable block (ram,0x00bd8650) */
/* WARNING: Removing unreachable block (ram,0x00bd8c14) */
/* WARNING: Removing unreachable block (ram,0x00bd8658) */
/* WARNING: Removing unreachable block (ram,0x00bd8660) */
/* WARNING: Removing unreachable block (ram,0x00bd8668) */
/* WARNING: Removing unreachable block (ram,0x00bd8670) */
/* WARNING: Removing unreachable block (ram,0x00bd8690) */
/* WARNING: Removing unreachable block (ram,0x00bd86a4) */
/* WARNING: Removing unreachable block (ram,0x00bd86f4) */
/* WARNING: Removing unreachable block (ram,0x00bd86fc) */
/* WARNING: Removing unreachable block (ram,0x00bd8730) */
/* WARNING: Removing unreachable block (ram,0x00bd8750) */
/* WARNING: Removing unreachable block (ram,0x00bd8754) */
/* WARNING: Removing unreachable block (ram,0x00bd8758) */
/* WARNING: Removing unreachable block (ram,0x00bd875c) */
/* WARNING: Removing unreachable block (ram,0x00bd8864) */
/* WARNING: Removing unreachable block (ram,0x00bd8760) */
/* WARNING: Removing unreachable block (ram,0x00bd8774) */
/* WARNING: Removing unreachable block (ram,0x00bd8778) */
/* WARNING: Removing unreachable block (ram,0x00bd8b44) */
/* WARNING: Removing unreachable block (ram,0x00bd8b74) */
/* WARNING: Removing unreachable block (ram,0x00bd8b8c) */
/* WARNING: Removing unreachable block (ram,0x00bd8b94) */
/* WARNING: Removing unreachable block (ram,0x00bd8ba0) */
/* WARNING: Removing unreachable block (ram,0x00bd8bb8) */
/* WARNING: Removing unreachable block (ram,0x00bd877c) */
/* WARNING: Removing unreachable block (ram,0x00bd87bc) */
/* WARNING: Removing unreachable block (ram,0x00bd87d8) */
/* WARNING: Removing unreachable block (ram,0x00bd87e0) */
/* WARNING: Removing unreachable block (ram,0x00bd87ec) */
/* WARNING: Removing unreachable block (ram,0x00bd8858) */
/* WARNING: Removing unreachable block (ram,0x00bd8bcc) */
/* WARNING: Removing unreachable block (ram,0x00bd8868) */
/* WARNING: Removing unreachable block (ram,0x00bd89d0) */
/* WARNING: Removing unreachable block (ram,0x00bd89d8) */
/* WARNING: Removing unreachable block (ram,0x00bd89e8) */
/* WARNING: Removing unreachable block (ram,0x00bd89ec) */
/* WARNING: Removing unreachable block (ram,0x00bd8a00) */
/* WARNING: Removing unreachable block (ram,0x00bd8a08) */
/* WARNING: Removing unreachable block (ram,0x00bd8a34) */
/* WARNING: Removing unreachable block (ram,0x00bd8a3c) */
/* WARNING: Removing unreachable block (ram,0x00bd8aac) */
/* WARNING: Removing unreachable block (ram,0x00bd8b14) */
/* WARNING: Removing unreachable block (ram,0x00bd8b20) */
/* WARNING: Removing unreachable block (ram,0x00bd8b24) */
/* WARNING: Removing unreachable block (ram,0x00bd8b38) */
/* WARNING: Removing unreachable block (ram,0x00bd8b2c) */
/* WARNING: Removing unreachable block (ram,0x00bd8ac0) */
/* WARNING: Removing unreachable block (ram,0x00bd8acc) */
/* WARNING: Removing unreachable block (ram,0x00bd8ad0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__EHLPBKIEJAL(void *__this,void *FAEEKPCAEHE,void *DNEMDNHLGAP)

{
  void *__this_00;
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 in_d1;
  float fVar21;
  ulong in_d2;
  float fVar22;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  void *pvStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  void *pvStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  void *pvStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  float fStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long lStack_58;
  long in_stack_ffffffffffffffb8;
  long in_stack_ffffffffffffffc8;
  
  if ((bRam0000000001917019 & 1) == 0) {
    func_0x00a67900(&Str_barrel_throw);
    func_0x00a67900(&Str_barrel_big);
    func_0x00a67900(&Str_bat);
    func_0x00a67900(&Str_wood_box);
    func_0x00a67900(&Str_barrel_with_corpses);
    func_0x00a67900(&Str_barrel);
    func_0x00a67900(&Str_tramplin_barrel);
    func_0x00a67900(&Str_zombie);
    bRam0000000001917019 = 1;
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(FAEEKPCAEHE);
  uStack_a0 = (undefined4)unaff_d15;
  uStack_9c = (undefined4)((ulong)unaff_d15 >> 0x20);
  uStack_98 = (undefined4)unaff_d14;
  uStack_94 = (undefined4)((ulong)unaff_d14 >> 0x20);
  if (0x633042ec < uVar2) {
    if (uVar2 < 0x7764007c) {
      if (uVar2 == 0x70b773a8) {
        uVar4 = System_String__op_Equality(FAEEKPCAEHE,_Str_bat,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        if (DNEMDNHLGAP != (void *)0x0) {
          lVar9 = *(long *)((long)__this + 0x20);
          lVar5 = UnityEngine_Component__get_gameObject(DNEMDNHLGAP,0);
          if (lVar9 != 0) {
            if ((bRam0000000001916e4f & 1) == 0) {
              func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_TheBat___,1,lVar5,
                              DNEMDNHLGAP,0);
              func_0x00a67900(&UnityEngine_Object_TypeInfo);
              bRam0000000001916e4f = 1;
            }
            if (lVar5 != 0) {
              UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                        (lVar5,&stack0xffffffffffffffb8,
                         _Method_UnityEngine_GameObject_GetComponent_TheBat___);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar4 = UnityEngine_Object__op_Inequality(in_stack_ffffffffffffffb8,0,0);
              if ((uVar4 & 1) != 0) {
                if (in_stack_ffffffffffffffb8 == 0) goto LAB_00be79b0;
                UnityEngine_Behaviour__set_enabled(in_stack_ffffffffffffffb8,1,0);
              }
              if (DNEMDNHLGAP != (void *)0x0) {
                uVar19 = UnityEngine_Transform__get_position(DNEMDNHLGAP,0);
                if (cRam0000000001916789 == '\0') {
                  func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                  cRam0000000001916789 = '\x01';
                }
                puVar6 = *(undefined4 **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
                CarCollision__EJHCIMAAIKB(uVar19,in_d1,in_d2,*puVar6,puVar6[1],puVar6[2],lVar9,1);
                return;
              }
            }
LAB_00be79b0:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
        }
      }
      else {
        if (uVar2 != 0x7764007b) {
          return;
        }
        uVar4 = System_String__op_Equality(FAEEKPCAEHE,_Str_tramplin_barrel,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        if (DNEMDNHLGAP != (void *)0x0) {
          lVar9 = *(long *)((long)__this + 0x20);
          lVar5 = UnityEngine_Component__get_gameObject(DNEMDNHLGAP,0);
          if (lVar9 != 0) {
            if ((bRam0000000001916e5b & 1) == 0) {
              func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Collider___);
              func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_TramplinBarrel___);
              func_0x00a67900(&UnityEngine_Object_TypeInfo);
              bRam0000000001916e5b = 1;
            }
            if (((DNEMDNHLGAP != (void *)0x0) &&
                (UnityEngine_Transform__get_position(DNEMDNHLGAP,0), lVar5 != 0)) &&
               (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                          (lVar5,&stack0xffffffffffffffc8,
                           _Method_UnityEngine_GameObject_GetComponent_Collider___),
               in_stack_ffffffffffffffc8 != 0)) {
              UnityEngine_Collider__set_enabled(in_stack_ffffffffffffffc8,0,0);
              UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                        (lVar5,&stack0xffffffffffffffc8,
                         _Method_UnityEngine_GameObject_GetComponent_TramplinBarrel___);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar4 = UnityEngine_Object__op_Inequality(in_stack_ffffffffffffffc8,0,0);
              if ((uVar4 & 1) != 0) {
                if (in_stack_ffffffffffffffc8 == 0) goto LAB_00bea130;
                uVar19 = *(undefined8 *)(in_stack_ffffffffffffffc8 + 0x30);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar4 = UnityEngine_Object__op_Inequality(uVar19,0,0);
                if ((uVar4 & 1) != 0) {
                  UnityEngine_Behaviour__set_enabled(in_stack_ffffffffffffffc8,1,0);
                  TramplinBarrel__NNIADFNMHGB(in_stack_ffffffffffffffc8,0);
                  lVar5 = *(long *)(in_stack_ffffffffffffffc8 + 0x30);
                  if (lVar5 == 0) goto LAB_00bea130;
                  uVar19 = UnityEngine_GameObject__get_transform(lVar5,0);
                  CarCollision__GLBHMAKJKHB(lVar9,1,lVar5,uVar19);
                }
              }
              return;
            }
LAB_00bea130:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
        }
      }
      goto LAB_00c1e900;
    }
    if (uVar2 == 0x94e99982) {
      uVar4 = System_String__op_Equality(FAEEKPCAEHE,_Str_wood_box,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      if ((DNEMDNHLGAP == (void *)0x0) ||
         (lVar9 = *(long *)((long)__this + 0x20),
         lVar5 = UnityEngine_Component__get_gameObject(DNEMDNHLGAP,0), lVar9 == 0))
      goto LAB_00c1e900;
      if ((bRam0000000001916e55 & 1) == 0) {
        func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Collider___);
        func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_DynamicAccessor___);
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        func_0x00a67900(&SoundScript_TypeInfo);
        bRam0000000001916e55 = 1;
      }
      if (lVar5 == 0) {
LAB_00be9e1c:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                (lVar5,&lStack_58,_Method_UnityEngine_GameObject_GetComponent_Collider___);
      lVar9 = lStack_58;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(lVar9,0,0);
      if ((uVar4 & 1) != 0) {
        if (lVar9 == 0) goto LAB_00be9e1c;
        UnityEngine_Collider__set_enabled(lVar9,0,0);
      }
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                (lVar5,&lStack_58,_Method_UnityEngine_GameObject_GetComponent_DynamicAccessor___);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(lStack_58,0,0);
      if ((uVar4 & 1) != 0) {
        if ((lStack_58 == 0) || (lVar5 = *(long *)(lStack_58 + 0x28), lVar5 == 0))
        goto LAB_00be9e1c;
        if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
          uVar4 = 0;
          uVar7 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
          do {
            if (uVar7 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            lVar9 = *(long *)(lVar5 + 0x20 + uVar4 * 8);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Object__op_Implicit(lVar9,0);
            if ((uVar7 & 1) != 0) {
              fVar20 = 900.0;
              fVar12 = *(float *)(lStack_58 + 0x30) * 900.0;
              uVar19 = UnityEngine_Random__Range(*(float *)(lStack_58 + 0x30) * 600.0,fVar12,0);
              if (DNEMDNHLGAP == (void *)0x0) goto LAB_00be9e1c;
              fVar15 = (float)UnityEngine_Transform__get_position(DNEMDNHLGAP,0);
              fVar13 = fVar20;
              fVar14 = fVar12;
              fVar16 = (float)UnityEngine_Transform__get_up(DNEMDNHLGAP,0);
              fVar21 = fVar13;
              fVar22 = fVar14;
              fVar17 = (float)UnityEngine_Transform__get_forward(DNEMDNHLGAP,0);
              if (lVar9 == 0) goto LAB_00be9e1c;
              UnityEngine_Rigidbody__AddExplosionForce
                        (uVar19,(fVar15 + fVar16 * 0.5) - fVar17,(fVar12 + fVar14 * 0.5) - fVar22,
                         (fVar20 + fVar13 * 0.5) - fVar21,0x42c80000,lVar9,0);
              lVar9 = UnityEngine_Component__get_transform(lVar9,0);
              if (lVar9 == 0) goto LAB_00be9e1c;
              UnityEngine_Transform__set_parent(lVar9,0,0);
            }
            uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)(int)*(uint *)(lVar5 + 0x18));
        }
      }
      return;
    }
    if (uVar2 != 0xf35724d0) {
      return;
    }
    puVar8 = (undefined8 *)&Str_barrel_with_corpses;
LAB_00c1e848:
    uVar4 = System_String__op_Equality(FAEEKPCAEHE,*puVar8,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (DNEMDNHLGAP != (void *)0x0) {
      lVar9 = *(long *)((long)__this + 0x20);
      lVar5 = UnityEngine_Component__get_gameObject(DNEMDNHLGAP,0);
      if (lVar9 != 0) {
        if ((bRam0000000001916e5a & 1) == 0) {
          func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Zombie___);
          func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_DynamicAccessor___);
          func_0x00a67900(&UnityEngine_Object_TypeInfo);
          func_0x00a67900(&SoundScript_TypeInfo);
          func_0x00a67900(&Str_barrel_throw);
          func_0x00a67900(&Str_barrel_big);
          func_0x00a67900(&Str_barrel_with_box_pack);
          func_0x00a67900(&Str_barrel_pack_x5);
          func_0x00a67900(&Str_barrel_pack_x8);
          func_0x00a67900(&Str_barrel_pack_x3);
          func_0x00a67900(&Str_barrel_big_zombie_walk);
          func_0x00a67900(&Str_barrel_pack_x10);
          bRam0000000001916e5a = 1;
        }
        if (lVar5 != 0) {
          UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                    (lVar5,&lStack_58,_Method_UnityEngine_GameObject_GetComponent_DynamicAccessor___
                    );
          lVar3 = lStack_58;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar4 = UnityEngine_Object__op_Inequality(lVar3,0,0);
          fVar12 = (float)in_d2;
          if ((uVar4 & 1) != 0) {
            if ((lVar3 == 0) || (lVar11 = *(long *)(lVar3 + 0x28), lVar11 == 0)) goto LAB_00be8bf8;
            if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
              uVar4 = 0;
              uVar7 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
              fStack_a4 = 10000.0;
              fStack_a8 = 15000.0;
              do {
                if (uVar7 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                lVar10 = *(long *)(lVar11 + 0x20 + uVar4 * 8);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Implicit(lVar10,0);
                if ((uVar7 & 1) != 0) {
                  fVar20 = *(float *)(lVar3 + 0x30) * fStack_a8;
                  fVar12 = fStack_a8;
                  uVar19 = UnityEngine_Random__Range(*(float *)(lVar3 + 0x30) * fStack_a4,0);
                  if (DNEMDNHLGAP == (void *)0x0) goto LAB_00be8bf8;
                  fVar15 = (float)UnityEngine_Transform__get_position(DNEMDNHLGAP,0);
                  fVar13 = fVar12;
                  fVar14 = fVar20;
                  fVar16 = (float)UnityEngine_Transform__get_up(DNEMDNHLGAP,0);
                  fVar21 = fVar13;
                  fVar22 = fVar14;
                  fVar17 = (float)UnityEngine_Transform__get_forward(DNEMDNHLGAP,0);
                  if (lVar10 == 0) goto LAB_00be8bf8;
                  in_d2 = (ulong)(uint)((fVar20 + fVar14 * 0.5) - fVar22 * 0.5);
                  UnityEngine_Rigidbody__AddExplosionForce
                            (uVar19,(fVar15 + fVar16 * 0.5) - fVar17 * 0.5,in_d2,
                             (fVar12 + fVar13 * 0.5) - fVar21 * 0.5,0x42c80000,lVar10,0);
                  lVar10 = UnityEngine_Component__get_transform(lVar10,0);
                  if (lVar10 == 0) goto LAB_00be8bf8;
                  UnityEngine_Transform__set_parent(lVar10,0,0);
                }
                fVar12 = (float)in_d2;
                uVar7 = (ulong)*(uint *)(lVar11 + 0x18);
                uVar4 = uVar4 + 1;
              } while ((long)uVar4 < (long)(int)*(uint *)(lVar11 + 0x18));
            }
          }
          lVar3 = UnityEngine_Object__get_name(lVar5,0);
          if (lVar3 != 0) {
            uVar4 = System_String__Contains(lVar3,_Str_barrel_big_zombie_walk,0);
            if ((uVar4 & 1) != 0) {
              uVar19 = *(undefined8 *)(lVar9 + 0x38);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar4 = UnityEngine_Object__op_Equality(uVar19,0,0);
              if ((uVar4 & 1) != 0) {
                if ((DNEMDNHLGAP == (void *)0x0) ||
                   (lVar3 = UnityEngine_Transform__get_parent(DNEMDNHLGAP,0), lVar3 == 0))
                goto LAB_00be8bf8;
                lVar3 = UnityEngine_Transform__get_parent(lVar3,0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                }
                uVar4 = UnityEngine_Object__op_Inequality(lVar3,0,0);
                if ((uVar4 & 1) != 0) {
                  if (lVar3 == 0) goto LAB_00be8bf8;
                  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (lVar3,&lStack_58,_Method_UnityEngine_Component_GetComponent_Zombie___);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar4 = UnityEngine_Object__op_Inequality(lStack_58,0,0);
                  if ((uVar4 & 1) != 0) {
                    *(long *)(lVar9 + 0x38) = lVar3;
                  }
                }
              }
              uVar19 = *(undefined8 *)(lVar9 + 0x38);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar4 = UnityEngine_Object__op_Inequality(uVar19,0,0);
              if ((uVar4 & 1) != 0) {
                if ((*(long *)(lVar9 + 0x38) == 0) ||
                   (UnityEngine_Transform__get_position(*(long *)(lVar9 + 0x38),0),
                   DNEMDNHLGAP == (void *)0x0)) goto LAB_00be8bf8;
                fVar20 = fVar12;
                UnityEngine_Transform__get_position(DNEMDNHLGAP,0);
                if (fVar12 - fVar20 < 3.0) {
                  if (*(long *)(lVar9 + 0x38) == 0) goto LAB_00be8bf8;
                  uVar19 = UnityEngine_Component__get_gameObject(*(long *)(lVar9 + 0x38),0);
                  CarCollision__JDLKLAGFELO(lVar9,1,uVar19,*(undefined8 *)(lVar9 + 0x38));
                }
              }
            }
            if (((lVar5 != 0) && (lVar3 = UnityEngine_Object__get_name(lVar5,0), lVar3 != 0)) &&
               (uVar2 = System_String__Contains(lVar3,_Str_barrel_pack_x10,0),
               DNEMDNHLGAP != (void *)0x0)) {
              UnityEngine_Transform__get_position(DNEMDNHLGAP,0);
              CarCollision__NDLJJLDOHIA(lVar9,uVar2 & 1);
              if (*(long *)(lVar9 + 0x20) != 0) {
                if (*(char *)(*(long *)(lVar9 + 0x20) + 0x3c9) == '\0') {
                  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  SoundScript__GIGBLEBBIEK
                            (*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x30),0);
                }
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                UnityEngine_Object__Destroy(lVar5,0);
                return;
              }
            }
          }
        }
LAB_00be8bf8:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
LAB_00c1e900:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (0x123c95d1 < uVar2) {
    if (uVar2 == 0x4eb746ea) {
      puVar8 = (undefined8 *)&Str_barrel_throw;
    }
    else {
      if (uVar2 != 0x633042ec) {
        return;
      }
      puVar8 = (undefined8 *)&Str_barrel_big;
    }
    goto LAB_00c1e848;
  }
  if (uVar2 != 0x110302df) {
    if (uVar2 != 0x123c95d1) {
      return;
    }
    puVar8 = (undefined8 *)&Str_barrel;
    goto LAB_00c1e848;
  }
  uVar4 = System_String__op_Equality(FAEEKPCAEHE,_Str_zombie,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (DNEMDNHLGAP == (void *)0x0) goto LAB_00c1e900;
  lVar9 = *(long *)((long)__this + 0x20);
  lVar5 = UnityEngine_Component__get_gameObject(DNEMDNHLGAP,0);
  if (lVar9 == 0) goto LAB_00c1e900;
  if ((bRam0000000001916e62 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Zombie___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_Physics_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&string_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_EXTRA_STYLE_BONUS_2);
    func_0x00a67900(&Str_SPLATTER_BONUS);
    func_0x00a67900(&Str_ground);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str___x);
    func_0x00a67900(&Str_EXTRA_STYLE_BONUS);
    func_0x00a67900(&Str_Zombie_script_problem);
    bRam0000000001916e62 = 1;
  }
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  fStack_a8 = 0.0;
  fStack_a4 = 0.0;
  uStack_b0 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Equality(lVar5,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (lVar5 == 0) goto LAB_00bd8c10;
  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
            (lVar5,&pvStack_100,_Method_UnityEngine_GameObject_GetComponent_Zombie___);
  __this_00 = pvStack_100;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Equality(__this_00,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__EEKNCFLMGDP(_Str_Zombie_script_problem,0);
    return;
  }
  if (__this_00 == (void *)0x0) goto LAB_00bd8c10;
  iVar1 = *(int *)((long)__this_00 + 0x30);
  if (iVar1 == 6) {
    if (DNEMDNHLGAP == (void *)0x0) goto LAB_00bd8c10;
    iVar1 = *(int *)((long)__this_00 + 0x24);
    uVar19 = UnityEngine_Transform__get_position(DNEMDNHLGAP,0);
    if (1 < iVar1) {
      uVar18 = in_d1;
      uVar4 = in_d2;
      fVar12 = (float)UnityEngine_Transform__get_up(DNEMDNHLGAP,0);
      fVar22 = *(float *)((long)__this_00 + 0x84);
      fVar20 = (float)uVar18 * fVar22;
      uVar7 = (ulong)(uint)fVar20;
      fVar21 = (float)uVar4 * fVar22;
      uVar4 = (ulong)(uint)fVar21;
      uVar18 = UnityEngine_RaycastHit__get_normal((long)__this_00 + 0x3c,0);
      CarCollision__EJHCIMAAIKB
                ((float)uVar19 + fVar12 * fVar22,(float)in_d1 + fVar20,(float)in_d2 + fVar21,uVar18,
                 uVar7,uVar4,lVar9,1);
      if (*(long *)((long)__this_00 + 0x98) != 0) {
        UnityEngine_GameObject__SetActive(*(long *)((long)__this_00 + 0x98),1,0);
        *(int *)((long)__this_00 + 0x24) = *(int *)((long)__this_00 + 0x24) + -1;
        return;
      }
      goto LAB_00bd8c10;
    }
    CarCollision__NDLJJLDOHIA(uVar19,in_d1,in_d2,lVar9,0);
    fVar20 = (float)in_d2;
    fVar12 = (float)in_d1;
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x30),0);
    goto LAB_00bd82fc;
  }
  switch(iVar1) {
  case 1:
    uVar19 = *(undefined8 *)((long)__this_00 + 0x98);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar19,0,0);
    if ((uVar4 & 1) != 0) {
      if (DNEMDNHLGAP == (void *)0x0) goto LAB_00bd8c10;
      UnityEngine_Transform__get_position(DNEMDNHLGAP,0);
      CarCollision__NDLJJLDOHIA(lVar9,0);
      if (*(long *)(lVar9 + 0x20) == 0) goto LAB_00bd8c10;
      if (*(char *)(*(long *)(lVar9 + 0x20) + 0x3c9) == '\0') {
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x30),0);
      }
      uVar19 = *(undefined8 *)((long)__this_00 + 0x98);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      UnityEngine_Object__Destroy(uVar19,0);
    }
    break;
  case 3:
  case 8:
    Zombie__HMEFLNGHPDI(__this_00);
    goto code_r0x00bd8204;
  case 4:
code_r0x00bd8204:
    fVar20 = (float)in_d2;
    fVar12 = (float)in_d1;
    goto LAB_00bd834c;
  case 7:
    return;
  }
  fVar20 = (float)in_d2;
  fVar12 = (float)in_d1;
  if (iVar1 == 6) {
LAB_00bd82fc:
    uVar19 = 1;
  }
  else {
LAB_00bd834c:
    uVar19 = 0;
  }
  CarCollision__ELLMIFLLMNM(lVar9,*(undefined4 *)((long)__this_00 + 0x34),DNEMDNHLGAP,uVar19);
  if (DNEMDNHLGAP == (void *)0x0) goto LAB_00bd8c10;
  fVar13 = (float)UnityEngine_Transform__get_position(DNEMDNHLGAP,0);
  fVar21 = fVar12;
  fVar22 = fVar20;
  fVar14 = (float)UnityEngine_Transform__get_up(DNEMDNHLGAP,0);
  fVar15 = *(float *)((long)__this_00 + 0x84);
  uVar4 = (ulong)(uint)(fVar21 * fVar15);
  uVar7 = (ulong)(uint)(fVar22 * fVar15);
  uVar19 = UnityEngine_RaycastHit__get_normal((long)__this_00 + 0x3c,0);
  CarCollision__EJHCIMAAIKB
            (fVar13 + fVar14 * fVar15,fVar12 + fVar21 * fVar15,fVar20 + fVar22 * fVar15,uVar19,uVar4
             ,uVar7,lVar9,1);
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) == '\0') {
    lVar3 = *(long *)(lVar9 + 0x20);
    if (lVar3 == 0) goto LAB_00bd8c10;
    uStack_170 = *(undefined4 *)(lVar3 + 0x23c);
    uStack_178 = *(undefined8 *)(lVar3 + 0x234);
    uStack_180 = *(undefined8 *)(lVar3 + 0x22c);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Increment(&pvStack_120,&uStack_180,0);
    uStack_f0 = uStack_110;
    uStack_f8 = uStack_118;
    pvStack_100 = pvStack_120;
    *(undefined4 *)(lVar3 + 0x23c) = uStack_110;
    *(undefined8 *)(lVar3 + 0x234) = uStack_118;
    *(undefined8 *)(lVar3 + 0x22c) = pvStack_120;
    if (*(void **)(lVar9 + 0x20) == (void *)0x0) goto LAB_00bd8c10;
    CarController__IKOEIGDJPEK(*(void **)(lVar9 + 0x20),5,false);
    lVar3 = *(long *)(lVar9 + 0x20);
    if (lVar3 == 0) goto LAB_00bd8c10;
    uStack_190 = *(undefined4 *)(lVar3 + 0x88);
    uStack_198 = *(undefined8 *)(lVar3 + 0x80);
    uStack_1a0 = *(undefined8 *)(lVar3 + 0x78);
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_1a0,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit
              (&pvStack_1b8,*(int *)((long)__this_00 + 0x2c) + iVar1,0);
    uStack_110 = uStack_1a8;
    uStack_118 = uStack_1b0;
    pvStack_120 = pvStack_1b8;
    *(undefined4 *)(lVar3 + 0x88) = uStack_1a8;
    *(undefined8 *)(lVar3 + 0x80) = uStack_1b0;
    *(void **)(lVar3 + 0x78) = pvStack_1b8;
  }
  if (*(long *)(lVar9 + 0x20) != 0) {
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Object__Destroy(lVar5,0);
    return;
  }
LAB_00bd8c10:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void GAODICJFPIP(float IILDBBGLAKH) { }   @0xb1d1f8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__GAODICJFPIP(void *__this,float IILDBBGLAKH)

{
  float fVar1;
  float fVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (0.3 <= IILDBBGLAKH) {
    uStack_30 = *(undefined8 *)((long)__this + 0x158);
    uStack_38 = *(undefined8 *)((long)__this + 0x150);
    uStack_40 = *(undefined8 *)((long)__this + 0x148);
    fVar2 = *(float *)((long)__this + 0x160);
    fVar1 = (float)CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_40,0);
    if (fVar1 / 3.0 < fVar2) {
      fVar1 = *(float *)((long)__this + 0x160) + -10.0;
      goto LAB_00c1d2b4;
    }
  }
  fVar2 = *(float *)((long)__this + 0x160) + 10.0;
  *(float *)((long)__this + 0x160) = fVar2;
  uStack_50 = *(undefined8 *)((long)__this + 0x158);
  uStack_58 = *(undefined8 *)((long)__this + 0x150);
  uStack_60 = *(undefined8 *)((long)__this + 0x148);
  fVar1 = (float)CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_60,0);
  if (fVar2 <= fVar1) {
    return;
  }
  uStack_70 = *(undefined8 *)((long)__this + 0x158);
  uStack_78 = *(undefined8 *)((long)__this + 0x150);
  uStack_80 = *(undefined8 *)((long)__this + 0x148);
  fVar1 = (float)CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_80,0);
LAB_00c1d2b4:
  *(float *)((long)__this + 0x160) = fVar1;
  return;
}


// ==== private void CHPDPBCCBJP(float HHEOPDJMPBH) { }   @0xb1f648

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__CHPDPBCCBJP(void *__this,float HHEOPDJMPBH)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_40;
  float fStack_38;
  
  if ((bRam0000000001917022 & 1) == 0) {
    func_0x00a67900(&Method_Spring_Vector3__LGLBDMEEIJC__);
    bRam0000000001917022 = 1;
  }
  if (0.0 < *(float *)((long)__this + 0x440)) {
    fVar1 = (float)UnityEngine_Time__get_time(0);
    fVar5 = *(float *)((long)__this + 0x468);
    fVar7 = *(float *)((long)__this + 0x448);
    if (fVar7 < fVar1 - fVar5) {
      if (*(long *)((long)__this + 0x38) != 0) {
        fVar1 = (float)UnityEngine_Transform__get_right(*(long *)((long)__this + 0x38),0);
        fVar8 = *(float *)((long)__this + 0x444);
        if (0.0 < fVar8) {
          if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c1f78c;
          fVar6 = fVar5;
          fVar2 = (float)UnityEngine_Transform__get_forward(*(long *)((long)__this + 0x38),0);
          fVar3 = (float)UnityEngine_Random__get_value(0);
          fVar3 = fVar3 + fVar3 + -1.0;
          fVar9 = *(float *)((long)__this + 0x444);
          fVar7 = fVar7 + fVar9 * fVar8 * fVar3;
          fVar1 = fVar1 + fVar2 * fVar3 * fVar9;
          fVar5 = fVar5 + fVar6 * fVar3 * fVar9;
        }
        if (*(long *)((long)__this + 0x460) != 0) {
          fVar8 = *(float *)((long)__this + 0x440);
          fStack_38 = fVar8 * -fVar7 * HHEOPDJMPBH;
          uStack_40 = CONCAT44(-fVar5 * fVar8 * HHEOPDJMPBH,-fVar1 * fVar8 * HHEOPDJMPBH);
          Spring___Il2CppFullySharedGenericType___LGLBDMEEIJC
                    (*(long *)((long)__this + 0x460),&uStack_40,
                     _Method_Spring_Vector3__LGLBDMEEIJC__);
          uVar4 = UnityEngine_Time__get_time(0);
          *(undefined4 *)((long)__this + 0x468) = uVar4;
          return;
        }
      }
LAB_00c1f78c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
}


// ==== public void FPLOKMKMFLL() { }   @0xb22528

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__FPLOKMKMFLL(void *__this)

{
  *(float *)((long)__this + 0x218) = -*(float *)((long)__this + 0x21c);
  return;
}


// ==== public void AEFMMNHIGLH() { }   @0xb23204

/* WARNING: Removing unreachable block (ram,0x00c23a28) */
/* WARNING: Removing unreachable block (ram,0x00c23cf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__AEFMMNHIGLH(void *__this)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  float in_s1;
  float in_s2;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  
  if ((bRam000000000191702b & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_MeshRenderer__Material____Clear__)
    ;
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_FindObjectOfType_CameraGarage___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&string_TypeInfo);
    func_0x00a67900(&UnityEngine_Transform_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_CRASH_1);
    bRam000000000191702b = 1;
  }
  if (*(char *)((long)__this + 0x3c8) != '\0') {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) != '\0') &&
     (*(char *)((long)__this + 0x4f4) == '\0')) {
    return;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_b8,0,0);
  uStack_90 = uStack_a8;
  uStack_98 = uStack_b0;
  uStack_a0 = uStack_b8;
  *(undefined4 *)((long)__this + 0x19c) = uStack_a8;
  *(undefined8 *)((long)__this + 0x194) = uStack_b0;
  *(undefined8 *)((long)__this + 0x18c) = uStack_b8;
  *(undefined1 *)((long)__this + 0x3c8) = 1;
  *(undefined1 *)((long)__this + 0x3fe) = 1;
  if ((*(char *)((long)__this + 0x414) == '\0') || (*(char *)((long)__this + 0x60) == '\0')) {
LAB_00c23388:
    uVar14 = 0;
  }
  else {
    if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c236e8;
    UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
    if (in_s2 < (float)*(int *)((long)__this + 0x408)) goto LAB_00c23388;
    uVar14 = 1;
    *(undefined1 *)((long)__this + 0x3fe) = 0;
  }
  uVar12 = *(undefined8 *)((long)__this + 0x30);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  if ((uVar2 & 1) != 0) {
    lVar13 = *(long *)((long)__this + 0x30);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
       (uVar12 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_CRASH_1,0),
       lVar13 == 0)) goto LAB_00c236e8;
    GUIGameplay__HNKHJLDJMHB(lVar13,uVar12,1,0,1,0);
    if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c236e8;
    GUIGameplay__HNKHJLDJMHB
              (*(long *)((long)__this + 0x30),**(undefined8 **)(_string_TypeInfo + 0xb8),4,0,0,0);
    CarController__OFLMLGPBOBL(__this);
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
    if (*(void **)((long)__this + 0x28) == (void *)0x0) goto LAB_00c236e8;
    pvVar3 = CarCamera__OIKFBMHJDBN(*(void **)((long)__this + 0x28));
    UnityEngine_MonoBehaviour__StartCoroutine(__this,pvVar3,0);
    if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c236e8;
    lVar13 = *(long *)((long)__this + 0x20);
    UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
    if (lVar13 == 0) goto LAB_00c236e8;
    CarCollision__NDLJJLDOHIA(lVar13,0,0);
  }
  else {
    CarController__FALNNMMGIDA(__this);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar13 = UnityEngine_Object__FindObjectOfType_object_
                       (_Method_UnityEngine_Object_FindObjectOfType_CameraGarage___);
    uVar2 = UnityEngine_Object__op_Inequality(lVar13,0,0);
    if ((uVar2 & 1) != 0) {
      if (lVar13 == 0) goto LAB_00c236e8;
      uVar12 = CameraGarage__OIKFBMHJDBN(lVar13,0);
      UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar12,0);
    }
  }
  if (*(char *)((long)__this + 0x3c9) == '\0') {
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x30),0);
    SoundScript__FIGKLLNAMLG(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xd0),0);
  }
  if (*(long *)((long)__this + 0x48) != 0) {
    UnityEngine_AudioSource__Stop(*(long *)((long)__this + 0x48),0);
    CarController__OENKDDLNKCJ(__this,1);
    if (*(char *)((long)__this + 0x4f4) != '\0') {
      if (*(long *)((long)__this + 0x510) == 0) goto LAB_00c236e8;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear
                (*(long *)((long)__this + 0x510),
                 _Method_System_Collections_Generic_Dictionary_MeshRenderer__Material____Clear__);
      uVar12 = *(undefined8 *)((long)__this + 0x360);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar12,0,0);
      if ((uVar2 & 1) != 0) {
        if ((*(long *)((long)__this + 0x360) == 0) ||
           (lVar13 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x360),0),
           lVar13 == 0)) goto LAB_00c236e8;
        uVar2 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
        if ((uVar2 & 1) != 0) {
          *(undefined1 *)((long)__this + 0x505) = 1;
        }
      }
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Main_TypeInfo + 0xb8) != 0) {
      CarController__AKNFDJKEDOC(__this,*(undefined8 *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x60));
      lVar13 = *(long *)((long)__this + 0x520);
      if (lVar13 != 0) {
        lVar10 = 4;
        while (uVar11 = (int)lVar10 - 4, (int)uVar11 < *(int *)(lVar13 + 0x18)) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar13 = *(long *)((long)__this + 0x520);
            if (lVar13 == 0) goto LAB_00c236e8;
          }
          if (*(uint *)(lVar13 + 0x18) <= uVar11) goto LAB_00c23cec;
          lVar13 = *(long *)(lVar13 + lVar10 * 8);
          if (lVar13 == 0) goto LAB_00c236e8;
          if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
            uVar12 = 300;
            uVar8 = 800;
          }
          else {
            uVar12 = 100;
            uVar8 = 0x15e;
          }
          CarController__AOOHMIALOJP(__this,*(undefined8 *)(lVar13 + 0x10),uVar12,uVar8,0,0);
          lVar13 = *(long *)((long)__this + 0x520);
          if (lVar13 == 0) goto LAB_00c236e8;
          if (*(uint *)(lVar13 + 0x18) <= uVar11) goto LAB_00c23cec;
          lVar13 = *(long *)(lVar13 + lVar10 * 8);
          if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x20), lVar13 == 0)) goto LAB_00c236e8;
          UnityEngine_Collider__set_enabled(lVar13,0,0);
          lVar13 = *(long *)((long)__this + 0x520);
          lVar10 = lVar10 + 1;
          if (lVar13 == 0) goto LAB_00c236e8;
        }
        if (*(char *)((long)__this + 0x344) != '\0') {
          uVar12 = *(undefined8 *)((long)__this + 800);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar2 = UnityEngine_Object__op_Inequality(uVar12,0,0);
          if ((uVar2 & 1) != 0) {
            if (*(long *)((long)__this + 800) == 0) goto LAB_00c236e8;
            uVar12 = UnityEngine_GameObject__get_transform(*(long *)((long)__this + 800),0);
            CarController__AOOHMIALOJP(__this,uVar12,0x1e,0x3c,1,0);
          }
        }
        lVar13 = *(long *)((long)__this + 0x350);
        if (lVar13 != 0) {
          uVar2 = 0;
          goto LAB_00c23778;
        }
      }
    }
  }
LAB_00c236e8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
LAB_00c23778:
  if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar2) {
    if (*(char *)((long)__this + 0x314) != '\0') {
      uVar12 = *(undefined8 *)((long)__this + 0x2e0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar12,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)((long)__this + 0x2e0) == 0) goto LAB_00c236e8;
        uVar12 = UnityEngine_GameObject__get_transform(*(long *)((long)__this + 0x2e0),0);
        CarController__AOOHMIALOJP(__this,uVar12,100,200,1,0);
      }
      uVar12 = *(undefined8 *)((long)__this + 0x2e8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar12,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)((long)__this + 0x2e8) == 0) goto LAB_00c236e8;
        uVar12 = UnityEngine_GameObject__get_transform(*(long *)((long)__this + 0x2e8),0);
        CarController__AOOHMIALOJP(__this,uVar12,100,200,1,0);
      }
    }
    lVar13 = *(long *)((long)__this + 0x40);
    iVar1 = UnityEngine_Random__Range(250000,310000,0);
    if (*(long *)((long)__this + 0x38) != 0) {
      fVar15 = (float)UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
      if (cRam0000000001916e68 == '\0') {
        func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
        cRam0000000001916e68 = '\x01';
      }
      if (lVar13 != 0) {
        lVar10 = *(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8);
        in_s1 = in_s1 - *(float *)(lVar10 + 0x1c);
        UnityEngine_Rigidbody__AddExplosionForce
                  ((float)iVar1,fVar15 - *(float *)(lVar10 + 0x18),in_s1,
                   in_s2 - *(float *)(lVar10 + 0x20),0x453b8000,lVar13,0);
        CarController__OPEHNMHCDAJ(__this);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          return;
        }
        if (*(char *)((long)__this + 0x4f4) != '\0') {
          return;
        }
        uVar2 = CarController__CDEJPMCFIHK();
        if ((uVar2 & 1) == 0) {
          uVar12 = CarController__FIOKLNLIDNH(__this,uVar14);
        }
        else {
          uVar12 = CarController__FNDOKMIBKCA(__this);
        }
        UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar12,0);
        uVar2 = CarController__JMAEOBLLHHN();
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (*(long *)((long)__this + 0x38) != 0) {
          UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
          if (in_s1 <= 250.0) {
            return;
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (cRam0000000001916e67 == '\0') {
            func_0x00a67900(&Main_TypeInfo);
            cRam0000000001916e67 = '\x01';
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar13 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if (lVar13 != 0) {
            DAFNMLEKHAD__AKHLCOADEAA(lVar13,1,0);
            return;
          }
        }
      }
    }
    goto LAB_00c236e8;
  }
  if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_00c23cec;
  uVar12 = *(undefined8 *)(lVar13 + uVar2 * 8 + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  if ((uVar4 & 1) != 0) {
    lVar13 = *(long *)((long)__this + 0x350);
    if (lVar13 == 0) goto LAB_00c236e8;
    if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_00c23cec;
    lVar13 = *(long *)(lVar13 + uVar2 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_00c236e8;
    uVar4 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
    if ((uVar4 & 1) == 0) goto LAB_00c23a2c;
    lVar13 = *(long *)((long)__this + 0x350);
    if (lVar13 == 0) goto LAB_00c236e8;
    if (*(uint *)(lVar13 + 0x18) <= uVar2) {
LAB_00c23cec:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar13 = *(long *)(lVar13 + uVar2 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_00c236e8;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar13,&uStack_a0,_Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    uVar12 = uStack_a0;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    lVar13 = *(long *)((long)__this + 0x350);
    if (lVar13 == 0) goto LAB_00c236e8;
    if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_00c23cec;
    lVar13 = *(long *)(lVar13 + uVar2 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_00c236e8;
    lVar13 = UnityEngine_GameObject__get_transform(lVar13,0);
    if ((uVar4 & 1) == 0) {
      if (lVar13 != 0) {
        plVar5 = (long *)UnityEngine_Transform__GetEnumerator(lVar13,0);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        do {
          lVar13 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar13 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_00c238e8;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)func_0x00a9e6c4(plVar5,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00c238e8:
          uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar4 & 1) == 0) goto LAB_00c239a8;
          lVar13 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar13 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_00c23948;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)func_0x00a9e6c4(plVar5,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00c23948:
          plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
          if (plVar7 != (long *)0x0) {
            if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
               (*(long *)(*(long *)(*plVar7 + 200) +
                          (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8) !=
                _UnityEngine_Transform_TypeInfo)) {
              uVar12 = func_0x00a67eec(plVar7);
              plVar5 = (long *)func_0x00a67a34(plVar5,_System_IDisposable_TypeInfo);
              if (plVar5 == (long *)0x0) goto LAB_00c23d74;
              lVar13 = *plVar5;
              uVar2 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar2 == 0) goto LAB_00c23d4c;
              piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              goto LAB_00c23d34;
            }
          }
          CarController__AOOHMIALOJP(__this,plVar7,300,400,1,0);
        } while( true );
      }
      goto LAB_00c236e8;
    }
    CarController__AOOHMIALOJP(__this,lVar13,300,400,1,0);
  }
LAB_00c23a2c:
  lVar13 = *(long *)((long)__this + 0x350);
  uVar2 = uVar2 + 1;
  if (lVar13 == 0) goto LAB_00c236e8;
  goto LAB_00c23778;
LAB_00c239a8:
  plVar5 = (long *)func_0x00a67a34(plVar5,_System_IDisposable_TypeInfo);
  if (plVar5 != (long *)0x0) {
    lVar13 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _System_IDisposable_TypeInfo) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_00c23a10;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00a9e6c4(plVar5,_System_IDisposable_TypeInfo,0);
LAB_00c23a10:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  goto LAB_00c23a2c;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar9 = piVar9 + 4;
    if (uVar2 == 0) break;
LAB_00c23d34:
    if (*(long *)(piVar9 + -2) == _System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar13 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_00c23d68;
    }
  }
LAB_00c23d4c:
  puVar6 = (undefined8 *)func_0x00a9e6c4(plVar5,_System_IDisposable_TypeInfo,0);
LAB_00c23d68:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_00c23d74:
  func_0x00b65214(uVar12);
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b48(0);
}


// ==== public void HCBBKPNEMLE() { }   @0xb25110

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__HCBBKPNEMLE(void *__this)

{
  *(undefined4 *)((long)__this + 0x508) = 0xbf800000;
  return;
}


// ==== private void HOKDBNFEOCB() { }   @0xb267bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__HOKDBNFEOCB(void *__this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong in_d1;
  float in_s2;
  float fVar13;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  undefined8 uStack_a8;
  
  if ((bRam0000000001917034 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_MeshRenderer__Material____GetEnumer
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_Enumerator_MeshRenderer__Material__
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_Enumerator_MeshRenderer__Material__
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_Enumerator_MeshRenderer__Material__
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_KeyValuePair_MeshRenderer__Material____get_Key
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_KeyValuePair_MeshRenderer__Material____get_Val
                   );
    func_0x00a67900(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    func_0x00a67900(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_bomb);
    bRam0000000001917034 = 1;
  }
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lStack_f0 = 0;
  uStack_e8 = 0;
  lVar2 = UnityEngine_GameObject__FindGameObjectsWithTag(_Str_bomb,0);
  if (lVar2 != 0) {
    uVar7 = *(undefined8 *)((long)__this + 0x38);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if (((uVar3 & 1) != 0) && (uVar1 = *(uint *)(lVar2 + 0x18), 0 < (int)uVar1)) {
      lVar8 = 0;
      do {
        fVar11 = (float)in_d1;
        if (uVar1 <= (uint)lVar8) goto LAB_00c26f50;
        lVar4 = *(long *)(lVar2 + 0x20 + lVar8 * 8);
        if ((lVar4 == 0) || (lVar4 = UnityEngine_GameObject__get_transform(lVar4,0), lVar4 == 0))
        goto LAB_00c26b44;
        fVar9 = (float)UnityEngine_Transform__get_position(lVar4,0);
        if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c26b44;
        fVar13 = in_s2;
        fVar12 = fVar11;
        fVar10 = (float)UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
        if (cRam0000000001916a9f == '\0') {
          func_0x00a67900(&System_Math_TypeInfo);
          cRam0000000001916a9f = '\x01';
        }
        if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        in_s2 = in_s2 - fVar13;
        in_d1 = (ulong)(uint)(in_s2 * in_s2);
        if (SQRT(in_s2 * in_s2 +
                 (fVar9 - fVar10) * (fVar9 - fVar10) + (fVar11 - fVar12) * (fVar11 - fVar12)) < 25.0
           ) {
          if (*(uint *)(lVar2 + 0x18) <= (uint)lVar8) goto LAB_00c26f50;
          uVar7 = *(undefined8 *)(lVar2 + 0x20 + lVar8 * 8);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          UnityEngine_Object__Destroy(uVar7,0);
        }
        uVar1 = *(uint *)(lVar2 + 0x18);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar1);
    }
  }
  lVar2 = *(long *)((long)__this + 0x520);
  if (lVar2 != 0) {
    lVar8 = 4;
    while( true ) {
      uVar3 = lVar8 - 4;
      if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar3) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_00c26f50;
      lVar4 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar4 != 0) {
        lVar2 = *(long *)(lVar4 + 0x10);
        if ((lVar2 == 0) || (lVar2 = UnityEngine_Component__get_gameObject(lVar2,0), lVar2 == 0))
        goto LAB_00c26b44;
        UnityEngine_GameObject__SetActive(lVar2,1,0);
        lVar2 = *(long *)((long)__this + 0x520);
        if (lVar2 == 0) goto LAB_00c26b44;
        if (*(uint *)(lVar2 + 0x18) <= uVar3) {
LAB_00c26f50:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar2 = *(long *)(lVar2 + lVar8 * 8);
        if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x20), lVar2 == 0)) goto LAB_00c26b44;
        UnityEngine_Collider__set_enabled(lVar2,1,0);
        lVar2 = *(long *)((long)__this + 0x520);
      }
      lVar8 = lVar8 + 1;
      if (lVar2 == 0) goto LAB_00c26b44;
    }
    lVar2 = *(long *)((long)__this + 0x518);
    if (lVar2 != 0) {
      iVar6 = 0;
      goto LAB_00c26abc;
    }
  }
  goto LAB_00c26b44;
  while( true ) {
    lVar2 = *(long *)((long)__this + 0x518);
    iVar6 = iVar6 + 1;
    if (lVar2 == 0) break;
LAB_00c26abc:
    if (*(int *)(lVar2 + 0x18) <= iVar6) {
      if (*(long *)((long)__this + 0x510) != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator
                  (*(long *)((long)__this + 0x510),&uStack_120,
                   _Method_System_Collections_Generic_Dictionary_MeshRenderer__Material____GetEnumer
                  );
        uStack_d0 = CONCAT44(uStack_10c,uStack_110);
        uStack_d8 = uStack_118;
        uStack_e0 = uStack_120;
        uStack_c8 = uStack_108;
        uStack_c0 = uStack_100;
        while (uVar3 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext
                                 (&uStack_e0,
                                  _Method_System_Collections_Generic_Dictionary_Enumerator_MeshRenderer__Material__
                                 ), (uVar3 & 1) != 0) {
          func_0x00b7fb78(&uStack_e0,&lStack_b0,
                          _Method_System_Collections_Generic_Dictionary_Enumerator_MeshRenderer__Material__
                         );
          lStack_f0 = lStack_b0;
          uStack_e8 = uStack_a8;
          func_0x00b7fc68(&lStack_f0,&lStack_b0,
                          _Method_System_Collections_Generic_KeyValuePair_MeshRenderer__Material____get_Key
                         );
          lVar2 = lStack_b0;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar3 = UnityEngine_Object__op_Inequality(lVar2,0,0);
          if ((uVar3 & 1) != 0) {
            func_0x00b7fc68(&lStack_f0,&lStack_b0,
                            _Method_System_Collections_Generic_KeyValuePair_MeshRenderer__Material____get_Key
                           );
            lVar2 = lStack_b0;
            func_0x00b7fd54(&lStack_f0,&lStack_b0,
                            _Method_System_Collections_Generic_KeyValuePair_MeshRenderer__Material____get_Val
                           );
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            UnityEngine_Renderer__set_materials(lVar2,lStack_b0,0);
          }
        }
        System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose
                  (&uStack_e0,
                   _Method_System_Collections_Generic_Dictionary_Enumerator_MeshRenderer__Material__
                  );
        uVar7 = *(undefined8 *)((long)__this + 0x490);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)((long)__this + 0x490) == 0) break;
          UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x490),1,0);
        }
        if (*(char *)((long)__this + 0x505) != '\0') {
          uVar7 = *(undefined8 *)((long)__this + 0x360);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar3 & 1) != 0) {
            if ((*(long *)((long)__this + 0x360) == 0) ||
               (lVar2 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x360),0),
               lVar2 == 0)) break;
            UnityEngine_GameObject__SetActive(lVar2,1,0);
          }
        }
        uVar7 = *(undefined8 *)((long)__this + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar3 & 1) != 0) {
          lVar2 = *(long *)((long)__this + 0x38);
          if (cRam000000000191678a == '\0') {
            func_0x00a67900(&UnityEngine_Quaternion_TypeInfo);
            cRam000000000191678a = '\x01';
          }
          if (lVar2 == 0) break;
          puVar5 = *(undefined4 **)(_UnityEngine_Quaternion_TypeInfo + 0xb8);
          UnityEngine_Transform__set_rotation(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar2,0);
          if (*(long *)((long)__this + 0x38) == 0) break;
          UnityEngine_Transform__set_position
                    (*(undefined4 *)((long)__this + 0x4f8),*(undefined4 *)((long)__this + 0x4fc),
                     *(undefined4 *)((long)__this + 0x500),*(long *)((long)__this + 0x38),0);
        }
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit
                  (&uStack_140,*(undefined4 *)((long)__this + 0x1c8),0);
        uStack_110 = uStack_130;
        uStack_118 = uStack_138;
        uStack_120 = uStack_140;
        *(undefined4 *)((long)__this + 0x19c) = uStack_130;
        *(undefined8 *)((long)__this + 0x194) = uStack_138;
        *(undefined8 *)((long)__this + 0x18c) = uStack_140;
        fVar11 = (float)UnityEngine_Time__get_time(0);
        *(float *)((long)__this + 0x3e4) = fVar11 + 10.0;
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined1 *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) = 0;
        uVar7 = *(undefined8 *)((long)__this + 0x28);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)((long)__this + 0x28) == 0) break;
          CarCamera__OHIFDCBAEFL(*(long *)((long)__this + 0x28),0);
        }
        *(undefined1 *)((long)__this + 0x3c8) = 0;
        *(undefined1 *)((long)__this + 0x4f4) = 0;
        uVar7 = *(undefined8 *)((long)__this + 0x48);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (cRam0000000001916e67 == '\0') {
            func_0x00a67900(&Main_TypeInfo);
            cRam0000000001916e67 = '\x01';
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if (lVar2 == 0) break;
          uVar3 = DAFNMLEKHAD__BMMOMBGDEKF(lVar2,0);
          if ((uVar3 & 1) != 0) {
            if (*(long *)((long)__this + 0x48) == 0) break;
            uVar3 = UnityEngine_AudioSource__get_isPlaying(*(long *)((long)__this + 0x48),0);
            if ((uVar3 & 1) == 0) {
              if (*(long *)((long)__this + 0x48) == 0) break;
              UnityEngine_AudioSource__Play(*(long *)((long)__this + 0x48),0);
            }
          }
        }
        *(undefined4 *)((long)__this + 0x49c) = 0;
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_140,0,0);
        uStack_118 = uStack_138;
        uStack_120 = uStack_140;
        uStack_110 = uStack_130;
        *(undefined8 *)((long)__this + 0x4bc) = uStack_138;
        *(undefined8 *)((long)__this + 0x4b4) = uStack_140;
        *(undefined4 *)((long)__this + 0x4c4) = uStack_130;
        *(undefined4 *)((long)__this + 0x4b0) = uStack_130;
        uVar7 = *(undefined8 *)((long)__this + 0x30);
        *(undefined8 *)((long)__this + 0x4a8) = uStack_138;
        *(undefined8 *)((long)__this + 0x4a0) = uStack_140;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar3 & 1) == 0) {
LAB_00c26f10:
          *(undefined2 *)((long)__this + 0x215) = 0;
          CarController__OJOPPNIEGLL(__this);
          return;
        }
        if ((*(long *)((long)__this + 0x30) != 0) &&
           (lVar2 = *(long *)(*(long *)((long)__this + 0x30) + 0x50), lVar2 != 0)) {
          GUIWindow__HEGIHOAJOKK(lVar2,0,0);
          goto LAB_00c26f10;
        }
      }
      break;
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
              (lVar2,iVar6,&uStack_120,
               _Method_System_Collections_Generic_List_GameObject__get_Item__);
    uVar7 = uStack_120;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)((long)__this + 0x518) == 0) break;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                (*(long *)((long)__this + 0x518),iVar6,&uStack_120,
                 _Method_System_Collections_Generic_List_GameObject__get_Item__);
      uVar7 = uStack_120;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      UnityEngine_Object__Destroy(uVar7,0);
    }
  }
LAB_00c26b44:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void AFPLNBDNJHM() { }   @0xb2542c

/* WARNING: Possible PIC construction at 0x00c2548c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c254f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c608ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c608dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c6093c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c6099c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c609d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00a7ff24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00a7ffc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c25588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61ef4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61f28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e40c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e49c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e4c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e4fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e5fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e5a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e5d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c25628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c62a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c62acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c6100c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c610c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c610ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c612c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c612f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c613bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c613f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00c613f4) */
/* WARNING: Removing unreachable block (ram,0x00c61454) */
/* WARNING: Removing unreachable block (ram,0x00c61518) */
/* WARNING: Removing unreachable block (ram,0x00c613c0) */
/* WARNING: Removing unreachable block (ram,0x00c6138c) */
/* WARNING: Removing unreachable block (ram,0x00c61324) */
/* WARNING: Removing unreachable block (ram,0x00c612f8) */
/* WARNING: Removing unreachable block (ram,0x00c612c4) */
/* WARNING: Removing unreachable block (ram,0x00c61234) */
/* WARNING: Removing unreachable block (ram,0x00c610f0) */
/* WARNING: Removing unreachable block (ram,0x00c60fbc) */
/* WARNING: Removing unreachable block (ram,0x00c60f8c) */
/* WARNING: Removing unreachable block (ram,0x00c62ad0) */
/* WARNING: Removing unreachable block (ram,0x00c62a8c) */
/* WARNING: Removing unreachable block (ram,0x00c5e5d8) */
/* WARNING: Removing unreachable block (ram,0x00c5e5ac) */
/* WARNING: Removing unreachable block (ram,0x00c5e564) */
/* WARNING: Removing unreachable block (ram,0x00c5e500) */
/* WARNING: Removing unreachable block (ram,0x00c5e4c8) */
/* WARNING: Removing unreachable block (ram,0x00c5e4a0) */
/* WARNING: Removing unreachable block (ram,0x00c5e44c) */
/* WARNING: Removing unreachable block (ram,0x00c61fac) */
/* WARNING: Removing unreachable block (ram,0x00c61f80) */
/* WARNING: Removing unreachable block (ram,0x00c61f2c) */
/* WARNING: Removing unreachable block (ram,0x00c61ef8) */
/* WARNING: Removing unreachable block (ram,0x00c61ecc) */
/* WARNING: Removing unreachable block (ram,0x00c61e80) */
/* WARNING: Removing unreachable block (ram,0x00c61e30) */
/* WARNING: Removing unreachable block (ram,0x00c60b1c) */
/* WARNING: Removing unreachable block (ram,0x00c60ad0) */
/* WARNING: Removing unreachable block (ram,0x00c60a88) */
/* WARNING: Removing unreachable block (ram,0x00c60a50) */
/* WARNING: Removing unreachable block (ram,0x00c60a18) */
/* WARNING: Removing unreachable block (ram,0x00c609d4) */
/* WARNING: Removing unreachable block (ram,0x00c609a0) */
/* WARNING: Removing unreachable block (ram,0x00c6096c) */
/* WARNING: Removing unreachable block (ram,0x00c608e0) */
/* WARNING: Removing unreachable block (ram,0x00c6086c) */
/* WARNING: Removing unreachable block (ram,0x00c254f4) */
/* WARNING: Removing unreachable block (ram,0x00c61184) */
/* WARNING: Removing unreachable block (ram,0x00c60f74) */
/* WARNING: Removing unreachable block (ram,0x00c60f88) */
/* WARNING: Removing unreachable block (ram,0x00c60f90) */
/* WARNING: Removing unreachable block (ram,0x00c60f9c) */
/* WARNING: Removing unreachable block (ram,0x00b05788) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__AFPLNBDNJHM(void *__this)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  bool bVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined *__this_00;
  void *pvVar28;
  long *plVar29;
  long lVar30;
  undefined *unaff_x19;
  undefined *unaff_x20;
  undefined8 uVar31;
  undefined *unaff_x21;
  undefined8 uVar32;
  byte bVar33;
  int *piVar34;
  undefined *unaff_x22;
  undefined *puVar35;
  undefined *unaff_x23;
  undefined *puVar36;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined1 *unaff_x30;
  float fVar37;
  undefined4 uVar38;
  undefined1 auVar39 [16];
  byte abStack_b8 [120];
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  
  if ((bRam0000000001917037 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917037 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    unaff_x30 = (undefined1 *)0xc25490;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    lVar27 = _UnityEngine_Object_TypeInfo;
    unaff_x19 = __this;
    unaff_x20 = *(undefined **)((long)__this + 0x30);
    unaff_x22 = &UnityEngine_Object_TypeInfo;
  }
  else {
    uVar26 = UnityEngine_Object__op_Inequality(*(undefined **)((long)__this + 0x30),0,0);
    if ((uVar26 & 1) == 0) {
      return;
    }
    fVar37 = (float)UnityEngine_Time__get_timeScale(0);
    if (0.0 < fVar37) {
LAB_00c254dc:
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        unaff_x30 = (undefined1 *)0xc254f4;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        lVar27 = _CarController_TypeInfo;
        unaff_x19 = __this;
        unaff_x20 = &CarController_TypeInfo;
        unaff_x22 = &UnityEngine_Object_TypeInfo;
      }
      else {
        if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) != '\0') goto LAB_00c25504;
        unaff_x19 = *(undefined **)((long)__this + 0x30);
        if (unaff_x19 == (undefined *)0x0) goto LAB_00c25694;
        puVar6 = &stack0xffffffffffffffc0;
        puVar7 = &stack0xffffffffffffffc0;
        puVar8 = &stack0xffffffffffffffc0;
        puVar9 = &stack0xffffffffffffffc0;
        puVar10 = &stack0xffffffffffffffc0;
        puVar11 = &stack0xffffffffffffffc0;
        puVar12 = &stack0xffffffffffffffc0;
        puVar13 = &stack0xffffffffffffffc0;
        puVar14 = &stack0xffffffffffffffc0;
        puVar15 = &stack0xffffffffffffffc0;
        puVar16 = &stack0xffffffffffffffc0;
        puVar17 = &stack0xffffffffffffffc0;
        puVar18 = &stack0xffffffffffffffc0;
        puVar19 = &stack0xffffffffffffffc0;
        puVar20 = &stack0xffffffffffffffc0;
        puVar21 = &stack0xffffffffffffffc0;
        puVar22 = &stack0xffffffffffffffc0;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        unaff_x20 = (undefined *)0x0;
        if ((bRam000000000191721e & 1) == 0) {
          func_0x00a67900(&AdvController_TypeInfo,0,0);
          func_0x00a67900(&CarController_TypeInfo);
          func_0x00a67900(&GUIGameplay_TypeInfo);
          func_0x00a67900(&Main_TypeInfo);
          func_0x00a67900(&Menu_TypeInfo);
          func_0x00a67900(&UnityEngine_Object_TypeInfo);
          func_0x00a67900(&SoundScript_TypeInfo);
          bRam000000000191721e = 1;
        }
        unaff_x19[0xbc] = 0;
        *(undefined4 *)(unaff_x19 + 0xb8) = 0;
        fVar37 = (float)UnityEngine_Time__get_timeScale(0);
        if (0.0 < fVar37) {
          UnityEngine_Time__set_timeScale(0,0);
        }
        unaff_x21 = (undefined *)0x1917000;
        unaff_x23 = &Main_TypeInfo;
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          unaff_x30 = (undefined1 *)0xc60fbc;
          register0x00000008 = (BADSPACEBASE *)puVar6;
          lVar27 = _Main_TypeInfo;
          goto SUB_00a67a30;
        }
        if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
LAB_00c611f4:
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            unaff_x30 = &LAB_00c61204;
            register0x00000008 = (BADSPACEBASE *)puVar12;
            lVar27 = _Main_TypeInfo;
          }
          else {
            unaff_x21 = (undefined *)0x1916000;
            if (cRam0000000001916e67 == '\0') {
              func_0x00a67900(&Main_TypeInfo);
              cRam0000000001916e67 = '\x01';
            }
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              unaff_x30 = (undefined1 *)0xc61234;
              register0x00000008 = (BADSPACEBASE *)puVar13;
              lVar27 = _Main_TypeInfo;
            }
            else {
              lVar27 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (lVar27 == 0) goto LAB_00c6153c;
              uVar26 = DAFNMLEKHAD__BMMOMBGDEKF(lVar27,0);
              if ((uVar26 & 1) != 0) {
                if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                   (lVar27 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x48), lVar27 == 0))
                goto LAB_00c6153c;
                uVar26 = UnityEngine_AudioSource__get_isPlaying(lVar27,0);
                if ((uVar26 & 1) != 0) {
                  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                     (lVar27 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x48), lVar27 == 0))
                  goto LAB_00c6153c;
                  UnityEngine_AudioSource__Pause(lVar27,0);
                }
              }
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                unaff_x30 = &LAB_00c61298;
                register0x00000008 = (BADSPACEBASE *)puVar14;
                lVar27 = _Main_TypeInfo;
              }
              else {
                if (cRam0000000001916e67 == '\0') {
                  func_0x00a67900(&Main_TypeInfo);
                  cRam0000000001916e67 = '\x01';
                }
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  unaff_x30 = (undefined1 *)0xc612c4;
                  register0x00000008 = (BADSPACEBASE *)puVar15;
                  lVar27 = _Main_TypeInfo;
                }
                else {
                  lVar27 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                  if (lVar27 == 0) goto LAB_00c6153c;
                  uVar26 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar27,0);
                  if ((uVar26 & 1) != 0) {
                    unaff_x21 = &SoundScript_TypeInfo;
                    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                      unaff_x30 = (undefined1 *)0xc612f8;
                      register0x00000008 = (BADSPACEBASE *)puVar16;
                      lVar27 = _SoundScript_TypeInfo;
                      goto SUB_00a67a30;
                    }
                    lVar27 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
                    if (lVar27 == 0) goto LAB_00c6153c;
                    uVar26 = UnityEngine_AudioSource__get_isPlaying(lVar27,0);
                    if ((uVar26 & 1) != 0) {
                      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                        unaff_x30 = (undefined1 *)0xc61324;
                        register0x00000008 = (BADSPACEBASE *)puVar17;
                        lVar27 = _SoundScript_TypeInfo;
                        goto SUB_00a67a30;
                      }
                      lVar27 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
                      if (lVar27 == 0) goto LAB_00c6153c;
                      UnityEngine_AudioSource__Pause(lVar27,0);
                    }
                  }
                  unaff_x21 = &Menu_TypeInfo;
                  if (*(char *)(*(long *)(_AdvController_TypeInfo + 0xb8) + 8) == '\0') {
                    if (*(long *)(unaff_x19 + 0x438) == 0) goto LAB_00c6153c;
                    uVar26 = UnityEngine_GameObject__get_activeInHierarchy
                                       (*(long *)(unaff_x19 + 0x438),0);
                    if ((uVar26 & 1) == 0) {
                      uVar38 = UnityEngine_AudioListener__get_volume(0);
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        unaff_x30 = (undefined1 *)0xc6138c;
                        register0x00000008 = (BADSPACEBASE *)puVar18;
                        lVar27 = _Menu_TypeInfo;
                        goto SUB_00a67a30;
                      }
                      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x14) = uVar38;
                      UnityEngine_AudioListener__set_volume(0,0);
                    }
                  }
                  unaff_x22 = &GUIGameplay_TypeInfo;
                  lVar27 = _GUIGameplay_TypeInfo;
                  if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
                    unaff_x30 = (undefined1 *)0xc613c0;
                    register0x00000008 = (BADSPACEBASE *)puVar19;
                  }
                  else {
                    if (*(long *)(unaff_x19 + 0x410) == 0) goto LAB_00c6153c;
                    iVar24 = *(int *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4);
                    if (iVar24 < *(int *)(*(long *)(unaff_x19 + 0x410) + 0x18)) {
                      if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
                        unaff_x30 = (undefined1 *)0xc613f4;
                        register0x00000008 = (BADSPACEBASE *)puVar22;
                        goto SUB_00a67a30;
                      }
                      if (iVar24 < 0) goto LAB_00c6147c;
                      if ((*(long *)(unaff_x19 + 0x50) == 0) ||
                         (lVar27 = UnityEngine_Component__get_gameObject
                                             (*(long *)(unaff_x19 + 0x50),0), lVar27 == 0))
                      goto LAB_00c6153c;
                      uVar26 = UnityEngine_GameObject__get_activeSelf(lVar27,0);
                      if ((uVar26 & 1) == 0) goto LAB_00c6147c;
                      if ((*(long *)(unaff_x19 + 0x78) == 0) ||
                         (lVar27 = UnityEngine_Component__get_gameObject
                                             (*(long *)(unaff_x19 + 0x78),0), lVar27 == 0))
                      goto LAB_00c6153c;
                      uVar26 = UnityEngine_GameObject__get_activeSelf(lVar27,0);
                      if ((uVar26 & 1) == 0) goto LAB_00c6147c;
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        unaff_x30 = (undefined1 *)0xc61454;
                        register0x00000008 = (BADSPACEBASE *)puVar21;
                        lVar27 = _Menu_TypeInfo;
                        goto SUB_00a67a30;
                      }
                      *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xb) = 1;
                      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_00c6153c;
                      GUIWindow__JGDCBENNDFO(*(long *)(unaff_x19 + 0x50),0,0);
                    }
                    else {
LAB_00c6147c:
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xb) = 0;
                    }
                    GUIGameplay__CBFONCCJIEE(unaff_x19);
                    GUIGameplay__LLAEHJGOFLG(unaff_x19);
                    GUIGameplay__IMJEJKHBIMO(unaff_x19);
                    GUIGameplay__ODHAOMJKKAE(unaff_x19);
                    lVar27 = *(long *)(unaff_x19 + 0x68);
                    if (unaff_x19[0x3f1] == '\0') {
                      if (lVar27 == 0) goto LAB_00c6153c;
                    }
                    else {
                      if (lVar27 == 0) goto LAB_00c6153c;
                      *(undefined1 *)(lVar27 + 0x21) = 0;
                      *(undefined1 *)(lVar27 + 0x23) = 0;
                    }
                    GUIWindow__HEGIHOAJOKK(lVar27,0,0);
                    if (unaff_x19[0x3f1] != '\0') {
                      lVar27 = *(long *)(unaff_x19 + 0x68);
                      if (lVar27 == 0) {
LAB_00c6153c:
                    /* WARNING: Subroutine does not return */
                        il2cpp_throw_967b50();
                      }
                      *(undefined1 *)(lVar27 + 0x21) = 1;
                      *(undefined1 *)(lVar27 + 0x23) = 1;
                    }
                    unaff_x19[0x3f1] = 0;
                    if (*(int *)(_Menu_TypeInfo + 0xe0) != 0) {
                      *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 10) = 1;
                      return;
                    }
                    unaff_x30 = (undefined1 *)0xc61518;
                    register0x00000008 = (BADSPACEBASE *)puVar20;
                    lVar27 = _Menu_TypeInfo;
                  }
                }
              }
            }
          }
        }
        else {
          unaff_x22 = &UnityEngine_Object_TypeInfo;
          uVar31 = *(undefined8 *)(unaff_x19 + 0x3d8);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar26 = UnityEngine_Object__op_Equality(uVar31,0,0);
          if ((uVar26 & 1) == 0) {
LAB_00c61084:
            unaff_x21 = *(undefined **)(unaff_x19 + 0x3d8);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              unaff_x30 = &LAB_00c61098;
              register0x00000008 = (BADSPACEBASE *)puVar9;
              lVar27 = _UnityEngine_Object_TypeInfo;
            }
            else {
              uVar26 = UnityEngine_Object__op_Inequality(unaff_x21,0,0);
              if ((uVar26 & 1) == 0) goto LAB_00c611f4;
              unaff_x21 = *(undefined **)(unaff_x19 + 0x3d8);
              unaff_x22 = *(undefined **)(unaff_x19 + 0x3e0);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) != 0) {
                uVar26 = UnityEngine_Object__op_Equality(unaff_x21,unaff_x22,0);
                if ((uVar26 & 1) == 0) {
                  bVar33 = 1;
                }
                else {
                  unaff_x21 = &CarController_TypeInfo;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    unaff_x30 = (undefined1 *)0xc610f0;
                    register0x00000008 = (BADSPACEBASE *)puVar11;
                    lVar27 = _CarController_TypeInfo;
                    goto SUB_00a67a30;
                  }
                  bVar33 = *(byte *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x34);
                }
                unaff_x21 = *(undefined **)(unaff_x19 + 0x3d8);
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                pvVar28 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                if (pvVar28 == (void *)0x0) goto LAB_00c6153c;
                bVar23 = Level__get_IsEvent(pvVar28);
                bVar33 = bVar33 & (bVar23 ^ 0xffU);
                unaff_x22 = unaff_x21;
                if ((bVar33 & 1) != 0) {
                  unaff_x22 = (undefined *)0x0;
                }
                if ((bVar33 & 1) == 0) {
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  pvVar28 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                  if (pvVar28 == (void *)0x0) goto LAB_00c6153c;
                  bVar23 = Level__get_IsEvent(pvVar28);
                  if (bVar23) {
                    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                      unaff_x30 = (undefined1 *)0xc61184;
                      lVar27 = _Main_TypeInfo;
                      goto SUB_00a67a30;
                    }
                    lVar27 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                    if (lVar27 == 0) goto LAB_00c6153c;
                    unaff_x21 = unaff_x22;
                    if (*(long *)(lVar27 + 0x50) == 0) {
                      bVar23 = false;
                    }
                    else {
                      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                        lVar27 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                        if (lVar27 == 0) goto LAB_00c6153c;
                      }
                      if (*(long *)(lVar27 + 0x50) == 0) goto LAB_00c6153c;
                      iVar24 = EventContest__get_TimeLeft(*(long *)(lVar27 + 0x50),0);
                      bVar23 = 300 < iVar24;
                    }
                  }
                  else {
                    bVar23 = false;
                  }
                }
                else {
                  bVar23 = true;
                }
                if (unaff_x21 == (undefined *)0x0) goto LAB_00c6153c;
                UnityEngine_GameObject__SetActive(unaff_x21,bVar23,0);
                goto LAB_00c611f4;
              }
              unaff_x30 = &LAB_00c610c4;
              register0x00000008 = (BADSPACEBASE *)puVar10;
              lVar27 = _UnityEngine_Object_TypeInfo;
            }
          }
          else {
            unaff_x21 = *(undefined **)(unaff_x19 + 0x3e0);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              unaff_x30 = &LAB_00c61010;
              register0x00000008 = (BADSPACEBASE *)puVar7;
              lVar27 = _UnityEngine_Object_TypeInfo;
            }
            else {
              uVar26 = UnityEngine_Object__op_Inequality(unaff_x21,0,0);
              if ((uVar26 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0x3e0) == 0) goto LAB_00c6153c;
                uVar26 = UnityEngine_GameObject__get_activeSelf(*(long *)(unaff_x19 + 0x3e0),0);
                if ((uVar26 & 1) != 0) {
                  *(undefined8 *)(unaff_x19 + 0x3d8) = *(undefined8 *)(unaff_x19 + 0x3e0);
                }
              }
              unaff_x21 = *(undefined **)(unaff_x19 + 1000);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) != 0) {
                uVar26 = UnityEngine_Object__op_Inequality(unaff_x21,0,0);
                if ((uVar26 & 1) != 0) {
                  if (*(long *)(unaff_x19 + 1000) == 0) goto LAB_00c6153c;
                  uVar26 = UnityEngine_GameObject__get_activeSelf(*(long *)(unaff_x19 + 1000),0);
                  if ((uVar26 & 1) != 0) {
                    *(undefined8 *)(unaff_x19 + 0x3d8) = *(undefined8 *)(unaff_x19 + 1000);
                  }
                }
                goto LAB_00c61084;
              }
              unaff_x30 = &LAB_00c61054;
              register0x00000008 = (BADSPACEBASE *)puVar8;
              lVar27 = _UnityEngine_Object_TypeInfo;
            }
          }
        }
      }
    }
    else {
      if (((*(long *)((long)__this + 0x30) == 0) ||
          (lVar27 = *(long *)(*(long *)((long)__this + 0x30) + 0x78), lVar27 == 0)) ||
         (lVar27 = UnityEngine_Component__get_gameObject(lVar27,0), lVar27 == 0)) goto LAB_00c25694;
      uVar26 = UnityEngine_GameObject__get_activeSelf(lVar27,0);
      if ((uVar26 & 1) != 0) goto LAB_00c254dc;
LAB_00c25504:
      if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c25694;
      uVar31 = *(undefined8 *)(*(long *)((long)__this + 0x30) + 0x68);
      uVar32 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar26 = UnityEngine_Object__op_Equality(uVar32,uVar31,0);
      if ((uVar26 & 1) == 0) {
        if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c25694;
        unaff_x20 = *(undefined **)(*(long *)((long)__this + 0x30) + 0x80);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          unaff_x30 = (undefined1 *)0xc2558c;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
          lVar27 = _UnityEngine_Object_TypeInfo;
          unaff_x19 = __this;
          unaff_x21 = (undefined *)**(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          unaff_x22 = &UnityEngine_Object_TypeInfo;
          unaff_x23 = &GUIWindow_TypeInfo;
          goto SUB_00a67a30;
        }
        uVar26 = UnityEngine_Object__op_Equality
                           ((undefined *)**(undefined8 **)(_GUIWindow_TypeInfo + 0xb8),unaff_x20,0);
        if ((uVar26 & 1) != 0) {
          if (((*(long *)((long)__this + 0x30) == 0) ||
              (lVar27 = *(long *)(*(long *)((long)__this + 0x30) + 0x80), lVar27 == 0)) ||
             (lVar27 = UnityEngine_Component__get_gameObject(lVar27,0), lVar27 == 0))
          goto LAB_00c25694;
          uVar26 = UnityEngine_GameObject__get_active(lVar27,0);
          if ((uVar26 & 1) != 0) {
            if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c25694;
            lVar27 = *(long *)(*(long *)((long)__this + 0x30) + 0x80);
            if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50(0,0);
            }
            GUIWindow__JGDCBENNDFO(lVar27,0,0);
            unaff_x20 = &Main_TypeInfo;
            if ((bRam0000000001917230 & 1) == 0) {
              func_0x00a67900(&Main_TypeInfo);
              func_0x00a67900(&Menu_TypeInfo);
              func_0x00a67900(&UnityEngine_Object_TypeInfo);
              func_0x00a67900(&SoundScript_TypeInfo);
              func_0x00a67900(&Str_garage);
              bRam0000000001917230 = 1;
            }
            UnityEngine_Time__set_timeScale(0,0);
            unaff_x19 = (undefined *)0x1917000;
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              unaff_x30 = (undefined1 *)0xc61e30;
              register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
              lVar27 = _Main_TypeInfo;
              goto SUB_00a67a30;
            }
            lVar27 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
            if (lVar27 == 0) goto LAB_00c61fc4;
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              lVar27 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
              if (lVar27 == 0) goto LAB_00c61fec;
            }
            if (*(int *)(lVar27 + 0x10) == -1) {
LAB_00c61f14:
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                unaff_x30 = (undefined1 *)0xc61f2c;
                register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
                lVar27 = _Menu_TypeInfo;
                unaff_x19 = &Menu_TypeInfo;
              }
              else {
                *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 8) = 1;
LAB_00c61f3c:
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                lVar27 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                if (lVar27 == 0) {
LAB_00c61fec:
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b50();
                }
                if (*(int *)(lVar27 + 0x10) == -1) {
                  unaff_x19 = &SoundScript_TypeInfo;
                  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                    unaff_x30 = (undefined1 *)0xc61f80;
                    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
                    lVar27 = _SoundScript_TypeInfo;
                    goto SUB_00a67a30;
                  }
                  lVar27 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x20);
                  if (lVar27 == 0) goto LAB_00c61fec;
                  uVar26 = UnityEngine_AudioSource__get_isPlaying(lVar27,0);
                  if ((uVar26 & 1) != 0) {
                    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                      unaff_x30 = (undefined1 *)0xc61fac;
                      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
                      lVar27 = _SoundScript_TypeInfo;
                      goto SUB_00a67a30;
                    }
                    lVar27 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x20);
                    if (lVar27 == 0) goto LAB_00c61fec;
                    UnityEngine_AudioSource__Stop(lVar27,0);
                  }
                }
LAB_00c61fc4:
                unaff_x19 = _Str_garage;
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  unaff_x30 = (undefined1 *)0xc61fdc;
                  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
                  lVar27 = _Main_TypeInfo;
                  unaff_x19 = &Str_garage;
                }
                else {
                  unaff_x20 = (undefined *)0x1917000;
                  unaff_x21 = &UnityEngine_SceneManagement_SceneManager_TypeInfo;
                  if ((bRam000000000191720b & 1) == 0) {
                    func_0x00a67900(&CarController_TypeInfo);
                    func_0x00a67900(&UnityEngine_Object_TypeInfo);
                    func_0x00a67900(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
                    func_0x00a67900(&SoundScript_TypeInfo);
                    bRam000000000191720b = 1;
                  }
                  if (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo + 0xe0) == 0) {
                    unaff_x30 = &LAB_00c5e410;
                    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                    lVar27 = _UnityEngine_SceneManagement_SceneManager_TypeInfo;
                  }
                  else {
                    UnityEngine_SceneManagement_SceneManager__GetActiveScene(0);
                    iVar24 = UnityEngine_SceneManagement_Scene__get_buildIndex
                                       (&stack0xffffffffffffffd8,0);
                    if (iVar24 == 0) {
                      unaff_x20 = &SoundScript_TypeInfo;
                      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                        unaff_x30 = (undefined1 *)0xc5e5ac;
                        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                        lVar27 = _SoundScript_TypeInfo;
                      }
                      else {
                        lVar27 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
                        if (lVar27 == 0) goto LAB_00c5e61c;
                        uVar26 = UnityEngine_AudioSource__get_isPlaying(lVar27,0);
                        if ((uVar26 & 1) != 0) {
                          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                            unaff_x30 = (undefined1 *)0xc5e5d8;
                            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                            lVar27 = _SoundScript_TypeInfo;
                            goto SUB_00a67a30;
                          }
                          lVar27 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
                          if (lVar27 == 0) goto LAB_00c5e61c;
                          UnityEngine_AudioSource__Stop(lVar27,0);
                        }
LAB_00c5e5f0:
                        if (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo + 0xe0) != 0
                           ) {
                          UnityEngine_SceneManagement_SceneManager__LoadScene(unaff_x19,0);
                          return;
                        }
                        unaff_x30 = &LAB_00c5e600;
                        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                        lVar27 = _UnityEngine_SceneManagement_SceneManager_TypeInfo;
                      }
                    }
                    else {
                      if (iVar24 < 1) goto LAB_00c5e5f0;
                      unaff_x22 = &CarController_TypeInfo;
                      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                        unaff_x30 = (undefined1 *)0xc5e44c;
                        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                        lVar27 = _CarController_TypeInfo;
                      }
                      else {
                        uVar31 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
                        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                        }
                        uVar26 = UnityEngine_Object__op_Inequality(uVar31,0,0);
                        if ((uVar26 & 1) == 0) {
LAB_00c5e4e8:
                          unaff_x20 = &SoundScript_TypeInfo;
                          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                            unaff_x30 = (undefined1 *)0xc5e500;
                            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                            lVar27 = _SoundScript_TypeInfo;
                          }
                          else {
                            lVar27 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
                            if (lVar27 == 0) {
LAB_00c5e61c:
                    /* WARNING: Subroutine does not return */
                              il2cpp_throw_967b50();
                            }
                            uVar26 = UnityEngine_AudioSource__get_isPlaying(lVar27,0);
                            if ((uVar26 & 1) != 0) {
                              if (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo + 0xe0
                                          ) == 0) {
                                unaff_x30 = &LAB_00c5e52c;
                                register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                                lVar27 = _UnityEngine_SceneManagement_SceneManager_TypeInfo;
                                goto SUB_00a67a30;
                              }
                              UnityEngine_SceneManagement_SceneManager__GetActiveScene(0);
                              uVar31 = UnityEngine_SceneManagement_Scene__get_name
                                                 (&stack0xffffffffffffffd8,0);
                              uVar26 = System_String__op_Inequality(uVar31,unaff_x19,0);
                              if ((uVar26 & 1) != 0) {
                                if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                                  unaff_x30 = (undefined1 *)0xc5e564;
                                  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                                  lVar27 = _SoundScript_TypeInfo;
                                  goto SUB_00a67a30;
                                }
                                lVar27 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
                                if (lVar27 == 0) goto LAB_00c5e61c;
                                UnityEngine_AudioSource__Stop(lVar27,0);
                              }
                            }
                            if (*(int *)(_SoundScript_TypeInfo + 0xe0) != 0) {
                              SoundScript__HCPNLKMMKFA();
                              goto LAB_00c5e5f0;
                            }
                            unaff_x30 = &LAB_00c5e58c;
                            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                            lVar27 = _SoundScript_TypeInfo;
                          }
                        }
                        else {
                          unaff_x20 = &SoundScript_TypeInfo;
                          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                            unaff_x30 = (undefined1 *)0xc5e4a0;
                            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                            lVar27 = _SoundScript_TypeInfo;
                          }
                          else {
                            lVar27 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x70);
                            if (lVar27 == 0) goto LAB_00c5e61c;
                            UnityEngine_AudioSource__Pause(lVar27,0);
                            if (*(int *)(_CarController_TypeInfo + 0xe0) != 0) {
                              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                                 (lVar27 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) +
                                                    0x48), lVar27 == 0)) goto LAB_00c5e61c;
                              UnityEngine_AudioSource__Stop(lVar27,0);
                              goto LAB_00c5e4e8;
                            }
                            unaff_x30 = (undefined1 *)0xc5e4c8;
                            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                            lVar27 = _CarController_TypeInfo;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              unaff_x21 = &Menu_TypeInfo;
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                unaff_x30 = (undefined1 *)0xc61e80;
                register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
                lVar27 = _Menu_TypeInfo;
              }
              else {
                unaff_x19 = (undefined *)**(undefined8 **)(_Menu_TypeInfo + 0xb8);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                }
                uVar26 = UnityEngine_Object__op_Inequality(unaff_x19,0,0);
                if ((uVar26 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    unaff_x30 = (undefined1 *)0xc61ecc;
                    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
                    lVar27 = _Menu_TypeInfo;
                    goto SUB_00a67a30;
                  }
                  if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0)
                  goto LAB_00c61fec;
                  bVar23 = Menu__CLJDAMIIAKE((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
                  if (bVar23) goto LAB_00c61f14;
                }
                if (*(int *)(_Main_TypeInfo + 0xe0) != 0) {
                  pvVar28 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                  if (pvVar28 == (void *)0x0) goto LAB_00c61fec;
                  bVar23 = Level__get_IsEvent(pvVar28);
                  if (bVar23) goto LAB_00c61f14;
                  goto LAB_00c61f3c;
                }
                unaff_x30 = (undefined1 *)0xc61ef8;
                register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
                lVar27 = _Main_TypeInfo;
              }
            }
            goto SUB_00a67a30;
          }
        }
        if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c25694;
        unaff_x20 = *(undefined **)(*(long *)((long)__this + 0x30) + 0x90);
        unaff_x21 = (undefined *)**(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          unaff_x30 = (undefined1 *)0xc2562c;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
          lVar27 = _UnityEngine_Object_TypeInfo;
          unaff_x19 = __this;
          unaff_x22 = &UnityEngine_Object_TypeInfo;
          unaff_x23 = &GUIWindow_TypeInfo;
        }
        else {
          uVar26 = UnityEngine_Object__op_Equality(unaff_x21,unaff_x20,0);
          if ((uVar26 & 1) == 0) {
            return;
          }
          if (((*(long *)((long)__this + 0x30) == 0) ||
              (lVar27 = *(long *)(*(long *)((long)__this + 0x30) + 0x90), lVar27 == 0)) ||
             (lVar27 = UnityEngine_Component__get_gameObject(lVar27,0), lVar27 == 0)) {
LAB_00c25694:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          uVar26 = UnityEngine_GameObject__get_activeSelf(lVar27,0);
          if ((uVar26 & 1) == 0) {
            return;
          }
          unaff_x19 = *(undefined **)((long)__this + 0x30);
          if (unaff_x19 == (undefined *)0x0) goto LAB_00c25694;
          if ((bRam0000000001917223 & 1) == 0) {
            func_0x00a67900(&CarController_TypeInfo,0);
            func_0x00a67900(&UnityEngine_Object_TypeInfo);
            func_0x00a67900(&Str_);
            bRam0000000001917223 = 1;
          }
          plVar29 = *(long **)(unaff_x19 + 0x358);
          if (plVar29 == (long *)0x0) {
LAB_00c62b30:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          (**(code **)(*plVar29 + 0x5a8))(plVar29,_Str_,*(undefined8 *)(*plVar29 + 0x5b0));
          if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_00c62b30;
          unaff_x21 = &CarController_TypeInfo;
          unaff_x20 = &UnityEngine_Object_TypeInfo;
          GUIWindow__JGDCBENNDFO(*(long *)(unaff_x19 + 0x90),0,0);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            unaff_x30 = (undefined1 *)0xc62a8c;
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
            lVar27 = _CarController_TypeInfo;
          }
          else {
            unaff_x20 = (undefined *)**(undefined8 **)(_CarController_TypeInfo + 0xb8);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            uVar26 = UnityEngine_Object__op_Inequality(unaff_x20,0,0);
            if ((uVar26 & 1) == 0) {
              return;
            }
            if (*(int *)(_CarController_TypeInfo + 0xe0) != 0) {
              if ((void *)**(undefined8 **)(_CarController_TypeInfo + 0xb8) != (void *)0x0) {
                CarController__HCBBKPNEMLE
                          ((void *)**(undefined8 **)(_CarController_TypeInfo + 0xb8));
                lVar27 = **(long **)(_CarController_TypeInfo + 0xb8);
                if (lVar27 != 0) {
                  *(undefined1 *)(lVar27 + 0x504) = 1;
                  lVar27 = CarController__FIOKLNLIDNH(lVar27,0,0);
                  if (lVar27 == 0) {
                    func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
                    uVar32 = func_0x00a67b44();
                    uVar31 = func_0x00a67914(&Str_routine_is_null);
                    System_NullReferenceException___ctor(uVar32,uVar31,0);
                  }
                  else {
                    if (pcRam000000000191c478 == (code *)0x0) {
                      pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
                    }
                    uVar26 = (*pcRam000000000191c478)(unaff_x19);
                    if ((uVar26 & 1) != 0) {
                      if (pcRam000000000191c488 == (code *)0x0) {
                        pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
                      }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*pcRam000000000191c488)(unaff_x19,lVar27);
                      return;
                    }
                    func_0x00a67914(&System_ArgumentException_TypeInfo);
                    uVar32 = func_0x00a67b44();
                    uVar31 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
                    System_ArgumentException___ctor(uVar32,uVar31,0);
                  }
                  uVar31 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
                  auVar39 = func_0x00a67a20(uVar32,uVar31);
                  if (pcRam000000000191c488 == (code *)0x0) {
                    pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
                  }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam000000000191c488)(auVar39._0_8_,auVar39._8_8_);
                  return;
                }
              }
              goto LAB_00c62b30;
            }
            unaff_x30 = (undefined1 *)0xc62ad0;
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
            lVar27 = _CarController_TypeInfo;
          }
        }
      }
      else {
        __this_00 = *(undefined **)((long)__this + 0x30);
        if (__this_00 == (undefined *)0x0) goto LAB_00c25694;
        if ((bRam0000000001917228 & 1) == 0) {
          func_0x00a67900(&CarController_TypeInfo,0);
          func_0x00a67900(&GUIGameplay_TypeInfo);
          func_0x00a67900(&Main_TypeInfo);
          func_0x00a67900(&Menu_TypeInfo);
          func_0x00a67900(&UnityEngine_Object_TypeInfo);
          func_0x00a67900(&SoundScript_TypeInfo);
          bRam0000000001917228 = 1;
        }
        fVar37 = (float)UnityEngine_Time__get_timeScale(0);
        if (1.0 <= fVar37) {
          return;
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          unaff_x30 = (undefined1 *)0xc6086c;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
          lVar27 = _Menu_TypeInfo;
          unaff_x19 = __this_00;
          unaff_x20 = &Menu_TypeInfo;
        }
        else {
          *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 10) = 0;
          UnityEngine_Time__set_timeScale(0x3f800000,0);
          UnityEngine_AudioListener__set_volume
                    (*(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x14),0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            unaff_x30 = (undefined1 *)0xc608b0;
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
            lVar27 = _Main_TypeInfo;
            unaff_x19 = __this_00;
            unaff_x20 = &Menu_TypeInfo;
            unaff_x21 = &Main_TypeInfo;
          }
          else {
            puVar35 = (undefined *)0x1916000;
            if (cRam0000000001916e67 == '\0') {
              func_0x00a67900(&Main_TypeInfo);
              cRam0000000001916e67 = '\x01';
            }
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              unaff_x30 = (undefined1 *)0xc608e0;
              register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
              lVar27 = _Main_TypeInfo;
              unaff_x19 = __this_00;
              unaff_x20 = &Menu_TypeInfo;
              unaff_x21 = &Main_TypeInfo;
              unaff_x22 = puVar35;
            }
            else {
              lVar27 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (lVar27 == 0) goto LAB_00c60ba4;
              uVar26 = DAFNMLEKHAD__BMMOMBGDEKF(lVar27,0);
              if ((uVar26 & 1) != 0) {
                if ((*(long *)(__this_00 + 0x20) == 0) ||
                   (lVar27 = *(long *)(*(long *)(__this_00 + 0x20) + 0x48), lVar27 == 0))
                goto LAB_00c60ba4;
                uVar26 = UnityEngine_AudioSource__get_isPlaying(lVar27,0);
                if ((uVar26 & 1) == 0) {
                  if ((*(long *)(__this_00 + 0x20) == 0) ||
                     (lVar27 = *(long *)(*(long *)(__this_00 + 0x20) + 0x48), lVar27 == 0))
                  goto LAB_00c60ba4;
                  UnityEngine_AudioSource__Play(lVar27,0);
                }
              }
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                unaff_x30 = (undefined1 *)0xc60940;
                register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                lVar27 = _Main_TypeInfo;
                unaff_x19 = __this_00;
                unaff_x20 = &Menu_TypeInfo;
                unaff_x21 = &Main_TypeInfo;
                unaff_x22 = puVar35;
              }
              else {
                if (cRam0000000001916e67 == '\0') {
                  func_0x00a67900(&Main_TypeInfo);
                  cRam0000000001916e67 = '\x01';
                }
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  unaff_x30 = (undefined1 *)0xc6096c;
                  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                  lVar27 = _Main_TypeInfo;
                  unaff_x19 = __this_00;
                  unaff_x20 = &Menu_TypeInfo;
                  unaff_x21 = &Main_TypeInfo;
                  unaff_x22 = puVar35;
                }
                else {
                  lVar27 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                  if (lVar27 == 0) goto LAB_00c60ba4;
                  uVar26 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar27,0);
                  puVar36 = unaff_x23;
                  if ((uVar26 & 1) != 0) {
                    puVar35 = &SoundScript_TypeInfo;
                    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                      unaff_x30 = (undefined1 *)0xc609a0;
                      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                      lVar27 = _SoundScript_TypeInfo;
                      unaff_x19 = __this_00;
                      unaff_x20 = &Menu_TypeInfo;
                      unaff_x21 = &Main_TypeInfo;
                      unaff_x22 = puVar35;
                      goto SUB_00a67a30;
                    }
                    lVar27 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
                    if (lVar27 == 0) goto LAB_00c60ba4;
                    uVar26 = UnityEngine_AudioSource__get_isPlaying(lVar27,0);
                    if ((uVar26 & 1) == 0) {
                      puVar36 = &CarController_TypeInfo;
                      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                        unaff_x30 = (undefined1 *)0xc609d4;
                        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                        lVar27 = _CarController_TypeInfo;
                        unaff_x19 = __this_00;
                        unaff_x20 = &Menu_TypeInfo;
                        unaff_x21 = &Main_TypeInfo;
                        unaff_x22 = puVar35;
                        unaff_x23 = puVar36;
                        goto SUB_00a67a30;
                      }
                      if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x34) != '\0') {
                        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        SoundScript__HCEFONCADKE
                                  (*(void **)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0),false)
                        ;
                      }
                    }
                  }
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    unaff_x30 = (undefined1 *)0xc60a18;
                    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                    lVar27 = _Menu_TypeInfo;
                    unaff_x19 = __this_00;
                    unaff_x20 = &Menu_TypeInfo;
                    unaff_x21 = &Main_TypeInfo;
                    unaff_x22 = puVar35;
                    unaff_x23 = puVar36;
                  }
                  else {
                    lVar27 = *(long *)(_Menu_TypeInfo + 0xb8);
                    if (*(char *)(lVar27 + 0xc) != '\0') goto LAB_00c60b78;
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                      lVar27 = *(long *)(_Menu_TypeInfo + 0xb8);
                    }
                    if (*(char *)(lVar27 + 0xb) == '\0') {
                      if (*(long *)(__this_00 + 0x50) == 0) goto LAB_00c60ba4;
                      GUIWindow__HEGIHOAJOKK(*(long *)(__this_00 + 0x50),0,0);
                      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                        unaff_x30 = (undefined1 *)0xc60ad0;
                        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                        lVar27 = _CarController_TypeInfo;
                        unaff_x19 = __this_00;
                        unaff_x20 = &Menu_TypeInfo;
                        unaff_x21 = &Main_TypeInfo;
                        unaff_x22 = &CarController_TypeInfo;
                        unaff_x23 = puVar36;
                      }
                      else {
                        puVar35 = (undefined *)**(undefined8 **)(_CarController_TypeInfo + 0xb8);
                        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                        }
                        uVar26 = UnityEngine_Object__op_Inequality(puVar35,0,0);
                        if ((uVar26 & 1) != 0) {
                          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                            unaff_x30 = (undefined1 *)0xc60b1c;
                            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                            lVar27 = _CarController_TypeInfo;
                            unaff_x19 = __this_00;
                            unaff_x20 = puVar35;
                            unaff_x21 = &Main_TypeInfo;
                            unaff_x22 = &CarController_TypeInfo;
                            unaff_x23 = puVar36;
                            goto SUB_00a67a30;
                          }
                          lVar27 = **(long **)(_CarController_TypeInfo + 0xb8);
                          if (lVar27 == 0) {
LAB_00c60ba4:
                    /* WARNING: Subroutine does not return */
                            il2cpp_throw_967b50();
                          }
                          if (*(char *)(lVar27 + 0x3fd) != '\0') {
                            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                              lVar27 = **(long **)(_CarController_TypeInfo + 0xb8);
                              if (lVar27 == 0) goto LAB_00c60ba4;
                            }
                            if (*(long *)(lVar27 + 0x28) == 0) goto LAB_00c60ba4;
                            uVar26 = UnityEngine_Behaviour__get_enabled(*(long *)(lVar27 + 0x28),0);
                            if ((uVar26 & 1) == 0) {
                              if (*(long *)(__this_00 + 0x50) == 0) goto LAB_00c60ba4;
                              GUIWindow__JGDCBENNDFO(*(long *)(__this_00 + 0x50),0,0);
                            }
                          }
                        }
LAB_00c60b78:
                        lVar27 = _Main_TypeInfo;
                        if (*(int *)(_Main_TypeInfo + 0xe0) != 0) {
                          return;
                        }
                      }
                    }
                    else if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      unaff_x30 = (undefined1 *)0xc60a50;
                      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                      lVar27 = _Menu_TypeInfo;
                      unaff_x19 = __this_00;
                      unaff_x20 = &Menu_TypeInfo;
                      unaff_x21 = &Main_TypeInfo;
                      unaff_x22 = puVar35;
                      unaff_x23 = puVar36;
                    }
                    else {
                      *(undefined1 *)(lVar27 + 0xb) = 0;
                      if (*(long *)(__this_00 + 0x50) == 0) goto LAB_00c60ba4;
                      GUIWindow__HEGIHOAJOKK(*(long *)(__this_00 + 0x50),0,0);
                      if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) != 0) {
                        GUIGameplay__MGNNDFEFHAH
                                  (__this_00,*(int *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4),
                                   false);
                        goto LAB_00c60b78;
                      }
                      unaff_x30 = (undefined1 *)0xc60a88;
                      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                      lVar27 = _GUIGameplay_TypeInfo;
                      unaff_x19 = __this_00;
                      unaff_x20 = &GUIGameplay_TypeInfo;
                      unaff_x21 = &Main_TypeInfo;
                      unaff_x22 = puVar35;
                      unaff_x23 = puVar36;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
SUB_00a67a30:
  *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x24;
  *(undefined **)((long)register0x00000008 + -0x28) = unaff_x23;
  *(undefined **)((long)register0x00000008 + -0x20) = unaff_x22;
  *(undefined **)((long)register0x00000008 + -0x18) = unaff_x21;
  *(undefined **)((long)register0x00000008 + -0x10) = unaff_x20;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x19;
  piVar34 = (int *)(lVar27 + 0xe0);
  if (*piVar34 == 0) {
    lVar25 = func_0x00a51c20();
    if (lVar25 == lRam000000000191ff18) {
      iRam000000000191ff20 = iRam000000000191ff20 + 1;
    }
    else {
      iVar24 = 0;
      do {
        iVar5 = iRam000000000191fed8;
        if (iRam000000000191fed8 == iVar24) {
          cVar4 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(0x191fed8,0x10);
          if (bVar23) {
            cVar4 = ExclusiveMonitorsStatus();
            iRam000000000191fed8 = iVar24 + 1;
          }
          if (cVar4 != '\0') goto LAB_00a7fdf8;
          bVar23 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00a7fdf8:
          bVar23 = false;
        }
      } while ((iVar5 != 2) && (iVar24 = iVar5, !bVar23));
      while (iVar5 != 0) {
        func_0x00b05724(0x191fed8,2,0xffffffff);
        do {
          iVar5 = iRam000000000191fed8;
          cVar4 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(0x191fed8,0x10);
          if (bVar23) {
            iRam000000000191fed8 = 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      iRam000000000191ff20 = 1;
      lRam000000000191ff18 = lVar25;
    }
    do {
      if (*piVar34 != 1) {
        ClearExclusiveLocal();
        DataMemoryBarrier(2,3);
        piVar1 = (int *)(lVar27 + 0xdc);
        goto LAB_00a7fec8;
      }
      cVar4 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(piVar34,0x10);
      if (bVar23) {
        *piVar34 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    iVar24 = iRam000000000191ff20 + -1;
    if ((0 < iRam000000000191ff20) && (iRam000000000191ff20 = iVar24, iVar24 == 0)) {
      lRam000000000191ff18 = 0;
      iRam000000000191ff20 = 0;
      do {
        iVar24 = iRam000000000191fed8;
        cVar4 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(0x191fed8,0x10);
        if (bVar23) {
          iRam000000000191fed8 = 0;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar24 == 2) {
SUB_00b0577c:
        iRam000000000191ff20 = 0;
        lRam000000000191ff18 = 0;
        syscall(0x62,0x191fed8,0x81,1,0,0,0);
        return;
      }
    }
  }
  return;
  while( true ) {
    cVar4 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar23) {
      *piVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') break;
LAB_00a7fec8:
    if (*piVar1 != 1) {
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      puVar2 = (undefined8 *)(lVar27 + 0xe8);
      uVar31 = func_0x00accfa0();
      do {
        cVar4 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar23) {
          *puVar2 = uVar31;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      do {
        cVar4 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar23) {
          *piVar1 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      iVar24 = iRam000000000191ff20 + -1;
      if ((0 < iRam000000000191ff20) && (iRam000000000191ff20 = iVar24, iVar24 == 0)) {
        lRam000000000191ff18 = 0;
        iRam000000000191ff20 = 0;
        do {
          iVar24 = iRam000000000191fed8;
          cVar4 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(0x191fed8,0x10);
          if (bVar23) {
            iRam000000000191fed8 = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar24 == 2) goto SUB_00b0577c;
      }
      *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
      lVar25 = func_0x00ae13e8(lVar27);
      if (lVar25 != 0) {
        func_0x00a819e8(lVar25,0,0,(undefined1 *)((long)register0x00000008 + -0x48));
      }
      do {
        cVar4 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar23) {
          *puVar2 = 0;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      if (*(long *)((long)register0x00000008 + -0x48) != 0) {
        func_0x00a79ab8((undefined1 *)((long)register0x00000008 + -0x78),lVar27 + 0x20,0);
        uVar26 = (ulong)((long)register0x00000008 + -0x78) | 1;
        if ((*(byte *)((long)register0x00000008 + -0x78) & 1) != 0) {
          uVar26 = *(ulong *)((long)register0x00000008 + -0x68);
        }
        func_0x00ad2e28((undefined1 *)((long)register0x00000008 + -0x60),&UNK_005a3f1d,uVar26);
        if ((*(byte *)((long)register0x00000008 + -0x78) & 1) != 0) {
          func_0x016defe0(*(undefined8 *)((long)register0x00000008 + -0x68));
        }
        uVar26 = (ulong)((long)register0x00000008 + -0x60) | 1;
        if ((*(byte *)((long)register0x00000008 + -0x60) & 1) != 0) {
          uVar26 = *(ulong *)((long)register0x00000008 + -0x50);
        }
        uVar31 = func_0x00ace868(uVar26,*(undefined8 *)((long)register0x00000008 + -0x48));
        func_0x00adf278(lVar27,uVar31);
        if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto LAB_00a800d0;
        func_0x016defe0(*(undefined8 *)((long)register0x00000008 + -0x50));
        goto LAB_00a800d0;
      }
      do {
        cVar4 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar34,0x10);
        if (bVar23) {
          *piVar34 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00a800cc;
    }
  }
  DataMemoryBarrier(2,3);
  iVar24 = iRam000000000191ff20 + -1;
  if ((iRam000000000191ff20 < 1) || (iRam000000000191ff20 = iVar24, iVar24 != 0)) {
LAB_00a7ff28:
    lVar25 = func_0x00accfa0();
    plVar29 = (long *)(lVar27 + 0xe8);
    do {
      lVar30 = *plVar29;
      if (lVar30 != lVar25) {
        ClearExclusiveLocal();
        bVar23 = false;
        goto LAB_00a8008c;
      }
      cVar4 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar23) {
        *plVar29 = lVar25;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar23 = true;
LAB_00a8008c:
    DataMemoryBarrier(2,3);
    lVar3 = lVar25;
    if (!bVar23) {
      lVar3 = lVar30;
    }
    if (lVar3 == lVar25) {
      return;
    }
    do {
      if (*piVar34 != 1) goto LAB_00a800e4;
      cVar4 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(piVar34,0x10);
      if (bVar23) {
        *piVar34 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00a800cc:
    do {
      DataMemoryBarrier(2,3);
LAB_00a800d0:
      if (*(int *)(lVar27 + 0xd8) == 0) {
        return;
      }
      uVar31 = func_0x00ab272c();
      func_0x00acdca4(uVar31,0);
LAB_00a800e4:
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      piVar1 = (int *)(lVar27 + 0xd8);
      while (*piVar1 == 0) {
        cVar4 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar23) {
          *piVar1 = 0;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          DataMemoryBarrier(2,3);
          func_0x00accf98(1,0);
          while (*piVar34 == 1) {
            cVar4 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(piVar34,0x10);
            if (bVar23) {
              *piVar34 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00a800cc;
          }
          ClearExclusiveLocal();
          DataMemoryBarrier(2,3);
        }
      }
      ClearExclusiveLocal();
    } while( true );
  }
  lRam000000000191ff18 = 0;
  iRam000000000191ff20 = 0;
  do {
    iVar24 = iRam000000000191fed8;
    cVar4 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(0x191fed8,0x10);
    if (bVar23) {
      iRam000000000191fed8 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar24 != 2) goto LAB_00a7ff28;
  goto SUB_00b0577c;
}


// ==== private void PKLGNADJLIG() { }   @0xb27450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__PKLGNADJLIG(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  long *plVar8;
  void *pvVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  void *pvStack_68;
  
  if ((bRam000000000191703b & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&GUIGameplay_TypeInfo);
    bRam000000000191703b = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) != '\0') {
    return;
  }
  if (*(long *)((long)__this + 0x30) == 0) {
LAB_00c27824:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  GUIGameplay__DHFMPHMAMBF(*(long *)((long)__this + 0x30),0);
  if (((*(long *)((long)__this + 0x30) == 0) ||
      (lVar5 = *(long *)(*(long *)((long)__this + 0x30) + 0x78), lVar5 == 0)) ||
     (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)) goto LAB_00c27824;
  uVar6 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar5 = *(long *)(_GUIGameplay_TypeInfo + 0xb8);
    if (*(float *)(lVar5 + 0xc) < 0.0) {
      if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar5 = *(long *)(_GUIGameplay_TypeInfo + 0xb8);
      }
      if (*(int *)(lVar5 + 4) == 0) {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (0.0 < *(float *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x10)) {
          if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c27824;
          GUIGameplay__OKIGBJNMOOP(*(long *)((long)__this + 0x30),0);
        }
      }
      if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(int *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4) == 2) {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((1.0 < *(float *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x10)) &&
           (*(float *)((long)__this + 0x210) == 0.0)) {
          if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c27824;
          GUIGameplay__OKIGBJNMOOP(*(long *)((long)__this + 0x30),0);
          uVar15 = UnityEngine_Time__get_fixedTime(0);
          *(undefined4 *)((long)__this + 0x210) = uVar15;
        }
      }
      if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((*(int *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4) == 3) &&
         ((0.5 < *(float *)((long)__this + 0x218) || (*(float *)((long)__this + 0x218) < -0.5)))) {
        if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c27824;
        GUIGameplay__OKIGBJNMOOP(*(long *)((long)__this + 0x30),0);
      }
      if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((*(int *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4) == 4) &&
         (((uVar6 = UnityEngine_Input__get_anyKey(0), (uVar6 & 1) != 0 &&
           (uVar6 = UnityEngine_Input__GetKey(0x1b,0), (uVar6 & 1) == 0)) ||
          (iVar2 = UnityEngine_Input__get_touchCount(0), 0 < iVar2)))) {
        if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c27824;
        GUIGameplay__OKIGBJNMOOP(*(long *)((long)__this + 0x30),0);
      }
    }
  }
  if (*(char *)((long)__this + 0x314) != '\0') {
    CarController__KKMPDCAMDGN(__this,1,0x3b,0xffffffff);
  }
  CarController__KKMPDCAMDGN(__this,4,200,0xffffffff);
  if (*(char *)((long)__this + 0x344) != '\0') {
    CarController__KKMPDCAMDGN(__this,2,0xb6,0);
  }
  CarController__KKMPDCAMDGN(__this,3,0x119,0);
  if ((*(char *)((long)__this + 0x314) != '\0') &&
     (CarController__KKMPDCAMDGN(__this,5,0x2b,2), *(char *)((long)__this + 0x314) != '\0')) {
    CarController__KKMPDCAMDGN(__this,6,0x216,5);
  }
  if (*(float *)((long)__this + 0x210) <= 0.0) {
    return;
  }
  fVar16 = (float)UnityEngine_Time__get_fixedTime(0);
  if (1.1 <= fVar16 - *(float *)((long)__this + 0x210)) {
    *(undefined4 *)((long)__this + 0x210) = 0;
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  fVar16 = *(float *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x10);
  if (fVar16 < 1.02) {
    fVar16 = (float)UnityEngine_Time__get_timeScale(0);
    if (fVar16 <= 0.0) {
      return;
    }
    if (*(void **)((long)__this + 0x30) != (void *)0x0) {
      GUIGameplay__MGNNDFEFHAH(*(void **)((long)__this + 0x30),2,false);
      if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar5 = *(long *)(_GUIGameplay_TypeInfo + 0xb8);
      *(float *)(lVar5 + 0x10) = *(float *)(lVar5 + 0x10) + *(float *)(lVar5 + 0x14) / -1.5;
      return;
    }
    goto LAB_00c27824;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    fVar16 = *(float *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x10);
  }
  if (fVar16 <= 1.0) {
    return;
  }
  pvVar7 = *(void **)((long)__this + 0x30);
  if (pvVar7 == (void *)0x0) goto LAB_00c27824;
  if ((bRam0000000001917239 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam0000000001917239 = 1;
  }
  lVar5 = *(long *)((long)pvVar7 + 0x410);
  if (lVar5 == 0) {
LAB_00c667a8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(uint *)(lVar5 + 0x18) < 3) {
LAB_00c667ac:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  lVar5 = *(long *)(lVar5 + 0x30);
  if (lVar5 == 0) goto LAB_00c667a8;
  uVar12 = *(undefined8 *)(lVar5 + 0x48);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(lVar5 + 0x48) == 0) goto LAB_00c667a8;
    UnityEngine_GameObject__SetActive(*(long *)(lVar5 + 0x48),0,0);
  }
  lVar5 = *(long *)(lVar5 + 0x50);
  if (lVar5 == 0) goto LAB_00c667a8;
  uVar4 = *(uint *)(lVar5 + 0x18);
  if (0 < (int)uVar4) {
    uVar14 = 0;
    do {
      if (uVar4 <= uVar14) goto LAB_00c667ac;
      if (*(long *)((long)pvVar7 + 0x50) == 0) goto LAB_00c667a8;
      lVar13 = *(long *)(lVar5 + (long)(int)uVar14 * 8 + 0x20);
      uVar12 = UnityEngine_Component__get_transform(*(long *)((long)pvVar7 + 0x50),0);
      if (lVar13 == 0) goto LAB_00c667a8;
      UnityEngine_Transform__SetParent(lVar13,uVar12,0);
      uVar4 = *(uint *)(lVar5 + 0x18);
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar4);
  }
  GUIGameplay__ButtonContinue(pvVar7);
  pvVar7 = *(void **)((long)pvVar7 + 0x50);
  if (pvVar7 == (void *)0x0) goto LAB_00c667a8;
  if ((bRam0000000001917151 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo,0,0);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_DonateItem___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_Try_to_Show__);
    func_0x00a67900(&Str_Window__Show__);
    func_0x00a67900(&Str_null);
    func_0x00a67900(&Str____Child__);
    func_0x00a67900(&Str___last__);
    func_0x00a67900(&Str___current__);
    bRam0000000001917151 = 1;
  }
  lVar5 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar5 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar5 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x20) = _Str_Try_to_Show__;
  lVar13 = UnityEngine_Component__get_gameObject(pvVar7,0);
  if (lVar13 == 0) goto LAB_00c485b8;
  uVar12 = UnityEngine_Object__get_name(lVar13,0);
  if ((*(uint *)(lVar5 + 0x18) < 2) ||
     (*(undefined8 *)(lVar5 + 0x28) = uVar12, *(uint *)(lVar5 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x30) = _Str___current__;
  uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  uVar12 = _Str_null;
  if ((uVar6 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar12 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar5 + 0x18) < 4) ||
     (*(undefined8 *)(lVar5 + 0x38) = uVar12, *(uint *)(lVar5 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x40) = _Str___last__;
  uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  uVar12 = _Str_null;
  if ((uVar6 & 1) != 0) {
    lVar13 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar13 == 0) goto LAB_00c485b8;
    uVar12 = UnityEngine_Object__get_name(lVar13,0);
  }
  uVar4 = *(uint *)(lVar5 + 0x18);
  if ((uVar4 < 6) || (*(undefined8 *)(lVar5 + 0x48) = uVar12, uVar4 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x50) = _Str____Child__;
  plVar8 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar12 = 0;
  if (plVar8 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    uVar4 = *(uint *)(lVar5 + 0x18);
  }
  if (uVar4 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x58) = uVar12;
  uVar12 = System_String__Concat(lVar5,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar12,0,0);
  uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Equality(uVar12,pvVar7,0);
  if ((uVar6 & 1) != 0) {
    uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar12,0,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
  }
  uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Equality(uVar12,pvVar7,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  lVar5 = _GUIWindow_TypeInfo;
  if ((uVar6 & 1) != 0) {
    lVar5 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar5,0);
    lVar5 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar12 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  pvVar9 = (void *)UnityEngine_Object__op_Inequality(uVar12,0,0);
  if (((ulong)pvVar9 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    pvVar9 = (void *)GUIWindow__JGDCBENNDFO(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  pvVar9 = GUIWindow__FEHHGIGJIKL(pvVar9);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(pvVar9,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(char *)((long)pvVar7 + 0x20) == '\0') {
      if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
      uVar6 = UnityEngine_GameObject__get_activeSelf(pvVar9,0);
      if ((uVar6 & 1) == 0) goto LAB_00c46b74;
      uVar15 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar12 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar15;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar12 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
      if (((uVar6 & 1) != 0) && (*(char *)((long)pvVar7 + 0x21) != '\0')) {
        fVar16 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar16) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),pvVar9,0);
          goto LAB_00c46b74;
        }
      }
      if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
      uVar12 = 1;
    }
    UnityEngine_GameObject__SetActive(pvVar9,uVar12,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar12 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar12 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(char *)((long)pvVar7 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
          goto LAB_00c485b8;
          uVar6 = AdvController__EDNAEPDDBPJ(lVar5,0);
          if ((uVar6 & 1) != 0) {
            iVar2 = UnityEngine_Screen__get_width(0);
            iVar3 = UnityEngine_Screen__get_height(0);
            fVar16 = (float)iVar2 / (float)iVar3;
            if (fVar16 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
            goto LAB_00c485b8;
            uVar12 = *(undefined8 *)(lVar5 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar6 = UnityEngine_Object__op_Equality(pvVar7,uVar12,0);
            if ((uVar6 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0)
                 ) goto LAB_00c485b8;
              uVar12 = *(undefined8 *)(lVar5 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar6 = UnityEngine_Object__op_Equality(pvVar7,uVar12,0);
              if ((uVar6 & 1) != 0) {
                if (1.61 <= fVar16) {
                  if ((fVar16 <= 1.61) || (1.8 <= fVar16)) {
                    if (fVar16 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar5 == 0)) goto LAB_00c485b8;
                    pvVar9 = *(void **)(lVar5 + 0x70);
                    fVar17 = 0.82;
                    fVar16 = 70.0;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar5 == 0)) goto LAB_00c485b8;
                    pvVar9 = *(void **)(lVar5 + 0x70);
                    fVar17 = 0.87;
                    fVar16 = 66.0;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar5 == 0)) goto LAB_00c485b8;
                  pvVar9 = *(void **)(lVar5 + 0x70);
                  fVar17 = 0.95;
                  fVar16 = 55.0;
                }
                goto LAB_00c46f38;
              }
            }
            else {
              if (1.61 <= fVar16) {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar5 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar16) {
                  if (*(long *)(lVar5 + 0x240) == 0) goto LAB_00c485b8;
                  uVar6 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar5 + 0x240),0);
                  if ((uVar6 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar5 == 0)) goto LAB_00c485b8;
                  pvVar9 = *(void **)(lVar5 + 0x60);
                  fVar17 = 0.82;
                  fVar16 = 20.0;
                }
                else {
                  pvVar9 = *(void **)(lVar5 + 0x60);
                  fVar17 = 0.87;
                  fVar16 = 5.0;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar5 == 0)) goto LAB_00c485b8;
                pvVar9 = *(void **)(lVar5 + 0x60);
                fVar16 = -5.0;
                fVar17 = 0.0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(pvVar7,pvVar9,fVar16,fVar17);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
            goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(lVar5,0);
            goto LAB_00c46f70;
          }
        }
        GUIWindow__IPELKJAHFGL(pvVar7);
      }
    }
  }
LAB_00c46f70:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar12 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(char *)((long)pvVar7 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(pvVar7);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
          goto LAB_00c485b8;
          uVar6 = AdvController__EDNAEPDDBPJ(lVar5,0);
          if ((uVar6 & 1) == 0) goto LAB_00c47120;
          iVar2 = UnityEngine_Screen__get_width(0);
          iVar3 = UnityEngine_Screen__get_height(0);
          fVar16 = (float)iVar2 / (float)iVar3;
          if (1.51 < fVar16) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
            goto LAB_00c485b8;
            uVar12 = *(undefined8 *)(lVar5 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar6 = UnityEngine_Object__op_Equality(pvVar7,uVar12,0);
            if ((uVar6 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
              goto LAB_00c485b8;
              uVar12 = *(undefined8 *)(lVar5 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar6 = UnityEngine_Object__op_Equality(pvVar7,uVar12,0);
              if ((uVar6 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                uVar12 = *(undefined8 *)(lVar5 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar6 = UnityEngine_Object__op_Equality(pvVar7,uVar12,0);
                if ((uVar6 & 1) == 0) {
                  lVar5 = UnityEngine_Component__get_gameObject(pvVar7,0);
                  if (lVar5 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar5,&pvStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  pvVar9 = pvStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar6 = UnityEngine_Object__op_Inequality(pvVar9,0,0);
                  if ((uVar6 & 1) != 0) {
                    if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
                    if (*(int *)((long)pvVar9 + 0x2c) == 3) {
                      lVar5 = UnityEngine_Component__get_gameObject(pvVar7,0);
                      if (lVar5 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar5,&pvStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar6 = UnityEngine_Object__op_Inequality(pvStack_68,0,0);
                      if ((uVar6 & 1) != 0) {
                        if (1.61 <= fVar16) {
                          if (1.8 <= fVar16) {
                            fVar17 = 0.85;
                            fVar16 = 60.0;
                          }
                          else {
                            fVar16 = 70.0;
                            fVar17 = 0.0;
                          }
                        }
                        else {
                          fVar16 = 20.0;
                          fVar17 = 0.0;
                        }
                        goto LAB_00c47304;
                      }
                    }
                  }
                  goto LAB_00c47308;
                }
                if (1.61 <= fVar16) {
                  if (fVar16 < 1.8) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                    goto LAB_00c485b8;
                    pvStack_68 = *(void **)(lVar5 + 0xe8);
                    fVar17 = 0.95;
                    fVar16 = 70.0;
                    goto LAB_00c47304;
                  }
                  goto LAB_00c47338;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                pvStack_68 = *(void **)(lVar5 + 0xe8);
                fVar16 = 30.0;
              }
              else {
                if (1.61 <= fVar16) {
                  if (1.8 <= fVar16) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                  goto LAB_00c485b8;
                  pvStack_68 = *(void **)(lVar5 + 0xb0);
                  fVar17 = 0.93;
                  fVar16 = 0.0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                pvStack_68 = *(void **)(lVar5 + 0xb0);
                fVar16 = -25.0;
              }
LAB_00c4729c:
              fVar17 = 0.0;
            }
            else {
              if (fVar16 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                pvStack_68 = *(void **)(lVar5 + 0x188);
                fVar16 = 10.0;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
              goto LAB_00c485b8;
              pvStack_68 = *(void **)(lVar5 + 0x188);
              if (1.8 <= fVar16) {
                fVar17 = 0.82;
                fVar16 = 38.0;
              }
              else {
                fVar17 = 0.95;
                fVar16 = 35.0;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(pvVar7,pvStack_68,fVar16,fVar17);
          }
LAB_00c47308:
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
          goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(lVar5,0);
        }
      }
    }
  }
LAB_00c47338:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = *(long *)(_Menu_TypeInfo + 0xb8);
  if (*(char *)(lVar5 + 0x1a) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar5 = *(long *)(_Menu_TypeInfo + 0xb8);
    }
    if (*(char *)(lVar5 + 0xc) != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar12 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar12 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
        if ((uVar6 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar12 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
            goto LAB_00c485b8;
            if (*(char *)(lVar5 + 0x6c) != '\0') {
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (cRam0000000001916e67 == '\0') {
                func_0x00a67900(&Main_TypeInfo);
                cRam0000000001916e67 = '\x01';
              }
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (lVar5 == 0) goto LAB_00c485b8;
              uVar6 = DAFNMLEKHAD__MHBEPDHNNFH(lVar5,0);
              if ((uVar6 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
                goto LAB_00c485b8;
                uVar12 = *(undefined8 *)(lVar5 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar6 = UnityEngine_Object__op_Equality(uVar12,0,0);
                if ((uVar6 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                  goto LAB_00c485b8;
                  uVar12 = *(undefined8 *)(lVar5 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar6 = UnityEngine_Object__op_Equality(pvVar7,uVar12,0);
                  if ((uVar6 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
                    goto LAB_00c485b8;
                    uVar12 = *(undefined8 *)(lVar5 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar12 = UnityEngine_Object__Instantiate_object_
                                       (uVar12,_Method_UnityEngine_Object_Instantiate_GameObject___)
                    ;
                    *(undefined8 *)(lVar5 + 0x90) = uVar12;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar5 = UnityEngine_Component__get_gameObject(pvVar7,0);
  if (lVar5 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar5,1,0);
  puVar10 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar10[2] = *puVar10;
  *puVar10 = pvVar7;
  if (*(char *)((long)pvVar7 + 0x23) != '\0') {
    uVar12 = GUIWindow__FAAELIPKLCB(pvVar7);
    UnityEngine_MonoBehaviour__StartCoroutine(pvVar7,uVar12,0);
  }
  lVar5 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar5 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar5 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar5 + 0x20) = _Str_Window__Show__;
  uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  uVar12 = _Str_null;
  if ((uVar6 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar12 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar5 + 0x18) < 2) ||
     (*(undefined8 *)(lVar5 + 0x28) = uVar12, *(uint *)(lVar5 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x30) = _Str___last__;
  uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  uVar12 = _Str_null;
  if ((uVar6 & 1) != 0) {
    lVar13 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar13 == 0) goto LAB_00c485b8;
    uVar12 = UnityEngine_Object__get_name(lVar13,0);
  }
  uVar4 = *(uint *)(lVar5 + 0x18);
  if ((uVar4 < 4) || (*(undefined8 *)(lVar5 + 0x38) = uVar12, uVar4 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x40) = _Str____Child__;
  plVar8 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar12 = 0;
  if (plVar8 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    uVar4 = *(uint *)(lVar5 + 0x18);
  }
  if (uVar4 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x48) = uVar12;
  uVar12 = System_String__Concat(lVar5,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar12,0,0);
  uVar6 = Main__KCHOEBEIOCE(0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58) == 0)) goto LAB_00c485b8;
    GamePadController__KCAHLEAKNNK();
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
LAB_00c47a5c:
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    if ((uVar6 & 1) != 0) {
      uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
      goto LAB_00c485b8;
      uVar11 = *(undefined8 *)(lVar5 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Equality(uVar12,uVar11,0);
      if ((uVar6 & 1) == 0) {
        uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
        goto LAB_00c485b8;
        uVar11 = *(undefined8 *)(lVar5 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Equality(uVar12,uVar11,0);
        if ((uVar6 & 1) == 0) {
          uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
          goto LAB_00c485b8;
          uVar11 = *(undefined8 *)(lVar5 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar6 = UnityEngine_Object__op_Equality(uVar12,uVar11,0);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
            goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(lVar5,0);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
          goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(lVar5,0);
        }
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
        goto LAB_00c485b8;
        lVar5 = *(long *)(lVar5 + 0x178);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar13 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((lVar13 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar13,0), lVar5 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar5,uVar4 & 1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar12 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    if ((uVar6 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    if ((uVar6 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
    goto LAB_00c485b8;
    uVar6 = GUIGarage__ABAHNKCPCFA(lVar5,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
        (lVar5 = *(long *)(lVar5 + 0x78), lVar5 == 0)) ||
       (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)) goto LAB_00c485b8;
    uVar6 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
         ((lVar5 = *(long *)(lVar5 + 0x70), lVar5 == 0 ||
          (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)))) goto LAB_00c485b8;
      uVar6 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
      if ((uVar6 & 1) != 0) goto LAB_00c47948;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
         (lVar5 = *(long *)(lVar5 + 0x1d0), lVar5 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar5,0,0);
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
         (lVar5 = *(long *)(lVar5 + 0x1b8), lVar5 == 0)) goto LAB_00c485b8;
      uVar15 = 0;
    }
    else {
LAB_00c47948:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
         (lVar5 = *(long *)(lVar5 + 0x1d0), lVar5 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar5,1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(lVar5,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      lVar5 = *(long *)(lVar5 + 0x3e0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar13 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((lVar13 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar13,0), lVar5 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar5,uVar4 & 1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0 ||
          (lVar5 = *(long *)(lVar5 + 0x1b8), lVar5 == 0)))) goto LAB_00c485b8;
      uVar15 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar15,lVar5,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
       ((lVar5 = *(long *)(lVar5 + 0x60), lVar5 == 0 ||
        (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)))) goto LAB_00c485b8;
    uVar6 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
    if ((uVar6 & 1) == 0) {
      bVar1 = false;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Menu_TypeInfo);
      }
      bVar1 = *(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xd) != '\0';
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Menu_TypeInfo);
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
       (lVar5 = *(long *)(lVar5 + 0x68), lVar5 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar5,*(undefined1 *)((long)pvVar7 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
    goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(lVar5 + 0x78);
    uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar11,uVar12,0);
    if ((uVar6 & 1) != 0) {
      uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      uVar11 = *(undefined8 *)(lVar5 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar12,uVar11,0);
      if ((uVar6 & 1) != 0) {
        uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
        if ((uVar6 & 1) != 0) {
          uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
          goto LAB_00c485b8;
          uVar11 = *(undefined8 *)(lVar5 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar6 = UnityEngine_Object__op_Equality(uVar12,uVar11,0);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
            Menu__OODBEAHDBMH((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
          }
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar5 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0)) ||
           (lVar5 = *(long *)(lVar5 + 0x4e0), lVar5 == 0)) goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive
                  (lVar5,*(undefined1 *)((long)*(long **)(_Menu_TypeInfo + 0xb8) + 0xe),0);
        uVar15 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar15;
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
      }
    }
    uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
    goto LAB_00c485b8;
    uVar11 = *(undefined8 *)(lVar5 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar12,uVar11,0);
    if ((uVar6 & 1) == 0) {
      uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      uVar11 = *(undefined8 *)(lVar5 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Equality(uVar12,uVar11,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(lVar5,0);
      }
    }
    else {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar5 == 0) goto LAB_00c485b8;
      uVar6 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar5,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar12 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar5 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar5 == 0) goto LAB_00c485b8;
            uVar6 = UnityEngine_AudioSource__get_isPlaying(lVar5,0);
            if ((uVar6 & 1) == 0) {
              if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              SoundScript__HCEFONCADKE
                        (*(void **)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98),false);
            }
          }
        }
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      pvVar7 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (pvVar7 == (void *)0x0) goto LAB_00c485b8;
      pvVar7 = DAFNMLEKHAD__DKJLCJPBPPN(pvVar7,-1,true);
      if (pvVar7 == (void *)0x0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar5 == 0) goto LAB_00c485b8;
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = *(undefined4 *)(lVar5 + 0x104);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
        Menu__CKPDEIAFHEC((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (pvVar7 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar7 == (void *)0x0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(pvVar7);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar5,0);
    }
    uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
    goto LAB_00c485b8;
    uVar11 = *(undefined8 *)(lVar5 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar12,uVar11,0);
    if ((uVar6 & 1) != 0) {
      uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Equality(uVar12,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
          goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(lVar5,0,0);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar5 = **(long **)(_Menu_TypeInfo + 0xb8);
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar5 == 0) || (pvVar7 = *(void **)(lVar5 + 0x20), pvVar7 == (void *)0x0))
        goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(pvVar7);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(lVar5,0);
      }
    }
    if (bVar1) {
      return;
    }
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    Menu__GDEFDCOIDNM(**(long **)(_Menu_TypeInfo + 0xb8),0);
    return;
  }
LAB_00c485b8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void IKOEIGDJPEK(int ALLBGCHDGNC, bool MIBLBGHDLFH = False) { }   @0xb1fe7c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__IKOEIGDJPEK(void *__this,int ALLBGCHDGNC,bool MIBLBGHDLFH)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam000000000191703e & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191703e = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) == '\0') &&
     ((*(char *)((long)__this + 0x62) == '\0' || (MIBLBGHDLFH)))) {
    uStack_40 = *(undefined4 *)((long)__this + 0x74);
    uStack_48 = *(undefined8 *)((long)__this + 0x6c);
    uStack_50 = *(undefined8 *)((long)__this + 100);
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_50,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_88,iVar1 + ALLBGCHDGNC,0);
    uStack_60 = uStack_78;
    uStack_68 = uStack_80;
    uStack_70 = uStack_88;
    *(undefined4 *)((long)__this + 0x74) = uStack_78;
    *(undefined8 *)((long)__this + 0x6c) = uStack_80;
    *(undefined8 *)((long)__this + 100) = uStack_88;
    uVar6 = *(undefined8 *)((long)__this + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString((long)__this + 100,0);
      if ((lVar3 != 0) && (*(long *)((long)__this + 0x30) != 0)) {
        GUIGameplay__IKDCPJNHOKJ(*(long *)((long)__this + 0x30),*(undefined4 *)(lVar3 + 0x10),0);
        if ((*(long *)((long)__this + 0x30) != 0) &&
           ((lVar5 = *(long *)(*(long *)((long)__this + 0x30) + 0x140), lVar5 != 0 &&
            (plVar4 = *(long **)(lVar5 + 0x28), plVar4 != (long *)0x0)))) {
          (**(code **)(*plVar4 + 0x5a8))(plVar4,lVar3,*(undefined8 *)(*plVar4 + 0x5b0));
          if ((*(long *)((long)__this + 0x30) != 0) &&
             (lVar3 = *(long *)(*(long *)((long)__this + 0x30) + 0x140), lVar3 != 0)) {
            GUICoins__ICMOCEHIFOI(lVar3,0);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
}


// ==== private void Update() { }   @0xb27bc8

/* WARNING: Removing unreachable block (ram,0x00c27e9c) */
/* WARNING: Removing unreachable block (ram,0x00c27e40) */
/* WARNING: Removing unreachable block (ram,0x00c2891c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__Update(void *__this)

{
  undefined1 (*pauVar1) [16];
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  void *__this_00;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float in_s2;
  float fVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined1 auStack_128 [16];
  undefined4 uStack_118;
  double dStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_6c;
  undefined8 uStack_68;
  
  if ((bRam0000000001917043 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_UI_ColorBlock_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001917043 = 1;
  }
  uStack_68 = 0;
  iStack_6c = 0;
  uStack_78 = 0;
  uVar8 = *(undefined8 *)((long)__this + 0x360);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) == '\0') {
      lVar9 = *(long *)((long)__this + 0x360);
      in_s2 = 0.0;
      UnityEngine_Quaternion__Internal_FromEulerRad
                (*(float *)((long)__this + 0x368) * 150.0 * 0.017453292,0,0);
      if (lVar9 == 0) goto LAB_00c28c18;
      UnityEngine_Transform__set_localRotation(lVar9,0);
      fVar19 = *(float *)((long)__this + 0x368);
      fVar11 = (float)UnityEngine_Time__get_deltaTime(0);
      *(float *)((long)__this + 0x368) = fVar19 + fVar11;
    }
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
    CarController__IODIAKMIMDD(__this);
    return;
  }
  uVar8 = *(undefined8 *)((long)__this + 0x58);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c28c18;
    lVar9 = *(long *)((long)__this + 0x58);
    UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
    if (lVar9 == 0) goto LAB_00c28c18;
    MoveBackground__CKHDANMOBCL(lVar9,0);
  }
  fVar11 = (float)CarController__AGKGCILIANE(__this);
  uVar8 = *(undefined8 *)((long)__this + 0x30);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c28c18;
    plVar10 = *(long **)(*(long *)((long)__this + 0x30) + 0xf8);
    iVar3 = -0x80000000;
    if (fVar11 != INFINITY) {
      iVar3 = (int)fVar11;
    }
    uStack_68 = CONCAT44(iVar3,(undefined4)uStack_68);
    uVar8 = System_Int32__ToString((long)&uStack_68 + 4,0);
    if (plVar10 == (long *)0x0) goto LAB_00c28c18;
    (**(code **)(*plVar10 + 0x5a8))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x5b0));
    if ((*(long *)((long)__this + 0x30) == 0) ||
       (lVar9 = *(long *)(*(long *)((long)__this + 0x30) + 0x100), lVar9 == 0)) goto LAB_00c28c18;
    in_s2 = 0.62;
    fVar12 = fVar11 / (float)*(int *)((long)__this + 0x164);
    fVar18 = fVar12 * 0.62 + 0.19;
    fVar19 = fVar18;
    if (fVar12 < 0.0) {
      fVar19 = 0.19;
    }
    UnityEngine_UI_Image__set_fillAmount(fVar19,fVar18,lVar9,0);
    if ((*(long *)((long)__this + 0x30) == 0) || (*(long *)((long)__this + 0x38) == 0))
    goto LAB_00c28c18;
    lVar9 = *(long *)(*(long *)((long)__this + 0x30) + 0x110);
    UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
    if (lVar9 == 0) goto LAB_00c28c18;
    fVar19 = (in_s2 / (float)*(int *)((long)__this + 0x408)) * 0.98599994 + 0.007;
    UnityEngine_UI_Image__set_fillAmount(lVar9,0);
    pauVar1 = (undefined1 (*) [16])((long)__this + 0x1cc);
    uStack_80 = *(undefined8 *)((long)__this + 0x1dc);
    fVar18 = *(float *)((long)__this + 0x20c);
    uStack_88 = SUB168(*pauVar1,8);
    uStack_90 = SUB168(*pauVar1,0);
    fVar12 = (float)CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_90,0);
    if (fVar18 != fVar12) {
      if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c28c18;
      uStack_a0 = *(undefined8 *)((long)__this + 0x1dc);
      lVar9 = *(long *)(*(long *)((long)__this + 0x30) + 0x108);
      uStack_a8 = SUB168(*pauVar1,8);
      uStack_b0 = SUB168(*pauVar1,0);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_b0,0);
      uStack_c0 = *(undefined4 *)((long)__this + 0x208);
      uStack_c8 = SUB168(*(undefined1 (*) [16])((long)__this + 0x1f8),8);
      uStack_d0 = SUB168(*(undefined1 (*) [16])((long)__this + 0x1f8),0);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_d0,0);
      if (lVar9 == 0) goto LAB_00c28c18;
      UnityEngine_UI_Image__set_fillAmount(lVar9,0);
      uStack_e0 = *(undefined8 *)((long)__this + 0x1dc);
      uStack_e8 = SUB168(*pauVar1,8);
      uStack_f0 = SUB168(*pauVar1,0);
      uVar13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_f0,0);
      *(undefined4 *)((long)__this + 0x20c) = uVar13;
    }
    if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c28c18;
    GUIGameplay__HNINFAKLAJH(*(long *)((long)__this + 0x30),0);
    if (*(char *)((long)__this + 0x414) == '\0') goto LAB_00c28274;
    if (*(char *)((long)__this + 0x3d0) == '\0') {
      fVar12 = (float)UnityEngine_Time__get_time(0);
      fVar19 = *(float *)((long)__this + 0x3d8);
      fVar12 = fVar12 - fVar19;
      if (0.0 <= fVar12) {
        fVar19 = INFINITY;
        iVar3 = -0x80000000;
        if (fVar12 != INFINITY) {
          iVar3 = (int)fVar12;
        }
        if (iVar3 != *(int *)((long)__this + 0x3d4)) {
          *(int *)((long)__this + 0x3d4) = iVar3;
          uStack_68 = CONCAT44(uStack_68._4_4_,3 - iVar3);
          if (3 - iVar3 == 0) {
            *(undefined1 *)((long)__this + 0x3d0) = 1;
            fVar19 = INFINITY;
            CarController__BALBOFMAKKO(__this);
          }
          else {
            lVar9 = *(long *)((long)__this + 0x30);
            fVar19 = INFINITY;
            uVar8 = System_Int32__ToString(&uStack_68,0);
            if (lVar9 == 0) goto LAB_00c28c18;
            GUIGameplay__HNKHJLDJMHB(lVar9,uVar8,6,0,1,0);
          }
        }
      }
    }
    if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c28c18;
    __this_00 = *(void **)((long)__this + 0x30);
    fVar12 = (float)UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
    if ((*(long *)((long)__this + 0x28) == 0) || (__this_00 == (void *)0x0)) goto LAB_00c28c18;
    GUIGameplay__LJNIGKAEGON
              (__this_00,fVar12,fVar19,in_s2,*(void **)(*(long *)((long)__this + 0x28) + 0x28),false
              );
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar9 = *(long *)(_CarController_TypeInfo + 0xb8);
    if (*(char *)(lVar9 + 0x34) != '\0') {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar9 = *(long *)(_CarController_TypeInfo + 0xb8);
      }
      if (*(char *)(lVar9 + 0x44) == '\0') {
        if (*(char *)((long)__this + 0x60) == '\0') {
LAB_00c280b4:
          if (*(char *)((long)__this + 0x61) == '\0') goto LAB_00c28274;
          if ((*(long *)((long)__this + 0x30) == 0) ||
             (lVar9 = *(long *)(*(long *)((long)__this + 0x30) + 0x140), lVar9 == 0))
          goto LAB_00c28c18;
          plVar10 = *(long **)(lVar9 + 0x28);
          fVar19 = (float)UnityEngine_Time__get_time(0);
          fVar12 = *(float *)((long)__this + 0x3dc);
          if (cRam00000000019168a8 == '\0') {
            func_0x00a67900(&System_Math_TypeInfo);
            cRam00000000019168a8 = '\x01';
          }
          fVar19 = (fVar19 - fVar12) * 100.0;
          if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          dVar20 = (double)fVar19;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = dVar20;
          dVar14 = (double)func_0x016dece0(auVar15,&dStack_110);
          if (0.0 <= fVar19) {
            if (dVar14 == 0.5) {
              dVar14 = 1.0;
              goto LAB_00c281f4;
            }
            dVar20 = (double)(long)(dVar20 + 0.5);
          }
          else if (dVar14 == -0.5) {
            dVar14 = -1.0;
LAB_00c281f4:
            dVar20 = dStack_110;
            if (((long)dStack_110 & 1U) != 0) {
              dVar20 = dStack_110 + dVar14;
            }
          }
          else {
            dVar20 = (double)(long)(dVar20 + -0.5);
          }
          iVar3 = -0x80000000;
          if (dVar20 != INFINITY) {
            iVar3 = (int)dVar20;
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar9 = Main__CHJONPOFGFA(iVar3,0);
          if (plVar10 == (long *)0x0) goto LAB_00c28c18;
          lVar5 = *plVar10;
        }
        else {
          fVar19 = *(float *)((long)__this + 0x40c);
          if (fVar19 < (float)*(int *)((long)__this + 0x408)) goto LAB_00c280b4;
          iVar3 = -0x80000000;
          if (fVar19 != INFINITY) {
            iVar3 = (int)fVar19;
          }
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit
                    (auStack_128,iVar3 - *(int *)((long)__this + 0x408),0);
          uStack_100 = uStack_118;
          uStack_108 = auStack_128._8_8_;
          dStack_110 = auStack_128._0_8_;
          *(undefined4 *)((long)__this + 0x74) = uStack_118;
          *(undefined8 *)((long)__this + 0x6c) = uStack_108;
          *(double *)((long)__this + 100) = dStack_110;
          lVar9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString((long)__this + 100,0);
          if ((lVar9 == 0) || (*(long *)((long)__this + 0x30) == 0)) goto LAB_00c28c18;
          GUIGameplay__IKDCPJNHOKJ(*(long *)((long)__this + 0x30),*(undefined4 *)(lVar9 + 0x10),0);
          if ((*(long *)((long)__this + 0x30) == 0) ||
             ((lVar5 = *(long *)(*(long *)((long)__this + 0x30) + 0x140), lVar5 == 0 ||
              (plVar10 = *(long **)(lVar5 + 0x28), plVar10 == (long *)0x0)))) goto LAB_00c28c18;
          lVar5 = *plVar10;
        }
        (**(code **)(lVar5 + 0x5a8))(plVar10,lVar9,*(undefined8 *)(lVar5 + 0x5b0));
      }
    }
LAB_00c28274:
    if (*(char *)((long)__this + 0x214) != '\0') {
      if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c28c18;
      GUIGameplay__NLBALNDOEFG(*(long *)((long)__this + 0x30),0);
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) != '\0') {
      if (((*(long *)((long)__this + 0x30) == 0) ||
          (lVar9 = *(long *)(*(long *)((long)__this + 0x30) + 0x2e8), lVar9 == 0)) ||
         (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0)) goto LAB_00c28c18;
      uVar4 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c28c18;
        GUIGameplay__LPFPLIJJJHJ(*(long *)((long)__this + 0x30),0);
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c28c18;
        uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (((*(long *)((long)__this + 0x30) == 0) ||
              (lVar9 = *(long *)(*(long *)((long)__this + 0x30) + 0xa0), lVar9 == 0)) ||
             (lVar9 = *(long *)(lVar9 + 0x20), lVar9 == 0)) goto LAB_00c28c18;
          cVar2 = *(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x28);
          uVar4 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
          if (cVar2 == '\0') {
            if ((uVar4 & 1) != 0) {
              if ((*(long *)((long)__this + 0x30) == 0) ||
                 (lVar9 = *(long *)(*(long *)((long)__this + 0x30) + 0xa0), lVar9 == 0))
              goto LAB_00c28c18;
              if (*(char *)(lVar9 + 0x34) == '\0') {
                GUIProgressBarWWW__APFABOGFKED(lVar9,0);
              }
            }
          }
          else if ((uVar4 & 1) == 0) {
            if (((*(long *)((long)__this + 0x30) == 0) ||
                (lVar9 = *(long *)(*(long *)((long)__this + 0x30) + 0xa0), lVar9 == 0)) ||
               (lVar9 = *(long *)(lVar9 + 0x20), lVar9 == 0)) goto LAB_00c28c18;
            UnityEngine_GameObject__SetActive(lVar9,1,0);
          }
        }
      }
    }
    if (*(char *)((long)__this + 0x4f4) != '\0') {
      if (((*(long *)((long)__this + 0x30) == 0) ||
          (lVar9 = *(long *)(*(long *)((long)__this + 0x30) + 0x90), lVar9 == 0)) ||
         (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0)) goto LAB_00c28c18;
      uVar4 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
      if ((uVar4 & 1) != 0) {
        fVar12 = *(float *)((long)__this + 0x508);
        fVar19 = (float)UnityEngine_Time__get_time(0);
        fVar12 = fVar12 - fVar19;
        iStack_6c = -0x80000000;
        if (fVar12 != INFINITY) {
          iStack_6c = (int)fVar12;
        }
        if (iStack_6c < 1) {
          if (-5 < iStack_6c) {
            if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c28c18;
            GUIGameplay__ButtonReviveCancel(*(long *)((long)__this + 0x30),0);
          }
        }
        else {
          if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c28c18;
          plVar10 = *(long **)(*(long *)((long)__this + 0x30) + 0x358);
          uVar8 = System_Int32__ToString(&iStack_6c,0);
          if (plVar10 == (long *)0x0) goto LAB_00c28c18;
          (**(code **)(*plVar10 + 0x5a8))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x5b0));
        }
      }
    }
  }
  if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c28c18;
  fVar19 = *(float *)((long)__this + 0x40c);
  UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
  if (fVar19 < in_s2) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) == '\0') {
      if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c28c18;
      UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
      *(float *)((long)__this + 0x40c) = in_s2;
    }
  }
  CarController__JBBIBEPIODK(__this);
  CarController__PKLGNADJLIG(__this);
  if (*(char *)((long)__this + 0x345) != '\0') {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(float *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x10) < 1.02) {
      uVar13 = UnityEngine_Time__get_time(0);
      *(undefined4 *)((long)__this + 0x348) = uVar13;
      *(undefined2 *)((long)__this + 0x345) = 0x100;
      uVar8 = *(undefined8 *)((long)__this + 0x30);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar4 & 1) != 0) {
        if ((*(long *)((long)__this + 0x30) == 0) ||
           (lVar9 = *(long *)(*(long *)((long)__this + 0x30) + 0xd8), lVar9 == 0))
        goto LAB_00c28c18;
        plVar10 = (long *)UnityEngine_UI_Selectable__get_image(lVar9,0);
        if ((*(long *)((long)__this + 0x30) == 0) ||
           (lVar9 = *(long *)(*(long *)((long)__this + 0x30) + 0xd8), lVar9 == 0))
        goto LAB_00c28c18;
        uVar23 = *(undefined4 *)(lVar9 + 0x54);
        uVar22 = *(undefined4 *)(lVar9 + 0x58);
        uVar21 = *(undefined4 *)(lVar9 + 0x5c);
        uVar13 = *(undefined4 *)(lVar9 + 0x60);
        if (*(int *)(_UnityEngine_UI_ColorBlock_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (plVar10 == (long *)0x0) goto LAB_00c28c18;
        (**(code **)(*plVar10 + 0x2a8))
                  (uVar23,uVar22,uVar21,uVar13,plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
      }
    }
  }
  if ((*(char *)((long)__this + 0x346) != '\0') && (*(float *)((long)__this + 0x348) != 0.0)) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(float *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x10) < 1.02) {
      fVar19 = (float)UnityEngine_Time__get_time(0);
      fVar19 = (fVar19 - *(float *)((long)__this + 0x348)) * 2.5;
      if ((1.0 < fVar19) || (*(char *)((long)__this + 0x3c8) != '\0')) {
        lVar9 = *(long *)((long)__this + 0x328);
        uStack_68 = uStack_68 & 0xffffffff;
        if (lVar9 == 0) goto LAB_00c28c18;
        uVar7 = *(uint *)(lVar9 + 0x18);
        if (0 < (int)uVar7) {
          uVar6 = 0;
          do {
            if (uVar7 <= uVar6) goto LAB_00c28c1c;
            lVar5 = *(long *)(lVar9 + (long)(int)uVar6 * 8 + 0x20);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = UnityEngine_Object__op_Inequality(lVar5,0,0);
            if ((uVar4 & 1) != 0) {
              if (lVar5 == 0) goto LAB_00c28c18;
              uStack_78 = UnityEngine_ParticleSystem__get_emission(lVar5,0);
              UnityEngine_ParticleSystem_EmissionModule__set_enabled(&uStack_78,0,0);
            }
            uVar6 = uStack_68._4_4_ + 1;
            uStack_68 = CONCAT44(uVar6,(undefined4)uStack_68);
            uVar7 = *(uint *)(lVar9 + 0x18);
          } while ((int)uVar6 < (int)uVar7);
        }
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar9 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x70);
        if (lVar9 == 0) goto LAB_00c28c18;
        UnityEngine_AudioSource__Pause(lVar9,0);
        *(undefined1 *)((long)__this + 0x346) = 0;
      }
      else {
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        fVar12 = fVar19;
        if (1.0 < fVar19) {
          fVar12 = 1.0;
        }
        lVar9 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x70);
        if (fVar19 < 0.0) {
          fVar12 = 0.0;
        }
        if (lVar9 == 0) goto LAB_00c28c18;
        fVar19 = *(float *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x78);
        UnityEngine_AudioSource__set_volume(fVar19 + fVar12 * (0.0 - fVar19),fVar19,lVar9,0);
        lVar9 = *(long *)((long)__this + 0x328);
        uStack_68 = uStack_68 & 0xffffffff;
        if (lVar9 == 0) goto LAB_00c28c18;
        uVar7 = *(uint *)(lVar9 + 0x18);
        if (0 < (int)uVar7) {
          uVar6 = 0;
          auVar15 = NEON_fmov(0xbf800000,4);
          auVar16 = NEON_fmov(0x3f800000,4);
          do {
            if (uVar7 <= uVar6) {
LAB_00c28c1c:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            lVar5 = *(long *)(lVar9 + (long)(int)uVar6 * 8 + 0x20);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = UnityEngine_Object__op_Inequality(lVar5,0,0);
            if ((uVar4 & 1) != 0) {
              if (lVar5 == 0) goto LAB_00c28c18;
              auVar17._0_4_ =
                   fVar12 * (*(float *)((long)__this + 0x330) + auVar15._0_4_) + auVar16._0_4_;
              auVar17._4_4_ =
                   fVar12 * (*(float *)((long)__this + 0x334) + auVar15._4_4_) + auVar16._4_4_;
              auVar17._8_4_ =
                   fVar12 * (*(float *)((long)__this + 0x338) + auVar15._8_4_) + auVar16._8_4_;
              auVar17._12_4_ =
                   fVar12 * (*(float *)((long)__this + 0x33c) + auVar15._12_4_) + auVar16._12_4_;
              UnityEngine_ParticleSystem__set_startColor
                        (auVar17,auVar17._4_4_,auVar17._8_4_,auVar17._12_4_,lVar5,0);
            }
            uVar6 = uStack_68._4_4_ + 1;
            uStack_68 = CONCAT44(uVar6,(undefined4)uStack_68);
            uVar7 = *(uint *)(lVar9 + 0x18);
          } while ((int)uVar6 < (int)uVar7);
        }
      }
    }
  }
  if (*(char *)((long)__this + 0x3fd) == '\0') {
    if (*(char *)((long)__this + 0x3c8) == '\0') {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      fVar19 = *(float *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x10);
      if (fVar19 <= 0.0) goto LAB_00c28824;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        fVar19 = *(float *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x10);
      }
      if (1.02 <= fVar19) goto LAB_00c28824;
      uVar8 = *(undefined8 *)((long)__this + 0x380);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar4 & 1) != 0) {
        UnityEngine_ParticleSystem_EmissionModule__set_enabled((long)__this + 0x390,1,0);
      }
      uVar8 = *(undefined8 *)((long)__this + 0x388);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar4 & 1) == 0) goto LAB_00c28894;
      uVar8 = 1;
    }
    else {
LAB_00c28824:
      uVar8 = *(undefined8 *)((long)__this + 0x380);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar4 & 1) != 0) {
        UnityEngine_ParticleSystem_EmissionModule__set_enabled((long)__this + 0x390,0,0);
      }
      uVar8 = *(undefined8 *)((long)__this + 0x388);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar4 & 1) == 0) goto LAB_00c28894;
      uVar8 = 0;
    }
    UnityEngine_ParticleSystem_EmissionModule__set_enabled((long)__this + 0x398,uVar8,0);
  }
LAB_00c28894:
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar9 == 0) goto LAB_00c28c18;
  uVar4 = DAFNMLEKHAD__BMMOMBGDEKF(lVar9,0);
  if ((uVar4 & 1) != 0) {
    fVar19 = 0.0;
    if ((*(int *)((long)__this + 0x164) != 0) &&
       (fVar12 = fVar11 / (float)*(int *)((long)__this + 0x164), 0.0 <= fVar12)) {
      fVar19 = fVar12;
    }
    if (*(long *)((long)__this + 0x48) == 0) goto LAB_00c28c18;
    UnityEngine_AudioSource__set_pitch
              (fVar19 * 0.5 + 0.5,0x3f000000,*(long *)((long)__this + 0x48),0);
    fVar19 = 0.8;
    if ((*(int *)((long)__this + 0x164) != 0) &&
       (fVar11 = fVar11 / (float)*(int *)((long)__this + 0x164), 0.0 <= fVar11)) {
      if (1.0 < fVar11) {
        fVar11 = 1.0;
      }
      fVar19 = fVar11 * 0.4 + 0.8;
    }
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar9 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x70);
    if (lVar9 == 0) goto LAB_00c28c18;
    UnityEngine_AudioSource__set_pitch(fVar19,lVar9,0);
  }
  CarController__EFIBCONCDIM(__this);
  CarController__DBHKFBLNNPF(__this);
  CarController__OIDKCBOGMIJ(__this);
  if (*(char *)((long)__this + 0x3c8) != '\0') {
    return;
  }
  uStack_130 = *(undefined4 *)((long)__this + 0x4b0);
  uStack_138 = SUB168(*(undefined1 (*) [16])((long)__this + 0x4a0),8);
  uStack_140 = SUB168(*(undefined1 (*) [16])((long)__this + 0x4a0),0);
  iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_140,0);
  if (iVar3 < 1) {
    uStack_150 = *(undefined4 *)((long)__this + 0x4c4);
    auVar15 = *(undefined1 (*) [16])((long)__this + 0x4b4);
    uStack_158 = auVar15._8_8_;
    uStack_160 = auVar15._0_8_;
    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_160,0);
    if (iVar3 < 1) {
      if (29.0 <= *(float *)((long)__this + 0x3cc)) {
        return;
      }
      *(undefined4 *)((long)__this + 0x49c) = 0;
      return;
    }
    CarController__FKBDELMHMJD
              (__this,(undefined1 (*) [16])((long)__this + 0x4b4),(long)__this + 0x254);
    if (*(char *)((long)__this + 0x62) == '\0') {
      return;
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x50), lVar9 == 0)) goto LAB_00c28c18;
    if (*(int *)(lVar9 + 0x18) != 4) {
      return;
    }
    iVar3 = 3;
  }
  else {
    CarController__FKBDELMHMJD(__this,(long)__this + 0x4a0,(long)__this + 0x240);
    if (*(char *)((long)__this + 0x62) == '\0') {
      return;
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x50), lVar9 == 0)) {
LAB_00c28c18:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*(int *)(lVar9 + 0x18) != 4) {
      return;
    }
    iVar3 = 2;
  }
  CarController__IKOEIGDJPEK(__this,iVar3,true);
  return;
}


// ==== public bool HECJKCAMLHJ(GameObject OPBPCFOOBHD) { }   @0xb28f84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool CarController__HECJKCAMLHJ(void *__this,void *OPBPCFOOBHD)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  float in_s2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  long lStack_48;
  
  if ((bRam0000000001917048 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_ReviveObject___);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_yama);
    func_0x00a67900(&Str_bomb);
    bRam0000000001917048 = 1;
  }
  fVar7 = -1.0;
  if ((*(float *)((long)__this + 0x508) == -1.0) || (*(char *)((long)__this + 0x4f4) != '\0')) {
    return false;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
     (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar3 == 0)) goto LAB_00c2928c;
  uVar4 = AdvController__HNDMJBICLJF(lVar3,6,0);
  if ((uVar4 & 1) == 0) goto LAB_00c29264;
  iVar1 = *(int *)((long)__this + 0x1c8);
  if (iVar1 < 100) {
    uStack_50 = *(undefined4 *)((long)__this + 0x1b0);
    uStack_58 = *(undefined8 *)((long)__this + 0x1a8);
    uStack_60 = *(undefined8 *)((long)__this + 0x1a0);
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_60,0);
    in_s2 = (float)iVar2;
    fVar7 = (float)iVar1;
    if (fVar7 < in_s2 * 0.3) goto LAB_00c29264;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Inequality(OPBPCFOOBHD,0,0);
  if ((uVar4 & 1) == 0) {
LAB_00c29240:
    if (*(char *)((long)__this + 0x4f4) == '\0') goto LAB_00c29264;
  }
  else {
    if (OPBPCFOOBHD == (void *)0x0) goto LAB_00c2928c;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (OPBPCFOOBHD,&lStack_48,_Method_UnityEngine_GameObject_GetComponent_ReviveObject___);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Inequality(lStack_48,0,0);
    if ((uVar4 & 1) == 0) {
LAB_00c29194:
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(lStack_48,0,0);
      if ((uVar4 & 1) != 0) {
        lVar3 = UnityEngine_Object__get_name(OPBPCFOOBHD,0);
        if (lVar3 == 0) goto LAB_00c2928c;
        uVar4 = System_String__Contains(lVar3,_Str_bomb,0);
        if ((uVar4 & 1) != 0) {
          if (*(long *)((long)__this + 0x38) == 0) {
LAB_00c2928c:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          uVar6 = UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
          if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c2928c;
          UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
          if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c2928c;
          UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
          goto LAB_00c2921c;
        }
      }
      goto LAB_00c29240;
    }
    lVar3 = UnityEngine_Object__get_name(OPBPCFOOBHD,0);
    if (lVar3 == 0) goto LAB_00c2928c;
    uVar4 = System_String__Contains(lVar3,_Str_yama,0);
    if ((uVar4 & 1) == 0) goto LAB_00c29194;
    if (lStack_48 == 0) goto LAB_00c2928c;
    in_s2 = (float)ReviveObject__IBINGNLOHNJ(lStack_48,0);
    if (in_s2 <= 0.0) goto LAB_00c29240;
    if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c2928c;
    uVar6 = UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    fVar7 = *(float *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x3c);
LAB_00c2921c:
    *(undefined4 *)((long)__this + 0x4f8) = uVar6;
    *(float *)((long)__this + 0x500) = in_s2;
    *(float *)((long)__this + 0x4fc) = fVar7 + 0.3;
    *(undefined1 *)((long)__this + 0x4f4) = 1;
  }
  uVar5 = CarController__JMCGEKEOJHD(__this,0);
  UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar5,0);
LAB_00c29264:
  return *(char *)((long)__this + 0x4f4) != '\0';
}



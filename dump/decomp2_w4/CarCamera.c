// ==== public Vector3 AAPGENGOABC() { }   @0xb01cd0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * CarCamera__AAPGENGOABC(void *__this)

{
  long lVar1;
  void *pvVar2;
  
  if ((*(long *)((long)__this + 0x30) != 0) &&
     (lVar1 = *(long *)(*(long *)((long)__this + 0x30) + 0x38), lVar1 != 0)) {
    UnityEngine_Transform__get_position(lVar1,0);
    if ((*(long *)((long)__this + 0x30) != 0) &&
       (lVar1 = *(long *)(*(long *)((long)__this + 0x30) + 0x38), lVar1 != 0)) {
      pvVar2 = (void *)UnityEngine_Transform__get_position(lVar1,0);
      if (*(long *)((long)__this + 0x30) != 0) {
        return pvVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Update() { }   @0xb0216c

/* WARNING: Removing unreachable block (ram,0x00c02540) */
/* WARNING: Removing unreachable block (ram,0x00c02298) */
/* WARNING: Removing unreachable block (ram,0x00c023bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCamera__Update(void *__this)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  ulong extraout_d0;
  ulong in_d1;
  ulong uVar16;
  undefined8 uVar17;
  float in_s2;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  
  if ((bRam0000000001916f34 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f34 = 1;
  }
  uVar7 = *(undefined8 *)((long)__this + 0x30);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c02648;
    uVar7 = *(undefined8 *)(*(long *)((long)__this + 0x30) + 0x40);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x46) == '\0') {
      CarCamera__BGKJCAIHANB(__this);
      CarCamera__IDBHFAEMGOB(__this);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) == '\0') {
        CarCamera__AAPGENGOABC(__this);
        uVar6 = extraout_d0;
      }
      else {
        if (*(float *)((long)__this + 0x8c) == 0.0) {
          if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c02648;
          UnityEngine_Transform__get_position(*(long *)((long)__this + 0x20),0);
          if ((*(long *)((long)__this + 0x30) == 0) ||
             (lVar8 = *(long *)(*(long *)((long)__this + 0x30) + 0x40), lVar8 == 0))
          goto LAB_00c02648;
          fVar9 = in_s2;
          UnityEngine_Rigidbody__get_velocity(lVar8,0);
          fVar9 = fVar9 * 0.5;
          fVar12 = fVar9;
          if (fVar9 < -3.0) {
            fVar12 = -3.0;
          }
          *(float *)((long)__this + 0x8c) = in_s2 + fVar12;
          if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c02648;
          UnityEngine_Transform__get_position(*(long *)((long)__this + 0x20),0);
          in_d1 = (ulong)(uint)(fVar9 + 2.0);
          *(float *)((long)__this + 0x90) = fVar9 + 2.0;
          *(undefined4 *)((long)__this + 0x94) = *(undefined4 *)((long)__this + 0x44);
        }
        fVar9 = (float)in_d1;
        if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c02648;
        UnityEngine_Transform__get_position(*(long *)((long)__this + 0x20),0);
        fVar14 = *(float *)((long)__this + 0x90);
        uVar6 = (ulong)*(uint *)((long)__this + 0x94);
        fVar10 = (float)UnityEngine_Time__get_deltaTime(0);
        fVar10 = fVar10 * 0.5;
        fVar12 = fVar10;
        if (1.0 < fVar10) {
          fVar12 = 1.0;
        }
        if (fVar10 < 0.0) {
          fVar12 = 0.0;
        }
        in_d1 = (ulong)(uint)(fVar9 + (fVar14 - fVar9) * fVar12);
        UnityEngine_Time__get_deltaTime(0);
      }
      if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c02648;
      UnityEngine_Transform__set_position(uVar6,in_d1,*(long *)((long)__this + 0x20),0);
    }
    else if (*(char *)((long)__this + 0xbc) == '\0') {
      *(undefined4 *)((long)__this + 0x44) = *(undefined4 *)((long)__this + 0x58);
      CarCamera__IDBHFAEMGOB(__this);
      fVar9 = (float)in_d1;
      if (*(float *)((long)__this + 0x8c) == 0.0) {
        if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c02648;
        UnityEngine_Transform__get_position(*(long *)((long)__this + 0x20),0);
        *(float *)((long)__this + 0x8c) = in_s2 + 42.0;
      }
      fVar12 = (float)UnityEngine_Time__get_deltaTime(0);
      if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c02648;
      fVar10 = *(float *)((long)__this + 200);
      fVar13 = (float)UnityEngine_Transform__get_position(*(long *)((long)__this + 0x20),0);
      fVar24 = *(float *)((long)__this + 0x44);
      fVar11 = (float)UnityEngine_Time__get_deltaTime(0);
      fVar25 = *(float *)((long)__this + 100);
      fVar14 = (float)UnityEngine_Time__get_deltaTime(0);
      if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c02648;
      fVar14 = fVar14 * 5.0;
      fVar10 = fVar12 / 3.0 + fVar10;
      fVar12 = 0.0;
      bVar2 = fVar10 < 0.0;
      if (1.0 < fVar10) {
        fVar10 = 1.0;
      }
      if (bVar2) {
        fVar10 = fVar12;
      }
      bVar2 = fVar14 < 0.0;
      if (1.0 < fVar14) {
        fVar14 = 1.0;
      }
      if (bVar2) {
        fVar14 = fVar12;
      }
      fVar1 = fVar11 * 5.0;
      if (fVar11 * 5.0 < 0.0) {
        fVar1 = fVar12;
      }
      UnityEngine_Transform__set_position
                (fVar13 + (fVar24 - fVar13) * fVar1,fVar9 + (fVar25 - fVar9) * fVar14,
                 in_s2 + fVar10 * ((*(float *)((long)__this + 0x8c) +
                                   *(float *)((long)__this + 0x40) * 100.0) - in_s2),
                 *(long *)((long)__this + 0x20),0);
      fVar12 = *(float *)((long)__this + 200);
      fVar9 = (float)UnityEngine_Time__get_deltaTime(0);
      *(float *)((long)__this + 200) = fVar12 + fVar9 * 0.0005;
    }
    else {
      fVar9 = (float)UnityEngine_Time__get_deltaTime(0);
      fVar12 = (float)in_d1;
      lVar8 = *(long *)((long)__this + 0x20);
      if (lVar8 == 0) {
LAB_00c02648:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      fVar10 = (float)UnityEngine_Transform__get_position(lVar8,0);
      if (*(long *)((long)__this + 0xc0) == 0) goto LAB_00c02648;
      fVar9 = fVar9 * 0.25;
      fVar14 = fVar12;
      fVar13 = in_s2;
      fVar11 = (float)UnityEngine_Transform__get_position(*(long *)((long)__this + 0xc0),0);
      if (fVar9 < 0.0) {
        fVar9 = 0.0;
      }
      uVar22 = (ulong)(uint)fVar9;
      uVar6 = (ulong)(uint)(fVar12 + fVar9 * (fVar14 - fVar12));
      uVar19 = (ulong)(uint)(in_s2 + fVar9 * (fVar13 - in_s2));
      UnityEngine_Transform__set_position(fVar10 + fVar9 * (fVar11 - fVar10),uVar6,uVar19,lVar8,0);
      lVar8 = *(long *)((long)__this + 0x20);
      if (lVar8 == 0) goto LAB_00c02648;
      uVar7 = UnityEngine_Transform__get_rotation(lVar8,0);
      if (*(long *)((long)__this + 0xc0) == 0) goto LAB_00c02648;
      uVar16 = uVar6;
      uVar20 = uVar19;
      uVar23 = uVar22;
      uVar15 = UnityEngine_Transform__get_rotation(*(long *)((long)__this + 0xc0),0);
      UnityEngine_Quaternion__Lerp(uVar7,uVar6,uVar19,uVar22,uVar15,uVar16,uVar20,uVar23,0);
      UnityEngine_Transform__set_rotation(lVar8,0);
    }
    iVar3 = *(int *)((long)__this + 0xac);
    iVar4 = UnityEngine_Screen__get_width(0);
    if ((iVar3 != iVar4) ||
       (iVar3 = *(int *)((long)__this + 0xa8), iVar4 = UnityEngine_Screen__get_height(0),
       iVar3 != iVar4)) {
      uVar5 = UnityEngine_Screen__get_height(0);
      *(undefined4 *)((long)__this + 0xa8) = uVar5;
      uVar5 = UnityEngine_Screen__get_width(0);
      *(undefined4 *)((long)__this + 0xac) = uVar5;
      iVar3 = UnityEngine_Screen__get_width(0);
      iVar4 = UnityEngine_Screen__get_height(0);
      fVar9 = (float)iVar3 / (float)iVar4;
      if (fVar9 <= 1.26) {
        *(undefined4 *)((long)__this + 0xb8) = 0x3fd9999a;
        *(undefined8 *)((long)__this + 0x54) = 0x4180000041200000;
        *(undefined8 *)((long)__this + 0x68) = 0x40866666402ccccd;
        *(undefined8 *)((long)__this + 0x60) = 0x4089999a40000000;
        *(undefined8 *)((long)__this + 0x78) = 0xffffffcaffffffc8;
        *(undefined8 *)((long)__this + 0x70) = 0x300000003;
        uVar5 = 0x41a00000;
      }
      else if (fVar9 <= 1.34) {
        *(undefined8 *)((long)__this + 0x54) = 0x4168000041100000;
        *(undefined8 *)((long)__this + 0x68) = 0x4020000040066666;
        *(undefined8 *)((long)__this + 0x60) = 0x408666663fc00000;
        *(undefined8 *)((long)__this + 0x78) = 0xffffffc8ffffffc6;
        *(undefined8 *)((long)__this + 0x70) = 0x500000003;
        *(undefined4 *)((long)__this + 0xb8) = 0x40000000;
        uVar5 = 0x41940000;
      }
      else if (fVar9 <= 1.51) {
        *(undefined4 *)((long)__this + 0xb8) = 0x3fc00000;
        *(undefined8 *)((long)__this + 0x54) = 0x4150000040e00000;
        *(undefined8 *)((long)__this + 0x68) = 0x400000003fb9999a;
        *(undefined8 *)((long)__this + 0x60) = 0x407333333fa00000;
        *(undefined8 *)((long)__this + 0x78) = 0xffffffc8ffffffc3;
        *(undefined8 *)((long)__this + 0x70) = 0x700000003;
        uVar5 = 0x41880000;
      }
      else if (1.61 <= fVar9) {
        if (1.8 <= fVar9) {
          if (2.0 <= fVar9) {
            uVar5 = 0x416b3333;
            *(undefined8 *)((long)__this + 0x54) = 0x412b333340c9999a;
            *(undefined8 *)((long)__this + 0x68) = 0xbf0000003f000000;
            *(undefined8 *)((long)__this + 0x60) = 0x406000003faccccd;
            *(undefined8 *)((long)__this + 0x78) = 0xffffffbfffffffb9;
            *(undefined8 *)((long)__this + 0x70) = 0xa00000007;
            goto LAB_00c01cc0;
          }
          uVar7 = 0x4130000040d00000;
          uVar17 = 0xbf0000003f000000;
          uVar15 = 0x406000003faccccd;
          uVar21 = 0xffffffbfffffffb9;
          uVar18 = 0xa00000007;
        }
        else {
          uVar7 = 0x4130000040c00000;
          uVar17 = 0x3fa00000;
          uVar15 = 0x408000003f99999a;
          uVar21 = 0xffffffc5ffffffbf;
          uVar18 = 0xa00000003;
        }
        *(undefined8 *)((long)__this + 0x54) = uVar7;
        *(undefined8 *)((long)__this + 0x68) = uVar17;
        *(undefined8 *)((long)__this + 0x60) = uVar15;
        *(undefined8 *)((long)__this + 0x78) = uVar21;
        *(undefined8 *)((long)__this + 0x70) = uVar18;
        uVar5 = 0x41700000;
      }
      else {
        *(undefined8 *)((long)__this + 0x54) = 0x4140000040e00000;
        uVar5 = 0x41800000;
        *(undefined8 *)((long)__this + 0x68) = 0x3f19999a3fa00000;
        *(undefined8 *)((long)__this + 0x60) = 0x4084cccd3fa00000;
        *(undefined8 *)((long)__this + 0x78) = 0xffffffc7ffffffc2;
        *(undefined8 *)((long)__this + 0x70) = 0xa00000003;
      }
LAB_00c01cc0:
      *(undefined4 *)((long)__this + 0x5c) = uVar5;
      return;
    }
  }
  return;
}



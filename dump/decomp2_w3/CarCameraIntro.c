// ==== private void Update() { }   @0xb5d090

/* WARNING: Removing unreachable block (ram,0x00c5d100) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCameraIntro__Update(void *__this)

{
  long lVar1;
  float fVar2;
  ulong uVar3;
  void *__this_00;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 in_d1;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  undefined8 in_d2;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  
  if (*(char *)((long)__this + 0x20) == '\0') {
    if ((bRam00000000019171fe & 1) == 0) {
      func_0x00a67900(&UnityEngine_Object_TypeInfo);
      func_0x00a67900(&SoundScript_TypeInfo);
      bRam00000000019171fe = 1;
    }
    uVar8 = *(undefined8 *)((long)__this + 0x28);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)((long)__this + 0x28) != 0) {
        uVar8 = *(undefined8 *)(*(long *)((long)__this + 0x28) + 0x30);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar8,0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        __this_00 = *(void **)((long)__this + 0x28);
        if ((__this_00 != (void *)0x0) && (*(long *)((long)__this_00 + 0x30) != 0)) {
          *(undefined1 *)(*(long *)((long)__this_00 + 0x30) + 0x3fd) = 1;
          *(undefined4 *)((long)__this_00 + 0x38) = 2;
          CarCamera__KHDFDGMBOIJ(__this_00);
          if (*(long *)((long)__this + 0x28) != 0) {
            CarCamera__BGKJCAIHANB(*(long *)((long)__this + 0x28),0);
            if (*(long *)((long)__this + 0x28) != 0) {
              CarCamera__IDBHFAEMGOB(*(long *)((long)__this + 0x28),0);
              uVar8 = UnityEngine_Component__get_transform(__this,0);
              *(undefined8 *)((long)__this + 0x38) = uVar8;
              if ((*(long *)((long)__this + 0x28) != 0) &&
                 (lVar4 = *(long *)(*(long *)((long)__this + 0x28) + 0x20), lVar4 != 0)) {
                lVar5 = *(long *)((long)__this + 0x40);
                lVar1 = *(long *)((long)__this + 0x48);
                uVar8 = UnityEngine_Transform__get_position(lVar4,0);
                if ((lVar1 != 0) && (UnityEngine_Transform__set_position(lVar1,0), lVar5 != 0)) {
                  UnityEngine_Transform__set_position(uVar8,in_d1,in_d2,lVar5,0);
                  fVar7 = (float)in_d2;
                  fVar17 = (float)in_d1;
                  lVar4 = *(long *)((long)__this + 0x48);
                  if (lVar4 != 0) {
                    fVar18 = (float)UnityEngine_Transform__get_position(lVar4,0);
                    if (cRam0000000001916e65 == '\0') {
                      func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                      cRam0000000001916e65 = '\x01';
                    }
                    lVar5 = *(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8);
                    fVar17 = fVar17 - *(float *)(lVar5 + 0x4c) * 21.0;
                    fVar7 = fVar7 - *(float *)(lVar5 + 0x50) * 21.0;
                    UnityEngine_Transform__set_position
                              (fVar18 - *(float *)(lVar5 + 0x48) * 21.0,fVar17,fVar7,lVar4,0);
                    lVar4 = *(long *)((long)__this + 0x48);
                    if (lVar4 != 0) {
                      fVar18 = (float)UnityEngine_Transform__get_position(lVar4,0);
                      if (cRam0000000001916e66 == '\0') {
                        func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                        cRam0000000001916e66 = '\x01';
                      }
                      lVar5 = *(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8);
                      UnityEngine_Transform__set_position
                                (fVar18 + *(float *)(lVar5 + 0x3c) * 3.0,
                                 fVar17 + *(float *)(lVar5 + 0x40) * 3.0,
                                 fVar7 + *(float *)(lVar5 + 0x44) * 3.0,lVar4,0);
                      if (*(long *)((long)__this + 0x48) != 0) {
                        lVar4 = *(long *)((long)__this + 0x38);
                        UnityEngine_Transform__get_position(*(long *)((long)__this + 0x48),0);
                        if (lVar4 != 0) {
                          UnityEngine_Transform__set_position(lVar4,0);
                          if (*(long *)((long)__this + 0x48) != 0) {
                            lVar4 = *(long *)((long)__this + 0x38);
                            UnityEngine_Transform__get_rotation(*(long *)((long)__this + 0x48),0);
                            if (lVar4 != 0) {
                              UnityEngine_Transform__set_rotation(lVar4,0);
                              if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              SoundScript__GIGBLEBBIEK
                                        (*(undefined8 *)
                                          (*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x20));
                              *(undefined1 *)((long)__this + 0x20) = 1;
                              return;
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
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    return;
  }
  fVar17 = *(float *)((long)__this + 0x50);
  if ((3.0 < fVar17) && (*(char *)((long)__this + 0x58) == '\0')) {
    if (*(long *)((long)__this + 0x48) == 0) goto LAB_00c5d320;
    lVar4 = *(long *)((long)__this + 0x38);
    fVar17 = (float)UnityEngine_Transform__get_position(*(long *)((long)__this + 0x48),0);
    fVar7 = (float)in_d1;
    fVar18 = (float)in_d2;
    if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c5d320;
    fVar13 = fVar18;
    fVar10 = fVar7;
    fVar6 = (float)CarCamera__AAPGENGOABC(*(long *)((long)__this + 0x28),0);
    fVar2 = *(float *)((long)__this + 0x54);
    if (*(float *)((long)__this + 0x54) < 0.0) {
      fVar2 = 0.0;
    }
    uVar3 = (ulong)(uint)fVar2;
    if (lVar4 == 0) goto LAB_00c5d320;
    uVar14 = (ulong)(uint)(fVar18 + (fVar13 - fVar18) * fVar2);
    uVar11 = (ulong)(uint)(fVar7 + (fVar10 - fVar7) * fVar2);
    UnityEngine_Transform__set_position(fVar17 + (fVar6 - fVar17) * fVar2,uVar11,uVar14,lVar4,0);
    if (*(long *)((long)__this + 0x48) == 0) goto LAB_00c5d320;
    lVar5 = *(long *)((long)__this + 0x38);
    uVar8 = UnityEngine_Transform__get_rotation(*(long *)((long)__this + 0x48),0);
    lVar4 = *(long *)((long)__this + 0x28);
    if (lVar4 == 0) goto LAB_00c5d320;
    uVar16 = (ulong)(uint)*(float *)(lVar4 + 0x88);
    uVar12 = (ulong)(uint)(*(float *)(lVar4 + 0x84) * 0.017453292);
    uVar15 = (ulong)(uint)(*(float *)(lVar4 + 0x88) * 0.017453292);
    uVar9 = UnityEngine_Quaternion__Internal_FromEulerRad
                      (*(float *)(lVar4 + 0x80) * 0.017453292,uVar12,uVar15,0);
    UnityEngine_Quaternion__Lerp(uVar8,uVar11,uVar14,uVar3,uVar9,uVar12,uVar15,uVar16,0);
    if (lVar5 == 0) goto LAB_00c5d320;
    UnityEngine_Transform__set_rotation(lVar5,0);
    fVar18 = *(float *)((long)__this + 0x54);
    fVar7 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar17 = *(float *)((long)__this + 0x50);
    *(float *)((long)__this + 0x54) = fVar18 + fVar7 * 0.5;
  }
  if ((5.0 < fVar17) && (*(char *)((long)__this + 0x58) == '\0')) {
    if ((*(long *)((long)__this + 0x28) == 0) ||
       ((((lVar4 = *(long *)(*(long *)((long)__this + 0x28) + 0x30), lVar4 == 0 ||
          (lVar4 = *(long *)(lVar4 + 0x30), lVar4 == 0)) ||
         (lVar4 = *(long *)(lVar4 + 0x50), lVar4 == 0)) ||
        (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0)))) goto LAB_00c5d320;
    UnityEngine_GameObject__SetActive(lVar4,1,0);
    if (((*(long *)((long)__this + 0x28) == 0) ||
        (lVar4 = *(long *)(*(long *)((long)__this + 0x28) + 0x30), lVar4 == 0)) ||
       (lVar4 = *(long *)(lVar4 + 0x28), lVar4 == 0)) goto LAB_00c5d320;
    UnityEngine_Behaviour__set_enabled(lVar4,1,0);
    if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c5d320;
    *(undefined4 *)(*(long *)((long)__this + 0x28) + 0x38) = 0;
    if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c5d320;
    UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x30),0,0);
    fVar17 = *(float *)((long)__this + 0x50);
    *(undefined1 *)((long)__this + 0x58) = 1;
  }
  if (6.0 < fVar17) {
    if ((*(long *)((long)__this + 0x28) != 0) &&
       (lVar4 = *(long *)(*(long *)((long)__this + 0x28) + 0x30), lVar4 != 0)) {
      CarController__MNMBFIBHFBB(lVar4,0);
      if ((*(long *)((long)__this + 0x28) != 0) &&
         (lVar4 = *(long *)(*(long *)((long)__this + 0x28) + 0x30), lVar4 != 0)) {
        *(undefined1 *)(lVar4 + 0x3fd) = 0;
        UnityEngine_Behaviour__set_enabled(__this,0,0);
        fVar17 = *(float *)((long)__this + 0x50);
        goto LAB_00c5d2dc;
      }
    }
LAB_00c5d320:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
LAB_00c5d2dc:
  fVar7 = (float)UnityEngine_Time__get_deltaTime(0);
  *(float *)((long)__this + 0x50) = fVar17 + fVar7;
  return;
}



// ==== private void OnEnable() { }   @0xaf8b78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ZombieParts__OnEnable(void *__this)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_s1;
  float fVar13;
  float in_s2;
  ulong uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fStack_d8;
  float fStack_d4;
  
  if ((bRam0000000001916eed & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    bRam0000000001916eed = 1;
  }
  if (*(long *)((long)__this + 0x28) != 0) {
    if (*(long *)(*(long *)((long)__this + 0x28) + 0x18) == 0) {
      return;
    }
    lVar3 = UnityEngine_Component__get_transform(__this,0);
    if (lVar3 != 0) {
      fVar10 = (float)UnityEngine_Transform__get_position(lVar3,0);
      if (cRam0000000001916e68 == '\0') {
        func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
        cRam0000000001916e68 = '\x01';
      }
      fVar11 = *(float *)((long)__this + 0x44);
      uVar16 = *(undefined8 *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x18);
      fVar17 = *(float *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x20);
      lVar3 = UnityEngine_Component__get_transform(__this,0);
      if (lVar3 != 0) {
        fVar13 = (float)uVar16 * fVar11;
        uVar14 = CONCAT44(in_s1,fVar10);
        fVar10 = fVar10 + fVar13;
        fVar12 = (float)UnityEngine_Transform__get_forward(lVar3,0);
        fVar15 = *(float *)((long)__this + 0x48);
        lVar3 = *(long *)((long)__this + 0x28);
        *(ulong *)((long)__this + 0x40) =
             CONCAT44(in_s1 + (float)((ulong)uVar16 >> 0x20) * fVar11 + fVar13 * fVar15,
                      fVar10 + fVar12 * fVar15);
        *(float *)((long)__this + 0x48) = in_s2 + fVar17 * fVar11 + (float)uVar14 * fVar15;
        if (lVar3 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (0 < (int)uVar1) {
            uVar8 = 0;
            do {
              if (uVar1 <= uVar8) goto LAB_00bf8fb4;
              lVar6 = *(long *)(lVar3 + (long)(int)uVar8 * 8 + 0x20);
              iVar2 = UnityEngine_Random__Range
                                (*(undefined4 *)((long)__this + 0x38),
                                 *(undefined4 *)((long)__this + 0x3c),0);
              if (lVar6 == 0) goto LAB_00bf8fb0;
              uVar14 = (ulong)*(uint *)((long)__this + 0x44);
              UnityEngine_Rigidbody__AddExplosionForce
                        ((float)iVar2,*(undefined4 *)((long)__this + 0x40),uVar14,
                         *(undefined4 *)((long)__this + 0x48),0x42c80000,lVar6,0);
              uVar1 = *(uint *)(lVar3 + 0x18);
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < (int)uVar1);
          }
          if (*(char *)((long)__this + 0x4c) != '\0') {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) == '\0') {
              lVar3 = *(long *)((long)__this + 0x30);
              if (lVar3 == 0) goto LAB_00bf8fb0;
              if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
                lVar6 = 0;
                fStack_d8 = 1.1;
                uVar9 = 0;
                uVar4 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
                fStack_d4 = 0.8;
                do {
                  fVar10 = (float)uVar14;
                  if (uVar4 <= uVar9) {
LAB_00bf8fb4:
                    /* WARNING: Subroutine does not return */
                    il2cpp_throw_967b58();
                  }
                  lVar7 = *(long *)(lVar3 + 0x20 + uVar9 * 8);
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((void *)**(undefined8 **)(_CarController_TypeInfo + 0xb8) == (void *)0x0)
                  goto LAB_00bf8fb0;
                  fVar11 = CarController__AGKGCILIANE
                                     ((void *)**(undefined8 **)(_CarController_TypeInfo + 0xb8));
                  if (fVar11 <= 60.0) {
                    lVar6 = lVar7;
                  }
                  fVar12 = 15.0;
                  fVar17 = fStack_d8;
                  if (fVar11 <= 60.0) {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((void *)**(undefined8 **)(_CarController_TypeInfo + 0xb8) == (void *)0x0)
                    goto LAB_00bf8fb0;
                    fVar11 = CarController__AGKGCILIANE
                                       ((void *)**(undefined8 **)(_CarController_TypeInfo + 0xb8));
                    if (fVar11 <= 45.0) {
                      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if ((void *)**(undefined8 **)(_CarController_TypeInfo + 0xb8) == (void *)0x0)
                      goto LAB_00bf8fb0;
                      fVar11 = CarController__AGKGCILIANE
                                         ((void *)**(undefined8 **)(_CarController_TypeInfo + 0xb8))
                      ;
                      fVar12 = 0.0;
                      lVar7 = lVar6;
                      fVar17 = 0.9;
                      if (15.0 < fVar11) {
                        fVar12 = 5.0;
                        fVar17 = 0.9;
                      }
                    }
                    else {
                      fVar12 = 10.0;
                      fVar17 = 1.0;
                    }
                  }
                  fVar11 = 0.8;
                  if (*(char *)((long)__this + 0x4d) != '\0') {
                    fVar17 = fStack_d4;
                  }
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    fVar11 = 0.8;
                    func_0x00a67a30();
                  }
                  if (((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                      (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x28),
                      lVar5 == 0)) || (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0))
                  goto LAB_00bf8fb0;
                  fVar13 = (float)UnityEngine_Transform__get_position(lVar5,0);
                  if (cRam0000000001916e65 == '\0') {
                    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                    cRam0000000001916e65 = '\x01';
                  }
                  lVar5 = *(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8);
                  uVar16 = *(undefined8 *)(lVar5 + 0x48);
                  fVar15 = *(float *)(lVar5 + 0x50);
                  if (cRam0000000001916e68 == '\0') {
                    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                    cRam0000000001916e68 = '\x01';
                    lVar5 = *(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8);
                  }
                  uVar22 = *(undefined8 *)(lVar5 + 0x18);
                  fVar19 = *(float *)(lVar5 + 0x20);
                  uVar20 = *(undefined8 *)((long)__this + 0x40);
                  fVar18 = *(float *)((long)__this + 0x48);
                  fVar17 = (float)UnityEngine_Random__Range(fVar17 * 0.5,fVar17,0);
                  if (lVar7 == 0) goto LAB_00bf8fb0;
                  fVar21 = (float)uVar22;
                  fVar23 = (float)((ulong)uVar22 >> 0x20);
                  uVar14 = (ulong)(uint)(((fVar10 + fVar12 * fVar15 + fVar19 + fVar19) - fVar18) *
                                        fVar17);
                  UnityEngine_Rigidbody__AddForce
                            (((fVar13 + (float)uVar16 * fVar12 + fVar21 + fVar21) - (float)uVar20) *
                             fVar17,((fVar11 + (float)((ulong)uVar16 >> 0x20) * fVar12 +
                                     fVar23 + fVar23) - (float)((ulong)uVar20 >> 0x20)) * fVar17,
                             uVar14,lVar7,1,0);
                  uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
                  uVar9 = uVar9 + 1;
                } while ((long)uVar9 < (long)(int)*(uint *)(lVar3 + 0x18));
              }
            }
          }
          return;
        }
      }
    }
  }
LAB_00bf8fb0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



// ==== private void Update() { }   @0xad8c18

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void objDestructorHints__Update(void *__this)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  
  if ((bRam0000000001916e07 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916e07 = 1;
  }
  iVar1 = *(int *)((long)__this + 0x28);
  if ((iVar1 == 0) || (iVar1 == 3)) {
    if (*(long *)((long)__this + 0x70) == 0) goto LAB_00bd91bc;
    fVar9 = (float)UnityEngine_Transform__get_localScale(*(long *)((long)__this + 0x70),0);
    fVar8 = *(float *)((long)__this + 0x90) * 1.3;
    if (0.2 <= *(float *)((long)__this + 0x2c)) {
      fVar8 = *(float *)((long)__this + 0x90);
    }
    fVar10 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar10 = fVar10 * 10.0;
    fVar14 = fVar10;
    if (1.0 < fVar10) {
      fVar14 = 1.0;
    }
    if (fVar10 < 0.0) {
      fVar14 = 0.0;
    }
    if (*(long *)((long)__this + 0x70) == 0) goto LAB_00bd91bc;
    fVar9 = fVar9 + (fVar8 - fVar9) * fVar14;
    UnityEngine_Transform__set_localScale(fVar9,fVar9,0x3f800000,*(long *)((long)__this + 0x70),0);
    if (0.8 < *(float *)((long)__this + 0x2c) / *(float *)((long)__this + 0x24)) {
      fVar9 = *(float *)((long)__this + 0x4c);
      fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
      plVar3 = *(long **)((long)__this + 0x88);
      *(float *)((long)__this + 0x4c) = fVar9 - (fVar8 + fVar8);
      if (plVar3 == (long *)0x0) goto LAB_00bd91bc;
      lVar5 = *plVar3;
      uVar12 = *(undefined4 *)((long)__this + 0x44);
      uVar13 = *(undefined4 *)((long)__this + 0x48);
      uVar11 = *(undefined4 *)((long)__this + 0x40);
LAB_00bd8ea8:
      (**(code **)(lVar5 + 0x2a8))(uVar11,uVar12,uVar13,plVar3,*(undefined8 *)(lVar5 + 0x2b0));
    }
  }
  else if (iVar1 == 4) {
    fVar8 = *(float *)((long)__this + 0x2c);
    if (fVar8 < 0.15) {
      fVar14 = *(float *)((long)__this + 0x3c);
      fVar9 = (float)UnityEngine_Time__get_deltaTime(0);
      fVar9 = fVar9 * 20.0;
      plVar3 = *(long **)((long)__this + 0x78);
      fVar8 = fVar9;
      if (1.0 < fVar9) {
        fVar8 = 1.0;
      }
      if (fVar9 < 0.0) {
        fVar8 = 0.0;
      }
      *(float *)((long)__this + 0x3c) = fVar14 + (1.0 - fVar14) * fVar8;
      if (plVar3 == (long *)0x0) goto LAB_00bd91bc;
      (**(code **)(*plVar3 + 0x2a8))
                (*(undefined4 *)((long)__this + 0x30),*(undefined4 *)((long)__this + 0x34),
                 *(undefined4 *)((long)__this + 0x38),plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
      lVar5 = *(long *)((long)__this + 0x80);
      if (lVar5 == 0) goto LAB_00bd91bc;
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar2) {
        uVar7 = 0;
        do {
          if (uVar2 <= uVar7) goto LAB_00bd91c0;
          plVar3 = *(long **)(lVar5 + (long)(int)uVar7 * 8 + 0x20);
          if (plVar3 == (long *)0x0) goto LAB_00bd91bc;
          (**(code **)(*plVar3 + 0x2a8))
                    (*(undefined4 *)((long)__this + 0x30),*(undefined4 *)((long)__this + 0x34),
                     *(undefined4 *)((long)__this + 0x38),*(undefined4 *)((long)__this + 0x3c),
                     plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
          uVar2 = *(uint *)(lVar5 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar2);
      }
      fVar8 = *(float *)((long)__this + 0x2c);
    }
    if (0.8 < fVar8 / *(float *)((long)__this + 0x24)) {
      fVar9 = *(float *)((long)__this + 0x3c);
      fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
      plVar3 = *(long **)((long)__this + 0x78);
      *(float *)((long)__this + 0x3c) = fVar9 + fVar8 * -4.0;
      if (plVar3 == (long *)0x0) goto LAB_00bd91bc;
      (**(code **)(*plVar3 + 0x2a8))
                (*(undefined4 *)((long)__this + 0x30),*(undefined4 *)((long)__this + 0x34),
                 *(undefined4 *)((long)__this + 0x38),plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
      lVar5 = *(long *)((long)__this + 0x80);
      if (lVar5 == 0) goto LAB_00bd91bc;
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar2) {
        uVar7 = 0;
        do {
          if (uVar2 <= uVar7) {
LAB_00bd91c0:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          plVar3 = *(long **)(lVar5 + (long)(int)uVar7 * 8 + 0x20);
          if (plVar3 == (long *)0x0) goto LAB_00bd91bc;
          (**(code **)(*plVar3 + 0x2a8))
                    (*(undefined4 *)((long)__this + 0x30),*(undefined4 *)((long)__this + 0x34),
                     *(undefined4 *)((long)__this + 0x38),*(undefined4 *)((long)__this + 0x3c),
                     plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
          uVar2 = *(uint *)(lVar5 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar2);
      }
    }
  }
  else {
    if (*(long *)((long)__this + 0x70) == 0) goto LAB_00bd91bc;
    fVar8 = (float)UnityEngine_Transform__get_localScale(*(long *)((long)__this + 0x70),0);
    fVar9 = *(float *)((long)__this + 0x2c);
    if (iVar1 == 6) {
      fVar14 = *(float *)((long)__this + 0x90) * 1.4;
      if (0.2 <= fVar9) {
        fVar14 = *(float *)((long)__this + 0x90);
      }
      fVar10 = (float)UnityEngine_Time__get_deltaTime(0);
      fVar10 = fVar10 * 10.0;
      fVar9 = fVar10;
      if (1.0 < fVar10) {
        fVar9 = 1.0;
      }
      if (fVar10 < 0.0) {
        fVar9 = 0.0;
      }
      if (*(long *)((long)__this + 0x70) == 0) goto LAB_00bd91bc;
      fVar8 = fVar8 + (fVar14 - fVar8) * fVar9;
      UnityEngine_Transform__set_localScale(fVar8,fVar8,0x3f800000,*(long *)((long)__this + 0x70),0)
      ;
      if (0.3 < *(float *)((long)__this + 0x2c) / *(float *)((long)__this + 0x24)) {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00bd91bc;
          if (*(char *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x3d0) != '\0') {
            fVar9 = *(float *)((long)__this + 0x4c);
            fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
            plVar3 = *(long **)((long)__this + 0x88);
            *(float *)((long)__this + 0x4c) = fVar9 + fVar8 * -3.0;
            if (plVar3 == (long *)0x0) goto LAB_00bd91bc;
            (**(code **)(*plVar3 + 0x2a8))
                      (*(undefined4 *)((long)__this + 0x40),*(undefined4 *)((long)__this + 0x44),
                       *(undefined4 *)((long)__this + 0x48),plVar3,*(undefined8 *)(*plVar3 + 0x2b0))
            ;
            uVar6 = *(undefined8 *)((long)__this + 0x78);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
            if ((uVar4 & 1) != 0) {
              fVar9 = *(float *)((long)__this + 0x4c);
              plVar3 = *(long **)((long)__this + 0x78);
              goto LAB_00bd91a4;
            }
          }
        }
      }
    }
    else {
      fVar15 = *(float *)((long)__this + 0x90);
      fVar10 = (float)UnityEngine_Time__get_deltaTime(0);
      fVar10 = fVar10 * 5.0;
      fVar14 = fVar10;
      if (1.0 < fVar10) {
        fVar14 = 1.0;
      }
      if (fVar10 < 0.0) {
        fVar14 = 0.0;
      }
      if (*(long *)((long)__this + 0x70) == 0) goto LAB_00bd91bc;
      fVar8 = fVar8 + (*(float *)(&UNK_0059c810 + (ulong)(fVar9 < 0.3) * 4) * fVar15 - fVar8) *
                      fVar14;
      UnityEngine_Transform__set_localScale(fVar8,fVar8,0x3f800000,*(long *)((long)__this + 0x70),0)
      ;
      if (0.6 < *(float *)((long)__this + 0x2c) / *(float *)((long)__this + 0x24)) {
        fVar9 = *(float *)((long)__this + 0x4c);
        fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
        plVar3 = *(long **)((long)__this + 0x88);
        *(float *)((long)__this + 0x4c) = fVar9 - fVar8;
        if (plVar3 == (long *)0x0) goto LAB_00bd91bc;
        (**(code **)(*plVar3 + 0x2a8))
                  (*(undefined4 *)((long)__this + 0x40),*(undefined4 *)((long)__this + 0x44),
                   *(undefined4 *)((long)__this + 0x48),plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
        uVar6 = *(undefined8 *)((long)__this + 0x78);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if ((uVar4 & 1) != 0) {
          fVar9 = *(float *)((long)__this + 0x3c);
          fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
          plVar3 = *(long **)((long)__this + 0x78);
          fVar9 = fVar9 - fVar8;
LAB_00bd91a4:
          *(float *)((long)__this + 0x3c) = fVar9;
          if (plVar3 == (long *)0x0) goto LAB_00bd91bc;
          lVar5 = *plVar3;
          uVar12 = *(undefined4 *)((long)__this + 0x34);
          uVar13 = *(undefined4 *)((long)__this + 0x38);
          uVar11 = *(undefined4 *)((long)__this + 0x30);
          goto LAB_00bd8ea8;
        }
      }
    }
  }
  fVar9 = *(float *)((long)__this + 0x2c);
  fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar9 = fVar9 + fVar8;
  *(float *)((long)__this + 0x2c) = fVar9;
  if (fVar9 <= *(float *)((long)__this + 0x24)) {
    return;
  }
  lVar5 = UnityEngine_Component__get_gameObject(__this,0);
  if (lVar5 != 0) {
    if (pcRam000000000191c3f8 == (code *)0x0) {
      pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
    }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c3f8)(lVar5,0);
    return;
  }
LAB_00bd91bc:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



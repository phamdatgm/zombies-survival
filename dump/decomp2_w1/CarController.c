// ==== private bool DADAHEFJBFC(int FECKNINKJBG, int JGBFJILJCMN, int OCMLDOHHNJI, int HGCIDJKHPLN) { }   @0xb1c104

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool CarController__DADAHEFJBFC
               (void *__this,int FECKNINKJBG,int JGBFJILJCMN,int OCMLDOHHNJI,int HGCIDJKHPLN)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  
  if ((bRam0000000001917011 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001917011 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if ((lVar4 != 0) && (pvVar3 = *(void **)(lVar4 + 0x50), pvVar3 != (void *)0x0)) {
    iVar2 = EventContest__get_sort(pvVar3);
    if (iVar2 == 0) {
      if (OCMLDOHHNJI < FECKNINKJBG) {
        bVar1 = true;
      }
      else {
        bVar1 = (0 < JGBFJILJCMN && FECKNINKJBG == OCMLDOHHNJI) && JGBFJILJCMN < HGCIDJKHPLN;
      }
    }
    else {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if ((lVar4 == 0) || (pvVar3 = *(void **)(lVar4 + 0x50), pvVar3 == (void *)0x0))
      goto LAB_00c1c234;
      iVar2 = EventContest__get_sort(pvVar3);
      if (iVar2 == 1) {
        bVar1 = OCMLDOHHNJI < FECKNINKJBG;
      }
      else if (JGBFJILJCMN < 1) {
        bVar1 = false;
      }
      else {
        bVar1 = HGCIDJKHPLN == 0 || 0 < HGCIDJKHPLN && JGBFJILJCMN < HGCIDJKHPLN;
      }
    }
    return bVar1;
  }
LAB_00c1c234:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private float GGPLBFNGFAP() { }   @0xb1ca80

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float CarController__GGPLBFNGFAP(void *__this)

{
  float fVar1;
  
  fVar1 = (float)UnityEngine_Random__get_value(0);
  return fVar1 + fVar1 + -1.0;
}


// ==== private void PPIBCCLIDMH(int GJHGNOEOAAG) { }   @0xb1d8d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__PPIBCCLIDMH(void *__this,int GJHGNOEOAAG)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar10;
  int iVar11;
  int *piVar12;
  undefined8 unaff_x19;
  ulong unaff_x20;
  long lVar13;
  long unaff_x21;
  long lVar14;
  uint uVar15;
  undefined *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 unaff_x27;
  code *unaff_x30;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  ulong in_d1;
  ulong uVar19;
  undefined4 uVar20;
  ulong in_d2;
  ulong uVar21;
  ulong uVar22;
  undefined8 unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined1 auVar23 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  
  if ((bRam0000000001917017 & 1) == 0) {
    func_0x00a67900(&CarController_CILHKIPDPMN___TypeInfo);
    func_0x00a67900(&UnityEngine_Debug_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Str_Wheels_error_2);
    bRam0000000001917017 = 1;
  }
  if (GJHGNOEOAAG - 1U < 3) {
    in_d1 = (ulong)(uint)*(float *)((long)__this + 0x178);
    *(float *)((long)__this + 0x178) =
         *(float *)((long)__this + 0x178) +
         *(float *)(&UNK_005b9f9c + (long)(int)(GJHGNOEOAAG - 1U) * 4);
  }
  lVar14 = *(long *)((long)__this + 0xf0);
  if (lVar14 == 0) goto LAB_00c1dff0;
  uVar2 = *(uint *)(lVar14 + 0x18);
  if (0 < (int)uVar2) {
    uVar15 = 0;
    do {
      if (uVar2 <= uVar15) goto LAB_00c1dff4;
      lVar4 = *(long *)(lVar14 + (long)(int)uVar15 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_00c1dff0;
      UnityEngine_GameObject__SetActive(lVar4,0 < GJHGNOEOAAG,0);
      uVar2 = *(uint *)(lVar14 + 0x18);
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar2);
  }
  lVar14 = *(long *)((long)__this + 0xf8);
  if (lVar14 == 0) goto LAB_00c1dff0;
  uVar2 = *(uint *)(lVar14 + 0x18);
  if (0 < (int)uVar2) {
    uVar15 = 0;
    do {
      if (uVar2 <= uVar15) goto LAB_00c1dff4;
      lVar4 = *(long *)(lVar14 + (long)(int)uVar15 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_00c1dff0;
      UnityEngine_GameObject__SetActive(lVar4,1 < GJHGNOEOAAG,0);
      uVar2 = *(uint *)(lVar14 + 0x18);
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar2);
  }
  lVar14 = *(long *)((long)__this + 0x100);
  if (lVar14 == 0) goto LAB_00c1dff0;
  uVar2 = *(uint *)(lVar14 + 0x18);
  if (0 < (int)uVar2) {
    uVar15 = 0;
    do {
      if (uVar2 <= uVar15) goto LAB_00c1dff4;
      lVar4 = *(long *)(lVar14 + (long)(int)uVar15 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_00c1dff0;
      UnityEngine_GameObject__SetActive(lVar4,2 < GJHGNOEOAAG,0);
      uVar2 = *(uint *)(lVar14 + 0x18);
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar2);
  }
  lVar14 = *(long *)((long)__this + 0xe8);
  if (lVar14 == 0) goto LAB_00c1dff0;
  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_00c1dff4;
  if (*(long *)(lVar14 + 0x20) == 0) goto LAB_00c1dff0;
  uVar5 = UnityEngine_GameObject__get_transform(*(long *)(lVar14 + 0x20),0);
  lVar14 = *(long *)((long)__this + 0xe8);
  *(undefined8 *)((long)__this + 0xa8) = uVar5;
  if (lVar14 == 0) goto LAB_00c1dff0;
  if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_00c1dff4;
  if (*(long *)(lVar14 + 0x28) == 0) goto LAB_00c1dff0;
  uVar5 = UnityEngine_GameObject__get_transform(*(long *)(lVar14 + 0x28),0);
  lVar14 = *(long *)((long)__this + 0xe8);
  *(undefined8 *)((long)__this + 0xb0) = uVar5;
  if (lVar14 == 0) goto LAB_00c1dff0;
  if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_00c1dff4;
  if (*(long *)(lVar14 + 0x30) == 0) goto LAB_00c1dff0;
  uVar5 = UnityEngine_GameObject__get_transform(*(long *)(lVar14 + 0x30),0);
  lVar14 = *(long *)((long)__this + 0xe8);
  *(undefined8 *)((long)__this + 0xb8) = uVar5;
  if (lVar14 == 0) goto LAB_00c1dff0;
  if (*(uint *)(lVar14 + 0x18) < 4) goto LAB_00c1dff4;
  if (*(long *)(lVar14 + 0x38) == 0) goto LAB_00c1dff0;
  uVar5 = UnityEngine_GameObject__get_transform(*(long *)(lVar14 + 0x38),0);
  lVar14 = *(long *)((long)__this + 0xe8);
  *(undefined8 *)((long)__this + 0xc0) = uVar5;
  if (lVar14 == 0) goto LAB_00c1dff0;
  if (*(int *)(lVar14 + 0x18) == 6) {
    if (*(long *)(lVar14 + 0x40) == 0) goto LAB_00c1dff0;
    uVar5 = UnityEngine_GameObject__get_transform(*(long *)(lVar14 + 0x40),0);
    lVar14 = *(long *)((long)__this + 0xe8);
    *(undefined8 *)((long)__this + 200) = uVar5;
    if (lVar14 == 0) goto LAB_00c1dff0;
    if (*(uint *)(lVar14 + 0x18) < 6) goto LAB_00c1dff4;
    if (*(long *)(lVar14 + 0x48) == 0) goto LAB_00c1dff0;
    uVar5 = UnityEngine_GameObject__get_transform(*(long *)(lVar14 + 0x48),0);
    lVar14 = *(long *)((long)__this + 0xe8);
    *(undefined8 *)((long)__this + 0xd0) = uVar5;
    if (lVar14 == 0) goto LAB_00c1dff0;
  }
  if (*(int *)(lVar14 + 0x18) == 8) {
    if (*(long *)(lVar14 + 0x40) == 0) goto LAB_00c1dff0;
    uVar5 = UnityEngine_GameObject__get_transform(*(long *)(lVar14 + 0x40),0);
    lVar14 = *(long *)((long)__this + 0xe8);
    *(undefined8 *)((long)__this + 200) = uVar5;
    if (lVar14 == 0) goto LAB_00c1dff0;
    if (*(uint *)(lVar14 + 0x18) < 6) goto LAB_00c1dff4;
    if (*(long *)(lVar14 + 0x48) == 0) goto LAB_00c1dff0;
    uVar5 = UnityEngine_GameObject__get_transform(*(long *)(lVar14 + 0x48),0);
    lVar14 = *(long *)((long)__this + 0xe8);
    *(undefined8 *)((long)__this + 0xd0) = uVar5;
    if (lVar14 == 0) goto LAB_00c1dff0;
    if (*(uint *)(lVar14 + 0x18) < 7) goto LAB_00c1dff4;
    if (*(long *)(lVar14 + 0x50) == 0) goto LAB_00c1dff0;
    uVar5 = UnityEngine_GameObject__get_transform(*(long *)(lVar14 + 0x50),0);
    lVar14 = *(long *)((long)__this + 0xe8);
    *(undefined8 *)((long)__this + 0xd8) = uVar5;
    if (lVar14 == 0) goto LAB_00c1dff0;
    if (*(uint *)(lVar14 + 0x18) < 8) goto LAB_00c1dff4;
    if (*(long *)(lVar14 + 0x58) == 0) goto LAB_00c1dff0;
    uVar5 = UnityEngine_GameObject__get_transform(*(long *)(lVar14 + 0x58),0);
    lVar14 = *(long *)((long)__this + 0xe8);
    *(undefined8 *)((long)__this + 0xe0) = uVar5;
    if (lVar14 == 0) goto LAB_00c1dff0;
  }
  iVar11 = *(int *)(lVar14 + 0x18);
  if (iVar11 < 4) {
    if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = _Str_Wheels_error_2;
    uVar9 = 0;
    if ((bRam000000000191b9da & 1) == 0) {
      func_0x00a67900(&UnityEngine_Debug_TypeInfo,0);
      func_0x00a67900(&UnityEngine_ILogger_TypeInfo);
      bRam000000000191b9da = 1;
      uVar9 = extraout_x1;
    }
    if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      uVar9 = extraout_x1_00;
    }
    if (cRam000000000191aefe == '\0') {
      func_0x00a67900(&UnityEngine_Debug_TypeInfo,uVar9);
      cRam000000000191aefe = '\x01';
    }
    if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    plVar6 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo + 0xb8) + 8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    lVar14 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == _UnityEngine_ILogger_TypeInfo) {
          puVar8 = (undefined8 *)(lVar14 + (long)(*piVar12 + 3) * 0x10 + 0x138);
          goto LAB_0146a5cc;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)func_0x00a9e6c4(plVar6,_UnityEngine_ILogger_TypeInfo,3);
LAB_0146a5cc:
                    /* WARNING: Could not recover jumptable at 0x0146a5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar8)(plVar6,0,uVar5,puVar8[1]);
    return;
  }
  iVar1 = 4;
  if (iVar11 != 5) {
    iVar1 = iVar11;
  }
  iVar11 = 6;
  if (iVar1 != 7) {
    iVar11 = iVar1;
  }
  *(int *)((long)__this + 0x120) = iVar11;
  plVar6 = (long *)func_0x00a679a0(_CarController_CILHKIPDPMN___TypeInfo);
  *(long **)((long)__this + 0x520) = plVar6;
  uVar10 = 1;
  lVar14 = CarController__DCPJJNIFCBM(__this,*(undefined8 *)((long)__this + 0xa8));
  if (plVar6 == (long *)0x0) goto LAB_00c1dff0;
  if ((lVar14 == 0) || (lVar4 = func_0x00a67a34(lVar14,*(undefined8 *)(*plVar6 + 0x40)), lVar4 != 0)
     ) {
    if ((int)plVar6[3] == 0) goto LAB_00c1dff4;
    plVar6[4] = lVar14;
    plVar6 = *(long **)((long)__this + 0x520);
    uVar10 = 1;
    lVar14 = CarController__DCPJJNIFCBM(__this,*(undefined8 *)((long)__this + 0xb0));
    if (plVar6 == (long *)0x0) goto LAB_00c1dff0;
    if ((lVar14 == 0) ||
       (lVar4 = func_0x00a67a34(lVar14,*(undefined8 *)(*plVar6 + 0x40)), lVar4 != 0)) {
      if (*(uint *)(plVar6 + 3) < 2) goto LAB_00c1dff4;
      plVar6[5] = lVar14;
      plVar6 = *(long **)((long)__this + 0x520);
      uVar10 = 2;
      lVar14 = CarController__DCPJJNIFCBM(__this,*(undefined8 *)((long)__this + 0xb8));
      if (plVar6 == (long *)0x0) goto LAB_00c1dff0;
      if ((lVar14 == 0) ||
         (lVar4 = func_0x00a67a34(lVar14,*(undefined8 *)(*plVar6 + 0x40)), lVar4 != 0)) {
        if (*(uint *)(plVar6 + 3) < 3) goto LAB_00c1dff4;
        plVar6[6] = lVar14;
        plVar6 = *(long **)((long)__this + 0x520);
        uVar10 = 2;
        lVar14 = CarController__DCPJJNIFCBM(__this,*(undefined8 *)((long)__this + 0xc0));
        if (plVar6 == (long *)0x0) goto LAB_00c1dff0;
        if ((lVar14 == 0) ||
           (lVar4 = func_0x00a67a34(lVar14,*(undefined8 *)(*plVar6 + 0x40)), lVar4 != 0)) {
          if (*(uint *)(plVar6 + 3) < 4) goto LAB_00c1dff4;
          plVar6[7] = lVar14;
          iVar11 = *(int *)((long)__this + 0x120);
          if (iVar11 == 6) {
            plVar6 = *(long **)((long)__this + 0x520);
            uVar10 = 6;
            lVar14 = CarController__DCPJJNIFCBM(__this,*(undefined8 *)((long)__this + 200));
            if (plVar6 == (long *)0x0) goto LAB_00c1dff0;
            if ((lVar14 == 0) ||
               (lVar4 = func_0x00a67a34(lVar14,*(undefined8 *)(*plVar6 + 0x40)), lVar4 != 0)) {
              if (*(uint *)(plVar6 + 3) < 5) goto LAB_00c1dff4;
              plVar6[8] = lVar14;
              plVar6 = *(long **)((long)__this + 0x520);
              uVar10 = 6;
              lVar14 = CarController__DCPJJNIFCBM(__this,*(undefined8 *)((long)__this + 0xd0));
              if (plVar6 == (long *)0x0) goto LAB_00c1dff0;
              if ((lVar14 == 0) ||
                 (lVar4 = func_0x00a67a34(lVar14,*(undefined8 *)(*plVar6 + 0x40)), lVar4 != 0)) {
                if (*(uint *)(plVar6 + 3) < 6) goto LAB_00c1dff4;
                plVar6[9] = lVar14;
                iVar11 = *(int *)((long)__this + 0x120);
                goto LAB_00c1dda4;
              }
            }
          }
          else {
LAB_00c1dda4:
            if (iVar11 != 8) {
LAB_00c1debc:
              lVar14 = *(long *)((long)__this + 0x520);
              if (lVar14 == 0) {
LAB_00c1dff0:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              uVar2 = *(uint *)(lVar14 + 0x18);
              if (0 < (int)uVar2) {
                uVar15 = 0;
                do {
                  if (uVar2 <= uVar15) goto LAB_00c1dff4;
                  lVar4 = *(long *)(lVar14 + (long)(int)uVar15 * 8 + 0x20);
                  if ((lVar4 == 0) || (lVar13 = *(long *)(lVar4 + 0x20), lVar13 == 0))
                  goto LAB_00c1dff0;
                  UnityEngine_WheelCollider__set_suspensionDistance
                            (*(undefined4 *)((long)__this + 0x130),lVar13,0);
                  UnityEngine_WheelCollider__get_suspensionSpring(lVar13,0);
                  in_d1 = (ulong)*(uint *)((long)__this + 0x13c);
                  in_d2 = 0x3e800000;
                  UnityEngine_WheelCollider__set_suspensionSpring
                            (*(undefined4 *)((long)__this + 0x138),in_d1,0x3e800000,lVar13,0);
                  UnityEngine_WheelCollider__set_mass
                            (*(undefined4 *)((long)__this + 0x174),lVar13,0);
                  fVar16 = *(float *)((long)__this + 0x144);
                  if ((fVar16 <= 0.0) || (*(int *)(lVar4 + 0x4c) != 2)) {
                    fVar16 = *(float *)((long)__this + 0x140);
                  }
                  UnityEngine_WheelCollider__set_radius(fVar16,lVar13,0);
                  uVar2 = *(uint *)(lVar14 + 0x18);
                  uVar15 = uVar15 + 1;
                } while ((int)uVar15 < (int)uVar2);
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
                return;
              }
              goto code_r0x00c1e3f8;
            }
            plVar6 = *(long **)((long)__this + 0x520);
            uVar10 = 6;
            lVar14 = CarController__DCPJJNIFCBM(__this,*(undefined8 *)((long)__this + 200));
            if (plVar6 == (long *)0x0) goto LAB_00c1dff0;
            if ((lVar14 == 0) ||
               (lVar4 = func_0x00a67a34(lVar14,*(undefined8 *)(*plVar6 + 0x40)), lVar4 != 0)) {
              if (*(uint *)(plVar6 + 3) < 5) {
LAB_00c1dff4:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              plVar6[8] = lVar14;
              plVar6 = *(long **)((long)__this + 0x520);
              uVar10 = 6;
              lVar14 = CarController__DCPJJNIFCBM(__this,*(undefined8 *)((long)__this + 0xd0));
              if (plVar6 == (long *)0x0) goto LAB_00c1dff0;
              if ((lVar14 == 0) ||
                 (lVar4 = func_0x00a67a34(lVar14,*(undefined8 *)(*plVar6 + 0x40)), lVar4 != 0)) {
                if (*(uint *)(plVar6 + 3) < 6) goto LAB_00c1dff4;
                plVar6[9] = lVar14;
                plVar6 = *(long **)((long)__this + 0x520);
                uVar10 = 6;
                lVar14 = CarController__DCPJJNIFCBM(__this,*(undefined8 *)((long)__this + 0xd8));
                if (plVar6 == (long *)0x0) goto LAB_00c1dff0;
                if ((lVar14 == 0) ||
                   (lVar4 = func_0x00a67a34(lVar14,*(undefined8 *)(*plVar6 + 0x40)), lVar4 != 0)) {
                  if (*(uint *)(plVar6 + 3) < 7) goto LAB_00c1dff4;
                  plVar6[10] = lVar14;
                  plVar6 = *(long **)((long)__this + 0x520);
                  uVar10 = 6;
                  lVar14 = CarController__DCPJJNIFCBM(__this,*(undefined8 *)((long)__this + 0xe0));
                  if (plVar6 == (long *)0x0) goto LAB_00c1dff0;
                  if ((lVar14 == 0) ||
                     (lVar4 = func_0x00a67a34(lVar14,*(undefined8 *)(*plVar6 + 0x40)), lVar4 != 0))
                  {
                    if (*(uint *)(plVar6 + 3) < 8) goto LAB_00c1dff4;
                    plVar6[0xb] = lVar14;
                    goto LAB_00c1debc;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar5 = func_0x00a67b74();
  auVar23 = func_0x00a67a20(uVar5,0);
  unaff_x21 = auVar23._8_8_;
  lVar14 = auVar23._0_8_;
  unaff_x23 = 0x1917000;
  unaff_x22 = &UnityEngine_Object_TypeInfo;
  unaff_x20 = uVar10 & 0xffffffff;
  uVar19 = in_d1;
  uVar21 = in_d2;
  if ((bRam0000000001917018 & 1) == 0) {
    func_0x00a67900(&CarController_CILHKIPDPMN_TypeInfo);
    func_0x00a67900(&UnityEngine_GameObject_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&System_Type_TypeInfo);
    func_0x00a67900(&UnityEngine_WheelCollider_var);
    func_0x00a67900(&UnityEngine_WheelCollider_TypeInfo);
    func_0x00a67900(&Str_car);
    func_0x00a67900(&Str_wheel);
    func_0x00a67900(&Str_WheelCollider);
    bRam0000000001917018 = 1;
    uVar19 = in_d1;
    uVar21 = in_d2;
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(unaff_x21,0,0);
  in_d1 = uVar19;
  in_d2 = uVar21;
  if ((uVar7 & 1) == 0) {
    unaff_x22 = (undefined *)func_0x00a67b44(_CarController_CILHKIPDPMN_TypeInfo);
    System_Object___ctor(unaff_x22,0);
    if (unaff_x21 == 0) {
LAB_00c1e3a4:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    lVar4 = UnityEngine_Component__get_gameObject(unaff_x21,0);
    uVar3 = UnityEngine_LayerMask__NameToLayer(_Str_car,0);
    if (lVar4 == 0) goto LAB_00c1e3a4;
    UnityEngine_GameObject__set_layer(lVar4,uVar3,0);
    uVar5 = UnityEngine_Object__get_name(unaff_x21,0);
    uVar5 = System_String__Concat(_Str_WheelCollider,uVar5,0);
    unaff_x23 = func_0x00a67b44(_UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(unaff_x23,uVar5,0);
    uVar3 = UnityEngine_LayerMask__NameToLayer(_Str_wheel,0);
    if (unaff_x23 == 0) goto LAB_00c1e3a4;
    UnityEngine_GameObject__set_layer(unaff_x23,uVar3,0);
    lVar4 = UnityEngine_GameObject__get_transform(unaff_x23,0);
    if (lVar4 == 0) goto LAB_00c1e3a4;
    UnityEngine_Transform__SetParent(lVar4,*(undefined8 *)(lVar14 + 0x38),0);
    lVar4 = UnityEngine_GameObject__get_transform(unaff_x23,0);
    unaff_d8 = UnityEngine_Transform__get_position(unaff_x21,0);
    if ((*(long *)(lVar14 + 0x38) == 0) ||
       (uVar7 = uVar19, uVar22 = uVar21,
       fVar16 = (float)UnityEngine_Transform__get_up(*(long *)(lVar14 + 0x38),0), lVar4 == 0))
    goto LAB_00c1e3a4;
    fVar18 = *(float *)(lVar14 + 0x130);
    unaff_x25 = &UnityEngine_WheelCollider_var;
    unaff_x26 = &System_Type_TypeInfo;
    in_d2 = (ulong)(uint)((float)uVar21 + (float)uVar22 * fVar18 * 0.5);
    in_d1 = (ulong)(uint)((float)uVar19 + (float)uVar7 * fVar18 * 0.5);
    UnityEngine_Transform__set_position((float)unaff_d8 + fVar16 * fVar18 * 0.5,lVar4,0);
    uVar5 = _UnityEngine_WheelCollider_var;
    if (*(int *)(_System_Type_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
    unaff_x24 = (long *)UnityEngine_GameObject__AddComponent(unaff_x23,uVar5,0);
    if (unaff_x24 == (long *)0x0) goto LAB_00c1e3a4;
    if ((*(byte *)(_UnityEngine_WheelCollider_TypeInfo + 0x130) <= *(byte *)(*unaff_x24 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x24 + 200) +
                  (ulong)*(byte *)(_UnityEngine_WheelCollider_TypeInfo + 0x130) * 8 + -8) ==
        _UnityEngine_WheelCollider_TypeInfo)) {
      UnityEngine_WheelCollider__set_motorTorque(0x3727c5ac,unaff_x24,0);
      uVar20 = (undefined4)in_d2;
      uVar3 = (undefined4)in_d1;
      UnityEngine_WheelCollider__set_wheelDampingRate(0x40a00000,unaff_x24,0);
      if (unaff_x22 != (undefined *)0x0) {
        *(long *)(unaff_x22 + 0x10) = unaff_x21;
        *(long *)(unaff_x22 + 0x18) = unaff_x23;
        *(long **)(unaff_x22 + 0x20) = unaff_x24;
        uVar5 = UnityEngine_Component__get_transform(unaff_x24,0);
        *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
        lVar4 = UnityEngine_GameObject__get_transform(unaff_x23,0);
        if (lVar4 != 0) {
          uVar17 = UnityEngine_Transform__get_localPosition(lVar4,0);
          *(undefined4 *)(unaff_x22 + 0x30) = uVar17;
          *(undefined4 *)(unaff_x22 + 0x34) = uVar3;
          *(undefined4 *)(unaff_x22 + 0x38) = uVar20;
          *(undefined4 *)(unaff_x22 + 0x3c) = uVar17;
          *(undefined4 *)(unaff_x22 + 0x40) = uVar3;
          *(undefined4 *)(unaff_x22 + 0x44) = uVar20;
          *(int *)(unaff_x22 + 0x4c) = (int)uVar10;
          UnityEngine_WheelCollider__get_forwardFriction(&uStack_c8,unaff_x24,0);
          uStack_a8 = uStack_c0;
          uStack_b0 = uStack_c8;
          uStack_a0 = uStack_b8;
          UnityEngine_WheelFrictionCurve__set_stiffness
                    (*(undefined4 *)(lVar14 + 0x178),&uStack_b0,0);
          uStack_d8 = uStack_a8;
          uStack_e0 = uStack_b0;
          uStack_d0 = uStack_a0;
          UnityEngine_WheelCollider__set_forwardFriction(unaff_x24,&uStack_e0,0);
          return;
        }
      }
      goto LAB_00c1e3a4;
    }
    func_0x00a67eec(unaff_x24);
    unaff_d9 = uVar19;
    unaff_d10 = uVar21;
  }
  func_0x00a67914(&System_Exception_TypeInfo);
  unaff_x19 = func_0x00a67b44();
  uVar5 = func_0x00a67914(&Str_wheel_not_connected_to_script_);
  System_Exception___ctor(unaff_x19,uVar5,0);
  uVar5 = func_0x00a67914(&Method_CarController_DCPJJNIFCBM__);
  unaff_x30 = CarController__CEKLNGNBGLP;
  __this = (void *)func_0x00a67a20(unaff_x19,uVar5);
  register0x00000008 = (BADSPACEBASE *)&uStack_e0;
code_r0x00c1e3f8:
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_d13;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_d12;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d11;
  *(ulong *)((long)register0x00000008 + -0x68) = unaff_d10;
  *(ulong *)((long)register0x00000008 + -0x60) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_d8;
  *(code **)((long)register0x00000008 + -0x50) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
  *(undefined **)((long)register0x00000008 + -0x40) = unaff_x26;
  *(undefined **)((long)register0x00000008 + -0x38) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x23;
  *(undefined **)((long)register0x00000008 + -0x20) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x10) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
  if ((bRam0000000001917027 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Physics_TypeInfo);
    bRam0000000001917027 = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x8c) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x94) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
  lVar14 = *(long *)((long)__this + 0x520);
  if (lVar14 != 0) {
    uVar2 = *(uint *)(lVar14 + 0x18);
    if (0 < (int)uVar2) {
      uVar15 = 0;
      do {
        if (uVar2 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar4 = *(long *)(lVar14 + (long)(int)uVar15 * 8 + 0x20);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x28) == 0)) goto LAB_00c1e5c0;
        lVar13 = *(long *)(lVar4 + 0x20);
        uVar5 = UnityEngine_Transform__get_position(*(long *)(lVar4 + 0x28),0);
        if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c1e5c0;
        uVar10 = in_d1;
        uVar19 = in_d2;
        fVar16 = (float)UnityEngine_Transform__get_up(*(long *)((long)__this + 0x38),0);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = *(uint *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x14);
        if (*(int *)(_UnityEngine_Physics_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Physics_TypeInfo);
        }
        uVar10 = UnityEngine_Physics__Raycast
                           (uVar5,in_d1,in_d2,-fVar16,-(float)uVar10,-(float)uVar19,0x40000000,
                            (undefined1 *)((long)register0x00000008 + -0xb0),
                            1 << (ulong)(uVar2 & 0x1f),0);
        if ((uVar10 & 1) != 0) {
          if (*(long *)(lVar4 + 0x10) == 0) goto LAB_00c1e5c0;
          uVar5 = UnityEngine_Transform__get_position(*(long *)(lVar4 + 0x10),0);
          fVar16 = (float)in_d1;
          UnityEngine_RaycastHit__get_point((undefined1 *)((long)register0x00000008 + -0xb0),0);
          if (lVar13 == 0) goto LAB_00c1e5c0;
          fVar18 = (float)UnityEngine_WheelCollider__get_radius(lVar13,0);
          if (*(long *)(lVar4 + 0x10) == 0) goto LAB_00c1e5c0;
          in_d1 = (ulong)(uint)(fVar16 + fVar18);
          UnityEngine_Transform__set_position(uVar5,*(long *)(lVar4 + 0x10),0);
        }
        uVar2 = *(uint *)(lVar14 + 0x18);
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < (int)uVar2);
    }
    return;
  }
LAB_00c1e5c0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void KIPCFFHJBPB() { }   @0xb1eaa8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__KIPCFFHJBPB(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if ((bRam000000000191701c & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191701c = 1;
  }
  if (*(int *)((long)__this + 0xa0) != 0) {
    uVar2 = *(undefined8 *)((long)__this + 0x3b0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)((long)__this + 0x3b0) == 0) {
LAB_00c1eb48:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar1 = UnityEngine_ParticleSystem__get_isPlaying(*(long *)((long)__this + 0x3b0),0);
      if ((uVar1 & 1) != 0) {
        if (*(long *)((long)__this + 0x3b0) == 0) goto LAB_00c1eb48;
        UnityEngine_ParticleSystem__Pause(*(long *)((long)__this + 0x3b0),0);
        uVar3 = UnityEngine_Time__get_time(0);
        *(undefined4 *)((long)__this + 0x3c4) = uVar3;
      }
    }
  }
  return;
}


// ==== public void LOPCCLDAPAE() { }   @0xb1f1e4

/* WARNING: Removing unreachable block (ram,0x0148e698) */
/* WARNING: Removing unreachable block (ram,0x0148e69c) */
/* WARNING: Removing unreachable block (ram,0x0148e6c8) */
/* WARNING: Removing unreachable block (ram,0x0148e6dc) */
/* WARNING: Removing unreachable block (ram,0x0148e6e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__LOPCCLDAPAE(void *__this)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam0000000001917020 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917020 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = Menu__JOPJDMLGDEF(0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar2 = *(long *)((long)__this + 0x50);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((bRam000000000191c553 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0,0);
    bRam000000000191c553 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((bRam000000000191c502 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191c502 = 1;
  }
  if (lVar2 != 0) {
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Object__IsNativeObjectAlive(lVar2);
  }
  return;
}


// ==== private void Start() { }   @0xb1fff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__Start(void *__this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  void *pvVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  long lVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  ulong in_d2;
  ulong uVar29;
  undefined8 in_d3;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  uint uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 auStack_98 [2];
  long lStack_88;
  
  if ((bRam0000000001917025 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&CarReplay_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_CarCollision___);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    func_0x00a67900(&GUIGameplay_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_AddComponent_AccelerometerFix___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_GUIGameplay___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    func_0x00a67900(&UnityEngine_GameObject_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_FindObjectOfType_CarCamera___);
    func_0x00a67900(&Method_UnityEngine_Object_FindObjectOfType_GUIGameplay___);
    func_0x00a67900(&Method_UnityEngine_Object_FindObjectOfType_MoveBackground___);
    func_0x00a67900(&Method_UnityEngine_Object_FindObjectsOfType_Rigidbody___);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    func_0x00a67900(&Method_Spring_Vector3__set_dampingRatio__);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_fx_smoke_pivot_not_found_);
    func_0x00a67900(&Str_FX_SmokeCar);
    func_0x00a67900(&Str_Main_script_not_found_);
    func_0x00a67900(&Str_finish);
    func_0x00a67900(&Str_ground);
    func_0x00a67900(&Str__MainData);
    func_0x00a67900(&Str_FX_fire_car);
    func_0x00a67900(&Str_0_00_00);
    func_0x00a67900(&Str_Is_Garage__);
    func_0x00a67900(&Str_level_000);
    func_0x00a67900(&Str__GUIGameplay);
    func_0x00a67900(&Str_CarCollision_script_not_found_);
    func_0x00a67900(&Str_FX_SmokeLowHp);
    func_0x00a67900(&Str_fx_fire_pivot_not_found_);
    bRam0000000001917025 = 1;
  }
  auStack_98[0] = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar17 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar10 = UnityEngine_Object__op_Equality(uVar17,0,0);
  lVar18 = _Menu_TypeInfo;
  if ((uVar10 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Menu_TypeInfo);
    }
    lVar18 = _Menu_TypeInfo;
    *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) = 0;
  }
  if (*(int *)(lVar18 + 0xe0) == 0) {
    func_0x00a67a30(lVar18);
  }
  if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar17 = System_Boolean__ToString(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc,0);
  uVar17 = System_String__Concat(_Str_Is_Garage__,uVar17,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar17,0,0);
  uVar17 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar10 = UnityEngine_Object__op_Inequality(uVar17,0,0);
  if ((uVar10 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c215fc;
    uVar17 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0xa0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar10 = UnityEngine_Object__op_Equality(uVar17,0,0);
    if ((uVar10 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar18 = **(long **)(_Menu_TypeInfo + 0xb8);
        if ((lVar18 == 0) || (lVar11 = UnityEngine_Component__get_gameObject(lVar18,0), lVar11 == 0)
           ) goto LAB_00c215fc;
        uVar17 = UnityEngine_GameObject__AddComponent_object_
                           (lVar11,_Method_UnityEngine_GameObject_AddComponent_AccelerometerFix___);
        *(undefined8 *)(lVar18 + 0xa0) = uVar17;
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar18 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0xa0), lVar18 == 0))
        goto LAB_00c215fc;
        AccelerometerFix__EIOGCAFFGKO(lVar18,0);
      }
    }
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar18 = _CarController_TypeInfo;
  lVar11 = *(long *)(_CarController_TypeInfo + 0xb8);
  *(undefined4 *)(lVar11 + 0x10) = 0xbf800000;
  *(undefined4 *)((long)__this + 0x3dc) = 0;
  *(undefined1 *)(lVar11 + 0x34) = 0;
  if (cRam0000000001916789 == '\0') {
    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
    cRam0000000001916789 = '\x01';
    lVar11 = *(long *)(_CarController_TypeInfo + 0xb8);
    lVar18 = _CarController_TypeInfo;
  }
  uVar26 = *(uint *)(*(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 1);
  uVar10 = (ulong)uVar26;
  *(undefined8 *)(lVar11 + 0x38) = **(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
  *(uint *)(lVar11 + 0x40) = uVar26;
  lVar18 = *(long *)(lVar18 + 0xb8);
  *(undefined1 *)(lVar18 + 0x44) = 0;
  *(undefined1 *)((long)__this + 0x3fe) = 0;
  *(undefined2 *)(lVar18 + 0x45) = 0;
  uStack_a0 = *(undefined8 *)((long)__this + 0x158);
  uStack_a8 = *(undefined8 *)((long)__this + 0x150);
  uStack_b0 = *(undefined8 *)((long)__this + 0x148);
  uVar22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_b0,0);
  *(undefined4 *)((long)__this + 0x160) = uVar22;
  if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c215fc;
  UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
  *(int *)((long)__this + 0x410) = (int)uVar10;
  if (*(long *)((long)__this + 0x220) == 0) goto LAB_00c215fc;
  Spring___Il2CppFullySharedGenericType___set_dampingRatio
            (0x3f4ccccd,*(long *)((long)__this + 0x220),_Method_Spring_Vector3__set_dampingRatio__);
  if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  *(undefined8 *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4) = 0xffffffffffffffff;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
    *(undefined1 *)((long)__this + 0x44c) = 0;
    if (*(long *)((long)__this + 0x40) == 0) goto LAB_00c215fc;
    UnityEngine_Rigidbody__set_interpolation(*(long *)((long)__this + 0x40),0,0);
    fVar28 = (float)in_d2;
    fVar27 = (float)uVar10;
LAB_00c20518:
    CarController__ENIIFAAKJKN(__this);
    lVar18 = *(long *)((long)__this + 0x40);
    if (lVar18 != 0) {
      fVar23 = (float)UnityEngine_Rigidbody__get_centerOfMass(lVar18,0);
      UnityEngine_Rigidbody__set_centerOfMass
                (fVar23 + *(float *)((long)__this + 0x17c),fVar27 + *(float *)((long)__this + 0x180)
                 ,fVar28 + *(float *)((long)__this + 0x184),lVar18,0);
      return;
    }
LAB_00c215fc:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar17 = UnityEngine_Object__FindObjectOfType_object_
                     (_Method_UnityEngine_Object_FindObjectOfType_CarCamera___);
  *(undefined8 *)((long)__this + 0x28) = uVar17;
  uVar12 = UnityEngine_Object__op_Inequality(uVar17,0,0);
  if ((uVar12 & 1) != 0) {
    if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c215fc;
    *(void **)(*(long *)((long)__this + 0x28) + 0x30) = __this;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar17 = UnityEngine_Object__FindObjectOfType_object_
                     (_Method_UnityEngine_Object_FindObjectOfType_MoveBackground___);
  *(undefined8 *)((long)__this + 0x58) = uVar17;
  uVar22 = UnityEngine_LayerMask__NameToLayer(_Str_ground,0);
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CarController_TypeInfo);
  }
  *(undefined4 *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x14) = uVar22;
  if (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  auStack_98[0] = UnityEngine_SceneManagement_SceneManager__GetActiveScene(0);
  uVar17 = UnityEngine_SceneManagement_Scene__get_name(auStack_98,0);
  bVar4 = System_String__op_Equality(uVar17,_Str_level_000,0);
  *(byte *)((long)__this + 0x3fc) = bVar4 & 1;
  uVar12 = UnityEngine_Object__op_Inequality(*(undefined8 *)((long)__this + 0x370),0,0);
  if ((uVar12 & 1) == 0) {
    uVar17 = in_d3;
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      uVar17 = in_d3;
    }
    Main__EEKNCFLMGDP(_Str_fx_smoke_pivot_not_found_,0);
LAB_00c207a4:
    uVar24 = *(undefined8 *)((long)__this + 0x378);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar12 = UnityEngine_Object__op_Inequality(uVar24,0,0);
    if ((uVar12 & 1) != 0) {
      uVar24 = *(undefined8 *)((long)__this + 0x380);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar12 = UnityEngine_Object__op_Inequality(uVar24,0,0);
      if ((uVar12 & 1) != 0) {
        if (*(long *)((long)__this + 0x380) == 0) goto LAB_00c215fc;
        uVar24 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x380),0);
        if (*(long *)((long)__this + 0x378) == 0) goto LAB_00c215fc;
        uVar20 = UnityEngine_Transform__get_position(*(long *)((long)__this + 0x378),0);
        if (*(long *)((long)__this + 0x378) == 0) goto LAB_00c215fc;
        uVar12 = uVar10;
        uVar29 = in_d2;
        uVar25 = UnityEngine_Transform__get_rotation(*(long *)((long)__this + 0x378),0);
        uVar21 = *(undefined8 *)((long)__this + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar18 = UnityEngine_Object__Instantiate_object_
                           (uVar20,uVar10,in_d2,uVar25,uVar12,uVar29,uVar17,uVar24,uVar21,
                            _Method_UnityEngine_Object_Instantiate_GameObject___);
        if (lVar18 == 0) goto LAB_00c215fc;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (lVar18,&lStack_88,_Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
        *(long *)((long)__this + 0x388) = lStack_88;
        if (lStack_88 == 0) goto LAB_00c215fc;
        uVar17 = UnityEngine_ParticleSystem__get_emission(lStack_88,0);
        *(undefined8 *)((long)__this + 0x398) = uVar17;
        if (*(char *)((long)__this + 0x3fc) != '\0') {
          UnityEngine_ParticleSystem_EmissionModule__set_enabled((long)__this + 0x398,1,0);
        }
      }
    }
    uVar17 = *(undefined8 *)((long)__this + 0x3a0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar12 = UnityEngine_Object__op_Inequality(uVar17,0,0);
    if ((uVar12 & 1) != 0) {
      plVar13 = (long *)UnityEngine_Resources__Load(_Str_FX_fire_car,0);
      if (*(long *)((long)__this + 0x3a0) == 0) goto LAB_00c215fc;
      uVar17 = UnityEngine_Transform__get_position(*(long *)((long)__this + 0x3a0),0);
      if (cRam000000000191678a == '\0') {
        func_0x00a67900(&UnityEngine_Quaternion_TypeInfo);
        cRam000000000191678a = '\x01';
      }
      uVar24 = *(undefined8 *)((long)__this + 0x38);
      puVar16 = *(undefined4 **)(_UnityEngine_Quaternion_TypeInfo + 0xb8);
      uVar35 = *puVar16;
      uVar33 = puVar16[1];
      uVar31 = puVar16[2];
      uVar22 = puVar16[3];
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      plVar14 = (long *)UnityEngine_Object__Instantiate
                                  (uVar17,uVar10,in_d2,uVar35,uVar33,uVar31,uVar22,plVar13,uVar24,0)
      ;
      if (plVar14 == (long *)0x0) goto LAB_00c215fc;
      if (*plVar14 == _UnityEngine_GameObject_TypeInfo) {
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (plVar14,&lStack_88,_Method_UnityEngine_GameObject_GetComponent_ParticleSystem___)
        ;
        *(long *)((long)__this + 0x3a8) = lStack_88;
        uVar17 = UnityEngine_Resources__Load(_Str_FX_SmokeLowHp,0);
        if (*(long *)((long)__this + 0x3a0) == 0) goto LAB_00c215fc;
        uVar24 = UnityEngine_Transform__get_position(*(long *)((long)__this + 0x3a0),0);
        if (cRam000000000191678a == '\0') {
          func_0x00a67900(&UnityEngine_Quaternion_TypeInfo);
          cRam000000000191678a = '\x01';
        }
        puVar16 = *(undefined4 **)(_UnityEngine_Quaternion_TypeInfo + 0xb8);
        plVar13 = (long *)UnityEngine_Object__Instantiate
                                    (uVar24,uVar10,in_d2,*puVar16,puVar16[1],puVar16[2],puVar16[3],
                                     uVar17,*(undefined8 *)((long)__this + 0x38),0);
        fVar27 = (float)uVar10;
        fVar28 = (float)in_d2;
        if (plVar13 == (long *)0x0) goto LAB_00c215fc;
        if (*plVar13 == _UnityEngine_GameObject_TypeInfo) {
          lVar18 = UnityEngine_GameObject__get_transform(plVar13,0);
          if (lVar18 == 0) goto LAB_00c215fc;
          fVar23 = (float)UnityEngine_Transform__get_localPosition(lVar18,0);
          fVar30 = *(float *)((long)__this + 0x3b8);
          fVar32 = *(float *)((long)__this + 0x3bc);
          fVar34 = *(float *)((long)__this + 0x3c0);
          lVar18 = UnityEngine_GameObject__get_transform(plVar13,0);
          if (lVar18 == 0) goto LAB_00c215fc;
          in_d2 = (ulong)(uint)(fVar28 + fVar34);
          fVar27 = fVar27 + fVar32;
          UnityEngine_Transform__set_localPosition(fVar23 + fVar30,fVar27,lVar18,0);
          UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                    (plVar13,&lStack_88,
                     _Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
          *(long *)((long)__this + 0x3b0) = lStack_88;
          goto LAB_00c20b14;
        }
        goto LAB_00c21608;
      }
      goto LAB_00c21604;
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    fVar27 = (float)uVar10;
    Main__EEKNCFLMGDP(_Str_fx_fire_pivot_not_found_,0);
LAB_00c20b14:
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar17 = **(undefined8 **)(_Main_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar10 = UnityEngine_Object__op_Equality(uVar17,0,0);
    if ((uVar10 & 1) != 0) {
      uVar17 = UnityEngine_Resources__Load(_Str__MainData,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Instantiate(uVar17,0);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
         (lVar18 = *(long *)(**(long **)(_Translate_TypeInfo + 0xb8) + 0x30), lVar18 == 0))
      goto LAB_00c215fc;
      SoundScript__DPJAADHMLIA(lVar18,0);
    }
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar17 = UnityEngine_Object__FindObjectOfType_object_
                       (_Method_UnityEngine_Object_FindObjectOfType_GUIGameplay___);
    *(undefined8 *)((long)__this + 0x30) = uVar17;
    uVar10 = UnityEngine_Object__op_Equality(uVar17,0,0);
    if ((uVar10 & 1) == 0) {
LAB_00c20d24:
      uVar17 = *(undefined8 *)((long)__this + 0x30);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar10 = UnityEngine_Object__op_Inequality(uVar17,0,0);
      if ((uVar10 & 1) != 0) {
        pvVar15 = *(void **)((long)__this + 0x30);
        if (pvVar15 == (void *)0x0) goto LAB_00c215fc;
        *(void **)((long)pvVar15 + 0x20) = __this;
        GUIGameplay__DMFIDCENMJF(pvVar15);
        if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c215fc;
        GUIGameplay__AGGPLIPJHPI(*(long *)((long)__this + 0x30),0);
        lVar18 = *(long *)((long)__this + 0x30);
        if (lVar18 == 0) goto LAB_00c215fc;
        if (*(char *)((long)__this + 0x3fc) == '\0') {
          if (*(long *)(lVar18 + 0x50) == 0) goto LAB_00c215fc;
          GUIWindow__HEGIHOAJOKK(*(long *)(lVar18 + 0x50),0,0);
        }
        else {
          if ((((*(long *)(lVar18 + 0x110) == 0) ||
               (lVar18 = UnityEngine_Component__get_transform(*(long *)(lVar18 + 0x110),0),
               lVar18 == 0)) || (lVar18 = UnityEngine_Transform__get_parent(lVar18,0), lVar18 == 0))
             || (lVar18 = UnityEngine_Component__get_gameObject(lVar18,0), lVar18 == 0))
          goto LAB_00c215fc;
          UnityEngine_GameObject__SetActive(lVar18,0,0);
          if (((*(long *)((long)__this + 0x30) == 0) ||
              (lVar18 = *(long *)(*(long *)((long)__this + 0x30) + 0x130), lVar18 == 0)) ||
             (lVar18 = UnityEngine_Component__get_gameObject(lVar18,0), lVar18 == 0))
          goto LAB_00c215fc;
          UnityEngine_GameObject__SetActive(lVar18,0,0);
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        bVar5 = Main__KCHOEBEIOCE();
        if (bVar5) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar18 = **(long **)(_Menu_TypeInfo + 0xb8);
          if ((lVar18 == 0) || (*(long *)(lVar18 + 0x58) == 0)) goto LAB_00c215fc;
          if (*(char *)(*(long *)(lVar18 + 0x58) + 0x30) != '\0') {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              lVar18 = **(long **)(_Menu_TypeInfo + 0xb8);
              if (lVar18 == 0) goto LAB_00c215fc;
            }
            if (*(long *)(lVar18 + 0x58) == 0) goto LAB_00c215fc;
            GamePadController__FKBCEHJHEBP(*(long *)(lVar18 + 0x58),0);
          }
        }
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar17 = **(undefined8 **)(_Main_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar10 = UnityEngine_Object__op_Equality(uVar17,0,0);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__EEKNCFLMGDP(_Str_Main_script_not_found_,0);
        uVar17 = UnityEngine_Component__get_gameObject(__this,0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy(uVar17,0);
      }
      uVar17 = UnityEngine_GameObject__Find(_Str_finish,0);
      *(undefined8 *)((long)__this + 0x400) = uVar17;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar10 = UnityEngine_Object__op_Inequality(uVar17,0,0);
      if ((uVar10 & 1) != 0) {
        if ((*(long *)((long)__this + 0x400) == 0) ||
           (lVar18 = UnityEngine_GameObject__get_transform(*(long *)((long)__this + 0x400),0),
           lVar18 == 0)) goto LAB_00c215fc;
        UnityEngine_Transform__get_position(lVar18,0);
        iVar7 = -0x80000000;
        if ((float)in_d2 != INFINITY) {
          iVar7 = (int)(float)in_d2;
        }
        *(int *)((long)__this + 0x408) = iVar7;
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
      if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8) == 0) {
LAB_00c21038:
        if (*(long *)((long)__this + 0x48) == 0) goto LAB_00c215fc;
        UnityEngine_AudioSource__Play(*(long *)((long)__this + 0x48),0);
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
        lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar18 == 0) goto LAB_00c215fc;
        uVar10 = DAFNMLEKHAD__BMMOMBGDEKF(lVar18,0);
        lVar18 = *(long *)((long)__this + 0x48);
        if (lVar18 == 0) goto LAB_00c215fc;
        if ((uVar10 & 1) == 0) {
          UnityEngine_AudioSource__Pause(lVar18,0);
        }
        else {
          uVar10 = UnityEngine_AudioSource__get_isPlaying(lVar18,0);
          if ((uVar10 & 1) == 0) goto LAB_00c21038;
        }
      }
      lVar18 = *(long *)((long)__this + 0x328);
      if ((lVar18 != 0) && (*(long *)(lVar18 + 0x18) != 0)) {
        if ((int)*(long *)(lVar18 + 0x18) == 0) {
LAB_00c21600:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        uVar17 = *(undefined8 *)(lVar18 + 0x20);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar10 = UnityEngine_Object__op_Inequality(uVar17,0,0);
        if ((uVar10 & 1) != 0) {
          lVar18 = *(long *)((long)__this + 0x328);
          if (lVar18 == 0) goto LAB_00c215fc;
          if (*(int *)(lVar18 + 0x18) == 0) goto LAB_00c21600;
          if (*(long *)(lVar18 + 0x20) == 0) goto LAB_00c215fc;
          uVar22 = UnityEngine_ParticleSystem__get_startLifetime(*(long *)(lVar18 + 0x20),0);
          *(undefined4 *)((long)__this + 0x340) = uVar22;
        }
      }
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (__this,&lStack_88,_Method_UnityEngine_Component_GetComponent_CarCollision___);
      lVar18 = lStack_88;
      *(long *)((long)__this + 0x20) = lStack_88;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar10 = UnityEngine_Object__op_Equality(lVar18,0,0);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__EEKNCFLMGDP(_Str_CarCollision_script_not_found_,0);
      }
      if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c215fc;
      CarCollision__HNNICJHLCMM(*(long *)((long)__this + 0x20),0);
      if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c215fc;
      CarCollision__CFMCPPEAHAF(*(long *)((long)__this + 0x20),0);
      if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c215fc;
      CarCollision__KMNFKGPKPNE(*(long *)((long)__this + 0x20),0);
      if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c215fc;
      CarCollision__OKOFPODNOFH(*(long *)((long)__this + 0x20),0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar18 == 0) {
LAB_00c21210:
        if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar10 = UnityEngine_Application__get_isEditor(0);
        if ((uVar10 & 1) != 0) goto LAB_00c21234;
      }
      else {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if (lVar18 == 0) goto LAB_00c215fc;
        }
        uVar10 = Level__get_IsEvent(lVar18,0);
        if ((uVar10 & 1) == 0) goto LAB_00c21210;
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if ((lVar18 == 0) || (*(long *)(lVar18 + 0x50) == 0)) goto LAB_00c215fc;
        if (*(int *)(*(long *)(lVar18 + 0x50) + 0x18) != 6) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
            if (lVar18 == 0) goto LAB_00c215fc;
          }
          if (*(long *)(lVar18 + 0x50) == 0) goto LAB_00c215fc;
          if (*(int *)(*(long *)(lVar18 + 0x50) + 0x18) != 7) goto LAB_00c21210;
        }
LAB_00c21234:
        if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c215fc;
        CarCollision__FKJKPFAKBLM(*(long *)((long)__this + 0x20),0);
      }
      if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c215fc;
      GUIGameplay__CCDFIOJMHGC(*(long *)((long)__this + 0x30),0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      fVar28 = (float)in_d2;
      lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar18 != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if (lVar18 == 0) goto LAB_00c215fc;
        }
        uVar10 = Level__get_IsEvent(lVar18,0);
        fVar28 = (float)in_d2;
        if ((uVar10 & 1) != 0) {
          *(undefined1 *)((long)__this + 0x414) = 1;
          fVar27 = (float)UnityEngine_Time__get_time(0);
          uVar17 = 0x3ecccccd;
          *(float *)((long)__this + 0x3d8) = fVar27 + 0.4;
          if (*(long *)((long)__this + 0x40) == 0) goto LAB_00c215fc;
          UnityEngine_Rigidbody__set_interpolation(*(long *)((long)__this + 0x40),0,0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar18 = UnityEngine_Object__FindObjectsOfType_object_
                             (_Method_UnityEngine_Object_FindObjectsOfType_Rigidbody___);
          fVar28 = (float)in_d2;
          fVar27 = (float)uVar17;
          if (lVar18 == 0) goto LAB_00c215fc;
          uVar26 = *(uint *)(lVar18 + 0x18);
          if (0 < (int)uVar26) {
            uVar19 = 0;
            do {
              if (uVar26 <= uVar19) goto LAB_00c21600;
              lVar11 = *(long *)(lVar18 + (long)(int)uVar19 * 8 + 0x20);
              if (lVar11 == 0) goto LAB_00c215fc;
              UnityEngine_Rigidbody__set_interpolation(lVar11,0,0);
              fVar28 = (float)in_d2;
              fVar27 = (float)uVar17;
              uVar26 = *(uint *)(lVar18 + 0x18);
              uVar19 = uVar19 + 1;
            } while ((int)uVar19 < (int)uVar26);
          }
          if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar10 = CarReplay__DJKMCIEIAMH(0);
          if ((uVar10 & 1) != 0) {
            if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c215fc;
            GUIGameplay__CEFDKCEFHAK(*(long *)((long)__this + 0x30),0);
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x50), lVar18 == 0)) goto LAB_00c215fc;
          uVar10 = EventContest__get_IsUseCustonPoints(lVar18,0);
          if ((uVar10 & 1) != 0) {
            *(undefined1 *)((long)__this + 0x62) = 1;
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar18 = _Main_TypeInfo;
          lVar11 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if ((lVar11 == 0) || (*(long *)(lVar11 + 0x50) == 0)) goto LAB_00c215fc;
          if (*(int *)(*(long *)(lVar11 + 0x50) + 0x18) == 5) {
            *(undefined1 *)((long)__this + 0x60) = 1;
          }
          if (*(int *)(lVar18 + 0xe0) == 0) {
            func_0x00a67a30();
            lVar11 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
            if (lVar11 == 0) goto LAB_00c215fc;
          }
          if (*(long *)(lVar11 + 0x50) == 0) goto LAB_00c215fc;
          if (*(int *)(*(long *)(lVar11 + 0x50) + 0x18) == 2) {
            *(undefined1 *)((long)__this + 0x61) = 1;
            uVar17 = *(undefined8 *)((long)__this + 0x30);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar10 = UnityEngine_Object__op_Inequality(uVar17,0,0);
            if ((uVar10 & 1) != 0) {
              if ((((*(long *)((long)__this + 0x30) == 0) ||
                   (lVar18 = *(long *)(*(long *)((long)__this + 0x30) + 0x140), lVar18 == 0)) ||
                  (lVar18 = *(long *)(lVar18 + 0x28), lVar18 == 0)) ||
                 (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (lVar18,&lStack_88,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___),
                 lVar18 = lStack_88, lStack_88 == 0)) goto LAB_00c215fc;
              UnityEngine_RectTransform__get_anchoredPosition(lStack_88,0);
              UnityEngine_RectTransform__set_anchoredPosition(0xc2fa0000,lVar18,0);
              if (((*(long *)((long)__this + 0x30) == 0) ||
                  (lVar18 = *(long *)(*(long *)((long)__this + 0x30) + 0x140), lVar18 == 0)) ||
                 (lVar18 = *(long *)(lVar18 + 0x28), lVar18 == 0)) goto LAB_00c215fc;
              UnityEngine_UI_Text__set_alignment(lVar18,3,0);
              if (((*(long *)((long)__this + 0x30) == 0) ||
                  (lVar18 = *(long *)(*(long *)((long)__this + 0x30) + 0x140), lVar18 == 0)) ||
                 (lVar18 = *(long *)(lVar18 + 0x28), lVar18 == 0)) goto LAB_00c215fc;
              UnityEngine_UI_Text__set_fontSize(lVar18,0x32,0);
              if (((*(long *)((long)__this + 0x30) == 0) ||
                  (lVar18 = *(long *)(*(long *)((long)__this + 0x30) + 0x140), lVar18 == 0)) ||
                 (plVar13 = *(long **)(lVar18 + 0x28), plVar13 == (long *)0x0)) goto LAB_00c215fc;
              (**(code **)(*plVar13 + 0x5a8))
                        (plVar13,_Str_0_00_00,*(undefined8 *)(*plVar13 + 0x5b0));
              lVar18 = *(long *)((long)__this + 0x30);
              if ((lVar18 == 0) || (*(long *)(lVar18 + 0x188) == 0)) goto LAB_00c215fc;
              UnityEngine_UI_Image__set_sprite
                        (*(long *)(lVar18 + 0x188),*(undefined8 *)(lVar18 + 400),0);
              if ((*(long *)((long)__this + 0x30) == 0) ||
                 ((lVar18 = *(long *)(*(long *)((long)__this + 0x30) + 0x188), lVar18 == 0 ||
                  (lVar18 = UnityEngine_Component__get_transform(lVar18,0), lVar18 == 0))))
              goto LAB_00c215fc;
              UnityEngine_Transform__set_localScale(0x3f666666,0x3f666666,0x3f666666,lVar18,0);
              if ((*(long *)((long)__this + 0x30) == 0) ||
                 ((lVar18 = *(long *)(*(long *)((long)__this + 0x30) + 0x188), lVar18 == 0 ||
                  (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                             (lVar18,&lStack_88,
                              _Method_UnityEngine_Component_GetComponent_RectTransform___),
                  lStack_88 == 0)))) goto LAB_00c215fc;
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x42400000,lStack_88,0,0);
              fVar27 = 4.0;
              UnityEngine_RectTransform__set_anchoredPosition(0xc2400000,0x40800000,lStack_88,0);
              if ((*(long *)((long)__this + 0x30) == 0) ||
                 (lVar18 = *(long *)(*(long *)((long)__this + 0x30) + 0x130), lVar18 == 0))
              goto LAB_00c215fc;
              fVar23 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar18,0);
              if ((*(long *)((long)__this + 0x30) == 0) ||
                 (lVar18 = *(long *)(*(long *)((long)__this + 0x30) + 0x130), lVar18 == 0))
              goto LAB_00c215fc;
              fVar28 = 90.0;
              UnityEngine_RectTransform__set_anchoredPosition(fVar23 + 90.0,lVar18,0);
            }
          }
        }
      }
      goto LAB_00c20518;
    }
    uVar17 = UnityEngine_Resources__Load(_Str__GUIGameplay,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    plVar13 = (long *)UnityEngine_Object__Instantiate(uVar17,0);
    if (plVar13 == (long *)0x0) {
      uVar10 = UnityEngine_Object__op_Inequality(0,0,0);
      if ((uVar10 & 1) != 0) goto LAB_00c215fc;
      goto LAB_00c20d24;
    }
    if (*plVar13 == _UnityEngine_GameObject_TypeInfo) {
      uVar10 = UnityEngine_Object__op_Inequality(plVar13,0,0);
      if ((uVar10 & 1) != 0) {
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (plVar13,&lStack_88,_Method_UnityEngine_GameObject_GetComponent_GUIGameplay___);
        *(long *)((long)__this + 0x30) = lStack_88;
        if (lStack_88 == 0) goto LAB_00c215fc;
        GUIGameplay__FNOJDNIIENN(lStack_88,0);
        if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c215fc;
        lVar18 = *(long *)(*(long *)((long)__this + 0x30) + 0x178);
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
        lVar11 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((lVar11 == 0) || (uVar26 = DAFNMLEKHAD__EFDKHACIIEC(lVar11,0), lVar18 == 0))
        goto LAB_00c215fc;
        UnityEngine_GameObject__SetActive(lVar18,uVar26 & 1,0);
      }
      goto LAB_00c20d24;
    }
  }
  else {
    plVar13 = (long *)UnityEngine_Resources__Load(_Str_FX_SmokeCar,0);
    if (*(long *)((long)__this + 0x370) == 0) goto LAB_00c215fc;
    uVar24 = UnityEngine_Transform__get_position(*(long *)((long)__this + 0x370),0);
    if (*(long *)((long)__this + 0x370) == 0) goto LAB_00c215fc;
    uVar12 = uVar10;
    uVar29 = in_d2;
    uVar17 = UnityEngine_Transform__get_rotation(*(long *)((long)__this + 0x370),0);
    uVar20 = *(undefined8 *)((long)__this + 0x38);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    plVar14 = (long *)UnityEngine_Object__Instantiate
                                (uVar24,uVar10,in_d2,uVar17,uVar12,uVar29,in_d3,plVar13,uVar20,0);
    if (plVar14 == (long *)0x0) goto LAB_00c215fc;
    if (*plVar14 == _UnityEngine_GameObject_TypeInfo) {
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                (plVar14,&lStack_88,_Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      *(long *)((long)__this + 0x380) = lStack_88;
      if (lStack_88 == 0) goto LAB_00c215fc;
      uVar24 = UnityEngine_ParticleSystem__get_emission(lStack_88,0);
      *(undefined8 *)((long)__this + 0x390) = uVar24;
      if (*(char *)((long)__this + 0x3fc) != '\0') {
        UnityEngine_ParticleSystem_EmissionModule__set_enabled((long)__this + 0x390,1,0);
      }
      goto LAB_00c207a4;
    }
LAB_00c21604:
    func_0x00a67eec();
  }
LAB_00c21608:
  pvVar15 = (void *)func_0x00a67eec(plVar13);
  if ((bRam000000000191702a & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_Car_Init__Engine__);
    func_0x00a67900(&Str____Gun__);
    func_0x00a67900(&Str___Nitro__);
    func_0x00a67900(&Str__st_);
    func_0x00a67900(&Str___HP__);
    func_0x00a67900(&Str_Problem_with_armor__);
    func_0x00a67900(&Str__lvl___);
    func_0x00a67900(&Str___Wheels__);
    bRam000000000191702a = 1;
  }
  uStack_124 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
    uVar26 = 5;
    *(undefined4 *)((long)pvVar15 + 0x124) = 3;
    uStack_120 = 0x500000003;
    uStack_118 = 0x300000005;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_1b8,0xffffffff,0);
    uStack_190 = CONCAT44(uStack_190._4_4_,uStack_1a8);
    uStack_198 = uStack_1b0;
    uStack_1a0 = uStack_1b8;
    *(undefined4 *)((long)pvVar15 + 0x19c) = uStack_1a8;
    *(undefined8 *)((long)pvVar15 + 0x194) = uStack_1b0;
    *(undefined8 *)((long)pvVar15 + 0x18c) = uStack_1b8;
    CarController__NCBPCHPNCII(pvVar15);
  }
  else {
    uStack_120 = 0;
    uStack_118 = 0;
    *(undefined4 *)((long)pvVar15 + 0x124) = 0;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_1b8,0xffffffff,0);
    uVar26 = 0;
    uStack_190 = CONCAT44(uStack_190._4_4_,uStack_1a8);
    uStack_198 = uStack_1b0;
    uStack_1a0 = uStack_1b8;
    *(undefined4 *)((long)pvVar15 + 0x19c) = uStack_1a8;
    *(undefined8 *)((long)pvVar15 + 0x194) = uStack_1b0;
    *(undefined8 *)((long)pvVar15 + 0x18c) = uStack_1b8;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar17 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar10 = UnityEngine_Object__op_Inequality(uVar17,0,0);
  if ((uVar10 & 1) == 0) {
LAB_00c21b28:
    uVar22 = 0;
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
    lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar18 == 0) goto LAB_00c22488;
    lVar18 = DAFNMLEKHAD__DKJLCJPBPPN(lVar18,0xffffffff,1,0);
    if (lVar18 == 0) goto LAB_00c21b28;
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
    lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((lVar18 == 0) || (lVar18 = DAFNMLEKHAD__DKJLCJPBPPN(lVar18,0xffffffff,1,0), lVar18 == 0))
    goto LAB_00c22488;
    uVar22 = MKCBGHDANLA__IDOHKCCDGDG(lVar18,0,0);
    uStack_118 = CONCAT44(uVar22,(uint)uStack_118);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((lVar18 == 0) || (lVar18 = DAFNMLEKHAD__DKJLCJPBPPN(lVar18,0xffffffff,1,0), lVar18 == 0))
    goto LAB_00c22488;
    uVar22 = MKCBGHDANLA__IDOHKCCDGDG(lVar18,1,0);
    *(undefined4 *)((long)pvVar15 + 0x124) = uVar22;
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((lVar18 == 0) || (lVar18 = DAFNMLEKHAD__DKJLCJPBPPN(lVar18,0xffffffff,1,0), lVar18 == 0))
    goto LAB_00c22488;
    uVar22 = MKCBGHDANLA__IDOHKCCDGDG(lVar18,2,0);
    uStack_118 = CONCAT44(uStack_118._4_4_,uVar22);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((lVar18 == 0) || (lVar18 = DAFNMLEKHAD__DKJLCJPBPPN(lVar18,0xffffffff,1,0), lVar18 == 0))
    goto LAB_00c22488;
    uVar22 = MKCBGHDANLA__IDOHKCCDGDG(lVar18,3,0);
    uStack_120 = CONCAT44(uVar22,(undefined4)uStack_120);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((lVar18 == 0) || (lVar18 = DAFNMLEKHAD__DKJLCJPBPPN(lVar18,0xffffffff,1,0), lVar18 == 0))
    goto LAB_00c22488;
    uVar26 = MKCBGHDANLA__IDOHKCCDGDG(lVar18,4,0);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((lVar18 == 0) || (lVar18 = DAFNMLEKHAD__DKJLCJPBPPN(lVar18,0xffffffff,1,0), lVar18 == 0))
    goto LAB_00c22488;
    uVar17 = MKCBGHDANLA__EAEAJMKGDPD(lVar18,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_1b8,uVar17,0);
    uStack_190 = CONCAT44(uStack_190._4_4_,uStack_1a8);
    uStack_198 = uStack_1b0;
    uStack_1a0 = uStack_1b8;
    *(undefined4 *)((long)pvVar15 + 0x19c) = uStack_1a8;
    *(undefined8 *)((long)pvVar15 + 0x194) = uStack_1b0;
    *(undefined8 *)((long)pvVar15 + 0x18c) = uStack_1b8;
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((lVar18 == 0) || (lVar18 = DAFNMLEKHAD__DKJLCJPBPPN(lVar18,0xffffffff,1,0), lVar18 == 0))
    goto LAB_00c22488;
    uVar22 = MKCBGHDANLA__BGFAMABFPHC(lVar18,0);
  }
  if (0 < uStack_118._4_4_) {
    uStack_170 = *(undefined8 *)((long)pvVar15 + 0x158);
    uStack_178 = *(undefined8 *)((long)pvVar15 + 0x150);
    uStack_180 = *(undefined8 *)((long)pvVar15 + 0x148);
    fVar27 = (float)CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_180,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit
              (&uStack_1b8,fVar27 * ((float)uStack_118._4_4_ * 0.083 + 1.0),0);
    uStack_190 = CONCAT44(uStack_1a4,uStack_1a8);
    uStack_198 = uStack_1b0;
    uStack_1a0 = uStack_1b8;
    *(undefined8 *)((long)pvVar15 + 0x158) = uStack_190;
    *(undefined8 *)((long)pvVar15 + 0x150) = uStack_1b0;
    *(undefined8 *)((long)pvVar15 + 0x148) = uStack_1b8;
    *(int *)((long)pvVar15 + 0x164) = *(int *)((long)pvVar15 + 0x164) + uStack_118._4_4_ * 10;
  }
  CarController__PPIBCCLIDMH(pvVar15,*(int *)((long)pvVar15 + 0x124));
  lVar18 = *(long *)((long)pvVar15 + 0x308);
  if (lVar18 == 0) goto LAB_00c22488;
  uVar19 = *(uint *)(lVar18 + 0x18) - 1;
  if ((int)(uint)uStack_118 <= (int)uVar19) {
    uVar19 = (uint)uStack_118;
  }
  uVar3 = 0;
  if (-1 < (int)(uint)uStack_118) {
    uVar3 = uVar19;
  }
  uStack_118 = CONCAT44(uStack_118._4_4_,uVar3);
  if (*(uint *)(lVar18 + 0x18) <= uVar3) goto LAB_00c2248c;
  CarController__NDIMMLBIFCI(pvVar15,*(undefined4 *)(lVar18 + (long)(int)uVar3 * 4 + 0x20));
  *(bool *)((long)pvVar15 + 0x314) = 0 < (int)uVar3;
  uVar17 = *(undefined8 *)((long)pvVar15 + 0x2e0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar10 = UnityEngine_Object__op_Inequality(uVar17,0,0);
  if ((uVar10 & 1) != 0) {
    if (*(long *)((long)pvVar15 + 0x2e0) == 0) goto LAB_00c22488;
    UnityEngine_GameObject__SetActive
              (*(long *)((long)pvVar15 + 0x2e0),*(undefined1 *)((long)pvVar15 + 0x314),0);
  }
  uVar17 = *(undefined8 *)((long)pvVar15 + 0x2e8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar10 = UnityEngine_Object__op_Inequality(uVar17,0,0);
  if ((uVar10 & 1) != 0) {
    if (*(long *)((long)pvVar15 + 0x2e8) == 0) goto LAB_00c22488;
    UnityEngine_GameObject__SetActive
              (*(long *)((long)pvVar15 + 0x2e8),*(undefined1 *)((long)pvVar15 + 0x314),0);
  }
  if (*(char *)((long)pvVar15 + 0x314) == '\0') {
    uVar17 = *(undefined8 *)((long)pvVar15 + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar10 = UnityEngine_Object__op_Inequality(uVar17,0,0);
    if ((uVar10 & 1) != 0) {
      if (((*(long *)((long)pvVar15 + 0x30) == 0) ||
          (lVar18 = *(long *)(*(long *)((long)pvVar15 + 0x30) + 0xe0), lVar18 == 0)) ||
         (lVar18 = UnityEngine_Component__get_gameObject(lVar18,0), lVar18 == 0)) goto LAB_00c22488;
      UnityEngine_GameObject__SetActive(lVar18,0,0);
    }
  }
  iVar7 = uStack_120._4_4_;
  *(bool *)((long)pvVar15 + 0x344) = 0 < uStack_120._4_4_;
  uStack_1c0 = *(undefined4 *)((long)pvVar15 + 0x208);
  uStack_1c8 = *(undefined8 *)((long)pvVar15 + 0x200);
  uStack_1d0 = *(undefined8 *)((long)pvVar15 + 0x1f8);
  iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_1d0,0);
  fVar28 = (float)iVar7 / 5.0;
  fVar27 = fVar28;
  if (1.0 < fVar28) {
    fVar27 = 1.0;
  }
  if (fVar28 < 0.0) {
    fVar27 = 0.0;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit
            (&uStack_1b8,fVar27 * (float)iVar6 + 0.0,0);
  uStack_190 = CONCAT44(uStack_1a4,uStack_1a8);
  uStack_198 = uStack_1b0;
  uStack_1a0 = uStack_1b8;
  *(undefined8 *)((long)pvVar15 + 0x1dc) = uStack_190;
  *(undefined8 *)((long)pvVar15 + 0x1d4) = uStack_1b0;
  *(undefined8 *)((long)pvVar15 + 0x1cc) = uStack_1b8;
  uVar17 = *(undefined8 *)((long)pvVar15 + 800);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar10 = UnityEngine_Object__op_Inequality(uVar17,0,0);
  if ((uVar10 & 1) != 0) {
    if (*(long *)((long)pvVar15 + 800) == 0) goto LAB_00c22488;
    UnityEngine_GameObject__SetActive
              (*(long *)((long)pvVar15 + 800),*(undefined1 *)((long)pvVar15 + 0x344),0);
  }
  if (*(char *)((long)pvVar15 + 0x344) == '\0') {
    uVar17 = *(undefined8 *)((long)pvVar15 + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar10 = UnityEngine_Object__op_Inequality(uVar17,0,0);
    if ((uVar10 & 1) != 0) {
      if (((*(long *)((long)pvVar15 + 0x30) == 0) ||
          (lVar18 = *(long *)(*(long *)((long)pvVar15 + 0x30) + 0xe8), lVar18 == 0)) ||
         (lVar18 = UnityEngine_Component__get_gameObject(lVar18,0), lVar18 == 0)) goto LAB_00c22488;
      UnityEngine_GameObject__SetActive(lVar18,0,0);
    }
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
     (lVar18 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar18 == 0))
  goto LAB_00c22488;
  if (*(uint *)(lVar18 + 0x18) <= *(uint *)((long)pvVar15 + 0xa0)) goto LAB_00c2248c;
  lVar18 = *(long *)(lVar18 + (long)(int)*(uint *)((long)pvVar15 + 0xa0) * 8 + 0x20);
  if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x38), lVar18 == 0)) goto LAB_00c22488;
  uVar19 = *(uint *)(lVar18 + 0x18) - 1;
  if ((int)uVar26 <= (int)uVar19) {
    uVar19 = uVar26;
  }
  uVar3 = 0;
  if (-1 < (int)uVar26) {
    uVar3 = uVar19;
  }
  if (*(uint *)(lVar18 + 0x18) <= uVar3) goto LAB_00c2248c;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit
            (&uStack_1b8,*(undefined4 *)(lVar18 + (long)(int)uVar3 * 4 + 0x20),0);
  puVar1 = (undefined8 *)((long)pvVar15 + 0x18c);
  uStack_190 = CONCAT44(uStack_190._4_4_,uStack_1a8);
  uStack_198 = uStack_1b0;
  uStack_1a0 = uStack_1b8;
  *(undefined4 *)((long)pvVar15 + 0x1b0) = uStack_1a8;
  *(undefined8 *)((long)pvVar15 + 0x1a8) = uStack_1b0;
  *(undefined8 *)((long)pvVar15 + 0x1a0) = uStack_1b8;
  uStack_1e0 = *(undefined4 *)((long)pvVar15 + 0x19c);
  uStack_1e8 = *(undefined8 *)((long)pvVar15 + 0x194);
  uStack_1f0 = *puVar1;
  puVar2 = (undefined8 *)((long)pvVar15 + 0x1a0);
  iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_1f0,0);
  if (iVar7 == -1) {
LAB_00c21f44:
    *(undefined4 *)((long)pvVar15 + 0x19c) = *(undefined4 *)((long)pvVar15 + 0x1b0);
    *(undefined8 *)((long)pvVar15 + 0x194) = *(undefined8 *)((long)pvVar15 + 0x1a8);
    *puVar1 = *puVar2;
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar18 = *(long *)(_Main_TypeInfo + 0xb8);
      lVar11 = *(long *)(lVar18 + 0x40);
      if (lVar11 != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar18 = *(long *)(_Main_TypeInfo + 0xb8);
          lVar11 = *(long *)(lVar18 + 0x40);
          if (lVar11 == 0) goto LAB_00c22488;
        }
        if (*(int *)(lVar11 + 0x10) == 0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar18 = *(long *)(_Main_TypeInfo + 0xb8);
          }
          if (*(int *)(lVar18 + 0x2c) == 1) goto LAB_00c21f44;
        }
        if (*(char *)((long)pvVar15 + 0x414) != '\0') goto LAB_00c21f44;
      }
    }
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) == 0xc) {
    uStack_200 = *(undefined4 *)((long)pvVar15 + 0x1b0);
    uStack_208 = *(undefined8 *)((long)pvVar15 + 0x1a8);
    uStack_210 = *puVar2;
    iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_210,0);
    iVar7 = -0x80000000;
    if ((float)iVar6 * 0.25 != INFINITY) {
      iVar7 = (int)((float)iVar6 * 0.25);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_1b8,iVar7,0);
    uStack_190 = CONCAT44(uStack_190._4_4_,uStack_1a8);
    uStack_198 = uStack_1b0;
    uStack_1a0 = uStack_1b8;
    *(undefined4 *)((long)pvVar15 + 0x19c) = uStack_1a8;
    *(undefined8 *)((long)pvVar15 + 0x194) = uStack_1b0;
    *puVar1 = uStack_1b8;
  }
  uStack_220 = *(undefined4 *)((long)pvVar15 + 0x19c);
  uStack_228 = *(undefined8 *)((long)pvVar15 + 0x194);
  uStack_230 = *puVar1;
  iVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_230,0);
  uStack_248 = *(undefined8 *)((long)pvVar15 + 0x1a8);
  uStack_250 = *puVar2;
  uStack_240 = *(undefined4 *)((long)pvVar15 + 0x1b0);
  iVar9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_250,0);
  uStack_268 = *(undefined8 *)((long)pvVar15 + 0x1a8);
  uStack_270 = *puVar2;
  uStack_260 = *(undefined4 *)((long)pvVar15 + 0x1b0);
  iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_270,0);
  iVar6 = -0x80000000;
  if ((float)iVar9 * 0.2 != INFINITY) {
    iVar6 = (int)((float)iVar9 * 0.2);
  }
  if (iVar8 <= iVar7) {
    iVar7 = iVar8;
  }
  if (iVar6 <= iVar8) {
    iVar6 = iVar7;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_1b8,iVar6,0);
  uStack_190 = CONCAT44(uStack_190._4_4_,uStack_1a8);
  uStack_198 = uStack_1b0;
  uStack_1a0 = uStack_1b8;
  *(undefined4 *)((long)pvVar15 + 0x19c) = uStack_1a8;
  *(undefined8 *)((long)pvVar15 + 0x194) = uStack_1b0;
  *puVar1 = uStack_1b8;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Main_TypeInfo + 0xb8) != 0) &&
     (lVar18 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar18 != 0)) {
    if (*(uint *)(lVar18 + 0x18) <= *(uint *)((long)pvVar15 + 0xa0)) {
LAB_00c2248c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar18 = *(long *)(lVar18 + (long)(int)*(uint *)((long)pvVar15 + 0xa0) * 8 + 0x20);
    if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x38), lVar18 != 0)) {
      *(float *)((long)pvVar15 + 0x188) =
           ((float)(int)uVar3 / (float)(*(int *)(lVar18 + 0x18) + -1)) * -0.5 + 1.0;
      uStack_124 = 0;
      lVar18 = *(long *)((long)pvVar15 + 0x350);
      if (lVar18 != 0) {
        do {
          if ((int)*(uint *)(lVar18 + 0x18) <= (int)uStack_124) {
            CarController__IODIAKMIMDD(pvVar15);
            CarController__PCDOLLHPMJE(pvVar15);
            CarController__OJOPPNIEGLL(pvVar15);
            CarController__GFAPIMNKMLG(pvVar15,uVar22);
            CarController__LOPCCLDAPAE(pvVar15);
            CarController__OENKDDLNKCJ(pvVar15,0);
            lVar18 = func_0x00a679a0(_string___TypeInfo,0x10);
            if (lVar18 != 0) {
              if (*(int *)(lVar18 + 0x18) != 0) {
                *(undefined8 *)(lVar18 + 0x20) = _Str_Car_Init__Engine__;
                uVar17 = System_Int32__ToString((long)&uStack_118 + 4,0);
                if ((1 < *(uint *)(lVar18 + 0x18)) &&
                   (*(undefined8 *)(lVar18 + 0x28) = uVar17, *(uint *)(lVar18 + 0x18) != 2)) {
                  *(undefined8 *)(lVar18 + 0x30) = _Str__lvl___;
                  uStack_130 = *(undefined8 *)((long)pvVar15 + 0x158);
                  uStack_138 = *(undefined8 *)((long)pvVar15 + 0x150);
                  uStack_140 = *(undefined8 *)((long)pvVar15 + 0x148);
                  uVar17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ToString(&uStack_140,0);
                  if ((3 < *(uint *)(lVar18 + 0x18)) &&
                     (*(undefined8 *)(lVar18 + 0x38) = uVar17, *(uint *)(lVar18 + 0x18) != 4)) {
                    *(undefined8 *)(lVar18 + 0x40) = _Str___Wheels__;
                    uVar17 = System_Int32__ToString((long)pvVar15 + 0x124,0);
                    if ((5 < *(uint *)(lVar18 + 0x18)) &&
                       (*(undefined8 *)(lVar18 + 0x48) = uVar17, *(uint *)(lVar18 + 0x18) != 6)) {
                      *(undefined8 *)(lVar18 + 0x50) = _Str__st_;
                      uVar17 = System_Single__ToString((long)pvVar15 + 0x178,0);
                      if ((7 < *(uint *)(lVar18 + 0x18)) &&
                         (*(undefined8 *)(lVar18 + 0x58) = uVar17, *(uint *)(lVar18 + 0x18) != 8)) {
                        *(undefined8 *)(lVar18 + 0x60) = _Str____Gun__;
                        uVar17 = System_Int32__ToString(&uStack_118,0);
                        if ((9 < *(uint *)(lVar18 + 0x18)) &&
                           (*(undefined8 *)(lVar18 + 0x68) = uVar17, *(uint *)(lVar18 + 0x18) != 10)
                           ) {
                          *(undefined8 *)(lVar18 + 0x70) = _Str__lvl___;
                          uStack_198 = *(undefined8 *)((long)pvVar15 + 0x2f8);
                          uStack_1a0 = *(undefined8 *)((long)pvVar15 + 0x2f0);
                          uStack_190 = CONCAT44(uStack_190._4_4_,
                                                *(undefined4 *)((long)pvVar15 + 0x300));
                          uVar22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit
                                             (&uStack_1a0,0);
                          uStack_120 = CONCAT44(uStack_120._4_4_,uVar22);
                          uVar17 = System_Int32__ToString(&uStack_120,0);
                          if ((0xb < *(uint *)(lVar18 + 0x18)) &&
                             (*(undefined8 *)(lVar18 + 0x78) = uVar17,
                             *(uint *)(lVar18 + 0x18) != 0xc)) {
                            *(undefined8 *)(lVar18 + 0x80) = _Str___Nitro__;
                            uVar17 = System_Int32__ToString((long)&uStack_120 + 4,0);
                            if ((0xd < *(uint *)(lVar18 + 0x18)) &&
                               (*(undefined8 *)(lVar18 + 0x88) = uVar17,
                               *(uint *)(lVar18 + 0x18) != 0xe)) {
                              *(undefined8 *)(lVar18 + 0x90) = _Str___HP__;
                              uStack_150 = *(undefined4 *)((long)pvVar15 + 0x19c);
                              uStack_158 = *(undefined8 *)((long)pvVar15 + 0x194);
                              uStack_160 = *puVar1;
                              uVar17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString
                                                 (&uStack_160,0);
                              if (0xf < *(uint *)(lVar18 + 0x18)) {
                                *(undefined8 *)(lVar18 + 0x98) = uVar17;
                                uVar17 = System_String__Concat(lVar18,0);
                                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                                  func_0x00a67a30(_Main_TypeInfo);
                                }
                                Main__GEMDEAMAGPG(uVar17,0,0);
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
              goto LAB_00c2248c;
            }
            break;
          }
          if (*(uint *)(lVar18 + 0x18) <= uStack_124) goto LAB_00c2248c;
          uVar17 = *(undefined8 *)(lVar18 + (long)(int)uStack_124 * 8 + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar10 = UnityEngine_Object__op_Inequality(uVar17,0,0);
          if ((uVar10 & 1) == 0) {
            uVar17 = System_Int32__ToString(&uStack_124,0);
            uVar17 = System_String__Concat(_Str_Problem_with_armor__,uVar17,0);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_Main_TypeInfo);
            }
            Main__EEKNCFLMGDP(uVar17,0);
          }
          else {
            lVar18 = *(long *)((long)pvVar15 + 0x350);
            if (lVar18 == 0) break;
            if (*(uint *)(lVar18 + 0x18) <= uStack_124) goto LAB_00c2248c;
            lVar18 = *(long *)(lVar18 + (long)(int)uStack_124 * 8 + 0x20);
            if (lVar18 == 0) break;
            UnityEngine_GameObject__SetActive(lVar18,(int)(uStack_124 + 1) <= (int)uVar3,0);
          }
          uStack_124 = uStack_124 + 1;
          lVar18 = *(long *)((long)pvVar15 + 0x350);
        } while (lVar18 != 0);
      }
    }
  }
LAB_00c22488:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private IEnumerator FNDOKMIBKCA() { }   @0xb22a8c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * CarController__FNDOKMIBKCA(void *__this)

{
  void *pvVar1;
  
  if ((bRam0000000001917029 & 1) == 0) {
    func_0x00a67900(&CarController_NDBGEGFNJMP_TypeInfo);
    bRam0000000001917029 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_CarController_NDBGEGFNJMP_TypeInfo);
  CarController_NDBGEGFNJMP___ctor(pvVar1,0,0);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)pvVar1 + 0x20) = __this;
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void FixedUpdate() { }   @0xb24674

/* WARNING: Removing unreachable block (ram,0x00c247e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__FixedUpdate(void *__this)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float in_s1;
  float fVar12;
  float in_s2;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  ulong in_d3;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  
  if ((bRam000000000191702e & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Method_Spring_Vector3__JGMENGJBLAO__);
    func_0x00a67900(&Method_Spring_float__JGMENGJBLAO__);
    func_0x00a67900(&Method_Spring_Vector3__set_currentVel__);
    bRam000000000191702e = 1;
  }
  if (cRam0000000001916e65 == '\0') {
    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
    cRam0000000001916e65 = '\x01';
  }
  if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c25024;
  lVar3 = *(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8);
  fVar17 = *(float *)(lVar3 + 0x48);
  fVar19 = *(float *)(lVar3 + 0x4c);
  fVar16 = *(float *)(lVar3 + 0x50);
  fVar6 = (float)UnityEngine_Transform__get_forward(*(long *)((long)__this + 0x38),0);
  fVar13 = in_s2;
  if (cRam0000000001916aa2 == '\0') {
    func_0x00a67900(&System_Math_TypeInfo);
    cRam0000000001916aa2 = '\x01';
  }
  if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  fVar7 = SQRT((fVar16 * fVar16 + fVar17 * fVar17 + fVar19 * fVar19) *
               (in_s2 * in_s2 + fVar6 * fVar6 + in_s1 * in_s1));
  fVar12 = 0.0;
  if (1e-15 <= fVar7) {
    in_d3 = (ulong)(uint)(fVar16 * in_s2);
    fVar7 = (fVar16 * in_s2 + fVar17 * fVar6 + fVar19 * in_s1) / fVar7;
    fVar13 = -1.0;
    if (fVar7 < -1.0) {
      fVar7 = -1.0;
    }
    if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
      fVar13 = -1.0;
      func_0x00a67a30();
    }
    dVar9 = (double)func_0x016decf0((double)fVar7);
    fVar12 = (float)dVar9 * 57.29578;
  }
  *(float *)((long)__this + 0x3cc) = fVar12;
  if (*(char *)((long)__this + 0x44c) != '\0') {
    fVar6 = fVar13;
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x34) == '\0') {
      if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c25024;
      UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
      if (fVar6 < 5.0) {
        if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c25024;
        UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
        if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c25024;
        fVar6 = 0.0;
        UnityEngine_Transform__set_position(*(long *)((long)__this + 0x38),0);
      }
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    fVar13 = fVar6;
    if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) == '\0') {
      if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c25024;
      fVar16 = (float)UnityEngine_Transform__get_right(*(long *)((long)__this + 0x38),0);
      if (cRam0000000001916e66 == '\0') {
        func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
        cRam0000000001916e66 = '\x01';
      }
      fVar13 = *(float *)((long)__this + 0x428);
      lVar3 = *(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8);
      in_d3 = (ulong)(uint)*(float *)(lVar3 + 0x44);
      if (fVar6 * *(float *)(lVar3 + 0x44) +
          fVar16 * *(float *)(lVar3 + 0x3c) + fVar12 * *(float *)(lVar3 + 0x40) < fVar13) {
        lVar3 = *(long *)((long)__this + 0x40);
        fVar6 = 40.0;
        if (40.0 <= *(float *)((long)__this + 0x3cc)) {
          if (lVar3 == 0) goto LAB_00c25024;
          fVar16 = (float)UnityEngine_Rigidbody__get_angularVelocity(lVar3,0);
          if (*(long *)((long)__this + 0x40) == 0) goto LAB_00c25024;
          fVar17 = fVar6;
          fVar19 = fVar13;
          fVar7 = (float)UnityEngine_Rigidbody__get_angularVelocity
                                   (*(long *)((long)__this + 0x40),0);
          if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c25024;
          fVar12 = fVar17;
          fVar14 = fVar19;
          fVar8 = (float)UnityEngine_Transform__get_forward(*(long *)((long)__this + 0x38),0);
          if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c25024;
          fVar19 = fVar19 * fVar14;
          fVar7 = fVar19 + fVar7 * fVar8 + fVar17 * fVar12;
          fVar17 = (float)UnityEngine_Transform__get_forward(*(long *)((long)__this + 0x38),0);
          fVar13 = fVar13 - fVar7 * fVar14;
          UnityEngine_Rigidbody__set_angularVelocity
                    (fVar16 - fVar7 * fVar17,fVar6 - fVar7 * fVar19,lVar3,0);
        }
        else {
          if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c25024;
          fVar16 = (float)UnityEngine_Transform__get_right(*(long *)((long)__this + 0x38),0);
          if (cRam0000000001916e66 == '\0') {
            func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
            cRam0000000001916e66 = '\x01';
          }
          if (lVar3 == 0) goto LAB_00c25024;
          fVar7 = *(float *)((long)__this + 0x42c);
          in_d3 = (ulong)(uint)fVar7;
          lVar4 = *(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8);
          fVar19 = fVar13 * *(float *)(lVar4 + 0x3c);
          fVar17 = fVar13 * *(float *)(lVar4 + 0x40);
          fVar13 = (fVar16 * *(float *)(lVar4 + 0x40) - fVar6 * *(float *)(lVar4 + 0x3c)) * fVar7;
          UnityEngine_Rigidbody__AddTorque
                    (fVar7 * (fVar6 * *(float *)(lVar4 + 0x44) - fVar17),
                     fVar7 * (fVar19 - fVar16 * *(float *)(lVar4 + 0x44)),lVar3,5,0);
        }
      }
    }
    if (*(char *)((long)__this + 0x3c8) == '\0') {
      lVar3 = *(long *)((long)__this + 0x520);
      if (lVar3 == 0) goto LAB_00c25024;
      if (*(uint *)(lVar3 + 0x18) == 0) {
LAB_00c25028:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      if (*(long *)(lVar3 + 0x20) == 0) goto LAB_00c25024;
      if (*(char *)(*(long *)(lVar3 + 0x20) + 0x50) == '\0') {
LAB_00c24ab8:
        fVar6 = *(float *)((long)__this + 0x218) * *(float *)((long)__this + 0x16c);
      }
      else {
        uVar1 = *(int *)((long)__this + 0x120) - 1;
        if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_00c25028;
        lVar3 = *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_00c25024;
        if (*(char *)(lVar3 + 0x50) == '\0') goto LAB_00c24ab8;
        fVar6 = (*(float *)((long)__this + 0x218) * *(float *)((long)__this + 0x16c)) / 3.0;
      }
      lVar3 = *(long *)((long)__this + 0x40);
      if (cRam0000000001916e66 == '\0') {
        func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
        cRam0000000001916e66 = '\x01';
      }
      if (lVar3 == 0) goto LAB_00c25024;
      lVar4 = *(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8);
      in_d3 = (ulong)(uint)*(float *)(lVar4 + 0x3c);
      fVar13 = fVar6 * *(float *)(lVar4 + 0x44);
      UnityEngine_Rigidbody__AddTorque
                (fVar6 * *(float *)(lVar4 + 0x3c),fVar6 * *(float *)(lVar4 + 0x40),lVar3,2,0);
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x46) != '\0') {
      if (*(long *)((long)__this + 0x40) == 0) goto LAB_00c25024;
      uVar15 = 0x4154cccd;
      uVar11 = 0;
      UnityEngine_Rigidbody__set_velocity(0,0,*(long *)((long)__this + 0x40),0);
      lVar3 = *(long *)((long)__this + 0x40);
      if (lVar3 == 0) goto LAB_00c25024;
      uVar10 = UnityEngine_Rigidbody__get_rotation(lVar3,0);
      if (cRam000000000191678a == '\0') {
        func_0x00a67900(&UnityEngine_Quaternion_TypeInfo);
        cRam000000000191678a = '\x01';
      }
      puVar5 = *(undefined4 **)(_UnityEngine_Quaternion_TypeInfo + 0xb8);
      uVar18 = *puVar5;
      uVar20 = puVar5[1];
      uVar21 = puVar5[2];
      uVar22 = puVar5[3];
      UnityEngine_Time__get_fixedDeltaTime(0);
      UnityEngine_Quaternion__Lerp(uVar10,uVar11,uVar15,in_d3,uVar18,uVar20,uVar21,uVar22,0);
      fVar13 = (float)uVar15;
      fVar6 = (float)uVar11;
      UnityEngine_Rigidbody__set_rotation(lVar3,0);
      if (*(long *)((long)__this + 0x40) == 0) goto LAB_00c25024;
      uVar11 = UnityEngine_Rigidbody__get_position(*(long *)((long)__this + 0x40),0);
      if (*(long *)((long)__this + 0x40) == 0) goto LAB_00c25024;
      UnityEngine_Rigidbody__get_position(*(long *)((long)__this + 0x40),0);
      fVar17 = *(float *)((long)__this + 0x410);
      fVar16 = (float)UnityEngine_Time__get_fixedDeltaTime(0);
      if (*(long *)((long)__this + 0x40) == 0) goto LAB_00c25024;
      fVar16 = fVar16 * 3.0;
      fVar19 = fVar16;
      if (1.0 < fVar16) {
        fVar19 = 1.0;
      }
      if (fVar16 < 0.0) {
        fVar19 = 0.0;
      }
      UnityEngine_Rigidbody__set_position
                (uVar11,fVar6 + (fVar17 - fVar6) * fVar19,*(long *)((long)__this + 0x40),0);
    }
    uVar11 = *(undefined8 *)((long)__this + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if (((uVar2 & 1) != 0) && (*(char *)((long)__this + 0x414) != '\0')) {
      if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c25024;
      lVar3 = *(long *)((long)__this + 0x30);
      UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
      if ((*(long *)((long)__this + 0x28) == 0) || (lVar3 == 0)) goto LAB_00c25024;
      GUIGameplay__LJNIGKAEGON(lVar3,*(undefined8 *)(*(long *)((long)__this + 0x28) + 0x28),1,0);
    }
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  fVar6 = 1.0;
  if (1.0 < *(float *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x10)) {
    if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c25024;
    lVar3 = *(long *)((long)__this + 0x40);
    fVar16 = (float)UnityEngine_Transform__get_forward(*(long *)((long)__this + 0x38),0);
    if (lVar3 == 0) goto LAB_00c25024;
    fVar17 = *(float *)((long)__this + 0x168);
    fVar13 = fVar13 * fVar17 * 0.75;
    fVar6 = fVar6 * fVar17 * 0.75;
    UnityEngine_Rigidbody__AddForce(fVar16 * fVar17 * 0.75,lVar3,5,0);
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  CarController__HBLIIBFNKIE
            (*(undefined4 *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x10),__this);
  if (*(char *)((long)__this + 0x44c) == '\0') {
    return;
  }
  if (*(long *)((long)__this + 0x450) != 0) {
    *(undefined4 *)(*(long *)((long)__this + 0x450) + 0x1c) = 0;
    lVar3 = *(long *)((long)__this + 0x40);
    if (lVar3 != 0) {
      fVar16 = (float)UnityEngine_Rigidbody__get_position(lVar3,0);
      if (*(long *)((long)__this + 0x40) != 0) {
        lVar4 = *(long *)((long)__this + 0x450);
        fVar17 = (float)UnityEngine_Rigidbody__get_position(*(long *)((long)__this + 0x40),0);
        if (lVar4 != 0) {
          fStack_90 = fVar17;
          Spring___Il2CppFullySharedGenericType___JGMENGJBLAO
                    (lVar4,&fStack_90,&fStack_a0,_Method_Spring_float__JGMENGJBLAO__);
          fVar6 = fVar6 + 0.0;
          fVar13 = fVar13 + 0.0;
          UnityEngine_Rigidbody__MovePosition(fVar16 + fStack_a0,lVar3,0);
          if (*(long *)((long)__this + 0x38) != 0) {
            fVar16 = (float)UnityEngine_Transform__get_right(*(long *)((long)__this + 0x38),0);
            if (cRam0000000001916e66 == '\0') {
              func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
              cRam0000000001916e66 = '\x01';
            }
            lVar4 = *(long *)((long)__this + 0x458);
            lVar3 = *(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8);
            fVar17 = 1.0;
            if (fVar13 * *(float *)(lVar3 + 0x44) +
                fVar16 * *(float *)(lVar3 + 0x3c) + fVar6 * *(float *)(lVar3 + 0x40) < 0.0) {
              fVar17 = -1.0;
            }
            if (lVar4 != 0) {
              uVar11 = *(undefined8 *)(lVar3 + 0x3c);
              fVar13 = fVar17 * *(float *)(lVar3 + 0x44);
              *(ulong *)(lVar4 + 0x1c) =
                   CONCAT44((float)((ulong)uVar11 >> 0x20) * fVar17,(float)uVar11 * fVar17);
              *(float *)(lVar4 + 0x24) = fVar13;
              if (*(long *)((long)__this + 0x40) != 0) {
                lVar3 = *(long *)((long)__this + 0x458);
                fVar6 = (float)UnityEngine_Rigidbody__get_angularVelocity
                                         (*(long *)((long)__this + 0x40),0);
                fVar16 = (float)uVar11;
                if (lVar3 != 0) {
                  fStack_90 = fVar6;
                  fStack_8c = fVar13;
                  fStack_88 = fVar16;
                  Spring___Il2CppFullySharedGenericType___set_currentVel
                            (lVar3,&fStack_90,_Method_Spring_Vector3__set_currentVel__);
                  if (*(long *)((long)__this + 0x38) != 0) {
                    lVar3 = *(long *)((long)__this + 0x40);
                    lVar4 = *(long *)((long)__this + 0x458);
                    fVar6 = (float)UnityEngine_Transform__get_right
                                             (*(long *)((long)__this + 0x38),0);
                    if ((lVar4 != 0) &&
                       (fStack_a0 = fVar6, fStack_9c = fVar13, fStack_98 = fVar16,
                       Spring___Il2CppFullySharedGenericType___JGMENGJBLAO
                                 (lVar4,&fStack_a0,&fStack_90,_Method_Spring_Vector3__JGMENGJBLAO__)
                       , lVar3 != 0)) {
                      fVar13 = 0.0;
                      UnityEngine_Rigidbody__AddTorque(0,fStack_8c,lVar3,2,0);
                      uVar11 = *(undefined8 *)((long)__this + 0x430);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar2 = UnityEngine_Object__op_Inequality(uVar11,0,0);
                      if ((uVar2 & 1) == 0) {
                        return;
                      }
                      lVar3 = *(long *)((long)__this + 0x460);
                      if (cRam0000000001916789 == '\0') {
                        func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                        cRam0000000001916789 = '\x01';
                      }
                      if (lVar3 != 0) {
                        fVar6 = *(float *)(*(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8) +
                                          1);
                        *(undefined8 *)(lVar3 + 0x1c) =
                             **(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
                        *(float *)(lVar3 + 0x24) = fVar6;
                        lVar3 = *(long *)((long)__this + 0x430);
                        if (lVar3 != 0) {
                          fVar16 = (float)UnityEngine_Transform__get_localEulerAngles(lVar3,0);
                          if (*(long *)((long)__this + 0x430) != 0) {
                            lVar4 = *(long *)((long)__this + 0x460);
                            fVar17 = fVar6;
                            fVar19 = fVar13;
                            fVar7 = (float)UnityEngine_Transform__get_localEulerAngles
                                                     (*(long *)((long)__this + 0x430),0);
                            if (lVar4 != 0) {
                              fStack_a0 = fVar7;
                              fStack_9c = fVar17;
                              fStack_98 = fVar19;
                              Spring___Il2CppFullySharedGenericType___JGMENGJBLAO
                                        (lVar4,&fStack_a0,&fStack_90,
                                         _Method_Spring_Vector3__JGMENGJBLAO__);
                              UnityEngine_Transform__set_localEulerAngles
                                        (fVar16 + fStack_90,fVar6 + fStack_8c,fVar13 + fStack_88,
                                         lVar3,0);
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
    }
  }
LAB_00c25024:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void OAMJAHGGKEI() { }   @0xb25fec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__OAMJAHGGKEI(void *__this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam0000000001917032 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Upgrade_is_avaliable_for_buy__cheapest_u);
    bRam0000000001917032 = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(int *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x48) < 1) {
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
  lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar2 != 0) {
    iVar1 = DAFNMLEKHAD__LOCFCFJIAIH(lVar2,0);
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CarController_TypeInfo);
    }
    if (iVar1 < *(int *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x48)) {
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
    lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar2 != 0) {
      lVar2 = DAFNMLEKHAD__DKJLCJPBPPN(lVar2,0xffffffff,1,0);
      if (lVar2 == 0) {
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
      lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((lVar2 != 0) && (lVar2 = DAFNMLEKHAD__DKJLCJPBPPN(lVar2,0xffffffff,1,0), lVar2 != 0)) {
        uVar3 = MKCBGHDANLA__JOEMNOABHDF(lVar2,0xffffffff,0);
        if ((uVar3 & 1) == 0) {
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
        lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar2 != 0) {
          lVar2 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar2,0xffffffff,0);
          if (lVar2 == 0) {
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
          lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if ((lVar2 != 0) && (lVar2 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar2,0xffffffff,0), lVar2 != 0)) {
            uStack_40 = *(undefined4 *)(lVar2 + 0x24);
            uStack_48 = *(undefined8 *)(lVar2 + 0x1c);
            uStack_50 = *(undefined8 *)(lVar2 + 0x14);
            iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_50,0);
            if (0 < iVar1) {
              return;
            }
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = System_Int32__ToString(*(long *)(_CarController_TypeInfo + 0xb8) + 0x48,0);
            uVar4 = System_String__Concat(_Str_Upgrade_is_avaliable_for_buy__cheapest_u,uVar4,0);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_Main_TypeInfo);
            }
            Main__GEMDEAMAGPG(uVar4,0,0);
            if (((*(long *)((long)__this + 0x30) != 0) &&
                (lVar2 = *(long *)(*(long *)((long)__this + 0x30) + 0x2d8), lVar2 != 0)) &&
               (lVar2 = UnityEngine_Component__get_gameObject(lVar2,0), lVar2 != 0)) {
              UnityEngine_GameObject__SetActive(lVar2,0,0);
              if ((*(long *)((long)__this + 0x30) != 0) &&
                 (lVar2 = *(long *)(*(long *)((long)__this + 0x30) + 0x328), lVar2 != 0)) {
                UnityEngine_GameObject__SetActive(lVar2,1,0);
                return;
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


// ==== public void KPFMJNAJAIJ() { }   @0xb26fd4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__KPFMJNAJAIJ(void *__this)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  lVar2 = *(long *)((long)__this + 0x520);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      uVar3 = 0;
      do {
        if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar4 = *(long *)(lVar2 + (long)(int)uVar3 * 8 + 0x20);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x20) == 0)) goto LAB_00c27070;
        UnityEngine_WheelCollider__set_motorTorque(0xc2c80000,*(long *)(lVar4 + 0x20),0);
        if (*(long *)(lVar4 + 0x20) == 0) goto LAB_00c27070;
        UnityEngine_WheelCollider__set_brakeTorque
                  (*(float *)((long)__this + 0x170) * 100.0,*(long *)(lVar4 + 0x20),0);
        uVar1 = *(uint *)(lVar2 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)uVar1);
    }
    return;
  }
LAB_00c27070:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public IEnumerator HAPAIKKJNCN() { }   @0xb273e8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * CarController__HAPAIKKJNCN(void *__this)

{
  void *pvVar1;
  
  if ((bRam0000000001917039 & 1) == 0) {
    func_0x00a67900(&CarController_DNCIEMHODPI_TypeInfo);
    bRam0000000001917039 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_CarController_DNCIEMHODPI_TypeInfo);
  CarController_DNCIEMHODPI___ctor(pvVar1,0,0);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)pvVar1 + 0x20) = __this;
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void FGIKMGFJJDM() { }   @0xb256f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__FGIKMGFJJDM(void *__this)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam000000000191703d & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_UI_ColorBlock_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_OUT_OF_NITRO);
    bRam000000000191703d = 1;
  }
  uStack_78 = 0;
  CarController__BALBOFMAKKO(__this);
  uVar8 = *(undefined8 *)((long)__this + 0x30);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar4 & 1) != 0) {
    uStack_80 = *(undefined8 *)((long)__this + 0x1dc);
    uStack_88 = *(undefined8 *)((long)__this + 0x1d4);
    uStack_90 = *(undefined8 *)((long)__this + 0x1cc);
    fVar11 = (float)CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_90,0);
    if (fVar11 <= 0.0) {
      if (*(char *)((long)__this + 0x313) == '\0') {
        *(undefined1 *)((long)__this + 0x313) = 1;
        *(undefined1 *)((long)__this + 0x311) = 0;
        if ((*(long *)((long)__this + 0x30) == 0) ||
           (lVar5 = *(long *)(*(long *)((long)__this + 0x30) + 0xe8), lVar5 == 0))
        goto LAB_00c25d38;
        plVar6 = (long *)UnityEngine_UI_Selectable__get_image(lVar5,0);
        if ((*(long *)((long)__this + 0x30) == 0) ||
           (lVar5 = *(long *)(*(long *)((long)__this + 0x30) + 0xe8), lVar5 == 0))
        goto LAB_00c25d38;
        uVar12 = *(undefined4 *)(lVar5 + 0x94);
        uVar13 = *(undefined4 *)(lVar5 + 0x98);
        uVar15 = *(undefined4 *)(lVar5 + 0x9c);
        uVar16 = *(undefined4 *)(lVar5 + 0xa0);
        if (*(int *)(_UnityEngine_UI_ColorBlock_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (plVar6 == (long *)0x0) goto LAB_00c25d38;
        pcVar7 = *(code **)(*plVar6 + 0x2a8);
        uVar8 = *(undefined8 *)(*plVar6 + 0x2b0);
        goto LAB_00c258bc;
      }
    }
    else if (*(char *)((long)__this + 0x311) == '\0') {
      *(undefined1 *)((long)__this + 0x311) = 1;
      *(undefined1 *)((long)__this + 0x313) = 0;
      if (((*(long *)((long)__this + 0x30) == 0) ||
          (lVar5 = *(long *)(*(long *)((long)__this + 0x30) + 0xe8), lVar5 == 0)) ||
         (plVar6 = (long *)UnityEngine_UI_Selectable__get_image(lVar5,0), plVar6 == (long *)0x0))
      goto LAB_00c25d38;
      uVar12 = 0x3f800000;
      uVar13 = 0x3f800000;
      uVar15 = 0x3f800000;
      pcVar7 = *(code **)(*plVar6 + 0x2a8);
      uVar8 = *(undefined8 *)(*plVar6 + 0x2b0);
      uVar16 = 0x3f800000;
LAB_00c258bc:
      (*pcVar7)(uVar12,uVar13,uVar15,uVar16,plVar6,uVar8);
    }
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x34) != '\0') &&
     (*(char *)((long)__this + 0x344) != '\0')) {
    puVar1 = (undefined8 *)((long)__this + 0x1cc);
    uStack_a0 = *(undefined8 *)((long)__this + 0x1dc);
    uStack_a8 = *(undefined8 *)((long)__this + 0x1d4);
    uStack_b0 = *puVar1;
    fVar11 = (float)CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_b0,0);
    if (fVar11 <= 0.0) {
      uVar8 = *(undefined8 *)((long)__this + 0x30);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      lVar5 = *(long *)((long)__this + 0x30);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Translate_TypeInfo + 0xb8) != 0) &&
         (uVar8 = Translate__JJJNIPAKLJF
                            (**(long **)(_Translate_TypeInfo + 0xb8),_Str_OUT_OF_NITRO,0),
         lVar5 != 0)) {
        GUIGameplay__HNKHJLDJMHB(lVar5,uVar8,5,0,0,0);
        return;
      }
      goto LAB_00c25d38;
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined4 *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x10) = 0x3f828f5c;
    fVar11 = (float)UnityEngine_Time__get_timeScale(0);
    if (fVar11 <= 0.0) {
      return;
    }
    if (*(char *)((long)__this + 0x345) == '\0') {
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
      if (lVar5 == 0) goto LAB_00c25d38;
      uVar4 = DAFNMLEKHAD__BMMOMBGDEKF(lVar5,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar5 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x70);
        if (lVar5 == 0) goto LAB_00c25d38;
        UnityEngine_AudioSource__set_volume
                  (*(undefined4 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x78),lVar5,0);
        SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x70),0);
      }
      lVar5 = *(long *)((long)__this + 0x328);
      if (lVar5 == 0) goto LAB_00c25d38;
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar2) {
        uVar10 = 0;
        do {
          if (uVar2 <= uVar10) goto LAB_00c25d3c;
          lVar9 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_00c25d38;
          UnityEngine_ParticleSystem__set_startColor
                    (0x3f800000,0x3f800000,0x3f800000,0x3f800000,lVar9,0);
          uStack_78 = UnityEngine_ParticleSystem__get_emission(lVar9,0);
          UnityEngine_ParticleSystem_EmissionModule__set_enabled(&uStack_78,1,0);
          uVar2 = *(uint *)(lVar5 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar2);
      }
      uVar8 = *(undefined8 *)((long)__this + 0x30);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar4 & 1) != 0) {
        if ((*(long *)((long)__this + 0x30) == 0) ||
           (lVar5 = *(long *)(*(long *)((long)__this + 0x30) + 0xd8), lVar5 == 0))
        goto LAB_00c25d38;
        plVar6 = (long *)UnityEngine_UI_Selectable__get_image(lVar5,0);
        if ((*(long *)((long)__this + 0x30) == 0) ||
           (lVar5 = *(long *)(*(long *)((long)__this + 0x30) + 0xd8), lVar5 == 0))
        goto LAB_00c25d38;
        uVar16 = *(undefined4 *)(lVar5 + 0x74);
        uVar15 = *(undefined4 *)(lVar5 + 0x78);
        uVar13 = *(undefined4 *)(lVar5 + 0x7c);
        uVar12 = *(undefined4 *)(lVar5 + 0x80);
        if (*(int *)(_UnityEngine_UI_ColorBlock_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (plVar6 == (long *)0x0) goto LAB_00c25d38;
        (**(code **)(*plVar6 + 0x2a8))
                  (uVar16,uVar15,uVar13,uVar12,plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
      }
      *(undefined1 *)((long)__this + 0x345) = 1;
    }
    lVar5 = *(long *)((long)__this + 0x328);
    if (lVar5 == 0) {
LAB_00c25d38:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar2 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar2) {
      uVar10 = 0;
      do {
        if (uVar2 <= uVar10) {
LAB_00c25d3c:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar9 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
        fVar14 = *(float *)((long)__this + 0x340);
        fVar11 = (float)UnityEngine_Time__get_time(0);
        if (lVar9 == 0) goto LAB_00c25d38;
        fVar11 = (float)func_0x016ded20(fVar11 * 40.0);
        UnityEngine_ParticleSystem__set_startLifetime(fVar14 + fVar14 * fVar11 * 0.1,lVar9,0);
        uVar2 = *(uint *)(lVar5 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar2);
    }
    uStack_c0 = *(undefined8 *)((long)__this + 0x1dc);
    uStack_c8 = *(undefined8 *)((long)__this + 0x1d4);
    uStack_d0 = *puVar1;
    fVar11 = (float)CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_d0,0);
    uStack_e8 = *(undefined8 *)((long)__this + 0x1ec);
    uStack_f0 = *(undefined8 *)((long)__this + 0x1e4);
    uStack_e0 = *(undefined4 *)((long)__this + 500);
    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_f0,0);
    fVar14 = (float)UnityEngine_Time__get_deltaTime(0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit
              (&uStack_130,fVar11 - fVar14 * (float)iVar3,0);
    uStack_100 = uStack_120;
    uStack_108 = uStack_128;
    uStack_110 = uStack_130;
    *(undefined8 *)((long)__this + 0x1dc) = uStack_120;
    *(undefined8 *)((long)__this + 0x1d4) = uStack_128;
    *puVar1 = uStack_130;
    uStack_140 = uStack_120;
    uStack_148 = uStack_128;
    uStack_150 = uStack_130;
    fVar14 = (float)CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_150,0);
    uStack_168 = *(undefined8 *)((long)__this + 0x200);
    uStack_170 = *(undefined8 *)((long)__this + 0x1f8);
    uStack_160 = *(undefined4 *)((long)__this + 0x208);
    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_170,0);
    fVar11 = (float)iVar3;
    if (fVar14 <= (float)iVar3) {
      fVar11 = fVar14;
    }
    if (fVar14 < 0.0) {
      fVar11 = 0.0;
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_188,fVar11,0);
    *(undefined8 *)((long)__this + 0x1dc) = uStack_178;
    *(undefined8 *)((long)__this + 0x1d4) = uStack_180;
    *puVar1 = uStack_188;
  }
  return;
}


// ==== public void JHMJACIPINH() { }   @0xb25698

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__JHMJACIPINH(void *__this)

{
  if ((bRam0000000001917041 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    bRam0000000001917041 = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  *(undefined4 *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x10) = 0x3f800000;
  return;
}


// ==== private void BALBOFMAKKO() { }   @0xb25d40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__BALBOFMAKKO(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 in_s1;
  undefined4 in_s2;
  long lStack_28;
  
  if ((bRam0000000001917046 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_AddComponent_CarReplay___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_CarReplay___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001917046 = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = *(long *)(_CarController_TypeInfo + 0xb8);
  if ((*(char *)(lVar2 + 0x34) != '\0') ||
     ((*(char *)((long)__this + 0x414) != '\0' && (*(char *)((long)__this + 0x3d0) == '\0')))) {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    lVar2 = *(long *)(_CarController_TypeInfo + 0xb8);
  }
  *(undefined1 *)(lVar2 + 0x34) = 1;
  uVar4 = UnityEngine_Time__get_time(0);
  *(undefined4 *)((long)__this + 0x3dc) = uVar4;
  if (*(long *)((long)__this + 0x38) != 0) {
    uVar4 = UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
    lVar2 = *(long *)(_CarController_TypeInfo + 0xb8);
    *(undefined4 *)(lVar2 + 0x38) = uVar4;
    *(undefined4 *)(lVar2 + 0x3c) = in_s1;
    *(undefined4 *)(lVar2 + 0x40) = in_s2;
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
    if (lVar2 != 0) {
      uVar1 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar2,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar2 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
        if (lVar2 == 0) goto LAB_00c25fe8;
        uVar1 = UnityEngine_AudioSource__get_isPlaying(lVar2,0);
        if ((uVar1 & 1) == 0) {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          SoundScript__HCEFONCADKE
                    (*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0),1,0);
        }
      }
      if (*(char *)((long)__this + 0x414) == '\0') {
        return;
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = *(undefined8 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x38);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x38);
        if (lVar2 == 0) goto LAB_00c25fe8;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (lVar2,&lStack_28,_Method_UnityEngine_GameObject_GetComponent_CarReplay___);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = UnityEngine_Object__op_Inequality(lStack_28,0,0);
        if ((uVar1 & 1) != 0) {
          if (lStack_28 == 0) goto LAB_00c25fe8;
          CarReplay__JNJNCPAAAAA(lStack_28,0);
        }
      }
      lVar2 = UnityEngine_Component__get_gameObject(__this,0);
      if ((lVar2 != 0) &&
         (lVar2 = UnityEngine_GameObject__AddComponent_object_
                            (lVar2,_Method_UnityEngine_GameObject_AddComponent_CarReplay___),
         lVar2 != 0)) {
        CarReplay__ABMNHLOGIIB(lVar2,0);
        return;
      }
    }
  }
LAB_00c25fe8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void FALNNMMGIDA() { }   @0xb23d8c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__FALNNMMGIDA(void *__this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 in_d3;
  undefined1 auVar19 [16];
  long lStack_28;
  
  if ((bRam000000000191704b & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_AutoDestructShuriken___);
    func_0x00a67900(&UnityEngine_GameObject_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_FX_Explosion_Small);
    bRam000000000191704b = 1;
  }
  uVar4 = UnityEngine_Resources__Load(_Str_FX_Explosion_Small,0);
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar9 = UnityEngine_Quaternion__Internal_FromEulerRad(0xbfc90fdb,0,0,0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar5 = (long *)UnityEngine_Object__Instantiate
                             (0,0,0xc1f00000,uVar9,CONCAT44(uVar16,uVar15),CONCAT44(uVar18,uVar17),
                              in_d3,uVar4,0);
  if (plVar5 != (long *)0x0) {
    if (*plVar5 != _UnityEngine_GameObject_TypeInfo) {
      auVar19 = func_0x00a67eec();
      lVar10 = auVar19._8_8_;
      lVar12 = auVar19._0_8_;
      if ((bRam0000000001917040 & 1) == 0) {
        func_0x00a67900(&
                        Method_System_Collections_Generic_Dictionary_MeshRenderer__Material____Add__
                       );
        func_0x00a67900(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
        func_0x00a67900(&Str_wheels);
        bRam0000000001917040 = 1;
      }
      lVar7 = UnityEngine_Component__get_gameObject(lVar12,0);
      if ((lVar7 != 0) &&
         (lVar7 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                            (lVar7,
                             _Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___)
         , lVar7 != 0)) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (0 < (int)uVar1) {
          uVar14 = 0;
          do {
            if (uVar1 <= uVar14) {
LAB_00c240b8:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            lVar13 = *(long *)(lVar7 + (long)(int)uVar14 * 8 + 0x20);
            if ((lVar13 == 0) ||
               (lVar8 = UnityEngine_Component__get_gameObject(lVar13,0), lVar8 == 0))
            goto LAB_00c240c8;
            iVar2 = UnityEngine_GameObject__get_layer(lVar8,0);
            iVar3 = UnityEngine_LayerMask__NameToLayer(_Str_wheels,0);
            if (iVar2 != iVar3) {
              plVar5 = (long *)UnityEngine_Renderer__get_materials(lVar13,0);
              if (*(char *)(lVar12 + 0x4f4) != '\0') {
                lVar8 = *(long *)(lVar12 + 0x510);
                uVar9 = UnityEngine_Renderer__get_sharedMaterials(lVar13,0);
                if (lVar8 == 0) goto LAB_00c240c8;
                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                          (lVar8,lVar13,uVar9,
                           _Method_System_Collections_Generic_Dictionary_MeshRenderer__Material____Add__
                          );
              }
              if (plVar5 == (long *)0x0) goto LAB_00c240c8;
              if (0 < (int)plVar5[3]) {
                uVar6 = 0;
                uVar11 = plVar5[3] & 0xffffffff;
                do {
                  if (lVar10 != 0) {
                    lVar8 = func_0x00a67a34(lVar10,*(undefined8 *)(*plVar5 + 0x40));
                    if (lVar8 == 0) {
                      uVar9 = func_0x00a67b74();
                      func_0x00a67a20(uVar9,0);
                      goto LAB_00c240c8;
                    }
                    uVar11 = (ulong)*(uint *)(plVar5 + 3);
                  }
                  if (uVar11 <= uVar6) goto LAB_00c240b8;
                  plVar5[uVar6 + 4] = lVar10;
                  uVar6 = uVar6 + 1;
                } while ((long)uVar6 < (long)(int)uVar11);
              }
              UnityEngine_Renderer__set_materials(lVar13,plVar5,0);
            }
            uVar1 = *(uint *)(lVar7 + 0x18);
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)uVar1);
        }
        return;
      }
LAB_00c240c8:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (plVar5,&lStack_28,_Method_UnityEngine_GameObject_GetComponent_AutoDestructShuriken___
              );
    uVar6 = UnityEngine_Object__op_Inequality(lStack_28,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if ((lStack_28 != 0) && (*(long *)((long)__this + 0x38) != 0)) {
      lVar12 = *(long *)(lStack_28 + 0x20);
      UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
      if (lVar12 != 0) {
        UnityEngine_Transform__set_position(lVar12,0);
        *(undefined1 *)(lStack_28 + 0x30) = 0;
        AutoDestructShuriken__BLNLIDHOLOJ(lStack_28);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



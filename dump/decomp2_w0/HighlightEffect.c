// ==== public void FAKKPJLILLL(bool ALLBGCHDGNC) { }   @0xb4ec94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__FAKKPJLILLL(void *__this,bool ALLBGCHDGNC)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  if ((bRam0000000001917190 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Str_HighlightEnd);
    func_0x00a67900(&Str_HighlightStart);
    bRam0000000001917190 = 1;
  }
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Application__get_isPlaying(0);
  if ((uVar1 & 1) == 0) {
    *(bool *)((long)__this + 0x34) = ALLBGCHDGNC;
    return;
  }
  if (*(int *)((long)__this + 0xd4) == 0) {
    uVar6 = UnityEngine_Time__get_realtimeSinceStartup(0);
    *(undefined4 *)((long)__this + 0xd0) = uVar6;
  }
  if ((ALLBGCHDGNC) && (*(char *)((long)__this + 0x33) == '\0')) {
    if ((*(char *)((long)__this + 0x34) != '\0') && (*(int *)((long)__this + 0xd4) == 0)) {
      return;
    }
    lVar3 = *(long *)((long)__this + 0x90);
    if (lVar3 != 0) {
      uVar2 = UnityEngine_Component__get_gameObject(__this,0);
      uVar1 = (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(lVar3 + 0x40),uVar2,*(undefined8 *)(lVar3 + 0x28));
      if ((uVar1 & 1) == 0) {
        return;
      }
    }
    UnityEngine_Component__SendMessage(__this,_Str_HighlightStart,0,1,0);
    uVar6 = UnityEngine_Time__get_realtimeSinceStartup(0);
    *(undefined4 *)((long)__this + 0xc0) = uVar6;
    if (*(float *)((long)__this + 0x38) <= 0.0) {
      uVar6 = 0;
    }
    else {
      if (*(int *)((long)__this + 0xd4) == -1) {
        fVar8 = *(float *)((long)__this + 0x3c);
        fVar4 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
        fVar7 = *(float *)((long)__this + 0xd0);
        fVar5 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
        *(float *)((long)__this + 0xd0) = fVar5 - (fVar8 - (fVar4 - fVar7));
      }
      uVar6 = 1;
    }
    *(undefined4 *)((long)__this + 0xd4) = uVar6;
    *(undefined1 *)((long)__this + 0x34) = 1;
  }
  else {
    if (*(char *)((long)__this + 0x34) == '\0') {
      return;
    }
    if (0.0 < *(float *)((long)__this + 0x3c)) {
      if (*(int *)((long)__this + 0xd4) == 1) {
        fVar4 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
        fVar7 = *(float *)((long)__this + 0xd0);
        fVar5 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
        *(float *)((long)__this + 0xd0) =
             (fVar5 + (fVar4 - fVar7)) - *(float *)((long)__this + 0x38);
      }
      *(undefined4 *)((long)__this + 0xd4) = 0xffffffff;
      return;
    }
    lVar3 = *(long *)((long)__this + 0x98);
    *(undefined4 *)((long)__this + 0xd4) = 0;
    *(undefined1 *)((long)__this + 0x34) = 0;
    if (lVar3 != 0) {
      uVar2 = UnityEngine_Component__get_gameObject(__this,0);
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),uVar2,*(undefined8 *)(lVar3 + 0x28))
      ;
    }
    UnityEngine_Component__SendMessage(__this,_Str_HighlightEnd,0,1,0);
  }
  *(undefined1 *)((long)__this + 0x210) = 1;
  return;
}


// ==== private void CKAECDAMLEE(Camera EIKILFDFMFB, Vector3 IOPIECLKGBK, Vector3 PNHOAFDLNJF, int GOCHMNLCEPE, ref Matrix4x4 GGPKILKEBBM) { }   @0xb4f3f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__CKAECDAMLEE
               (void *__this,void *EIKILFDFMFB,float IOPIECLKGBK_x,float IOPIECLKGBK_y,
               float IOPIECLKGBK_z,float PNHOAFDLNJF_x,float PNHOAFDLNJF_y,float PNHOAFDLNJF_z,
               int GOCHMNLCEPE,void *GGPKILKEBBM)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  if (EIKILFDFMFB != (void *)0x0) {
    fVar7 = (float)GOCHMNLCEPE;
    fVar12 = IOPIECLKGBK_y - fVar7;
    fVar11 = PNHOAFDLNJF_y + fVar7;
    fVar5 = fVar12;
    fVar8 = IOPIECLKGBK_z;
    fVar2 = (float)UnityEngine_Camera__ScreenToWorldPoint(IOPIECLKGBK_x - fVar7,EIKILFDFMFB,0);
    fVar3 = (float)UnityEngine_Camera__ScreenToWorldPoint(PNHOAFDLNJF_x + fVar7,EIKILFDFMFB,0);
    fVar7 = (float)UnityEngine_Camera__ScreenToWorldPoint(PNHOAFDLNJF_x + fVar7,EIKILFDFMFB,0);
    if (cRam0000000001916a9f == '\0') {
      func_0x00a67900(&System_Math_TypeInfo);
      cRam0000000001916a9f = '\x01';
    }
    if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      if (cRam0000000001916a9f == '\0') {
        func_0x00a67900(&System_Math_TypeInfo);
        cRam0000000001916a9f = '\x01';
      }
    }
    if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar1 = UnityEngine_Component__get_transform(EIKILFDFMFB,0);
    __this = (void *)0x0;
    if (lVar1 != 0) {
      uVar9 = (ulong)(uint)((fVar8 - IOPIECLKGBK_z) * (fVar8 - IOPIECLKGBK_z));
      fVar7 = (fVar3 - fVar7) * (fVar3 - fVar7) + (fVar11 - fVar12) * (fVar11 - fVar12);
      uVar10 = (ulong)(uint)fVar7;
      uVar6 = (ulong)(uint)((PNHOAFDLNJF_z - IOPIECLKGBK_z) * (PNHOAFDLNJF_z - IOPIECLKGBK_z) +
                           fVar7);
      uVar4 = UnityEngine_Transform__get_rotation(lVar1,0);
      UnityEngine_Matrix4x4__TRS
                (&uStack_f0,(fVar2 + fVar3) * 0.5,(fVar5 + fVar11) * 0.5,
                 (fVar8 + PNHOAFDLNJF_z) * 0.5,uVar4,uVar6,uVar9,uVar10,0);
      *(undefined8 *)((long)GGPKILKEBBM + 0x28) = uStack_c8;
      *(undefined8 *)((long)GGPKILKEBBM + 0x20) = uStack_d0;
      *(undefined8 *)((long)GGPKILKEBBM + 0x38) = uStack_b8;
      *(undefined8 *)((long)GGPKILKEBBM + 0x30) = uStack_c0;
      *(undefined8 *)((long)GGPKILKEBBM + 8) = uStack_e8;
      *(undefined8 *)GGPKILKEBBM = uStack_f0;
      *(undefined8 *)((long)GGPKILKEBBM + 0x18) = uStack_d8;
      *(undefined8 *)((long)GGPKILKEBBM + 0x10) = uStack_e0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50(__this);
}


// ==== private void KBIGMFEDJKH(Camera EIKILFDFMFB) { }   @0xb4dea8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__KBIGMFEDJKH(void *__this,void *EIKILFDFMFB)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 in_d1;
  undefined8 uVar15;
  undefined8 in_d2;
  undefined8 uVar16;
  undefined8 in_d3;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  if ((bRam0000000001917185 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Graphics_TypeInfo);
    func_0x00a67900(&HighlightPlus_HighlightEffect_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__ZTest);
    func_0x00a67900(&Str__OverlayData);
    func_0x00a67900(&Str_HighlightEnd);
    func_0x00a67900(&Str__OutlineColor);
    func_0x00a67900(&Str__OutlineDirection);
    bRam0000000001917185 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Equality(EIKILFDFMFB,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(char *)((long)__this + 0x210) != '\0') {
      *(undefined1 *)((long)__this + 0x210) = 0;
      HighlightPlus_HighlightEffect__KGMPKNIGPBG(__this);
    }
    if (*(char *)((long)__this + 0x34) != '\0') {
      if (EIKILFDFMFB != (void *)0x0) {
        uVar2 = UnityEngine_Camera__get_cullingMask(EIKILFDFMFB,0);
        if ((*(char *)((long)__this + 0x31) == '\0') && (0 < *(int *)((long)__this + 0xb0))) {
          lVar6 = 0;
          uVar5 = 0;
          do {
            lVar9 = *(long *)((long)__this + 0xa8);
            if (lVar9 == 0) goto LAB_00c4ec8c;
            if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_00c4ec90;
            uVar11 = *(undefined8 *)(lVar9 + lVar6 + 0x70);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
            if ((uVar7 & 1) != 0) {
              lVar9 = *(long *)((long)__this + 0xa8);
              if (lVar9 == 0) goto LAB_00c4ec8c;
              if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_00c4ec90;
              lVar9 = *(long *)(lVar9 + lVar6 + 0x70);
              if (lVar9 == 0) goto LAB_00c4ec8c;
              bVar1 = UnityEngine_Renderer__get_isVisible(lVar9,0);
              lVar9 = *(long *)((long)__this + 0xa8);
              if (lVar9 == 0) goto LAB_00c4ec8c;
              if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_00c4ec90;
              if (*(byte *)(lVar9 + lVar6 + 0x58) != (bVar1 & 1)) {
                HighlightPlus_HighlightEffect__IKKIOPLABDD(__this);
                break;
              }
            }
            uVar5 = uVar5 + 1;
            lVar6 = lVar6 + 0xb0;
          } while ((long)uVar5 < (long)*(int *)((long)__this + 0xb0));
        }
        lVar6 = UnityEngine_Component__get_gameObject(__this,0);
        if (lVar6 != 0) {
          UnityEngine_GameObject__get_layer(lVar6,0);
          uVar11 = **(undefined8 **)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Equality(uVar11,0,0);
          if ((uVar5 & 1) != 0) {
            return;
          }
          if (0 < *(int *)((long)__this + 0xb0)) {
            uVar5 = 0;
            do {
              lVar6 = *(long *)((long)__this + 0xa8);
              if (lVar6 == 0) goto LAB_00c4ec8c;
              if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_00c4ec90;
              lVar6 = lVar6 + uVar5 * 0xb0;
              *(undefined1 *)(lVar6 + 0x20) = 0;
              lVar6 = *(long *)(lVar6 + 0x28);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(lVar6,0,0);
              if ((uVar7 & 1) == 0) {
                lVar9 = *(long *)((long)__this + 0xa8);
                if (lVar9 == 0) goto LAB_00c4ec8c;
                if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_00c4ec90;
                lVar9 = *(long *)(lVar9 + uVar5 * 0xb0 + 0x60);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Equality(lVar9,0,0);
                if ((uVar7 & 1) == 0) {
                  if ((lVar6 == 0) ||
                     (lVar8 = UnityEngine_Component__get_gameObject(lVar6,0), lVar8 == 0))
                  goto LAB_00c4ec8c;
                  uVar3 = UnityEngine_GameObject__get_layer(lVar8,0);
                  if ((uVar2 >> (ulong)(uVar3 & 0x1f) & 1) != 0) {
                    lVar8 = *(long *)((long)__this + 0xa8);
                    if (lVar8 == 0) goto LAB_00c4ec8c;
                    if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_00c4ec90;
                    lVar8 = *(long *)(lVar8 + uVar5 * 0xb0 + 0x70);
                    if (lVar8 == 0) goto LAB_00c4ec8c;
                    uVar7 = UnityEngine_Renderer__get_isVisible(lVar8,0);
                    if (((uVar7 & 1) != 0) &&
                       ((*(char *)((long)__this + 0x32) != '\0' ||
                        (iVar4 = UnityEngine_Camera__get_cameraType(EIKILFDFMFB,0), iVar4 != 0x10)))
                       ) {
                      lVar8 = *(long *)((long)__this + 0xa8);
                      if (lVar8 == 0) goto LAB_00c4ec8c;
                      if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_00c4ec90;
                      lVar8 = lVar8 + uVar5 * 0xb0;
                      *(undefined1 *)(lVar8 + 0x20) = 1;
                      if (*(char *)(lVar8 + 0x78) == '\0') {
                        UnityEngine_Transform__get_lossyScale(lVar6,0);
                        uVar11 = UnityEngine_Transform__get_position(lVar6,0);
                        lVar8 = *(long *)((long)__this + 0xa8);
                        if (lVar8 == 0) goto LAB_00c4ec8c;
                        if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_00c4ec90;
                        if (*(char *)(lVar8 + uVar5 * 0xb0 + 0x30) == '\0') {
                          uVar15 = in_d1;
                          uVar16 = in_d2;
                          uVar14 = UnityEngine_Transform__get_rotation(lVar6,0);
                          UnityEngine_Matrix4x4__TRS
                                    (&uStack_120,uVar11,in_d1,in_d2,uVar14,uVar15,uVar16,in_d3,0);
                          uStack_d8 = uStack_118;
                          uStack_e0 = uStack_120;
                          uStack_c8 = uStack_108;
                          uStack_d0 = uStack_110;
                          uStack_b8 = uStack_f8;
                          uStack_c0 = uStack_100;
                          uStack_a8 = uStack_e8;
                          uStack_b0 = uStack_f0;
                        }
                        else {
                          lVar8 = lVar8 + uVar5 * 0xb0;
                          fVar17 = *(float *)(lVar8 + 0x34);
                          fVar18 = *(float *)(lVar8 + 0x38);
                          fVar20 = *(float *)(lVar8 + 0x3c);
                          fVar12 = (float)UnityEngine_Transform__get_position(lVar6,0);
                          fVar17 = fVar17 - fVar12;
                          fVar18 = fVar18 - (float)in_d1;
                          fVar20 = fVar20 - (float)in_d2;
                          fVar12 = fVar20 * fVar20;
                          if (9.9999994e-11 <= fVar12 + fVar17 * fVar17 + fVar18 * fVar18) {
LAB_00c4e298:
                            HighlightPlus_HighlightEffect__LMBLEGHLDPO(__this,uVar5 & 0xffffffff,1);
                          }
                          else {
                            lVar8 = *(long *)((long)__this + 0xa8);
                            if (lVar8 == 0) goto LAB_00c4ec8c;
                            if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_00c4ec90;
                            lVar8 = lVar8 + uVar5 * 0xb0;
                            fVar18 = *(float *)(lVar8 + 0x40);
                            fVar19 = *(float *)(lVar8 + 0x44);
                            fVar21 = *(float *)(lVar8 + 0x48);
                            fVar17 = (float)UnityEngine_Transform__get_eulerAngles(lVar6,0);
                            fVar18 = fVar18 - fVar17;
                            fVar19 = fVar19 - fVar12;
                            fVar21 = fVar21 - fVar20;
                            fVar12 = fVar21 * fVar21;
                            if (9.9999994e-11 <= fVar12 + fVar18 * fVar18 + fVar19 * fVar19)
                            goto LAB_00c4e298;
                            lVar8 = *(long *)((long)__this + 0xa8);
                            if (lVar8 == 0) goto LAB_00c4ec8c;
                            if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_00c4ec90;
                            lVar8 = lVar8 + uVar5 * 0xb0;
                            fVar18 = *(float *)(lVar8 + 0x4c);
                            fVar20 = *(float *)(lVar8 + 0x50);
                            fVar19 = *(float *)(lVar8 + 0x54);
                            fVar17 = (float)UnityEngine_Transform__get_lossyScale(lVar6,0);
                            fVar18 = fVar18 - fVar17;
                            fVar20 = fVar20 - fVar12;
                            fVar19 = fVar19 - fVar21;
                            if (9.9999994e-11 <= fVar19 * fVar19 + fVar18 * fVar18 + fVar20 * fVar20
                               ) goto LAB_00c4e298;
                          }
                          lVar8 = *(long *)((long)__this + 0xa8);
                          if (lVar8 == 0) goto LAB_00c4ec8c;
                          if (cRam00000000019171b4 == '\0') {
                            func_0x00a67900(&UnityEngine_Matrix4x4_TypeInfo);
                            cRam00000000019171b4 = '\x01';
                          }
                          lVar6 = *(long *)(_UnityEngine_Matrix4x4_TypeInfo + 0xb8);
                          uStack_b8 = *(undefined8 *)(lVar6 + 0x68);
                          uStack_c0 = *(undefined8 *)(lVar6 + 0x60);
                          uStack_a8 = *(undefined8 *)(lVar6 + 0x78);
                          uStack_b0 = *(undefined8 *)(lVar6 + 0x70);
                          uStack_d8 = *(undefined8 *)(lVar6 + 0x48);
                          uStack_e0 = *(undefined8 *)(lVar6 + 0x40);
                          uStack_c8 = *(undefined8 *)(lVar6 + 0x58);
                          uStack_d0 = *(undefined8 *)(lVar6 + 0x50);
                        }
                        if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_00c4ec90;
                        lVar8 = lVar8 + uVar5 * 0xb0;
                        *(undefined8 *)(lVar8 + 0xb8) = uStack_b8;
                        *(undefined8 *)(lVar8 + 0xb0) = uStack_c0;
                        *(undefined8 *)(lVar8 + 200) = uStack_a8;
                        *(undefined8 *)(lVar8 + 0xc0) = uStack_b0;
                        *(undefined8 *)(lVar8 + 0x98) = uStack_d8;
                        *(undefined8 *)(lVar8 + 0x90) = uStack_e0;
                        *(undefined8 *)(lVar8 + 0xa8) = uStack_c8;
                        *(undefined8 *)(lVar8 + 0xa0) = uStack_d0;
                        if (lVar9 == 0) goto LAB_00c4ec8c;
                        in_d1 = uStack_b0;
                        in_d2 = uStack_e0;
                        in_d3 = uStack_d0;
                        iVar4 = UnityEngine_Mesh__get_subMeshCount(lVar9,0);
                        if (0 < iVar4) {
                          uVar3 = 0;
                          do {
                            lVar6 = *(long *)((long)__this + 0xa8);
                            if (lVar6 == 0) goto LAB_00c4ec8c;
                            if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_00c4ec90;
                            lVar6 = *(long *)(lVar6 + uVar5 * 0xb0 + 0x80);
                            if (lVar6 == 0) goto LAB_00c4ec8c;
                            if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_00c4ec90;
                            lVar6 = *(long *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
                            if (lVar6 == 0) goto LAB_00c4ec8c;
                            UnityEngine_Material__SetInt(lVar6,_Str__ZTest,4,0);
                            lVar6 = *(long *)((long)__this + 0xa8);
                            if (lVar6 == 0) goto LAB_00c4ec8c;
                            if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_00c4ec90;
                            lVar6 = *(long *)(lVar6 + uVar5 * 0xb0 + 0x80);
                            if (lVar6 == 0) goto LAB_00c4ec8c;
                            if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_00c4ec90;
                            lVar6 = *(long *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
                            if (lVar6 == 0) goto LAB_00c4ec8c;
                            UnityEngine_Material__SetPass(lVar6,0,0);
                            lVar6 = *(long *)((long)__this + 0xa8);
                            if (lVar6 == 0) goto LAB_00c4ec8c;
                            if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_00c4ec90;
                            lVar6 = lVar6 + uVar5 * 0xb0;
                            uStack_b8 = *(undefined8 *)(lVar6 + 0xb8);
                            uStack_c0 = *(undefined8 *)(lVar6 + 0xb0);
                            uStack_a8 = *(undefined8 *)(lVar6 + 200);
                            uStack_b0 = *(undefined8 *)(lVar6 + 0xc0);
                            uStack_d8 = *(undefined8 *)(lVar6 + 0x98);
                            uStack_e0 = *(undefined8 *)(lVar6 + 0x90);
                            uStack_c8 = *(undefined8 *)(lVar6 + 0xa8);
                            uStack_d0 = *(undefined8 *)(lVar6 + 0xa0);
                            if (*(int *)(_UnityEngine_Graphics_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                            }
                            uStack_158 = uStack_d8;
                            uStack_160 = uStack_e0;
                            uStack_148 = uStack_c8;
                            uStack_150 = uStack_d0;
                            uStack_138 = uStack_b8;
                            uStack_140 = uStack_c0;
                            uStack_128 = uStack_a8;
                            uStack_130 = uStack_b0;
                            in_d1 = uStack_d0;
                            in_d2 = uStack_c0;
                            in_d3 = uStack_b0;
                            UnityEngine_Graphics__DrawMeshNow(lVar9,&uStack_160,uVar3,0);
                            uVar3 = uVar3 + 1;
                            iVar4 = UnityEngine_Mesh__get_subMeshCount(lVar9,0);
                          } while ((int)uVar3 < iVar4);
                        }
                      }
                    }
                  }
                }
              }
              uVar5 = uVar5 + 1;
            } while ((long)uVar5 < (long)*(int *)((long)__this + 0xb0));
          }
          fVar12 = 1.0;
          if (*(int *)((long)__this + 0xd4) != 0) {
            if (*(int *)((long)__this + 0xd4) == 1) {
              fVar12 = 1.0;
              if (0.0 < *(float *)((long)__this + 0x38)) {
                fVar17 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
                fVar17 = fVar17 - *(float *)((long)__this + 0xd0);
                fVar12 = fVar17 / *(float *)((long)__this + 0x38);
                if (1.0 < fVar12) {
                  fVar12 = 1.0;
                }
                if (1.3 < fVar17) {
                  uVar13 = UnityEngine_Time__get_realtimeSinceStartup(0);
                  *(undefined4 *)((long)__this + 0xd0) = uVar13;
                  *(undefined4 *)((long)__this + 0xd4) = 0xffffffff;
                }
              }
            }
            else if (0.0 < *(float *)((long)__this + 0x3c)) {
              fVar12 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
              fVar12 = 1.0 - (fVar12 - *(float *)((long)__this + 0xd0)) /
                             *(float *)((long)__this + 0x3c);
              if (fVar12 < 0.0) {
                *(undefined4 *)((long)__this + 0xd4) = 0;
                UnityEngine_Behaviour__set_enabled(__this,0,0);
                lVar6 = *(long *)((long)__this + 0x98);
                *(undefined1 *)((long)__this + 0x34) = 0;
                if (lVar6 != 0) {
                  uVar11 = UnityEngine_Component__get_gameObject(__this,0);
                  (**(code **)(lVar6 + 0x18))
                            (*(undefined8 *)(lVar6 + 0x40),uVar11,*(undefined8 *)(lVar6 + 0x28));
                }
                UnityEngine_Component__SendMessage(__this,_Str_HighlightEnd,0,1,0);
                fVar12 = 0.0;
              }
            }
          }
          iVar4 = *(int *)((long)__this + 0xb0);
          if (iVar4 < 1) {
            return;
          }
          uVar5 = 0;
          while (lVar6 = *(long *)((long)__this + 0xa8), lVar6 != 0) {
            if (*(uint *)(lVar6 + 0x18) <= uVar5) {
LAB_00c4ec90:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            if ((*(char *)(lVar6 + uVar5 * 0xb0 + 0x20) != '\0') &&
               (*(char *)((long)__this + 0x34) != '\0')) {
              lVar6 = *(long *)(lVar6 + uVar5 * 0xb0 + 0x60);
              if (lVar6 == 0) break;
              iVar4 = UnityEngine_Mesh__get_subMeshCount(lVar6,0);
              if (0 < iVar4) {
                uVar7 = 0;
                do {
                  if ((0.0 < *(float *)((long)__this + 100)) && (*(int *)((long)__this + 0x7c) != 2)
                     ) {
                    if (*(long *)((long)__this + 200) == 0) goto LAB_00c4ec8c;
                    UnityEngine_Material__SetColor
                              (*(undefined4 *)((long)__this + 0x68),
                               *(undefined4 *)((long)__this + 0x6c),
                               *(undefined4 *)((long)__this + 0x70),
                               fVar12 * *(float *)((long)__this + 100),*(long *)((long)__this + 200)
                               ,_Str__OutlineColor,0);
                    if (*(int *)((long)__this + 0x7c) == 1) {
                      lVar9 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) +
                                       0x10);
                      if (lVar9 == 0) goto LAB_00c4ec8c;
                      lVar8 = 0;
                      uVar10 = 0;
                      while ((long)uVar10 < (long)(int)*(uint *)(lVar9 + 0x18)) {
                        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_00c4ec90;
                        lVar9 = lVar9 + lVar8;
                        fVar20 = *(float *)(lVar9 + 0x20);
                        fVar19 = *(float *)(lVar9 + 0x24);
                        fVar21 = *(float *)(lVar9 + 0x28);
                        fVar18 = *(float *)((long)__this + 0x78);
                        fVar17 = (float)UnityEngine_Camera__get_aspect(EIKILFDFMFB,0);
                        if (*(long *)((long)__this + 200) == 0) goto LAB_00c4ec8c;
                        fVar18 = fVar18 / 100.0;
                        UnityEngine_Material__SetVector
                                  (fVar20 * fVar18,fVar17 * fVar19 * fVar18,fVar21 * fVar18,0,
                                   *(long *)((long)__this + 200),_Str__OutlineDirection,0);
                        lVar9 = *(long *)((long)__this + 0xa8);
                        if (lVar9 == 0) goto LAB_00c4ec8c;
                        if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_00c4ec90;
                        if (*(char *)(lVar9 + uVar5 * 0xb0 + 0x78) == '\0') {
                          if (*(long *)((long)__this + 200) == 0) goto LAB_00c4ec8c;
                          UnityEngine_Material__SetPass(*(long *)((long)__this + 200),0,0);
                          lVar9 = *(long *)((long)__this + 0xa8);
                          if (lVar9 == 0) goto LAB_00c4ec8c;
                          if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_00c4ec90;
                          lVar9 = lVar9 + uVar5 * 0xb0;
                          uStack_b8 = *(undefined8 *)(lVar9 + 0xb8);
                          uStack_c0 = *(undefined8 *)(lVar9 + 0xb0);
                          uStack_a8 = *(undefined8 *)(lVar9 + 200);
                          uStack_b0 = *(undefined8 *)(lVar9 + 0xc0);
                          uStack_d8 = *(undefined8 *)(lVar9 + 0x98);
                          uStack_e0 = *(undefined8 *)(lVar9 + 0x90);
                          uStack_c8 = *(undefined8 *)(lVar9 + 0xa8);
                          uStack_d0 = *(undefined8 *)(lVar9 + 0xa0);
                          if (*(int *)(_UnityEngine_Graphics_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uStack_198 = uStack_d8;
                          uStack_1a0 = uStack_e0;
                          uStack_188 = uStack_c8;
                          uStack_190 = uStack_d0;
                          uStack_178 = uStack_b8;
                          uStack_180 = uStack_c0;
                          uStack_168 = uStack_a8;
                          uStack_170 = uStack_b0;
                          UnityEngine_Graphics__DrawMeshNow(lVar6,&uStack_1a0,uVar7 & 0xffffffff,0);
                        }
                        else {
                          if (*(long *)((long)__this + 0xf0) == 0) goto LAB_00c4ec8c;
                          UnityEngine_Rendering_CommandBuffer__Clear
                                    (*(long *)((long)__this + 0xf0),0);
                          lVar9 = *(long *)((long)__this + 0xa8);
                          if (lVar9 == 0) goto LAB_00c4ec8c;
                          if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_00c4ec90;
                          if (*(long *)((long)__this + 0xf0) == 0) goto LAB_00c4ec8c;
                          UnityEngine_Rendering_CommandBuffer__DrawRenderer
                                    (*(long *)((long)__this + 0xf0),
                                     *(undefined8 *)(lVar9 + uVar5 * 0xb0 + 0x70),
                                     *(undefined8 *)((long)__this + 200),uVar7 & 0xffffffff,0);
                          uVar11 = *(undefined8 *)((long)__this + 0xf0);
                          if (*(int *)(_UnityEngine_Graphics_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          UnityEngine_Graphics__ExecuteCommandBuffer(uVar11,0);
                        }
                        uVar10 = uVar10 + 1;
                        lVar8 = lVar8 + 0xc;
                        lVar9 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8)
                                         + 0x10);
                        if (lVar9 == 0) goto LAB_00c4ec8c;
                      }
                    }
                    else {
                      lVar9 = *(long *)((long)__this + 0xa8);
                      if (lVar9 == 0) goto LAB_00c4ec8c;
                      if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_00c4ec90;
                      if (*(char *)(lVar9 + uVar5 * 0xb0 + 0x78) == '\0') {
                        if (*(long *)((long)__this + 200) == 0) goto LAB_00c4ec8c;
                        UnityEngine_Material__SetPass(*(long *)((long)__this + 200),0,0);
                        lVar9 = *(long *)((long)__this + 0xa8);
                        if (lVar9 == 0) goto LAB_00c4ec8c;
                        if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_00c4ec90;
                        lVar9 = lVar9 + uVar5 * 0xb0;
                        uStack_b8 = *(undefined8 *)(lVar9 + 0xb8);
                        uStack_c0 = *(undefined8 *)(lVar9 + 0xb0);
                        uStack_a8 = *(undefined8 *)(lVar9 + 200);
                        uStack_b0 = *(undefined8 *)(lVar9 + 0xc0);
                        uStack_d8 = *(undefined8 *)(lVar9 + 0x98);
                        uStack_e0 = *(undefined8 *)(lVar9 + 0x90);
                        uStack_c8 = *(undefined8 *)(lVar9 + 0xa8);
                        uStack_d0 = *(undefined8 *)(lVar9 + 0xa0);
                        if (*(int *)(_UnityEngine_Graphics_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        uStack_1d8 = uStack_d8;
                        uStack_1e0 = uStack_e0;
                        uStack_1c8 = uStack_c8;
                        uStack_1d0 = uStack_d0;
                        uStack_1b8 = uStack_b8;
                        uStack_1c0 = uStack_c0;
                        uStack_1a8 = uStack_a8;
                        uStack_1b0 = uStack_b0;
                        UnityEngine_Graphics__DrawMeshNow(lVar6,&uStack_1e0,uVar7 & 0xffffffff,0);
                      }
                      else {
                        if (*(long *)((long)__this + 0xf0) == 0) goto LAB_00c4ec8c;
                        UnityEngine_Rendering_CommandBuffer__Clear(*(long *)((long)__this + 0xf0),0)
                        ;
                        lVar9 = *(long *)((long)__this + 0xa8);
                        if (lVar9 == 0) goto LAB_00c4ec8c;
                        if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_00c4ec90;
                        if (*(long *)((long)__this + 0xf0) == 0) goto LAB_00c4ec8c;
                        UnityEngine_Rendering_CommandBuffer__DrawRenderer
                                  (*(long *)((long)__this + 0xf0),
                                   *(undefined8 *)(lVar9 + uVar5 * 0xb0 + 0x70),
                                   *(undefined8 *)((long)__this + 200),uVar7 & 0xffffffff,0);
                        uVar11 = *(undefined8 *)((long)__this + 0xf0);
                        if (*(int *)(_UnityEngine_Graphics_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        UnityEngine_Graphics__ExecuteCommandBuffer(uVar11,0);
                      }
                    }
                  }
                  if (0.0 < *(float *)((long)__this + 0x44)) {
                    lVar9 = *(long *)((long)__this + 0xa8);
                    if (lVar9 == 0) goto LAB_00c4ec8c;
                    if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_00c4ec90;
                    lVar9 = *(long *)(lVar9 + uVar5 * 0xb0 + 0x88);
                    if (lVar9 == 0) goto LAB_00c4ec8c;
                    if ((long)uVar7 < (long)(int)*(uint *)(lVar9 + 0x18)) {
                      if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_00c4ec90;
                      uVar11 = *(undefined8 *)(lVar9 + uVar7 * 8 + 0x20);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar10 = UnityEngine_Object__op_Inequality(uVar11,0,0);
                      if ((uVar10 & 1) != 0) {
                        lVar9 = *(long *)((long)__this + 0xa8);
                        if (lVar9 == 0) goto LAB_00c4ec8c;
                        if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_00c4ec90;
                        lVar9 = *(long *)(lVar9 + uVar5 * 0xb0 + 0x88);
                        if (lVar9 == 0) goto LAB_00c4ec8c;
                        if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_00c4ec90;
                        lVar9 = *(long *)(lVar9 + uVar7 * 8 + 0x20);
                        if (lVar9 == 0) goto LAB_00c4ec8c;
                        UnityEngine_Material__set_color
                                  (*(undefined4 *)((long)__this + 0x48),
                                   *(undefined4 *)((long)__this + 0x4c),
                                   *(undefined4 *)((long)__this + 0x50),
                                   fVar12 * *(float *)((long)__this + 0x44),lVar9,0);
                        lVar9 = *(long *)((long)__this + 0xa8);
                        if (lVar9 == 0) goto LAB_00c4ec8c;
                        if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_00c4ec90;
                        lVar9 = *(long *)(lVar9 + uVar5 * 0xb0 + 0x88);
                        if (lVar9 == 0) goto LAB_00c4ec8c;
                        if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_00c4ec90;
                        lVar9 = *(long *)(lVar9 + uVar7 * 8 + 0x20);
                        if (lVar9 == 0) goto LAB_00c4ec8c;
                        UnityEngine_Material__SetVector
                                  (*(undefined4 *)((long)__this + 0x58),
                                   *(undefined4 *)((long)__this + 0x5c),
                                   *(undefined4 *)((long)__this + 0x60),0,lVar9,_Str__OverlayData,0)
                        ;
                        lVar9 = *(long *)((long)__this + 0xa8);
                        if (lVar9 == 0) goto LAB_00c4ec8c;
                        if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_00c4ec90;
                        if (*(char *)(lVar9 + uVar5 * 0xb0 + 0x78) == '\0') {
                          lVar9 = *(long *)(lVar9 + uVar5 * 0xb0 + 0x88);
                          if (lVar9 == 0) goto LAB_00c4ec8c;
                          if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_00c4ec90;
                          lVar9 = *(long *)(lVar9 + uVar7 * 8 + 0x20);
                          if (lVar9 == 0) goto LAB_00c4ec8c;
                          UnityEngine_Material__SetPass(lVar9,0,0);
                          lVar9 = *(long *)((long)__this + 0xa8);
                          if (lVar9 == 0) goto LAB_00c4ec8c;
                          if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_00c4ec90;
                          lVar9 = lVar9 + uVar5 * 0xb0;
                          uStack_b8 = *(undefined8 *)(lVar9 + 0xb8);
                          uStack_c0 = *(undefined8 *)(lVar9 + 0xb0);
                          uStack_a8 = *(undefined8 *)(lVar9 + 200);
                          uStack_b0 = *(undefined8 *)(lVar9 + 0xc0);
                          uStack_d8 = *(undefined8 *)(lVar9 + 0x98);
                          uStack_e0 = *(undefined8 *)(lVar9 + 0x90);
                          uStack_c8 = *(undefined8 *)(lVar9 + 0xa8);
                          uStack_d0 = *(undefined8 *)(lVar9 + 0xa0);
                          if (*(int *)(_UnityEngine_Graphics_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uStack_218 = uStack_d8;
                          uStack_220 = uStack_e0;
                          uStack_208 = uStack_c8;
                          uStack_210 = uStack_d0;
                          uStack_1f8 = uStack_b8;
                          uStack_200 = uStack_c0;
                          uStack_1e8 = uStack_a8;
                          uStack_1f0 = uStack_b0;
                          UnityEngine_Graphics__DrawMeshNow(lVar6,&uStack_220,uVar7 & 0xffffffff,0);
                        }
                        else {
                          if (*(long *)((long)__this + 0xf8) == 0) goto LAB_00c4ec8c;
                          UnityEngine_Rendering_CommandBuffer__Clear
                                    (*(long *)((long)__this + 0xf8),0);
                          lVar9 = *(long *)((long)__this + 0xa8);
                          if (lVar9 == 0) goto LAB_00c4ec8c;
                          if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_00c4ec90;
                          lVar9 = lVar9 + uVar5 * 0xb0;
                          lVar8 = *(long *)(lVar9 + 0x88);
                          if (lVar8 == 0) goto LAB_00c4ec8c;
                          if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_00c4ec90;
                          if (*(long *)((long)__this + 0xf8) == 0) goto LAB_00c4ec8c;
                          UnityEngine_Rendering_CommandBuffer__DrawRenderer
                                    (*(long *)((long)__this + 0xf8),*(undefined8 *)(lVar9 + 0x70),
                                     *(undefined8 *)(lVar8 + uVar7 * 8 + 0x20),uVar7 & 0xffffffff,0)
                          ;
                          uVar11 = *(undefined8 *)((long)__this + 0xf8);
                          if (*(int *)(_UnityEngine_Graphics_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          UnityEngine_Graphics__ExecuteCommandBuffer(uVar11,0);
                        }
                      }
                    }
                  }
                  uVar7 = uVar7 + 1;
                  iVar4 = UnityEngine_Mesh__get_subMeshCount(lVar6,0);
                } while ((long)uVar7 < (long)iVar4);
              }
              iVar4 = *(int *)((long)__this + 0xb0);
            }
            uVar5 = uVar5 + 1;
            if ((long)iVar4 <= (long)uVar5) {
              return;
            }
          }
        }
      }
LAB_00c4ec8c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
}


// ==== public void POFNNJJNFFN(LPHEHJBLEPI ALLBGCHDGNC) { }   @0xb5195c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__POFNNJJNFFN(void *__this,void *ALLBGCHDGNC)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000001917188 & 1) == 0) {
    func_0x00a67900(&LPHEHJBLEPI_TypeInfo);
    bRam0000000001917188 = 1;
  }
  lVar5 = *(long *)((long)__this + 0x90);
  while ((plVar2 = (long *)System_Delegate__Remove(lVar5,ALLBGCHDGNC,0), plVar2 == (long *)0x0 ||
         (*plVar2 == _LPHEHJBLEPI_TypeInfo))) {
    lVar3 = func_0x00a90840((long *)((long)__this + 0x90),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00a67eec(plVar2);
  if ((bRam000000000191718a & 1) == 0) {
    func_0x00a67900(&AKDPAMOBCFP_TypeInfo);
    bRam000000000191718a = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xa0);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)System_Delegate__Remove(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == _AKDPAMOBCFP_TypeInfo))) {
    lVar3 = func_0x00a90840(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00a67eec(plVar4);
  if ((bRam000000000191718b & 1) == 0) {
    func_0x00a67900(&LPHEHJBLEPI_TypeInfo);
    bRam000000000191718b = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x90);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)System_Delegate__Combine(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == _LPHEHJBLEPI_TypeInfo))) {
    lVar3 = func_0x00a90840(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  func_0x00a67eec(plVar4);
  return;
}


// ==== public bool EIMIKELIDBO() { }   @0xb51b30

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool HighlightPlus_HighlightEffect__EIMIKELIDBO(void *__this)

{
  return (bool)*(undefined1 *)((long)__this + 0x34);
}


// ==== private void DEPLEABAEPJ(ref Material JFDOIOKFPGG, string BDNPGCFGOLG) { }   @0xb50348

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__DEPLEABAEPJ(void *__this,void *JFDOIOKFPGG,void *BDNPGCFGOLG)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((bRam000000000191718f & 1) == 0) {
    func_0x00a67900(&UnityEngine_Debug_TypeInfo);
    func_0x00a67900(&UnityEngine_Material_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__not_found_);
    func_0x00a67900(&Str_Shader_);
    bRam000000000191718f = 1;
  }
  uVar3 = *(undefined8 *)JFDOIOKFPGG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = UnityEngine_Shader__Find(BDNPGCFGOLG,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      uVar3 = System_String__Concat(_Str_Shader_,BDNPGCFGOLG,_Str__not_found_,0);
      if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError(uVar3,0);
      if (pcRam000000000191c328 == (code *)0x0) {
        pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
      }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c328)(__this,0);
      return;
    }
    uVar2 = func_0x00a67b44(_UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(uVar2,uVar3,0);
    *(undefined8 *)JFDOIOKFPGG = uVar2;
  }
  return;
}



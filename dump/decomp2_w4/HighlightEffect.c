// ==== private void OMJKNLLLGFP(ScriptableRenderContext DNLCHODDKHP, Camera EIKILFDFMFB) { }   @0xb4de10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__OMJKNLLLGFP(void *__this,void *DNLCHODDKHP,void *EIKILFDFMFB)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  void *extraout_x1;
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
  
  if ((bRam000000000191717e & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191717e = 1;
    DNLCHODDKHP = extraout_x1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo,DNLCHODDKHP);
  }
  uVar5 = UnityEngine_Object__op_Equality(__this,0,0);
  if (((uVar5 & 1) != 0) ||
     (uVar5 = UnityEngine_Behaviour__get_isActiveAndEnabled(__this,0), (uVar5 & 1) == 0)) {
    return;
  }
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


// ==== private void DHNEPGKAOEB() { }   @0xb4f9d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__DHNEPGKAOEB(void *__this)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001917181 & 1) == 0) {
    func_0x00a67900(&HighlightPlus_HighlightEffect_TypeInfo);
    func_0x00a67900(&Str_HighlightPlus_Geometry_Outline);
    func_0x00a67900(&Str_HighlightPlus_Geometry_Mask);
    func_0x00a67900(&Str_HighlightPlus_Geometry_Overlay);
    bRam0000000001917181 = 1;
  }
  HighlightPlus_HighlightEffect__DEPLEABAEPJ
            (__this,*(undefined8 *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8),
             _Str_HighlightPlus_Geometry_Mask);
  HighlightPlus_HighlightEffect__DEPLEABAEPJ
            (__this,(long)__this + 200,_Str_HighlightPlus_Geometry_Outline);
  uVar3 = _Str_HighlightPlus_Geometry_Overlay;
  puVar1 = (undefined8 *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 8);
  if ((bRam000000000191718f & 1) == 0) {
    func_0x00a67900(&UnityEngine_Debug_TypeInfo);
    func_0x00a67900(&UnityEngine_Material_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__not_found_);
    func_0x00a67900(&Str_Shader_);
    bRam000000000191718f = 1;
  }
  uVar4 = *puVar1;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    uVar4 = UnityEngine_Shader__Find(uVar3,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar2 = UnityEngine_Object__op_Equality(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      uVar3 = System_String__Concat(_Str_Shader_,uVar3,_Str__not_found_,0);
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
    uVar3 = func_0x00a67b44(_UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(uVar3,uVar4,0);
    *puVar1 = uVar3;
  }
  return;
}


// ==== private int GEMAKGCGACE(IFEMCDPNHFB OBNIBOKFMLM) { }   @0xb51740

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int HighlightPlus_HighlightEffect__GEMAKGCGACE(void *__this,int OBNIBOKFMLM)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 4;
  if (OBNIBOKFMLM == 2) {
    iVar2 = 5;
  }
  iVar1 = 8;
  if (OBNIBOKFMLM != 1) {
    iVar1 = iVar2;
  }
  return iVar1;
}


// ==== public void EKMNKKLHHHM(NPKMMHOGALO ALLBGCHDGNC) { }   @0xb518c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__EKMNKKLHHHM(void *__this,void *ALLBGCHDGNC)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000001917187 & 1) == 0) {
    func_0x00a67900(&NPKMMHOGALO_TypeInfo);
    bRam0000000001917187 = 1;
  }
  lVar5 = *(long *)((long)__this + 0x98);
  while ((plVar2 = (long *)System_Delegate__Combine(lVar5,ALLBGCHDGNC,0), plVar2 == (long *)0x0 ||
         (*plVar2 == _NPKMMHOGALO_TypeInfo))) {
    lVar3 = func_0x00a90840((long *)((long)__this + 0x98),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00a67eec(plVar2);
  if ((bRam0000000001917188 & 1) == 0) {
    func_0x00a67900(&LPHEHJBLEPI_TypeInfo);
    bRam0000000001917188 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x90);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)System_Delegate__Remove(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == _LPHEHJBLEPI_TypeInfo))) {
    lVar3 = func_0x00a90840(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00a67eec(plVar4);
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


// ==== private Renderer[] MBLILGODLLD(LayerMask CFBIMLFGMND) { }   @0xb505e8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * HighlightPlus_HighlightEffect__MBLILGODLLD(void *__this,void *CFBIMLFGMND)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined8 unaff_x30;
  
  if ((bRam000000000191718c & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_Renderer__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Renderer__Clear__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Renderer__ToArray__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Renderer___ctor__);
    func_0x00a67900(&System_Collections_Generic_List_Renderer__TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_FindObjectsOfType_Renderer___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191718c = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = UnityEngine_Object__FindObjectsOfType_object_
                    (_Method_UnityEngine_Object_FindObjectsOfType_Renderer___);
  lVar9 = _Method_System_Collections_Generic_List_Renderer__Clear__;
  lVar8 = *(long *)((long)__this + 0x218);
  if (lVar8 == 0) {
    uVar6 = func_0x00a67b44(_System_Collections_Generic_List_Renderer__TypeInfo);
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
              (uVar6,_Method_System_Collections_Generic_List_Renderer___ctor__);
    *(undefined8 *)((long)__this + 0x218) = uVar6;
  }
  else {
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    uVar5 = func_0x00a68544(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0xc0));
    if ((uVar5 & 1) == 0) {
      *(undefined4 *)(lVar8 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar8 + 0x18);
      *(undefined4 *)(lVar8 + 0x18) = 0;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
      }
    }
  }
  if (lVar4 != 0) {
    uVar2 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar2) {
      uVar10 = 0;
      do {
        if (uVar2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar9 = *(long *)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
        if ((lVar9 == 0) || (lVar8 = UnityEngine_Component__get_gameObject(lVar9,0), lVar8 == 0))
        goto LAB_00c507d4;
        uVar2 = UnityEngine_GameObject__get_layer(lVar8,0);
        uVar3 = UnityEngine_LayerMask__op_Implicit((ulong)CFBIMLFGMND & 0xffffffff,0);
        if ((uVar3 >> (ulong)(uVar2 & 0x1f) & 1) != 0) {
          if (*(long *)((long)__this + 0x218) == 0) goto LAB_00c507d4;
          func_0x00b7fe44(*(long *)((long)__this + 0x218),lVar9,
                          _Method_System_Collections_Generic_List_Renderer__Add__);
        }
        uVar2 = *(uint *)(lVar4 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar2);
    }
    lVar9 = _Method_System_Collections_Generic_List_Renderer__ToArray__;
    lVar4 = *(long *)((long)__this + 0x218);
    if (lVar4 != 0) {
      iVar1 = *(int *)(lVar4 + 0x18);
      lVar8 = *(long *)(*(long *)(_Method_System_Collections_Generic_List_Renderer__ToArray__ + 0x20
                                 ) + 0xc0);
      if (iVar1 == 0) {
        lVar4 = *(long *)(lVar8 + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = func_0x00a9e3d0();
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar9 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x10);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = func_0x00a9e3d0();
        }
        pvVar7 = (void *)**(undefined8 **)(lVar9 + 0xb8);
      }
      else {
        lVar9 = *(long *)(lVar8 + 0x18);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = func_0x00a9e3d0();
        }
        pvVar7 = (void *)func_0x00a679a0(lVar9,iVar1);
        System_Array__Copy(*(undefined8 *)(lVar4 + 0x10),0,pvVar7,0,*(undefined4 *)(lVar4 + 0x18),0,
                           in_x6,in_x7,unaff_x30,unaff_x21,unaff_x20,unaff_x19);
      }
      return pvVar7;
    }
  }
LAB_00c507d4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private Renderer[] OOAODFPDJAL(LayerMask CFBIMLFGMND) { }   @0xb507dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * HighlightPlus_HighlightEffect__OOAODFPDJAL(void *__this,void *CFBIMLFGMND)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined8 unaff_x30;
  
  if ((bRam000000000191718e & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponentsInChildren_Renderer___);
    func_0x00a67900(&Method_System_Collections_Generic_List_Renderer__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Renderer__Clear__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Renderer__ToArray__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Renderer___ctor__);
    func_0x00a67900(&System_Collections_Generic_List_Renderer__TypeInfo);
    bRam000000000191718e = 1;
  }
  if (*(long *)((long)__this + 0xb8) != 0) {
    lVar4 = UnityEngine_Component__GetComponentsInChildren___Il2CppFullySharedGenericType_
                      (*(long *)((long)__this + 0xb8),
                       _Method_UnityEngine_Component_GetComponentsInChildren_Renderer___);
    lVar9 = _Method_System_Collections_Generic_List_Renderer__Clear__;
    lVar8 = *(long *)((long)__this + 0x218);
    if (lVar8 == 0) {
      uVar6 = func_0x00a67b44(_System_Collections_Generic_List_Renderer__TypeInfo);
      System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
                (uVar6,_Method_System_Collections_Generic_List_Renderer___ctor__);
      *(undefined8 *)((long)__this + 0x218) = uVar6;
    }
    else {
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      uVar5 = func_0x00a68544(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0xc0));
      if ((uVar5 & 1) == 0) {
        *(undefined4 *)(lVar8 + 0x18) = 0;
      }
      else {
        iVar1 = *(int *)(lVar8 + 0x18);
        *(undefined4 *)(lVar8 + 0x18) = 0;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
        }
      }
    }
    if (lVar4 != 0) {
      uVar2 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar2) {
        uVar10 = 0;
        do {
          if (uVar2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar9 = *(long *)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
          if ((lVar9 == 0) || (lVar8 = UnityEngine_Component__get_gameObject(lVar9,0), lVar8 == 0))
          goto LAB_00c509ac;
          uVar2 = UnityEngine_GameObject__get_layer(lVar8,0);
          uVar3 = UnityEngine_LayerMask__op_Implicit((ulong)CFBIMLFGMND & 0xffffffff,0);
          if ((uVar3 >> (ulong)(uVar2 & 0x1f) & 1) != 0) {
            if (*(long *)((long)__this + 0x218) == 0) goto LAB_00c509ac;
            func_0x00b7fe44(*(long *)((long)__this + 0x218),lVar9,
                            _Method_System_Collections_Generic_List_Renderer__Add__);
          }
          uVar2 = *(uint *)(lVar4 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar2);
      }
      lVar9 = _Method_System_Collections_Generic_List_Renderer__ToArray__;
      lVar4 = *(long *)((long)__this + 0x218);
      if (lVar4 != 0) {
        iVar1 = *(int *)(lVar4 + 0x18);
        lVar8 = *(long *)(*(long *)(_Method_System_Collections_Generic_List_Renderer__ToArray__ +
                                   0x20) + 0xc0);
        if (iVar1 == 0) {
          lVar4 = *(long *)(lVar8 + 0x10);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = func_0x00a9e3d0();
          }
          if (*(int *)(lVar4 + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar9 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x10);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = func_0x00a9e3d0();
          }
          pvVar7 = (void *)**(undefined8 **)(lVar9 + 0xb8);
        }
        else {
          lVar9 = *(long *)(lVar8 + 0x18);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = func_0x00a9e3d0();
          }
          pvVar7 = (void *)func_0x00a679a0(lVar9,iVar1);
          System_Array__Copy(*(undefined8 *)(lVar4 + 0x10),0,pvVar7,0,*(undefined4 *)(lVar4 + 0x18),
                             0,in_x6,in_x7,unaff_x30,unaff_x21,unaff_x20,unaff_x19);
        }
        return pvVar7;
      }
    }
  }
LAB_00c509ac:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



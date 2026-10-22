// ==== private void IPOKCNBINMN() { }   @0xb4d748

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__IPOKCNBINMN(void *__this)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  
  if ((bRam000000000191717c & 1) == 0) {
    func_0x00a67900(&HighlightPlus_HighlightEffect_TypeInfo);
    func_0x00a67900(&int___TypeInfo);
    func_0x00a67900(&UnityEngine_Mesh_TypeInfo);
    func_0x00a67900(&
                    Field__PrivateImplementationDetails__4F3A974D03B4939FC26A965844D8E5F89E151FF80F5
                   );
    func_0x00a67900(&UnityEngine_Vector2___TypeInfo);
    func_0x00a67900(&UnityEngine_Vector3___TypeInfo);
    bRam000000000191717c = 1;
  }
  uVar2 = func_0x00a67b44(_UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(uVar2,0);
  *(undefined8 *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x18) = uVar2;
  lVar3 = func_0x00a679a0(_UnityEngine_Vector3___TypeInfo,4);
  if (lVar3 == 0) goto LAB_00c4da0c;
  uVar1 = *(uint *)(lVar3 + 0x18);
  if (uVar1 != 0) {
    *(undefined8 *)(lVar3 + 0x20) = 0xbf000000bf000000;
    *(undefined4 *)(lVar3 + 0x28) = 0;
    if (uVar1 != 1) {
      *(undefined4 *)(lVar3 + 0x34) = 0;
      *(undefined8 *)(lVar3 + 0x2c) = 0x3f000000bf000000;
      if (2 < uVar1) {
        *(undefined4 *)(lVar3 + 0x40) = 0;
        *(undefined8 *)(lVar3 + 0x38) = 0xbf0000003f000000;
        if (uVar1 != 3) {
          *(undefined8 *)(lVar3 + 0x44) = 0x3f0000003f000000;
          *(undefined4 *)(lVar3 + 0x4c) = 0;
          lVar4 = func_0x00a679a0(_UnityEngine_Vector2___TypeInfo);
          if (lVar4 == 0) {
LAB_00c4da0c:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          uVar1 = *(uint *)(lVar4 + 0x18);
          if ((uVar1 != 0) && (*(undefined8 *)(lVar4 + 0x20) = 0, uVar1 != 1)) {
            *(undefined8 *)(lVar4 + 0x28) = 0x3f80000000000000;
            if (2 < uVar1) {
              *(undefined8 *)(lVar4 + 0x30) = 0x3f800000;
              if (uVar1 != 3) {
                uVar2 = NEON_fmov(0x3f800000,4);
                *(undefined8 *)(lVar4 + 0x38) = uVar2;
                uVar2 = func_0x00a679a0(_int___TypeInfo,6);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          (uVar2,
                           _Field__PrivateImplementationDetails__4F3A974D03B4939FC26A965844D8E5F89E151FF80F5
                           ,0);
                lVar5 = func_0x00a679a0(_UnityEngine_Vector3___TypeInfo,
                                        *(undefined4 *)(lVar3 + 0x18));
                if (lVar5 != 0) {
                  if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
                    uVar11 = 0;
                    uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
                    puVar12 = (undefined4 *)(lVar5 + 0x28);
                    do {
                      if (cRam0000000001916e65 == '\0') {
                        func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                        cRam0000000001916e65 = '\x01';
                        uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
                      }
                      if (uVar8 <= uVar11) goto LAB_00c4da08;
                      uVar11 = uVar11 + 1;
                      uVar13 = *(undefined4 *)
                                (*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x50);
                      *(undefined8 *)(puVar12 + -2) =
                           *(undefined8 *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x48);
                      *puVar12 = uVar13;
                      puVar12 = puVar12 + 3;
                    } while ((long)uVar11 < (long)(int)uVar8);
                  }
                  lVar6 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x18
                                   );
                  if (lVar6 != 0) {
                    UnityEngine_Mesh__set_vertices(lVar6,lVar3,0);
                    lVar3 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) +
                                     0x18);
                    if (lVar3 != 0) {
                      UnityEngine_Mesh__set_uv(lVar3,lVar4,0);
                      lVar3 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) +
                                       0x18);
                      if (lVar3 != 0) {
                        UnityEngine_Mesh__set_triangles(lVar3,uVar2,0);
                        lVar3 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8)
                                         + 0x18);
                        if (lVar3 != 0) {
                          UnityEngine_Mesh__set_normals(lVar3,lVar5,0);
                          lVar3 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8
                                                     ) + 0x18);
                          if (lVar3 != 0) {
                            if ((bRam000000000191beef & 1) == 0) {
                              func_0x00a67900(&UnityEngine_Debug_TypeInfo);
                              func_0x00a67900(&Str_Not_allowed_to_call_RecalculateBounds___);
                              bRam000000000191beef = 1;
                            }
                            if (pcRam000000000191bea8 == (code *)0x0) {
                              pcRam000000000191bea8 = (code *)func_0x00a678c4(&UNK_005a74be);
                            }
                            uVar11 = (*pcRam000000000191bea8)(lVar3);
                            if ((uVar11 & 1) != 0) {
                              if (pcRam000000000191bec8 == (code *)0x0) {
                                pcRam000000000191bec8 = (code *)func_0x00a678c4(&UNK_0059f83d);
                              }
                    /* WARNING: Could not recover jumptable at 0x014769fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              (*pcRam000000000191bec8)(lVar3,0);
                              return;
                            }
                            uVar2 = UnityEngine_Object__get_name(lVar3,0);
                            uVar2 = System_String__Format
                                              (_Str_Not_allowed_to_call_RecalculateBounds___,uVar2,0
                                              );
                            if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30(_UnityEngine_Debug_TypeInfo);
                            }
                            if ((bRam000000000191b9da & 1) == 0) {
                              func_0x00a67900(&UnityEngine_Debug_TypeInfo);
                              func_0x00a67900(&UnityEngine_ILogger_TypeInfo);
                              bRam000000000191b9da = 1;
                            }
                            if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                            }
                            if (cRam000000000191aefe == '\0') {
                              func_0x00a67900(&UnityEngine_Debug_TypeInfo);
                              cRam000000000191aefe = '\x01';
                            }
                            if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                            }
                            plVar10 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo + 0xb8) + 8);
                            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_throw_967b50();
                            }
                            lVar3 = *plVar10;
                            uVar11 = (ulong)*(ushort *)(lVar3 + 0x12e);
                            if (uVar11 != 0) {
                              piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar9 + -2) == _UnityEngine_ILogger_TypeInfo) {
                                  puVar7 = (undefined8 *)
                                           (lVar3 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                                  goto LAB_0146a5cc;
                                }
                                uVar11 = uVar11 - 1;
                                piVar9 = piVar9 + 4;
                              } while (uVar11 != 0);
                            }
                            puVar7 = (undefined8 *)
                                     func_0x00a9e6c4(plVar10,_UnityEngine_ILogger_TypeInfo,3);
LAB_0146a5cc:
                    /* WARNING: Could not recover jumptable at 0x0146a5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            (*(code *)*puVar7)(plVar10,0,uVar2,puVar7[1]);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_00c4da0c;
              }
            }
          }
        }
      }
    }
  }
LAB_00c4da08:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


// ==== private bool MFEKLJLDMNM(Camera EIKILFDFMFB, Bounds GFPLEBPBHJC) { }   @0xb4f0f4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool HighlightPlus_HighlightEffect__MFEKLJLDMNM(void *__this,void *EIKILFDFMFB,void *GFPLEBPBHJC)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  float extraout_s0;
  float extraout_s0_00;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar5 = *(long *)((long)__this + 0x1b0);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_00c4f3f0:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    fVar14 = *(float *)GFPLEBPBHJC;
    fVar15 = *(float *)((long)GFPLEBPBHJC + 4);
    fVar10 = *(float *)((long)GFPLEBPBHJC + 8);
    fVar18 = *(float *)((long)GFPLEBPBHJC + 0xc);
    fVar16 = *(float *)((long)GFPLEBPBHJC + 0x10);
    fVar19 = *(float *)((long)GFPLEBPBHJC + 0x14);
    fVar12 = fVar14 - fVar18;
    fVar17 = fVar15 - fVar16;
    fVar8 = fVar10 - fVar19;
    *(float *)(lVar5 + 0x20) = fVar12;
    *(float *)(lVar5 + 0x24) = fVar17;
    *(float *)(lVar5 + 0x28) = fVar8;
    lVar5 = *(long *)((long)__this + 0x1b0);
    if (lVar5 != 0) {
      if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_00c4f3f0;
      fVar10 = fVar10 + fVar19;
      *(float *)(lVar5 + 0x2c) = fVar12;
      *(float *)(lVar5 + 0x30) = fVar17;
      *(float *)(lVar5 + 0x34) = fVar10;
      lVar5 = *(long *)((long)__this + 0x1b0);
      if (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_00c4f3f0;
        fVar14 = fVar14 + fVar18;
        *(float *)(lVar5 + 0x38) = fVar14;
        *(float *)(lVar5 + 0x3c) = fVar17;
        *(float *)(lVar5 + 0x40) = fVar8;
        lVar5 = *(long *)((long)__this + 0x1b0);
        if (lVar5 != 0) {
          if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_00c4f3f0;
          *(float *)(lVar5 + 0x44) = fVar14;
          *(float *)(lVar5 + 0x48) = fVar17;
          *(float *)(lVar5 + 0x4c) = fVar10;
          lVar5 = *(long *)((long)__this + 0x1b0);
          if (lVar5 != 0) {
            if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_00c4f3f0;
            fVar15 = fVar15 + fVar16;
            *(float *)(lVar5 + 0x50) = fVar12;
            *(float *)(lVar5 + 0x54) = fVar15;
            *(float *)(lVar5 + 0x58) = fVar8;
            lVar5 = *(long *)((long)__this + 0x1b0);
            if (lVar5 != 0) {
              if (*(uint *)(lVar5 + 0x18) < 6) goto LAB_00c4f3f0;
              *(float *)(lVar5 + 0x5c) = fVar12;
              *(float *)(lVar5 + 0x60) = fVar15;
              *(float *)(lVar5 + 100) = fVar10;
              lVar5 = *(long *)((long)__this + 0x1b0);
              if (lVar5 != 0) {
                if (*(uint *)(lVar5 + 0x18) < 7) goto LAB_00c4f3f0;
                *(float *)(lVar5 + 0x68) = fVar14;
                *(float *)(lVar5 + 0x6c) = fVar15;
                *(float *)(lVar5 + 0x70) = fVar8;
                lVar5 = *(long *)((long)__this + 0x1b0);
                if (lVar5 != 0) {
                  if (*(uint *)(lVar5 + 0x18) < 8) goto LAB_00c4f3f0;
                  *(float *)(lVar5 + 0x74) = fVar14;
                  *(float *)(lVar5 + 0x78) = fVar15;
                  *(float *)(lVar5 + 0x7c) = fVar10;
                  lVar5 = *(long *)((long)__this + 0x1b0);
                  if (lVar5 != 0) {
                    fVar14 = -3.4028235e+38;
                    fVar15 = 3.4028235e+38;
                    lVar6 = 0;
                    uVar7 = 0;
                    fVar8 = fVar15;
                    fVar10 = fVar15;
                    fVar12 = fVar14;
                    do {
                      if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar7) {
                        if (fVar14 == fVar15) {
                          return false;
                        }
                        if (EIKILFDFMFB != (void *)0x0) {
LAB_00c4f340:
                          uVar4 = UnityEngine_Camera__get_nearClipPlane(EIKILFDFMFB,0);
                          if (fVar8 < extraout_s0) {
                            uVar4 = UnityEngine_Camera__get_nearClipPlane(EIKILFDFMFB,0);
                            fVar8 = extraout_s0_00 + 0.01;
                          }
                          if (0.0 < *(float *)((long)__this + 100)) {
                            fVar16 = *(float *)((long)__this + 0x78) +
                                     *(float *)((long)__this + 0x78) + 10.0;
                            iVar2 = -0x80000000;
                            if (fVar16 != INFINITY) {
                              iVar2 = (int)fVar16;
                            }
                            HighlightPlus_HighlightEffect__CKAECDAMLEE
                                      (fVar10,fVar15,fVar8,fVar12,fVar14,fVar8,uVar4,EIKILFDFMFB,
                                       iVar2,(long)__this + 0x16c);
                          }
                          return true;
                        }
                        break;
                      }
                      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_00c4f3f0;
                      if (EIKILFDFMFB == (void *)0x0) break;
                      lVar1 = lVar5 + lVar6;
                      uVar11 = *(undefined4 *)(lVar1 + 0x24);
                      uVar13 = *(undefined4 *)(lVar1 + 0x28);
                      uVar9 = UnityEngine_Camera__WorldToScreenPoint
                                        (*(undefined4 *)(lVar1 + 0x20),EIKILFDFMFB,0);
                      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_00c4f3f0;
                      *(undefined4 *)(lVar1 + 0x20) = uVar9;
                      *(undefined4 *)(lVar1 + 0x24) = uVar11;
                      *(undefined4 *)(lVar1 + 0x28) = uVar13;
                      lVar5 = *(long *)((long)__this + 0x1b0);
                      if (lVar5 == 0) break;
                      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_00c4f3f0;
                      lVar1 = lVar5 + lVar6;
                      fVar18 = *(float *)(lVar1 + 0x20);
                      fVar17 = *(float *)(lVar1 + 0x24);
                      fVar19 = *(float *)(lVar1 + 0x28);
                      fVar16 = fVar18;
                      if (fVar10 <= fVar18) {
                        fVar16 = fVar10;
                      }
                      fVar10 = fVar16;
                      fVar16 = fVar17;
                      if (fVar15 <= fVar17) {
                        fVar16 = fVar15;
                      }
                      fVar15 = fVar16;
                      if (fVar18 <= fVar12) {
                        fVar18 = fVar12;
                      }
                      fVar12 = fVar18;
                      if (fVar17 <= fVar14) {
                        fVar17 = fVar14;
                      }
                      fVar14 = fVar17;
                      if (fVar19 < fVar8) {
                        fVar16 = (float)UnityEngine_Camera__get_nearClipPlane(EIKILFDFMFB,0);
                        fVar8 = fVar19;
                        if (fVar19 < fVar16) {
                          iVar2 = UnityEngine_Camera__get_pixelWidth(EIKILFDFMFB,0);
                          iVar3 = UnityEngine_Camera__get_pixelHeight(EIKILFDFMFB,0);
                          if (iVar3 == 0) {
                            return false;
                          }
                          fVar12 = (float)iVar2;
                          fVar14 = (float)iVar3;
                          fVar10 = 0.0;
                          fVar15 = 0.0;
                          goto LAB_00c4f340;
                        }
                        lVar5 = *(long *)((long)__this + 0x1b0);
                      }
                      uVar7 = uVar7 + 1;
                      lVar6 = lVar6 + 0xc;
                    } while (lVar5 != 0);
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


// ==== public void HJODLBHJKAI(NPKMMHOGALO ALLBGCHDGNC) { }   @0xb5054c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__HJODLBHJKAI(void *__this,void *ALLBGCHDGNC)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  code *pcVar16;
  
  if ((bRam0000000001917183 & 1) == 0) {
    func_0x00a67900(&NPKMMHOGALO_TypeInfo);
    bRam0000000001917183 = 1;
  }
  plVar11 = (long *)((long)__this + 0x98);
  lVar10 = *plVar11;
  while ((plVar5 = (long *)System_Delegate__Remove(lVar10,ALLBGCHDGNC,0), plVar5 == (long *)0x0 ||
         (*plVar5 == _NPKMMHOGALO_TypeInfo))) {
    lVar6 = func_0x00a90840(plVar11,plVar5,lVar10);
    bVar2 = lVar10 == lVar6;
    lVar10 = lVar6;
    if (bVar2) {
      return;
    }
  }
  auVar15 = func_0x00a67eec(plVar5);
  lVar6 = auVar15._0_8_;
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
  lVar7 = UnityEngine_Object__FindObjectsOfType_object_
                    (_Method_UnityEngine_Object_FindObjectsOfType_Renderer___);
  lVar13 = _Method_System_Collections_Generic_List_Renderer__Clear__;
  lVar12 = *(long *)(lVar6 + 0x218);
  if (lVar12 == 0) {
    uVar9 = func_0x00a67b44(_System_Collections_Generic_List_Renderer__TypeInfo);
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
              (uVar9,_Method_System_Collections_Generic_List_Renderer___ctor__);
    *(undefined8 *)(lVar6 + 0x218) = uVar9;
  }
  else {
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    uVar8 = func_0x00a68544(*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0xc0));
    if ((uVar8 & 1) == 0) {
      *(undefined4 *)(lVar12 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar12 + 0x18);
      *(undefined4 *)(lVar12 + 0x18) = 0;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
      }
    }
  }
  if (lVar7 != 0) {
    uVar3 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar3) {
      uVar14 = 0;
      do {
        if (uVar3 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar13 = *(long *)(lVar7 + (long)(int)uVar14 * 8 + 0x20);
        if ((lVar13 == 0) || (lVar12 = UnityEngine_Component__get_gameObject(lVar13,0), lVar12 == 0)
           ) goto LAB_00c507d4;
        uVar3 = UnityEngine_GameObject__get_layer(lVar12,0);
        uVar4 = UnityEngine_LayerMask__op_Implicit(auVar15._8_8_ & 0xffffffff,0);
        if ((uVar4 >> (ulong)(uVar3 & 0x1f) & 1) != 0) {
          if (*(long *)(lVar6 + 0x218) == 0) goto LAB_00c507d4;
          func_0x00b7fe44(*(long *)(lVar6 + 0x218),lVar13,
                          _Method_System_Collections_Generic_List_Renderer__Add__);
        }
        uVar3 = *(uint *)(lVar7 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)uVar3);
    }
    lVar13 = _Method_System_Collections_Generic_List_Renderer__ToArray__;
    lVar6 = *(long *)(lVar6 + 0x218);
    if (lVar6 != 0) {
      pcVar16 = HighlightPlus_HighlightEffect__MBLILGODLLD;
      iVar1 = *(int *)(lVar6 + 0x18);
      lVar7 = *(long *)(*(long *)(_Method_System_Collections_Generic_List_Renderer__ToArray__ + 0x20
                                 ) + 0xc0);
      if (iVar1 == 0) {
        lVar10 = *(long *)(lVar7 + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x00a9e3d0();
        }
        if (*(int *)(lVar10 + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x10) + 0x135) & 1) ==
            0) {
          func_0x00a9e3d0();
        }
      }
      else {
        lVar13 = *(long *)(lVar7 + 0x18);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x00a9e3d0();
        }
        uVar9 = func_0x00a679a0(lVar13,iVar1);
        System_Array__Copy(*(undefined8 *)(lVar6 + 0x10),0,uVar9,0,*(undefined4 *)(lVar6 + 0x18),0,
                           in_x6,in_x7,pcVar16,lVar10,plVar11,ALLBGCHDGNC);
      }
      return;
    }
  }
LAB_00c507d4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb51784

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect___ctor(void *__this)

{
  undefined4 uVar1;
  
  *(undefined1 *)((long)__this + 0x20) = 1;
  uVar1 = UnityEngine_LayerMask__op_Implicit(0xffffffff,0);
  *(undefined8 *)((long)__this + 0x38) = 0x3e99999a3e99999a;
  *(undefined8 *)((long)__this + 0x4c) = 0x3f800000;
  *(undefined8 *)((long)__this + 0x44) = 0x3f23d70a3f19999a;
  *(undefined8 *)((long)__this + 0x6c) = 0x3f800000;
  *(undefined8 *)((long)__this + 100) = 0x3f23d70a3f800000;
  *(undefined8 *)((long)__this + 0x5c) = 0x3f8000003e99999a;
  *(undefined8 *)((long)__this + 0x54) = 0x3f8000003f800000;
  *(undefined8 *)((long)__this + 0x74) = 0x3f19999a3f800000;
  *(undefined4 *)((long)__this + 0x28) = uVar1;
  *(undefined1 *)((long)__this + 0x30) = 1;
  *(undefined1 *)((long)__this + 0x41) = 1;
  *(undefined8 *)((long)__this + 0x7c) = 0x200000001;
  *(undefined1 *)((long)__this + 0x88) = 1;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public void JKLPPMCLJJI(AKDPAMOBCFP ALLBGCHDGNC) { }   @0xb519f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__JKLPPMCLJJI(void *__this,void *ALLBGCHDGNC)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam000000000191718a & 1) == 0) {
    func_0x00a67900(&AKDPAMOBCFP_TypeInfo);
    bRam000000000191718a = 1;
  }
  lVar5 = *(long *)((long)__this + 0xa0);
  while ((plVar2 = (long *)System_Delegate__Remove(lVar5,ALLBGCHDGNC,0), plVar2 == (long *)0x0 ||
         (*plVar2 == _AKDPAMOBCFP_TypeInfo))) {
    lVar3 = func_0x00a90840((long *)((long)__this + 0xa0),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00a67eec(plVar2);
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


// ==== private Material[] HFOBHOCHGAG(Material PLBEPEHAFMO, Mesh EEFAAGALFPO) { }   @0xb509b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * HighlightPlus_HighlightEffect__HFOBHOCHGAG(void *__this,void *PLBEPEHAFMO,void *EEFAAGALFPO)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  void *pvVar10;
  void *pvVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  float *pfVar15;
  long *plVar16;
  uint uVar17;
  undefined4 *puVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [12];
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  
  if ((bRam000000000191718d & 1) == 0) {
    func_0x00a67900(&UnityEngine_Material___TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_Material___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191718d = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Equality(EEFAAGALFPO,0,0);
  plVar16 = (long *)0x0;
  if ((uVar6 & 1) == 0) {
    if (EEFAAGALFPO == (void *)0x0) {
LAB_00c50af8:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar5 = UnityEngine_Mesh__get_subMeshCount(EEFAAGALFPO,0);
    plVar16 = (long *)func_0x00a679a0(_UnityEngine_Material___TypeInfo,(ulong)uVar5);
    if (0 < (int)uVar5) {
      uVar6 = 0;
      do {
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar7 = UnityEngine_Object__Instantiate_object_
                          (PLBEPEHAFMO,_Method_UnityEngine_Object_Instantiate_Material___);
        if (plVar16 == (long *)0x0) goto LAB_00c50af8;
        if ((lVar7 != 0) &&
           (lVar8 = func_0x00a67a34(lVar7,*(undefined8 *)(*plVar16 + 0x40)), lVar8 == 0)) {
          uVar9 = func_0x00a67b74();
          auVar25 = func_0x00a67a20(uVar9,0);
          uVar5 = auVar25._8_4_;
          pvVar10 = auVar25._0_8_;
          pvVar11 = pvVar10;
          if ((bRam0000000001917191 & 1) == 0) {
            func_0x00a67900(&Method_System_Collections_Generic_Dictionary_Vector3__int__Clear__);
            func_0x00a67900(&
                            Method_System_Collections_Generic_Dictionary_Vector3__int__TryGetValue__
                           );
            func_0x00a67900(&Method_System_Collections_Generic_Dictionary_Vector3__int___ctor__);
            func_0x00a67900(&Method_System_Collections_Generic_Dictionary_Vector3__int__set_Item__);
            func_0x00a67900(&System_Collections_Generic_Dictionary_Vector3__int__TypeInfo);
            func_0x00a67900(&HighlightPlus_HighlightEffect_TypeInfo);
            func_0x00a67900(&int___TypeInfo);
            func_0x00a67900(&Method_UnityEngine_Object_Instantiate_Mesh___);
            func_0x00a67900(&UnityEngine_Object_TypeInfo);
            pvVar11 = (void *)func_0x00a67900(&UnityEngine_Vector3___TypeInfo);
            bRam0000000001917191 = 1;
          }
          uStack_c8 = 0;
          lVar7 = *(long *)((long)pvVar10 + 0xa8);
          if (lVar7 == 0) {
            return pvVar11;
          }
          if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar5) {
            return pvVar11;
          }
          if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_00c510cc;
          lVar7 = *(long *)(lVar7 + (long)(int)uVar5 * 0xb0 + 0x60);
          if (lVar7 == 0) goto LAB_00c510d0;
          pvVar11 = (void *)UnityEngine_Mesh__get_isReadable(lVar7,0);
          if (((ulong)pvVar11 & 1) == 0) {
            return pvVar11;
          }
          pvVar11 = (void *)UnityEngine_Mesh__get_normals(lVar7,0);
          if (pvVar11 == (void *)0x0) {
            return (void *)0x0;
          }
          if (*(long *)((long)pvVar11 + 0x18) == 0) {
            return pvVar11;
          }
          lVar8 = UnityEngine_Mesh__get_vertices(lVar7,0);
          if (lVar8 == 0) goto LAB_00c510d0;
          uVar3 = *(uint *)((long)pvVar11 + 0x18);
          if ((int)*(uint *)(lVar8 + 0x18) <= (int)*(uint *)((long)pvVar11 + 0x18)) {
            uVar3 = *(uint *)(lVar8 + 0x18);
          }
          lVar13 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x20);
          if ((lVar13 == 0) || (*(int *)(lVar13 + 0x18) < (int)uVar3)) {
            uVar9 = func_0x00a679a0(_UnityEngine_Vector3___TypeInfo,uVar3);
            *(undefined8 *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x20) =
                 uVar9;
            goto LAB_00c50d14;
          }
          if (cRam0000000001916789 == '\0') {
            func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
            cRam0000000001916789 = '\x01';
          }
          if ((int)uVar3 < 1) goto LAB_00c50d14;
          uVar6 = 0;
          lVar13 = 0x20;
          uVar9 = **(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
          uVar20 = *(undefined4 *)(*(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 1);
          goto LAB_00c50cdc;
        }
        if (*(uint *)(plVar16 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        plVar16[uVar6 + 4] = lVar7;
        uVar6 = uVar6 + 1;
      } while (uVar5 != uVar6);
    }
  }
  return plVar16;
  while( true ) {
    if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_00c510cc;
    uVar6 = uVar6 + 1;
    puVar2 = (undefined8 *)(lVar14 + lVar13);
    lVar13 = lVar13 + 0xc;
    *puVar2 = uVar9;
    *(undefined4 *)(puVar2 + 1) = uVar20;
    if (uVar3 == uVar6) break;
LAB_00c50cdc:
    lVar14 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x20);
    if (lVar14 == 0) goto LAB_00c510d0;
  }
LAB_00c50d14:
  lVar13 = *(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8);
  if ((*(long *)(lVar13 + 0x28) == 0) || (*(int *)(*(long *)(lVar13 + 0x28) + 0x18) < (int)uVar3)) {
    uVar9 = func_0x00a679a0(_int___TypeInfo,uVar3);
    lVar13 = *(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8);
    *(undefined8 *)(lVar13 + 0x28) = uVar9;
  }
  if (*(long *)(lVar13 + 0x30) == 0) {
    uVar9 = func_0x00a67b44(_System_Collections_Generic_Dictionary_Vector3__int__TypeInfo);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (uVar9,uVar3,_Method_System_Collections_Generic_Dictionary_Vector3__int___ctor__);
    *(undefined8 *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x30) = uVar9;
  }
  else {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear
              (*(long *)(lVar13 + 0x30),
               _Method_System_Collections_Generic_Dictionary_Vector3__int__Clear__);
  }
  if (0 < (int)uVar3) {
    uVar6 = 0;
    lVar13 = *(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8);
    puVar18 = (undefined4 *)(lVar8 + 0x28);
    do {
      if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_00c510cc;
      if (*(long *)(lVar13 + 0x30) == 0) goto LAB_00c510d0;
      uStack_e0 = *(undefined8 *)(puVar18 + -2);
      uStack_d8 = *puVar18;
      uVar12 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue
                         (*(long *)(lVar13 + 0x30),&uStack_e0,&uStack_c8,
                          _Method_System_Collections_Generic_Dictionary_Vector3__int__TryGetValue__)
      ;
      if ((uVar12 & 1) == 0) {
        if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_00c510cc;
        lVar13 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x30);
        uStack_c8 = (undefined4)uVar6;
        if (lVar13 == 0) goto LAB_00c510d0;
        uStack_e0 = *(undefined8 *)(puVar18 + -2);
        uStack_d8 = *puVar18;
        uStack_c4 = uStack_c8;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item
                  (lVar13,&uStack_e0,&uStack_c4,
                   _Method_System_Collections_Generic_Dictionary_Vector3__int__set_Item__);
      }
      lVar13 = *(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8);
      lVar14 = *(long *)(lVar13 + 0x28);
      if (lVar14 == 0) goto LAB_00c510d0;
      if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_00c510cc;
      lVar1 = uVar6 * 4;
      uVar6 = uVar6 + 1;
      puVar18 = puVar18 + 3;
      *(undefined4 *)(lVar14 + lVar1 + 0x20) = uStack_c8;
    } while (uVar3 != uVar6);
    if (0 < (int)uVar3) {
      uVar17 = 0;
      do {
        lVar8 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x28);
        if (lVar8 == 0) goto LAB_00c510d0;
        if (*(uint *)(lVar8 + 0x18) <= uVar17) goto LAB_00c510cc;
        lVar13 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x20);
        if (lVar13 == 0) goto LAB_00c510d0;
        lVar14 = (long)(int)uVar17;
        uVar4 = *(uint *)(lVar8 + lVar14 * 4 + 0x20);
        if ((*(uint *)(lVar13 + 0x18) <= uVar4) || (*(uint *)((long)pvVar11 + 0x18) <= uVar17))
        goto LAB_00c510cc;
        lVar13 = lVar13 + (long)(int)uVar4 * 0xc;
        puVar2 = (undefined8 *)(lVar13 + 0x20);
        uVar9 = *(undefined8 *)((long)pvVar11 + lVar14 * 0xc + 0x20);
        fVar21 = *(float *)((long)pvVar11 + lVar14 * 0xc + 0x28);
        uVar22 = *puVar2;
        pfVar15 = (float *)(lVar13 + 0x28);
        uVar17 = uVar17 + 1;
        *puVar2 = CONCAT44((float)((ulong)uVar22 >> 0x20) + (float)((ulong)uVar9 >> 0x20),
                           (float)uVar22 + (float)uVar9);
        *pfVar15 = *pfVar15 + fVar21;
      } while (uVar3 != uVar17);
      if (0 < (int)uVar3) {
        uVar17 = 0;
        do {
          lVar8 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x28);
          if (lVar8 == 0) goto LAB_00c510d0;
          if (*(uint *)(lVar8 + 0x18) <= uVar17) goto LAB_00c510cc;
          lVar13 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x20);
          if (lVar13 == 0) goto LAB_00c510d0;
          lVar14 = (long)(int)uVar17;
          uVar4 = *(uint *)(lVar8 + lVar14 * 4 + 0x20);
          if (*(uint *)(lVar13 + 0x18) <= uVar4) goto LAB_00c510cc;
          lVar13 = lVar13 + (long)(int)uVar4 * 0xc;
          uVar9 = *(undefined8 *)(lVar13 + 0x20);
          fVar21 = *(float *)(lVar13 + 0x28);
          if (cRam0000000001916aa5 == '\0') {
            func_0x00a67900(&System_Math_TypeInfo);
            cRam0000000001916aa5 = '\x01';
          }
          if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          fVar23 = (float)uVar9;
          fVar24 = (float)((ulong)uVar9 >> 0x20);
          fVar19 = SQRT(fVar21 * fVar21 + fVar23 * fVar23 + fVar24 * fVar24);
          if (fVar19 <= 1e-05) {
            if (cRam0000000001916789 == '\0') {
              func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
              cRam0000000001916789 = '\x01';
            }
            uVar9 = **(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
            fVar21 = *(float *)(*(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 1);
          }
          else {
            uVar9 = CONCAT44(fVar24 / fVar19,fVar23 / fVar19);
            fVar21 = fVar21 / fVar19;
          }
          if (*(uint *)((long)pvVar11 + 0x18) <= uVar17) goto LAB_00c510cc;
          uVar17 = uVar17 + 1;
          *(undefined8 *)((long)pvVar11 + lVar14 * 0xc + 0x20) = uVar9;
          *(float *)((long)pvVar11 + lVar14 * 0xc + 0x28) = fVar21;
        } while (uVar3 != uVar17);
      }
    }
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar7 = UnityEngine_Object__Instantiate_object_
                    (lVar7,_Method_UnityEngine_Object_Instantiate_Mesh___);
  if (lVar7 != 0) {
    UnityEngine_Object__set_hideFlags(lVar7,0x34,0);
    pvVar11 = (void *)UnityEngine_Mesh__set_normals(lVar7,pvVar11,0);
    lVar8 = *(long *)((long)pvVar10 + 0xa8);
    if (lVar8 != 0) {
      if (uVar5 < *(uint *)(lVar8 + 0x18)) {
        *(long *)(lVar8 + (long)(int)uVar5 * 0xb0 + 0x60) = lVar7;
        return pvVar11;
      }
LAB_00c510cc:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
  }
LAB_00c510d0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void FOOMPJKOKED(int NMPBHHIPPHP) { }   @0xb50b0c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__FOOMPJKOKED(void *__this,int NMPBHHIPPHP)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float *pfVar13;
  uint uVar14;
  undefined4 *puVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  if ((bRam0000000001917191 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_Vector3__int__Clear__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_Vector3__int__TryGetValue__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_Vector3__int___ctor__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_Vector3__int__set_Item__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_Vector3__int__TypeInfo);
    func_0x00a67900(&HighlightPlus_HighlightEffect_TypeInfo);
    func_0x00a67900(&int___TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_Mesh___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_Vector3___TypeInfo);
    bRam0000000001917191 = 1;
  }
  uStack_78 = 0;
  lVar10 = *(long *)((long)__this + 0xa8);
  if ((lVar10 == 0) || ((int)*(uint *)(lVar10 + 0x18) <= NMPBHHIPPHP)) {
    return;
  }
  if ((uint)NMPBHHIPPHP < *(uint *)(lVar10 + 0x18)) {
    lVar10 = *(long *)(lVar10 + (long)NMPBHHIPPHP * 0xb0 + 0x60);
    if (lVar10 != 0) {
      uVar5 = UnityEngine_Mesh__get_isReadable(lVar10,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
      lVar6 = UnityEngine_Mesh__get_normals(lVar10,0);
      if (lVar6 == 0) {
        return;
      }
      if (*(long *)(lVar6 + 0x18) == 0) {
        return;
      }
      lVar7 = UnityEngine_Mesh__get_vertices(lVar10,0);
      if (lVar7 != 0) {
        uVar3 = *(uint *)(lVar6 + 0x18);
        if ((int)*(uint *)(lVar7 + 0x18) <= (int)*(uint *)(lVar6 + 0x18)) {
          uVar3 = *(uint *)(lVar7 + 0x18);
        }
        lVar11 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x20);
        if ((lVar11 == 0) || (*(int *)(lVar11 + 0x18) < (int)uVar3)) {
          uVar8 = func_0x00a679a0(_UnityEngine_Vector3___TypeInfo,uVar3);
          *(undefined8 *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x20) = uVar8;
        }
        else {
          if (cRam0000000001916789 == '\0') {
            func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
            cRam0000000001916789 = '\x01';
          }
          if (0 < (int)uVar3) {
            uVar5 = 0;
            lVar11 = 0x20;
            uVar8 = **(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
            uVar17 = *(undefined4 *)(*(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 1);
            do {
              lVar12 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x20);
              if (lVar12 == 0) goto LAB_00c510d0;
              if (*(uint *)(lVar12 + 0x18) <= uVar5) goto LAB_00c510cc;
              uVar5 = uVar5 + 1;
              puVar2 = (undefined8 *)(lVar12 + lVar11);
              lVar11 = lVar11 + 0xc;
              *puVar2 = uVar8;
              *(undefined4 *)(puVar2 + 1) = uVar17;
            } while (uVar3 != uVar5);
          }
        }
        lVar11 = *(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8);
        if ((*(long *)(lVar11 + 0x28) == 0) ||
           (*(int *)(*(long *)(lVar11 + 0x28) + 0x18) < (int)uVar3)) {
          uVar8 = func_0x00a679a0(_int___TypeInfo,uVar3);
          lVar11 = *(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8);
          *(undefined8 *)(lVar11 + 0x28) = uVar8;
        }
        if (*(long *)(lVar11 + 0x30) == 0) {
          uVar8 = func_0x00a67b44(_System_Collections_Generic_Dictionary_Vector3__int__TypeInfo);
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                    (uVar8,uVar3,_Method_System_Collections_Generic_Dictionary_Vector3__int___ctor__
                    );
          *(undefined8 *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x30) = uVar8;
        }
        else {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear
                    (*(long *)(lVar11 + 0x30),
                     _Method_System_Collections_Generic_Dictionary_Vector3__int__Clear__);
        }
        if (0 < (int)uVar3) {
          uVar5 = 0;
          lVar11 = *(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8);
          puVar15 = (undefined4 *)(lVar7 + 0x28);
          do {
            if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_00c510cc;
            if (*(long *)(lVar11 + 0x30) == 0) goto LAB_00c510d0;
            uStack_90 = *(undefined8 *)(puVar15 + -2);
            uStack_88 = *puVar15;
            uVar9 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue
                              (*(long *)(lVar11 + 0x30),&uStack_90,&uStack_78,
                               _Method_System_Collections_Generic_Dictionary_Vector3__int__TryGetValue__
                              );
            if ((uVar9 & 1) == 0) {
              if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_00c510cc;
              lVar11 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x30);
              uStack_78 = (undefined4)uVar5;
              if (lVar11 == 0) goto LAB_00c510d0;
              uStack_90 = *(undefined8 *)(puVar15 + -2);
              uStack_88 = *puVar15;
              uStack_74 = uStack_78;
              System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item
                        (lVar11,&uStack_90,&uStack_74,
                         _Method_System_Collections_Generic_Dictionary_Vector3__int__set_Item__);
            }
            lVar11 = *(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8);
            lVar12 = *(long *)(lVar11 + 0x28);
            if (lVar12 == 0) goto LAB_00c510d0;
            if (*(uint *)(lVar12 + 0x18) <= uVar5) goto LAB_00c510cc;
            lVar1 = uVar5 * 4;
            uVar5 = uVar5 + 1;
            puVar15 = puVar15 + 3;
            *(undefined4 *)(lVar12 + lVar1 + 0x20) = uStack_78;
          } while (uVar3 != uVar5);
          if (0 < (int)uVar3) {
            uVar14 = 0;
            do {
              lVar7 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x28);
              if (lVar7 == 0) goto LAB_00c510d0;
              if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_00c510cc;
              lVar11 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x20);
              if (lVar11 == 0) goto LAB_00c510d0;
              uVar4 = *(uint *)(lVar7 + (long)(int)uVar14 * 4 + 0x20);
              if ((*(uint *)(lVar11 + 0x18) <= uVar4) || (*(uint *)(lVar6 + 0x18) <= uVar14))
              goto LAB_00c510cc;
              lVar11 = lVar11 + (long)(int)uVar4 * 0xc;
              lVar7 = lVar6 + (long)(int)uVar14 * 0xc;
              puVar2 = (undefined8 *)(lVar11 + 0x20);
              uVar8 = *(undefined8 *)(lVar7 + 0x20);
              fVar18 = *(float *)(lVar7 + 0x28);
              uVar19 = *puVar2;
              pfVar13 = (float *)(lVar11 + 0x28);
              uVar14 = uVar14 + 1;
              *puVar2 = CONCAT44((float)((ulong)uVar19 >> 0x20) + (float)((ulong)uVar8 >> 0x20),
                                 (float)uVar19 + (float)uVar8);
              *pfVar13 = *pfVar13 + fVar18;
            } while (uVar3 != uVar14);
            if (0 < (int)uVar3) {
              uVar14 = 0;
              do {
                lVar7 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x28);
                if (lVar7 == 0) goto LAB_00c510d0;
                if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_00c510cc;
                lVar11 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x20)
                ;
                if (lVar11 == 0) goto LAB_00c510d0;
                lVar12 = (long)(int)uVar14;
                uVar4 = *(uint *)(lVar7 + lVar12 * 4 + 0x20);
                if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_00c510cc;
                lVar11 = lVar11 + (long)(int)uVar4 * 0xc;
                uVar8 = *(undefined8 *)(lVar11 + 0x20);
                fVar18 = *(float *)(lVar11 + 0x28);
                if (cRam0000000001916aa5 == '\0') {
                  func_0x00a67900(&System_Math_TypeInfo);
                  cRam0000000001916aa5 = '\x01';
                }
                if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                fVar20 = (float)uVar8;
                fVar21 = (float)((ulong)uVar8 >> 0x20);
                fVar16 = SQRT(fVar18 * fVar18 + fVar20 * fVar20 + fVar21 * fVar21);
                if (fVar16 <= 1e-05) {
                  if (cRam0000000001916789 == '\0') {
                    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                    cRam0000000001916789 = '\x01';
                  }
                  uVar8 = **(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
                  fVar18 = *(float *)(*(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 1);
                }
                else {
                  uVar8 = CONCAT44(fVar21 / fVar16,fVar20 / fVar16);
                  fVar18 = fVar18 / fVar16;
                }
                if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_00c510cc;
                uVar14 = uVar14 + 1;
                lVar7 = lVar6 + lVar12 * 0xc;
                *(undefined8 *)(lVar7 + 0x20) = uVar8;
                *(float *)(lVar7 + 0x28) = fVar18;
              } while (uVar3 != uVar14);
            }
          }
        }
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar10 = UnityEngine_Object__Instantiate_object_
                           (lVar10,_Method_UnityEngine_Object_Instantiate_Mesh___);
        if (lVar10 != 0) {
          UnityEngine_Object__set_hideFlags(lVar10,0x34,0);
          UnityEngine_Mesh__set_normals(lVar10,lVar6,0);
          lVar6 = *(long *)((long)__this + 0xa8);
          if (lVar6 != 0) {
            if ((uint)NMPBHHIPPHP < *(uint *)(lVar6 + 0x18)) {
              *(long *)(lVar6 + (long)NMPBHHIPPHP * 0xb0 + 0x60) = lVar10;
              return;
            }
            goto LAB_00c510cc;
          }
        }
      }
    }
LAB_00c510d0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
LAB_00c510cc:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}



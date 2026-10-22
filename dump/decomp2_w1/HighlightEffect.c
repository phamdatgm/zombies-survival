// ==== public void DBGOFJEBCAC(AKDPAMOBCFP ALLBGCHDGNC) { }   @0xb4d6ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__DBGOFJEBCAC(void *__this,void *ALLBGCHDGNC)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  
  if ((bRam000000000191717b & 1) == 0) {
    func_0x00a67900(&AKDPAMOBCFP_TypeInfo);
    bRam000000000191717b = 1;
  }
  lVar6 = *(long *)((long)__this + 0xa0);
  while ((plVar3 = (long *)System_Delegate__Combine(lVar6,ALLBGCHDGNC,0), plVar3 == (long *)0x0 ||
         (*plVar3 == _AKDPAMOBCFP_TypeInfo))) {
    lVar4 = func_0x00a90840((long *)((long)__this + 0xa0),plVar3,lVar6);
    bVar2 = lVar6 == lVar4;
    lVar6 = lVar4;
    if (bVar2) {
      return;
    }
  }
  func_0x00a67eec(plVar3);
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
  uVar5 = func_0x00a67b44(_UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(uVar5,0);
  *(undefined8 *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x18) = uVar5;
  lVar6 = func_0x00a679a0(_UnityEngine_Vector3___TypeInfo,4);
  if (lVar6 == 0) goto LAB_00c4da0c;
  uVar1 = *(uint *)(lVar6 + 0x18);
  if (uVar1 != 0) {
    *(undefined8 *)(lVar6 + 0x20) = 0xbf000000bf000000;
    *(undefined4 *)(lVar6 + 0x28) = 0;
    if (uVar1 != 1) {
      *(undefined4 *)(lVar6 + 0x34) = 0;
      *(undefined8 *)(lVar6 + 0x2c) = 0x3f000000bf000000;
      if (2 < uVar1) {
        *(undefined4 *)(lVar6 + 0x40) = 0;
        *(undefined8 *)(lVar6 + 0x38) = 0xbf0000003f000000;
        if (uVar1 != 3) {
          *(undefined8 *)(lVar6 + 0x44) = 0x3f0000003f000000;
          *(undefined4 *)(lVar6 + 0x4c) = 0;
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
                uVar5 = NEON_fmov(0x3f800000,4);
                *(undefined8 *)(lVar4 + 0x38) = uVar5;
                uVar5 = func_0x00a679a0(_int___TypeInfo,6);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          (uVar5,
                           _Field__PrivateImplementationDetails__4F3A974D03B4939FC26A965844D8E5F89E151FF80F5
                           ,0);
                lVar7 = func_0x00a679a0(_UnityEngine_Vector3___TypeInfo,
                                        *(undefined4 *)(lVar6 + 0x18));
                if (lVar7 != 0) {
                  if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
                    uVar12 = 0;
                    uVar10 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
                    puVar13 = (undefined4 *)(lVar7 + 0x28);
                    do {
                      if (cRam0000000001916e65 == '\0') {
                        func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                        cRam0000000001916e65 = '\x01';
                        uVar10 = (ulong)*(uint *)(lVar7 + 0x18);
                      }
                      if (uVar10 <= uVar12) goto LAB_00c4da08;
                      uVar12 = uVar12 + 1;
                      uVar14 = *(undefined4 *)
                                (*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x50);
                      *(undefined8 *)(puVar13 + -2) =
                           *(undefined8 *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x48);
                      *puVar13 = uVar14;
                      puVar13 = puVar13 + 3;
                    } while ((long)uVar12 < (long)(int)uVar10);
                  }
                  lVar8 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x18
                                   );
                  if (lVar8 != 0) {
                    UnityEngine_Mesh__set_vertices(lVar8,lVar6,0);
                    lVar6 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) +
                                     0x18);
                    if (lVar6 != 0) {
                      UnityEngine_Mesh__set_uv(lVar6,lVar4,0);
                      lVar6 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) +
                                       0x18);
                      if (lVar6 != 0) {
                        UnityEngine_Mesh__set_triangles(lVar6,uVar5,0);
                        lVar6 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8)
                                         + 0x18);
                        if (lVar6 != 0) {
                          UnityEngine_Mesh__set_normals(lVar6,lVar7,0);
                          lVar6 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8
                                                     ) + 0x18);
                          if (lVar6 != 0) {
                            if ((bRam000000000191beef & 1) == 0) {
                              func_0x00a67900(&UnityEngine_Debug_TypeInfo);
                              func_0x00a67900(&Str_Not_allowed_to_call_RecalculateBounds___);
                              bRam000000000191beef = 1;
                            }
                            if (pcRam000000000191bea8 == (code *)0x0) {
                              pcRam000000000191bea8 = (code *)func_0x00a678c4(&UNK_005a74be);
                            }
                            uVar12 = (*pcRam000000000191bea8)(lVar6);
                            if ((uVar12 & 1) != 0) {
                              if (pcRam000000000191bec8 == (code *)0x0) {
                                pcRam000000000191bec8 = (code *)func_0x00a678c4(&UNK_0059f83d);
                              }
                    /* WARNING: Could not recover jumptable at 0x014769fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              (*pcRam000000000191bec8)(lVar6,0);
                              return;
                            }
                            uVar5 = UnityEngine_Object__get_name(lVar6,0);
                            uVar5 = System_String__Format
                                              (_Str_Not_allowed_to_call_RecalculateBounds___,uVar5,0
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
                            plVar3 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo + 0xb8) + 8);
                            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_throw_967b50();
                            }
                            lVar6 = *plVar3;
                            uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                            if (uVar12 != 0) {
                              piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar11 + -2) == _UnityEngine_ILogger_TypeInfo) {
                                  puVar9 = (undefined8 *)
                                           (lVar6 + (long)(*piVar11 + 3) * 0x10 + 0x138);
                                  goto LAB_0146a5cc;
                                }
                                uVar12 = uVar12 - 1;
                                piVar11 = piVar11 + 4;
                              } while (uVar12 != 0);
                            }
                            puVar9 = (undefined8 *)
                                     func_0x00a9e6c4(plVar3,_UnityEngine_ILogger_TypeInfo,3);
LAB_0146a5cc:
                    /* WARNING: Could not recover jumptable at 0x0146a5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            (*(code *)*puVar9)(plVar3,0,uVar5,puVar9[1]);
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


// ==== private void LJHPMNOJKCJ() { }   @0xb4eed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__LJHPMNOJKCJ(void *__this)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam000000000191717f & 1) == 0) {
    func_0x00a67900(&UnityEngine_Rendering_CommandBuffer_TypeInfo);
    func_0x00a67900(&Str_Mask);
    func_0x00a67900(&Str_Outer_Glow);
    func_0x00a67900(&Str_Inner_Glow);
    func_0x00a67900(&Str_Outline);
    func_0x00a67900(&Str_Overlay);
    func_0x00a67900(&Str_See_Through);
    bRam000000000191717f = 1;
  }
  if (*(long *)((long)__this + 0xd8) == 0) {
    lVar2 = func_0x00a67b44(_UnityEngine_Rendering_CommandBuffer_TypeInfo);
    UnityEngine_Rendering_CommandBuffer___ctor(lVar2,0);
    *(long *)((long)__this + 0xd8) = lVar2;
    if (lVar2 == 0) goto LAB_00c4f0f0;
    UnityEngine_Rendering_CommandBuffer__set_name(lVar2,_Str_Mask,0);
  }
  if (*(long *)((long)__this + 0xe0) == 0) {
    lVar2 = func_0x00a67b44(_UnityEngine_Rendering_CommandBuffer_TypeInfo);
    UnityEngine_Rendering_CommandBuffer___ctor(lVar2,0);
    *(long *)((long)__this + 0xe0) = lVar2;
    if (lVar2 == 0) goto LAB_00c4f0f0;
    UnityEngine_Rendering_CommandBuffer__set_name(lVar2,_Str_See_Through,0);
  }
  if (*(long *)((long)__this + 0xe8) == 0) {
    lVar2 = func_0x00a67b44(_UnityEngine_Rendering_CommandBuffer_TypeInfo);
    UnityEngine_Rendering_CommandBuffer___ctor(lVar2,0);
    *(long *)((long)__this + 0xe8) = lVar2;
    if (lVar2 == 0) goto LAB_00c4f0f0;
    UnityEngine_Rendering_CommandBuffer__set_name(lVar2,_Str_Outer_Glow,0);
  }
  if (*(long *)((long)__this + 0xf0) == 0) {
    lVar2 = func_0x00a67b44(_UnityEngine_Rendering_CommandBuffer_TypeInfo);
    UnityEngine_Rendering_CommandBuffer___ctor(lVar2,0);
    *(long *)((long)__this + 0xf0) = lVar2;
    if (lVar2 == 0) goto LAB_00c4f0f0;
    UnityEngine_Rendering_CommandBuffer__set_name(lVar2,_Str_Outline,0);
  }
  if (*(long *)((long)__this + 0xf8) == 0) {
    lVar2 = func_0x00a67b44(_UnityEngine_Rendering_CommandBuffer_TypeInfo);
    UnityEngine_Rendering_CommandBuffer___ctor(lVar2,0);
    *(long *)((long)__this + 0xf8) = lVar2;
    if (lVar2 == 0) goto LAB_00c4f0f0;
    UnityEngine_Rendering_CommandBuffer__set_name(lVar2,_Str_Overlay,0);
  }
  if (*(long *)((long)__this + 0x100) != 0) {
    return;
  }
  lVar2 = func_0x00a67b44(_UnityEngine_Rendering_CommandBuffer_TypeInfo);
  UnityEngine_Rendering_CommandBuffer___ctor(lVar2,0);
  *(long *)((long)__this + 0x100) = lVar2;
  uVar1 = _Str_Inner_Glow;
  if (lVar2 != 0) {
    if (pcRam000000000191caf0 == (code *)0x0) {
      pcRam000000000191caf0 = (code *)func_0x00a678c4(&UNK_005a657b);
    }
                    /* WARNING: Could not recover jumptable at 0x0149da30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191caf0)(lVar2,uVar1);
    return;
  }
LAB_00c4f0f0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void NIOEPGCGHOO() { }   @0xb504b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__NIOEPGCGHOO(void *__this)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000001917182 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Rendering_CommandBuffer_TypeInfo);
    func_0x00a67900(&Str_Smooth_Blend);
    bRam0000000001917182 = 1;
  }
  if (*(long *)((long)__this + 0x108) != 0) {
    return;
  }
  lVar2 = func_0x00a67b44(_UnityEngine_Rendering_CommandBuffer_TypeInfo);
  UnityEngine_Rendering_CommandBuffer___ctor(lVar2,0);
  *(long *)((long)__this + 0x108) = lVar2;
  uVar1 = _Str_Smooth_Blend;
  if (lVar2 != 0) {
    if (pcRam000000000191caf0 == (code *)0x0) {
      pcRam000000000191caf0 = (code *)func_0x00a678c4(&UNK_005a657b);
    }
                    /* WARNING: Could not recover jumptable at 0x0149da30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191caf0)(lVar2,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void MNGFBBNHKMK() { }   @0xb5175c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__MNGFBBNHKMK(void *__this)

{
  uint uVar1;
  void *pvVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  void *pvStack_68;
  
  uVar7 = UnityEngine_Behaviour__get_enabled(__this,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if ((bRam0000000001917184 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_HighlightEffect___);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_MeshCollider___);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Renderer___);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponentsInChildren_Renderer___);
    func_0x00a67900(&HighlightPlus_HighlightEffect_TypeInfo);
    func_0x00a67900(&HighlightPlus_HighlightEffect_IENBCEHONPE___TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_Renderer___TypeInfo);
    func_0x00a67900(&UnityEngine_SkinnedMeshRenderer_TypeInfo);
    bRam0000000001917184 = 1;
  }
  uVar9 = *(undefined8 *)((long)__this + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar9,0,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar9 = **(undefined8 **)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar9,0,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)((long)__this + 0x24)) {
  case 1:
    if (*(long *)((long)__this + 0xb8) == 0) goto LAB_00c4fccc;
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
              (*(long *)((long)__this + 0xb8),&pvStack_68,
               _Method_UnityEngine_Component_GetComponent_Renderer___);
    pvVar8 = pvStack_68;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = 0;
    uVar7 = UnityEngine_Object__op_Inequality(pvVar8,0,0);
    if ((uVar7 & 1) == 0) goto code_r0x00c4fe2c;
    plVar5 = (long *)func_0x00a679a0(_UnityEngine_Renderer___TypeInfo,1);
    if (plVar5 == (long *)0x0) goto LAB_00c4fccc;
    if ((pvVar8 != (void *)0x0) &&
       (lVar4 = func_0x00a67a34(pvVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0)) {
code_r0x00c5033c:
      uVar6 = func_0x00a67b74();
      auVar14 = func_0x00a67a20(uVar6,0);
      if ((bRam000000000191718f & 1) == 0) {
        func_0x00a67900(&UnityEngine_Debug_TypeInfo);
        func_0x00a67900(&UnityEngine_Material_TypeInfo);
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        func_0x00a67900(&Str__not_found_);
        func_0x00a67900(&Str_Shader_);
        bRam000000000191718f = 1;
      }
      uVar6 = *auVar14._8_8_;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar6,0,0);
      if ((uVar7 & 1) != 0) {
        uVar6 = UnityEngine_Shader__Find(uVar9,0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar7 = UnityEngine_Object__op_Equality(uVar6,0,0);
        if ((uVar7 & 1) != 0) {
          uVar9 = System_String__Concat(_Str_Shader_,uVar9,_Str__not_found_,0);
          if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__LogError(uVar9,0);
          if (pcRam000000000191c328 == (code *)0x0) {
            pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
          }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191c328)(auVar14._0_8_,0);
          return;
        }
        uVar9 = func_0x00a67b44(_UnityEngine_Material_TypeInfo);
        UnityEngine_Material___ctor(uVar9,uVar6,0);
        *auVar14._8_8_ = uVar9;
      }
      return;
    }
    if ((int)plVar5[3] == 0) {
LAB_00c50330:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar5[4] = (long)pvVar8;
    goto LAB_00c4fe44;
  case 2:
    for (lVar4 = *(long *)((long)__this + 0xb8); lVar4 != 0;
        lVar4 = UnityEngine_Transform__get_parent(lVar4,0)) {
      uVar9 = UnityEngine_Transform__get_parent(lVar4,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar9,0,0);
      if ((uVar7 & 1) == 0) goto LAB_00c4fe1c;
    }
    goto LAB_00c4fccc;
  case 3:
    uVar6 = *(undefined8 *)((long)__this + 0xb8);
    uVar9 = UnityEngine_Component__get_transform(__this,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar6,uVar9,0);
    pvVar8 = __this;
    if ((uVar7 & 1) != 0) {
      if (*(long *)((long)__this + 0xb8) == 0) goto LAB_00c4fccc;
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (*(long *)((long)__this + 0xb8),&pvStack_68,
                 _Method_UnityEngine_Component_GetComponent_HighlightEffect___);
      pvVar2 = pvStack_68;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(pvVar2,0,0);
      if (((uVar7 & 1) != 0) && (pvVar8 = pvVar2, pvVar2 == (void *)0x0)) goto LAB_00c4fccc;
    }
    plVar5 = (long *)HighlightPlus_HighlightEffect__MBLILGODLLD
                               (__this,*(undefined4 *)((long)pvVar8 + 0x28));
    break;
  case 4:
    uVar6 = *(undefined8 *)((long)__this + 0xb8);
    uVar9 = UnityEngine_Component__get_transform(__this,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar6,uVar9,0);
    pvVar8 = __this;
    if ((uVar7 & 1) != 0) {
      if (*(long *)((long)__this + 0xb8) == 0) goto LAB_00c4fccc;
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (*(long *)((long)__this + 0xb8),&pvStack_68,
                 _Method_UnityEngine_Component_GetComponent_HighlightEffect___);
      pvVar2 = pvStack_68;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(pvVar2,0,0);
      if (((uVar7 & 1) != 0) && (pvVar8 = pvVar2, pvVar2 == (void *)0x0)) goto LAB_00c4fccc;
    }
    plVar5 = (long *)HighlightPlus_HighlightEffect__OOAODFPDJAL
                               (__this,*(undefined4 *)((long)pvVar8 + 0x28));
    break;
  default:
    lVar4 = *(long *)((long)__this + 0xb8);
    if (lVar4 == 0) goto LAB_00c4fccc;
LAB_00c4fe1c:
    plVar5 = (long *)UnityEngine_Component__GetComponentsInChildren___Il2CppFullySharedGenericType_
                               (lVar4,
                                _Method_UnityEngine_Component_GetComponentsInChildren_Renderer___);
  }
  if (plVar5 == (long *)0x0) {
code_r0x00c4fe2c:
    plVar5 = (long *)func_0x00a679a0(_UnityEngine_Renderer___TypeInfo,0);
  }
LAB_00c4fe44:
  if (*(long *)((long)__this + 0xa8) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_00c4fccc;
  }
  else {
    if (plVar5 == (long *)0x0) {
LAB_00c4fccc:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if ((int)plVar5[3] <= *(int *)(*(long *)((long)__this + 0xa8) + 0x18)) goto LAB_00c4fe80;
  }
  uVar9 = func_0x00a679a0(_HighlightPlus_HighlightEffect_IENBCEHONPE___TypeInfo,(int)plVar5[3]);
  *(undefined8 *)((long)__this + 0xa8) = uVar9;
LAB_00c4fe80:
  *(undefined4 *)((long)__this + 0xb0) = 0;
  if (0 < (int)plVar5[3]) {
    uVar13 = 0;
    do {
      lVar4 = *(long *)((long)__this + 0xa8);
      if (lVar4 == 0) goto LAB_00c4fccc;
      if ((*(uint *)(lVar4 + 0x18) <= *(uint *)((long)__this + 0xb0)) ||
         (func_0x016decb0(lVar4 + (long)(int)*(uint *)((long)__this + 0xb0) * 0xb0 + 0x20,0,0xb0),
         *(uint *)(plVar5 + 3) <= uVar13)) goto LAB_00c50330;
      lVar4 = *(long *)((long)__this + 0xa8);
      if (lVar4 == 0) goto LAB_00c4fccc;
      uVar1 = *(uint *)((long)__this + 0xb0);
      if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_00c50330;
      plVar10 = (long *)plVar5[(long)(int)uVar13 + 4];
      *(long **)(lVar4 + (long)(int)uVar1 * 0xb0 + 0x70) = plVar10;
      if (plVar10 == (long *)0x0) goto LAB_00c4fccc;
      bVar3 = UnityEngine_Renderer__get_isVisible(plVar10,0);
      if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_00c50330;
      *(byte *)(lVar4 + (long)(int)uVar1 * 0xb0 + 0x58) = bVar3 & 1;
      uVar6 = UnityEngine_Component__get_transform(plVar10,0);
      uVar11 = *(undefined8 *)((long)__this + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar9 = 0;
      uVar7 = UnityEngine_Object__op_Inequality(uVar6,uVar11,0);
      if ((uVar7 & 1) == 0) {
LAB_00c4ffcc:
        lVar4 = *(long *)((long)__this + 0xa0);
        if (lVar4 == 0) {
LAB_00c4ffec:
          lVar4 = _UnityEngine_SkinnedMeshRenderer_TypeInfo;
          bVar3 = *(byte *)(_UnityEngine_SkinnedMeshRenderer_TypeInfo + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar10 + 200) + ((ulong)bVar3 - 1) * 8) !=
              _UnityEngine_SkinnedMeshRenderer_TypeInfo)) {
            if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Application__get_isPlaying(0);
            if (((uVar7 & 1) == 0) ||
               (uVar7 = UnityEngine_Renderer__get_isPartOfStaticBatch(plVar10,0), (uVar7 & 1) == 0))
            {
              UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                        (plVar10,&pvStack_68,
                         _Method_UnityEngine_Component_GetComponent_MeshFilter___);
              pvVar8 = pvStack_68;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Inequality(pvVar8,0,0);
              if ((uVar7 & 1) != 0) {
                lVar4 = *(long *)((long)__this + 0xa8);
                if ((lVar4 != 0) && (pvVar8 != (void *)0x0)) {
                  uVar1 = *(uint *)((long)__this + 0xb0);
                  uVar9 = UnityEngine_MeshFilter__get_sharedMesh(pvVar8,0);
                  goto LAB_00c50108;
                }
                goto LAB_00c4fccc;
              }
            }
            else {
              UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                        (plVar10,&pvStack_68,
                         _Method_UnityEngine_Component_GetComponent_MeshCollider___);
              pvVar8 = pvStack_68;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Inequality(pvVar8,0,0);
              if ((uVar7 & 1) != 0) {
                lVar4 = *(long *)((long)__this + 0xa8);
                if ((lVar4 == 0) || (pvVar8 == (void *)0x0)) goto LAB_00c4fccc;
                uVar1 = *(uint *)((long)__this + 0xb0);
                uVar9 = UnityEngine_MeshCollider__get_sharedMesh(pvVar8,0);
LAB_00c50108:
                if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_00c50330;
                *(undefined8 *)(lVar4 + (long)(int)uVar1 * 0xb0 + 0x60) = uVar9;
              }
            }
          }
          else {
            lVar12 = *(long *)((long)__this + 0xa8);
            if (lVar12 == 0) goto LAB_00c4fccc;
            uVar1 = *(uint *)((long)__this + 0xb0);
            if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_00c50330;
            *(undefined1 *)(lVar12 + (long)(int)uVar1 * 0xb0 + 0x78) = 1;
            if ((*(byte *)(*plVar10 + 0x130) < bVar3) ||
               (*(long *)(*(long *)(*plVar10 + 200) + ((ulong)bVar3 - 1) * 8) != lVar4)) {
              func_0x00a67eec(plVar10);
              goto code_r0x00c5033c;
            }
            uVar9 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(plVar10,0);
            if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_00c50330;
            *(undefined8 *)(lVar12 + (long)(int)uVar1 * 0xb0 + 0x60) = uVar9;
            HighlightPlus_HighlightEffect__LJHPMNOJKCJ(__this);
          }
          lVar4 = *(long *)((long)__this + 0xa8);
          if (lVar4 == 0) goto LAB_00c4fccc;
          if (*(uint *)(lVar4 + 0x18) <= *(uint *)((long)__this + 0xb0)) goto LAB_00c50330;
          uVar9 = *(undefined8 *)(lVar4 + (long)(int)*(uint *)((long)__this + 0xb0) * 0xb0 + 0x60);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Equality(uVar9,0,0);
          if ((uVar7 & 1) != 0) goto LAB_00c502f8;
          lVar4 = *(long *)((long)__this + 0xa8);
          if (lVar4 == 0) goto LAB_00c4fccc;
          uVar1 = *(uint *)((long)__this + 0xb0);
          uVar9 = UnityEngine_Component__get_transform(plVar10,0);
          if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_00c50330;
          *(undefined8 *)(lVar4 + (long)(int)uVar1 * 0xb0 + 0x28) = uVar9;
          lVar4 = *(long *)((long)__this + 0xa8);
          if (lVar4 == 0) goto LAB_00c4fccc;
          uVar1 = *(uint *)((long)__this + 0xb0);
          if ((*(uint *)(lVar4 + 0x18) <= uVar1) ||
             (uVar9 = HighlightPlus_HighlightEffect__HFOBHOCHGAG
                                (uVar9,**(undefined8 **)
                                         (_HighlightPlus_HighlightEffect_TypeInfo + 0xb8),
                                 *(undefined8 *)(lVar4 + (long)(int)uVar1 * 0xb0 + 0x60)),
             *(uint *)(lVar4 + 0x18) <= uVar1)) goto LAB_00c50330;
          *(undefined8 *)(lVar4 + (long)(int)uVar1 * 0xb0 + 0x80) = uVar9;
          lVar4 = *(long *)((long)__this + 0xa8);
          if (lVar4 == 0) goto LAB_00c4fccc;
          uVar1 = *(uint *)((long)__this + 0xb0);
          if ((*(uint *)(lVar4 + 0x18) <= uVar1) ||
             (uVar9 = HighlightPlus_HighlightEffect__HFOBHOCHGAG
                                (uVar9,*(undefined8 *)
                                        (*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) +
                                        8),*(undefined8 *)(lVar4 + (long)(int)uVar1 * 0xb0 + 0x60)),
             *(uint *)(lVar4 + 0x18) <= uVar1)) goto LAB_00c50330;
          *(undefined8 *)(lVar4 + (long)(int)uVar1 * 0xb0 + 0x88) = uVar9;
          lVar4 = *(long *)((long)__this + 0xa8);
          if (lVar4 == 0) goto LAB_00c4fccc;
          uVar1 = *(uint *)((long)__this + 0xb0);
          if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_00c50330;
          lVar4 = lVar4 + (long)(int)uVar1 * 0xb0;
          *(undefined8 *)(lVar4 + 0x68) = *(undefined8 *)(lVar4 + 0x60);
          if (*(char *)(lVar4 + 0x78) == '\0') {
            HighlightPlus_HighlightEffect__FOOMPJKOKED(__this);
            HighlightPlus_HighlightEffect__LMBLEGHLDPO
                      (__this,*(undefined4 *)((long)__this + 0xb0),1);
            uVar1 = *(uint *)((long)__this + 0xb0);
          }
        }
        else {
          uVar9 = *(undefined8 *)(lVar4 + 0x28);
          uVar7 = (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),plVar10,uVar9);
          if ((uVar7 & 1) != 0) goto LAB_00c4ffec;
          uVar1 = *(uint *)((long)__this + 0xb0);
        }
        *(uint *)((long)__this + 0xb0) = uVar1 + 1;
      }
      else {
        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                  (plVar10,&pvStack_68,_Method_UnityEngine_Component_GetComponent_HighlightEffect___
                  );
        pvVar8 = pvStack_68;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar9 = 0;
        uVar7 = UnityEngine_Object__op_Inequality(pvVar8,0,0);
        if ((uVar7 & 1) == 0) goto LAB_00c4ffcc;
        if (pvVar8 == (void *)0x0) goto LAB_00c4fccc;
        uVar7 = UnityEngine_Behaviour__get_enabled(pvVar8,0);
        if ((uVar7 & 1) == 0) goto LAB_00c4ffcc;
        HighlightPlus_HighlightEffect__KPABICCDIIP(pvVar8,*(bool *)((long)__this + 0x34));
      }
LAB_00c502f8:
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)plVar5[3]);
  }
  HighlightPlus_HighlightEffect__KGMPKNIGPBG(__this);
  return;
}


// ==== public void KGMPKNIGPBG() { }   @0xb510d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__KGMPKNIGPBG(void *__this)

{
  byte bVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  undefined4 uVar14;
  
  if ((bRam0000000001917189 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__ConstantWidth);
    func_0x00a67900(&Str__Cull);
    func_0x00a67900(&Str_HP_ALPHACLIP);
    func_0x00a67900(&Str__OutlineWidth);
    func_0x00a67900(&Str__Color);
    func_0x00a67900(&Str__MainTex);
    func_0x00a67900(&Str__CutOff);
    func_0x00a67900(&Str__OverlayBackColor);
    func_0x00a67900(&Str__OutlineZTest);
    func_0x00a67900(&Str__OutlineDirection);
    bRam0000000001917189 = 1;
  }
  lVar8 = *(long *)((long)__this + 0xa8);
  if (lVar8 != 0) {
    if (*(char *)((long)__this + 0x33) != '\0') {
      *(undefined1 *)((long)__this + 0x34) = 0;
    }
    if (*(float *)((long)__this + 0x78) < 0.0) {
      *(undefined4 *)((long)__this + 0x78) = 0;
    }
    if (*(float *)((long)__this + 0x44) < *(float *)((long)__this + 0x5c)) {
      *(float *)((long)__this + 0x44) = *(float *)((long)__this + 0x5c);
    }
    if (0 < *(int *)((long)__this + 0xb0)) {
      uVar11 = 0;
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar11) {
LAB_00c5173c:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        uVar10 = *(undefined8 *)(lVar8 + uVar11 * 0xb0 + 0x60);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar10,0,0);
        if ((uVar5 & 1) != 0) {
          fVar13 = 0.0;
          if (*(int *)((long)__this + 0x7c) != 1) {
            fVar13 = *(float *)((long)__this + 0x78) / 100.0;
          }
          if (*(long *)((long)__this + 200) == 0) break;
          UnityEngine_Material__SetFloat(fVar13,*(long *)((long)__this + 200),_Str__OutlineWidth,0);
          lVar8 = *(long *)((long)__this + 200);
          if (cRam0000000001916789 == '\0') {
            func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
            cRam0000000001916789 = '\x01';
          }
          if (lVar8 == 0) break;
          puVar9 = *(undefined4 **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
          UnityEngine_Material__SetVector
                    (*puVar9,puVar9[1],puVar9[2],0,lVar8,_Str__OutlineDirection,0);
          if (*(long *)((long)__this + 200) == 0) break;
          uVar14 = 4;
          if (*(int *)((long)__this + 0x84) == 2) {
            uVar14 = 5;
          }
          uVar2 = 8;
          if (*(int *)((long)__this + 0x84) != 1) {
            uVar2 = uVar14;
          }
          UnityEngine_Material__SetInt(*(long *)((long)__this + 200),_Str__OutlineZTest,uVar2,0);
          if (*(long *)((long)__this + 200) == 0) break;
          UnityEngine_Material__SetInt
                    (*(long *)((long)__this + 200),_Str__Cull,
                     (ulong)*(byte *)((long)__this + 0x30) << 1,0);
          if (*(long *)((long)__this + 200) == 0) break;
          uVar14 = 0;
          if (*(char *)((long)__this + 0x41) != '\0') {
            uVar14 = 0x3f800000;
          }
          UnityEngine_Material__SetFloat(uVar14,*(long *)((long)__this + 200),_Str__ConstantWidth,0)
          ;
          lVar8 = *(long *)((long)__this + 0xa8);
          if (lVar8 == 0) break;
          lVar12 = 4;
          while( true ) {
            if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_00c5173c;
            lVar8 = *(long *)(lVar8 + uVar11 * 0xb0 + 0x60);
            if (lVar8 == 0) goto LAB_00c51718;
            uVar5 = lVar12 - 4;
            iVar4 = UnityEngine_Mesh__get_subMeshCount(lVar8,0);
            if ((long)iVar4 <= (long)uVar5) break;
            lVar8 = *(long *)((long)__this + 0xa8);
            if (lVar8 == 0) goto LAB_00c51718;
            if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_00c5173c;
            lVar8 = *(long *)(lVar8 + uVar11 * 0xb0 + 0x70);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar6 = UnityEngine_Object__op_Equality(lVar8,0,0);
            if ((uVar6 & 1) == 0) {
              if (lVar8 == 0) goto LAB_00c51718;
              lVar7 = UnityEngine_Renderer__get_sharedMaterials(lVar8,0);
              if (lVar7 == 0) {
LAB_00c5141c:
                lVar8 = 0;
              }
              else {
                lVar7 = UnityEngine_Renderer__get_sharedMaterials(lVar8,0);
                if (lVar7 == 0) goto LAB_00c51718;
                if ((long)*(int *)(lVar7 + 0x18) <= (long)uVar5) goto LAB_00c5141c;
                lVar8 = UnityEngine_Renderer__get_sharedMaterials(lVar8,0);
                if (lVar8 == 0) goto LAB_00c51718;
                if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_00c5173c;
                lVar8 = *(long *)(lVar8 + lVar12 * 8);
              }
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar6 = UnityEngine_Object__op_Equality(lVar8,0,0);
              if ((uVar6 & 1) == 0) {
                if (lVar8 == 0) goto LAB_00c51718;
                bVar3 = UnityEngine_Material__HasProperty(lVar8,_Str__MainTex,0);
                lVar7 = *(long *)((long)__this + 0xa8);
                if (lVar7 == 0) goto LAB_00c51718;
                if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_00c5173c;
                lVar7 = *(long *)(lVar7 + uVar11 * 0xb0 + 0x80);
                bVar1 = bVar3 & 0.0 < *(float *)((long)__this + 0x2c);
                if ((lVar7 != 0) && ((long)uVar5 < (long)(int)*(uint *)(lVar7 + 0x18))) {
                  if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_00c5173c;
                  lVar7 = *(long *)(lVar7 + lVar12 * 8);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar6 = UnityEngine_Object__op_Inequality(lVar7,0,0);
                  if ((uVar6 & 1) != 0) {
                    if ((bVar3 & 1) == 0) {
                      if (lVar7 == 0) goto LAB_00c51718;
LAB_00c5155c:
                      UnityEngine_Material__DisableKeyword(lVar7,_Str_HP_ALPHACLIP,0);
                    }
                    else {
                      uVar10 = UnityEngine_Material__get_mainTexture(lVar8,0);
                      if (lVar7 == 0) goto LAB_00c51718;
                      UnityEngine_Material__set_mainTexture(lVar7,uVar10,0);
                      UnityEngine_Material__get_mainTextureOffset(lVar8,0);
                      UnityEngine_Material__set_mainTextureOffset(lVar7,0);
                      UnityEngine_Material__get_mainTextureScale(lVar8,0);
                      UnityEngine_Material__set_mainTextureScale(lVar7,0);
                      if (bVar1 == 0) goto LAB_00c5155c;
                      UnityEngine_Material__SetFloat
                                (*(undefined4 *)((long)__this + 0x2c),lVar7,_Str__CutOff,0);
                      UnityEngine_Material__EnableKeyword(lVar7,_Str_HP_ALPHACLIP,0);
                    }
                    UnityEngine_Material__SetInt
                              (lVar7,_Str__Cull,(ulong)*(byte *)((long)__this + 0x30) << 1,0);
                  }
                }
                lVar7 = *(long *)((long)__this + 0xa8);
                if (lVar7 == 0) goto LAB_00c51718;
                if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_00c5173c;
                lVar7 = *(long *)(lVar7 + uVar11 * 0xb0 + 0x88);
                if ((lVar7 != 0) && ((long)uVar5 < (long)(int)*(uint *)(lVar7 + 0x18))) {
                  if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_00c5173c;
                  lVar7 = *(long *)(lVar7 + lVar12 * 8);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar5 = UnityEngine_Object__op_Inequality(lVar7,0,0);
                  if ((uVar5 & 1) != 0) {
                    if ((bVar3 & 1) != 0) {
                      uVar10 = UnityEngine_Material__get_mainTexture(lVar8,0);
                      if (lVar7 == 0) goto LAB_00c51718;
                      UnityEngine_Material__set_mainTexture(lVar7,uVar10,0);
                      UnityEngine_Material__get_mainTextureOffset(lVar8,0);
                      UnityEngine_Material__set_mainTextureOffset(lVar7,0);
                      UnityEngine_Material__get_mainTextureScale(lVar8,0);
                      UnityEngine_Material__set_mainTextureScale(lVar7,0);
                    }
                    uVar5 = UnityEngine_Material__HasProperty(lVar8,_Str__Color,0);
                    if ((uVar5 & 1) != 0) {
                      UnityEngine_Material__GetColor(lVar8,_Str__Color,0);
                      if (lVar7 == 0) goto LAB_00c51718;
                      UnityEngine_Material__SetColor(lVar7,_Str__OverlayBackColor,0);
                    }
                    if (bVar1 == 0) {
                      if (lVar7 == 0) goto LAB_00c51718;
                      UnityEngine_Material__DisableKeyword(lVar7,_Str_HP_ALPHACLIP,0);
                    }
                    else {
                      if (lVar7 == 0) goto LAB_00c51718;
                      UnityEngine_Material__SetFloat
                                (*(undefined4 *)((long)__this + 0x2c),lVar7,_Str__CutOff,0);
                      UnityEngine_Material__EnableKeyword(lVar7,_Str_HP_ALPHACLIP,0);
                    }
                  }
                }
              }
            }
            lVar8 = *(long *)((long)__this + 0xa8);
            lVar12 = lVar12 + 1;
            if (lVar8 == 0) goto LAB_00c51718;
          }
        }
        uVar11 = uVar11 + 1;
        if ((long)*(int *)((long)__this + 0xb0) <= (long)uVar11) {
          return;
        }
        lVar8 = *(long *)((long)__this + 0xa8);
      } while (lVar8 != 0);
LAB_00c51718:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
}


// ==== private void Reset() { }   @0xb51b38

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__Reset(void *__this)

{
  uint uVar1;
  void *pvVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  void *pvStack_68;
  
  if ((bRam0000000001917184 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_HighlightEffect___);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_MeshCollider___);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Renderer___);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponentsInChildren_Renderer___);
    func_0x00a67900(&HighlightPlus_HighlightEffect_TypeInfo);
    func_0x00a67900(&HighlightPlus_HighlightEffect_IENBCEHONPE___TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_Renderer___TypeInfo);
    func_0x00a67900(&UnityEngine_SkinnedMeshRenderer_TypeInfo);
    bRam0000000001917184 = 1;
  }
  uVar9 = *(undefined8 *)((long)__this + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Equality(uVar9,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar9 = **(undefined8 **)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Equality(uVar9,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)((long)__this + 0x24)) {
  case 1:
    if (*(long *)((long)__this + 0xb8) == 0) goto LAB_00c4fccc;
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
              (*(long *)((long)__this + 0xb8),&pvStack_68,
               _Method_UnityEngine_Component_GetComponent_Renderer___);
    pvVar8 = pvStack_68;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = 0;
    uVar4 = UnityEngine_Object__op_Inequality(pvVar8,0,0);
    if ((uVar4 & 1) == 0) goto code_r0x00c4fe2c;
    plVar6 = (long *)func_0x00a679a0(_UnityEngine_Renderer___TypeInfo,1);
    if (plVar6 == (long *)0x0) goto LAB_00c4fccc;
    if ((pvVar8 != (void *)0x0) &&
       (lVar5 = func_0x00a67a34(pvVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)) {
code_r0x00c5033c:
      uVar7 = func_0x00a67b74();
      auVar14 = func_0x00a67a20(uVar7,0);
      if ((bRam000000000191718f & 1) == 0) {
        func_0x00a67900(&UnityEngine_Debug_TypeInfo);
        func_0x00a67900(&UnityEngine_Material_TypeInfo);
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        func_0x00a67900(&Str__not_found_);
        func_0x00a67900(&Str_Shader_);
        bRam000000000191718f = 1;
      }
      uVar7 = *auVar14._8_8_;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Equality(uVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar7 = UnityEngine_Shader__Find(uVar9,0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar4 = UnityEngine_Object__op_Equality(uVar7,0,0);
        if ((uVar4 & 1) != 0) {
          uVar9 = System_String__Concat(_Str_Shader_,uVar9,_Str__not_found_,0);
          if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__LogError(uVar9,0);
          if (pcRam000000000191c328 == (code *)0x0) {
            pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
          }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191c328)(auVar14._0_8_,0);
          return;
        }
        uVar9 = func_0x00a67b44(_UnityEngine_Material_TypeInfo);
        UnityEngine_Material___ctor(uVar9,uVar7,0);
        *auVar14._8_8_ = uVar9;
      }
      return;
    }
    if ((int)plVar6[3] == 0) {
LAB_00c50330:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar6[4] = (long)pvVar8;
    goto LAB_00c4fe44;
  case 2:
    for (lVar5 = *(long *)((long)__this + 0xb8); lVar5 != 0;
        lVar5 = UnityEngine_Transform__get_parent(lVar5,0)) {
      uVar9 = UnityEngine_Transform__get_parent(lVar5,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar9,0,0);
      if ((uVar4 & 1) == 0) goto LAB_00c4fe1c;
    }
    goto LAB_00c4fccc;
  case 3:
    uVar7 = *(undefined8 *)((long)__this + 0xb8);
    uVar9 = UnityEngine_Component__get_transform(__this,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar7,uVar9,0);
    pvVar8 = __this;
    if ((uVar4 & 1) != 0) {
      if (*(long *)((long)__this + 0xb8) == 0) goto LAB_00c4fccc;
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (*(long *)((long)__this + 0xb8),&pvStack_68,
                 _Method_UnityEngine_Component_GetComponent_HighlightEffect___);
      pvVar2 = pvStack_68;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(pvVar2,0,0);
      if (((uVar4 & 1) != 0) && (pvVar8 = pvVar2, pvVar2 == (void *)0x0)) goto LAB_00c4fccc;
    }
    plVar6 = (long *)HighlightPlus_HighlightEffect__MBLILGODLLD
                               (__this,*(undefined4 *)((long)pvVar8 + 0x28));
    break;
  case 4:
    uVar7 = *(undefined8 *)((long)__this + 0xb8);
    uVar9 = UnityEngine_Component__get_transform(__this,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar7,uVar9,0);
    pvVar8 = __this;
    if ((uVar4 & 1) != 0) {
      if (*(long *)((long)__this + 0xb8) == 0) goto LAB_00c4fccc;
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (*(long *)((long)__this + 0xb8),&pvStack_68,
                 _Method_UnityEngine_Component_GetComponent_HighlightEffect___);
      pvVar2 = pvStack_68;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(pvVar2,0,0);
      if (((uVar4 & 1) != 0) && (pvVar8 = pvVar2, pvVar2 == (void *)0x0)) goto LAB_00c4fccc;
    }
    plVar6 = (long *)HighlightPlus_HighlightEffect__OOAODFPDJAL
                               (__this,*(undefined4 *)((long)pvVar8 + 0x28));
    break;
  default:
    lVar5 = *(long *)((long)__this + 0xb8);
    if (lVar5 == 0) goto LAB_00c4fccc;
LAB_00c4fe1c:
    plVar6 = (long *)UnityEngine_Component__GetComponentsInChildren___Il2CppFullySharedGenericType_
                               (lVar5,
                                _Method_UnityEngine_Component_GetComponentsInChildren_Renderer___);
  }
  if (plVar6 == (long *)0x0) {
code_r0x00c4fe2c:
    plVar6 = (long *)func_0x00a679a0(_UnityEngine_Renderer___TypeInfo,0);
  }
LAB_00c4fe44:
  if (*(long *)((long)__this + 0xa8) == 0) {
    if (plVar6 == (long *)0x0) goto LAB_00c4fccc;
  }
  else {
    if (plVar6 == (long *)0x0) {
LAB_00c4fccc:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if ((int)plVar6[3] <= *(int *)(*(long *)((long)__this + 0xa8) + 0x18)) goto LAB_00c4fe80;
  }
  uVar9 = func_0x00a679a0(_HighlightPlus_HighlightEffect_IENBCEHONPE___TypeInfo,(int)plVar6[3]);
  *(undefined8 *)((long)__this + 0xa8) = uVar9;
LAB_00c4fe80:
  *(undefined4 *)((long)__this + 0xb0) = 0;
  if (0 < (int)plVar6[3]) {
    uVar13 = 0;
    do {
      lVar5 = *(long *)((long)__this + 0xa8);
      if (lVar5 == 0) goto LAB_00c4fccc;
      if ((*(uint *)(lVar5 + 0x18) <= *(uint *)((long)__this + 0xb0)) ||
         (func_0x016decb0(lVar5 + (long)(int)*(uint *)((long)__this + 0xb0) * 0xb0 + 0x20,0,0xb0),
         *(uint *)(plVar6 + 3) <= uVar13)) goto LAB_00c50330;
      lVar5 = *(long *)((long)__this + 0xa8);
      if (lVar5 == 0) goto LAB_00c4fccc;
      uVar1 = *(uint *)((long)__this + 0xb0);
      if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_00c50330;
      plVar10 = (long *)plVar6[(long)(int)uVar13 + 4];
      *(long **)(lVar5 + (long)(int)uVar1 * 0xb0 + 0x70) = plVar10;
      if (plVar10 == (long *)0x0) goto LAB_00c4fccc;
      bVar3 = UnityEngine_Renderer__get_isVisible(plVar10,0);
      if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_00c50330;
      *(byte *)(lVar5 + (long)(int)uVar1 * 0xb0 + 0x58) = bVar3 & 1;
      uVar7 = UnityEngine_Component__get_transform(plVar10,0);
      uVar11 = *(undefined8 *)((long)__this + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar9 = 0;
      uVar4 = UnityEngine_Object__op_Inequality(uVar7,uVar11,0);
      if ((uVar4 & 1) == 0) {
LAB_00c4ffcc:
        lVar5 = *(long *)((long)__this + 0xa0);
        if (lVar5 == 0) {
LAB_00c4ffec:
          lVar5 = _UnityEngine_SkinnedMeshRenderer_TypeInfo;
          bVar3 = *(byte *)(_UnityEngine_SkinnedMeshRenderer_TypeInfo + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar10 + 200) + ((ulong)bVar3 - 1) * 8) !=
              _UnityEngine_SkinnedMeshRenderer_TypeInfo)) {
            if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = UnityEngine_Application__get_isPlaying(0);
            if (((uVar4 & 1) == 0) ||
               (uVar4 = UnityEngine_Renderer__get_isPartOfStaticBatch(plVar10,0), (uVar4 & 1) == 0))
            {
              UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                        (plVar10,&pvStack_68,
                         _Method_UnityEngine_Component_GetComponent_MeshFilter___);
              pvVar8 = pvStack_68;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar4 = UnityEngine_Object__op_Inequality(pvVar8,0,0);
              if ((uVar4 & 1) != 0) {
                lVar5 = *(long *)((long)__this + 0xa8);
                if ((lVar5 != 0) && (pvVar8 != (void *)0x0)) {
                  uVar1 = *(uint *)((long)__this + 0xb0);
                  uVar9 = UnityEngine_MeshFilter__get_sharedMesh(pvVar8,0);
                  goto LAB_00c50108;
                }
                goto LAB_00c4fccc;
              }
            }
            else {
              UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                        (plVar10,&pvStack_68,
                         _Method_UnityEngine_Component_GetComponent_MeshCollider___);
              pvVar8 = pvStack_68;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar4 = UnityEngine_Object__op_Inequality(pvVar8,0,0);
              if ((uVar4 & 1) != 0) {
                lVar5 = *(long *)((long)__this + 0xa8);
                if ((lVar5 == 0) || (pvVar8 == (void *)0x0)) goto LAB_00c4fccc;
                uVar1 = *(uint *)((long)__this + 0xb0);
                uVar9 = UnityEngine_MeshCollider__get_sharedMesh(pvVar8,0);
LAB_00c50108:
                if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_00c50330;
                *(undefined8 *)(lVar5 + (long)(int)uVar1 * 0xb0 + 0x60) = uVar9;
              }
            }
          }
          else {
            lVar12 = *(long *)((long)__this + 0xa8);
            if (lVar12 == 0) goto LAB_00c4fccc;
            uVar1 = *(uint *)((long)__this + 0xb0);
            if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_00c50330;
            *(undefined1 *)(lVar12 + (long)(int)uVar1 * 0xb0 + 0x78) = 1;
            if ((*(byte *)(*plVar10 + 0x130) < bVar3) ||
               (*(long *)(*(long *)(*plVar10 + 200) + ((ulong)bVar3 - 1) * 8) != lVar5)) {
              func_0x00a67eec(plVar10);
              goto code_r0x00c5033c;
            }
            uVar9 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(plVar10,0);
            if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_00c50330;
            *(undefined8 *)(lVar12 + (long)(int)uVar1 * 0xb0 + 0x60) = uVar9;
            HighlightPlus_HighlightEffect__LJHPMNOJKCJ(__this);
          }
          lVar5 = *(long *)((long)__this + 0xa8);
          if (lVar5 == 0) goto LAB_00c4fccc;
          if (*(uint *)(lVar5 + 0x18) <= *(uint *)((long)__this + 0xb0)) goto LAB_00c50330;
          uVar9 = *(undefined8 *)(lVar5 + (long)(int)*(uint *)((long)__this + 0xb0) * 0xb0 + 0x60);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar4 = UnityEngine_Object__op_Equality(uVar9,0,0);
          if ((uVar4 & 1) != 0) goto LAB_00c502f8;
          lVar5 = *(long *)((long)__this + 0xa8);
          if (lVar5 == 0) goto LAB_00c4fccc;
          uVar1 = *(uint *)((long)__this + 0xb0);
          uVar9 = UnityEngine_Component__get_transform(plVar10,0);
          if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_00c50330;
          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 0xb0 + 0x28) = uVar9;
          lVar5 = *(long *)((long)__this + 0xa8);
          if (lVar5 == 0) goto LAB_00c4fccc;
          uVar1 = *(uint *)((long)__this + 0xb0);
          if ((*(uint *)(lVar5 + 0x18) <= uVar1) ||
             (uVar9 = HighlightPlus_HighlightEffect__HFOBHOCHGAG
                                (uVar9,**(undefined8 **)
                                         (_HighlightPlus_HighlightEffect_TypeInfo + 0xb8),
                                 *(undefined8 *)(lVar5 + (long)(int)uVar1 * 0xb0 + 0x60)),
             *(uint *)(lVar5 + 0x18) <= uVar1)) goto LAB_00c50330;
          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 0xb0 + 0x80) = uVar9;
          lVar5 = *(long *)((long)__this + 0xa8);
          if (lVar5 == 0) goto LAB_00c4fccc;
          uVar1 = *(uint *)((long)__this + 0xb0);
          if ((*(uint *)(lVar5 + 0x18) <= uVar1) ||
             (uVar9 = HighlightPlus_HighlightEffect__HFOBHOCHGAG
                                (uVar9,*(undefined8 *)
                                        (*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) +
                                        8),*(undefined8 *)(lVar5 + (long)(int)uVar1 * 0xb0 + 0x60)),
             *(uint *)(lVar5 + 0x18) <= uVar1)) goto LAB_00c50330;
          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 0xb0 + 0x88) = uVar9;
          lVar5 = *(long *)((long)__this + 0xa8);
          if (lVar5 == 0) goto LAB_00c4fccc;
          uVar1 = *(uint *)((long)__this + 0xb0);
          if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_00c50330;
          lVar5 = lVar5 + (long)(int)uVar1 * 0xb0;
          *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(lVar5 + 0x60);
          if (*(char *)(lVar5 + 0x78) == '\0') {
            HighlightPlus_HighlightEffect__FOOMPJKOKED(__this);
            HighlightPlus_HighlightEffect__LMBLEGHLDPO
                      (__this,*(undefined4 *)((long)__this + 0xb0),1);
            uVar1 = *(uint *)((long)__this + 0xb0);
          }
        }
        else {
          uVar9 = *(undefined8 *)(lVar5 + 0x28);
          uVar4 = (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),plVar10,uVar9);
          if ((uVar4 & 1) != 0) goto LAB_00c4ffec;
          uVar1 = *(uint *)((long)__this + 0xb0);
        }
        *(uint *)((long)__this + 0xb0) = uVar1 + 1;
      }
      else {
        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                  (plVar10,&pvStack_68,_Method_UnityEngine_Component_GetComponent_HighlightEffect___
                  );
        pvVar8 = pvStack_68;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar9 = 0;
        uVar4 = UnityEngine_Object__op_Inequality(pvVar8,0,0);
        if ((uVar4 & 1) == 0) goto LAB_00c4ffcc;
        if (pvVar8 == (void *)0x0) goto LAB_00c4fccc;
        uVar4 = UnityEngine_Behaviour__get_enabled(pvVar8,0);
        if ((uVar4 & 1) == 0) goto LAB_00c4ffcc;
        HighlightPlus_HighlightEffect__KPABICCDIIP(pvVar8,*(bool *)((long)__this + 0x34));
      }
LAB_00c502f8:
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)plVar6[3]);
  }
  HighlightPlus_HighlightEffect__KGMPKNIGPBG(__this);
  return;
}


// ==== public void KPABICCDIIP(bool PGAPMNLLMHM) { }   @0xb4ec9c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__KPABICCDIIP(void *__this,bool PGAPMNLLMHM)

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
    *(bool *)((long)__this + 0x34) = PGAPMNLLMHM;
    return;
  }
  if (*(int *)((long)__this + 0xd4) == 0) {
    uVar6 = UnityEngine_Time__get_realtimeSinceStartup(0);
    *(undefined4 *)((long)__this + 0xd0) = uVar6;
  }
  if ((PGAPMNLLMHM) && (*(char *)((long)__this + 0x33) == '\0')) {
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



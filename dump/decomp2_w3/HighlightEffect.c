// ==== private void LMBLEGHLDPO(int NMPBHHIPPHP, bool EJJMIFBJEBK) { }   @0xb4da10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__LMBLEGHLDPO(void *__this,int NMPBHHIPPHP,bool EJJMIFBJEBK)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  undefined8 uVar9;
  float *pfVar10;
  long lVar11;
  float fVar12;
  undefined4 uVar13;
  float in_s1;
  float in_s2;
  float fVar14;
  
  if ((bRam000000000191717d & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_Mesh___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191717d = 1;
  }
  lVar4 = *(long *)((long)__this + 0xa8);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= (uint)NMPBHHIPPHP) {
LAB_00c4de08:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar11 = (long)NMPBHHIPPHP;
    uVar9 = *(undefined8 *)(lVar4 + lVar11 * 0xb0 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Equality(uVar9,0,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar4 = *(long *)((long)__this + 0xa8);
    if (lVar4 != 0) {
      if (*(uint *)(lVar4 + 0x18) <= (uint)NMPBHHIPPHP) goto LAB_00c4de08;
      lVar4 = *(long *)(lVar4 + lVar11 * 0xb0 + 0x28);
      if (lVar4 != 0) {
        fVar12 = (float)UnityEngine_Transform__get_localScale(lVar4,0);
        lVar5 = *(long *)((long)__this + 0xa8);
        if (lVar5 != 0) {
          if (*(uint *)(lVar5 + 0x18) <= (uint)NMPBHHIPPHP) goto LAB_00c4de08;
          if (0.0 <= in_s2 && (0.0 <= fVar12 && 0.0 <= in_s1)) {
            *(undefined1 *)(lVar5 + lVar11 * 0xb0 + 0x30) = 0;
            return;
          }
          if (EJJMIFBJEBK) {
            uVar9 = *(undefined8 *)(lVar5 + lVar11 * 0xb0 + 0x68);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar5 = UnityEngine_Object__Instantiate_object_
                              (uVar9,_Method_UnityEngine_Object_Instantiate_Mesh___);
          }
          else {
            lVar5 = *(long *)(lVar5 + lVar11 * 0xb0 + 0x60);
          }
          if ((lVar5 != 0) && (lVar3 = UnityEngine_Mesh__get_vertices(lVar5,0), lVar3 != 0)) {
            if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
              uVar2 = 0;
              uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
              pfVar10 = (float *)(lVar3 + 0x28);
              do {
                if (uVar6 <= uVar2) goto LAB_00c4de08;
                in_s1 = pfVar10[-1];
                in_s2 = *pfVar10;
                fVar12 = (float)UnityEngine_Transform__TransformPoint(pfVar10[-2],lVar4,0);
                uVar1 = *(uint *)(lVar3 + 0x18);
                uVar6 = (ulong)uVar1;
                if (uVar6 <= uVar2) goto LAB_00c4de08;
                uVar2 = uVar2 + 1;
                pfVar10[-2] = fVar12;
                pfVar10[-1] = in_s1;
                *pfVar10 = in_s2;
                pfVar10 = pfVar10 + 3;
              } while ((long)uVar2 < (long)(int)uVar1);
            }
            UnityEngine_Mesh__set_vertices(lVar5,lVar3,0);
            lVar3 = UnityEngine_Mesh__get_normals(lVar5,0);
            if (lVar3 != 0) {
              if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
                uVar2 = 0;
                uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
                pfVar10 = (float *)(lVar3 + 0x28);
                do {
                  if (uVar6 <= uVar2) goto LAB_00c4de08;
                  in_s1 = pfVar10[-1];
                  in_s2 = *pfVar10;
                  fVar12 = (float)UnityEngine_Transform__TransformVector(pfVar10[-2],lVar4,0);
                  if (cRam0000000001916aa5 == '\0') {
                    func_0x00a67900(&System_Math_TypeInfo);
                    cRam0000000001916aa5 = '\x01';
                  }
                  if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  fVar14 = SQRT(in_s2 * in_s2 + fVar12 * fVar12 + in_s1 * in_s1);
                  if (fVar14 <= 1e-05) {
                    if (cRam0000000001916789 == '\0') {
                      func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                      cRam0000000001916789 = '\x01';
                    }
                    pfVar7 = *(float **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
                    fVar12 = *pfVar7;
                    in_s1 = pfVar7[1];
                    in_s2 = pfVar7[2];
                  }
                  else {
                    fVar12 = fVar12 / fVar14;
                    in_s1 = in_s1 / fVar14;
                    in_s2 = in_s2 / fVar14;
                  }
                  uVar1 = *(uint *)(lVar3 + 0x18);
                  uVar6 = (ulong)uVar1;
                  if (uVar6 <= uVar2) goto LAB_00c4de08;
                  uVar2 = uVar2 + 1;
                  pfVar10[-2] = fVar12;
                  pfVar10[-1] = in_s1;
                  *pfVar10 = in_s2;
                  pfVar10 = pfVar10 + 3;
                } while ((long)uVar2 < (long)(int)uVar1);
              }
              UnityEngine_Mesh__set_normals(lVar5,lVar3,0);
            }
            UnityEngine_Mesh__RecalculateBounds(lVar5,0);
            lVar3 = *(long *)((long)__this + 0xa8);
            if (lVar3 != 0) {
              if ((uint)NMPBHHIPPHP < *(uint *)(lVar3 + 0x18)) {
                lVar8 = lVar3 + lVar11 * 0xb0;
                *(long *)(lVar8 + 0x60) = lVar5;
                *(undefined1 *)(lVar8 + 0x30) = 1;
                uVar13 = UnityEngine_Transform__get_position(lVar4,0);
                if ((uint)NMPBHHIPPHP < *(uint *)(lVar3 + 0x18)) {
                  lVar3 = lVar3 + lVar11 * 0xb0;
                  *(undefined4 *)(lVar3 + 0x34) = uVar13;
                  *(float *)(lVar3 + 0x38) = in_s1;
                  *(float *)(lVar3 + 0x3c) = in_s2;
                  lVar5 = *(long *)((long)__this + 0xa8);
                  if (lVar5 == 0) goto LAB_00c4de0c;
                  uVar13 = UnityEngine_Transform__get_eulerAngles(lVar4,0);
                  if ((uint)NMPBHHIPPHP < *(uint *)(lVar5 + 0x18)) {
                    lVar5 = lVar5 + lVar11 * 0xb0;
                    *(undefined4 *)(lVar5 + 0x40) = uVar13;
                    *(float *)(lVar5 + 0x44) = in_s1;
                    *(float *)(lVar5 + 0x48) = in_s2;
                    lVar5 = *(long *)((long)__this + 0xa8);
                    if (lVar5 == 0) goto LAB_00c4de0c;
                    uVar13 = UnityEngine_Transform__get_lossyScale(lVar4,0);
                    if ((uint)NMPBHHIPPHP < *(uint *)(lVar5 + 0x18)) {
                      lVar5 = lVar5 + lVar11 * 0xb0;
                      *(undefined4 *)(lVar5 + 0x4c) = uVar13;
                      *(float *)(lVar5 + 0x50) = in_s1;
                      *(float *)(lVar5 + 0x54) = in_s2;
                      return;
                    }
                  }
                }
              }
              goto LAB_00c4de08;
            }
          }
        }
      }
    }
  }
LAB_00c4de0c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void OnEnable() { }   @0xb4f60c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__OnEnable(void *__this)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined4 uVar9;
  
  if ((bRam0000000001917180 & 1) == 0) {
    func_0x00a67900(&System_Action_ScriptableRenderContext__Camera__TypeInfo);
    func_0x00a67900(&Method_HighlightPlus_HighlightEffect_OMJKNLLLGFP__);
    func_0x00a67900(&HighlightPlus_HighlightEffect_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_Rendering_RenderPipelineManager_TypeInfo);
    func_0x00a67900(&UnityEngine_Vector3___TypeInfo);
    func_0x00a67900(&Str__HPSourceRT);
    bRam0000000001917180 = 1;
  }
  HighlightPlus_HighlightEffect__KPABICCDIIP(__this,1);
  *(undefined4 *)((long)__this + 0x20c) = *(undefined4 *)((long)__this + 0x84);
  *(undefined8 *)((long)__this + 500) = 0x3f00000000000000;
  *(undefined8 *)((long)__this + 0x1ec) = 0x3f800000;
  *(undefined8 *)((long)__this + 0x204) = 0;
  *(undefined8 *)((long)__this + 0x1fc) = 0;
  lVar8 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x10);
  if ((lVar8 != 0) && (lVar5 = _HighlightPlus_HighlightEffect_TypeInfo, *(int *)(lVar8 + 0x18) == 8)
     ) {
LAB_00c4f880:
    if ((*(long *)((long)__this + 0x1b0) == 0) ||
       (*(int *)(*(long *)((long)__this + 0x1b0) + 0x18) != 8)) {
      uVar3 = func_0x00a679a0(_UnityEngine_Vector3___TypeInfo,8);
      *(undefined8 *)((long)__this + 0x1b0) = uVar3;
      lVar5 = _HighlightPlus_HighlightEffect_TypeInfo;
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar3,0,0);
    if ((uVar4 & 1) != 0) {
      HighlightPlus_HighlightEffect__IPOKCNBINMN();
    }
    uVar3 = *(undefined8 *)((long)__this + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar3,0,0);
    if ((uVar4 & 1) != 0) {
      uVar3 = UnityEngine_Component__get_transform(__this,0);
      *(undefined8 *)((long)__this + 0xb8) = uVar3;
    }
    uVar9 = UnityEngine_Shader__PropertyToID(_Str__HPSourceRT,0);
    *(undefined4 *)((long)__this + 0x128) = uVar9;
    HighlightPlus_HighlightEffect__DHNEPGKAOEB(__this);
    HighlightPlus_HighlightEffect__IKKIOPLABDD(__this);
    uVar3 = func_0x00a67b44(_System_Action_ScriptableRenderContext__Camera__TypeInfo);
    System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (uVar3,__this,_Method_HighlightPlus_HighlightEffect_OMJKNLLLGFP__,0);
    if (*(int *)(_UnityEngine_Rendering_RenderPipelineManager_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Rendering_RenderPipelineManager__remove_endCameraRendering(uVar3,0);
    uVar3 = func_0x00a67b44(_System_Action_ScriptableRenderContext__Camera__TypeInfo);
    System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (uVar3,__this,_Method_HighlightPlus_HighlightEffect_OMJKNLLLGFP__,0);
    if ((bRam000000000191cb48 & 1) == 0) {
      func_0x00a67900(&System_Action_ScriptableRenderContext__Camera__TypeInfo,0);
      func_0x00a67900(&UnityEngine_Rendering_RenderPipelineManager_TypeInfo);
      bRam000000000191cb48 = 1;
    }
    if (*(int *)(_UnityEngine_Rendering_RenderPipelineManager_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar8 = *(long *)(*(long *)(_UnityEngine_Rendering_RenderPipelineManager_TypeInfo + 0xb8) + 0x20
                     );
    do {
      lVar5 = System_Delegate__Combine(lVar8,uVar3,0);
      uVar1 = _System_Action_ScriptableRenderContext__Camera__TypeInfo;
      if (lVar5 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = func_0x00a67a34(lVar5,_System_Action_ScriptableRenderContext__Camera__TypeInfo);
        if (lVar6 == 0) {
          uVar3 = func_0x00a67eec(lVar5,uVar1);
          if ((bRam000000000191cb49 & 1) == 0) {
            func_0x00a67900(&System_Action_ScriptableRenderContext__Camera__TypeInfo);
            func_0x00a67900(&UnityEngine_Rendering_RenderPipelineManager_TypeInfo);
            bRam000000000191cb49 = 1;
          }
          if (*(int *)(_UnityEngine_Rendering_RenderPipelineManager_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar8 = *(long *)(*(long *)(_UnityEngine_Rendering_RenderPipelineManager_TypeInfo + 0xb8)
                           + 0x20);
          do {
            lVar5 = System_Delegate__Remove(lVar8,uVar3,0);
            uVar1 = _System_Action_ScriptableRenderContext__Camera__TypeInfo;
            if (lVar5 == 0) {
              lVar6 = 0;
            }
            else {
              lVar6 = func_0x00a67a34(lVar5,_System_Action_ScriptableRenderContext__Camera__TypeInfo
                                     );
              if (lVar6 == 0) {
                func_0x00a67eec(lVar5,uVar1);
                if ((bRam000000000191cb4a & 1) == 0) {
                  func_0x00a67900(&UnityEngine_Rendering_RenderPipelineManager_TypeInfo);
                  bRam000000000191cb4a = 1;
                }
                if (*(int *)(_UnityEngine_Rendering_RenderPipelineManager_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                lVar8 = *(long *)(*(long *)(_UnityEngine_Rendering_RenderPipelineManager_TypeInfo +
                                           0xb8) + 0x28);
                if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0149f6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(lVar8 + 0x18))
                            (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
                  return;
                }
                return;
              }
            }
            if (*(int *)(_UnityEngine_Rendering_RenderPipelineManager_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar5 = func_0x00a90840(*(long *)(_UnityEngine_Rendering_RenderPipelineManager_TypeInfo
                                             + 0xb8) + 0x20,lVar6,lVar8);
            bVar2 = lVar8 == lVar5;
            lVar8 = lVar5;
            if (bVar2) {
              return;
            }
          } while( true );
        }
      }
      if (*(int *)(_UnityEngine_Rendering_RenderPipelineManager_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar5 = func_0x00a90840(*(long *)(_UnityEngine_Rendering_RenderPipelineManager_TypeInfo + 0xb8
                                       ) + 0x20,lVar6,lVar8);
      bVar2 = lVar8 == lVar5;
      lVar8 = lVar5;
      if (bVar2) {
        return;
      }
    } while( true );
  }
  lVar8 = func_0x00a679a0(_UnityEngine_Vector3___TypeInfo,8);
  if (cRam0000000001916e68 == '\0') {
    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
    cRam0000000001916e68 = '\x01';
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = (uint)*(undefined8 *)(lVar8 + 0x18);
  if (uVar7 != 0) {
    uVar9 = *(undefined4 *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x20);
    *(undefined8 *)(lVar8 + 0x20) =
         *(undefined8 *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x18);
    *(undefined4 *)(lVar8 + 0x28) = uVar9;
    if (cRam0000000001916e66 == '\0') {
      func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
      cRam0000000001916e66 = '\x01';
      uVar7 = (uint)*(undefined8 *)(lVar8 + 0x18);
    }
    if (1 < uVar7) {
      uVar9 = *(undefined4 *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x44);
      *(undefined8 *)(lVar8 + 0x2c) =
           *(undefined8 *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x3c);
      *(undefined4 *)(lVar8 + 0x34) = uVar9;
      if (cRam00000000019171b2 == '\0') {
        func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
        cRam00000000019171b2 = '\x01';
        uVar7 = (uint)*(undefined8 *)(lVar8 + 0x18);
      }
      if (2 < uVar7) {
        uVar9 = *(undefined4 *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x2c);
        *(undefined8 *)(lVar8 + 0x38) =
             *(undefined8 *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x24);
        *(undefined4 *)(lVar8 + 0x40) = uVar9;
        if (cRam00000000019171b3 == '\0') {
          func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
          cRam00000000019171b3 = '\x01';
          uVar7 = (uint)*(undefined8 *)(lVar8 + 0x18);
        }
        if (3 < uVar7) {
          uVar9 = *(undefined4 *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x38);
          *(undefined8 *)(lVar8 + 0x44) =
               *(undefined8 *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x30);
          *(undefined4 *)(lVar8 + 0x4c) = uVar9;
          if (uVar7 != 4) {
            *(undefined4 *)(lVar8 + 0x58) = 0;
            *(undefined8 *)(lVar8 + 0x50) = 0x3f350529bf350529;
            if (5 < uVar7) {
              *(undefined8 *)(lVar8 + 0x5c) = 0x3f3505293f350529;
              *(undefined4 *)(lVar8 + 100) = 0;
              if (uVar7 != 6) {
                *(undefined4 *)(lVar8 + 0x70) = 0;
                *(undefined8 *)(lVar8 + 0x68) = 0xbf3505293f350529;
                if (7 < uVar7) {
                  *(undefined8 *)(lVar8 + 0x74) = 0xbf350529bf350529;
                  *(undefined4 *)(lVar8 + 0x7c) = 0;
                  lVar5 = _HighlightPlus_HighlightEffect_TypeInfo;
                  *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) + 0x10) =
                       lVar8;
                  goto LAB_00c4f880;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


// ==== private void IKKIOPLABDD() { }   @0xb4fa94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__IKKIOPLABDD(void *__this)

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
            HighlightPlus_HighlightEffect__LMBLEGHLDPO(__this,*(int *)((long)__this + 0xb0),true);
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
        HighlightPlus_HighlightEffect__KPABICCDIIP(pvVar8,*(undefined1 *)((long)__this + 0x34));
      }
LAB_00c502f8:
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)plVar6[3]);
  }
  HighlightPlus_HighlightEffect__KGMPKNIGPBG(__this);
  return;
}


// ==== private void OnDisable() { }   @0xb51814

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__OnDisable(void *__this)

{
  byte bVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  undefined4 uVar14;
  
  if ((bRam0000000001917186 & 1) == 0) {
    func_0x00a67900(&System_Action_ScriptableRenderContext__Camera__TypeInfo);
    func_0x00a67900(&Method_HighlightPlus_HighlightEffect_OMJKNLLLGFP__);
    func_0x00a67900(&UnityEngine_Rendering_RenderPipelineManager_TypeInfo);
    bRam0000000001917186 = 1;
  }
  uVar8 = func_0x00a67b44(_System_Action_ScriptableRenderContext__Camera__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar8,__this,_Method_HighlightPlus_HighlightEffect_OMJKNLLLGFP__,0);
  if (*(int *)(_UnityEngine_Rendering_RenderPipelineManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Rendering_RenderPipelineManager__remove_endCameraRendering(uVar8,0);
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
  lVar9 = *(long *)((long)__this + 0xa8);
  if (lVar9 != 0) {
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
        if (*(uint *)(lVar9 + 0x18) <= uVar11) {
LAB_00c5173c:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        uVar8 = *(undefined8 *)(lVar9 + uVar11 * 0xb0 + 0x60);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar8,0,0);
        if ((uVar5 & 1) != 0) {
          fVar13 = 0.0;
          if (*(int *)((long)__this + 0x7c) != 1) {
            fVar13 = *(float *)((long)__this + 0x78) / 100.0;
          }
          if (*(long *)((long)__this + 200) == 0) break;
          UnityEngine_Material__SetFloat(fVar13,*(long *)((long)__this + 200),_Str__OutlineWidth,0);
          lVar9 = *(long *)((long)__this + 200);
          if (cRam0000000001916789 == '\0') {
            func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
            cRam0000000001916789 = '\x01';
          }
          if (lVar9 == 0) break;
          puVar10 = *(undefined4 **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
          UnityEngine_Material__SetVector
                    (*puVar10,puVar10[1],puVar10[2],0,lVar9,_Str__OutlineDirection,0);
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
          lVar9 = *(long *)((long)__this + 0xa8);
          if (lVar9 == 0) break;
          lVar12 = 4;
          while( true ) {
            if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_00c5173c;
            lVar9 = *(long *)(lVar9 + uVar11 * 0xb0 + 0x60);
            if (lVar9 == 0) goto LAB_00c51718;
            uVar5 = lVar12 - 4;
            iVar4 = UnityEngine_Mesh__get_subMeshCount(lVar9,0);
            if ((long)iVar4 <= (long)uVar5) break;
            lVar9 = *(long *)((long)__this + 0xa8);
            if (lVar9 == 0) goto LAB_00c51718;
            if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_00c5173c;
            lVar9 = *(long *)(lVar9 + uVar11 * 0xb0 + 0x70);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar6 = UnityEngine_Object__op_Equality(lVar9,0,0);
            if ((uVar6 & 1) == 0) {
              if (lVar9 == 0) goto LAB_00c51718;
              lVar7 = UnityEngine_Renderer__get_sharedMaterials(lVar9,0);
              if (lVar7 == 0) {
LAB_00c5141c:
                lVar9 = 0;
              }
              else {
                lVar7 = UnityEngine_Renderer__get_sharedMaterials(lVar9,0);
                if (lVar7 == 0) goto LAB_00c51718;
                if ((long)*(int *)(lVar7 + 0x18) <= (long)uVar5) goto LAB_00c5141c;
                lVar9 = UnityEngine_Renderer__get_sharedMaterials(lVar9,0);
                if (lVar9 == 0) goto LAB_00c51718;
                if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_00c5173c;
                lVar9 = *(long *)(lVar9 + lVar12 * 8);
              }
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar6 = UnityEngine_Object__op_Equality(lVar9,0,0);
              if ((uVar6 & 1) == 0) {
                if (lVar9 == 0) goto LAB_00c51718;
                bVar3 = UnityEngine_Material__HasProperty(lVar9,_Str__MainTex,0);
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
                      uVar8 = UnityEngine_Material__get_mainTexture(lVar9,0);
                      if (lVar7 == 0) goto LAB_00c51718;
                      UnityEngine_Material__set_mainTexture(lVar7,uVar8,0);
                      UnityEngine_Material__get_mainTextureOffset(lVar9,0);
                      UnityEngine_Material__set_mainTextureOffset(lVar7,0);
                      UnityEngine_Material__get_mainTextureScale(lVar9,0);
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
                      uVar8 = UnityEngine_Material__get_mainTexture(lVar9,0);
                      if (lVar7 == 0) goto LAB_00c51718;
                      UnityEngine_Material__set_mainTexture(lVar7,uVar8,0);
                      UnityEngine_Material__get_mainTextureOffset(lVar9,0);
                      UnityEngine_Material__set_mainTextureOffset(lVar7,0);
                      UnityEngine_Material__get_mainTextureScale(lVar9,0);
                      UnityEngine_Material__set_mainTextureScale(lVar7,0);
                    }
                    uVar5 = UnityEngine_Material__HasProperty(lVar9,_Str__Color,0);
                    if ((uVar5 & 1) != 0) {
                      UnityEngine_Material__GetColor(lVar9,_Str__Color,0);
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
            lVar9 = *(long *)((long)__this + 0xa8);
            lVar12 = lVar12 + 1;
            if (lVar9 == 0) goto LAB_00c51718;
          }
        }
        uVar11 = uVar11 + 1;
        if ((long)*(int *)((long)__this + 0xb0) <= (long)uVar11) {
          return;
        }
        lVar9 = *(long *)((long)__this + 0xa8);
      } while (lVar9 != 0);
LAB_00c51718:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
}


// ==== public void JBHFDGKOKHL(LPHEHJBLEPI ALLBGCHDGNC) { }   @0xb51a94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__JBHFDGKOKHL(void *__this,void *ALLBGCHDGNC)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam000000000191718b & 1) == 0) {
    func_0x00a67900(&LPHEHJBLEPI_TypeInfo);
    bRam000000000191718b = 1;
  }
  lVar4 = *(long *)((long)__this + 0x90);
  while ((plVar2 = (long *)System_Delegate__Combine(lVar4,ALLBGCHDGNC,0), plVar2 == (long *)0x0 ||
         (*plVar2 == _LPHEHJBLEPI_TypeInfo))) {
    lVar3 = func_0x00a90840((long *)((long)__this + 0x90),plVar2,lVar4);
    bVar1 = lVar4 == lVar3;
    lVar4 = lVar3;
    if (bVar1) {
      return;
    }
  }
  func_0x00a67eec(plVar2);
  return;
}


// ==== private void OnRenderObject() { }   @0xb51b3c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void HighlightPlus_HighlightEffect__OnRenderObject(void *__this)

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
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_d1;
  undefined8 uVar17;
  undefined8 in_d2;
  undefined8 in_d3;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
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
  
  lVar9 = UnityEngine_Camera__get_current(0);
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
  uVar5 = UnityEngine_Object__op_Equality(lVar9,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(char *)((long)__this + 0x210) != '\0') {
      *(undefined1 *)((long)__this + 0x210) = 0;
      HighlightPlus_HighlightEffect__KGMPKNIGPBG(__this);
    }
    if (*(char *)((long)__this + 0x34) != '\0') {
      if (lVar9 != 0) {
        uVar2 = UnityEngine_Camera__get_cullingMask(lVar9,0);
        if ((*(char *)((long)__this + 0x31) == '\0') && (0 < *(int *)((long)__this + 0xb0))) {
          lVar6 = 0;
          uVar5 = 0;
          do {
            lVar10 = *(long *)((long)__this + 0xa8);
            if (lVar10 == 0) goto LAB_00c4ec8c;
            if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_00c4ec90;
            uVar12 = *(undefined8 *)(lVar10 + lVar6 + 0x70);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Object__op_Inequality(uVar12,0,0);
            if ((uVar7 & 1) != 0) {
              lVar10 = *(long *)((long)__this + 0xa8);
              if (lVar10 == 0) goto LAB_00c4ec8c;
              if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_00c4ec90;
              lVar10 = *(long *)(lVar10 + lVar6 + 0x70);
              if (lVar10 == 0) goto LAB_00c4ec8c;
              bVar1 = UnityEngine_Renderer__get_isVisible(lVar10,0);
              lVar10 = *(long *)((long)__this + 0xa8);
              if (lVar10 == 0) goto LAB_00c4ec8c;
              if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_00c4ec90;
              if (*(byte *)(lVar10 + lVar6 + 0x58) != (bVar1 & 1)) {
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
          uVar12 = **(undefined8 **)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Equality(uVar12,0,0);
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
                lVar10 = *(long *)((long)__this + 0xa8);
                if (lVar10 == 0) goto LAB_00c4ec8c;
                if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_00c4ec90;
                lVar10 = *(long *)(lVar10 + uVar5 * 0xb0 + 0x60);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Equality(lVar10,0,0);
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
                        (iVar4 = UnityEngine_Camera__get_cameraType(lVar9,0), iVar4 != 0x10)))) {
                      lVar8 = *(long *)((long)__this + 0xa8);
                      if (lVar8 == 0) goto LAB_00c4ec8c;
                      if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_00c4ec90;
                      lVar8 = lVar8 + uVar5 * 0xb0;
                      *(undefined1 *)(lVar8 + 0x20) = 1;
                      if (*(char *)(lVar8 + 0x78) == '\0') {
                        UnityEngine_Transform__get_lossyScale(lVar6,0);
                        uVar12 = UnityEngine_Transform__get_position(lVar6,0);
                        lVar8 = *(long *)((long)__this + 0xa8);
                        if (lVar8 == 0) goto LAB_00c4ec8c;
                        if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_00c4ec90;
                        if (*(char *)(lVar8 + uVar5 * 0xb0 + 0x30) == '\0') {
                          uVar16 = in_d1;
                          uVar17 = in_d2;
                          uVar15 = UnityEngine_Transform__get_rotation(lVar6,0);
                          UnityEngine_Matrix4x4__TRS
                                    (&uStack_120,uVar12,in_d1,in_d2,uVar15,uVar16,uVar17,in_d3,0);
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
                          fVar18 = *(float *)(lVar8 + 0x34);
                          fVar19 = *(float *)(lVar8 + 0x38);
                          fVar21 = *(float *)(lVar8 + 0x3c);
                          fVar13 = (float)UnityEngine_Transform__get_position(lVar6,0);
                          fVar18 = fVar18 - fVar13;
                          fVar19 = fVar19 - (float)in_d1;
                          fVar21 = fVar21 - (float)in_d2;
                          fVar13 = fVar21 * fVar21;
                          if (9.9999994e-11 <= fVar13 + fVar18 * fVar18 + fVar19 * fVar19) {
LAB_00c4e298:
                            HighlightPlus_HighlightEffect__LMBLEGHLDPO(__this,(int)uVar5,true);
                          }
                          else {
                            lVar8 = *(long *)((long)__this + 0xa8);
                            if (lVar8 == 0) goto LAB_00c4ec8c;
                            if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_00c4ec90;
                            lVar8 = lVar8 + uVar5 * 0xb0;
                            fVar19 = *(float *)(lVar8 + 0x40);
                            fVar20 = *(float *)(lVar8 + 0x44);
                            fVar22 = *(float *)(lVar8 + 0x48);
                            fVar18 = (float)UnityEngine_Transform__get_eulerAngles(lVar6,0);
                            fVar19 = fVar19 - fVar18;
                            fVar20 = fVar20 - fVar13;
                            fVar22 = fVar22 - fVar21;
                            fVar13 = fVar22 * fVar22;
                            if (9.9999994e-11 <= fVar13 + fVar19 * fVar19 + fVar20 * fVar20)
                            goto LAB_00c4e298;
                            lVar8 = *(long *)((long)__this + 0xa8);
                            if (lVar8 == 0) goto LAB_00c4ec8c;
                            if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_00c4ec90;
                            lVar8 = lVar8 + uVar5 * 0xb0;
                            fVar19 = *(float *)(lVar8 + 0x4c);
                            fVar21 = *(float *)(lVar8 + 0x50);
                            fVar20 = *(float *)(lVar8 + 0x54);
                            fVar18 = (float)UnityEngine_Transform__get_lossyScale(lVar6,0);
                            fVar19 = fVar19 - fVar18;
                            fVar21 = fVar21 - fVar13;
                            fVar20 = fVar20 - fVar22;
                            if (9.9999994e-11 <= fVar20 * fVar20 + fVar19 * fVar19 + fVar21 * fVar21
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
                        if (lVar10 == 0) goto LAB_00c4ec8c;
                        in_d1 = uStack_b0;
                        in_d2 = uStack_e0;
                        in_d3 = uStack_d0;
                        iVar4 = UnityEngine_Mesh__get_subMeshCount(lVar10,0);
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
                            UnityEngine_Graphics__DrawMeshNow(lVar10,&uStack_160,uVar3,0);
                            uVar3 = uVar3 + 1;
                            iVar4 = UnityEngine_Mesh__get_subMeshCount(lVar10,0);
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
          fVar13 = 1.0;
          if (*(int *)((long)__this + 0xd4) != 0) {
            if (*(int *)((long)__this + 0xd4) == 1) {
              fVar13 = 1.0;
              if (0.0 < *(float *)((long)__this + 0x38)) {
                fVar18 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
                fVar18 = fVar18 - *(float *)((long)__this + 0xd0);
                fVar13 = fVar18 / *(float *)((long)__this + 0x38);
                if (1.0 < fVar13) {
                  fVar13 = 1.0;
                }
                if (1.3 < fVar18) {
                  uVar14 = UnityEngine_Time__get_realtimeSinceStartup(0);
                  *(undefined4 *)((long)__this + 0xd0) = uVar14;
                  *(undefined4 *)((long)__this + 0xd4) = 0xffffffff;
                }
              }
            }
            else if (0.0 < *(float *)((long)__this + 0x3c)) {
              fVar13 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
              fVar13 = 1.0 - (fVar13 - *(float *)((long)__this + 0xd0)) /
                             *(float *)((long)__this + 0x3c);
              if (fVar13 < 0.0) {
                *(undefined4 *)((long)__this + 0xd4) = 0;
                UnityEngine_Behaviour__set_enabled(__this,0,0);
                lVar6 = *(long *)((long)__this + 0x98);
                *(undefined1 *)((long)__this + 0x34) = 0;
                if (lVar6 != 0) {
                  uVar12 = UnityEngine_Component__get_gameObject(__this,0);
                  (**(code **)(lVar6 + 0x18))
                            (*(undefined8 *)(lVar6 + 0x40),uVar12,*(undefined8 *)(lVar6 + 0x28));
                }
                UnityEngine_Component__SendMessage(__this,_Str_HighlightEnd,0,1,0);
                fVar13 = 0.0;
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
                               fVar13 * *(float *)((long)__this + 100),*(long *)((long)__this + 200)
                               ,_Str__OutlineColor,0);
                    if (*(int *)((long)__this + 0x7c) == 1) {
                      lVar10 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8) +
                                        0x10);
                      if (lVar10 == 0) goto LAB_00c4ec8c;
                      lVar8 = 0;
                      uVar11 = 0;
                      while ((long)uVar11 < (long)(int)*(uint *)(lVar10 + 0x18)) {
                        if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_00c4ec90;
                        lVar10 = lVar10 + lVar8;
                        fVar21 = *(float *)(lVar10 + 0x20);
                        fVar20 = *(float *)(lVar10 + 0x24);
                        fVar22 = *(float *)(lVar10 + 0x28);
                        fVar19 = *(float *)((long)__this + 0x78);
                        fVar18 = (float)UnityEngine_Camera__get_aspect(lVar9,0);
                        if (*(long *)((long)__this + 200) == 0) goto LAB_00c4ec8c;
                        fVar19 = fVar19 / 100.0;
                        UnityEngine_Material__SetVector
                                  (fVar21 * fVar19,fVar18 * fVar20 * fVar19,fVar22 * fVar19,0,
                                   *(long *)((long)__this + 200),_Str__OutlineDirection,0);
                        lVar10 = *(long *)((long)__this + 0xa8);
                        if (lVar10 == 0) goto LAB_00c4ec8c;
                        if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_00c4ec90;
                        if (*(char *)(lVar10 + uVar5 * 0xb0 + 0x78) == '\0') {
                          if (*(long *)((long)__this + 200) == 0) goto LAB_00c4ec8c;
                          UnityEngine_Material__SetPass(*(long *)((long)__this + 200),0,0);
                          lVar10 = *(long *)((long)__this + 0xa8);
                          if (lVar10 == 0) goto LAB_00c4ec8c;
                          if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_00c4ec90;
                          lVar10 = lVar10 + uVar5 * 0xb0;
                          uStack_b8 = *(undefined8 *)(lVar10 + 0xb8);
                          uStack_c0 = *(undefined8 *)(lVar10 + 0xb0);
                          uStack_a8 = *(undefined8 *)(lVar10 + 200);
                          uStack_b0 = *(undefined8 *)(lVar10 + 0xc0);
                          uStack_d8 = *(undefined8 *)(lVar10 + 0x98);
                          uStack_e0 = *(undefined8 *)(lVar10 + 0x90);
                          uStack_c8 = *(undefined8 *)(lVar10 + 0xa8);
                          uStack_d0 = *(undefined8 *)(lVar10 + 0xa0);
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
                          lVar10 = *(long *)((long)__this + 0xa8);
                          if (lVar10 == 0) goto LAB_00c4ec8c;
                          if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_00c4ec90;
                          if (*(long *)((long)__this + 0xf0) == 0) goto LAB_00c4ec8c;
                          UnityEngine_Rendering_CommandBuffer__DrawRenderer
                                    (*(long *)((long)__this + 0xf0),
                                     *(undefined8 *)(lVar10 + uVar5 * 0xb0 + 0x70),
                                     *(undefined8 *)((long)__this + 200),uVar7 & 0xffffffff,0);
                          uVar12 = *(undefined8 *)((long)__this + 0xf0);
                          if (*(int *)(_UnityEngine_Graphics_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          UnityEngine_Graphics__ExecuteCommandBuffer(uVar12,0);
                        }
                        uVar11 = uVar11 + 1;
                        lVar8 = lVar8 + 0xc;
                        lVar10 = *(long *)(*(long *)(_HighlightPlus_HighlightEffect_TypeInfo + 0xb8)
                                          + 0x10);
                        if (lVar10 == 0) goto LAB_00c4ec8c;
                      }
                    }
                    else {
                      lVar10 = *(long *)((long)__this + 0xa8);
                      if (lVar10 == 0) goto LAB_00c4ec8c;
                      if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_00c4ec90;
                      if (*(char *)(lVar10 + uVar5 * 0xb0 + 0x78) == '\0') {
                        if (*(long *)((long)__this + 200) == 0) goto LAB_00c4ec8c;
                        UnityEngine_Material__SetPass(*(long *)((long)__this + 200),0,0);
                        lVar10 = *(long *)((long)__this + 0xa8);
                        if (lVar10 == 0) goto LAB_00c4ec8c;
                        if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_00c4ec90;
                        lVar10 = lVar10 + uVar5 * 0xb0;
                        uStack_b8 = *(undefined8 *)(lVar10 + 0xb8);
                        uStack_c0 = *(undefined8 *)(lVar10 + 0xb0);
                        uStack_a8 = *(undefined8 *)(lVar10 + 200);
                        uStack_b0 = *(undefined8 *)(lVar10 + 0xc0);
                        uStack_d8 = *(undefined8 *)(lVar10 + 0x98);
                        uStack_e0 = *(undefined8 *)(lVar10 + 0x90);
                        uStack_c8 = *(undefined8 *)(lVar10 + 0xa8);
                        uStack_d0 = *(undefined8 *)(lVar10 + 0xa0);
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
                        lVar10 = *(long *)((long)__this + 0xa8);
                        if (lVar10 == 0) goto LAB_00c4ec8c;
                        if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_00c4ec90;
                        if (*(long *)((long)__this + 0xf0) == 0) goto LAB_00c4ec8c;
                        UnityEngine_Rendering_CommandBuffer__DrawRenderer
                                  (*(long *)((long)__this + 0xf0),
                                   *(undefined8 *)(lVar10 + uVar5 * 0xb0 + 0x70),
                                   *(undefined8 *)((long)__this + 200),uVar7 & 0xffffffff,0);
                        uVar12 = *(undefined8 *)((long)__this + 0xf0);
                        if (*(int *)(_UnityEngine_Graphics_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        UnityEngine_Graphics__ExecuteCommandBuffer(uVar12,0);
                      }
                    }
                  }
                  if (0.0 < *(float *)((long)__this + 0x44)) {
                    lVar10 = *(long *)((long)__this + 0xa8);
                    if (lVar10 == 0) goto LAB_00c4ec8c;
                    if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_00c4ec90;
                    lVar10 = *(long *)(lVar10 + uVar5 * 0xb0 + 0x88);
                    if (lVar10 == 0) goto LAB_00c4ec8c;
                    if ((long)uVar7 < (long)(int)*(uint *)(lVar10 + 0x18)) {
                      if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_00c4ec90;
                      uVar12 = *(undefined8 *)(lVar10 + uVar7 * 8 + 0x20);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar11 = UnityEngine_Object__op_Inequality(uVar12,0,0);
                      if ((uVar11 & 1) != 0) {
                        lVar10 = *(long *)((long)__this + 0xa8);
                        if (lVar10 == 0) goto LAB_00c4ec8c;
                        if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_00c4ec90;
                        lVar10 = *(long *)(lVar10 + uVar5 * 0xb0 + 0x88);
                        if (lVar10 == 0) goto LAB_00c4ec8c;
                        if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_00c4ec90;
                        lVar10 = *(long *)(lVar10 + uVar7 * 8 + 0x20);
                        if (lVar10 == 0) goto LAB_00c4ec8c;
                        UnityEngine_Material__set_color
                                  (*(undefined4 *)((long)__this + 0x48),
                                   *(undefined4 *)((long)__this + 0x4c),
                                   *(undefined4 *)((long)__this + 0x50),
                                   fVar13 * *(float *)((long)__this + 0x44),lVar10,0);
                        lVar10 = *(long *)((long)__this + 0xa8);
                        if (lVar10 == 0) goto LAB_00c4ec8c;
                        if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_00c4ec90;
                        lVar10 = *(long *)(lVar10 + uVar5 * 0xb0 + 0x88);
                        if (lVar10 == 0) goto LAB_00c4ec8c;
                        if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_00c4ec90;
                        lVar10 = *(long *)(lVar10 + uVar7 * 8 + 0x20);
                        if (lVar10 == 0) goto LAB_00c4ec8c;
                        UnityEngine_Material__SetVector
                                  (*(undefined4 *)((long)__this + 0x58),
                                   *(undefined4 *)((long)__this + 0x5c),
                                   *(undefined4 *)((long)__this + 0x60),0,lVar10,_Str__OverlayData,0
                                  );
                        lVar10 = *(long *)((long)__this + 0xa8);
                        if (lVar10 == 0) goto LAB_00c4ec8c;
                        if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_00c4ec90;
                        if (*(char *)(lVar10 + uVar5 * 0xb0 + 0x78) == '\0') {
                          lVar10 = *(long *)(lVar10 + uVar5 * 0xb0 + 0x88);
                          if (lVar10 == 0) goto LAB_00c4ec8c;
                          if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_00c4ec90;
                          lVar10 = *(long *)(lVar10 + uVar7 * 8 + 0x20);
                          if (lVar10 == 0) goto LAB_00c4ec8c;
                          UnityEngine_Material__SetPass(lVar10,0,0);
                          lVar10 = *(long *)((long)__this + 0xa8);
                          if (lVar10 == 0) goto LAB_00c4ec8c;
                          if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_00c4ec90;
                          lVar10 = lVar10 + uVar5 * 0xb0;
                          uStack_b8 = *(undefined8 *)(lVar10 + 0xb8);
                          uStack_c0 = *(undefined8 *)(lVar10 + 0xb0);
                          uStack_a8 = *(undefined8 *)(lVar10 + 200);
                          uStack_b0 = *(undefined8 *)(lVar10 + 0xc0);
                          uStack_d8 = *(undefined8 *)(lVar10 + 0x98);
                          uStack_e0 = *(undefined8 *)(lVar10 + 0x90);
                          uStack_c8 = *(undefined8 *)(lVar10 + 0xa8);
                          uStack_d0 = *(undefined8 *)(lVar10 + 0xa0);
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
                          lVar10 = *(long *)((long)__this + 0xa8);
                          if (lVar10 == 0) goto LAB_00c4ec8c;
                          if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_00c4ec90;
                          lVar10 = lVar10 + uVar5 * 0xb0;
                          lVar8 = *(long *)(lVar10 + 0x88);
                          if (lVar8 == 0) goto LAB_00c4ec8c;
                          if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_00c4ec90;
                          if (*(long *)((long)__this + 0xf8) == 0) goto LAB_00c4ec8c;
                          UnityEngine_Rendering_CommandBuffer__DrawRenderer
                                    (*(long *)((long)__this + 0xf8),*(undefined8 *)(lVar10 + 0x70),
                                     *(undefined8 *)(lVar8 + uVar7 * 8 + 0x20),uVar7 & 0xffffffff,0)
                          ;
                          uVar12 = *(undefined8 *)((long)__this + 0xf8);
                          if (*(int *)(_UnityEngine_Graphics_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          UnityEngine_Graphics__ExecuteCommandBuffer(uVar12,0);
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



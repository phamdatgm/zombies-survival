// ==== private void Awake() { }   @0xb1b1c8

/* WARNING: Removing unreachable block (ram,0x00c1c004) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__Awake(void *__this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  void *__this_00;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  undefined4 uVar21;
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
  long lStack_1a0;
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
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 in_stack_ffffffffffffffc8;
  
  if ((bRam0000000001917010 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_AudioSource___);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&ReadySprings_SpringAngVec3_TypeInfo);
    func_0x00a67900(&ReadySprings_SpringDirVec3_TypeInfo);
    func_0x00a67900(&ReadySprings_SpringFloat_TypeInfo);
    func_0x00a67900(&Method_Spring_Vector3__KOGLNCIFCJK__);
    func_0x00a67900(&Method_Spring_float__KOGLNCIFCJK__);
    bRam0000000001917010 = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar16 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar16,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
      if ((bRam0000000001917012 & 1) == 0) {
        func_0x00a67900(&CarReplay_TypeInfo);
        func_0x00a67900(&UnityEngine_CombineInstance___TypeInfo);
        func_0x00a67900(&Method_UnityEngine_Component_GetComponent_CarCollision___);
        func_0x00a67900(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
        func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
        func_0x00a67900(&Method_UnityEngine_Component_GetComponentsInChildren_MeshFilter___);
        func_0x00a67900(&Method_UnityEngine_GameObject_AddComponent_CarReplay___);
        func_0x00a67900(&Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
        func_0x00a67900(&Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
        func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_AudioSource___);
        func_0x00a67900(&System_IDisposable_TypeInfo);
        func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
        func_0x00a67900(&Method_System_Collections_Generic_List_Transform__Add__);
        func_0x00a67900(&Main_TypeInfo);
        func_0x00a67900(&UnityEngine_MeshFilter___TypeInfo);
        func_0x00a67900(&UnityEngine_Mesh_TypeInfo);
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        func_0x00a67900(&UnityEngine_Transform_TypeInfo);
        func_0x00a67900(&Str_wheel);
        bRam0000000001917012 = 1;
      }
      if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = CarReplay__DJKMCIEIAMH(0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      iVar1 = UnityEngine_LayerMask__NameToLayer(_Str_wheel,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy(__this,0);
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (__this,&lStack_e0,_Method_UnityEngine_Component_GetComponent_CarCollision___);
      lVar5 = lStack_e0;
      uVar4 = UnityEngine_Object__op_Inequality(lStack_e0,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        UnityEngine_Object__Destroy(lVar5,0);
      }
      if (*(long *)((long)__this + 800) != 0) {
        UnityEngine_GameObject__SetActive(*(long *)((long)__this + 800),1,0);
        if (*(long *)((long)__this + 0x2e0) != 0) {
          UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x2e0),1,0);
          uVar16 = *(undefined8 *)((long)__this + 0x2e8);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar4 = UnityEngine_Object__op_Inequality(uVar16,0,0);
          if ((uVar4 & 1) != 0) {
            if (*(long *)((long)__this + 0x2e0) == 0) goto LAB_00c1b6c8;
            UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x2e0),1,0);
          }
          lVar5 = *(long *)((long)__this + 0xe8);
          if (lVar5 != 0) {
            uVar4 = 0;
            do {
              if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar4) {
                UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                          (__this,&lStack_e0,_Method_UnityEngine_Component_GetComponent_Rigidbody___
                          );
                if (lStack_e0 != 0) {
                  UnityEngine_Rigidbody__set_isKinematic(lStack_e0,1,0);
                  lVar5 = UnityEngine_Component__get_gameObject(__this,0);
                  if ((lVar5 != 0) &&
                     (lVar5 = UnityEngine_GameObject__AddComponent_object_
                                        (lVar5,
                                         _Method_UnityEngine_GameObject_AddComponent_CarReplay___),
                     lVar5 != 0)) {
                    *(undefined1 *)(lVar5 + 0x30) = 1;
                    *(undefined4 *)(lVar5 + 0x88) = *(undefined4 *)((long)__this + 0x130);
                    *(undefined4 *)(lVar5 + 0x8c) = *(undefined4 *)((long)__this + 0x140);
                    if (0.0 < *(float *)((long)__this + 0x144)) {
                      *(float *)(lVar5 + 0x90) = *(float *)((long)__this + 0x144);
                    }
                    lVar6 = UnityEngine_Component__get_gameObject(__this,0);
                    if (lVar6 != 0) {
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar6,&lStack_e0,
                                 _Method_UnityEngine_GameObject_GetComponent_AudioSource___);
                      lVar6 = lStack_e0;
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar4 = UnityEngine_Object__op_Inequality(lVar6,0,0);
                      if ((uVar4 & 1) != 0) {
                        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        UnityEngine_Object__Destroy(lVar6,0);
                      }
                      lVar6 = UnityEngine_Component__get_transform(__this,0);
                      if (lVar6 != 0) {
                        UnityEngine_Transform__get_worldToLocalMatrix(&lStack_e0,lVar6,0);
                        uStack_98 = uStack_d8;
                        lStack_a0 = lStack_e0;
                        uStack_88 = uStack_c8;
                        uStack_90 = uStack_d0;
                        uStack_78 = uStack_b8;
                        uStack_80 = uStack_c0;
                        uStack_68 = uStack_a8;
                        uStack_70 = uStack_b0;
                        lVar6 = UnityEngine_Component__GetComponentsInChildren___Il2CppFullySharedGenericType_
                                          (__this,
                                           _Method_UnityEngine_Component_GetComponentsInChildren_MeshFilter___
                                          );
                        if (lVar6 != 0) {
                          uVar13 = *(uint *)(lVar6 + 0x18);
                          if (0 < (int)uVar13) {
                            uVar15 = 0;
                            iVar3 = 0;
                            goto LAB_00c1b818;
                          }
                          iVar3 = 0;
                          goto LAB_00c1b8e8;
                        }
                      }
                    }
                  }
                }
                break;
              }
              if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_00c1bfe0;
              CarController__KDHHDKMBELG(__this,*(undefined8 *)(lVar5 + uVar4 * 8 + 0x20),0);
              lVar5 = *(long *)((long)__this + 0xe8);
              uVar4 = uVar4 + 1;
            } while (lVar5 != 0);
          }
        }
      }
LAB_00c1b6c8:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  **(undefined8 **)(_CarController_TypeInfo + 0xb8) = __this;
  uVar16 = UnityEngine_Component__get_transform(__this,0);
  *(undefined8 *)((long)__this + 0x38) = uVar16;
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
            (__this,&stack0xffffffffffffffc8,_Method_UnityEngine_Component_GetComponent_Rigidbody___
            );
  *(undefined8 *)((long)__this + 0x40) = in_stack_ffffffffffffffc8;
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
            (__this,&stack0xffffffffffffffc8,
             _Method_UnityEngine_Component_GetComponent_AudioSource___);
  *(undefined8 *)((long)__this + 0x48) = in_stack_ffffffffffffffc8;
  lVar5 = func_0x00a67b44(_ReadySprings_SpringFloat_TypeInfo);
  ReadySprings_SpringFloat___ctor(lVar5,0);
  *(long *)((long)__this + 0x450) = lVar5;
  if (lVar5 != 0) {
    Spring___Il2CppFullySharedGenericType___KOGLNCIFCJK
              (*(undefined4 *)((long)__this + 0x418),*(undefined4 *)((long)__this + 0x41c),lVar5,
               _Method_Spring_float__KOGLNCIFCJK__);
    __this_00 = (void *)func_0x00a67b44(_ReadySprings_SpringDirVec3_TypeInfo);
    ReadySprings_SpringDirVec3___ctor(__this_00);
    *(void **)((long)__this + 0x458) = __this_00;
    if (__this_00 != (void *)0x0) {
      Spring___Il2CppFullySharedGenericType___KOGLNCIFCJK
                (*(undefined4 *)((long)__this + 0x420),*(undefined4 *)((long)__this + 0x424),
                 __this_00,_Method_Spring_Vector3__KOGLNCIFCJK__);
      lVar5 = func_0x00a67b44(_ReadySprings_SpringAngVec3_TypeInfo);
      ReadySprings_SpringAngVec3___ctor(lVar5,0);
      *(long *)((long)__this + 0x460) = lVar5;
      if (lVar5 != 0) {
        Spring___Il2CppFullySharedGenericType___KOGLNCIFCJK
                  (*(undefined4 *)((long)__this + 0x438),*(undefined4 *)((long)__this + 0x43c),lVar5
                   ,_Method_Spring_Vector3__KOGLNCIFCJK__);
        if (*(long *)((long)__this + 0x460) != 0) {
          *(undefined1 *)(*(long *)((long)__this + 0x460) + 0x70) = 0;
          uVar21 = func_0x016ded00(*(float *)((long)__this + 0x428) * 0.017453292);
          *(undefined4 *)((long)__this + 0x428) = uVar21;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
  while( true ) {
    lVar18 = *(long *)(lVar6 + (long)(int)uVar15 * 8 + 0x20);
    if (lVar18 == 0) goto LAB_00c1b6c8;
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
              (lVar18,&lStack_e0,_Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    lVar8 = lStack_e0;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Inequality(lVar8,0,0);
    if ((uVar4 & 1) != 0) {
      if (lVar8 == 0) goto LAB_00c1b6c8;
      uVar4 = UnityEngine_Renderer__get_enabled(lVar8,0);
      if ((uVar4 & 1) != 0) {
        lVar7 = UnityEngine_Component__get_gameObject(lVar8,0);
        if (lVar7 == 0) goto LAB_00c1b6c8;
        uVar4 = UnityEngine_GameObject__get_activeInHierarchy(lVar7,0);
        if ((uVar4 & 1) != 0) {
          lVar8 = UnityEngine_Component__get_gameObject(lVar8,0);
          if (lVar8 == 0) goto LAB_00c1b6c8;
          iVar2 = UnityEngine_GameObject__get_layer(lVar8,0);
          if (iVar2 != iVar1) {
            lVar18 = UnityEngine_MeshFilter__get_sharedMesh(lVar18,0);
            if (lVar18 == 0) goto LAB_00c1b6c8;
            iVar2 = UnityEngine_Mesh__get_subMeshCount(lVar18,0);
            iVar3 = iVar2 + iVar3;
          }
        }
      }
    }
    uVar13 = *(uint *)(lVar6 + 0x18);
    uVar15 = uVar15 + 1;
    if ((int)uVar13 <= (int)uVar15) break;
LAB_00c1b818:
    if (uVar13 <= uVar15) goto LAB_00c1bfe0;
  }
LAB_00c1b8e8:
  lVar18 = func_0x00a679a0(_UnityEngine_MeshFilter___TypeInfo,iVar3);
  lVar8 = func_0x00a679a0(_UnityEngine_CombineInstance___TypeInfo,iVar3);
  uVar13 = *(uint *)(lVar6 + 0x18);
  if (0 < (int)uVar13) {
    lVar20 = 0;
    uVar15 = 0;
    lVar7 = lVar6 + 0x20;
    do {
      uVar19 = (uint)lVar20;
      if (uVar13 <= uVar19) goto LAB_00c1bfe0;
      lVar9 = *(long *)(lVar7 + lVar20 * 8);
      if (lVar9 == 0) goto LAB_00c1b6c8;
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (lVar9,&lStack_e0,_Method_UnityEngine_Component_GetComponent_MeshRenderer___);
      lVar9 = lStack_e0;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(lVar9,0,0);
      uVar13 = uVar15;
      if ((uVar4 & 1) != 0) {
        if (lVar9 == 0) goto LAB_00c1b6c8;
        uVar4 = UnityEngine_Renderer__get_enabled(lVar9,0);
        if ((uVar4 & 1) != 0) {
          lVar10 = UnityEngine_Component__get_gameObject(lVar9,0);
          if (lVar10 == 0) goto LAB_00c1b6c8;
          uVar4 = UnityEngine_GameObject__get_activeInHierarchy(lVar10,0);
          if ((uVar4 & 1) != 0) {
            lVar9 = UnityEngine_Component__get_gameObject(lVar9,0);
            if (lVar9 == 0) goto LAB_00c1b6c8;
            iVar3 = UnityEngine_GameObject__get_layer(lVar9,0);
            if (iVar3 != iVar1) {
              if (*(uint *)(lVar6 + 0x18) <= uVar19) goto LAB_00c1bfe0;
              if (lVar18 == 0) goto LAB_00c1b6c8;
              if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_00c1bfe0;
              *(undefined8 *)(lVar18 + (long)(int)uVar15 * 8 + 0x20) =
                   *(undefined8 *)(lVar7 + lVar20 * 8);
              lVar9 = *(long *)(lVar7 + lVar20 * 8);
              if ((lVar9 == 0) ||
                 (lVar9 = UnityEngine_MeshFilter__get_sharedMesh(lVar9,0), lVar9 == 0))
              goto LAB_00c1b6c8;
              uVar13 = uVar15 + 1;
              iVar3 = UnityEngine_Mesh__get_subMeshCount(lVar9,0);
              if (iVar3 == 2) {
                if ((*(uint *)(lVar6 + 0x18) <= uVar19) || (*(uint *)(lVar18 + 0x18) <= uVar13))
                goto LAB_00c1bfe0;
                *(undefined8 *)(lVar18 + (long)(int)uVar13 * 8 + 0x20) =
                     *(undefined8 *)(lVar7 + lVar20 * 8);
                uVar13 = uVar15 + 2;
              }
            }
          }
        }
      }
      uVar15 = uVar13;
      uVar13 = *(uint *)(lVar6 + 0x18);
      lVar20 = lVar20 + 1;
    } while ((int)lVar20 < (int)uVar13);
  }
  if (lVar18 != 0) {
    uVar13 = *(uint *)(lVar18 + 0x18);
    if (0 < (int)uVar13) {
      uVar15 = 0;
      do {
        if (uVar13 <= uVar15) {
LAB_00c1bfe0:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        iVar3 = 0;
        while( true ) {
          plVar17 = (long *)(lVar18 + (long)(int)uVar15 * 8 + 0x20);
          if ((*plVar17 == 0) ||
             (lVar6 = UnityEngine_MeshFilter__get_sharedMesh(*plVar17,0), lVar6 == 0))
          goto LAB_00c1b6c8;
          iVar2 = UnityEngine_Mesh__get_subMeshCount(lVar6,0);
          if (iVar2 <= iVar3) break;
          if (lVar8 == 0) goto LAB_00c1b6c8;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_00c1bfe0;
          lVar6 = lVar8 + (long)(int)uVar15 * 0x68 + 0x20;
          UnityEngine_CombineInstance__set_subMeshIndex(lVar6,iVar3,0);
          if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_00c1bfe0;
          if (*plVar17 == 0) goto LAB_00c1b6c8;
          uVar16 = UnityEngine_MeshFilter__get_sharedMesh(*plVar17,0);
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_00c1bfe0;
          UnityEngine_CombineInstance__set_mesh(lVar6,uVar16,0);
          uStack_b8 = uStack_78;
          uStack_c0 = uStack_80;
          uStack_a8 = uStack_68;
          uStack_b0 = uStack_70;
          uStack_d8 = uStack_98;
          lStack_e0 = lStack_a0;
          uStack_c8 = uStack_88;
          uStack_d0 = uStack_90;
          if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_00c1bfe0;
          if ((*plVar17 == 0) ||
             (lVar7 = UnityEngine_Component__get_transform(*plVar17,0), lVar7 == 0))
          goto LAB_00c1b6c8;
          UnityEngine_Transform__get_localToWorldMatrix(&uStack_120,lVar7,0);
          uStack_1d8 = uStack_118;
          uStack_1e0 = uStack_120;
          uStack_1c8 = uStack_108;
          uStack_1d0 = uStack_110;
          uStack_1b8 = uStack_f8;
          uStack_1c0 = uStack_100;
          uStack_1a8 = uStack_e8;
          uStack_1b0 = uStack_f0;
          uStack_198 = uStack_d8;
          lStack_1a0 = lStack_e0;
          uStack_188 = uStack_c8;
          uStack_190 = uStack_d0;
          uStack_178 = uStack_b8;
          uStack_180 = uStack_c0;
          uStack_168 = uStack_a8;
          uStack_170 = uStack_b0;
          UnityEngine_Matrix4x4__op_Multiply(&uStack_160,&lStack_1a0,&uStack_1e0,0);
          uStack_118 = uStack_158;
          uStack_120 = uStack_160;
          uStack_108 = uStack_148;
          uStack_110 = uStack_150;
          uStack_f8 = uStack_138;
          uStack_100 = uStack_140;
          uStack_e8 = uStack_128;
          uStack_f0 = uStack_130;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_00c1bfe0;
          uStack_218 = uStack_158;
          uStack_220 = uStack_160;
          uStack_208 = uStack_148;
          uStack_210 = uStack_150;
          uStack_1f8 = uStack_138;
          uStack_200 = uStack_140;
          uStack_1e8 = uStack_128;
          uStack_1f0 = uStack_130;
          UnityEngine_CombineInstance__set_transform(lVar6,&uStack_220,0);
          if (iVar3 == 0) {
            if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_00c1bfe0;
            if ((*plVar17 == 0) ||
               (lVar6 = UnityEngine_MeshFilter__get_sharedMesh(*plVar17,0), lVar6 == 0))
            goto LAB_00c1b6c8;
            iVar2 = UnityEngine_Mesh__get_subMeshCount(lVar6,0);
            if (iVar2 == 2) {
              uVar15 = uVar15 + 1;
            }
          }
          iVar3 = iVar3 + 1;
          if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_00c1bfe0;
        }
        uVar13 = *(uint *)(lVar18 + 0x18);
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < (int)uVar13);
    }
    lVar6 = UnityEngine_Component__get_gameObject(__this,0);
    if (lVar6 != 0) {
      lVar6 = UnityEngine_GameObject__AddComponent_object_
                        (lVar6,_Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
      uVar16 = func_0x00a67b44(_UnityEngine_Mesh_TypeInfo);
      UnityEngine_Mesh___ctor(uVar16,0);
      if (lVar6 != 0) {
        UnityEngine_MeshFilter__set_mesh(lVar6,uVar16,0);
        lVar6 = UnityEngine_MeshFilter__get_mesh(lVar6,0);
        if (lVar6 != 0) {
          UnityEngine_Mesh__CombineMeshes(lVar6,lVar8,0);
          lVar6 = UnityEngine_Component__get_gameObject(__this,0);
          if (lVar6 != 0) {
            lVar6 = UnityEngine_GameObject__AddComponent_object_
                              (lVar6,_Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            uVar4 = UnityEngine_Object__op_Inequality(lVar6,0,0);
            if ((uVar4 & 1) != 0) {
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) || (lVar6 == 0)) goto LAB_00c1b6c8;
              UnityEngine_Renderer__set_material
                        (lVar6,*(undefined8 *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x80),0);
            }
            lVar6 = UnityEngine_Component__get_gameObject(__this,0);
            if (lVar6 != 0) {
              UnityEngine_GameObject__SetActive(lVar6,1,0);
              lVar6 = UnityEngine_Component__get_transform(__this,0);
              if (lVar6 != 0) {
                plVar17 = (long *)UnityEngine_Transform__GetEnumerator(lVar6,0);
                if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b50();
                }
                do {
                  lVar6 = *plVar17;
                  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar4 != 0) {
                    piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                        puVar11 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                        goto LAB_00c1bdd0;
                      }
                      uVar4 = uVar4 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar11 = (undefined8 *)
                            func_0x00a9e6c4(plVar17,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00c1bdd0:
                  uVar4 = (*(code *)*puVar11)(plVar17,puVar11[1]);
                  if ((uVar4 & 1) == 0) {
                    plVar17 = (long *)func_0x00a67a34(plVar17,_System_IDisposable_TypeInfo);
                    if (plVar17 == (long *)0x0) {
                      return;
                    }
                    lVar5 = *plVar17;
                    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar4 == 0) goto LAB_00c1bf94;
                    piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    goto LAB_00c1bf7c;
                  }
                  lVar6 = *plVar17;
                  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar4 != 0) {
                    piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                        puVar11 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                        goto LAB_00c1be30;
                      }
                      uVar4 = uVar4 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar11 = (undefined8 *)
                            func_0x00a9e6c4(plVar17,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00c1be30:
                  plVar12 = (long *)(*(code *)*puVar11)(plVar17,puVar11[1]);
                  if (plVar12 == (long *)0x0) {
LAB_00c1bfec:
                    /* WARNING: Subroutine does not return */
                    il2cpp_throw_967b50();
                  }
                  if ((*(byte *)(*plVar12 + 0x130) <
                       *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
                     (*(long *)(*(long *)(*plVar12 + 200) +
                                (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8)
                      != _UnityEngine_Transform_TypeInfo)) {
                    func_0x00a67eec(plVar12);
                    goto LAB_00c1bfec;
                  }
                  lVar6 = UnityEngine_Component__get_gameObject(plVar12,0);
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_throw_967b50();
                  }
                  iVar3 = UnityEngine_GameObject__get_layer(lVar6,0);
                  if (iVar3 == iVar1) {
                    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                              (plVar12,&lStack_e0,
                               _Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                    lVar6 = lStack_e0;
                    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (**(long **)(_Main_TypeInfo + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_throw_967b50();
                    }
                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_throw_967b50();
                    }
                    UnityEngine_Renderer__set_material
                              (lVar6,*(undefined8 *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x80),0);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar4 = UnityEngine_Object__op_Inequality(lVar5,0,0);
                    if ((uVar4 & 1) != 0) {
                      if (*(long *)(lVar5 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_throw_967b50();
                      }
                      func_0x00b7fe44(*(long *)(lVar5 + 0x70),plVar12,
                                      _Method_System_Collections_Generic_List_Transform__Add__);
                    }
                  }
                  else {
                    uVar16 = UnityEngine_Component__get_gameObject(plVar12,0);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    UnityEngine_Object__Destroy(uVar16,0);
                  }
                } while( true );
              }
            }
          }
        }
      }
    }
  }
  goto LAB_00c1b6c8;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar14 = piVar14 + 4;
    if (uVar4 == 0) break;
LAB_00c1bf7c:
    if (*(long *)(piVar14 + -2) == _System_IDisposable_TypeInfo) {
      puVar11 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_00c1bfb0;
    }
  }
LAB_00c1bf94:
  puVar11 = (undefined8 *)func_0x00a9e6c4(plVar17,_System_IDisposable_TypeInfo,0);
LAB_00c1bfb0:
  (*(code *)*puVar11)(plVar17,puVar11[1]);
  return;
}


// ==== public void MNMBFIBHFBB() { }   @0xb1c8d8

/* WARNING: Removing unreachable block (ram,0x00c5f6f8) */
/* WARNING: Removing unreachable block (ram,0x00c5f248) */
/* WARNING: Removing unreachable block (ram,0x00c5f258) */
/* WARNING: Removing unreachable block (ram,0x00c5f270) */
/* WARNING: Removing unreachable block (ram,0x00c5f274) */
/* WARNING: Removing unreachable block (ram,0x00c5f27c) */
/* WARNING: Removing unreachable block (ram,0x00c5f288) */
/* WARNING: Removing unreachable block (ram,0x00c5f28c) */
/* WARNING: Removing unreachable block (ram,0x00c5f294) */
/* WARNING: Removing unreachable block (ram,0x00c5f2a0) */
/* WARNING: Removing unreachable block (ram,0x00c5f2ac) */
/* WARNING: Removing unreachable block (ram,0x00c5f2b4) */
/* WARNING: Removing unreachable block (ram,0x00c5f2bc) */
/* WARNING: Removing unreachable block (ram,0x00c5f2c8) */
/* WARNING: Removing unreachable block (ram,0x00c5f2d4) */
/* WARNING: Removing unreachable block (ram,0x00c5f2e0) */
/* WARNING: Removing unreachable block (ram,0x00c5f2f0) */
/* WARNING: Removing unreachable block (ram,0x00c5f2f8) */
/* WARNING: Removing unreachable block (ram,0x00c5f304) */
/* WARNING: Removing unreachable block (ram,0x00c5f314) */
/* WARNING: Removing unreachable block (ram,0x00c5f36c) */
/* WARNING: Removing unreachable block (ram,0x00c5f374) */
/* WARNING: Removing unreachable block (ram,0x00c5f380) */
/* WARNING: Removing unreachable block (ram,0x00c5f388) */
/* WARNING: Removing unreachable block (ram,0x00c5f394) */
/* WARNING: Removing unreachable block (ram,0x00c60530) */
/* WARNING: Removing unreachable block (ram,0x00c5f3a4) */
/* WARNING: Removing unreachable block (ram,0x00c5f3d4) */
/* WARNING: Removing unreachable block (ram,0x00c5f3e4) */
/* WARNING: Removing unreachable block (ram,0x00c5f3ec) */
/* WARNING: Removing unreachable block (ram,0x00c5f414) */
/* WARNING: Removing unreachable block (ram,0x00c5f3f8) */
/* WARNING: Removing unreachable block (ram,0x00c5f404) */
/* WARNING: Removing unreachable block (ram,0x00c5f420) */
/* WARNING: Removing unreachable block (ram,0x00c5f664) */
/* WARNING: Removing unreachable block (ram,0x00c5f690) */
/* WARNING: Removing unreachable block (ram,0x00c5f6a4) */
/* WARNING: Removing unreachable block (ram,0x00c5f6ac) */
/* WARNING: Removing unreachable block (ram,0x00c5f6d4) */
/* WARNING: Removing unreachable block (ram,0x00c5f6b8) */
/* WARNING: Removing unreachable block (ram,0x00c5f6c4) */
/* WARNING: Removing unreachable block (ram,0x00c5f6e0) */
/* WARNING: Removing unreachable block (ram,0x00c5f6ec) */
/* WARNING: Removing unreachable block (ram,0x00c5f6f0) */
/* WARNING: Removing unreachable block (ram,0x00c5f6fc) */
/* WARNING: Removing unreachable block (ram,0x00c5f708) */
/* WARNING: Removing unreachable block (ram,0x00c5f70c) */
/* WARNING: Removing unreachable block (ram,0x00c5f724) */
/* WARNING: Removing unreachable block (ram,0x00c5f730) */
/* WARNING: Removing unreachable block (ram,0x00c5f734) */
/* WARNING: Removing unreachable block (ram,0x00c5f748) */
/* WARNING: Removing unreachable block (ram,0x00c5f74c) */
/* WARNING: Removing unreachable block (ram,0x00c5f75c) */
/* WARNING: Removing unreachable block (ram,0x00c5f77c) */
/* WARNING: Removing unreachable block (ram,0x00c5f430) */
/* WARNING: Removing unreachable block (ram,0x00c5f440) */
/* WARNING: Removing unreachable block (ram,0x00c5f448) */
/* WARNING: Removing unreachable block (ram,0x00c5f470) */
/* WARNING: Removing unreachable block (ram,0x00c5f454) */
/* WARNING: Removing unreachable block (ram,0x00c5f460) */
/* WARNING: Removing unreachable block (ram,0x00c5f480) */
/* WARNING: Removing unreachable block (ram,0x00c5f494) */
/* WARNING: Removing unreachable block (ram,0x00c5f4ac) */
/* WARNING: Removing unreachable block (ram,0x00c6050c) */
/* WARNING: Removing unreachable block (ram,0x00c60518) */
/* WARNING: Removing unreachable block (ram,0x00c5f4c0) */
/* WARNING: Removing unreachable block (ram,0x00c5f520) */
/* WARNING: Removing unreachable block (ram,0x00c5f544) */
/* WARNING: Removing unreachable block (ram,0x00c5f508) */
/* WARNING: Removing unreachable block (ram,0x00c5f55c) */
/* WARNING: Removing unreachable block (ram,0x00c5f5a0) */
/* WARNING: Removing unreachable block (ram,0x00c60528) */
/* WARNING: Removing unreachable block (ram,0x00c5f5c0) */
/* WARNING: Removing unreachable block (ram,0x00c5f610) */
/* WARNING: Removing unreachable block (ram,0x00c60520) */
/* WARNING: Removing unreachable block (ram,0x00c5f618) */
/* WARNING: Removing unreachable block (ram,0x00c5f624) */
/* WARNING: Removing unreachable block (ram,0x00c60534) */
/* WARNING: Removing unreachable block (ram,0x00c60354) */
/* WARNING: Removing unreachable block (ram,0x00c600d0) */
/* WARNING: Removing unreachable block (ram,0x00c600d4) */
/* WARNING: Removing unreachable block (ram,0x00c600e8) */
/* WARNING: Removing unreachable block (ram,0x00c600f0) */
/* WARNING: Removing unreachable block (ram,0x00c600fc) */
/* WARNING: Removing unreachable block (ram,0x00c5fbb8) */
/* WARNING: Removing unreachable block (ram,0x00c5fbd0) */
/* WARNING: Removing unreachable block (ram,0x00c5fbd4) */
/* WARNING: Removing unreachable block (ram,0x00c5fbdc) */
/* WARNING: Removing unreachable block (ram,0x00c5fbf0) */
/* WARNING: Removing unreachable block (ram,0x00c5fc04) */
/* WARNING: Removing unreachable block (ram,0x00c5fc0c) */
/* WARNING: Removing unreachable block (ram,0x00c5fc18) */
/* WARNING: Removing unreachable block (ram,0x00c5fc24) */
/* WARNING: Removing unreachable block (ram,0x00c5f7e0) */
/* WARNING: Removing unreachable block (ram,0x00c5f844) */
/* WARNING: Removing unreachable block (ram,0x00c5f858) */
/* WARNING: Removing unreachable block (ram,0x00c5f860) */
/* WARNING: Removing unreachable block (ram,0x00c5f878) */
/* WARNING: Removing unreachable block (ram,0x00c5f880) */
/* WARNING: Removing unreachable block (ram,0x00c5f890) */
/* WARNING: Removing unreachable block (ram,0x00c5f870) */
/* WARNING: Removing unreachable block (ram,0x00c6014c) */
/* WARNING: Removing unreachable block (ram,0x00c60160) */
/* WARNING: Removing unreachable block (ram,0x00c60164) */
/* WARNING: Removing unreachable block (ram,0x00c6016c) */
/* WARNING: Removing unreachable block (ram,0x00c60180) */
/* WARNING: Removing unreachable block (ram,0x00c60194) */
/* WARNING: Removing unreachable block (ram,0x00c6019c) */
/* WARNING: Removing unreachable block (ram,0x00c601a8) */
/* WARNING: Removing unreachable block (ram,0x00c601d4) */
/* WARNING: Removing unreachable block (ram,0x00c601e8) */
/* WARNING: Removing unreachable block (ram,0x00c601fc) */
/* WARNING: Removing unreachable block (ram,0x00c604a8) */
/* WARNING: Removing unreachable block (ram,0x00c60260) */
/* WARNING: Removing unreachable block (ram,0x00c60268) */
/* WARNING: Removing unreachable block (ram,0x00c60274) */
/* WARNING: Removing unreachable block (ram,0x00c60294) */
/* WARNING: Removing unreachable block (ram,0x00c6029c) */
/* WARNING: Removing unreachable block (ram,0x00c602a8) */
/* WARNING: Removing unreachable block (ram,0x00c602c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__MNMBFIBHFBB(void *__this)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  void *__this_00;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  uint uStack_78;
  undefined4 uStack_74;
  
  if ((bRam0000000001917013 & 1) == 0) {
    func_0x00a67900(&GUIGameplay_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001917013 = 1;
  }
  if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((*(long *)((long)__this + 0x30) == 0) ||
     (lVar7 = *(long *)(*(long *)((long)__this + 0x30) + 0x410), lVar7 == 0)) goto LAB_00c1ca78;
  iVar1 = *(int *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 8);
  if (iVar1 < *(int *)(lVar7 + 0x18)) {
    if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      iVar1 = *(int *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 8);
    }
    if (iVar1 < 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar7 != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if (lVar7 == 0) goto LAB_00c1ca78;
        }
        if (*(int *)(lVar7 + 0x10) == -1) {
          __this_00 = *(void **)((long)__this + 0x30);
          if ((__this_00 != (void *)0x0) && (lVar7 = *(long *)((long)__this_00 + 0x410), lVar7 != 0)
             ) {
            if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            if (*(long *)(lVar7 + 0x20) != 0) {
              if (*(char *)(*(long *)(lVar7 + 0x20) + 0x58) != '\0') {
LAB_00c1ca5c:
                if ((bRam0000000001917217 & 1) == 0) {
                  func_0x00a67900(&BridgePHP_TypeInfo,0,0,0);
                  func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___);
                  func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
                  func_0x00a67900(&GUIGameplay_TypeInfo);
                  func_0x00a67900(&System_IDisposable_TypeInfo);
                  func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
                  func_0x00a67900(&Main_TypeInfo);
                  func_0x00a67900(&Menu_TypeInfo);
                  func_0x00a67900(&UnityEngine_Object_TypeInfo);
                  func_0x00a67900(&GUIGameplay_POFCDOMOIBH_TypeInfo);
                  func_0x00a67900(&UnityEngine_RectOffset_TypeInfo);
                  func_0x00a67900(&UnityEngine_Transform_TypeInfo);
                  func_0x00a67900(&Translate_TypeInfo);
                  func_0x00a67900(&Str_TUTORIAL);
                  func_0x00a67900(&Str_latest_completed_tutorial__);
                  func_0x00a67900(&Str_TUTORIAL_5_NINTENDO);
                  func_0x00a67900(&Str__PLAYSTATION);
                  func_0x00a67900(&Str__A);
                  func_0x00a67900(&Str_TUTORIAL_5_PC);
                  func_0x00a67900(&Str__GAMEPAD);
                  func_0x00a67900(&Str_point_marker);
                  func_0x00a67900(&Str__);
                  func_0x00a67900(&Str_TUTORIAL_);
                  func_0x00a67900(&Str_HELP);
                  func_0x00a67900(&Str_TUTORIAL_5_PLAYSTATION);
                  func_0x00a67900(&Str__PC);
                  func_0x00a67900(&Str_);
                  func_0x00a67900(&Str__B);
                  func_0x00a67900(&Str__NINTENDO);
                  func_0x00a67900(&Str_point_);
                  func_0x00a67900(&Str_TUTORIAL_5_TAP);
                  bRam0000000001917217 = 1;
                }
                uStack_74 = 0;
                if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                *(undefined4 *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4) = 0;
                plVar8 = *(long **)((long)__this_00 + 0x3f8);
                if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Translate_TypeInfo + 0xb8) != 0) &&
                   (uVar3 = Translate__JJJNIPAKLJF
                                      (**(long **)(_Translate_TypeInfo + 0xb8),_Str_TUTORIAL,0),
                   plVar8 != (long *)0x0)) {
                  (**(code **)(*plVar8 + 0x5a8))(plVar8,uVar3,*(undefined8 *)(*plVar8 + 0x5b0));
                  if (*(long *)((long)__this_00 + 0x438) != 0) {
                    UnityEngine_GameObject__SetActive(*(long *)((long)__this_00 + 0x438),0,0);
                    *(undefined4 *)((long)__this_00 + 0x42c) = 0xffffffff;
                    uVar11 = UnityEngine_Time__get_realtimeSinceStartup(0);
                    if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    *(undefined4 *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 0x10) = uVar11;
                    GUIGameplay__DHFMPHMAMBF(__this_00);
                    if (*(long *)((long)__this_00 + 0x440) != 0) {
                      UnityEngine_GameObject__SetActive(*(long *)((long)__this_00 + 0x440),0,0);
                      if (*(long *)((long)__this_00 + 0x448) != 0) {
                        UnityEngine_GameObject__SetActive(*(long *)((long)__this_00 + 0x448),0,0);
                        if (*(long *)((long)__this_00 + 0x450) != 0) {
                          UnityEngine_GameObject__SetActive(*(long *)((long)__this_00 + 0x450),0,0);
                          if (*(long *)((long)__this_00 + 0x458) != 0) {
                            UnityEngine_GameObject__SetActive
                                      (*(long *)((long)__this_00 + 0x458),0,0);
                            if (*(long *)((long)__this_00 + 0x460) != 0) {
                              UnityEngine_GameObject__SetActive
                                        (*(long *)((long)__this_00 + 0x460),0,0);
                              if (*(long *)((long)__this_00 + 0x468) != 0) {
                                UnityEngine_GameObject__SetActive
                                          (*(long *)((long)__this_00 + 0x468),0,0);
                                if (*(long *)((long)__this_00 + 0x470) != 0) {
                                  UnityEngine_GameObject__SetActive
                                            (*(long *)((long)__this_00 + 0x470),0,0);
                                  if (*(long *)((long)__this_00 + 0x478) != 0) {
                                    UnityEngine_GameObject__SetActive
                                              (*(long *)((long)__this_00 + 0x478),0,0);
                                    if (*(long *)((long)__this_00 + 0x480) != 0) {
                                      UnityEngine_GameObject__SetActive
                                                (*(long *)((long)__this_00 + 0x480),0,0);
                                      lVar7 = *(long *)((long)__this_00 + 0x410);
                                      if (lVar7 != 0) {
                                        uVar2 = 0;
                                        uVar3 = 0;
                                        plVar9 = (long *)0x0;
                                        plVar8 = (long *)((long)__this_00 + 0x410);
                                        do {
                                          if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar2) {
                                            uStack_74 = 1;
                                            if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                                              func_0x00a67a30();
                                            }
                                            lVar7 = **(long **)(_Translate_TypeInfo + 0xb8);
                                            uVar3 = System_Int32__ToString(&uStack_74,0);
                                            uVar3 = System_String__Concat(_Str_TUTORIAL_,uVar3,0);
                                            if ((lVar7 == 0) ||
                                               (uVar3 = Translate__JJJNIPAKLJF(lVar7,uVar3,0),
                                               plVar9 == (long *)0x0)) break;
                                            (**(code **)(*plVar9 + 0x5a8))
                                                      (plVar9,uVar3,*(undefined8 *)(*plVar9 + 0x5b0)
                                                      );
                                            lVar7 = (**(code **)(*plVar9 + 0x598))
                                                              (plVar9,*(undefined8 *)
                                                                       (*plVar9 + 0x5a0));
                                            uVar3 = System_Environment__get_NewLine(0);
                                            if (lVar7 == 0) break;
                                            uVar3 = System_String__Replace(lVar7,_Str__,uVar3,0);
                                            (**(code **)(*plVar9 + 0x5a8))
                                                      (plVar9,uVar3,*(undefined8 *)(*plVar9 + 0x5b0)
                                                      );
                                            lVar7 = *(long *)((long)__this_00 + 0x408);
                                            uVar3 = func_0x00a67b44(_UnityEngine_RectOffset_TypeInfo
                                                                   );
                                            UnityEngine_RectOffset___ctor(uVar3,0,0,0x87,0x6e,0);
                                            if (lVar7 == 0) break;
                                            UnityEngine_UI_LayoutGroup__set_padding(lVar7,uVar3,0);
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
                                            lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                                            if (lVar7 == 0) break;
                                            if (*(int *)(lVar7 + 0x94) == 10) {
LAB_00c60498:
                                              UnityEngine_UI_Text__set_lineSpacing
                                                        (0x3f99999a,plVar9,0);
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
                                              lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8
                                                               );
                                              if (lVar7 == 0) break;
                                              if (*(int *)(lVar7 + 0x94) == 0xb) goto LAB_00c60498;
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
                                              lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8
                                                               );
                                              if (lVar7 == 0) break;
                                              if (*(int *)(lVar7 + 0x94) == 0xc) goto LAB_00c60498;
                                            }
                                            if (*(long *)((long)__this_00 + 0x78) != 0) {
                                              GUIWindow__HEGIHOAJOKK
                                                        (*(long *)((long)__this_00 + 0x78),1,0);
                                              return;
                                            }
                                            break;
                                          }
                                          if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_00c60508;
                                          lVar7 = *(long *)(lVar7 + uVar2 * 8 + 0x20);
                                          if (lVar7 != 0) {
                                            uVar10 = *(undefined8 *)(lVar7 + 0x18);
                                            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0)
                                            {
                                              func_0x00a67a30();
                                            }
                                            uVar4 = UnityEngine_Object__op_Inequality(uVar10,0,0);
                                            if ((uVar4 & 1) != 0) {
                                              lVar7 = *plVar8;
                                              if (lVar7 == 0) break;
                                              if (*(uint *)(lVar7 + 0x18) <= uVar2)
                                              goto LAB_00c60508;
                                              lVar7 = *(long *)(lVar7 + uVar2 * 8 + 0x20);
                                              if ((lVar7 == 0) ||
                                                 (lVar7 = *(long *)(lVar7 + 0x18), lVar7 == 0))
                                              break;
                                              UnityEngine_GameObject__SetActive(lVar7,uVar2 == 0,0);
                                            }
                                            lVar7 = *plVar8;
                                            if (lVar7 == 0) break;
                                            if (*(uint *)(lVar7 + 0x18) <= uVar2) {
LAB_00c60508:
                    /* WARNING: Subroutine does not return */
                                              il2cpp_throw_967b58();
                                            }
                                            lVar7 = *(long *)(lVar7 + uVar2 * 8 + 0x20);
                                            if (lVar7 == 0) break;
                                            uVar10 = *(undefined8 *)(lVar7 + 0x40);
                                            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0)
                                            {
                                              func_0x00a67a30();
                                            }
                                            uVar4 = UnityEngine_Object__op_Inequality(uVar10,0,0);
                                            lVar7 = *plVar8;
                                            if ((uVar2 == 0) && ((uVar4 & 1) != 0)) {
                                              if (lVar7 == 0) break;
                                              if (*(int *)(lVar7 + 0x18) == 0) goto LAB_00c60508;
                                              if (*(long *)(lVar7 + 0x20) == 0) break;
                                              plVar9 = *(long **)(*(long *)(lVar7 + 0x20) + 0x40);
                                            }
                                            else if (lVar7 == 0) break;
                                            if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_00c60508;
                                            lVar7 = *(long *)(lVar7 + uVar2 * 8 + 0x20);
                                            if (lVar7 == 0) break;
                                            uVar10 = *(undefined8 *)(lVar7 + 0x20);
                                            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0)
                                            {
                                              func_0x00a67a30();
                                            }
                                            uVar4 = UnityEngine_Object__op_Inequality(uVar10,0,0);
                                            if ((uVar4 & 1) != 0) {
                                              lVar7 = *plVar8;
                                              if (lVar7 == 0) break;
                                              if (*(uint *)(lVar7 + 0x18) <= uVar2)
                                              goto LAB_00c60508;
                                              lVar7 = *(long *)(lVar7 + uVar2 * 8 + 0x20);
                                              if ((lVar7 == 0) ||
                                                 (lVar7 = *(long *)(lVar7 + 0x20), lVar7 == 0))
                                              break;
                                              UnityEngine_GameObject__SetActive(lVar7,0,0);
                                            }
                                            lVar7 = *plVar8;
                                            if (lVar7 == 0) break;
                                            if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_00c60508;
                                            lVar7 = *(long *)(lVar7 + uVar2 * 8 + 0x20);
                                            if (lVar7 == 0) break;
                                            uVar10 = *(undefined8 *)(lVar7 + 0x28);
                                            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0)
                                            {
                                              func_0x00a67a30();
                                            }
                                            uVar4 = UnityEngine_Object__op_Inequality(uVar10,0,0);
                                            if ((uVar4 & 1) != 0) {
                                              lVar7 = *plVar8;
                                              if (lVar7 == 0) break;
                                              if (*(uint *)(lVar7 + 0x18) <= uVar2)
                                              goto LAB_00c60508;
                                              lVar7 = *(long *)(lVar7 + uVar2 * 8 + 0x20);
                                              if ((lVar7 == 0) ||
                                                 (lVar7 = *(long *)(lVar7 + 0x28), lVar7 == 0))
                                              break;
                                              UnityEngine_GameObject__SetActive(lVar7,0,0);
                                            }
                                            lVar7 = *plVar8;
                                            if (lVar7 == 0) break;
                                            if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_00c60508;
                                            lVar7 = *(long *)(lVar7 + uVar2 * 8 + 0x20);
                                            if (lVar7 == 0) break;
                                            uVar10 = *(undefined8 *)(lVar7 + 0x30);
                                            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0)
                                            {
                                              func_0x00a67a30();
                                            }
                                            uVar4 = UnityEngine_Object__op_Inequality(uVar10,0,0);
                                            if ((uVar4 & 1) != 0) {
                                              lVar7 = *plVar8;
                                              if (lVar7 == 0) break;
                                              if (*(uint *)(lVar7 + 0x18) <= uVar2)
                                              goto LAB_00c60508;
                                              lVar7 = *(long *)(lVar7 + uVar2 * 8 + 0x20);
                                              if ((lVar7 == 0) ||
                                                 (lVar7 = *(long *)(lVar7 + 0x30), lVar7 == 0))
                                              break;
                                              UnityEngine_GameObject__SetActive(lVar7,0,0);
                                            }
                                            lVar7 = *plVar8;
                                            if (lVar7 == 0) break;
                                            if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_00c60508;
                                            lVar7 = *(long *)(lVar7 + uVar2 * 8 + 0x20);
                                            if (lVar7 == 0) break;
                                            uVar10 = *(undefined8 *)(lVar7 + 0x38);
                                            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0)
                                            {
                                              func_0x00a67a30();
                                            }
                                            uVar4 = UnityEngine_Object__op_Inequality(uVar10,0,0);
                                            if ((uVar4 & 1) != 0) {
                                              lVar7 = *plVar8;
                                              if (lVar7 == 0) break;
                                              if (*(uint *)(lVar7 + 0x18) <= uVar2)
                                              goto LAB_00c60508;
                                              lVar7 = *(long *)(lVar7 + uVar2 * 8 + 0x20);
                                              if ((lVar7 == 0) ||
                                                 (lVar7 = *(long *)(lVar7 + 0x38), lVar7 == 0))
                                              break;
                                              UnityEngine_GameObject__SetActive(lVar7,0,0);
                                            }
                                            if (uVar2 == 0) {
                                              lVar7 = *plVar8;
                                              if (lVar7 == 0) break;
                                              if (*(int *)(lVar7 + 0x18) == 0) goto LAB_00c60508;
                                              if (*(long *)(lVar7 + 0x20) == 0) break;
                                              lVar7 = *(long *)(*(long *)(lVar7 + 0x20) + 0x50);
                                              uStack_78 = 0;
                                              if (lVar7 == 0) break;
                                              uVar6 = *(uint *)(lVar7 + 0x18);
                                              if (0 < (int)uVar6) {
                                                do {
                                                  if (uVar6 <= uStack_78) goto LAB_00c60508;
                                                  lVar5 = *(long *)(lVar7 + (long)(int)uStack_78 * 8
                                                                   + 0x20);
                                                  if (lVar5 == 0) goto LAB_00c600b8;
                                                  UnityEngine_Transform__SetParent
                                                            (lVar5,*(undefined8 *)
                                                                    ((long)__this_00 + 0x28),0);
                                                  uStack_78 = uStack_78 + 1;
                                                  uVar6 = *(uint *)(lVar7 + 0x18);
                                                } while ((int)uStack_78 < (int)uVar6);
                                              }
                                              if (*(long *)((long)__this_00 + 0x488) == 0) break;
                                              UnityEngine_GameObject__SetActive
                                                        (*(long *)((long)__this_00 + 0x488),0,0);
                                              lVar7 = *plVar8;
                                              if (lVar7 == 0) break;
                                              if (*(int *)(lVar7 + 0x18) == 0) goto LAB_00c60508;
                                              if (*(long *)(lVar7 + 0x20) == 0) break;
                                              uVar10 = *(undefined8 *)
                                                        (*(long *)(lVar7 + 0x20) + 0x28);
                                              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0
                                                 ) {
                                                func_0x00a67a30();
                                              }
                                              uVar4 = UnityEngine_Object__op_Inequality(uVar10,0,0);
                                              if ((uVar4 & 1) != 0) {
                                                lVar7 = *plVar8;
                                                if (lVar7 == 0) break;
                                                if (*(int *)(lVar7 + 0x18) == 0) goto LAB_00c60508;
                                                if (*(long *)(lVar7 + 0x20) == 0) break;
                                                uVar10 = *(undefined8 *)
                                                          (*(long *)(lVar7 + 0x20) + 0x18);
                                                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) ==
                                                    0) {
                                                  func_0x00a67a30();
                                                }
                                                uVar4 = UnityEngine_Object__op_Inequality
                                                                  (uVar10,0,0);
                                                if ((uVar4 & 1) != 0) {
                                                  if (*(long *)((long)__this_00 + 0x488) == 0)
                                                  break;
                                                  lVar7 = UnityEngine_GameObject__get_transform
                                                                    (*(long *)((long)__this_00 +
                                                                              0x488),0);
                                                  lVar5 = *plVar8;
                                                  if (lVar5 == 0) break;
                                                  if (*(int *)(lVar5 + 0x18) == 0)
                                                  goto LAB_00c60508;
                                                  if (((*(long *)(lVar5 + 0x20) == 0) ||
                                                      (lVar5 = *(long *)(*(long *)(lVar5 + 0x20) +
                                                                        0x18), lVar5 == 0)) ||
                                                     (uVar10 = UnityEngine_GameObject__get_transform
                                                                         (lVar5,0), lVar7 == 0))
                                                  break;
                                                  UnityEngine_Transform__set_parent(lVar7,uVar10,0);
                                                }
                                              }
                                              if (*(long *)((long)__this_00 + 0x490) == 0) break;
                                              UnityEngine_GameObject__SetActive
                                                        (*(long *)((long)__this_00 + 0x490),0,0);
                                              lVar7 = *plVar8;
                                              if (lVar7 == 0) break;
                                              if (*(int *)(lVar7 + 0x18) == 0) goto LAB_00c60508;
                                              if (*(long *)(lVar7 + 0x20) == 0) break;
                                              uVar10 = *(undefined8 *)
                                                        (*(long *)(lVar7 + 0x20) + 0x30);
                                              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0
                                                 ) {
                                                func_0x00a67a30();
                                              }
                                              uVar4 = UnityEngine_Object__op_Inequality(uVar10,0,0);
                                              if ((uVar4 & 1) != 0) {
                                                lVar7 = *plVar8;
                                                if (lVar7 == 0) break;
                                                if (*(int *)(lVar7 + 0x18) == 0) goto LAB_00c60508;
                                                if (*(long *)(lVar7 + 0x20) == 0) break;
                                                uVar10 = *(undefined8 *)
                                                          (*(long *)(lVar7 + 0x20) + 0x18);
                                                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) ==
                                                    0) {
                                                  func_0x00a67a30();
                                                }
                                                uVar4 = UnityEngine_Object__op_Inequality
                                                                  (uVar10,0,0);
                                                if ((uVar4 & 1) != 0) {
                                                  if (*(long *)((long)__this_00 + 0x490) == 0)
                                                  break;
                                                  lVar7 = UnityEngine_GameObject__get_transform
                                                                    (*(long *)((long)__this_00 +
                                                                              0x490),0);
                                                  lVar5 = *plVar8;
                                                  if (lVar5 == 0) break;
                                                  if (*(int *)(lVar5 + 0x18) == 0)
                                                  goto LAB_00c60508;
                                                  if (((*(long *)(lVar5 + 0x20) == 0) ||
                                                      (lVar5 = *(long *)(*(long *)(lVar5 + 0x20) +
                                                                        0x18), lVar5 == 0)) ||
                                                     (uVar10 = UnityEngine_GameObject__get_transform
                                                                         (lVar5,0), lVar7 == 0))
                                                  break;
                                                  UnityEngine_Transform__set_parent(lVar7,uVar10,0);
                                                }
                                              }
                                              if (*(long *)((long)__this_00 + 0x498) == 0) break;
                                              UnityEngine_GameObject__SetActive
                                                        (*(long *)((long)__this_00 + 0x498),0,0);
                                              lVar7 = *plVar8;
                                              if (lVar7 == 0) break;
                                              if (*(int *)(lVar7 + 0x18) == 0) goto LAB_00c60508;
                                              if (*(long *)(lVar7 + 0x20) == 0) break;
                                              uVar10 = *(undefined8 *)
                                                        (*(long *)(lVar7 + 0x20) + 0x38);
                                              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0
                                                 ) {
                                                func_0x00a67a30();
                                              }
                                              uVar4 = UnityEngine_Object__op_Inequality(uVar10,0,0);
                                              if ((uVar4 & 1) != 0) {
                                                lVar7 = *plVar8;
                                                if (lVar7 == 0) break;
                                                if (*(int *)(lVar7 + 0x18) == 0) goto LAB_00c60508;
                                                if (*(long *)(lVar7 + 0x20) == 0) break;
                                                uVar10 = *(undefined8 *)
                                                          (*(long *)(lVar7 + 0x20) + 0x18);
                                                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) ==
                                                    0) {
                                                  func_0x00a67a30();
                                                }
                                                uVar4 = UnityEngine_Object__op_Inequality
                                                                  (uVar10,0,0);
                                                if ((uVar4 & 1) != 0) {
                                                  if (*(long *)((long)__this_00 + 0x498) == 0)
                                                  break;
                                                  lVar7 = UnityEngine_GameObject__get_transform
                                                                    (*(long *)((long)__this_00 +
                                                                              0x498),0);
                                                  lVar5 = *plVar8;
                                                  if (lVar5 == 0) break;
                                                  if (*(int *)(lVar5 + 0x18) == 0)
                                                  goto LAB_00c60508;
                                                  if (((*(long *)(lVar5 + 0x20) == 0) ||
                                                      (lVar5 = *(long *)(*(long *)(lVar5 + 0x20) +
                                                                        0x18), lVar5 == 0)) ||
                                                     (uVar10 = UnityEngine_GameObject__get_transform
                                                                         (lVar5,0), lVar7 == 0))
                                                  break;
                                                  UnityEngine_Transform__set_parent(lVar7,uVar10,0);
                                                }
                                              }
                                            }
                                            lVar7 = *plVar8;
                                            if (lVar7 == 0) break;
                                            if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_00c60508;
                                            lVar7 = *(long *)(lVar7 + uVar2 * 8 + 0x20);
                                            if (lVar7 == 0) break;
                                            uVar10 = *(undefined8 *)(lVar7 + 0x48);
                                            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0)
                                            {
                                              func_0x00a67a30();
                                            }
                                            uVar4 = UnityEngine_Object__op_Inequality(uVar10,0,0);
                                            if ((uVar4 & 1) != 0) {
                                              lVar7 = *plVar8;
                                              if (lVar7 == 0) break;
                                              if (*(uint *)(lVar7 + 0x18) <= uVar2)
                                              goto LAB_00c60508;
                                              lVar7 = *(long *)(lVar7 + uVar2 * 8 + 0x20);
                                              if (lVar7 == 0) break;
                                              if (uVar2 == 0) {
                                                if (*(long *)(lVar7 + 0x48) == 0) break;
                                                UnityEngine_GameObject__SetActive
                                                          (*(long *)(lVar7 + 0x48),1,0);
                                                lVar7 = *plVar8;
                                                if (lVar7 == 0) break;
                                                if (*(int *)(lVar7 + 0x18) == 0) goto LAB_00c60508;
                                                if (*(long *)(lVar7 + 0x20) == 0) break;
                                                uVar3 = *(undefined8 *)
                                                         (*(long *)(lVar7 + 0x20) + 0x48);
                                              }
                                              else {
                                                uVar10 = *(undefined8 *)(lVar7 + 0x48);
                                                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) ==
                                                    0) {
                                                  func_0x00a67a30();
                                                }
                                                uVar4 = UnityEngine_Object__op_Inequality
                                                                  (uVar3,uVar10,0);
                                                if ((uVar4 & 1) != 0) {
                                                  lVar7 = *plVar8;
                                                  if (lVar7 == 0) break;
                                                  if (*(uint *)(lVar7 + 0x18) <= uVar2)
                                                  goto LAB_00c60508;
                                                  lVar7 = *(long *)(lVar7 + uVar2 * 8 + 0x20);
                                                  if ((lVar7 == 0) ||
                                                     (lVar7 = *(long *)(lVar7 + 0x48), lVar7 == 0))
                                                  break;
                                                  UnityEngine_GameObject__SetActive(lVar7,0,0);
                                                }
                                              }
                                            }
                                          }
                                          lVar7 = *plVar8;
                                          uVar2 = uVar2 + 1;
                                        } while (lVar7 != 0);
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
LAB_00c600b8:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
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
              lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (lVar7 != 0) {
                uVar2 = DAFNMLEKHAD__BLGOKNOOEEO(lVar7,0,0);
                if ((uVar2 & 1) != 0) {
                  return;
                }
                __this_00 = *(void **)((long)__this + 0x30);
                if (__this_00 != (void *)0x0) goto LAB_00c1ca5c;
              }
            }
          }
LAB_00c1ca78:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
      }
    }
  }
  return;
}


// ==== public void .ctor() { }   @0xb1d39c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController___ctor(void *__this)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000001917016 & 1) == 0) {
    func_0x00a67900(&CarController_CarColor___TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_MeshRenderer__Material_____ctor__)
    ;
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_Transform__RaycastHit___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_MeshRenderer__Material____TypeInfo);
    func_0x00a67900(&System_Collections_Generic_Dictionary_Transform__RaycastHit__TypeInfo);
    func_0x00a67900(&EHKCLJKMBLO___TypeInfo);
    func_0x00a67900(&UnityEngine_GameObject___TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_GameObject___ctor__);
    func_0x00a67900(&System_Collections_Generic_List_GameObject__TypeInfo);
    func_0x00a67900(&UnityEngine_Transform___TypeInfo);
    bRam0000000001917016 = 1;
  }
  uVar1 = func_0x00a67b44(_System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
            (uVar1,_Method_System_Collections_Generic_List_GameObject___ctor__);
  *(undefined8 *)((long)__this + 0x110) = uVar1;
  *(undefined4 *)((long)__this + 0x120) = 4;
  *(undefined8 *)((long)__this + 0x138) = 0x3c23d70a40000000;
  *(undefined4 *)((long)__this + 0x130) = 0x3e4ccccd;
  *(undefined4 *)((long)__this + 0x140) = 0x3f800000;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_a0,0x440c0000,0);
  uStack_70 = uStack_90;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  *(undefined8 *)((long)__this + 0x150) = uStack_98;
  *(undefined8 *)((long)__this + 0x148) = uStack_a0;
  *(undefined8 *)((long)__this + 0x158) = uStack_90;
  *(undefined4 *)((long)__this + 0x164) = 0x32;
  *(undefined8 *)((long)__this + 0x170) = 0x40400000447a0000;
  *(undefined8 *)((long)__this + 0x168) = 0x3dcccccd41000000;
  *(undefined8 *)((long)__this + 0x180) = 0xbe800000;
  *(undefined8 *)((long)__this + 0x178) = 0x3f19999a;
  *(undefined4 *)((long)__this + 0x188) = 0x3f800000;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_a0,100,0);
  uStack_b0 = (undefined4)uStack_90;
  uStack_b8 = uStack_98;
  uStack_c0 = uStack_a0;
  *(undefined4 *)((long)__this + 0x19c) = (undefined4)uStack_90;
  *(undefined8 *)((long)__this + 0x194) = uStack_98;
  *(undefined8 *)((long)__this + 0x18c) = uStack_a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_a0,100,0);
  uStack_d0 = (undefined4)uStack_90;
  uStack_d8 = uStack_98;
  uStack_e0 = uStack_a0;
  *(undefined4 *)((long)__this + 0x1b0) = (undefined4)uStack_90;
  *(undefined8 *)((long)__this + 0x1a8) = uStack_98;
  *(undefined8 *)((long)__this + 0x1a0) = uStack_a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_a0,0,0);
  uStack_f0 = (undefined4)uStack_90;
  uStack_f8 = uStack_98;
  uStack_100 = uStack_a0;
  *(undefined4 *)((long)__this + 0x1c4) = (undefined4)uStack_90;
  *(undefined8 *)((long)__this + 0x1bc) = uStack_98;
  *(undefined8 *)((long)__this + 0x1b4) = uStack_a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_120,0,0);
  uStack_98 = uStack_118;
  uStack_a0 = uStack_120;
  *(ulong *)((long)__this + 0x1dc) = CONCAT44(uStack_10c,uStack_110);
  *(undefined8 *)((long)__this + 0x1d4) = uStack_118;
  *(undefined8 *)((long)__this + 0x1cc) = uStack_120;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_140,0x118,0);
  uStack_110 = uStack_130;
  uStack_118 = uStack_138;
  uStack_120 = uStack_140;
  *(undefined4 *)((long)__this + 500) = uStack_130;
  *(undefined8 *)((long)__this + 0x1ec) = uStack_138;
  *(undefined8 *)((long)__this + 0x1e4) = uStack_140;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_160,5000,0);
  uStack_130 = uStack_150;
  uStack_138 = uStack_158;
  uStack_140 = uStack_160;
  *(undefined4 *)((long)__this + 0x208) = uStack_150;
  *(undefined8 *)((long)__this + 0x200) = uStack_158;
  *(undefined8 *)((long)__this + 0x1f8) = uStack_160;
  *(undefined4 *)((long)__this + 0x20c) = 0xbf800000;
  *(undefined4 *)((long)__this + 0x21c) = 0x3fa66666;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_180,0,0);
  uStack_150 = uStack_170;
  uStack_158 = uStack_178;
  uStack_160 = uStack_180;
  *(undefined4 *)((long)__this + 0x23c) = uStack_170;
  *(undefined8 *)((long)__this + 0x234) = uStack_178;
  *(undefined8 *)((long)__this + 0x22c) = uStack_180;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_1a0,0,0);
  uStack_170 = uStack_190;
  uStack_178 = uStack_198;
  uStack_180 = uStack_1a0;
  *(undefined4 *)((long)__this + 0x250) = uStack_190;
  *(undefined8 *)((long)__this + 0x248) = uStack_198;
  *(undefined8 *)((long)__this + 0x240) = uStack_1a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_1c0,0,0);
  uStack_190 = uStack_1b0;
  uStack_198 = uStack_1b8;
  uStack_1a0 = uStack_1c0;
  *(undefined4 *)((long)__this + 0x264) = uStack_1b0;
  *(undefined8 *)((long)__this + 0x25c) = uStack_1b8;
  *(undefined8 *)((long)__this + 0x254) = uStack_1c0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_1e0,0,0);
  uStack_1b0 = uStack_1d0;
  uStack_1b8 = uStack_1d8;
  uStack_1c0 = uStack_1e0;
  *(undefined4 *)((long)__this + 0x278) = uStack_1d0;
  *(undefined8 *)((long)__this + 0x270) = uStack_1d8;
  *(undefined8 *)((long)__this + 0x268) = uStack_1e0;
  uVar1 = func_0x00a67b44(_System_Collections_Generic_Dictionary_Transform__RaycastHit__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar1,_Method_System_Collections_Generic_Dictionary_Transform__RaycastHit___ctor__);
  *(undefined8 *)((long)__this + 0x290) = uVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_200,0,0);
  uStack_1d0 = uStack_1f0;
  uStack_1d8 = uStack_1f8;
  uStack_1e0 = uStack_200;
  *(undefined4 *)((long)__this + 0x300) = uStack_1f0;
  *(undefined8 *)((long)__this + 0x2f8) = uStack_1f8;
  *(undefined8 *)((long)__this + 0x2f0) = uStack_200;
  *(undefined1 *)((long)__this + 0x311) = 1;
  *(undefined8 *)((long)__this + 0x338) = 0x3f800000;
  *(undefined8 *)((long)__this + 0x330) = 0x3f8000003f800000;
  uVar1 = func_0x00a679a0(_UnityEngine_GameObject___TypeInfo,5);
  *(undefined8 *)((long)__this + 0x350) = uVar1;
  uVar1 = func_0x00a679a0(_EHKCLJKMBLO___TypeInfo,5);
  *(undefined8 *)((long)__this + 0x358) = uVar1;
  *(undefined4 *)((long)__this + 0x3d4) = 0xffffffff;
  if (cRam0000000001916789 == '\0') {
    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
    cRam0000000001916789 = '\x01';
  }
  uVar2 = *(undefined4 *)(*(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 1);
  *(undefined8 *)((long)__this + 0x3ec) = **(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
  *(undefined4 *)((long)__this + 0x3f4) = uVar2;
  *(undefined8 *)((long)__this + 0x420) = 0x3f33333343960000;
  *(undefined8 *)((long)__this + 0x418) = 0x3f19999a43960000;
  *(undefined8 *)((long)__this + 0x428) = 0x4270000041700000;
  *(undefined8 *)((long)__this + 0x438) = 0x3e4ccccd42c80000;
  *(undefined8 *)((long)__this + 0x440) = 0x3f00000040e00000;
  *(undefined4 *)((long)__this + 0x448) = 0x3e4ccccd;
  *(undefined1 *)((long)__this + 0x44c) = 1;
  uVar1 = func_0x00a679a0(_CarController_CarColor___TypeInfo,4);
  *(undefined8 *)((long)__this + 0x470) = uVar1;
  uVar1 = func_0x00a679a0(_UnityEngine_Transform___TypeInfo,2);
  *(undefined8 *)((long)__this + 0x488) = uVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_218,0,0);
  uStack_1f0 = uStack_208;
  uStack_1f8 = uStack_210;
  uStack_200 = uStack_218;
  *(undefined4 *)((long)__this + 0x4c4) = uStack_208;
  *(undefined8 *)((long)__this + 0x4bc) = uStack_210;
  *(undefined8 *)((long)__this + 0x4b4) = uStack_218;
  *(undefined8 *)((long)__this + 0x4c8) = 0x447a000043fa0000;
  if (cRam0000000001916789 == '\0') {
    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
    cRam0000000001916789 = '\x01';
  }
  uVar2 = *(undefined4 *)(*(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 1);
  *(undefined8 *)((long)__this + 0x4f8) = **(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
  *(undefined4 *)((long)__this + 0x500) = uVar2;
  uVar1 = func_0x00a67b44(_System_Collections_Generic_Dictionary_MeshRenderer__Material____TypeInfo)
  ;
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar1,_Method_System_Collections_Generic_Dictionary_MeshRenderer__Material_____ctor__);
  *(undefined8 *)((long)__this + 0x510) = uVar1;
  uVar1 = func_0x00a67b44(_System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
            (uVar1,_Method_System_Collections_Generic_List_GameObject___ctor__);
  *(undefined8 *)((long)__this + 0x518) = uVar1;
  UnityEngine_MonoBehaviour___ctor(__this,0);
  return;
}


// ==== private void OJOPPNIEGLL() { }   @0xb1e980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__OJOPPNIEGLL(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000191701b & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191701b = 1;
  }
  uVar3 = *(undefined8 *)((long)__this + 0x30);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    CarController__OFLMLGPBOBL(__this);
    if (*(char *)((long)__this + 0x216) == '\0') {
      lVar2 = *(long *)((long)__this + 0x30);
      if ((lVar2 == 0) || (*(long *)(lVar2 + 0x118) == 0)) goto LAB_00c1eaa4;
      if (*(float *)(*(long *)(lVar2 + 0x118) + 0xf4) < 0.3) {
        *(undefined1 *)((long)__this + 0x216) = 1;
        *(undefined1 *)((long)__this + 0x214) = 1;
        *(undefined4 *)(lVar2 + 0x120) = 0;
        uVar3 = *(undefined8 *)((long)__this + 0x3b0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if ((uVar1 & 1) == 0) {
          return;
        }
        lVar2 = *(long *)((long)__this + 0x3b0);
        if (lVar2 != 0) {
          if (pcRam000000000191d320 == (code *)0x0) {
            pcRam000000000191d320 = (code *)func_0x00a678c4(&UNK_005b52f5,0);
          }
                    /* WARNING: Could not recover jumptable at 0x014ca880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191d320)(lVar2,1);
          return;
        }
        goto LAB_00c1eaa4;
      }
    }
    if (*(char *)((long)__this + 0x215) == '\0') {
      lVar2 = *(long *)((long)__this + 0x30);
      if ((lVar2 == 0) || (*(long *)(lVar2 + 0x118) == 0)) {
LAB_00c1eaa4:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if (*(float *)(*(long *)(lVar2 + 0x118) + 0xf4) < 0.6) {
        *(undefined2 *)((long)__this + 0x214) = 0x101;
        *(undefined4 *)(lVar2 + 0x120) = 0;
      }
    }
  }
  return;
}


// ==== private int BBONKOLGOKE() { }   @0xb1f0e8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int CarController__BBONKOLGOKE(void *__this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  if ((bRam000000000191701f & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam000000000191701f = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar3 == 0) {
    return 0;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if (lVar3 == 0) goto LAB_00c1f1dc;
  }
  if (*(long *)(lVar3 + 0x28) != 0) {
    if (*(long *)(*(long *)(lVar3 + 0x28) + 0x18) == 0) {
      return 0;
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar3 == 0) goto LAB_00c1f1dc;
    }
    lVar3 = *(long *)(lVar3 + 0x28);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0x18);
      if (iVar1 < 1) {
        return 0;
      }
      iVar4 = 0;
      iVar2 = 0;
      while( true ) {
        if (iVar1 == iVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar5 = *(long *)(lVar3 + (long)iVar4 * 8 + 0x20);
        if (lVar5 == 0) break;
        if (*(int *)(lVar5 + 0x10) == 0) {
          iVar2 = *(int *)(lVar5 + 0x14);
        }
        iVar4 = iVar4 + 1;
        if (iVar1 == iVar4) {
          return iVar2;
        }
      }
    }
  }
LAB_00c1f1dc:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void FKBDELMHMJD(ref ObscuredInt FJOKKOFPECG, ref ObscuredInt HLOKKFLPPBA) { }   @0xb1fb84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__FKBDELMHMJD(void *__this,void *FJOKKOFPECG,void *HLOKKFLPPBA)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam0000000001917024 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_FLIP);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str___x);
    func_0x00a67900(&Str_);
    bRam0000000001917024 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  CarController__IKOEIGDJPEK(__this,0x1e,0);
  uStack_a0 = *(undefined4 *)((long)HLOKKFLPPBA + 0x10);
  uStack_a8 = *(undefined8 *)((long)HLOKKFLPPBA + 8);
  uStack_b0 = *(undefined8 *)HLOKKFLPPBA;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Increment(&uStack_90,&uStack_b0,0);
  uStack_40 = uStack_80;
  uStack_48 = uStack_88;
  uStack_50 = uStack_90;
  *(undefined4 *)((long)HLOKKFLPPBA + 0x10) = uStack_80;
  *(undefined8 *)((long)HLOKKFLPPBA + 8) = uStack_88;
  *(undefined8 *)HLOKKFLPPBA = uStack_90;
  if (*(char *)((long)__this + 0x314) != '\0') {
    uStack_40 = *(undefined4 *)((long)__this + 0x300);
    uStack_48 = *(undefined8 *)((long)__this + 0x2f8);
    uStack_50 = *(undefined8 *)((long)__this + 0x2f0);
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_50,0);
    uStack_c0 = *(undefined4 *)((long)FJOKKOFPECG + 0x10);
    uStack_c8 = *(undefined8 *)((long)FJOKKOFPECG + 8);
    uStack_d0 = *(undefined8 *)FJOKKOFPECG;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_d0,0);
    CarController__NDIMMLBIFCI(__this,iVar2 + iVar1);
  }
  uVar5 = *(undefined8 *)((long)__this + 0x30);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    lVar6 = *(long *)((long)__this + 0x30);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
      uVar4 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_FLIP,0);
      uStack_e8 = *(undefined8 *)((long)FJOKKOFPECG + 8);
      uStack_f0 = *(undefined8 *)FJOKKOFPECG;
      uStack_e0 = *(undefined4 *)((long)FJOKKOFPECG + 0x10);
      iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_f0,0);
      uVar5 = _Str_;
      if (1 < iVar1) {
        uStack_60 = *(undefined4 *)((long)FJOKKOFPECG + 0x10);
        uStack_68 = *(undefined8 *)((long)FJOKKOFPECG + 8);
        uStack_70 = *(undefined8 *)FJOKKOFPECG;
        uVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(&uStack_70,0);
        uVar5 = System_String__Concat(_Str___x,uVar5,_Str__,0);
      }
      uVar5 = System_String__Concat(uVar4,uVar5,0);
      if (lVar6 != 0) {
        GUIGameplay__HNKHJLDJMHB(lVar6,uVar5,1,0,1,0);
        goto LAB_00c1fdc4;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
LAB_00c1fdc4:
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_90,0,0);
  uStack_40 = uStack_80;
  uStack_48 = uStack_88;
  uStack_50 = uStack_90;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  uStack_60 = uStack_80;
  *(undefined4 *)((long)__this + 0x4c4) = uStack_80;
  *(undefined8 *)((long)__this + 0x4bc) = uStack_88;
  *(undefined8 *)((long)__this + 0x4b4) = uStack_90;
  *(undefined4 *)((long)__this + 0x4b0) = uStack_80;
  *(undefined8 *)((long)__this + 0x4a8) = uStack_88;
  *(undefined8 *)((long)__this + 0x4a0) = uStack_90;
  fVar7 = (float)UnityEngine_Time__get_time(0);
  if (*(float *)((long)__this + 0x280) < fVar7) {
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    SoundScript__FIGKLLNAMLG(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 200),0);
    fVar7 = (float)UnityEngine_Time__get_time(0);
    *(float *)((long)__this + 0x280) = fVar7 + 5.0;
  }
  return;
}


// ==== private void IODIAKMIMDD() { }   @0xb22538

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__IODIAKMIMDD(void *__this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_48;
  
  if ((bRam0000000001917028 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&System_TimeSpan_TypeInfo);
    bRam0000000001917028 = 1;
  }
  uStack_48 = 0;
  puVar1 = (undefined8 *)((long)__this + 0x18c);
  uStack_60 = *(undefined4 *)((long)__this + 0x19c);
  uStack_68 = *(undefined8 *)((long)__this + 0x194);
  uStack_70 = *puVar1;
  iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_70,0);
  uStack_88 = *(undefined8 *)((long)__this + 0x1a8);
  uStack_90 = *(undefined8 *)((long)__this + 0x1a0);
  uStack_80 = *(undefined4 *)((long)__this + 0x1b0);
  iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_90,0);
  if (iVar3 < iVar4) {
    if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = System_DateTime__get_Now(0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uStack_48 = System_DateTime__op_Subtraction(uVar6,*(undefined8 *)(lVar7 + 0xf8),0);
    if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_System_TimeSpan_TypeInfo);
    }
    dVar8 = (double)System_TimeSpan__get_TotalSeconds(&uStack_48,0);
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iVar4 = *(int *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0xc);
    iVar3 = -0x80000000;
    if (dVar8 != INFINITY) {
      iVar3 = (int)dVar8;
    }
    iVar5 = 0;
    if (iVar4 != 0) {
      iVar5 = iVar3 / iVar4;
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_c8,iVar5,0);
    puVar2 = (undefined8 *)((long)__this + 0x1b4);
    uStack_a0 = uStack_b8;
    uStack_a8 = uStack_c0;
    uStack_b0 = uStack_c8;
    *(undefined4 *)((long)__this + 0x1c4) = uStack_b8;
    *(undefined8 *)((long)__this + 0x1bc) = uStack_c0;
    *puVar2 = uStack_c8;
    uStack_d0 = *(undefined4 *)((long)__this + 0x19c);
    uStack_d8 = *(undefined8 *)((long)__this + 0x194);
    uStack_e0 = *puVar1;
    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_e0,0);
    uStack_f8 = *(undefined8 *)((long)__this + 0x1bc);
    uStack_100 = *puVar2;
    uStack_f0 = *(undefined4 *)((long)__this + 0x1c4);
    iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_100,0);
    uStack_118 = *(undefined8 *)((long)__this + 0x1a8);
    uStack_120 = *(undefined8 *)((long)__this + 0x1a0);
    uStack_110 = *(undefined4 *)((long)__this + 0x1b0);
    iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_120,0);
    if (iVar5 <= iVar4 + iVar3) {
      *(undefined4 *)((long)__this + 0x19c) = *(undefined4 *)((long)__this + 0x1b0);
      *(undefined8 *)((long)__this + 0x194) = *(undefined8 *)((long)__this + 0x1a8);
      *puVar1 = *(undefined8 *)((long)__this + 0x1a0);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_c8,0,0);
      uStack_a0 = uStack_b8;
      uStack_a8 = uStack_c0;
      uStack_b0 = uStack_c8;
      *(undefined4 *)((long)__this + 0x1c4) = uStack_b8;
      *(undefined8 *)((long)__this + 0x1bc) = uStack_c0;
      *puVar2 = uStack_c8;
    }
    CarController__PCDOLLHPMJE(__this);
  }
  return;
}


// ==== public bool JMAEOBLLHHN() { }   @0xb2458c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool CarController__JMAEOBLLHHN(void *__this)

{
  byte bVar1;
  long lVar2;
  
  if ((bRam000000000191702d & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam000000000191702d = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  bVar1 = 0;
  if (lVar2 != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar2 == 0) goto LAB_00c24670;
    }
    if (*(int *)(lVar2 + 0x10) == 0) {
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
      if (lVar2 == 0) {
LAB_00c24670:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      bVar1 = DAFNMLEKHAD__JHCIANGHEAK(lVar2,0);
      bVar1 = bVar1 ^ 1;
    }
    else {
      bVar1 = 0;
    }
  }
  return (bool)(bVar1 & 1);
}


// ==== private void JBBIBEPIODK() { }   @0xb2511c

/* WARNING: Removing unreachable block (ram,0x00c253a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__JBBIBEPIODK(void *__this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  
  if ((bRam0000000001917031 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&GUIGameplay_TypeInfo);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917031 = 1;
  }
  uVar1 = UnityEngine_Input__GetKeyDown(0x1b,0);
  if ((uVar1 & 1) != 0) {
    CarController__AFPLNBDNJHM(__this);
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = _CarController_TypeInfo;
  lVar2 = *(long *)(_CarController_TypeInfo + 0xb8);
  if (*(char *)(lVar2 + 0x44) != '\0') {
    return;
  }
  *(undefined4 *)((long)__this + 0x218) = 0;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    func_0x00a67a30();
    lVar2 = *(long *)(_CarController_TypeInfo + 0xb8);
  }
  *(undefined4 *)(lVar2 + 0x10) = 0;
  if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (0.0 <= *(float *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 0xc)) {
    return;
  }
  if (*(long *)((long)__this + 0x30) != 0) {
    uVar4 = *(undefined8 *)(*(long *)((long)__this + 0x30) + 0x68);
    uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Equality(uVar5,uVar4,0);
    if ((uVar1 & 1) != 0) {
      return;
    }
    if (*(char *)((long)__this + 0x3fd) != '\0') {
      return;
    }
    uVar4 = *(undefined8 *)((long)__this + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)((long)__this + 0x30);
      if (lVar3 == 0) goto LAB_00c25428;
      if (*(char *)(lVar3 + 0xb8) != '\0') {
        CarController__JHMJACIPINH();
        lVar3 = *(long *)((long)__this + 0x30);
        if (lVar3 == 0) goto LAB_00c25428;
      }
      if (*(char *)(lVar3 + 0xb9) != '\0') {
        CarController__FGIKMGFJJDM(__this);
        lVar3 = *(long *)((long)__this + 0x30);
        if (lVar3 == 0) goto LAB_00c25428;
      }
      if (*(char *)(lVar3 + 0xba) != '\0') {
        CarController__ENFNKCGHPPG(__this);
        lVar3 = *(long *)((long)__this + 0x30);
        if (lVar3 == 0) goto LAB_00c25428;
      }
      if (*(char *)(lVar3 + 0xbb) != '\0') {
        *(float *)((long)__this + 0x218) = -*(float *)((long)__this + 0x21c);
      }
      if (*(char *)(lVar3 + 0xbc) != '\0') {
        *(undefined4 *)((long)__this + 0x218) = *(undefined4 *)((long)__this + 0x21c);
      }
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
    lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar3 != 0) {
      uVar1 = DAFNMLEKHAD__DPJPKMHLGMO(lVar3,0);
      if (((uVar1 & 1) != 0) && (*(char *)((long)__this + 0x3fc) == '\0')) {
        fVar6 = (float)UnityEngine_Input__get_acceleration(0);
        if ((0.05 < fVar6) || (fVar6 < -0.05)) {
          fVar6 = fVar6 * 3.2;
        }
        else {
          fVar6 = *(float *)((long)__this + 0x218);
        }
        if (fVar6 < -1.0) {
          fVar6 = -1.0;
        }
        *(float *)((long)__this + 0x218) = fVar6;
      }
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar3 = *(long *)(_CarController_TypeInfo + 0xb8);
      if (*(char *)(lVar3 + 0x34) != '\0') {
        return;
      }
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar3 = *(long *)(_CarController_TypeInfo + 0xb8);
      }
      if (0.0 < *(float *)(lVar3 + 0x10)) {
        CarController__BALBOFMAKKO(__this);
      }
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      *(undefined4 *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x10) = 0xbf800000;
      return;
    }
  }
LAB_00c25428:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private int DLFDOEBINCP() { }   @0xb1f040

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int CarController__DLFDOEBINCP(void *__this)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_20 = *(undefined4 *)((long)__this + 0x300);
  uStack_28 = *(undefined8 *)((long)__this + 0x2f8);
  uStack_30 = *(undefined8 *)((long)__this + 0x2f0);
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_30,0);
  return iVar1;
}


// ==== public void EDHBFCLPHCO(bool LKKLGPDFCHB) { }   @0xb2721c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__EDHBFCLPHCO(void *__this,bool LKKLGPDFCHB)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 auStack_28 [2];
  
  if ((bRam0000000001917038 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001917038 = 1;
  }
  if (*(long *)((long)__this + 0x48) != 0) {
    UnityEngine_AudioSource__Stop(*(long *)((long)__this + 0x48),0);
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar1 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x70);
    if (lVar1 != 0) {
      UnityEngine_AudioSource__Pause(lVar1,0);
      lVar1 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
      if (lVar1 != 0) {
        UnityEngine_AudioSource__Stop(lVar1,0);
        if (LKKLGPDFCHB) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar3 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
          if ((uVar2 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c273e4;
            uVar3 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x28);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
            if ((uVar2 & 1) != 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar1 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x28), lVar1 == 0))
              goto LAB_00c273e4;
              FuelManager__OBAELOECFBH(lVar1,0);
            }
          }
        }
        if (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        auStack_28[0] = UnityEngine_SceneManagement_SceneManager__GetActiveScene(0);
        uVar3 = UnityEngine_SceneManagement_Scene__get_name(auStack_28,0);
        UnityEngine_SceneManagement_SceneManager__LoadScene(uVar3,0);
        return;
      }
    }
  }
LAB_00c273e4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void EFIBCONCDIM() { }   @0xb27850

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__EFIBCONCDIM(void *__this)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if (*(char *)((long)__this + 0x27c) == '\0') {
    if (*(int *)((long)__this + 0x49c) == 0) {
      if ((160.0 < *(float *)((long)__this + 0x3cc)) && (*(char *)((long)__this + 0x3c8) == '\0')) {
        lVar2 = *(long *)((long)__this + 0x520);
        if (lVar2 != 0) {
          if (*(uint *)(lVar2 + 0x18) == 0) {
LAB_00c27a2c:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          if (*(long *)(lVar2 + 0x20) != 0) {
            if (*(char *)(*(long *)(lVar2 + 0x20) + 0x50) != '\0') {
              return;
            }
            if (*(uint *)(lVar2 + 0x18) < 3) goto LAB_00c27a2c;
            if (*(long *)(lVar2 + 0x30) != 0) {
              if (*(char *)(*(long *)(lVar2 + 0x30) + 0x50) != '\0') {
                return;
              }
              if (*(long *)((long)__this + 0x38) != 0) {
                fVar3 = (float)UnityEngine_Transform__get_eulerAngles
                                         (*(long *)((long)__this + 0x38),0);
                if (60.0 <= fVar3) {
                  if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c27a28;
                  fVar3 = (float)UnityEngine_Transform__get_eulerAngles
                                           (*(long *)((long)__this + 0x38),0);
                  if (fVar3 <= 300.0) {
                    return;
                  }
                  uVar1 = 2;
                }
                else {
                  uVar1 = 1;
                }
                *(undefined4 *)((long)__this + 0x49c) = uVar1;
                return;
              }
            }
          }
        }
        goto LAB_00c27a28;
      }
    }
    else if ((0 < *(int *)((long)__this + 0x49c)) && (*(float *)((long)__this + 0x3cc) < 30.0)) {
      if (*(long *)((long)__this + 0x38) == 0) {
LAB_00c27a28:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      fVar3 = (float)UnityEngine_Transform__get_eulerAngles(*(long *)((long)__this + 0x38),0);
      if (fVar3 <= 325.0) {
        if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c27a28;
        fVar3 = (float)UnityEngine_Transform__get_eulerAngles(*(long *)((long)__this + 0x38),0);
        if (30.0 <= fVar3) {
          return;
        }
        if (*(int *)((long)__this + 0x49c) != 1) {
          if (*(int *)((long)__this + 0x49c) != 2) {
            return;
          }
          uStack_70 = *(undefined4 *)((long)__this + 0x4b0);
          uStack_78 = *(undefined8 *)((long)__this + 0x4a8);
          uStack_80 = *(undefined8 *)((long)__this + 0x4a0);
          *(undefined4 *)((long)__this + 0x49c) = 0;
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Increment(&uStack_48,&uStack_80,0);
          *(undefined4 *)((long)__this + 0x4b0) = uStack_38;
          *(undefined8 *)((long)__this + 0x4a8) = uStack_40;
          *(undefined8 *)((long)__this + 0x4a0) = uStack_48;
          return;
        }
      }
      else if (*(int *)((long)__this + 0x49c) != 2) {
        if (*(int *)((long)__this + 0x49c) != 1) {
          return;
        }
        *(undefined4 *)((long)__this + 0x49c) = 0;
        uStack_50 = *(undefined4 *)((long)__this + 0x4c4);
        uStack_58 = *(undefined8 *)((long)__this + 0x4bc);
        uStack_60 = *(undefined8 *)((long)__this + 0x4b4);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Increment(&uStack_48,&uStack_60,0);
        *(undefined4 *)((long)__this + 0x4c4) = uStack_38;
        *(undefined8 *)((long)__this + 0x4bc) = uStack_40;
        *(undefined8 *)((long)__this + 0x4b4) = uStack_48;
        return;
      }
      *(undefined4 *)((long)__this + 0x49c) = 0;
    }
  }
  return;
}


// ==== public void AKNFDJKEDOC(Material PLBEPEHAFMO) { }   @0xb23f04

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__AKNFDJKEDOC(void *__this,void *PLBEPEHAFMO)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  
  if ((bRam0000000001917040 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_MeshRenderer__Material____Add__);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
    func_0x00a67900(&Str_wheels);
    bRam0000000001917040 = 1;
  }
  lVar4 = UnityEngine_Component__get_gameObject(__this,0);
  if ((lVar4 != 0) &&
     (lVar4 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                        (lVar4,
                         _Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___),
     lVar4 != 0)) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar11 = 0;
      do {
        if (uVar1 <= uVar11) {
LAB_00c240b8:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar9 = *(long *)(lVar4 + (long)(int)uVar11 * 8 + 0x20);
        if ((lVar9 == 0) || (lVar5 = UnityEngine_Component__get_gameObject(lVar9,0), lVar5 == 0))
        goto LAB_00c240c8;
        iVar2 = UnityEngine_GameObject__get_layer(lVar5,0);
        iVar3 = UnityEngine_LayerMask__NameToLayer(_Str_wheels,0);
        if (iVar2 != iVar3) {
          plVar6 = (long *)UnityEngine_Renderer__get_materials(lVar9,0);
          if (*(char *)((long)__this + 0x4f4) != '\0') {
            lVar5 = *(long *)((long)__this + 0x510);
            uVar7 = UnityEngine_Renderer__get_sharedMaterials(lVar9,0);
            if (lVar5 == 0) goto LAB_00c240c8;
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                      (lVar5,lVar9,uVar7,
                       _Method_System_Collections_Generic_Dictionary_MeshRenderer__Material____Add__
                      );
          }
          if (plVar6 == (long *)0x0) goto LAB_00c240c8;
          if (0 < (int)plVar6[3]) {
            uVar10 = 0;
            uVar8 = plVar6[3] & 0xffffffff;
            do {
              if (PLBEPEHAFMO != (void *)0x0) {
                lVar5 = func_0x00a67a34(PLBEPEHAFMO,*(undefined8 *)(*plVar6 + 0x40));
                if (lVar5 == 0) {
                  uVar7 = func_0x00a67b74();
                  func_0x00a67a20(uVar7,0);
                  goto LAB_00c240c8;
                }
                uVar8 = (ulong)*(uint *)(plVar6 + 3);
              }
              if (uVar8 <= uVar10) goto LAB_00c240b8;
              plVar6[uVar10 + 4] = (long)PLBEPEHAFMO;
              uVar10 = uVar10 + 1;
            } while ((long)uVar10 < (long)(int)uVar8);
          }
          UnityEngine_Renderer__set_materials(lVar9,plVar6,0);
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar1);
    }
    return;
  }
LAB_00c240c8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void OIDKCBOGMIJ() { }   @0xb28c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__OIDKCBOGMIJ(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  
  if ((bRam0000000001917045 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917045 = 1;
  }
  uVar2 = *(undefined8 *)((long)__this + 0x3b0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if (((uVar1 & 1) != 0) && (0.0 < *(float *)((long)__this + 0x3c4))) {
    if (*(long *)((long)__this + 0x3b0) == 0) {
LAB_00c28cd8:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar1 = UnityEngine_ParticleSystem__get_isPaused(*(long *)((long)__this + 0x3b0),0);
    if (((uVar1 & 1) != 0) &&
       (fVar3 = (float)UnityEngine_Time__get_time(0), 1.0 < fVar3 - *(float *)((long)__this + 0x3c4)
       )) {
      if (*(long *)((long)__this + 0x3b0) == 0) goto LAB_00c28cd8;
      UnityEngine_ParticleSystem__Play(*(long *)((long)__this + 0x3b0),0);
      *(undefined4 *)((long)__this + 0x3c4) = 0;
    }
  }
  return;
}


// ==== private void OENKDDLNKCJ(bool POOJPMFNDMP) { }   @0xb22dd4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__OENKDDLNKCJ(void *__this,bool POOJPMFNDMP)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam000000000191704a & 1) == 0) {
    func_0x00a67900(&bool___TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    func_0x00a67900(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191704a = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
    return;
  }
  lVar2 = *(long *)((long)__this + 0x108);
  if (POOJPMFNDMP) {
    if (lVar2 != 0) {
      uVar4 = 0;
      do {
        if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar4) {
          uVar3 = *(undefined8 *)((long)__this + 0x490);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
          if ((uVar4 & 1) == 0) {
            return;
          }
          if (*(long *)((long)__this + 0x490) != 0) {
            uVar4 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 0x490),0);
            if ((uVar4 & 1) == 0) {
              return;
            }
            if (*(long *)((long)__this + 0x110) != 0) {
              System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                        (*(long *)((long)__this + 0x110),&uStack_50,
                         _Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
              while (uVar4 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                                       (&uStack_50,
                                        _Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__
                                       ), (uVar4 & 1) != 0) {
                func_0x00b947ec(&uStack_50,&lStack_38,
                                _Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__
                               );
                if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b50();
                }
                UnityEngine_GameObject__SetActive(lStack_38,1,0);
              }
              System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                        (&uStack_50,
                         _Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
              if (*(long *)((long)__this + 0x490) != 0) {
                UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x490),0,0);
                return;
              }
            }
          }
          break;
        }
        if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_00c23180;
        uVar3 = *(undefined8 *)(lVar2 + uVar4 * 8 + 0x20);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if ((uVar1 & 1) != 0) {
          lVar2 = *(long *)((long)__this + 0x118);
          if (lVar2 == 0) break;
          if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_00c23180;
          if (*(char *)(lVar2 + uVar4 + 0x20) != '\0') {
            lVar2 = *(long *)((long)__this + 0x108);
            if (lVar2 == 0) break;
            if (*(uint *)(lVar2 + 0x18) <= uVar4) {
LAB_00c23180:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            lVar2 = *(long *)(lVar2 + uVar4 * 8 + 0x20);
            if (lVar2 == 0) break;
            UnityEngine_GameObject__SetActive(lVar2,1,0);
          }
        }
        lVar2 = *(long *)((long)__this + 0x108);
        uVar4 = uVar4 + 1;
      } while (lVar2 != 0);
    }
  }
  else if (lVar2 != 0) {
    uVar3 = func_0x00a679a0(_bool___TypeInfo,*(undefined4 *)(lVar2 + 0x18));
    lVar2 = *(long *)((long)__this + 0x108);
    *(undefined8 *)((long)__this + 0x118) = uVar3;
    if (lVar2 != 0) {
      uVar4 = 0;
      do {
        if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar4) {
          if (*(int *)((long)__this + 0x124) < 1) goto LAB_00c23120;
          lVar2 = *(long *)((long)__this + 0xe8);
          if (lVar2 != 0) {
            uVar4 = 0;
            goto LAB_00c230e8;
          }
          break;
        }
        if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_00c23180;
        uVar3 = *(undefined8 *)(lVar2 + uVar4 * 8 + 0x20);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if ((uVar1 & 1) != 0) {
          lVar2 = *(long *)((long)__this + 0x108);
          if (lVar2 == 0) break;
          if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_00c23180;
          lVar2 = *(long *)(lVar2 + uVar4 * 8 + 0x20);
          if (lVar2 == 0) break;
          uVar1 = UnityEngine_GameObject__get_activeInHierarchy(lVar2,0);
          if ((uVar1 & 1) != 0) {
            lVar2 = *(long *)((long)__this + 0x108);
            if (lVar2 == 0) break;
            if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_00c23180;
            lVar2 = *(long *)(lVar2 + uVar4 * 8 + 0x20);
            if (lVar2 == 0) break;
            UnityEngine_GameObject__SetActive(lVar2,0,0);
            lVar2 = *(long *)((long)__this + 0x118);
            if (lVar2 == 0) break;
            if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_00c23180;
            *(undefined1 *)(lVar2 + uVar4 + 0x20) = 1;
          }
        }
        lVar2 = *(long *)((long)__this + 0x108);
        uVar4 = uVar4 + 1;
      } while (lVar2 != 0);
    }
  }
LAB_00c2311c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
  while( true ) {
    if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_00c23180;
    CarController__KDHHDKMBELG(__this,*(undefined8 *)(lVar2 + uVar4 * 8 + 0x20),0);
    lVar2 = *(long *)((long)__this + 0xe8);
    uVar4 = uVar4 + 1;
    if (lVar2 == 0) break;
LAB_00c230e8:
    if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar4) goto LAB_00c23120;
  }
  goto LAB_00c2311c;
LAB_00c23120:
  if (*(long *)((long)__this + 0x430) != 0) {
    uVar3 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x430),0);
    CarController__KDHHDKMBELG(__this,uVar3,1);
    return;
  }
  goto LAB_00c2311c;
}



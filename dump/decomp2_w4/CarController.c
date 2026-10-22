// ==== private void KIHGPFPOIHP() { }   @0xb1b45c

/* WARNING: Removing unreachable block (ram,0x00c1c004) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__KIHGPFPOIHP(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  int *piVar15;
  uint uVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
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
  bVar1 = CarReplay__DJKMCIEIAMH();
  if (!bVar1) {
    return;
  }
  iVar2 = UnityEngine_LayerMask__NameToLayer(_Str_wheel,0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy(__this,0);
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
            (__this,&lStack_e0,_Method_UnityEngine_Component_GetComponent_CarCollision___);
  lVar14 = lStack_e0;
  uVar5 = UnityEngine_Object__op_Inequality(lStack_e0,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Object__Destroy(lVar14,0);
  }
  if (*(long *)((long)__this + 800) != 0) {
    UnityEngine_GameObject__SetActive(*(long *)((long)__this + 800),1,0);
    if (*(long *)((long)__this + 0x2e0) != 0) {
      UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x2e0),1,0);
      uVar17 = *(undefined8 *)((long)__this + 0x2e8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar17,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)((long)__this + 0x2e0) == 0) goto LAB_00c1b6c8;
        UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x2e0),1,0);
      }
      lVar14 = *(long *)((long)__this + 0xe8);
      if (lVar14 != 0) {
        uVar5 = 0;
        do {
          if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar5) {
            UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                      (__this,&lStack_e0,_Method_UnityEngine_Component_GetComponent_Rigidbody___);
            if (lStack_e0 != 0) {
              UnityEngine_Rigidbody__set_isKinematic(lStack_e0,1,0);
              lVar14 = UnityEngine_Component__get_gameObject(__this,0);
              if ((lVar14 != 0) &&
                 (lVar14 = UnityEngine_GameObject__AddComponent_object_
                                     (lVar14,
                                      _Method_UnityEngine_GameObject_AddComponent_CarReplay___),
                 lVar14 != 0)) {
                *(undefined1 *)(lVar14 + 0x30) = 1;
                *(undefined4 *)(lVar14 + 0x88) = *(undefined4 *)((long)__this + 0x130);
                *(undefined4 *)(lVar14 + 0x8c) = *(undefined4 *)((long)__this + 0x140);
                if (0.0 < *(float *)((long)__this + 0x144)) {
                  *(float *)(lVar14 + 0x90) = *(float *)((long)__this + 0x144);
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
                  uVar5 = UnityEngine_Object__op_Inequality(lVar6,0,0);
                  if ((uVar5 & 1) != 0) {
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
                        uVar16 = 0;
                        iVar4 = 0;
                        goto LAB_00c1b818;
                      }
                      iVar4 = 0;
                      goto LAB_00c1b8e8;
                    }
                  }
                }
              }
            }
            break;
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar5) goto LAB_00c1bfe0;
          CarController__KDHHDKMBELG(__this,*(void **)(lVar14 + uVar5 * 8 + 0x20),false);
          lVar14 = *(long *)((long)__this + 0xe8);
          uVar5 = uVar5 + 1;
        } while (lVar14 != 0);
      }
    }
  }
  goto LAB_00c1b6c8;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar15 = piVar15 + 4;
    if (uVar5 == 0) break;
LAB_00c1bf7c:
    if (*(long *)(piVar15 + -2) == _System_IDisposable_TypeInfo) {
      puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_00c1bfb0;
    }
  }
LAB_00c1bf94:
  puVar11 = (undefined8 *)func_0x00a9e6c4(plVar18,_System_IDisposable_TypeInfo,0);
LAB_00c1bfb0:
  (*(code *)*puVar11)(plVar18,puVar11[1]);
  return;
  while( true ) {
    lVar19 = *(long *)(lVar6 + (long)(int)uVar16 * 8 + 0x20);
    if (lVar19 == 0) goto LAB_00c1b6c8;
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
              (lVar19,&lStack_e0,_Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    lVar8 = lStack_e0;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(lVar8,0,0);
    if ((uVar5 & 1) != 0) {
      if (lVar8 == 0) goto LAB_00c1b6c8;
      uVar5 = UnityEngine_Renderer__get_enabled(lVar8,0);
      if ((uVar5 & 1) != 0) {
        lVar7 = UnityEngine_Component__get_gameObject(lVar8,0);
        if (lVar7 == 0) goto LAB_00c1b6c8;
        uVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar7,0);
        if ((uVar5 & 1) != 0) {
          lVar8 = UnityEngine_Component__get_gameObject(lVar8,0);
          if (lVar8 == 0) goto LAB_00c1b6c8;
          iVar3 = UnityEngine_GameObject__get_layer(lVar8,0);
          if (iVar3 != iVar2) {
            lVar19 = UnityEngine_MeshFilter__get_sharedMesh(lVar19,0);
            if (lVar19 == 0) goto LAB_00c1b6c8;
            iVar3 = UnityEngine_Mesh__get_subMeshCount(lVar19,0);
            iVar4 = iVar3 + iVar4;
          }
        }
      }
    }
    uVar13 = *(uint *)(lVar6 + 0x18);
    uVar16 = uVar16 + 1;
    if ((int)uVar13 <= (int)uVar16) break;
LAB_00c1b818:
    if (uVar13 <= uVar16) goto LAB_00c1bfe0;
  }
LAB_00c1b8e8:
  lVar19 = func_0x00a679a0(_UnityEngine_MeshFilter___TypeInfo,iVar4);
  lVar8 = func_0x00a679a0(_UnityEngine_CombineInstance___TypeInfo,iVar4);
  uVar13 = *(uint *)(lVar6 + 0x18);
  if (0 < (int)uVar13) {
    lVar21 = 0;
    uVar16 = 0;
    lVar7 = lVar6 + 0x20;
    do {
      uVar20 = (uint)lVar21;
      if (uVar13 <= uVar20) goto LAB_00c1bfe0;
      lVar9 = *(long *)(lVar7 + lVar21 * 8);
      if (lVar9 == 0) goto LAB_00c1b6c8;
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (lVar9,&lStack_e0,_Method_UnityEngine_Component_GetComponent_MeshRenderer___);
      lVar9 = lStack_e0;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(lVar9,0,0);
      uVar13 = uVar16;
      if ((uVar5 & 1) != 0) {
        if (lVar9 == 0) goto LAB_00c1b6c8;
        uVar5 = UnityEngine_Renderer__get_enabled(lVar9,0);
        if ((uVar5 & 1) != 0) {
          lVar10 = UnityEngine_Component__get_gameObject(lVar9,0);
          if (lVar10 == 0) goto LAB_00c1b6c8;
          uVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar10,0);
          if ((uVar5 & 1) != 0) {
            lVar9 = UnityEngine_Component__get_gameObject(lVar9,0);
            if (lVar9 == 0) goto LAB_00c1b6c8;
            iVar4 = UnityEngine_GameObject__get_layer(lVar9,0);
            if (iVar4 != iVar2) {
              if (*(uint *)(lVar6 + 0x18) <= uVar20) goto LAB_00c1bfe0;
              if (lVar19 == 0) goto LAB_00c1b6c8;
              if (*(uint *)(lVar19 + 0x18) <= uVar16) goto LAB_00c1bfe0;
              *(undefined8 *)(lVar19 + (long)(int)uVar16 * 8 + 0x20) =
                   *(undefined8 *)(lVar7 + lVar21 * 8);
              lVar9 = *(long *)(lVar7 + lVar21 * 8);
              if ((lVar9 == 0) ||
                 (lVar9 = UnityEngine_MeshFilter__get_sharedMesh(lVar9,0), lVar9 == 0))
              goto LAB_00c1b6c8;
              uVar13 = uVar16 + 1;
              iVar4 = UnityEngine_Mesh__get_subMeshCount(lVar9,0);
              if (iVar4 == 2) {
                if ((*(uint *)(lVar6 + 0x18) <= uVar20) || (*(uint *)(lVar19 + 0x18) <= uVar13))
                goto LAB_00c1bfe0;
                *(undefined8 *)(lVar19 + (long)(int)uVar13 * 8 + 0x20) =
                     *(undefined8 *)(lVar7 + lVar21 * 8);
                uVar13 = uVar16 + 2;
              }
            }
          }
        }
      }
      uVar16 = uVar13;
      uVar13 = *(uint *)(lVar6 + 0x18);
      lVar21 = lVar21 + 1;
    } while ((int)lVar21 < (int)uVar13);
  }
  if (lVar19 != 0) {
    uVar13 = *(uint *)(lVar19 + 0x18);
    if (0 < (int)uVar13) {
      uVar16 = 0;
      do {
        if (uVar13 <= uVar16) {
LAB_00c1bfe0:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        iVar4 = 0;
        while( true ) {
          plVar18 = (long *)(lVar19 + (long)(int)uVar16 * 8 + 0x20);
          if ((*plVar18 == 0) ||
             (lVar6 = UnityEngine_MeshFilter__get_sharedMesh(*plVar18,0), lVar6 == 0))
          goto LAB_00c1b6c8;
          iVar3 = UnityEngine_Mesh__get_subMeshCount(lVar6,0);
          if (iVar3 <= iVar4) break;
          if (lVar8 == 0) goto LAB_00c1b6c8;
          if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_00c1bfe0;
          lVar6 = lVar8 + (long)(int)uVar16 * 0x68 + 0x20;
          UnityEngine_CombineInstance__set_subMeshIndex(lVar6,iVar4,0);
          if (*(uint *)(lVar19 + 0x18) <= uVar16) goto LAB_00c1bfe0;
          if (*plVar18 == 0) goto LAB_00c1b6c8;
          uVar17 = UnityEngine_MeshFilter__get_sharedMesh(*plVar18,0);
          if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_00c1bfe0;
          UnityEngine_CombineInstance__set_mesh(lVar6,uVar17,0);
          uStack_b8 = uStack_78;
          uStack_c0 = uStack_80;
          uStack_a8 = uStack_68;
          uStack_b0 = uStack_70;
          uStack_d8 = uStack_98;
          lStack_e0 = lStack_a0;
          uStack_c8 = uStack_88;
          uStack_d0 = uStack_90;
          if (*(uint *)(lVar19 + 0x18) <= uVar16) goto LAB_00c1bfe0;
          if ((*plVar18 == 0) ||
             (lVar7 = UnityEngine_Component__get_transform(*plVar18,0), lVar7 == 0))
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
          if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_00c1bfe0;
          uStack_218 = uStack_158;
          uStack_220 = uStack_160;
          uStack_208 = uStack_148;
          uStack_210 = uStack_150;
          uStack_1f8 = uStack_138;
          uStack_200 = uStack_140;
          uStack_1e8 = uStack_128;
          uStack_1f0 = uStack_130;
          UnityEngine_CombineInstance__set_transform(lVar6,&uStack_220,0);
          if (iVar4 == 0) {
            if (*(uint *)(lVar19 + 0x18) <= uVar16) goto LAB_00c1bfe0;
            if ((*plVar18 == 0) ||
               (lVar6 = UnityEngine_MeshFilter__get_sharedMesh(*plVar18,0), lVar6 == 0))
            goto LAB_00c1b6c8;
            iVar3 = UnityEngine_Mesh__get_subMeshCount(lVar6,0);
            if (iVar3 == 2) {
              uVar16 = uVar16 + 1;
            }
          }
          iVar4 = iVar4 + 1;
          if (*(uint *)(lVar19 + 0x18) <= uVar16) goto LAB_00c1bfe0;
        }
        uVar13 = *(uint *)(lVar19 + 0x18);
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < (int)uVar13);
    }
    lVar6 = UnityEngine_Component__get_gameObject(__this,0);
    if (lVar6 != 0) {
      lVar6 = UnityEngine_GameObject__AddComponent_object_
                        (lVar6,_Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
      uVar17 = func_0x00a67b44(_UnityEngine_Mesh_TypeInfo);
      UnityEngine_Mesh___ctor(uVar17,0);
      if (lVar6 != 0) {
        UnityEngine_MeshFilter__set_mesh(lVar6,uVar17,0);
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
            uVar5 = UnityEngine_Object__op_Inequality(lVar6,0,0);
            if ((uVar5 & 1) != 0) {
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
                plVar18 = (long *)UnityEngine_Transform__GetEnumerator(lVar6,0);
                if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b50();
                }
                do {
                  lVar6 = *plVar18;
                  uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar5 != 0) {
                    piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                        puVar11 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
                        goto LAB_00c1bdd0;
                      }
                      uVar5 = uVar5 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar5 != 0);
                  }
                  puVar11 = (undefined8 *)
                            func_0x00a9e6c4(plVar18,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00c1bdd0:
                  uVar5 = (*(code *)*puVar11)(plVar18,puVar11[1]);
                  if ((uVar5 & 1) == 0) {
                    plVar18 = (long *)func_0x00a67a34(plVar18,_System_IDisposable_TypeInfo);
                    if (plVar18 == (long *)0x0) {
                      return;
                    }
                    lVar14 = *plVar18;
                    uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
                    if (uVar5 == 0) goto LAB_00c1bf94;
                    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    goto LAB_00c1bf7c;
                  }
                  lVar6 = *plVar18;
                  uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar5 != 0) {
                    piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                        puVar11 = (undefined8 *)(lVar6 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                        goto LAB_00c1be30;
                      }
                      uVar5 = uVar5 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar5 != 0);
                  }
                  puVar11 = (undefined8 *)
                            func_0x00a9e6c4(plVar18,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00c1be30:
                  plVar12 = (long *)(*(code *)*puVar11)(plVar18,puVar11[1]);
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
                  iVar4 = UnityEngine_GameObject__get_layer(lVar6,0);
                  if (iVar4 == iVar2) {
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
                    uVar5 = UnityEngine_Object__op_Inequality(lVar14,0,0);
                    if ((uVar5 & 1) != 0) {
                      if (*(long *)(lVar14 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_throw_967b50();
                      }
                      func_0x00b7fe44(*(long *)(lVar14 + 0x70),plVar12,
                                      _Method_System_Collections_Generic_List_Transform__Add__);
                    }
                  }
                  else {
                    uVar17 = UnityEngine_Component__get_gameObject(plVar12,0);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    UnityEngine_Object__Destroy(uVar17,0);
                  }
                } while( true );
              }
            }
          }
        }
      }
    }
  }
LAB_00c1b6c8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void OFLMLGPBOBL() { }   @0xb1d2cc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__OFLMLGPBOBL(void *__this)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if (*(long *)((long)__this + 0x30) != 0) {
    uStack_40 = *(undefined4 *)((long)__this + 0x19c);
    uStack_48 = *(undefined8 *)((long)__this + 0x194);
    uStack_50 = *(undefined8 *)((long)__this + 0x18c);
    lVar5 = *(long *)(*(long *)((long)__this + 0x30) + 0x118);
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_50,0);
    uStack_68 = *(undefined8 *)((long)__this + 0x1a8);
    uStack_70 = *(undefined8 *)((long)__this + 0x1a0);
    uStack_60 = *(undefined4 *)((long)__this + 0x1b0);
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_70,0);
    if (lVar5 != 0) {
      UnityEngine_UI_Image__set_fillAmount((float)iVar1 / (float)iVar2,lVar5,0);
      if ((*(long *)((long)__this + 0x30) != 0) &&
         (lVar5 = *(long *)(*(long *)((long)__this + 0x30) + 0x148), lVar5 != 0)) {
        plVar4 = *(long **)(lVar5 + 0x28);
        uVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString
                          ((undefined8 *)((long)__this + 0x18c),0);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x5a8))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x5b0));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private IEnumerator JMCGEKEOJHD(bool BKMLEMNMGPJ) { }   @0xb1e904

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * CarController__JMCGEKEOJHD(void *__this,bool BKMLEMNMGPJ)

{
  void *pvVar1;
  
  if ((bRam000000000191701a & 1) == 0) {
    func_0x00a67900(&CarController_PDLEABDDJAE_TypeInfo);
    bRam000000000191701a = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_CarController_PDLEABDDJAE_TypeInfo);
  CarController_PDLEABDDJAE___ctor(pvVar1,0,0);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)pvVar1 + 0x20) = __this;
    *(bool *)((long)pvVar1 + 0x28) = BKMLEMNMGPJ;
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ENFNKCGHPPG() { }   @0xb1ee4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__ENFNKCGHPPG(void *__this)

{
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if ((bRam000000000191701e & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_OUT_OF_AMMO);
    bRam000000000191701e = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((((*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x34) != '\0') &&
       (*(char *)((long)__this + 0x314) != '\0')) && (*(char *)((long)__this + 0x315) == '\0')) &&
     ((fVar6 = (float)UnityEngine_Time__get_timeScale(0), fVar6 == 1.0 ||
      ((fVar6 = (float)UnityEngine_Time__get_timeScale(0), fVar6 == 0.0 &&
       (*(char *)((long)__this + 0x316) != '\0')))))) {
    uStack_30 = *(undefined4 *)((long)__this + 0x300);
    uStack_38 = *(undefined8 *)((long)__this + 0x2f8);
    uStack_40 = *(undefined8 *)((long)__this + 0x2f0);
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_40,0);
    if (0 < iVar1) {
      pvVar2 = CarController__ENFNKCGHPPG(__this,3);
      UnityEngine_MonoBehaviour__StartCoroutine(__this,pvVar2,0);
    }
    uStack_30 = *(undefined4 *)((long)__this + 0x300);
    uStack_38 = *(undefined8 *)((long)__this + 0x2f8);
    uStack_40 = *(undefined8 *)((long)__this + 0x2f0);
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_40,0);
    if (iVar1 < 1) {
      uVar4 = *(undefined8 *)((long)__this + 0x30);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      if ((uVar3 & 1) != 0) {
        lVar5 = *(long *)((long)__this + 0x30);
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) == (void *)0x0) ||
           (pvVar2 = Translate__JJJNIPAKLJF
                               ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8),
                                _Str_OUT_OF_AMMO), lVar5 == 0)) goto LAB_00c1f03c;
        GUIGameplay__HNKHJLDJMHB(lVar5,pvVar2,5,1,0,0);
      }
    }
  }
  fVar6 = (float)UnityEngine_Time__get_timeScale(0);
  if ((fVar6 == 0.0) && (*(char *)((long)__this + 0x316) != '\0')) {
    if (*(void **)((long)__this + 0x30) == (void *)0x0) {
LAB_00c1f03c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    GUIGameplay__OKIGBJNMOOP(*(void **)((long)__this + 0x30));
    *(undefined1 *)((long)__this + 0x316) = 0;
  }
  return;
}


// ==== private void NCBPCHPNCII() { }   @0xb1f790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__NCBPCHPNCII(void *__this)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  
  if ((bRam0000000001917023 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Debug_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_AutoDestructShuriken___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_objDestructorTrail___);
    func_0x00a67900(&UnityEngine_GameObject_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Not_found_gun_effect_trans___);
    func_0x00a67900(&Str_FX_bullet_impact_wood);
    func_0x00a67900(&Str_FX_bullet_impact_metal);
    func_0x00a67900(&Str_FX_gun_muzzleflare);
    func_0x00a67900(&Str_FX_bullet_impact_ground);
    func_0x00a67900(&Str_FX_bullet_trail);
    bRam0000000001917023 = 1;
  }
  uVar1 = UnityEngine_Resources__Load(_Str_FX_bullet_trail,0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  plVar2 = (long *)UnityEngine_Object__Instantiate(uVar1,0);
  if (plVar2 == (long *)0x0) goto LAB_00c1fb80;
  if (*plVar2 != _UnityEngine_GameObject_TypeInfo) goto LAB_00c1fb78;
  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
            (plVar2,&uStack_38,_Method_UnityEngine_GameObject_GetComponent_objDestructorTrail___);
  *(undefined8 *)((long)__this + 0x298) = uStack_38;
  lVar3 = UnityEngine_Object__Instantiate_object_
                    (plVar2,_Method_UnityEngine_Object_Instantiate_GameObject___);
  if (lVar3 == 0) goto LAB_00c1fb80;
  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
            (lVar3,&uStack_38,_Method_UnityEngine_GameObject_GetComponent_objDestructorTrail___);
  *(undefined8 *)((long)__this + 0x2a0) = uStack_38;
  uVar1 = UnityEngine_Resources__Load(_Str_FX_bullet_impact_ground,0);
  plVar2 = (long *)UnityEngine_Object__Instantiate(uVar1,0);
  if (plVar2 == (long *)0x0) goto LAB_00c1fb80;
  if (*plVar2 == _UnityEngine_GameObject_TypeInfo) {
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (plVar2,&uStack_38,_Method_UnityEngine_GameObject_GetComponent_AutoDestructShuriken___
              );
    *(undefined8 *)((long)__this + 0x2a8) = uStack_38;
    uVar1 = UnityEngine_Resources__Load(_Str_FX_bullet_impact_metal,0);
    plVar2 = (long *)UnityEngine_Object__Instantiate(uVar1,0);
    if (plVar2 == (long *)0x0) goto LAB_00c1fb80;
    if (*plVar2 != _UnityEngine_GameObject_TypeInfo) goto LAB_00c1fb78;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (plVar2,&uStack_38,_Method_UnityEngine_GameObject_GetComponent_AutoDestructShuriken___
              );
    *(undefined8 *)((long)__this + 0x2b0) = uStack_38;
    uVar1 = UnityEngine_Resources__Load(_Str_FX_bullet_impact_wood,0);
    plVar2 = (long *)UnityEngine_Object__Instantiate(uVar1,0);
    if (plVar2 == (long *)0x0) goto LAB_00c1fb80;
    if (*plVar2 != _UnityEngine_GameObject_TypeInfo) goto LAB_00c1fb78;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (plVar2,&uStack_38,_Method_UnityEngine_GameObject_GetComponent_AutoDestructShuriken___
              );
    *(undefined8 *)((long)__this + 0x2b8) = uStack_38;
    uVar4 = UnityEngine_Object__op_Inequality(*(undefined8 *)((long)__this + 0x2c0),0,0);
    if ((uVar4 & 1) != 0) {
      uVar1 = UnityEngine_Resources__Load(_Str_FX_gun_muzzleflare,0);
      uVar5 = *(undefined8 *)((long)__this + 0x38);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      plVar2 = (long *)UnityEngine_Object__Instantiate(uVar1,uVar5,0);
      lVar3 = _UnityEngine_GameObject_TypeInfo;
      uVar1 = 0;
      if (plVar2 == (long *)0x0) goto LAB_00c1fb7c;
      if ((*plVar2 != _UnityEngine_GameObject_TypeInfo) ||
         (*(long **)((long)__this + 0x2d0) = plVar2, *plVar2 != lVar3)) goto LAB_00c1fb78;
      lVar3 = UnityEngine_GameObject__get_transform(plVar2,0);
      if ((*(long *)((long)__this + 0x2c0) == 0) ||
         (UnityEngine_Transform__get_position(*(long *)((long)__this + 0x2c0),0), lVar3 == 0))
      goto LAB_00c1fb80;
      UnityEngine_Transform__set_position(lVar3,0);
    }
    uVar1 = *(undefined8 *)((long)__this + 0x2c8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
    if ((uVar4 & 1) == 0) {
LAB_00c1fb0c:
      uVar1 = *(undefined8 *)((long)__this + 0x2c0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        UnityEngine_Debug__LogError(_Str_Not_found_gun_effect_trans___,0);
      }
      return;
    }
    uVar1 = *(undefined8 *)((long)__this + 0x2d0);
    uVar5 = *(undefined8 *)((long)__this + 0x38);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = UnityEngine_Object__Instantiate_object_
                      (uVar1,uVar5,_Method_UnityEngine_Object_Instantiate_GameObject___);
    *(long *)((long)__this + 0x2d8) = lVar3;
    if (lVar3 != 0) {
      lVar3 = UnityEngine_GameObject__get_transform(lVar3,0);
      if ((*(long *)((long)__this + 0x2c8) != 0) &&
         (UnityEngine_Transform__get_position(*(long *)((long)__this + 0x2c8),0), lVar3 != 0)) {
        UnityEngine_Transform__set_position(lVar3,0);
        goto LAB_00c1fb0c;
      }
    }
  }
  else {
LAB_00c1fb78:
    uVar1 = func_0x00a67eec(plVar2);
LAB_00c1fb7c:
    *(undefined8 *)((long)__this + 0x2d0) = uVar1;
  }
LAB_00c1fb80:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void CEKLNGNBGLP() { }   @0xb1e3f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__CEKLNGNBGLP(void *__this)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  ulong in_d1;
  undefined8 in_d2;
  undefined8 uVar10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  
  if ((bRam0000000001917027 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Physics_TypeInfo);
    bRam0000000001917027 = 1;
  }
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  lVar4 = *(long *)((long)__this + 0x520);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar6 = *(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x28) == 0)) goto LAB_00c1e5c0;
        lVar3 = *(long *)(lVar6 + 0x20);
        uVar9 = UnityEngine_Transform__get_position(*(long *)(lVar6 + 0x28),0);
        if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c1e5c0;
        uVar2 = in_d1;
        uVar10 = in_d2;
        fVar7 = (float)UnityEngine_Transform__get_up(*(long *)((long)__this + 0x38),0);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = *(uint *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x14);
        if (*(int *)(_UnityEngine_Physics_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Physics_TypeInfo);
        }
        uVar2 = UnityEngine_Physics__Raycast
                          (uVar9,in_d1,in_d2,-fVar7,-(float)uVar2,-(float)uVar10,0x40000000,
                           &uStack_b0,1 << (ulong)(uVar1 & 0x1f),0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(lVar6 + 0x10) == 0) goto LAB_00c1e5c0;
          uVar9 = UnityEngine_Transform__get_position(*(long *)(lVar6 + 0x10),0);
          fVar7 = (float)in_d1;
          UnityEngine_RaycastHit__get_point(&uStack_b0,0);
          if (lVar3 == 0) goto LAB_00c1e5c0;
          fVar8 = (float)UnityEngine_WheelCollider__get_radius(lVar3,0);
          if (*(long *)(lVar6 + 0x10) == 0) goto LAB_00c1e5c0;
          in_d1 = (ulong)(uint)(fVar7 + fVar8);
          UnityEngine_Transform__set_position(uVar9,*(long *)(lVar6 + 0x10),0);
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
    return;
  }
LAB_00c1e5c0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void KDHHDKMBELG(GameObject DEPIBMKFMDA, bool CCMGNIDEBKP) { }   @0xb1c330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__KDHHDKMBELG(void *__this,void *DEPIBMKFMDA,bool CCMGNIDEBKP)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  void *pvStack_240;
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
  
  if ((bRam000000000191702c & 1) == 0) {
    func_0x00a67900(&CarReplay_TypeInfo);
    func_0x00a67900(&UnityEngine_CombineInstance___TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter___);
    func_0x00a67900(&Method_System_Collections_Generic_List_GameObject__Add__);
    func_0x00a67900(&UnityEngine_Mesh_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_wheel);
    bRam000000000191702c = 1;
  }
  if (DEPIBMKFMDA != (void *)0x0) {
    lVar4 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                      (DEPIBMKFMDA,
                       _Method_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter___);
    if (CCMGNIDEBKP) {
      if (lVar4 == 0) goto LAB_00c1c8d4;
      if (*(int *)(lVar4 + 0x18) + -1 < 2) {
        return;
      }
    }
    else if (lVar4 == 0) goto LAB_00c1c8d4;
    lVar5 = func_0x00a679a0(_UnityEngine_CombineInstance___TypeInfo,*(undefined4 *)(lVar4 + 0x18));
    lVar6 = UnityEngine_GameObject__get_transform(DEPIBMKFMDA,0);
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
      if (0 < *(int *)(lVar4 + 0x18)) {
        uVar13 = 0;
        pvStack_240 = DEPIBMKFMDA;
        do {
          if (uVar13 != 0 && CCMGNIDEBKP) {
            lVar6 = *(long *)((long)__this + 0x478);
            if (lVar6 == 0) goto LAB_00c1c8d4;
            uVar1 = *(uint *)(lVar6 + 0x18);
            if ((int)uVar1 < 2) {
              bVar2 = false;
            }
            else {
              lVar12 = 0;
              bVar2 = false;
              do {
                if (uVar1 <= (uint)lVar12) goto LAB_00c1c8d0;
                lVar8 = *(long *)(lVar6 + 0x20 + lVar12 * 8);
                if (lVar8 == 0) goto LAB_00c1c8d4;
                uVar7 = UnityEngine_Component__get_gameObject(lVar8,0);
                if (*(uint *)(lVar4 + 0x18) <= uVar13) goto LAB_00c1c8d0;
                lVar8 = *(long *)(lVar4 + uVar13 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_00c1c8d4;
                uVar9 = UnityEngine_Component__get_gameObject(lVar8,0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                }
                uVar10 = UnityEngine_Object__op_Equality(uVar7,uVar9,0);
                uVar1 = *(uint *)(lVar6 + 0x18);
                lVar12 = lVar12 + 1;
                if ((uVar10 & 1) != 0) {
                  bVar2 = true;
                }
              } while ((int)lVar12 < (int)uVar1);
            }
            uVar7 = *(undefined8 *)((long)__this + 0x360);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar10 = UnityEngine_Object__op_Inequality(uVar7,0,0);
            if ((uVar10 & 1) == 0) {
              if (!bVar2) goto LAB_00c1c48c;
            }
            else {
              if (*(uint *)(lVar4 + 0x18) <= uVar13) goto LAB_00c1c8d0;
              lVar6 = *(long *)(lVar4 + uVar13 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_00c1c8d4;
              uVar7 = *(undefined8 *)((long)__this + 0x360);
              lVar6 = UnityEngine_Component__get_gameObject(lVar6,0);
              if (lVar6 == 0) goto LAB_00c1c8d4;
              uVar9 = UnityEngine_GameObject__get_transform(lVar6,0);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_UnityEngine_Object_TypeInfo);
              }
              uVar10 = UnityEngine_Object__op_Equality(uVar7,uVar9,0);
              if ((!bVar2) && ((uVar10 & 1) == 0)) goto LAB_00c1c48c;
            }
          }
          else {
LAB_00c1c48c:
            if (CCMGNIDEBKP) {
              if (uVar13 == 0) {
                uVar7 = *(undefined8 *)((long)__this + 0x490);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar10 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                if ((uVar10 & 1) != 0) {
                  if (*(long *)((long)__this + 0x490) == 0) goto LAB_00c1c8d4;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (*(long *)((long)__this + 0x490),&lStack_e0,
                             _Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
                  lVar6 = lStack_e0;
                  if (*(int *)(lVar4 + 0x18) == 0) goto LAB_00c1c8d0;
                  *(long *)(lVar4 + 0x20) = lStack_e0;
                  uVar7 = func_0x00a67b44(_UnityEngine_Mesh_TypeInfo);
                  UnityEngine_Mesh___ctor(uVar7,0);
                  if (lVar6 == 0) goto LAB_00c1c8d4;
                  UnityEngine_MeshFilter__set_mesh(lVar6,uVar7,0);
                  pvStack_240 = *(void **)((long)__this + 0x490);
                }
              }
              else {
                if (*(uint *)(lVar4 + 0x18) <= uVar13) goto LAB_00c1c8d0;
                lVar6 = *(long *)(lVar4 + uVar13 * 8 + 0x20);
                if (lVar6 == 0) goto LAB_00c1c8d4;
                lVar12 = *(long *)((long)__this + 0x110);
                uVar7 = UnityEngine_Component__get_gameObject(lVar6,0);
                if (lVar12 == 0) goto LAB_00c1c8d4;
                func_0x00b7fe44(lVar12,uVar7,
                                _Method_System_Collections_Generic_List_GameObject__Add__);
              }
            }
            if (lVar5 == 0) goto LAB_00c1c8d4;
            if (*(uint *)(lVar4 + 0x18) <= uVar13) {
LAB_00c1c8d0:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            plVar11 = (long *)(lVar4 + uVar13 * 8 + 0x20);
            if (*plVar11 == 0) goto LAB_00c1c8d4;
            uVar7 = UnityEngine_MeshFilter__get_sharedMesh(*plVar11,0);
            if (*(uint *)(lVar5 + 0x18) <= uVar13) goto LAB_00c1c8d0;
            lVar6 = lVar5 + uVar13 * 0x68 + 0x20;
            UnityEngine_CombineInstance__set_mesh(lVar6,uVar7,0);
            uStack_b8 = uStack_78;
            uStack_c0 = uStack_80;
            uStack_a8 = uStack_68;
            uStack_b0 = uStack_70;
            uStack_d8 = uStack_98;
            lStack_e0 = lStack_a0;
            uStack_c8 = uStack_88;
            uStack_d0 = uStack_90;
            if (*(uint *)(lVar4 + 0x18) <= uVar13) goto LAB_00c1c8d0;
            if ((*plVar11 == 0) ||
               (lVar12 = UnityEngine_Component__get_transform(*plVar11,0), lVar12 == 0))
            goto LAB_00c1c8d4;
            UnityEngine_Transform__get_localToWorldMatrix(&uStack_120,lVar12,0);
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
            if (*(uint *)(lVar5 + 0x18) <= uVar13) goto LAB_00c1c8d0;
            uStack_218 = uStack_158;
            uStack_220 = uStack_160;
            uStack_208 = uStack_148;
            uStack_210 = uStack_150;
            uStack_1f8 = uStack_138;
            uStack_200 = uStack_140;
            uStack_1e8 = uStack_128;
            uStack_1f0 = uStack_130;
            UnityEngine_CombineInstance__set_transform(lVar6,&uStack_220,0);
            if (*(uint *)(lVar4 + 0x18) <= uVar13) goto LAB_00c1c8d0;
            if ((*plVar11 == 0) ||
               (lVar6 = UnityEngine_Component__get_gameObject(*plVar11,0), lVar6 == 0))
            goto LAB_00c1c8d4;
            UnityEngine_GameObject__SetActive(lVar6,0,0);
          }
          uVar13 = uVar13 + 1;
        } while ((long)uVar13 < (long)*(int *)(lVar4 + 0x18));
        DEPIBMKFMDA = pvStack_240;
        if (pvStack_240 == (void *)0x0) goto LAB_00c1c8d4;
      }
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                (DEPIBMKFMDA,&lStack_e0,_Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
      lVar4 = lStack_e0;
      uVar7 = func_0x00a67b44(_UnityEngine_Mesh_TypeInfo);
      UnityEngine_Mesh___ctor(uVar7,0);
      if (lVar4 != 0) {
        UnityEngine_MeshFilter__set_mesh(lVar4,uVar7,0);
        lVar4 = UnityEngine_MeshFilter__get_mesh(lVar4,0);
        if (lVar4 != 0) {
          UnityEngine_Mesh__CombineMeshes(lVar4,lVar5,0);
          UnityEngine_GameObject__SetActive(DEPIBMKFMDA,1,0);
          if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          bVar2 = CarReplay__DJKMCIEIAMH();
          if (bVar2) {
            uVar3 = UnityEngine_LayerMask__NameToLayer(_Str_wheel,0);
            UnityEngine_GameObject__set_layer(DEPIBMKFMDA,uVar3,0);
          }
          return;
        }
      }
    }
  }
LAB_00c1c8d4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private IEnumerator ENFNKCGHPPG(int LKEBAMJFFKH) { }   @0xb1f070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * CarController__ENFNKCGHPPG(void *__this,int LKEBAMJFFKH)

{
  void *pvVar1;
  
  if ((bRam0000000001917030 & 1) == 0) {
    func_0x00a67900(&CarController_MMNGFIDILCC_TypeInfo);
    bRam0000000001917030 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_CarController_MMNGFIDILCC_TypeInfo);
  CarController_MMNGFIDILCC___ctor(pvVar1,0,0);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)pvVar1 + 0x20) = __this;
    *(int *)((long)pvVar1 + 0x28) = LKEBAMJFFKH;
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void PCDOLLHPMJE() { }   @0xb227d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__PCDOLLHPMJE(void *__this)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  void *__this_00;
  undefined8 uVar6;
  long *plVar7;
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
  int iStack_24;
  
  if ((bRam0000000001917035 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__);
    bRam0000000001917035 = 1;
  }
  iStack_24 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
        uVar6 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        uStack_60 = *(undefined4 *)((long)__this + 0x19c);
        uStack_68 = *(undefined8 *)((long)__this + 0x194);
        uStack_70 = *(undefined8 *)((long)__this + 0x18c);
        iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_70,0);
        uStack_88 = *(undefined8 *)((long)__this + 0x1bc);
        uStack_90 = *(undefined8 *)((long)__this + 0x1b4);
        uStack_80 = *(undefined4 *)((long)__this + 0x1c4);
        iStack_24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_90,0);
        iStack_24 = iStack_24 + iVar1;
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Menu_TypeInfo);
        }
        if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
            (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 != 0)) &&
           (lVar5 = *(long *)(lVar5 + 0x3f0), lVar5 != 0)) {
          plVar7 = *(long **)(lVar5 + 0x28);
          uVar6 = System_Int32__ToString(&iStack_24,0);
          uStack_48 = *(undefined8 *)((long)__this + 0x1a8);
          uStack_50 = *(undefined8 *)((long)__this + 0x1a0);
          uStack_40 = *(undefined4 *)((long)__this + 0x1b0);
          uVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(&uStack_50,0);
          uVar6 = System_String__Concat(uVar6,_Str__,uVar4,0);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x5b0));
            iVar1 = iStack_24;
            if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
               (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 != 0)) {
              lVar5 = *(long *)(lVar5 + 0x3f8);
              uStack_a8 = *(undefined8 *)((long)__this + 0x1a8);
              uStack_b0 = *(undefined8 *)((long)__this + 0x1a0);
              uStack_a0 = *(undefined4 *)((long)__this + 0x1b0);
              iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_b0,0);
              if (lVar5 != 0) {
                UnityEngine_UI_Image__set_fillAmount((float)iVar1 / (float)iVar2,lVar5,0);
                iVar1 = iStack_24;
                if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
                  __this_00 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
                  uStack_c8 = *(undefined8 *)((long)__this + 0x1a8);
                  uStack_d0 = *(undefined8 *)((long)__this + 0x1a0);
                  uStack_c0 = *(undefined4 *)((long)__this + 0x1b0);
                  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_d0,0);
                  if (__this_00 != (void *)0x0) {
                    GUIGarage__DOODAKOKCBN(__this_00,iVar1,iVar2);
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
  }
  return;
}


// ==== public void DPKGKJMAPLO() { }   @0xb271d8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__DPKGKJMAPLO(void *__this)

{
  undefined4 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (*(int *)((long)__this + 0x1c8) == 0) {
    uStack_20 = *(undefined4 *)((long)__this + 0x19c);
    uStack_28 = *(undefined8 *)((long)__this + 0x194);
    uStack_30 = *(undefined8 *)((long)__this + 0x18c);
    uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_30,0);
    *(undefined4 *)((long)__this + 0x1c8) = uVar1;
  }
  return;
}


// ==== public IEnumerator FIOKLNLIDNH(bool CDJLOBFNINN) { }   @0xb24518

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * CarController__FIOKLNLIDNH(void *__this,bool CDJLOBFNINN)

{
  void *pvVar1;
  
  if ((bRam000000000191703c & 1) == 0) {
    func_0x00a67900(&CarController_HAGOCAHBNPJ_TypeInfo);
    bRam000000000191703c = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_CarController_HAGOCAHBNPJ_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x20) = __this;
  *(bool *)((long)pvVar1 + 0x28) = CDJLOBFNINN;
  return pvVar1;
}


// ==== public void GFAPIMNKMLG(int LIJPNHADLDP) { }   @0xb22af4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__GFAPIMNKMLG(void *__this,int LIJPNHADLDP)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  
  if ((bRam000000000191703f & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str__Brightest);
    func_0x00a67900(&Str__HUE);
    func_0x00a67900(&Str__Saturation);
    bRam000000000191703f = 1;
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
  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar4 != 0) {
    lVar4 = DAFNMLEKHAD__DKJLCJPBPPN(lVar4,0xffffffff,1,0);
    if (lVar4 == 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Main_TypeInfo + 0xb8) != 0) {
        lVar4 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x78);
        if ((bRam0000000001917040 & 1) == 0) {
          func_0x00a67900(&
                          Method_System_Collections_Generic_Dictionary_MeshRenderer__Material____Add__
                         );
          func_0x00a67900(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
          func_0x00a67900(&Str_wheels);
          bRam0000000001917040 = 1;
        }
        lVar13 = UnityEngine_Component__get_gameObject(__this,0);
        if ((lVar13 != 0) &&
           (lVar13 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                               (lVar13,
                                _Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___
                               ), lVar13 != 0)) {
          uVar1 = *(uint *)(lVar13 + 0x18);
          if (0 < (int)uVar1) {
            uVar12 = 0;
            do {
              if (uVar1 <= uVar12) {
LAB_00c240b8:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              lVar10 = *(long *)(lVar13 + (long)(int)uVar12 * 8 + 0x20);
              if ((lVar10 == 0) ||
                 (lVar8 = UnityEngine_Component__get_gameObject(lVar10,0), lVar8 == 0))
              goto LAB_00c240c8;
              iVar2 = UnityEngine_GameObject__get_layer(lVar8,0);
              iVar3 = UnityEngine_LayerMask__NameToLayer(_Str_wheels,0);
              if (iVar2 != iVar3) {
                plVar5 = (long *)UnityEngine_Renderer__get_materials(lVar10,0);
                if (*(char *)((long)__this + 0x4f4) != '\0') {
                  lVar8 = *(long *)((long)__this + 0x510);
                  uVar6 = UnityEngine_Renderer__get_sharedMaterials(lVar10,0);
                  if (lVar8 == 0) goto LAB_00c240c8;
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                            (lVar8,lVar10,uVar6,
                             _Method_System_Collections_Generic_Dictionary_MeshRenderer__Material____Add__
                            );
                }
                if (plVar5 == (long *)0x0) goto LAB_00c240c8;
                if (0 < (int)plVar5[3]) {
                  uVar11 = 0;
                  uVar7 = plVar5[3] & 0xffffffff;
                  do {
                    if (lVar4 != 0) {
                      lVar8 = func_0x00a67a34(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                      if (lVar8 == 0) {
                        uVar6 = func_0x00a67b74();
                        func_0x00a67a20(uVar6,0);
                        goto LAB_00c240c8;
                      }
                      uVar7 = (ulong)*(uint *)(plVar5 + 3);
                    }
                    if (uVar7 <= uVar11) goto LAB_00c240b8;
                    plVar5[uVar11 + 4] = lVar4;
                    uVar11 = uVar11 + 1;
                  } while ((long)uVar11 < (long)(int)uVar7);
                }
                UnityEngine_Renderer__set_materials(lVar10,plVar5,0);
              }
              uVar1 = *(uint *)(lVar13 + 0x18);
              uVar12 = uVar12 + 1;
            } while ((int)uVar12 < (int)uVar1);
          }
          return;
        }
LAB_00c240c8:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
    else {
      lVar4 = *(long *)((long)__this + 0x478);
      if (lVar4 != 0) {
        if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
          uVar11 = 0;
          lVar13 = (long)LIJPNHADLDP;
          uVar7 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
          do {
            if (uVar7 <= uVar11) goto LAB_00c22dd0;
            lVar10 = *(long *)(lVar4 + 0x20 + uVar11 * 8);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar8 = **(long **)(_Main_TypeInfo + 0xb8);
            if (lVar8 == 0) goto LAB_00c22dcc;
            if (LIJPNHADLDP == 0) {
              if (lVar10 == 0) goto LAB_00c22dcc;
              UnityEngine_Renderer__set_material(lVar10,*(undefined8 *)(lVar8 + 0x68),0);
            }
            else {
              if (lVar10 == 0) goto LAB_00c22dcc;
              UnityEngine_Renderer__set_material(lVar10,*(undefined8 *)(lVar8 + 0x70),0);
              lVar8 = UnityEngine_Renderer__get_material(lVar10,0);
              lVar9 = *(long *)((long)__this + 0x470);
              if (lVar9 == 0) goto LAB_00c22dcc;
              if (*(uint *)(lVar9 + 0x18) <= (uint)LIJPNHADLDP) {
LAB_00c22dd0:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              lVar9 = *(long *)(lVar9 + lVar13 * 8 + 0x20);
              if ((lVar9 == 0) || (lVar8 == 0)) goto LAB_00c22dcc;
              UnityEngine_Material__set_color
                        (*(undefined4 *)(lVar9 + 0x20),*(undefined4 *)(lVar9 + 0x24),
                         *(undefined4 *)(lVar9 + 0x28),*(undefined4 *)(lVar9 + 0x2c),lVar8,0);
              lVar8 = UnityEngine_Renderer__get_material(lVar10,0);
              lVar9 = *(long *)((long)__this + 0x470);
              if (lVar9 == 0) goto LAB_00c22dcc;
              if (*(uint *)(lVar9 + 0x18) <= (uint)LIJPNHADLDP) goto LAB_00c22dd0;
              lVar9 = *(long *)(lVar9 + lVar13 * 8 + 0x20);
              if ((lVar9 == 0) || (lVar8 == 0)) goto LAB_00c22dcc;
              UnityEngine_Material__SetInt(lVar8,_Str__HUE,*(undefined4 *)(lVar9 + 0x30),0);
              lVar8 = UnityEngine_Renderer__get_material(lVar10,0);
              lVar9 = *(long *)((long)__this + 0x470);
              if (lVar9 == 0) goto LAB_00c22dcc;
              if (*(uint *)(lVar9 + 0x18) <= (uint)LIJPNHADLDP) goto LAB_00c22dd0;
              lVar9 = *(long *)(lVar9 + lVar13 * 8 + 0x20);
              if ((lVar9 == 0) || (lVar8 == 0)) goto LAB_00c22dcc;
              UnityEngine_Material__SetFloat(*(undefined4 *)(lVar9 + 0x34),lVar8,_Str__Saturation,0)
              ;
              lVar10 = UnityEngine_Renderer__get_material(lVar10,0);
              lVar8 = *(long *)((long)__this + 0x470);
              if (lVar8 == 0) goto LAB_00c22dcc;
              if (*(uint *)(lVar8 + 0x18) <= (uint)LIJPNHADLDP) goto LAB_00c22dd0;
              lVar8 = *(long *)(lVar8 + lVar13 * 8 + 0x20);
              if ((lVar8 == 0) || (lVar10 == 0)) goto LAB_00c22dcc;
              UnityEngine_Material__SetFloat(*(undefined4 *)(lVar8 + 0x38),lVar10,_Str__Brightest,0)
              ;
            }
            uVar7 = (ulong)*(uint *)(lVar4 + 0x18);
            uVar11 = uVar11 + 1;
          } while ((long)uVar11 < (long)(int)*(uint *)(lVar4 + 0x18));
        }
        return;
      }
    }
  }
LAB_00c22dcc:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void EGGPODAIEBC(GameObject MIPKEALMBHI) { }   @0xb1916c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__EGGPODAIEBC(void *__this,void *MIPKEALMBHI)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001917044 & 1) == 0) {
    __this = (void *)func_0x00a67900(&Method_UnityEngine_GameObject_AddComponent_HighlightEffect___)
    ;
    bRam0000000001917044 = 1;
  }
  lVar4 = _Method_UnityEngine_GameObject_AddComponent_HighlightEffect___;
  if (MIPKEALMBHI != (void *)0x0) {
    puVar3 = *(undefined8 **)(_Method_UnityEngine_GameObject_AddComponent_HighlightEffect___ + 0x38)
    ;
    if (puVar3 == (undefined8 *)0x0) {
      func_0x00a67900(&System_Type_TypeInfo);
      puVar3 = *(undefined8 **)(lVar4 + 0x38);
      if (puVar3 == (undefined8 *)0x0) {
        func_0x00a9e42c(lVar4);
        puVar3 = *(undefined8 **)(lVar4 + 0x38);
      }
    }
    uVar5 = *puVar3;
    if (*(int *)(_System_Type_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
    uVar5 = UnityEngine_GameObject__AddComponent(MIPKEALMBHI,uVar5,0);
    lVar2 = *(long *)(*(long *)(lVar4 + 0x38) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = func_0x00a9e3d0(lVar2);
    }
    lVar2 = func_0x00a67a34(uVar5,lVar2);
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = func_0x00a9e3d0(lVar4);
    }
    if ((lVar2 != 0) && (lVar1 = func_0x00a67a34(lVar2,lVar4), lVar1 == 0)) {
      func_0x00a67eec(lVar2,lVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50(__this);
}


// ==== private void AOOHMIALOJP(Transform CIIGBEPKIOD, int HPHMPIOMFAC, int KBBIGFDPBHP, bool HOGDOEAMJFA, bool MNCAFCICFGD) { }   @0xb240cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__AOOHMIALOJP
               (void *__this,void *CIIGBEPKIOD,int HPHMPIOMFAC,int KBBIGFDPBHP,bool HOGDOEAMJFA,
               bool MNCAFCICFGD)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  float in_s1;
  float in_s2;
  long lStack_68;
  
  if ((bRam0000000001917049 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
    func_0x00a67900(&Method_UnityEngine_GameObject_AddComponent_DynamicObstacle___);
    func_0x00a67900(&Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    func_0x00a67900(&Method_System_Collections_Generic_List_GameObject__Add__);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917049 = 1;
  }
  if (*(char *)((long)__this + 0x4f4) != '\0') {
    if (CIIGBEPKIOD == (void *)0x0) goto LAB_00c24428;
    uVar2 = UnityEngine_Component__get_gameObject(CIIGBEPKIOD,0);
    uVar7 = *(undefined8 *)((long)__this + 0x38);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar3 = UnityEngine_Object__Instantiate_object_
                      (uVar2,uVar7,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if ((lVar3 == 0) || (lVar4 = UnityEngine_GameObject__get_transform(lVar3,0), lVar4 == 0))
    goto LAB_00c24428;
    UnityEngine_Transform__set_parent(lVar4,0,0);
    lVar4 = UnityEngine_Component__get_gameObject(CIIGBEPKIOD,0);
    if (lVar4 == 0) goto LAB_00c24428;
    UnityEngine_GameObject__SetActive(lVar4,0,0);
    CIIGBEPKIOD = (void *)UnityEngine_GameObject__get_transform(lVar3,0);
    if (*(long *)((long)__this + 0x518) == 0) goto LAB_00c24428;
    func_0x00b7fe44(*(long *)((long)__this + 0x518),lVar3,
                    _Method_System_Collections_Generic_List_GameObject__Add__);
  }
  if ((CIIGBEPKIOD != (void *)0x0) &&
     (lVar3 = UnityEngine_Component__get_gameObject(CIIGBEPKIOD,0), lVar3 != 0)) {
    lVar3 = UnityEngine_GameObject__AddComponent_object_
                      (lVar3,_Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
    lVar4 = UnityEngine_Component__get_gameObject(CIIGBEPKIOD,0);
    if (lVar4 != 0) {
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                (lVar4,&lStack_68,_Method_UnityEngine_GameObject_GetComponent_Collider___);
      lVar4 = lStack_68;
      lVar5 = UnityEngine_Component__get_gameObject(CIIGBEPKIOD,0);
      if (lVar5 != 0) {
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (lVar5,&lStack_68,_Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
        if ((uVar6 & 1) != 0) {
          if (lStack_68 == 0) goto LAB_00c24428;
          UnityEngine_Renderer__set_shadowCastingMode(lStack_68,1,0);
        }
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(lVar4,0,0);
        if ((uVar6 & 1) == 0) {
          lVar4 = UnityEngine_Component__get_gameObject(CIIGBEPKIOD,0);
          if (lVar4 == 0) goto LAB_00c24428;
          UnityEngine_GameObject__AddComponent_object_
                    (lVar4,_Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
        }
        else {
          if (lVar4 == 0) goto LAB_00c24428;
          UnityEngine_Collider__set_enabled(lVar4,1,0);
        }
        if (HOGDOEAMJFA) {
          lVar4 = UnityEngine_Component__get_gameObject(CIIGBEPKIOD,0);
          if (lVar4 == 0) goto LAB_00c24428;
          UnityEngine_GameObject__AddComponent_object_
                    (lVar4,_Method_UnityEngine_GameObject_AddComponent_DynamicObstacle___);
        }
        iVar1 = UnityEngine_Random__Range(HPHMPIOMFAC,KBBIGFDPBHP,0);
        if (*(long *)((long)__this + 0x38) != 0) {
          fVar8 = (float)UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
          if (cRam0000000001916e68 == '\0') {
            func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
            cRam0000000001916e68 = '\x01';
          }
          if (lVar3 != 0) {
            lVar4 = *(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8);
            UnityEngine_Rigidbody__AddExplosionForce
                      ((float)iVar1,fVar8 - *(float *)(lVar4 + 0x18),
                       in_s1 - *(float *)(lVar4 + 0x1c),in_s2 - *(float *)(lVar4 + 0x20),0x447a0000,
                       lVar3,0);
            UnityEngine_Rigidbody__set_interpolation(lVar3,1,0);
            return;
          }
        }
      }
    }
  }
LAB_00c24428:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



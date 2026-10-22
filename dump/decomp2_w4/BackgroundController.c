// ==== private void PGPEFBNBHHM(GameObject MIPKEALMBHI) { }   @0xb57a04

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BackgroundController__PGPEFBNBHHM(void *__this,void *MIPKEALMBHI)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  void *__this_00;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  undefined8 in_d1;
  undefined8 uVar14;
  ulong in_d2;
  undefined8 in_d3;
  long lStack_28;
  
  if ((bRam00000000019171b9 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_GFXDisabler___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171b9 = 1;
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
  if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8) != 0) {
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(MIPKEALMBHI,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (MIPKEALMBHI == (void *)0x0) {
LAB_00c57b78:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (MIPKEALMBHI,&lStack_28,_Method_UnityEngine_GameObject_GetComponent_GFXDisabler___);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(lStack_28,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    plVar11 = *(long **)((long)__this + 0x28);
    if (plVar11 == (long *)0x0) goto LAB_00c57b78;
    uVar13 = *(uint *)((long)__this + 0x30);
    uVar1 = *(uint *)(plVar11 + 3);
    if ((int)uVar1 <= (int)uVar13) {
      return;
    }
    if (lStack_28 != 0) {
      lVar4 = func_0x00a67a34(lStack_28,*(undefined8 *)(*plVar11 + 0x40));
      if (lVar4 == 0) {
        uVar5 = func_0x00a67b74();
        __this_00 = (void *)func_0x00a67a20(uVar5,0);
        if ((bRam00000000019171ba & 1) == 0) {
          func_0x00a67900(&GFXDisabler___TypeInfo);
          func_0x00a67900(&UnityEngine_LightmapData___TypeInfo);
          func_0x00a67900(&UnityEngine_LightmapData_TypeInfo);
          func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
          func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
          func_0x00a67900(&UnityEngine_Object_TypeInfo);
          bRam00000000019171ba = 1;
        }
        if (*(long *)((long)__this_00 + 0x20) == 0) goto LAB_00c57f08;
        uVar5 = func_0x00a679a0(_GFXDisabler___TypeInfo,
                                *(int *)(*(long *)((long)__this_00 + 0x20) + 0x18) + 1);
        *(undefined8 *)((long)__this_00 + 0x28) = uVar5;
        if (((*(long *)((long)__this_00 + 0x40) != 0) &&
            (*(long *)(*(long *)((long)__this_00 + 0x40) + 0x18) != 0)) &&
           (lVar4 = UnityEngine_LightmapSettings__get_lightmaps(0), lVar4 != 0)) {
          lVar4 = UnityEngine_LightmapSettings__get_lightmaps(0);
          if (lVar4 == 0) goto LAB_00c57f08;
          if (*(long *)(lVar4 + 0x18) == 0) {
            if (*(long *)((long)__this_00 + 0x40) != 0) {
              lVar4 = func_0x00a679a0(_UnityEngine_LightmapData___TypeInfo,
                                      *(undefined4 *)(*(long *)((long)__this_00 + 0x40) + 0x18));
              lVar8 = *(long *)((long)__this_00 + 0x40);
              if (lVar8 != 0) {
                lVar12 = 4;
                while( true ) {
                  uVar3 = lVar12 - 4;
                  if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar3) {
                    UnityEngine_LightmapSettings__set_lightmaps(lVar4,0);
                    goto LAB_00c57d14;
                  }
                  lVar8 = func_0x00a67b44(_UnityEngine_LightmapData_TypeInfo);
                  UnityEngine_LightmapData___ctor(lVar8,0);
                  lVar9 = *(long *)((long)__this_00 + 0x40);
                  if (lVar9 == 0) break;
                  if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_00c57f0c;
                  if ((lVar8 == 0) ||
                     (UnityEngine_LightmapData__set_lightmapColor
                                (lVar8,*(undefined8 *)(lVar9 + lVar12 * 8),0), lVar4 == 0)) break;
                  if (*(uint *)(lVar4 + 0x18) <= uVar3) goto LAB_00c57f0c;
                  *(long *)(lVar4 + lVar12 * 8) = lVar8;
                  lVar8 = *(long *)((long)__this_00 + 0x40);
                  lVar12 = lVar12 + 1;
                  if (lVar8 == 0) break;
                }
              }
            }
            goto LAB_00c57f08;
          }
        }
LAB_00c57d14:
        lVar4 = *(long *)((long)__this_00 + 0x20);
        if (lVar4 == 0) {
LAB_00c57f08:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (0 < (int)uVar1) {
          uVar13 = 0;
          do {
            if (uVar1 <= uVar13) {
LAB_00c57f0c:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            lVar8 = *(long *)(lVar4 + (long)(int)uVar13 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_00c57f08;
            uVar10 = *(undefined8 *)(lVar8 + 0x10);
            uVar3 = in_d2;
            uVar5 = in_d3;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              uVar3 = in_d2;
              uVar5 = in_d3;
            }
            uVar6 = UnityEngine_Object__op_Inequality(uVar10,0,0);
            in_d2 = uVar3;
            in_d3 = uVar5;
            if ((uVar6 & 1) != 0) {
              lVar12 = *(long *)(lVar8 + 0x10);
              if (*(float *)(lVar8 + 0x18) == 0.0) {
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                  in_d2 = uVar3;
                  in_d3 = uVar5;
                }
                pvVar7 = (void *)UnityEngine_Object__Instantiate_object_
                                           (lVar12,
                                            _Method_UnityEngine_Object_Instantiate_GameObject___);
              }
              else {
                if ((lVar12 == 0) ||
                   (lVar9 = UnityEngine_GameObject__get_transform(lVar12,0), lVar9 == 0))
                goto LAB_00c57f08;
                uVar10 = UnityEngine_Transform__get_position(lVar9,0);
                if ((*(long *)(lVar8 + 0x10) == 0) ||
                   (lVar9 = UnityEngine_GameObject__get_transform(*(long *)(lVar8 + 0x10),0),
                   lVar9 == 0)) goto LAB_00c57f08;
                UnityEngine_Transform__get_position(lVar9,0);
                if (*(long *)(lVar8 + 0x10) == 0) goto LAB_00c57f08;
                in_d2 = (ulong)*(uint *)(lVar8 + 0x18);
                uVar14 = in_d1;
                lVar8 = UnityEngine_GameObject__get_transform(*(long *)(lVar8 + 0x10),0);
                if (lVar8 == 0) goto LAB_00c57f08;
                in_d3 = UnityEngine_Transform__get_rotation(lVar8,0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                pvVar7 = (void *)UnityEngine_Object__Instantiate_object_
                                           (uVar10,in_d1,in_d2,in_d3,uVar14,uVar3,uVar5,lVar12,
                                            _Method_UnityEngine_Object_Instantiate_GameObject___);
              }
              BackgroundController__PGPEFBNBHHM(__this_00,pvVar7);
            }
            uVar1 = *(uint *)(lVar4 + 0x18);
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)uVar1);
        }
        uVar5 = *(undefined8 *)((long)__this_00 + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar3 & 1) != 0) {
          uVar5 = *(undefined8 *)((long)__this_00 + 0x38);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          pvVar7 = (void *)UnityEngine_Object__Instantiate_object_
                                     (uVar5,_Method_UnityEngine_Object_Instantiate_GameObject___);
          BackgroundController__PGPEFBNBHHM(__this_00,pvVar7);
        }
        BackgroundController__MLIIENHGIGK(__this_00);
        BackgroundController__NNDOCLOMBPN();
        BackgroundController__HAMLCJJANAJ(__this_00);
        if ((bRam00000000019171bb & 1) == 0) {
          func_0x00a67900(&Main_TypeInfo);
          func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
          func_0x00a67900(&UnityEngine_Object_TypeInfo);
          bRam00000000019171bb = 1;
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
        if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8) != 0) {
          uVar5 = *(undefined8 *)((long)__this_00 + 0x50);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
          if ((uVar3 & 1) != 0) {
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
            if (lVar4 == 0) {
LAB_00c582e4:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            iVar2 = *(int *)(lVar4 + 0x90);
            uVar5 = *(undefined8 *)((long)__this_00 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
            if ((uVar3 & 1) == 0) {
              if (*(long *)((long)__this_00 + 0x58) == 0) goto LAB_00c582e4;
              uVar3 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this_00 + 0x58),0);
              if (iVar2 < 1) {
                if ((uVar3 & 1) != 0) {
                  lVar4 = *(long *)((long)__this_00 + 0x58);
                  if (lVar4 != 0) {
                    uVar5 = 0;
                    goto LAB_00c582c0;
                  }
                  goto LAB_00c582e4;
                }
              }
              else if ((uVar3 & 1) == 0) {
                lVar4 = *(long *)((long)__this_00 + 0x58);
                if (lVar4 != 0) {
                  uVar5 = 1;
LAB_00c582c0:
                  if (pcRam000000000191c3f8 == (code *)0x0) {
                    pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
                  }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam000000000191c3f8)(lVar4,uVar5);
                  return;
                }
                goto LAB_00c582e4;
              }
            }
            else if (0 < iVar2) {
              uVar5 = *(undefined8 *)((long)__this_00 + 0x50);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__Instantiate_object_
                                (uVar5,_Method_UnityEngine_Object_Instantiate_GameObject___);
              *(undefined8 *)((long)__this_00 + 0x58) = uVar5;
            }
          }
        }
        return;
      }
      uVar1 = *(uint *)(plVar11 + 3);
    }
    if (uVar1 <= uVar13) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar11[(long)(int)uVar13 + 4] = lStack_28;
    *(int *)((long)__this + 0x30) = *(int *)((long)__this + 0x30) + 1;
  }
  return;
}



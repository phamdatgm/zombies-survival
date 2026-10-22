// ==== private void Awake() { }   @0xb57b8c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BackgroundController__Awake(void *__this)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 in_d1;
  undefined8 uVar12;
  ulong in_d2;
  undefined8 in_d3;
  
  if ((bRam00000000019171ba & 1) == 0) {
    func_0x00a67900(&GFXDisabler___TypeInfo);
    func_0x00a67900(&UnityEngine_LightmapData___TypeInfo);
    func_0x00a67900(&UnityEngine_LightmapData_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171ba = 1;
  }
  if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c57f08;
  uVar3 = func_0x00a679a0(_GFXDisabler___TypeInfo,
                          *(int *)(*(long *)((long)__this + 0x20) + 0x18) + 1);
  *(undefined8 *)((long)__this + 0x28) = uVar3;
  if (((*(long *)((long)__this + 0x40) != 0) &&
      (*(long *)(*(long *)((long)__this + 0x40) + 0x18) != 0)) &&
     (lVar4 = UnityEngine_LightmapSettings__get_lightmaps(0), lVar4 != 0)) {
    lVar4 = UnityEngine_LightmapSettings__get_lightmaps(0);
    if (lVar4 == 0) goto LAB_00c57f08;
    if (*(long *)(lVar4 + 0x18) == 0) {
      if (*(long *)((long)__this + 0x40) != 0) {
        lVar4 = func_0x00a679a0(_UnityEngine_LightmapData___TypeInfo,
                                *(undefined4 *)(*(long *)((long)__this + 0x40) + 0x18));
        lVar6 = *(long *)((long)__this + 0x40);
        if (lVar6 != 0) {
          lVar9 = 4;
          while( true ) {
            uVar11 = lVar9 - 4;
            if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar11) {
              UnityEngine_LightmapSettings__set_lightmaps(lVar4,0);
              goto LAB_00c57d14;
            }
            lVar6 = func_0x00a67b44(_UnityEngine_LightmapData_TypeInfo);
            UnityEngine_LightmapData___ctor(lVar6,0);
            lVar7 = *(long *)((long)__this + 0x40);
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_00c57f0c;
            if ((lVar6 == 0) ||
               (UnityEngine_LightmapData__set_lightmapColor
                          (lVar6,*(undefined8 *)(lVar7 + lVar9 * 8),0), lVar4 == 0)) break;
            if (*(uint *)(lVar4 + 0x18) <= uVar11) goto LAB_00c57f0c;
            *(long *)(lVar4 + lVar9 * 8) = lVar6;
            lVar6 = *(long *)((long)__this + 0x40);
            lVar9 = lVar9 + 1;
            if (lVar6 == 0) break;
          }
        }
      }
      goto LAB_00c57f08;
    }
  }
LAB_00c57d14:
  lVar4 = *(long *)((long)__this + 0x20);
  if (lVar4 == 0) {
LAB_00c57f08:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar1 = *(uint *)(lVar4 + 0x18);
  if (0 < (int)uVar1) {
    uVar10 = 0;
    do {
      if (uVar1 <= uVar10) {
LAB_00c57f0c:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      lVar6 = *(long *)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
      if (lVar6 == 0) goto LAB_00c57f08;
      uVar8 = *(undefined8 *)(lVar6 + 0x10);
      uVar11 = in_d2;
      uVar3 = in_d3;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        uVar11 = in_d2;
        uVar3 = in_d3;
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      in_d2 = uVar11;
      in_d3 = uVar3;
      if ((uVar5 & 1) != 0) {
        lVar9 = *(long *)(lVar6 + 0x10);
        if (*(float *)(lVar6 + 0x18) == 0.0) {
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            in_d2 = uVar11;
            in_d3 = uVar3;
          }
          uVar3 = UnityEngine_Object__Instantiate_object_
                            (lVar9,_Method_UnityEngine_Object_Instantiate_GameObject___);
        }
        else {
          if ((lVar9 == 0) || (lVar7 = UnityEngine_GameObject__get_transform(lVar9,0), lVar7 == 0))
          goto LAB_00c57f08;
          uVar8 = UnityEngine_Transform__get_position(lVar7,0);
          if ((*(long *)(lVar6 + 0x10) == 0) ||
             (lVar7 = UnityEngine_GameObject__get_transform(*(long *)(lVar6 + 0x10),0), lVar7 == 0))
          goto LAB_00c57f08;
          UnityEngine_Transform__get_position(lVar7,0);
          if (*(long *)(lVar6 + 0x10) == 0) goto LAB_00c57f08;
          in_d2 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar12 = in_d1;
          lVar6 = UnityEngine_GameObject__get_transform(*(long *)(lVar6 + 0x10),0);
          if (lVar6 == 0) goto LAB_00c57f08;
          in_d3 = UnityEngine_Transform__get_rotation(lVar6,0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar3 = UnityEngine_Object__Instantiate_object_
                            (uVar8,in_d1,in_d2,in_d3,uVar12,uVar11,uVar3,lVar9,
                             _Method_UnityEngine_Object_Instantiate_GameObject___);
        }
        BackgroundController__PGPEFBNBHHM(__this,uVar3);
      }
      uVar1 = *(uint *)(lVar4 + 0x18);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uVar1);
  }
  uVar3 = *(undefined8 *)((long)__this + 0x38);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar11 & 1) != 0) {
    uVar3 = *(undefined8 *)((long)__this + 0x38);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__Instantiate_object_
                      (uVar3,_Method_UnityEngine_Object_Instantiate_GameObject___);
    BackgroundController__PGPEFBNBHHM(__this,uVar3);
  }
  BackgroundController__MLIIENHGIGK(__this);
  BackgroundController__NNDOCLOMBPN();
  BackgroundController__HAMLCJJANAJ(__this);
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
    uVar3 = *(undefined8 *)((long)__this + 0x50);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar11 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar11 & 1) != 0) {
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
      uVar3 = *(undefined8 *)((long)__this + 0x58);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar11 = UnityEngine_Object__op_Equality(uVar3,0,0);
      if ((uVar11 & 1) == 0) {
        if (*(long *)((long)__this + 0x58) == 0) goto LAB_00c582e4;
        uVar11 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 0x58),0);
        if (iVar2 < 1) {
          if ((uVar11 & 1) != 0) {
            lVar4 = *(long *)((long)__this + 0x58);
            if (lVar4 != 0) {
              uVar3 = 0;
              goto LAB_00c582c0;
            }
            goto LAB_00c582e4;
          }
        }
        else if ((uVar11 & 1) == 0) {
          lVar4 = *(long *)((long)__this + 0x58);
          if (lVar4 != 0) {
            uVar3 = 1;
LAB_00c582c0:
            if (pcRam000000000191c3f8 == (code *)0x0) {
              pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
            }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam000000000191c3f8)(lVar4,uVar3);
            return;
          }
          goto LAB_00c582e4;
        }
      }
      else if (0 < iVar2) {
        uVar3 = *(undefined8 *)((long)__this + 0x50);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__Instantiate_object_
                          (uVar3,_Method_UnityEngine_Object_Instantiate_GameObject___);
        *(undefined8 *)((long)__this + 0x58) = uVar3;
      }
    }
  }
  return;
}



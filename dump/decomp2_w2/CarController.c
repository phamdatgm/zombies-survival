// ==== public void IBDIAPCKNDO() { }   @0xb1c238

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__IBDIAPCKNDO(void *__this)

{
  *(undefined4 *)((long)__this + 0x218) = *(undefined4 *)((long)__this + 0x21c);
  return;
}


// ==== private void NDIMMLBIFCI(int ALLBGCHDGNC) { }   @0xb1caa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__NDIMMLBIFCI(void *__this,int ALLBGCHDGNC)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  if ((bRam0000000001917014 & 1) == 0) {
    func_0x00a67900(&UnityEngine_UI_ColorBlock_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917014 = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_88,ALLBGCHDGNC,0);
  uStack_60 = uStack_78;
  uStack_68 = uStack_80;
  uStack_70 = uStack_88;
  *(undefined4 *)((long)__this + 0x300) = uStack_78;
  *(undefined8 *)((long)__this + 0x2f8) = uStack_80;
  *(undefined8 *)((long)__this + 0x2f0) = uStack_88;
  uVar4 = *(undefined8 *)((long)__this + 0x30);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)((long)__this + 0x30) != 0) {
    plVar5 = *(long **)(*(long *)((long)__this + 0x30) + 0x128);
    uVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString
                      ((undefined8 *)((long)__this + 0x2f0),0);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x5b0));
      uStack_90 = *(undefined4 *)((long)__this + 0x300);
      uStack_98 = *(undefined8 *)((long)__this + 0x2f8);
      uStack_a0 = *(undefined8 *)((long)__this + 0x2f0);
      iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_a0,0);
      if (iVar1 < 1) {
        if (*(char *)((long)__this + 0x312) == '\0') {
          if ((*(long *)((long)__this + 0x30) != 0) &&
             (lVar3 = *(long *)(*(long *)((long)__this + 0x30) + 0xe0), lVar3 != 0)) {
            plVar5 = (long *)UnityEngine_UI_Selectable__get_image(lVar3,0);
            if ((*(long *)((long)__this + 0x30) != 0) &&
               (lVar3 = *(long *)(*(long *)((long)__this + 0x30) + 0xe0), lVar3 != 0)) {
              uVar9 = *(undefined4 *)(lVar3 + 0x94);
              uVar8 = *(undefined4 *)(lVar3 + 0x98);
              uVar7 = *(undefined4 *)(lVar3 + 0x9c);
              uVar6 = *(undefined4 *)(lVar3 + 0xa0);
              if (*(int *)(_UnityEngine_UI_ColorBlock_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (plVar5 != (long *)0x0) {
                (**(code **)(*plVar5 + 0x2a8))
                          (uVar9,uVar8,uVar7,uVar6,plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
                *(undefined1 *)((long)__this + 0x312) = 1;
                *(undefined1 *)((long)__this + 0x310) = 0;
                return;
              }
            }
          }
          goto LAB_00c1cc98;
        }
      }
      else if (*(char *)((long)__this + 0x310) == '\0') {
        *(undefined1 *)((long)__this + 0x310) = 1;
        *(undefined1 *)((long)__this + 0x312) = 0;
        if (((*(long *)((long)__this + 0x30) == 0) ||
            (lVar3 = *(long *)(*(long *)((long)__this + 0x30) + 0xe0), lVar3 == 0)) ||
           (plVar5 = (long *)UnityEngine_UI_Selectable__get_image(lVar3,0), plVar5 == (long *)0x0))
        goto LAB_00c1cc98;
        (**(code **)(*plVar5 + 0x2a8))
                  (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar5,
                   *(undefined8 *)(*plVar5 + 0x2b0));
      }
      return;
    }
  }
LAB_00c1cc98:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private CarController.CILHKIPDPMN DCPJJNIFCBM(Transform DDHKDIEBPDH, GNOCGPDGKAE PLPKOBBAAJM) { }   @0xb1e004

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * CarController__DCPJJNIFCBM(void *__this,void *DDHKDIEBPDH,int PLPKOBBAAJM)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  void *pvVar10;
  long lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulong in_d1;
  float fVar19;
  undefined4 uVar20;
  ulong in_d2;
  ulong uVar21;
  float fVar22;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined8 uStack_13c;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
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
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Equality(DDHKDIEBPDH,0,0);
  if ((uVar3 & 1) == 0) {
    pvVar4 = (void *)func_0x00a67b44(_CarController_CILHKIPDPMN_TypeInfo);
    fVar16 = (float)in_d1;
    fVar17 = (float)in_d2;
    System_Object___ctor(pvVar4,0);
    if (DDHKDIEBPDH != (void *)0x0) {
      lVar5 = UnityEngine_Component__get_gameObject(DDHKDIEBPDH,0);
      uVar2 = UnityEngine_LayerMask__NameToLayer(_Str_car,0);
      if (lVar5 != 0) {
        UnityEngine_GameObject__set_layer(lVar5,uVar2,0);
        uVar6 = UnityEngine_Object__get_name(DDHKDIEBPDH,0);
        uVar6 = System_String__Concat(_Str_WheelCollider,uVar6,0);
        lVar5 = func_0x00a67b44(_UnityEngine_GameObject_TypeInfo);
        UnityEngine_GameObject___ctor(lVar5,uVar6,0);
        uVar2 = UnityEngine_LayerMask__NameToLayer(_Str_wheel,0);
        if (lVar5 != 0) {
          UnityEngine_GameObject__set_layer(lVar5,uVar2,0);
          lVar7 = UnityEngine_GameObject__get_transform(lVar5,0);
          if (lVar7 != 0) {
            UnityEngine_Transform__SetParent(lVar7,*(undefined8 *)((long)__this + 0x38),0);
            lVar7 = UnityEngine_GameObject__get_transform(lVar5,0);
            fVar13 = (float)UnityEngine_Transform__get_position(DDHKDIEBPDH,0);
            if ((*(long *)((long)__this + 0x38) != 0) &&
               (fVar19 = fVar17, fVar18 = fVar16,
               fVar14 = (float)UnityEngine_Transform__get_up(*(long *)((long)__this + 0x38),0),
               lVar7 != 0)) {
              fVar22 = *(float *)((long)__this + 0x130);
              in_d2 = (ulong)(uint)(fVar17 + fVar19 * fVar22 * 0.5);
              in_d1 = (ulong)(uint)(fVar16 + fVar18 * fVar22 * 0.5);
              UnityEngine_Transform__set_position(fVar13 + fVar14 * fVar22 * 0.5,lVar7,0);
              uVar6 = _UnityEngine_WheelCollider_var;
              if (*(int *)(_System_Type_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
              plVar8 = (long *)UnityEngine_GameObject__AddComponent(lVar5,uVar6,0);
              if (plVar8 != (long *)0x0) {
                if ((*(byte *)(*plVar8 + 0x130) <
                     *(byte *)(_UnityEngine_WheelCollider_TypeInfo + 0x130)) ||
                   (*(long *)(*(long *)(*plVar8 + 200) +
                              (ulong)*(byte *)(_UnityEngine_WheelCollider_TypeInfo + 0x130) * 8 + -8
                             ) != _UnityEngine_WheelCollider_TypeInfo)) {
                  func_0x00a67eec(plVar8);
                  goto LAB_00c1e3b0;
                }
                UnityEngine_WheelCollider__set_motorTorque(0x3727c5ac,plVar8,0);
                uVar20 = (undefined4)in_d2;
                uVar2 = (undefined4)in_d1;
                UnityEngine_WheelCollider__set_wheelDampingRate(0x40a00000,plVar8,0);
                if (pvVar4 != (void *)0x0) {
                  *(void **)((long)pvVar4 + 0x10) = DDHKDIEBPDH;
                  *(long *)((long)pvVar4 + 0x18) = lVar5;
                  *(long **)((long)pvVar4 + 0x20) = plVar8;
                  uVar6 = UnityEngine_Component__get_transform(plVar8,0);
                  *(undefined8 *)((long)pvVar4 + 0x28) = uVar6;
                  lVar5 = UnityEngine_GameObject__get_transform(lVar5,0);
                  if (lVar5 != 0) {
                    uVar15 = UnityEngine_Transform__get_localPosition(lVar5,0);
                    *(undefined4 *)((long)pvVar4 + 0x30) = uVar15;
                    *(undefined4 *)((long)pvVar4 + 0x34) = uVar2;
                    *(undefined4 *)((long)pvVar4 + 0x38) = uVar20;
                    *(undefined4 *)((long)pvVar4 + 0x3c) = uVar15;
                    *(undefined4 *)((long)pvVar4 + 0x40) = uVar2;
                    *(undefined4 *)((long)pvVar4 + 0x44) = uVar20;
                    *(int *)((long)pvVar4 + 0x4c) = PLPKOBBAAJM;
                    UnityEngine_WheelCollider__get_forwardFriction(&uStack_98,plVar8,0);
                    uStack_78 = uStack_90;
                    uStack_80 = uStack_98;
                    uStack_70 = uStack_88;
                    UnityEngine_WheelFrictionCurve__set_stiffness
                              (*(undefined4 *)((long)__this + 0x178),&uStack_80,0);
                    uStack_a8 = uStack_78;
                    uStack_b0 = uStack_80;
                    uStack_a0 = uStack_70;
                    UnityEngine_WheelCollider__set_forwardFriction(plVar8,&uStack_b0,0);
                    return pvVar4;
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
LAB_00c1e3b0:
  func_0x00a67914(&System_Exception_TypeInfo);
  uVar6 = func_0x00a67b44();
  uVar9 = func_0x00a67914(&Str_wheel_not_connected_to_script_);
  System_Exception___ctor(uVar6,uVar9,0);
  uVar9 = func_0x00a67914(&Method_CarController_DCPJJNIFCBM__);
  pvVar10 = (void *)func_0x00a67a20(uVar6,uVar9);
  pvVar4 = pvVar10;
  if ((bRam0000000001917027 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    pvVar4 = (void *)func_0x00a67900(&UnityEngine_Physics_TypeInfo);
    bRam0000000001917027 = 1;
  }
  uStack_13c = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_150 = 0;
  lVar5 = *(long *)((long)pvVar10 + 0x520);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar12 = 0;
      do {
        if (uVar1 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar7 = *(long *)(lVar5 + (long)(int)uVar12 * 8 + 0x20);
        if ((lVar7 == 0) || (*(long *)(lVar7 + 0x28) == 0)) goto LAB_00c1e5c0;
        lVar11 = *(long *)(lVar7 + 0x20);
        uVar6 = UnityEngine_Transform__get_position(*(long *)(lVar7 + 0x28),0);
        if (*(long *)((long)pvVar10 + 0x38) == 0) goto LAB_00c1e5c0;
        uVar3 = in_d1;
        uVar21 = in_d2;
        fVar16 = (float)UnityEngine_Transform__get_up(*(long *)((long)pvVar10 + 0x38),0);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = *(uint *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x14);
        if (*(int *)(_UnityEngine_Physics_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Physics_TypeInfo);
        }
        pvVar4 = (void *)UnityEngine_Physics__Raycast
                                   (uVar6,in_d1,in_d2,-fVar16,-(float)uVar3,-(float)uVar21,
                                    0x40000000,&uStack_160,1 << (ulong)(uVar1 & 0x1f),0);
        if (((ulong)pvVar4 & 1) != 0) {
          if (*(long *)(lVar7 + 0x10) == 0) goto LAB_00c1e5c0;
          uVar6 = UnityEngine_Transform__get_position(*(long *)(lVar7 + 0x10),0);
          fVar16 = (float)in_d1;
          UnityEngine_RaycastHit__get_point(&uStack_160,0);
          if (lVar11 == 0) goto LAB_00c1e5c0;
          fVar17 = (float)UnityEngine_WheelCollider__get_radius(lVar11,0);
          if (*(long *)(lVar7 + 0x10) == 0) goto LAB_00c1e5c0;
          in_d1 = (ulong)(uint)(fVar16 + fVar17);
          pvVar4 = (void *)UnityEngine_Transform__set_position(uVar6,*(long *)(lVar7 + 0x10),0);
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar1);
    }
    return pvVar4;
  }
LAB_00c1e5c0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void PFANBJGLEJO() { }   @0xb1eb4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__PFANBJGLEJO(void *__this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam000000000191701d & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_event_replay_ghost_is_NUL_____);
    func_0x00a67900(&Str___time__);
    func_0x00a67900(&Str__vs_);
    func_0x00a67900(&Str_points__);
    bRam000000000191701d = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar4 == 0) goto LAB_00c1ee44;
  if (*(long *)(lVar4 + 0x60) == 0) {
    uVar2 = _Str_event_replay_ghost_is_NUL_____;
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      uVar2 = _Str_event_replay_ghost_is_NUL_____;
    }
  }
  else {
    lVar4 = func_0x00a679a0(_string___TypeInfo,8);
    if (lVar4 == 0) goto LAB_00c1ee44;
    if (*(int *)(lVar4 + 0x18) == 0) {
LAB_00c1ee48:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    *(undefined8 *)(lVar4 + 0x20) = _Str_points__;
    uStack_40 = *(undefined4 *)((long)__this + 0x74);
    uStack_48 = *(undefined8 *)((long)__this + 0x6c);
    uStack_50 = *(undefined8 *)((long)__this + 100);
    uVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(&uStack_50,0);
    if ((*(uint *)(lVar4 + 0x18) < 2) ||
       (*(undefined8 *)(lVar4 + 0x28) = uVar2, *(uint *)(lVar4 + 0x18) == 2)) goto LAB_00c1ee48;
    *(undefined8 *)(lVar4 + 0x30) = _Str__vs_;
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x60), lVar5 == 0)) goto LAB_00c1ee44;
    uVar2 = System_Int32__ToString(lVar5 + 0x34,0);
    if ((*(uint *)(lVar4 + 0x18) < 4) ||
       (*(undefined8 *)(lVar4 + 0x38) = uVar2, *(uint *)(lVar4 + 0x18) == 4)) goto LAB_00c1ee48;
    *(undefined8 *)(lVar4 + 0x40) = _Str___time__;
    uVar2 = System_Int32__ToString((long)__this + 0x3e0,0);
    if ((*(uint *)(lVar4 + 0x18) < 6) ||
       (*(undefined8 *)(lVar4 + 0x48) = uVar2, *(uint *)(lVar4 + 0x18) == 6)) goto LAB_00c1ee48;
    *(undefined8 *)(lVar4 + 0x50) = _Str__vs_;
    lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x60), lVar5 == 0)) goto LAB_00c1ee44;
    uVar2 = System_Int32__ToString(lVar5 + 0x30,0);
    if (*(uint *)(lVar4 + 0x18) < 8) goto LAB_00c1ee48;
    *(undefined8 *)(lVar4 + 0x58) = uVar2;
    uVar2 = System_String__Concat(lVar4,0);
  }
  Main__GEMDEAMAGPG(uVar2,0,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar4 == 0) goto LAB_00c1ee44;
  if (*(long *)(lVar4 + 0x60) == 0) {
LAB_00c1ede8:
    uVar6 = 1;
  }
  else {
    uStack_60 = *(undefined4 *)((long)__this + 0x74);
    uStack_68 = *(undefined8 *)((long)__this + 0x6c);
    uStack_70 = *(undefined8 *)((long)__this + 100);
    uVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_70,0);
    uVar6 = *(undefined4 *)((long)__this + 0x3e0);
    uVar7 = uVar3 & 0xffffffff;
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      uVar3 = func_0x00a67a30(_Main_TypeInfo);
    }
    lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x60), lVar4 == 0)) goto LAB_00c1ee44;
    uVar3 = CarController__DADAHEFJBFC
                      (uVar3,uVar7,uVar6,*(undefined4 *)(lVar4 + 0x34),*(undefined4 *)(lVar4 + 0x30)
                      );
    if ((uVar3 & 1) != 0) goto LAB_00c1ede8;
    uVar6 = 0;
  }
  uStack_80 = *(undefined4 *)((long)__this + 0x74);
  uStack_88 = *(undefined8 *)((long)__this + 0x6c);
  uStack_90 = *(undefined8 *)((long)__this + 100);
  lVar4 = *(long *)((long)__this + 0x30);
  uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_90,0);
  if (lVar4 != 0) {
    GUIGameplay__MFOBEMEHKEO(lVar4,uVar6,uVar1,*(undefined4 *)((long)__this + 0x3e0),0);
    return;
  }
LAB_00c1ee44:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void KKMPDCAMDGN(GUIGameplay.POFCDOMOIBH MPCJLJAJKMF, int NAGJFGEHKIK, int HFDKNJFKOJO = 0) { }   @0xb1f280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__KKMPDCAMDGN(void *__this,int MPCJLJAJKMF,int NAGJFGEHKIK,int HFDKNJFKOJO)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float in_s2;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000001917021 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&GUIGameplay_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001917021 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if (lVar3 == 0) goto LAB_00c1f640;
  }
  if (*(int *)(lVar3 + 0x10) != HFDKNJFKOJO) {
    return;
  }
  if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c1f640;
  UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
  if (in_s2 <= (float)NAGJFGEHKIK) {
    return;
  }
  if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = *(long *)(_GUIGameplay_TypeInfo + 0xb8);
  if (MPCJLJAJKMF <= *(int *)(lVar3 + 8)) {
    return;
  }
  if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    lVar3 = *(long *)(_GUIGameplay_TypeInfo + 0xb8);
  }
  if (*(int *)(lVar3 + 4) == MPCJLJAJKMF) {
    return;
  }
  if ((*(long *)((long)__this + 0x30) == 0) ||
     (lVar3 = *(long *)(*(long *)((long)__this + 0x30) + 0x410), lVar3 == 0)) goto LAB_00c1f640;
  if (*(uint *)(lVar3 + 0x18) <= (uint)MPCJLJAJKMF) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  lVar3 = *(long *)(lVar3 + (long)MPCJLJAJKMF * 8 + 0x20);
  if (lVar3 == 0) goto LAB_00c1f640;
  if (*(char *)(lVar3 + 0x58) == '\0') {
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
    if (lVar3 == 0) goto LAB_00c1f640;
    uVar2 = DAFNMLEKHAD__BLGOKNOOEEO(lVar3,MPCJLJAJKMF,0);
    if ((uVar2 & 1) == 0) goto LAB_00c1f4f4;
    if (MPCJLJAJKMF != 2) {
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
    lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar3 == 0) goto LAB_00c1f640;
    lVar3 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar3,0xffffffff,0);
    if (lVar3 == 0) {
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
    lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((lVar3 == 0) || (lVar3 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar3,0xffffffff,0), lVar3 == 0))
    goto LAB_00c1f640;
    if (3 < *(int *)(lVar3 + 0x3c)) {
      return;
    }
LAB_00c1f560:
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined4 *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x10) = 0;
    uStack_50 = *(undefined8 *)((long)__this + 0x1dc);
    uStack_58 = *(undefined8 *)((long)__this + 0x1d4);
    uStack_60 = *(undefined8 *)((long)__this + 0x1cc);
    fVar4 = (float)CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_60,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_98,fVar4 + 300.0,0);
    uStack_70 = uStack_88;
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    *(undefined8 *)((long)__this + 0x1dc) = uStack_88;
    *(undefined8 *)((long)__this + 0x1d4) = uStack_90;
    *(undefined8 *)((long)__this + 0x1cc) = uStack_98;
  }
  else {
LAB_00c1f4f4:
    switch(MPCJLJAJKMF) {
    case 1:
    case 5:
      uStack_78 = *(undefined8 *)((long)__this + 0x2f8);
      uStack_80 = *(undefined8 *)((long)__this + 0x2f0);
      uStack_70 = CONCAT44(uStack_70._4_4_,*(undefined4 *)((long)__this + 0x300));
      iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_80,0);
      if (iVar1 == 0) {
        uStack_78 = *(undefined8 *)((long)__this + 0x2f8);
        uStack_80 = *(undefined8 *)((long)__this + 0x2f0);
        uStack_70 = CONCAT44(uStack_70._4_4_,*(undefined4 *)((long)__this + 0x300));
        iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_80,0);
        iVar1 = iVar1 + 1;
code_r0x00c1f600:
        CarController__NDIMMLBIFCI(__this,iVar1);
      }
      break;
    case 2:
      goto LAB_00c1f560;
    default:
      goto LAB_00c1f610;
    case 6:
      uStack_78 = *(undefined8 *)((long)__this + 0x2f8);
      uStack_80 = *(undefined8 *)((long)__this + 0x2f0);
      uStack_70 = CONCAT44(uStack_70._4_4_,*(undefined4 *)((long)__this + 0x300));
      iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_80,0);
      if (iVar1 < 2) {
        iVar1 = 2;
        goto code_r0x00c1f600;
      }
    }
    *(undefined1 *)((long)__this + 0x316) = 1;
  }
LAB_00c1f610:
  if (*(long *)((long)__this + 0x30) != 0) {
    GUIGameplay__MGNNDFEFHAH(*(long *)((long)__this + 0x30),MPCJLJAJKMF,0,0);
    return;
  }
LAB_00c1f640:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void OPEHNMHCDAJ() { }   @0xb22490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__OPEHNMHCDAJ(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001917026 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917026 = 1;
  }
  uVar3 = *(undefined8 *)((long)__this + 0x3b0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)((long)__this + 0x3b0) != 0) {
    uVar1 = UnityEngine_ParticleSystem__get_isPlaying(*(long *)((long)__this + 0x3b0),0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    lVar2 = *(long *)((long)__this + 0x3b0);
    if (lVar2 != 0) {
      if (pcRam000000000191d330 == (code *)0x0) {
        pcRam000000000191d330 = (code *)func_0x00a678c4(&UNK_005accf4,0);
      }
                    /* WARNING: Could not recover jumptable at 0x014ca9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191d330)(lVar2,1,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void ENIIFAAKJKN() { }   @0xb21610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__ENIIFAAKJKN(void *__this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  void *CIDKMFLFJEJ;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
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
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
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
  uStack_74 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
    uVar6 = 5;
    *(undefined4 *)((long)__this + 0x124) = 3;
    uStack_70 = 0x500000003;
    uStack_68 = 0x300000005;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_108,0xffffffff,0);
    uStack_e0 = CONCAT44(uStack_e0._4_4_,uStack_f8);
    uStack_e8 = uStack_100;
    uStack_f0 = uStack_108;
    *(undefined4 *)((long)__this + 0x19c) = uStack_f8;
    *(undefined8 *)((long)__this + 0x194) = uStack_100;
    *(undefined8 *)((long)__this + 0x18c) = uStack_108;
    CarController__NCBPCHPNCII(__this);
  }
  else {
    uStack_70 = 0;
    uStack_68 = 0;
    *(undefined4 *)((long)__this + 0x124) = 0;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_108,0xffffffff,0);
    uVar6 = 0;
    uStack_e0 = CONCAT44(uStack_e0._4_4_,uStack_f8);
    uStack_e8 = uStack_100;
    uStack_f0 = uStack_108;
    *(undefined4 *)((long)__this + 0x19c) = uStack_f8;
    *(undefined8 *)((long)__this + 0x194) = uStack_100;
    *(undefined8 *)((long)__this + 0x18c) = uStack_108;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar14 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar11 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  if ((uVar11 & 1) == 0) {
LAB_00c21b28:
    uVar5 = 0;
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
    lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar12 == 0) goto LAB_00c22488;
    lVar12 = DAFNMLEKHAD__DKJLCJPBPPN(lVar12,0xffffffff,1,0);
    if (lVar12 == 0) goto LAB_00c21b28;
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
    lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((lVar12 == 0) || (lVar12 = DAFNMLEKHAD__DKJLCJPBPPN(lVar12,0xffffffff,1,0), lVar12 == 0))
    goto LAB_00c22488;
    uVar5 = MKCBGHDANLA__IDOHKCCDGDG(lVar12,0,0);
    uStack_68 = CONCAT44(uVar5,(uint)uStack_68);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((lVar12 == 0) || (lVar12 = DAFNMLEKHAD__DKJLCJPBPPN(lVar12,0xffffffff,1,0), lVar12 == 0))
    goto LAB_00c22488;
    uVar5 = MKCBGHDANLA__IDOHKCCDGDG(lVar12,1,0);
    *(undefined4 *)((long)__this + 0x124) = uVar5;
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((lVar12 == 0) || (lVar12 = DAFNMLEKHAD__DKJLCJPBPPN(lVar12,0xffffffff,1,0), lVar12 == 0))
    goto LAB_00c22488;
    uVar5 = MKCBGHDANLA__IDOHKCCDGDG(lVar12,2,0);
    uStack_68 = CONCAT44(uStack_68._4_4_,uVar5);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((lVar12 == 0) || (lVar12 = DAFNMLEKHAD__DKJLCJPBPPN(lVar12,0xffffffff,1,0), lVar12 == 0))
    goto LAB_00c22488;
    uVar5 = MKCBGHDANLA__IDOHKCCDGDG(lVar12,3,0);
    uStack_70 = CONCAT44(uVar5,(undefined4)uStack_70);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((lVar12 == 0) || (lVar12 = DAFNMLEKHAD__DKJLCJPBPPN(lVar12,0xffffffff,1,0), lVar12 == 0))
    goto LAB_00c22488;
    uVar6 = MKCBGHDANLA__IDOHKCCDGDG(lVar12,4,0);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((lVar12 == 0) || (lVar12 = DAFNMLEKHAD__DKJLCJPBPPN(lVar12,0xffffffff,1,0), lVar12 == 0))
    goto LAB_00c22488;
    uVar14 = MKCBGHDANLA__EAEAJMKGDPD(lVar12,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_108,uVar14,0);
    uStack_e0 = CONCAT44(uStack_e0._4_4_,uStack_f8);
    uStack_e8 = uStack_100;
    uStack_f0 = uStack_108;
    *(undefined4 *)((long)__this + 0x19c) = uStack_f8;
    *(undefined8 *)((long)__this + 0x194) = uStack_100;
    *(undefined8 *)((long)__this + 0x18c) = uStack_108;
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((lVar12 == 0) || (lVar12 = DAFNMLEKHAD__DKJLCJPBPPN(lVar12,0xffffffff,1,0), lVar12 == 0))
    goto LAB_00c22488;
    uVar5 = MKCBGHDANLA__BGFAMABFPHC(lVar12,0);
  }
  if (0 < uStack_68._4_4_) {
    uStack_c0 = *(undefined8 *)((long)__this + 0x158);
    uStack_c8 = *(undefined8 *)((long)__this + 0x150);
    uStack_d0 = *(undefined8 *)((long)__this + 0x148);
    fVar15 = (float)CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit(&uStack_d0,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit
              (&uStack_108,fVar15 * ((float)uStack_68._4_4_ * 0.083 + 1.0),0);
    uStack_e0 = CONCAT44(uStack_f4,uStack_f8);
    uStack_e8 = uStack_100;
    uStack_f0 = uStack_108;
    *(undefined8 *)((long)__this + 0x158) = uStack_e0;
    *(undefined8 *)((long)__this + 0x150) = uStack_100;
    *(undefined8 *)((long)__this + 0x148) = uStack_108;
    *(int *)((long)__this + 0x164) = *(int *)((long)__this + 0x164) + uStack_68._4_4_ * 10;
  }
  CarController__PPIBCCLIDMH(__this,*(undefined4 *)((long)__this + 0x124));
  lVar12 = *(long *)((long)__this + 0x308);
  if (lVar12 == 0) goto LAB_00c22488;
  uVar4 = *(uint *)(lVar12 + 0x18) - 1;
  if ((int)(uint)uStack_68 <= (int)uVar4) {
    uVar4 = (uint)uStack_68;
  }
  uVar3 = 0;
  if (-1 < (int)(uint)uStack_68) {
    uVar3 = uVar4;
  }
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar3);
  if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_00c2248c;
  CarController__NDIMMLBIFCI(__this,*(int *)(lVar12 + (long)(int)uVar3 * 4 + 0x20));
  *(bool *)((long)__this + 0x314) = 0 < (int)uVar3;
  uVar14 = *(undefined8 *)((long)__this + 0x2e0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  if ((uVar11 & 1) != 0) {
    if (*(long *)((long)__this + 0x2e0) == 0) goto LAB_00c22488;
    UnityEngine_GameObject__SetActive
              (*(long *)((long)__this + 0x2e0),*(undefined1 *)((long)__this + 0x314),0);
  }
  uVar14 = *(undefined8 *)((long)__this + 0x2e8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  if ((uVar11 & 1) != 0) {
    if (*(long *)((long)__this + 0x2e8) == 0) goto LAB_00c22488;
    UnityEngine_GameObject__SetActive
              (*(long *)((long)__this + 0x2e8),*(undefined1 *)((long)__this + 0x314),0);
  }
  if (*(char *)((long)__this + 0x314) == '\0') {
    uVar14 = *(undefined8 *)((long)__this + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar11 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar11 & 1) != 0) {
      if (((*(long *)((long)__this + 0x30) == 0) ||
          (lVar12 = *(long *)(*(long *)((long)__this + 0x30) + 0xe0), lVar12 == 0)) ||
         (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c22488;
      UnityEngine_GameObject__SetActive(lVar12,0,0);
    }
  }
  iVar8 = uStack_70._4_4_;
  *(bool *)((long)__this + 0x344) = 0 < uStack_70._4_4_;
  uStack_110 = *(undefined4 *)((long)__this + 0x208);
  uStack_118 = *(undefined8 *)((long)__this + 0x200);
  uStack_120 = *(undefined8 *)((long)__this + 0x1f8);
  iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_120,0);
  fVar16 = (float)iVar8 / 5.0;
  fVar15 = fVar16;
  if (1.0 < fVar16) {
    fVar15 = 1.0;
  }
  if (fVar16 < 0.0) {
    fVar15 = 0.0;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__op_Implicit
            (&uStack_108,fVar15 * (float)iVar7 + 0.0,0);
  uStack_e0 = CONCAT44(uStack_f4,uStack_f8);
  uStack_e8 = uStack_100;
  uStack_f0 = uStack_108;
  *(undefined8 *)((long)__this + 0x1dc) = uStack_e0;
  *(undefined8 *)((long)__this + 0x1d4) = uStack_100;
  *(undefined8 *)((long)__this + 0x1cc) = uStack_108;
  uVar14 = *(undefined8 *)((long)__this + 800);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  if ((uVar11 & 1) != 0) {
    if (*(long *)((long)__this + 800) == 0) goto LAB_00c22488;
    UnityEngine_GameObject__SetActive
              (*(long *)((long)__this + 800),*(undefined1 *)((long)__this + 0x344),0);
  }
  if (*(char *)((long)__this + 0x344) == '\0') {
    uVar14 = *(undefined8 *)((long)__this + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar11 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar11 & 1) != 0) {
      if (((*(long *)((long)__this + 0x30) == 0) ||
          (lVar12 = *(long *)(*(long *)((long)__this + 0x30) + 0xe8), lVar12 == 0)) ||
         (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c22488;
      UnityEngine_GameObject__SetActive(lVar12,0,0);
    }
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
     (lVar12 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar12 == 0))
  goto LAB_00c22488;
  if (*(uint *)(lVar12 + 0x18) <= *(uint *)((long)__this + 0xa0)) goto LAB_00c2248c;
  lVar12 = *(long *)(lVar12 + (long)(int)*(uint *)((long)__this + 0xa0) * 8 + 0x20);
  if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x38), lVar12 == 0)) goto LAB_00c22488;
  uVar4 = *(uint *)(lVar12 + 0x18) - 1;
  if ((int)uVar6 <= (int)uVar4) {
    uVar4 = uVar6;
  }
  uVar3 = 0;
  if (-1 < (int)uVar6) {
    uVar3 = uVar4;
  }
  if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_00c2248c;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit
            (&uStack_108,*(undefined4 *)(lVar12 + (long)(int)uVar3 * 4 + 0x20),0);
  puVar1 = (undefined8 *)((long)__this + 0x18c);
  uStack_e0 = CONCAT44(uStack_e0._4_4_,uStack_f8);
  uStack_e8 = uStack_100;
  uStack_f0 = uStack_108;
  *(undefined4 *)((long)__this + 0x1b0) = uStack_f8;
  *(undefined8 *)((long)__this + 0x1a8) = uStack_100;
  *(undefined8 *)((long)__this + 0x1a0) = uStack_108;
  uStack_130 = *(undefined4 *)((long)__this + 0x19c);
  uStack_138 = *(undefined8 *)((long)__this + 0x194);
  uStack_140 = *puVar1;
  puVar2 = (undefined8 *)((long)__this + 0x1a0);
  iVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_140,0);
  if (iVar8 == -1) {
LAB_00c21f44:
    *(undefined4 *)((long)__this + 0x19c) = *(undefined4 *)((long)__this + 0x1b0);
    *(undefined8 *)((long)__this + 0x194) = *(undefined8 *)((long)__this + 0x1a8);
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
      lVar12 = *(long *)(_Main_TypeInfo + 0xb8);
      lVar13 = *(long *)(lVar12 + 0x40);
      if (lVar13 != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar12 = *(long *)(_Main_TypeInfo + 0xb8);
          lVar13 = *(long *)(lVar12 + 0x40);
          if (lVar13 == 0) goto LAB_00c22488;
        }
        if (*(int *)(lVar13 + 0x10) == 0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar12 = *(long *)(_Main_TypeInfo + 0xb8);
          }
          if (*(int *)(lVar12 + 0x2c) == 1) goto LAB_00c21f44;
        }
        if (*(char *)((long)__this + 0x414) != '\0') goto LAB_00c21f44;
      }
    }
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) == 0xc) {
    uStack_150 = *(undefined4 *)((long)__this + 0x1b0);
    uStack_158 = *(undefined8 *)((long)__this + 0x1a8);
    uStack_160 = *puVar2;
    iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_160,0);
    iVar8 = -0x80000000;
    if ((float)iVar7 * 0.25 != INFINITY) {
      iVar8 = (int)((float)iVar7 * 0.25);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_108,iVar8,0);
    uStack_e0 = CONCAT44(uStack_e0._4_4_,uStack_f8);
    uStack_e8 = uStack_100;
    uStack_f0 = uStack_108;
    *(undefined4 *)((long)__this + 0x19c) = uStack_f8;
    *(undefined8 *)((long)__this + 0x194) = uStack_100;
    *puVar1 = uStack_108;
  }
  uStack_170 = *(undefined4 *)((long)__this + 0x19c);
  uStack_178 = *(undefined8 *)((long)__this + 0x194);
  uStack_180 = *puVar1;
  iVar9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_180,0);
  uStack_198 = *(undefined8 *)((long)__this + 0x1a8);
  uStack_1a0 = *puVar2;
  uStack_190 = *(undefined4 *)((long)__this + 0x1b0);
  iVar10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_1a0,0);
  uStack_1b8 = *(undefined8 *)((long)__this + 0x1a8);
  uStack_1c0 = *puVar2;
  uStack_1b0 = *(undefined4 *)((long)__this + 0x1b0);
  iVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_1c0,0);
  iVar7 = -0x80000000;
  if ((float)iVar10 * 0.2 != INFINITY) {
    iVar7 = (int)((float)iVar10 * 0.2);
  }
  if (iVar9 <= iVar8) {
    iVar8 = iVar9;
  }
  if (iVar7 <= iVar9) {
    iVar7 = iVar8;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_108,iVar7,0);
  uStack_e0 = CONCAT44(uStack_e0._4_4_,uStack_f8);
  uStack_e8 = uStack_100;
  uStack_f0 = uStack_108;
  *(undefined4 *)((long)__this + 0x19c) = uStack_f8;
  *(undefined8 *)((long)__this + 0x194) = uStack_100;
  *puVar1 = uStack_108;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Main_TypeInfo + 0xb8) != 0) &&
     (lVar12 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar12 != 0)) {
    if (*(uint *)(lVar12 + 0x18) <= *(uint *)((long)__this + 0xa0)) {
LAB_00c2248c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar12 = *(long *)(lVar12 + (long)(int)*(uint *)((long)__this + 0xa0) * 8 + 0x20);
    if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x38), lVar12 != 0)) {
      *(float *)((long)__this + 0x188) =
           ((float)(int)uVar3 / (float)(*(int *)(lVar12 + 0x18) + -1)) * -0.5 + 1.0;
      uStack_74 = 0;
      lVar12 = *(long *)((long)__this + 0x350);
      if (lVar12 != 0) {
        do {
          if ((int)*(uint *)(lVar12 + 0x18) <= (int)uStack_74) {
            CarController__IODIAKMIMDD(__this);
            CarController__PCDOLLHPMJE(__this);
            CarController__OJOPPNIEGLL(__this);
            CarController__GFAPIMNKMLG(__this,uVar5);
            CarController__LOPCCLDAPAE(__this);
            CarController__OENKDDLNKCJ(__this,0);
            lVar12 = func_0x00a679a0(_string___TypeInfo,0x10);
            if (lVar12 != 0) {
              if (*(int *)(lVar12 + 0x18) != 0) {
                *(undefined8 *)(lVar12 + 0x20) = _Str_Car_Init__Engine__;
                uVar14 = System_Int32__ToString((long)&uStack_68 + 4,0);
                if ((1 < *(uint *)(lVar12 + 0x18)) &&
                   (*(undefined8 *)(lVar12 + 0x28) = uVar14, *(uint *)(lVar12 + 0x18) != 2)) {
                  *(undefined8 *)(lVar12 + 0x30) = _Str__lvl___;
                  uStack_80 = *(undefined8 *)((long)__this + 0x158);
                  uStack_88 = *(undefined8 *)((long)__this + 0x150);
                  uStack_90 = *(undefined8 *)((long)__this + 0x148);
                  uVar14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ToString(&uStack_90,0);
                  if ((3 < *(uint *)(lVar12 + 0x18)) &&
                     (*(undefined8 *)(lVar12 + 0x38) = uVar14, *(uint *)(lVar12 + 0x18) != 4)) {
                    *(undefined8 *)(lVar12 + 0x40) = _Str___Wheels__;
                    uVar14 = System_Int32__ToString((long)__this + 0x124,0);
                    if ((5 < *(uint *)(lVar12 + 0x18)) &&
                       (*(undefined8 *)(lVar12 + 0x48) = uVar14, *(uint *)(lVar12 + 0x18) != 6)) {
                      *(undefined8 *)(lVar12 + 0x50) = _Str__st_;
                      uVar14 = System_Single__ToString((long)__this + 0x178,0);
                      if ((7 < *(uint *)(lVar12 + 0x18)) &&
                         (*(undefined8 *)(lVar12 + 0x58) = uVar14, *(uint *)(lVar12 + 0x18) != 8)) {
                        *(undefined8 *)(lVar12 + 0x60) = _Str____Gun__;
                        uVar14 = System_Int32__ToString(&uStack_68,0);
                        if ((9 < *(uint *)(lVar12 + 0x18)) &&
                           (*(undefined8 *)(lVar12 + 0x68) = uVar14, *(uint *)(lVar12 + 0x18) != 10)
                           ) {
                          *(undefined8 *)(lVar12 + 0x70) = _Str__lvl___;
                          uStack_e8 = *(undefined8 *)((long)__this + 0x2f8);
                          uStack_f0 = *(undefined8 *)((long)__this + 0x2f0);
                          uStack_e0 = CONCAT44(uStack_e0._4_4_,*(undefined4 *)((long)__this + 0x300)
                                              );
                          uVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit
                                            (&uStack_f0,0);
                          uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
                          uVar14 = System_Int32__ToString(&uStack_70,0);
                          if ((0xb < *(uint *)(lVar12 + 0x18)) &&
                             (*(undefined8 *)(lVar12 + 0x78) = uVar14,
                             *(uint *)(lVar12 + 0x18) != 0xc)) {
                            *(undefined8 *)(lVar12 + 0x80) = _Str___Nitro__;
                            uVar14 = System_Int32__ToString((long)&uStack_70 + 4,0);
                            if ((0xd < *(uint *)(lVar12 + 0x18)) &&
                               (*(undefined8 *)(lVar12 + 0x88) = uVar14,
                               *(uint *)(lVar12 + 0x18) != 0xe)) {
                              *(undefined8 *)(lVar12 + 0x90) = _Str___HP__;
                              uStack_a0 = *(undefined4 *)((long)__this + 0x19c);
                              uStack_a8 = *(undefined8 *)((long)__this + 0x194);
                              uStack_b0 = *puVar1;
                              uVar14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString
                                                 (&uStack_b0,0);
                              if (0xf < *(uint *)(lVar12 + 0x18)) {
                                *(undefined8 *)(lVar12 + 0x98) = uVar14;
                                uVar14 = System_String__Concat(lVar12,0);
                                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                                  func_0x00a67a30(_Main_TypeInfo);
                                }
                                Main__GEMDEAMAGPG(uVar14,0,0);
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
          if (*(uint *)(lVar12 + 0x18) <= uStack_74) goto LAB_00c2248c;
          uVar14 = *(undefined8 *)(lVar12 + (long)(int)uStack_74 * 8 + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar11 = UnityEngine_Object__op_Inequality(uVar14,0,0);
          if ((uVar11 & 1) == 0) {
            uVar14 = System_Int32__ToString(&uStack_74,0);
            CIDKMFLFJEJ = (void *)System_String__Concat(_Str_Problem_with_armor__,uVar14,0);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_Main_TypeInfo);
            }
            Main__EEKNCFLMGDP(CIDKMFLFJEJ);
          }
          else {
            lVar12 = *(long *)((long)__this + 0x350);
            if (lVar12 == 0) break;
            if (*(uint *)(lVar12 + 0x18) <= uStack_74) goto LAB_00c2248c;
            lVar12 = *(long *)(lVar12 + (long)(int)uStack_74 * 8 + 0x20);
            if (lVar12 == 0) break;
            UnityEngine_GameObject__SetActive(lVar12,(int)(uStack_74 + 1) <= (int)uVar3,0);
          }
          uStack_74 = uStack_74 + 1;
          lVar12 = *(long *)((long)__this + 0x350);
        } while (lVar12 != 0);
      }
    }
  }
LAB_00c22488:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private static void .cctor() { }   @0xb2502c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController___cctor(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  
  if ((bRam000000000191702f & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    bRam000000000191702f = 1;
  }
  lVar2 = _CarController_TypeInfo;
  lVar3 = *(long *)(_CarController_TypeInfo + 0xb8);
  *(undefined8 *)(lVar3 + 0xc) = 0xbf80000000000002;
  *(undefined8 *)(lVar3 + 0x14) = 10;
  if (cRam0000000001916789 == '\0') {
    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
    cRam0000000001916789 = '\x01';
    lVar3 = *(long *)(_CarController_TypeInfo + 0xb8);
    lVar2 = _CarController_TypeInfo;
  }
  lVar1 = _UnityEngine_Vector3_TypeInfo;
  uVar5 = *(undefined4 *)(*(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 1);
  *(undefined8 *)(lVar3 + 0x1c) = **(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
  *(undefined4 *)(lVar3 + 0x24) = uVar5;
  puVar4 = *(undefined8 **)(lVar1 + 0xb8);
  lVar3 = *(long *)(lVar2 + 0xb8);
  uVar5 = *(undefined4 *)(puVar4 + 1);
  *(undefined8 *)(lVar3 + 0x28) = *puVar4;
  *(undefined4 *)(lVar3 + 0x30) = uVar5;
  lVar3 = *(long *)(lVar2 + 0xb8);
  *(undefined1 *)(lVar3 + 0x34) = 0;
  puVar4 = *(undefined8 **)(lVar1 + 0xb8);
  uVar5 = *(undefined4 *)(puVar4 + 1);
  *(undefined8 *)(lVar3 + 0x38) = *puVar4;
  *(undefined4 *)(lVar3 + 0x40) = uVar5;
  lVar2 = *(long *)(lVar2 + 0xb8);
  *(undefined2 *)(lVar2 + 0x44) = 0;
  *(undefined1 *)(lVar2 + 0x46) = 0;
  *(undefined4 *)(lVar2 + 0x48) = 0;
  return;
}


// ==== private void DBHKFBLNNPF() { }   @0xb26360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__DBHKFBLNNPF(void *__this)

{
  int iVar1;
  bool bVar2;
  void *FJBLHMNOPEP;
  long lVar3;
  undefined8 *puVar4;
  void *__this_00;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uVar8;
  float in_s2;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((bRam0000000001917033 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_Too_Slow_2);
    func_0x00a67900(&Str_Too_Slow_1);
    func_0x00a67900(&Str_TOO_SLOW);
    bRam0000000001917033 = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x34) == '\0') {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if (lVar3 == 0) goto LAB_00c267b8;
  }
  if (*(int *)(lVar3 + 0x10) < 1) {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) != '\0') {
    return;
  }
  fVar10 = *(float *)((long)__this + 0x3e4);
  if (fVar10 == -1.0) {
    return;
  }
  if (fVar10 == 0.0) {
    fVar10 = (float)UnityEngine_Time__get_time(0);
    fVar10 = fVar10 + 1.0;
    *(float *)((long)__this + 0x3e4) = fVar10;
    *(undefined4 *)((long)__this + 1000) = 0;
  }
  fVar5 = (float)UnityEngine_Time__get_time(0);
  if (fVar10 <= fVar5) {
    *(undefined4 *)((long)__this + 0x3e4) = 0;
    if (cRam0000000001916789 == '\0') {
      func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
      cRam0000000001916789 = '\x01';
    }
    uVar6 = *(undefined4 *)(*(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 1);
    *(undefined8 *)((long)__this + 0x3ec) = **(undefined8 **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
    *(undefined4 *)((long)__this + 0x3f4) = uVar6;
    fVar10 = 1.5;
    if (1.5 <= *(float *)((long)__this + 1000)) {
      *(undefined4 *)((long)__this + 0x3f8) = 0;
    }
    else {
      iVar1 = *(int *)((long)__this + 0x3f8);
      *(int *)((long)__this + 0x3f8) = iVar1 + 1;
      if (iVar1 == 6) {
        *(undefined4 *)((long)__this + 0x3e4) = 0xbf800000;
        fVar10 = 1.5;
        uVar11 = CarController__FIOKLNLIDNH(__this,0);
        UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar11,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        puVar4 = (undefined8 *)&Str_Too_Slow_2;
      }
      else {
        if (iVar1 != 3) goto LAB_00c2677c;
        fVar10 = 1.5;
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          fVar10 = 1.5;
          func_0x00a67a30();
        }
        SoundScript__FIGKLLNAMLG(*(void **)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xe0));
        __this_00 = *(void **)((long)__this + 0x30);
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
           (FJBLHMNOPEP = (void *)Translate__JJJNIPAKLJF
                                            (**(long **)(_Translate_TypeInfo + 0xb8),_Str_TOO_SLOW,0
                                            ), __this_00 == (void *)0x0)) goto LAB_00c267b8;
        GUIGameplay__HNKHJLDJMHB(__this_00,FJBLHMNOPEP,2,false,true);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        puVar4 = (undefined8 *)&Str_Too_Slow_1;
      }
      Main__GEMDEAMAGPG(*puVar4,0,0);
    }
  }
  else {
    if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c267b8;
    UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
    if (*(float *)((long)__this + 0x40c) + -0.3 <= in_s2) {
      bVar2 = false;
    }
    else {
      bVar2 = *(float *)((long)__this + 0x3cc) < 100.0;
    }
    fVar5 = *(float *)((long)__this + 0x3ec);
    uVar11 = *(undefined8 *)((long)__this + 0x3f0);
    if (cRam0000000001916789 == '\0') {
      func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
      cRam0000000001916789 = '\x01';
    }
    uVar8 = *(undefined8 *)(*(float **)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 1);
    fVar9 = 9.9999994e-11;
    fVar5 = fVar5 - **(float **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
    fVar7 = (float)uVar11 - (float)uVar8;
    fVar10 = (float)((ulong)uVar11 >> 0x20) - (float)((ulong)uVar8 >> 0x20);
    fVar10 = fVar10 * fVar10;
    in_s2 = fVar9;
    if (!bVar2 && 9.9999994e-11 <= fVar10 + fVar5 * fVar5 + fVar7 * fVar7) {
      if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c267b8;
      fVar12 = *(float *)((long)__this + 1000);
      fVar5 = (float)UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
      fVar13 = *(float *)((long)__this + 0x3ec);
      fVar7 = *(float *)((long)__this + 0x3f0);
      fVar14 = *(float *)((long)__this + 0x3f4);
      in_s2 = fVar9;
      if (cRam0000000001916aa3 == '\0') {
        func_0x00a67900(&System_Math_TypeInfo);
        cRam0000000001916aa3 = '\x01';
      }
      fVar5 = fVar5 - fVar13;
      fVar7 = fVar10 - fVar7;
      fVar9 = fVar9 - fVar14;
      if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      fVar10 = fVar9 * fVar9;
      *(float *)((long)__this + 1000) = fVar12 + SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar10);
    }
  }
LAB_00c2677c:
  if (*(long *)((long)__this + 0x38) != 0) {
    uVar6 = UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
    *(undefined4 *)((long)__this + 0x3ec) = uVar6;
    *(float *)((long)__this + 0x3f0) = fVar10;
    *(float *)((long)__this + 0x3f4) = in_s2;
    return;
  }
LAB_00c267b8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void KIGCLEFNGIH(ref ObscuredInt ALLBGCHDGNC, string DGGEHNEECCD, int CHNHFDOHLKB, int FPMAPKMIPKO) { }   @0xb27078

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__KIGCLEFNGIH
               (void *__this,void *ALLBGCHDGNC,void *DGGEHNEECCD,int CHNHFDOHLKB,int FPMAPKMIPKO)

{
  int iVar1;
  undefined8 uVar2;
  void *CIDKMFLFJEJ;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam0000000001917036 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str___);
    func_0x00a67900(&Str_Cheat_);
    bRam0000000001917036 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_70 = *(undefined4 *)((long)ALLBGCHDGNC + 0x10);
  uStack_78 = *(undefined8 *)((long)ALLBGCHDGNC + 8);
  uStack_80 = *(undefined8 *)ALLBGCHDGNC;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_80,0);
  if (CHNHFDOHLKB <= iVar1) {
    uStack_90 = *(undefined4 *)((long)ALLBGCHDGNC + 0x10);
    uStack_98 = *(undefined8 *)((long)ALLBGCHDGNC + 8);
    uStack_a0 = *(undefined8 *)ALLBGCHDGNC;
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_a0,0);
    if (iVar1 <= FPMAPKMIPKO) {
      return;
    }
  }
  uStack_50 = *(undefined4 *)((long)ALLBGCHDGNC + 0x10);
  uStack_58 = *(undefined8 *)((long)ALLBGCHDGNC + 8);
  uStack_60 = *(undefined8 *)ALLBGCHDGNC;
  uVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(&uStack_60,0);
  CIDKMFLFJEJ = (void *)System_String__Concat(_Str_Cheat_,DGGEHNEECCD,_Str___,uVar2,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__EEKNCFLMGDP(CIDKMFLFJEJ);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_d8,CHNHFDOHLKB,0);
  *(undefined4 *)((long)ALLBGCHDGNC + 0x10) = uStack_c8;
  *(undefined8 *)((long)ALLBGCHDGNC + 8) = uStack_d0;
  *(undefined8 *)ALLBGCHDGNC = uStack_d8;
  return;
}


// ==== public bool CDEJPMCFIHK() { }   @0xb2442c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool CarController__CDEJPMCFIHK(void *__this)

{
  byte bVar1;
  long lVar2;
  
  if ((bRam000000000191703a & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam000000000191703a = 1;
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
      if (lVar2 == 0) goto LAB_00c24514;
    }
    if (*(int *)(lVar2 + 0x10) == -1) {
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
LAB_00c24514:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      bVar1 = DAFNMLEKHAD__GDGPFCLJEIL(lVar2,0);
      bVar1 = bVar1 ^ 1;
    }
    else {
      bVar1 = 0;
    }
  }
  return (bool)(bVar1 & 1);
}


// ==== public float AGKGCILIANE() { }   @0xb1d160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float CarController__AGKGCILIANE(void *__this)

{
  float fVar1;
  float in_s1;
  float in_s2;
  
  if (*(long *)((long)__this + 0x40) != 0) {
    fVar1 = (float)UnityEngine_Rigidbody__get_velocity(*(long *)((long)__this + 0x40),0);
    if (cRam0000000001916aa3 == '\0') {
      func_0x00a67900(&System_Math_TypeInfo);
      cRam0000000001916aa3 = '\x01';
    }
    if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    return SQRT(in_s2 * in_s2 + fVar1 * fVar1 + in_s1 * in_s1) * 3.6;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void FIGLBMANNKF() { }   @0xb27a30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__FIGLBMANNKF(void *__this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  undefined4 uStack_14;
  
  if ((bRam0000000001917042 & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_x);
    func_0x00a67900(&Str_Screenshot_);
    func_0x00a67900(&Str___yyyy_MM_dd_hh_mm_ss);
    func_0x00a67900(&Str__png);
    bRam0000000001917042 = 1;
  }
  uStack_28 = 0;
  lVar1 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)(lVar1 + 0x18) != 0) {
    *(undefined8 *)(lVar1 + 0x20) = _Str_Screenshot_;
    uStack_14 = UnityEngine_Screen__get_width(0);
    uVar2 = System_Int32__ToString(&uStack_14,0);
    if ((1 < *(uint *)(lVar1 + 0x18)) &&
       (*(undefined8 *)(lVar1 + 0x28) = uVar2, *(uint *)(lVar1 + 0x18) != 2)) {
      *(undefined8 *)(lVar1 + 0x30) = _Str_x;
      uStack_14 = UnityEngine_Screen__get_height(0);
      uVar2 = System_Int32__ToString(&uStack_14,0);
      if (3 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x38) = uVar2;
        if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uStack_28 = System_DateTime__get_Now(0);
        uVar2 = System_DateTime__ToString(&uStack_28,_Str___yyyy_MM_dd_hh_mm_ss,0);
        if ((4 < *(uint *)(lVar1 + 0x18)) &&
           (*(undefined8 *)(lVar1 + 0x40) = uVar2, *(uint *)(lVar1 + 0x18) != 5)) {
          *(undefined8 *)(lVar1 + 0x48) = _Str__png;
          uVar2 = System_String__Concat(lVar1,0);
          UnityEngine_ScreenCapture__CaptureScreenshot(uVar2,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


// ==== public void EKOHIKFFBFC(int IKOBFEOAKCI, bool FLKHNKPAHGK) { }   @0xb28cdc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarController__EKOHIKFFBFC(void *__this,int IKOBFEOAKCI,bool FLKHNKPAHGK)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  void *__this_00;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  if ((bRam0000000001917047 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    bRam0000000001917047 = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) != '\0') {
    return;
  }
  puVar1 = (undefined8 *)((long)__this + 0x18c);
  uStack_70 = *(undefined4 *)((long)__this + 0x19c);
  uStack_78 = *(undefined8 *)((long)__this + 0x194);
  uStack_80 = *puVar1;
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_80,0);
  if (iVar2 < 1) {
    return;
  }
  uStack_90 = *(undefined4 *)((long)__this + 0x19c);
  uStack_98 = *(undefined8 *)((long)__this + 0x194);
  uStack_a0 = *puVar1;
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_a0,0);
  iVar2 = iVar2 - IKOBFEOAKCI;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_d8,iVar2,0);
  uStack_b0 = uStack_c8;
  uStack_b8 = uStack_d0;
  uStack_c0 = uStack_d8;
  *(undefined4 *)((long)__this + 0x19c) = uStack_c8;
  *(undefined8 *)((long)__this + 0x194) = uStack_d0;
  *puVar1 = uStack_d8;
  if (IKOBFEOAKCI < 2) {
    fVar7 = 0.15;
LAB_00c28e24:
    lVar4 = *(long *)((long)__this + 0x30);
    if (lVar4 == 0) goto LAB_00c28f80;
    if (IKOBFEOAKCI < 10) {
      if ((*(long *)(lVar4 + 0x150) == 0) ||
         (lVar4 = *(long *)(*(long *)(lVar4 + 0x150) + 0x28), lVar4 == 0)) goto LAB_00c28f80;
      UnityEngine_UI_Text__set_fontSize(lVar4,0x40,0);
      uVar12 = 0x3f800000;
      uVar6 = 0x40000000;
      uVar8 = 0x3f800000;
      uVar9 = 0x3f800000;
      uVar10 = 0x3f800000;
      uVar11 = 0x3f800000;
    }
    else {
      if ((*(long *)(lVar4 + 0x150) == 0) ||
         (lVar3 = *(long *)(*(long *)(lVar4 + 0x150) + 0x28), lVar3 == 0)) goto LAB_00c28f80;
      uVar11 = *(undefined4 *)(lVar4 + 0x168);
      uVar10 = *(undefined4 *)(lVar4 + 0x16c);
      uVar9 = *(undefined4 *)(lVar4 + 0x170);
      uVar8 = *(undefined4 *)(lVar4 + 0x174);
      UnityEngine_UI_Text__set_fontSize(lVar3,0x4a,0);
      uVar12 = 0x3fc00000;
      uVar6 = 0x40800000;
    }
  }
  else {
    fVar5 = (float)IKOBFEOAKCI / 30.0;
    fVar7 = fVar5;
    if (1.0 < fVar5) {
      fVar7 = 1.0;
    }
    fVar7 = fVar7 * 0.25 + 0.25;
    if (fVar5 < 0.0) {
      fVar7 = 0.25;
    }
    if (IKOBFEOAKCI < 0x19) goto LAB_00c28e24;
    lVar4 = *(long *)((long)__this + 0x30);
    if (((lVar4 == 0) || (*(long *)(lVar4 + 0x150) == 0)) ||
       (lVar3 = *(long *)(*(long *)(lVar4 + 0x150) + 0x28), lVar3 == 0)) goto LAB_00c28f80;
    uVar11 = *(undefined4 *)(lVar4 + 0x158);
    uVar10 = *(undefined4 *)(lVar4 + 0x15c);
    uVar9 = *(undefined4 *)(lVar4 + 0x160);
    uVar8 = *(undefined4 *)(lVar4 + 0x164);
    UnityEngine_UI_Text__set_fontSize(lVar3,0x54,0);
    uVar12 = 0x40000000;
    uVar6 = 0x40c00000;
  }
  CarController__CHPDPBCCBJP(uVar6,__this);
  CarController__OJOPPNIEGLL(__this);
  if ((*(long *)((long)__this + 0x30) != 0) &&
     (__this_00 = *(void **)(*(long *)((long)__this + 0x30) + 0x148), __this_00 != (void *)0x0)) {
    GUICoins__ICMOCEHIFOI(__this_00);
    if ((*(long *)((long)__this + 0x30) != 0) &&
       (lVar4 = *(long *)(*(long *)((long)__this + 0x30) + 0x150), lVar4 != 0)) {
      GUICoins__ICMOCEHIFOI(uVar11,uVar10,uVar9,uVar8,uVar12,lVar4,-IKOBFEOAKCI,0);
      CarController__GCHFPNMJHCA(fVar7,__this,FLKHNKPAHGK);
      uStack_e0 = *(undefined4 *)((long)__this + 0x19c);
      uStack_e8 = *(undefined8 *)((long)__this + 0x194);
      uStack_f0 = *puVar1;
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_f0,0);
      if ((iVar2 < 1) && (*(char *)((long)__this + 0x3c8) == '\0')) {
        CarController__AEFMMNHIGLH(__this);
      }
      return;
    }
  }
LAB_00c28f80:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



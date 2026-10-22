// ==== public void HBLIIBFNKIE(float HCILEAABENL) { }   @0xb43be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarControllerBot__HBLIIBFNKIE(void *__this,float HCILEAABENL)

{
  uint uVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  if ((bRam0000000001917139 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001917139 = 1;
  }
  uStack_a0 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_f8 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_100 = 0;
  fVar9 = (float)UnityEngine_Time__get_fixedDeltaTime(0);
  fVar17 = HCILEAABENL;
  if (HCILEAABENL < 0.0) {
    *(float *)((long)__this + 0x80) = *(float *)((long)__this + 0x7c) * 0.5;
    fVar17 = 0.0;
  }
  lVar6 = *(long *)((long)__this + 0xc0);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    fVar10 = fVar9 * 3.0;
    fVar22 = fVar10;
    if (1.0 < fVar10) {
      fVar22 = 1.0;
    }
    fVar26 = 0.0;
    if (fVar10 < 0.0) {
      fVar22 = 0.0;
    }
    if (0 < (int)uVar1) {
      uVar7 = 0;
      fVar26 = 0.0;
      do {
        if (uVar1 <= uVar7) goto LAB_00c44010;
        lVar8 = *(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
        if ((lVar8 == 0) || (lVar4 = *(long *)(lVar8 + 0x20), lVar4 == 0)) goto LAB_00c4400c;
        UnityEngine_WheelCollider__GetWorldPose(lVar4,&uStack_100,&uStack_f0,0);
        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_00c4400c;
        UnityEngine_Transform__set_position
                  (uStack_100 & 0xffffffff,uStack_100._4_4_,uStack_f8,*(long *)(lVar8 + 0x10),0);
        fVar18 = (float)(uStack_f0 >> 0x20);
        fVar19 = (float)uStack_e8;
        fVar10 = (float)UnityEngine_Quaternion__Internal_ToEulerRad
                                  (uStack_f0 & 0xffffffff,uStack_f0 >> 0x20,uStack_e8 & 0xffffffff,
                                   uStack_e8._4_4_,0);
        fVar18 = fVar18 * 57.29578;
        uVar24 = (ulong)(uint)(fVar19 * 57.29578);
        fVar10 = (float)UnityEngine_Quaternion__Internal_MakePositive(fVar10 * 57.29578,0);
        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_00c4400c;
        uVar25 = uVar24;
        fVar19 = fVar18;
        UnityEngine_Transform__get_localPosition(*(long *)(lVar8 + 0x10),0);
        if (0.0 < (float)uVar25) {
          fVar18 = fVar18 + *(float *)((long)__this + 0x88);
        }
        lVar5 = *(long *)(lVar8 + 0x10);
        if (*(char *)((long)__this + 0xa9) == '\0') {
LAB_00c43d94:
          fVar19 = fVar18 * 0.017453292;
          uVar25 = (ulong)(uint)((float)uVar24 * 0.017453292);
          UnityEngine_Quaternion__Internal_FromEulerRad(fVar10 * 0.017453292,fVar19,0);
          if (lVar5 == 0) goto LAB_00c4400c;
          UnityEngine_Transform__set_rotation(lVar5,0);
        }
        else {
          if (lVar5 == 0) goto LAB_00c4400c;
          UnityEngine_Transform__get_position(lVar5,0);
          if (1.0 < fVar19) {
            lVar5 = *(long *)(lVar8 + 0x10);
            goto LAB_00c43d94;
          }
        }
        fVar10 = (float)UnityEngine_WheelCollider__get_rpm(lVar4,0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
          if (*(long *)(lVar8 + 0x10) == 0) goto LAB_00c4400c;
          uVar16 = UnityEngine_Transform__get_localPosition(*(long *)(lVar8 + 0x10),0);
          uVar24 = uVar25;
          fVar18 = fVar19;
          uVar2 = UnityEngine_WheelCollider__GetGroundHit(lVar4,&uStack_e0,0);
          fVar27 = (float)uVar24;
          if ((uVar2 & 1) == 0) {
            fVar18 = *(float *)((long)__this + 0x6c);
            uVar3 = 0;
            *(undefined1 *)(lVar8 + 0x45) = 0;
            fVar19 = fVar19 + fVar22 * ((*(float *)(lVar8 + 0x34) - fVar18) - fVar19);
          }
          else {
            if (*(long *)(lVar8 + 0x10) == 0) goto LAB_00c4400c;
            fVar11 = (float)UnityEngine_Transform__get_position(*(long *)(lVar8 + 0x10),0);
            fVar20 = fVar18;
            fVar21 = fVar27;
            fVar12 = (float)UnityEngine_WheelHit__get_point(&uStack_e0,0);
            if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c4400c;
            fVar27 = fVar27 - fVar21;
            fVar18 = fVar18 - fVar20;
            fVar13 = (float)UnityEngine_Transform__get_up(*(long *)((long)__this + 0x20),0);
            fVar14 = (float)UnityEngine_WheelCollider__get_radius(lVar4,0);
            uVar25 = uVar25 & 0xffffffff;
            uVar16 = uVar16 & 0xffffffff;
            fVar19 = fVar19 - ((fVar27 * fVar21 + (fVar11 - fVar12) * fVar13 + fVar18 * fVar20) -
                              fVar14);
            uVar3 = 1;
          }
          *(undefined1 *)(lVar8 + 0x44) = uVar3;
          if (*(long *)(lVar8 + 0x10) == 0) goto LAB_00c4400c;
          UnityEngine_Transform__set_localPosition(uVar16,fVar19,uVar25,*(long *)(lVar8 + 0x10),0);
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar7 = uVar7 + 1;
        fVar26 = fVar26 + fVar10;
      } while ((int)uVar7 < (int)uVar1);
      fVar26 = fVar26 * 10.0;
    }
    fVar26 = ABS(fVar26);
    lVar6 = *(long *)((long)__this + 0xc0);
    fVar22 = *(float *)((long)__this + 0xa4) + fVar9 * *(float *)((long)__this + 0x9c);
    fVar9 = *(float *)((long)__this + 0xa4) - fVar9 * *(float *)((long)__this + 0xa0);
    if (fVar26 <= fVar22) {
      fVar22 = fVar26;
    }
    if (fVar26 < fVar9) {
      fVar22 = fVar9;
    }
    *(float *)((long)__this + 0xa4) = fVar22;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar1) {
        fVar9 = *(float *)((long)__this + 0x7c);
        iVar23 = *(int *)((long)__this + 0x68);
        uVar7 = 0;
        do {
          if (uVar1 <= uVar7) {
LAB_00c44010:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar8 = *(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
          if ((lVar8 == 0) || (*(long *)(lVar8 + 0x20) == 0)) goto LAB_00c4400c;
          UnityEngine_WheelCollider__set_motorTorque
                    (fVar17 * ((fVar17 * ((fVar9 * 3040.0) / 5000.0)) / (float)iVar23),
                     *(long *)(lVar8 + 0x20),0);
          uVar15 = 0;
          if (HCILEAABENL < 0.0) {
            uVar15 = *(undefined4 *)((long)__this + 0x80);
          }
          if (*(long *)(lVar8 + 0x20) == 0) goto LAB_00c4400c;
          UnityEngine_WheelCollider__set_brakeTorque(uVar15,*(long *)(lVar8 + 0x20),0);
          uVar1 = *(uint *)(lVar6 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar1);
      }
      return;
    }
  }
LAB_00c4400c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private CarControllerBot.OMKEEHNKHPA DCPJJNIFCBM(Transform DDHKDIEBPDH, GNOCGPDGKAE PLPKOBBAAJM) { }   @0xb43438

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * CarControllerBot__DCPJJNIFCBM(void *__this,void *DDHKDIEBPDH,int PLPKOBBAAJM)

{
  undefined4 uVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float in_s1;
  float fVar11;
  float in_s2;
  float fVar12;
  float fVar13;
  undefined8 uStack_d8;
  code *pcStack_d0;
  void *pvStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  if ((bRam000000000191713e & 1) == 0) {
    func_0x00a67900(&UnityEngine_GameObject_TypeInfo);
    func_0x00a67900(&CarControllerBot_OMKEEHNKHPA_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&System_Type_TypeInfo);
    func_0x00a67900(&UnityEngine_WheelCollider_var);
    func_0x00a67900(&UnityEngine_WheelCollider_TypeInfo);
    func_0x00a67900(&Str_car);
    func_0x00a67900(&Str_wheel);
    func_0x00a67900(&Str_WheelCollider);
    bRam000000000191713e = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Equality(DDHKDIEBPDH,0,0);
  if ((uVar2 & 1) == 0) {
    pvVar3 = (void *)func_0x00a67b44(_CarControllerBot_OMKEEHNKHPA_TypeInfo);
    System_Object___ctor(pvVar3,0);
    if (DDHKDIEBPDH != (void *)0x0) {
      lVar4 = UnityEngine_Component__get_gameObject(DDHKDIEBPDH,0);
      uVar1 = UnityEngine_LayerMask__NameToLayer(_Str_car,0);
      if (lVar4 != 0) {
        UnityEngine_GameObject__set_layer(lVar4,uVar1,0);
        uVar5 = UnityEngine_Object__get_name(DDHKDIEBPDH,0);
        uVar5 = System_String__Concat(_Str_WheelCollider,uVar5,0);
        lVar4 = func_0x00a67b44(_UnityEngine_GameObject_TypeInfo);
        UnityEngine_GameObject___ctor(lVar4,uVar5,0);
        uVar1 = UnityEngine_LayerMask__NameToLayer(_Str_wheel,0);
        if (lVar4 != 0) {
          UnityEngine_GameObject__set_layer(lVar4,uVar1,0);
          lVar6 = UnityEngine_GameObject__get_transform(lVar4,0);
          if (lVar6 != 0) {
            UnityEngine_Transform__SetParent(lVar6,*(undefined8 *)((long)__this + 0x20),0);
            lVar6 = UnityEngine_GameObject__get_transform(lVar4,0);
            fVar9 = (float)UnityEngine_Transform__get_position(DDHKDIEBPDH,0);
            if ((*(long *)((long)__this + 0x20) != 0) &&
               (fVar11 = in_s1, fVar12 = in_s2,
               fVar10 = (float)UnityEngine_Transform__get_up(*(long *)((long)__this + 0x20),0),
               lVar6 != 0)) {
              fVar13 = *(float *)((long)__this + 0x6c);
              in_s2 = in_s2 + fVar12 * fVar13 * 0.5;
              in_s1 = in_s1 + fVar11 * fVar13 * 0.5;
              UnityEngine_Transform__set_position(fVar9 + fVar10 * fVar13 * 0.5,lVar6,0);
              uVar5 = _UnityEngine_WheelCollider_var;
              if (*(int *)(_System_Type_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
              plVar7 = (long *)UnityEngine_GameObject__AddComponent(lVar4,uVar5,0);
              if (plVar7 != (long *)0x0) {
                if ((*(byte *)(*plVar7 + 0x130) <
                     *(byte *)(_UnityEngine_WheelCollider_TypeInfo + 0x130)) ||
                   (*(long *)(*(long *)(*plVar7 + 200) +
                              (ulong)*(byte *)(_UnityEngine_WheelCollider_TypeInfo + 0x130) * 8 + -8
                             ) != _UnityEngine_WheelCollider_TypeInfo)) {
                  func_0x00a67eec(plVar7);
                  goto LAB_00c437e0;
                }
                UnityEngine_WheelCollider__set_motorTorque(0x3727c5ac,plVar7,0);
                UnityEngine_WheelCollider__set_wheelDampingRate(0x40a00000,plVar7,0);
                if (pvVar3 != (void *)0x0) {
                  *(void **)((long)pvVar3 + 0x10) = DDHKDIEBPDH;
                  *(long *)((long)pvVar3 + 0x18) = lVar4;
                  *(long **)((long)pvVar3 + 0x20) = plVar7;
                  uVar5 = UnityEngine_Component__get_transform(plVar7,0);
                  *(undefined8 *)((long)pvVar3 + 0x28) = uVar5;
                  lVar4 = UnityEngine_GameObject__get_transform(lVar4,0);
                  if (lVar4 != 0) {
                    uVar1 = UnityEngine_Transform__get_localPosition(lVar4,0);
                    *(undefined4 *)((long)pvVar3 + 0x30) = uVar1;
                    *(float *)((long)pvVar3 + 0x34) = in_s1;
                    *(float *)((long)pvVar3 + 0x38) = in_s2;
                    *(int *)((long)pvVar3 + 0x40) = PLPKOBBAAJM;
                    UnityEngine_WheelCollider__get_forwardFriction(&uStack_98,plVar7,0);
                    uStack_78 = uStack_90;
                    uStack_80 = uStack_98;
                    uStack_70 = uStack_88;
                    UnityEngine_WheelFrictionCurve__set_stiffness
                              (*(undefined4 *)((long)__this + 0x8c),&uStack_80,0);
                    uStack_a8 = uStack_78;
                    uStack_b0 = uStack_80;
                    uStack_a0 = uStack_70;
                    UnityEngine_WheelCollider__set_forwardFriction(plVar7,&uStack_b0,0);
                    return pvVar3;
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
LAB_00c437e0:
  func_0x00a67914(&System_Exception_TypeInfo);
  uVar5 = func_0x00a67b44();
  uVar8 = func_0x00a67914(&Str_wheel_not_connected_to_script_);
  System_Exception___ctor(uVar5,uVar8,0);
  uVar8 = func_0x00a67914(&Method_CarControllerBot_DCPJJNIFCBM__);
  lVar4 = func_0x00a67a20(uVar5,uVar8);
  pcStack_d0 = CarControllerBot__Start;
  pvStack_c8 = DDHKDIEBPDH;
  uStack_c0 = (ulong)(uint)PLPKOBBAAJM;
  uStack_b8 = uVar5;
  if ((bRam0000000001917137 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    bRam0000000001917137 = 1;
  }
  uVar5 = UnityEngine_Component__get_transform(lVar4,0);
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
            (lVar4,&uStack_d8,_Method_UnityEngine_Component_GetComponent_Rigidbody___);
  *(undefined8 *)(lVar4 + 0x28) = uStack_d8;
  CarControllerBot__PPIBCCLIDMH(lVar4);
  CarControllerBot__LOPCCLDAPAE();
  pvVar3 = (void *)CarControllerBot__KIDOGHJAMDM();
  return pvVar3;
}



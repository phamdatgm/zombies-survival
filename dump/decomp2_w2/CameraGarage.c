// ==== private static void EFCAPPJJBNE() { }   @0xb3e40c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__EFCAPPJJBNE(void)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  if ((bRam000000000191711d & 1) == 0) {
    func_0x00a67900(&CameraGarage_TypeInfo);
    func_0x00a67900(&System_Math_TypeInfo);
    bRam000000000191711d = 1;
  }
  if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar2 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
  lVar3 = *plVar2;
  if (lVar3 == 0) {
LAB_00c3e54c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (2 < *(uint *)(lVar3 + 0x18)) {
    fVar5 = *(float *)((long)plVar2 + 0x14);
    iVar4 = *(int *)(lVar3 + 0x28);
    fVar6 = fVar5;
    if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_System_Math_TypeInfo);
      plVar2 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
      lVar3 = *plVar2;
      if (lVar3 == 0) goto LAB_00c3e54c;
      fVar6 = *(float *)((long)plVar2 + 0x14);
    }
    if (3 < *(uint *)(lVar3 + 0x18)) {
      iVar7 = *(int *)(lVar3 + 0x2c);
      if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        plVar2 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
        lVar3 = *plVar2;
        if (lVar3 == 0) goto LAB_00c3e54c;
      }
      if (ABS(fVar6 - (float)iVar7) <= ABS(fVar5 - (float)iVar4)) {
        if (3 < *(uint *)(lVar3 + 0x18)) {
          piVar1 = (int *)(lVar3 + 0x2c);
          goto LAB_00c3e528;
        }
      }
      else if (2 < *(uint *)(lVar3 + 0x18)) {
        piVar1 = (int *)(lVar3 + 0x28);
LAB_00c3e528:
        iVar4 = *piVar1;
        *(float *)(plVar2 + 2) = (float)iVar4;
        *(float *)((long)plVar2 + 0x14) = (float)iVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


// ==== private void Update() { }   @0xb3e708

/* WARNING: Removing unreachable block (ram,0x01493884) */
/* WARNING: Removing unreachable block (ram,0x014938e4) */
/* WARNING: Removing unreachable block (ram,0x01493904) */
/* WARNING: Removing unreachable block (ram,0x01493910) */
/* WARNING: Removing unreachable block (ram,0x01493924) */
/* WARNING: Removing unreachable block (ram,0x01493954) */
/* WARNING: Removing unreachable block (ram,0x01493938) */
/* WARNING: Removing unreachable block (ram,0x0149394c) */
/* WARNING: Removing unreachable block (ram,0x01493958) */
/* WARNING: Removing unreachable block (ram,0x01493964) */
/* WARNING: Removing unreachable block (ram,0x01493968) */
/* WARNING: Removing unreachable block (ram,0x0149398c) */
/* WARNING: Removing unreachable block (ram,0x01493998) */
/* WARNING: Removing unreachable block (ram,0x014939ac) */
/* WARNING: Removing unreachable block (ram,0x01493974) */
/* WARNING: Removing unreachable block (ram,0x014939cc) */
/* WARNING: Removing unreachable block (ram,0x01493978) */
/* WARNING: Removing unreachable block (ram,0x014939c0) */
/* WARNING: Removing unreachable block (ram,0x00c3ed0c) */
/* WARNING: Removing unreachable block (ram,0x00c3efa0) */
/* WARNING: Removing unreachable block (ram,0x00c3eb58) */
/* WARNING: Removing unreachable block (ram,0x00c3edc0) */
/* WARNING: Removing unreachable block (ram,0x0149383c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__Update(void *__this)

{
  void *pvVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  void *pvVar10;
  float fVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if ((bRam000000000191711f & 1) == 0) {
    func_0x00a67900(&CameraGarage_TypeInfo);
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&System_Math_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Mouse_Y);
    func_0x00a67900(&Str_Mouse_X);
    bRam000000000191711f = 1;
  }
  uVar9 = *(undefined8 *)((long)__this + 0x30);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(void **)((long)__this + 0x30) == (void *)0x0) goto LAB_00c3f014;
    CatGarage__DPMNCABIAJA(*(void **)((long)__this + 0x30));
  }
  pvVar10 = __this;
  if (*(char *)((long)__this + 0x61) == '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
    pvVar1 = __this;
    if ((uVar6 & 1) == 0) {
      pvVar1 = (void *)0x0;
    }
    if ((uVar6 & 1) == 0) {
joined_r0x00c3e978:
      bVar3 = 0;
    }
    else {
      uVar9 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
      goto LAB_00c3f014;
      uVar12 = *(undefined8 *)(lVar7 + 0x60);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Equality(uVar9,uVar12,0);
      if ((uVar6 & 1) == 0) {
        uVar9 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
        goto LAB_00c3f014;
        uVar12 = *(undefined8 *)(lVar7 + 0x78);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Equality(uVar9,uVar12,0);
        pvVar10 = pvVar1;
        if ((uVar6 & 1) == 0) goto joined_r0x00c3e978;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0)) ||
         (lVar7 = *(long *)(lVar7 + 0x1b0), lVar7 == 0)) goto LAB_00c3f014;
      bVar3 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
      bVar3 = ~bVar3 & 1;
    }
    if (pvVar10 == (void *)0x0) goto LAB_00c3f014;
  }
  else {
    bVar3 = 0;
  }
  *(byte *)((long)pvVar10 + 0x60) = bVar3;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x20) == '\0') {
    uVar6 = UnityEngine_Input__GetMouseButton(0,0);
    if (((uVar6 & 1) == 0) || (*(char *)((long)__this + 0x60) == '\0')) goto LAB_00c3ea1c;
    uVar6 = UnityEngine_Input__GetMouseButtonDown(0,0);
    if ((uVar6 & 1) == 0) {
      fVar11 = *(float *)((long)__this + 0x80);
    }
    else {
      fVar11 = 0.0;
      *(undefined4 *)((long)__this + 0x80) = 0;
      *(float *)((long)__this + 0x84) = *(float *)((long)__this + 0x84) / 100.0;
    }
    fVar17 = (float)UnityEngine_Input__GetAxis(_Str_Mouse_Y,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    fVar18 = *(float *)((long)__this + 0x84);
    *(float *)((long)__this + 0x80) =
         fVar11 + fVar17 * *(float *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x28) * 0.012;
    fVar17 = (float)UnityEngine_Input__GetAxis(_Str_Mouse_X,0);
    fVar11 = *(float *)((long)__this + 0x80);
    if (*(float *)((long)__this + 0x80) < -0.1) {
      fVar11 = -0.1;
    }
    fVar18 = fVar18 + fVar17 * *(float *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x28) * 0.012;
    *(float *)((long)__this + 0x80) = fVar11;
    *(float *)((long)__this + 0x84) = fVar18;
    if (fVar18 != 0.0) {
      fVar11 = *(float *)((long)__this + 0x48);
      if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      *(float *)(*(long *)(_CameraGarage_TypeInfo + 0xb8) + 0x10) =
           fVar11 + (fVar11 - *(float *)(*(long *)(_CameraGarage_TypeInfo + 0xb8) + 0x14)) *
                    *(float *)((long)__this + 0x3c) * 6.5;
    }
    CameraGarage__PHMMMLBENKN(__this);
  }
  else {
    iVar4 = UnityEngine_Input__get_touchCount(0);
    if ((iVar4 == 1) && (*(char *)((long)__this + 0x60) != '\0')) {
      CameraGarage__ADGKBFDJPFH(__this);
    }
    else {
LAB_00c3ea1c:
      CameraGarage__LBPODLFBDIK(__this);
    }
  }
  uVar16 = *(undefined4 *)((long)__this + 0x48);
  if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  *(undefined4 *)(*(long *)(_CameraGarage_TypeInfo + 0xb8) + 0x14) = uVar16;
  fVar17 = *(float *)((long)__this + 0x4c);
  fVar11 = (float)UnityEngine_Time__get_deltaTime(0);
  bVar2 = fVar11 < 0.0;
  if (1.0 < fVar11) {
    fVar11 = 1.0;
  }
  if (bVar2) {
    fVar11 = 0.0;
  }
  fVar17 = fVar17 + (10.0 - fVar17) * fVar11;
  *(float *)((long)__this + 0x4c) = fVar17;
  if (*(float *)(*(long *)(_CameraGarage_TypeInfo + 0xb8) + 0x1c) == 0.0) {
LAB_00c3ec34:
    fVar19 = *(float *)((long)__this + 0x80);
    fVar20 = *(float *)((long)__this + 0x38);
    fVar11 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar18 = *(float *)((long)__this + 0x48);
    fVar21 = *(float *)((long)__this + 0x84);
    fVar22 = *(float *)((long)__this + 0x38);
    *(float *)((long)__this + 0x4c) = fVar17 - fVar11 * fVar19 * fVar20 * 7.0 * 400.0;
    fVar11 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar18 = fVar18 + fVar11 * fVar21 * fVar22 * 7.0 * 400.0;
    *(float *)((long)__this + 0x48) = fVar18;
    lVar7 = _CameraGarage_TypeInfo;
  }
  else {
    fVar11 = (float)UnityEngine_Time__get_time(0);
    if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar7 = *(long *)(_CameraGarage_TypeInfo + 0xb8);
    if (1.5 <= fVar11 - *(float *)(lVar7 + 0x1c)) {
      fVar17 = *(float *)((long)__this + 0x4c);
      goto LAB_00c3ec34;
    }
    fVar11 = *(float *)((long)__this + 0x48);
    if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar7 = *(long *)(_CameraGarage_TypeInfo + 0xb8);
    }
    fVar17 = *(float *)(lVar7 + 0x10);
    if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar7 = _CameraGarage_TypeInfo;
    if (300.0 < ABS(fVar11 - fVar17)) {
      if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar7 = _CameraGarage_TypeInfo;
      lVar8 = *(long *)(_CameraGarage_TypeInfo + 0xb8);
      fVar17 = *(float *)(lVar8 + 0x10);
      fVar11 = fVar17 + 360.0;
      if (0.0 <= fVar17) {
        fVar11 = fVar17;
      }
      fVar18 = fVar11 + -360.0;
      if (fVar11 <= 360.0) {
        fVar18 = fVar11;
      }
      if (fVar18 < 0.0) {
        fVar18 = 0.0;
      }
      fVar11 = 0.5;
      if (fVar17 - *(float *)(lVar8 + 0x14) < 0.0) {
        fVar11 = -0.5;
      }
      *(float *)(lVar8 + 0x10) = fVar11 + fVar18;
    }
    fVar18 = *(float *)((long)__this + 0x48);
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x00a67a30();
      lVar7 = _CameraGarage_TypeInfo;
    }
    fVar19 = *(float *)(*(long *)(lVar7 + 0xb8) + 0x10);
    fVar17 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar17 = fVar17 * 3.0;
    fVar11 = fVar17;
    if (1.0 < fVar17) {
      fVar11 = 1.0;
    }
    if (fVar17 < 0.0) {
      fVar11 = 0.0;
    }
    fVar18 = fVar18 + (fVar19 - fVar18) * fVar11;
    *(float *)((long)__this + 0x48) = fVar18;
    fVar11 = *(float *)((long)__this + 0x84);
    fVar19 = *(float *)(*(long *)(_CameraGarage_TypeInfo + 0xb8) + 0x10) - fVar18;
    fVar17 = 1.0;
    if (fVar19 < 0.0) {
      fVar17 = -1.0;
    }
    fVar20 = 1.0;
    if (fVar11 < 0.0) {
      fVar20 = -1.0;
    }
    lVar7 = _CameraGarage_TypeInfo;
    if (fVar17 != fVar20) {
      if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        fVar18 = *(float *)((long)__this + 0x48);
        fVar19 = *(float *)(*(long *)(_CameraGarage_TypeInfo + 0xb8) + 0x10) - fVar18;
      }
      lVar7 = _CameraGarage_TypeInfo;
      if (fVar19 < 0.0) {
        fVar11 = -fVar11;
      }
      *(float *)((long)__this + 0x84) = fVar11;
    }
  }
  fVar19 = *(float *)((long)__this + 0x4c);
  fVar17 = *(float *)((long)__this + 0x58);
  fVar11 = *(float *)((long)__this + 0x5c);
  if (*(int *)(lVar7 + 0xe0) == 0) {
    func_0x00a67a30();
    fVar18 = *(float *)((long)__this + 0x48);
  }
  fVar20 = fVar19 + 360.0;
  if (-360.0 <= fVar19) {
    fVar20 = fVar19;
  }
  fVar19 = fVar20 + -360.0;
  if (fVar20 <= 360.0) {
    fVar19 = fVar20;
  }
  if (fVar19 <= fVar11) {
    fVar11 = fVar19;
  }
  if (fVar19 < fVar17) {
    fVar11 = fVar17;
  }
  fVar17 = fVar18 + 360.0;
  if (0.0 <= fVar18) {
    fVar17 = fVar18;
  }
  fVar18 = fVar17 + -360.0;
  if (fVar17 <= 360.0) {
    fVar18 = fVar17;
  }
  if (fVar18 < 0.0) {
    fVar18 = 0.0;
  }
  *(float *)((long)__this + 0x48) = fVar18;
  *(float *)((long)__this + 0x4c) = fVar11;
  fVar11 = *(float *)((long)__this + 0x54);
  fVar17 = *(float *)((long)__this + 0x78);
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  fVar18 = 0.0;
  if ((uVar6 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c3f014;
    fVar18 = *(float *)(**(long **)(_CarController_TypeInfo + 0xb8) + 300);
  }
  fVar19 = (fVar17 - fVar18) - *(float *)((long)__this + 0x7c);
  fVar18 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar17 = fVar19;
  if (0.0 < fVar19) {
    fVar17 = 0.0;
  }
  if (fVar19 < -5.9) {
    fVar17 = -5.9;
  }
  if (fVar18 < 0.0) {
    fVar18 = 0.0;
  }
  uVar15 = (ulong)(uint)fVar18;
  *(float *)((long)__this + 0x54) = fVar11 + fVar18 * (fVar17 - fVar11);
  uVar13 = (ulong)(uint)(*(float *)((long)__this + 0x48) * 0.017453292);
  uVar14 = 0;
  uVar12 = UnityEngine_Quaternion__Internal_FromEulerRad
                     (*(float *)((long)__this + 0x4c) * 0.017453292,uVar13,0,0);
  uVar6 = uVar13;
  uVar9 = uVar14;
  fVar11 = (float)UnityEngine_Quaternion__op_Multiply(0);
  if (*(long *)((long)__this + 0x28) == 0) {
LAB_00c3f014:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  fVar17 = (float)uVar9;
  fVar18 = (float)uVar6;
  fVar19 = (float)UnityEngine_Transform__get_position(*(long *)((long)__this + 0x28),0);
  if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c3f014;
  UnityEngine_Transform__set_rotation(uVar12,uVar13,uVar14,uVar15,*(long *)((long)__this + 0x20),0);
  if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c3f014;
  UnityEngine_Transform__set_position
            (fVar11 + fVar19,(float)uVar6 + fVar18,(float)uVar9 + fVar17,
             *(long *)((long)__this + 0x20),0);
  iVar4 = *(int *)((long)__this + 0x6c);
  iVar5 = UnityEngine_Screen__get_width(0);
  if ((iVar4 == iVar5) &&
     (iVar4 = *(int *)((long)__this + 0x68), iVar5 = UnityEngine_Screen__get_height(0),
     iVar4 == iVar5)) {
    return;
  }
  uVar16 = UnityEngine_Screen__get_height(0);
  *(undefined4 *)((long)__this + 0x68) = uVar16;
  uVar16 = UnityEngine_Screen__get_width(0);
  *(undefined4 *)((long)__this + 0x6c) = uVar16;
  if ((bRam0000000001917120 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917120 = 1;
  }
  uVar9 = *(undefined8 *)((long)__this + 0x70);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Equality(uVar9,0,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  iVar4 = UnityEngine_Screen__get_width(0);
  iVar5 = UnityEngine_Screen__get_height(0);
  fVar11 = (float)iVar4 / (float)iVar5;
  if (fVar11 <= 1.26) {
    lVar7 = *(long *)((long)__this + 0x70);
    if (lVar7 == 0) goto LAB_00c3f2ac;
    uVar9 = 0x42820000;
  }
  else if (fVar11 <= 1.34) {
    lVar7 = *(long *)((long)__this + 0x70);
    if (lVar7 == 0) goto LAB_00c3f2ac;
    uVar9 = 0x42780000;
  }
  else if (fVar11 <= 1.51) {
    lVar7 = *(long *)((long)__this + 0x70);
    if (lVar7 == 0) goto LAB_00c3f2ac;
    uVar9 = 0x42680000;
  }
  else {
    lVar7 = *(long *)((long)__this + 0x70);
    if (1.61 <= fVar11) {
      if (lVar7 == 0) {
LAB_00c3f2ac:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      UnityEngine_Camera__set_fieldOfView(0x425c0000,lVar7,0);
      if (1.8 <= fVar11) {
        *(undefined4 *)((long)__this + 0x7c) = 0x3eb33333;
      }
      goto LAB_00c3f258;
    }
    if (lVar7 == 0) goto LAB_00c3f2ac;
    uVar9 = 0x426c0000;
  }
  UnityEngine_Camera__set_fieldOfView(uVar9,lVar7,0);
LAB_00c3f258:
  if ((bRam000000000191711e & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191711e = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar9 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
        (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 != 0)) &&
       (lVar7 = *(long *)(lVar7 + 0x278), lVar7 != 0)) {
      UnityEngine_RectTransform__get_sizeDelta(lVar7,1,0);
      UnityEngine_RectTransform__GetParentSize(lVar7);
      UnityEngine_RectTransform__get_anchorMax(lVar7);
      UnityEngine_RectTransform__get_anchorMin(lVar7);
      if (pcRam000000000191c810 == (code *)0x0) {
        pcRam000000000191c810 = (code *)func_0x00a678c4(&UNK_0059f9bb);
      }
      (*pcRam000000000191c810)(lVar7,&stack0xffffffffffffffe8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private static void .cctor() { }   @0xb3f868

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage___cctor(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000001917124 & 1) == 0) {
    func_0x00a67900(&CameraGarage_TypeInfo);
    func_0x00a67900(&int___TypeInfo);
    func_0x00a67900(&
                    Field__PrivateImplementationDetails__3D82E6070EE256DDAEF8919AA1D686E12C4A04051F9
                   );
    bRam0000000001917124 = 1;
  }
  uVar1 = func_0x00a679a0(_int___TypeInfo,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            (uVar1,_Field__PrivateImplementationDetails__3D82E6070EE256DDAEF8919AA1D686E12C4A04051F9
             ,0);
  **(undefined8 **)(_CameraGarage_TypeInfo + 0xb8) = uVar1;
  lVar2 = func_0x00a679a0(_int___TypeInfo,2);
  if (lVar2 != 0) {
    if ((*(int *)(lVar2 + 0x18) != 0) &&
       (*(undefined4 *)(lVar2 + 0x20) = 0x10e, *(int *)(lVar2 + 0x18) != 1)) {
      *(undefined4 *)(lVar2 + 0x24) = 0x5a;
      lVar3 = *(long *)(_CameraGarage_TypeInfo + 0xb8);
      *(long *)(lVar3 + 8) = lVar2;
      *(undefined4 *)(lVar3 + 0x1c) = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



// ==== private void ADGKBFDJPFH() { }   @0xb3e0bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__ADGKBFDJPFH(void *__this)

{
  int iVar1;
  float fVar2;
  float in_s1;
  float fVar3;
  float fVar4;
  undefined1 auStack_c8 [72];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam000000000191711b & 1) == 0) {
    func_0x00a67900(&CameraGarage_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    bRam000000000191711b = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  UnityEngine_Input__GetTouch(auStack_c8,0,0);
  func_0x016decc0(&uStack_80,auStack_c8,0x44);
  iVar1 = UnityEngine_Input__get_touchCount(0);
  if (iVar1 == 1) {
    CameraGarage__PHMMMLBENKN(__this);
    iVar1 = UnityEngine_Touch__get_phase(&uStack_80,0);
    if (iVar1 == 1) {
      fVar2 = (float)UnityEngine_Touch__get_deltaPosition(&uStack_80,0);
      fVar4 = *(float *)((long)__this + 0x80);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      fVar3 = *(float *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x24);
      fVar2 = fVar2 * 0.003 * fVar3 + *(float *)((long)__this + 0x84);
      *(float *)((long)__this + 0x80) = fVar4 + in_s1 * 0.003 * fVar3;
      *(float *)((long)__this + 0x84) = fVar2;
      if (fVar2 != 0.0) {
        fVar2 = *(float *)((long)__this + 0x48);
        if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(float *)(*(long *)(_CameraGarage_TypeInfo + 0xb8) + 0x10) =
             fVar2 + (fVar2 - *(float *)(*(long *)(_CameraGarage_TypeInfo + 0xb8) + 0x14)) *
                     *(float *)((long)__this + 0x3c) * 2.5;
      }
    }
  }
  return;
}


// ==== public static float LJOIIPPOEBG(float BIECADNFNCH, float CHNHFDOHLKB, float FPMAPKMIPKO) { }   @0xb3e6cc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float CameraGarage__LJOIIPPOEBG(float BIECADNFNCH,float CHNHFDOHLKB,float FPMAPKMIPKO)

{
  float fVar1;
  float fVar2;
  
  fVar1 = BIECADNFNCH + 360.0;
  if (-360.0 <= BIECADNFNCH) {
    fVar1 = BIECADNFNCH;
  }
  fVar2 = fVar1 + -360.0;
  if (fVar1 <= 360.0) {
    fVar2 = fVar1;
  }
  if (fVar2 <= FPMAPKMIPKO) {
    FPMAPKMIPKO = fVar2;
  }
  if (fVar2 < CHNHFDOHLKB) {
    FPMAPKMIPKO = CHNHFDOHLKB;
  }
  return FPMAPKMIPKO;
}


// ==== public static void IKDKLJMPOKM(EHKCLJKMBLO KENMLPFOLCH) { }   @0xb3f338

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__IKDKLJMPOKM(int KENMLPFOLCH)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  
  if ((bRam0000000001917122 & 1) == 0) {
    func_0x00a67900(&CameraGarage_TypeInfo);
    bRam0000000001917122 = 1;
  }
  uVar5 = UnityEngine_Time__get_time(0);
  if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = _CameraGarage_TypeInfo;
  lVar1 = *(long *)(_CameraGarage_TypeInfo + 0xb8);
  *(undefined4 *)(lVar1 + 0x1c) = uVar5;
  switch(KENMLPFOLCH) {
  case 1:
code_r0x00c3f40c:
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((bRam000000000191711c & 1) == 0) {
      func_0x00a67900(&CameraGarage_TypeInfo);
      func_0x00a67900(&System_Math_TypeInfo);
      bRam000000000191711c = 1;
    }
    if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    plVar3 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
    lVar4 = *plVar3;
    if (lVar4 == 0) {
code_r0x00c3e408:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*(int *)(lVar4 + 0x18) != 0) {
      fVar8 = *(float *)((long)plVar3 + 0x14);
      iVar7 = *(int *)(lVar4 + 0x20);
      fVar6 = fVar8;
      if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_System_Math_TypeInfo);
        plVar3 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
        lVar4 = *plVar3;
        if (lVar4 == 0) goto code_r0x00c3e408;
        fVar6 = *(float *)((long)plVar3 + 0x14);
      }
      if (1 < *(uint *)(lVar4 + 0x18)) {
        iVar9 = *(int *)(lVar4 + 0x24);
        if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          plVar3 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
          lVar4 = *plVar3;
          if (lVar4 == 0) goto code_r0x00c3e408;
        }
        if (ABS(fVar6 - (float)iVar9) <= ABS(fVar8 - (float)iVar7)) {
          if (1 < *(uint *)(lVar4 + 0x18)) {
            piVar2 = (int *)(lVar4 + 0x24);
            goto code_r0x00c3e3e4;
          }
        }
        else if (*(uint *)(lVar4 + 0x18) != 0) {
          piVar2 = (int *)(lVar4 + 0x20);
code_r0x00c3e3e4:
          iVar7 = *piVar2;
          *(float *)(plVar3 + 2) = (float)iVar7;
          *(float *)((long)plVar3 + 0x14) = (float)iVar7;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  case 2:
    goto code_r0x00c3f4b0;
  case 3:
    break;
  case 4:
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((bRam0000000001917125 & 1) == 0) {
      func_0x00a67900(&CameraGarage_TypeInfo);
      func_0x00a67900(&System_Math_TypeInfo);
      bRam0000000001917125 = 1;
    }
    if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar4 = *(long *)(_CameraGarage_TypeInfo + 0xb8);
    lVar1 = *(long *)(lVar4 + 8);
    if (lVar1 == 0) {
LAB_00c3f614:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*(int *)(lVar1 + 0x18) != 0) {
      fVar8 = *(float *)(lVar4 + 0x14);
      iVar7 = *(int *)(lVar1 + 0x20);
      fVar6 = fVar8;
      if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_System_Math_TypeInfo);
        lVar4 = *(long *)(_CameraGarage_TypeInfo + 0xb8);
        lVar1 = *(long *)(lVar4 + 8);
        if (lVar1 == 0) goto LAB_00c3f614;
        fVar6 = *(float *)(lVar4 + 0x14);
      }
      if (1 < *(uint *)(lVar1 + 0x18)) {
        iVar9 = *(int *)(lVar1 + 0x24);
        if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar4 = *(long *)(_CameraGarage_TypeInfo + 0xb8);
          lVar1 = *(long *)(lVar4 + 8);
          if (lVar1 == 0) goto LAB_00c3f614;
        }
        if (ABS(fVar6 - (float)iVar9) <= ABS(fVar8 - (float)iVar7)) {
          if (1 < *(uint *)(lVar1 + 0x18)) {
            piVar2 = (int *)(lVar1 + 0x24);
            goto LAB_00c3f5f0;
          }
        }
        else if (*(uint *)(lVar1 + 0x18) != 0) {
          piVar2 = (int *)(lVar1 + 0x20);
LAB_00c3f5f0:
          iVar7 = *piVar2;
          *(float *)(lVar4 + 0x10) = (float)iVar7;
          *(float *)(lVar4 + 0x14) = (float)iVar7;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  default:
    goto LAB_00c3f4cc;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    func_0x00a67a30();
    lVar1 = *(long *)(_CameraGarage_TypeInfo + 0xb8);
    lVar4 = _CameraGarage_TypeInfo;
  }
  fVar6 = *(float *)(lVar1 + 0x14);
  if (160.0 < fVar6) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x00a67a30();
      fVar6 = *(float *)(*(long *)(_CameraGarage_TypeInfo + 0xb8) + 0x14);
      lVar4 = _CameraGarage_TypeInfo;
    }
    if (fVar6 < 200.0) goto code_r0x00c3f40c;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    func_0x00a67a30();
    lVar4 = _CameraGarage_TypeInfo;
  }
  fVar6 = *(float *)(*(long *)(lVar4 + 0xb8) + 0x14);
  if (0.0 <= fVar6) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x00a67a30();
      fVar6 = *(float *)(*(long *)(_CameraGarage_TypeInfo + 0xb8) + 0x14);
      lVar4 = _CameraGarage_TypeInfo;
    }
    if (fVar6 < 20.0) goto code_r0x00c3f4b0;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    func_0x00a67a30();
    lVar4 = _CameraGarage_TypeInfo;
  }
  if (*(float *)(*(long *)(lVar4 + 0xb8) + 0x14) <= 340.0) {
LAB_00c3f4cc:
    return;
  }
code_r0x00c3f4b0:
  if (*(int *)(lVar4 + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((bRam000000000191711d & 1) == 0) {
    func_0x00a67900(&CameraGarage_TypeInfo);
    func_0x00a67900(&System_Math_TypeInfo);
    bRam000000000191711d = 1;
  }
  if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar3 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
  lVar4 = *plVar3;
  if (lVar4 == 0) {
code_r0x00c3e54c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (2 < *(uint *)(lVar4 + 0x18)) {
    fVar8 = *(float *)((long)plVar3 + 0x14);
    iVar7 = *(int *)(lVar4 + 0x28);
    fVar6 = fVar8;
    if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_System_Math_TypeInfo);
      plVar3 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
      lVar4 = *plVar3;
      if (lVar4 == 0) goto code_r0x00c3e54c;
      fVar6 = *(float *)((long)plVar3 + 0x14);
    }
    if (3 < *(uint *)(lVar4 + 0x18)) {
      iVar9 = *(int *)(lVar4 + 0x2c);
      if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        plVar3 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
        lVar4 = *plVar3;
        if (lVar4 == 0) goto code_r0x00c3e54c;
      }
      if (ABS(fVar6 - (float)iVar9) <= ABS(fVar8 - (float)iVar7)) {
        if (3 < *(uint *)(lVar4 + 0x18)) {
          piVar2 = (int *)(lVar4 + 0x2c);
          goto code_r0x00c3e528;
        }
      }
      else if (2 < *(uint *)(lVar4 + 0x18)) {
        piVar2 = (int *)(lVar4 + 0x28);
code_r0x00c3e528:
        iVar7 = *piVar2;
        *(float *)(plVar3 + 2) = (float)iVar7;
        *(float *)((long)plVar3 + 0x14) = (float)iVar7;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


// ==== private static void KDCDGKBJAMB() { }   @0xb3f4dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__KDCDGKBJAMB(void)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  if ((bRam0000000001917125 & 1) == 0) {
    func_0x00a67900(&CameraGarage_TypeInfo);
    func_0x00a67900(&System_Math_TypeInfo);
    bRam0000000001917125 = 1;
  }
  if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = *(long *)(_CameraGarage_TypeInfo + 0xb8);
  lVar3 = *(long *)(lVar2 + 8);
  if (lVar3 == 0) {
LAB_00c3f614:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    fVar5 = *(float *)(lVar2 + 0x14);
    iVar4 = *(int *)(lVar3 + 0x20);
    fVar6 = fVar5;
    if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_System_Math_TypeInfo);
      lVar2 = *(long *)(_CameraGarage_TypeInfo + 0xb8);
      lVar3 = *(long *)(lVar2 + 8);
      if (lVar3 == 0) goto LAB_00c3f614;
      fVar6 = *(float *)(lVar2 + 0x14);
    }
    if (1 < *(uint *)(lVar3 + 0x18)) {
      iVar7 = *(int *)(lVar3 + 0x24);
      if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar2 = *(long *)(_CameraGarage_TypeInfo + 0xb8);
        lVar3 = *(long *)(lVar2 + 8);
        if (lVar3 == 0) goto LAB_00c3f614;
      }
      if (ABS(fVar6 - (float)iVar7) <= ABS(fVar5 - (float)iVar4)) {
        if (1 < *(uint *)(lVar3 + 0x18)) {
          piVar1 = (int *)(lVar3 + 0x24);
          goto LAB_00c3f5f0;
        }
      }
      else if (*(uint *)(lVar3 + 0x18) != 0) {
        piVar1 = (int *)(lVar3 + 0x20);
LAB_00c3f5f0:
        iVar4 = *piVar1;
        *(float *)(lVar2 + 0x10) = (float)iVar4;
        *(float *)(lVar2 + 0x14) = (float)iVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}



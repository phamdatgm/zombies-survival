// ==== public void OHIFDCBAEFL() { }   @0xb018ec

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCamera__OHIFDCBAEFL(void *__this)

{
  *(undefined4 *)((long)__this + 0x8c) = 0;
  *(undefined4 *)((long)__this + 0x90) = 0;
  return;
}


// ==== public void BGKJCAIHANB() { }   @0xb01e0c

/* WARNING: Removing unreachable block (ram,0x00c020bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCamera__BGKJCAIHANB(void *__this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_s1;
  float fVar9;
  float fVar10;
  
  if ((bRam0000000001916f32 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    bRam0000000001916f32 = 1;
  }
  if (*(long *)((long)__this + 0x30) == 0) {
LAB_00c02100:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  fVar5 = (float)CarController__AGKGCILIANE(*(long *)((long)__this + 0x30),0);
  fVar9 = *(float *)((long)__this + 0xb0);
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((*(long *)((long)__this + 0x30) == 0) ||
     (lVar3 = *(long *)(*(long *)((long)__this + 0x30) + 0x38), lVar3 == 0)) goto LAB_00c02100;
  cVar1 = *(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44);
  UnityEngine_Transform__get_position(lVar3,0);
  if (in_s1 <= (float)*(int *)((long)__this + 0xb4)) {
    fVar6 = *(float *)((long)__this + 0xb0);
    fVar7 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar6 = fVar6 + fVar7 * -300.0;
    fVar7 = 1.0;
  }
  else {
    if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c02100;
    fVar6 = (float)CarController__AGKGCILIANE(*(long *)((long)__this + 0x30),0);
    fVar10 = 10.0;
    fVar8 = 1.0;
    fVar7 = 1.0;
    if (10.0 <= fVar6) {
      if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c02100;
      fVar6 = (float)CarController__AGKGCILIANE(*(long *)((long)__this + 0x30),0);
      fVar10 = 20.0;
      fVar7 = fVar8;
      if (15.0 <= fVar6) {
        if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c02100;
        fVar6 = (float)CarController__AGKGCILIANE(*(long *)((long)__this + 0x30),0);
        fVar10 = 30.0;
        if (25.0 <= fVar6) {
          if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c02100;
          fVar6 = (float)CarController__AGKGCILIANE(*(long *)((long)__this + 0x30),0);
          if (33.0 <= fVar6) {
            if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c02100;
            fVar6 = (float)CarController__AGKGCILIANE(*(long *)((long)__this + 0x30),0);
            if (40.0 <= fVar6) {
              fVar10 = 500.0;
              fVar7 = 0.5;
            }
            else {
              fVar10 = 100.0;
            }
          }
          else {
            fVar10 = 75.0;
            fVar7 = 1.0;
          }
        }
      }
    }
    fVar6 = *(float *)((long)__this + 0xb0);
    fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar6 = fVar6 + fVar10 * fVar8;
  }
  bVar2 = fVar6 < 0.0;
  if (150.0 < fVar6) {
    fVar6 = 150.0;
  }
  if (bVar2) {
    fVar6 = 0.0;
  }
  *(float *)((long)__this + 0xb0) = fVar6;
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  fVar6 = 1.0;
  if (*(float *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x10) <= 1.0) {
    if ((*(long *)((long)__this + 0x30) == 0) ||
       (lVar3 = *(long *)(*(long *)((long)__this + 0x30) + 0x38), lVar3 == 0)) goto LAB_00c02100;
    UnityEngine_Transform__get_position(lVar3,0);
    if ((float)*(int *)((long)__this + 0xb4) < fVar6) goto LAB_00c0200c;
    pfVar4 = (float *)((long)__this + 0x58);
  }
  else {
LAB_00c0200c:
    pfVar4 = (float *)((long)__this + 0x5c);
  }
  fVar6 = *(float *)((long)__this + 0x54);
  fVar5 = (fVar5 + fVar9) / 3.0;
  if (cVar1 != '\0') {
    fVar5 = 15.0;
  }
  fVar9 = *pfVar4;
  if (fVar5 <= *pfVar4) {
    fVar9 = fVar5;
  }
  if (fVar5 < fVar6) {
    fVar9 = fVar6;
  }
  switch(*(undefined4 *)((long)__this + 0x38)) {
  case 0:
    fVar6 = *(float *)((long)__this + 0x44);
    fVar5 = (float)UnityEngine_Time__get_deltaTime(0);
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    fVar7 = (fVar5 / *(float *)(&UNK_0059ca60 +
                               (ulong)(0.0 < *(float *)(*(long *)(_CarController_TypeInfo + 0xb8) +
                                                       0x10)) * 4)) / fVar7;
    if (fVar7 < 0.0) {
      fVar7 = 0.0;
    }
    fVar6 = fVar6 + (fVar9 - fVar6) * fVar7;
    break;
  case 1:
    break;
  case 2:
    fVar6 = *(float *)((long)__this + 0x58);
    break;
  case 3:
    fVar6 = *(float *)((long)__this + 0x5c);
    break;
  default:
    goto LAB_00c020e8;
  }
  *(float *)((long)__this + 0x44) = fVar6;
LAB_00c020e8:
  return;
}


// ==== private void Start() { }   @0xb0265c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCamera__Start(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  float in_s1;
  float in_s2;
  undefined8 uStack_28;
  
  if ((bRam0000000001916f31 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Camera___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f31 = 1;
  }
  uVar2 = *(undefined8 *)((long)__this + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = UnityEngine_Component__get_transform(__this,0);
    *(undefined8 *)((long)__this + 0x20) = uVar2;
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
              (__this,&uStack_28,_Method_UnityEngine_Component_GetComponent_Camera___);
    *(undefined8 *)((long)__this + 0x28) = uStack_28;
    if (*(long *)((long)__this + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    UnityEngine_Transform__get_rotation(*(long *)((long)__this + 0x20),0);
    fVar3 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(0);
    in_s1 = in_s1 * 57.29578;
    in_s2 = in_s2 * 57.29578;
    uVar4 = UnityEngine_Quaternion__Internal_MakePositive(fVar3 * 57.29578,0);
    *(undefined4 *)((long)__this + 0x80) = uVar4;
    *(float *)((long)__this + 0x84) = in_s1;
    *(float *)((long)__this + 0x88) = in_s2;
    CarCamera__GFOMIMMNDBH(__this);
    uVar4 = UnityEngine_Screen__get_height(0);
    *(undefined4 *)((long)__this + 0xa8) = uVar4;
    uVar4 = UnityEngine_Screen__get_width(0);
    *(undefined4 *)((long)__this + 0xac) = uVar4;
  }
  return;
}



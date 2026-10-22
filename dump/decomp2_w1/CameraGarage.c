// ==== private static void HIHMJIDCNEC() { }   @0xb3e2d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__HIHMJIDCNEC(void)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  if ((bRam000000000191711c & 1) == 0) {
    func_0x00a67900(&CameraGarage_TypeInfo);
    func_0x00a67900(&System_Math_TypeInfo);
    bRam000000000191711c = 1;
  }
  if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar2 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
  lVar3 = *plVar2;
  if (lVar3 == 0) {
LAB_00c3e408:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    fVar5 = *(float *)((long)plVar2 + 0x14);
    iVar4 = *(int *)(lVar3 + 0x20);
    fVar6 = fVar5;
    if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_System_Math_TypeInfo);
      plVar2 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
      lVar3 = *plVar2;
      if (lVar3 == 0) goto LAB_00c3e408;
      fVar6 = *(float *)((long)plVar2 + 0x14);
    }
    if (1 < *(uint *)(lVar3 + 0x18)) {
      iVar7 = *(int *)(lVar3 + 0x24);
      if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        plVar2 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
        lVar3 = *plVar2;
        if (lVar3 == 0) goto LAB_00c3e408;
      }
      if (ABS(fVar6 - (float)iVar7) <= ABS(fVar5 - (float)iVar4)) {
        if (1 < *(uint *)(lVar3 + 0x18)) {
          piVar1 = (int *)(lVar3 + 0x24);
          goto LAB_00c3e3e4;
        }
      }
      else if (*(uint *)(lVar3 + 0x18) != 0) {
        piVar1 = (int *)(lVar3 + 0x20);
LAB_00c3e3e4:
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


// ==== private void PHMMMLBENKN() { }   @0xb3e224

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__PHMMMLBENKN(void *__this)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *(float *)((long)__this + 0x80);
  fVar2 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar5 = *(float *)((long)__this + 0x84);
  bVar1 = fVar2 < 0.0;
  if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  fVar6 = *(float *)((long)__this + 0x40);
  if (bVar1) {
    fVar2 = 0.0;
  }
  *(float *)((long)__this + 0x80) = fVar4 + (0.0 - fVar4) * fVar2;
  fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar4 = fVar4 + fVar4;
  fVar2 = fVar4;
  if (1.0 < fVar4) {
    fVar2 = 1.0;
  }
  fVar3 = 0.0;
  if (fVar6 != 0.0) {
    fVar3 = *(float *)(&UNK_0059ca68 + (ulong)(0.0 <= fVar5) * 4);
  }
  if (fVar4 < 0.0) {
    fVar2 = 0.0;
  }
  *(float *)((long)__this + 0x84) = fVar5 + (fVar3 - fVar5) * fVar2;
  return;
}


// ==== private void Start() { }   @0xb3f618

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__Start(void *__this)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_28;
  
  if ((bRam0000000001917123 & 1) == 0) {
    func_0x00a67900(&CameraGarage_TypeInfo);
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Camera___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&System_Random_TypeInfo);
    bRam0000000001917123 = 1;
  }
  uVar3 = UnityEngine_Component__get_transform(__this,0);
  *(undefined8 *)((long)__this + 0x20) = uVar3;
  if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = **(long **)(_CameraGarage_TypeInfo + 0xb8);
  plVar4 = (long *)func_0x00a67b44(_System_Random_TypeInfo);
  System_Random___ctor(plVar4,0);
  if (((**(long **)(_CameraGarage_TypeInfo + 0xb8) != 0) && (plVar4 != (long *)0x0)) &&
     (uVar1 = (**(code **)(*plVar4 + 0x198))
                        (plVar4,0,*(undefined4 *)(**(long **)(_CameraGarage_TypeInfo + 0xb8) + 0x18)
                         ,*(undefined8 *)(*plVar4 + 0x1a0)), lVar6 != 0)) {
    if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    fVar7 = (float)*(int *)(lVar6 + (long)(int)uVar1 * 4 + 0x20);
    *(float *)((long)__this + 0x48) = fVar7;
    lVar6 = *(long *)(_CameraGarage_TypeInfo + 0xb8);
    *(float *)(lVar6 + 0x14) = fVar7;
    *(float *)(lVar6 + 0x18) = fVar7;
    *(float *)(lVar6 + 0x10) = fVar7;
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
              (__this,&uStack_28,_Method_UnityEngine_Component_GetComponent_Camera___);
    *(undefined8 *)((long)__this + 0x70) = uStack_28;
    CameraGarage__GFOMIMMNDBH(__this);
    uVar2 = UnityEngine_Screen__get_height(0);
    *(undefined4 *)((long)__this + 0x68) = uVar2;
    uVar2 = UnityEngine_Screen__get_width(0);
    *(undefined4 *)((long)__this + 0x6c) = uVar2;
    uVar3 = *(undefined8 *)((long)__this + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c3f860;
      CatGarage__KHDFDGMBOIJ(*(long *)((long)__this + 0x30),0);
    }
    fVar7 = *(float *)((long)__this + 0x54);
    *(float *)((long)__this + 0x78) = fVar7;
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    fVar8 = 0.0;
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c3f860;
      fVar8 = *(float *)(**(long **)(_CarController_TypeInfo + 0xb8) + 300);
    }
    fVar8 = (fVar7 - fVar8) - *(float *)((long)__this + 0x7c);
    fVar7 = fVar8;
    if (0.0 < fVar8) {
      fVar7 = 0.0;
    }
    if (fVar8 < -5.9) {
      fVar7 = -5.9;
    }
    *(float *)((long)__this + 0x54) = fVar7;
    return;
  }
LAB_00c3f860:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



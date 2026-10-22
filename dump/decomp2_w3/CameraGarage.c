// ==== private void DIMEPBAOOAD(int KDPHGADNELJ) { }   @0xb3e550

/* WARNING: Removing unreachable block (ram,0x0149383c) */
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__DIMEPBAOOAD(void *__this,int KDPHGADNELJ)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000191711e & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191711e = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar3 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
        (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar2 != 0)) &&
       (lVar2 = *(long *)(lVar2 + 0x278), lVar2 != 0)) {
      UnityEngine_RectTransform__get_sizeDelta(lVar2,1,0);
      UnityEngine_RectTransform__GetParentSize(lVar2);
      UnityEngine_RectTransform__get_anchorMax(lVar2);
      UnityEngine_RectTransform__get_anchorMin(lVar2);
      if (pcRam000000000191c810 == (code *)0x0) {
        pcRam000000000191c810 = (code *)func_0x00a678c4(&UNK_0059f9bb);
      }
      (*pcRam000000000191c810)(lVar2,&stack0xffffffffffffffe8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void GFOMIMMNDBH() { }   @0xb3f13c

/* WARNING: Removing unreachable block (ram,0x0149383c) */
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__GFOMIMMNDBH(void *__this)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
  if ((bRam0000000001917120 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917120 = 1;
  }
  uVar5 = *(undefined8 *)((long)__this + 0x70);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  iVar1 = UnityEngine_Screen__get_width(0);
  iVar2 = UnityEngine_Screen__get_height(0);
  fVar6 = (float)iVar1 / (float)iVar2;
  if (fVar6 <= 1.26) {
    lVar4 = *(long *)((long)__this + 0x70);
    if (lVar4 == 0) goto LAB_00c3f2ac;
    uVar5 = 0x42820000;
  }
  else if (fVar6 <= 1.34) {
    lVar4 = *(long *)((long)__this + 0x70);
    if (lVar4 == 0) goto LAB_00c3f2ac;
    uVar5 = 0x42780000;
  }
  else if (fVar6 <= 1.51) {
    lVar4 = *(long *)((long)__this + 0x70);
    if (lVar4 == 0) goto LAB_00c3f2ac;
    uVar5 = 0x42680000;
  }
  else {
    lVar4 = *(long *)((long)__this + 0x70);
    if (1.61 <= fVar6) {
      if (lVar4 == 0) {
LAB_00c3f2ac:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      UnityEngine_Camera__set_fieldOfView(0x425c0000,lVar4,0);
      if (1.8 <= fVar6) {
        *(undefined4 *)((long)__this + 0x7c) = 0x3eb33333;
      }
      goto LAB_00c3f258;
    }
    if (lVar4 == 0) goto LAB_00c3f2ac;
    uVar5 = 0x426c0000;
  }
  UnityEngine_Camera__set_fieldOfView(uVar5,lVar4,0);
LAB_00c3f258:
  if ((bRam000000000191711e & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191711e = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
        (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 != 0)) &&
       (lVar4 = *(long *)(lVar4 + 0x278), lVar4 != 0)) {
      UnityEngine_RectTransform__get_sizeDelta(lVar4,1,0);
      UnityEngine_RectTransform__GetParentSize(lVar4);
      UnityEngine_RectTransform__get_anchorMax(lVar4);
      UnityEngine_RectTransform__get_anchorMin(lVar4);
      if (pcRam000000000191c810 == (code *)0x0) {
        pcRam000000000191c810 = (code *)func_0x00a678c4(&UNK_0059f9bb);
      }
      (*pcRam000000000191c810)(lVar4,&stack0xffffffffffffffe8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public static float HAAFHAFPABK(float BIECADNFNCH, float CHNHFDOHLKB, float FPMAPKMIPKO) { }   @0xb3f100

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float CameraGarage__HAAFHAFPABK(float BIECADNFNCH,float CHNHFDOHLKB,float FPMAPKMIPKO)

{
  float fVar1;
  float fVar2;
  
  fVar1 = BIECADNFNCH + 360.0;
  if (0.0 <= BIECADNFNCH) {
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



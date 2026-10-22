// ==== public void .ctor() { }   @0xb3e688

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage___ctor(void *__this)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)((long)__this + 0x44) = uVar1;
  *(undefined4 *)((long)__this + 0x4c) = 0xbf800000;
  *(undefined4 *)((long)__this + 0x54) = 0xc0800000;
  *(undefined4 *)((long)__this + 0x5c) = 0x41f00000;
  *(undefined1 *)((long)__this + 0x60) = 1;
  *(undefined8 *)((long)__this + 0x38) = 0x400000003e99999a;
  *(undefined4 *)((long)__this + 100) = 0x37;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public IEnumerator OIKFBMHJDBN() { }   @0xb3f2b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * CameraGarage__OIKFBMHJDBN(void *__this)

{
  void *pvVar1;
  
  if ((bRam0000000001917121 & 1) == 0) {
    func_0x00a67900(&CameraGarage_KMAJDDIIPLH_TypeInfo);
    bRam0000000001917121 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_CameraGarage_KMAJDDIIPLH_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x20) = __this;
  return pvVar1;
}


// ==== private void LBPODLFBDIK() { }   @0xb3f018

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__LBPODLFBDIK(void *__this)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((*(float *)((long)__this + 0x4c) < 0.1) ||
     (*(float *)((long)__this + 0x5c) + -0.1 < *(float *)((long)__this + 0x4c))) {
    fVar3 = 0.0;
    *(undefined4 *)((long)__this + 0x80) = 0;
  }
  else {
    fVar3 = *(float *)((long)__this + 0x80);
  }
  fVar2 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar2 = fVar2 * 5.0;
  bVar1 = fVar2 < 0.0;
  if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  fVar6 = *(float *)((long)__this + 0x84);
  if (bVar1) {
    fVar2 = 0.0;
  }
  fVar5 = *(float *)((long)__this + 0x40);
  *(float *)((long)__this + 0x80) = fVar3 + (0.0 - fVar3) * fVar2;
  fVar2 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar2 = fVar2 * 4.0;
  fVar3 = fVar2;
  if (1.0 < fVar2) {
    fVar3 = 1.0;
  }
  fVar4 = 0.0;
  if (fVar5 != 0.0) {
    fVar4 = *(float *)(&UNK_0059ca68 + (ulong)(0.0 <= fVar6) * 4);
  }
  if (fVar2 < 0.0) {
    fVar3 = 0.0;
  }
  *(float *)((long)__this + 0x84) = fVar6 + (fVar4 - fVar6) * fVar3;
  return;
}



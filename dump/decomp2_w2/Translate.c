// ==== private void Awake() { }   @0xb3d6fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Translate__Awake(void *__this)

{
  if ((bRam0000000001917110 & 1) == 0) {
    func_0x00a67900(&Translate_TypeInfo);
    bRam0000000001917110 = 1;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  **(undefined8 **)(_Translate_TypeInfo + 0xb8) = __this;
  return;
}


// ==== public void .ctor() { }   @0xb3db94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Translate___ctor(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam0000000001917115 & 1) == 0) {
    func_0x00a67900(&Str_h);
    func_0x00a67900(&Str_d);
    bRam0000000001917115 = 1;
  }
  uVar1 = _Str_h;
  *(undefined8 *)((long)__this + 0x20) = _Str_d;
  *(undefined8 *)((long)__this + 0x28) = uVar1;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



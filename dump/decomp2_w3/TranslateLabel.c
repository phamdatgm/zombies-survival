// ==== private void Awake() { }   @0xb074f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TranslateLabel__Awake(void *__this)

{
  undefined8 uStack_28;
  
  if ((bRam0000000001916f50 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Text___);
    bRam0000000001916f50 = 1;
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
            (__this,&uStack_28,_Method_UnityEngine_Component_GetComponent_Text___);
  *(undefined8 *)((long)__this + 0x28) = uStack_28;
  return;
}



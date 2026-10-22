// ==== private void Start() { }   @0xb4c90c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BombScaleChanger__Start(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000001917172 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917172 = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) {
LAB_00c4ca2c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (0.6 < *(float *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x130)) {
      uVar2 = *(undefined8 *)((long)__this + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c4ca2c;
        UnityEngine_CapsuleCollider__set_radius(0x3f666666,*(long *)((long)__this + 0x20),0);
      }
    }
  }
  if (pcRam000000000191c328 == (code *)0x0) {
    pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
  }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c328)(__this,0);
  return;
}



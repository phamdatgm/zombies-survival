// ==== private void Start() { }   @0xb324c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TramplinBarrel__Start(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam00000000019170ce & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170ce = 1;
  }
  if (*(int *)((long)__this + 0x28) == 2) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar2 = **(long **)(_CarController_TypeInfo + 0xb8);
      if (lVar2 == 0) {
LAB_00c325d0:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if (0 < *(int *)(lVar2 + 0x498)) {
        lVar4 = *(long *)((long)__this + 0x20);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar2 = **(long **)(_CarController_TypeInfo + 0xb8);
          if (lVar2 == 0) goto LAB_00c325d0;
        }
        if (lVar4 == 0) goto LAB_00c325d0;
        TramplinBarrelPlatform__BPABDCCIAGL(lVar4,*(undefined4 *)(lVar2 + 0x498),0);
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



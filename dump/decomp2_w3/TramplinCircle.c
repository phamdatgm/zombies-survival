// ==== public void MPLPGOBGOJA() { }   @0xb19624

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TramplinCircle__MPLPGOBGOJA(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000001916fda & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001916fda = 1;
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
    if ((**(long **)(_CarController_TypeInfo + 0xb8) != 0) && (*(long *)((long)__this + 0x38) != 0))
    {
      lVar3 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x20);
      UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0);
      if (lVar3 != 0) {
        CarCollision__NDLJJLDOHIA(lVar3,0,0);
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x30),0);
        goto LAB_00c19734;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
LAB_00c19734:
  UnityEngine_Behaviour__set_enabled(__this,1,0);
  uVar2 = *(undefined8 *)((long)__this + 0x30);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((bRam000000000191c518 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c518 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (pcRam000000000191c510 == (code *)0x0) {
    pcRam000000000191c510 = (code *)func_0x00a678c4(&UNK_005ae57b);
  }
                    /* WARNING: Could not recover jumptable at 0x0148f1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c510)(0,uVar2);
  return;
}



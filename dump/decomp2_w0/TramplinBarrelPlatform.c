// ==== private void Start() { }   @0xb51db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TramplinBarrelPlatform__Start(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  float in_s1;
  float in_s2;
  
  if ((bRam0000000001917194 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Tramplin_error_2_);
    bRam0000000001917194 = 1;
  }
  uVar2 = *(undefined8 *)((long)__this + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__EEKNCFLMGDP(_Str_Tramplin_error_2_,0);
    UnityEngine_Behaviour__set_enabled(__this,0,0);
  }
  else {
    if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c51ed4;
    if (*(int *)(*(long *)((long)__this + 0x20) + 0x28) == 2) {
      if (*(long *)((long)__this + 0x48) == 0) goto LAB_00c51ed4;
      UnityEngine_Transform__get_position(*(long *)((long)__this + 0x48),0);
      *(float *)((long)__this + 0x50) = in_s1;
    }
  }
  if (*(long *)((long)__this + 0x28) != 0) {
    UnityEngine_Transform__get_localRotation(*(long *)((long)__this + 0x28),0);
    fVar3 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(0);
    in_s1 = in_s1 * 57.29578;
    in_s2 = in_s2 * 57.29578;
    uVar4 = UnityEngine_Quaternion__Internal_MakePositive(fVar3 * 57.29578,0);
    *(undefined4 *)((long)__this + 0x30) = uVar4;
    *(float *)((long)__this + 0x34) = in_s1;
    *(float *)((long)__this + 0x38) = in_s2;
    return;
  }
LAB_00c51ed4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



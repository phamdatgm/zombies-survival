// ==== private void FixedUpdate() { }   @0xb58adc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnimSync__FixedUpdate(void *__this)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)UnityEngine_Time__get_time(0);
  if (*(long *)((long)__this + 0x20) != 0) {
    fVar1 = fVar1 - *(float *)((long)__this + 0x28);
    UnityEngine_Animator__Update(fVar1,*(long *)((long)__this + 0x20),0);
    *(float *)((long)__this + 0x2c) = fVar1 + *(float *)((long)__this + 0x2c);
    uVar2 = UnityEngine_Time__get_time(0);
    *(undefined4 *)((long)__this + 0x28) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



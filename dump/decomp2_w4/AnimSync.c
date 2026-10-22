// ==== private void Update() { }   @0xb58b34

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnimSync__Update(void *__this)

{
  undefined4 uVar1;
  
  if (*(long *)((long)__this + 0x20) != 0) {
    UnityEngine_Animator__Update(-*(float *)((long)__this + 0x2c),*(long *)((long)__this + 0x20),0);
    *(undefined4 *)((long)__this + 0x2c) = 0;
    uVar1 = UnityEngine_Time__get_time(0);
    *(undefined4 *)((long)__this + 0x28) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



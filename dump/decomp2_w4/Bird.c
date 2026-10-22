// ==== private void Start() { }   @0xb01448

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Bird__Start(void *__this)

{
  long lVar1;
  undefined4 in_s1;
  
  lVar1 = UnityEngine_Component__get_transform(__this,0);
  *(long *)((long)__this + 0x30) = lVar1;
  if (lVar1 != 0) {
    UnityEngine_Transform__get_position(lVar1,0);
    *(undefined4 *)((long)__this + 0x38) = in_s1;
    lVar1 = UnityEngine_Component__get_gameObject(__this,0);
    if (lVar1 != 0) {
      if (pcRam000000000191c3f8 == (code *)0x0) {
        pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
      }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c3f8)(lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



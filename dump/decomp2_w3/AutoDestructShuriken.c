// ==== public void BLNLIDHOLOJ() { }   @0xb1920c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AutoDestructShuriken__BLNLIDHOLOJ(void *__this)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uStack_18;
  
  *(undefined4 *)((long)__this + 0x34) = 0;
  if (*(long *)((long)__this + 0x28) != 0) {
    uStack_18 = UnityEngine_ParticleSystem__get_main(*(long *)((long)__this + 0x28),0);
    uVar2 = UnityEngine_ParticleSystem_MainModule__get_duration(&uStack_18,0);
    *(undefined4 *)((long)__this + 0x38) = uVar2;
    lVar1 = UnityEngine_Component__get_gameObject(__this,0);
    if (lVar1 != 0) {
      UnityEngine_GameObject__SetActive(lVar1,1,0);
      if (*(long *)((long)__this + 0x28) != 0) {
        UnityEngine_ParticleSystem__Play(*(long *)((long)__this + 0x28),1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



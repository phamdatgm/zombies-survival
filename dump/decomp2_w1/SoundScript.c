// ==== private void Awake() { }   @0xb679d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void SoundScript__Awake(void *__this)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000191724d & 1) == 0) {
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam000000000191724d = 1;
  }
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  SoundScript__JNDBAPHNLIC
            (0x3f800000,__this,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x40,
             *(undefined8 *)((long)__this + 0x60),0,0);
  SoundScript__JNDBAPHNLIC
            (0x3f800000,__this,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x30,
             *(undefined8 *)((long)__this + 0x50),0,0);
  uVar3 = *(undefined8 *)((long)__this + 0xb0);
  plVar1 = (long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
  if ((bRam0000000001917243 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_AddComponent_AudioSource___);
    bRam0000000001917243 = 1;
  }
  lVar2 = UnityEngine_Component__get_gameObject(__this,0);
  if (lVar2 != 0) {
    lVar2 = UnityEngine_GameObject__AddComponent_object_
                      (lVar2,_Method_UnityEngine_GameObject_AddComponent_AudioSource___);
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      UnityEngine_AudioSource__set_loop(lVar2,1,0);
      if (*plVar1 != 0) {
        UnityEngine_AudioSource__set_volume(0x3f400000,*plVar1,0);
        if (*plVar1 != 0) {
          UnityEngine_AudioSource__set_playOnAwake(*plVar1,0,0);
          lVar2 = *plVar1;
          if (lVar2 != 0) {
            if (pcRam000000000191b648 == (code *)0x0) {
              pcRam000000000191b648 = (code *)func_0x00a678c4(&UNK_005a549a);
            }
                    /* WARNING: Could not recover jumptable at 0x01464c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam000000000191b648)(lVar2,uVar3);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void PNPJEJLNGMF(ref AudioSource JOPAPOBNEBI, AudioClip BEFPOGONNLN, float JOILPPKMILL) { }   @0xb682b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void SoundScript__PNPJEJLNGMF(void *__this,void *JOPAPOBNEBI,void *BEFPOGONNLN,float JOILPPKMILL)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 in_register_00005004;
  
  if ((bRam0000000001917248 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_AddComponent_AudioSource___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917248 = 1;
  }
  uVar3 = *(undefined8 *)JOPAPOBNEBI;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)JOPAPOBNEBI;
  }
  else {
    lVar2 = UnityEngine_Component__get_gameObject(__this,0);
    if (lVar2 == 0) goto LAB_00c683b8;
    lVar2 = UnityEngine_GameObject__AddComponent_object_
                      (lVar2,_Method_UnityEngine_GameObject_AddComponent_AudioSource___);
    *(long *)JOPAPOBNEBI = lVar2;
  }
  if (lVar2 != 0) {
    UnityEngine_AudioSource__set_loop(lVar2,0,0);
    if (*(long *)JOPAPOBNEBI != 0) {
      UnityEngine_AudioSource__set_volume
                (CONCAT44(in_register_00005004,JOILPPKMILL),*(long *)JOPAPOBNEBI,0);
      if (*(long *)JOPAPOBNEBI != 0) {
        UnityEngine_AudioSource__set_playOnAwake(*(long *)JOPAPOBNEBI,0,0);
        lVar2 = *(long *)JOPAPOBNEBI;
        if (lVar2 != 0) {
          if (pcRam000000000191b648 == (code *)0x0) {
            pcRam000000000191b648 = (code *)func_0x00a678c4(&UNK_005a549a);
          }
                    /* WARNING: Could not recover jumptable at 0x01464c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191b648)(lVar2,BEFPOGONNLN);
          return;
        }
      }
    }
  }
LAB_00c683b8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void PPKCIGGJNJF() { }   @0xb679d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void SoundScript__PPKCIGGJNJF(void *__this)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000191724d & 1) == 0) {
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam000000000191724d = 1;
  }
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  SoundScript__JNDBAPHNLIC
            (0x3f800000,__this,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x40,
             *(undefined8 *)((long)__this + 0x60),0,0);
  SoundScript__JNDBAPHNLIC
            (0x3f800000,__this,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x30,
             *(undefined8 *)((long)__this + 0x50),0,0);
  uVar3 = *(undefined8 *)((long)__this + 0xb0);
  plVar1 = (long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
  if ((bRam0000000001917243 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_AddComponent_AudioSource___);
    bRam0000000001917243 = 1;
  }
  lVar2 = UnityEngine_Component__get_gameObject(__this,0);
  if (lVar2 != 0) {
    lVar2 = UnityEngine_GameObject__AddComponent_object_
                      (lVar2,_Method_UnityEngine_GameObject_AddComponent_AudioSource___);
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      UnityEngine_AudioSource__set_loop(lVar2,1,0);
      if (*plVar1 != 0) {
        UnityEngine_AudioSource__set_volume(0x3f400000,*plVar1,0);
        if (*plVar1 != 0) {
          UnityEngine_AudioSource__set_playOnAwake(*plVar1,0,0);
          lVar2 = *plVar1;
          if (lVar2 != 0) {
            if (pcRam000000000191b648 == (code *)0x0) {
              pcRam000000000191b648 = (code *)func_0x00a678c4(&UNK_005a549a);
            }
                    /* WARNING: Could not recover jumptable at 0x01464c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam000000000191b648)(lVar2,uVar3);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



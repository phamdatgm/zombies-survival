// ==== public void JNDBAPHNLIC(ref AudioSource JOPAPOBNEBI, AudioClip BEFPOGONNLN, float JOILPPKMILL, bool ELGLKECMBDF, bool KDONOCOODJE) { }   @0xb678f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void SoundScript__JNDBAPHNLIC
               (void *__this,void *JOPAPOBNEBI,void *BEFPOGONNLN,float JOILPPKMILL,bool ELGLKECMBDF,
               bool KDONOCOODJE)

{
  long lVar1;
  undefined4 in_register_00005004;
  
  if ((bRam0000000001917243 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_AddComponent_AudioSource___);
    bRam0000000001917243 = 1;
  }
  lVar1 = UnityEngine_Component__get_gameObject(__this,0);
  if (lVar1 != 0) {
    lVar1 = UnityEngine_GameObject__AddComponent_object_
                      (lVar1,_Method_UnityEngine_GameObject_AddComponent_AudioSource___);
    *(long *)JOPAPOBNEBI = lVar1;
    if (lVar1 != 0) {
      UnityEngine_AudioSource__set_loop(lVar1,KDONOCOODJE,0);
      if (*(long *)JOPAPOBNEBI != 0) {
        UnityEngine_AudioSource__set_volume
                  (CONCAT44(in_register_00005004,JOILPPKMILL),*(long *)JOPAPOBNEBI,0);
        if (*(long *)JOPAPOBNEBI != 0) {
          UnityEngine_AudioSource__set_playOnAwake(*(long *)JOPAPOBNEBI,ELGLKECMBDF,0);
          lVar1 = *(long *)JOPAPOBNEBI;
          if (lVar1 != 0) {
            if (pcRam000000000191b648 == (code *)0x0) {
              pcRam000000000191b648 = (code *)func_0x00a678c4(&UNK_005a549a);
            }
                    /* WARNING: Could not recover jumptable at 0x01464c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam000000000191b648)(lVar1,BEFPOGONNLN);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public static void GIGBLEBBIEK(AudioSource JOPAPOBNEBI) { }   @0xb5cfa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void SoundScript__GIGBLEBBIEK(void *JOPAPOBNEBI)

{
  long lVar1;
  ulong uVar2;
  
  if ((bRam0000000001917246 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917246 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar1 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar1 != 0) {
    uVar2 = DAFNMLEKHAD__BMMOMBGDEKF(lVar1,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(JOPAPOBNEBI,0,0);
      if ((uVar2 & 1) != 0) {
        if (JOPAPOBNEBI != (void *)0x0) {
          if (pcRam000000000191b620 == (code *)0x0) {
            pcRam000000000191b620 = (code *)func_0x00a678c4(&UNK_005a4326,0);
          }
                    /* WARNING: Could not recover jumptable at 0x01464c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191b620)(JOPAPOBNEBI,0);
          return;
        }
        goto LAB_00c5d08c;
      }
    }
    return;
  }
LAB_00c5d08c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public static void NEOEGHNJJNF() { }   @0xb6855c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void SoundScript__NEOEGHNJJNF(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam000000000191724b & 1) == 0) {
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam000000000191724b = 1;
  }
  iVar1 = UnityEngine_Random__Range(0,1000,0);
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_SoundScript_TypeInfo);
  }
  lVar4 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 8);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(uint *)(lVar4 + 0x18) <= (uint)(500 < iVar1)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  lVar4 = *(long *)(lVar4 + (ulong)(500 < iVar1) * 8 + 0x20);
  if ((bRam0000000001917246 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917246 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar2 != 0) {
    uVar3 = DAFNMLEKHAD__BMMOMBGDEKF(lVar2,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(lVar4,0,0);
      if ((uVar3 & 1) != 0) {
        if (lVar4 != 0) {
          if (pcRam000000000191b620 == (code *)0x0) {
            pcRam000000000191b620 = (code *)func_0x00a678c4(&UNK_005a4326,0);
          }
                    /* WARNING: Could not recover jumptable at 0x01464c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191b620)(lVar4,0);
          return;
        }
        goto LAB_00c5d08c;
      }
    }
    return;
  }
LAB_00c5d08c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



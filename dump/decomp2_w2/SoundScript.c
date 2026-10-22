// ==== public static bool FIGKLLNAMLG(AudioSource JOPAPOBNEBI) { }   @0xb67a8c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool SoundScript__FIGKLLNAMLG(void *JOPAPOBNEBI)

{
  bool bVar1;
  void *__this;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  if ((bRam0000000001917244 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001917244 = 1;
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
  __this = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (__this == (void *)0x0) {
LAB_00c67c4c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  bVar1 = DAFNMLEKHAD__BMMOMBGDEKF(__this);
  if (bVar1) {
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(JOPAPOBNEBI,0,0);
    if ((uVar2 & 1) != 0) {
      fVar4 = (float)UnityEngine_Time__get_time(0);
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(float *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xc0) < fVar4) {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) == '\0') {
          if (JOPAPOBNEBI != (void *)0x0) {
            UnityEngine_AudioSource__Play(JOPAPOBNEBI,0);
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            *(void **)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xb8) = JOPAPOBNEBI;
            fVar4 = (float)UnityEngine_Time__get_time(0);
            lVar3 = UnityEngine_AudioSource__get_clip(JOPAPOBNEBI,0);
            if (lVar3 != 0) {
              fVar5 = (float)UnityEngine_AudioClip__get_length(lVar3,0);
              *(float *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xc0) = fVar4 + fVar5;
              return true;
            }
          }
          goto LAB_00c67c4c;
        }
      }
    }
  }
  return false;
}


// ==== public static void FJCLBOAMFFN() { }   @0xb683bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void SoundScript__FJCLBOAMFFN(void)

{
  bool bVar1;
  uint uVar2;
  void *__this;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  if ((bRam0000000001917249 & 1) == 0) {
    func_0x00a67900(&System_Random_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001917249 = 1;
  }
  plVar4 = (long *)func_0x00a67b44(_System_Random_TypeInfo);
  System_Random___ctor(plVar4,0);
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_SoundScript_TypeInfo + 0xb8) != 0) && (plVar4 != (long *)0x0)) {
    uVar2 = (**(code **)(*plVar4 + 0x1a8))
                      (plVar4,*(undefined4 *)(**(long **)(_SoundScript_TypeInfo + 0xb8) + 0x18),
                       *(undefined8 *)(*plVar4 + 0x1b0));
    lVar6 = *(long *)(_SoundScript_TypeInfo + 0xb8);
    if (uVar2 == *(uint *)(lVar6 + 0x108)) {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_SoundScript_TypeInfo);
        lVar6 = *(long *)(_SoundScript_TypeInfo + 0xb8);
      }
      fVar8 = *(float *)(lVar6 + 0x10c);
      fVar7 = (float)UnityEngine_Time__get_time(0);
      if (fVar7 < fVar8) {
        iVar5 = 4;
        do {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_SoundScript_TypeInfo);
          }
          if (**(long **)(_SoundScript_TypeInfo + 0xb8) == 0) goto LAB_00c68554;
          uVar2 = UnityEngine_Random__Range
                            (0,*(undefined4 *)(**(long **)(_SoundScript_TypeInfo + 0xb8) + 0x18),0);
        } while ((uVar2 == *(uint *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x108)) &&
                (bVar1 = iVar5 != 0, iVar5 = iVar5 + -1, bVar1));
      }
    }
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_SoundScript_TypeInfo);
    }
    *(uint *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x108) = uVar2;
    fVar7 = (float)UnityEngine_Time__get_time(0);
    lVar6 = **(long **)(_SoundScript_TypeInfo + 0xb8);
    *(float *)((long)*(long **)(_SoundScript_TypeInfo + 0xb8) + 0x10c) = fVar7 + 2.0;
    if (lVar6 != 0) {
      if (*(uint *)(lVar6 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      lVar6 = *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
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
      __this = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (__this != (void *)0x0) {
        bVar1 = DAFNMLEKHAD__BMMOMBGDEKF(__this);
        if (bVar1) {
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar3 = UnityEngine_Object__op_Inequality(lVar6,0,0);
          if ((uVar3 & 1) != 0) {
            if (lVar6 != 0) {
              if (pcRam000000000191b620 == (code *)0x0) {
                pcRam000000000191b620 = (code *)func_0x00a678c4(&UNK_005a4326,0);
              }
                    /* WARNING: Could not recover jumptable at 0x01464c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam000000000191b620)(lVar6,0);
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
  }
LAB_00c68554:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



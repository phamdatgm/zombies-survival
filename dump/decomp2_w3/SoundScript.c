// ==== public static void HCPNLKMMKFA() { }   @0xb5e620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void SoundScript__HCPNLKMMKFA(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001917242 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001917242 = 1;
  }
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xb8);
  if (lVar2 != 0) {
    uVar1 = UnityEngine_AudioSource__get_isPlaying(lVar2,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xb8);
    if (lVar2 != 0) {
      if (pcRam000000000191b628 == (code *)0x0) {
        pcRam000000000191b628 = (code *)func_0x00a678c4(&UNK_005b29ad,0);
      }
                    /* WARNING: Could not recover jumptable at 0x01464c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191b628)(lVar2,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void DPJAADHMLIA() { }   @0xb67c50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void SoundScript__DPJAADHMLIA(void *__this)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if ((bRam0000000001917245 & 1) == 0) {
    func_0x00a67900(&UnityEngine_AudioSource___TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001917245 = 1;
  }
  if (*(char *)((long)__this + 0xc0) != '\0') {
    return;
  }
  *(undefined1 *)((long)__this + 0xc0) = 1;
  if (*(long *)((long)__this + 0x20) != 0) {
    uVar2 = func_0x00a679a0(_UnityEngine_AudioSource___TypeInfo,
                            *(undefined4 *)(*(long *)((long)__this + 0x20) + 0x18));
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_SoundScript_TypeInfo);
    }
    uVar6 = 0;
    **(undefined8 **)(_SoundScript_TypeInfo + 0xb8) = uVar2;
    lVar5 = 0x20;
    while( true ) {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar3 = **(long **)(_SoundScript_TypeInfo + 0xb8);
      if (lVar3 == 0) goto LAB_00c6820c;
      if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar6) {
        if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c6820c;
        uVar2 = func_0x00a679a0(_UnityEngine_AudioSource___TypeInfo,
                                *(undefined4 *)(*(long *)((long)__this + 0x28) + 0x18));
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_SoundScript_TypeInfo);
        }
        lVar3 = _SoundScript_TypeInfo;
        uVar6 = 0;
        *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 8) = uVar2;
        lVar5 = 0x20;
        goto LAB_00c67dd8;
      }
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar3 = **(long **)(_SoundScript_TypeInfo + 0xb8);
        if (lVar3 == 0) goto LAB_00c6820c;
      }
      lVar4 = *(long *)((long)__this + 0x20);
      if (lVar4 == 0) goto LAB_00c6820c;
      if ((*(uint *)(lVar4 + 0x18) <= uVar6) || (*(uint *)(lVar3 + 0x18) <= uVar6)) break;
      SoundScript__JNDBAPHNLIC
                (0x3f800000,__this,lVar3 + lVar5,*(undefined8 *)(lVar4 + uVar6 * 8 + 0x20),0,0);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 8;
    }
LAB_00c68210:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  goto LAB_00c6820c;
LAB_00c67dd8:
  if (*(int *)(lVar3 + 0xe0) == 0) {
    func_0x00a67a30(lVar3);
    lVar3 = _SoundScript_TypeInfo;
  }
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar4 == 0) goto LAB_00c6820c;
  if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar6) {
    if (*(long *)((long)__this + 0x30) == 0) goto LAB_00c6820c;
    uVar2 = func_0x00a679a0(_UnityEngine_AudioSource___TypeInfo,
                            *(undefined4 *)(*(long *)((long)__this + 0x30) + 0x18));
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_SoundScript_TypeInfo);
    }
    lVar3 = _SoundScript_TypeInfo;
    uVar6 = 0;
    *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x10) = uVar2;
    lVar5 = 0x20;
    goto LAB_00c67eb4;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    func_0x00a67a30(lVar3);
    lVar4 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_00c6820c;
  }
  lVar3 = *(long *)((long)__this + 0x28);
  if (lVar3 == 0) goto LAB_00c6820c;
  if ((*(uint *)(lVar3 + 0x18) <= uVar6) || (*(uint *)(lVar4 + 0x18) <= uVar6)) goto LAB_00c68210;
  SoundScript__JNDBAPHNLIC
            (0x3f800000,__this,lVar4 + lVar5,*(undefined8 *)(lVar3 + uVar6 * 8 + 0x20),0,0);
  uVar6 = uVar6 + 1;
  lVar5 = lVar5 + 8;
  lVar3 = _SoundScript_TypeInfo;
  goto LAB_00c67dd8;
LAB_00c67eb4:
  if (*(int *)(lVar3 + 0xe0) == 0) {
    func_0x00a67a30(lVar3);
    lVar3 = _SoundScript_TypeInfo;
  }
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar4 == 0) goto LAB_00c6820c;
  iVar1 = *(int *)(lVar4 + 0x18);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    func_0x00a67a30(lVar3);
  }
  if ((long)iVar1 <= (long)uVar6) {
    SoundScript__JNDBAPHNLIC
              (0x3f800000,__this,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x18,
               *(undefined8 *)((long)__this + 0x38),0,0);
    SoundScript__JNDBAPHNLIC
              (0x3f333333,__this,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x20,
               *(undefined8 *)((long)__this + 0x40),0,0);
    SoundScript__JNDBAPHNLIC
              (0x3f800000,__this,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x28,
               *(undefined8 *)((long)__this + 0x48),0,0);
    SoundScript__JNDBAPHNLIC
              (0x3f800000,__this,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x38,
               *(undefined8 *)((long)__this + 0x58),0,0);
    lVar5 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x40);
    if (lVar5 == 0) goto LAB_00c6820c;
    UnityEngine_AudioSource__set_pitch(0x3fc00000,lVar5,0);
    SoundScript__JNDBAPHNLIC
              (0x3f800000,__this,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x48,
               *(undefined8 *)((long)__this + 0x68),0,0);
    SoundScript__JNDBAPHNLIC
              (0x3f800000,__this,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x50,
               *(undefined8 *)((long)__this + 0x70),0,0);
    SoundScript__JNDBAPHNLIC
              (0x3f800000,__this,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x58,
               *(undefined8 *)((long)__this + 0x78),0,0);
    SoundScript__JNDBAPHNLIC
              (0x3f800000,__this,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x60,
               *(undefined8 *)((long)__this + 0x80),0,0);
    SoundScript__JNDBAPHNLIC
              (0x3f800000,__this,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x68,
               *(undefined8 *)((long)__this + 0x88),0,0);
    SoundScript__JNDBAPHNLIC
              (0x3f0ccccd,__this,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x70,
               *(undefined8 *)((long)__this + 0x90),0,1);
    SoundScript__JNDBAPHNLIC
              (0x3f800000,__this,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x80,
               *(undefined8 *)((long)__this + 0x98),0,0);
    SoundScript__JNDBAPHNLIC
              (0x3f800000,__this,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x88,
               *(undefined8 *)((long)__this + 0xa0),0,0);
    SoundScript__JNDBAPHNLIC
              (0x3f800000,__this,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x90,
               *(undefined8 *)((long)__this + 0xa8),0,0);
    lVar5 = *(long *)((long)__this + 0xb8);
    if (lVar5 == 0) goto LAB_00c6820c;
    uVar6 = 0;
    goto LAB_00c6815c;
  }
  lVar3 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x10);
  if ((lVar3 == 0) || (lVar4 = *(long *)((long)__this + 0x30), lVar4 == 0)) goto LAB_00c6820c;
  if ((*(uint *)(lVar4 + 0x18) <= uVar6) || (*(uint *)(lVar3 + 0x18) <= uVar6)) goto LAB_00c68210;
  SoundScript__JNDBAPHNLIC
            (0x3f800000,__this,lVar3 + lVar5,*(undefined8 *)(lVar4 + uVar6 * 8 + 0x20),0,0);
  uVar6 = uVar6 + 1;
  lVar5 = lVar5 + 8;
  lVar3 = _SoundScript_TypeInfo;
  goto LAB_00c67eb4;
  while( true ) {
    if ((*(uint *)(lVar3 + 0x18) <= uVar6) || (*(uint *)(lVar5 + 0x18) <= uVar6)) goto LAB_00c68210;
    SoundScript__JNDBAPHNLIC
              (0x3f4ccccd,__this,lVar5 + uVar6 * 8 + 0x20,*(undefined8 *)(lVar3 + uVar6 * 8 + 0x20),
               0,1);
    if (uVar6 == 0) {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar5 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa8);
      if (lVar5 == 0) break;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_00c68210;
      *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0) =
           *(undefined8 *)(lVar5 + 0x20);
    }
    lVar5 = *(long *)((long)__this + 0xb8);
    uVar6 = uVar6 + 1;
    if (lVar5 == 0) break;
LAB_00c6815c:
    if ((long)*(int *)(lVar5 + 0x18) <= (long)uVar6) {
      return;
    }
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar5 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa8);
    if ((lVar5 == 0) || (lVar3 = *(long *)((long)__this + 0xb8), lVar3 == 0)) break;
  }
LAB_00c6820c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public static void HCEFONCADKE(AudioSource JOPAPOBNEBI, bool GIKHENEMKGM = False) { }   @0xb63324

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void SoundScript__HCEFONCADKE(void *JOPAPOBNEBI,bool GIKHENEMKGM)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((bRam000000000191724a & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&System_Random_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam000000000191724a = 1;
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
  if (lVar2 == 0) goto LAB_00c6357c;
  uVar3 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar2,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(JOPAPOBNEBI,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar3 = UnityEngine_Object__op_Equality(JOPAPOBNEBI,uVar5,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar3 = UnityEngine_Object__op_Equality(JOPAPOBNEBI,uVar5,0);
    if (((uVar3 & 1) != 0) && (GIKHENEMKGM)) {
      if (JOPAPOBNEBI == (void *)0x0) goto LAB_00c6357c;
      UnityEngine_AudioSource__set_volume(0x3f4ccccd,JOPAPOBNEBI,0);
      plVar4 = (long *)func_0x00a67b44(_System_Random_TypeInfo);
      System_Random___ctor(plVar4,0);
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar2 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa8);
      if ((lVar2 == 0) || (plVar4 == (long *)0x0)) goto LAB_00c6357c;
      uVar1 = (**(code **)(*plVar4 + 0x1a8))
                        (plVar4,*(undefined4 *)(lVar2 + 0x18),*(undefined8 *)(*plVar4 + 0x1b0));
      lVar2 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa8);
      if (lVar2 == 0) goto LAB_00c6357c;
      if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      JOPAPOBNEBI = *(void **)(lVar2 + (long)(int)uVar1 * 8 + 0x20);
      *(void **)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0) = JOPAPOBNEBI;
    }
    if (JOPAPOBNEBI == (void *)0x0) {
LAB_00c6357c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  else {
    if (JOPAPOBNEBI == (void *)0x0) goto LAB_00c6357c;
    UnityEngine_AudioSource__set_volume(0x3f4ccccd,JOPAPOBNEBI,0);
  }
  if (pcRam000000000191b620 == (code *)0x0) {
    pcRam000000000191b620 = (code *)func_0x00a678c4(&UNK_005a4326,0);
  }
                    /* WARNING: Could not recover jumptable at 0x01464c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191b620)(JOPAPOBNEBI,0);
  return;
}



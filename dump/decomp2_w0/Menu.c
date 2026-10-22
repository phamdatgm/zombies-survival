// ==== public void CBHHIGMKCJC() { }   @0xb32a48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__CBHHIGMKCJC(void *__this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((bRam00000000019170d1 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam00000000019170d1 = 1;
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
    lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
  }
  else {
    lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if ((lVar2 == 0) || (uVar1 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar2,0), lVar6 == 0)) goto LAB_00c32d04;
  DAFNMLEKHAD__FCHNCOPLHGH(lVar6,~uVar1 & 1,0);
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar6 == 0) goto LAB_00c32d04;
  uVar3 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar6,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar6 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
    if (lVar6 != 0) {
      UnityEngine_AudioSource__Stop(lVar6,0);
      lVar6 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
      if (lVar6 != 0) {
        if (pcRam000000000191b628 == (code *)0x0) {
          pcRam000000000191b628 = (code *)func_0x00a678c4(&UNK_005b29ad,0);
        }
                    /* WARNING: Could not recover jumptable at 0x01464c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191b628)(lVar6,1);
        return;
      }
    }
    goto LAB_00c32d04;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
LAB_00c32be8:
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar6 = *(long *)(_Menu_TypeInfo + 0xb8);
    if (*(char *)(lVar6 + 0xc) != '\0') {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar6 = *(long *)(_Menu_TypeInfo + 0xb8);
    }
    if (*(char *)(lVar6 + 10) != '\0') {
      return;
    }
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar6 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
    if (lVar6 == 0) {
LAB_00c32d04:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar3 = UnityEngine_AudioSource__get_isPlaying(lVar6,0);
    if ((uVar3 & 1) != 0) {
      return;
    }
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iVar5 = 0;
    lVar6 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
  }
  else {
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar6 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
    if (lVar6 == 0) goto LAB_00c32d04;
    uVar3 = UnityEngine_AudioSource__get_isPlaying(lVar6,0);
    if ((uVar3 & 1) != 0) goto LAB_00c32be8;
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iVar5 = 1;
    lVar6 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
  }
  if ((bRam000000000191724a & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo,iVar5,0);
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
  uVar3 = UnityEngine_Object__op_Inequality(lVar6,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar3 = UnityEngine_Object__op_Equality(lVar6,uVar7,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar3 = UnityEngine_Object__op_Equality(lVar6,uVar7,0);
    if (((uVar3 & 1) != 0) && (iVar5 != 0)) {
      if (lVar6 == 0) goto LAB_00c6357c;
      UnityEngine_AudioSource__set_volume(0x3f4ccccd,lVar6,0);
      plVar4 = (long *)func_0x00a67b44(_System_Random_TypeInfo);
      System_Random___ctor(plVar4,0);
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar6 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa8);
      if ((lVar6 == 0) || (plVar4 == (long *)0x0)) goto LAB_00c6357c;
      uVar1 = (**(code **)(*plVar4 + 0x1a8))
                        (plVar4,*(undefined4 *)(lVar6 + 0x18),*(undefined8 *)(*plVar4 + 0x1b0));
      lVar6 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa8);
      if (lVar6 == 0) goto LAB_00c6357c;
      if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      lVar6 = *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
      *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0) = lVar6;
    }
    if (lVar6 == 0) {
LAB_00c6357c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  else {
    if (lVar6 == 0) goto LAB_00c6357c;
    UnityEngine_AudioSource__set_volume(0x3f4ccccd,lVar6,0);
  }
  if (pcRam000000000191b620 == (code *)0x0) {
    pcRam000000000191b620 = (code *)func_0x00a678c4(&UNK_005a4326,0);
  }
                    /* WARNING: Could not recover jumptable at 0x01464c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191b620)(lVar6,0);
  return;
}


// ==== private void OnApplicationFocus(bool BBOGLNPKKGI) { }   @0xb33430

/* WARNING: Removing unreachable block (ram,0x00c60f74) */
/* WARNING: Removing unreachable block (ram,0x00c60f88) */
/* WARNING: Removing unreachable block (ram,0x00c60f90) */
/* WARNING: Removing unreachable block (ram,0x00c60f9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__OnApplicationFocus(void *__this,bool BBOGLNPKKGI)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  void *__this_00;
  long lVar4;
  long lVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  byte bVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  
  if (BBOGLNPKKGI) {
    return;
  }
  if ((bRam0000000001917106 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917106 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) {
LAB_00c335c0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) != '\0') {
    return;
  }
  fVar11 = (float)UnityEngine_Time__get_timeScale(0);
  if (fVar11 <= 0.0) {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
     (__this_00 = *(void **)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
     __this_00 == (void *)0x0)) goto LAB_00c335c0;
  *(undefined1 *)((long)__this_00 + 0x3f1) = 1;
  if ((bRam000000000191721e & 1) == 0) {
    func_0x00a67900(&AdvController_TypeInfo,0,0);
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&GUIGameplay_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam000000000191721e = 1;
  }
  *(undefined1 *)((long)__this_00 + 0xbc) = 0;
  *(undefined4 *)((long)__this_00 + 0xb8) = 0;
  fVar11 = (float)UnityEngine_Time__get_timeScale(0);
  if (0.0 < fVar11) {
    UnityEngine_Time__set_timeScale(0,0);
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) != 0) {
    uVar7 = *(undefined8 *)((long)__this_00 + 0x3d8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar7,0,0);
    if ((uVar3 & 1) != 0) {
      uVar7 = *(undefined8 *)((long)__this_00 + 0x3e0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)((long)__this_00 + 0x3e0) == 0) goto LAB_00c6153c;
        uVar3 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this_00 + 0x3e0),0);
        if ((uVar3 & 1) != 0) {
          *(undefined8 *)((long)__this_00 + 0x3d8) = *(undefined8 *)((long)__this_00 + 0x3e0);
        }
      }
      uVar7 = *(undefined8 *)((long)__this_00 + 1000);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)((long)__this_00 + 1000) == 0) goto LAB_00c6153c;
        uVar3 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this_00 + 1000),0);
        if ((uVar3 & 1) != 0) {
          *(undefined8 *)((long)__this_00 + 0x3d8) = *(undefined8 *)((long)__this_00 + 1000);
        }
      }
    }
    uVar7 = *(undefined8 *)((long)__this_00 + 0x3d8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar3 & 1) != 0) {
      uVar7 = *(undefined8 *)((long)__this_00 + 0x3d8);
      uVar10 = *(undefined8 *)((long)__this_00 + 0x3e0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Equality(uVar7,uVar10,0);
      if ((uVar3 & 1) == 0) {
        bVar9 = 1;
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        bVar9 = *(byte *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x34);
      }
      lVar8 = *(long *)((long)__this_00 + 0x3d8);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar4 == 0) goto LAB_00c6153c;
      bVar1 = Level__get_IsEvent(lVar4,0);
      bVar9 = bVar9 & (bVar1 ^ 0xff);
      lVar4 = lVar8;
      if ((bVar9 & 1) != 0) {
        lVar4 = 0;
      }
      if ((bVar9 & 1) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar5 == 0) goto LAB_00c6153c;
        uVar3 = Level__get_IsEvent(lVar5,0);
        if ((uVar3 & 1) == 0) {
          bVar6 = false;
          lVar4 = lVar8;
        }
        else {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if (lVar8 == 0) goto LAB_00c6153c;
          if (*(long *)(lVar8 + 0x50) == 0) {
            bVar6 = false;
          }
          else {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
              if (lVar8 == 0) goto LAB_00c6153c;
            }
            if (*(void **)(lVar8 + 0x50) == (void *)0x0) goto LAB_00c6153c;
            iVar2 = EventContest__get_TimeLeft(*(void **)(lVar8 + 0x50));
            bVar6 = 300 < iVar2;
          }
        }
      }
      else {
        bVar6 = true;
        lVar4 = lVar8;
      }
      if (lVar4 == 0) goto LAB_00c6153c;
      UnityEngine_GameObject__SetActive(lVar4,bVar6,0);
    }
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
  lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar8 == 0) goto LAB_00c6153c;
  uVar3 = DAFNMLEKHAD__BMMOMBGDEKF(lVar8,0);
  if ((uVar3 & 1) != 0) {
    if ((*(long *)((long)__this_00 + 0x20) == 0) ||
       (lVar8 = *(long *)(*(long *)((long)__this_00 + 0x20) + 0x48), lVar8 == 0)) goto LAB_00c6153c;
    uVar3 = UnityEngine_AudioSource__get_isPlaying(lVar8,0);
    if ((uVar3 & 1) != 0) {
      if ((*(long *)((long)__this_00 + 0x20) == 0) ||
         (lVar8 = *(long *)(*(long *)((long)__this_00 + 0x20) + 0x48), lVar8 == 0))
      goto LAB_00c6153c;
      UnityEngine_AudioSource__Pause(lVar8,0);
    }
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
  lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar8 == 0) goto LAB_00c6153c;
  uVar3 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar8,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar8 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
    if (lVar8 == 0) goto LAB_00c6153c;
    uVar3 = UnityEngine_AudioSource__get_isPlaying(lVar8,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar8 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
      if (lVar8 == 0) goto LAB_00c6153c;
      UnityEngine_AudioSource__Pause(lVar8,0);
    }
  }
  if (*(char *)(*(long *)(_AdvController_TypeInfo + 0xb8) + 8) == '\0') {
    if (*(long *)((long)__this_00 + 0x438) == 0) goto LAB_00c6153c;
    uVar3 = UnityEngine_GameObject__get_activeInHierarchy(*(long *)((long)__this_00 + 0x438),0);
    if ((uVar3 & 1) == 0) {
      uVar12 = UnityEngine_AudioListener__get_volume(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x14) = uVar12;
      UnityEngine_AudioListener__set_volume(0,0);
    }
  }
  if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(long *)((long)__this_00 + 0x410) == 0) goto LAB_00c6153c;
  iVar2 = *(int *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4);
  if (iVar2 < *(int *)(*(long *)((long)__this_00 + 0x410) + 0x18)) {
    if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      if (-1 < *(int *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4)) goto LAB_00c61404;
      goto LAB_00c6147c;
    }
    if (iVar2 < 0) goto LAB_00c6147c;
LAB_00c61404:
    if ((*(long *)((long)__this_00 + 0x50) == 0) ||
       (lVar8 = UnityEngine_Component__get_gameObject(*(long *)((long)__this_00 + 0x50),0),
       lVar8 == 0)) goto LAB_00c6153c;
    uVar3 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
    if ((uVar3 & 1) == 0) goto LAB_00c6147c;
    if ((*(long *)((long)__this_00 + 0x78) == 0) ||
       (lVar8 = UnityEngine_Component__get_gameObject(*(long *)((long)__this_00 + 0x78),0),
       lVar8 == 0)) goto LAB_00c6153c;
    uVar3 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
    if ((uVar3 & 1) == 0) goto LAB_00c6147c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xb) = 1;
    if (*(long *)((long)__this_00 + 0x50) == 0) goto LAB_00c6153c;
    GUIWindow__JGDCBENNDFO(*(long *)((long)__this_00 + 0x50),0,0);
  }
  else {
LAB_00c6147c:
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xb) = 0;
  }
  GUIGameplay__CBFONCCJIEE(__this_00);
  GUIGameplay__LLAEHJGOFLG(__this_00);
  GUIGameplay__IMJEJKHBIMO(__this_00);
  GUIGameplay__ODHAOMJKKAE(__this_00);
  lVar8 = *(long *)((long)__this_00 + 0x68);
  if (*(char *)((long)__this_00 + 0x3f1) == '\0') {
    if (lVar8 == 0) goto LAB_00c6153c;
  }
  else {
    if (lVar8 == 0) goto LAB_00c6153c;
    *(undefined1 *)(lVar8 + 0x21) = 0;
    *(undefined1 *)(lVar8 + 0x23) = 0;
  }
  GUIWindow__HEGIHOAJOKK(lVar8,0,0);
  if (*(char *)((long)__this_00 + 0x3f1) != '\0') {
    lVar8 = *(long *)((long)__this_00 + 0x68);
    if (lVar8 == 0) {
LAB_00c6153c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    *(undefined1 *)(lVar8 + 0x21) = 1;
    *(undefined1 *)(lVar8 + 0x23) = 1;
  }
  *(undefined1 *)((long)__this_00 + 0x3f1) = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 10) = 1;
  return;
}


// ==== public void OCCACLIDKCM() { }   @0xb337b4

/* WARNING: Removing unreachable block (ram,0x00c33ccc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__OCCACLIDKCM(void *__this)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  long lStack_78;
  
  if ((bRam00000000019170d6 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_Transform_TypeInfo);
    func_0x00a67900(&Str_story);
    func_0x00a67900(&Str_map);
    func_0x00a67900(&Str_garage);
    func_0x00a67900(&Str_credits);
    func_0x00a67900(&Str_rating);
    func_0x00a67900(&Str_achievements);
    func_0x00a67900(&Str_CheckForConsoleVersion);
    func_0x00a67900(&Str_main_menu);
    bRam00000000019170d6 = 1;
  }
  uVar2 = Menu__OIDILFECPNP(__this);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(_Str_CheckForConsoleVersion,0,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
    return;
  }
  uVar11 = *(undefined8 *)((long)__this + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if ((*(long *)((long)__this + 0x20) == 0) ||
     (lVar4 = *(long *)(*(long *)((long)__this + 0x20) + 0x20), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  plVar5 = (long *)UnityEngine_Transform__GetEnumerator(lVar4,0);
  bVar1 = (uVar2 & 1) == 0;
  uVar8 = 0x42700000;
  if (bVar1) {
    uVar8 = 0;
  }
  uVar9 = 0x42b00000;
  if (bVar1) {
    uVar9 = 0;
  }
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  do {
    lVar4 = *plVar5;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == _System_Collections_IEnumerator_TypeInfo) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_00c33a04;
        }
        uVar2 = uVar2 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar2 != 0);
    }
    puVar6 = (undefined8 *)func_0x00a9e6c4(plVar5,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00c33a04:
    uVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar2 & 1) == 0) {
      plVar5 = (long *)func_0x00a67a34(plVar5,_System_IDisposable_TypeInfo);
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar5;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 == 0) goto LAB_00c33c60;
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *plVar5;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == _System_Collections_IEnumerator_TypeInfo) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_00c33a64;
        }
        uVar2 = uVar2 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar2 != 0);
    }
    puVar6 = (undefined8 *)func_0x00a9e6c4(plVar5,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00c33a64:
    plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (plVar7 == (long *)0x0) {
LAB_00c33cb8:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
       (*(long *)(*(long *)(*plVar7 + 200) +
                  (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8) !=
        _UnityEngine_Transform_TypeInfo)) {
      func_0x00a67eec(plVar7);
      goto LAB_00c33cb8;
    }
    uVar11 = UnityEngine_Object__get_name(plVar7,0);
    uVar2 = System_String__op_Equality(uVar11,_Str_garage,0);
    if ((uVar2 & 1) == 0) {
      uVar11 = UnityEngine_Object__get_name(plVar7,0);
      uVar2 = System_String__op_Equality(uVar11,_Str_main_menu,0);
      if ((uVar2 & 1) != 0) goto LAB_00c33b54;
      uVar11 = UnityEngine_Object__get_name(plVar7,0);
      uVar2 = System_String__op_Equality(uVar11,_Str_map,0);
      if ((uVar2 & 1) != 0) goto LAB_00c33b54;
      uVar11 = UnityEngine_Object__get_name(plVar7,0);
      uVar2 = System_String__op_Equality(uVar11,_Str_achievements,0);
      if ((uVar2 & 1) != 0) goto LAB_00c33b54;
      uVar11 = UnityEngine_Object__get_name(plVar7,0);
      uVar2 = System_String__op_Equality(uVar11,_Str_rating,0);
      if ((uVar2 & 1) != 0) goto LAB_00c33b54;
      uVar11 = UnityEngine_Object__get_name(plVar7,0);
      uVar2 = System_String__op_Equality(uVar11,_Str_credits,0);
      if ((uVar2 & 1) != 0) goto LAB_00c33b54;
      uVar11 = UnityEngine_Object__get_name(plVar7,0);
      uVar2 = System_String__op_Equality(uVar11,_Str_story,0);
      if ((uVar2 & 1) != 0) {
        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                  (plVar7,&lStack_78,_Method_UnityEngine_Component_GetComponent_RectTransform___);
        lVar4 = lStack_78;
        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                  (plVar7,&lStack_78,_Method_UnityEngine_Component_GetComponent_RectTransform___);
        if (lStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar12 = UnityEngine_RectTransform__get_offsetMin(lStack_78,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        UnityEngine_RectTransform__set_offsetMin(uVar12,uVar9,lVar4,0);
      }
    }
    else {
LAB_00c33b54:
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (plVar7,&lStack_78,_Method_UnityEngine_Component_GetComponent_RectTransform___);
      lVar4 = lStack_78;
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (plVar7,&lStack_78,_Method_UnityEngine_Component_GetComponent_RectTransform___);
      if (lStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar12 = UnityEngine_RectTransform__get_offsetMin(lStack_78,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      UnityEngine_RectTransform__set_offsetMin(uVar12,uVar8,lVar4,0);
    }
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar10 = piVar10 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar10 + -2) == _System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_00c33c7c;
    }
  }
LAB_00c33c60:
  puVar6 = (undefined8 *)func_0x00a9e6c4(plVar5,_System_IDisposable_TypeInfo,0);
LAB_00c33c7c:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


// ==== public void .ctor() { }   @0xb3640c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu___ctor(void *__this)

{
  *(undefined4 *)((long)__this + 0x9c) = 0x29a;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public void EFBCOMMLAGE() { }   @0xb367ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__EFBCOMMLAGE(void *__this)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam00000000019170de & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Galaxy_Nexus);
    bRam00000000019170de = 1;
  }
  uVar5 = *(undefined8 *)((long)__this + 0x40);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)((long)__this + 0x40) == 0) goto LAB_00c369c0;
    AnalyticsController__EFHKCIDGLHC(*(long *)((long)__this + 0x40),0);
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
  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar4 == 0) {
LAB_00c369c0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  iVar1 = *(int *)(lVar4 + 0x90);
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
  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar4 == 0) goto LAB_00c369c0;
  if (iVar1 < 2) {
    DAFNMLEKHAD__EMKKNFNKNBH(lVar4,*(int *)(lVar4 + 0x90) + 1,0);
    lVar4 = UnityEngine_SystemInfo__get_deviceModel(0);
    if (lVar4 == 0) goto LAB_00c369c0;
    uVar3 = System_String__Contains(lVar4,_Str_Galaxy_Nexus,0);
    if ((uVar3 & 1) == 0) goto LAB_00c369c4;
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
    lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_00c369c0;
    if (*(int *)(lVar4 + 0x90) != 2) goto LAB_00c369c4;
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
    lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_00c369c0;
  }
  DAFNMLEKHAD__EMKKNFNKNBH(lVar4,0,0);
LAB_00c369c4:
  if ((bRam00000000019170f7 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam00000000019170f7 = 1;
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
  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  iVar1 = *(int *)(lVar4 + 0x90);
  if (iVar1 == 2) {
    uVar2 = 2;
  }
  else {
    if (iVar1 == 1) {
      UnityEngine_QualitySettings__SetQualityLevel(1,0);
      if (pcRam000000000191bbc8 == (code *)0x0) {
        pcRam000000000191bbc8 = (code *)func_0x00a678c4(&UNK_005ad66d);
      }
                    /* WARNING: Could not recover jumptable at 0x014722a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191bbc8)(1);
      return;
    }
    if (iVar1 != 0) {
      return;
    }
    uVar2 = 0;
  }
  if (pcRam000000000191bbd0 == (code *)0x0) {
    pcRam000000000191bbd0 = (code *)func_0x00a678c4(&UNK_005a9eb7,0);
  }
                    /* WARNING: Could not recover jumptable at 0x01472220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191bbd0)(uVar2,1);
  return;
}


// ==== public void CDFHCNMGCFI() { }   @0xb36f48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__CDFHCNMGCFI(void *__this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((bRam00000000019170e2 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam00000000019170e2 = 1;
  }
  if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c371c8;
  lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x578);
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
  if (lVar1 == 0) goto LAB_00c371c8;
  lVar1 = DAFNMLEKHAD__DKJLCJPBPPN(lVar1,0xffffffff,1,0);
  if (lVar1 == 0) {
LAB_00c37054:
    bVar4 = false;
  }
  else {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) goto LAB_00c37054;
    if ((*(long *)((long)__this + 0x20) == 0) ||
       (lVar1 = *(long *)(*(long *)((long)__this + 0x20) + 0x478), lVar1 == 0)) goto LAB_00c371c8;
    uVar2 = UnityEngine_GameObject__get_activeSelf(lVar1,0);
    lVar1 = 0;
    if ((uVar2 & 1) == 0) {
      lVar1 = lVar6;
    }
    if ((uVar2 & 1) == 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar5 == 0) goto LAB_00c371c8;
      if (*(int *)(lVar5 + 0x10) == 0) {
        bVar4 = true;
      }
      else {
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
        lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if ((lVar6 == 0) || (lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar5 == 0))
        goto LAB_00c371c8;
        lVar5 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar5,*(int *)(lVar6 + 0x10) + -1,0);
        lVar6 = lVar1;
        if (lVar5 != 0) {
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
          lVar1 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if (((lVar1 == 0) || (lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar5 == 0)
              ) || (lVar1 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar5,*(int *)(lVar1 + 0x10) + -1,0),
                   lVar1 == 0)) goto LAB_00c371c8;
          uVar2 = DJKGLJOCFCE__MCDLFBJCNNA(lVar1,0);
          if ((uVar2 & 1) != 0) {
            bVar4 = true;
            goto LAB_00c37058;
          }
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar1 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar1 == 0) goto LAB_00c371c8;
        bVar4 = 99 < *(int *)(lVar1 + 0x10);
      }
    }
    else {
      bVar4 = false;
    }
  }
LAB_00c37058:
  if (lVar6 == 0) {
LAB_00c371c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam000000000191ee9a & 1) == 0) {
    func_0x00a67900(&UnityEngine_EventSystems_EventSystem_TypeInfo,bVar4,0);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_UI_SetPropertyUtility_SetStruct_bool___);
    bRam000000000191ee9a = 1;
  }
  uVar2 = UnityEngine_UI_SetPropertyUtility__SetStruct___Il2CppFullySharedGenericStructType_
                    ((char *)(lVar6 + 0xd8),&stack0xffffffffffffffdc,
                     _Method_UnityEngine_UI_SetPropertyUtility_SetStruct_bool___);
  if ((uVar2 & 1) != 0) {
    if (*(char *)(lVar6 + 0xd8) == '\0') {
      if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_EventSystems_EventSystem__get_current(0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar1 = UnityEngine_EventSystems_EventSystem__get_current(0);
        if (lVar1 == 0) {
LAB_016bdcf8:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar7 = *(undefined8 *)(lVar1 + 0x40);
        uVar3 = UnityEngine_Component__get_gameObject(lVar6,0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar2 = UnityEngine_Object__op_Equality(uVar7,uVar3,0);
        if ((uVar2 & 1) != 0) {
          if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar1 = UnityEngine_EventSystems_EventSystem__get_current(0);
          if (lVar1 == 0) goto LAB_016bdcf8;
          UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(lVar1,0,0);
        }
      }
    }
    UnityEngine_UI_Selectable__OnSetProperty(lVar6);
  }
  return;
}


// ==== private void Start() { }   @0xb37ab8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__Start(void *__this)

{
  long lVar1;
  void *__this_00;
  void *__this_01;
  
  if ((bRam00000000019170e6 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam00000000019170e6 = 1;
  }
  if (*(int *)((long)_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)((long)_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  __this_00 = _Main_TypeInfo;
  if (*(long *)(*(long *)((long)_Main_TypeInfo + 0xb8) + 8) != 0) {
    if (*(int *)((long)_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)((long)_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar1 = *(long *)(*(long *)((long)_Main_TypeInfo + 0xb8) + 8);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    __this_00 = (void *)DAFNMLEKHAD__AIMCLDENEOB(lVar1,0);
    if (((ulong)__this_00 & 1) == 0) {
      *(undefined4 *)((long)__this + 0x9c) = 0;
    }
  }
  Menu__AOJCIOLIMHF(__this_00);
  Menu__PDCEALBDDHD(__this_01);
  Menu__FMEHJALLGBK(__this);
  if ((bRam00000000019170ea & 1) == 0) {
    func_0x00a67900(&GamePadController_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Str_A);
    bRam00000000019170ea = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x21) == '\0') {
    if (*(int *)(_GamePadController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined8 *)(*(long *)(_GamePadController_TypeInfo + 0xb8) + 8) = _Str_A;
  }
  return;
}


// ==== public void CGIIKCKFFLE() { }   @0xb37f5c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__CGIIKCKFFLE(void *__this)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_18;
  
  if ((bRam00000000019170e9 & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    bRam00000000019170e9 = 1;
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
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_System_DateTime_TypeInfo);
  }
  uStack_18 = System_DateTime__get_Now(0);
  uVar1 = System_DateTime__AddMinutes(0x4034000000000000,&uStack_18,0);
  if (lVar2 != 0) {
    DAFNMLEKHAD__PCCIBHKKPAP(lVar2,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void NPHCCBBGINI() { }   @0xb387cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__NPHCCBBGINI(void *__this)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if ((bRam00000000019170ed & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam00000000019170ed = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = **(long **)(_CarController_TypeInfo + 0xb8);
  if (lVar4 != 0) {
    uStack_30 = *(undefined4 *)(lVar4 + 0x9c);
    uStack_38 = *(undefined8 *)(lVar4 + 0x94);
    uStack_40 = *(undefined8 *)(lVar4 + 0x8c);
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_40,0);
    if (iVar1 < 1) {
      return;
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
         (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 != 0)) &&
        (lVar4 = *(long *)(lVar4 + 0x2e8), lVar4 != 0)) &&
       (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 != 0)) {
      UnityEngine_GameObject__SetActive(lVar4,0,0);
      if (((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
          (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 != 0)) &&
         (lVar4 = *(long *)(lVar4 + 0x318), lVar4 != 0)) {
        GUICoins__ICMOCEHIFOI(lVar4,0);
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
        lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar4 != 0) {
          iVar1 = DAFNMLEKHAD__LOCFCFJIAIH(lVar4,0);
          lVar5 = **(long **)(_CarController_TypeInfo + 0xb8);
          if (lVar5 != 0) {
            uStack_50 = *(undefined4 *)(lVar5 + 0x9c);
            uStack_58 = *(undefined8 *)(lVar5 + 0x94);
            uStack_60 = *(undefined8 *)(lVar5 + 0x8c);
            iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_60,0);
            DAFNMLEKHAD__JLEEMPONONF(lVar4,iVar2 + iVar1,0);
            lVar4 = **(long **)(_CarController_TypeInfo + 0xb8);
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,0,0);
            uStack_78 = uStack_90;
            uStack_80 = uStack_98;
            uStack_70 = uStack_88;
            if (lVar4 != 0) {
              *(undefined4 *)(lVar4 + 0x9c) = uStack_88;
              *(undefined8 *)(lVar4 + 0x94) = uStack_90;
              *(undefined8 *)(lVar4 + 0x8c) = uStack_98;
              if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              SoundScript__GIGBLEBBIEK
                        (*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x60),0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void EKMAFPGBHDL() { }   @0xb38f44

/* WARNING: Removing unreachable block (ram,0x00c46a08) */
/* WARNING: Removing unreachable block (ram,0x00c46a18) */
/* WARNING: Removing unreachable block (ram,0x00c475f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__EKMAFPGBHDL(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  long lStack_68;
  
  if ((bRam00000000019170f2 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_TUTORIAL_GARAGE_5);
    func_0x00a67900(&Str_TUTORIAL_GARAGE_4);
    bRam00000000019170f2 = 1;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = **(undefined8 **)(_Translate_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if ((uVar4 & 1) != 0) {
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
    lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((lVar5 == 0) || (lVar5 = DAFNMLEKHAD__DKJLCJPBPPN(lVar5,0xffffffff,1,0), lVar5 == 0))
    goto LAB_00c39120;
    iVar2 = MKCBGHDANLA__IDOHKCCDGDG(lVar5,3,0);
    if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c39120;
    plVar12 = *(long **)(*(long *)((long)__this + 0x20) + 0x4d0);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c39120;
    if (iVar2 == 0) {
      puVar10 = (undefined8 *)&Str_TUTORIAL_GARAGE_5;
    }
    else {
      puVar10 = (undefined8 *)&Str_TUTORIAL_GARAGE_4;
    }
    uVar11 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,*puVar10);
    if (plVar12 == (long *)0x0) goto LAB_00c39120;
    (**(code **)(*plVar12 + 0x5a8))(plVar12,uVar11,*(undefined8 *)(*plVar12 + 0x5b0));
  }
  if (*(long *)((long)__this + 0x20) == 0) {
LAB_00c39120:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  GUIGarage__GOKBDNDJPBA(*(long *)((long)__this + 0x20),1,1,1,0);
  if ((*(long *)((long)__this + 0x20) == 0) ||
     (lVar5 = *(long *)(*(long *)((long)__this + 0x20) + 0x80), lVar5 == 0)) goto LAB_00c39120;
  if ((bRam0000000001917151 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo,1,0);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_DonateItem___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_Try_to_Show__);
    func_0x00a67900(&Str_Window__Show__);
    func_0x00a67900(&Str_null);
    func_0x00a67900(&Str____Child__);
    func_0x00a67900(&Str___last__);
    func_0x00a67900(&Str___current__);
    bRam0000000001917151 = 1;
  }
  lVar6 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar6 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar6 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x20) = _Str_Try_to_Show__;
  lVar7 = UnityEngine_Component__get_gameObject(lVar5,0);
  if (lVar7 == 0) goto LAB_00c485b8;
  uVar11 = UnityEngine_Object__get_name(lVar7,0);
  if ((*(uint *)(lVar6 + 0x18) < 2) ||
     (*(undefined8 *)(lVar6 + 0x28) = uVar11, *(uint *)(lVar6 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x30) = _Str___current__;
  uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  uVar11 = _Str_null;
  if ((uVar4 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar11 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar6 + 0x18) < 4) ||
     (*(undefined8 *)(lVar6 + 0x38) = uVar11, *(uint *)(lVar6 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x40) = _Str___last__;
  uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  uVar11 = _Str_null;
  if ((uVar4 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_00c485b8;
    uVar11 = UnityEngine_Object__get_name(lVar7,0);
  }
  uVar9 = *(uint *)(lVar6 + 0x18);
  if ((uVar9 < 6) || (*(undefined8 *)(lVar6 + 0x48) = uVar11, uVar9 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x50) = _Str____Child__;
  plVar12 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar11 = 0;
  if (plVar12 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    uVar9 = *(uint *)(lVar6 + 0x18);
  }
  if (uVar9 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x58) = uVar11;
  uVar11 = System_String__Concat(lVar6,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar11,0,0);
  uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Equality(uVar11,lVar5,0);
  if ((uVar4 & 1) != 0) {
    uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar11,0,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
  uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Equality(uVar11,lVar5,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  lVar6 = _GUIWindow_TypeInfo;
  if ((uVar4 & 1) != 0) {
    lVar6 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar6 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar6,0);
    lVar6 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar11 = **(undefined8 **)(lVar6 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Object__op_Inequality(uVar11,0,0);
  lVar6 = GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar4 = UnityEngine_Object__op_Inequality(lVar6,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(char *)(lVar5 + 0x20) == '\0') {
      if (lVar6 == 0) goto LAB_00c485b8;
      uVar4 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar4 & 1) == 0) goto LAB_00c46b74;
      uVar15 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar11 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar15;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar11 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if (((uVar4 & 1) != 0) && (*(char *)(lVar5 + 0x21) != '\0')) {
        fVar14 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar14) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),lVar6,0);
          goto LAB_00c46b74;
        }
      }
      if (lVar6 == 0) goto LAB_00c485b8;
      uVar11 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar6,uVar11,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar11 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar11 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(char *)(lVar5 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar8 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), pvVar8 == (void *)0x0)
             ) goto LAB_00c485b8;
          bVar1 = AdvController__EDNAEPDDBPJ(pvVar8);
          if (bVar1) {
            iVar2 = UnityEngine_Screen__get_width(0);
            iVar3 = UnityEngine_Screen__get_height(0);
            fVar14 = (float)iVar2 / (float)iVar3;
            if (fVar14 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
            goto LAB_00c485b8;
            uVar11 = *(undefined8 *)(lVar6 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = UnityEngine_Object__op_Equality(lVar5,uVar11,0);
            if ((uVar4 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0)
                 ) goto LAB_00c485b8;
              uVar11 = *(undefined8 *)(lVar6 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar4 = UnityEngine_Object__op_Equality(lVar5,uVar11,0);
              if ((uVar4 & 1) != 0) {
                if (1.61 <= fVar14) {
                  if ((fVar14 <= 1.61) || (1.8 <= fVar14)) {
                    if (fVar14 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar6 == 0)) goto LAB_00c485b8;
                    uVar11 = *(undefined8 *)(lVar6 + 0x70);
                    uVar16 = 0x3f51eb85;
                    uVar15 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar6 == 0)) goto LAB_00c485b8;
                    uVar11 = *(undefined8 *)(lVar6 + 0x70);
                    uVar16 = 0x3f5eb852;
                    uVar15 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar6 == 0)) goto LAB_00c485b8;
                  uVar11 = *(undefined8 *)(lVar6 + 0x70);
                  uVar16 = 0x3f733333;
                  uVar15 = 0x425c0000;
                }
                goto LAB_00c46f38;
              }
            }
            else {
              if (1.61 <= fVar14) {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar6 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar14) {
                  if (*(long *)(lVar6 + 0x240) == 0) goto LAB_00c485b8;
                  uVar4 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar6 + 0x240),0);
                  if ((uVar4 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar6 == 0)) goto LAB_00c485b8;
                  uVar11 = *(undefined8 *)(lVar6 + 0x60);
                  uVar16 = 0x3f51eb85;
                  uVar15 = 0x41a00000;
                }
                else {
                  uVar11 = *(undefined8 *)(lVar6 + 0x60);
                  uVar16 = 0x3f5eb852;
                  uVar15 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar6 == 0)) goto LAB_00c485b8;
                uVar11 = *(undefined8 *)(lVar6 + 0x60);
                uVar15 = 0xc0a00000;
                uVar16 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar15,uVar16,lVar5,uVar11);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
            goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(lVar6,0);
            goto LAB_00c46f70;
          }
        }
        GUIWindow__IPELKJAHFGL(lVar5);
      }
    }
  }
LAB_00c46f70:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar11 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar11 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(char *)(lVar5 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(lVar5);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar8 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), pvVar8 == (void *)0x0)
             ) goto LAB_00c485b8;
          bVar1 = AdvController__EDNAEPDDBPJ(pvVar8);
          if (!bVar1) goto LAB_00c47120;
          iVar2 = UnityEngine_Screen__get_width(0);
          iVar3 = UnityEngine_Screen__get_height(0);
          fVar14 = (float)iVar2 / (float)iVar3;
          if (1.51 < fVar14) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
            goto LAB_00c485b8;
            uVar11 = *(undefined8 *)(lVar6 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = UnityEngine_Object__op_Equality(lVar5,uVar11,0);
            if ((uVar4 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
              goto LAB_00c485b8;
              uVar11 = *(undefined8 *)(lVar6 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar4 = UnityEngine_Object__op_Equality(lVar5,uVar11,0);
              if ((uVar4 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                goto LAB_00c485b8;
                uVar11 = *(undefined8 *)(lVar6 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar4 = UnityEngine_Object__op_Equality(lVar5,uVar11,0);
                if ((uVar4 & 1) == 0) {
                  lVar6 = UnityEngine_Component__get_gameObject(lVar5,0);
                  if (lVar6 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar6,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar6 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar4 = UnityEngine_Object__op_Inequality(lVar6,0,0);
                  if ((uVar4 & 1) != 0) {
                    if (lVar6 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar6 + 0x2c) == 3) {
                      lVar6 = UnityEngine_Component__get_gameObject(lVar5,0);
                      if (lVar6 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar6,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar4 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar4 & 1) != 0) {
                        if (1.61 <= fVar14) {
                          if (1.8 <= fVar14) {
                            uVar16 = 0x3f59999a;
                            uVar15 = 0x42700000;
                          }
                          else {
                            uVar15 = 0x428c0000;
                            uVar16 = 0;
                          }
                        }
                        else {
                          uVar15 = 0x41a00000;
                          uVar16 = 0;
                        }
                        goto LAB_00c47304;
                      }
                    }
                  }
                  goto LAB_00c47308;
                }
                if (1.61 <= fVar14) {
                  if (fVar14 < 1.8) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                    goto LAB_00c485b8;
                    lStack_68 = *(long *)(lVar6 + 0xe8);
                    uVar16 = 0x3f733333;
                    uVar15 = 0x428c0000;
                    goto LAB_00c47304;
                  }
                  goto LAB_00c47338;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar6 + 0xe8);
                uVar15 = 0x41f00000;
              }
              else {
                if (1.61 <= fVar14) {
                  if (1.8 <= fVar14) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar6 + 0xb0);
                  uVar16 = 0x3f6e147b;
                  uVar15 = 0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar6 + 0xb0);
                uVar15 = 0xc1c80000;
              }
LAB_00c4729c:
              uVar16 = 0;
            }
            else {
              if (fVar14 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar6 + 0x188);
                uVar15 = 0x41200000;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
              goto LAB_00c485b8;
              lStack_68 = *(long *)(lVar6 + 0x188);
              if (1.8 <= fVar14) {
                uVar16 = 0x3f51eb85;
                uVar15 = 0x42180000;
              }
              else {
                uVar16 = 0x3f733333;
                uVar15 = 0x420c0000;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(uVar15,uVar16,lVar5,lStack_68);
          }
LAB_00c47308:
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
          goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(lVar6,0);
        }
      }
    }
  }
LAB_00c47338:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = *(long *)(_Menu_TypeInfo + 0xb8);
  if (*(char *)(lVar6 + 0x1a) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar6 = *(long *)(_Menu_TypeInfo + 0xb8);
    }
    if (*(char *)(lVar6 + 0xc) != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar11 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar11 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar11 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
          if ((uVar4 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
            goto LAB_00c485b8;
            if (*(char *)(lVar6 + 0x6c) != '\0') {
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
              lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (lVar6 == 0) goto LAB_00c485b8;
              uVar4 = DAFNMLEKHAD__MHBEPDHNNFH(lVar6,0);
              if ((uVar4 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
                goto LAB_00c485b8;
                uVar11 = *(undefined8 *)(lVar6 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar4 = UnityEngine_Object__op_Equality(uVar11,0,0);
                if ((uVar4 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                  goto LAB_00c485b8;
                  uVar11 = *(undefined8 *)(lVar6 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar4 = UnityEngine_Object__op_Equality(lVar5,uVar11,0);
                  if ((uVar4 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
                    goto LAB_00c485b8;
                    uVar11 = *(undefined8 *)(lVar6 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar11 = UnityEngine_Object__Instantiate_object_
                                       (uVar11,_Method_UnityEngine_Object_Instantiate_GameObject___)
                    ;
                    *(undefined8 *)(lVar6 + 0x90) = uVar11;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar6 = UnityEngine_Component__get_gameObject(lVar5,0);
  if (lVar6 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar6,1,0);
  puVar10 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar10[2] = *puVar10;
  puVar10[1] = lVar5;
  if (*(char *)(lVar5 + 0x23) != '\0') {
    uVar11 = GUIWindow__FAAELIPKLCB(lVar5);
    UnityEngine_MonoBehaviour__StartCoroutine(lVar5,uVar11,0);
  }
  lVar6 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar6 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar6 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar6 + 0x20) = _Str_Window__Show__;
  uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  uVar11 = _Str_null;
  if ((uVar4 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar11 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar6 + 0x18) < 2) ||
     (*(undefined8 *)(lVar6 + 0x28) = uVar11, *(uint *)(lVar6 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x30) = _Str___last__;
  uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  uVar11 = _Str_null;
  if ((uVar4 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_00c485b8;
    uVar11 = UnityEngine_Object__get_name(lVar7,0);
  }
  uVar9 = *(uint *)(lVar6 + 0x18);
  if ((uVar9 < 4) || (*(undefined8 *)(lVar6 + 0x38) = uVar11, uVar9 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x40) = _Str____Child__;
  plVar12 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar11 = 0;
  if (plVar12 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    uVar9 = *(uint *)(lVar6 + 0x18);
  }
  if (uVar9 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x48) = uVar11;
  uVar11 = System_String__Concat(lVar6,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar11,0,0);
  uVar4 = Main__KCHOEBEIOCE(0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58) == 0)) goto LAB_00c485b8;
    GamePadController__KCAHLEAKNNK();
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
LAB_00c47a5c:
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar11 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar4 & 1) != 0) {
      uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar5 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Equality(uVar11,uVar13,0);
      if ((uVar4 & 1) == 0) {
        uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
        goto LAB_00c485b8;
        uVar13 = *(undefined8 *)(lVar5 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__op_Equality(uVar11,uVar13,0);
        if ((uVar4 & 1) == 0) {
          uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
          goto LAB_00c485b8;
          uVar13 = *(undefined8 *)(lVar5 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar4 = UnityEngine_Object__op_Equality(uVar11,uVar13,0);
          if ((uVar4 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
            goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(lVar5,0);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
          goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(lVar5,0);
        }
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
        goto LAB_00c485b8;
        lVar5 = *(long *)(lVar5 + 0x178);
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
        pvVar8 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((pvVar8 == (void *)0x0) || (bVar1 = DAFNMLEKHAD__EFDKHACIIEC(pvVar8), lVar5 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar5,bVar1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar11 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar4 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar11 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar4 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar4 = GUIGarage__ABAHNKCPCFA(lVar6,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
        (lVar6 = *(long *)(lVar6 + 0x78), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c485b8;
    uVar4 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
         ((lVar6 = *(long *)(lVar6 + 0x70), lVar6 == 0 ||
          (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c485b8;
      uVar4 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar4 & 1) != 0) goto LAB_00c47948;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
         (lVar6 = *(long *)(lVar6 + 0x1d0), lVar6 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar6,0,0);
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
         (lVar6 = *(long *)(lVar6 + 0x1b8), lVar6 == 0)) goto LAB_00c485b8;
      uVar15 = 0;
    }
    else {
LAB_00c47948:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
         (lVar6 = *(long *)(lVar6 + 0x1d0), lVar6 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar6,1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(lVar6,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      lVar6 = *(long *)(lVar6 + 0x3e0);
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
      pvVar8 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((pvVar8 == (void *)0x0) || (bVar1 = DAFNMLEKHAD__EFDKHACIIEC(pvVar8), lVar6 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar6,bVar1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0 ||
          (lVar6 = *(long *)(lVar6 + 0x1b8), lVar6 == 0)))) goto LAB_00c485b8;
      uVar15 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar15,lVar6,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
       ((lVar6 = *(long *)(lVar6 + 0x60), lVar6 == 0 ||
        (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c485b8;
    uVar4 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar4 & 1) == 0) {
      bVar1 = false;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Menu_TypeInfo);
      }
      bVar1 = *(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xd) != '\0';
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Menu_TypeInfo);
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
       (lVar6 = *(long *)(lVar6 + 0x68), lVar6 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar6,*(undefined1 *)(lVar5 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
    goto LAB_00c485b8;
    uVar11 = *(undefined8 *)(lVar5 + 0x78);
    uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar13,uVar11,0);
    if ((uVar4 & 1) != 0) {
      uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar5 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar11,uVar13,0);
      if ((uVar4 & 1) != 0) {
        uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if ((uVar4 & 1) != 0) {
          uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
          goto LAB_00c485b8;
          uVar13 = *(undefined8 *)(lVar5 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar4 = UnityEngine_Object__op_Equality(uVar11,uVar13,0);
          if ((uVar4 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
            Menu__OODBEAHDBMH(**(long **)(_Menu_TypeInfo + 0xb8),0);
          }
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar5 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0)) ||
           (lVar5 = *(long *)(lVar5 + 0x4e0), lVar5 == 0)) goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive
                  (lVar5,*(undefined1 *)((long)*(long **)(_Menu_TypeInfo + 0xb8) + 0xe),0);
        uVar15 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar15;
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
      }
    }
    uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
    goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(lVar5 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar11,uVar13,0);
    if ((uVar4 & 1) == 0) {
      uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar5 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Equality(uVar11,uVar13,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(lVar5,0);
      }
    }
    else {
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
      lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar5 == 0) goto LAB_00c485b8;
      uVar4 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar5,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar11 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
          if ((uVar4 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar5 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar5 == 0) goto LAB_00c485b8;
            uVar4 = UnityEngine_AudioSource__get_isPlaying(lVar5,0);
            if ((uVar4 & 1) == 0) {
              if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              SoundScript__HCEFONCADKE
                        (*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98),0,0);
            }
          }
        }
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
      lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar5 == 0) goto LAB_00c485b8;
      lVar5 = DAFNMLEKHAD__DKJLCJPBPPN(lVar5,0xffffffff,1,0);
      if (lVar5 == 0) {
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
        lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar5 == 0) goto LAB_00c485b8;
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = *(undefined4 *)(lVar5 + 0x104);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        Menu__CKPDEIAFHEC(**(long **)(_Menu_TypeInfo + 0xb8),0);
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(lVar5,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar5,0);
    }
    uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
    goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(lVar5 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar11,uVar13,0);
    if ((uVar4 & 1) != 0) {
      uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Equality(uVar11,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
          goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(lVar5,0,0);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar5 = **(long **)(_Menu_TypeInfo + 0xb8);
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0)) goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(lVar5,0);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(lVar5,0);
      }
    }
    if (bVar1) {
      return;
    }
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    Menu__GDEFDCOIDNM(**(long **)(_Menu_TypeInfo + 0xb8),0);
    return;
  }
LAB_00c485b8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void PDCEALBDDHD() { }   @0xb369d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__PDCEALBDDHD(void *__this)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if ((bRam00000000019170f7 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam00000000019170f7 = 1;
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
  lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  iVar1 = *(int *)(lVar3 + 0x90);
  if (iVar1 == 2) {
    uVar2 = 2;
  }
  else {
    if (iVar1 == 1) {
      UnityEngine_QualitySettings__SetQualityLevel(1,0);
      if (pcRam000000000191bbc8 == (code *)0x0) {
        pcRam000000000191bbc8 = (code *)func_0x00a678c4(&UNK_005ad66d);
      }
                    /* WARNING: Could not recover jumptable at 0x014722a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191bbc8)(1);
      return;
    }
    if (iVar1 != 0) {
      return;
    }
    uVar2 = 0;
  }
  if (pcRam000000000191bbd0 == (code *)0x0) {
    pcRam000000000191bbd0 = (code *)func_0x00a678c4(&UNK_005a9eb7,0);
  }
                    /* WARNING: Could not recover jumptable at 0x01472220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191bbd0)(uVar2,1);
  return;
}


// ==== public void AFBPIADEOPC() { }   @0xb39eb4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__AFBPIADEOPC(void *__this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if ((*(long *)((long)__this + 0x20) != 0) &&
     (lVar3 = *(long *)(*(long *)((long)__this + 0x20) + 0x560), lVar3 != 0)) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar2 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_00c39f24;
        if (*(char *)(lVar2 + 0x70) == '\0') {
          ShopItem__BGNPJIHMIMI(lVar2,0,0);
        }
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
    return;
  }
LAB_00c39f24:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void LLEALPBNEEN() { }   @0xb3a390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__LLEALPBNEEN(void *__this)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  void *__this_00;
  undefined4 uStack_24;
  
  if ((bRam00000000019170ff & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam00000000019170ff = 1;
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
  lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar6 == 0) {
LAB_00c3a544:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  __this_00 = (void *)DAFNMLEKHAD__PJDAAMCNMHJ(lVar6,0xffffffff,0);
  if (__this_00 == (void *)0x0) {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar6 == 0) goto LAB_00c3a544;
  if (99 < *(int *)(lVar6 + 0x10)) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar6 == 0) goto LAB_00c3a544;
    }
    if (*(long *)(lVar6 + 0x50) != 0) {
      iVar2 = DJKGLJOCFCE__EECPDELFCIL(__this_00);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0x50) == 0)) goto LAB_00c3a544;
      if (iVar2 != *(int *)(*(long *)(lVar6 + 0x50) + 0x10)) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
          lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if (lVar6 == 0) goto LAB_00c3a544;
        }
        if (*(long *)(lVar6 + 0x50) == 0) goto LAB_00c3a544;
        DJKGLJOCFCE__OKJBPIKMAPJ(__this_00,*(undefined4 *)(*(long *)(lVar6 + 0x50) + 0x10),0);
        DJKGLJOCFCE__PHPLFEHCLJH(__this_00,1);
        if ((bRam0000000001916fe7 & 1) == 0) {
          func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo,0,0);
          bRam0000000001916fe7 = 1;
        }
        pvVar5 = (void *)DJKGLJOCFCE__BKFGIBHDOPJ(__this_00);
        if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
        }
        uVar1 = 0;
        goto CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt;
      }
    }
  }
  iVar2 = *(int *)((long)__this_00 + 0x3c) + 1;
  if ((bRam0000000001916fde & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo,iVar2,0);
    bRam0000000001916fde = 1;
  }
  *(int *)((long)__this_00 + 0x3c) = iVar2;
  pvVar5 = DJKGLJOCFCE__DLOKHEPHLGI(__this_00);
  uVar1 = *(undefined4 *)((long)__this_00 + 0x3c);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt:
  if ((bRam000000000191673e & 1) == 0) {
    func_0x00a67900(&Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___,uVar1,0);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam000000000191673e = 1;
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptKey(pvVar5);
  uStack_24 = uVar1;
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptValue___Il2CppFullySharedGenericType_
                    (pvVar5,&uStack_24,
                     _Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___);
  UnityEngine_PlayerPrefs__SetString(uVar3,uVar4,0);
  return;
}


// ==== public void AOJCIOLIMHF() { }   @0xb37bb4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__AOJCIOLIMHF(void *__this)

{
  ulong uVar1;
  undefined4 uVar2;
  double dVar3;
  undefined1 auStack_30 [16];
  
  if ((bRam0000000001917104 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    bRam0000000001917104 = 1;
  }
  auStack_30 = UnityEngine_Screen__get_currentResolution(0);
  uVar1 = UnityEngine_Resolution__get_refreshRateRatio(auStack_30,0);
  dVar3 = (double)(uVar1 & 0xffffffff) / (double)(uVar1 >> 0x20);
  if (dVar3 <= 100.0) {
    if (dVar3 <= 80.0) {
      if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = 0x3c;
      if (dVar3 <= 50.0) {
        uVar2 = 0x1e;
      }
    }
    else {
      if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = 0x5a;
    }
  }
  else {
    if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = 0x78;
  }
  UnityEngine_Application__set_targetFrameRate(uVar2,0);
  return;
}



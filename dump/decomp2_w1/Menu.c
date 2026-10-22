// ==== public static int HAPFNAIFOMA(int HFDKNJFKOJO, bool MAOJKHKLIKN) { }   @0xb32d08

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int Menu__HAPFNAIFOMA(int HFDKNJFKOJO,bool MAOJKHKLIKN)

{
  int iVar1;
  
  if (MAOJKHKLIKN) {
    iVar1 = 2;
    if (HFDKNJFKOJO != 1) {
      iVar1 = 3;
    }
    return iVar1;
  }
  iVar1 = 4;
  if (HFDKNJFKOJO != 1) {
    iVar1 = 7;
  }
  return iVar1;
}


// ==== public void EIABBDMGLHD() { }   @0xb335c4

/* WARNING: Removing unreachable block (ram,0x00bed44c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__EIABBDMGLHD(void *__this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam00000000019170d4 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam00000000019170d4 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Main_TypeInfo + 0xb8) != 0) &&
     (lVar7 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x40), lVar7 != 0)) {
    iVar1 = *(int *)(lVar7 + 0x18);
    if (0 < iVar1) {
      iVar8 = 0;
      do {
        if (iVar1 == iVar8) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar6 = *(long *)(lVar7 + (long)iVar8 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_00c33680;
        if (*(int *)((long)__this + 0x8c) == *(int *)(lVar6 + 0x10)) {
          if ((bRam0000000001916ed7 & 1) == 0) {
            func_0x00a67900(&Main_TypeInfo,1,0);
            func_0x00a67900(&Menu_TypeInfo);
            func_0x00a67900(&SoundScript_TypeInfo);
            bRam0000000001916ed7 = 1;
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
          pvVar4 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if (pvVar4 != (void *)0x0) {
            bVar2 = DAFNMLEKHAD__OFOJMCJAGFD(pvVar4,*(int *)(lVar6 + 0x10));
            if (bVar2) {
              return;
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
            lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
            if (lVar7 != 0) {
              DAFNMLEKHAD__EBANJKOABAL(lVar7,*(undefined4 *)(lVar6 + 0x10),2);
              iVar8 = *(int *)(lVar6 + 0x30);
              iVar1 = iVar8;
              if (iVar8 < 0) {
                iVar1 = iVar8 + 1;
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
              lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (lVar7 != 0) {
                uStack_50 = *(undefined4 *)(lVar7 + 0x4c);
                uStack_58 = *(undefined8 *)(lVar7 + 0x44);
                uStack_60 = *(undefined8 *)(lVar7 + 0x3c);
                iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_60,0);
                DAFNMLEKHAD__DIMKKHJDHFJ(lVar7,(iVar1 >> 1) + iVar8 + iVar3);
                if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                SoundScript__GIGBLEBBIEK
                          (*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x60),0);
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
                  uVar5 = Menu__KLGOLHHGBKP(**(long **)(_Menu_TypeInfo + 0xb8),0);
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                     (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40) != 0)) {
                    AnalyticsController__ODLOKNOHMOB(uVar5,*(undefined4 *)(lVar6 + 0x10));
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                       (pvVar4 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20),
                       pvVar4 != (void *)0x0)) {
                      GUIGarage__MAKGMMFFGPG(pvVar4);
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
        iVar8 = iVar8 + 1;
      } while (iVar1 != iVar8);
    }
    return;
  }
LAB_00c33680:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void JPGHCLJLKDC() { }   @0xb33eec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__JPGHCLJLKDC(void *__this)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 uStack_48;
  
  if ((bRam00000000019170d7 & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Str_item_gold_0);
    bRam00000000019170d7 = 1;
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
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_System_DateTime_TypeInfo);
  }
  uStack_48 = System_DateTime__get_Now(0);
  uVar3 = System_DateTime__AddHours(0x4010000000000000,&uStack_48,0);
  if (lVar6 != 0) {
    DAFNMLEKHAD__ADNEGLENKMO(lVar6,uVar3,0);
    Menu__PPBIOKBJGPG(__this);
    if ((*(long *)((long)__this + 0x20) != 0) &&
       (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x650), lVar6 != 0)) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar1) {
        uVar8 = 0;
        do {
          if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar5 = *(long *)(lVar6 + (long)(int)uVar8 * 8 + 0x20);
          if (lVar5 == 0) goto LAB_00c34104;
          uVar3 = UnityEngine_Object__get_name(lVar5,0);
          uVar4 = System_String__op_Equality(uVar3,_Str_item_gold_0,0);
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
            lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
            if (lVar7 == 0) goto LAB_00c34104;
            iVar2 = DAFNMLEKHAD__HPDEBBJNCIK(lVar7,0);
            DAFNMLEKHAD__DIMKKHJDHFJ(lVar7,*(int *)(lVar5 + 0x28) + iVar2,0);
          }
          uVar1 = *(uint *)(lVar6 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar1);
      }
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x60),0);
      return;
    }
  }
LAB_00c34104:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void FMEHJALLGBK() { }   @0xb3641c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__FMEHJALLGBK(void *__this)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  if ((bRam00000000019170db & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_gamepad_button_start);
    bRam00000000019170db = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  bVar2 = Main__KCHOEBEIOCE();
  if (bVar2) {
    if (*(long *)((long)__this + 0x58) == 0) goto LAB_00c3668c;
    if (*(char *)(*(long *)((long)__this + 0x58) + 0x30) == '\0') goto LAB_00c364b0;
    bVar2 = true;
  }
  else {
LAB_00c364b0:
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    bVar2 = **(int **)(_BridgePHP_TypeInfo + 0xb8) == 9;
  }
  uVar5 = *(undefined8 *)((long)__this + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if ((*(long *)((long)__this + 0x20) != 0) &&
     (lVar7 = *(long *)(*(long *)((long)__this + 0x20) + 0x530), lVar7 != 0)) {
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) goto LAB_00c36690;
        lVar6 = *(long *)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_00c3668c;
        UnityEngine_GameObject__SetActive(lVar6,bVar2,0);
        if (bVar2 != false) {
          if (((*(long *)((long)__this + 0x20) == 0) ||
              (lVar4 = *(long *)(*(long *)((long)__this + 0x20) + 0x78), lVar4 == 0)) ||
             (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0))
          goto LAB_00c3668c;
          uVar3 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
          if ((uVar3 & 1) != 0) {
            uVar5 = UnityEngine_Object__get_name(lVar6,0);
            uVar3 = System_String__op_Equality(uVar5,_Str_gamepad_button_start,0);
            if ((uVar3 & 1) != 0) {
              if ((*(long *)((long)__this + 0x20) == 0) ||
                 (lVar4 = *(long *)(*(long *)((long)__this + 0x20) + 0x578), lVar4 == 0))
              goto LAB_00c3668c;
              if (*(char *)(lVar4 + 0xd8) == '\0') {
                UnityEngine_GameObject__SetActive(lVar6,0,0);
              }
            }
          }
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
    if ((*(long *)((long)__this + 0x20) != 0) &&
       (lVar7 = *(long *)(*(long *)((long)__this + 0x20) + 0x538), lVar7 != 0)) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar1) {
        uVar8 = 0;
        do {
          if (uVar1 <= uVar8) goto LAB_00c36690;
          lVar6 = *(long *)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
          if (lVar6 == 0) goto LAB_00c3668c;
          UnityEngine_GameObject__SetActive(lVar6,0,0);
          uVar1 = *(uint *)(lVar7 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar1);
      }
      if ((*(long *)((long)__this + 0x20) != 0) &&
         (lVar7 = *(long *)(*(long *)((long)__this + 0x20) + 0x540), lVar7 != 0)) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if ((int)uVar1 < 1) {
          return;
        }
        uVar8 = 0;
        do {
          if (uVar1 <= uVar8) {
LAB_00c36690:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar6 = *(long *)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
          if (lVar6 == 0) break;
          UnityEngine_GameObject__SetActive(lVar6,0,0);
          uVar1 = *(uint *)(lVar7 + 0x18);
          uVar8 = uVar8 + 1;
          if ((int)uVar1 <= (int)uVar8) {
            return;
          }
        } while( true );
      }
    }
  }
LAB_00c3668c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void BMIIEMFFFEO() { }   @0xb36ab4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__BMIIEMFFFEO(void *__this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined4 uVar12;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_64;
  
  if ((bRam00000000019170df & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170df = 1;
  }
  uVar10 = *(undefined8 *)((long)__this + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (((*(long *)((long)__this + 0x20) == 0) ||
      (lVar8 = *(long *)(*(long *)((long)__this + 0x20) + 0x78), lVar8 == 0)) ||
     (lVar8 = UnityEngine_Component__get_gameObject(lVar8,0), lVar8 == 0)) {
LAB_00c36c88:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if ((*(long *)((long)__this + 0x20) == 0) ||
     (lVar8 = *(long *)(*(long *)((long)__this + 0x20) + 0x1b0), lVar8 == 0)) goto LAB_00c36c88;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if ((*(long *)((long)__this + 0x20) == 0) ||
     (lVar8 = *(long *)(*(long *)((long)__this + 0x20) + 0x30), lVar8 == 0)) goto LAB_00c36c88;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
     (lVar8 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar8 == 0)) goto LAB_00c36c88;
  uVar7 = Car__NBMGBADFACE(0);
  iVar2 = -3;
  if ((uVar7 & 1) != 0) {
    iVar2 = -2;
  }
  iVar2 = iVar2 + *(int *)(lVar8 + 0x18);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (iVar2 <= *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c)) {
    return;
  }
  uVar7 = UnityEngine_Input__GetKey(0x130,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  if ((uVar7 & 1) == 0) {
    iVar2 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) + 1;
  }
  *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = iVar2;
  uVar12 = UnityEngine_Time__get_realtimeSinceStartup(0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar12;
  if ((bRam00000000019170fa & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__get_Current__);
    func_0x00a67900(&Method_System_Collections_Generic_List_DJKGLJOCFCE__GetEnumerator__);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_EVENT_CAR_UNLOCK);
    func_0x00a67900(&Str_RefreshGarage);
    func_0x00a67900(&Str_LOCK_CAR_TEXT);
    func_0x00a67900(&Str_LOCK_CAR_IN_THIS_MODE);
    func_0x00a67900(&Str_CLAIM);
    func_0x00a67900(&Str___color_);
    func_0x00a67900(&Str__x_);
    func_0x00a67900(&Str__color__faaf32_);
    func_0x00a67900(&Str_EVENT_);
    bRam00000000019170fa = 1;
  }
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_64 = 0;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_RefreshGarage,0,0);
  if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
     (lVar8 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar8 == 0)) goto LAB_00c35de4;
  iVar2 = *(int *)(lVar8 + 0x18);
  plVar11 = (long *)((long)__this + 0x20);
  if (*plVar11 == 0) goto LAB_00c35de4;
  uVar10 = *(undefined8 *)(*plVar11 + 0x430);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar7 & 1) != 0) {
    if (*plVar11 == 0) goto LAB_00c35de4;
    lVar8 = *(long *)(*plVar11 + 0x430);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (lVar8 == 0) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive
              (lVar8,*(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) != 0,0);
  }
  if (*plVar11 == 0) goto LAB_00c35de4;
  uVar10 = *(undefined8 *)(*plVar11 + 0x420);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar7 & 1) != 0) {
    if (*plVar11 == 0) goto LAB_00c35de4;
    lVar8 = *(long *)(*plVar11 + 0x420);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iVar3 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
    uVar1 = Car__NBMGBADFACE(0);
    if (lVar8 == 0) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar8,iVar3 < (int)((iVar2 - (~uVar1 & 1)) + -2),0);
  }
  if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x428), lVar8 == 0)) goto LAB_00c35de4;
  UnityEngine_GameObject__SetActive(lVar8,0,0);
  if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x438), lVar8 == 0)) goto LAB_00c35de4;
  UnityEngine_GameObject__SetActive(lVar8,0,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar8 = *(long *)(_Main_TypeInfo + 0xb8);
  lVar9 = *(long *)(lVar8 + 0x40);
  if (lVar9 != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar8 = *(long *)(_Main_TypeInfo + 0xb8);
      lVar9 = *(long *)(lVar8 + 0x40);
      if (lVar9 == 0) goto LAB_00c35de4;
    }
    if (*(int *)(lVar9 + 0x10) == 1) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar8 = *(long *)(_Main_TypeInfo + 0xb8);
      }
      if (*(int *)(lVar8 + 0x2c) == 1) {
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
        if (lVar8 == 0) goto LAB_00c35de4;
        lVar8 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar8,1,0);
        if (lVar8 != 0) {
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
          if ((lVar8 == 0) || (lVar8 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar8,1,0), lVar8 == 0))
          goto LAB_00c35de4;
          uVar7 = DJKGLJOCFCE__MCDLFBJCNNA(lVar8,0);
          if ((uVar7 & 1) == 0) {
            if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x430), lVar8 == 0))
            goto LAB_00c35de4;
            UnityEngine_GameObject__SetActive(lVar8,0,0);
          }
        }
      }
    }
  }
  if (*plVar11 == 0) goto LAB_00c35de4;
  GUIGarage__OHFNNEHCIEH(*plVar11,0);
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
  if (lVar8 == 0) goto LAB_00c35de4;
  iVar2 = -1;
  lVar8 = DAFNMLEKHAD__DKJLCJPBPPN(lVar8,0xffffffff,1,0);
  lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar9 == 0) {
LAB_00c35438:
    iVar3 = iVar2;
    if (lVar8 != 0) goto LAB_00c35448;
LAB_00c354c0:
    if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x478), lVar8 == 0)) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar8,1,0);
    if ((void *)*plVar11 == (void *)0x0) goto LAB_00c35de4;
    GUIGarage__PHKCLDLDABM((void *)*plVar11,false);
    if (iVar2 == -1) {
      pvVar5 = Car__get_Current();
      if (pvVar5 == (void *)0x0) goto LAB_00c35de4;
      if (*(int *)((long)pvVar5 + 0x44) != 0) goto LAB_00c3550c;
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
      if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x120), lVar8 == 0)) goto LAB_00c35de4;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                (lVar8,&lStack_a8,
                 _Method_System_Collections_Generic_List_DJKGLJOCFCE__GetEnumerator__);
      uStack_88 = uStack_a0;
      lStack_90 = lStack_a8;
      uStack_80 = uStack_98;
      uVar1 = 0;
      while (uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                               (&lStack_90,
                                _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__
                               ), (uVar7 & 1) != 0) {
        func_0x00b947ec(&lStack_90,&lStack_a8,
                        _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__get_Current__
                       );
        lVar8 = lStack_a8;
        if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        iVar3 = *(int *)(lStack_a8 + 0x10);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (iVar3 == *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) + -1) {
          uVar4 = DJKGLJOCFCE__MCDLFBJCNNA(lVar8,0);
          uVar1 = uVar1 | uVar4;
        }
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                (&lStack_90,
                 _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__);
      if ((uVar1 & 1) != 0) {
        uVar12 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar12;
        pvVar5 = Car__get_Current();
        if ((pvVar5 == (void *)0x0) || (*plVar11 == 0)) goto LAB_00c35de4;
        plVar6 = *(long **)(*plVar11 + 0x488);
        if (*(int *)((long)pvVar5 + 0x20) < 1) {
          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
             (uVar10 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_CLAIM), plVar6 == (long *)0x0
             )) goto LAB_00c35de4;
          (**(code **)(*plVar6 + 0x5a8))(plVar6,uVar10,*(undefined8 *)(*plVar6 + 0x5b0));
          if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x490), lVar8 == 0))
          goto LAB_00c35de4;
          UnityEngine_GameObject__SetActive(lVar8,0,0);
        }
        else {
          pvVar5 = Car__get_Current();
          if ((pvVar5 == (void *)0x0) ||
             (uVar10 = System_Int32__ToString((long)pvVar5 + 0x20,0), plVar6 == (long *)0x0))
          goto LAB_00c35de4;
          (**(code **)(*plVar6 + 0x5a8))(plVar6,uVar10,*(undefined8 *)(*plVar6 + 0x5b0));
        }
        if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x480), lVar8 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar8,1,0);
        if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x4c0), lVar8 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar8,1,0);
        if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x498), lVar8 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar8,0,0);
        if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x4a0), lVar8 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar8,0,0);
        if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x4b8), lVar8 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar8,0,0);
        goto LAB_00c35704;
      }
      lVar8 = *plVar11;
      if (lVar8 == 0) goto LAB_00c35de4;
      *(undefined1 *)(lVar8 + 0x470) = 1;
      if (*(long *)(lVar8 + 0x480) == 0) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(*(long *)(lVar8 + 0x480),0,0);
      if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x498), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,0,0);
      if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x4a0), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,0,0);
      if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x4c0), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,1,0);
      if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x4b8), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,1,0);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c35de4;
      lVar8 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_LOCK_CAR_TEXT);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      uVar10 = System_Int32__ToString(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c,0);
LAB_00c35640:
      uVar10 = System_String__Concat(_Str__color__faaf32_,uVar10,_Str___color_,0);
      if (lVar8 == 0) goto LAB_00c35de4;
      uVar10 = System_String__Replace(lVar8,_Str__x_,uVar10,0);
      if ((*plVar11 == 0) || (plVar6 = *(long **)(*plVar11 + 0x4c8), plVar6 == (long *)0x0))
      goto LAB_00c35de4;
      lVar8 = *plVar6;
    }
    else {
LAB_00c3550c:
      pvVar5 = Car__get_Current();
      if (((pvVar5 == (void *)0x0) || (*plVar11 == 0)) ||
         (lVar8 = *(long *)(*plVar11 + 0x480), lVar8 == 0)) goto LAB_00c35de4;
      iVar3 = *(int *)((long)pvVar5 + 0x44);
      UnityEngine_GameObject__SetActive(lVar8,0,0);
      if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x498), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,0,0);
      if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x4a0), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,0,0);
      if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x4c0), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,1,0);
      if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x4b8), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,1,0);
      if (iVar3 != 0) {
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c35de4;
        lVar8 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_EVENT_CAR_UNLOCK);
        lVar9 = **(long **)(_Translate_TypeInfo + 0xb8);
        pvVar5 = Car__get_Current();
        if (pvVar5 == (void *)0x0) goto LAB_00c35de4;
        uStack_64 = *(undefined4 *)((long)pvVar5 + 0x44);
        uVar10 = System_Int32__ToString(&uStack_64,0);
        uVar10 = System_String__Concat(_Str_EVENT_,uVar10,0);
        if (lVar9 == 0) goto LAB_00c35de4;
        uVar10 = Translate__JJJNIPAKLJF(uVar10,uVar10);
        goto LAB_00c35640;
      }
      if (*plVar11 == 0) goto LAB_00c35de4;
      plVar6 = *(long **)(*plVar11 + 0x4c8);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
         (uVar10 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_LOCK_CAR_IN_THIS_MODE),
         plVar6 == (long *)0x0)) goto LAB_00c35de4;
      lVar8 = *plVar6;
    }
    (**(code **)(lVar8 + 0x5a8))(plVar6,uVar10,*(undefined8 *)(lVar8 + 0x5b0));
  }
  else {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
      lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar9 == 0) goto LAB_00c35de4;
    }
    if (99 < *(int *)(lVar9 + 0x10)) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
        lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar9 == 0) goto LAB_00c35de4;
      }
      if (*(long *)(lVar9 + 0x50) == 0) goto LAB_00c35de4;
      iVar2 = EventContest__get_car_id(*(long *)(lVar9 + 0x50),0);
      if (-1 < iVar2) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x50), lVar9 == 0)) goto LAB_00c35de4;
        iVar2 = EventContest__get_car_id(lVar9,0);
        goto LAB_00c35438;
      }
    }
    iVar2 = -1;
    iVar3 = -1;
    if (lVar8 == 0) goto LAB_00c354c0;
LAB_00c35448:
    iVar2 = iVar3;
    if (iVar2 != -1) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x50), lVar9 == 0)) goto LAB_00c35de4;
      iVar3 = EventContest__get_car_id(lVar9,0);
      if (iVar3 != *(int *)(lVar8 + 0x10)) goto LAB_00c354c0;
    }
    if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x478), lVar8 == 0)) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar8,0,0);
    if ((void *)*plVar11 == (void *)0x0) goto LAB_00c35de4;
    GUIGarage__PHKCLDLDABM((void *)*plVar11,true);
  }
LAB_00c35704:
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar8 = *(long *)(_Main_TypeInfo + 0xb8);
  if (*(long *)(lVar8 + 0x40) != 0) {
    if (iVar2 == -1) {
      pvVar5 = Car__get_Current();
      if (pvVar5 == (void *)0x0) goto LAB_00c35de4;
      if (*(int *)((long)pvVar5 + 0x44) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        plVar6 = *(long **)(_Main_TypeInfo + 0xb8);
        lVar8 = plVar6[8];
        if (lVar8 == 0) goto LAB_00c35de4;
        if (0 < *(int *)(lVar8 + 0x10)) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            plVar6 = *(long **)(_Main_TypeInfo + 0xb8);
            lVar8 = plVar6[8];
            if (lVar8 == 0) goto LAB_00c35de4;
          }
          if ((*plVar6 == 0) || (lVar9 = *(long *)(*plVar6 + 0x28), lVar9 == 0)) goto LAB_00c35de4;
          if (*(int *)(lVar8 + 0x10) < *(int *)(lVar9 + 0x18)) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              plVar6 = *(long **)(_Main_TypeInfo + 0xb8);
              lVar8 = plVar6[8];
              if (lVar8 == 0) goto LAB_00c35de4;
            }
            if (*(int *)((long)plVar6 + 0x2c) != *(int *)(lVar8 + 0x10)) {
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
              lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
              if ((lVar8 == 0) ||
                 (lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar9 == 0))
              goto LAB_00c35de4;
              lVar8 = DAFNMLEKHAD__DKJLCJPBPPN(lVar9,*(undefined4 *)(lVar8 + 0x10),1,0);
              if (lVar8 == 0) {
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
                if (lVar8 == 0) goto LAB_00c35de4;
                iVar2 = DAFNMLEKHAD__LOCFCFJIAIH(lVar8,0);
                plVar6 = *(long **)(_Main_TypeInfo + 0xb8);
                if (((*plVar6 == 0) || (lVar8 = plVar6[8], lVar8 == 0)) ||
                   (lVar9 = *(long *)(*plVar6 + 0x28), lVar9 == 0)) goto LAB_00c35de4;
                if (*(uint *)(lVar9 + 0x18) <= *(uint *)(lVar8 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                lVar9 = *(long *)(lVar9 + (long)(int)*(uint *)(lVar8 + 0x10) * 8 + 0x20);
                if (lVar9 == 0) goto LAB_00c35de4;
                if (*(int *)(lVar9 + 0x20) <= iVar2) {
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_Main_TypeInfo);
                    plVar6 = *(long **)(_Main_TypeInfo + 0xb8);
                    lVar8 = plVar6[8];
                    if (lVar8 == 0) goto LAB_00c35de4;
                  }
                  lVar9 = *plVar11;
                  if (lVar9 == 0) goto LAB_00c35de4;
                  if (*(int *)(lVar8 + 0x10) < *(int *)((long)plVar6 + 0x2c)) {
                    lVar8 = *(long *)(lVar9 + 0x438);
                    *(undefined1 *)(lVar9 + 0x470) = 1;
                  }
                  else {
                    lVar8 = *(long *)(lVar9 + 0x428);
                    *(undefined1 *)(lVar9 + 0x471) = 1;
                  }
                  if (lVar8 == 0) goto LAB_00c35de4;
                  UnityEngine_GameObject__SetActive(lVar8,1,0);
                }
              }
            }
          }
        }
      }
    }
    else {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar8 = *(long *)(_Main_TypeInfo + 0xb8);
      }
      if (iVar2 != *(int *)(lVar8 + 0x2c)) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar8 = *plVar11;
        if (lVar8 == 0) goto LAB_00c35de4;
        if (iVar2 < *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c)) {
          *(undefined1 *)(lVar8 + 0x470) = 1;
        }
        else {
          *(undefined1 *)(lVar8 + 0x471) = 1;
        }
      }
    }
  }
  if (*plVar11 != 0) {
    plVar6 = *(long **)(*plVar11 + 1000);
    pvVar5 = Car__get_Current();
    if ((pvVar5 != (void *)0x0) && (plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 0x5a8))
                (plVar6,*(undefined8 *)((long)pvVar5 + 0x10),*(undefined8 *)(*plVar6 + 0x5b0));
      if (*plVar11 != 0) {
        GUIGarage__FJCMAMFOKNL(*plVar11,0);
        Menu__CKPDEIAFHEC();
        Menu__CDFHCNMGCFI(__this);
        Menu__INMDNKGHGEO(__this);
        Menu__FMEHJALLGBK(__this);
        uVar10 = *(undefined8 *)((long)__this + 0x70);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(long *)((long)__this + 0x70) == 0) goto LAB_00c35de4;
          ConsoleTipsBottom__ABIEFKKDOGK(*(long *)((long)__this + 0x70),0);
        }
        return;
      }
    }
  }
LAB_00c35de4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void AFPLNBDNJHM() { }   @0xb371cc

/* WARNING: Removing unreachable block (ram,0x00c0b570) */
/* WARNING: Removing unreachable block (ram,0x00c0b578) */
/* WARNING: Removing unreachable block (ram,0x00c0b5a0) */
/* WARNING: Removing unreachable block (ram,0x00c0b5ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__AFPLNBDNJHM(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  long lStack_68;
  
  if ((bRam00000000019170e3 & 1) == 0) {
    func_0x00a67900(&GUIGarage_TypeInfo);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170e3 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
    return;
  }
  plVar15 = (long *)((long)__this + 0x20);
  lVar12 = *plVar15;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(lVar12,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if ((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x30), lVar12 == 0)) goto LAB_00c37710;
  uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x140), lVar12 == 0)) ||
     (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c37710;
  uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x138), lVar12 == 0)) ||
     (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c37710;
  uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x150), lVar12 == 0)) ||
     (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c37710;
  uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  fVar16 = (float)UnityEngine_Time__get_time(0);
  if (fVar16 - **(float **)(_GUIGarage_TypeInfo + 0xb8) <= 1.0) {
    return;
  }
  if (*plVar15 == 0) goto LAB_00c37710;
  uVar13 = *(undefined8 *)(*plVar15 + 0x70);
  uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Equality(uVar14,uVar13,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) goto LAB_00c37408;
    if (((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0xa8), lVar12 == 0)) ||
       (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c37710;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
    if ((uVar5 & 1) != 0) goto LAB_00c37408;
    if (((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x178), lVar12 == 0)) ||
       (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c37710;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
    if ((uVar5 & 1) != 0) goto LAB_00c37408;
    if (((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x170), lVar12 == 0)) ||
       (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c37710;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
    lVar12 = *plVar15;
    if ((uVar5 & 1) == 0) {
      if (lVar12 != 0) {
        if ((bRam0000000001916f6d & 1) == 0) {
          func_0x00a67900(&Main_TypeInfo,1,0);
          func_0x00a67900(&Menu_TypeInfo);
          func_0x00a67900(&Str_Hide_lvl__);
          bRam0000000001916f6d = 1;
        }
        GUIGarage__PIHABGKNPDI(lVar12,1);
        if (*(long *)(lVar12 + 0x310) == 0) {
LAB_00c0b6e0:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar5 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar12 + 0x310),0);
        if ((uVar5 & 1) != 0) {
          if (*(long *)(lVar12 + 0x310) == 0) goto LAB_00c0b6e0;
          UnityEngine_GameObject__SetActive(*(long *)(lVar12 + 0x310),0,0);
          GUIGarage__ADMNOIMMGGA(lVar12,0);
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar8 != 0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
            if (lVar8 == 0) goto LAB_00c0b6e0;
          }
          uVar13 = System_Int32__ToString(lVar8 + 0x10,0);
          uVar13 = System_String__Concat(_Str_Hide_lvl__,uVar13,0);
          Main__GEMDEAMAGPG(uVar13,0,0);
          bVar1 = Main__KCHOEBEIOCE();
          if (bVar1) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58), lVar8 == 0))
            goto LAB_00c0b6e0;
            GamePadController__KCAHLEAKNNK(lVar8,0);
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          *(undefined8 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) = 0;
          GUIGarage__AGFKGLDJDLE(lVar12);
        }
        *(undefined1 *)(lVar12 + 0x250) = 0;
        return;
      }
      goto LAB_00c37710;
    }
    if (lVar12 == 0) goto LAB_00c37710;
    uVar13 = *(undefined8 *)(lVar12 + 0x48);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar7 & 1) == 0) goto Menu__CEFAHBMMKCD;
    if (((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x48), lVar12 == 0)) ||
       (lVar12 = *(long *)(lVar12 + 0xb8), lVar12 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
    if ((uVar7 & 1) != 0) goto Menu__CEFAHBMMKCD;
    if (*plVar15 == 0) goto LAB_00c37710;
    GUIGarage__ButtonMapHidePanel(*plVar15,1,0);
joined_r0x00c37634:
    if ((uVar5 & 1) == 0) {
      return;
    }
Menu__CEFAHBMMKCD:
    if ((bRam00000000019170e1 & 1) == 0) {
      func_0x00a67900(&GUIWindow_TypeInfo);
      func_0x00a67900(&UnityEngine_Object_TypeInfo);
      bRam00000000019170e1 = 1;
    }
    lVar12 = **(long **)(_GUIWindow_TypeInfo + 0xb8);
    lVar8 = (*(long **)(_GUIWindow_TypeInfo + 0xb8))[1];
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(lVar8,0,0);
    if ((uVar5 & 1) != 0) {
      lVar12 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    }
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(lVar12,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (lVar12 != 0) {
      uVar13 = *(undefined8 *)(lVar12 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar5 & 1) == 0) {
        uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar5 & 1) == 0) {
          return;
        }
      }
      uVar13 = *(undefined8 *)(lVar12 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar5 & 1) == 0) {
        lVar12 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
      }
      else {
        lVar12 = *(long *)(lVar12 + 0x28);
      }
      if (lVar12 != 0) {
        GUIWindow__HEGIHOAJOKK(lVar12,0,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
LAB_00c37408:
  if (*plVar15 == 0) goto LAB_00c37710;
  uVar13 = *(undefined8 *)(*plVar15 + 0xa8);
  uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Equality(uVar14,uVar13,0);
  if ((uVar5 & 1) == 0) {
    if (*plVar15 == 0) goto LAB_00c37710;
    uVar13 = *(undefined8 *)(*plVar15 + 0xa8);
    uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar14,uVar13,0);
    if ((uVar5 & 1) != 0) goto LAB_00c37480;
    if (*plVar15 == 0) goto LAB_00c37710;
    uVar13 = *(undefined8 *)(*plVar15 + 0xd0);
    uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar14,uVar13,0);
    if (((uVar5 & 1) == 0) || (*(char *)((long)__this + 0x78) != '\0')) {
      if ((*plVar15 == 0) ||
         ((lVar12 = *(long *)(*plVar15 + 0xa0), lVar12 == 0 ||
          (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0))))
      goto LAB_00c37710;
      uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
      if ((uVar5 & 1) == 0) {
        uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        goto joined_r0x00c37634;
      }
      if (((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x70), lVar12 == 0)) ||
         (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c37710;
      uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
      if ((uVar5 & 1) != 0) {
        lVar12 = *plVar15;
        if (lVar12 == 0) goto LAB_00c37710;
LAB_00c37690:
        pvVar6 = *(void **)(lVar12 + 0xa8);
        if (pvVar6 == (void *)0x0) goto LAB_00c37710;
        iVar10 = 1;
        goto code_r0x00c4660c;
      }
      if (*plVar15 == 0) goto LAB_00c37710;
      uVar13 = *(undefined8 *)(*plVar15 + 0xa8);
      uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar14,uVar13,0);
      lVar12 = *plVar15;
      if (lVar12 == 0) goto LAB_00c37710;
      if ((uVar5 & 1) != 0) goto LAB_00c37690;
      goto LAB_00c376a0;
    }
    lVar12 = *(long *)((long)__this + 0x20);
    *(undefined1 *)((long)__this + 0x78) = 1;
    if (lVar12 == 0) goto LAB_00c37710;
    if ((bRam0000000001916f93 & 1) == 0) {
      func_0x00a67900(&CarController_TypeInfo,0);
      func_0x00a67900(&string___TypeInfo);
      func_0x00a67900(&Translate_TypeInfo);
      func_0x00a67900(&Str__);
      func_0x00a67900(&Str_HP);
      func_0x00a67900(&Str_SECOND);
      func_0x00a67900(&Str____1_);
      bRam0000000001916f93 = 1;
    }
    plVar15 = *(long **)(lVar12 + 0x4e8);
    lVar8 = func_0x00a679a0(_string___TypeInfo,5);
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CarController_TypeInfo);
    }
    uVar13 = System_Int32__ToString(*(long *)(_CarController_TypeInfo + 0xb8) + 0xc,0);
    if (lVar8 == 0) goto LAB_00c10f6c;
    if ((*(int *)(lVar8 + 0x18) == 0) ||
       (*(undefined8 *)(lVar8 + 0x20) = uVar13, *(int *)(lVar8 + 0x18) == 1)) {
LAB_00c10f68:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    *(undefined8 *)(lVar8 + 0x28) = _Str__;
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c10f6c;
    uVar13 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_SECOND,0);
    if ((*(uint *)(lVar8 + 0x18) < 3) ||
       (*(undefined8 *)(lVar8 + 0x30) = uVar13, *(uint *)(lVar8 + 0x18) == 3)) goto LAB_00c10f68;
    *(undefined8 *)(lVar8 + 0x38) = _Str____1_;
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c10f6c;
    uVar13 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_HP,0);
    if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_00c10f68;
    *(undefined8 *)(lVar8 + 0x40) = uVar13;
    uVar13 = System_String__Concat(lVar8,0);
    if (plVar15 == (long *)0x0) {
LAB_00c10f6c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    (**(code **)(*plVar15 + 0x5a8))(plVar15,uVar13,*(undefined8 *)(*plVar15 + 0x5b0));
    pvVar6 = *(void **)(lVar12 + 200);
    if (pvVar6 == (void *)0x0) goto LAB_00c10f6c;
    iVar10 = 1;
  }
  else {
LAB_00c37480:
    if (((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x70), lVar12 == 0)) ||
       (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c37710;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
    lVar12 = *plVar15;
    if (lVar12 == 0) goto LAB_00c37710;
    if ((uVar5 & 1) == 0) {
LAB_00c376a0:
      pvVar6 = *(void **)(lVar12 + 0x78);
    }
    else {
      pvVar6 = *(void **)(lVar12 + 0x70);
    }
    if (pvVar6 == (void *)0x0) {
LAB_00c37710:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    iVar10 = 0;
  }
code_r0x00c4660c:
  if ((bRam0000000001917151 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo,iVar10,0);
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
  lVar12 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar12 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar12 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x20) = _Str_Try_to_Show__;
  lVar8 = UnityEngine_Component__get_gameObject(pvVar6,0);
  if (lVar8 == 0) goto LAB_00c485b8;
  uVar13 = UnityEngine_Object__get_name(lVar8,0);
  if ((*(uint *)(lVar12 + 0x18) < 2) ||
     (*(undefined8 *)(lVar12 + 0x28) = uVar13, *(uint *)(lVar12 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x30) = _Str___current__;
  uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar5 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar12 + 0x18) < 4) ||
     (*(undefined8 *)(lVar12 + 0x38) = uVar13, *(uint *)(lVar12 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x40) = _Str___last__;
  uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar5 & 1) != 0) {
    lVar8 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar8 == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(lVar8,0);
  }
  uVar4 = *(uint *)(lVar12 + 0x18);
  if ((uVar4 < 6) || (*(undefined8 *)(lVar12 + 0x48) = uVar13, uVar4 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x50) = _Str____Child__;
  plVar15 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar13 = 0;
  if (plVar15 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
    uVar4 = *(uint *)(lVar12 + 0x18);
  }
  if (uVar4 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x58) = uVar13;
  uVar13 = System_String__Concat(lVar12,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar13,0,0);
  uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Equality(uVar13,pvVar6,0);
  if ((uVar5 & 1) != 0) {
    uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar13,0,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
  uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Equality(uVar13,pvVar6,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  lVar12 = _GUIWindow_TypeInfo;
  if ((uVar5 & 1) != 0) {
    lVar12 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar12 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar12,0);
    lVar12 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar13 = **(undefined8 **)(lVar12 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if (((uVar5 & 1) != 0) && (iVar10 == 0)) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  lVar12 = GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(lVar12,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(char *)((long)pvVar6 + 0x20) == '\0') {
      if (lVar12 == 0) goto LAB_00c485b8;
      uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
      if ((uVar5 & 1) == 0) goto LAB_00c46b74;
      uVar17 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar13 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar17;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar13 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if (((uVar5 & 1) != 0) && (*(char *)((long)pvVar6 + 0x21) != '\0')) {
        fVar16 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar16) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),lVar12,0);
          goto LAB_00c46b74;
        }
      }
      if (lVar12 == 0) goto LAB_00c485b8;
      uVar13 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar12,uVar13,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar13 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar13 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(char *)((long)pvVar6 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar12 == 0))
          goto LAB_00c485b8;
          uVar5 = AdvController__EDNAEPDDBPJ(lVar12,0);
          if ((uVar5 & 1) != 0) {
            iVar2 = UnityEngine_Screen__get_width(0);
            iVar3 = UnityEngine_Screen__get_height(0);
            fVar16 = (float)iVar2 / (float)iVar3;
            if (fVar16 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar12 == 0)
               ) goto LAB_00c485b8;
            uVar13 = *(undefined8 *)(lVar12 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar13,0);
            if ((uVar5 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                 lVar12 == 0)) goto LAB_00c485b8;
              uVar13 = *(undefined8 *)(lVar12 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar13,0);
              if ((uVar5 & 1) != 0) {
                if (1.61 <= fVar16) {
                  if ((fVar16 <= 1.61) || (1.8 <= fVar16)) {
                    if (fVar16 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar12 == 0)) goto LAB_00c485b8;
                    uVar13 = *(undefined8 *)(lVar12 + 0x70);
                    uVar18 = 0x3f51eb85;
                    uVar17 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar12 == 0)) goto LAB_00c485b8;
                    uVar13 = *(undefined8 *)(lVar12 + 0x70);
                    uVar18 = 0x3f5eb852;
                    uVar17 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar12 == 0)) goto LAB_00c485b8;
                  uVar13 = *(undefined8 *)(lVar12 + 0x70);
                  uVar18 = 0x3f733333;
                  uVar17 = 0x425c0000;
                }
                goto LAB_00c46f38;
              }
            }
            else {
              if (1.61 <= fVar16) {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar12 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar16) {
                  if (*(long *)(lVar12 + 0x240) == 0) goto LAB_00c485b8;
                  uVar5 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar12 + 0x240),0);
                  if ((uVar5 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar12 == 0)) goto LAB_00c485b8;
                  uVar13 = *(undefined8 *)(lVar12 + 0x60);
                  uVar18 = 0x3f51eb85;
                  uVar17 = 0x41a00000;
                }
                else {
                  uVar13 = *(undefined8 *)(lVar12 + 0x60);
                  uVar18 = 0x3f5eb852;
                  uVar17 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar12 == 0)) goto LAB_00c485b8;
                uVar13 = *(undefined8 *)(lVar12 + 0x60);
                uVar17 = 0xc0a00000;
                uVar18 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar17,uVar18,pvVar6,uVar13);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar12 == 0))
            goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(lVar12,0);
            goto LAB_00c46f70;
          }
        }
        GUIWindow__IPELKJAHFGL(pvVar6);
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
    uVar13 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(char *)((long)pvVar6 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(pvVar6);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar12 == 0))
          goto LAB_00c485b8;
          uVar5 = AdvController__EDNAEPDDBPJ(lVar12,0);
          if ((uVar5 & 1) == 0) goto LAB_00c47120;
          iVar2 = UnityEngine_Screen__get_width(0);
          iVar3 = UnityEngine_Screen__get_height(0);
          fVar16 = (float)iVar2 / (float)iVar3;
          if (1.51 < fVar16) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
            goto LAB_00c485b8;
            uVar13 = *(undefined8 *)(lVar12 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar13,0);
            if ((uVar5 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
              goto LAB_00c485b8;
              uVar13 = *(undefined8 *)(lVar12 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar13,0);
              if ((uVar5 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
                goto LAB_00c485b8;
                uVar13 = *(undefined8 *)(lVar12 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar13,0);
                if ((uVar5 & 1) == 0) {
                  lVar12 = UnityEngine_Component__get_gameObject(pvVar6,0);
                  if (lVar12 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar12,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar12 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar5 = UnityEngine_Object__op_Inequality(lVar12,0,0);
                  if ((uVar5 & 1) != 0) {
                    if (lVar12 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar12 + 0x2c) == 3) {
                      lVar12 = UnityEngine_Component__get_gameObject(pvVar6,0);
                      if (lVar12 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar12,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar5 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar5 & 1) != 0) {
                        if (1.61 <= fVar16) {
                          if (1.8 <= fVar16) {
                            uVar18 = 0x3f59999a;
                            uVar17 = 0x42700000;
                          }
                          else {
                            uVar17 = 0x428c0000;
                            uVar18 = 0;
                          }
                        }
                        else {
                          uVar17 = 0x41a00000;
                          uVar18 = 0;
                        }
                        goto LAB_00c47304;
                      }
                    }
                  }
                  goto LAB_00c47308;
                }
                if (1.61 <= fVar16) {
                  if (fVar16 < 1.8) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
                    goto LAB_00c485b8;
                    lStack_68 = *(long *)(lVar12 + 0xe8);
                    uVar18 = 0x3f733333;
                    uVar17 = 0x428c0000;
                    goto LAB_00c47304;
                  }
                  goto LAB_00c47338;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar12 + 0xe8);
                uVar17 = 0x41f00000;
              }
              else {
                if (1.61 <= fVar16) {
                  if (1.8 <= fVar16) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar12 + 0xb0);
                  uVar18 = 0x3f6e147b;
                  uVar17 = 0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar12 + 0xb0);
                uVar17 = 0xc1c80000;
              }
LAB_00c4729c:
              uVar18 = 0;
            }
            else {
              if (fVar16 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar12 + 0x188);
                uVar17 = 0x41200000;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
              goto LAB_00c485b8;
              lStack_68 = *(long *)(lVar12 + 0x188);
              if (1.8 <= fVar16) {
                uVar18 = 0x3f51eb85;
                uVar17 = 0x42180000;
              }
              else {
                uVar18 = 0x3f733333;
                uVar17 = 0x420c0000;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(uVar17,uVar18,pvVar6,lStack_68);
          }
LAB_00c47308:
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar12 == 0))
          goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(lVar12,0);
        }
      }
    }
  }
LAB_00c47338:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar12 = *(long *)(_Menu_TypeInfo + 0xb8);
  if (*(char *)(lVar12 + 0x1a) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar12 = *(long *)(_Menu_TypeInfo + 0xb8);
    }
    if (*(char *)(lVar12 + 0xc) != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar13 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar12 == 0))
            goto LAB_00c485b8;
            if (*(char *)(lVar12 + 0x6c) != '\0') {
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
              lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (lVar12 == 0) goto LAB_00c485b8;
              uVar5 = DAFNMLEKHAD__MHBEPDHNNFH(lVar12,0);
              if ((uVar5 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar12 == 0))
                goto LAB_00c485b8;
                uVar13 = *(undefined8 *)(lVar12 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar5 = UnityEngine_Object__op_Equality(uVar13,0,0);
                if ((uVar5 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
                  goto LAB_00c485b8;
                  uVar13 = *(undefined8 *)(lVar12 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar13,0);
                  if ((uVar5 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar12 == 0))
                    goto LAB_00c485b8;
                    uVar13 = *(undefined8 *)(lVar12 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar13 = UnityEngine_Object__Instantiate_object_
                                       (uVar13,_Method_UnityEngine_Object_Instantiate_GameObject___)
                    ;
                    *(undefined8 *)(lVar12 + 0x90) = uVar13;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar12 = UnityEngine_Component__get_gameObject(pvVar6,0);
  if (lVar12 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar12,1,0);
  lVar12 = 8;
  if (iVar10 == 0) {
    lVar12 = 0;
  }
  puVar11 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar11[2] = *puVar11;
  *(void **)((long)puVar11 + lVar12) = pvVar6;
  if (*(char *)((long)pvVar6 + 0x23) != '\0') {
    pvVar9 = GUIWindow__FAAELIPKLCB(pvVar6);
    UnityEngine_MonoBehaviour__StartCoroutine(pvVar6,pvVar9,0);
  }
  lVar12 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar12 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar12 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar12 + 0x20) = _Str_Window__Show__;
  uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar5 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar12 + 0x18) < 2) ||
     (*(undefined8 *)(lVar12 + 0x28) = uVar13, *(uint *)(lVar12 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x30) = _Str___last__;
  uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar5 & 1) != 0) {
    lVar8 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar8 == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(lVar8,0);
  }
  uVar4 = *(uint *)(lVar12 + 0x18);
  if ((uVar4 < 4) || (*(undefined8 *)(lVar12 + 0x38) = uVar13, uVar4 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x40) = _Str____Child__;
  plVar15 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar13 = 0;
  if (plVar15 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
    uVar4 = *(uint *)(lVar12 + 0x18);
  }
  if (uVar4 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x48) = uVar13;
  uVar13 = System_String__Concat(lVar12,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar13,0,0);
  bVar1 = Main__KCHOEBEIOCE();
  if (bVar1) {
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
    uVar13 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar5 & 1) != 0) {
      uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar12 == 0))
      goto LAB_00c485b8;
      uVar14 = *(undefined8 *)(lVar12 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar13,uVar14,0);
      if ((uVar5 & 1) == 0) {
        uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar12 == 0))
        goto LAB_00c485b8;
        uVar14 = *(undefined8 *)(lVar12 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Equality(uVar13,uVar14,0);
        if ((uVar5 & 1) == 0) {
          uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar12 == 0))
          goto LAB_00c485b8;
          uVar14 = *(undefined8 *)(lVar12 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Equality(uVar13,uVar14,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (pvVar6 = *(void **)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
               pvVar6 == (void *)0x0)) goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(pvVar6);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar12 == 0))
          goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(lVar12,0);
        }
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar12 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar12 == 0))
        goto LAB_00c485b8;
        lVar12 = *(long *)(lVar12 + 0x178);
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
        if ((lVar8 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar8,0), lVar12 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar12,uVar4 & 1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar13 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar5 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar5 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
    goto LAB_00c485b8;
    uVar5 = GUIGarage__ABAHNKCPCFA(lVar12,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0)) ||
        (lVar12 = *(long *)(lVar12 + 0x78), lVar12 == 0)) ||
       (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c485b8;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0)) ||
         ((lVar12 = *(long *)(lVar12 + 0x70), lVar12 == 0 ||
          (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0))))
      goto LAB_00c485b8;
      uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
      if ((uVar5 & 1) != 0) goto LAB_00c47948;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0)) ||
         (lVar12 = *(long *)(lVar12 + 0x1d0), lVar12 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar12,0,0);
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0)) ||
         (lVar12 = *(long *)(lVar12 + 0x1b8), lVar12 == 0)) goto LAB_00c485b8;
      uVar17 = 0;
    }
    else {
LAB_00c47948:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0)) ||
         (lVar12 = *(long *)(lVar12 + 0x1d0), lVar12 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar12,1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (pvVar9 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar9 == (void *)0x0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(pvVar9);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
      goto LAB_00c485b8;
      lVar12 = *(long *)(lVar12 + 0x3e0);
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
      if ((lVar8 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar8,0), lVar12 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar12,uVar4 & 1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0 ||
          (lVar12 = *(long *)(lVar12 + 0x1b8), lVar12 == 0)))) goto LAB_00c485b8;
      uVar17 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar17,lVar12,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0)) ||
       ((lVar12 = *(long *)(lVar12 + 0x60), lVar12 == 0 ||
        (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0))))
    goto LAB_00c485b8;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
    if ((uVar5 & 1) == 0) {
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
        (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0)) ||
       (lVar12 = *(long *)(lVar12 + 0x68), lVar12 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar12,*(undefined1 *)((long)pvVar6 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
    goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(lVar12 + 0x78);
    uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar14,uVar13,0);
    if ((uVar5 & 1) != 0) {
      uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
      goto LAB_00c485b8;
      uVar14 = *(undefined8 *)(lVar12 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar13,uVar14,0);
      if ((uVar5 & 1) != 0) {
        uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar5 & 1) != 0) {
          uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
          goto LAB_00c485b8;
          uVar14 = *(undefined8 *)(lVar12 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Equality(uVar13,uVar14,0);
          if ((uVar5 & 1) != 0) {
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
        lVar12 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x20), lVar12 == 0)) ||
           (lVar12 = *(long *)(lVar12 + 0x4e0), lVar12 == 0)) goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive
                  (lVar12,*(undefined1 *)((long)*(long **)(_Menu_TypeInfo + 0xb8) + 0xe),0);
        uVar17 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar17;
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
      }
    }
    uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
    goto LAB_00c485b8;
    uVar14 = *(undefined8 *)(lVar12 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar13,uVar14,0);
    if ((uVar5 & 1) == 0) {
      uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
      goto LAB_00c485b8;
      uVar14 = *(undefined8 *)(lVar12 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar13,uVar14,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (pvVar6 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar6 == (void *)0x0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(pvVar6);
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
      lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar12 == 0) goto LAB_00c485b8;
      uVar5 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar12,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar13 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar12 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar12 == 0) goto LAB_00c485b8;
            uVar5 = UnityEngine_AudioSource__get_isPlaying(lVar12,0);
            if ((uVar5 & 1) == 0) {
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
      lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar12 == 0) goto LAB_00c485b8;
      lVar12 = DAFNMLEKHAD__DKJLCJPBPPN(lVar12,0xffffffff,1,0);
      if (lVar12 == 0) {
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
        lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar12 == 0) goto LAB_00c485b8;
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = *(undefined4 *)(lVar12 + 0x104);
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
         (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(lVar12,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (pvVar6 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar6 == (void *)0x0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(pvVar6);
    }
    uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
    goto LAB_00c485b8;
    uVar14 = *(undefined8 *)(lVar12 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar13,uVar14,0);
    if ((uVar5 & 1) != 0) {
      uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar13,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
          goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(lVar12,0,0);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar12 = **(long **)(_Menu_TypeInfo + 0xb8);
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x20), lVar12 == 0)) goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(lVar12,0);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar12 == 0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(lVar12,0);
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


// ==== public bool POLNAJBPECM(int EIGKFINFICB) { }   @0xb37d4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Menu__POLNAJBPECM(void *__this,int EIGKFINFICB)

{
  undefined1 uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar12;
  uint uVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_24 [4];
  
  pvVar2 = Car__get_Current();
  if ((EIGKFINFICB < 1) || (pvVar2 == (void *)0x0)) {
    return false;
  }
  pvVar2 = Car__get_Current();
  if (pvVar2 == (void *)0x0) {
LAB_00c37db4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)((long)pvVar2 + 0x48) != EIGKFINFICB) {
    return false;
  }
  lVar3 = *(long *)((long)__this + 0x38);
  if (lVar3 == 0) goto LAB_00c37db4;
  lVar12 = 0;
  if ((bRam00000000019171e4 & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo,4);
    bRam00000000019171e4 = 1;
  }
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = MaxSdkAndroid__IsInitialized(0);
  if ((uVar4 & 1) == 0) {
    return false;
  }
  lVar3 = *(long *)(lVar3 + 0x40);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((bRam000000000191766d & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___,0);
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_check_rewarded_ad_loaded);
    func_0x00a67900(&Str_isRewardedAdReady);
    bRam000000000191766d = 1;
  }
  MaxSdkBase__ValidateAdUnitIdentifier(lVar3,_Str_check_rewarded_ad_loaded);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar15 = **(long **)(_MaxSdkAndroid_TypeInfo + 0xb8);
  plVar5 = (long *)func_0x00a679a0(_object___TypeInfo,1);
  if (plVar5 == (long *)0x0) {
LAB_00ddff1c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((lVar3 == 0) || (lVar6 = func_0x00a67a34(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar6 != 0))
  {
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar5[4] = lVar3;
    if (lVar15 != 0) {
      UnityEngine_AndroidJavaObject__CallStatic___Il2CppFullySharedGenericType_
                (lVar15,_Str_isRewardedAdReady,plVar5,auStack_24,
                 _Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
      return (bool)auStack_24[0];
    }
    goto LAB_00ddff1c;
  }
  uVar7 = func_0x00a67b74();
  auVar18 = func_0x00a67a20(uVar7,0);
  lVar15 = auVar18._8_8_;
  lVar3 = auVar18._0_8_;
  if ((bRam000000000191766e & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_show_rewarded_ad);
    func_0x00a67900(&Str_Not_showing_MAX_Ads_rewarded_ad__ad_not_);
    func_0x00a67900(&Str_showRewardedAd);
    bRam000000000191766e = 1;
  }
  MaxSdkBase__ValidateAdUnitIdentifier(lVar3,_Str_show_rewarded_ad);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = MaxSdkAndroid__IsRewardedAdReady(lVar3);
  uVar7 = _Str_Not_showing_MAX_Ads_rewarded_ad__ad_not_;
  if ((uVar4 & 1) == 0) {
    uVar9 = _Str_Not_showing_MAX_Ads_rewarded_ad__ad_not_;
    if ((bRam00000000019176b4 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Debug_TypeInfo);
      uVar9 = func_0x00a67900(&Str_Warning__AppLovin_MAX__);
      bRam00000000019176b4 = 1;
    }
    uVar1 = (undefined1)uVar9;
    if (cRam00000000019176de == '\0') {
      uVar1 = func_0x00a67900(&MaxSdkBase_TypeInfo);
      cRam00000000019176de = '\x01';
    }
    if (*(char *)(*(long *)(_MaxSdkBase_TypeInfo + 0xb8) + 2) != '\0') {
      return (bool)uVar1;
    }
    uVar7 = System_String__Concat(_Str_Warning__AppLovin_MAX__,uVar7,0);
    if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Debug_TypeInfo);
    }
    uVar9 = 0;
    if ((bRam000000000191b9e0 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Debug_TypeInfo,0);
      func_0x00a67900(&UnityEngine_ILogger_TypeInfo);
      bRam000000000191b9e0 = 1;
      uVar9 = extraout_x1;
    }
    if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      uVar9 = extraout_x1_00;
    }
    if (cRam000000000191aefe == '\0') {
      func_0x00a67900(&UnityEngine_Debug_TypeInfo,uVar9);
      cRam000000000191aefe = '\x01';
    }
    if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    plVar5 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo + 0xb8) + 8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    lVar3 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar14 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == _UnityEngine_ILogger_TypeInfo) {
          puVar11 = (undefined8 *)(lVar3 + (long)(*piVar14 + 3) * 0x10 + 0x138);
          goto LAB_0146ab34;
        }
        uVar4 = uVar4 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar4 != 0);
    }
    puVar11 = (undefined8 *)func_0x00a9e6c4(plVar5,_UnityEngine_ILogger_TypeInfo,3);
LAB_0146ab34:
                    /* WARNING: Could not recover jumptable at 0x0146ab4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*puVar11)(plVar5,2,uVar7,puVar11[1]);
    return (bool)uVar1;
  }
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = **(long **)(_MaxSdkAndroid_TypeInfo + 0xb8);
  plVar5 = (long *)func_0x00a679a0(_object___TypeInfo,3);
  if (plVar5 == (long *)0x0) goto LAB_00de00e0;
  if ((lVar3 == 0) || (lVar8 = func_0x00a67a34(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar8 != 0))
  {
    uVar13 = *(uint *)(plVar5 + 3);
    if (uVar13 == 0) goto LAB_00de00d0;
    plVar5[4] = lVar3;
    if (lVar15 != 0) {
      lVar3 = func_0x00a67a34(lVar15,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar3 == 0) goto LAB_00de00d4;
      uVar13 = *(uint *)(plVar5 + 3);
    }
    if (uVar13 < 2) goto LAB_00de00d0;
    plVar5[5] = lVar15;
    if (lVar12 != 0) {
      lVar3 = func_0x00a67a34(lVar12,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar3 == 0) goto LAB_00de00d4;
      uVar13 = *(uint *)(plVar5 + 3);
    }
    if (uVar13 < 3) {
LAB_00de00d0:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar5[6] = lVar12;
    uVar7 = _Str_showRewardedAd;
    if (lVar6 != 0) {
      if (*(long *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar16 = *(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x18);
      uVar9 = UnityEngine__AndroidJNIHelper__GetSignature(plVar5);
      uVar7 = UnityEngine__AndroidJNIHelper__GetMethodID(uVar16,uVar7,uVar9,1);
      lVar3 = tpidr_el0;
      lStack_78 = *(long *)(lVar3 + 0x28);
      if ((bRam000000000191b543 & 1) == 0) {
        func_0x00a67900(&Method_UnityEngine_AndroidJavaObject__CallStatic__);
        func_0x00a67900(&Method_System_Span_jvalue___ctor__);
        bRam000000000191b543 = 1;
      }
      if ((plVar5 == (long *)0x0) || (uVar4 = plVar5[3], uVar4 == 0)) {
        uVar9 = 0;
        uVar16 = 0;
      }
      else {
        if ((uVar4 & 0xffffffff) == 0) {
          puVar17 = (undefined1 *)0x0;
        }
        else {
          puVar17 = auStack_90 +
                    -((-(uVar4 >> 0x1f & 1) & 0xfffffff800000000 | (uVar4 & 0xffffffff) << 3) + 0xf
                     & 0xfffffffffffffff0);
        }
        func_0x016decb0(puVar17,0);
        uStack_88 = 0;
        uStack_80 = 0;
        func_0x00c90098(&uStack_88,puVar17,uVar4 & 0xffffffff,_Method_System_Span_jvalue___ctor__);
        uVar9 = uStack_88;
        uVar16 = uStack_80;
      }
      UnityEngine_AndroidJNIHelper__CreateJNIArgArray(plVar5,uVar9,uVar16);
      if (*(long *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      UnityEngine_AndroidJNISafe__CallStaticVoidMethod
                (*(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x18),uVar7,uVar9,uVar16);
      uVar1 = UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar5,uVar9,uVar16);
      while( true ) {
        if (*(long *)(lVar3 + 0x28) == lStack_78) {
          return (bool)uVar1;
        }
        auVar19 = func_0x016dec70();
        if (auVar19._8_4_ != 1) break;
        plVar10 = (long *)func_0x016dec50(auVar19._0_8_);
        lVar12 = *plVar10;
        func_0x016dec60();
        uVar1 = UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar5,uVar9,uVar16);
        if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b48(lVar12);
        }
      }
      UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar5,uVar9,uVar16);
      func_0x00b65214(auVar19._0_8_);
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b48(0);
    }
  }
  else {
LAB_00de00d4:
    uVar7 = func_0x00a67b74();
    func_0x00a67a20(uVar7,0);
  }
LAB_00de00e0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void MAFIGMGAHCJ() { }   @0xb37ca8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__MAFIGMGAHCJ(void *__this)

{
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


// ==== public bool OIDILFECPNP() { }   @0xb33e08

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Menu__OIDILFECPNP(void *__this)

{
  int iVar1;
  
  if ((bRam00000000019170ee & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    bRam00000000019170ee = 1;
  }
  if (*(long *)((long)__this + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(char *)(*(long *)((long)__this + 0x58) + 0x30) == '\0') {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iVar1 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
    if (iVar1 != 9) {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        iVar1 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
      }
      if (iVar1 != 0xb) {
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          iVar1 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
        }
        if (iVar1 != 0xc) {
          if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            iVar1 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
          }
          return iVar1 == 0xd;
        }
      }
    }
  }
  return true;
}


// ==== public bool LDBOEHFLNFA(ShopItem MDBCFHDDHHA) { }   @0xb39124

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Menu__LDBOEHFLNFA(void *__this,void *MDBCFHDDHHA)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar10;
  uint uVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined8 unaff_x23;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  if ((bRam00000000019170f3 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170f3 = 1;
  }
  uVar15 = *(undefined8 *)((long)__this + 0x80);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar15,MDBCFHDDHHA,0);
  if ((uVar3 & 1) == 0) {
    return false;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  iVar2 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar12 == 0) {
LAB_00c39294:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (iVar2 != *(int *)(lVar12 + 0xf4)) {
    return false;
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
  lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if ((lVar12 == 0) || (MDBCFHDDHHA == (void *)0x0)) goto LAB_00c39294;
  iVar2 = ShopItem__HJICMDCENKN(MDBCFHDDHHA,*(int *)(lVar12 + 0xf4));
  if (iVar2 != 0) {
    return false;
  }
  lVar12 = *(long *)((long)__this + 0x38);
  if (lVar12 == 0) goto LAB_00c39294;
  lVar10 = 0;
  if ((bRam00000000019171e4 & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo,2);
    bRam00000000019171e4 = 1;
  }
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = MaxSdkAndroid__IsInitialized(0);
  if ((uVar3 & 1) == 0) {
    return false;
  }
  lVar12 = *(long *)(lVar12 + 0x40);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((bRam000000000191766d & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___,0);
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_check_rewarded_ad_loaded);
    func_0x00a67900(&Str_isRewardedAdReady);
    bRam000000000191766d = 1;
  }
  MaxSdkBase__ValidateAdUnitIdentifier(lVar12,_Str_check_rewarded_ad_loaded);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar14 = **(long **)(_MaxSdkAndroid_TypeInfo + 0xb8);
  plVar4 = (long *)func_0x00a679a0(_object___TypeInfo,1);
  if (plVar4 == (long *)0x0) {
LAB_00ddff1c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((lVar12 == 0) || (lVar5 = func_0x00a67a34(lVar12,*(undefined8 *)(*plVar4 + 0x40)), lVar5 != 0)
     ) {
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar4[4] = lVar12;
    if (lVar14 != 0) {
      UnityEngine_AndroidJavaObject__CallStatic___Il2CppFullySharedGenericType_
                (lVar14,_Str_isRewardedAdReady,plVar4,&stack0xffffffffffffffdc,
                 _Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
      return (bool)(char)((ulong)unaff_x23 >> 0x20);
    }
    goto LAB_00ddff1c;
  }
  uVar15 = func_0x00a67b74();
  auVar18 = func_0x00a67a20(uVar15,0);
  lVar14 = auVar18._8_8_;
  lVar12 = auVar18._0_8_;
  if ((bRam000000000191766e & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_show_rewarded_ad);
    func_0x00a67900(&Str_Not_showing_MAX_Ads_rewarded_ad__ad_not_);
    func_0x00a67900(&Str_showRewardedAd);
    bRam000000000191766e = 1;
  }
  MaxSdkBase__ValidateAdUnitIdentifier(lVar12,_Str_show_rewarded_ad);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = MaxSdkAndroid__IsRewardedAdReady(lVar12);
  uVar15 = _Str_Not_showing_MAX_Ads_rewarded_ad__ad_not_;
  if ((uVar3 & 1) == 0) {
    uVar7 = _Str_Not_showing_MAX_Ads_rewarded_ad__ad_not_;
    if ((bRam00000000019176b4 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Debug_TypeInfo);
      uVar7 = func_0x00a67900(&Str_Warning__AppLovin_MAX__);
      bRam00000000019176b4 = 1;
    }
    uVar1 = (undefined1)uVar7;
    if (cRam00000000019176de == '\0') {
      uVar1 = func_0x00a67900(&MaxSdkBase_TypeInfo);
      cRam00000000019176de = '\x01';
    }
    if (*(char *)(*(long *)(_MaxSdkBase_TypeInfo + 0xb8) + 2) != '\0') {
      return (bool)uVar1;
    }
    uVar15 = System_String__Concat(_Str_Warning__AppLovin_MAX__,uVar15,0);
    if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Debug_TypeInfo);
    }
    uVar7 = 0;
    if ((bRam000000000191b9e0 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Debug_TypeInfo,0);
      func_0x00a67900(&UnityEngine_ILogger_TypeInfo);
      bRam000000000191b9e0 = 1;
      uVar7 = extraout_x1;
    }
    if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      uVar7 = extraout_x1_00;
    }
    if (cRam000000000191aefe == '\0') {
      func_0x00a67900(&UnityEngine_Debug_TypeInfo,uVar7);
      cRam000000000191aefe = '\x01';
    }
    if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    plVar4 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo + 0xb8) + 8);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    lVar12 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar3 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == _UnityEngine_ILogger_TypeInfo) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar13 + 3) * 0x10 + 0x138);
          goto LAB_0146ab34;
        }
        uVar3 = uVar3 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar3 != 0);
    }
    puVar9 = (undefined8 *)func_0x00a9e6c4(plVar4,_UnityEngine_ILogger_TypeInfo,3);
LAB_0146ab34:
                    /* WARNING: Could not recover jumptable at 0x0146ab4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*puVar9)(plVar4,2,uVar15,puVar9[1]);
    return (bool)uVar1;
  }
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = **(long **)(_MaxSdkAndroid_TypeInfo + 0xb8);
  plVar4 = (long *)func_0x00a679a0(_object___TypeInfo,3);
  if (plVar4 == (long *)0x0) goto LAB_00de00e0;
  if ((lVar12 == 0) || (lVar6 = func_0x00a67a34(lVar12,*(undefined8 *)(*plVar4 + 0x40)), lVar6 != 0)
     ) {
    uVar11 = *(uint *)(plVar4 + 3);
    if (uVar11 == 0) goto LAB_00de00d0;
    plVar4[4] = lVar12;
    if (lVar14 != 0) {
      lVar12 = func_0x00a67a34(lVar14,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar12 == 0) goto LAB_00de00d4;
      uVar11 = *(uint *)(plVar4 + 3);
    }
    if (uVar11 < 2) goto LAB_00de00d0;
    plVar4[5] = lVar14;
    if (lVar10 != 0) {
      lVar12 = func_0x00a67a34(lVar10,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar12 == 0) goto LAB_00de00d4;
      uVar11 = *(uint *)(plVar4 + 3);
    }
    if (uVar11 < 3) {
LAB_00de00d0:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar4[6] = lVar10;
    uVar15 = _Str_showRewardedAd;
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar16 = *(undefined8 *)(*(long *)(lVar5 + 0x18) + 0x18);
      uVar7 = UnityEngine__AndroidJNIHelper__GetSignature(plVar4);
      uVar15 = UnityEngine__AndroidJNIHelper__GetMethodID(uVar16,uVar15,uVar7,1);
      lVar12 = tpidr_el0;
      lStack_78 = *(long *)(lVar12 + 0x28);
      if ((bRam000000000191b543 & 1) == 0) {
        func_0x00a67900(&Method_UnityEngine_AndroidJavaObject__CallStatic__);
        func_0x00a67900(&Method_System_Span_jvalue___ctor__);
        bRam000000000191b543 = 1;
      }
      if ((plVar4 == (long *)0x0) || (uVar3 = plVar4[3], uVar3 == 0)) {
        uVar7 = 0;
        uVar16 = 0;
      }
      else {
        if ((uVar3 & 0xffffffff) == 0) {
          puVar17 = (undefined1 *)0x0;
        }
        else {
          puVar17 = auStack_90 +
                    -((-(uVar3 >> 0x1f & 1) & 0xfffffff800000000 | (uVar3 & 0xffffffff) << 3) + 0xf
                     & 0xfffffffffffffff0);
        }
        func_0x016decb0(puVar17,0);
        uStack_88 = 0;
        uStack_80 = 0;
        func_0x00c90098(&uStack_88,puVar17,uVar3 & 0xffffffff,_Method_System_Span_jvalue___ctor__);
        uVar7 = uStack_88;
        uVar16 = uStack_80;
      }
      UnityEngine_AndroidJNIHelper__CreateJNIArgArray(plVar4,uVar7,uVar16);
      if (*(long *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      UnityEngine_AndroidJNISafe__CallStaticVoidMethod
                (*(undefined8 *)(*(long *)(lVar5 + 0x18) + 0x18),uVar15,uVar7,uVar16);
      uVar1 = UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar4,uVar7,uVar16);
      while( true ) {
        if (*(long *)(lVar12 + 0x28) == lStack_78) {
          return (bool)uVar1;
        }
        auVar19 = func_0x016dec70();
        if (auVar19._8_4_ != 1) break;
        plVar8 = (long *)func_0x016dec50(auVar19._0_8_);
        lVar10 = *plVar8;
        func_0x016dec60();
        uVar1 = UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar4,uVar7,uVar16);
        if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b48(lVar10);
        }
      }
      UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar4,uVar7,uVar16);
      func_0x00b65214(auVar19._0_8_);
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b48(0);
    }
  }
  else {
LAB_00de00d4:
    uVar15 = func_0x00a67b74();
    func_0x00a67a20(uVar15,0);
  }
LAB_00de00e0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void IKFJEPCBKJB() { }   @0xb39b28

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__IKFJEPCBKJB(void *__this)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  if ((bRam00000000019170f8 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_ConsoleTipsBottom___);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170f8 = 1;
  }
  uVar1 = *(undefined8 *)((long)__this + 0x60);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__Instantiate_object_
                    (uVar1,_Method_UnityEngine_Object_Instantiate_GameObject___);
  *(undefined8 *)((long)__this + 0x68) = uVar1;
  UnityEngine_Object__DontDestroyOnLoad(uVar1,0);
  if (*(long *)((long)__this + 0x68) != 0) {
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (*(long *)((long)__this + 0x68),&uStack_28,
               _Method_UnityEngine_GameObject_GetComponent_ConsoleTipsBottom___);
    *(undefined8 *)((long)__this + 0x70) = uStack_28;
    if (*(long *)((long)__this + 0x68) != 0) {
      UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x68),0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void LJDEGMJCOIG() { }   @0xb3977c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__LJDEGMJCOIG(void *__this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined4 uVar12;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_64;
  
  if ((bRam00000000019170fb & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170fb = 1;
  }
  uVar10 = *(undefined8 *)((long)__this + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (((*(long *)((long)__this + 0x20) == 0) ||
      (lVar8 = *(long *)(*(long *)((long)__this + 0x20) + 0x78), lVar8 == 0)) ||
     (lVar8 = UnityEngine_Component__get_gameObject(lVar8,0), lVar8 == 0)) {
LAB_00c398e8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if ((*(long *)((long)__this + 0x20) == 0) ||
     (lVar8 = *(long *)(*(long *)((long)__this + 0x20) + 0x430), lVar8 == 0)) goto LAB_00c398e8;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) < 1) {
    return;
  }
  uVar7 = UnityEngine_Input__GetKey(0x130,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  if ((uVar7 & 1) == 0) {
    iVar2 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) + -1;
  }
  else {
    iVar2 = 0;
  }
  *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = iVar2;
  uVar12 = UnityEngine_Time__get_realtimeSinceStartup(0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar12;
  if ((bRam00000000019170fa & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__get_Current__);
    func_0x00a67900(&Method_System_Collections_Generic_List_DJKGLJOCFCE__GetEnumerator__);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_EVENT_CAR_UNLOCK);
    func_0x00a67900(&Str_RefreshGarage);
    func_0x00a67900(&Str_LOCK_CAR_TEXT);
    func_0x00a67900(&Str_LOCK_CAR_IN_THIS_MODE);
    func_0x00a67900(&Str_CLAIM);
    func_0x00a67900(&Str___color_);
    func_0x00a67900(&Str__x_);
    func_0x00a67900(&Str__color__faaf32_);
    func_0x00a67900(&Str_EVENT_);
    bRam00000000019170fa = 1;
  }
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_64 = 0;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_RefreshGarage,0,0);
  if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
     (lVar8 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar8 == 0)) goto LAB_00c35de4;
  iVar2 = *(int *)(lVar8 + 0x18);
  plVar11 = (long *)((long)__this + 0x20);
  if (*plVar11 == 0) goto LAB_00c35de4;
  uVar10 = *(undefined8 *)(*plVar11 + 0x430);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar7 & 1) != 0) {
    if (*plVar11 == 0) goto LAB_00c35de4;
    lVar8 = *(long *)(*plVar11 + 0x430);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (lVar8 == 0) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive
              (lVar8,*(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) != 0,0);
  }
  if (*plVar11 == 0) goto LAB_00c35de4;
  uVar10 = *(undefined8 *)(*plVar11 + 0x420);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar7 & 1) != 0) {
    if (*plVar11 == 0) goto LAB_00c35de4;
    lVar8 = *(long *)(*plVar11 + 0x420);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iVar3 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
    uVar1 = Car__NBMGBADFACE(0);
    if (lVar8 == 0) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar8,iVar3 < (int)((iVar2 - (~uVar1 & 1)) + -2),0);
  }
  if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x428), lVar8 == 0)) goto LAB_00c35de4;
  UnityEngine_GameObject__SetActive(lVar8,0,0);
  if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x438), lVar8 == 0)) goto LAB_00c35de4;
  UnityEngine_GameObject__SetActive(lVar8,0,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar8 = *(long *)(_Main_TypeInfo + 0xb8);
  lVar9 = *(long *)(lVar8 + 0x40);
  if (lVar9 != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar8 = *(long *)(_Main_TypeInfo + 0xb8);
      lVar9 = *(long *)(lVar8 + 0x40);
      if (lVar9 == 0) goto LAB_00c35de4;
    }
    if (*(int *)(lVar9 + 0x10) == 1) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar8 = *(long *)(_Main_TypeInfo + 0xb8);
      }
      if (*(int *)(lVar8 + 0x2c) == 1) {
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
        if (lVar8 == 0) goto LAB_00c35de4;
        lVar8 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar8,1,0);
        if (lVar8 != 0) {
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
          if ((lVar8 == 0) || (lVar8 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar8,1,0), lVar8 == 0))
          goto LAB_00c35de4;
          uVar7 = DJKGLJOCFCE__MCDLFBJCNNA(lVar8,0);
          if ((uVar7 & 1) == 0) {
            if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x430), lVar8 == 0))
            goto LAB_00c35de4;
            UnityEngine_GameObject__SetActive(lVar8,0,0);
          }
        }
      }
    }
  }
  if (*plVar11 == 0) goto LAB_00c35de4;
  GUIGarage__OHFNNEHCIEH(*plVar11,0);
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
  if (lVar8 == 0) goto LAB_00c35de4;
  iVar2 = -1;
  lVar8 = DAFNMLEKHAD__DKJLCJPBPPN(lVar8,0xffffffff,1,0);
  lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar9 == 0) {
LAB_00c35438:
    iVar3 = iVar2;
    if (lVar8 != 0) goto LAB_00c35448;
LAB_00c354c0:
    if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x478), lVar8 == 0)) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar8,1,0);
    if ((void *)*plVar11 == (void *)0x0) goto LAB_00c35de4;
    GUIGarage__PHKCLDLDABM((void *)*plVar11,false);
    if (iVar2 == -1) {
      pvVar5 = Car__get_Current();
      if (pvVar5 == (void *)0x0) goto LAB_00c35de4;
      if (*(int *)((long)pvVar5 + 0x44) != 0) goto LAB_00c3550c;
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
      if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x120), lVar8 == 0)) goto LAB_00c35de4;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                (lVar8,&lStack_a8,
                 _Method_System_Collections_Generic_List_DJKGLJOCFCE__GetEnumerator__);
      uStack_88 = uStack_a0;
      lStack_90 = lStack_a8;
      uStack_80 = uStack_98;
      uVar1 = 0;
      while (uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                               (&lStack_90,
                                _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__
                               ), (uVar7 & 1) != 0) {
        func_0x00b947ec(&lStack_90,&lStack_a8,
                        _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__get_Current__
                       );
        lVar8 = lStack_a8;
        if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        iVar3 = *(int *)(lStack_a8 + 0x10);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (iVar3 == *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) + -1) {
          uVar4 = DJKGLJOCFCE__MCDLFBJCNNA(lVar8,0);
          uVar1 = uVar1 | uVar4;
        }
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                (&lStack_90,
                 _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__);
      if ((uVar1 & 1) != 0) {
        uVar12 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar12;
        pvVar5 = Car__get_Current();
        if ((pvVar5 == (void *)0x0) || (*plVar11 == 0)) goto LAB_00c35de4;
        plVar6 = *(long **)(*plVar11 + 0x488);
        if (*(int *)((long)pvVar5 + 0x20) < 1) {
          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
             (uVar10 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_CLAIM), plVar6 == (long *)0x0
             )) goto LAB_00c35de4;
          (**(code **)(*plVar6 + 0x5a8))(plVar6,uVar10,*(undefined8 *)(*plVar6 + 0x5b0));
          if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x490), lVar8 == 0))
          goto LAB_00c35de4;
          UnityEngine_GameObject__SetActive(lVar8,0,0);
        }
        else {
          pvVar5 = Car__get_Current();
          if ((pvVar5 == (void *)0x0) ||
             (uVar10 = System_Int32__ToString((long)pvVar5 + 0x20,0), plVar6 == (long *)0x0))
          goto LAB_00c35de4;
          (**(code **)(*plVar6 + 0x5a8))(plVar6,uVar10,*(undefined8 *)(*plVar6 + 0x5b0));
        }
        if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x480), lVar8 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar8,1,0);
        if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x4c0), lVar8 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar8,1,0);
        if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x498), lVar8 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar8,0,0);
        if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x4a0), lVar8 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar8,0,0);
        if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x4b8), lVar8 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar8,0,0);
        goto LAB_00c35704;
      }
      lVar8 = *plVar11;
      if (lVar8 == 0) goto LAB_00c35de4;
      *(undefined1 *)(lVar8 + 0x470) = 1;
      if (*(long *)(lVar8 + 0x480) == 0) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(*(long *)(lVar8 + 0x480),0,0);
      if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x498), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,0,0);
      if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x4a0), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,0,0);
      if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x4c0), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,1,0);
      if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x4b8), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,1,0);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c35de4;
      lVar8 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_LOCK_CAR_TEXT);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      uVar10 = System_Int32__ToString(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c,0);
LAB_00c35640:
      uVar10 = System_String__Concat(_Str__color__faaf32_,uVar10,_Str___color_,0);
      if (lVar8 == 0) goto LAB_00c35de4;
      uVar10 = System_String__Replace(lVar8,_Str__x_,uVar10,0);
      if ((*plVar11 == 0) || (plVar6 = *(long **)(*plVar11 + 0x4c8), plVar6 == (long *)0x0))
      goto LAB_00c35de4;
      lVar8 = *plVar6;
    }
    else {
LAB_00c3550c:
      pvVar5 = Car__get_Current();
      if (((pvVar5 == (void *)0x0) || (*plVar11 == 0)) ||
         (lVar8 = *(long *)(*plVar11 + 0x480), lVar8 == 0)) goto LAB_00c35de4;
      iVar3 = *(int *)((long)pvVar5 + 0x44);
      UnityEngine_GameObject__SetActive(lVar8,0,0);
      if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x498), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,0,0);
      if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x4a0), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,0,0);
      if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x4c0), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,1,0);
      if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x4b8), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,1,0);
      if (iVar3 != 0) {
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c35de4;
        lVar8 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_EVENT_CAR_UNLOCK);
        lVar9 = **(long **)(_Translate_TypeInfo + 0xb8);
        pvVar5 = Car__get_Current();
        if (pvVar5 == (void *)0x0) goto LAB_00c35de4;
        uStack_64 = *(undefined4 *)((long)pvVar5 + 0x44);
        uVar10 = System_Int32__ToString(&uStack_64,0);
        uVar10 = System_String__Concat(_Str_EVENT_,uVar10,0);
        if (lVar9 == 0) goto LAB_00c35de4;
        uVar10 = Translate__JJJNIPAKLJF(uVar10,uVar10);
        goto LAB_00c35640;
      }
      if (*plVar11 == 0) goto LAB_00c35de4;
      plVar6 = *(long **)(*plVar11 + 0x4c8);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
         (uVar10 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_LOCK_CAR_IN_THIS_MODE),
         plVar6 == (long *)0x0)) goto LAB_00c35de4;
      lVar8 = *plVar6;
    }
    (**(code **)(lVar8 + 0x5a8))(plVar6,uVar10,*(undefined8 *)(lVar8 + 0x5b0));
  }
  else {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
      lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar9 == 0) goto LAB_00c35de4;
    }
    if (99 < *(int *)(lVar9 + 0x10)) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
        lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar9 == 0) goto LAB_00c35de4;
      }
      if (*(long *)(lVar9 + 0x50) == 0) goto LAB_00c35de4;
      iVar2 = EventContest__get_car_id(*(long *)(lVar9 + 0x50),0);
      if (-1 < iVar2) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x50), lVar9 == 0)) goto LAB_00c35de4;
        iVar2 = EventContest__get_car_id(lVar9,0);
        goto LAB_00c35438;
      }
    }
    iVar2 = -1;
    iVar3 = -1;
    if (lVar8 == 0) goto LAB_00c354c0;
LAB_00c35448:
    iVar2 = iVar3;
    if (iVar2 != -1) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x50), lVar9 == 0)) goto LAB_00c35de4;
      iVar3 = EventContest__get_car_id(lVar9,0);
      if (iVar3 != *(int *)(lVar8 + 0x10)) goto LAB_00c354c0;
    }
    if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x478), lVar8 == 0)) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar8,0,0);
    if ((void *)*plVar11 == (void *)0x0) goto LAB_00c35de4;
    GUIGarage__PHKCLDLDABM((void *)*plVar11,true);
  }
LAB_00c35704:
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar8 = *(long *)(_Main_TypeInfo + 0xb8);
  if (*(long *)(lVar8 + 0x40) != 0) {
    if (iVar2 == -1) {
      pvVar5 = Car__get_Current();
      if (pvVar5 == (void *)0x0) goto LAB_00c35de4;
      if (*(int *)((long)pvVar5 + 0x44) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        plVar6 = *(long **)(_Main_TypeInfo + 0xb8);
        lVar8 = plVar6[8];
        if (lVar8 == 0) goto LAB_00c35de4;
        if (0 < *(int *)(lVar8 + 0x10)) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            plVar6 = *(long **)(_Main_TypeInfo + 0xb8);
            lVar8 = plVar6[8];
            if (lVar8 == 0) goto LAB_00c35de4;
          }
          if ((*plVar6 == 0) || (lVar9 = *(long *)(*plVar6 + 0x28), lVar9 == 0)) goto LAB_00c35de4;
          if (*(int *)(lVar8 + 0x10) < *(int *)(lVar9 + 0x18)) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              plVar6 = *(long **)(_Main_TypeInfo + 0xb8);
              lVar8 = plVar6[8];
              if (lVar8 == 0) goto LAB_00c35de4;
            }
            if (*(int *)((long)plVar6 + 0x2c) != *(int *)(lVar8 + 0x10)) {
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
              lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
              if ((lVar8 == 0) ||
                 (lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar9 == 0))
              goto LAB_00c35de4;
              lVar8 = DAFNMLEKHAD__DKJLCJPBPPN(lVar9,*(undefined4 *)(lVar8 + 0x10),1,0);
              if (lVar8 == 0) {
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
                if (lVar8 == 0) goto LAB_00c35de4;
                iVar2 = DAFNMLEKHAD__LOCFCFJIAIH(lVar8,0);
                plVar6 = *(long **)(_Main_TypeInfo + 0xb8);
                if (((*plVar6 == 0) || (lVar8 = plVar6[8], lVar8 == 0)) ||
                   (lVar9 = *(long *)(*plVar6 + 0x28), lVar9 == 0)) goto LAB_00c35de4;
                if (*(uint *)(lVar9 + 0x18) <= *(uint *)(lVar8 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                lVar9 = *(long *)(lVar9 + (long)(int)*(uint *)(lVar8 + 0x10) * 8 + 0x20);
                if (lVar9 == 0) goto LAB_00c35de4;
                if (*(int *)(lVar9 + 0x20) <= iVar2) {
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_Main_TypeInfo);
                    plVar6 = *(long **)(_Main_TypeInfo + 0xb8);
                    lVar8 = plVar6[8];
                    if (lVar8 == 0) goto LAB_00c35de4;
                  }
                  lVar9 = *plVar11;
                  if (lVar9 == 0) goto LAB_00c35de4;
                  if (*(int *)(lVar8 + 0x10) < *(int *)((long)plVar6 + 0x2c)) {
                    lVar8 = *(long *)(lVar9 + 0x438);
                    *(undefined1 *)(lVar9 + 0x470) = 1;
                  }
                  else {
                    lVar8 = *(long *)(lVar9 + 0x428);
                    *(undefined1 *)(lVar9 + 0x471) = 1;
                  }
                  if (lVar8 == 0) goto LAB_00c35de4;
                  UnityEngine_GameObject__SetActive(lVar8,1,0);
                }
              }
            }
          }
        }
      }
    }
    else {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar8 = *(long *)(_Main_TypeInfo + 0xb8);
      }
      if (iVar2 != *(int *)(lVar8 + 0x2c)) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar8 = *plVar11;
        if (lVar8 == 0) goto LAB_00c35de4;
        if (iVar2 < *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c)) {
          *(undefined1 *)(lVar8 + 0x470) = 1;
        }
        else {
          *(undefined1 *)(lVar8 + 0x471) = 1;
        }
      }
    }
  }
  if (*plVar11 != 0) {
    plVar6 = *(long **)(*plVar11 + 1000);
    pvVar5 = Car__get_Current();
    if ((pvVar5 != (void *)0x0) && (plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 0x5a8))
                (plVar6,*(undefined8 *)((long)pvVar5 + 0x10),*(undefined8 *)(*plVar6 + 0x5b0));
      if (*plVar11 != 0) {
        GUIGarage__FJCMAMFOKNL(*plVar11,0);
        Menu__CKPDEIAFHEC();
        Menu__CDFHCNMGCFI(__this);
        Menu__INMDNKGHGEO(__this);
        Menu__FMEHJALLGBK(__this);
        uVar10 = *(undefined8 *)((long)__this + 0x70);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(long *)((long)__this + 0x70) == 0) goto LAB_00c35de4;
          ConsoleTipsBottom__ABIEFKKDOGK(*(long *)((long)__this + 0x70),0);
        }
        return;
      }
    }
  }
LAB_00c35de4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void EKNLDPBPLDC() { }   @0xb3a548

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__EKNLDPBPLDC(void *__this)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  void *__this_00;
  long lVar9;
  uint uVar10;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  
  if ((bRam0000000001917100 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_int__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_List_int___ctor__);
    func_0x00a67900(&Method_System_Collections_Generic_List_int__get_Count__);
    func_0x00a67900(&Method_System_Collections_Generic_List_int__get_Item__);
    func_0x00a67900(&System_Collections_Generic_List_int__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&System_Random_TypeInfo);
    func_0x00a67900(&Str_Main_playerProfile_UpgradeRewardedItem__);
    func_0x00a67900(&Str_NULL);
    func_0x00a67900(&Str_Final_Rewarded_Item__);
    bRam0000000001917100 = 1;
  }
  if (*(char *)((long)__this + 0x88) != '\0') {
    return;
  }
  uVar3 = Menu__JLEEACEPDIE();
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c3a920;
  uVar3 = AdvController__HNDMJBICLJF(*(long *)((long)__this + 0x38),2,0);
  if ((uVar3 & 1) == 0) {
    return;
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
  lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar7 == 0) goto LAB_00c3a920;
  if (*(int *)(lVar7 + 0xf4) < 1) {
    return;
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
    lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
  }
  else {
    lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if ((lVar8 == 0) || (lVar7 == 0)) goto LAB_00c3a920;
  lVar7 = DAFNMLEKHAD__DKJLCJPBPPN(lVar7,*(undefined4 *)(lVar8 + 0xf4),1,0);
  if (lVar7 == 0) {
    return;
  }
  *(undefined1 *)((long)__this + 0x88) = 1;
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
  lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar7 == 0) goto LAB_00c3a920;
  uStack_5c = *(uint *)(lVar7 + 0xf0);
  uVar4 = System_Int32__ToString(&uStack_5c,0);
  uVar4 = System_String__Concat(_Str_Main_playerProfile_UpgradeRewardedItem__,uVar4,0);
  Main__GEMDEAMAGPG(uVar4,0,0);
  if (uStack_5c == 0xffffffff) {
    lVar7 = func_0x00a67b44(_System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
              (lVar7,_Method_System_Collections_Generic_List_int___ctor__);
    lVar8 = *(long *)((long)__this + 0x20);
    if (lVar8 != 0) {
      lVar9 = 4;
      while (lVar8 = *(long *)(lVar8 + 0x560), lVar8 != 0) {
        uVar10 = (int)lVar9 - 4;
        if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar10) {
          if (lVar7 != 0) {
            if (*(int *)(lVar7 + 0x18) < 1) goto LAB_00c3aa0c;
            plVar5 = (long *)func_0x00a67b44(_System_Random_TypeInfo);
            System_Random___ctor(plVar5,0);
            if (plVar5 != (long *)0x0) {
              uVar2 = (**(code **)(*plVar5 + 0x1a8))
                                (plVar5,*(undefined4 *)(lVar7 + 0x18),
                                 *(undefined8 *)(*plVar5 + 0x1b0));
              System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                        (lVar7,uVar2,&uStack_54,
                         _Method_System_Collections_Generic_List_int__get_Item__);
              uStack_5c = uStack_54;
              if ((*(long *)((long)__this + 0x20) != 0) &&
                 (lVar7 = *(long *)(*(long *)((long)__this + 0x20) + 0x560), lVar7 != 0)) {
                if (*(uint *)(lVar7 + 0x18) <= uStack_54) goto LAB_00c3aabc;
                *(undefined8 *)((long)__this + 0x80) =
                     *(undefined8 *)(lVar7 + (long)(int)uStack_54 * 8 + 0x20);
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
                lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                if (lVar7 != 0) {
                  DAFNMLEKHAD__EIGEDMABAKJ(lVar7,uStack_5c,0);
                  goto LAB_00c3aa0c;
                }
              }
            }
          }
          break;
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_00c3aabc;
        __this_00 = *(void **)(lVar8 + lVar9 * 8);
        if (__this_00 == (void *)0x0) break;
        if (*(int *)((long)__this_00 + 0x28) != 4) {
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
          if (lVar8 == 0) break;
          iVar1 = ShopItem__HJICMDCENKN(__this_00,*(int *)(lVar8 + 0xf4));
          if (iVar1 == 0) {
            if ((*(long *)((long)__this + 0x20) == 0) ||
               (lVar8 = *(long *)(*(long *)((long)__this + 0x20) + 0x560), lVar8 == 0)) break;
            if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_00c3aabc;
            lVar8 = *(long *)(lVar8 + lVar9 * 8);
            if (lVar8 == 0) break;
            if (*(char *)(lVar8 + 0x70) == '\0') {
              if (lVar7 == 0) break;
              uStack_58 = uVar10;
              func_0x00b7fe44(lVar7,&uStack_58,_Method_System_Collections_Generic_List_int__Add__);
            }
          }
        }
        lVar8 = *(long *)((long)__this + 0x20);
        lVar9 = lVar9 + 1;
        if (lVar8 == 0) break;
      }
    }
    goto LAB_00c3a920;
  }
  if ((int)uStack_5c < 0) {
LAB_00c3a800:
    *(undefined8 *)((long)__this + 0x80) = 0;
  }
  else {
    if ((*(long *)((long)__this + 0x20) == 0) ||
       (lVar7 = *(long *)(*(long *)((long)__this + 0x20) + 0x560), lVar7 == 0)) goto LAB_00c3a920;
    if ((int)*(uint *)(lVar7 + 0x18) <= (int)uStack_5c) goto LAB_00c3a800;
    if (*(uint *)(lVar7 + 0x18) <= uStack_5c) {
LAB_00c3aabc:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    *(undefined8 *)((long)__this + 0x80) = *(undefined8 *)(lVar7 + (ulong)uStack_5c * 8 + 0x20);
  }
LAB_00c3aa0c:
  uVar4 = *(undefined8 *)((long)__this + 0x80);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  uVar4 = _Str_Final_Rewarded_Item__;
  uVar6 = _Str_NULL;
  if ((uVar3 & 1) != 0) {
    if (*(long *)((long)__this + 0x80) == 0) {
LAB_00c3a920:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar6 = UnityEngine_Object__get_name(*(long *)((long)__this + 0x80),0);
  }
  uVar4 = System_String__Concat(uVar4,uVar6,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar4,0,0);
  return;
}


// ==== public void INMDNKGHGEO() { }   @0xb39c48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__INMDNKGHGEO(void *__this)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  byte abStack_34 [4];
  
  if ((bRam0000000001917105 & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_IsNeedShowGarageTutorial_____);
    bRam0000000001917105 = 1;
  }
  abStack_34[0] = 0;
  if (*(long *)((long)__this + 0x20) != 0) {
    uVar5 = *(undefined8 *)(*(long *)((long)__this + 0x20) + 0x78);
    uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar8,uVar5,0);
    if ((uVar3 & 1) != 0) {
      Menu__EKNLDPBPLDC(__this);
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined4 *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x48) = 0;
    if ((*(long *)((long)__this + 0x20) != 0) &&
       (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x560), lVar6 != 0)) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar1) {
        uVar7 = 0;
        do {
          if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar4 = *(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
          if (lVar4 == 0) goto LAB_00c39eac;
          ShopItem__KGOOJPBMMBK(lVar4,0);
          uVar1 = *(uint *)(lVar6 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar1);
      }
      if (*(long *)((long)__this + 0x20) != 0) {
        uVar5 = *(undefined8 *)(*(long *)((long)__this + 0x20) + 0x78);
        uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Equality(uVar8,uVar5,0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c39eac;
          uVar5 = *(undefined8 *)(*(long *)((long)__this + 0x20) + 0x98);
          uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar3 = UnityEngine_Object__op_Inequality(uVar8,uVar5,0);
          if ((uVar3 & 1) != 0) {
            bVar2 = Menu__PNMOPPJFFDF(__this);
            abStack_34[0] = bVar2 & 1;
            if ((bVar2 & 1) == 0) {
              if (*(char *)((long)__this + 0x7b) != '\0') {
                Menu__LAFACBFLFLF(__this);
              }
            }
            else {
              Menu__EKMAFPGBHDL(__this);
            }
            if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = System_Boolean__ToString(abStack_34,0);
            uVar5 = System_String__Concat(_Str_IsNeedShowGarageTutorial_____,uVar5,0);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_Main_TypeInfo);
            }
            Main__GEMDEAMAGPG(uVar5,0,0);
          }
        }
        return;
      }
    }
  }
LAB_00c39eac:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



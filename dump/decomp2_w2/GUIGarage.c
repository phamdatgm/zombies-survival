// ==== public void DonateWindowGold() { }   @0xb07d54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__DonateWindowGold(void *__this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001916f5d & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f5d = 1;
  }
  GUIGarage__GFNKMDJEDBD(__this);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
     (lVar1 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40), lVar1 != 0)) {
    AnalyticsController__KNPMHFKJGNL(lVar1,0);
    if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
      uVar3 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x48);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x48) == 0)) goto LAB_00c07e78;
        Purchaser__KHDFDGMBOIJ();
      }
      if (*(long *)((long)__this + 0xa8) != 0) {
        GUIWindow__HEGIHOAJOKK(*(long *)((long)__this + 0xa8),1,0);
        lVar1 = *(long *)((long)__this + 0x660);
        *(undefined1 *)((long)__this + 0x6cc) = 1;
        if (lVar1 != 0) {
          if (*(uint *)(lVar1 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          if (*(long *)(lVar1 + 0x28) != 0) {
            UnityEngine_UI_Toggle__set_isOn(*(long *)(lVar1 + 0x28),1,0);
            *(undefined4 *)((long)__this + 0x6c8) = 1;
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
  }
LAB_00c07e78:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonCheatRestoreHP() { }   @0xb08964

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonCheatRestoreHP(void *__this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  void *__this_00;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined4 uVar13;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_64;
  
  if ((bRam0000000001916f5b & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916f5b = 1;
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
  if (lVar5 == 0) {
LAB_00c08ab4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  lVar5 = DAFNMLEKHAD__DKJLCJPBPPN(lVar5,0xffffffff,1,0);
  if (lVar5 == 0) {
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
  lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if ((lVar5 == 0) || (lVar5 = DAFNMLEKHAD__DKJLCJPBPPN(lVar5,0xffffffff,1,0), lVar5 == 0))
  goto LAB_00c08ab4;
  MKCBGHDANLA__DDPLLMLFICC(lVar5,0xffffffff,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = **(long **)(_Menu_TypeInfo + 0xb8);
  if (lVar5 == 0) goto LAB_00c08ab4;
  if ((bRam00000000019170fa & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__,0);
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
  plVar12 = (long *)(lVar5 + 0x20);
  if (*plVar12 == 0) goto LAB_00c35de4;
  uVar10 = *(undefined8 *)(*plVar12 + 0x430);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar6 & 1) != 0) {
    if (*plVar12 == 0) goto LAB_00c35de4;
    lVar8 = *(long *)(*plVar12 + 0x430);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (lVar8 == 0) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive
              (lVar8,*(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) != 0,0);
  }
  if (*plVar12 == 0) goto LAB_00c35de4;
  uVar10 = *(undefined8 *)(*plVar12 + 0x420);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar6 & 1) != 0) {
    if (*plVar12 == 0) goto LAB_00c35de4;
    lVar8 = *(long *)(*plVar12 + 0x420);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iVar3 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
    uVar1 = Car__NBMGBADFACE(0);
    if (lVar8 == 0) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar8,iVar3 < (int)((iVar2 - (~uVar1 & 1)) + -2),0);
  }
  if ((*plVar12 == 0) || (lVar8 = *(long *)(*plVar12 + 0x428), lVar8 == 0)) goto LAB_00c35de4;
  UnityEngine_GameObject__SetActive(lVar8,0,0);
  if ((*plVar12 == 0) || (lVar8 = *(long *)(*plVar12 + 0x438), lVar8 == 0)) goto LAB_00c35de4;
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
          uVar6 = DJKGLJOCFCE__MCDLFBJCNNA(lVar8,0);
          if ((uVar6 & 1) == 0) {
            if ((*plVar12 == 0) || (lVar8 = *(long *)(*plVar12 + 0x430), lVar8 == 0))
            goto LAB_00c35de4;
            UnityEngine_GameObject__SetActive(lVar8,0,0);
          }
        }
      }
    }
  }
  if (*plVar12 == 0) goto LAB_00c35de4;
  GUIGarage__OHFNNEHCIEH(*plVar12,0);
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
    if ((*plVar12 == 0) || (lVar8 = *(long *)(*plVar12 + 0x478), lVar8 == 0)) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar8,1,0);
    if (*plVar12 == 0) goto LAB_00c35de4;
    GUIGarage__PHKCLDLDABM(*plVar12,0,0);
    if (iVar2 == -1) {
      lVar8 = Car__get_Current(0);
      if (lVar8 == 0) goto LAB_00c35de4;
      if (*(int *)(lVar8 + 0x44) != 0) goto LAB_00c3550c;
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
      while (uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                               (&lStack_90,
                                _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__
                               ), (uVar6 & 1) != 0) {
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
        uVar13 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar13;
        lVar8 = Car__get_Current(0);
        if ((lVar8 == 0) || (*plVar12 == 0)) goto LAB_00c35de4;
        plVar7 = *(long **)(*plVar12 + 0x488);
        if (*(int *)(lVar8 + 0x20) < 1) {
          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
             (uVar10 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_CLAIM), plVar7 == (long *)0x0
             )) goto LAB_00c35de4;
          (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar10,*(undefined8 *)(*plVar7 + 0x5b0));
          if ((*plVar12 == 0) || (lVar8 = *(long *)(*plVar12 + 0x490), lVar8 == 0))
          goto LAB_00c35de4;
          UnityEngine_GameObject__SetActive(lVar8,0,0);
        }
        else {
          lVar8 = Car__get_Current(0);
          if ((lVar8 == 0) ||
             (uVar10 = System_Int32__ToString(lVar8 + 0x20,0), plVar7 == (long *)0x0))
          goto LAB_00c35de4;
          (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar10,*(undefined8 *)(*plVar7 + 0x5b0));
        }
        if ((*plVar12 == 0) || (lVar8 = *(long *)(*plVar12 + 0x480), lVar8 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar8,1,0);
        if ((*plVar12 == 0) || (lVar8 = *(long *)(*plVar12 + 0x4c0), lVar8 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar8,1,0);
        if ((*plVar12 == 0) || (lVar8 = *(long *)(*plVar12 + 0x498), lVar8 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar8,0,0);
        if ((*plVar12 == 0) || (lVar8 = *(long *)(*plVar12 + 0x4a0), lVar8 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar8,0,0);
        if ((*plVar12 == 0) || (lVar8 = *(long *)(*plVar12 + 0x4b8), lVar8 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar8,0,0);
        goto LAB_00c35704;
      }
      lVar8 = *plVar12;
      if (lVar8 == 0) goto LAB_00c35de4;
      *(undefined1 *)(lVar8 + 0x470) = 1;
      if (*(long *)(lVar8 + 0x480) == 0) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(*(long *)(lVar8 + 0x480),0,0);
      if ((*plVar12 == 0) || (lVar8 = *(long *)(*plVar12 + 0x498), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,0,0);
      if ((*plVar12 == 0) || (lVar8 = *(long *)(*plVar12 + 0x4a0), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,0,0);
      if ((*plVar12 == 0) || (lVar8 = *(long *)(*plVar12 + 0x4c0), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,1,0);
      if ((*plVar12 == 0) || (lVar8 = *(long *)(*plVar12 + 0x4b8), lVar8 == 0)) goto LAB_00c35de4;
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
      if ((*plVar12 == 0) || (plVar7 = *(long **)(*plVar12 + 0x4c8), plVar7 == (long *)0x0))
      goto LAB_00c35de4;
      lVar8 = *plVar7;
    }
    else {
LAB_00c3550c:
      lVar8 = Car__get_Current(0);
      if (((lVar8 == 0) || (*plVar12 == 0)) || (lVar9 = *(long *)(*plVar12 + 0x480), lVar9 == 0))
      goto LAB_00c35de4;
      iVar3 = *(int *)(lVar8 + 0x44);
      UnityEngine_GameObject__SetActive(lVar9,0,0);
      if ((*plVar12 == 0) || (lVar8 = *(long *)(*plVar12 + 0x498), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,0,0);
      if ((*plVar12 == 0) || (lVar8 = *(long *)(*plVar12 + 0x4a0), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,0,0);
      if ((*plVar12 == 0) || (lVar8 = *(long *)(*plVar12 + 0x4c0), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,1,0);
      if ((*plVar12 == 0) || (lVar8 = *(long *)(*plVar12 + 0x4b8), lVar8 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar8,1,0);
      if (iVar3 != 0) {
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c35de4;
        lVar8 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_EVENT_CAR_UNLOCK);
        lVar11 = **(long **)(_Translate_TypeInfo + 0xb8);
        lVar9 = Car__get_Current(0);
        if (lVar9 == 0) goto LAB_00c35de4;
        uStack_64 = *(undefined4 *)(lVar9 + 0x44);
        uVar10 = System_Int32__ToString(&uStack_64,0);
        uVar10 = System_String__Concat(_Str_EVENT_,uVar10,0);
        if (lVar11 == 0) goto LAB_00c35de4;
        uVar10 = Translate__JJJNIPAKLJF(uVar10,uVar10);
        goto LAB_00c35640;
      }
      if (*plVar12 == 0) goto LAB_00c35de4;
      plVar7 = *(long **)(*plVar12 + 0x4c8);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
         (uVar10 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_LOCK_CAR_IN_THIS_MODE),
         plVar7 == (long *)0x0)) goto LAB_00c35de4;
      lVar8 = *plVar7;
    }
    (**(code **)(lVar8 + 0x5a8))(plVar7,uVar10,*(undefined8 *)(lVar8 + 0x5b0));
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
    if ((*plVar12 == 0) || (lVar8 = *(long *)(*plVar12 + 0x478), lVar8 == 0)) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar8,0,0);
    if (*plVar12 == 0) goto LAB_00c35de4;
    GUIGarage__PHKCLDLDABM(*plVar12,1,0);
  }
LAB_00c35704:
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar8 = *(long *)(_Main_TypeInfo + 0xb8);
  if (*(long *)(lVar8 + 0x40) != 0) {
    if (iVar2 == -1) {
      lVar8 = Car__get_Current(0);
      if (lVar8 == 0) goto LAB_00c35de4;
      if (*(int *)(lVar8 + 0x44) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        plVar7 = *(long **)(_Main_TypeInfo + 0xb8);
        lVar8 = plVar7[8];
        if (lVar8 == 0) goto LAB_00c35de4;
        if (0 < *(int *)(lVar8 + 0x10)) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            plVar7 = *(long **)(_Main_TypeInfo + 0xb8);
            lVar8 = plVar7[8];
            if (lVar8 == 0) goto LAB_00c35de4;
          }
          if ((*plVar7 == 0) || (lVar9 = *(long *)(*plVar7 + 0x28), lVar9 == 0)) goto LAB_00c35de4;
          if (*(int *)(lVar8 + 0x10) < *(int *)(lVar9 + 0x18)) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              plVar7 = *(long **)(_Main_TypeInfo + 0xb8);
              lVar8 = plVar7[8];
              if (lVar8 == 0) goto LAB_00c35de4;
            }
            if (*(int *)((long)plVar7 + 0x2c) != *(int *)(lVar8 + 0x10)) {
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
                __this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                if (__this_00 == (void *)0x0) goto LAB_00c35de4;
                iVar2 = DAFNMLEKHAD__LOCFCFJIAIH(__this_00);
                plVar7 = *(long **)(_Main_TypeInfo + 0xb8);
                if (((*plVar7 == 0) || (lVar8 = plVar7[8], lVar8 == 0)) ||
                   (lVar9 = *(long *)(*plVar7 + 0x28), lVar9 == 0)) goto LAB_00c35de4;
                if (*(uint *)(lVar9 + 0x18) <= *(uint *)(lVar8 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                lVar9 = *(long *)(lVar9 + (long)(int)*(uint *)(lVar8 + 0x10) * 8 + 0x20);
                if (lVar9 == 0) goto LAB_00c35de4;
                if (*(int *)(lVar9 + 0x20) <= iVar2) {
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_Main_TypeInfo);
                    plVar7 = *(long **)(_Main_TypeInfo + 0xb8);
                    lVar8 = plVar7[8];
                    if (lVar8 == 0) goto LAB_00c35de4;
                  }
                  lVar9 = *plVar12;
                  if (lVar9 == 0) goto LAB_00c35de4;
                  if (*(int *)(lVar8 + 0x10) < *(int *)((long)plVar7 + 0x2c)) {
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
        lVar8 = *plVar12;
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
  if (*plVar12 != 0) {
    plVar7 = *(long **)(*plVar12 + 1000);
    lVar8 = Car__get_Current(0);
    if ((lVar8 != 0) && (plVar7 != (long *)0x0)) {
      (**(code **)(*plVar7 + 0x5a8))
                (plVar7,*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)(*plVar7 + 0x5b0));
      if (*plVar12 != 0) {
        GUIGarage__FJCMAMFOKNL(*plVar12,0);
        Menu__CKPDEIAFHEC();
        Menu__CDFHCNMGCFI(lVar5);
        Menu__INMDNKGHGEO(lVar5);
        Menu__FMEHJALLGBK(lVar5);
        uVar10 = *(undefined8 *)(lVar5 + 0x70);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar10,0,0);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(lVar5 + 0x70) == 0) goto LAB_00c35de4;
          ConsoleTipsBottom__ABIEFKKDOGK(*(long *)(lVar5 + 0x70),0);
        }
        return;
      }
    }
  }
LAB_00c35de4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public IEnumerator KEPPKPEAEOO() { }   @0xb08e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGarage__KEPPKPEAEOO(void *__this)

{
  void *pvVar1;
  
  if ((bRam0000000001916f60 & 1) == 0) {
    func_0x00a67900(&GUIGarage_OMJCFLCPGDB_TypeInfo);
    bRam0000000001916f60 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_GUIGarage_OMJCFLCPGDB_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x20) = __this;
  return pvVar1;
}


// ==== private void KMDEAFLJMND() { }   @0xb09238

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__KMDEAFLJMND(void *__this)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  byte abStack_24 [4];
  
  if ((bRam0000000001916f65 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f65 = 1;
  }
  if ((*(long *)((long)__this + 0xd8) != 0) &&
     (lVar4 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0xd8),0), lVar4 != 0))
  {
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
      uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar5 & 1) == 0) {
        if (*(long *)((long)__this + 0x8d0) == 0) goto LAB_00c094b0;
        lVar4 = *(long *)((long)__this + 0x8b8);
        lVar10 = *(long *)((long)__this + 0x8c0);
        lVar6 = *(long *)((long)__this + 0x8c8);
        UnityEngine_UI_Selectable__set_interactable(*(long *)((long)__this + 0x8d0),0,0);
        if (((lVar6 == 0) || (UnityEngine_UI_Selectable__set_interactable(lVar6,0,0), lVar10 == 0))
           || (UnityEngine_UI_Selectable__set_interactable(lVar10,0,0), lVar4 == 0))
        goto LAB_00c094b0;
        bVar2 = 0;
      }
      else {
        fVar11 = (float)UnityEngine_Time__get_time(0);
        if (fVar11 <= *(float *)((long)__this + 0x8e0)) {
          return;
        }
        fVar11 = (float)UnityEngine_Time__get_time(0);
        *(float *)((long)__this + 0x8e0) = fVar11 + 1.0;
        lVar4 = *(long *)((long)__this + 0x8b8);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
            (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0)) ||
           (uVar3 = AdvController__AKGPHJEILLB(lVar6,0), lVar4 == 0)) goto LAB_00c094b0;
        UnityEngine_UI_Selectable__set_interactable(lVar4,uVar3 & 1,0);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (pvVar7 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), pvVar7 == (void *)0x0))
        goto LAB_00c094b0;
        lVar4 = *(long *)((long)__this + 0x8c0);
        bVar1 = AdvController__HNDMJBICLJF(pvVar7,0);
        if (lVar4 == 0) goto LAB_00c094b0;
        UnityEngine_UI_Selectable__set_interactable(lVar4,bVar1,0);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (pvVar7 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), pvVar7 == (void *)0x0))
        goto LAB_00c094b0;
        lVar4 = *(long *)((long)__this + 0x8c8);
        bVar1 = AdvController__HNDMJBICLJF(pvVar7,1);
        if (lVar4 == 0) goto LAB_00c094b0;
        UnityEngine_UI_Selectable__set_interactable(lVar4,bVar1,0);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (pvVar7 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), pvVar7 == (void *)0x0))
        goto LAB_00c094b0;
        lVar4 = *(long *)((long)__this + 0x8d0);
        bVar1 = AdvController__HNDMJBICLJF(pvVar7,2);
        if (lVar4 == 0) goto LAB_00c094b0;
        UnityEngine_UI_Selectable__set_interactable(lVar4,bVar1,0);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
        goto LAB_00c094b0;
        lVar4 = *(long *)((long)__this + 0x8d8);
        bVar2 = AdvController__EDNAEPDDBPJ(lVar6,0);
        if (lVar4 == 0) goto LAB_00c094b0;
        bVar2 = bVar2 & 1;
      }
      if ((bRam000000000191ee9a & 1) == 0) {
        func_0x00a67900(&UnityEngine_EventSystems_EventSystem_TypeInfo,bVar2,0);
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        func_0x00a67900(&Method_UnityEngine_UI_SetPropertyUtility_SetStruct_bool___);
        bRam000000000191ee9a = 1;
      }
      abStack_24[0] = bVar2;
      uVar5 = UnityEngine_UI_SetPropertyUtility__SetStruct___Il2CppFullySharedGenericStructType_
                        ((char *)(lVar4 + 0xd8),abStack_24,
                         _Method_UnityEngine_UI_SetPropertyUtility_SetStruct_bool___);
      if ((uVar5 & 1) != 0) {
        if (*(char *)(lVar4 + 0xd8) == '\0') {
          if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = UnityEngine_EventSystems_EventSystem__get_current(0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar8,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar6 = UnityEngine_EventSystems_EventSystem__get_current(0);
            if (lVar6 == 0) {
LAB_016bdcf8:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            uVar9 = *(undefined8 *)(lVar6 + 0x40);
            uVar8 = UnityEngine_Component__get_gameObject(lVar4,0);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            uVar5 = UnityEngine_Object__op_Equality(uVar9,uVar8,0);
            if ((uVar5 & 1) != 0) {
              if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              lVar6 = UnityEngine_EventSystems_EventSystem__get_current(0);
              if (lVar6 == 0) goto LAB_016bdcf8;
              UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(lVar6,0,0);
            }
          }
        }
        UnityEngine_UI_Selectable__OnSetProperty(lVar4);
      }
      return;
    }
  }
LAB_00c094b0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb099e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage___ctor(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam0000000001916f69 & 1) == 0) {
    func_0x00a67900(&UnityEngine_UI_Image___TypeInfo);
    func_0x00a67900(&LevelTaskGUI___TypeInfo);
    func_0x00a67900(&UnityEngine_RectTransform___TypeInfo);
    func_0x00a67900(&UnityEngine_Sprite___TypeInfo);
    bRam0000000001916f69 = 1;
  }
  uVar1 = func_0x00a679a0(_UnityEngine_Sprite___TypeInfo,4);
  *(undefined8 *)((long)__this + 0x248) = uVar1;
  *(undefined4 *)((long)__this + 0x264) = 0x3b6;
  uVar1 = func_0x00a679a0(_UnityEngine_UI_Image___TypeInfo,3);
  *(undefined8 *)((long)__this + 0x2a8) = uVar1;
  uVar1 = func_0x00a679a0(_LevelTaskGUI___TypeInfo,3);
  *(undefined8 *)((long)__this + 0x2c0) = uVar1;
  *(undefined8 *)((long)__this + 0x6c0) = 0x137ffffff2b5;
  *(undefined8 *)((long)__this + 0x6b8) = 0x14fffffff135;
  *(undefined4 *)((long)__this + 0x6d0) = 0xfffffffe;
  uVar1 = func_0x00a679a0(_UnityEngine_RectTransform___TypeInfo,3);
  *(undefined8 *)((long)__this + 0x6e0) = uVar1;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public void ButtonMapHidePanel(bool is_anim) { }   @0xb0b510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonMapHidePanel(void *__this,bool is_anim)

{
  ulong uVar1;
  undefined8 uVar2;
  void *__this_00;
  long lVar3;
  int iVar4;
  
  if ((bRam0000000001916f6d & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Str_Hide_lvl__);
    bRam0000000001916f6d = 1;
  }
  if (is_anim) {
    GUIGarage__PIHABGKNPDI(__this,1);
  }
  else {
    lVar3 = *(long *)((long)__this + 0x278);
    if (lVar3 == 0) goto LAB_00c0b6e0;
    iVar4 = *(int *)((long)__this + 0x264);
    UnityEngine_RectTransform__get_anchoredPosition(lVar3,0);
    UnityEngine_RectTransform__set_anchoredPosition((float)iVar4,lVar3,0);
    if ((*(long *)((long)__this + 0x278) == 0) ||
       (lVar3 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x278),0), lVar3 == 0
       )) goto LAB_00c0b6e0;
    UnityEngine_GameObject__SetActive(lVar3,0,0);
  }
  if (*(long *)((long)__this + 0x310) != 0) {
    uVar1 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 0x310),0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)((long)__this + 0x310) == 0) goto LAB_00c0b6e0;
      UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x310),0,0);
      GUIGarage__ADMNOIMMGGA(__this,false);
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if (lVar3 != 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar3 == 0) goto LAB_00c0b6e0;
      }
      uVar2 = System_Int32__ToString(lVar3 + 0x10,0);
      uVar2 = System_String__Concat(_Str_Hide_lvl__,uVar2,0);
      Main__GEMDEAMAGPG(uVar2,0,0);
      uVar1 = Main__KCHOEBEIOCE(0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (__this_00 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58),
           __this_00 == (void *)0x0)) goto LAB_00c0b6e0;
        GamePadController__KCAHLEAKNNK(__this_00);
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      *(undefined8 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) = 0;
      GUIGarage__AGFKGLDJDLE(__this);
    }
    *(undefined1 *)((long)__this + 0x250) = 0;
    return;
  }
LAB_00c0b6e0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonRateMeNow() { }   @0xb0bd30

/* WARNING: Removing unreachable block (ram,0x00c0b570) */
/* WARNING: Removing unreachable block (ram,0x00c0b578) */
/* WARNING: Removing unreachable block (ram,0x00c0b5a0) */
/* WARNING: Removing unreachable block (ram,0x00c0b5ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonRateMeNow(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  void *pvVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  long lStack_68;
  
  if ((bRam0000000001916f71 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Str_market___details_id_);
    bRam0000000001916f71 = 1;
  }
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Application__get_identifier(0);
  uVar5 = System_String__Concat(_Str_market___details_id_,uVar5,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Menu_TypeInfo);
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
     (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40), lVar6 == 0)) {
LAB_00c0be78:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  AnalyticsController__BHBKBILKNBE(lVar6,0xffffffff,0);
  UnityEngine_Application__OpenURL(uVar5,0);
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
  if (lVar6 == 0) goto LAB_00c0be78;
  DAFNMLEKHAD__DCLEGMOJBPN(lVar6,0xffffffff,0);
  if ((bRam0000000001916f61 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916f61 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = **(long **)(_Menu_TypeInfo + 0xb8);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam00000000019170e3 & 1) == 0) {
    func_0x00a67900(&GUIGarage_TypeInfo,0);
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
  plVar15 = (long *)(lVar6 + 0x20);
  lVar13 = *plVar15;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(lVar13,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if ((*plVar15 == 0) || (lVar13 = *(long *)(*plVar15 + 0x30), lVar13 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (((*plVar15 == 0) || (lVar13 = *(long *)(*plVar15 + 0x140), lVar13 == 0)) ||
     (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if (((*plVar15 == 0) || (lVar13 = *(long *)(*plVar15 + 0x138), lVar13 == 0)) ||
     (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if (((*plVar15 == 0) || (lVar13 = *(long *)(*plVar15 + 0x150), lVar13 == 0)) ||
     (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  fVar16 = (float)UnityEngine_Time__get_time(0);
  if (fVar16 - **(float **)(_GUIGarage_TypeInfo + 0xb8) <= 1.0) {
    return;
  }
  if (*plVar15 == 0) goto LAB_00c37710;
  uVar5 = *(undefined8 *)(*plVar15 + 0x70);
  uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar14,uVar5,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) goto LAB_00c37408;
    if (((*plVar15 == 0) || (lVar13 = *(long *)(*plVar15 + 0xa8), lVar13 == 0)) ||
       (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
    if ((uVar7 & 1) != 0) goto LAB_00c37408;
    if (((*plVar15 == 0) || (lVar13 = *(long *)(*plVar15 + 0x178), lVar13 == 0)) ||
       (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
    if ((uVar7 & 1) != 0) goto LAB_00c37408;
    if (((*plVar15 == 0) || (lVar6 = *(long *)(*plVar15 + 0x170), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    pvVar8 = (void *)*plVar15;
    if ((uVar7 & 1) == 0) {
      if (pvVar8 != (void *)0x0) {
        if ((bRam0000000001916f6d & 1) == 0) {
          func_0x00a67900(&Main_TypeInfo,1,0);
          func_0x00a67900(&Menu_TypeInfo);
          func_0x00a67900(&Str_Hide_lvl__);
          bRam0000000001916f6d = 1;
        }
        GUIGarage__PIHABGKNPDI(pvVar8,1);
        if (*(long *)((long)pvVar8 + 0x310) == 0) {
LAB_00c0b6e0:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar7 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)pvVar8 + 0x310),0);
        if ((uVar7 & 1) != 0) {
          if (*(long *)((long)pvVar8 + 0x310) == 0) goto LAB_00c0b6e0;
          UnityEngine_GameObject__SetActive(*(long *)((long)pvVar8 + 0x310),0,0);
          GUIGarage__ADMNOIMMGGA(pvVar8,false);
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar6 != 0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
            if (lVar6 == 0) goto LAB_00c0b6e0;
          }
          uVar5 = System_Int32__ToString(lVar6 + 0x10,0);
          uVar5 = System_String__Concat(_Str_Hide_lvl__,uVar5,0);
          Main__GEMDEAMAGPG(uVar5,0,0);
          uVar7 = Main__KCHOEBEIOCE(0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (pvVar10 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58),
               pvVar10 == (void *)0x0)) goto LAB_00c0b6e0;
            GamePadController__KCAHLEAKNNK(pvVar10);
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          *(undefined8 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) = 0;
          GUIGarage__AGFKGLDJDLE(pvVar8);
        }
        *(undefined1 *)((long)pvVar8 + 0x250) = 0;
        return;
      }
      goto LAB_00c37710;
    }
    if (pvVar8 == (void *)0x0) goto LAB_00c37710;
    uVar5 = *(undefined8 *)((long)pvVar8 + 0x48);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar9 & 1) == 0) goto Menu__CEFAHBMMKCD;
    if (((*plVar15 == 0) || (lVar6 = *(long *)(*plVar15 + 0x48), lVar6 == 0)) ||
       (lVar6 = *(long *)(lVar6 + 0xb8), lVar6 == 0)) goto LAB_00c37710;
    uVar9 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar9 & 1) != 0) goto Menu__CEFAHBMMKCD;
    if ((void *)*plVar15 == (void *)0x0) goto LAB_00c37710;
    GUIGarage__ButtonMapHidePanel((void *)*plVar15,true);
joined_r0x00c37634:
    if ((uVar7 & 1) == 0) {
      return;
    }
Menu__CEFAHBMMKCD:
    if ((bRam00000000019170e1 & 1) == 0) {
      func_0x00a67900(&GUIWindow_TypeInfo);
      func_0x00a67900(&UnityEngine_Object_TypeInfo);
      bRam00000000019170e1 = 1;
    }
    lVar6 = **(long **)(_GUIWindow_TypeInfo + 0xb8);
    lVar13 = (*(long **)(_GUIWindow_TypeInfo + 0xb8))[1];
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(lVar13,0,0);
    if ((uVar7 & 1) != 0) {
      lVar6 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    }
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(lVar6,0,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (lVar6 != 0) {
      uVar5 = *(undefined8 *)(lVar6 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar7 & 1) == 0) {
        uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar7 & 1) == 0) {
          return;
        }
      }
      uVar5 = *(undefined8 *)(lVar6 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar7 & 1) == 0) {
        lVar6 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
      }
      else {
        lVar6 = *(long *)(lVar6 + 0x28);
      }
      if (lVar6 != 0) {
        GUIWindow__HEGIHOAJOKK(lVar6,0,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
LAB_00c37408:
  if (*plVar15 == 0) goto LAB_00c37710;
  uVar5 = *(undefined8 *)(*plVar15 + 0xa8);
  uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar14,uVar5,0);
  if ((uVar7 & 1) == 0) {
    if (*plVar15 == 0) goto LAB_00c37710;
    uVar5 = *(undefined8 *)(*plVar15 + 0xa8);
    uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar14,uVar5,0);
    if ((uVar7 & 1) != 0) goto LAB_00c37480;
    if (*plVar15 == 0) goto LAB_00c37710;
    uVar5 = *(undefined8 *)(*plVar15 + 0xd0);
    uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar14,uVar5,0);
    if (((uVar7 & 1) == 0) || (*(char *)(lVar6 + 0x78) != '\0')) {
      if ((*plVar15 == 0) ||
         ((lVar6 = *(long *)(*plVar15 + 0xa0), lVar6 == 0 ||
          (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c37710;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar7 & 1) == 0) {
        uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        goto joined_r0x00c37634;
      }
      if (((*plVar15 == 0) || (lVar6 = *(long *)(*plVar15 + 0x70), lVar6 == 0)) ||
         (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c37710;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar7 & 1) != 0) {
        lVar6 = *plVar15;
        if (lVar6 == 0) goto LAB_00c37710;
LAB_00c37690:
        pvVar8 = *(void **)(lVar6 + 0xa8);
        if (pvVar8 == (void *)0x0) goto LAB_00c37710;
        iVar11 = 1;
        goto code_r0x00c4660c;
      }
      if (*plVar15 == 0) goto LAB_00c37710;
      uVar5 = *(undefined8 *)(*plVar15 + 0xa8);
      uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar14,uVar5,0);
      lVar6 = *plVar15;
      if (lVar6 == 0) goto LAB_00c37710;
      if ((uVar7 & 1) != 0) goto LAB_00c37690;
      goto LAB_00c376a0;
    }
    lVar13 = *(long *)(lVar6 + 0x20);
    *(undefined1 *)(lVar6 + 0x78) = 1;
    if (lVar13 == 0) goto LAB_00c37710;
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
    plVar15 = *(long **)(lVar13 + 0x4e8);
    lVar6 = func_0x00a679a0(_string___TypeInfo,5);
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CarController_TypeInfo);
    }
    uVar5 = System_Int32__ToString(*(long *)(_CarController_TypeInfo + 0xb8) + 0xc,0);
    if (lVar6 == 0) goto LAB_00c10f6c;
    if ((*(int *)(lVar6 + 0x18) == 0) ||
       (*(undefined8 *)(lVar6 + 0x20) = uVar5, *(int *)(lVar6 + 0x18) == 1)) {
LAB_00c10f68:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    *(undefined8 *)(lVar6 + 0x28) = _Str__;
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c10f6c;
    uVar5 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_SECOND,0);
    if ((*(uint *)(lVar6 + 0x18) < 3) ||
       (*(undefined8 *)(lVar6 + 0x30) = uVar5, *(uint *)(lVar6 + 0x18) == 3)) goto LAB_00c10f68;
    *(undefined8 *)(lVar6 + 0x38) = _Str____1_;
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c10f6c;
    uVar5 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_HP,0);
    if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_00c10f68;
    *(undefined8 *)(lVar6 + 0x40) = uVar5;
    uVar5 = System_String__Concat(lVar6,0);
    if (plVar15 == (long *)0x0) {
LAB_00c10f6c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    (**(code **)(*plVar15 + 0x5a8))(plVar15,uVar5,*(undefined8 *)(*plVar15 + 0x5b0));
    pvVar8 = *(void **)(lVar13 + 200);
    if (pvVar8 == (void *)0x0) goto LAB_00c10f6c;
    iVar11 = 1;
  }
  else {
LAB_00c37480:
    if (((*plVar15 == 0) || (lVar6 = *(long *)(*plVar15 + 0x70), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    lVar6 = *plVar15;
    if (lVar6 == 0) goto LAB_00c37710;
    if ((uVar7 & 1) == 0) {
LAB_00c376a0:
      pvVar8 = *(void **)(lVar6 + 0x78);
    }
    else {
      pvVar8 = *(void **)(lVar6 + 0x70);
    }
    if (pvVar8 == (void *)0x0) {
LAB_00c37710:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    iVar11 = 0;
  }
code_r0x00c4660c:
  if ((bRam0000000001917151 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo,iVar11,0);
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
  lVar13 = UnityEngine_Component__get_gameObject(pvVar8,0);
  if (lVar13 == 0) goto LAB_00c485b8;
  uVar5 = UnityEngine_Object__get_name(lVar13,0);
  if ((*(uint *)(lVar6 + 0x18) < 2) ||
     (*(undefined8 *)(lVar6 + 0x28) = uVar5, *(uint *)(lVar6 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x30) = _Str___current__;
  uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  uVar5 = _Str_null;
  if ((uVar7 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar5 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar6 + 0x18) < 4) ||
     (*(undefined8 *)(lVar6 + 0x38) = uVar5, *(uint *)(lVar6 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x40) = _Str___last__;
  uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  uVar5 = _Str_null;
  if ((uVar7 & 1) != 0) {
    lVar13 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar13 == 0) goto LAB_00c485b8;
    uVar5 = UnityEngine_Object__get_name(lVar13,0);
  }
  uVar4 = *(uint *)(lVar6 + 0x18);
  if ((uVar4 < 6) || (*(undefined8 *)(lVar6 + 0x48) = uVar5, uVar4 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x50) = _Str____Child__;
  plVar15 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar5 = 0;
  if (plVar15 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
    uVar4 = *(uint *)(lVar6 + 0x18);
  }
  if (uVar4 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x58) = uVar5;
  uVar5 = System_String__Concat(lVar6,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar5,0,0);
  uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar5,pvVar8,0);
  if ((uVar7 & 1) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar5,0,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
  }
  uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar5,pvVar8,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  lVar6 = _GUIWindow_TypeInfo;
  if ((uVar7 & 1) != 0) {
    pvVar10 = *(void **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (pvVar10 == (void *)0x0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(pvVar10,false);
    lVar6 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar5 = **(undefined8 **)(lVar6 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if (((uVar7 & 1) != 0) && (iVar11 == 0)) {
    if ((void *)**(undefined8 **)(_GUIWindow_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO((void *)**(undefined8 **)(_GUIWindow_TypeInfo + 0xb8),false);
  }
  pvVar10 = (void *)GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(pvVar10,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(char *)((long)pvVar8 + 0x20) == '\0') {
      if (pvVar10 == (void *)0x0) goto LAB_00c485b8;
      uVar7 = UnityEngine_GameObject__get_activeSelf(pvVar10,0);
      if ((uVar7 & 1) == 0) goto LAB_00c46b74;
      uVar17 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar17;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if (((uVar7 & 1) != 0) && (*(char *)((long)pvVar8 + 0x21) != '\0')) {
        fVar16 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar16) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8),pvVar10);
          goto LAB_00c46b74;
        }
      }
      if (pvVar10 == (void *)0x0) goto LAB_00c485b8;
      uVar5 = 1;
    }
    UnityEngine_GameObject__SetActive(pvVar10,uVar5,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar5 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(char *)((long)pvVar8 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
          goto LAB_00c485b8;
          uVar7 = AdvController__EDNAEPDDBPJ(lVar6,0);
          if ((uVar7 & 1) != 0) {
            iVar2 = UnityEngine_Screen__get_width(0);
            iVar3 = UnityEngine_Screen__get_height(0);
            fVar16 = (float)iVar2 / (float)iVar3;
            if (fVar16 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
            goto LAB_00c485b8;
            uVar5 = *(undefined8 *)(lVar6 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Object__op_Equality(pvVar8,uVar5,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0)
                 ) goto LAB_00c485b8;
              uVar5 = *(undefined8 *)(lVar6 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(pvVar8,uVar5,0);
              if ((uVar7 & 1) != 0) {
                if (1.61 <= fVar16) {
                  if ((fVar16 <= 1.61) || (1.8 <= fVar16)) {
                    if (fVar16 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar6 == 0)) goto LAB_00c485b8;
                    uVar5 = *(undefined8 *)(lVar6 + 0x70);
                    uVar18 = 0x3f51eb85;
                    uVar17 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar6 == 0)) goto LAB_00c485b8;
                    uVar5 = *(undefined8 *)(lVar6 + 0x70);
                    uVar18 = 0x3f5eb852;
                    uVar17 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar6 == 0)) goto LAB_00c485b8;
                  uVar5 = *(undefined8 *)(lVar6 + 0x70);
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
                   (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar6 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar16) {
                  if (*(long *)(lVar6 + 0x240) == 0) goto LAB_00c485b8;
                  uVar7 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar6 + 0x240),0);
                  if ((uVar7 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar6 == 0)) goto LAB_00c485b8;
                  uVar5 = *(undefined8 *)(lVar6 + 0x60);
                  uVar18 = 0x3f51eb85;
                  uVar17 = 0x41a00000;
                }
                else {
                  uVar5 = *(undefined8 *)(lVar6 + 0x60);
                  uVar18 = 0x3f5eb852;
                  uVar17 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar6 == 0)) goto LAB_00c485b8;
                uVar5 = *(undefined8 *)(lVar6 + 0x60);
                uVar17 = 0xc0a00000;
                uVar18 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar17,uVar18,pvVar8,uVar5);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (pvVar10 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38),
               pvVar10 == (void *)0x0)) goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(pvVar10);
            goto LAB_00c46f70;
          }
        }
        GUIWindow__IPELKJAHFGL(pvVar8);
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
    uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(char *)((long)pvVar8 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(pvVar8);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
          goto LAB_00c485b8;
          uVar7 = AdvController__EDNAEPDDBPJ(lVar6,0);
          if ((uVar7 & 1) == 0) goto LAB_00c47120;
          iVar2 = UnityEngine_Screen__get_width(0);
          iVar3 = UnityEngine_Screen__get_height(0);
          fVar16 = (float)iVar2 / (float)iVar3;
          if (1.51 < fVar16) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
            goto LAB_00c485b8;
            uVar5 = *(undefined8 *)(lVar6 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Object__op_Equality(pvVar8,uVar5,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
              goto LAB_00c485b8;
              uVar5 = *(undefined8 *)(lVar6 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(pvVar8,uVar5,0);
              if ((uVar7 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                goto LAB_00c485b8;
                uVar5 = *(undefined8 *)(lVar6 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Equality(pvVar8,uVar5,0);
                if ((uVar7 & 1) == 0) {
                  lVar6 = UnityEngine_Component__get_gameObject(pvVar8,0);
                  if (lVar6 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar6,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar6 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar7 = UnityEngine_Object__op_Inequality(lVar6,0,0);
                  if ((uVar7 & 1) != 0) {
                    if (lVar6 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar6 + 0x2c) == 3) {
                      lVar6 = UnityEngine_Component__get_gameObject(pvVar8,0);
                      if (lVar6 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar6,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar7 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar7 & 1) != 0) {
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
                       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                    goto LAB_00c485b8;
                    lStack_68 = *(long *)(lVar6 + 0xe8);
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
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar6 + 0xe8);
                uVar17 = 0x41f00000;
              }
              else {
                if (1.61 <= fVar16) {
                  if (1.8 <= fVar16) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar6 + 0xb0);
                  uVar18 = 0x3f6e147b;
                  uVar17 = 0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar6 + 0xb0);
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
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar6 + 0x188);
                uVar17 = 0x41200000;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
              goto LAB_00c485b8;
              lStack_68 = *(long *)(lVar6 + 0x188);
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
            GUIWindow__EPGDFDEPGCB(uVar17,uVar18,pvVar8,lStack_68);
          }
LAB_00c47308:
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar10 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38),
             pvVar10 == (void *)0x0)) goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(pvVar10);
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
      uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
          if ((uVar7 & 1) != 0) {
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
              pvVar10 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (pvVar10 == (void *)0x0) goto LAB_00c485b8;
              bVar1 = DAFNMLEKHAD__MHBEPDHNNFH(pvVar10);
              if (!bVar1) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
                goto LAB_00c485b8;
                uVar5 = *(undefined8 *)(lVar6 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Equality(uVar5,0,0);
                if ((uVar7 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                  goto LAB_00c485b8;
                  uVar5 = *(undefined8 *)(lVar6 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar7 = UnityEngine_Object__op_Equality(pvVar8,uVar5,0);
                  if ((uVar7 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
                    goto LAB_00c485b8;
                    uVar5 = *(undefined8 *)(lVar6 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar5 = UnityEngine_Object__Instantiate_object_
                                      (uVar5,_Method_UnityEngine_Object_Instantiate_GameObject___);
                    *(undefined8 *)(lVar6 + 0x90) = uVar5;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar6 = UnityEngine_Component__get_gameObject(pvVar8,0);
  if (lVar6 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar6,1,0);
  lVar6 = 8;
  if (iVar11 == 0) {
    lVar6 = 0;
  }
  puVar12 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar12[2] = *puVar12;
  *(void **)((long)puVar12 + lVar6) = pvVar8;
  if (*(char *)((long)pvVar8 + 0x23) != '\0') {
    uVar5 = GUIWindow__FAAELIPKLCB(pvVar8);
    UnityEngine_MonoBehaviour__StartCoroutine(pvVar8,uVar5,0);
  }
  lVar6 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar6 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar6 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar6 + 0x20) = _Str_Window__Show__;
  uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  uVar5 = _Str_null;
  if ((uVar7 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar5 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar6 + 0x18) < 2) ||
     (*(undefined8 *)(lVar6 + 0x28) = uVar5, *(uint *)(lVar6 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x30) = _Str___last__;
  uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  uVar5 = _Str_null;
  if ((uVar7 & 1) != 0) {
    lVar13 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar13 == 0) goto LAB_00c485b8;
    uVar5 = UnityEngine_Object__get_name(lVar13,0);
  }
  uVar4 = *(uint *)(lVar6 + 0x18);
  if ((uVar4 < 4) || (*(undefined8 *)(lVar6 + 0x38) = uVar5, uVar4 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x40) = _Str____Child__;
  plVar15 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar5 = 0;
  if (plVar15 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
    uVar4 = *(uint *)(lVar6 + 0x18);
  }
  if (uVar4 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x48) = uVar5;
  uVar5 = System_String__Concat(lVar6,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar5,0,0);
  uVar7 = Main__KCHOEBEIOCE(0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (pvVar10 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58), pvVar10 == (void *)0x0))
    goto LAB_00c485b8;
    GamePadController__KCAHLEAKNNK(pvVar10);
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
    uVar5 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar7 & 1) != 0) {
      uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
      goto LAB_00c485b8;
      uVar14 = *(undefined8 *)(lVar6 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar5,uVar14,0);
      if ((uVar7 & 1) == 0) {
        uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
        goto LAB_00c485b8;
        uVar14 = *(undefined8 *)(lVar6 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Equality(uVar5,uVar14,0);
        if ((uVar7 & 1) == 0) {
          uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
          goto LAB_00c485b8;
          uVar14 = *(undefined8 *)(lVar6 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Equality(uVar5,uVar14,0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
            goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(lVar6,0);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (pvVar8 = *(void **)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
             pvVar8 == (void *)0x0)) goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(pvVar8);
        }
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
        goto LAB_00c485b8;
        lVar6 = *(long *)(lVar6 + 0x178);
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
        lVar13 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((lVar13 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar13,0), lVar6 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar6,uVar4 & 1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar7 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar7 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar7 = GUIGarage__ABAHNKCPCFA(lVar6,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
        (lVar6 = *(long *)(lVar6 + 0x78), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c485b8;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
         ((lVar6 = *(long *)(lVar6 + 0x70), lVar6 == 0 ||
          (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c485b8;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar7 & 1) != 0) goto LAB_00c47948;
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
      uVar17 = 0;
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
      lVar13 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((lVar13 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar13,0), lVar6 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar6,uVar4 & 1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0 ||
          (lVar6 = *(long *)(lVar6 + 0x1b8), lVar6 == 0)))) goto LAB_00c485b8;
      uVar17 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar17,lVar6,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
       ((lVar6 = *(long *)(lVar6 + 0x60), lVar6 == 0 ||
        (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c485b8;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar7 & 1) == 0) {
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
    UnityEngine_GameObject__SetActive(lVar6,*(undefined1 *)((long)pvVar8 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar5 = *(undefined8 *)(lVar6 + 0x78);
    uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar14,uVar5,0);
    if ((uVar7 & 1) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      uVar14 = *(undefined8 *)(lVar6 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar5,uVar14,0);
      if ((uVar7 & 1) != 0) {
        uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar7 & 1) != 0) {
          uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
          goto LAB_00c485b8;
          uVar14 = *(undefined8 *)(lVar6 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Equality(uVar5,uVar14,0);
          if ((uVar7 & 1) != 0) {
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
        lVar6 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x20), lVar6 == 0)) ||
           (lVar6 = *(long *)(lVar6 + 0x4e0), lVar6 == 0)) goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive
                  (lVar6,*(undefined1 *)((long)*(long **)(_Menu_TypeInfo + 0xb8) + 0xe),0);
        uVar17 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar17;
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
      }
    }
    uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar14 = *(undefined8 *)(lVar6 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar5,uVar14,0);
    if ((uVar7 & 1) == 0) {
      uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      uVar14 = *(undefined8 *)(lVar6 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar5,uVar14,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(lVar6,0);
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
      lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_00c485b8;
      uVar7 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar6,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar6 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar6 == 0) goto LAB_00c485b8;
            uVar7 = UnityEngine_AudioSource__get_isPlaying(lVar6,0);
            if ((uVar7 & 1) == 0) {
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
      lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_00c485b8;
      lVar6 = DAFNMLEKHAD__DKJLCJPBPPN(lVar6,0xffffffff,1,0);
      if (lVar6 == 0) {
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
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = *(undefined4 *)(lVar6 + 0x104);
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
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(lVar6,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar6,0);
    }
    uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar14 = *(undefined8 *)(lVar6 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar5,uVar14,0);
    if ((uVar7 & 1) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar5,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar8 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar8 == (void *)0x0)
             ) goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(pvVar8,false);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar6 = **(long **)(_Menu_TypeInfo + 0xb8);
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x20), lVar6 == 0)) goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(lVar6,0);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(lVar6,0);
      }
    }
    if (bVar1) {
      return;
    }
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) != (void *)0x0) {
    Menu__GDEFDCOIDNM((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
    return;
  }
LAB_00c485b8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public IEnumerator OFMEDMJLPNE(RectTransform NPAAJPIIBCI, Vector2 EDPJENMOOGC, Vector2 OGEOBBHMHEP, float NBCLGLJCBAP, bool NDDOMFGGEAI) { }   @0xb08134

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGarage__OFMEDMJLPNE
                 (void *__this,void *NPAAJPIIBCI,float EDPJENMOOGC_x,float EDPJENMOOGC_y,
                 float OGEOBBHMHEP_x,float OGEOBBHMHEP_y,float NBCLGLJCBAP,bool NDDOMFGGEAI)

{
  void *pvVar1;
  
  if ((bRam0000000001916f74 & 1) == 0) {
    func_0x00a67900(&GUIGarage_FIGMLAAMNLF_TypeInfo);
    bRam0000000001916f74 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_GUIGarage_FIGMLAAMNLF_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x28) = NPAAJPIIBCI;
  *(void **)((long)pvVar1 + 0x30) = __this;
  *(float *)((long)pvVar1 + 0x20) = EDPJENMOOGC_x;
  *(float *)((long)pvVar1 + 0x24) = EDPJENMOOGC_y;
  *(float *)((long)pvVar1 + 0x38) = OGEOBBHMHEP_x;
  *(float *)((long)pvVar1 + 0x3c) = OGEOBBHMHEP_y;
  *(float *)((long)pvVar1 + 0x40) = NBCLGLJCBAP;
  *(bool *)((long)pvVar1 + 0x44) = NDDOMFGGEAI;
  return pvVar1;
}


// ==== public void ButtonCheatRestoreFuel() { }   @0xb0c978

/* WARNING: Removing unreachable block (ram,0x00be4cb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonCheatRestoreFuel(void *__this)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int aiStack_34 [3];
  
  if ((bRam0000000001916f79 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f79 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x28);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
       (pvVar4 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x28), pvVar4 != (void *)0x0)) {
      aiStack_34[0] = 0x18;
      if ((bRam0000000001916e41 & 1) == 0) {
        func_0x00a67900(&FuelManager_TypeInfo,0x18,0,0);
        func_0x00a67900(&GUIWindow_TypeInfo);
        func_0x00a67900(&Main_TypeInfo);
        func_0x00a67900(&Menu_TypeInfo);
        func_0x00a67900(&NotificationsManager_TypeInfo);
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        func_0x00a67900(&Str_Increase_Fuel__);
        func_0x00a67900(&Str_fuel);
        bRam0000000001916e41 = 1;
      }
      uVar5 = System_Int32__ToString(aiStack_34,0);
      uVar5 = System_String__Concat(_Str_Increase_Fuel__,uVar5,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      Main__GEMDEAMAGPG(uVar5,0,0);
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar7 != 0) {
        iVar2 = DAFNMLEKHAD__HDABOKNLKGK(lVar7,0);
        DAFNMLEKHAD__OPFBHOGMKNG(lVar7,aiStack_34[0] + iVar2,0);
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar7 != 0) {
          iVar2 = DAFNMLEKHAD__HDABOKNLKGK(lVar7,0);
          if (*(int *)(*(long *)(_FuelManager_TypeInfo + 0xb8) + 4) <= iVar2) {
            FuelManager__KPOIGAIGJGL(pvVar4);
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
            if (pvVar4 == (void *)0x0) goto LAB_00be4fa4;
            bVar1 = DAFNMLEKHAD__PHOGLOAEGLO(pvVar4);
            if (bVar1) {
              if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              NotificationsManager__LLFJNKAPDIM(_Str_fuel,3,1,0);
            }
          }
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
LAB_00be4f8c:
            FuelManager__IGOLHIKAMHI();
            return;
          }
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
            uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
            if ((uVar3 & 1) == 0) goto LAB_00be4f8c;
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
              uVar3 = DAFNMLEKHAD__HDABOKNLKGK(lVar7,0);
              FuelManager__NGBCNBFIMFC(uVar3,uVar3 & 0xffffffff);
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                 (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 != 0)) {
                uVar5 = *(undefined8 *)(lVar7 + 0x3d0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
                if ((uVar3 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                      (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0)) ||
                     (pvVar4 = *(void **)(lVar7 + 0x3d0), pvVar4 == (void *)0x0)) goto LAB_00be4fa4;
                  GUICoins__ICMOCEHIFOI(pvVar4);
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
                  iVar2 = DAFNMLEKHAD__HDABOKNLKGK(lVar7,0);
                  if (iVar2 == 0) {
                    uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
                    goto LAB_00be4fa4;
                    uVar6 = *(undefined8 *)(lVar7 + 0x78);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar3 = UnityEngine_Object__op_Equality(uVar5,uVar6,0);
                    if ((uVar3 & 1) != 0) {
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00be4fa4;
                      Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
                    }
                  }
                  goto LAB_00be4f8c;
                }
              }
            }
          }
        }
      }
LAB_00be4fa4:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonCheatShowInterstitial() { }   @0xb0cd00

/* WARNING: Removing unreachable block (ram,0x00ddfb80) */
/* WARNING: Removing unreachable block (ram,0x00ddfb94) */
/* WARNING: Removing unreachable block (ram,0x00ddfba8) */
/* WARNING: Removing unreachable block (ram,0x00ddfbbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonCheatShowInterstitial(void *__this)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined1 auVar14 [12];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000001916f7c & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f7c = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar10 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar10 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
       (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar3 != 0)) {
      if ((bRam00000000019171e6 & 1) == 0) {
        func_0x00a67900(&MaxSdkAndroid_TypeInfo,0);
        bRam00000000019171e6 = 1;
      }
      if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = MaxSdkAndroid__IsInitialized(0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x38);
      if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((bRam000000000191766b & 1) == 0) {
        func_0x00a67900(&MaxSdkAndroid_TypeInfo,0,0,0);
        func_0x00a67900(&object___TypeInfo);
        func_0x00a67900(&Str_show_interstitial);
        func_0x00a67900(&Str_showInterstitial);
        func_0x00a67900(&Str_Not_showing_MAX_Ads_interstitial__ad_not);
        bRam000000000191766b = 1;
      }
      MaxSdkBase__ValidateAdUnitIdentifier(lVar3,_Str_show_interstitial);
      if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = MaxSdkAndroid__IsInterstitialReady(lVar3);
      uVar10 = _Str_Not_showing_MAX_Ads_interstitial__ad_not;
      if ((uVar2 & 1) != 0) {
        if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar11 = **(long **)(_MaxSdkAndroid_TypeInfo + 0xb8);
        plVar4 = (long *)func_0x00a679a0(_object___TypeInfo,3);
        if (plVar4 != (long *)0x0) {
          if ((lVar3 == 0) ||
             (lVar5 = func_0x00a67a34(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 != 0)) {
            uVar1 = *(uint *)(plVar4 + 3);
            if ((uVar1 == 0) || ((plVar4[4] = lVar3, uVar1 < 2 || (plVar4[5] = 0, uVar1 < 3)))) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            plVar4[6] = 0;
            uVar10 = _Str_showInterstitial;
            if (lVar11 != 0) {
              if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x18) + 0x18);
              uVar6 = UnityEngine__AndroidJNIHelper__GetSignature(plVar4);
              uVar10 = UnityEngine__AndroidJNIHelper__GetMethodID(uVar12,uVar10,uVar6,1);
              lVar3 = tpidr_el0;
              lStack_48 = *(long *)(lVar3 + 0x28);
              if ((bRam000000000191b543 & 1) == 0) {
                func_0x00a67900(&Method_UnityEngine_AndroidJavaObject__CallStatic__);
                func_0x00a67900(&Method_System_Span_jvalue___ctor__);
                bRam000000000191b543 = 1;
              }
              if ((plVar4 == (long *)0x0) || (uVar2 = plVar4[3], uVar2 == 0)) {
                uVar6 = 0;
                uVar12 = 0;
              }
              else {
                if ((uVar2 & 0xffffffff) == 0) {
                  puVar13 = (undefined1 *)0x0;
                }
                else {
                  puVar13 = auStack_60 +
                            -((-(uVar2 >> 0x1f & 1) & 0xfffffff800000000 | (uVar2 & 0xffffffff) << 3
                              ) + 0xf & 0xfffffffffffffff0);
                }
                func_0x016decb0(puVar13,0);
                uStack_58 = 0;
                uStack_50 = 0;
                func_0x00c90098(&uStack_58,puVar13,uVar2 & 0xffffffff,
                                _Method_System_Span_jvalue___ctor__);
                uVar6 = uStack_58;
                uVar12 = uStack_50;
              }
              UnityEngine_AndroidJNIHelper__CreateJNIArgArray(plVar4,uVar6,uVar12);
              if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              UnityEngine_AndroidJNISafe__CallStaticVoidMethod
                        (*(undefined8 *)(*(long *)(lVar11 + 0x18) + 0x18),uVar10,uVar6,uVar12);
              UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar4,uVar6,uVar12);
              while( true ) {
                if (*(long *)(lVar3 + 0x28) == lStack_48) {
                  return;
                }
                auVar14 = func_0x016dec70();
                if (auVar14._8_4_ != 1) break;
                plVar7 = (long *)func_0x016dec50(auVar14._0_8_);
                lVar11 = *plVar7;
                func_0x016dec60();
                UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar4,uVar6,uVar12);
                if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b48(lVar11);
                }
              }
              UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar4,uVar6,uVar12);
              func_0x00b65214(auVar14._0_8_);
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b48(0);
            }
          }
          else {
            uVar10 = func_0x00a67b74();
            func_0x00a67a20(uVar10,0);
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if ((bRam00000000019176b4 & 1) == 0) {
        func_0x00a67900(&UnityEngine_Debug_TypeInfo);
        func_0x00a67900(&Str_Warning__AppLovin_MAX__);
        bRam00000000019176b4 = 1;
      }
      if (cRam00000000019176de == '\0') {
        func_0x00a67900(&MaxSdkBase_TypeInfo);
        cRam00000000019176de = '\x01';
      }
      if (*(char *)(*(long *)(_MaxSdkBase_TypeInfo + 0xb8) + 2) != '\0') {
        return;
      }
      uVar10 = System_String__Concat(_Str_Warning__AppLovin_MAX__,uVar10,0);
      if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Debug_TypeInfo);
      }
      uVar6 = 0;
      if ((bRam000000000191b9e0 & 1) == 0) {
        func_0x00a67900(&UnityEngine_Debug_TypeInfo,0);
        func_0x00a67900(&UnityEngine_ILogger_TypeInfo);
        bRam000000000191b9e0 = 1;
        uVar6 = extraout_x1;
      }
      if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        uVar6 = extraout_x1_00;
      }
      if (cRam000000000191aefe == '\0') {
        func_0x00a67900(&UnityEngine_Debug_TypeInfo,uVar6);
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
      lVar3 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _UnityEngine_ILogger_TypeInfo) {
            puVar8 = (undefined8 *)(lVar3 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_0146ab34;
          }
          uVar2 = uVar2 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar2 != 0);
      }
      puVar8 = (undefined8 *)func_0x00a9e6c4(plVar4,_UnityEngine_ILogger_TypeInfo,3);
LAB_0146ab34:
                    /* WARNING: Could not recover jumptable at 0x0146ab4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar8)(plVar4,2,uVar10,puVar8[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonPlay() { }   @0xb0da5c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonPlay(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  long lStack_68;
  
  if ((bRam0000000001916f81 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f81 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar12 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0dbe0;
    uVar5 = Menu__CLJDAMIIAKE(**(long **)(_Menu_TypeInfo + 0xb8),0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0dbe0;
      if (*(char *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x7b) == '\0') {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = 0;
        GUIGarage__PIHABGKNPDI(__this,1);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
          lVar7 = Menu__LBKMBBLLINK(**(long **)(_Menu_TypeInfo + 0xb8),0,0);
          if (lVar7 == 0) {
            func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
            uVar13 = func_0x00a67b44();
            uVar12 = func_0x00a67914(&Str_routine_is_null);
            System_NullReferenceException___ctor(uVar13,uVar12,0);
          }
          else {
            if (pcRam000000000191c478 == (code *)0x0) {
              pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
            }
            uVar5 = (*pcRam000000000191c478)(__this);
            if ((uVar5 & 1) != 0) {
              if (pcRam000000000191c488 == (code *)0x0) {
                pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
              }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam000000000191c488)(__this,lVar7);
              return;
            }
            func_0x00a67914(&System_ArgumentException_TypeInfo);
            uVar13 = func_0x00a67b44();
            uVar12 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
            System_ArgumentException___ctor(uVar13,uVar12,0);
          }
          uVar12 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
          auVar17 = func_0x00a67a20(uVar13,uVar12);
          if (pcRam000000000191c488 == (code *)0x0) {
            pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
          }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191c488)(auVar17._0_8_,auVar17._8_8_);
          return;
        }
        goto LAB_00c0dbe0;
      }
    }
  }
  pvVar6 = *(void **)((long)__this + 0x78);
  *(undefined1 *)((long)__this + 0x630) = 1;
  if (pvVar6 == (void *)0x0) {
LAB_00c0dbe0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam0000000001917151 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo,0,0);
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
  lVar7 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar7 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar7 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar7 + 0x20) = _Str_Try_to_Show__;
  lVar8 = UnityEngine_Component__get_gameObject(pvVar6,0);
  if (lVar8 == 0) goto LAB_00c485b8;
  uVar12 = UnityEngine_Object__get_name(lVar8,0);
  if ((*(uint *)(lVar7 + 0x18) < 2) ||
     (*(undefined8 *)(lVar7 + 0x28) = uVar12, *(uint *)(lVar7 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar7 + 0x30) = _Str___current__;
  uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  uVar12 = _Str_null;
  if ((uVar5 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar12 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar7 + 0x18) < 4) ||
     (*(undefined8 *)(lVar7 + 0x38) = uVar12, *(uint *)(lVar7 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar7 + 0x40) = _Str___last__;
  uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  uVar12 = _Str_null;
  if ((uVar5 & 1) != 0) {
    lVar8 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar8 == 0) goto LAB_00c485b8;
    uVar12 = UnityEngine_Object__get_name(lVar8,0);
  }
  uVar4 = *(uint *)(lVar7 + 0x18);
  if ((uVar4 < 6) || (*(undefined8 *)(lVar7 + 0x48) = uVar12, uVar4 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar7 + 0x50) = _Str____Child__;
  plVar9 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar12 = 0;
  if (plVar9 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    uVar4 = *(uint *)(lVar7 + 0x18);
  }
  if (uVar4 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar7 + 0x58) = uVar12;
  uVar12 = System_String__Concat(lVar7,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar12,0,0);
  uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Equality(uVar12,pvVar6,0);
  if ((uVar5 & 1) != 0) {
    uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar12,0,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
  uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Equality(uVar12,pvVar6,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  lVar7 = _GUIWindow_TypeInfo;
  if ((uVar5 & 1) != 0) {
    pvVar10 = *(void **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (pvVar10 == (void *)0x0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(pvVar10,false);
    lVar7 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar12 = **(undefined8 **)(lVar7 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  if ((uVar5 & 1) != 0) {
    if ((void *)**(undefined8 **)(_GUIWindow_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO((void *)**(undefined8 **)(_GUIWindow_TypeInfo + 0xb8),false);
  }
  pvVar10 = (void *)GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(pvVar10,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(char *)((long)pvVar6 + 0x20) == '\0') {
      if (pvVar10 == (void *)0x0) goto LAB_00c485b8;
      uVar5 = UnityEngine_GameObject__get_activeSelf(pvVar10,0);
      if ((uVar5 & 1) == 0) goto LAB_00c46b74;
      uVar15 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar12 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar15;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar12 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
      if (((uVar5 & 1) != 0) && (*(char *)((long)pvVar6 + 0x21) != '\0')) {
        fVar14 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar14) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8),pvVar10);
          goto LAB_00c46b74;
        }
      }
      if (pvVar10 == (void *)0x0) goto LAB_00c485b8;
      uVar12 = 1;
    }
    UnityEngine_GameObject__SetActive(pvVar10,uVar12,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar12 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar12 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(char *)((long)pvVar6 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar7 == 0))
          goto LAB_00c485b8;
          uVar5 = AdvController__EDNAEPDDBPJ(lVar7,0);
          if ((uVar5 & 1) != 0) {
            iVar2 = UnityEngine_Screen__get_width(0);
            iVar3 = UnityEngine_Screen__get_height(0);
            fVar14 = (float)iVar2 / (float)iVar3;
            if (fVar14 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar7 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar7 == 0))
            goto LAB_00c485b8;
            uVar12 = *(undefined8 *)(lVar7 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar12,0);
            if ((uVar5 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar7 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar7 == 0)
                 ) goto LAB_00c485b8;
              uVar12 = *(undefined8 *)(lVar7 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar12,0);
              if ((uVar5 & 1) != 0) {
                if (1.61 <= fVar14) {
                  if ((fVar14 <= 1.61) || (1.8 <= fVar14)) {
                    if (fVar14 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar7 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar7 == 0)) goto LAB_00c485b8;
                    uVar12 = *(undefined8 *)(lVar7 + 0x70);
                    uVar16 = 0x3f51eb85;
                    uVar15 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar7 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar7 == 0)) goto LAB_00c485b8;
                    uVar12 = *(undefined8 *)(lVar7 + 0x70);
                    uVar16 = 0x3f5eb852;
                    uVar15 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar7 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar7 == 0)) goto LAB_00c485b8;
                  uVar12 = *(undefined8 *)(lVar7 + 0x70);
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
                   (lVar7 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar7 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar14) {
                  if (*(long *)(lVar7 + 0x240) == 0) goto LAB_00c485b8;
                  uVar5 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar7 + 0x240),0);
                  if ((uVar5 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar7 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar7 == 0)) goto LAB_00c485b8;
                  uVar12 = *(undefined8 *)(lVar7 + 0x60);
                  uVar16 = 0x3f51eb85;
                  uVar15 = 0x41a00000;
                }
                else {
                  uVar12 = *(undefined8 *)(lVar7 + 0x60);
                  uVar16 = 0x3f5eb852;
                  uVar15 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar7 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar7 == 0)) goto LAB_00c485b8;
                uVar12 = *(undefined8 *)(lVar7 + 0x60);
                uVar15 = 0xc0a00000;
                uVar16 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar15,uVar16,pvVar6,uVar12);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (pvVar10 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38),
               pvVar10 == (void *)0x0)) goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(pvVar10);
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
    uVar12 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
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
             (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar7 == 0))
          goto LAB_00c485b8;
          uVar5 = AdvController__EDNAEPDDBPJ(lVar7,0);
          if ((uVar5 & 1) == 0) goto LAB_00c47120;
          iVar2 = UnityEngine_Screen__get_width(0);
          iVar3 = UnityEngine_Screen__get_height(0);
          fVar14 = (float)iVar2 / (float)iVar3;
          if (1.51 < fVar14) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
            goto LAB_00c485b8;
            uVar12 = *(undefined8 *)(lVar7 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar12,0);
            if ((uVar5 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
              goto LAB_00c485b8;
              uVar12 = *(undefined8 *)(lVar7 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar12,0);
              if ((uVar5 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
                goto LAB_00c485b8;
                uVar12 = *(undefined8 *)(lVar7 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar12,0);
                if ((uVar5 & 1) == 0) {
                  lVar7 = UnityEngine_Component__get_gameObject(pvVar6,0);
                  if (lVar7 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar7,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar7 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar5 = UnityEngine_Object__op_Inequality(lVar7,0,0);
                  if ((uVar5 & 1) != 0) {
                    if (lVar7 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar7 + 0x2c) == 3) {
                      lVar7 = UnityEngine_Component__get_gameObject(pvVar6,0);
                      if (lVar7 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar7,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar5 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar5 & 1) != 0) {
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
                       (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
                    goto LAB_00c485b8;
                    lStack_68 = *(long *)(lVar7 + 0xe8);
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
                   (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar7 + 0xe8);
                uVar15 = 0x41f00000;
              }
              else {
                if (1.61 <= fVar14) {
                  if (1.8 <= fVar14) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar7 + 0xb0);
                  uVar16 = 0x3f6e147b;
                  uVar15 = 0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar7 + 0xb0);
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
                   (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar7 + 0x188);
                uVar15 = 0x41200000;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
              goto LAB_00c485b8;
              lStack_68 = *(long *)(lVar7 + 0x188);
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
            GUIWindow__EPGDFDEPGCB(uVar15,uVar16,pvVar6,lStack_68);
          }
LAB_00c47308:
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar10 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38),
             pvVar10 == (void *)0x0)) goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(pvVar10);
        }
      }
    }
  }
LAB_00c47338:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar7 = *(long *)(_Menu_TypeInfo + 0xb8);
  if (*(char *)(lVar7 + 0x1a) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar7 = *(long *)(_Menu_TypeInfo + 0xb8);
    }
    if (*(char *)(lVar7 + 0xc) != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar12 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar12 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar12 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar7 == 0))
            goto LAB_00c485b8;
            if (*(char *)(lVar7 + 0x6c) != '\0') {
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
              pvVar10 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (pvVar10 == (void *)0x0) goto LAB_00c485b8;
              bVar1 = DAFNMLEKHAD__MHBEPDHNNFH(pvVar10);
              if (!bVar1) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar7 == 0))
                goto LAB_00c485b8;
                uVar12 = *(undefined8 *)(lVar7 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar5 = UnityEngine_Object__op_Equality(uVar12,0,0);
                if ((uVar5 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
                  goto LAB_00c485b8;
                  uVar12 = *(undefined8 *)(lVar7 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar12,0);
                  if ((uVar5 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar7 == 0))
                    goto LAB_00c485b8;
                    uVar12 = *(undefined8 *)(lVar7 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar12 = UnityEngine_Object__Instantiate_object_
                                       (uVar12,_Method_UnityEngine_Object_Instantiate_GameObject___)
                    ;
                    *(undefined8 *)(lVar7 + 0x90) = uVar12;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar7 = UnityEngine_Component__get_gameObject(pvVar6,0);
  if (lVar7 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar7,1,0);
  puVar11 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar11[2] = *puVar11;
  *puVar11 = pvVar6;
  if (*(char *)((long)pvVar6 + 0x23) != '\0') {
    uVar12 = GUIWindow__FAAELIPKLCB(pvVar6);
    UnityEngine_MonoBehaviour__StartCoroutine(pvVar6,uVar12,0);
  }
  lVar7 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar7 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar7 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar7 + 0x20) = _Str_Window__Show__;
  uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  uVar12 = _Str_null;
  if ((uVar5 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar12 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar7 + 0x18) < 2) ||
     (*(undefined8 *)(lVar7 + 0x28) = uVar12, *(uint *)(lVar7 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar7 + 0x30) = _Str___last__;
  uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  uVar12 = _Str_null;
  if ((uVar5 & 1) != 0) {
    lVar8 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar8 == 0) goto LAB_00c485b8;
    uVar12 = UnityEngine_Object__get_name(lVar8,0);
  }
  uVar4 = *(uint *)(lVar7 + 0x18);
  if ((uVar4 < 4) || (*(undefined8 *)(lVar7 + 0x38) = uVar12, uVar4 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar7 + 0x40) = _Str____Child__;
  plVar9 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar12 = 0;
  if (plVar9 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    uVar4 = *(uint *)(lVar7 + 0x18);
  }
  if (uVar4 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar7 + 0x48) = uVar12;
  uVar12 = System_String__Concat(lVar7,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar12,0,0);
  uVar5 = Main__KCHOEBEIOCE(0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (pvVar10 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58), pvVar10 == (void *)0x0))
    goto LAB_00c485b8;
    GamePadController__KCAHLEAKNNK(pvVar10);
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
    uVar12 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    if ((uVar5 & 1) != 0) {
      uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar7 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar7 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar7 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar12,uVar13,0);
      if ((uVar5 & 1) == 0) {
        uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar7 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar7 == 0))
        goto LAB_00c485b8;
        uVar13 = *(undefined8 *)(lVar7 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Equality(uVar12,uVar13,0);
        if ((uVar5 & 1) == 0) {
          uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar7 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar7 == 0))
          goto LAB_00c485b8;
          uVar13 = *(undefined8 *)(lVar7 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Equality(uVar12,uVar13,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar7 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar7 == 0))
            goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(lVar7,0);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (pvVar6 = *(void **)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
             pvVar6 == (void *)0x0)) goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(pvVar6);
        }
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar7 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar7 == 0))
        goto LAB_00c485b8;
        lVar7 = *(long *)(lVar7 + 0x178);
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
        if ((lVar8 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar8,0), lVar7 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar7,uVar4 & 1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar12 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    if ((uVar5 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    if ((uVar5 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
    goto LAB_00c485b8;
    uVar5 = GUIGarage__ABAHNKCPCFA(lVar7,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0)) ||
        (lVar7 = *(long *)(lVar7 + 0x78), lVar7 == 0)) ||
       (lVar7 = UnityEngine_Component__get_gameObject(lVar7,0), lVar7 == 0)) goto LAB_00c485b8;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0)) ||
         ((lVar7 = *(long *)(lVar7 + 0x70), lVar7 == 0 ||
          (lVar7 = UnityEngine_Component__get_gameObject(lVar7,0), lVar7 == 0)))) goto LAB_00c485b8;
      uVar5 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_00c47948;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0)) ||
         (lVar7 = *(long *)(lVar7 + 0x1d0), lVar7 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar7,0,0);
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0)) ||
         (lVar7 = *(long *)(lVar7 + 0x1b8), lVar7 == 0)) goto LAB_00c485b8;
      uVar15 = 0;
    }
    else {
LAB_00c47948:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0)) ||
         (lVar7 = *(long *)(lVar7 + 0x1d0), lVar7 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar7,1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(lVar7,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
      goto LAB_00c485b8;
      lVar7 = *(long *)(lVar7 + 0x3e0);
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
      if ((lVar8 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar8,0), lVar7 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar7,uVar4 & 1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0 ||
          (lVar7 = *(long *)(lVar7 + 0x1b8), lVar7 == 0)))) goto LAB_00c485b8;
      uVar15 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar15,lVar7,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0)) ||
       ((lVar7 = *(long *)(lVar7 + 0x60), lVar7 == 0 ||
        (lVar7 = UnityEngine_Component__get_gameObject(lVar7,0), lVar7 == 0)))) goto LAB_00c485b8;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
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
        (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0)) ||
       (lVar7 = *(long *)(lVar7 + 0x68), lVar7 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar7,*(undefined1 *)((long)pvVar6 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
    goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(lVar7 + 0x78);
    uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar13,uVar12,0);
    if ((uVar5 & 1) != 0) {
      uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar7 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar12,uVar13,0);
      if ((uVar5 & 1) != 0) {
        uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
        if ((uVar5 & 1) != 0) {
          uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
          goto LAB_00c485b8;
          uVar13 = *(undefined8 *)(lVar7 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Equality(uVar12,uVar13,0);
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
        lVar7 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x20), lVar7 == 0)) ||
           (lVar7 = *(long *)(lVar7 + 0x4e0), lVar7 == 0)) goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive
                  (lVar7,*(undefined1 *)((long)*(long **)(_Menu_TypeInfo + 0xb8) + 0xe),0);
        uVar15 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar15;
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
      }
    }
    uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
    goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(lVar7 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar12,uVar13,0);
    if ((uVar5 & 1) == 0) {
      uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar7 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar12,uVar13,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(lVar7,0);
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
      lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar7 == 0) goto LAB_00c485b8;
      uVar5 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar7,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar12 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar7 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar7 == 0) goto LAB_00c485b8;
            uVar5 = UnityEngine_AudioSource__get_isPlaying(lVar7,0);
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
      lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar7 == 0) goto LAB_00c485b8;
      lVar7 = DAFNMLEKHAD__DKJLCJPBPPN(lVar7,0xffffffff,1,0);
      if (lVar7 == 0) {
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
        if (lVar7 == 0) goto LAB_00c485b8;
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = *(undefined4 *)(lVar7 + 0x104);
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
         (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(lVar7,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar7,0);
    }
    uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
    goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(lVar7 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar12,uVar13,0);
    if ((uVar5 & 1) != 0) {
      uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar12,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar6 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar6 == (void *)0x0)
             ) goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(pvVar6,false);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar7 = **(long **)(_Menu_TypeInfo + 0xb8);
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x20), lVar7 == 0)) goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(lVar7,0);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(lVar7,0);
      }
    }
    if (bVar1) {
      return;
    }
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) != (void *)0x0) {
    Menu__GDEFDCOIDNM((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
    return;
  }
LAB_00c485b8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void DonateWindowAfterNoMoney() { }   @0xb0dee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__DonateWindowAfterNoMoney(void *__this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)((long)__this + 0x6c8);
  if ((bRam0000000001916f5d & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f5d = 1;
  }
  GUIGarage__GFNKMDJEDBD(__this);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
     (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40), lVar2 != 0)) {
    AnalyticsController__KNPMHFKJGNL(lVar2,0);
    if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
      uVar4 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x48);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x48) == 0)) goto LAB_00c07e78;
        Purchaser__KHDFDGMBOIJ();
      }
      if (*(long *)((long)__this + 0xa8) != 0) {
        GUIWindow__HEGIHOAJOKK(*(long *)((long)__this + 0xa8),1,0);
        lVar2 = *(long *)((long)__this + 0x660);
        *(undefined1 *)((long)__this + 0x6cc) = 1;
        if (lVar2 != 0) {
          if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar2 = *(long *)(lVar2 + (long)(int)uVar1 * 8 + 0x20);
          if (lVar2 != 0) {
            UnityEngine_UI_Toggle__set_isOn(lVar2,1,0);
            *(uint *)((long)__this + 0x6c8) = uVar1;
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
  }
LAB_00c07e78:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void MGBNHDCJAMK() { }   @0xb0e560

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__MGBNHDCJAMK(void *__this)

{
  long lVar1;
  
  if ((((*(long *)((long)__this + 2000) != 0) &&
       (lVar1 = UnityEngine_Component__get_transform(*(long *)((long)__this + 2000),0), lVar1 != 0))
      && (lVar1 = UnityEngine_Transform__get_parent(lVar1,0), lVar1 != 0)) &&
     (lVar1 = UnityEngine_Component__get_gameObject(lVar1,0), lVar1 != 0)) {
    if (pcRam000000000191c3f8 == (code *)0x0) {
      pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
    }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c3f8)(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void NFPFKDAHPNE() { }   @0xb0cba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__NFPFKDAHPNE(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001916f8c & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_VERSION);
    bRam0000000001916f8c = 1;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = **(undefined8 **)(_Translate_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    plVar3 = *(long **)((long)__this + 0x700);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
      uVar4 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_VERSION,0);
      if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Application_TypeInfo);
      }
      uVar2 = UnityEngine_Application__get_version(0);
      uVar4 = System_String__Concat(uVar4,_Str__,uVar2,0);
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0ccec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x5a8))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0x5b0));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  return;
}


// ==== public void DonateOnChangeToggle(int type) { }   @0xb10974

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__DonateOnChangeToggle(void *__this,int type)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  lVar7 = *(long *)((long)__this + 0x660);
  if (lVar7 != 0) {
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      uVar11 = 0;
      do {
        if (uVar1 <= uVar8) goto LAB_00c10b3c;
        lVar6 = *(long *)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
        if ((lVar6 == 0) || (plVar4 = *(long **)(lVar6 + 0xe0), plVar4 == (long *)0x0))
        goto LAB_00c10b38;
        uVar10 = uVar11;
        uVar2 = uVar11;
        uVar3 = uVar11;
        if (*(char *)(lVar6 + 0x120) != '\0') {
          uVar10 = 0x3f22a2a2;
          uVar2 = 0x3f038384;
          uVar3 = 0x3eb4b4b5;
        }
        (**(code **)(*plVar4 + 0x2a8))
                  (uVar3,uVar2,uVar10,0x3f800000,plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
        if (*(char *)(lVar6 + 0x120) != '\0') {
          lVar6 = UnityEngine_Component__get_transform(lVar6,0);
          if (lVar6 == 0) goto LAB_00c10b38;
          UnityEngine_Transform__SetAsLastSibling(lVar6,0);
          *(int *)((long)__this + 0x6c8) = type;
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
    lVar7 = *(long *)((long)__this + 0x660);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= (uint)type) {
LAB_00c10b3c:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      lVar7 = *(long *)(lVar7 + (long)type * 8 + 0x20);
      if (lVar7 != 0) {
        if (*(char *)(lVar7 + 0x120) == '\0') {
          return;
        }
        if (*(char *)((long)__this + 0x6cc) != '\0') {
          plVar4 = *(long **)((long)__this + 0x668);
          if (plVar4 == (long *)0x0) goto LAB_00c10b38;
          (**(code **)(*plVar4 + 0x3c8))(plVar4,*(undefined8 *)(*plVar4 + 0x3d0));
          if (type == 2) {
            if ((*(long *)((long)__this + 0x668) == 0) || (*(long *)((long)__this + 0x670) == 0))
            goto LAB_00c10b38;
            lVar7 = *(long *)(*(long *)((long)__this + 0x668) + 0x20);
            uVar5 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 0x670),0);
            if (lVar7 == 0) goto LAB_00c10b38;
            lVar6 = 0x6b8;
            if ((uVar5 & 1) == 0) {
              lVar6 = 0x6c0;
            }
            fVar9 = (float)*(int *)((long)__this + lVar6);
          }
          else if (type == 1) {
            if ((*(long *)((long)__this + 0x668) == 0) ||
               (lVar7 = *(long *)(*(long *)((long)__this + 0x668) + 0x20), lVar7 == 0))
            goto LAB_00c10b38;
            fVar9 = -1547.0;
          }
          else {
            if (type != 0) goto LAB_00c10b18;
            if ((*(long *)((long)__this + 0x668) == 0) ||
               (lVar7 = *(long *)(*(long *)((long)__this + 0x668) + 0x20), lVar7 == 0))
            goto LAB_00c10b38;
            fVar9 = 0.0;
          }
          UnityEngine_RectTransform__set_anchoredPosition(fVar9,0,lVar7,0);
        }
LAB_00c10b18:
        *(undefined1 *)((long)__this + 0x6cc) = 1;
        return;
      }
    }
  }
LAB_00c10b38:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void PIHABGKNPDI(GUIGarage.GDKKPEEJJAO FHOFNGHGNGF) { }   @0xb0b6e4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__PIHABGKNPDI(void *__this,int FHOFNGHGNGF)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if (*(long *)((long)__this + 600) != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(__this,*(long *)((long)__this + 600),0);
  }
  lVar1 = GUIGarage__ILOEHAPOFHA(__this,FHOFNGHGNGF);
  *(long *)((long)__this + 600) = lVar1;
  if (lVar1 == 0) {
    func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
    uVar3 = func_0x00a67b44();
    uVar4 = func_0x00a67914(&Str_routine_is_null);
    System_NullReferenceException___ctor(uVar3,uVar4,0);
  }
  else {
    if (pcRam000000000191c478 == (code *)0x0) {
      pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
    }
    uVar2 = (*pcRam000000000191c478)(__this);
    if ((uVar2 & 1) != 0) {
      if (pcRam000000000191c488 == (code *)0x0) {
        pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
      }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c488)(__this,lVar1);
      return;
    }
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar3 = func_0x00a67b44();
    uVar4 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
    System_ArgumentException___ctor(uVar3,uVar4,0);
  }
  uVar4 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
  auVar5 = func_0x00a67a20(uVar3,uVar4);
  if (pcRam000000000191c488 == (code *)0x0) {
    pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
  }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c488)(auVar5._0_8_,auVar5._8_8_);
  return;
}


// ==== public void ButtonCheatAddSilver() { }   @0xb1119c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonCheatAddSilver(void *__this)

{
  int LGFLDFKKJMG;
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  void *__this_00;
  long lVar4;
  void *__this_01;
  undefined8 uVar5;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam0000000001916f97 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916f97 = 1;
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
  __this_01 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (__this_01 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  iVar2 = DAFNMLEKHAD__LOCFCFJIAIH(__this_01);
  iVar2 = iVar2 + 100000;
  if ((bRam0000000001916f2a & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo,iVar2,0);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str_s);
    bRam0000000001916f2a = 1;
  }
  uStack_50 = *(undefined4 *)((long)__this_01 + 0x38);
  uStack_58 = *(undefined8 *)((long)__this_01 + 0x30);
  uStack_60 = *(undefined8 *)((long)__this_01 + 0x28);
  LGFLDFKKJMG = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_60,0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,iVar2,0);
  uStack_70 = uStack_88;
  uStack_78 = uStack_90;
  uStack_80 = uStack_98;
  *(undefined4 *)((long)__this_01 + 0x38) = uStack_88;
  *(undefined8 *)((long)__this_01 + 0x30) = uStack_90;
  *(undefined8 *)((long)__this_01 + 0x28) = uStack_98;
  uStack_a0 = uStack_88;
  uStack_a8 = uStack_90;
  uStack_b0 = uStack_98;
  uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_b0,0);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(_Str_s,uVar1,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (__this_00 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20),
         __this_00 == (void *)0x0)) goto LAB_00c0142c;
      GUIGarage__GMHOEBNFADN(__this_00,LGFLDFKKJMG,iVar2,true);
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
      uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
        uStack_c0 = *(undefined4 *)((long)__this_01 + 0x38);
        uStack_c8 = *(undefined8 *)((long)__this_01 + 0x30);
        uStack_d0 = *(undefined8 *)((long)__this_01 + 0x28);
        lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_d0,0);
        if (lVar4 != 0) {
          return;
        }
      }
    }
  }
LAB_00c0142c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonZD2Adv() { }   @0xb11708

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonZD2Adv(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  void *pvVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  long lStack_68;
  
  if ((bRam0000000001916f9b & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_Preview);
    func_0x00a67900(&Str_GO_TO_ZD2);
    bRam0000000001916f9b = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
LAB_00c11870:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar12 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40), lVar6 == 0))
    goto LAB_00c11870;
    AnalyticsController__JOOHAKJLNLC(lVar6,_Str_Preview,0);
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c11870;
  uVar12 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_GO_TO_ZD2,0);
  plVar10 = *(long **)((long)__this + 0x1f8);
  if (plVar10 == (long *)0x0) goto LAB_00c11870;
  (**(code **)(*plVar10 + 0x5a8))(plVar10,uVar12,*(undefined8 *)(*plVar10 + 0x5b0));
  pvVar7 = *(void **)((long)__this + 0x158);
  if (pvVar7 == (void *)0x0) goto LAB_00c11870;
  if ((bRam0000000001917151 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo,0,0);
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
  lVar8 = UnityEngine_Component__get_gameObject(pvVar7,0);
  if (lVar8 == 0) goto LAB_00c485b8;
  uVar12 = UnityEngine_Object__get_name(lVar8,0);
  if ((*(uint *)(lVar6 + 0x18) < 2) ||
     (*(undefined8 *)(lVar6 + 0x28) = uVar12, *(uint *)(lVar6 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x30) = _Str___current__;
  uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  uVar12 = _Str_null;
  if ((uVar5 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar12 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar6 + 0x18) < 4) ||
     (*(undefined8 *)(lVar6 + 0x38) = uVar12, *(uint *)(lVar6 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x40) = _Str___last__;
  uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  uVar12 = _Str_null;
  if ((uVar5 & 1) != 0) {
    lVar8 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar8 == 0) goto LAB_00c485b8;
    uVar12 = UnityEngine_Object__get_name(lVar8,0);
  }
  uVar4 = *(uint *)(lVar6 + 0x18);
  if ((uVar4 < 6) || (*(undefined8 *)(lVar6 + 0x48) = uVar12, uVar4 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x50) = _Str____Child__;
  plVar10 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar12 = 0;
  if (plVar10 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    uVar4 = *(uint *)(lVar6 + 0x18);
  }
  if (uVar4 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x58) = uVar12;
  uVar12 = System_String__Concat(lVar6,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar12,0,0);
  uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Equality(uVar12,pvVar7,0);
  if ((uVar5 & 1) != 0) {
    uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar12,0,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
  uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Equality(uVar12,pvVar7,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  lVar6 = _GUIWindow_TypeInfo;
  if ((uVar5 & 1) != 0) {
    pvVar9 = *(void **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(pvVar9,false);
    lVar6 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar12 = **(undefined8 **)(lVar6 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  if ((uVar5 & 1) != 0) {
    if ((void *)**(undefined8 **)(_GUIWindow_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO((void *)**(undefined8 **)(_GUIWindow_TypeInfo + 0xb8),false);
  }
  pvVar9 = (void *)GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(pvVar9,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(char *)((long)pvVar7 + 0x20) == '\0') {
      if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
      uVar5 = UnityEngine_GameObject__get_activeSelf(pvVar9,0);
      if ((uVar5 & 1) == 0) goto LAB_00c46b74;
      uVar15 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar12 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar15;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar12 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
      if (((uVar5 & 1) != 0) && (*(char *)((long)pvVar7 + 0x21) != '\0')) {
        fVar14 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar14) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8),pvVar9);
          goto LAB_00c46b74;
        }
      }
      if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
      uVar12 = 1;
    }
    UnityEngine_GameObject__SetActive(pvVar9,uVar12,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar12 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar12 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(char *)((long)pvVar7 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
          goto LAB_00c485b8;
          uVar5 = AdvController__EDNAEPDDBPJ(lVar6,0);
          if ((uVar5 & 1) != 0) {
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
            uVar12 = *(undefined8 *)(lVar6 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Equality(pvVar7,uVar12,0);
            if ((uVar5 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0)
                 ) goto LAB_00c485b8;
              uVar12 = *(undefined8 *)(lVar6 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__op_Equality(pvVar7,uVar12,0);
              if ((uVar5 & 1) != 0) {
                if (1.61 <= fVar14) {
                  if ((fVar14 <= 1.61) || (1.8 <= fVar14)) {
                    if (fVar14 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar6 == 0)) goto LAB_00c485b8;
                    uVar12 = *(undefined8 *)(lVar6 + 0x70);
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
                    uVar12 = *(undefined8 *)(lVar6 + 0x70);
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
                  uVar12 = *(undefined8 *)(lVar6 + 0x70);
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
                  uVar5 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar6 + 0x240),0);
                  if ((uVar5 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar6 == 0)) goto LAB_00c485b8;
                  uVar12 = *(undefined8 *)(lVar6 + 0x60);
                  uVar16 = 0x3f51eb85;
                  uVar15 = 0x41a00000;
                }
                else {
                  uVar12 = *(undefined8 *)(lVar6 + 0x60);
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
                uVar12 = *(undefined8 *)(lVar6 + 0x60);
                uVar15 = 0xc0a00000;
                uVar16 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar15,uVar16,pvVar7,uVar12);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (pvVar9 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38),
               pvVar9 == (void *)0x0)) goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(pvVar9);
            goto LAB_00c46f70;
          }
        }
        GUIWindow__IPELKJAHFGL(pvVar7);
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
    uVar12 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(char *)((long)pvVar7 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(pvVar7);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
          goto LAB_00c485b8;
          uVar5 = AdvController__EDNAEPDDBPJ(lVar6,0);
          if ((uVar5 & 1) == 0) goto LAB_00c47120;
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
            uVar12 = *(undefined8 *)(lVar6 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Equality(pvVar7,uVar12,0);
            if ((uVar5 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
              goto LAB_00c485b8;
              uVar12 = *(undefined8 *)(lVar6 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__op_Equality(pvVar7,uVar12,0);
              if ((uVar5 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                goto LAB_00c485b8;
                uVar12 = *(undefined8 *)(lVar6 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar5 = UnityEngine_Object__op_Equality(pvVar7,uVar12,0);
                if ((uVar5 & 1) == 0) {
                  lVar6 = UnityEngine_Component__get_gameObject(pvVar7,0);
                  if (lVar6 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar6,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar6 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar5 = UnityEngine_Object__op_Inequality(lVar6,0,0);
                  if ((uVar5 & 1) != 0) {
                    if (lVar6 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar6 + 0x2c) == 3) {
                      lVar6 = UnityEngine_Component__get_gameObject(pvVar7,0);
                      if (lVar6 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar6,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar5 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar5 & 1) != 0) {
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
            GUIWindow__EPGDFDEPGCB(uVar15,uVar16,pvVar7,lStack_68);
          }
LAB_00c47308:
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar9 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), pvVar9 == (void *)0x0)
             ) goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(pvVar9);
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
      uVar12 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar12 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar12 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
          if ((uVar5 & 1) != 0) {
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
              pvVar9 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
              bVar1 = DAFNMLEKHAD__MHBEPDHNNFH(pvVar9);
              if (!bVar1) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
                goto LAB_00c485b8;
                uVar12 = *(undefined8 *)(lVar6 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar5 = UnityEngine_Object__op_Equality(uVar12,0,0);
                if ((uVar5 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                  goto LAB_00c485b8;
                  uVar12 = *(undefined8 *)(lVar6 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar5 = UnityEngine_Object__op_Equality(pvVar7,uVar12,0);
                  if ((uVar5 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
                    goto LAB_00c485b8;
                    uVar12 = *(undefined8 *)(lVar6 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar12 = UnityEngine_Object__Instantiate_object_
                                       (uVar12,_Method_UnityEngine_Object_Instantiate_GameObject___)
                    ;
                    *(undefined8 *)(lVar6 + 0x90) = uVar12;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar6 = UnityEngine_Component__get_gameObject(pvVar7,0);
  if (lVar6 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar6,1,0);
  puVar11 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar11[2] = *puVar11;
  *puVar11 = pvVar7;
  if (*(char *)((long)pvVar7 + 0x23) != '\0') {
    uVar12 = GUIWindow__FAAELIPKLCB(pvVar7);
    UnityEngine_MonoBehaviour__StartCoroutine(pvVar7,uVar12,0);
  }
  lVar6 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar6 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar6 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar6 + 0x20) = _Str_Window__Show__;
  uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  uVar12 = _Str_null;
  if ((uVar5 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar12 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar6 + 0x18) < 2) ||
     (*(undefined8 *)(lVar6 + 0x28) = uVar12, *(uint *)(lVar6 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x30) = _Str___last__;
  uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  uVar12 = _Str_null;
  if ((uVar5 & 1) != 0) {
    lVar8 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar8 == 0) goto LAB_00c485b8;
    uVar12 = UnityEngine_Object__get_name(lVar8,0);
  }
  uVar4 = *(uint *)(lVar6 + 0x18);
  if ((uVar4 < 4) || (*(undefined8 *)(lVar6 + 0x38) = uVar12, uVar4 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x40) = _Str____Child__;
  plVar10 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar12 = 0;
  if (plVar10 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    uVar4 = *(uint *)(lVar6 + 0x18);
  }
  if (uVar4 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x48) = uVar12;
  uVar12 = System_String__Concat(lVar6,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar12,0,0);
  uVar5 = Main__KCHOEBEIOCE(0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (pvVar9 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58), pvVar9 == (void *)0x0))
    goto LAB_00c485b8;
    GamePadController__KCAHLEAKNNK(pvVar9);
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
    uVar12 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    if ((uVar5 & 1) != 0) {
      uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar6 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar12,uVar13,0);
      if ((uVar5 & 1) == 0) {
        uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
        goto LAB_00c485b8;
        uVar13 = *(undefined8 *)(lVar6 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Equality(uVar12,uVar13,0);
        if ((uVar5 & 1) == 0) {
          uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
          goto LAB_00c485b8;
          uVar13 = *(undefined8 *)(lVar6 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Equality(uVar12,uVar13,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
            goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(lVar6,0);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (pvVar7 = *(void **)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
             pvVar7 == (void *)0x0)) goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(pvVar7);
        }
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
        goto LAB_00c485b8;
        lVar6 = *(long *)(lVar6 + 0x178);
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
        if ((lVar8 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar8,0), lVar6 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar6,uVar4 & 1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar12 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    if ((uVar5 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    if ((uVar5 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar5 = GUIGarage__ABAHNKCPCFA(lVar6,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
        (lVar6 = *(long *)(lVar6 + 0x78), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c485b8;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
         ((lVar6 = *(long *)(lVar6 + 0x70), lVar6 == 0 ||
          (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c485b8;
      uVar5 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar5 & 1) != 0) goto LAB_00c47948;
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
      lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((lVar8 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar8,0), lVar6 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar6,uVar4 & 1,0);
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
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
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
        (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
       (lVar6 = *(long *)(lVar6 + 0x68), lVar6 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar6,*(undefined1 *)((long)pvVar7 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(lVar6 + 0x78);
    uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar13,uVar12,0);
    if ((uVar5 & 1) != 0) {
      uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar6 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar12,uVar13,0);
      if ((uVar5 & 1) != 0) {
        uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
        if ((uVar5 & 1) != 0) {
          uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
          goto LAB_00c485b8;
          uVar13 = *(undefined8 *)(lVar6 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Equality(uVar12,uVar13,0);
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
        lVar6 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x20), lVar6 == 0)) ||
           (lVar6 = *(long *)(lVar6 + 0x4e0), lVar6 == 0)) goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive
                  (lVar6,*(undefined1 *)((long)*(long **)(_Menu_TypeInfo + 0xb8) + 0xe),0);
        uVar15 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar15;
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
      }
    }
    uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(lVar6 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar12,uVar13,0);
    if ((uVar5 & 1) == 0) {
      uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar6 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar12,uVar13,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(lVar6,0);
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
      lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_00c485b8;
      uVar5 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar6,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar12 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar6 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar6 == 0) goto LAB_00c485b8;
            uVar5 = UnityEngine_AudioSource__get_isPlaying(lVar6,0);
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
      lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_00c485b8;
      lVar6 = DAFNMLEKHAD__DKJLCJPBPPN(lVar6,0xffffffff,1,0);
      if (lVar6 == 0) {
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
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = *(undefined4 *)(lVar6 + 0x104);
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
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(lVar6,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar6,0);
    }
    uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(lVar6 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar12,uVar13,0);
    if ((uVar5 & 1) != 0) {
      uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar12,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar7 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar7 == (void *)0x0)
             ) goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(pvVar7,false);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar6 = **(long **)(_Menu_TypeInfo + 0xb8);
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x20), lVar6 == 0)) goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(lVar6,0);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(lVar6,0);
      }
    }
    if (bVar1) {
      return;
    }
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) != (void *)0x0) {
    Menu__GDEFDCOIDNM((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
    return;
  }
LAB_00c485b8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonCheatTestNotification() { }   @0xb11fb8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonCheatTestNotification(void *__this)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  if ((bRam0000000001916fa0 & 1) == 0) {
    func_0x00a67900(&NotificationsManager_TypeInfo);
    bRam0000000001916fa0 = 1;
  }
  if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((bRam0000000001916eaa & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&Str_Bla_bla__test_notifications_);
    func_0x00a67900(&Str_test);
    bRam0000000001916eaa = 1;
  }
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uStack_28 = System_DateTime__get_Now(0);
  uVar1 = System_DateTime__AddSeconds(0x403e000000000000,&uStack_28,0);
  if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_NotificationsManager_TypeInfo);
  }
  NotificationsManager__KJLOEDMCBNA(uVar1,_Str_Bla_bla__test_notifications_,_Str_test,1);
  return;
}


// ==== public void HAGKNGONJFM(Level ACLJCGMKGNP, bool MBHJAOIDNMK) { }   @0xb126bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__HAGKNGONJFM(void *__this,void *ACLJCGMKGNP,bool MBHJAOIDNMK)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  char cVar8;
  long lVar9;
  long *plVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long lStack_38;
  
  if ((bRam0000000001916fa5 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_EVENT_TIME_START_IN);
    func_0x00a67900(&Str_EVENT_TIME_END_IN);
    func_0x00a67900(&Str_EVENT_ANY_CAR);
    func_0x00a67900(&Str_);
    bRam0000000001916fa5 = 1;
  }
  if ((ACLJCGMKGNP == (void *)0x0) || (uVar5 = Level__get_IsEvent(ACLJCGMKGNP,0), (uVar5 & 1) == 0))
  {
    bVar2 = false;
  }
  else {
    if (*(long *)((long)ACLJCGMKGNP + 0x50) == 0) goto LAB_00c12d8c;
    bVar2 = *(int *)(*(long *)((long)ACLJCGMKGNP + 0x50) + 0x1c) == 1;
  }
  if ((MBHJAOIDNMK & bVar2) != 0) {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2a) == '\0') {
      if (*(long *)((long)__this + 0x48) == 0) goto LAB_00c12d8c;
      RatingEventController__OJBAJGILIJN(*(long *)((long)__this + 0x48),ACLJCGMKGNP,0,0);
    }
  }
  if (ACLJCGMKGNP == (void *)0x0) goto LAB_00c12d8c;
  uVar5 = Level__get_IsEvent(ACLJCGMKGNP,0);
  if ((uVar5 & 1) == 0) {
LAB_00c12828:
    bVar11 = 0;
  }
  else {
    if (*(long *)((long)ACLJCGMKGNP + 0x50) == 0) goto LAB_00c12d8c;
    if (*(int *)(*(long *)((long)ACLJCGMKGNP + 0x50) + 0x1c) != 1) goto LAB_00c12828;
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    bVar11 = *(byte *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2a) ^ 1;
  }
  lVar9 = *(long *)((long)__this + 0x300);
  uVar3 = Level__get_IsEvent(ACLJCGMKGNP,0);
  if (lVar9 == 0) goto LAB_00c12d8c;
  UnityEngine_GameObject__SetActive(lVar9,~uVar3 & 1,0);
  lVar9 = *(long *)((long)__this + 0x308);
  uVar3 = Level__get_IsEvent(ACLJCGMKGNP,0);
  if (lVar9 == 0) goto LAB_00c12d8c;
  UnityEngine_GameObject__SetActive(lVar9,uVar3 & 1,0);
  if (*(long *)((long)__this + 0x310) == 0) goto LAB_00c12d8c;
  UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x310),bVar11 != 0,0);
  lVar9 = *(long *)((long)__this + 0x350);
  uVar5 = Level__get_IsEvent(ACLJCGMKGNP,0);
  if ((uVar5 & 1) == 0) {
    cVar8 = '\0';
  }
  else {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    cVar8 = *(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2a);
  }
  if (lVar9 == 0) goto LAB_00c12d8c;
  UnityEngine_GameObject__SetActive(lVar9,cVar8 != '\0',0);
  lVar9 = *(long *)((long)__this + 0x330);
  uVar3 = Level__get_IsEvent(ACLJCGMKGNP,0);
  if (lVar9 == 0) goto LAB_00c12d8c;
  UnityEngine_GameObject__SetActive(lVar9,uVar3 & 1,0);
  GUIGarage__ADMNOIMMGGA(__this,bVar11 != 0);
  uVar5 = Level__get_IsEvent(ACLJCGMKGNP,0);
  if ((uVar5 & 1) == 0) {
    if (*(long *)((long)__this + 0x328) == 0) goto LAB_00c12d8c;
    lVar9 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x328),0);
joined_r0x00c12a74:
    if (lVar9 == 0) goto LAB_00c12d8c;
    uVar7 = 0;
  }
  else {
    if (*(void **)((long)ACLJCGMKGNP + 0x50) == (void *)0x0) goto LAB_00c12d8c;
    plVar10 = *(long **)((long)__this + 0x318);
    pvVar6 = EventContest__get_desc(*(void **)((long)ACLJCGMKGNP + 0x50));
    if (plVar10 == (long *)0x0) goto LAB_00c12d8c;
    (**(code **)(*plVar10 + 0x5a8))(plVar10,pvVar6,*(undefined8 *)(*plVar10 + 0x5b0));
    lVar9 = *(long *)((long)__this + 0x368);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (lVar9 == 0) goto LAB_00c12d8c;
    UnityEngine_GameObject__SetActive
              (lVar9,*(undefined1 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x11),0);
    if (*(long *)((long)ACLJCGMKGNP + 0x50) == 0) goto LAB_00c12d8c;
    iVar4 = EventContest__get_car_id(*(long *)((long)ACLJCGMKGNP + 0x50),0);
    if (iVar4 < 0) {
LAB_00c12a7c:
      plVar10 = *(long **)((long)__this + 800);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
         (uVar7 = Translate__JJJNIPAKLJF
                            (**(long **)(_Translate_TypeInfo + 0xb8),_Str_EVENT_ANY_CAR,0),
         plVar10 == (long *)0x0)) goto LAB_00c12d8c;
      (**(code **)(*plVar10 + 0x5a8))(plVar10,uVar7,*(undefined8 *)(*plVar10 + 0x5b0));
    }
    else {
      if (*(long *)((long)ACLJCGMKGNP + 0x50) == 0) goto LAB_00c12d8c;
      iVar4 = EventContest__get_car_id(*(long *)((long)ACLJCGMKGNP + 0x50),0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      lVar9 = **(long **)(_Main_TypeInfo + 0xb8);
      if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) goto LAB_00c12d8c;
      if (*(int *)(*(long *)(lVar9 + 0x28) + 0x18) <= iVar4) goto LAB_00c12a7c;
      plVar10 = *(long **)((long)__this + 800);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
        lVar9 = **(long **)(_Main_TypeInfo + 0xb8);
        if (lVar9 == 0) goto LAB_00c12d8c;
      }
      if (*(long *)((long)ACLJCGMKGNP + 0x50) == 0) goto LAB_00c12d8c;
      lVar9 = *(long *)(lVar9 + 0x28);
      uVar3 = EventContest__get_car_id(*(long *)((long)ACLJCGMKGNP + 0x50),0);
      if (lVar9 == 0) goto LAB_00c12d8c;
      if (*(uint *)(lVar9 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      lVar9 = *(long *)(lVar9 + (long)(int)uVar3 * 8 + 0x20);
      if ((lVar9 == 0) || (plVar10 == (long *)0x0)) goto LAB_00c12d8c;
      (**(code **)(*plVar10 + 0x5a8))
                (plVar10,*(undefined8 *)(lVar9 + 0x10),*(undefined8 *)(*plVar10 + 0x5b0));
    }
    if (*(long *)((long)ACLJCGMKGNP + 0x50) == 0) goto LAB_00c12d8c;
    plVar10 = *(long **)((long)__this + 0x338);
    iVar4 = *(int *)(*(long *)((long)ACLJCGMKGNP + 0x50) + 0x1c);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c12d8c;
    puVar1 = (undefined8 *)&Str_EVENT_TIME_END_IN;
    if (iVar4 != 1) {
      puVar1 = (undefined8 *)&Str_EVENT_TIME_START_IN;
    }
    uVar7 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),*puVar1,0);
    if (plVar10 == (long *)0x0) goto LAB_00c12d8c;
    (**(code **)(*plVar10 + 0x5a8))(plVar10,uVar7,*(undefined8 *)(*plVar10 + 0x5b0));
    if (*(long *)((long)__this + 0x338) == 0) goto LAB_00c12d8c;
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
              (*(long *)((long)__this + 0x338),&lStack_38,
               _Method_UnityEngine_Component_GetComponent_RectTransform___);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(lStack_38,0,0);
    if ((uVar5 & 1) != 0) {
      if ((*(long *)((long)ACLJCGMKGNP + 0x50) == 0) || (lStack_38 == 0)) goto LAB_00c12d8c;
      uVar12 = 0x43c30000;
      if (*(int *)(*(long *)((long)ACLJCGMKGNP + 0x50) + 0x1c) != 1) {
        uVar12 = 0x44688000;
      }
      UnityEngine_RectTransform__SetSizeWithCurrentAnchors(uVar12,lStack_38,0,0);
      uVar12 = UnityEngine_RectTransform__get_anchoredPosition(lStack_38,0);
      if (*(long *)((long)ACLJCGMKGNP + 0x50) == 0) goto LAB_00c12d8c;
      uVar13 = 0x42b20000;
      if (*(int *)(*(long *)((long)ACLJCGMKGNP + 0x50) + 0x1c) != 1) {
        uVar13 = 0x42960000;
      }
      UnityEngine_RectTransform__set_anchoredPosition(uVar12,uVar13,lStack_38,0);
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (pvVar6 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), pvVar6 == (void *)0x0))
    goto LAB_00c12d8c;
    pvVar6 = BridgePHP__GetErrors(pvVar6,true);
    uVar5 = System_String__op_Inequality(pvVar6,_Str_,0);
    if ((*(long *)((long)__this + 0x328) == 0) ||
       (lVar9 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x328),0), lVar9 == 0
       )) goto LAB_00c12d8c;
    if ((uVar5 & 1) != 0) {
      UnityEngine_GameObject__SetActive(lVar9,1,0);
      if (*(long *)((long)__this + 0x308) == 0) goto LAB_00c12d8c;
      UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x308),0,0);
      plVar10 = *(long **)((long)__this + 0x328);
      if (plVar10 == (long *)0x0) goto LAB_00c12d8c;
      (**(code **)(*plVar10 + 0x5a8))(plVar10,pvVar6,*(undefined8 *)(*plVar10 + 0x5b0));
      lVar9 = *(long *)((long)__this + 0x330);
      goto joined_r0x00c12a74;
    }
    UnityEngine_GameObject__SetActive(lVar9,0,0);
    lVar9 = *(long *)((long)__this + 0x330);
    if (lVar9 == 0) goto LAB_00c12d8c;
    uVar7 = 1;
  }
  UnityEngine_GameObject__SetActive(lVar9,uVar7,0);
  GUIGarage__KBINLNMDLEC(__this);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = Main__KCHOEBEIOCE(0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar9 = **(long **)(_Menu_TypeInfo + 0xb8);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x58) == 0)) {
LAB_00c12d8c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*(char *)(*(long *)(lVar9 + 0x58) + 0x30) != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar9 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (lVar9 == 0) goto LAB_00c12d8c;
      }
      if (*(long *)(lVar9 + 0x58) == 0) goto LAB_00c12d8c;
      GamePadController__PKDDGJPLNAP(*(long *)(lVar9 + 0x58),0);
    }
  }
  return;
}


// ==== private IEnumerator IHHAEHDPGIC() { }   @0xb10230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGarage__IHHAEHDPGIC(void *__this)

{
  void *pvVar1;
  
  if ((bRam0000000001916faa & 1) == 0) {
    func_0x00a67900(&GUIGarage_POKBOGKBJMK_TypeInfo);
    bRam0000000001916faa = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_GUIGarage_POKBOGKBJMK_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x20) = __this;
  return pvVar1;
}


// ==== public void ButtonShowStarHint(int type) { }   @0xb148ac

/* WARNING: Removing unreachable block (ram,0x00c46a08) */
/* WARNING: Removing unreachable block (ram,0x00c46a18) */
/* WARNING: Removing unreachable block (ram,0x00c475f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonShowStarHint(void *__this,int type)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  ulong uVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 in_d1;
  undefined8 in_d2;
  long lStack_68;
  
  if ((bRam0000000001916faf & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&string_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_ACH_BACK_FLIPS_DESC);
    func_0x00a67900(&Str_ACH_ZOMBIES_KILL_DESC);
    func_0x00a67900(&Str_ACH_FRONT_FLIPS_DESC);
    func_0x00a67900(&Str_HINT_BIRD_KILL);
    func_0x00a67900(&Str__x_);
    func_0x00a67900(&Str__);
    bRam0000000001916faf = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) != 0) {
    lVar9 = *(long *)((long)__this + 0x2c0);
    if (lVar9 == 0) goto LAB_00c14d2c;
    if (*(uint *)(lVar9 + 0x18) <= (uint)type) goto LAB_00c14d30;
    lVar15 = (long)type;
    lVar9 = *(long *)(lVar9 + lVar15 * 8 + 0x20);
    if (((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x10), lVar9 == 0)) ||
       (*(long *)((long)__this + 0x2c8) == 0)) goto LAB_00c14d2c;
    UnityEngine_UI_Image__set_sprite
              (*(long *)((long)__this + 0x2c8),*(undefined8 *)(lVar9 + 0xd8),0);
    if (*(long *)((long)__this + 0x2c8) == 0) goto LAB_00c14d2c;
    lVar9 = UnityEngine_UI_Graphic__get_rectTransform(*(long *)((long)__this + 0x2c8),0);
    lVar10 = *(long *)((long)__this + 0x2c0);
    if (lVar10 == 0) goto LAB_00c14d2c;
    if (*(uint *)(lVar10 + 0x18) <= (uint)type) goto LAB_00c14d30;
    lVar10 = *(long *)(lVar10 + lVar15 * 8 + 0x20);
    if (((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x10), lVar10 == 0)) ||
       ((lVar10 = UnityEngine_UI_Graphic__get_rectTransform(lVar10,0), lVar10 == 0 ||
        (UnityEngine_RectTransform__get_sizeDelta(lVar10,0), lVar9 == 0)))) goto LAB_00c14d2c;
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors(lVar9,0,0);
    if (*(long *)((long)__this + 0x2c8) == 0) goto LAB_00c14d2c;
    lVar9 = UnityEngine_UI_Graphic__get_rectTransform(*(long *)((long)__this + 0x2c8),0);
    lVar10 = *(long *)((long)__this + 0x2c0);
    if (lVar10 == 0) goto LAB_00c14d2c;
    if (*(uint *)(lVar10 + 0x18) <= (uint)type) goto LAB_00c14d30;
    lVar10 = *(long *)(lVar10 + lVar15 * 8 + 0x20);
    if (((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x10), lVar10 == 0)) ||
       ((lVar10 = UnityEngine_UI_Graphic__get_rectTransform(lVar10,0), lVar10 == 0 ||
        (UnityEngine_RectTransform__get_sizeDelta(lVar10,0), lVar9 == 0)))) goto LAB_00c14d2c;
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors(in_d1,lVar9,1,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) goto LAB_00c14d2c;
    if (*(long *)(*(long *)(lVar9 + 0x28) + 0x18) != 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar9 == 0) goto LAB_00c14d2c;
      }
      lVar9 = *(long *)(lVar9 + 0x28);
      if (lVar9 == 0) goto LAB_00c14d2c;
      if (*(uint *)(lVar9 + 0x18) <= (uint)type) goto LAB_00c14d30;
      lVar9 = *(long *)(lVar9 + lVar15 * 8 + 0x20);
      if (lVar9 == 0) goto LAB_00c14d2c;
      puVar11 = (undefined8 *)(&UNK_016e4f70 + (long)(int)*(uint *)(lVar9 + 0x10) * 8);
      if (3 < *(uint *)(lVar9 + 0x10)) {
        puVar11 = (undefined8 *)(_string_TypeInfo + 0xb8);
      }
      uVar13 = *(undefined8 *)*puVar11;
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
      lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (((lVar15 == 0) || (lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar10 == 0))
         || (lVar15 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar10,*(undefined4 *)(lVar15 + 0x10),0), lVar15 == 0
            )) goto LAB_00c14d2c;
      DJKGLJOCFCE__HPCKHLLBFPL(lVar15,*(undefined4 *)(lVar9 + 0x10),0);
      plVar14 = *(long **)((long)__this + 0x2d0);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c14d2c;
      lVar15 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),uVar13,0);
      uVar13 = System_Int32__ToString(lVar9 + 0x14,0);
      if (lVar15 == 0) goto LAB_00c14d2c;
      uVar13 = System_String__Replace(lVar15,_Str__x_,uVar13,0);
      uVar13 = System_String__Concat(uVar13,_Str__,0);
      if (plVar14 == (long *)0x0) goto LAB_00c14d2c;
      (**(code **)(*plVar14 + 0x5a8))(plVar14,uVar13,*(undefined8 *)(*plVar14 + 0x5b0));
    }
  }
  if (type == 1) {
    if ((*(long *)((long)__this + 0x2c8) == 0) ||
       (lVar9 = UnityEngine_UI_Graphic__get_rectTransform(*(long *)((long)__this + 0x2c8),0),
       lVar9 == 0)) goto LAB_00c14d2c;
    fVar16 = (float)UnityEngine_Transform__get_localScale(lVar9,0);
    lVar9 = *(long *)((long)__this + 0x2c0);
    if (lVar9 == 0) goto LAB_00c14d2c;
    if (*(uint *)(lVar9 + 0x18) < 2) {
LAB_00c14d30:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    if (((*(long *)(lVar9 + 0x28) == 0) ||
        (lVar9 = *(long *)(*(long *)(lVar9 + 0x28) + 0x10), lVar9 == 0)) ||
       (lVar9 = UnityEngine_UI_Graphic__get_rectTransform(lVar9,0), lVar9 == 0)) goto LAB_00c14d2c;
    fVar17 = (float)UnityEngine_Transform__get_localScale(lVar9,0);
    fVar1 = ABS(fVar16);
    if (fVar17 < 0.0) {
      fVar1 = -ABS(fVar16);
    }
    if ((*(long *)((long)__this + 0x2c8) == 0) ||
       (lVar9 = UnityEngine_UI_Graphic__get_rectTransform(*(long *)((long)__this + 0x2c8),0),
       lVar9 == 0)) goto LAB_00c14d2c;
    UnityEngine_Transform__set_localScale(fVar1,in_d1,in_d2,lVar9,0);
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
      (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
     (pvVar6 = *(void **)(lVar9 + 0x178), pvVar6 == (void *)0x0)) {
LAB_00c14d2c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
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
  lVar9 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar9 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar9 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar9 + 0x20) = _Str_Try_to_Show__;
  lVar15 = UnityEngine_Component__get_gameObject(pvVar6,0);
  if (lVar15 == 0) goto LAB_00c485b8;
  uVar13 = UnityEngine_Object__get_name(lVar15,0);
  if ((*(uint *)(lVar9 + 0x18) < 2) ||
     (*(undefined8 *)(lVar9 + 0x28) = uVar13, *(uint *)(lVar9 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar9 + 0x30) = _Str___current__;
  uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar7 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar9 + 0x18) < 4) ||
     (*(undefined8 *)(lVar9 + 0x38) = uVar13, *(uint *)(lVar9 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar9 + 0x40) = _Str___last__;
  uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar7 & 1) != 0) {
    lVar15 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar15 == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(lVar15,0);
  }
  uVar5 = *(uint *)(lVar9 + 0x18);
  if ((uVar5 < 6) || (*(undefined8 *)(lVar9 + 0x48) = uVar13, uVar5 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar9 + 0x50) = _Str____Child__;
  plVar14 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar13 = 0;
  if (plVar14 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
    uVar5 = *(uint *)(lVar9 + 0x18);
  }
  if (uVar5 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar9 + 0x58) = uVar13;
  uVar13 = System_String__Concat(lVar9,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar13,0,0);
  uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar13,pvVar6,0);
  if ((uVar7 & 1) != 0) {
    uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar13,0,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
  }
  uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar13,pvVar6,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  lVar9 = _GUIWindow_TypeInfo;
  if ((uVar7 & 1) != 0) {
    pvVar8 = *(void **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (pvVar8 == (void *)0x0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(pvVar8,false);
    lVar9 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar13 = **(undefined8 **)(lVar9 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Object__op_Inequality(uVar13,0,0);
  pvVar8 = (void *)GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(pvVar8,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(char *)((long)pvVar6 + 0x20) == '\0') {
      if (pvVar8 == (void *)0x0) goto LAB_00c485b8;
      uVar7 = UnityEngine_GameObject__get_activeSelf(pvVar8,0);
      if ((uVar7 & 1) == 0) goto LAB_00c46b74;
      uVar18 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar13 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar18;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar13 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if (((uVar7 & 1) != 0) && (*(char *)((long)pvVar6 + 0x21) != '\0')) {
        fVar16 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar16) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8),pvVar8);
          goto LAB_00c46b74;
        }
      }
      if (pvVar8 == (void *)0x0) goto LAB_00c485b8;
      uVar13 = 1;
    }
    UnityEngine_GameObject__SetActive(pvVar8,uVar13,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar13 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar13 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(char *)((long)pvVar6 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar9 == 0))
          goto LAB_00c485b8;
          uVar7 = AdvController__EDNAEPDDBPJ(lVar9,0);
          if ((uVar7 & 1) != 0) {
            iVar3 = UnityEngine_Screen__get_width(0);
            iVar4 = UnityEngine_Screen__get_height(0);
            fVar16 = (float)iVar3 / (float)iVar4;
            if (fVar16 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 == 0))
            goto LAB_00c485b8;
            uVar13 = *(undefined8 *)(lVar9 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Object__op_Equality(pvVar6,uVar13,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 == 0)
                 ) goto LAB_00c485b8;
              uVar13 = *(undefined8 *)(lVar9 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(pvVar6,uVar13,0);
              if ((uVar7 & 1) != 0) {
                if (1.61 <= fVar16) {
                  if ((fVar16 <= 1.61) || (1.8 <= fVar16)) {
                    if (fVar16 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar9 == 0)) goto LAB_00c485b8;
                    uVar13 = *(undefined8 *)(lVar9 + 0x70);
                    uVar18 = 0x3f51eb85;
                    uVar12 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar9 == 0)) goto LAB_00c485b8;
                    uVar13 = *(undefined8 *)(lVar9 + 0x70);
                    uVar18 = 0x3f5eb852;
                    uVar12 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar9 == 0)) goto LAB_00c485b8;
                  uVar13 = *(undefined8 *)(lVar9 + 0x70);
                  uVar18 = 0x3f733333;
                  uVar12 = 0x425c0000;
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
                   (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar9 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar16) {
                  if (*(long *)(lVar9 + 0x240) == 0) goto LAB_00c485b8;
                  uVar7 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar9 + 0x240),0);
                  if ((uVar7 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar9 == 0)) goto LAB_00c485b8;
                  uVar13 = *(undefined8 *)(lVar9 + 0x60);
                  uVar18 = 0x3f51eb85;
                  uVar12 = 0x41a00000;
                }
                else {
                  uVar13 = *(undefined8 *)(lVar9 + 0x60);
                  uVar18 = 0x3f5eb852;
                  uVar12 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar9 == 0)) goto LAB_00c485b8;
                uVar13 = *(undefined8 *)(lVar9 + 0x60);
                uVar12 = 0xc0a00000;
                uVar18 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar12,uVar18,pvVar6,uVar13);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (pvVar8 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38),
               pvVar8 == (void *)0x0)) goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(pvVar8);
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
    uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(char *)((long)pvVar6 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar9 == 0))
          goto LAB_00c485b8;
          uVar7 = AdvController__EDNAEPDDBPJ(lVar9,0);
          if ((uVar7 & 1) != 0) {
            iVar3 = UnityEngine_Screen__get_width(0);
            iVar4 = UnityEngine_Screen__get_height(0);
            fVar16 = (float)iVar3 / (float)iVar4;
            if (fVar16 <= 1.51) goto LAB_00c47308;
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
            goto LAB_00c485b8;
            uVar13 = *(undefined8 *)(lVar9 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Object__op_Equality(pvVar6,uVar13,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
              goto LAB_00c485b8;
              uVar13 = *(undefined8 *)(lVar9 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(pvVar6,uVar13,0);
              if ((uVar7 & 1) != 0) {
                if (1.61 <= fVar16) {
                  if (1.8 <= fVar16) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar9 + 0xb0);
                }
                else {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar9 + 0xb0);
                }
                goto LAB_00c47304;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
              goto LAB_00c485b8;
              uVar13 = *(undefined8 *)(lVar9 + 0xe0);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(pvVar6,uVar13,0);
              if ((uVar7 & 1) != 0) {
                if (1.61 <= fVar16) {
                  if (1.8 <= fVar16) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar9 + 0xe8);
                }
                else {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar9 + 0xe8);
                }
                goto LAB_00c47304;
              }
              lVar9 = UnityEngine_Component__get_gameObject(pvVar6,0);
              if (lVar9 == 0) goto LAB_00c485b8;
              UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                        (lVar9,&lStack_68,_Method_UnityEngine_GameObject_GetComponent_DonateItem___)
              ;
              lVar9 = lStack_68;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Inequality(lVar9,0,0);
              if ((uVar7 & 1) != 0) {
                if (lVar9 == 0) goto LAB_00c485b8;
                if (*(int *)(lVar9 + 0x2c) == 3) {
                  lVar9 = UnityEngine_Component__get_gameObject(pvVar6,0);
                  if (lVar9 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar9,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar7 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                  if ((uVar7 & 1) != 0) goto LAB_00c47304;
                }
              }
            }
            else {
              if (fVar16 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar9 + 0x188);
              }
              else {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar9 + 0x188);
              }
LAB_00c47304:
              GUIWindow__EPGDFDEPGCB(pvVar6,lStack_68);
            }
LAB_00c47308:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (pvVar8 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38),
               pvVar8 == (void *)0x0)) goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(pvVar8);
            goto LAB_00c47338;
          }
        }
        GUIWindow__IPELKJAHFGL(pvVar6);
      }
    }
  }
LAB_00c47338:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar9 = *(long *)(_Menu_TypeInfo + 0xb8);
  if (*(char *)(lVar9 + 0x1a) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar9 = *(long *)(_Menu_TypeInfo + 0xb8);
    }
    if (*(char *)(lVar9 + 0xc) != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar13 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar9 == 0))
            goto LAB_00c485b8;
            if (*(char *)(lVar9 + 0x6c) != '\0') {
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
              if (pvVar8 == (void *)0x0) goto LAB_00c485b8;
              bVar2 = DAFNMLEKHAD__MHBEPDHNNFH(pvVar8);
              if (!bVar2) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar9 == 0))
                goto LAB_00c485b8;
                uVar13 = *(undefined8 *)(lVar9 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Equality(uVar13,0,0);
                if ((uVar7 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                  goto LAB_00c485b8;
                  uVar13 = *(undefined8 *)(lVar9 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar7 = UnityEngine_Object__op_Equality(pvVar6,uVar13,0);
                  if ((uVar7 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar9 == 0))
                    goto LAB_00c485b8;
                    uVar13 = *(undefined8 *)(lVar9 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar13 = UnityEngine_Object__Instantiate_object_
                                       (uVar13,_Method_UnityEngine_Object_Instantiate_GameObject___)
                    ;
                    *(undefined8 *)(lVar9 + 0x90) = uVar13;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar9 = UnityEngine_Component__get_gameObject(pvVar6,0);
  if (lVar9 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar9,1,0);
  puVar11 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar11[2] = *puVar11;
  puVar11[1] = pvVar6;
  if (*(char *)((long)pvVar6 + 0x23) != '\0') {
    uVar13 = GUIWindow__FAAELIPKLCB(pvVar6);
    UnityEngine_MonoBehaviour__StartCoroutine(pvVar6,uVar13,0);
  }
  lVar9 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar9 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar9 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar9 + 0x20) = _Str_Window__Show__;
  uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar7 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar9 + 0x18) < 2) ||
     (*(undefined8 *)(lVar9 + 0x28) = uVar13, *(uint *)(lVar9 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar9 + 0x30) = _Str___last__;
  uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar7 & 1) != 0) {
    lVar15 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar15 == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(lVar15,0);
  }
  uVar5 = *(uint *)(lVar9 + 0x18);
  if ((uVar5 < 4) || (*(undefined8 *)(lVar9 + 0x38) = uVar13, uVar5 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar9 + 0x40) = _Str____Child__;
  plVar14 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar13 = 0;
  if (plVar14 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
    uVar5 = *(uint *)(lVar9 + 0x18);
  }
  if (uVar5 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar9 + 0x48) = uVar13;
  uVar13 = System_String__Concat(lVar9,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar13,0,0);
  uVar7 = Main__KCHOEBEIOCE(0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (pvVar8 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58), pvVar8 == (void *)0x0))
    goto LAB_00c485b8;
    GamePadController__KCAHLEAKNNK(pvVar8);
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
    uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar7 & 1) != 0) {
      uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 == 0))
      goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(lVar9 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar13,uVar12,0);
      if ((uVar7 & 1) == 0) {
        uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 == 0))
        goto LAB_00c485b8;
        uVar12 = *(undefined8 *)(lVar9 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Equality(uVar13,uVar12,0);
        if ((uVar7 & 1) == 0) {
          uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 == 0))
          goto LAB_00c485b8;
          uVar12 = *(undefined8 *)(lVar9 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Equality(uVar13,uVar12,0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 == 0))
            goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(lVar9,0);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (pvVar6 = *(void **)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
             pvVar6 == (void *)0x0)) goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(pvVar6);
        }
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 == 0))
        goto LAB_00c485b8;
        lVar9 = *(long *)(lVar9 + 0x178);
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
        lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((lVar15 == 0) || (uVar5 = DAFNMLEKHAD__EFDKHACIIEC(lVar15,0), lVar9 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar9,uVar5 & 1,0);
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
    uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar7 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar7 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
    goto LAB_00c485b8;
    uVar7 = GUIGarage__ABAHNKCPCFA(lVar9,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
        (lVar9 = *(long *)(lVar9 + 0x78), lVar9 == 0)) ||
       (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0)) goto LAB_00c485b8;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
         ((lVar9 = *(long *)(lVar9 + 0x70), lVar9 == 0 ||
          (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0)))) goto LAB_00c485b8;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
      if ((uVar7 & 1) != 0) goto LAB_00c47948;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
         (lVar9 = *(long *)(lVar9 + 0x1d0), lVar9 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar9,0,0);
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
         (lVar9 = *(long *)(lVar9 + 0x1b8), lVar9 == 0)) goto LAB_00c485b8;
      uVar18 = 0;
    }
    else {
LAB_00c47948:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
         (lVar9 = *(long *)(lVar9 + 0x1d0), lVar9 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar9,1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(lVar9,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
      goto LAB_00c485b8;
      lVar9 = *(long *)(lVar9 + 0x3e0);
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
      lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((lVar15 == 0) || (uVar5 = DAFNMLEKHAD__EFDKHACIIEC(lVar15,0), lVar9 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar9,uVar5 & 1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0 ||
          (lVar9 = *(long *)(lVar9 + 0x1b8), lVar9 == 0)))) goto LAB_00c485b8;
      uVar18 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar18,lVar9,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
       ((lVar9 = *(long *)(lVar9 + 0x60), lVar9 == 0 ||
        (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0)))) goto LAB_00c485b8;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
    if ((uVar7 & 1) == 0) {
      bVar2 = false;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Menu_TypeInfo);
      }
      bVar2 = *(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xd) != '\0';
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Menu_TypeInfo);
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
       (lVar9 = *(long *)(lVar9 + 0x68), lVar9 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar9,*(undefined1 *)((long)pvVar6 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
    goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(lVar9 + 0x78);
    uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar12,uVar13,0);
    if ((uVar7 & 1) != 0) {
      uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
      goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(lVar9 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar13,uVar12,0);
      if ((uVar7 & 1) != 0) {
        uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar7 & 1) != 0) {
          uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
          goto LAB_00c485b8;
          uVar12 = *(undefined8 *)(lVar9 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Equality(uVar13,uVar12,0);
          if ((uVar7 & 1) != 0) {
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
        lVar9 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x20), lVar9 == 0)) ||
           (lVar9 = *(long *)(lVar9 + 0x4e0), lVar9 == 0)) goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive
                  (lVar9,*(undefined1 *)((long)*(long **)(_Menu_TypeInfo + 0xb8) + 0xe),0);
        uVar18 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar18;
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
      }
    }
    uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
    goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(lVar9 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar13,uVar12,0);
    if ((uVar7 & 1) == 0) {
      uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
      goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(lVar9 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar13,uVar12,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(lVar9,0);
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
      lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar9 == 0) goto LAB_00c485b8;
      uVar7 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar9,0);
      if ((uVar7 & 1) != 0) {
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
          uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar9 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar9 == 0) goto LAB_00c485b8;
            uVar7 = UnityEngine_AudioSource__get_isPlaying(lVar9,0);
            if ((uVar7 & 1) == 0) {
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
      lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar9 == 0) goto LAB_00c485b8;
      lVar9 = DAFNMLEKHAD__DKJLCJPBPPN(lVar9,0xffffffff,1,0);
      if (lVar9 == 0) {
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
        lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar9 == 0) goto LAB_00c485b8;
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = *(undefined4 *)(lVar9 + 0x104);
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
         (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(lVar9,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar9,0);
    }
    uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
    goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(lVar9 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar13,uVar12,0);
    if ((uVar7 & 1) != 0) {
      uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar13,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar6 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar6 == (void *)0x0)
             ) goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(pvVar6,false);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar9 = **(long **)(_Menu_TypeInfo + 0xb8);
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x20), lVar9 == 0)) goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(lVar9,0);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(lVar9,0);
      }
    }
    if (bVar2) {
      return;
    }
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) != (void *)0x0) {
    Menu__GDEFDCOIDNM((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
    return;
  }
LAB_00c485b8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonCheatShowOffer(int type) { }   @0xb156f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonCheatShowOffer(void *__this,int type)

{
  undefined8 uVar1;
  int iStack_34;
  
  iStack_34 = type;
  if ((bRam0000000001916fb3 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_ButtonCheatShowOffer__);
    bRam0000000001916fb3 = 1;
  }
  GUIGarage__ButtonShowOffers(__this,type);
  uVar1 = System_Int32__ToString(&iStack_34,0);
  uVar1 = System_String__Concat(_Str_ButtonCheatShowOffer__,uVar1,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0,0);
  return;
}


// ==== public void ButtonSettingsAccelerometer() { }   @0xb15854

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonSettingsAccelerometer(void *__this)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  float in_s2;
  float fVar9;
  float in_s3;
  float fVar10;
  
  if ((bRam0000000001916fb6 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916fb6 = 1;
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
    pvVar6 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
  }
  else {
    pvVar6 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if ((lVar3 != 0) && (bVar1 = DAFNMLEKHAD__DPJPKMHLGMO(lVar3,0), pvVar6 != (void *)0x0)) {
    DAFNMLEKHAD__KHIFJCACGNC(pvVar6,(bool)(~bVar1 & 1));
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
       (pvVar6 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40), pvVar6 != (void *)0x0)) {
      AnalyticsController__AEOHFJNPEJA(pvVar6);
      if ((bRam0000000001916f90 & 1) == 0) {
        func_0x00a67900(&Main_TypeInfo);
        bRam0000000001916f90 = 1;
      }
      plVar5 = *(long **)((long)__this + 0x760);
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
      if ((lVar3 == 0) || (uVar2 = DAFNMLEKHAD__DPJPKMHLGMO(lVar3,0), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      lVar3 = 0x770;
      if ((uVar2 & 1) == 0) {
        lVar3 = 0x768;
      }
      lVar3 = *(long *)((long)__this + lVar3);
      if ((bRam000000000191db6f & 1) == 0) {
        func_0x00a67900(&UnityEngine_Object_TypeInfo,lVar3,0);
        bRam000000000191db6f = 1;
      }
      lVar7 = plVar5[0x1b];
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(lVar7,0,0);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = UnityEngine_Object__op_Inequality(lVar3,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (lVar3 != 0) {
          UnityEngine_Sprite__get_rect(lVar3,0);
          if (cRam0000000001916788 == '\0') {
            func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
            cRam0000000001916788 = '\x01';
          }
          in_s2 = in_s2 - **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
          in_s3 = in_s3 - (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
          *(bool *)(plVar5 + 7) = in_s2 * in_s2 + in_s3 * in_s3 < 9.9999994e-11;
          uVar4 = UnityEngine_Sprite__get_texture(lVar3,0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar8 = 0;
LAB_01550934:
          bVar1 = UnityEngine_Object__op_Equality(uVar4,uVar8,0);
          *(byte *)((long)plVar5 + 0x39) = bVar1 & 1;
          plVar5[0x1b] = lVar3;
          UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(plVar5);
          (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
          UnityEngine_UI_Image__TrackSprite(plVar5);
          return;
        }
      }
      else {
        lVar7 = plVar5[0x1b];
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = UnityEngine_Object__op_Inequality(lVar7,lVar3,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (plVar5[0x1b] != 0) {
          UnityEngine_Sprite__get_rect(plVar5[0x1b],0);
          fVar9 = in_s2;
          fVar10 = in_s3;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
          if ((uVar2 & 1) == 0) {
            if (cRam0000000001916788 == '\0') {
              func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
              cRam0000000001916788 = '\x01';
            }
            fVar9 = **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
            fVar10 = (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
          }
          else {
            if (lVar3 == 0) goto LAB_01550984;
            UnityEngine_Sprite__get_rect(lVar3,0);
          }
          *(bool *)(plVar5 + 7) = in_s2 == fVar9 && in_s3 == fVar10;
          if (plVar5[0x1b] != 0) {
            uVar4 = UnityEngine_Sprite__get_texture(plVar5[0x1b],0);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
            uVar8 = 0;
            if ((uVar2 & 1) != 0) {
              if (lVar3 == 0) goto LAB_01550984;
              uVar8 = UnityEngine_Sprite__get_texture(lVar3,0);
            }
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            goto LAB_01550934;
          }
        }
      }
LAB_01550984:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void OFMPCPHEGKB(string ADNJPEELPAD, bool KDKDKFMKIBN) { }   @0xb16470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__OFMPCPHEGKB(void *__this,void *ADNJPEELPAD,bool KDKDKFMKIBN)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uStack_3c;
  long *plStack_38;
  
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&float_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str____color___);
    func_0x00a67900(&Str__FF4E4A);
    func_0x00a67900(&Str__0_f2_);
    func_0x00a67900(&Str___);
    func_0x00a67900(&Str__78e938);
    func_0x00a67900(&Str_);
    func_0x00a67900(&Str__color_);
    bRam0000000001916fbb = 1;
  }
  plVar3 = *(long **)((long)__this + 0x1e8);
  if (plVar3 != (long *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0));
    if (lVar4 != 0) {
      if (10000 < *(int *)(lVar4 + 0x10)) {
        if (*(long *)((long)__this + 0x1e8) == 0) goto LAB_00c16768;
        uVar5 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x1e8),0);
        if ((*(long *)((long)__this + 0x1e8) == 0) ||
           (lVar4 = UnityEngine_Component__get_transform(*(long *)((long)__this + 0x1e8),0),
           lVar4 == 0)) goto LAB_00c16768;
        uVar6 = UnityEngine_Transform__get_parent(lVar4,0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        lVar4 = UnityEngine_Object__Instantiate_object_
                          (uVar5,uVar6,_Method_UnityEngine_Object_Instantiate_GameObject___);
        if (lVar4 == 0) goto LAB_00c16768;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (lVar4,&plStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
        *(long **)((long)__this + 0x1e8) = plStack_38;
        if (plStack_38 == (long *)0x0) goto LAB_00c16768;
        (**(code **)(*plStack_38 + 0x5a8))(plStack_38,_Str_,*(undefined8 *)(*plStack_38 + 0x5b0));
      }
      plVar3 = *(long **)((long)__this + 0x1e8);
      lVar4 = func_0x00a679a0(_string___TypeInfo,8);
      if (plVar3 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0));
        if (lVar4 != 0) {
          uVar2 = *(uint *)(lVar4 + 0x18);
          if (((uVar2 != 0) && (*(undefined8 *)(lVar4 + 0x20) = uVar5, uVar2 != 1)) &&
             (*(undefined8 *)(lVar4 + 0x28) = _Str__color_, 2 < uVar2)) {
            puVar1 = (undefined8 *)&Str__FF4E4A;
            if (!KDKDKFMKIBN) {
              puVar1 = (undefined8 *)&Str__78e938;
            }
            *(undefined8 *)(lVar4 + 0x30) = *puVar1;
            if (uVar2 != 3) {
              *(undefined8 *)(lVar4 + 0x38) = _Str___;
              uStack_3c = UnityEngine_Time__get_time(0);
              uVar5 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
              uVar5 = System_String__Format(_Str__0_f2_,uVar5,0);
              uVar2 = *(uint *)(lVar4 + 0x18);
              if (((4 < uVar2) && (*(undefined8 *)(lVar4 + 0x40) = uVar5, uVar2 != 5)) &&
                 (*(undefined8 *)(lVar4 + 0x48) = _Str____color___, 6 < uVar2)) {
                *(void **)(lVar4 + 0x50) = ADNJPEELPAD;
                uVar5 = System_Environment__get_NewLine(0);
                if (7 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x58) = uVar5;
                  uVar5 = System_String__Concat(lVar4,0);
                  (**(code **)(*plVar3 + 0x5a8))(plVar3,uVar5,*(undefined8 *)(*plVar3 + 0x5b0));
                  return;
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
      }
    }
  }
LAB_00c16768:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void GMHOEBNFADN(int LGFLDFKKJMG, int OCLFIENGKFJ, bool AMIPFFMEHBP) { }   @0xb16964

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__GMHOEBNFADN(void *__this,int LGFLDFKKJMG,int OCLFIENGKFJ,bool AMIPFFMEHBP)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  
  if ((bRam0000000001916fbf & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916fbf = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
    return;
  }
  iVar1 = OCLFIENGKFJ - LGFLDFKKJMG;
  if (iVar1 == 0 || OCLFIENGKFJ < LGFLDFKKJMG) {
    if (AMIPFFMEHBP) {
      if (iVar1 == 0) goto GUIGarage__FJCMAMFOKNL;
      lVar3 = *(long *)((long)__this + 0x3b8);
    }
    else {
      lVar3 = *(long *)((long)__this + 0x3c8);
    }
    if (lVar3 == 0) goto LAB_00c16a48;
    GUICoins__ICMOCEHIFOI(lVar3,iVar1,0);
  }
  else {
    if (AMIPFFMEHBP) {
      pvVar4 = *(void **)((long)__this + 0x3b0);
    }
    else {
      pvVar4 = *(void **)((long)__this + 0x3c0);
    }
    if (pvVar4 == (void *)0x0) {
LAB_00c16a48:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    GUICoins__ICMOCEHIFOI(pvVar4);
  }
GUIGarage__FJCMAMFOKNL:
  if ((bRam0000000001916fab & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916fab = 1;
  }
  if (*(long *)((long)__this + 0x3b0) != 0) {
    plVar5 = *(long **)(*(long *)((long)__this + 0x3b0) + 0x28);
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
      DAFNMLEKHAD__LOCFCFJIAIH(pvVar4);
      uVar2 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar2,*(undefined8 *)(*plVar5 + 0x5b0));
        if (*(long *)((long)__this + 0x3c0) != 0) {
          plVar5 = *(long **)(*(long *)((long)__this + 0x3c0) + 0x28);
          if (cRam0000000001916e67 == '\0') {
            func_0x00a67900(&Main_TypeInfo);
            cRam0000000001916e67 = '\x01';
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if (lVar3 != 0) {
            DAFNMLEKHAD__HPDEBBJNCIK(lVar3,0);
            uVar2 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar2,*(undefined8 *)(*plVar5 + 0x5b0));
              GUIGarage__NFJNJCLENFD(__this);
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


// ==== public void GFNKMDJEDBD() { }   @0xb067cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__GFNKMDJEDBD(void *__this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte bVar12;
  uint uVar14;
  bool bVar13;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  void *__this_00;
  undefined8 uVar19;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  ulong extraout_x1_03;
  ulong uVar20;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  ulong uVar21;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  ulong extraout_x1_09;
  long lVar22;
  undefined8 *puVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;
  undefined8 uVar27;
  long *plVar28;
  double extraout_d0;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  long lStack_70;
  long lStack_68;
  
  if ((bRam0000000001916fc3 & 1) == 0) {
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_FREE_GOLD);
    func_0x00a67900(&Str_SILVER);
    func_0x00a67900(&Str_item_gold_3);
    func_0x00a67900(&Str___3);
    func_0x00a67900(&Str_item_silver_1);
    func_0x00a67900(&Str___1);
    func_0x00a67900(&Str_GOLD);
    func_0x00a67900(&Str_item_fuel_3);
    func_0x00a67900(&Str_item_gold_1);
    func_0x00a67900(&Str_item_silver_2);
    func_0x00a67900(&Str_item_gold_0);
    func_0x00a67900(&Str___5);
    func_0x00a67900(&Str_item_silver_4);
    func_0x00a67900(&Str_item_silver_3);
    func_0x00a67900(&Str_item_gold_2);
    func_0x00a67900(&Str_item_fuel_4);
    func_0x00a67900(&Str___4);
    func_0x00a67900(&Str_item_fuel_2);
    func_0x00a67900(&Str__x_);
    func_0x00a67900(&Str_);
    func_0x00a67900(&Str_item_gold_4);
    func_0x00a67900(&Str_item_gold_5);
    func_0x00a67900(&Str_1);
    func_0x00a67900(&Str_FUEL_CANISTER_DESC);
    func_0x00a67900(&Str___2);
    bRam0000000001916fc3 = 1;
  }
  lVar15 = _Str_;
  lStack_70 = _Str_;
  iVar1 = *(int *)((long)__this + 0x6d0);
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
  lVar22 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar22 == 0) goto LAB_00c071ec;
  iVar2 = *(int *)(lVar22 + 0x94);
  lStack_68 = lStack_70;
  if (iVar1 != iVar2) {
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c071ec;
    lStack_70 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_SILVER,0);
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c071ec;
    lStack_68 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_GOLD,0);
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c071ec;
    lVar15 = Translate__JJJNIPAKLJF
                       (**(long **)(_Translate_TypeInfo + 0xb8),_Str_FUEL_CANISTER_DESC,0);
  }
  lVar22 = *(long *)((long)__this + 0x650);
  if (lVar22 != 0) {
    uVar14 = *(uint *)(lVar22 + 0x18);
    if (0 < (int)uVar14) {
      uVar25 = 0;
      do {
        if (uVar14 <= uVar25) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar26 = *(long *)(lVar22 + (long)(int)uVar25 * 8 + 0x20);
        if (lVar26 == 0) goto LAB_00c071ec;
        uVar27 = *(undefined8 *)(lVar26 + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar16 = UnityEngine_Object__op_Inequality(uVar27,0,0);
        if (((uVar16 & 1) != 0) && (*(char *)((long)__this + 0x6d4) == '\0')) {
          plVar28 = *(long **)(lVar26 + 0x38);
          uVar27 = System_Int32__ToString(lVar26 + 0x28,0);
          if (plVar28 == (long *)0x0) goto LAB_00c071ec;
          (**(code **)(*plVar28 + 0x5a8))(plVar28,uVar27,*(undefined8 *)(*plVar28 + 0x5b0));
        }
        lVar17 = UnityEngine_Component__get_gameObject(lVar26,0);
        if (lVar17 == 0) goto LAB_00c071ec;
        uVar27 = UnityEngine_Object__get_name(lVar17,0);
        uVar16 = System_String__op_Equality(uVar27,_Str_item_silver_4,0);
        if ((uVar16 & 1) == 0) {
          lVar17 = UnityEngine_Component__get_gameObject(lVar26,0);
          if (lVar17 == 0) goto LAB_00c071ec;
          uVar27 = UnityEngine_Object__get_name(lVar17,0);
          uVar16 = System_String__op_Equality(uVar27,_Str_item_fuel_4,0);
          if ((uVar16 & 1) != 0) {
            if (*(long *)((long)__this + 0x6a0) != 0) {
              cVar3 = *(char *)(*(long *)(_FuelManager_TypeInfo + 0xb8) + 1);
              lVar17 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x6a0),0);
              if (lVar17 != 0) {
                UnityEngine_GameObject__SetActive(lVar17,cVar3 == '\0',0);
                lVar17 = *(long *)((long)__this + 0x6a8);
                if (lVar17 != 0) {
                  bVar13 = cVar3 != '\0';
                  goto LAB_00c06cd4;
                }
              }
            }
            goto LAB_00c071ec;
          }
        }
        else {
          uVar27 = *(undefined8 *)(lVar26 + 0x50);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar16 = UnityEngine_Object__op_Inequality(uVar27,0,0);
          if ((uVar16 & 1) != 0) {
            lVar17 = *(long *)(lVar26 + 0x50);
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
            lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
            if ((lVar18 == 0) || (uVar14 = DAFNMLEKHAD__KHJGIDLMPLJ(lVar18,0), lVar17 == 0))
            goto LAB_00c071ec;
            UnityEngine_GameObject__SetActive(lVar17,~uVar14 & 1,0);
          }
          uVar27 = *(undefined8 *)(lVar26 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar16 = UnityEngine_Object__op_Inequality(uVar27,0,0);
          if ((uVar16 & 1) != 0) {
            lVar17 = *(long *)(lVar26 + 0x58);
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
            lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
            if ((lVar18 == 0) || (bVar12 = DAFNMLEKHAD__KHJGIDLMPLJ(lVar18,0), lVar17 == 0))
            goto LAB_00c071ec;
            bVar13 = (bool)(bVar12 & 1);
LAB_00c06cd4:
            UnityEngine_GameObject__SetActive(lVar17,bVar13,0);
          }
        }
        if (iVar1 == iVar2) goto LAB_00c07090;
        lVar17 = UnityEngine_Component__get_gameObject(lVar26,0);
        if (lVar17 == 0) goto LAB_00c071ec;
        uVar27 = UnityEngine_Object__get_name(lVar17,0);
        uVar14 = _PrivateImplementationDetails___ComputeStringHash(uVar27,0);
        if (uVar14 < 0x6cbc5537) {
          if (uVar14 < 0x27d22aea) {
            if (uVar14 == 0x26d22956) {
              uVar16 = System_String__op_Equality(uVar27,_Str_item_fuel_2,0);
              if ((uVar16 & 1) != 0) {
                if (lVar15 != 0) {
                  plVar28 = *(long **)(lVar26 + 0x48);
                  uVar27 = _Str_1;
                  goto LAB_00c06f48;
                }
                goto LAB_00c071ec;
              }
            }
            else if ((uVar14 == 0x27d22ae9) &&
                    (uVar16 = System_String__op_Equality(uVar27,_Str_item_fuel_3,0),
                    (uVar16 & 1) != 0)) {
              plVar28 = *(long **)(lVar26 + 0x48);
              uVar27 = System_Int32__ToString(*(long *)(_FuelManager_TypeInfo + 0xb8) + 4,0);
              if (lVar15 == 0) goto LAB_00c071ec;
LAB_00c06f48:
              uVar27 = System_String__Replace(lVar15,_Str__x_,uVar27,0);
              if (plVar28 == (long *)0x0) goto LAB_00c071ec;
LAB_00c07078:
              (**(code **)(*plVar28 + 0x5a8))(plVar28,uVar27,*(undefined8 *)(*plVar28 + 0x5b0));
            }
          }
          else if (uVar14 == 0x6abc5210) {
            uVar16 = System_String__op_Equality(uVar27,_Str_item_gold_2,0);
            if ((uVar16 & 1) != 0) {
              plVar28 = *(long **)(lVar26 + 0x48);
              puVar23 = (undefined8 *)&Str___2;
              goto LAB_00c07004;
            }
          }
          else if (uVar14 == 0x6bbc53a3) {
            uVar16 = System_String__op_Equality(uVar27,_Str_item_gold_3,0);
            if ((uVar16 & 1) != 0) {
              plVar28 = *(long **)(lVar26 + 0x48);
              puVar23 = (undefined8 *)&Str___3;
              goto LAB_00c07004;
            }
          }
          else if ((uVar14 == 0x6cbc5536) &&
                  (uVar16 = System_String__op_Equality(uVar27,_Str_item_gold_0,0), (uVar16 & 1) != 0
                  )) {
            plVar28 = *(long **)(lVar26 + 0x48);
            if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
              uVar27 = Translate__JJJNIPAKLJF
                                 (**(long **)(_Translate_TypeInfo + 0xb8),_Str_FREE_GOLD,0);
joined_r0x00c07074:
              if (plVar28 != (long *)0x0) goto LAB_00c07078;
            }
            goto LAB_00c071ec;
          }
        }
        else if (uVar14 < 0x71bc5d16) {
          if (uVar14 == 0x6dbc56c9) {
            uVar16 = System_String__op_Equality(uVar27,_Str_item_gold_1,0);
            if ((uVar16 & 1) != 0) {
              plVar28 = *(long **)(lVar26 + 0x48);
              puVar23 = (undefined8 *)&Str___1;
              goto LAB_00c07004;
            }
          }
          else if (uVar14 == 0x70bc5b82) {
            uVar16 = System_String__op_Equality(uVar27,_Str_item_gold_4,0);
            if ((uVar16 & 1) != 0) {
              plVar28 = *(long **)(lVar26 + 0x48);
              puVar23 = (undefined8 *)&Str___4;
              goto LAB_00c07004;
            }
          }
          else if ((uVar14 == 0x71bc5d15) &&
                  (uVar16 = System_String__op_Equality(uVar27,_Str_item_gold_5,0), (uVar16 & 1) != 0
                  )) {
            plVar28 = *(long **)(lVar26 + 0x48);
            puVar23 = (undefined8 *)&Str___5;
LAB_00c07004:
            uVar27 = *puVar23;
            lVar17 = lStack_68;
LAB_00c0706c:
            uVar27 = System_String__Concat(lVar17,uVar27,0);
            goto joined_r0x00c07074;
          }
        }
        else if (uVar14 == 0xb5f94774) {
          uVar16 = System_String__op_Equality(uVar27,_Str_item_silver_3,0);
          if ((uVar16 & 1) != 0) {
            plVar28 = *(long **)(lVar26 + 0x48);
            puVar23 = (undefined8 *)&Str___3;
            goto LAB_00c07064;
          }
        }
        else if (uVar14 == 0xb6f94907) {
          uVar16 = System_String__op_Equality(uVar27,_Str_item_silver_2,0);
          if ((uVar16 & 1) != 0) {
            plVar28 = *(long **)(lVar26 + 0x48);
            puVar23 = (undefined8 *)&Str___2;
            goto LAB_00c07064;
          }
        }
        else if ((uVar14 == 0xb7f94a9a) &&
                (uVar16 = System_String__op_Equality(uVar27,_Str_item_silver_1,0), (uVar16 & 1) != 0
                )) {
          plVar28 = *(long **)(lVar26 + 0x48);
          puVar23 = (undefined8 *)&Str___1;
LAB_00c07064:
          uVar27 = *puVar23;
          lVar17 = lStack_70;
          goto LAB_00c0706c;
        }
LAB_00c07090:
        uVar27 = *(undefined8 *)(lVar26 + 0x60);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar16 = UnityEngine_Object__op_Inequality(uVar27,0,0);
        if ((uVar16 & 1) != 0) {
          lVar26 = *(long *)(lVar26 + 0x60);
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
          __this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if ((__this_00 == (void *)0x0) ||
             (bVar13 = DAFNMLEKHAD__MHBEPDHNNFH(__this_00), lVar26 == 0)) goto LAB_00c071ec;
          UnityEngine_GameObject__SetActive(lVar26,~bVar13 & 1,0);
        }
        uVar14 = *(uint *)(lVar22 + 0x18);
        uVar25 = uVar25 + 1;
      } while ((int)uVar25 < (int)uVar14);
    }
    if (iVar1 != iVar2) {
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
      lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar15 == 0) goto LAB_00c071ec;
      *(undefined4 *)((long)__this + 0x6d0) = *(undefined4 *)(lVar15 + 0x94);
    }
    if (*(char *)((long)__this + 0x6d4) == '\0') {
      *(undefined1 *)((long)__this + 0x6d4) = 1;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar15 = **(long **)(_Menu_TypeInfo + 0xb8);
    if (lVar15 != 0) {
      uVar27 = 0;
      if ((bRam00000000019170dc & 1) == 0) {
        func_0x00a67900(&System_DateTime_TypeInfo,0);
        func_0x00a67900(&Main_TypeInfo);
        func_0x00a67900(&System_TimeSpan_TypeInfo);
        bRam00000000019170dc = 1;
        uVar27 = extraout_x1;
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        uVar27 = extraout_x1_00;
      }
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo,uVar27);
        cRam0000000001916e67 = '\x01';
        uVar27 = extraout_x1_01;
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        uVar27 = extraout_x1_02;
      }
      auVar29._8_8_ = uVar27;
      auVar29._0_8_ = _Main_TypeInfo;
      lVar22 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar22 != 0) {
        uVar27 = *(undefined8 *)(lVar22 + 0xe0);
        if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar19 = System_DateTime__get_Now(0);
        System_DateTime__op_Subtraction(uVar27,uVar19,0);
        if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_System_TimeSpan_TypeInfo);
        }
        uVar16 = System_TimeSpan__get_TotalMinutes(&stack0xffffffffffffffa8,0);
        if (0.0 <= extraout_d0) {
          uVar24 = 0;
        }
        else {
          auVar30._8_8_ = 0;
          auVar30._0_8_ = extraout_x1_03;
          auVar29 = auVar30 << 0x40;
          if (*(void **)(lVar15 + 0x38) == (void *)0x0) goto LAB_00c3443c;
          bVar13 = AdvController__HNDMJBICLJF(*(void **)(lVar15 + 0x38),1);
          uVar16 = (ulong)bVar13;
          uVar24 = uVar16;
        }
        uVar20 = CONCAT71(0,0.0 <= extraout_d0);
        auVar29[8] = 0.0 <= extraout_d0;
        auVar29._0_8_ = uVar16;
        auVar29._9_7_ = 0;
        if (*(long *)(lVar15 + 0x20) != 0) {
          lVar22 = *(long *)(*(long *)(lVar15 + 0x20) + 0x690);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar20;
          auVar29 = auVar11 << 0x40;
          if (lVar22 != 0) {
            auVar29 = UnityEngine_GameObject__SetActive(lVar22,uVar20,0);
            if (*(long *)(lVar15 + 0x20) != 0) {
              lVar22 = *(long *)(*(long *)(lVar15 + 0x20) + 0x688);
              auVar4._8_8_ = 0;
              auVar4._0_8_ = auVar29._8_8_;
              auVar29 = auVar4 << 0x40;
              if (lVar22 != 0) {
                auVar30 = UnityEngine_Component__get_gameObject(lVar22,0);
                auVar5._8_8_ = 0;
                auVar5._0_8_ = auVar30._8_8_;
                auVar29 = auVar5 << 0x40;
                if (auVar30._0_8_ != 0) {
                  auVar29 = UnityEngine_GameObject__SetActive(auVar30._0_8_,extraout_d0 < 0.0,0);
                  if (extraout_d0 < 0.0) {
                    if (*(long *)(lVar15 + 0x20) == 0) goto LAB_00c3443c;
                    lVar22 = *(long *)(*(long *)(lVar15 + 0x20) + 0x688);
                    auVar6._8_8_ = 0;
                    auVar6._0_8_ = auVar29._8_8_;
                    auVar29 = auVar6 << 0x40;
                    if (lVar22 == 0) goto LAB_00c3443c;
                    auVar29 = UnityEngine_UI_Selectable__set_interactable(lVar22,uVar24,0);
                    if (*(long *)(lVar15 + 0x20) == 0) goto LAB_00c3443c;
                    lVar22 = *(long *)(*(long *)(lVar15 + 0x20) + 0x688);
                    auVar7._8_8_ = 0;
                    auVar7._0_8_ = auVar29._8_8_;
                    auVar29 = auVar7 << 0x40;
                    if (lVar22 == 0) goto LAB_00c3443c;
                    plVar28 = (long *)UnityEngine_UI_Selectable__get_image(lVar22,0);
                    uVar27 = 0;
                    auVar29._8_8_ = 0;
                    auVar29._0_8_ = plVar28;
                    if ((uint)uVar24 == 0) {
                      if (*(long *)(lVar15 + 0x20) == 0) goto LAB_00c3443c;
                      uVar27 = *(undefined8 *)(*(long *)(lVar15 + 0x20) + 0x680);
                    }
                    auVar29._8_8_ = uVar27;
                    if (plVar28 == (long *)0x0) goto LAB_00c3443c;
                    auVar29 = (**(code **)(*plVar28 + 0x348))
                                        (plVar28,uVar27,*(undefined8 *)(*plVar28 + 0x350));
                  }
                  if ((*(long *)(lVar15 + 0x20) != 0) &&
                     (lVar15 = *(long *)(*(long *)(lVar15 + 0x20) + 0x6d8), lVar15 != 0)) {
                    if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
                      uVar16 = 0;
                      uVar20 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
                      do {
                        uVar21 = auVar29._8_8_;
                        uVar27 = auVar29._0_8_;
                        if (uVar20 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_throw_967b58();
                        }
                        lVar22 = *(long *)(lVar15 + 0x20 + uVar16 * 8);
                        if (((uint)(extraout_d0 < 0.0) & (uint)uVar24) == 0) {
LAB_00c343f8:
                          uVar20 = 0;
                        }
                        else {
                          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                            uVar21 = extraout_x1_04;
                          }
                          if (cRam0000000001916e67 == '\0') {
                            func_0x00a67900(&Main_TypeInfo);
                            cRam0000000001916e67 = '\x01';
                            uVar21 = extraout_x1_05;
                          }
                          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                            uVar21 = extraout_x1_06;
                          }
                          lVar26 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                          auVar8._8_8_ = 0;
                          auVar8._0_8_ = uVar21;
                          auVar29 = auVar8 << 0x40;
                          if (lVar26 == 0) goto LAB_00c3443c;
                          auVar29 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar26,0,0);
                          uVar20 = auVar29._8_8_;
                          uVar27 = 0;
                          if (auVar29._0_8_ == 0) goto LAB_00c343f8;
                          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                            uVar20 = extraout_x1_07;
                          }
                          if (cRam0000000001916e67 == '\0') {
                            func_0x00a67900(&Main_TypeInfo);
                            cRam0000000001916e67 = '\x01';
                            uVar20 = extraout_x1_08;
                          }
                          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                            uVar20 = extraout_x1_09;
                          }
                          lVar26 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                          auVar9._8_8_ = 0;
                          auVar9._0_8_ = uVar20;
                          auVar29 = auVar9 << 0x40;
                          if (lVar26 == 0) goto LAB_00c3443c;
                          auVar30 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar26,0,0);
                          auVar10._8_8_ = 0;
                          auVar10._0_8_ = auVar30._8_8_;
                          auVar29 = auVar10 << 0x40;
                          if (auVar30._0_8_ == 0) goto LAB_00c3443c;
                          uVar27 = DJKGLJOCFCE__MCDLFBJCNNA(auVar30._0_8_,0);
                          uVar20 = (ulong)((uint)uVar27 & 1);
                        }
                        auVar29._8_8_ = uVar20;
                        auVar29._0_8_ = uVar27;
                        if (lVar22 == 0) goto LAB_00c3443c;
                        auVar29 = UnityEngine_GameObject__SetActive(lVar22,uVar20,0);
                        uVar20 = (ulong)*(uint *)(lVar15 + 0x18);
                        uVar16 = uVar16 + 1;
                      } while ((long)uVar16 < (long)(int)*(uint *)(lVar15 + 0x18));
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
LAB_00c3443c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50(auVar29._0_8_,auVar29._8_8_);
    }
  }
LAB_00c071ec:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void ODHAOMJKKAE() { }   @0xb11504

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ODHAOMJKKAE(void *__this)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if ((bRam0000000001916fc8 & 1) == 0) {
    func_0x00a67900(&DHLBGHCGAKB_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_GFX_);
    bRam0000000001916fc8 = 1;
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
  if (lVar3 == 0) goto LAB_00c11704;
  iVar1 = *(int *)(lVar3 + 0x90);
  if (iVar1 == 2) {
    lVar3 = *(long *)((long)__this + 0x778);
    if (lVar3 == 0) goto LAB_00c11704;
    puVar4 = (undefined8 *)((long)__this + 0x790);
LAB_00c115f8:
    UnityEngine_UI_Image__set_sprite(lVar3,*puVar4,0);
  }
  else {
    if (iVar1 == 1) {
      lVar3 = *(long *)((long)__this + 0x778);
      if (lVar3 == 0) goto LAB_00c11704;
      puVar4 = (undefined8 *)((long)__this + 0x788);
      goto LAB_00c115f8;
    }
    if (iVar1 == 0) {
      lVar3 = *(long *)((long)__this + 0x778);
      if (lVar3 == 0) goto LAB_00c11704;
      puVar4 = (undefined8 *)((long)__this + 0x780);
      goto LAB_00c115f8;
    }
  }
  plVar6 = *(long **)((long)__this + 0x798);
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = **(long **)(_Translate_TypeInfo + 0xb8);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar5 != 0) {
    uStack_48 = _DHLBGHCGAKB_TypeInfo;
    uStack_38 = *(undefined4 *)(lVar5 + 0x90);
    uStack_40 = 0xffffffffffffffff;
    uVar2 = System_Enum__ToString(&uStack_48,0);
    uVar2 = System_String__Concat(_Str_GFX_,uVar2,0);
    if ((lVar3 != 0) && (uVar2 = Translate__JJJNIPAKLJF(lVar3,uVar2,0), plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 0x5a8))(plVar6,uVar2,*(undefined8 *)(*plVar6 + 0x5b0));
      return;
    }
  }
LAB_00c11704:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void DonateWindowFuel() { }   @0xb1748c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__DonateWindowFuel(void *__this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001916f5d & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f5d = 1;
  }
  GUIGarage__GFNKMDJEDBD(__this);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
     (lVar1 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40), lVar1 != 0)) {
    AnalyticsController__KNPMHFKJGNL(lVar1,0);
    if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
      uVar3 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x48);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x48) == 0)) goto LAB_00c07e78;
        Purchaser__KHDFDGMBOIJ();
      }
      if (*(long *)((long)__this + 0xa8) != 0) {
        GUIWindow__HEGIHOAJOKK(*(long *)((long)__this + 0xa8),1,0);
        lVar1 = *(long *)((long)__this + 0x660);
        *(undefined1 *)((long)__this + 0x6cc) = 1;
        if (lVar1 != 0) {
          if (*(uint *)(lVar1 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          if (*(long *)(lVar1 + 0x30) != 0) {
            UnityEngine_UI_Toggle__set_isOn(*(long *)(lVar1 + 0x30),1,0);
            *(undefined4 *)((long)__this + 0x6c8) = 2;
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
  }
LAB_00c07e78:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void ADMNOIMMGGA(bool FANNHKPHPHC) { }   @0xb0b734

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ADMNOIMMGGA(void *__this,bool FANNHKPHPHC)

{
  long lVar1;
  undefined4 auStack_18 [2];
  
  lVar1 = *(long *)((long)__this + 0x280);
  if (lVar1 != 0) {
    UnityEngine_RectTransform__get_anchoredPosition(lVar1,0);
    auStack_18[0] = 0xc42dc000;
    if (!FANNHKPHPHC) {
      auStack_18[0] = 0x40400000;
    }
    if (pcRam000000000191c800 == (code *)0x0) {
      pcRam000000000191c800 = (code *)func_0x00a678c4(&UNK_005a0a0c,0);
    }
    (*pcRam000000000191c800)(lVar1,auStack_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



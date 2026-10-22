// ==== public void ButtonCheatEraseMoney() { }   @0xb07b84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonCheatEraseMoney(void *__this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  void *pvVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined4 uVar13;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_64;
  
  if ((bRam0000000001916f56 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916f56 = 1;
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
LAB_00c07d50:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  DAFNMLEKHAD__JLEEMPONONF(lVar5,0,0);
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar5 == 0) goto LAB_00c07d50;
  DAFNMLEKHAD__DIMKKHJDHFJ(lVar5,0,0);
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  pvVar6 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (pvVar6 == (void *)0x0) goto LAB_00c07d50;
  DAFNMLEKHAD__BDKMDDIBAAD(pvVar6,false);
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  pvVar6 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (pvVar6 == (void *)0x0) goto LAB_00c07d50;
  DAFNMLEKHAD__OPFBHOGMKNG(pvVar6,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
     (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x28), lVar5 == 0)) goto LAB_00c07d50;
  FuelManager__NGBCNBFIMFC(lVar5,0xffffffff,0);
  pvVar6 = (void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (pvVar6 == (void *)0x0) goto LAB_00c07d50;
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
     (lVar5 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar5 == 0)) goto LAB_00c35de4;
  iVar2 = *(int *)(lVar5 + 0x18);
  plVar12 = (long *)((long)pvVar6 + 0x20);
  if (*plVar12 == 0) goto LAB_00c35de4;
  uVar11 = *(undefined8 *)(*plVar12 + 0x430);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if ((uVar7 & 1) != 0) {
    if (*plVar12 == 0) goto LAB_00c35de4;
    lVar5 = *(long *)(*plVar12 + 0x430);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (lVar5 == 0) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive
              (lVar5,*(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) != 0,0);
  }
  if (*plVar12 == 0) goto LAB_00c35de4;
  uVar11 = *(undefined8 *)(*plVar12 + 0x420);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if ((uVar7 & 1) != 0) {
    if (*plVar12 == 0) goto LAB_00c35de4;
    lVar5 = *(long *)(*plVar12 + 0x420);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iVar3 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
    uVar1 = Car__NBMGBADFACE(0);
    if (lVar5 == 0) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar5,iVar3 < (int)((iVar2 - (~uVar1 & 1)) + -2),0);
  }
  if ((*plVar12 == 0) || (lVar5 = *(long *)(*plVar12 + 0x428), lVar5 == 0)) goto LAB_00c35de4;
  UnityEngine_GameObject__SetActive(lVar5,0,0);
  if ((*plVar12 == 0) || (lVar5 = *(long *)(*plVar12 + 0x438), lVar5 == 0)) goto LAB_00c35de4;
  UnityEngine_GameObject__SetActive(lVar5,0,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = *(long *)(_Main_TypeInfo + 0xb8);
  lVar10 = *(long *)(lVar5 + 0x40);
  if (lVar10 != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar5 = *(long *)(_Main_TypeInfo + 0xb8);
      lVar10 = *(long *)(lVar5 + 0x40);
      if (lVar10 == 0) goto LAB_00c35de4;
    }
    if (*(int *)(lVar10 + 0x10) == 1) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar5 = *(long *)(_Main_TypeInfo + 0xb8);
      }
      if (*(int *)(lVar5 + 0x2c) == 1) {
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
        if (lVar5 == 0) goto LAB_00c35de4;
        lVar5 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar5,1,0);
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
          lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if ((lVar5 == 0) || (lVar5 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar5,1,0), lVar5 == 0))
          goto LAB_00c35de4;
          uVar7 = DJKGLJOCFCE__MCDLFBJCNNA(lVar5,0);
          if ((uVar7 & 1) == 0) {
            if ((*plVar12 == 0) || (lVar5 = *(long *)(*plVar12 + 0x430), lVar5 == 0))
            goto LAB_00c35de4;
            UnityEngine_GameObject__SetActive(lVar5,0,0);
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
  lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar5 == 0) goto LAB_00c35de4;
  iVar2 = -1;
  lVar5 = DAFNMLEKHAD__DKJLCJPBPPN(lVar5,0xffffffff,1,0);
  lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar10 == 0) {
LAB_00c35438:
    iVar3 = iVar2;
    if (lVar5 != 0) goto LAB_00c35448;
LAB_00c354c0:
    if ((*plVar12 == 0) || (lVar5 = *(long *)(*plVar12 + 0x478), lVar5 == 0)) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar5,1,0);
    if ((void *)*plVar12 == (void *)0x0) goto LAB_00c35de4;
    GUIGarage__PHKCLDLDABM((void *)*plVar12,false);
    if (iVar2 == -1) {
      pvVar8 = Car__get_Current();
      if (pvVar8 == (void *)0x0) goto LAB_00c35de4;
      if (*(int *)((long)pvVar8 + 0x44) != 0) goto LAB_00c3550c;
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
      if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x120), lVar5 == 0)) goto LAB_00c35de4;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                (lVar5,&lStack_a8,
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
        lVar5 = lStack_a8;
        if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        iVar3 = *(int *)(lStack_a8 + 0x10);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (iVar3 == *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) + -1) {
          uVar4 = DJKGLJOCFCE__MCDLFBJCNNA(lVar5,0);
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
        pvVar8 = Car__get_Current();
        if ((pvVar8 == (void *)0x0) || (*plVar12 == 0)) goto LAB_00c35de4;
        plVar9 = *(long **)(*plVar12 + 0x488);
        if (*(int *)((long)pvVar8 + 0x20) < 1) {
          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
             (uVar11 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_CLAIM), plVar9 == (long *)0x0
             )) goto LAB_00c35de4;
          (**(code **)(*plVar9 + 0x5a8))(plVar9,uVar11,*(undefined8 *)(*plVar9 + 0x5b0));
          if ((*plVar12 == 0) || (lVar5 = *(long *)(*plVar12 + 0x490), lVar5 == 0))
          goto LAB_00c35de4;
          UnityEngine_GameObject__SetActive(lVar5,0,0);
        }
        else {
          pvVar8 = Car__get_Current();
          if ((pvVar8 == (void *)0x0) ||
             (uVar11 = System_Int32__ToString((long)pvVar8 + 0x20,0), plVar9 == (long *)0x0))
          goto LAB_00c35de4;
          (**(code **)(*plVar9 + 0x5a8))(plVar9,uVar11,*(undefined8 *)(*plVar9 + 0x5b0));
        }
        if ((*plVar12 == 0) || (lVar5 = *(long *)(*plVar12 + 0x480), lVar5 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar5,1,0);
        if ((*plVar12 == 0) || (lVar5 = *(long *)(*plVar12 + 0x4c0), lVar5 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar5,1,0);
        if ((*plVar12 == 0) || (lVar5 = *(long *)(*plVar12 + 0x498), lVar5 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar5,0,0);
        if ((*plVar12 == 0) || (lVar5 = *(long *)(*plVar12 + 0x4a0), lVar5 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar5,0,0);
        if ((*plVar12 == 0) || (lVar5 = *(long *)(*plVar12 + 0x4b8), lVar5 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar5,0,0);
        goto LAB_00c35704;
      }
      lVar5 = *plVar12;
      if (lVar5 == 0) goto LAB_00c35de4;
      *(undefined1 *)(lVar5 + 0x470) = 1;
      if (*(long *)(lVar5 + 0x480) == 0) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(*(long *)(lVar5 + 0x480),0,0);
      if ((*plVar12 == 0) || (lVar5 = *(long *)(*plVar12 + 0x498), lVar5 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar5,0,0);
      if ((*plVar12 == 0) || (lVar5 = *(long *)(*plVar12 + 0x4a0), lVar5 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar5,0,0);
      if ((*plVar12 == 0) || (lVar5 = *(long *)(*plVar12 + 0x4c0), lVar5 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar5,1,0);
      if ((*plVar12 == 0) || (lVar5 = *(long *)(*plVar12 + 0x4b8), lVar5 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar5,1,0);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c35de4;
      lVar5 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_LOCK_CAR_TEXT);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      uVar11 = System_Int32__ToString(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c,0);
LAB_00c35640:
      uVar11 = System_String__Concat(_Str__color__faaf32_,uVar11,_Str___color_,0);
      if (lVar5 == 0) goto LAB_00c35de4;
      uVar11 = System_String__Replace(lVar5,_Str__x_,uVar11,0);
      if ((*plVar12 == 0) || (plVar9 = *(long **)(*plVar12 + 0x4c8), plVar9 == (long *)0x0))
      goto LAB_00c35de4;
      lVar5 = *plVar9;
    }
    else {
LAB_00c3550c:
      pvVar8 = Car__get_Current();
      if (((pvVar8 == (void *)0x0) || (*plVar12 == 0)) ||
         (lVar5 = *(long *)(*plVar12 + 0x480), lVar5 == 0)) goto LAB_00c35de4;
      iVar3 = *(int *)((long)pvVar8 + 0x44);
      UnityEngine_GameObject__SetActive(lVar5,0,0);
      if ((*plVar12 == 0) || (lVar5 = *(long *)(*plVar12 + 0x498), lVar5 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar5,0,0);
      if ((*plVar12 == 0) || (lVar5 = *(long *)(*plVar12 + 0x4a0), lVar5 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar5,0,0);
      if ((*plVar12 == 0) || (lVar5 = *(long *)(*plVar12 + 0x4c0), lVar5 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar5,1,0);
      if ((*plVar12 == 0) || (lVar5 = *(long *)(*plVar12 + 0x4b8), lVar5 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar5,1,0);
      if (iVar3 != 0) {
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c35de4;
        lVar5 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_EVENT_CAR_UNLOCK);
        lVar10 = **(long **)(_Translate_TypeInfo + 0xb8);
        pvVar8 = Car__get_Current();
        if (pvVar8 == (void *)0x0) goto LAB_00c35de4;
        uStack_64 = *(undefined4 *)((long)pvVar8 + 0x44);
        uVar11 = System_Int32__ToString(&uStack_64,0);
        uVar11 = System_String__Concat(_Str_EVENT_,uVar11,0);
        if (lVar10 == 0) goto LAB_00c35de4;
        uVar11 = Translate__JJJNIPAKLJF(uVar11,uVar11);
        goto LAB_00c35640;
      }
      if (*plVar12 == 0) goto LAB_00c35de4;
      plVar9 = *(long **)(*plVar12 + 0x4c8);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
         (uVar11 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_LOCK_CAR_IN_THIS_MODE),
         plVar9 == (long *)0x0)) goto LAB_00c35de4;
      lVar5 = *plVar9;
    }
    (**(code **)(lVar5 + 0x5a8))(plVar9,uVar11,*(undefined8 *)(lVar5 + 0x5b0));
  }
  else {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
      lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar10 == 0) goto LAB_00c35de4;
    }
    if (99 < *(int *)(lVar10 + 0x10)) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
        lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar10 == 0) goto LAB_00c35de4;
      }
      if (*(long *)(lVar10 + 0x50) == 0) goto LAB_00c35de4;
      iVar2 = EventContest__get_car_id(*(long *)(lVar10 + 0x50),0);
      if (-1 < iVar2) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x50), lVar10 == 0)) goto LAB_00c35de4;
        iVar2 = EventContest__get_car_id(lVar10,0);
        goto LAB_00c35438;
      }
    }
    iVar2 = -1;
    iVar3 = -1;
    if (lVar5 == 0) goto LAB_00c354c0;
LAB_00c35448:
    iVar2 = iVar3;
    if (iVar2 != -1) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x50), lVar10 == 0)) goto LAB_00c35de4;
      iVar3 = EventContest__get_car_id(lVar10,0);
      if (iVar3 != *(int *)(lVar5 + 0x10)) goto LAB_00c354c0;
    }
    if ((*plVar12 == 0) || (lVar5 = *(long *)(*plVar12 + 0x478), lVar5 == 0)) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar5,0,0);
    if ((void *)*plVar12 == (void *)0x0) goto LAB_00c35de4;
    GUIGarage__PHKCLDLDABM((void *)*plVar12,true);
  }
LAB_00c35704:
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = *(long *)(_Main_TypeInfo + 0xb8);
  if (*(long *)(lVar5 + 0x40) != 0) {
    if (iVar2 == -1) {
      pvVar8 = Car__get_Current();
      if (pvVar8 == (void *)0x0) goto LAB_00c35de4;
      if (*(int *)((long)pvVar8 + 0x44) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        plVar9 = *(long **)(_Main_TypeInfo + 0xb8);
        lVar5 = plVar9[8];
        if (lVar5 == 0) goto LAB_00c35de4;
        if (0 < *(int *)(lVar5 + 0x10)) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            plVar9 = *(long **)(_Main_TypeInfo + 0xb8);
            lVar5 = plVar9[8];
            if (lVar5 == 0) goto LAB_00c35de4;
          }
          if ((*plVar9 == 0) || (lVar10 = *(long *)(*plVar9 + 0x28), lVar10 == 0))
          goto LAB_00c35de4;
          if (*(int *)(lVar5 + 0x10) < *(int *)(lVar10 + 0x18)) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              plVar9 = *(long **)(_Main_TypeInfo + 0xb8);
              lVar5 = plVar9[8];
              if (lVar5 == 0) goto LAB_00c35de4;
            }
            if (*(int *)((long)plVar9 + 0x2c) != *(int *)(lVar5 + 0x10)) {
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
              lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
              if ((lVar5 == 0) ||
                 (lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar10 == 0))
              goto LAB_00c35de4;
              lVar5 = DAFNMLEKHAD__DKJLCJPBPPN(lVar10,*(undefined4 *)(lVar5 + 0x10),1,0);
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
                if (lVar5 == 0) goto LAB_00c35de4;
                iVar2 = DAFNMLEKHAD__LOCFCFJIAIH(lVar5,0);
                plVar9 = *(long **)(_Main_TypeInfo + 0xb8);
                if (((*plVar9 == 0) || (lVar5 = plVar9[8], lVar5 == 0)) ||
                   (lVar10 = *(long *)(*plVar9 + 0x28), lVar10 == 0)) goto LAB_00c35de4;
                if (*(uint *)(lVar10 + 0x18) <= *(uint *)(lVar5 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                lVar10 = *(long *)(lVar10 + (long)(int)*(uint *)(lVar5 + 0x10) * 8 + 0x20);
                if (lVar10 == 0) goto LAB_00c35de4;
                if (*(int *)(lVar10 + 0x20) <= iVar2) {
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_Main_TypeInfo);
                    plVar9 = *(long **)(_Main_TypeInfo + 0xb8);
                    lVar5 = plVar9[8];
                    if (lVar5 == 0) goto LAB_00c35de4;
                  }
                  lVar10 = *plVar12;
                  if (lVar10 == 0) goto LAB_00c35de4;
                  if (*(int *)(lVar5 + 0x10) < *(int *)((long)plVar9 + 0x2c)) {
                    lVar5 = *(long *)(lVar10 + 0x438);
                    *(undefined1 *)(lVar10 + 0x470) = 1;
                  }
                  else {
                    lVar5 = *(long *)(lVar10 + 0x428);
                    *(undefined1 *)(lVar10 + 0x471) = 1;
                  }
                  if (lVar5 == 0) goto LAB_00c35de4;
                  UnityEngine_GameObject__SetActive(lVar5,1,0);
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
        lVar5 = *(long *)(_Main_TypeInfo + 0xb8);
      }
      if (iVar2 != *(int *)(lVar5 + 0x2c)) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar5 = *plVar12;
        if (lVar5 == 0) goto LAB_00c35de4;
        if (iVar2 < *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c)) {
          *(undefined1 *)(lVar5 + 0x470) = 1;
        }
        else {
          *(undefined1 *)(lVar5 + 0x471) = 1;
        }
      }
    }
  }
  if (*plVar12 != 0) {
    plVar9 = *(long **)(*plVar12 + 1000);
    pvVar8 = Car__get_Current();
    if ((pvVar8 != (void *)0x0) && (plVar9 != (long *)0x0)) {
      (**(code **)(*plVar9 + 0x5a8))
                (plVar9,*(undefined8 *)((long)pvVar8 + 0x10),*(undefined8 *)(*plVar9 + 0x5b0));
      if (*plVar12 != 0) {
        GUIGarage__FJCMAMFOKNL(*plVar12,0);
        Menu__CKPDEIAFHEC();
        Menu__CDFHCNMGCFI(pvVar6);
        Menu__INMDNKGHGEO(pvVar6);
        Menu__FMEHJALLGBK(pvVar6);
        uVar11 = *(undefined8 *)((long)pvVar6 + 0x70);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(long *)((long)pvVar6 + 0x70) == 0) goto LAB_00c35de4;
          ConsoleTipsBottom__ABIEFKKDOGK(*(long *)((long)pvVar6 + 0x70),0);
        }
        return;
      }
    }
  }
LAB_00c35de4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void EOGBHKMFBGE() { }   @0xb08488

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__EOGBHKMFBGE(void *__this)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  void *__this_00;
  undefined4 uStack_44;
  
  if ((bRam0000000001916f5a & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str___Country__);
    func_0x00a67900(&Str_player_flag_icon_is_null__Not_Garage_);
    func_0x00a67900(&Str___Texture__);
    func_0x00a67900(&Str_SetCountryFlagIcon__Player__);
    func_0x00a67900(&Str___Name__);
    bRam0000000001916f5a = 1;
  }
  uStack_44 = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
      __this_00 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
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
      if ((lVar4 != 0) && (__this_00 != (void *)0x0)) {
        plVar2 = BridgePHP__GetCountryTextureFromID(__this_00,*(int *)(lVar4 + 0x14));
        lVar4 = func_0x00a679a0(_string___TypeInfo,8);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x18) == 0) {
LAB_00c08960:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          *(undefined8 *)(lVar4 + 0x20) = _Str_SetCountryFlagIcon__Player__;
          if (cRam0000000001916e67 == '\0') {
            func_0x00a67900(&Main_TypeInfo);
            cRam0000000001916e67 = '\x01';
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if (lVar5 != 0) {
            uStack_44 = *(undefined4 *)(lVar5 + 0x10);
            uVar7 = System_Int32__ToString(&uStack_44,0);
            if ((*(uint *)(lVar4 + 0x18) < 2) ||
               (*(undefined8 *)(lVar4 + 0x28) = uVar7, *(uint *)(lVar4 + 0x18) == 2))
            goto LAB_00c08960;
            *(undefined8 *)(lVar4 + 0x30) = _Str___Country__;
            if (cRam0000000001916e67 == '\0') {
              func_0x00a67900(&Main_TypeInfo);
              cRam0000000001916e67 = '\x01';
            }
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
            if (lVar5 != 0) {
              uStack_44 = *(undefined4 *)(lVar5 + 0x14);
              uVar7 = System_Int32__ToString(&uStack_44,0);
              if ((*(uint *)(lVar4 + 0x18) < 4) ||
                 (*(undefined8 *)(lVar4 + 0x38) = uVar7, *(uint *)(lVar4 + 0x18) == 4))
              goto LAB_00c08960;
              *(undefined8 *)(lVar4 + 0x40) = _Str___Name__;
              if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
                lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
                if (cRam0000000001916e67 == '\0') {
                  func_0x00a67900(&Main_TypeInfo);
                  cRam0000000001916e67 = '\x01';
                }
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                if ((lVar6 != 0) && (lVar5 != 0)) {
                  uVar7 = BridgePHP__GetCountryNameFromID(lVar5,*(undefined4 *)(lVar6 + 0x14),0);
                  uVar3 = *(uint *)(lVar4 + 0x18);
                  if ((5 < uVar3) && (*(undefined8 *)(lVar4 + 0x48) = uVar7, uVar3 != 6)) {
                    *(undefined8 *)(lVar4 + 0x50) = _Str___Texture__;
                    if (plVar2 == (long *)0x0) {
                      uVar7 = 0;
                    }
                    else {
                      uVar7 = (**(code **)(*plVar2 + 0x168))
                                        (plVar2,*(undefined8 *)(*plVar2 + 0x170));
                      uVar3 = *(uint *)(lVar4 + 0x18);
                    }
                    if (7 < uVar3) {
                      *(undefined8 *)(lVar4 + 0x58) = uVar7;
                      uVar7 = System_String__Concat(lVar4,0);
                      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30(_Main_TypeInfo);
                      }
                      Main__GEMDEAMAGPG(uVar7,0,0);
                      uVar7 = *(undefined8 *)((long)__this + 0x3a8);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar1 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30(_Main_TypeInfo);
                      }
                      if ((uVar1 & 1) == 0) {
                        Main__GEMDEAMAGPG(_Str_player_flag_icon_is_null__Not_Garage_,0,0);
                        return;
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
                        if (*(int *)(lVar4 + 0x10) != 0) {
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar1 = UnityEngine_Object__op_Inequality(plVar2,0,0);
                          if ((uVar1 & 1) != 0) {
                            if ((*(long *)((long)__this + 0x3a8) != 0) &&
                               (lVar4 = UnityEngine_Component__get_gameObject
                                                  (*(long *)((long)__this + 0x3a8),0), lVar4 != 0))
                            {
                              UnityEngine_GameObject__SetActive(lVar4,1,0);
                              if (*(long *)((long)__this + 0x3a8) != 0) {
                                UnityEngine_UI_Image__set_sprite
                                          (*(long *)((long)__this + 0x3a8),plVar2,0);
                                return;
                              }
                            }
                            goto LAB_00c0895c;
                          }
                        }
                        if ((*(long *)((long)__this + 0x3a8) != 0) &&
                           (lVar4 = UnityEngine_Component__get_gameObject
                                              (*(long *)((long)__this + 0x3a8),0), lVar4 != 0)) {
                          UnityEngine_GameObject__SetActive(lVar4,0,0);
                          return;
                        }
                      }
                      goto LAB_00c0895c;
                    }
                  }
                  goto LAB_00c08960;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00c0895c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonCheatHideBanner() { }   @0xb08d08

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonCheatHideBanner(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001916f5f & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f5f = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar3 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
       (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar2 != 0)) {
      AdvController__DCNMAGKBJKO(lVar2,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
         (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar2 != 0)) {
        if ((bRam00000000019171d2 & 1) == 0) {
          func_0x00a67900(&MaxSdkAndroid_TypeInfo,0);
          bRam00000000019171d2 = 1;
        }
        if (*(char *)(lVar2 + 0x35) == '\0') {
          if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar1 = MaxSdkAndroid__IsInitialized(0);
          if ((uVar1 & 1) != 0) {
            uVar3 = *(undefined8 *)(lVar2 + 0x48);
            if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            MaxSdkAndroid__HideBanner(uVar3,0);
            *(undefined1 *)(lVar2 + 0x35) = 1;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void HJMGNJDAJJJ() { }   @0xb09034

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__HJMGNJDAJJJ(void *__this)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001916f64 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f64 = 1;
  }
  uVar5 = *(undefined8 *)((long)__this + 0x528);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)((long)__this + 0x528);
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  iVar3 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
  if (iVar3 != 1) {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      iVar3 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
    }
    if (iVar3 != 2) {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        iVar3 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
      }
      if (iVar3 == 6) {
LAB_00c0914c:
        bVar1 = true;
        goto LAB_00c090fc;
      }
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        iVar3 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
      }
      if (iVar3 == 7) {
LAB_00c0917c:
        bVar1 = true;
        goto LAB_00c090fc;
      }
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        iVar3 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
      }
      if (iVar3 != 8) {
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          iVar3 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
        }
        if (iVar3 == 9) goto LAB_00c0914c;
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          iVar3 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
        }
        if (iVar3 == 0xb) goto LAB_00c0917c;
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          iVar3 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
        }
        if (iVar3 != 0xc) {
          if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            iVar3 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
          }
          bVar1 = iVar3 == 0xd;
          goto LAB_00c090fc;
        }
      }
    }
  }
  bVar1 = true;
LAB_00c090fc:
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (pcRam000000000191c3f8 == (code *)0x0) {
    pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
  }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c3f8)(lVar4,bVar1);
  return;
}


// ==== public void ButtonSettings() { }   @0xb09704

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonSettings(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  void *pvVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  long lStack_68;
  
  if ((bRam0000000001916f68 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_SYNC_HINT_GAME_CENTER);
    func_0x00a67900(&Str_SYNC_HINT_GOOGLE_PLAY);
    bRam0000000001916f68 = 1;
  }
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  iVar2 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
  if (iVar2 == 1) {
    plVar12 = *(long **)((long)__this + 0x818);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar5 = **(long **)(_Translate_TypeInfo + 0xb8);
    if (lVar5 == 0) goto LAB_00c098bc;
    puVar11 = (undefined8 *)&Str_SYNC_HINT_GOOGLE_PLAY;
LAB_00c09810:
    uVar6 = Translate__JJJNIPAKLJF(lVar5,*puVar11,0);
    if (plVar12 == (long *)0x0) goto LAB_00c098bc;
    (**(code **)(*plVar12 + 0x5a8))(plVar12,uVar6,*(undefined8 *)(*plVar12 + 0x5b0));
    if ((*(long *)((long)__this + 0x818) == 0) ||
       (lVar5 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x818),0), lVar5 == 0
       )) goto LAB_00c098bc;
    uVar6 = 1;
  }
  else {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      iVar2 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
    }
    plVar12 = *(long **)((long)__this + 0x818);
    if (iVar2 == 2) {
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar5 = **(long **)(_Translate_TypeInfo + 0xb8);
      if (lVar5 == 0) goto LAB_00c098bc;
      puVar11 = (undefined8 *)&Str_SYNC_HINT_GAME_CENTER;
      goto LAB_00c09810;
    }
    if ((plVar12 == (long *)0x0) ||
       (lVar5 = UnityEngine_Component__get_gameObject(plVar12,0), lVar5 == 0)) goto LAB_00c098bc;
    uVar6 = 0;
  }
  UnityEngine_GameObject__SetActive(lVar5,uVar6,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  bVar1 = Main__KCHOEBEIOCE();
  if (bVar1) {
    GUIGarage__ANCCFOEBAGI(__this);
  }
  pvVar7 = *(void **)((long)__this + 0xe0);
  if (pvVar7 == (void *)0x0) {
LAB_00c098bc:
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
  lVar5 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar5 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar5 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x20) = _Str_Try_to_Show__;
  lVar8 = UnityEngine_Component__get_gameObject(pvVar7,0);
  if (lVar8 == 0) goto LAB_00c485b8;
  uVar6 = UnityEngine_Object__get_name(lVar8,0);
  if ((*(uint *)(lVar5 + 0x18) < 2) ||
     (*(undefined8 *)(lVar5 + 0x28) = uVar6, *(uint *)(lVar5 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x30) = _Str___current__;
  uVar6 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  uVar6 = _Str_null;
  if ((uVar9 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar6 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar5 + 0x18) < 4) ||
     (*(undefined8 *)(lVar5 + 0x38) = uVar6, *(uint *)(lVar5 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x40) = _Str___last__;
  uVar6 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  uVar6 = _Str_null;
  if ((uVar9 & 1) != 0) {
    lVar8 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar8 == 0) goto LAB_00c485b8;
    uVar6 = UnityEngine_Object__get_name(lVar8,0);
  }
  uVar4 = *(uint *)(lVar5 + 0x18);
  if ((uVar4 < 6) || (*(undefined8 *)(lVar5 + 0x48) = uVar6, uVar4 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x50) = _Str____Child__;
  plVar12 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar6 = 0;
  if (plVar12 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    uVar4 = *(uint *)(lVar5 + 0x18);
  }
  if (uVar4 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x58) = uVar6;
  uVar6 = System_String__Concat(lVar5,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar6,0,0);
  uVar6 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Equality(uVar6,pvVar7,0);
  if ((uVar9 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar6,0,0);
    if ((uVar9 & 1) != 0) {
      return;
    }
  }
  uVar6 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Equality(uVar6,pvVar7,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar6 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  lVar5 = _GUIWindow_TypeInfo;
  if ((uVar9 & 1) != 0) {
    lVar5 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar5,0);
    lVar5 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar6 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar9 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  lVar5 = GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar9 = UnityEngine_Object__op_Inequality(lVar5,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(char *)((long)pvVar7 + 0x20) == '\0') {
      if (lVar5 == 0) goto LAB_00c485b8;
      uVar9 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
      if ((uVar9 & 1) == 0) goto LAB_00c46b74;
      uVar15 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar15;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if (((uVar9 & 1) != 0) && (*(char *)((long)pvVar7 + 0x21) != '\0')) {
        fVar14 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar14) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),lVar5,0);
          goto LAB_00c46b74;
        }
      }
      if (lVar5 == 0) goto LAB_00c485b8;
      uVar6 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar5,uVar6,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar6 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if ((uVar9 & 1) != 0) {
        if (*(char *)((long)pvVar7 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
          goto LAB_00c485b8;
          uVar9 = AdvController__EDNAEPDDBPJ(lVar5,0);
          if ((uVar9 & 1) != 0) {
            iVar2 = UnityEngine_Screen__get_width(0);
            iVar3 = UnityEngine_Screen__get_height(0);
            fVar14 = (float)iVar2 / (float)iVar3;
            if (fVar14 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
            goto LAB_00c485b8;
            uVar6 = *(undefined8 *)(lVar5 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar9 = UnityEngine_Object__op_Equality(pvVar7,uVar6,0);
            if ((uVar9 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0)
                 ) goto LAB_00c485b8;
              uVar6 = *(undefined8 *)(lVar5 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar9 = UnityEngine_Object__op_Equality(pvVar7,uVar6,0);
              if ((uVar9 & 1) != 0) {
                if (1.61 <= fVar14) {
                  if ((fVar14 <= 1.61) || (1.8 <= fVar14)) {
                    if (fVar14 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar5 == 0)) goto LAB_00c485b8;
                    uVar6 = *(undefined8 *)(lVar5 + 0x70);
                    uVar16 = 0x3f51eb85;
                    uVar15 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar5 == 0)) goto LAB_00c485b8;
                    uVar6 = *(undefined8 *)(lVar5 + 0x70);
                    uVar16 = 0x3f5eb852;
                    uVar15 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar5 == 0)) goto LAB_00c485b8;
                  uVar6 = *(undefined8 *)(lVar5 + 0x70);
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
                   (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar5 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar14) {
                  if (*(long *)(lVar5 + 0x240) == 0) goto LAB_00c485b8;
                  uVar9 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar5 + 0x240),0);
                  if ((uVar9 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar5 == 0)) goto LAB_00c485b8;
                  uVar6 = *(undefined8 *)(lVar5 + 0x60);
                  uVar16 = 0x3f51eb85;
                  uVar15 = 0x41a00000;
                }
                else {
                  uVar6 = *(undefined8 *)(lVar5 + 0x60);
                  uVar16 = 0x3f5eb852;
                  uVar15 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar5 == 0)) goto LAB_00c485b8;
                uVar6 = *(undefined8 *)(lVar5 + 0x60);
                uVar15 = 0xc0a00000;
                uVar16 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar15,uVar16,pvVar7,uVar6);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
            goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(lVar5,0);
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
    uVar6 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar6 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if ((uVar9 & 1) != 0) {
        if (*(char *)((long)pvVar7 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(pvVar7);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
          goto LAB_00c485b8;
          uVar9 = AdvController__EDNAEPDDBPJ(lVar5,0);
          if ((uVar9 & 1) == 0) goto LAB_00c47120;
          iVar2 = UnityEngine_Screen__get_width(0);
          iVar3 = UnityEngine_Screen__get_height(0);
          fVar14 = (float)iVar2 / (float)iVar3;
          if (1.51 < fVar14) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
            goto LAB_00c485b8;
            uVar6 = *(undefined8 *)(lVar5 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar9 = UnityEngine_Object__op_Equality(pvVar7,uVar6,0);
            if ((uVar9 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
              goto LAB_00c485b8;
              uVar6 = *(undefined8 *)(lVar5 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar9 = UnityEngine_Object__op_Equality(pvVar7,uVar6,0);
              if ((uVar9 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                uVar6 = *(undefined8 *)(lVar5 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar9 = UnityEngine_Object__op_Equality(pvVar7,uVar6,0);
                if ((uVar9 & 1) == 0) {
                  lVar5 = UnityEngine_Component__get_gameObject(pvVar7,0);
                  if (lVar5 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar5,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar5 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar9 = UnityEngine_Object__op_Inequality(lVar5,0,0);
                  if ((uVar9 & 1) != 0) {
                    if (lVar5 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar5 + 0x2c) == 3) {
                      lVar5 = UnityEngine_Component__get_gameObject(pvVar7,0);
                      if (lVar5 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar5,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar9 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar9 & 1) != 0) {
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
                       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                    goto LAB_00c485b8;
                    lStack_68 = *(long *)(lVar5 + 0xe8);
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
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar5 + 0xe8);
                uVar15 = 0x41f00000;
              }
              else {
                if (1.61 <= fVar14) {
                  if (1.8 <= fVar14) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar5 + 0xb0);
                  uVar16 = 0x3f6e147b;
                  uVar15 = 0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar5 + 0xb0);
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
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar5 + 0x188);
                uVar15 = 0x41200000;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
              goto LAB_00c485b8;
              lStack_68 = *(long *)(lVar5 + 0x188);
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
             (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
          goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(lVar5,0);
        }
      }
    }
  }
LAB_00c47338:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = *(long *)(_Menu_TypeInfo + 0xb8);
  if (*(char *)(lVar5 + 0x1a) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar5 = *(long *)(_Menu_TypeInfo + 0xb8);
    }
    if (*(char *)(lVar5 + 0xc) != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if ((uVar9 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar6 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if ((uVar9 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar6 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
          if ((uVar9 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
            goto LAB_00c485b8;
            if (*(char *)(lVar5 + 0x6c) != '\0') {
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
              uVar9 = DAFNMLEKHAD__MHBEPDHNNFH(lVar5,0);
              if ((uVar9 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
                goto LAB_00c485b8;
                uVar6 = *(undefined8 *)(lVar5 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar9 = UnityEngine_Object__op_Equality(uVar6,0,0);
                if ((uVar9 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                  goto LAB_00c485b8;
                  uVar6 = *(undefined8 *)(lVar5 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar9 = UnityEngine_Object__op_Equality(pvVar7,uVar6,0);
                  if ((uVar9 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
                    goto LAB_00c485b8;
                    uVar6 = *(undefined8 *)(lVar5 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar6 = UnityEngine_Object__Instantiate_object_
                                      (uVar6,_Method_UnityEngine_Object_Instantiate_GameObject___);
                    *(undefined8 *)(lVar5 + 0x90) = uVar6;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar5 = UnityEngine_Component__get_gameObject(pvVar7,0);
  if (lVar5 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar5,1,0);
  puVar11 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar11[2] = *puVar11;
  *puVar11 = pvVar7;
  if (*(char *)((long)pvVar7 + 0x23) != '\0') {
    pvVar10 = GUIWindow__FAAELIPKLCB(pvVar7);
    UnityEngine_MonoBehaviour__StartCoroutine(pvVar7,pvVar10,0);
  }
  lVar5 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar5 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar5 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar5 + 0x20) = _Str_Window__Show__;
  uVar6 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  uVar6 = _Str_null;
  if ((uVar9 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar6 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar5 + 0x18) < 2) ||
     (*(undefined8 *)(lVar5 + 0x28) = uVar6, *(uint *)(lVar5 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x30) = _Str___last__;
  uVar6 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  uVar6 = _Str_null;
  if ((uVar9 & 1) != 0) {
    lVar8 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar8 == 0) goto LAB_00c485b8;
    uVar6 = UnityEngine_Object__get_name(lVar8,0);
  }
  uVar4 = *(uint *)(lVar5 + 0x18);
  if ((uVar4 < 4) || (*(undefined8 *)(lVar5 + 0x38) = uVar6, uVar4 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x40) = _Str____Child__;
  plVar12 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar6 = 0;
  if (plVar12 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    uVar4 = *(uint *)(lVar5 + 0x18);
  }
  if (uVar4 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x48) = uVar6;
  uVar6 = System_String__Concat(lVar5,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar6,0,0);
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
    uVar6 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar9 & 1) != 0) {
      uVar6 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
      uVar9 = UnityEngine_Object__op_Equality(uVar6,uVar13,0);
      if ((uVar9 & 1) == 0) {
        uVar6 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
        uVar9 = UnityEngine_Object__op_Equality(uVar6,uVar13,0);
        if ((uVar9 & 1) == 0) {
          uVar6 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
          uVar9 = UnityEngine_Object__op_Equality(uVar6,uVar13,0);
          if ((uVar9 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (pvVar7 = *(void **)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
               pvVar7 == (void *)0x0)) goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(pvVar7);
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
        lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((lVar8 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar8,0), lVar5 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar5,uVar4 & 1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar9 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar6 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar9 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
    goto LAB_00c485b8;
    uVar9 = GUIGarage__ABAHNKCPCFA(lVar5,0);
    if ((uVar9 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
        (lVar5 = *(long *)(lVar5 + 0x78), lVar5 == 0)) ||
       (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)) goto LAB_00c485b8;
    uVar9 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
    if ((uVar9 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
         ((lVar5 = *(long *)(lVar5 + 0x70), lVar5 == 0 ||
          (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)))) goto LAB_00c485b8;
      uVar9 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
      if ((uVar9 & 1) != 0) goto LAB_00c47948;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
         (lVar5 = *(long *)(lVar5 + 0x1d0), lVar5 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar5,0,0);
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
         (lVar5 = *(long *)(lVar5 + 0x1b8), lVar5 == 0)) goto LAB_00c485b8;
      uVar15 = 0;
    }
    else {
LAB_00c47948:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
         (lVar5 = *(long *)(lVar5 + 0x1d0), lVar5 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar5,1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (pvVar10 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar10 == (void *)0x0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(pvVar10);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      lVar5 = *(long *)(lVar5 + 0x3e0);
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
      if ((lVar8 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar8,0), lVar5 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar5,uVar4 & 1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0 ||
          (lVar5 = *(long *)(lVar5 + 0x1b8), lVar5 == 0)))) goto LAB_00c485b8;
      uVar15 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar15,lVar5,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
       ((lVar5 = *(long *)(lVar5 + 0x60), lVar5 == 0 ||
        (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)))) goto LAB_00c485b8;
    uVar9 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
    if ((uVar9 & 1) == 0) {
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
        (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
       (lVar5 = *(long *)(lVar5 + 0x68), lVar5 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar5,*(undefined1 *)((long)pvVar7 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
    goto LAB_00c485b8;
    uVar6 = *(undefined8 *)(lVar5 + 0x78);
    uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar13,uVar6,0);
    if ((uVar9 & 1) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
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
      uVar9 = UnityEngine_Object__op_Inequality(uVar6,uVar13,0);
      if ((uVar9 & 1) != 0) {
        uVar6 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if ((uVar9 & 1) != 0) {
          uVar6 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
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
          uVar9 = UnityEngine_Object__op_Equality(uVar6,uVar13,0);
          if ((uVar9 & 1) != 0) {
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
    uVar6 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
    uVar9 = UnityEngine_Object__op_Equality(uVar6,uVar13,0);
    if ((uVar9 & 1) == 0) {
      uVar6 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
      uVar9 = UnityEngine_Object__op_Equality(uVar6,uVar13,0);
      if ((uVar9 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (pvVar7 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar7 == (void *)0x0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(pvVar7);
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
      uVar9 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar5,0);
      if ((uVar9 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar6 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
          if ((uVar9 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar5 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar5 == 0) goto LAB_00c485b8;
            uVar9 = UnityEngine_AudioSource__get_isPlaying(lVar5,0);
            if ((uVar9 & 1) == 0) {
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
         (pvVar7 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar7 == (void *)0x0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(pvVar7);
    }
    uVar6 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
    uVar9 = UnityEngine_Object__op_Equality(uVar6,uVar13,0);
    if ((uVar9 & 1) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar9 = UnityEngine_Object__op_Equality(uVar6,0,0);
      if ((uVar9 & 1) != 0) {
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


// ==== public void ButtonChangeSound() { }   @0xb0affc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonChangeSound(void *__this)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  byte abStack_24 [4];
  
  if ((bRam0000000001916f6c & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Str_IsLogs__);
    bRam0000000001916f6c = 1;
  }
  abStack_24[0] = 0;
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
  if (lVar3 == 0) goto LAB_00c0b2e8;
  uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar3,0);
  if ((uVar4 & 1) == 0) {
LAB_00c0b11c:
    if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Application__get_isEditor(0);
    if ((uVar4 & 1) != 0) goto LAB_00c0b140;
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
    lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar3 == 0) goto LAB_00c0b2e8;
    if (*(int *)(lVar3 + 0x94) != 8) goto LAB_00c0b11c;
LAB_00c0b140:
    iVar1 = *(int *)((long)__this + 0x8e4) + 1;
    *(int *)((long)__this + 0x8e4) = iVar1;
    if (iVar1 == 7) {
      *(undefined4 *)((long)__this + 0x8e4) = 0;
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
      }
      else {
        lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((lVar5 == 0) || (uVar2 = DAFNMLEKHAD__LLEFEIHEJDE(lVar5,0), lVar3 == 0))
      goto LAB_00c0b2e8;
      DAFNMLEKHAD__MEOGODPDIOO(lVar3,~uVar2 & 1,0);
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_00c0b2e8;
      abStack_24[0] = DAFNMLEKHAD__LLEFEIHEJDE(lVar3,0);
      abStack_24[0] = abStack_24[0] & 1;
      if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_bool_TypeInfo);
      }
      uVar6 = System_Boolean__ToString(abStack_24,0);
      uVar6 = System_String__Concat(_Str_IsLogs__,uVar6,0);
      GUIGarage__DAOLEOLDHGN(__this,uVar6);
    }
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    Menu__OBLKMKHMBEA(**(long **)(_Menu_TypeInfo + 0xb8),0);
    GUIGarage__LLAEHJGOFLG(__this);
    return;
  }
LAB_00c0b2e8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonBuyCar() { }   @0xb0ba44

/* WARNING: Removing unreachable block (ram,0x00c0a8c0) */
/* WARNING: Removing unreachable block (ram,0x00c0a8c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonBuyCar(void *__this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  void *pvVar9;
  long *plVar10;
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
  
  if ((bRam0000000001916f70 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001916f70 = 1;
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
LAB_00c0bd2c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  lVar6 = DAFNMLEKHAD__DKJLCJPBPPN(lVar6,0xffffffff,1,0);
  if (lVar6 != 0) {
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
  lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar6 == 0) goto LAB_00c0bd2c;
  iVar1 = DAFNMLEKHAD__LOCFCFJIAIH(lVar6,0);
  pvVar7 = Car__get_Current();
  if (pvVar7 == (void *)0x0) goto LAB_00c0bd2c;
  if (iVar1 < *(int *)((long)pvVar7 + 0x20)) {
    pvVar7 = Car__get_Current();
    if (pvVar7 != (void *)0x0) {
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
      lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar6 != 0) {
        DAFNMLEKHAD__LOCFCFJIAIH(lVar6,0);
        if ((bRam0000000001916f94 & 1) == 0) {
          func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
          func_0x00a67900(&Translate_TypeInfo);
          func_0x00a67900(&Str_NO_MONEY_2);
          func_0x00a67900(&Str_NO_MONEY_1);
          func_0x00a67900(&Str__);
          bRam0000000001916f94 = 1;
        }
        if (*(long *)((long)__this + 0x518) != 0) {
          UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x518),1,0);
          if (*(long *)((long)__this + 0x520) != 0) {
            UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x520),0,0);
            if (*(long *)((long)__this + 0xa0) != 0) {
              GUIWindow__HEGIHOAJOKK(*(long *)((long)__this + 0xa0),1,0);
              plVar12 = *(long **)((long)__this + 0x608);
              uVar5 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
              uVar5 = System_String__Concat(uVar5,_Str__,0);
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 0x5a8))(plVar12,uVar5,*(undefined8 *)(*plVar12 + 0x5b0));
                plVar12 = *(long **)((long)__this + 0x5f0);
                if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Translate_TypeInfo + 0xb8) != 0) &&
                   (uVar5 = Translate__JJJNIPAKLJF
                                      (**(long **)(_Translate_TypeInfo + 0xb8),_Str_NO_MONEY_1,0),
                   plVar12 != (long *)0x0)) {
                  (**(code **)(*plVar12 + 0x5a8))(plVar12,uVar5,*(undefined8 *)(*plVar12 + 0x5b0));
                  if (*(long *)((long)__this + 0x600) != 0) {
                    UnityEngine_UI_Image__set_sprite
                              (*(long *)((long)__this + 0x600),*(undefined8 *)((long)__this + 0x378)
                               ,0);
                    *(undefined4 *)((long)__this + 0x6c8) = 0;
                    plVar12 = *(long **)((long)__this + 0x5f8);
                    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Translate_TypeInfo + 0xb8) != 0) &&
                       (uVar5 = Translate__JJJNIPAKLJF
                                          (**(long **)(_Translate_TypeInfo + 0xb8),_Str_NO_MONEY_2,0
                                          ), plVar12 != (long *)0x0)) {
                      (**(code **)(*plVar12 + 0x5a8))
                                (plVar12,uVar5,*(undefined8 *)(*plVar12 + 0x5b0));
                      return;
                    }
                  }
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
    goto LAB_00c0bd2c;
  }
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x60),0);
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
  if (lVar6 == 0) goto LAB_00c0bd2c;
  iVar1 = DAFNMLEKHAD__LOCFCFJIAIH(lVar6,0);
  pvVar7 = Car__get_Current();
  if (pvVar7 == (void *)0x0) goto LAB_00c0bd2c;
  DAFNMLEKHAD__JLEEMPONONF(lVar6,iVar1 - *(int *)((long)pvVar7 + 0x20),0);
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  pvVar7 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (pvVar7 == (void *)0x0) goto LAB_00c0bd2c;
  DAFNMLEKHAD__NODNJNKEFKM(pvVar7,true,-1);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  pvVar7 = (void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (pvVar7 == (void *)0x0) goto LAB_00c0bd2c;
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
     (lVar6 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar6 == 0)) goto LAB_00c35de4;
  iVar1 = *(int *)(lVar6 + 0x18);
  plVar12 = (long *)((long)pvVar7 + 0x20);
  if (*plVar12 == 0) goto LAB_00c35de4;
  uVar5 = *(undefined8 *)(*plVar12 + 0x430);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar8 & 1) != 0) {
    if (*plVar12 == 0) goto LAB_00c35de4;
    lVar6 = *(long *)(*plVar12 + 0x430);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (lVar6 == 0) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive
              (lVar6,*(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) != 0,0);
  }
  if (*plVar12 == 0) goto LAB_00c35de4;
  uVar5 = *(undefined8 *)(*plVar12 + 0x420);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar8 & 1) != 0) {
    if (*plVar12 == 0) goto LAB_00c35de4;
    lVar6 = *(long *)(*plVar12 + 0x420);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iVar3 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
    uVar2 = Car__NBMGBADFACE(0);
    if (lVar6 == 0) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar6,iVar3 < (int)((iVar1 - (~uVar2 & 1)) + -2),0);
  }
  if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x428), lVar6 == 0)) goto LAB_00c35de4;
  UnityEngine_GameObject__SetActive(lVar6,0,0);
  if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x438), lVar6 == 0)) goto LAB_00c35de4;
  UnityEngine_GameObject__SetActive(lVar6,0,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = *(long *)(_Main_TypeInfo + 0xb8);
  lVar11 = *(long *)(lVar6 + 0x40);
  if (lVar11 != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar6 = *(long *)(_Main_TypeInfo + 0xb8);
      lVar11 = *(long *)(lVar6 + 0x40);
      if (lVar11 == 0) goto LAB_00c35de4;
    }
    if (*(int *)(lVar11 + 0x10) == 1) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar6 = *(long *)(_Main_TypeInfo + 0xb8);
      }
      if (*(int *)(lVar6 + 0x2c) == 1) {
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
        if (lVar6 == 0) goto LAB_00c35de4;
        lVar6 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar6,1,0);
        if (lVar6 != 0) {
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
          if ((lVar6 == 0) || (lVar6 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar6,1,0), lVar6 == 0))
          goto LAB_00c35de4;
          uVar8 = DJKGLJOCFCE__MCDLFBJCNNA(lVar6,0);
          if ((uVar8 & 1) == 0) {
            if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x430), lVar6 == 0))
            goto LAB_00c35de4;
            UnityEngine_GameObject__SetActive(lVar6,0,0);
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
  lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar6 == 0) goto LAB_00c35de4;
  iVar1 = -1;
  lVar6 = DAFNMLEKHAD__DKJLCJPBPPN(lVar6,0xffffffff,1,0);
  lVar11 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar11 == 0) {
LAB_00c35438:
    iVar3 = iVar1;
    if (lVar6 != 0) goto LAB_00c35448;
LAB_00c354c0:
    if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x478), lVar6 == 0)) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar6,1,0);
    if ((void *)*plVar12 == (void *)0x0) goto LAB_00c35de4;
    GUIGarage__PHKCLDLDABM((void *)*plVar12,false);
    if (iVar1 == -1) {
      pvVar9 = Car__get_Current();
      if (pvVar9 == (void *)0x0) goto LAB_00c35de4;
      if (*(int *)((long)pvVar9 + 0x44) != 0) goto LAB_00c3550c;
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
      if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x120), lVar6 == 0)) goto LAB_00c35de4;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                (lVar6,&lStack_a8,
                 _Method_System_Collections_Generic_List_DJKGLJOCFCE__GetEnumerator__);
      uStack_88 = uStack_a0;
      lStack_90 = lStack_a8;
      uStack_80 = uStack_98;
      uVar2 = 0;
      while (uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                               (&lStack_90,
                                _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__
                               ), (uVar8 & 1) != 0) {
        func_0x00b947ec(&lStack_90,&lStack_a8,
                        _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__get_Current__
                       );
        lVar6 = lStack_a8;
        if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        iVar3 = *(int *)(lStack_a8 + 0x10);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (iVar3 == *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) + -1) {
          uVar4 = DJKGLJOCFCE__MCDLFBJCNNA(lVar6,0);
          uVar2 = uVar2 | uVar4;
        }
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                (&lStack_90,
                 _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__);
      if ((uVar2 & 1) != 0) {
        uVar13 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar13;
        pvVar9 = Car__get_Current();
        if ((pvVar9 == (void *)0x0) || (*plVar12 == 0)) goto LAB_00c35de4;
        plVar10 = *(long **)(*plVar12 + 0x488);
        if (*(int *)((long)pvVar9 + 0x20) < 1) {
          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
             (uVar5 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_CLAIM), plVar10 == (long *)0x0
             )) goto LAB_00c35de4;
          (**(code **)(*plVar10 + 0x5a8))(plVar10,uVar5,*(undefined8 *)(*plVar10 + 0x5b0));
          if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x490), lVar6 == 0))
          goto LAB_00c35de4;
          UnityEngine_GameObject__SetActive(lVar6,0,0);
        }
        else {
          pvVar9 = Car__get_Current();
          if ((pvVar9 == (void *)0x0) ||
             (uVar5 = System_Int32__ToString((long)pvVar9 + 0x20,0), plVar10 == (long *)0x0))
          goto LAB_00c35de4;
          (**(code **)(*plVar10 + 0x5a8))(plVar10,uVar5,*(undefined8 *)(*plVar10 + 0x5b0));
        }
        if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x480), lVar6 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar6,1,0);
        if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x4c0), lVar6 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar6,1,0);
        if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x498), lVar6 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar6,0,0);
        if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x4a0), lVar6 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar6,0,0);
        if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x4b8), lVar6 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar6,0,0);
        goto LAB_00c35704;
      }
      lVar6 = *plVar12;
      if (lVar6 == 0) goto LAB_00c35de4;
      *(undefined1 *)(lVar6 + 0x470) = 1;
      if (*(long *)(lVar6 + 0x480) == 0) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(*(long *)(lVar6 + 0x480),0,0);
      if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x498), lVar6 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar6,0,0);
      if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x4a0), lVar6 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar6,0,0);
      if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x4c0), lVar6 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar6,1,0);
      if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x4b8), lVar6 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar6,1,0);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c35de4;
      lVar6 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_LOCK_CAR_TEXT);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      uVar5 = System_Int32__ToString(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c,0);
LAB_00c35640:
      uVar5 = System_String__Concat(_Str__color__faaf32_,uVar5,_Str___color_,0);
      if (lVar6 == 0) goto LAB_00c35de4;
      uVar5 = System_String__Replace(lVar6,_Str__x_,uVar5,0);
      if ((*plVar12 == 0) || (plVar10 = *(long **)(*plVar12 + 0x4c8), plVar10 == (long *)0x0))
      goto LAB_00c35de4;
      lVar6 = *plVar10;
    }
    else {
LAB_00c3550c:
      pvVar9 = Car__get_Current();
      if (((pvVar9 == (void *)0x0) || (*plVar12 == 0)) ||
         (lVar6 = *(long *)(*plVar12 + 0x480), lVar6 == 0)) goto LAB_00c35de4;
      iVar3 = *(int *)((long)pvVar9 + 0x44);
      UnityEngine_GameObject__SetActive(lVar6,0,0);
      if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x498), lVar6 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar6,0,0);
      if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x4a0), lVar6 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar6,0,0);
      if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x4c0), lVar6 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar6,1,0);
      if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x4b8), lVar6 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar6,1,0);
      if (iVar3 != 0) {
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c35de4;
        lVar6 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_EVENT_CAR_UNLOCK);
        lVar11 = **(long **)(_Translate_TypeInfo + 0xb8);
        pvVar9 = Car__get_Current();
        if (pvVar9 == (void *)0x0) goto LAB_00c35de4;
        uStack_64 = *(undefined4 *)((long)pvVar9 + 0x44);
        uVar5 = System_Int32__ToString(&uStack_64,0);
        uVar5 = System_String__Concat(_Str_EVENT_,uVar5,0);
        if (lVar11 == 0) goto LAB_00c35de4;
        uVar5 = Translate__JJJNIPAKLJF(uVar5,uVar5);
        goto LAB_00c35640;
      }
      if (*plVar12 == 0) goto LAB_00c35de4;
      plVar10 = *(long **)(*plVar12 + 0x4c8);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
         (uVar5 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_LOCK_CAR_IN_THIS_MODE),
         plVar10 == (long *)0x0)) goto LAB_00c35de4;
      lVar6 = *plVar10;
    }
    (**(code **)(lVar6 + 0x5a8))(plVar10,uVar5,*(undefined8 *)(lVar6 + 0x5b0));
  }
  else {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
      lVar11 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar11 == 0) goto LAB_00c35de4;
    }
    if (99 < *(int *)(lVar11 + 0x10)) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
        lVar11 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar11 == 0) goto LAB_00c35de4;
      }
      if (*(long *)(lVar11 + 0x50) == 0) goto LAB_00c35de4;
      iVar1 = EventContest__get_car_id(*(long *)(lVar11 + 0x50),0);
      if (-1 < iVar1) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar11 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x50), lVar11 == 0)) goto LAB_00c35de4;
        iVar1 = EventContest__get_car_id(lVar11,0);
        goto LAB_00c35438;
      }
    }
    iVar1 = -1;
    iVar3 = -1;
    if (lVar6 == 0) goto LAB_00c354c0;
LAB_00c35448:
    iVar1 = iVar3;
    if (iVar1 != -1) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar11 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x50), lVar11 == 0)) goto LAB_00c35de4;
      iVar3 = EventContest__get_car_id(lVar11,0);
      if (iVar3 != *(int *)(lVar6 + 0x10)) goto LAB_00c354c0;
    }
    if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x478), lVar6 == 0)) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar6,0,0);
    if ((void *)*plVar12 == (void *)0x0) goto LAB_00c35de4;
    GUIGarage__PHKCLDLDABM((void *)*plVar12,true);
  }
LAB_00c35704:
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = *(long *)(_Main_TypeInfo + 0xb8);
  if (*(long *)(lVar6 + 0x40) != 0) {
    if (iVar1 == -1) {
      pvVar9 = Car__get_Current();
      if (pvVar9 == (void *)0x0) goto LAB_00c35de4;
      if (*(int *)((long)pvVar9 + 0x44) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        plVar10 = *(long **)(_Main_TypeInfo + 0xb8);
        lVar6 = plVar10[8];
        if (lVar6 == 0) goto LAB_00c35de4;
        if (0 < *(int *)(lVar6 + 0x10)) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            plVar10 = *(long **)(_Main_TypeInfo + 0xb8);
            lVar6 = plVar10[8];
            if (lVar6 == 0) goto LAB_00c35de4;
          }
          if ((*plVar10 == 0) || (lVar11 = *(long *)(*plVar10 + 0x28), lVar11 == 0))
          goto LAB_00c35de4;
          if (*(int *)(lVar6 + 0x10) < *(int *)(lVar11 + 0x18)) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              plVar10 = *(long **)(_Main_TypeInfo + 0xb8);
              lVar6 = plVar10[8];
              if (lVar6 == 0) goto LAB_00c35de4;
            }
            if (*(int *)((long)plVar10 + 0x2c) != *(int *)(lVar6 + 0x10)) {
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
              if ((lVar6 == 0) ||
                 (lVar11 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar11 == 0))
              goto LAB_00c35de4;
              lVar6 = DAFNMLEKHAD__DKJLCJPBPPN(lVar11,*(undefined4 *)(lVar6 + 0x10),1,0);
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
                if (lVar6 == 0) goto LAB_00c35de4;
                iVar1 = DAFNMLEKHAD__LOCFCFJIAIH(lVar6,0);
                plVar10 = *(long **)(_Main_TypeInfo + 0xb8);
                if (((*plVar10 == 0) || (lVar6 = plVar10[8], lVar6 == 0)) ||
                   (lVar11 = *(long *)(*plVar10 + 0x28), lVar11 == 0)) goto LAB_00c35de4;
                if (*(uint *)(lVar11 + 0x18) <= *(uint *)(lVar6 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                lVar11 = *(long *)(lVar11 + (long)(int)*(uint *)(lVar6 + 0x10) * 8 + 0x20);
                if (lVar11 == 0) goto LAB_00c35de4;
                if (*(int *)(lVar11 + 0x20) <= iVar1) {
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_Main_TypeInfo);
                    plVar10 = *(long **)(_Main_TypeInfo + 0xb8);
                    lVar6 = plVar10[8];
                    if (lVar6 == 0) goto LAB_00c35de4;
                  }
                  lVar11 = *plVar12;
                  if (lVar11 == 0) goto LAB_00c35de4;
                  if (*(int *)(lVar6 + 0x10) < *(int *)((long)plVar10 + 0x2c)) {
                    lVar6 = *(long *)(lVar11 + 0x438);
                    *(undefined1 *)(lVar11 + 0x470) = 1;
                  }
                  else {
                    lVar6 = *(long *)(lVar11 + 0x428);
                    *(undefined1 *)(lVar11 + 0x471) = 1;
                  }
                  if (lVar6 == 0) goto LAB_00c35de4;
                  UnityEngine_GameObject__SetActive(lVar6,1,0);
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
        lVar6 = *(long *)(_Main_TypeInfo + 0xb8);
      }
      if (iVar1 != *(int *)(lVar6 + 0x2c)) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar6 = *plVar12;
        if (lVar6 == 0) goto LAB_00c35de4;
        if (iVar1 < *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c)) {
          *(undefined1 *)(lVar6 + 0x470) = 1;
        }
        else {
          *(undefined1 *)(lVar6 + 0x471) = 1;
        }
      }
    }
  }
  if (*plVar12 != 0) {
    plVar10 = *(long **)(*plVar12 + 1000);
    pvVar9 = Car__get_Current();
    if ((pvVar9 != (void *)0x0) && (plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x5a8))
                (plVar10,*(undefined8 *)((long)pvVar9 + 0x10),*(undefined8 *)(*plVar10 + 0x5b0));
      if (*plVar12 != 0) {
        GUIGarage__FJCMAMFOKNL(*plVar12,0);
        Menu__CKPDEIAFHEC();
        Menu__CDFHCNMGCFI(pvVar7);
        Menu__INMDNKGHGEO(pvVar7);
        Menu__FMEHJALLGBK(pvVar7);
        uVar5 = *(undefined8 *)((long)pvVar7 + 0x70);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar8 & 1) != 0) {
          if (*(long *)((long)pvVar7 + 0x70) == 0) goto LAB_00c35de4;
          ConsoleTipsBottom__ABIEFKKDOGK(*(long *)((long)pvVar7 + 0x70),0);
        }
        return;
      }
    }
  }
LAB_00c35de4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonEncyclopedia() { }   @0xb0bf68

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonEncyclopedia(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916f73 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916f73 = 1;
  }
  if (*(long *)((long)__this + 0x180) != 0) {
    GUIWindow__HEGIHOAJOKK(*(long *)((long)__this + 0x180),0,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
       (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40) != 0)) {
      if ((bRam0000000001916ebe & 1) == 0) {
        func_0x00a67900(&Main_TypeInfo,0);
        func_0x00a67900(&Str_ANALYTICS__EncyclopediaOpen);
        func_0x00a67900(&Str_EncyclopediaOpen);
        bRam0000000001916ebe = 1;
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(_Str_ANALYTICS__EncyclopediaOpen,0,0);
      uVar2 = _Str_EncyclopediaOpen;
      uVar1 = System_String__IsNullOrEmpty(_Str_EncyclopediaOpen,0);
      if ((uVar1 & 1) == 0) {
        if (pcRam000000000191f018 == (code *)0x0) {
          pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
        }
        uVar1 = (*pcRam000000000191f018)();
        if ((uVar1 & 1) == 0) {
          return;
        }
        if (pcRam000000000191f028 == (code *)0x0) {
          pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
        }
                    /* WARNING: Could not recover jumptable at 0x016d8fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191f028)(uVar2);
        return;
      }
      func_0x00a67914(&System_ArgumentException_TypeInfo);
      uVar2 = func_0x00a67b44();
      uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
      System_ArgumentException___ctor(uVar2,uVar3,0);
      uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
      auVar5 = func_0x00a67a20(uVar2,uVar3);
      uVar2 = auVar5._0_8_;
      if ((bRam000000000191f039 & 1) == 0) {
        func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo);
        bRam000000000191f039 = 1;
      }
      uVar1 = System_String__IsNullOrEmpty(uVar2,0);
      if ((uVar1 & 1) != 0) {
        func_0x00a67914(&System_ArgumentException_TypeInfo);
        uVar2 = func_0x00a67b44();
        uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
        System_ArgumentException___ctor(uVar2,uVar3,0);
        uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
        func_0x00a67a20(uVar2,uVar3);
LAB_016d9194:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if (pcRam000000000191f018 == (code *)0x0) {
        pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
      }
      uVar1 = (*pcRam000000000191f018)();
      if ((uVar1 & 1) != 0) {
        if (auVar5._8_8_ == 0) {
          if (pcRam000000000191f028 == (code *)0x0) {
            pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
          }
                    /* WARNING: Could not recover jumptable at 0x016d9148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191f028)(uVar2);
          return;
        }
        lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
        UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar2);
        if (lVar4 == 0) goto LAB_016d9194;
        UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,auVar5._8_8_);
        if (pcRam000000000191f030 == (code *)0x0) {
          pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
        }
        (*pcRam000000000191f030)(lVar4);
        UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void MAKGMMFFGPG() { }   @0xb0c790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__MAKGMMFFGPG(void *__this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  int iStack_44;
  
  if ((bRam0000000001916f78 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916f78 = 1;
  }
  iStack_44 = 0;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Main_TypeInfo + 0xb8) != 0) &&
     (lVar6 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x40), lVar6 != 0)) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if ((int)uVar1 < 1) {
      iVar7 = 0;
    }
    else {
      uVar8 = 0;
      iVar7 = 0;
      do {
        if (uVar1 <= uVar8) goto LAB_00c0c974;
        lVar9 = *(long *)(lVar6 + (long)(int)uVar8 * 8 + 0x20);
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
        if ((lVar9 == 0) || (lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar2 == 0))
        goto LAB_00c0c970;
        uVar3 = DAFNMLEKHAD__HIFFBAOPBGD(lVar2,*(undefined4 *)(lVar9 + 0x10),0);
        if ((uVar3 & 1) != 0) {
          iVar7 = iVar7 + 1;
          iStack_44 = iVar7;
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
    if (0 < iVar7) {
      lVar6 = *(long *)((long)__this + 0x208);
      if (lVar6 == 0) goto LAB_00c0c970;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar1) {
        uVar8 = 0;
        do {
          if (uVar1 <= uVar8) goto LAB_00c0c974;
          plVar5 = *(long **)(lVar6 + (long)(int)uVar8 * 8 + 0x20);
          uVar4 = System_Int32__ToString(&iStack_44,0);
          if (plVar5 == (long *)0x0) goto LAB_00c0c970;
          (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x5b0));
          uVar1 = *(uint *)(lVar6 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar1);
      }
    }
    lVar6 = *(long *)((long)__this + 0x200);
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar1) {
        uVar8 = 0;
        do {
          if (uVar1 <= uVar8) {
LAB_00c0c974:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar9 = *(long *)(lVar6 + (long)(int)uVar8 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_00c0c970;
          UnityEngine_GameObject__SetActive(lVar9,0 < iStack_44,0);
          uVar1 = *(uint *)(lVar6 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar1);
      }
      return;
    }
  }
LAB_00c0c970:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonCredits() { }   @0xb0cb78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonCredits(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  long lStack_68;
  
  GUIGarage__NFPFKDAHPNE();
  pvVar5 = *(void **)((long)__this + 0xf0);
  if (pvVar5 == (void *)0x0) {
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
  lVar6 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar6 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar6 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x20) = _Str_Try_to_Show__;
  lVar7 = UnityEngine_Component__get_gameObject(pvVar5,0);
  if (lVar7 == 0) goto LAB_00c485b8;
  uVar8 = UnityEngine_Object__get_name(lVar7,0);
  if ((*(uint *)(lVar6 + 0x18) < 2) ||
     (*(undefined8 *)(lVar6 + 0x28) = uVar8, *(uint *)(lVar6 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x30) = _Str___current__;
  uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  uVar8 = _Str_null;
  if ((uVar9 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar8 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar6 + 0x18) < 4) ||
     (*(undefined8 *)(lVar6 + 0x38) = uVar8, *(uint *)(lVar6 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x40) = _Str___last__;
  uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  uVar8 = _Str_null;
  if ((uVar9 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_00c485b8;
    uVar8 = UnityEngine_Object__get_name(lVar7,0);
  }
  uVar4 = *(uint *)(lVar6 + 0x18);
  if ((uVar4 < 6) || (*(undefined8 *)(lVar6 + 0x48) = uVar8, uVar4 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x50) = _Str____Child__;
  plVar10 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar8 = 0;
  if (plVar10 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    uVar4 = *(uint *)(lVar6 + 0x18);
  }
  if (uVar4 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x58) = uVar8;
  uVar8 = System_String__Concat(lVar6,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar8,0,0);
  uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Equality(uVar8,pvVar5,0);
  if ((uVar9 & 1) != 0) {
    uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar8,0,0);
    if ((uVar9 & 1) != 0) {
      return;
    }
  }
  uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Equality(uVar8,pvVar5,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  lVar6 = _GUIWindow_TypeInfo;
  if ((uVar9 & 1) != 0) {
    lVar6 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar6 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar6,0);
    lVar6 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar8 = **(undefined8 **)(lVar6 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar9 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  lVar6 = GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar9 = UnityEngine_Object__op_Inequality(lVar6,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(char *)((long)pvVar5 + 0x20) == '\0') {
      if (lVar6 == 0) goto LAB_00c485b8;
      uVar9 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar9 & 1) == 0) goto LAB_00c46b74;
      uVar15 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar15;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if (((uVar9 & 1) != 0) && (*(char *)((long)pvVar5 + 0x21) != '\0')) {
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
      uVar8 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar6,uVar8,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar8 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar9 & 1) != 0) {
        if (*(char *)((long)pvVar5 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
          goto LAB_00c485b8;
          uVar9 = AdvController__EDNAEPDDBPJ(lVar6,0);
          if ((uVar9 & 1) != 0) {
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
            uVar8 = *(undefined8 *)(lVar6 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar9 = UnityEngine_Object__op_Equality(pvVar5,uVar8,0);
            if ((uVar9 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0)
                 ) goto LAB_00c485b8;
              uVar8 = *(undefined8 *)(lVar6 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar9 = UnityEngine_Object__op_Equality(pvVar5,uVar8,0);
              if ((uVar9 & 1) != 0) {
                if (1.61 <= fVar14) {
                  if ((fVar14 <= 1.61) || (1.8 <= fVar14)) {
                    if (fVar14 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar6 == 0)) goto LAB_00c485b8;
                    uVar8 = *(undefined8 *)(lVar6 + 0x70);
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
                    uVar8 = *(undefined8 *)(lVar6 + 0x70);
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
                  uVar8 = *(undefined8 *)(lVar6 + 0x70);
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
                  uVar9 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar6 + 0x240),0);
                  if ((uVar9 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar6 == 0)) goto LAB_00c485b8;
                  uVar8 = *(undefined8 *)(lVar6 + 0x60);
                  uVar16 = 0x3f51eb85;
                  uVar15 = 0x41a00000;
                }
                else {
                  uVar8 = *(undefined8 *)(lVar6 + 0x60);
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
                uVar8 = *(undefined8 *)(lVar6 + 0x60);
                uVar15 = 0xc0a00000;
                uVar16 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar15,uVar16,pvVar5,uVar8);
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
        GUIWindow__IPELKJAHFGL(pvVar5);
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
    uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar9 & 1) != 0) {
        if (*(char *)((long)pvVar5 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(pvVar5);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
          goto LAB_00c485b8;
          uVar9 = AdvController__EDNAEPDDBPJ(lVar6,0);
          if ((uVar9 & 1) == 0) goto LAB_00c47120;
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
            uVar8 = *(undefined8 *)(lVar6 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar9 = UnityEngine_Object__op_Equality(pvVar5,uVar8,0);
            if ((uVar9 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
              goto LAB_00c485b8;
              uVar8 = *(undefined8 *)(lVar6 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar9 = UnityEngine_Object__op_Equality(pvVar5,uVar8,0);
              if ((uVar9 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                goto LAB_00c485b8;
                uVar8 = *(undefined8 *)(lVar6 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar9 = UnityEngine_Object__op_Equality(pvVar5,uVar8,0);
                if ((uVar9 & 1) == 0) {
                  lVar6 = UnityEngine_Component__get_gameObject(pvVar5,0);
                  if (lVar6 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar6,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar6 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar9 = UnityEngine_Object__op_Inequality(lVar6,0,0);
                  if ((uVar9 & 1) != 0) {
                    if (lVar6 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar6 + 0x2c) == 3) {
                      lVar6 = UnityEngine_Component__get_gameObject(pvVar5,0);
                      if (lVar6 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar6,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar9 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar9 & 1) != 0) {
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
            GUIWindow__EPGDFDEPGCB(uVar15,uVar16,pvVar5,lStack_68);
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
      uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar9 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
        if ((uVar9 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
          if ((uVar9 & 1) != 0) {
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
              uVar9 = DAFNMLEKHAD__MHBEPDHNNFH(lVar6,0);
              if ((uVar9 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
                goto LAB_00c485b8;
                uVar8 = *(undefined8 *)(lVar6 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar9 = UnityEngine_Object__op_Equality(uVar8,0,0);
                if ((uVar9 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                  goto LAB_00c485b8;
                  uVar8 = *(undefined8 *)(lVar6 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar9 = UnityEngine_Object__op_Equality(pvVar5,uVar8,0);
                  if ((uVar9 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 == 0))
                    goto LAB_00c485b8;
                    uVar8 = *(undefined8 *)(lVar6 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar8 = UnityEngine_Object__Instantiate_object_
                                      (uVar8,_Method_UnityEngine_Object_Instantiate_GameObject___);
                    *(undefined8 *)(lVar6 + 0x90) = uVar8;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar6 = UnityEngine_Component__get_gameObject(pvVar5,0);
  if (lVar6 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar6,1,0);
  puVar12 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar12[2] = *puVar12;
  *puVar12 = pvVar5;
  if (*(char *)((long)pvVar5 + 0x23) != '\0') {
    pvVar11 = GUIWindow__FAAELIPKLCB(pvVar5);
    UnityEngine_MonoBehaviour__StartCoroutine(pvVar5,pvVar11,0);
  }
  lVar6 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar6 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar6 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar6 + 0x20) = _Str_Window__Show__;
  uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  uVar8 = _Str_null;
  if ((uVar9 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar8 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar6 + 0x18) < 2) ||
     (*(undefined8 *)(lVar6 + 0x28) = uVar8, *(uint *)(lVar6 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x30) = _Str___last__;
  uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  uVar8 = _Str_null;
  if ((uVar9 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_00c485b8;
    uVar8 = UnityEngine_Object__get_name(lVar7,0);
  }
  uVar4 = *(uint *)(lVar6 + 0x18);
  if ((uVar4 < 4) || (*(undefined8 *)(lVar6 + 0x38) = uVar8, uVar4 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x40) = _Str____Child__;
  plVar10 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar8 = 0;
  if (plVar10 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    uVar4 = *(uint *)(lVar6 + 0x18);
  }
  if (uVar4 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x48) = uVar8;
  uVar8 = System_String__Concat(lVar6,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar8,0,0);
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
    uVar8 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar9 & 1) != 0) {
      uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
      uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
      if ((uVar9 & 1) == 0) {
        uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
        uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
        if ((uVar9 & 1) == 0) {
          uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
          uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
          if ((uVar9 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (pvVar5 = *(void **)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
               pvVar5 == (void *)0x0)) goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(pvVar5);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
          goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(lVar6,0);
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
        lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((lVar7 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar7,0), lVar6 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar6,uVar4 & 1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar9 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar9 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar9 = GUIGarage__ABAHNKCPCFA(lVar6,0);
    if ((uVar9 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
        (lVar6 = *(long *)(lVar6 + 0x78), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c485b8;
    uVar9 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar9 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
         ((lVar6 = *(long *)(lVar6 + 0x70), lVar6 == 0 ||
          (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c485b8;
      uVar9 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar9 & 1) != 0) goto LAB_00c47948;
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
         (pvVar11 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar11 == (void *)0x0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(pvVar11);
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
      lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((lVar7 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar7,0), lVar6 == 0))
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
    uVar9 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar9 & 1) == 0) {
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
    UnityEngine_GameObject__SetActive(lVar6,*(undefined1 *)((long)pvVar5 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar8 = *(undefined8 *)(lVar6 + 0x78);
    uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar13,uVar8,0);
    if ((uVar9 & 1) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
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
      uVar9 = UnityEngine_Object__op_Inequality(uVar8,uVar13,0);
      if ((uVar9 & 1) != 0) {
        uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
        if ((uVar9 & 1) != 0) {
          uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
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
          uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
          if ((uVar9 & 1) != 0) {
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
    uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
    uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
    if ((uVar9 & 1) == 0) {
      uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
      uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
      if ((uVar9 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (pvVar5 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar5 == (void *)0x0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(pvVar5);
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
      uVar9 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar6,0);
      if ((uVar9 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
          if ((uVar9 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar6 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar6 == 0) goto LAB_00c485b8;
            uVar9 = UnityEngine_AudioSource__get_isPlaying(lVar6,0);
            if ((uVar9 & 1) == 0) {
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
         (pvVar5 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar5 == (void *)0x0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(pvVar5);
    }
    uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
    uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
    if ((uVar9 & 1) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar9 = UnityEngine_Object__op_Equality(uVar8,0,0);
      if ((uVar9 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
          goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(lVar6,0,0);
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
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    Menu__GDEFDCOIDNM(**(long **)(_Menu_TypeInfo + 0xb8),0);
    return;
  }
LAB_00c485b8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonSettingsGooglePlay() { }   @0xb0d5c4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonSettingsGooglePlay(void *__this)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  byte abStack_44 [12];
  long lStack_38;
  
  if ((bRam0000000001916f80 & 1) == 0) {
    func_0x00a67900(&UnityEngine_SocialPlatforms_ILocalUser_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f80 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar2 & 1) != 0) {
      plVar3 = (long *)UnityEngine_Social__get_localUser(0);
      if (plVar3 == (long *)0x0) goto LAB_00c0d714;
      lVar5 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _UnityEngine_SocialPlatforms_ILocalUser_TypeInfo) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_00c0d6c4;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)
               func_0x00a9e6c4(plVar3,_UnityEngine_SocialPlatforms_ILocalUser_TypeInfo,0);
LAB_00c0d6c4:
      uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), lVar5 == 0))
        goto LAB_00c0d714;
        BridgePHP__SocialLogin(lVar5,0);
      }
    }
    if ((bRam0000000001916f8b & 1) == 0) {
      func_0x00a67900(&bool_TypeInfo);
      func_0x00a67900(&BridgePHP_TypeInfo);
      func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Button___);
      func_0x00a67900(&UnityEngine_SocialPlatforms_ILocalUser_TypeInfo);
      func_0x00a67900(&Main_TypeInfo);
      func_0x00a67900(&Translate_TypeInfo);
      func_0x00a67900(&Str_DISCONNECTED);
      func_0x00a67900(&Str_CONNECTED);
      func_0x00a67900(&Str_UpdateGooglePlayButton__Auth_1__);
      bRam0000000001916f8b = 1;
    }
    plVar3 = (long *)UnityEngine_Social__get_localUser(0);
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _UnityEngine_SocialPlatforms_ILocalUser_TypeInfo) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_00c0d814;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)
               func_0x00a9e6c4(plVar3,_UnityEngine_SocialPlatforms_ILocalUser_TypeInfo,0);
LAB_00c0d814:
      uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar2 & 1) == 0) {
        bVar1 = true;
      }
      else {
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        bVar1 = *(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2b) == '\0';
      }
      plVar3 = (long *)UnityEngine_Social__get_localUser(0);
      if (plVar3 != (long *)0x0) {
        lVar5 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == _UnityEngine_SocialPlatforms_ILocalUser_TypeInfo) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_00c0d8bc;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)
                 func_0x00a9e6c4(plVar3,_UnityEngine_SocialPlatforms_ILocalUser_TypeInfo,0);
LAB_00c0d8bc:
        abStack_44[0] = (*(code *)*puVar4)(plVar3,puVar4[1]);
        abStack_44[0] = abStack_44[0] & 1;
        if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_bool_TypeInfo);
        }
        uVar7 = System_Boolean__ToString(abStack_44,0);
        uVar7 = System_String__Concat(_Str_UpdateGooglePlayButton__Auth_1__,uVar7,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        Main__GEMDEAMAGPG(uVar7,0,0);
        plVar3 = *(long **)((long)__this + 0x7b8);
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar5 = **(long **)(_Translate_TypeInfo + 0xb8);
        if (lVar5 != 0) {
          if (bVar1) {
            uVar7 = Translate__JJJNIPAKLJF(lVar5,_Str_DISCONNECTED,0);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x5a8))(plVar3,uVar7,*(undefined8 *)(*plVar3 + 0x5b0));
              if (*(long *)((long)__this + 0x7b0) != 0) {
                UnityEngine_UI_Image__set_sprite
                          (*(long *)((long)__this + 0x7b0),*(undefined8 *)((long)__this + 0x7c8),0);
                return;
              }
            }
          }
          else {
            uVar7 = Translate__JJJNIPAKLJF(lVar5,_Str_CONNECTED,0);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x5a8))(plVar3,uVar7,*(undefined8 *)(*plVar3 + 0x5b0));
              if (*(long *)((long)__this + 0x7b0) != 0) {
                UnityEngine_UI_Image__set_sprite
                          (*(long *)((long)__this + 0x7b0),*(undefined8 *)((long)__this + 0x7c0),0);
                if ((((*(long *)((long)__this + 0x7b0) != 0) &&
                     (lVar5 = UnityEngine_Component__get_transform
                                        (*(long *)((long)__this + 0x7b0),0), lVar5 != 0)) &&
                    (lVar5 = UnityEngine_Transform__get_parent(lVar5,0), lVar5 != 0)) &&
                   (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                              (lVar5,&lStack_38,_Method_UnityEngine_Component_GetComponent_Button___
                              ), lStack_38 != 0)) {
                  UnityEngine_UI_Selectable__set_interactable(lStack_38,0,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
LAB_00c0d714:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void BCDFPFLJKPJ(APJHDPJBJLL GIHDNMOMBIG, bool BKIACHLBBFA) { }   @0xb08c48

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__BCDFPFLJKPJ(void *__this,int GIHDNMOMBIG,bool BKIACHLBBFA)

{
  long lVar1;
  
  lVar1 = *(long *)((long)__this + 0x660);
  *(bool *)((long)__this + 0x6cc) = BKIACHLBBFA;
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) <= (uint)GIHDNMOMBIG) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar1 = *(long *)(lVar1 + (long)GIHDNMOMBIG * 8 + 0x20);
    if (lVar1 != 0) {
      UnityEngine_UI_Toggle__set_isOn(lVar1,1,0);
      *(int *)((long)__this + 0x6c8) = GIHDNMOMBIG;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonCheatTestAccount() { }   @0xb0e394

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonCheatTestAccount(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000001916f87 & 1) == 0) {
    func_0x00a67900(&Method_System_Array_Empty_object___);
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_test_account);
    bRam0000000001916f87 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined8 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x10) = _Str_test_account;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = _Method_System_Array_Empty_object___;
    if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
      lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
      lVar4 = *(long *)(_Method_System_Array_Empty_object___ + 0x38);
      if (lVar4 == 0) {
        func_0x00a9e42c(_Method_System_Array_Empty_object___);
        lVar4 = *(long *)(lVar2 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = func_0x00a9e3d0();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = func_0x00a9e3d0();
      }
      if (lVar6 != 0) {
        uVar5 = **(undefined8 **)(lVar2 + 0xb8);
        if ((bRam0000000001916e14 & 1) == 0) {
          func_0x00a67900(&BridgePHP_TypeInfo,0,uVar5,0);
          func_0x00a67900(&Str_);
          bRam0000000001916e14 = 1;
        }
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = System_String__op_Inequality
                          (*(undefined8 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x10),_Str_,0);
        if ((uVar1 & 1) == 0) {
          return;
        }
        if ((*(long *)(lVar6 + 0x68) != 0) && (*(char *)(lVar6 + 0x7b) != '\0')) {
          *(undefined8 *)(lVar6 + 0x28) = 0;
          BridgePHP__StopServerConnect(lVar6);
        }
        lVar2 = BridgePHP__ServerConnect(lVar6,0,uVar5);
        *(long *)(lVar6 + 0x68) = lVar2;
        if (lVar2 == 0) {
          func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
          uVar3 = func_0x00a67b44();
          uVar5 = func_0x00a67914(&Str_routine_is_null);
          System_NullReferenceException___ctor(uVar3,uVar5,0);
        }
        else {
          if (pcRam000000000191c478 == (code *)0x0) {
            pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
          }
          uVar1 = (*pcRam000000000191c478)(lVar6);
          if ((uVar1 & 1) != 0) {
            if (pcRam000000000191c488 == (code *)0x0) {
              pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
            }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam000000000191c488)(lVar6,lVar2);
            return;
          }
          func_0x00a67914(&System_ArgumentException_TypeInfo);
          uVar3 = func_0x00a67b44();
          uVar5 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
          System_ArgumentException___ctor(uVar3,uVar5,0);
        }
        uVar5 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
        auVar7 = func_0x00a67a20(uVar3,uVar5);
        if (pcRam000000000191c488 == (code *)0x0) {
          pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
        }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191c488)(auVar7._0_8_,auVar7._8_8_);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void MLEEOPKCMBP() { }   @0xb0d718

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__MLEEOPKCMBP(void *__this)

{
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  byte abStack_44 [4];
  long lStack_38;
  
  if ((bRam0000000001916f8b & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Button___);
    func_0x00a67900(&UnityEngine_SocialPlatforms_ILocalUser_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_DISCONNECTED);
    func_0x00a67900(&Str_CONNECTED);
    func_0x00a67900(&Str_UpdateGooglePlayButton__Auth_1__);
    bRam0000000001916f8b = 1;
  }
  plVar2 = (long *)UnityEngine_Social__get_localUser(0);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _UnityEngine_SocialPlatforms_ILocalUser_TypeInfo) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_00c0d814;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             func_0x00a9e6c4(plVar2,_UnityEngine_SocialPlatforms_ILocalUser_TypeInfo,0);
LAB_00c0d814:
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      bVar1 = true;
    }
    else {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      bVar1 = *(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2b) == '\0';
    }
    plVar2 = (long *)UnityEngine_Social__get_localUser(0);
    if (plVar2 != (long *)0x0) {
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _UnityEngine_SocialPlatforms_ILocalUser_TypeInfo) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00c0d8bc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)
               func_0x00a9e6c4(plVar2,_UnityEngine_SocialPlatforms_ILocalUser_TypeInfo,0);
LAB_00c0d8bc:
      abStack_44[0] = (*(code *)*puVar3)(plVar2,puVar3[1]);
      abStack_44[0] = abStack_44[0] & 1;
      if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_bool_TypeInfo);
      }
      uVar4 = System_Boolean__ToString(abStack_44,0);
      uVar4 = System_String__Concat(_Str_UpdateGooglePlayButton__Auth_1__,uVar4,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      Main__GEMDEAMAGPG(uVar4,0,0);
      plVar2 = *(long **)((long)__this + 0x7b8);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar5 = **(long **)(_Translate_TypeInfo + 0xb8);
      if (lVar5 != 0) {
        if (bVar1) {
          uVar4 = Translate__JJJNIPAKLJF(lVar5,_Str_DISCONNECTED,0);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x5a8))(plVar2,uVar4,*(undefined8 *)(*plVar2 + 0x5b0));
            if (*(long *)((long)__this + 0x7b0) != 0) {
              UnityEngine_UI_Image__set_sprite
                        (*(long *)((long)__this + 0x7b0),*(undefined8 *)((long)__this + 0x7c8),0);
              return;
            }
          }
        }
        else {
          uVar4 = Translate__JJJNIPAKLJF(lVar5,_Str_CONNECTED,0);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x5a8))(plVar2,uVar4,*(undefined8 *)(*plVar2 + 0x5b0));
            if (*(long *)((long)__this + 0x7b0) != 0) {
              UnityEngine_UI_Image__set_sprite
                        (*(long *)((long)__this + 0x7b0),*(undefined8 *)((long)__this + 0x7c0),0);
              if ((((*(long *)((long)__this + 0x7b0) != 0) &&
                   (lVar5 = UnityEngine_Component__get_transform(*(long *)((long)__this + 0x7b0),0),
                   lVar5 != 0)) && (lVar5 = UnityEngine_Transform__get_parent(lVar5,0), lVar5 != 0))
                 && (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                               (lVar5,&lStack_38,
                                _Method_UnityEngine_Component_GetComponent_Button___),
                    lStack_38 != 0)) {
                UnityEngine_UI_Selectable__set_interactable(lStack_38,0,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void ButtonLogsShow() { }   @0xb10290

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonLogsShow(void *__this)

{
  long lVar1;
  
  lVar1 = *(long *)((long)__this + 0x1a8);
  if (lVar1 != 0) {
    if (pcRam000000000191c3f8 == (code *)0x0) {
      pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
    }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c3f8)(lVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void PHKCLDLDABM(bool MDIDBDKGGJI) { }   @0xb10c78

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__PHKCLDLDABM(void *__this,bool MDIDBDKGGJI)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float in_s1;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  
  if (*(char *)((long)__this + 0x630) == '\0') {
    lVar1 = *(long *)((long)__this + 0x638);
    if (MDIDBDKGGJI) {
      if (lVar1 == 0) goto LAB_00c10d98;
      UnityEngine_RectTransform__get_anchoredPosition(lVar1,0);
      if (in_s1 == 0.0) {
        return;
      }
    }
    else {
      if (lVar1 == 0) goto LAB_00c10d98;
      UnityEngine_RectTransform__get_anchoredPosition(lVar1,0);
      if (in_s1 == -300.0) {
        return;
      }
    }
    if (*(long *)((long)__this + 0x628) != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine(__this,*(long *)((long)__this + 0x628),0);
    }
    lVar1 = *(long *)((long)__this + 0x638);
    if (lVar1 != 0) {
      UnityEngine_RectTransform__get_anchoredPosition(lVar1,0);
      lVar1 = GUIGarage__OFMEDMJLPNE(__this,lVar1,0);
      *(long *)((long)__this + 0x628) = lVar1;
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
      auVar6 = func_0x00a67a20(uVar3,uVar4);
      if (pcRam000000000191c488 == (code *)0x0) {
        pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
      }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c488)(auVar6._0_8_,auVar6._8_8_);
      return;
    }
  }
  else {
    *(undefined1 *)((long)__this + 0x630) = 0;
    if (*(long *)((long)__this + 0x638) != 0) {
      uVar5 = 0;
      if (!MDIDBDKGGJI) {
        uVar5 = 0xc3960000;
      }
      UnityEngine_RectTransform__set_anchoredPosition(0,uVar5,*(long *)((long)__this + 0x638),0);
      if ((*(long *)((long)__this + 0x638) != 0) &&
         (lVar1 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x638),0),
         lVar1 != 0)) {
        if (pcRam000000000191c3f8 == (code *)0x0) {
          pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
        }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191c3f8)(lVar1,MDIDBDKGGJI);
        return;
      }
    }
  }
LAB_00c10d98:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonCheatRemoveCar() { }   @0xb1105c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonCheatRemoveCar(void *__this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  void *__this_00;
  ulong uVar6;
  void *pvVar7;
  long *plVar8;
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
  
  if ((bRam0000000001916f96 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916f96 = 1;
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
LAB_00c11198:
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
  if (lVar5 == 0) goto LAB_00c11198;
  DAFNMLEKHAD__BHPNOGJCDKD(lVar5,0xffffffff,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  __this_00 = (void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (__this_00 == (void *)0x0) goto LAB_00c11198;
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
     (lVar5 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar5 == 0)) goto LAB_00c35de4;
  iVar2 = *(int *)(lVar5 + 0x18);
  plVar11 = (long *)((long)__this_00 + 0x20);
  if (*plVar11 == 0) goto LAB_00c35de4;
  uVar10 = *(undefined8 *)(*plVar11 + 0x430);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar6 & 1) != 0) {
    if (*plVar11 == 0) goto LAB_00c35de4;
    lVar5 = *(long *)(*plVar11 + 0x430);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (lVar5 == 0) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive
              (lVar5,*(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) != 0,0);
  }
  if (*plVar11 == 0) goto LAB_00c35de4;
  uVar10 = *(undefined8 *)(*plVar11 + 0x420);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar6 & 1) != 0) {
    if (*plVar11 == 0) goto LAB_00c35de4;
    lVar5 = *(long *)(*plVar11 + 0x420);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iVar3 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
    uVar1 = Car__NBMGBADFACE(0);
    if (lVar5 == 0) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar5,iVar3 < (int)((iVar2 - (~uVar1 & 1)) + -2),0);
  }
  if ((*plVar11 == 0) || (lVar5 = *(long *)(*plVar11 + 0x428), lVar5 == 0)) goto LAB_00c35de4;
  UnityEngine_GameObject__SetActive(lVar5,0,0);
  if ((*plVar11 == 0) || (lVar5 = *(long *)(*plVar11 + 0x438), lVar5 == 0)) goto LAB_00c35de4;
  UnityEngine_GameObject__SetActive(lVar5,0,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = *(long *)(_Main_TypeInfo + 0xb8);
  lVar9 = *(long *)(lVar5 + 0x40);
  if (lVar9 != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar5 = *(long *)(_Main_TypeInfo + 0xb8);
      lVar9 = *(long *)(lVar5 + 0x40);
      if (lVar9 == 0) goto LAB_00c35de4;
    }
    if (*(int *)(lVar9 + 0x10) == 1) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar5 = *(long *)(_Main_TypeInfo + 0xb8);
      }
      if (*(int *)(lVar5 + 0x2c) == 1) {
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
        if (lVar5 == 0) goto LAB_00c35de4;
        lVar5 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar5,1,0);
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
          lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if ((lVar5 == 0) || (lVar5 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar5,1,0), lVar5 == 0))
          goto LAB_00c35de4;
          uVar6 = DJKGLJOCFCE__MCDLFBJCNNA(lVar5,0);
          if ((uVar6 & 1) == 0) {
            if ((*plVar11 == 0) || (lVar5 = *(long *)(*plVar11 + 0x430), lVar5 == 0))
            goto LAB_00c35de4;
            UnityEngine_GameObject__SetActive(lVar5,0,0);
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
  lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar5 == 0) goto LAB_00c35de4;
  iVar2 = -1;
  lVar5 = DAFNMLEKHAD__DKJLCJPBPPN(lVar5,0xffffffff,1,0);
  lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar9 == 0) {
LAB_00c35438:
    iVar3 = iVar2;
    if (lVar5 != 0) goto LAB_00c35448;
LAB_00c354c0:
    if ((*plVar11 == 0) || (lVar5 = *(long *)(*plVar11 + 0x478), lVar5 == 0)) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar5,1,0);
    if ((void *)*plVar11 == (void *)0x0) goto LAB_00c35de4;
    GUIGarage__PHKCLDLDABM((void *)*plVar11,false);
    if (iVar2 == -1) {
      pvVar7 = Car__get_Current();
      if (pvVar7 == (void *)0x0) goto LAB_00c35de4;
      if (*(int *)((long)pvVar7 + 0x44) != 0) goto LAB_00c3550c;
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
      if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x120), lVar5 == 0)) goto LAB_00c35de4;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                (lVar5,&lStack_a8,
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
        lVar5 = lStack_a8;
        if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        iVar3 = *(int *)(lStack_a8 + 0x10);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (iVar3 == *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) + -1) {
          uVar4 = DJKGLJOCFCE__MCDLFBJCNNA(lVar5,0);
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
        pvVar7 = Car__get_Current();
        if ((pvVar7 == (void *)0x0) || (*plVar11 == 0)) goto LAB_00c35de4;
        plVar8 = *(long **)(*plVar11 + 0x488);
        if (*(int *)((long)pvVar7 + 0x20) < 1) {
          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
             (uVar10 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_CLAIM), plVar8 == (long *)0x0
             )) goto LAB_00c35de4;
          (**(code **)(*plVar8 + 0x5a8))(plVar8,uVar10,*(undefined8 *)(*plVar8 + 0x5b0));
          if ((*plVar11 == 0) || (lVar5 = *(long *)(*plVar11 + 0x490), lVar5 == 0))
          goto LAB_00c35de4;
          UnityEngine_GameObject__SetActive(lVar5,0,0);
        }
        else {
          pvVar7 = Car__get_Current();
          if ((pvVar7 == (void *)0x0) ||
             (uVar10 = System_Int32__ToString((long)pvVar7 + 0x20,0), plVar8 == (long *)0x0))
          goto LAB_00c35de4;
          (**(code **)(*plVar8 + 0x5a8))(plVar8,uVar10,*(undefined8 *)(*plVar8 + 0x5b0));
        }
        if ((*plVar11 == 0) || (lVar5 = *(long *)(*plVar11 + 0x480), lVar5 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar5,1,0);
        if ((*plVar11 == 0) || (lVar5 = *(long *)(*plVar11 + 0x4c0), lVar5 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar5,1,0);
        if ((*plVar11 == 0) || (lVar5 = *(long *)(*plVar11 + 0x498), lVar5 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar5,0,0);
        if ((*plVar11 == 0) || (lVar5 = *(long *)(*plVar11 + 0x4a0), lVar5 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar5,0,0);
        if ((*plVar11 == 0) || (lVar5 = *(long *)(*plVar11 + 0x4b8), lVar5 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar5,0,0);
        goto LAB_00c35704;
      }
      lVar5 = *plVar11;
      if (lVar5 == 0) goto LAB_00c35de4;
      *(undefined1 *)(lVar5 + 0x470) = 1;
      if (*(long *)(lVar5 + 0x480) == 0) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(*(long *)(lVar5 + 0x480),0,0);
      if ((*plVar11 == 0) || (lVar5 = *(long *)(*plVar11 + 0x498), lVar5 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar5,0,0);
      if ((*plVar11 == 0) || (lVar5 = *(long *)(*plVar11 + 0x4a0), lVar5 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar5,0,0);
      if ((*plVar11 == 0) || (lVar5 = *(long *)(*plVar11 + 0x4c0), lVar5 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar5,1,0);
      if ((*plVar11 == 0) || (lVar5 = *(long *)(*plVar11 + 0x4b8), lVar5 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar5,1,0);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c35de4;
      lVar5 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_LOCK_CAR_TEXT);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      uVar10 = System_Int32__ToString(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c,0);
LAB_00c35640:
      uVar10 = System_String__Concat(_Str__color__faaf32_,uVar10,_Str___color_,0);
      if (lVar5 == 0) goto LAB_00c35de4;
      uVar10 = System_String__Replace(lVar5,_Str__x_,uVar10,0);
      if ((*plVar11 == 0) || (plVar8 = *(long **)(*plVar11 + 0x4c8), plVar8 == (long *)0x0))
      goto LAB_00c35de4;
      lVar5 = *plVar8;
    }
    else {
LAB_00c3550c:
      pvVar7 = Car__get_Current();
      if (((pvVar7 == (void *)0x0) || (*plVar11 == 0)) ||
         (lVar5 = *(long *)(*plVar11 + 0x480), lVar5 == 0)) goto LAB_00c35de4;
      iVar3 = *(int *)((long)pvVar7 + 0x44);
      UnityEngine_GameObject__SetActive(lVar5,0,0);
      if ((*plVar11 == 0) || (lVar5 = *(long *)(*plVar11 + 0x498), lVar5 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar5,0,0);
      if ((*plVar11 == 0) || (lVar5 = *(long *)(*plVar11 + 0x4a0), lVar5 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar5,0,0);
      if ((*plVar11 == 0) || (lVar5 = *(long *)(*plVar11 + 0x4c0), lVar5 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar5,1,0);
      if ((*plVar11 == 0) || (lVar5 = *(long *)(*plVar11 + 0x4b8), lVar5 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar5,1,0);
      if (iVar3 != 0) {
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c35de4;
        lVar5 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_EVENT_CAR_UNLOCK);
        lVar9 = **(long **)(_Translate_TypeInfo + 0xb8);
        pvVar7 = Car__get_Current();
        if (pvVar7 == (void *)0x0) goto LAB_00c35de4;
        uStack_64 = *(undefined4 *)((long)pvVar7 + 0x44);
        uVar10 = System_Int32__ToString(&uStack_64,0);
        uVar10 = System_String__Concat(_Str_EVENT_,uVar10,0);
        if (lVar9 == 0) goto LAB_00c35de4;
        uVar10 = Translate__JJJNIPAKLJF(uVar10,uVar10);
        goto LAB_00c35640;
      }
      if (*plVar11 == 0) goto LAB_00c35de4;
      plVar8 = *(long **)(*plVar11 + 0x4c8);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
         (uVar10 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_LOCK_CAR_IN_THIS_MODE),
         plVar8 == (long *)0x0)) goto LAB_00c35de4;
      lVar5 = *plVar8;
    }
    (**(code **)(lVar5 + 0x5a8))(plVar8,uVar10,*(undefined8 *)(lVar5 + 0x5b0));
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
    if (lVar5 == 0) goto LAB_00c354c0;
LAB_00c35448:
    iVar2 = iVar3;
    if (iVar2 != -1) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x50), lVar9 == 0)) goto LAB_00c35de4;
      iVar3 = EventContest__get_car_id(lVar9,0);
      if (iVar3 != *(int *)(lVar5 + 0x10)) goto LAB_00c354c0;
    }
    if ((*plVar11 == 0) || (lVar5 = *(long *)(*plVar11 + 0x478), lVar5 == 0)) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar5,0,0);
    if ((void *)*plVar11 == (void *)0x0) goto LAB_00c35de4;
    GUIGarage__PHKCLDLDABM((void *)*plVar11,true);
  }
LAB_00c35704:
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = *(long *)(_Main_TypeInfo + 0xb8);
  if (*(long *)(lVar5 + 0x40) != 0) {
    if (iVar2 == -1) {
      pvVar7 = Car__get_Current();
      if (pvVar7 == (void *)0x0) goto LAB_00c35de4;
      if (*(int *)((long)pvVar7 + 0x44) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        plVar8 = *(long **)(_Main_TypeInfo + 0xb8);
        lVar5 = plVar8[8];
        if (lVar5 == 0) goto LAB_00c35de4;
        if (0 < *(int *)(lVar5 + 0x10)) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            plVar8 = *(long **)(_Main_TypeInfo + 0xb8);
            lVar5 = plVar8[8];
            if (lVar5 == 0) goto LAB_00c35de4;
          }
          if ((*plVar8 == 0) || (lVar9 = *(long *)(*plVar8 + 0x28), lVar9 == 0)) goto LAB_00c35de4;
          if (*(int *)(lVar5 + 0x10) < *(int *)(lVar9 + 0x18)) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              plVar8 = *(long **)(_Main_TypeInfo + 0xb8);
              lVar5 = plVar8[8];
              if (lVar5 == 0) goto LAB_00c35de4;
            }
            if (*(int *)((long)plVar8 + 0x2c) != *(int *)(lVar5 + 0x10)) {
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
              lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
              if ((lVar5 == 0) ||
                 (lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar9 == 0))
              goto LAB_00c35de4;
              lVar5 = DAFNMLEKHAD__DKJLCJPBPPN(lVar9,*(undefined4 *)(lVar5 + 0x10),1,0);
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
                if (lVar5 == 0) goto LAB_00c35de4;
                iVar2 = DAFNMLEKHAD__LOCFCFJIAIH(lVar5,0);
                plVar8 = *(long **)(_Main_TypeInfo + 0xb8);
                if (((*plVar8 == 0) || (lVar5 = plVar8[8], lVar5 == 0)) ||
                   (lVar9 = *(long *)(*plVar8 + 0x28), lVar9 == 0)) goto LAB_00c35de4;
                if (*(uint *)(lVar9 + 0x18) <= *(uint *)(lVar5 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                lVar9 = *(long *)(lVar9 + (long)(int)*(uint *)(lVar5 + 0x10) * 8 + 0x20);
                if (lVar9 == 0) goto LAB_00c35de4;
                if (*(int *)(lVar9 + 0x20) <= iVar2) {
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_Main_TypeInfo);
                    plVar8 = *(long **)(_Main_TypeInfo + 0xb8);
                    lVar5 = plVar8[8];
                    if (lVar5 == 0) goto LAB_00c35de4;
                  }
                  lVar9 = *plVar11;
                  if (lVar9 == 0) goto LAB_00c35de4;
                  if (*(int *)(lVar5 + 0x10) < *(int *)((long)plVar8 + 0x2c)) {
                    lVar5 = *(long *)(lVar9 + 0x438);
                    *(undefined1 *)(lVar9 + 0x470) = 1;
                  }
                  else {
                    lVar5 = *(long *)(lVar9 + 0x428);
                    *(undefined1 *)(lVar9 + 0x471) = 1;
                  }
                  if (lVar5 == 0) goto LAB_00c35de4;
                  UnityEngine_GameObject__SetActive(lVar5,1,0);
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
        lVar5 = *(long *)(_Main_TypeInfo + 0xb8);
      }
      if (iVar2 != *(int *)(lVar5 + 0x2c)) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar5 = *plVar11;
        if (lVar5 == 0) goto LAB_00c35de4;
        if (iVar2 < *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c)) {
          *(undefined1 *)(lVar5 + 0x470) = 1;
        }
        else {
          *(undefined1 *)(lVar5 + 0x471) = 1;
        }
      }
    }
  }
  if (*plVar11 != 0) {
    plVar8 = *(long **)(*plVar11 + 1000);
    pvVar7 = Car__get_Current();
    if ((pvVar7 != (void *)0x0) && (plVar8 != (long *)0x0)) {
      (**(code **)(*plVar8 + 0x5a8))
                (plVar8,*(undefined8 *)((long)pvVar7 + 0x10),*(undefined8 *)(*plVar8 + 0x5b0));
      if (*plVar11 != 0) {
        GUIGarage__FJCMAMFOKNL(*plVar11,0);
        Menu__CKPDEIAFHEC();
        Menu__CDFHCNMGCFI(__this_00);
        Menu__INMDNKGHGEO(__this_00);
        Menu__FMEHJALLGBK(__this_00);
        uVar10 = *(undefined8 *)((long)__this_00 + 0x70);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar10,0,0);
        if ((uVar6 & 1) != 0) {
          if (*(long *)((long)__this_00 + 0x70) == 0) goto LAB_00c35de4;
          ConsoleTipsBottom__ABIEFKKDOGK(*(long *)((long)__this_00 + 0x70),0);
        }
        return;
      }
    }
  }
LAB_00c35de4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ANCCFOEBAGI() { }   @0xb098c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ANCCFOEBAGI(void *__this)

{
  long lVar1;
  
  if ((bRam0000000001916f9a & 1) == 0) {
    func_0x00a67900(&NotificationsManager_TypeInfo);
    bRam0000000001916f9a = 1;
  }
  GUIGarage__LLAEHJGOFLG(__this);
  GUIGarage__DHHCOENABGM(__this);
  GUIGarage__MIAENKOOLAI(__this);
  GUIGarage__IMJEJKHBIMO(__this);
  GUIGarage__ODHAOMJKKAE(__this);
  GUIGarage__KNHFEOEMGNL(__this);
  GUIGarage__MLEEOPKCMBP(__this);
  GUIGarage__MGBNHDCJAMK(__this);
  if (*(long *)((long)__this + 0x7f0) != 0) {
    UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x7f0),0,0);
    if (((*(long *)((long)__this + 0x758) != 0) &&
        (lVar1 = UnityEngine_Component__get_transform(*(long *)((long)__this + 0x758),0), lVar1 != 0
        )) && (lVar1 = UnityEngine_Transform__get_parent(lVar1,0), lVar1 != 0)) {
      lVar1 = UnityEngine_Component__get_gameObject(lVar1,0);
      if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_NotificationsManager_TypeInfo);
      }
      if (lVar1 != 0) {
        UnityEngine_GameObject__SetActive
                  (lVar1,*(char *)(*(long *)(_NotificationsManager_TypeInfo + 0xb8) + 1) == '\0',0);
        if (*(long *)((long)__this + 0x808) != 0) {
          UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x808),0,0);
          lVar1 = *(long *)((long)__this + 0x7f8);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Start() { }   @0xb11a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__Start(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  if ((bRam0000000001916f9f & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Image___);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_);
    bRam0000000001916f9f = 1;
  }
  uVar3 = *(undefined8 *)((long)__this + 0x28);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Menu__BGKFMDFJFMA(0x3e800000,uVar3,0);
  if (*(long *)((long)__this + 0x420) != 0) {
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (*(long *)((long)__this + 0x420),&uStack_28,
               _Method_UnityEngine_GameObject_GetComponent_Image___);
    *(undefined8 *)((long)__this + 0x440) = uStack_28;
    if (*(long *)((long)__this + 0x430) != 0) {
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                (*(long *)((long)__this + 0x430),&uStack_28,
                 _Method_UnityEngine_GameObject_GetComponent_Image___);
      *(undefined8 *)((long)__this + 0x448) = uStack_28;
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = System_String__op_Equality
                        (*(undefined8 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x10),_Str_,0);
      if ((uVar1 & 1) == 0) {
        GUIGarage__CDFFAINFEDD(__this);
        GUIGarage__EOGBHKMFBGE(__this);
        if ((*(long *)((long)__this + 0x3a0) == 0) ||
           (lVar2 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x3a0),0),
           lVar2 == 0)) goto LAB_00c11c74;
        UnityEngine_GameObject__SetActive(lVar2,1,0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), lVar2 == 0))
        goto LAB_00c11c74;
        BridgePHP__SetServerStatusIcon
                  (*(undefined4 *)(lVar2 + 0x90),*(undefined4 *)(lVar2 + 0x94),
                   *(undefined4 *)(lVar2 + 0x98),*(undefined4 *)(lVar2 + 0x9c),lVar2,0);
      }
      else {
        if ((*(long *)((long)__this + 0x3a8) == 0) ||
           (lVar2 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x3a8),0),
           lVar2 == 0)) goto LAB_00c11c74;
        UnityEngine_GameObject__SetActive(lVar2,0,0);
        if ((*(long *)((long)__this + 0x3a0) == 0) ||
           (lVar2 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x3a0),0),
           lVar2 == 0)) goto LAB_00c11c74;
        UnityEngine_GameObject__SetActive(lVar2,0,0);
        GUIGarage__CDFFAINFEDD(__this);
      }
      GUIGarage__PDCIBBDKCLN(__this);
      GUIGarage__FKANPAEENNP(__this);
      GUIGarage__MNIKOMAODMK(__this);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = **(undefined8 **)(_Translate_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c11c74;
        Translate__IJFFLNNCGHI((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8));
      }
      GUIGarage__HMJFKIDHNDE(__this);
      return;
    }
  }
LAB_00c11c74:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void PDCIBBDKCLN() { }   @0xb11e28

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__PDCIBBDKCLN(void *__this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001916fa4 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponentsInChildren_GUILevel___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Levels_problems_);
    bRam0000000001916fa4 = 1;
  }
  if (*(char *)((long)__this + 0x240) == '\0') {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = **(undefined8 **)(_Main_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar1 = UnityEngine_Object__op_Equality(uVar4,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)((long)__this + 0x230) != 0) {
        lVar2 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                          (*(long *)((long)__this + 0x230),
                           _Method_UnityEngine_GameObject_GetComponentsInChildren_GUILevel___);
        *(long *)((long)__this + 0x238) = lVar2;
        if (lVar2 != 0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Main_TypeInfo + 0xb8) != 0) &&
             (lVar3 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x38), lVar3 != 0)) {
            if (*(int *)(lVar2 + 0x18) != *(int *)(lVar3 + 0x18)) {
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              Main__EEKNCFLMGDP(_Str_Levels_problems_,0);
            }
            *(undefined1 *)((long)__this + 0x240) = 1;
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
}


// ==== public void ButtonChangeMusic() { }   @0xb13aec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonChangeMusic(void *__this)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float in_s2;
  float fVar8;
  float in_s3;
  float fVar9;
  
  if ((bRam0000000001916fa9 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916fa9 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  Menu__CBHHIGMKCJC(**(long **)(_Menu_TypeInfo + 0xb8),0);
  if ((bRam0000000001916f84 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916f84 = 1;
  }
  if (*(long *)((long)__this + 0x720) != 0) {
    lVar2 = UnityEngine_UI_Selectable__get_image(*(long *)((long)__this + 0x720),0);
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
    lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((lVar3 != 0) && (uVar4 = DAFNMLEKHAD__BMMOMBGDEKF(lVar3,0), lVar2 != 0)) {
      lVar3 = 0x728;
      if ((uVar4 & 1) == 0) {
        lVar3 = 0x730;
      }
      UnityEngine_UI_Image__set_sprite(lVar2,*(undefined8 *)((long)__this + lVar3),0);
      if (*(long *)((long)__this + 0x738) != 0) {
        plVar5 = (long *)UnityEngine_UI_Selectable__get_image(*(long *)((long)__this + 0x738),0);
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
        lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((lVar2 != 0) && (uVar4 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar2,0), plVar5 != (long *)0x0)) {
          lVar2 = 0x740;
          if ((uVar4 & 1) == 0) {
            lVar2 = 0x748;
          }
          lVar2 = *(long *)((long)__this + lVar2);
          if ((bRam000000000191db6f & 1) == 0) {
            func_0x00a67900(&UnityEngine_Object_TypeInfo,lVar2,0);
            bRam000000000191db6f = 1;
          }
          lVar3 = plVar5[0x1b];
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar4 = UnityEngine_Object__op_Inequality(lVar3,0,0);
          if ((uVar4 & 1) == 0) {
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = UnityEngine_Object__op_Inequality(lVar2,0,0);
            if ((uVar4 & 1) == 0) {
              return;
            }
            if (lVar2 != 0) {
              UnityEngine_Sprite__get_rect(lVar2,0);
              if (cRam0000000001916788 == '\0') {
                func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
                cRam0000000001916788 = '\x01';
              }
              in_s2 = in_s2 - **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
              in_s3 = in_s3 - (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
              *(bool *)(plVar5 + 7) = in_s2 * in_s2 + in_s3 * in_s3 < 9.9999994e-11;
              uVar6 = UnityEngine_Sprite__get_texture(lVar2,0);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_UnityEngine_Object_TypeInfo);
              }
              uVar7 = 0;
LAB_01550934:
              bVar1 = UnityEngine_Object__op_Equality(uVar6,uVar7,0);
              *(byte *)((long)plVar5 + 0x39) = bVar1 & 1;
              plVar5[0x1b] = lVar2;
              UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(plVar5);
              (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
              UnityEngine_UI_Image__TrackSprite(plVar5);
              return;
            }
          }
          else {
            lVar3 = plVar5[0x1b];
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = UnityEngine_Object__op_Inequality(lVar3,lVar2,0);
            if ((uVar4 & 1) == 0) {
              return;
            }
            if (plVar5[0x1b] != 0) {
              UnityEngine_Sprite__get_rect(plVar5[0x1b],0);
              fVar8 = in_s2;
              fVar9 = in_s3;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar4 = UnityEngine_Object__op_Implicit(lVar2,0);
              if ((uVar4 & 1) == 0) {
                if (cRam0000000001916788 == '\0') {
                  func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
                  cRam0000000001916788 = '\x01';
                }
                fVar8 = **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
                fVar9 = (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
              }
              else {
                if (lVar2 == 0) goto LAB_01550984;
                UnityEngine_Sprite__get_rect(lVar2,0);
              }
              *(bool *)(plVar5 + 7) = in_s2 == fVar8 && in_s3 == fVar9;
              if (plVar5[0x1b] != 0) {
                uVar6 = UnityEngine_Sprite__get_texture(plVar5[0x1b],0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                }
                uVar4 = UnityEngine_Object__op_Implicit(lVar2,0);
                uVar7 = 0;
                if ((uVar4 & 1) != 0) {
                  if (lVar2 == 0) goto LAB_01550984;
                  uVar7 = UnityEngine_Sprite__get_texture(lVar2,0);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonCheatWindow() { }   @0xb13de4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonCheatWindow(void *__this)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined4 uVar13;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d4;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000001916fae & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916fae = 1;
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
  if (lVar4 == 0) goto LAB_00c13fc8;
  uVar5 = DAFNMLEKHAD__EFDKHACIIEC(lVar4,0);
  if ((uVar5 & 1) == 0) {
LAB_00c13f30:
    if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Application__get_isEditor(0);
    if ((uVar5 & 1) == 0) {
      return;
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
    lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_00c13fc8;
    uVar5 = DAFNMLEKHAD__LLEFEIHEJDE(lVar4,0);
    if ((uVar5 & 1) == 0) goto LAB_00c13f30;
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
    if (lVar4 == 0) goto LAB_00c13fc8;
    if (*(int *)(lVar4 + 0x94) != 8) goto LAB_00c13f30;
  }
  plVar9 = (long *)((long)__this + 0x70);
  if ((*plVar9 != 0) && (lVar4 = UnityEngine_Component__get_gameObject(*plVar9,0), lVar4 != 0)) {
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
    lVar4 = *(long *)((long)__this + 0xd8);
    if ((uVar5 & 1) == 0) {
      if (lVar4 != 0) {
        plVar9 = (long *)((long)__this + 0x78);
        goto LAB_00c13f98;
      }
    }
    else if (lVar4 != 0) {
LAB_00c13f98:
      *(long *)(lVar4 + 0x28) = *plVar9;
      GUIWindow__HEGIHOAJOKK(lVar4,1,0);
      GUIGarage__MKJAANBPFJH(__this);
      if ((bRam0000000001916fbd & 1) == 0) {
        func_0x00a67900(&System_DateTime_TypeInfo);
        func_0x00a67900(&
                        Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                       );
        func_0x00a67900(&
                        Method_System_Collections_Generic_Dictionary_Enumerator_string__NotificationsMan
                       );
        func_0x00a67900(&
                        Method_System_Collections_Generic_Dictionary_Enumerator_string__NotificationsMan
                       );
        func_0x00a67900(&
                        Method_System_Collections_Generic_Dictionary_Enumerator_string__NotificationsMan
                       );
        func_0x00a67900(&
                        Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                       );
        func_0x00a67900(&
                        Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                       );
        func_0x00a67900(&MDGGLDMKCFB_TypeInfo);
        func_0x00a67900(&MMOCGEKHBKE_TypeInfo);
        func_0x00a67900(&NotificationsManager_TypeInfo);
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        func_0x00a67900(&RatingEventController_TypeInfo);
        func_0x00a67900(&string___TypeInfo);
        func_0x00a67900(&Str_____);
        func_0x00a67900(&Str__);
        func_0x00a67900(&Str_____);
        func_0x00a67900(&Str__);
        func_0x00a67900(&Str______);
        func_0x00a67900(&Str_____);
        func_0x00a67900(&Str_dd_MM_yy_HH_mm);
        func_0x00a67900(&Str_);
        func_0x00a67900(&Str_0);
        bRam0000000001916fbd = 1;
      }
      uStack_a0 = 0;
      lStack_d0 = 0;
      uStack_c8 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d4 = 0;
      lVar4 = *(long *)((long)__this + 0x888);
      if (lVar4 != 0) {
        lVar10 = 4;
        while( true ) {
          uVar6 = _Str_;
          uVar8 = (int)lVar10 - 4;
          if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar8) break;
          if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_00c14798;
          lVar4 = *(long *)(lVar4 + lVar10 * 8);
          if ((lVar4 == 0) || (plVar9 = *(long **)(lVar4 + 0xe0), plVar9 == (long *)0x0))
          goto LAB_00c14264;
          uVar13 = 0;
          uVar2 = 0;
          uVar3 = 0;
          if (*(char *)(lVar4 + 0x120) != '\0') {
            uVar13 = 0x3f22a2a2;
            uVar2 = 0x3f038384;
            uVar3 = 0x3eb4b4b5;
          }
          (**(code **)(*plVar9 + 0x2a8))
                    (uVar3,uVar2,uVar13,0x3f800000,plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
          lVar4 = *(long *)((long)__this + 0x888);
          if (lVar4 == 0) goto LAB_00c14264;
          if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_00c14798;
          lVar4 = *(long *)(lVar4 + lVar10 * 8);
          if (lVar4 == 0) goto LAB_00c14264;
          if (*(char *)(lVar4 + 0x120) != '\0') {
            lVar4 = UnityEngine_Component__get_transform(lVar4,0);
            if (lVar4 == 0) goto LAB_00c14264;
            UnityEngine_Transform__SetAsLastSibling(lVar4,0);
          }
          lVar4 = *(long *)((long)__this + 0x890);
          if (lVar4 == 0) goto LAB_00c14264;
          if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_00c14798;
          lVar7 = *(long *)((long)__this + 0x888);
          if (lVar7 == 0) goto LAB_00c14264;
          if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_00c14798;
          lVar7 = *(long *)(lVar7 + lVar10 * 8);
          if ((lVar7 == 0) || (lVar4 = *(long *)(lVar4 + lVar10 * 8), lVar4 == 0))
          goto LAB_00c14264;
          UnityEngine_GameObject__SetActive(lVar4,*(undefined1 *)(lVar7 + 0x120),0);
          lVar4 = *(long *)((long)__this + 0x888);
          lVar10 = lVar10 + 1;
          if (lVar4 == 0) goto LAB_00c14264;
        }
        plVar9 = *(long **)((long)__this + 0x8a0);
        if (plVar9 != (long *)0x0) {
          plVar11 = *(long **)((long)__this + 0x898);
          (**(code **)(*plVar9 + 0x5a8))(plVar9,_Str_,*(undefined8 *)(*plVar9 + 0x5b0));
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x5a8))(plVar11,uVar6,*(undefined8 *)(*plVar11 + 0x5b0));
            if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar4 = *(long *)(*(long *)(_NotificationsManager_TypeInfo + 0xb8) + 8);
            if (lVar4 != 0) {
              System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator
                        (lVar4,&uStack_100,
                         _Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                        );
              uStack_b0 = CONCAT44(uStack_ec,uStack_f0);
              uStack_b8 = uStack_f8;
              uStack_c0 = uStack_100;
              uStack_a8 = uStack_e8;
              uStack_a0 = uStack_e0;
              while (uVar5 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext
                                       (&uStack_c0,
                                        _Method_System_Collections_Generic_Dictionary_Enumerator_string__NotificationsMan
                                       ), (uVar5 & 1) != 0) {
                func_0x00b7fb78(&uStack_c0,&lStack_90,
                                _Method_System_Collections_Generic_Dictionary_Enumerator_string__NotificationsMan
                               );
                lStack_d0 = lStack_90;
                uStack_c8 = uStack_88;
                plVar9 = *(long **)((long)__this + 0x8a0);
                lVar4 = func_0x00a679a0(_string___TypeInfo,9);
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b50();
                }
                uVar6 = (**(code **)(*plVar9 + 0x598))(plVar9,*(undefined8 *)(*plVar9 + 0x5a0));
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b50();
                }
                if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                *(undefined8 *)(lVar4 + 0x20) = uVar6;
                func_0x00b7fd54(&lStack_d0,&lStack_90,
                                _Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                               );
                lVar10 = lStack_90;
                if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b50();
                }
                if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar6 = System_DateTime__ToString(lVar10 + 0x18,_Str_dd_MM_yy_HH_mm,0);
                if (*(uint *)(lVar4 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                *(undefined8 *)(lVar4 + 0x28) = uVar6;
                if (*(uint *)(lVar4 + 0x18) == 2) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                *(undefined8 *)(lVar4 + 0x30) = _Str_____;
                func_0x00b7fd54(&lStack_d0,&lStack_90,
                                _Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                               );
                if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b50();
                }
                if (*(uint *)(lVar4 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                puVar1 = (undefined8 *)&Str__;
                if (*(char *)(lStack_90 + 0x10) != '\0') {
                  puVar1 = (undefined8 *)&Str__;
                }
                *(undefined8 *)(lVar4 + 0x38) = *puVar1;
                if (*(uint *)(lVar4 + 0x18) == 4) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                *(undefined8 *)(lVar4 + 0x40) = _Str_____;
                func_0x00b7fd54(&lStack_d0,&lStack_90,
                                _Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                               );
                if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b50();
                }
                uVar6 = System_Int32__ToString(lStack_90 + 0x20,0);
                if (*(uint *)(lVar4 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                *(undefined8 *)(lVar4 + 0x48) = uVar6;
                if (*(uint *)(lVar4 + 0x18) == 6) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                *(undefined8 *)(lVar4 + 0x50) = _Str______;
                func_0x00b7fc68(&lStack_d0,&lStack_90,
                                _Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                               );
                if (*(uint *)(lVar4 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                *(long *)(lVar4 + 0x58) = lStack_90;
                uVar6 = System_Environment__get_NewLine(0);
                if (*(uint *)(lVar4 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                *(undefined8 *)(lVar4 + 0x60) = uVar6;
                uVar6 = System_String__Concat(lVar4,0);
                (**(code **)(*plVar9 + 0x5a8))(plVar9,uVar6,*(undefined8 *)(*plVar9 + 0x5b0));
              }
              System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose
                        (&uStack_c0,
                         _Method_System_Collections_Generic_Dictionary_Enumerator_string__NotificationsMan
                        );
              uVar6 = *(undefined8 *)((long)__this + 0x48);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__op_Inequality(uVar6,0,0);
              if ((((uVar5 & 1) == 0) ||
                  (lVar4 = **(long **)(_RatingEventController_TypeInfo + 0xb8), lVar4 == 0)) ||
                 (uVar8 = *(uint *)(lVar4 + 0x18), (int)uVar8 < 1)) {
                return;
              }
              lVar10 = 0;
              while ((uint)lVar10 < uVar8) {
                lVar12 = *(long *)(lVar4 + 0x20 + lVar10 * 8);
                plVar9 = *(long **)((long)__this + 0x898);
                lVar7 = func_0x00a679a0(_string___TypeInfo,0xf);
                if ((plVar9 == (long *)0x0) ||
                   (uVar6 = (**(code **)(*plVar9 + 0x598))(plVar9,*(undefined8 *)(*plVar9 + 0x5a0)),
                   lVar7 == 0)) goto LAB_00c14264;
                if (*(int *)(lVar7 + 0x18) == 0) break;
                *(undefined8 *)(lVar7 + 0x20) = uVar6;
                if (lVar12 == 0) goto LAB_00c14264;
                uVar6 = System_Int32__ToString(lVar12 + 0x10,0);
                if ((*(uint *)(lVar7 + 0x18) < 2) ||
                   (*(undefined8 *)(lVar7 + 0x28) = uVar6, *(uint *)(lVar7 + 0x18) == 2)) break;
                *(undefined8 *)(lVar7 + 0x30) = _Str_____;
                uVar6 = System_Int32__ToString(lVar12 + 0x14,0);
                if ((*(uint *)(lVar7 + 0x18) < 4) ||
                   (*(undefined8 *)(lVar7 + 0x38) = uVar6, *(uint *)(lVar7 + 0x18) == 4)) break;
                *(undefined8 *)(lVar7 + 0x40) = _Str_____;
                uStack_100 = _MDGGLDMKCFB_TypeInfo;
                uStack_f8 = 0xffffffffffffffff;
                uStack_f0 = *(undefined4 *)(lVar12 + 0x18);
                uVar6 = System_Enum__ToString(&uStack_100,0);
                if ((*(uint *)(lVar7 + 0x18) < 6) ||
                   (*(undefined8 *)(lVar7 + 0x48) = uVar6, *(uint *)(lVar7 + 0x18) == 6)) break;
                *(undefined8 *)(lVar7 + 0x50) = _Str______;
                uStack_118 = _MMOCGEKHBKE_TypeInfo;
                uStack_110 = 0xffffffffffffffff;
                uStack_108 = *(undefined4 *)(lVar12 + 0x1c);
                uVar6 = System_Enum__ToString(&uStack_118,0);
                if ((*(uint *)(lVar7 + 0x18) < 8) ||
                   (*(undefined8 *)(lVar7 + 0x58) = uVar6, *(uint *)(lVar7 + 0x18) == 8)) break;
                *(undefined8 *)(lVar7 + 0x60) = _Str_____;
                uVar6 = System_Int32__ToString(lVar12 + 0x28,0);
                if ((*(uint *)(lVar7 + 0x18) < 10) ||
                   (*(undefined8 *)(lVar7 + 0x68) = uVar6, *(uint *)(lVar7 + 0x18) == 10)) break;
                *(undefined8 *)(lVar7 + 0x70) = _Str_____;
                uStack_d4 = EventContest__get_TimeLeft(lVar12,0);
                uVar6 = System_Int32__ToString(&uStack_d4,0);
                uVar8 = *(uint *)(lVar7 + 0x18);
                if ((uVar8 < 0xc) || (*(undefined8 *)(lVar7 + 0x78) = uVar6, uVar8 == 0xc)) break;
                *(undefined8 *)(lVar7 + 0x80) = _Str_____;
                uVar6 = _Str_0;
                if (*(long *)(lVar12 + 0x30) != 0) {
                  uStack_d4 = (undefined4)*(undefined8 *)(*(long *)(lVar12 + 0x30) + 0x18);
                  uVar6 = System_Int32__ToString(&uStack_d4,0);
                  uVar8 = *(uint *)(lVar7 + 0x18);
                }
                if (uVar8 < 0xe) break;
                *(undefined8 *)(lVar7 + 0x88) = uVar6;
                uVar6 = System_Environment__get_NewLine(0);
                if (*(uint *)(lVar7 + 0x18) < 0xf) break;
                *(undefined8 *)(lVar7 + 0x90) = uVar6;
                uVar6 = System_String__Concat(lVar7,0);
                (**(code **)(*plVar9 + 0x5a8))(plVar9,uVar6,*(undefined8 *)(*plVar9 + 0x5b0));
                uVar8 = *(uint *)(lVar4 + 0x18);
                lVar10 = lVar10 + 1;
                if ((int)uVar8 <= (int)lVar10) {
                  return;
                }
              }
LAB_00c14798:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
          }
        }
      }
LAB_00c14264:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
LAB_00c13fc8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void CGHIGIBEHAE() { }   @0xb15694

/* WARNING: Removing unreachable block (ram,0x0149380c) */
/* WARNING: Removing unreachable block (ram,0x01493884) */
/* WARNING: Removing unreachable block (ram,0x014938e4) */
/* WARNING: Removing unreachable block (ram,0x01493904) */
/* WARNING: Removing unreachable block (ram,0x01493910) */
/* WARNING: Removing unreachable block (ram,0x01493924) */
/* WARNING: Removing unreachable block (ram,0x01493954) */
/* WARNING: Removing unreachable block (ram,0x01493938) */
/* WARNING: Removing unreachable block (ram,0x0149394c) */
/* WARNING: Removing unreachable block (ram,0x01493958) */
/* WARNING: Removing unreachable block (ram,0x01493964) */
/* WARNING: Removing unreachable block (ram,0x01493968) */
/* WARNING: Removing unreachable block (ram,0x0149398c) */
/* WARNING: Removing unreachable block (ram,0x01493998) */
/* WARNING: Removing unreachable block (ram,0x014939ac) */
/* WARNING: Removing unreachable block (ram,0x01493974) */
/* WARNING: Removing unreachable block (ram,0x014939cc) */
/* WARNING: Removing unreachable block (ram,0x01493978) */
/* WARNING: Removing unreachable block (ram,0x014939c0) */
/* WARNING: Removing unreachable block (ram,0x01493814) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__CGHIGIBEHAE(void *__this)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 in_s1;
  float fStack_18;
  undefined4 uStack_14;
  
  if ((*(long *)((long)__this + 0x668) != 0) && (*(long *)((long)__this + 0x670) != 0)) {
    lVar3 = *(long *)(*(long *)((long)__this + 0x668) + 0x20);
    uVar2 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 0x670),0);
    if (lVar3 != 0) {
      lVar1 = 0x6bc;
      if ((uVar2 & 1) == 0) {
        lVar1 = 0x6c4;
      }
      iVar4 = *(int *)((long)__this + lVar1);
      UnityEngine_RectTransform__get_sizeDelta(lVar3,0,0);
      fVar5 = (float)UnityEngine_RectTransform__GetParentSize(lVar3);
      fVar6 = (float)UnityEngine_RectTransform__get_anchorMax(lVar3);
      fVar7 = (float)UnityEngine_RectTransform__get_anchorMin(lVar3);
      _fStack_18 = CONCAT44(in_s1,(float)iVar4 - fVar5 * (fVar6 - fVar7));
      if (pcRam000000000191c810 == (code *)0x0) {
        pcRam000000000191c810 = (code *)func_0x00a678c4(&UNK_0059f9bb);
      }
      (*pcRam000000000191c810)(lVar3,&fStack_18);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void NFJNJCLENFD() { }   @0xb13ce4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__NFJNJCLENFD(void *__this)

{
  ulong uVar1;
  
  if (*(long *)((long)__this + 0x1d0) != 0) {
    uVar1 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 0x1d0),0);
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)((long)__this + 0x6e8) = 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void DKIFODMOFNO() { }   @0xb13800

/* WARNING: Removing unreachable block (ram,0x00c13a24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__DKIFODMOFNO(void *__this)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam0000000001916fba & 1) == 0) {
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&UnityEngine_Transform_TypeInfo);
    bRam0000000001916fba = 1;
  }
  if (*(long *)((long)__this + 0x20) != 0) {
    plVar1 = (long *)UnityEngine_Transform__GetEnumerator(*(long *)((long)__this + 0x20),0);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    do {
      lVar4 = *plVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _System_Collections_IEnumerator_TypeInfo) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_00c138c4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)func_0x00a9e6c4(plVar1,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00c138c4:
      uVar5 = (*(code *)*puVar2)(plVar1,puVar2[1]);
      if ((uVar5 & 1) == 0) {
        plVar1 = (long *)func_0x00a67a34(plVar1,_System_IDisposable_TypeInfo);
        if (plVar1 == (long *)0x0) goto LAB_00c139ec;
        lVar4 = *plVar1;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 == 0) goto LAB_00c139c4;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_00c139ac;
      }
      lVar4 = *plVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _System_Collections_IEnumerator_TypeInfo) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_00c13924;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)func_0x00a9e6c4(plVar1,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00c13924:
      plVar3 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
      if (plVar3 == (long *)0x0) {
LAB_00c13a14:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
         (*(long *)(*(long *)(*plVar3 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8) !=
          _UnityEngine_Transform_TypeInfo)) {
        func_0x00a67eec();
        goto LAB_00c13a14;
      }
      lVar4 = UnityEngine_Component__get_gameObject(plVar3,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      UnityEngine_GameObject__SetActive(lVar4,0,0);
    } while( true );
  }
  goto LAB_00c13a1c;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_00c139ac:
    if (*(long *)(piVar6 + -2) == _System_IDisposable_TypeInfo) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_00c139e0;
    }
  }
LAB_00c139c4:
  puVar2 = (undefined8 *)func_0x00a9e6c4(plVar1,_System_IDisposable_TypeInfo,0);
LAB_00c139e0:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
LAB_00c139ec:
  lVar4 = *(long *)((long)__this + 0x68);
  if (lVar4 != 0) {
    if (pcRam000000000191c3f8 == (code *)0x0) {
      pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
    }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c3f8)(lVar4,1);
    return;
  }
LAB_00c13a1c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonSettingsFPS() { }   @0xb16820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonSettingsFPS(void *__this)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  float in_s2;
  float fVar9;
  float in_s3;
  float fVar10;
  
  if ((bRam0000000001916fbe & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916fbe = 1;
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
  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if ((lVar4 != 0) && (uVar2 = DAFNMLEKHAD__EFDKHACIIEC(lVar4,0), lVar7 != 0)) {
    DAFNMLEKHAD__HCIDDAGOLGK(lVar7,~uVar2 & 1,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
       (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40), lVar7 != 0)) {
      AnalyticsController__FKMJMCBODAF(lVar7,0);
      if ((bRam0000000001916fad & 1) == 0) {
        func_0x00a67900(&Main_TypeInfo);
        bRam0000000001916fad = 1;
      }
      plVar6 = *(long **)((long)__this + 0x750);
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
      if ((lVar7 == 0) || (uVar3 = DAFNMLEKHAD__EFDKHACIIEC(lVar7,0), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      lVar7 = 0x710;
      if ((uVar3 & 1) == 0) {
        lVar7 = 0x718;
      }
      lVar7 = *(long *)((long)__this + lVar7);
      if ((bRam000000000191db6f & 1) == 0) {
        func_0x00a67900(&UnityEngine_Object_TypeInfo,lVar7,0);
        bRam000000000191db6f = 1;
      }
      lVar4 = plVar6[0x1b];
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(lVar4,0,0);
      if ((uVar3 & 1) == 0) {
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(lVar7,0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if (lVar7 != 0) {
          UnityEngine_Sprite__get_rect(lVar7,0);
          if (cRam0000000001916788 == '\0') {
            func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
            cRam0000000001916788 = '\x01';
          }
          in_s2 = in_s2 - **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
          in_s3 = in_s3 - (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
          *(bool *)(plVar6 + 7) = in_s2 * in_s2 + in_s3 * in_s3 < 9.9999994e-11;
          uVar5 = UnityEngine_Sprite__get_texture(lVar7,0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar8 = 0;
LAB_01550934:
          bVar1 = UnityEngine_Object__op_Equality(uVar5,uVar8,0);
          *(byte *)((long)plVar6 + 0x39) = bVar1 & 1;
          plVar6[0x1b] = lVar7;
          UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(plVar6);
          (**(code **)(*plVar6 + 0x2d8))(plVar6,*(undefined8 *)(*plVar6 + 0x2e0));
          UnityEngine_UI_Image__TrackSprite(plVar6);
          return;
        }
      }
      else {
        lVar4 = plVar6[0x1b];
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(lVar4,lVar7,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if (plVar6[0x1b] != 0) {
          UnityEngine_Sprite__get_rect(plVar6[0x1b],0);
          fVar9 = in_s2;
          fVar10 = in_s3;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar3 = UnityEngine_Object__op_Implicit(lVar7,0);
          if ((uVar3 & 1) == 0) {
            if (cRam0000000001916788 == '\0') {
              func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
              cRam0000000001916788 = '\x01';
            }
            fVar9 = **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
            fVar10 = (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
          }
          else {
            if (lVar7 == 0) goto LAB_01550984;
            UnityEngine_Sprite__get_rect(lVar7,0);
          }
          *(bool *)(plVar6 + 7) = in_s2 == fVar9 && in_s3 == fVar10;
          if (plVar6[0x1b] != 0) {
            uVar5 = UnityEngine_Sprite__get_texture(plVar6[0x1b],0);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            uVar3 = UnityEngine_Object__op_Implicit(lVar7,0);
            uVar8 = 0;
            if ((uVar3 & 1) != 0) {
              if (lVar7 == 0) goto LAB_01550984;
              uVar8 = UnityEngine_Sprite__get_texture(lVar7,0);
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


// ==== public void ButtonMainTwitter() { }   @0xb17018

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonMainTwitter(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001916fc2 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_https___twitter_com_ZombieDerby);
    func_0x00a67900(&Str_Twitter);
    bRam0000000001916fc2 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar3 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40), lVar2 == 0))
      goto LAB_00c17138;
      AnalyticsController__DFHNBMEPNDH(lVar2,_Str_Twitter,0);
    }
    if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = _Str_https___twitter_com_ZombieDerby;
    if (pcRam000000000191b7e8 == (code *)0x0) {
      pcRam000000000191b7e8 = (code *)func_0x00a678c4(&UNK_005a2451);
    }
                    /* WARNING: Could not recover jumptable at 0x01467070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191b7e8)(uVar3);
    return;
  }
LAB_00c17138:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonCheatShowBanner() { }   @0xb172f4

/* WARNING: Removing unreachable block (ram,0x00ddf6e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonCheatShowBanner(void *__this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long unaff_x19;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  code *unaff_x30;
  float fVar16;
  undefined8 extraout_d0;
  float in_s1;
  float fVar17;
  float in_s2;
  float fVar18;
  float fVar19;
  float in_s3;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [12];
  code *apcStack_60 [2];
  undefined8 uStack_50;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  code *apcStack_30 [2];
  
  if ((bRam0000000001916fc7 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916fc7 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar12 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
LAB_00c17408:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar12 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
     (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar7 == 0)) goto LAB_00c17408;
  if ((bRam00000000019171fa & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo,0);
    bRam00000000019171fa = 1;
  }
  uVar6 = AdvController__EDNAEPDDBPJ(lVar7);
  if ((uVar6 & 1) == 0) {
    return;
  }
  *(undefined1 *)(lVar7 + 0x35) = 0;
  lVar7 = *(long *)(lVar7 + 0x48);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  apcStack_30[0] = unaff_x30;
  if ((bRam0000000001917666 & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo,0);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_showBanner);
    func_0x00a67900(&Str_show_banner);
    bRam0000000001917666 = 1;
  }
  MaxSdkBase__ValidateAdUnitIdentifier(lVar7,_Str_show_banner);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar13 = **(long **)(_MaxSdkAndroid_TypeInfo + 0xb8);
  plVar8 = (long *)func_0x00a679a0(_object___TypeInfo,1);
  if (plVar8 == (long *)0x0) {
LAB_00ddf388:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((lVar7 == 0) || (lVar9 = func_0x00a67a34(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 != 0))
  {
    if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar8[4] = lVar7;
    uVar12 = _Str_showBanner;
    if (lVar13 != 0) {
UnityEngine_AndroidJavaObject__CallStatic:
      *(code **)((long)register0x00000008 + -0x30) = apcStack_30[0];
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x10) = unaff_x20;
      *(long *)((long)register0x00000008 + -8) = unaff_x19;
      if (*(long *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar14 = *(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x18);
      uVar10 = UnityEngine__AndroidJNIHelper__GetSignature(plVar8);
      uVar12 = UnityEngine__AndroidJNIHelper__GetMethodID(uVar14,uVar12,uVar10,1);
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -0x38) =
           *(undefined8 *)((long)register0x00000008 + -0x30);
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      lVar7 = tpidr_el0;
      *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(lVar7 + 0x28);
      if ((bRam000000000191b543 & 1) == 0) {
        func_0x00a67900(&Method_UnityEngine_AndroidJavaObject__CallStatic__);
        func_0x00a67900(&Method_System_Span_jvalue___ctor__);
        bRam000000000191b543 = 1;
      }
      if ((plVar8 == (long *)0x0) || (uVar6 = plVar8[3], uVar6 == 0)) {
        uVar10 = 0;
        uVar14 = 0;
      }
      else {
        if ((uVar6 & 0xffffffff) == 0) {
          puVar15 = (undefined1 *)0x0;
        }
        else {
          puVar15 = (undefined1 *)
                    ((long)register0x00000008 +
                    (-0x60 - ((-(uVar6 >> 0x1f & 1) & 0xfffffff800000000 | (uVar6 & 0xffffffff) << 3
                              ) + 0xf & 0xfffffffffffffff0)));
        }
        func_0x016decb0(puVar15,0);
        *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
        func_0x00c90098((undefined1 *)((long)register0x00000008 + -0x58),puVar15,uVar6 & 0xffffffff,
                        _Method_System_Span_jvalue___ctor__);
        uVar10 = *(undefined8 *)((long)register0x00000008 + -0x58);
        uVar14 = *(undefined8 *)((long)register0x00000008 + -0x50);
      }
      UnityEngine_AndroidJNIHelper__CreateJNIArgArray(plVar8,uVar10,uVar14);
      if (*(long *)(lVar13 + 0x18) != 0) {
        UnityEngine_AndroidJNISafe__CallStaticVoidMethod
                  (*(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x18),uVar12,uVar10,uVar14);
        UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar8,uVar10,uVar14);
        while( true ) {
          if (*(long *)(lVar7 + 0x28) == *(long *)((long)register0x00000008 + -0x48)) {
            return;
          }
          auVar23 = func_0x016dec70();
          if (auVar23._8_4_ != 1) break;
          plVar11 = (long *)func_0x016dec50(auVar23._0_8_);
          lVar13 = *plVar11;
          func_0x016dec60();
          UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar8,uVar10,uVar14);
          if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b48(lVar13);
          }
        }
        UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(plVar8,uVar10,uVar14);
        func_0x00b65214(auVar23._0_8_);
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b48(0);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    goto LAB_00ddf388;
  }
  uVar12 = func_0x00a67b74();
  unaff_x19 = func_0x00a67a20(uVar12,0);
  apcStack_60[0] = MaxSdkAndroid__HideBanner;
  uStack_50 = 0x1917000;
  plStack_48 = plVar8;
  lStack_40 = lVar13;
  lStack_38 = lVar7;
  if ((bRam0000000001917667 & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_hide_banner);
    func_0x00a67900(&Str_hideBanner);
    bRam0000000001917667 = 1;
  }
  MaxSdkBase__ValidateAdUnitIdentifier(unaff_x19,_Str_hide_banner);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  unaff_x20 = **(long **)(_MaxSdkAndroid_TypeInfo + 0xb8);
  unaff_x21 = (long *)func_0x00a679a0(_object___TypeInfo,1);
  if (unaff_x21 == (long *)0x0) {
LAB_00ddf494:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((unaff_x19 == 0) ||
     (lVar7 = func_0x00a67a34(unaff_x19,*(undefined8 *)(*unaff_x21 + 0x40)), lVar7 != 0)) {
    if ((int)unaff_x21[3] == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    unaff_x21[4] = unaff_x19;
    if (unaff_x20 != 0) {
      register0x00000008 = (BADSPACEBASE *)apcStack_30;
      lVar13 = unaff_x20;
      uVar12 = _Str_hideBanner;
      plVar8 = unaff_x21;
      unaff_x19 = lStack_38;
      unaff_x20 = lStack_40;
      unaff_x21 = plStack_48;
      unaff_x22 = uStack_50;
      apcStack_30[0] = apcStack_60[0];
      goto UnityEngine_AndroidJavaObject__CallStatic;
    }
    goto LAB_00ddf494;
  }
  uVar12 = func_0x00a67b74();
  lVar7 = func_0x00a67a20(uVar12,0);
  fVar20 = in_s3;
  fVar17 = in_s1;
  fVar18 = in_s2;
  if ((bRam0000000001917668 & 1) == 0) {
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    func_0x00a67900(&MaxSdkUtils_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_set_background_color);
    func_0x00a67900(&Str_setBannerBackgroundColor);
    bRam0000000001917668 = 1;
  }
  MaxSdkBase__ValidateAdUnitIdentifier(lVar7,_Str_set_background_color);
  if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar13 = **(long **)(_MaxSdkAndroid_TypeInfo + 0xb8);
  plVar8 = (long *)func_0x00a679a0(_object___TypeInfo,2);
  if (plVar8 == (long *)0x0) {
LAB_00ddf628:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((lVar7 == 0) || (lVar9 = func_0x00a67a34(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 != 0))
  {
    if ((int)plVar8[3] == 0) {
LAB_00ddf624:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar8[4] = lVar7;
    if (*(int *)(_MaxSdkUtils_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    fVar20 = in_s3;
    fVar17 = in_s1;
    fVar18 = in_s2;
    lVar7 = MaxSdkUtils__ParseColor(extraout_d0);
    if ((lVar7 == 0) || (lVar9 = func_0x00a67a34(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 != 0)
       ) {
      if (1 < *(uint *)(plVar8 + 3)) {
        plVar8[5] = lVar7;
        if (lVar13 != 0) {
          unaff_x22 = 0x1917000;
          apcStack_30[0] = MaxSdkAndroid__SetBannerBackgroundColor;
          register0x00000008 = (BADSPACEBASE *)apcStack_60;
          uVar12 = _Str_setBannerBackgroundColor;
          goto UnityEngine_AndroidJavaObject__CallStatic;
        }
        goto LAB_00ddf628;
      }
      goto LAB_00ddf624;
    }
  }
  uVar12 = func_0x00a67b74();
  fVar16 = (float)func_0x00a67a20(uVar12,0);
  if ((bRam00000000019176c0 & 1) == 0) {
    func_0x00a67900(&byte___TypeInfo);
    func_0x00a67900(&System_Convert_TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_);
    bRam00000000019176c0 = 1;
  }
  fVar19 = fVar20;
  if (1.0 < fVar20) {
    fVar19 = 1.0;
  }
  fVar21 = fVar16;
  if (1.0 < fVar16) {
    fVar21 = 1.0;
  }
  fVar22 = fVar17;
  if (1.0 < fVar17) {
    fVar22 = 1.0;
  }
  fVar19 = fVar19 * 255.0;
  fVar21 = fVar21 * 255.0;
  if (fVar20 < 0.0) {
    fVar19 = 0.0;
  }
  iVar3 = -0x80000000;
  if (fVar19 != INFINITY) {
    iVar3 = (int)fVar19;
  }
  if (fVar16 < 0.0) {
    fVar21 = 0.0;
  }
  iVar4 = -0x80000000;
  if (fVar21 != INFINITY) {
    iVar4 = (int)fVar21;
  }
  fVar20 = fVar22 * 255.0;
  if (fVar17 < 0.0) {
    fVar20 = 0.0;
  }
  iVar1 = -0x80000000;
  if (fVar20 != INFINITY) {
    iVar1 = (int)fVar20;
  }
  fVar20 = fVar18 * 255.0;
  if (fVar18 < 0.0) {
    fVar20 = 0.0;
  }
  iVar2 = -0x80000000;
  if (fVar20 != INFINITY) {
    iVar2 = (int)fVar20;
  }
  lVar7 = func_0x00a679a0(_byte___TypeInfo,4);
  if (*(int *)(_System_Convert_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_System_Convert_TypeInfo);
  }
  uVar5 = System_Convert__ToByte(iVar3,0);
  if (lVar7 == 0) {
LAB_00ddf840:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)(lVar7 + 0x18) == 0) {
LAB_00ddf83c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined1 *)(lVar7 + 0x20) = uVar5;
  uVar5 = System_Convert__ToByte(iVar4,0);
  if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_00ddf83c;
  *(undefined1 *)(lVar7 + 0x21) = uVar5;
  uVar5 = System_Convert__ToByte(iVar1,0);
  if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_00ddf83c;
  *(undefined1 *)(lVar7 + 0x22) = uVar5;
  uVar5 = System_Convert__ToByte(iVar2,0);
  if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_00ddf83c;
  *(undefined1 *)(lVar7 + 0x23) = uVar5;
  lVar7 = System_BitConverter__ToString(lVar7,0);
  if ((lVar7 == 0) ||
     (lVar13 = System_String__Replace(lVar7,_Str__,_Str_,0), lVar7 = _Str__, lVar13 == 0))
  goto LAB_00ddf840;
  if (_Str__ == 0) {
    func_0x00a67914(&System_ArgumentNullException_TypeInfo,0,0,0);
    uVar12 = func_0x00a67b44();
    uVar10 = func_0x00a67914(&Str_value);
    System_ArgumentNullException___ctor(uVar12,uVar10,0);
  }
  else {
    iVar3 = *(int *)(lVar13 + 0x10);
    if (-1 < iVar3) {
      if (iVar3 == 0) {
        return;
      }
      iVar4 = *(int *)(_Str__ + 0x10);
      if (iVar4 == 0) {
        return;
      }
      lVar9 = func_0x00ad4750(iVar4 + iVar3);
      if (lVar9 != 0) {
        lVar9 = lVar9 + 0x14;
        System_Buffer__Memmove(lVar9,lVar13 + 0x14,0,0);
        System_Buffer__Memmove(lVar9,lVar7 + 0x14,iVar4 << 1,0);
        System_Buffer__Memmove(lVar9 + (long)iVar4 * 2,lVar13 + 0x14,iVar3 * 2,0);
        return;
      }
      goto LAB_00e27e3c;
    }
    func_0x00a67914(&System_ArgumentOutOfRangeException_TypeInfo,0,_Str__,0);
    uVar12 = func_0x00a67b44();
    uVar10 = func_0x00a67914(&Str_startIndex);
    System_ArgumentOutOfRangeException___ctor(uVar12,uVar10,0);
  }
  uVar10 = func_0x00a67914(&Method_System_String_Insert__);
  func_0x00a67a20(uVar12,uVar10);
LAB_00e27e3c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void CDFFAINFEDD() { }   @0xb11c78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__CDFFAINFEDD(void *__this)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined4 uStack_3c;
  long *plStack_38;
  
  if ((bRam0000000001916fcb & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_player_name_is_null__Not_Garage_);
    func_0x00a67900(&Str_SetPlayerNickname__);
    bRam0000000001916fcb = 1;
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
  if (lVar7 == 0) {
LAB_00c11e24:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar2 = System_String__Concat(_Str_SetPlayerNickname__,*(undefined8 *)(lVar7 + 0x20),0);
  Main__GEMDEAMAGPG(uVar2,0,0);
  uVar2 = *(undefined8 *)((long)__this + 0x398);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    plVar8 = *(long **)((long)__this + 0x398);
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
    if ((lVar7 != 0) && (plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00c11dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x5a8))
                (plVar8,*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(*plVar8 + 0x5b0));
      return;
    }
    goto LAB_00c11e24;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar8 = _Str_player_name_is_null__Not_Garage_;
  if ((bRam0000000001917206 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Debug_TypeInfo,0,0);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917206 = 1;
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
  if (lVar7 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar3 = DAFNMLEKHAD__LLEFEIHEJDE(lVar7,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__Log(plVar8,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c590c8;
  uVar2 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar8 == (long *)0x0)) goto LAB_00c590c8;
  lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar2 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
  if (lVar7 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar2,0,0);
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
  plVar8 = *(long **)(lVar7 + 0x1e8);
  if ((plVar8 == (long *)0x0) ||
     (lVar4 = (**(code **)(*plVar8 + 0x598))(plVar8,*(undefined8 *)(*plVar8 + 0x5a0)), lVar4 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar4 + 0x10)) {
    if (*(long *)(lVar7 + 0x1e8) == 0) goto LAB_00c16768;
    uVar5 = UnityEngine_Component__get_gameObject(*(long *)(lVar7 + 0x1e8),0);
    if ((*(long *)(lVar7 + 0x1e8) == 0) ||
       (lVar4 = UnityEngine_Component__get_transform(*(long *)(lVar7 + 0x1e8),0), lVar4 == 0))
    goto LAB_00c16768;
    uVar6 = UnityEngine_Transform__get_parent(lVar4,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar4 = UnityEngine_Object__Instantiate_object_
                      (uVar5,uVar6,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar4 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar4,&plStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar7 + 0x1e8) = plStack_38;
    if (plStack_38 == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*plStack_38 + 0x5a8))(plStack_38,_Str_,*(undefined8 *)(*plStack_38 + 0x5b0));
  }
  plVar8 = *(long **)(lVar7 + 0x1e8);
  lVar7 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar8 != (long *)0x0) &&
     (uVar5 = (**(code **)(*plVar8 + 0x598))(plVar8,*(undefined8 *)(*plVar8 + 0x5a0)), lVar7 != 0))
  {
    uVar1 = *(uint *)(lVar7 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar7 + 0x20) = uVar5, uVar1 != 1 &&
         (*(undefined8 *)(lVar7 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar7 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar7 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar5 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar5 = System_String__Format(_Str__0_f2_,uVar5,0);
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar7 + 0x40) = uVar5, uVar1 != 5)) &&
         (*(undefined8 *)(lVar7 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar7 + 0x50) = uVar2;
        uVar2 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar7 + 0x18)) {
          *(undefined8 *)(lVar7 + 0x58) = uVar2;
          uVar2 = System_String__Concat(lVar7,0);
          (**(code **)(*plVar8 + 0x5a8))(plVar8,uVar2,*(undefined8 *)(*plVar8 + 0x5b0));
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
LAB_00c16768:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void HHOKAGMFIHE(Image NCIMDMCDMIK) { }   @0xb0ffbc

/* WARNING: Removing unreachable block (ram,0x00c10070) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__HHOKAGMFIHE(void *__this,void *NCIMDMCDMIK)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((bRam0000000001916fce & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916fce = 1;
  }
  fVar1 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  fVar1 = fVar1 - *(float *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48);
  fVar2 = (float)(int)(fVar1 * 0.5);
  fVar1 = fVar1 - (fVar2 + fVar2);
  fVar2 = fVar1;
  if (2.0 < fVar1) {
    fVar2 = 2.0;
  }
  fVar2 = fVar2 + -1.0;
  if (fVar1 < 0.0) {
    fVar2 = -1.0;
  }
  if (NCIMDMCDMIK == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  fVar1 = 1.0 - ABS(fVar2);
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  fVar2 = (float)*(undefined8 *)((long)__this + 0x450);
  fVar3 = (float)((ulong)*(undefined8 *)((long)__this + 0x450) >> 0x20);
  fVar4 = (float)*(undefined8 *)((long)__this + 0x458);
  fVar5 = (float)((ulong)*(undefined8 *)((long)__this + 0x458) >> 0x20);
                    /* WARNING: Could not recover jumptable at 0x00c100b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)NCIMDMCDMIK + 0x2a8))
            (fVar2 + ((float)*(undefined8 *)((long)__this + 0x460) - fVar2) * fVar1,
             fVar3 + ((float)((ulong)*(undefined8 *)((long)__this + 0x460) >> 0x20) - fVar3) * fVar1
             ,fVar4 + ((float)*(undefined8 *)((long)__this + 0x468) - fVar4) * fVar1,
             fVar5 + ((float)((ulong)*(undefined8 *)((long)__this + 0x468) >> 0x20) - fVar5) * fVar1
             ,NCIMDMCDMIK,*(undefined8 *)(*(long *)NCIMDMCDMIK + 0x2b0));
  return;
}


// ==== public void ButtonMainVK() { }   @0xb17c18

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonMainVK(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001916fd1 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_VK);
    func_0x00a67900(&Str_https___vk_com_zombie_derby);
    bRam0000000001916fd1 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar3 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40), lVar2 == 0))
      goto LAB_00c17d38;
      AnalyticsController__DFHNBMEPNDH(lVar2,_Str_VK,0);
    }
    if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = _Str_https___vk_com_zombie_derby;
    if (pcRam000000000191b7e8 == (code *)0x0) {
      pcRam000000000191b7e8 = (code *)func_0x00a678c4(&UNK_005a2451);
    }
                    /* WARNING: Could not recover jumptable at 0x01467070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191b7e8)(uVar3);
    return;
  }
LAB_00c17d38:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



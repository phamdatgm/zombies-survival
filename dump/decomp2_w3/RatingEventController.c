// ==== public void FEGODMGCDKH() { }   @0xb407f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__FEGODMGCDKH(void *__this)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  void *__this_00;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 extraout_s0;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  if ((bRam0000000001917128 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001917128 = 1;
  }
  if ((*(long *)((long)__this + 0xc0) == 0) ||
     (lVar3 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0xc0),0), lVar3 == 0))
  {
LAB_00c40910:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  UnityEngine_GameObject__SetActive(lVar3,0,0);
  if (*(long *)((long)__this + 0xb8) == 0) goto LAB_00c40910;
  UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0xb8),1,0);
  if (*(long *)((long)__this + 200) == 0) goto LAB_00c40910;
  UnityEngine_GameObject__SetActive(*(long *)((long)__this + 200),1,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = Main__KCHOEBEIOCE(0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = **(long **)(_Menu_TypeInfo + 0xb8);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x58) == 0)) goto LAB_00c40910;
  if (*(char *)(*(long *)(lVar3 + 0x58) + 0x30) == '\0') {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    lVar3 = **(long **)(_Menu_TypeInfo + 0xb8);
    if (lVar3 == 0) goto LAB_00c40910;
  }
  lVar3 = *(long *)(lVar3 + 0x58);
  if (lVar3 == 0) goto LAB_00c40910;
  plVar8 = *(long **)((long)__this + 0xb8);
  if ((bRam00000000019171a4 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___,plVar8,0);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__);
    func_0x00a67900(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Button___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
    func_0x00a67900(&Method_System_Collections_Generic_List_MLCNINCNANA__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_List_MLCNINCNANA__GetEnumerator__);
    func_0x00a67900(&MLCNINCNANA_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_SetButton__);
    func_0x00a67900(&Str___last__);
    func_0x00a67900(&Str_lvl_);
    bRam00000000019171a4 = 1;
  }
  plStack_90 = (long *)0x0;
  uStack_88 = 0;
  uStack_80 = 0;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Equality(plVar8,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c55ff4;
  uVar11 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
        (lVar9 = *(long *)(lVar9 + 0x150), lVar9 == 0)) ||
       (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0)) goto LAB_00c55ff4;
    uVar4 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
  GamePadController__DJHKBCNIBNG(lVar3);
  uVar11 = _Str_SetButton__;
  if (plVar8 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
  }
  uVar1 = _Str___last__;
  plVar6 = *(long **)(lVar3 + 0x38);
  if (plVar6 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
  }
  uVar11 = System_String__Concat(uVar11,uVar5,uVar1,uVar7,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar11,0,0);
  *(long **)(lVar3 + 0x38) = plVar8;
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar9 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (lVar9 == 0) goto LAB_00c55ff4;
  UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(lVar9,plVar8,0);
  uVar12 = UnityEngine_Time__get_realtimeSinceStartup(0);
  *(undefined4 *)(lVar3 + 0x58) = uVar12;
  if (*(long *)(lVar3 + 0x28) == 0) goto LAB_00c55ff4;
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
            (*(long *)(lVar3 + 0x28),&plStack_a8,
             _Method_System_Collections_Generic_List_MLCNINCNANA__GetEnumerator__);
  uStack_88 = uStack_a0;
  plStack_90 = plStack_a8;
  uStack_80 = uStack_98;
  do {
    do {
      uVar4 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                        (&plStack_90,
                         _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__)
      ;
      if ((uVar4 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                  (&plStack_90,
                   _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
        lVar9 = func_0x00a67b44(_MLCNINCNANA_TypeInfo);
        MLCNINCNANA___ctor(lVar9,0);
        *(long *)(lVar3 + 0x20) = lVar9;
        if ((lVar9 == 0) || (*(long **)(lVar9 + 0x10) = plVar8, plVar8 == (long *)0x0))
        goto LAB_00c55ff4;
        uVar11 = UnityEngine_Object__get_name(plVar8,0);
        uVar4 = GamePadController__EODAOKKOJLL(uVar11,uVar11);
        lVar9 = *(long *)(lVar3 + 0x20);
        if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) goto LAB_00c55ff4;
        lVar10 = UnityEngine_GameObject__get_transform(*(long *)(lVar9 + 0x10),0);
        if ((uVar4 & 1) != 0) {
          if (lVar10 == 0) goto LAB_00c55ff4;
          lVar10 = UnityEngine_Transform__get_parent(lVar10,0);
        }
        *(long *)(lVar9 + 0x20) = lVar10;
        lVar9 = *(long *)(lVar3 + 0x20);
        if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) goto LAB_00c55ff4;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (*(long *)(lVar9 + 0x10),&plStack_a8,
                   _Method_UnityEngine_GameObject_GetComponent_Button___);
        *(long **)(lVar9 + 0x18) = plStack_a8;
        lVar9 = *(long *)(lVar3 + 0x20);
        if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) goto LAB_00c55ff4;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (*(long *)(lVar9 + 0x10),&plStack_a8,
                   _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
        *(long **)(lVar9 + 0x28) = plStack_a8;
        lVar9 = *(long *)(lVar3 + 0x20);
        if (((lVar9 == 0) || (*(long *)(lVar9 + 0x20) == 0)) ||
           (lVar10 = UnityEngine_Object__get_name(*(long *)(lVar9 + 0x20),0), lVar10 == 0))
        goto LAB_00c55ff4;
        uVar4 = System_String__Contains(lVar10,_Str_lvl_,0);
        uVar17 = 0x3f800000;
        uVar15 = 0x3f800000;
        uVar12 = 0x3f800000;
        if ((uVar4 & 1) == 0) {
          if ((*(long *)(lVar3 + 0x20) == 0) ||
             (lVar10 = *(long *)(*(long *)(lVar3 + 0x20) + 0x20), lVar10 == 0)) goto LAB_00c55ff4;
          uVar12 = UnityEngine_Transform__get_localScale(lVar10,0);
        }
        *(undefined4 *)(lVar9 + 0x30) = uVar12;
        *(undefined4 *)(lVar9 + 0x34) = uVar15;
        *(undefined4 *)(lVar9 + 0x38) = uVar17;
        lVar9 = *(long *)(lVar3 + 0x20);
        if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) goto LAB_00c55ff4;
        __this_00 = (void *)UnityEngine_RectTransform__get_pivot(*(long *)(lVar9 + 0x28),0);
        *(undefined4 *)(lVar9 + 0x3c) = extraout_s0;
        *(undefined4 *)(lVar9 + 0x40) = uVar15;
        bVar2 = GamePadController__PJOJJBEIFAE(__this_00,*(void **)(lVar3 + 0x20));
        if (!bVar2) {
          lVar9 = *(long *)(lVar3 + 0x20);
          if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) goto LAB_00c55ff4;
          uVar12 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar9 + 0x28),0);
          *(undefined4 *)(lVar9 + 0x44) = uVar12;
          *(undefined4 *)(lVar9 + 0x48) = uVar15;
        }
        if (*(long *)(lVar3 + 0x28) == 0) goto LAB_00c55ff4;
        func_0x00b7fe44(*(long *)(lVar3 + 0x28),*(undefined8 *)(lVar3 + 0x20),
                        _Method_System_Collections_Generic_List_MLCNINCNANA__Add__);
        goto LAB_00c55e20;
      }
      func_0x00b947ec(&plStack_90,&lStack_78,
                      _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__)
      ;
      lVar9 = lStack_78;
    } while (lStack_78 == 0);
    uVar11 = *(undefined8 *)(lStack_78 + 0x10);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar11,plVar8,0);
  } while ((uVar4 & 1) == 0);
  *(long *)(lVar3 + 0x20) = lVar9;
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
            (&plStack_90,_Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
LAB_00c55e20:
  if (*(long *)(lVar3 + 0x20) == 0) {
    return;
  }
  lVar9 = *(long *)(*(long *)(lVar3 + 0x20) + 0x28);
  if (lVar9 == 0) goto LAB_00c55ff4;
  fVar13 = (float)UnityEngine_RectTransform__get_pivot(lVar9,0);
  fVar16 = 0.5;
  if (fVar13 == 0.5) {
    if ((*(long *)(lVar3 + 0x20) == 0) ||
       (lVar9 = *(long *)(*(long *)(lVar3 + 0x20) + 0x28), lVar9 == 0)) goto LAB_00c55ff4;
    UnityEngine_RectTransform__get_pivot(lVar9,0);
    if (fVar16 != 0.5) goto LAB_00c55e68;
  }
  else {
LAB_00c55e68:
    if ((*(long *)(lVar3 + 0x20) == 0) ||
       (lVar9 = *(long *)(*(long *)(lVar3 + 0x20) + 0x28), lVar9 == 0)) goto LAB_00c55ff4;
    fVar13 = 0.5;
    UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,lVar9,0);
    lVar9 = *(long *)(lVar3 + 0x20);
    if ((lVar9 == 0) || (lVar10 = *(long *)(lVar9 + 0x28), lVar10 == 0)) goto LAB_00c55ff4;
    fVar18 = *(float *)(lVar9 + 0x44);
    fVar16 = (float)UnityEngine_RectTransform__get_sizeDelta(lVar10,0);
    lVar9 = *(long *)(lVar3 + 0x20);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) goto LAB_00c55ff4;
    fVar20 = *(float *)(lVar9 + 0x3c);
    fVar22 = *(float *)(lVar9 + 0x30);
    fVar21 = *(float *)(lVar9 + 0x44);
    fVar19 = *(float *)(lVar9 + 0x48);
    UnityEngine_RectTransform__get_sizeDelta(*(long *)(lVar9 + 0x28),0);
    lVar9 = *(long *)(lVar3 + 0x20);
    if (lVar9 == 0) goto LAB_00c55ff4;
    fVar14 = ABS(fVar20 + -0.5);
    fVar20 = fVar16 * fVar14;
    if (fVar21 < 0.0) {
      fVar20 = -(fVar16 * fVar14);
    }
    fVar21 = ABS(*(float *)(lVar9 + 0x40) + -0.5);
    fVar16 = fVar13 * fVar21;
    if (*(float *)(lVar9 + 0x48) < 0.0) {
      fVar16 = -(fVar13 * fVar21);
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (fVar18 + ABS(fVar22) * fVar20,fVar19 + ABS(*(float *)(lVar9 + 0x34)) * fVar16,lVar10,
               0);
  }
  if ((*(long *)(lVar3 + 0x20) != 0) &&
     (lVar9 = *(long *)(*(long *)(lVar3 + 0x20) + 0x10), lVar9 != 0)) {
    uVar11 = UnityEngine_Object__get_name(lVar9,0);
    uVar4 = GamePadController__EODAOKKOJLL(uVar11,uVar11);
    if ((uVar4 & 1) != 0) {
      if ((*(long *)(lVar3 + 0x20) == 0) ||
         (lVar9 = *(long *)(*(long *)(lVar3 + 0x20) + 0x20), lVar9 == 0)) goto LAB_00c55ff4;
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (lVar9,&plStack_a8,_Method_UnityEngine_Component_GetComponent_Image___);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(plStack_a8,0,0);
      if ((uVar4 & 1) != 0) {
        if (plStack_a8 == (long *)0x0) goto LAB_00c55ff4;
        (**(code **)(*plStack_a8 + 0x2a8))
                  (*(undefined4 *)(lVar3 + 0x6c),*(undefined4 *)(lVar3 + 0x70),
                   *(undefined4 *)(lVar3 + 0x74),*(undefined4 *)(lVar3 + 0x78),plStack_a8,
                   *(undefined8 *)(*plStack_a8 + 0x2b0));
      }
    }
    return;
  }
LAB_00c55ff4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void CAHNMGGBGBK() { }   @0xb4106c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__CAHNMGGBGBK(void *__this)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  if ((bRam000000000191712c & 1) == 0) {
    func_0x00a67900(&EventContest_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam000000000191712c = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Main_TypeInfo + 0xb8) != 0) &&
     (lVar7 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x38), lVar7 != 0)) {
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar6 = *(long *)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_00c41254;
        if (99 < *(int *)(lVar6 + 0x10)) {
          uVar2 = func_0x00a67b44(_EventContest_TypeInfo);
          EventContest___ctor(uVar2,0);
          *(undefined8 *)(lVar6 + 0x50) = uVar2;
          *(undefined8 *)(lVar6 + 0x60) = 0;
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0)) ||
              (lVar4 = *(long *)(lVar4 + 0x70), lVar4 == 0)) ||
             (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0))
          goto LAB_00c41254;
          uVar3 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
          if ((uVar3 & 1) != 0) {
            Level__HMPEMADOAAL(lVar6);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar4 = *(long *)(_Main_TypeInfo + 0xb8);
            lVar5 = *(long *)(lVar4 + 0x40);
            if (lVar5 != 0) {
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
                lVar4 = *(long *)(_Main_TypeInfo + 0xb8);
                lVar5 = *(long *)(lVar4 + 0x40);
                if (lVar5 == 0) goto LAB_00c41254;
              }
              if (99 < *(int *)(lVar5 + 0x10)) {
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                  lVar4 = *(long *)(_Main_TypeInfo + 0xb8);
                }
                if (*(long *)(lVar4 + 0x40) == lVar6) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
                  goto LAB_00c41254;
                  GUIGarage__PGEEGDGGHLL(lVar4,lVar6,0,0);
                }
              }
            }
          }
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
    return;
  }
LAB_00c41254:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb42af4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController___ctor(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam000000000191712f & 1) == 0) {
    func_0x00a67900(&Replay_____TypeInfo);
    func_0x00a67900(&float___TypeInfo);
    bRam000000000191712f = 1;
  }
  uVar1 = func_0x00a679a0(_Replay_____TypeInfo,3);
  *(undefined8 *)((long)__this + 0xd0) = uVar1;
  uVar1 = func_0x00a679a0(_float___TypeInfo,3);
  *(undefined8 *)((long)__this + 0xd8) = uVar1;
  *(undefined8 *)((long)__this + 0xe8) = 0x3e23d70a3f800000;
  *(undefined8 *)((long)__this + 0xe0) = 0x3f8000003f800000;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public void OJBAJGILIJN(Level ACLJCGMKGNP, bool KOBMDKEMAOG) { }   @0xb30bc4

/* WARNING: Removing unreachable block (ram,0x00c41dc4) */
/* WARNING: Removing unreachable block (ram,0x00c41df4) */
/* WARNING: Removing unreachable block (ram,0x00c41e00) */
/* WARNING: Removing unreachable block (ram,0x00c41e04) */
/* WARNING: Removing unreachable block (ram,0x00c41dd4) */
/* WARNING: Removing unreachable block (ram,0x00c41e28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__OJBAJGILIJN(void *__this,void *ACLJCGMKGNP,bool KOBMDKEMAOG)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 **ppuVar6;
  bool bVar7;
  undefined8 uVar8;
  uint uVar9;
  void *pvVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  void *pvVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  char cVar22;
  long *plVar23;
  float fVar24;
  float fVar25;
  undefined4 uStack_ac;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  void *pvStack_88;
  uint uStack_80;
  char acStack_7c [4];
  long lStack_78;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  pvVar10 = __this;
  if ((bRam0000000001917133 & 1) == 0) {
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    pvVar10 = (void *)func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917133 = 1;
  }
  RatingEventController__HIPELCKHJCI(pvVar10,*(undefined8 *)((long)__this + 0x70));
  if ((ACLJCGMKGNP == (void *)0x0) || (lVar18 = *(long *)((long)__this + 0xd8), lVar18 == 0)) {
LAB_00c30ddc:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar9 = *(int *)((long)ACLJCGMKGNP + 0x10) - 100;
  if (*(uint *)(lVar18 + 0x18) <= uVar9) {
LAB_00c30de0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  lVar19 = *(long *)((long)__this + 0xd0);
  if (lVar19 == 0) goto LAB_00c30ddc;
  if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_00c30de0;
  fVar25 = *(float *)(lVar18 + (long)(int)uVar9 * 4 + 0x20);
  bVar7 = true;
  if ((fVar25 != 0.0) && (*(long *)(lVar19 + (long)(int)uVar9 * 8 + 0x20) != 0)) {
    fVar24 = (float)UnityEngine_Time__get_time(0);
    bVar7 = 30.0 < fVar24 - fVar25;
  }
  if (bVar7 || KOBMDKEMAOG) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
      uVar21 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar11 = UnityEngine_Object__op_Inequality(uVar21,0,0);
      if ((uVar11 & 1) == 0) {
        return;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
        lVar19 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
        plVar12 = (long *)func_0x00a679a0(_object___TypeInfo,1);
        lVar18 = func_0x00a67a38(_int_TypeInfo,&stack0xffffffffffffffcc);
        if (plVar12 != (long *)0x0) {
          if ((lVar18 != 0) &&
             (lVar13 = func_0x00a67a34(lVar18,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)) {
            uVar21 = func_0x00a67b74();
            lVar18 = func_0x00a67a20(uVar21,0);
            if ((bRam00000000019170be & 1) == 0) {
              func_0x00a67900(&Str_level_event_);
              bRam00000000019170be = 1;
            }
            if ((99 < *(int *)(lVar18 + 0x10)) && (*(long *)(lVar18 + 0x50) != 0)) {
              _uStack_58 = CONCAT44(*(undefined4 *)(*(long *)(lVar18 + 0x50) + 0x18),uStack_58);
              uVar21 = System_Int32__ToString(&uStack_54,0);
              System_String__Concat(_Str_level_event_,uVar21,0);
            }
            return;
          }
          if ((int)plVar12[3] == 0) goto LAB_00c30de0;
          plVar12[4] = lVar18;
          if (lVar19 != 0) {
            BridgePHP__StartServerConnect(lVar19,4,plVar12,0);
            return;
          }
        }
      }
    }
    goto LAB_00c30ddc;
  }
  acStack_7c[0] = '\x01';
  pvStack_88 = __this;
  if ((bRam0000000001917132 & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&CarReplay_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_GUIRating___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Error_in_FillRating__1);
    func_0x00a67900(&Str______);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_FillRating__);
    func_0x00a67900(&Str__100);
    func_0x00a67900(&Str_Error_in_FillRating__2);
    func_0x00a67900(&Str___good_rating__);
    func_0x00a67900(&Str_);
    bRam0000000001917132 = 1;
  }
  pvVar10 = pvStack_88;
  if (*(long *)((long)pvStack_88 + 0xd0) == 0) {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
    return;
  }
  lVar18 = *(long *)((long)pvVar10 + 0x78);
  lVar19 = *(long *)((long)pvVar10 + 0xd0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar13 = _Main_TypeInfo;
  lVar20 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if ((lVar20 == 0) || (lVar19 == 0)) goto LAB_00c429d8;
  uVar9 = *(int *)(lVar20 + 0x10) - 100;
  if (*(uint *)(lVar19 + 0x18) <= uVar9) {
LAB_00c429dc:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  plVar12 = *(long **)(lVar19 + (long)(int)uVar9 * 8 + 0x20);
  if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CarReplay_TypeInfo);
    lVar13 = _Main_TypeInfo;
    lVar20 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    *(undefined8 *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 8) = 0;
    if (lVar20 == 0) goto LAB_00c429d8;
  }
  else {
    *(undefined8 *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 8) = 0;
  }
  lVar19 = *(long *)(lVar20 + 0x50);
  if (*(int *)(lVar13 + 0xe0) == 0) {
    func_0x00a67a30();
    if (lVar19 != 0) goto LAB_00c41e64;
LAB_00c41eb8:
    Main__GEMDEAMAGPG(_Str_Error_in_FillRating__1,0,0);
    uVar9 = 0;
    uStack_ac = 0;
  }
  else {
    if (lVar19 == 0) goto LAB_00c41eb8;
LAB_00c41e64:
    lVar19 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x50), lVar19 == 0)) goto LAB_00c429d8;
    uVar9 = EventContest__get_sort(lVar19,0);
    lVar19 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x50), lVar19 == 0)) goto LAB_00c429d8;
    uStack_ac = *(undefined4 *)(lVar19 + 0x18);
  }
  pvVar10 = pvStack_88;
  RatingEventController__HPAFDOMPACP(pvStack_88);
  if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar14 = System_Boolean__ToString(acStack_7c,0);
  uVar8 = _Str_FillRating__;
  uVar21 = _Str___good_rating__;
  if (plVar12 == (long *)0x0) {
    uVar15 = 0;
  }
  else {
    uVar15 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
  }
  uVar21 = System_String__Concat(uVar8,uVar14,uVar21,uVar15,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar21,0,0);
  if (plVar12 != (long *)0x0) {
    puStack_98 = (undefined8 *)((long)pvVar10 + 0x70);
    lStack_a8 = 0;
    puStack_a0 = (undefined8 *)((long)pvVar10 + 0xb0);
    uVar11 = 0;
    uStack_80 = uVar9;
    cVar22 = acStack_7c[0];
    do {
      if (cVar22 != '\0') {
        RatingEventController__AMNLEOOJDKP(pvVar10,uVar11 & 0xffffffff,(int)plVar12[3]);
      }
      cVar22 = acStack_7c[0];
      if ((long)uVar11 < (long)(int)*(uint *)(plVar12 + 3)) {
        if (*(uint *)(plVar12 + 3) <= uVar11) goto LAB_00c429dc;
        if ((plVar12[uVar11 + 4] != 0) && (*(int *)(plVar12[uVar11 + 4] + 0x10) != -2)) {
          ppuVar6 = &puStack_a0;
          if (acStack_7c[0] != '\0') {
            ppuVar6 = &puStack_98;
          }
          uVar21 = **ppuVar6;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar19 = UnityEngine_Object__Instantiate_object_
                             (lVar18,uVar21,_Method_UnityEngine_Object_Instantiate_GameObject___);
          if (lVar19 == 0) goto LAB_00c429d8;
          UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                    (lVar19,&lStack_78,_Method_UnityEngine_GameObject_GetComponent_GUIRating___);
          lVar13 = lStack_78;
          if (*(uint *)(plVar12 + 3) <= uVar11) goto LAB_00c429dc;
          if ((plVar12[uVar11 + 4] == 0) || (lStack_78 == 0)) goto LAB_00c429d8;
          piVar1 = (int *)(plVar12[uVar11 + 4] + 0x10);
          plVar23 = *(long **)(lStack_78 + 0x28);
          lStack_90 = lVar19;
          if (*piVar1 == -1) {
            if (plVar23 == (long *)0x0) goto LAB_00c429d8;
            lVar19 = *plVar23;
            uVar21 = _Str__100;
          }
          else {
            uVar21 = System_Int32__ToString(piVar1,0);
            if (plVar23 == (long *)0x0) goto LAB_00c429d8;
            lVar19 = *plVar23;
          }
          (**(code **)(lVar19 + 0x5a8))(plVar23,uVar21,*(undefined8 *)(lVar19 + 0x5b0));
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c429d8;
          if (*(uint *)(plVar12 + 3) <= uVar11) goto LAB_00c429dc;
          if ((plVar12[uVar11 + 4] == 0) ||
             (lVar19 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), lVar19 == 0))
          goto LAB_00c429d8;
          uVar21 = BridgePHP__GetCountryTextureFromID
                             (lVar19,*(undefined4 *)(plVar12[uVar11 + 4] + 0x20),0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar16 = UnityEngine_Object__op_Inequality(uVar21,0,0);
          if ((uVar16 & 1) != 0) {
            if (*(long *)(lVar13 + 0x30) == 0) goto LAB_00c429d8;
            UnityEngine_UI_Image__set_sprite(*(long *)(lVar13 + 0x30),uVar21,0);
          }
          if (*(uint *)(plVar12 + 3) <= uVar11) goto LAB_00c429dc;
          if ((plVar12[uVar11 + 4] == 0) ||
             (plVar23 = *(long **)(lVar13 + 0x38), plVar23 == (long *)0x0)) goto LAB_00c429d8;
          (**(code **)(*plVar23 + 0x5a8))
                    (plVar23,*(undefined8 *)(plVar12[uVar11 + 4] + 0x28),
                     *(undefined8 *)(*plVar23 + 0x5b0));
          if (*(uint *)(plVar12 + 3) <= uVar11) goto LAB_00c429dc;
          if (plVar12[uVar11 + 4] == 0) goto LAB_00c429d8;
          plVar23 = *(long **)(lVar13 + 0x40);
          pvVar10 = Car__DBJBMIGLBNF(*(int *)(plVar12[uVar11 + 4] + 0x1c));
          if (plVar23 == (long *)0x0) goto LAB_00c429d8;
          (**(code **)(*plVar23 + 0x5a8))(plVar23,pvVar10,*(undefined8 *)(*plVar23 + 0x5b0));
          uVar5 = uVar9 - 1;
          if (uVar9 < 2) {
            if (*(uint *)(plVar12 + 3) <= uVar11) goto LAB_00c429dc;
            if (plVar12[uVar11 + 4] == 0) goto LAB_00c429d8;
            plVar23 = *(long **)(lVar13 + 0x50);
            uVar3 = *(undefined4 *)(plVar12[uVar11 + 4] + 0x34);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar21 = Main__HIIJGDANAIK(uVar3,uStack_ac,0);
            if (plVar23 == (long *)0x0) goto LAB_00c429d8;
            (**(code **)(*plVar23 + 0x5a8))(plVar23,uVar21,*(undefined8 *)(*plVar23 + 0x5b0));
          }
          if ((uStack_80 | 2) == 2) {
            if (*(uint *)(plVar12 + 3) <= uVar11) goto LAB_00c429dc;
            if (plVar12[uVar11 + 4] == 0) goto LAB_00c429d8;
            plVar23 = *(long **)(lVar13 + 0x60);
            uVar3 = *(undefined4 *)(plVar12[uVar11 + 4] + 0x30);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar21 = Main__CHJONPOFGFA(uVar3,0);
            if (plVar23 == (long *)0x0) goto LAB_00c429d8;
            (**(code **)(*plVar23 + 0x5a8))(plVar23,uVar21,*(undefined8 *)(*plVar23 + 0x5b0));
          }
          pvVar10 = pvStack_88;
          if (*(uint *)(plVar12 + 3) <= uVar11) goto LAB_00c429dc;
          if (plVar12[uVar11 + 4] == 0) goto LAB_00c429d8;
          iVar4 = *(int *)(plVar12[uVar11 + 4] + 0x18);
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
          lVar19 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if (lVar19 == 0) goto LAB_00c429d8;
          if (iVar4 == *(int *)(lVar19 + 0x10)) {
            if (*(uint *)(plVar12 + 3) <= uVar11) goto LAB_00c429dc;
            lStack_a8 = plVar12[uVar11 + 4];
            RatingEventController__MKACNHEOJKP(pvVar10,lVar13,1,uVar11 & 0xffffffff);
            uVar9 = uStack_80;
            if (acStack_7c[0] != '\0') {
              if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              *(long *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 8) = lStack_a8;
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
              lVar19 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
              if ((lVar19 == 0) ||
                 (pvVar17 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8), pvVar17 == (void *)0x0
                 )) goto LAB_00c429d8;
              pvVar17 = DAFNMLEKHAD__PJDAAMCNMHJ(pvVar17,*(int *)(lVar19 + 0x10));
              uVar9 = uStack_80;
              if (pvVar17 != (void *)0x0) {
                DJKGLJOCFCE__GEBLPKOKIDF(pvVar17,1,0);
                uVar9 = uStack_80;
              }
            }
          }
          else {
            RatingEventController__MKACNHEOJKP(pvVar10,lVar13,0,uVar11 & 0xffffffff);
            uVar9 = uStack_80;
          }
          uStack_80 = uVar9;
          cVar22 = acStack_7c[0];
          if (uVar11 == 0) {
            if (uVar5 < 2) {
              if ((*(long *)(lVar13 + 0x38) == 0) ||
                 (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (*(long *)(lVar13 + 0x38),&lStack_78,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___),
                 lStack_78 == 0)) goto LAB_00c429d8;
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x43eb0000,lStack_78,0,0);
              if (acStack_7c[0] == '\0') {
                UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                          (lVar13,&lStack_78,
                           _Method_UnityEngine_Component_GetComponent_RectTransform___);
                if (lStack_78 == 0) goto LAB_00c429d8;
                UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x442f0000,lStack_78,0,0);
              }
              if (uVar9 == 1) {
                if ((*(long *)(lVar13 + 0x60) == 0) ||
                   (lVar18 = UnityEngine_Component__get_gameObject(*(long *)(lVar13 + 0x60),0),
                   lVar18 == 0)) goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar18,0,0);
                if (*(long *)(lVar13 + 0x50) == 0) goto LAB_00c429d8;
                UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                          (*(long *)(lVar13 + 0x50),&lStack_78,
                           _Method_UnityEngine_Component_GetComponent_RectTransform___);
                lVar18 = lStack_78;
                if (((*(long *)(lVar13 + 0x60) == 0) ||
                    (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                               (*(long *)(lVar13 + 0x60),&lStack_78,
                                _Method_UnityEngine_Component_GetComponent_RectTransform___),
                    lStack_78 == 0)) ||
                   (UnityEngine_RectTransform__get_anchoredPosition(lStack_78,0), lVar18 == 0))
                goto LAB_00c429d8;
                UnityEngine_RectTransform__set_anchoredPosition(lVar18,0);
                if (acStack_7c[0] == '\0') {
                  if (*(long *)(lVar13 + 0x50) == 0) goto LAB_00c429d8;
                  lVar18 = *(long *)(lVar13 + 0x48);
                  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (*(long *)(lVar13 + 0x50),&lStack_78,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___);
                  if (lStack_78 == 0) goto LAB_00c429d8;
                  fVar25 = (float)UnityEngine_RectTransform__get_anchoredPosition(lStack_78,0);
                  if ((*(long *)(lVar13 + 0x48) == 0) ||
                     (UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar13 + 0x48),0),
                     lVar18 == 0)) goto LAB_00c429d8;
                  UnityEngine_RectTransform__set_anchoredPosition(fVar25 + -86.0,lVar18,0);
                  if (acStack_7c[0] == '\0') {
                    if ((*(long *)(lVar13 + 0x58) == 0) ||
                       (lVar18 = UnityEngine_Component__get_gameObject(*(long *)(lVar13 + 0x58),0),
                       lVar18 == 0)) goto LAB_00c429d8;
                    UnityEngine_GameObject__SetActive(lVar18,0,0);
                  }
                }
                if (*(long *)((long)pvVar10 + 0x68) == 0) goto LAB_00c429d8;
                lVar18 = *(long *)((long)pvVar10 + 0x60);
                UnityEngine_RectTransform__get_anchoredPosition(*(long *)((long)pvVar10 + 0x68),0);
                if (lVar18 == 0) goto LAB_00c429d8;
                UnityEngine_RectTransform__set_anchoredPosition(0xc3050000,lVar18,0);
                if (*(long *)((long)pvVar10 + 0x68) == 0) goto LAB_00c429d8;
                lVar18 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar10 + 0x68),0);
                uVar9 = uStack_80;
              }
              else {
                if (uVar9 != 2) goto LAB_00c426ec;
                if ((*(long *)(lVar13 + 0x50) == 0) ||
                   (lVar18 = UnityEngine_Component__get_gameObject(*(long *)(lVar13 + 0x50),0),
                   lVar18 == 0)) goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar18,0,0);
                if ((*(long *)((long)pvVar10 + 0x60) == 0) ||
                   (lVar18 = UnityEngine_Component__get_gameObject
                                       (*(long *)((long)pvVar10 + 0x60),0), lVar18 == 0))
                goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar18,0,0);
                if ((*(long *)((long)pvVar10 + 0x68) == 0) ||
                   (lVar18 = UnityEngine_Component__get_gameObject
                                       (*(long *)((long)pvVar10 + 0x68),0), lVar18 == 0))
                goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar18,1,0);
                lVar18 = lStack_90;
                cVar22 = '\x01';
                if (acStack_7c[0] != '\0') goto LAB_00c423e4;
                if (*(long *)(lVar13 + 0x48) == 0) goto LAB_00c429d8;
                lVar18 = UnityEngine_Component__get_gameObject(*(long *)(lVar13 + 0x48),0);
              }
              if (lVar18 == 0) goto LAB_00c429d8;
              UnityEngine_GameObject__SetActive(lVar18,0,0);
            }
            else if (uVar9 == 0) {
              if ((*(long *)((long)pvVar10 + 0x68) == 0) ||
                 (lVar18 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar10 + 0x68),0),
                 lVar18 == 0)) goto LAB_00c429d8;
              UnityEngine_GameObject__SetActive(lVar18,1,0);
              if ((*(long *)((long)pvVar10 + 0x60) == 0) ||
                 (lVar18 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar10 + 0x60),0),
                 lVar18 == 0)) goto LAB_00c429d8;
              UnityEngine_GameObject__SetActive(lVar18,1,0);
              lVar18 = *(long *)((long)pvVar10 + 0x60);
              if (lVar18 == 0) goto LAB_00c429d8;
              UnityEngine_RectTransform__get_anchoredPosition(lVar18,0);
              UnityEngine_RectTransform__set_anchoredPosition(0xc3820000,lVar18,0);
              uVar9 = uStack_80;
            }
LAB_00c426ec:
            lVar18 = lStack_90;
            cVar22 = acStack_7c[0];
            if (acStack_7c[0] == '\0') {
              if ((*(long *)(lVar13 + 0x20) == 0) ||
                 (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (*(long *)(lVar13 + 0x20),&lStack_78,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___),
                 lVar18 = lStack_90, lStack_78 == 0)) goto LAB_00c429d8;
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x44688000,lStack_78,0,0);
              cVar22 = acStack_7c[0];
            }
          }
        }
      }
LAB_00c423e4:
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x66);
    if ((cVar22 != '\0') ||
       (RatingEventController__IDANHAOJLGJ(pvVar10,lStack_a8), acStack_7c[0] != '\0')) {
      if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(long *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 8) == 0) {
        uVar21 = *puStack_98;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar18 = UnityEngine_Object__Instantiate_object_
                           (lVar18,uVar21,_Method_UnityEngine_Object_Instantiate_GameObject___);
        if (((lVar18 != 0) &&
            (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                       (lVar18,&lStack_78,_Method_UnityEngine_GameObject_GetComponent_GUIRating___),
            lStack_78 != 0)) && (plVar12 = *(long **)(lStack_78 + 0x28), plVar12 != (long *)0x0)) {
          (**(code **)(*plVar12 + 0x5a8))(plVar12,_Str__,*(undefined8 *)(*plVar12 + 0x5b0));
          plVar12 = *(long **)(lStack_78 + 0x50);
          if (plVar12 != (long *)0x0) {
            puVar2 = (undefined8 *)&Str______;
            if (1 < uVar9) {
              puVar2 = (undefined8 *)&Str_;
            }
            (**(code **)(*plVar12 + 0x5a8))(plVar12,*puVar2,*(undefined8 *)(*plVar12 + 0x5b0));
            plVar12 = *(long **)(lStack_78 + 0x60);
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x5a8))(plVar12,_Str______,*(undefined8 *)(*plVar12 + 0x5b0));
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
                lVar18 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
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
                lVar19 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                if ((lVar19 != 0) && (lVar18 != 0)) {
                  uVar21 = BridgePHP__GetCountryTextureFromID
                                     (lVar18,*(undefined4 *)(lVar19 + 0x14),0);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                  }
                  uVar11 = UnityEngine_Object__op_Inequality(uVar21,0,0);
                  if ((uVar11 & 1) != 0) {
                    if (*(long *)(lStack_78 + 0x30) == 0) goto LAB_00c429d8;
                    UnityEngine_UI_Image__set_sprite(*(long *)(lStack_78 + 0x30),uVar21,0);
                  }
                  plVar12 = *(long **)(lStack_78 + 0x38);
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
                  if ((lVar18 != 0) && (plVar12 != (long *)0x0)) {
                    (**(code **)(*plVar12 + 0x5a8))
                              (plVar12,*(undefined8 *)(lVar18 + 0x20),
                               *(undefined8 *)(*plVar12 + 0x5b0));
                    plVar12 = *(long **)(lStack_78 + 0x40);
                    if (plVar12 != (long *)0x0) {
                      (**(code **)(*plVar12 + 0x5a8))
                                (plVar12,_Str______,*(undefined8 *)(*plVar12 + 0x5b0));
                      RatingEventController__MKACNHEOJKP(pvStack_88,lStack_78,1,0xffffffff);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LAB_00c429d8:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
  }
  return;
}



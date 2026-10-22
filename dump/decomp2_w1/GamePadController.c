// ==== public void PKDDGJPLNAP() { }   @0xb56078

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__PKDDGJPLNAP(void *__this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 extraout_s0;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  if ((bRam00000000019171a1 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam00000000019171a1 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0)) ||
      (lVar7 = *(long *)(lVar7 + 0x170), lVar7 == 0)) ||
     (lVar7 = UnityEngine_Component__get_gameObject(lVar7,0), lVar7 == 0)) {
LAB_00c561a4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar5 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
      (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0)) ||
     ((lVar7 = *(long *)(lVar7 + 0x268), lVar7 == 0 ||
      (lVar7 = UnityEngine_Component__get_gameObject(lVar7,0), lVar7 == 0)))) goto LAB_00c561a4;
  uVar5 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Menu_TypeInfo);
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
     (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0)) goto LAB_00c561a4;
  if ((uVar5 & 1) == 0) {
    lVar7 = *(long *)(lVar7 + 0x280);
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x268);
  }
  if (lVar7 == 0) goto LAB_00c561a4;
  plVar6 = (long *)UnityEngine_Component__get_gameObject(lVar7,0);
  if ((bRam00000000019171a4 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___);
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
  uVar5 = UnityEngine_Object__op_Equality(plVar6,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c55ff4;
  uVar9 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0)) ||
        (lVar7 = *(long *)(lVar7 + 0x150), lVar7 == 0)) ||
       (lVar7 = UnityEngine_Component__get_gameObject(lVar7,0), lVar7 == 0)) goto LAB_00c55ff4;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
  GamePadController__DJHKBCNIBNG(__this);
  uVar9 = _Str_SetButton__;
  if (plVar6 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
  }
  uVar1 = _Str___last__;
  plVar3 = *(long **)((long)__this + 0x38);
  if (plVar3 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  }
  uVar9 = System_String__Concat(uVar9,uVar2,uVar1,uVar4,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar9,0,0);
  *(long **)((long)__this + 0x38) = plVar6;
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar7 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (lVar7 == 0) goto LAB_00c55ff4;
  UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(lVar7,plVar6,0);
  uVar10 = UnityEngine_Time__get_realtimeSinceStartup(0);
  *(undefined4 *)((long)__this + 0x58) = uVar10;
  if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c55ff4;
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
            (*(long *)((long)__this + 0x28),&plStack_a8,
             _Method_System_Collections_Generic_List_MLCNINCNANA__GetEnumerator__);
  uStack_88 = uStack_a0;
  plStack_90 = plStack_a8;
  uStack_80 = uStack_98;
  do {
    do {
      uVar5 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                        (&plStack_90,
                         _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__)
      ;
      if ((uVar5 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                  (&plStack_90,
                   _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
        lVar7 = func_0x00a67b44(_MLCNINCNANA_TypeInfo);
        MLCNINCNANA___ctor(lVar7,0);
        *(long *)((long)__this + 0x20) = lVar7;
        if ((lVar7 == 0) || (*(long **)(lVar7 + 0x10) = plVar6, plVar6 == (long *)0x0))
        goto LAB_00c55ff4;
        uVar9 = UnityEngine_Object__get_name(plVar6,0);
        uVar5 = GamePadController__EODAOKKOJLL(uVar9,uVar9);
        lVar7 = *(long *)((long)__this + 0x20);
        if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) goto LAB_00c55ff4;
        lVar8 = UnityEngine_GameObject__get_transform(*(long *)(lVar7 + 0x10),0);
        if ((uVar5 & 1) != 0) {
          if (lVar8 == 0) goto LAB_00c55ff4;
          lVar8 = UnityEngine_Transform__get_parent(lVar8,0);
        }
        *(long *)(lVar7 + 0x20) = lVar8;
        lVar7 = *(long *)((long)__this + 0x20);
        if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) goto LAB_00c55ff4;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (*(long *)(lVar7 + 0x10),&plStack_a8,
                   _Method_UnityEngine_GameObject_GetComponent_Button___);
        *(long **)(lVar7 + 0x18) = plStack_a8;
        lVar7 = *(long *)((long)__this + 0x20);
        if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) goto LAB_00c55ff4;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (*(long *)(lVar7 + 0x10),&plStack_a8,
                   _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
        *(long **)(lVar7 + 0x28) = plStack_a8;
        lVar7 = *(long *)((long)__this + 0x20);
        if (((lVar7 == 0) || (*(long *)(lVar7 + 0x20) == 0)) ||
           (lVar8 = UnityEngine_Object__get_name(*(long *)(lVar7 + 0x20),0), lVar8 == 0))
        goto LAB_00c55ff4;
        uVar5 = System_String__Contains(lVar8,_Str_lvl_,0);
        uVar15 = 0x3f800000;
        uVar13 = 0x3f800000;
        uVar10 = 0x3f800000;
        if ((uVar5 & 1) == 0) {
          if ((*(long *)((long)__this + 0x20) == 0) ||
             (lVar8 = *(long *)(*(long *)((long)__this + 0x20) + 0x20), lVar8 == 0))
          goto LAB_00c55ff4;
          uVar10 = UnityEngine_Transform__get_localScale(lVar8,0);
        }
        *(undefined4 *)(lVar7 + 0x30) = uVar10;
        *(undefined4 *)(lVar7 + 0x34) = uVar13;
        *(undefined4 *)(lVar7 + 0x38) = uVar15;
        lVar7 = *(long *)((long)__this + 0x20);
        if ((lVar7 == 0) || (*(long *)(lVar7 + 0x28) == 0)) goto LAB_00c55ff4;
        uVar9 = UnityEngine_RectTransform__get_pivot(*(long *)(lVar7 + 0x28),0);
        *(undefined4 *)(lVar7 + 0x3c) = extraout_s0;
        *(undefined4 *)(lVar7 + 0x40) = uVar13;
        uVar5 = GamePadController__PJOJJBEIFAE(uVar9,*(undefined8 *)((long)__this + 0x20));
        if ((uVar5 & 1) == 0) {
          lVar7 = *(long *)((long)__this + 0x20);
          if ((lVar7 == 0) || (*(long *)(lVar7 + 0x28) == 0)) goto LAB_00c55ff4;
          uVar10 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar7 + 0x28),0);
          *(undefined4 *)(lVar7 + 0x44) = uVar10;
          *(undefined4 *)(lVar7 + 0x48) = uVar13;
        }
        if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c55ff4;
        func_0x00b7fe44(*(long *)((long)__this + 0x28),*(undefined8 *)((long)__this + 0x20),
                        _Method_System_Collections_Generic_List_MLCNINCNANA__Add__);
        goto LAB_00c55e20;
      }
      func_0x00b947ec(&plStack_90,&lStack_78,
                      _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__)
      ;
      lVar7 = lStack_78;
    } while (lStack_78 == 0);
    uVar9 = *(undefined8 *)(lStack_78 + 0x10);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar9,plVar6,0);
  } while ((uVar5 & 1) == 0);
  *(long *)((long)__this + 0x20) = lVar7;
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
            (&plStack_90,_Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
LAB_00c55e20:
  if (*(long *)((long)__this + 0x20) == 0) {
    return;
  }
  lVar7 = *(long *)(*(long *)((long)__this + 0x20) + 0x28);
  if (lVar7 == 0) goto LAB_00c55ff4;
  fVar11 = (float)UnityEngine_RectTransform__get_pivot(lVar7,0);
  fVar14 = 0.5;
  if (fVar11 == 0.5) {
    if ((*(long *)((long)__this + 0x20) == 0) ||
       (lVar7 = *(long *)(*(long *)((long)__this + 0x20) + 0x28), lVar7 == 0)) goto LAB_00c55ff4;
    UnityEngine_RectTransform__get_pivot(lVar7,0);
    if (fVar14 != 0.5) goto LAB_00c55e68;
  }
  else {
LAB_00c55e68:
    if ((*(long *)((long)__this + 0x20) == 0) ||
       (lVar7 = *(long *)(*(long *)((long)__this + 0x20) + 0x28), lVar7 == 0)) goto LAB_00c55ff4;
    fVar11 = 0.5;
    UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,lVar7,0);
    lVar7 = *(long *)((long)__this + 0x20);
    if ((lVar7 == 0) || (lVar8 = *(long *)(lVar7 + 0x28), lVar8 == 0)) goto LAB_00c55ff4;
    fVar16 = *(float *)(lVar7 + 0x44);
    fVar14 = (float)UnityEngine_RectTransform__get_sizeDelta(lVar8,0);
    lVar7 = *(long *)((long)__this + 0x20);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x28) == 0)) goto LAB_00c55ff4;
    fVar18 = *(float *)(lVar7 + 0x3c);
    fVar20 = *(float *)(lVar7 + 0x30);
    fVar19 = *(float *)(lVar7 + 0x44);
    fVar17 = *(float *)(lVar7 + 0x48);
    UnityEngine_RectTransform__get_sizeDelta(*(long *)(lVar7 + 0x28),0);
    lVar7 = *(long *)((long)__this + 0x20);
    if (lVar7 == 0) goto LAB_00c55ff4;
    fVar12 = ABS(fVar18 + -0.5);
    fVar18 = fVar14 * fVar12;
    if (fVar19 < 0.0) {
      fVar18 = -(fVar14 * fVar12);
    }
    fVar19 = ABS(*(float *)(lVar7 + 0x40) + -0.5);
    fVar14 = fVar11 * fVar19;
    if (*(float *)(lVar7 + 0x48) < 0.0) {
      fVar14 = -(fVar11 * fVar19);
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (fVar16 + ABS(fVar20) * fVar18,fVar17 + ABS(*(float *)(lVar7 + 0x34)) * fVar14,lVar8,0
              );
  }
  if ((*(long *)((long)__this + 0x20) != 0) &&
     (lVar7 = *(long *)(*(long *)((long)__this + 0x20) + 0x10), lVar7 != 0)) {
    uVar9 = UnityEngine_Object__get_name(lVar7,0);
    uVar5 = GamePadController__EODAOKKOJLL(uVar9,uVar9);
    if ((uVar5 & 1) != 0) {
      if ((*(long *)((long)__this + 0x20) == 0) ||
         (lVar7 = *(long *)(*(long *)((long)__this + 0x20) + 0x20), lVar7 == 0)) goto LAB_00c55ff4;
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (lVar7,&plStack_a8,_Method_UnityEngine_Component_GetComponent_Image___);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(plStack_a8,0,0);
      if ((uVar5 & 1) != 0) {
        if (plStack_a8 == (long *)0x0) goto LAB_00c55ff4;
        (**(code **)(*plStack_a8 + 0x2a8))
                  (*(undefined4 *)((long)__this + 0x6c),*(undefined4 *)((long)__this + 0x70),
                   *(undefined4 *)((long)__this + 0x74),*(undefined4 *)((long)__this + 0x78),
                   plStack_a8,*(undefined8 *)(*plStack_a8 + 0x2b0));
      }
    }
    return;
  }
LAB_00c55ff4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Awake() { }   @0xb56a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__Awake(void *__this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 auStack_128 [72];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  
  if ((bRam00000000019171a6 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam00000000019171a6 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  bVar7 = Main__KCHOEBEIOCE();
  if (bVar7) {
LAB_00c56b04:
    *(undefined2 *)((long)__this + 0x30) = 0x101;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    Menu__FMEHJALLGBK((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
  }
  else {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iVar13 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
    if (iVar13 == 9) goto LAB_00c56b04;
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      iVar13 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
    }
    if (iVar13 == 0xb) goto LAB_00c56b04;
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      iVar13 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
    }
    if (iVar13 == 0xc) goto LAB_00c56b04;
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      iVar13 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
    }
    if (iVar13 == 0xd) goto LAB_00c56b04;
  }
  if ((bRam000000000191719e & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_UI_ColorBlock_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponentsInChildren_Button___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_color__);
    func_0x00a67900(&Str_ChangeButtonSelectedColor__IsGamePadInpu);
    func_0x00a67900(&Str___gui_object__);
    func_0x00a67900(&Str_back_button);
    bRam000000000191719e = 1;
  }
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c5371c;
  uVar14 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  if ((uVar8 & 1) == 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c5371c;
    uVar14 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    plVar10 = (long *)0x0;
    if ((uVar8 & 1) != 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c5371c;
      lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
      goto joined_r0x00c533d4;
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c5371c;
    lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
joined_r0x00c533d4:
    if (lVar9 == 0) goto LAB_00c5371c;
    plVar10 = (long *)UnityEngine_Component__get_gameObject(lVar9,0);
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(plVar10,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(char *)((long)__this + 0x30) == '\0') {
      uVar17 = 0x3f800000;
      uVar18 = 0x3f800000;
      uVar19 = 0x3f800000;
      uVar20 = 0x3f800000;
    }
    else {
      uVar20 = *(undefined4 *)((long)__this + 0x5c);
      uVar19 = *(undefined4 *)((long)__this + 0x60);
      uVar18 = *(undefined4 *)((long)__this + 100);
      uVar17 = *(undefined4 *)((long)__this + 0x68);
    }
    uStack_98 = CONCAT44(uVar19,uVar20);
    uStack_90 = CONCAT44(uVar17,uVar18);
    uVar14 = func_0x00c57430(&uStack_98,0,0,0);
    uVar14 = System_String__Concat(_Str_color__,uVar14,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__GEMDEAMAGPG(uVar14,0,0);
    if ((plVar10 == (long *)0x0) ||
       (lVar9 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                          (plVar10,1,
                           _Method_UnityEngine_GameObject_GetComponentsInChildren_Button___),
       lVar9 == 0)) {
LAB_00c5371c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar4 = *(uint *)(lVar9 + 0x18);
    if (0 < (int)uVar4) {
      uVar16 = 0;
      do {
        if (uVar4 <= uVar16) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar15 = *(long *)(lVar9 + (long)(int)uVar16 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_00c5371c;
        if (*(int *)(lVar15 + 0x28) == 0) {
          uVar14 = UnityEngine_Object__get_name(lVar15,0);
          uVar8 = System_String__op_Inequality(uVar14,_Str_back_button,0);
          if ((uVar8 & 1) == 0) goto LAB_00c53524;
        }
        else {
LAB_00c53524:
          uVar14 = UnityEngine_Object__get_name(lVar15,0);
          uVar8 = GamePadController__EODAOKKOJLL(uVar14,uVar14);
          if ((uVar8 & 1) == 0) {
            func_0x016decc0(&uStack_e0,lVar15 + 100,0x48);
            if (*(int *)(_UnityEngine_UI_ColorBlock_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uStack_138 = uVar20;
            uStack_134 = uVar19;
            uStack_130 = uVar18;
            uStack_12c = uVar17;
            func_0x016decc0(auStack_128,&uStack_e0,0x48);
            UnityEngine_UI_Selectable__set_colors(lVar15,&uStack_138,0);
          }
          else {
            lVar15 = UnityEngine_Component__get_transform(lVar15,0);
            if ((lVar15 == 0) || (lVar15 = UnityEngine_Transform__get_parent(lVar15,0), lVar15 == 0)
               ) goto LAB_00c5371c;
            UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                      (lVar15,&plStack_88,_Method_UnityEngine_Component_GetComponent_Image___);
            plVar6 = plStack_88;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar8 = UnityEngine_Object__op_Inequality(plVar6,0,0);
            if ((uVar8 & 1) != 0) {
              if (plVar6 == (long *)0x0) goto LAB_00c5371c;
              bVar7 = *(char *)((long)__this + 0x30) != '\0';
              lVar15 = 0x6c;
              if (bVar7) {
                lVar15 = 0x7c;
              }
              lVar1 = 0x70;
              if (bVar7) {
                lVar1 = 0x80;
              }
              lVar2 = 0x74;
              if (bVar7) {
                lVar2 = 0x84;
              }
              lVar3 = 0x78;
              if (bVar7) {
                lVar3 = 0x88;
              }
              (**(code **)(*plVar6 + 0x2a8))
                        (*(undefined4 *)((long)__this + lVar15),
                         *(undefined4 *)((long)__this + lVar1),*(undefined4 *)((long)__this + lVar2)
                         ,*(undefined4 *)((long)__this + lVar3),plVar6,
                         *(undefined8 *)(*plVar6 + 0x2b0));
            }
          }
        }
        uVar4 = *(uint *)(lVar9 + 0x18);
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < (int)uVar4);
    }
  }
  GamePadController__HFPFJNKNJND(__this);
  if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = System_Boolean__ToString((long)__this + 0x30,0);
  uVar5 = _Str_ChangeButtonSelectedColor__IsGamePadInpu;
  uVar14 = _Str___gui_object__;
  if (plVar10 == (long *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
  }
  uVar14 = System_String__Concat(uVar5,uVar11,uVar14,uVar12,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar14,0,0);
  return;
}


// ==== private bool FEGHHAKCEIG() { }   @0xb56390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GamePadController__FEGHHAKCEIG(void *__this)

{
  undefined8 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  float fVar4;
  
  if ((bRam00000000019171ab & 1) == 0) {
    func_0x00a67900(&Str_Fire_Keyboard);
    func_0x00a67900(&Str_Accel_Keyboard);
    func_0x00a67900(&Str_Titl_Keyboard);
    func_0x00a67900(&Str_Nitro_Keyboard);
    bRam00000000019171ab = 1;
  }
  uVar3 = UnityEngine_Input__GetMouseButton(0,0);
  if (((((uVar3 & 1) == 0) && (uVar3 = UnityEngine_Input__GetMouseButton(1,0), (uVar3 & 1) == 0)) &&
      (uVar3 = UnityEngine_Input__GetMouseButton(2,0), (uVar3 & 1) == 0)) &&
     (((fVar4 = (float)UnityEngine_Input__GetAxisRaw(_Str_Accel_Keyboard,0), fVar4 == 0.0 &&
       (fVar4 = (float)UnityEngine_Input__GetAxisRaw(_Str_Titl_Keyboard,0), fVar4 == 0.0)) &&
      (uVar3 = UnityEngine_Input__GetButton(_Str_Nitro_Keyboard,0), uVar1 = _Str_Fire_Keyboard,
      (uVar3 & 1) == 0)))) {
    if (pcRam000000000191d2d0 == (code *)0x0) {
      pcRam000000000191d2d0 = (code *)func_0x00a678c4(&UNK_005a78ce);
    }
                    /* WARNING: Could not recover jumptable at 0x014c822c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*pcRam000000000191d2d0)(uVar1);
    return (bool)uVar2;
  }
  return true;
}


// ==== private bool GDCKFJKBEOE() { }   @0xb561a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GamePadController__GDCKFJKBEOE(void *__this)

{
  bool bVar1;
  ulong uVar2;
  float fVar3;
  
  if ((bRam00000000019171b0 & 1) == 0) {
    func_0x00a67900(&Str_JoyVertical);
    func_0x00a67900(&Str_LB);
    func_0x00a67900(&Str_Back);
    func_0x00a67900(&Str_Accel);
    func_0x00a67900(&Str_RB);
    func_0x00a67900(&Str_Start);
    func_0x00a67900(&Str_JoyHorizontal);
    func_0x00a67900(&Str_B);
    func_0x00a67900(&Str_Y);
    func_0x00a67900(&Str_X);
    func_0x00a67900(&Str_A);
    bRam00000000019171b0 = 1;
  }
  uVar2 = UnityEngine_Input__GetButtonDown(_Str_A,0);
  if (((((((uVar2 & 1) != 0) ||
         (uVar2 = UnityEngine_Input__GetButtonDown(_Str_B,0), (uVar2 & 1) != 0)) ||
        (uVar2 = UnityEngine_Input__GetButtonDown(_Str_X,0), (uVar2 & 1) != 0)) ||
       ((uVar2 = UnityEngine_Input__GetButtonDown(_Str_Y,0), (uVar2 & 1) != 0 ||
        (uVar2 = UnityEngine_Input__GetButtonDown(_Str_LB,0), (uVar2 & 1) != 0)))) ||
      ((uVar2 = UnityEngine_Input__GetButtonDown(_Str_RB,0), (uVar2 & 1) != 0 ||
       ((uVar2 = UnityEngine_Input__GetButtonDown(_Str_Back,0), (uVar2 & 1) != 0 ||
        (uVar2 = UnityEngine_Input__GetButtonDown(_Str_Start,0), (uVar2 & 1) != 0)))))) ||
     ((fVar3 = (float)UnityEngine_Input__GetAxis(_Str_JoyHorizontal,0), 0.5 < ABS(fVar3) ||
      ((fVar3 = (float)UnityEngine_Input__GetAxis(_Str_JoyVertical,0), 0.5 < ABS(fVar3) ||
       (fVar3 = (float)UnityEngine_Input__GetAxisRaw(_Str_Accel,0), 0.5 < ABS(fVar3))))))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


